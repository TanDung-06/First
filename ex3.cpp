#include<iostream>
using namespace std;

void generateBinaryStrings(int n, string str);
int main() {
	unsigned int a;
	string str;
	cout << "Length n: ";
	cin >> a;
	generateBinaryStrings(a, str);
	system("pause");
	return 0;
}

void generateBinaryStrings(int n, string str) {
	if (str.length() == n) {
		cout << str << endl;
		return;
	}

	generateBinaryStrings(n, str + "0");
	generateBinaryStrings(n, str + "1");
}