#include <iostream>

using namespace std;

class StankFist
{
    public:
        StankFist(){stinkyVar=0;}
    private:
        int stinkyVar;
    
    friend void stinkysFriend(StankFist &sfo);   // give away friendship

};
void stinkysFriend(StankFist &sfo){
    sfo.stinkyVar=99;                            // using private variables inside class
    cout << sfo.stinkyVar << endl;
}

int main() {
    StankFist bob;
    stinkysFriend(bob);

}