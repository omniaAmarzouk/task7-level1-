//Homework 9: Right-Max

#include <iostream>
#include <algorithm>
using namespace std;
void left_max(int arr[], int len, int start_position = 0)
{
    if (arr[start_position] == *max_element(arr, arr + len))
        return;
    left_max(arr, len, start_position+1);
    arr[start_position] = *max_element(arr, arr + len);
}
int main()
{
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    left_max(arr, n, 0);
    for (int i = 0; i < n; ++i)
        cout << arr[i]<<" ";
}

