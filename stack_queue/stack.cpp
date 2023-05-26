#include <bits/stdc++.h>
#include <conio.h>
#define limit 10
using namespace std;
int s[limit];
int top = -1;

void push();
void pop();
void peep();
void display();
void change();

int main()
{
    char choice;
    while (choice != 5)
    {
        cout << "\n\nEnter Your Choice\n\n";
        cout << "\t1. push \n";
        cout << "\t2. pop \n";
        cout << "\t3. display \n";
        cout << "\t4. peep \n";
        cout << "\t5. change \n";
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
            display();
            break;

        case '4':
            peep();
            break;

        case '5':
            change();
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

void display()
{
    int i;
    cout << "\nOur stack is...\n";
    for (i = top; i >= 0; --i)
        printf("%d\n", s[i]);
}

void peep()
{
    int i, element;
    if (top == -1)
    {
        cout << "\n!!!Stack is empty!!!";
    }
    else
    {
        display();
        cout << "which position's element you want to print : ";
        cin >> element;
        cout << "the element of stack in " << element << " position is : " << s[top - element];
    }
}

void change()
{
    int i, change, x, temp;
    if (top == -1)
    {
        cout << "\n!!!Stack is empty!!!";
    }
    else
    {
        display();
        cout << "\nwhich position's element you want to change : ";
        cin >> change;
        cout << "\nEnter the number to change : ";
        cin >> x;
        temp = s[top - change];
        s[top - change] = x;
        x = temp;
        cout << "the element of stack in " << change << " position is : " << x << " which is change into " << s[top - change];
        display();
    }
}