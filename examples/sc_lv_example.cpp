#include <systemc.h>

int sc_main(int argc, char* argv[])
{
    sc_lv<8> data;

    data = "10XZ1010";

    cout << "Logic Vector = " << data << endl;

    data[2] = SC_LOGIC_1;

    cout << "Modified Logic Vector = " << data << endl;

    return 0;
}
