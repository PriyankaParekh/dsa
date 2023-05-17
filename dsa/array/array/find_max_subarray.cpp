#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], arrsum=0, max = -3267, s = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Please enter the lengh of array: ";
    cin >> n;
    cout << "Please enter the array elements: ";
    for (int i = 1; i < n + 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n + 1; i++)
    {
        int arrsum = 0;
        for (int j = i; j < n+1; j++){
        arrsum = arrsum + arr[j];
        if (max < arrsum)
        {
            max = arrsum;
        }
        
        }
    }
    cout << "Max Subarray sum is: " << max;
    return 0;
}