#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << n/64%2;
	cout << n/32%2;
	cout << n/16%2;
	cout << n/8%2;
	cout << n/4%2;
	cout << n/2%2;
	cout << n%2;
	return 0;
}