#include <iostream>
using namespace std;

class baseClass final{
    public:
    virtual void perkenalan() {
        cout << "Hallo saya function dari base class";
    }
};

class serivedclass : public baseClass {
    public: 
    void perkenalan() {
        cout << "Hallo saya Function dari derived class";
    }
};

int main() {
    derivedClass a;
    a.Perkenalan();

    return 0;
}