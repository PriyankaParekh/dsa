#include <bits/stdc++.h>
using namespace std;

int main()
{
    int space, n;
    string ans, ans2;
jump:
    cout << endl
         << "can you please forgive me🥺?(yes/no): \n";
    cin >> ans;
    if (ans == "yes" || ans == "Yes" || ans == "YES")
    {
        cout << "\nThank You So much my Sweethearttt my baby babe baeeeeeeee...🙈💋";
        exit(0);
    }
    else if (ans == "no" || ans == "No" || ans == "NO")
    {

        cout << endl;
        cout << "Babyyyyyyyyyyyyyy😥\n";
        cout << "Babyyyyyyyyyyyyyy😥\n";
        cout << "Babyyyyyyyyyyyyyy😥\n";
        cout << "Babeeeeeeeeeeeeee🥺\n";
        cout << "Babeeeeeeeeeeeeee🥺\n";
        cout << "Baeeeeeeeeeeeeeee😭😭\n";
        cout << "😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭\n";
        for (int i = 0; i < 500; i++)
        {
            cout << "SORRY SORRY"
                 << " ";
        }

        cout << "\nbaby please naaaa😭...........\n";
        cout << "I know that is my mistake babyyyyyyy.....🥺\n";
        cout << "You are innocent in this case baeee..... please forgive me babee please.....🥺\n";
        cout << "I'll never do this again🥺........... No fight with you promise🥺......\n";
        cout << "I want you babyyy...😭 😭 😭\n";
        cout << "Please last time naaa babyyy.......🥺\n";
        for (int i = 0; i < 200; i++)
        {
            cout << "Please Please"
                 << " ";
        }

        cout << endl
             << "Can you forgive me?????????(yes/no)";
        cin >> ans2;
        if (ans2 == "yes" || ans2 == "Yes" || ans2 == "YES")
        {
            cout << "\nThank You So much my Sweethearttt my baby babe baeeeeeeee...🙈💋";
            exit(0);
        }
        else if (ans2 == "no" || ans2 == "No" || ans2 == "NO")
        {
            for (int i = 0; i < 500; i++)
            {
                cout << "SORRY SORRY"
                     << " ";
            }
            goto jump;
        }
        else
        {
            cout << "please enter valid ans...😥";
            goto jump;
        }
        goto jump;
    }
    else
    {
        cout << "please enter valid ans...😥";
        goto jump;
    }

    return 0;
}
