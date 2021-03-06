#include <iostream>
#include <cstdlib>

#define POS_NESSUNO -1
#define POS_ERRORE   0
#define POS_MERCURIO 1
#define POS_VENERE   2
#define POS_TERRA    3
#define POS_MARTE    4
#define POS_GIOVE    5
#define POS_SATURNO  6
#define POS_URANO    7
#define POS_NETTUNO  8
#define POS_PLUTONE  9

using namespace std;

/**
 *  mostraPianeta 
 *  Visualizza il nome di un pianeta, data la sua posizione.
 *  @param  int  pianeta Posizione del pianeta.
 *  @return bool esiste  true se il pianeta esiste.
 */
bool mostraPianeta(int pianeta )
{    
    bool esiste = true;
    
    switch( pianeta ) {
        case POS_ERRORE:   
            cout << "Valore non valido"; 
            break;
        case POS_MERCURIO: 
            cout << "Mercurio";          
            break;
        case POS_VENERE:   
            cout << "Venere";            
            break;
        case POS_TERRA:    
            cout << "Terra";             
            break;
        case POS_MARTE:    
            cout << "Marte";             
            break;
        case POS_GIOVE:    
            cout << "Giove";             
            break;
        case POS_SATURNO:  
            cout << "Saturno";           
            break;
        case POS_URANO:    
            cout << "Urano";             
            break;          
        case POS_NETTUNO:  
            cout << "Nettuno";           
            break;          
        case POS_PLUTONE:  
            cout << "Plutone";           
            break;
        default:
            esiste = false;
            cout << "Inserire un valore da: " 
                 << POS_MERCURIO 
                 << " a " 
                 << POS_PLUTONE;                    
    } 
    
    return esiste;
}

/**
 *  main
 *  Funzione principale del programma, richiama la funzione
 *  mostraPianeti passandole i valori da 1 a 9.
 */
int main(int argc, char** argv)
{    
    int p = POS_NESSUNO;

    /** Elenca tutti i Pianeti del Sistema Solare */
    for ( p = POS_MERCURIO; p <= POS_PLUTONE; p++ ) {
        cout << p << ": "; 
        mostraPianeta( p ); 
        cout << endl;
    }
        
    return 0;
}
