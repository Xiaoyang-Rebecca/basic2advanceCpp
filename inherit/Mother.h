#ifndef MOTHER_H
#define MOTHER_H
#include <iostream>

using namespace std;

//.h: [title]  


class Mother {
    public:                                 // aspect specifier: the content below can access outside
        Mother ();
        void printName();
        int publicv;

        ~Mother ();

    protected:                              //only derived class will cannot access
        int protectedv;
    private:                                //derived class will cannot access
        int privatev;
};

#endif  //MOTHER_H