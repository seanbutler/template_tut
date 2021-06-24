#include <iostream>


// ----------------------------------------------------------------------

struct LinkedInt{
    int head;
    struct LinkedInt *tail;
};

int LinkedInt_Total ( struct LinkedInt * ptr )
{
    int total = 0;
    while ( ptr ) {
        total += ptr->head;
        ptr = ptr->tail;
    }
    return total;
}

// ----------------------------------------------------------------------

int main(int, char**) {
    std::cout << "Hello, world!\n";

    LinkedInt *numListPtr;
    LinkedInt *tmplistPtr;

    tmplistPtr = (LinkedInt*)malloc(sizeof(LinkedInt));
    numListPtr = tmplistPtr;

    for(int n=1;n<=10;n++){
        tmplistPtr->head = n;
        tmplistPtr->tail = (LinkedInt*)malloc(sizeof(LinkedInt));
        tmplistPtr=tmplistPtr->tail;
    }    

    std::cout << LinkedInt_Total(numListPtr);
}
