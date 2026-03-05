#include <systemc.h>

SC_MODULE(reg)
{
    sc_in<bool> clk;
    sc_in<int> data_in;

    sc_out<int> data_out;

    int stored_value;

    void prc_register()
    {
        while(true)
        {
            wait();
            stored_value = data_in.read();
            data_out.write(stored_value);
        }
    }

    SC_CTOR(reg)
    {
        SC_CTHREAD(prc_register, clk.pos());
    }
};
