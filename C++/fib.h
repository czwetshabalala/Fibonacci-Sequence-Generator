#ifndef FIB_H
// Define FIBS_H to prevent multiple inclusions

using namespace std;
#define FIB_H


class Fib{
private:
int last; //Position of the last fibonacci number in the sequence you want displayed.
int * sequence; //Pointer for the sequence array.

public:
Fib(); //Default Constructor
~Fib(); // Destructor
Fib(int); // Overloaded constructor
void setLast(int); //Setter
void calculateSequence(); //Method to calculate actual sequence
string displaySequence(); //Method to display the sequence
string search(int n);
};
#endif