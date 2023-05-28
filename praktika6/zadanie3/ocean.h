#ifndef xddd
#define xddd

#include <string>

using namespace std;

class Ocean {
protected:
    string name;
    string location;
    float size;
    float depth;
public:
    Ocean();
    Ocean(string name, string location, float size, float depth);
    virtual void showInfo();
};



#endif //INDUSTRIAL_PROGRAMMENT_PRACTIC_OCEAN_H
