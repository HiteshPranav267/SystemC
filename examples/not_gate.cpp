#include <systemc.h>

SC_MODULE(not_gate)
{
    sc_in<bool> a;
    sc_out<bool> y;

    void prc_not()
    {
        y.write(!a.read());
    }

    SC_CTOR(not_gate)
    {
        SC_METHOD(prc_not);
        sensitive << a;
    }
};
