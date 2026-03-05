#include <systemc.h>

SC_MODULE(shift_register)
{
    sc_in<bool> clk;
    sc_in<bool> data_in;

    sc_out<bool> data_out;

    bool r1, r2, r3;

    void prc_shift()
    {
        while(true)
        {
            wait();

            r3 = r2;
            r2 = r1;
            r1 = data_in.read();

            data_out.write(r3);
        }
    }

    SC_CTOR(shift_register)
    {
        SC_CTHREAD(prc_shift, clk.pos());
    }
};
