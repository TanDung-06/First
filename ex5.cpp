#include<iostream>
using namespace std;

bool Sort(int a[], int n);
int main() {
	int arr[] = { 1,2,3,4,5,2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (Sort(arr, n))
		cout << "Mang da sap xep! " << endl;
	else
		cout << "Mang chua sap xep! " << endl;
	system("pause");
	return 0;
}

bool Sort(int a[], int n) {
	if (n == 0 or n == 1)    
		return true;
	if (a[0] > a[1])      
		return false;

	return Sort(a + 1, n - 1);
}