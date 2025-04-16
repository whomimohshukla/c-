#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            cout << "queue is empty" << endl;
        }
        elsegetSize
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize(){
        return rear-front;
    }
};
int main()
{
    Queue q(10);

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    cout<<"size of queue is :"<<q.getSize()<<endl;
    q.pop();
    cout<<"size of queue is :"<<q.getSize()<<endl;
    cout<<"front of queue is :"<<q.getFront()<<endl;
    

    if(q.isEmpty()){
        cout<<"queue is "
    }
}