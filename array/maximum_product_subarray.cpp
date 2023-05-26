#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], mul=0, max = -3267, s = 0;
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
        int mul = 1;
        for (int j = i; j < n+1; j++){
        mul = mul * arr[j];
        if (max < mul)
        {
            max = mul;
        }
        
        }
    }
    cout << "Max Product Subarray sum is: " << max;
    return 0;
}
