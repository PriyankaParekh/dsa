#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j;
    int arr[100], n;
    cout << "please enter the array length: ";
    cin >> n;

    cout << "Please enter the array elements: ";
    for (int i = 1; i < n + 1; i++)
    {
        cin >> arr[i];
    }

    for (j = 1; j < n + 1; j++)
    {
        if (arr[j] == j)
        {
            cout << arr[j]<<" ";
        }
        else
        {
            break;
        }
    }
    cout<<endl<<j-1;

    return 0;
}