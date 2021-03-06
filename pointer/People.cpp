#include "People.h"
#include <iostream>
#include "Birthday.h"

using namespace std;


People::People(string x, Birthday bo)                     // set the local variable to private
: name(x), dateOfBirth(bo)                                //* member list of private
{
    cout << "\nI am a constructor People" << endl;
    
}

void People::printInfo(){
    cout << " 'This ' pointer check" ; 
    cout << this->name << endl;                          // !"this" stand for the address of the obj
    cout << (*this).name << endl;                        // !derefenrencing of the pointer 

    cout << "\n" << name << " was born on  " ;


    dateOfBirth.printDate();
}


People::~People(){                                        // deconstructor automatically called in the end
    cout << "\nI am the deconstructor People" << endl;

}