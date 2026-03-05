#include <systemc.h>

SC_MODULE(encoder)
{
    sc_in<bool> d0;
    sc_in<bool> d1;
    sc_in<bool> d2;
    sc_in<bool> d3;

    sc_out<bool> a;
    sc_out<bool> b;

    void prc_encoder()
    {
        if(d3.read())
        {
            a.write(1);
            b.write(1);
        }
        else if(d2.read())
        {
            a.write(1);
            b.write(0);
        }
        else if(d1.read())
        {
            a.write(0);
            b.write(1);
        }
        else
        {
            a.write(0);
            b.write(0);
        }
    }

    SC_CTOR(encoder)
    {
        SC_METHOD(prc_encoder);
        sensitive << d0 << d1 << d2 << d3;
    }
};
