#include<iostream>
using namespace std;

int main(){
    int arr[100],arrsum,max=-3277,s=0;
     int n = sizeof(arr) / sizeof(arr[0]);
     cout<<"Please enter the lengh of array: ";
     cin>>n;
    cout<<"Please enter the array elements: ";
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n+1;i++){
        arrsum=arrsum+arr[i];
        if(max<arrsum){
            max=arrsum;
        }
        if(arr[i]<0){
            arrsum=0;
            s=i+1;
        }
    }
    cout<<"Max Subarray sum is: "<<max;
    return 0;
}