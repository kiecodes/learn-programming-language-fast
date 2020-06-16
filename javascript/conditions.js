// npm install prompt-sync
const prompt = require('prompt-sync')();

const answer = prompt("SHALL WE PLAY A GAME? ");
if (answer == "yes") {
	console.log("HOW ABOUT A NICE GAME OF CHESS?\n")
} else {
	console.log("OKAY THEN!\n")
}
