#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
	bool running = true;
	while (running) {
		srand (time(NULL));
		const int solution = rand() % 100 + 1;

		bool correct = false;

		cout << "You have 10 tries to guess my number between 1 and 100." << endl;

		for (int i = 1; i <= 10; i++) {
			cout << "[" << i << "/10] What's your guess?" << endl;

			string input;
			getline(cin, input);
			int guess = stoi(input);

			if (guess < solution) {
				cout << "My number is bigger." << endl;
			} else if (guess > solution) {
				cout << "My number is smaller." << endl;
			} else {
				correct = true;
				cout << "That's it. You guessed it." << endl;
				break;
			}
		}

		if (!correct) {
			cout << "Ohh you didn't guess it. :(" << endl;
		}

		cout << "Do you want to play another round?" << endl;
		string continueGame;
		getline(cin, continueGame);

		running = continueGame == "yes";
	} 
	
	return 0;
}