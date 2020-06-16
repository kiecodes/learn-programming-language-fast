#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "what is your name?" << endl;
	string name;
	getline(cin, name);
	cout << "hello " << name << endl;
	return 0;
}