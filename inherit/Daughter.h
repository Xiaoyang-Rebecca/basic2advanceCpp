#ifndef DAUGHTER_H
#define DAUGHTER_H
#include <iostream>

using namespace std;
//.h: [title]  


class Daughter: public Mother {                             //inherit
    public:  // aspect specifier: the content below can access outside
        Daughter ();
        void dosth();
        

};

#endif //DAUGHTER_H