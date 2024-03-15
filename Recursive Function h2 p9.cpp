//Homework 17: Fibonacci

#include <iostream>
using namespace std;
int fibonacci(int n)
{
	if (n <=1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	int n;
	cin >> n;
	cout << fibonacci(n); // we can find fib(40)& can't find fib(50).
}

