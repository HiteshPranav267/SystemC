#include <systemc.h>

int sc_main(int argc, char* argv[])
{
    sc_bv<8> data;

    data = "10101010";

    cout << "Bit Vector = " << data << endl;

    cout << "Bit 0 = " << data[0] << endl;
    cout << "Bit 7 = " << data[7] << endl;

    data[3] = 1;

    cout << "Modified Bit Vector = " << data << endl;

    return 0;
}
