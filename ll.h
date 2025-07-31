#include <iostream>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T val)
    {
        data = val;
        next = nullptr;
    }
};
template <typename T>
class Singlelinklist
{
private:
    Node<T> *head;

public:
    Singlelinklist()
    {
        head = nullptr;
    }
    void prepand(T value)
    {
        Node<T> *newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
    }
    void append(T value){
        Node<T> *newnode=new Node<T>(value);
        Node<T> *curr=head;
        while(curr->next!=nullptr){
            curr=curr->next;
        }
        curr->next=newnode;

    }
    void deletenode(int index)
    {
        if (head == nullptr)
            return;
        if (index == 0)
        {
            Node<T> *temp = head;
            head = head->next;
            return;
        }
        Node<T> *temp = head;
        int count = 0;
        while (temp != nullptr && count < index - 1)
        {
            temp = temp->next;
            count++;
        }
        if (temp == nullptr || temp->next == nullptr)
            return;

        Node<T> *nodeToDelete = temp->next;
        temp->next = temp->next->next;
    }

    void print();
};

template <typename T>
void Singlelinklist<T>::print()
{
    Node<T> *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}