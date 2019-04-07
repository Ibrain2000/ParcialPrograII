#include <iostream>
using namespace std;

void misterio(int* a, int& b, int* c) {
    *a += *c;
    (*c)++;
    b--;
    cout << b << " " << *a << " " << endl;
}

int main() {
    int w = 0;
    int x = 1;
    int y = 3;
    int z = 7;
    misterio(&y, x, &w);
    misterio(&x, y, &z);
    misterio(&w, w, &z);

    cout << w << " " << x << " " << y << " " << z << endl;
    return 0;
}