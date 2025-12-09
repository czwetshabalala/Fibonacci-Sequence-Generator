#include <iostream>
#include "fib.cpp"
using namespace std;

int main() {
    //Normal constructor test
    Fib fibTest;
    fibTest.setLast(0);
    fibTest.calculateSequence();
    cout<<"Test 1:"<<endl;
    cout<<fibTest.search(8)<<endl;
    cout<<fibTest.displaySequence()<<endl;
    cout<<endl;
    //Copy Constructor Test
    Fib fibTest2(20);
    fibTest2.calculateSequence();
    cout<<"Test 2:"<<endl;
    cout<<fibTest2.displaySequence();
    return 0;
}

