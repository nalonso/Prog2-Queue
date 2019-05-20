#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "Node.h"

template<class QueueType>
class Queue
{
    public:
        Queue();
        virtual ~Queue();

        Queue<QueueType>& Enqueue (const QueueType);
        QueueType Dequeue();
        bool IsEmpty();
        QueueType GetFirst();
        QueueType GetLast();
        int Size();

    private:
        Node<QueueType> *First;
        Node<QueueType> *Last;
        int totalElements;
};


template <class QueueType>
Queue<QueueType>::Queue(void) : First( NULL ), Last( NULL ), totalElements(0) {
}

template <class QueueType>
Queue<QueueType>::~Queue(void) {
}

template <class QueueType>
Queue<QueueType>& Queue<QueueType>::Enqueue(const QueueType toPush) {
    Node<QueueType>* toAdd = new Node<QueueType>(toPush);
    if(IsEmpty()){
        First = toAdd;
    } else {
        Last->SetNext(toAdd);
    }
    Last = toAdd;
    totalElements++;
    return *this;
}

template <class QueueType>
QueueType Queue<QueueType>::Dequeue() {
    if(!IsEmpty()){
        Node<QueueType>* aux = First;
        First = aux->GetNext();
        totalElements--;
        return aux->GetValue();
    }
    return NULL;
}

template <class QueueType>
QueueType Queue<QueueType>::GetFirst() {
    return First->GetValue();
}

template <class QueueType>
QueueType Queue<QueueType>::GetLast() {
    return Last->GetValue();
}

template <class QueueType>
bool Queue<QueueType>::IsEmpty() {
    return Size() == 0;
}

template <class QueueType>
int Queue<QueueType>::Size() {
    return totalElements;
}

#endif // __QUEUE_H__
