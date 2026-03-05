#include <systemc.h>

int sc_main(int argc, char* argv[])
{
    sc_uint<8> a;
    sc_uint<8> b;
    sc_uint<8> result;

    a = 10;
    b = 5;

    result = a + b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "result = " << result << endl;

    return 0;
}
