/** 
 * @file src/polimorfismo-simmetria.cpp
 * Overload operatori simmetrici.
 */

#include <iostream>
#include <string>

using namespace std;

/** 
 * La stuct A ridefinisce l'operatore
 * come funzione globale.
 */
struct A
{
    int _a;
    A(int a) : _a(a) {}
};

/** 
 * La stuct B ridefinisce l'operatore
 * come funzione membro.
 */
struct B
{
    int _b;
    B(int b) : _b(b) {};   
};

int operator + (const A& a, const B& b) { return a._a + b._b; }
int operator + (const B& b, const A& a) { return a + b; }

int main ()
{
    struct A a(3);
    struct B b(5);
    
    cout << (a + b + a) << endl;

    return 0;
}
