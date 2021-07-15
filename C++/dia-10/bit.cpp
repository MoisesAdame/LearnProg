#include <iostream>
using namespace std;
int main () {
    //Bitwise Operators
    unsigned short bit1 = 0b1101001110110110;
    unsigned short bit2 = 0b1011111010111110;
    //Bitwise Not (~)
    unsigned short bit3 = ~bit1; //Bin Form: 0b0010110001001001 Dec Form: 11337
    unsigned short bit4 = ~bit2; //Bin Form: 0b0100000101000001 Dec Form: 16705
    //Bitwise Or (|)
    unsigned short bit5 = bit1 | bit2; //Bin Form: 0b1111111110111110 Dec Form: 65470
    //Bitwise And (&)
    unsigned short bit6 = bit1 & bit2; //Bin Form: 0b1001001010110110 Dec Form: 37558
    //Bitwise XOr (^)(Es como un or pero si hay T y T = F)
    unsigned short bit7 = bit1 ^ bit2; //Bin Form: 0b0110110100001000 Dec Form: 27912
    //Bitwise Right (expr >> n)
    unsigned short bit8 = bit1 >> 5; //Bin Form: 0b0000011010011101 Dec Form: 1693
    //Bitwise Left (expr << n)
    unsigned short bit9 = bit1 << 5; //Bin Form: 0b0111011011000000 Dec Form: 30400
    //Efecto Raro con SIGNED types y Bitwise Right
    short bit10 = 0b1000000000000000; //En vez de agregar 0 agrega 1
    short bit11 = bit10 >> 1;         //Bin Form: 0b1100000000000000 Dec Form: -16384
    //Cambiar signo mediante bitwise operations
    //No se puede, es como si el bit inicial fuera const (ESTO SI AL INICIALIZAR NO USAMOS CHAR TYPE)
    short bit12 = 0b1000000000100011;   //Bin Form: 0b1000000000100011 Dec Form: -35
    short bit13 = 0b1000000000000000;   //Bin Form: 0b0111111111011100 Dec Form: -32732

    return 0;
}
