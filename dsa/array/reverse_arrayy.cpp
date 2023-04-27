#include <iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"please enter the lengh of array: ";
    cin>>n;
    cout<<"please enter the array elements: ";
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
        cout<<" "<< arr[i];
    }
    cout<<"\n";
    cout<<"your reverse array is: ";
    for(int i=n;i>0;i--){
        cout<<" "<< arr[i];
    }
    return 0;
}