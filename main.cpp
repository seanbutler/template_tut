#include <iostream>


// ----------------------------------------------------------------------

template <typename T>
struct MyList{
    int head;
    struct MyList<T> *tail;
};

int LinkedInt_Total ( struct MyList<int> * ptr )
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

    MyList<int> *numListPtr;
    MyList<int> *tmplistPtr;

    tmplistPtr = (MyList<int>*)malloc(sizeof(MyList<int>));
    numListPtr = tmplistPtr;

    for(int n=1;n<=10;n++){
        tmplistPtr->head = n;
        tmplistPtr->tail = (MyList<int>*)malloc(sizeof(MyList<int>));
        tmplistPtr=tmplistPtr->tail;
    }    

    std::cout << LinkedInt_Total(numListPtr);
}
