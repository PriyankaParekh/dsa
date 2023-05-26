#include <bits/stdc++.h>
#include <conio.h>
#define limit 10
using namespace std;
int s[limit];
int s2[limit];
int top = -1;
int top2 = -1;

void push();
void pop();
void push2();
void pop2();

int main()
{
    char choice;
    while (choice != 4)
    {
        cout << "\n\nEnter Your Choice\n\n";
        cout << "\t1. push1 \n";
        cout << "\t2. pop1 \n";
        cout << "\t3. push2 \n";
        cout << "\t4. pop2 \n";
        fflush(stdin);
        cin >> choice;
        fflush(stdin);
        switch (choice)
        {
        case '1':
            push();
            break;

        case '2':
            pop();
            break;

        case '3':
            push2();
            break;

        case '4':
            pop2();
            break;

        default:
            cout << "Enter Invalid input";
            break;
        }
        printf("\nPress any key to contiue ");
        getch();
    }
    return 0;
}

void push()
{
    int x1;
    if (top == limit - 1)
    {
        cout << "\n!!!Stack is full!!!";
    }
    else
    {
        cout << "\nEnter element to push in stack:";
        cin >> x1;
        top++;
        s[top] = x1;
    }
}

void pop()
{
    int c;
    if (top == -1)
    {
        cout << "\n!!!Stack is empty!!!";
    }
    else
    {
        c = s[top];
        cout << "\nDeleted element is " << c;
        top--;
    }
}

void push2()
{
    int x1;
    if (top2 == limit - 1)
    {
        cout << "\n!!!Stack is full!!!";
    }
    else
    {
        cout << "\nEnter element to push in stack:";
        cin >> x1;
        top2++;
        s[top2] = x1;
    }
}

void pop2()
{
    int c;
    if (top2 == -1)
    {
        cout << "\n!!!Stack is empty!!!";
    }
    else
    {
        c = s[top2];
        cout << "\nDeleted element is " << c;
        top2--;
    }
}

