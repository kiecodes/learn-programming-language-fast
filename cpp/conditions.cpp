#include <iostream>
#include <string>

using namespace std;

int main() {
	string answer;

	cout << "SHALL WE PLAY A GAME?" << endl;
	getline(cin, answer);
	if (answer == "yes") {
		cout << "HOW ABOUT A NICE GAME OF CHESS?" << endl;	
	} else {
		cout << "OKAY THEN!" << endl;	
	}
	
	return 0;
}