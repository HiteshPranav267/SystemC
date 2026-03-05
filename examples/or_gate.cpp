#include <systemc.h>

SC_MODULE(or_gate)
{
    sc_in<bool> a;
    sc_in<bool> b;

    sc_out<bool> y;

    void prc_or()
    {
        y.write(a.read() | b.read());
    }

    SC_CTOR(or_gate)
    {
        SC_METHOD(prc_or);
        sensitive << a << b;
    }
};
