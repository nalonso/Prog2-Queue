#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue<int> stackInst;
    stackInst.Enqueue(15).Enqueue(23).Enqueue(45).Enqueue(42);

    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Dequeue() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Dequeue() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Dequeue() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Dequeue() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << stackInst.Dequeue() << endl;
    cout << "Tiene " << stackInst.Size() << " elementos" << endl;
    cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
    return 0;
}
