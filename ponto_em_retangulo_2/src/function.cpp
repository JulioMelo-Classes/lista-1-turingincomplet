#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect(const Ponto& IE, const Ponto& SD, const Ponto& P)
{
    if (IE.x > P.x || SD.x < P.x || IE.y > P.y || SD.y < P.y)
        return OUTSIDE;
    else if (IE.x < P.x && SD.x > P.x && IE.y < P.y && SD.y > P.y)
        return INSIDE;
    else return BORDER;
}
