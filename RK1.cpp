#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double summ = 0;
    for (int n = 1;n < 11;++n){
        double p = 1/pow(n,1.5);
        summ += p;
        cout<< p <<endl;
    };
    cout<< summ <<endl;
}
