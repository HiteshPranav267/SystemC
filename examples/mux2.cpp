#include <systemc.h>

SC_MODULE(mux2)
{
    sc_in<bool> a;
    sc_in<bool> b;
    sc_in<bool> sel;

    sc_out<bool> y;

    void prc_mux()
    {
        if(sel.read() == 0)
            y.write(a.read());
        else
            y.write(b.read());
    }

    SC_CTOR(mux2)
    {
        SC_METHOD(prc_mux);
        sensitive << a << b << sel;
    }
};
