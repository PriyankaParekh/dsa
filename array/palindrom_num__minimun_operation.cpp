#include <iostream>
using namespace std;
   
    bool isPalindrome(int num)
{
    int temp = num;
    int reversed = 0;

    while (temp)
    {
        int rem = temp % 10;
        reversed = (reversed * 10) + rem;
        temp = temp / 10;
    }

    return num == reversed;
}

int PalinArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!isPalindrome(arr[i]))
        {
                return 0;
        }
    }

    return 1;
}

int main()
{
    int n, arr[20];
    cout << "Please enter the length of the array: ";
    cin >> n;
    cout << "Please enter the array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (PalinArray(arr, n))
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }

    return 0;
}

