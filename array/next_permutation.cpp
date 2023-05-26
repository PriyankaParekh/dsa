#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[4];
    cout << "enter the number for knowing next permutation: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> array[i];
    }
    int arr[4] = {1, 2, 3};
    sort(arr, arr + 3);

    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    while (next_permutation(arr, arr + 3))
    {
        cout << arr[0] << " " << arr[1] << " " << arr[2];
        cout << endl;
        
    }
    if (arr[0] == array[0] && arr[1] != array[1] && arr[2] != array[2])
        {
            cout << arr[0] << " " << arr[1] << " " << arr[2]<<endl;
        }else if(arr[0] == array[1] && arr[1] == array[2] && arr[2] == array[0]){
            cout << arr[1] << " " << arr[2] << " " << arr[0]<<endl;
        }
        else if(arr[0] == array[2] && arr[1] == array[0] && arr[2] == array[1]){
            cout << arr[2] << " " << arr[0] << " " << arr[1]<<endl;
        }
    return 0;
}