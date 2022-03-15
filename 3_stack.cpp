#include <bits/stdc++.h>
using namespace std;
#define max 500

class Stack
{
private:
    int position;

public:
    int stack[max];

    Stack()
    {
        position = -1;
    }
    bool push(int n);
    int pop();
    void top();
    void print();
};

bool Stack::push(int n)
{
    if (position >= (max - 1))
    {
        cout << "Stack is Overflow!"
             << "\n";
        return false;
    }
    else
    {
        stack[++position] = n;
        cout << "Pushing " << n << endl;
        return true;
    }
}

int Stack::pop()
{
    if (position == -1)
    {
        return 0;
    }
    else
    {
        int n = stack[position--];
        cout << "Poping " << n << "\n";
        return n;
    }
}

void Stack::top()
{
    if (position == -1)
    {
        cout << "Stack is empty!"
             << "\n";
    }
    else
    {
        int n = stack[position];
        cout << "Top element is " << n << "\n";
    }
}

void Stack::print()
{
    if (position == -1)
    {
        cout << "Stack is empty!"
             << "\n";
    }
    else
    {
        cout << "Elements of stack are ";
        for (int i = position; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
    }
}

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    // stack.push(3);
    // stack.push(4);

    stack.pop();
    stack.pop();

    stack.top();

    stack.print();

    return 0;
}