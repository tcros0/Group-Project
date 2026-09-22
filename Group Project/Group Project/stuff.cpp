#include "stuff.h"

stuff::stuff() {
    nums = 0;
    name = "";
}

stuff::stuff(int num, string name) {
    nums = num;
    this->name = name;
}