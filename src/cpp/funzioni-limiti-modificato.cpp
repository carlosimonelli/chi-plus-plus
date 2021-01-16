/** 
 * @file funzioni-limiti-modificato.cpp
 * Esempio sui limiti del C++ con output in un'unica funzione.
 */

#include <iostream>
#include <iomanip> 
#include <limits>
#include <typeinfo>
#include <cxxabi.h>

using namespace std;

/**
 * Funzione template che mostra il nome, la dimensione  
 * e i valori minimi e massimi per un tipo di dato.
 */
template<typename T>
void dimensione()
{
    /** 
     * L'istruzione: 
     *   abi::__cxa_demangle(typeid(T).name(), NULL, NULL, NULL) 
     * mostra il tipo di dato della variabile corrente.
     */
    cout << setw(14)  
         << abi::__cxa_demangle(typeid(T).name(), NULL, NULL, NULL) 
         << ": "
         << sizeof(T) << " bytes,"
         << setw(4)   << "da:"   
         << setw(21)  << numeric_limits<T>::min()
         << setw(4)   << "a:"    
         << setw(21)  << numeric_limits<T>::max() 
         << endl;
}

int main()
{    
    /** 
     * Il nuovo codice della funzione main: più compatto 
     * e più facile da leggere o modificare.
     */
    dimensione<int>();
    dimensione<short int>();
    dimensione<unsigned short>();
    dimensione<long int>();
    dimensione<unsigned long>();
    return 0;
}
