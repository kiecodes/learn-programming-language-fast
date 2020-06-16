import sys

print("SHALL WE PLAY A GAME?")
answer = sys.stdin.readline()
if answer.strip() == "yes":
	print("HOW ABOUT A NICE GAME OF CHESS?")
else:
	print("OKAY THEN!")
