#include "fib.h"
#include <iostream>
#include <string>

Fib::Fib(){
    sequence = nullptr;
    last =0;
}
Fib::Fib(int n){
  last =  n;
  sequence = new int[n];
}

Fib::~Fib(){
    if(last>0){
        delete sequence;
    }
}

void Fib::calculateSequence(){
    if(last==0){
        return;
    }
    if(last==1){
         sequence[0] = 1;
         return;
    }
    if(last==2){
        sequence[0]=1;
        sequence[1]=1;
        return;
    }
    if(last>=2){
        sequence[0]=1;
        sequence[1]=1;
        int prev =0;
        int pred =1;
        int i =2;
        while(i!=last){
            sequence[i] = sequence[pred] + sequence[prev];
            pred = prev;
            prev = i;
            i++;
        }
    }
   
}
void Fib::setLast(int newLast){
    if(newLast>0)
    {
    last = newLast;
    sequence = new int[newLast];
    }
}

string Fib::displaySequence(){
    string output= "";
    if(last==0){
        return "The sequence is empty because the number of elements you entered to calculate is 0.";
    }
    for(int i =0; i<last-1;i++){
        output+= to_string(sequence[i]) + ", ";
    }
    output += to_string(sequence[last-1]); 
    return output;
}

string Fib::search(int n){
    if(last==0){
        return "The sequence is empty. As such " +to_string(n)+" is not in the sequence.";
        
    }
    if(n<=0 && last>0){
        return to_string(n) + " is not in the list";
    }
    for(int i =0; i<last;i++){
        if(sequence[i]==n){
            return to_string(n) + " is in the sequence.";
        }
    }
    return to_string(n) + " is not in the sequence.";
}
