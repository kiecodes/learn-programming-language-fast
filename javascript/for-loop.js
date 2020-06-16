// npm install prompt-sync
const prompt = require('prompt-sync')();

const solution = Math.floor(Math.random() * 100) + 1;

console.log("You have 10 tries to guess my number between 1 and 100.\n");
for (let i = 1; i <= 10; i++) {
	let guess = prompt(`[${i}/10] What's your guess? `);
	if (guess < solution) {
		console.log("My number is bigger.");
	} else if (guess > solution) {
		console.log("My number is smaller.");
	} else {
		console.log("That's it. You guessed it.");
		process.exit(0);
	}
}

process.exit(1)
