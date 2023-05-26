#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,arr[100];
    cout<<"enter the m: ";
    cin>>m;
    cout<<"enter the n: ";
    cin>>n;
    int len=m*n;
    for(int i=0;i<len;i++){
        cin>>arr[i];
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=m+3;i<m+4;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=len-1;i<len;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=len-2;i>len-5;i--){
        cout<<arr[i]<<" ";
    }
    for(int i=m;i<m+3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}