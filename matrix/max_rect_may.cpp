#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmall(vector<int> a){
    stack<int> s;
    vector<int> ps(a.size());
    for(int i=0;i<a.size();i++){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty()){
            ps[i] = -1;
        }
        else{
            ps[i] = s.top();
        }
    
        s.push(i);
    
    }
    return ps;
}

vector<int> nextSmall(vector<int> a){
    stack<int> s;
    vector<int> ns(a.size());
    for(int i=a.size()-1;i>=0;i--){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty()){
            ns[i] = a.size();
        }
        else{
            ns[i] = s.top();
        }
        s.push(i);
    }
    return ns;
}

int maxHistogram(vector<int> a){
    int maxArea = 0;
    vector<int> ps = prevSmall(a);
    vector<int> ns = nextSmall(a);
    cout << endl;
    for(int i=0;i<a.size();i++){
        // cout << ps[i] << " "<< ns[i] << endl;
        int width = ns[i] - ps[i] - 1;
        int area = width * a[i];
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int maxArea(vector<vector<int>> a, int n, int m){
    vector<int> current = a[0];
    int maxArea = maxHistogram(current);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                current[j] = 0;
            }
            else{
                current[j] += a[i][j];
            }
        }
        maxArea = max(maxArea, maxHistogram(current));
    }
    return maxArea;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> matrix[i][j];
        }
    }
    cout << maxArea(matrix, n, m) << endl;

    return 0;
}