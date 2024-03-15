//Homework 13: Is prefix

#include <iostream>
using namespace std;
bool is_prefix(string main, string prefix, int start_pos = 0)
{
	if (start_pos == prefix.size())
		return true;
	if (main[start_pos] != prefix[start_pos])
		return false;
	return is_prefix(main, prefix, start_pos + 1);
}
int main()
{
	string main;
	cin >> main;
	string prefix;
	cin >> prefix;
	if (is_prefix(main, prefix))
		cout << "True";
	else
		cout << "False";
}

