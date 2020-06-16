#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

std::string prompt(const std::string& text) {
	cout << text << endl;		
	std::string input;
	getline(cin, input);
	return input;
}

int generateSolution() {
	srand (time(NULL));
	return rand() % 100 + 1;
}

bool playGameWithSolution(int solution) {
	cout << "You have 10 tries to guess my number between 1 and 100." << endl;

	for (int i = 0; i < 10; i++) {
		int guess = stoi(prompt("What's your guess?"));

		if (guess < solution) {
			cout << "My number is bigger." << endl;
		} else if (guess > solution) {
			cout << "My number is smaller." << endl;
		} else {
			cout << "That's it. You guessed it." << endl;
			return true;
		}
	}

	return false;
}

bool promptRematch() {
	return prompt("Do you want to play another round?") == "yes";
}

int main() {
	bool running = true;
	while (running) {
		if (!playGameWithSolution(generateSolution())) {
			cout << "Ohh you didn't guess it. :(" << endl;
		}
		running = promptRematch();
	} 
	
	return 0;
}