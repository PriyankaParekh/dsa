#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &interval)
{
    vector<vector<int>> ans;
    sort(interval.begin(), interval.end());
    int n = interval.size();

    for (int i = 0; i < n; i++)
    {
        if (ans.empty())
        {
            ans.push_back(interval[i]);
        }
        else
        {
            vector<int> &v = ans.back();
            int y = v[1];
            if (interval[i][0] <= y)
            {
                v[1] = max(y, interval[i][1]);
            }
            else
            {
                ans.push_back(interval[i]);
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> interval = {{1, 2}, {3, 4}, {6, 7}, {6, 10}};

    vector<vector<int>> ans = merge(interval);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}