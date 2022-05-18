#include "iostream"

using namespace std;

struct no {
    int info;
    no *prox;
};

class Queue {

    private:
        no *startPtr;
        no *finalPtr;

    public:
        Queue();
        void enqueue(int);
        void showQueue();
        int dequeue();

};

Queue::Queue() {

    startPtr = NULL;
    finalPtr = NULL;
};

void Queue::enqueue(int x) {

    no *aux = new no;

    aux->info = x;
    aux->prox = NULL;

    if (this->finalPtr)
        this->finalPtr->prox = aux;

    if (!this->startPtr)
        this->startPtr = aux;

    this->finalPtr = aux;
    
};

void Queue::showQueue() {

    no *aux = this->startPtr;

    while (aux) {

        cout << aux->info << ",";

        aux = aux->prox;
    }

    cout << endl;
}