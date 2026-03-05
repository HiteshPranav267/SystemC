#include <systemc.h>

SC_MODULE(decoder)
{
    sc_in<bool> a;
    sc_in<bool> b;

    sc_out<bool> d0;
    sc_out<bool> d1;
    sc_out<bool> d2;
    sc_out<bool> d3;

    void prc_decoder()
    {
        bool A = a.read();
        bool B = b.read();

        d0.write(!A && !B);
        d1.write(!A && B);
        d2.write(A && !B);
        d3.write(A && B);
    }

    SC_CTOR(decoder)
    {
        SC_METHOD(prc_decoder);
        sensitive << a << b;
    }
};
