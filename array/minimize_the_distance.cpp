#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],n,k,d1,d2;
    cout<<"please enter the lengh of array: ";
    cin>>n;
    cout<<"please enter the value of k: ";
    cin>>k;
    cout<<"please enter the array elements: ";
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
        cout<<" "<< arr[i];
    }
    sort(arr+1,arr+n+1);
    cout<<endl<<"Your sorted array is: "<<endl;
    for (int i = 1; i < n+1; ++i){
        cout << arr[i] << " ";
    }
    cout<<"\n";  
    for(int i=1;i<(n+1)/2;i++){
        arr[i]=arr[i]-k;
        cout<<arr[i]<<" ";
    }   
    for(int i=(n+1)/2;i<(n+1);i++){
        arr[i]=arr[i]+k;
        cout<<arr[i]<<" ";
    }  
    cout<<"\n";
    int d=arr[n]-arr[1];
    cout<<"Difference between the largest and the smallest is: "<<d;  
    return 0;
}