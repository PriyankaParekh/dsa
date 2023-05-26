#include <bits/stdc++.h>
using namespace std;
void reverse_stack(stack<int> s);
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverse_stack(s);

    return 0;
}
void reverse_stack(stack<int> s)
{
    int x[100];
    for (int i = 0; i < 100; i++)
    {
            x[i] = s.top();
            s.pop();
            cout << x[i];
            reverse_stack(s);
        
    }
}