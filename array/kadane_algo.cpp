#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max = -3267, arrsum = 0;
    for (int i = 1; i < size+1; i++) {
        arrsum = arrsum + a[i];
        if (max < arrsum)
            max = arrsum;
 
        if (arrsum < 0)
            arrsum = 0;
    }
    return max;
}
 
// Driver Code
int main()
{
     int arr[100],n;
    cout<<"please enter the lengh of array: ";
    cin>>n;
    cout<<"please enter the array elements: ";
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
 
    // Function Call
    int max_sum = maxSubArraySum(arr, n);
    cout << "Maximum contiguous sum is: " << max_sum;
    return 0;
}