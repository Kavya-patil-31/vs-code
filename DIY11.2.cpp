#include <iostream>
using namespace std;

template <class T>
class Queue {
    T arr[5];
    int frontIndex, rear;

public:
    Queue() {
        frontIndex = 0;
        rear = -1;
    }

    void enqueue(T x) {
        if (rear == 4) {
            cout << "Queue is full" << endl;
            return;
        }

        arr[++rear] = x;
    }

    void dequeue() {
        if (frontIndex > rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Deleted: " << arr[frontIndex++] << endl;
    }

    void front() {
        if (frontIndex <= rear)
            cout << "Front: " << arr[frontIndex] << endl;
        else
            cout << "Queue is empty" << endl;
    }
};

int main() {
    Queue<string> q;

    q.enqueue("Apple");
    q.enqueue("Mango");
    q.enqueue("Orange");

    q.front();
    q.dequeue();
    q.front();

    return 0;
}