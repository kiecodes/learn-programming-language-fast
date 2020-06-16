import sys
import random

running = True

while running:
	solution = random.randint(1, 100)
	correct = False

	print("You have 10 tries to guess my number between 1 and 100.")

	for i in range(10):
		print("[%d/10] What's your guess?" % (i+1))
		guess = int(sys.stdin.readline())

		if guess < solution:
			print("My number is bigger.");
		elif guess > solution:
			print("My number is smaller.");
		else:
			correct = True
			print("That's it. You guessed it.");
			break

	if not correct:
		print("Ohh you didn't guessed it. :(")

	print("Do you want to play another round?")
	running = sys.stdin.readline().strip() == "yes"
