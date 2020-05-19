#include <iostream>
#include <bitset>
#include <iomanip> 

using namespace std;

typedef unsigned char byte;

int main()
{    
    byte valori[] = { 
        0b01000011, 0b00100111, 0b01101000, 0b01100001, 0b01101110, 0b01101110, 0b01101111, 0b00100000 
      , 0b01100110, 0b01101111, 0b01110010, 0b01110011, 0b01100101, 0b00100000, 0b01110100, 0b01110101
      , 0b01110100, 0b01110100, 0b01100101, 0b00100000, 0b01100101, 0b00100000, 0b01100100, 0b01110101
      , 0b01100101, 0b00100000, 0b01101100, 0b01100001, 0b00100000, 0b01110011, 0b01110100, 0b01100101
      , 0b01110011, 0b01110011, 0b01100001, 0b00100000, 0b01100101, 0b01110100, 0b11100000, 0b00100000
      , 0b00001010, 0b01001010, 0b01100101, 0b00100000, 0b01100110, 0b01101001, 0b01101111, 0b01110010
      , 0b01101001, 0b01110011, 0b01100011, 0b01100101, 0b00100000, 0b01100100, 0b01100101, 0b01101110
      , 0b01110100, 0b01110010, 0b01101111, 0b00100000, 0b01100001, 0b01110010, 0b00100000, 0b01100011
      , 0b01101111, 0b01110010, 0b01100101, 0b00100000, 0b00100111, 0b01101110, 0b00100000, 0b01101001
      , 0b01101100, 0b01101100, 0b01110101, 0b01110011, 0b01101001, 0b01101111, 0b01101110, 0b01100101 
    };
    
    byte * ptr = valori;
    
    for(int i = 0; i < sizeof(valori); i++) {
        cout << setw(4)  << i
             << setw(10) << bitset<8>(*ptr) 
             << setw(6)  << (int)*ptr 
             << setw(4)  << (char) *ptr << endl;
        ptr++;
    }
    
    return 0;
}