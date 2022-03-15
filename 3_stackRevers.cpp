#include <bits/stdc++.h>
#include <string>
using namespace std;

#define max 500
class Stack
{

public:
    int position_1, position_2;
    char stack_1[max], stack_2[max];
    Stack()
    {
        position_1 = -1;
        position_2 = -1;
    }

    void push(char c);
    void pop();
    void print();
};

void Stack::push(char c)
{
    if (position_1 >= (max - 1))
    {
        cout << "Stack is overflow!"
             << "\n";
        // return false;
    }
    else
    {
        stack_1[++position_1] = c;
    }
}

void Stack::pop()
{
    if (position_1 = -1)
    {
        cout << "\nStack is empty!"
             << "\n";
    }
    else
    {
        char x = stack_1[position_1--];
    }
}

void Stack::print()
{
    if (position_1 == -1)
    {
        cout << "\nStack is empty!"
             << "\n";
    }
    else
    {
        for (int i = position_1; i >= 0; i--)
        {
            cout << stack_1[i]
                 << " ";
        }
    }
}

int main()
{
    Stack s1, s2;
    s1.push('c');
    s1.push('h');
    s1.push('a');
    s1.push('r');

    s1.print();
    s2.print();

    return 0;
}