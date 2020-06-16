import Foundation

print("You have 10 tries to guess my number between 1 and 100.")

let solution = Int.random(in: 1...100)

for i in 1...10 {
	print("[\(i)/10] What's your guess?")	
	let guess = Int(readLine() ?? "0") ?? 0

	if guess < solution {
		print("My number is bigger.")
	} else if guess > solution {
		print("My number is smaller.")
	} else {
		print("That's it. You guessed it.")
		exit(0)
	}
}

print("Ohh you didn't guess it. :(")
exit(1)
