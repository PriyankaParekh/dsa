#include<bits/stdc++.h>
#include <string.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int left=0;
        int right=str.size()-1;
        char temp;
        while(left<right)
        {
            temp=str[left];
            str[left]=str[right];
            str[right]=temp;

            left++;
            right--;

}
cout<<str;
    return 0;
}