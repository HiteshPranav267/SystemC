#include <systemc.h>

int sc_main(int argc, char* argv[])
{
    sc_bit a;
    sc_bit b;
    sc_bit c;

    a = 1;
    b = 0;

    c = a & b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a AND b = " << c << endl;

    c = a ^ b;

    cout << "a XOR b = " << c << endl;

    return 0;
}
