#include <systemc.h>

SC_MODULE(d_flipflop)
{
    sc_in<bool> clk;
    sc_in<bool> d;

    sc_out<bool> q;

    void prc_dff()
    {
        while(true)
        {
            wait();
            q.write(d.read());
        }
    }

    SC_CTOR(d_flipflop)
    {
        SC_CTHREAD(prc_dff, clk.pos());
    }
};
