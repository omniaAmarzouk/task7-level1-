//Homework 14: Trace

#include <iostream>
using namespace std;
void do_something(int n) {
	if (n) {
		cout << n % 10;
		do_something(n / 10);
	}
}
int main()
{
	do_something(123456); //654321
	return 0;
}