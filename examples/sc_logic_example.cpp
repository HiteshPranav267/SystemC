#include <systemc.h>

int sc_main(int argc, char* argv[])
{
    sc_logic a;
    sc_logic b;

    a = SC_LOGIC_1;
    b = SC_LOGIC_0;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a = SC_LOGIC_Z;

    cout << "High Impedance value = " << a << endl;

    a = SC_LOGIC_X;

    cout << "Unknown value = " << a << endl;

    return 0;
}
