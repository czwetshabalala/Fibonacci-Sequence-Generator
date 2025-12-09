# 🔢*Fibonacci Sequence Generator* 
## implemented across *Python*, *C++*, as well as *Java*.
### What is the Fibonacci Sequence
The fibonacci sequence is a series of numbers such that each term is a sum of the previous two terms in the series. The first two terms in the sequence are ,0 and 1, form the foundation on which the sequence is built on.<br/>

### Core Mechanism and Approach
The generator uses an iterative approach(mainly while loops) to generate the sequence as it is generally faster than the recursive alternative.<br/>

### Class Methods and Key Features 
Each implementation provides a Fib() object/class with following methods for the user to interact with: <br/>

*setLast(int)*: Set the number of terms to generate in the sequence. <br/> <br/>
*calculateSequence()*: Generates the sequence iteratively. <br/> <br/>
*displaySequence()* : Displays the generated sequence as a string. <br/> <br/>
*search(int n)*: Allows the user to search the generated sequence for a value. <br/> <br/>
*~Fib()*: The destructor deallocates all memory used up by the object. <br/> <br/>

### Installation
**Clone the repository:**
   ```bash
   git clone [https://github.com/czwetshabalala/Fibonacci-Sequence-Generator.git](https://github.com/czwetshabalala/Fibonacci-Sequence-Generator.git)
  
   cd Fibonacci-Sequence-Generator
### Usage Examples
###C++
Create a Fibonacci Object: <br/>
   ''' cpp Fib fibTest;
Set the number of terms, generate the sequence, and display the sequence:
    fibTest.setLast(0);
    fibTest.calculateSequence();
    cout<<"Test 1:"<<endl;
    cout<<fibTest.displaySequence()<<endl;
    return 0;


     




