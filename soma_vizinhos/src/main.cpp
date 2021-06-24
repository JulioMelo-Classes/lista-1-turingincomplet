/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int m;
    int n;
    int sum;
    while (cin >> std::ws >> m >> n) {
        sum = m;
        if(n>0){
            n--;
            for (; n > 0; n--) {
                m++;
                sum += m;
            }
        }
        else if (n < 0) {
            n++;
            for (; n < 0; n++) {
                m--;
                sum += m;
            }
        }
        cout << sum<<endl;
    }
    return 0;
}
