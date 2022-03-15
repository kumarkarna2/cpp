#include <iostream>
using namespace std;

class Queue
{
private:
    int rear;
    int front;

public:
    int size = size;
    int *queue;

    Queue(int s)
    {

        rear = front = 0;
        queue = new int;
    }
    ~Queue()
    {
        delete[] queue;
    }
    bool push(int n);
    void pop();
    void top();
    void print();
};

bool Queue::push(int n)
{
    if (rear == size)
    {
        cout << "Queue is Overflow!"
             << "\n";
        return false;
    }
    else
    {
        queue[rear] = n;
        rear++;
    }
    return true;
}

void Queue::pop()
{
    if (front == rear)
    {
        cout << "Queue is underflow"
             << "\n";
    }
    else
    {
        cout << "Poping.... " << queue[front] << "\n";
        for (int i = 0; i < rear - 1; i++)
        {
            queue[i] = queue[i + 1];
        }

        rear--;
    }
}

void Queue::top()
{
    if (front == rear)
    {
        cout << "Queue is underflow!"
             << "\n";
    }
    else
    {
        cout << "Top = " << queue[front] << "\n";
    }
}

void Queue::print()
{
    if (front == rear)
    {
        cout << "Queue is underflow!"
             << "\n";
    }
    else
    {
        cout << "Elements of Queue are "
             << " ";
        for (int i = front; i < rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
}

int main()
{
    int size;
    cout << "Enter size of Queue\n";
    cin >> size;
    Queue q(size);
    int n;
    for (int i = 0; i < size; i++)
    {

        cin >> n;
        q.push(n);
    }

    q.top();

    q.print();
    return 0;
}