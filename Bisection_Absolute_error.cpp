
1. Bisection Method
// Using Absolute Error method
#include <bits/stdc++.h>
using namespace std;

double f(double x){
    double value = pow(x,3) - x - 2;
    return value;
}
int main(){
    double a = 1, b = 2;
    if (f(a) * f(b) < 0){
        double c;
        do{
            c = (a + b) / 2;
            if (f(a) * f(c) < 0){
                b = c;
            }
            else a = c;
        }while(fabs(a - b) >= 0.001);
        cout << c;
    }
    else cout << "Inappropriate Initial Method";
    cout<<endl;
}
