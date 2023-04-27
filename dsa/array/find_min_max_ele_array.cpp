#include<iostream>
using namespace std;

int minmax(int arr[],int n){

    int min=3277, max=-3277;
    
    for(int i=1;i<n+1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    cout<<"min element is: "<< min<<endl;
    cout<<"max element is: "<<max<<endl;
    return 0;
}

int main(){

    int arr[100],n;
    cout<<"please enter the lengh of array: ";
    cin>>n;
    cout<<"please enter the array elements: ";
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }    
    minmax(arr,n);
return 0;
}

