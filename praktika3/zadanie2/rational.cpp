#include <iostream>
#include <cmath>
#include "rational.h"

class rational {
    int a, b;
    bool exist;

public:
    rational();

    rational(int a1, int b1);

    void set(int a1, int b1);

    void show();
};
