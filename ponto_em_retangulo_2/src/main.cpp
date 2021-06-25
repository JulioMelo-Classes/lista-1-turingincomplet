/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    Ponto r1, r2, p, ie, sd;
    array<string, 4>sres = { "inside","border","outside","invalid" };
    while (cin >> std::ws >> r1.x >> r1.y >> r2.x >> r2.y >> p.x >> p.y) {
        if (r1.x == r2.x && r1.y == r2.y) {
            cout << sres[3] << endl;
            continue;
        }
        ie = { min(r1.x,r2.x),min(r1.y,r2.y) };
        sd= { max(r1.x,r2.x),max(r1.y,r2.y) };
        location_t r = pt_in_rect(ie, sd, p);
        cout << sres[r] << endl;
    }
    return 0;
}