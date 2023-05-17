#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[100],k,min,max;
     int n = sizeof(arr) / sizeof(arr[0]);
     cout<<"Please enter the lengh of array: ";
     cin>>n;
    cout<<"Please enter the value of k: ";
    cin>>k;
    cout<<"Please enter the array elements: ";
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    cout<<"Your sorted array is: "<<endl;
    for (int i = 1; i < n+1; ++i){
        cout << arr[i] << " ";
    }
    min=arr[k];
    max=arr[n-k+1];
    cout<<endl<<k<<"th min element is: "<<min<<endl;
    cout<<k<<"th max element is: "<<max<<endl;
return 0;
}