//
// Created by jsteeg on 4/13/21.
//
# include <iostream>
using namespace std ;
int main () {
    int *funnyNumbers = new int[5];
    cout << sizeof(funnyNumbers) << endl;
    cout << sizeof(*funnyNumbers) << endl;
    int c = 1;
    for (int i = 0; i < 20; i++) {
        char* funnyChars = (char*) funnyNumbers;
        funnyChars += i;
        *funnyChars = c;
        c += 1;
    }
    for (int i = 0; i < 5; i++) {
        cout << funnyNumbers[i] << endl;
    }
    delete[] funnyNumbers;
}


/*
 * i)
 * sizeof(funnyNumbers) returns the size of the address (8 Byte)
 *
 * sizeof(*funnyNumbers) return the size of the first element of funnyNumbers (int --> 4 Byte)
 *
 *
 * ii)
 * The program allocates an array of integers and then writes through a cast from int-pointer
 * to char-pointer chars into the allocated int-array. Because an int is made out of four bytes and the size
 * of the int-array is 5, we can write 5*4 = 20 chars/bytes (thus the loop-length of 20). When we add i to our char-pointer,
 * we jump i bytes further in memory (size of an char).
 * In our bytes in memory, the loop is counting up until 20 (14h), writing sequentially byte for byte into our int-array.
 * At the end, we interpret the written chars as integer, combining 4 bytes in memory as one integer and printing them out.
 * So we get:
 * (Low to High)
 * 01 02 03 04h = 67305985
 * 05 06 07 08h = 134678021
 * 09 0A 0B 0Ch = 202050057
 * 0D 0E 0F 10h = 269422093
 * 11 12 13 14h = 336794129
 */