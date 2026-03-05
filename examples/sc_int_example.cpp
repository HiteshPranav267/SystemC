#include <systemc.h>

int sc_main(int argc, char* argv[])
{
    sc_int<8> a;
    sc_int<8> b;
    sc_int<8> sum;

    a = -10;
    b = 5;

    sum = a + b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "sum = " << sum << endl;

    return 0;
}
