import Foundation

func prompt(text: String) -> String {
	print(text)
	return readLine() ?? ""
}

func generateSolution() -> Int {
	return Int.random(in: 1...100)
}

func playGame(withSolution solution: Int) -> Bool {
	print("You have 10 tries to guess my number between 1 and 100.")

	for _ in 1...10 {
		let guess = Int(prompt(text: "What's your guess?")) ?? 0

		if guess < solution {
			print("My number is bigger.")
		} else if guess > solution {
			print("My number is smaller.")
		} else {
			print("That's it. You guessed it.")
			return true
		}
	}
	return false
}

func promptRematch() -> Bool {
	return prompt(text: "Do you want to play another round?") == "yes"
}

var running = true
while running {
	if !playGame(withSolution: generateSolution()) {
		print("Ohh you didn't guess it. :(")	
	}
	running = promptRematch()
}
