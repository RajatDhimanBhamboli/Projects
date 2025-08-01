#include <iostream>
#include "./ll.h"
using namespace std;

int main()
{
    Singlelinklist<int> *obj = new Singlelinklist<int>();
    obj->prepand(10);
    obj->prepand(4);
    obj->append(50);
    obj->append(16);
    obj->deletenode(3);
    obj->print();
    return 0;
}
