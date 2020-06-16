import sys
import random

solution = random.randint(1, 100)

print("You have 10 tries to guess my number between 1 and 100.")

for i in range(10):
	print("[%d/10] What's your guess?" % (i+1))
	guess = int(sys.stdin.readline())

	if guess < solution:
		print("My number is bigger.");
	elif guess > solution:
		print("My number is smaller.");
	else:
		print("That's it. You guessed it.");
		exit(0)

print("Ohh you didn't guess it. :(")
exit(1)
