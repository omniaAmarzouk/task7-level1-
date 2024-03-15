// Homework 12: Is Palindrome

#include <iostream>
using namespace std;
bool  is_palindorme(int arr[], int len, int i = 0)
{
	if (i >= len)
		return true;
	if (arr[i] != arr[len - i - 1])
		return false;
	return is_palindorme(arr, len, i + 1);
	
}
int main()
{
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	cout<<is_palindorme(arr, n);
}