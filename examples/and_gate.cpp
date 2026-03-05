#include <systemc.h>

SC_MODULE(and_gate)
{
    sc_in<bool> a;
    sc_in<bool> b;

    sc_out<bool> y;

    void prc_and()
    {
        y.write(a.read() & b.read());
    }

    SC_CTOR(and_gate)
    {
        SC_METHOD(prc_and);
        sensitive << a << b;
    }
};
