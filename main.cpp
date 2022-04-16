#include <iostream>
#include "field.h"

int main() {
    Field *test = new Field;
    test -> initializeField();
    test -> printField();
    return 0;
}
