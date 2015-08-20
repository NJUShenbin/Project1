#include<iostream>

using namespace std;



int main() {

	

	char ch;
	int count = 0;

	cout << "Enter characters;" << endl;
	cin.get(ch);

	while (ch != '#') {
		cout << ch;
		count++;
		cin.get(ch);
	
	}
	
	cout << fixed;
	cin.get();
	cin.get();
	return 0;


}

