#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
	srand (time(NULL));
	const int solution = rand() % 100 + 1;
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
			cout << "That's it. You guessed it." << endl;
			return 0;
		}
	}
	
	cout << "Ohh you didn't guess it. :(" << endl;
	return 1;
}