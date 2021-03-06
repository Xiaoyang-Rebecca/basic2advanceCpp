#ifndef BURRITO_H
#define BURRITO_H
#include <iostream>

using namespace std;

//.h: [title]  


class Birthday {
    public:  // aspect specifier: the content below can access outside
        Birthday(int m, int d, int y);
        void printDate();
        
    private:
        string name;
        int month;
        int day;
        int year;
};

#endif //BURRITO_H