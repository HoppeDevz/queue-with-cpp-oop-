#include "iostream"
#include "qeue.hpp"

int main() {

    Queue *F = new Queue();

    F->enqueue(10);
    F->enqueue(20);
    F->enqueue(30);
    F->enqueue(40);

    F->showQueue();

    F->dequeue();
    F->dequeue();
    F->dequeue();
    F->dequeue();

    F->enqueue(10);
    F->enqueue(20);
    F->enqueue(30);
    F->enqueue(40);

    F->showQueue();

    system("PAUSE");

    return 0;
}