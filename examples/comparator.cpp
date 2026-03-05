#include <systemc.h>

SC_MODULE(comparator)
{
    sc_in<int> a;
    sc_in<int> b;

    sc_out<bool> equal;
    sc_out<bool> greater;
    sc_out<bool> less;

    void prc_compare()
    {
        equal.write(a.read() == b.read());
        greater.write(a.read() > b.read());
        less.write(a.read() < b.read());
    }

    SC_CTOR(comparator)
    {
        SC_METHOD(prc_compare);
        sensitive << a << b;
    }
};
