// npm install prompt-sync
const prompt = require('prompt-sync')();

var running = true;

 while (running) {
 	const solution = Math.floor(Math.random() * 100) + 1;
 	var correct = false;

	console.log("You have 10 tries to guess my number between 1 and 100.\n");
	
	for (let i = 0; i < 10; i++) {
		let guess = prompt(`[${i}/10] What's your guess? `);
		if (guess < solution) {
			console.log("My number is bigger.");
		} else if (guess > solution) {
			console.log("My number is smaller.");
		} else {
			correct = true
			console.log("That's it. You guessed it.");
			break;
		}
	}

	if (!correct) {
		console.log("Ohh you didn't guessed it. :(")
	}

	running = prompt("Do you want to play another round? ") == "yes"
 }