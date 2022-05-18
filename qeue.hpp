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


    
    // FINAL POINTER //

    if (this->finalPtr)
        this->finalPtr->prox = aux;

    this->finalPtr = aux;

    // FINAL POINTER //

    
    // START POINTER //

    if (!this->startPtr)
        this->startPtr = aux;
    
    // START POINTER //
};

int Queue::dequeue() {

    int returnVal;
    
    if (this->startPtr) {

        returnVal = this->startPtr->info;

        startPtr = this->startPtr->prox;

        if (this->startPtr == NULL) this->finalPtr = NULL; 
    }

    return returnVal;
}

void Queue::showQueue() {

    no *aux = this->startPtr;

    cout << "[";

    while (aux) {

        cout << aux->info;

        if (aux->prox) cout << ",";

        aux = aux->prox;
    }

    cout << "]";

    cout << endl;
}