#include <bits/stdc++.h>
using namespace std;

template <class t>
class node
{
public:
    t data;
    node *next = NULL;
    void printdata()
    {
        cout << data << endl;
    }
    void fillnode()
    {
        cout << "Fill ";
        cin >> data;
    }
};

class complex
{
public:
    int real, imag;
    friend ostream &operator<<(ostream &out, const complex &x);
    friend istream &operator>>(istream &in, complex &x);
};

istream &operator>>(istream &in, complex &x)
{
    in >> x.real >> x.imag;
    return in;
}

ostream &operator<<(ostream &out, const complex &x)
{
    out << x.real << " +" << x.imag << "i";
    return out;
}

template <class m>
class linkedlist
{
public:
    node<m> *head;

    void createList()
    {
        head = NULL;
        cout << "List is Created" << endl;
    }

    void displayList()
    {
        node<m> *temp = head;
        if (temp == NULL)
        {
            cout << "im empty" << endl;
            return;
        }
        cout << "head" << endl;
        while (temp)
        {
            temp->printdata();
            temp = temp->next;
        }
        cout << "tail" << endl;
    }

    void insertElement()
    {
        node<m> *temp = head;
        node<m> *newnode = new node<m>;
        newnode->fillnode();

        if (temp == NULL)
        {
            head = newnode;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void deleteElement()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
        }
        else
        {
            node<m> *temp = head;
            head = head->next;
            delete (temp);
        }
    }
};

int main()
{
    linkedlist<complex> *ll = new linkedlist<complex>;
    ll->createList();
    ll->insertElement();
    ll->insertElement();
    ll->displayList();
    ll->deleteElement();
    ll->displayList();
    return 0;
}
