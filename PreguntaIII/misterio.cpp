#include <iostream>
using namespace std;
 
int misterio(int a, int& b, int* c) {
    b++;
    a += *c;
    cout << b << " " << *c << " " << a << " " << c << endl;
    c = &a;
    return a - b;
}

int main() {
    int a = 4;
    int* b = new int(8);
    int c = -3;
    int d;
    int* e = &a;

    d = misterio(a, *b, &c);
    misterio(c, d, b);
    misterio(*b, *e, &d);

    cout << a << " " << b << " " << *b << " " << c << " " << d << " " << e << " " << *e << endl;

    cout << &a << &b << " " << &c << " " << &d << " " << &e << endl;

    return 0;
}