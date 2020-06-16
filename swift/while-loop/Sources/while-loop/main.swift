import Foundation

var running = true

while running {
	print("You have 10 tries to guess my number between 1 and 100.")

	let solution = Int.random(in: 1...100)
	var correct = false

	for _ in 1...10 {
		print("What's your guess?")	
		let guess = Int(readLine() ?? "0") ?? 0

		if guess < solution {
			print("My number is bigger.")
		} else if guess > solution {
			print("My number is smaller.")
		} else {
			correct = true
			print("That's it. You guessed it.")
			break
		}
	}

	if !correct {
		print("Ohh you didn't guess it. :(")	
	}

	print("Do you want to play another round?")
	running = readLine() ?? "" == "yes"
}
