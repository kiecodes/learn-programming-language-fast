// npm install prompt-sync
const prompt = require('prompt-sync')();


function generateSolution() {
	return Math.floor(Math.random() * 100) + 1;
}

function playGameWithSolution(solution) {
	console.log("You have 10 tries to guess my number between 1 and 100.\n");

	for (let i = 0; i < 10; i++) {
		let guess = prompt(`[${i}/10] What's your guess? `);
		if (guess < solution) {
			console.log("My number is bigger.");
		} else if (guess > solution) {
			console.log("My number is smaller.");
		} else {
			console.log("That's it. You guessed it.");
			return true;
		}
	}

	return false
}

function promptRematch() {
	return prompt("Do you want to play another round? ") == "yes"
}

var running = true;
while (running) {
	if (!playGameWithSolution(generateSolution())) {
		console.log("Ohh you didn't guessed it. :(")
	}

	running = promptRematch()
}