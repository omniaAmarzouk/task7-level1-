// Homework 15: Count primes

#include <iostream>
using namespace std;
bool is_prime(int start, int cnt = 3)
{
	if (start == 2)
		return 1;
	if (start <= 1 || start % 2 == 0)
		return 0;
	if (start == cnt)
		return 1;
	if (start % cnt == 0)
		return 0;
	is_prime(start, cnt + 1);
}

int
count_primes(int start, int end)
{
	if (start > end)
		return 0;
	int res = count_primes(start + 1, end);
	if (is_prime(start))
		res++;
	return res;
}

int main()
{
	int start, end;
	cin >> start >> end;
	cout << count_primes(start, end);
}