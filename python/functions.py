import sys
import random


def prompt(text):
	print(text)
	return sys.stdin.readline().strip()

def generateSolution():
	return random.randint(1, 100)


def playGameWithSolution(solution):
	print("You have 10 tries to guess my number between 1 and 100.")

	for i in range(10):
		guess = int(prompt("[%d/10] What's your guess?" % (i+1)))	

		if guess < solution:
			print("My number is bigger.");
		elif guess > solution:
			print("My number is smaller.");
		else:
			print("That's it. You guessed it.");
			return True

	return False


def promptRematch():
	return prompt("Do you want to play another round? ") == "yes"


running = True
while running:
	if not playGameWithSolution(generateSolution()):
		print("Ohh you didn't guessed it. :(")

	running = promptRematch()
