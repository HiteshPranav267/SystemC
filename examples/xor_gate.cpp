#include <systemc.h>

SC_MODULE(xor_gate)
{
    sc_in<bool> a;
    sc_in<bool> b;

    sc_out<bool> y;

    void prc_xor()
    {
        y.write(a.read() ^ b.read());
    }

    SC_CTOR(xor_gate)
    {
        SC_METHOD(prc_xor);
        sensitive << a << b;
    }
};
