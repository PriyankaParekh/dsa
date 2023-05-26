#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v{{5, 4, 7}, {1, 3, 8}, {2, 9, 6}};
    int n = v.size();
    vector<int> x;
    int m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x.push_back(v[i][j]);
        }
    }
    sort(x.begin(), x.end());
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i][j] = x[k++];
        }
    }
    cout << "Sorted Matrix Will be:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
