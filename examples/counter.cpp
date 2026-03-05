#include <systemc.h>

SC_MODULE(counter)
{
    sc_in<bool> clk;
    sc_out<int> count;

    int value;

    void prc_counter()
    {
        value = 0;

        while(true)
        {
            wait();
            value++;
            count.write(value);
        }
    }

    SC_CTOR(counter)
    {
        SC_CTHREAD(prc_counter, clk.pos());
    }
};
