#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, col, max[100][100];
    int maxc = 0, rowi = -1;
    cout << "enter row value:";
    cin >> row;
    cout << "enter col value:";
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        int c = 0;
        for (int j = 0; j < col; j++)
        {
            cin >> max[i][j];
            if (max[i][j] == 1)
            {
                c += 1;
            }
        }
        if (c > maxc)
        {
            maxc = c;
            rowi = i;
        }
    }
    cout<<"max one row is: "<<rowi+1;

    return 0;
}