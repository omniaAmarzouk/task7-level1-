//Homework 11: Prefix Sum

#include <iostream>
using namespace std;
int suffix_sum(int arr[], int i, int n)
{
	if (n == 0)
		return 0;
	return arr[n-1] + suffix_sum(arr, i, n - 1);
}
int main()
{
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	int l;
	cin >> l;
	cout << suffix_sum(arr, n, l);
}

