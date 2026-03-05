#include <systemc.h>
#include "half_adder.cpp"

SC_MODULE(full_adder)
{
    sc_in<bool> a;
    sc_in<bool> b;
    sc_in<bool> carry_in;

    sc_out<bool> sum;
    sc_out<bool> carry_out;

    sc_signal<bool> s1;
    sc_signal<bool> c1;
    sc_signal<bool> c2;

    half_adder ha1;
    half_adder* ha2_ptr;

    void prc_or()
    {
        carry_out.write(c1.read() | c2.read());
    }

    SC_CTOR(full_adder) : ha1("ha1")
    {
        ha1.a(a);
        ha1.b(b);
        ha1.sum(s1);
        ha1.carry(c1);

        ha2_ptr = new half_adder("ha2");

        ha2_ptr->a(s1);
        ha2_ptr->b(carry_in);
        ha2_ptr->sum(sum);
        ha2_ptr->carry(c2);

        SC_METHOD(prc_or);
        sensitive << c1 << c2;
    }

    ~full_adder()
    {
        delete ha2_ptr;
    }
};
