#include <iostream>
#include "Boolean.h"

using namespace std;


int main() {
    Boolean boolean(10);
    boolean.bitOn(9);
    boolean.bitOn(3);
    boolean.bitOn(4);
    cout << boolean[20];
    cout << endl;

    cout << boolean[9];

    cout << boolean[3];

    cout << boolean[4];

    return 0;
}