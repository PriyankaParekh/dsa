#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin>>n;

   int a[n][n];
   for(int i=0; i< n; i++){
     for(int j=0; j< n; j++)
       cin>>a[i][j];
   }

  int search;
  cin>>search;

  for(int i=0; i< n; i++){

    for(int j=0; j< n; j++){
        if(a[i][j]==search)
        {
          cout<<"Element is found at ("<< i<<", "<< j<<") position";
          exit(0);
        }
    }
  }
    cout<<"Not found";

}