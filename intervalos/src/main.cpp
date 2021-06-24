/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

double getp(double f, int t) {
    return 100 * (f / t);
}


int main(void)
{
    int x;
    int n=0;
    double a=0, b=0, c=0, d=0, e=0;
    while (cin >> std::ws >> x) {
        n++;
        if (x >= 0 && x < 25)
            a++;
        else if (x >= 25 && x < 50)
            b++;
        else if (x >= 50 && x < 75)
            c++;
        else if (x >= 75 && x < 100)
            d++;
        else e++;
    }
    a = getp(a, n);
    b = getp(b, n);
    c = getp(c, n);
    d = getp(d, n);
    e = getp(e, n);

    cout <<setprecision(4) << a << endl << b << endl<< c << endl << d << endl << e << endl;
    
    return 0;
}
