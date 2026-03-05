#include <systemc.h>
#include "full_adder.cpp"

int sc_main(int argc, char* argv[])
{
    sc_signal<bool> a;
    sc_signal<bool> b;
    sc_signal<bool> cin;

    sc_signal<bool> sum;
    sc_signal<bool> cout;

    full_adder fa("fa");

    fa.a(a);
    fa.b(b);
    fa.carry_in(cin);
    fa.sum(sum);
    fa.carry_out(cout);

    a = 0; b = 0; cin = 0;
    sc_start(1, SC_NS);

    a = 0; b = 1; cin = 0;
    sc_start(1, SC_NS);

    a = 1; b = 0; cin = 0;
    sc_start(1, SC_NS);

    a = 1; b = 1; cin = 0;
    sc_start(1, SC_NS);

    a = 1; b = 1; cin = 1;
    sc_start(1, SC_NS);

    return 0;
}
