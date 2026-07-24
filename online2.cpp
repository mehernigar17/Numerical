#include<bits/stdc++.h>
using namespace std;

double horners(vector<double>&shohog,double x)
{
   double p3 = shohog[0];
   for(int i = 1; i < shohog.size(); i++)
   {
       p3 = p3 * x + shohog[i];
   }
   return p3;
}

double f(double x)
{
    return x*x*x+exp(-x)-5*sin(x)-2;
}
double fder(double x)
{
    return 3*(x*x) - exp(-x) - 5*cos(x);
}
int main()
{
    double x0 = 0.5;
    double error,x1,f1,f2,f0,interval;
    int iteration = 1;
    do
    {
        f1 = f(x0);
        f2 = fder(x0);

        if(f2 == 0)
        {
            cout << "Derivative zero" << endl;
            break;
        }

        x1 = x0 - (f1/f2);
        error = fabs((x1 - x0));

        printf("%3d|%10.6f|%10.6f|%10.6f|%10.6f|%10.6f|%10.6f",iteration, x0, x1, f(x1), fder(x1), error, error);

        iteration++;
        x0 = x1;

        cout << endl;
    }
    while(fabs(error) >=0.000001);

    cout << endl;
    printf("\nFinal Root = %.7f\n", x1);
    vector <double> shohog = {0.5,1.5,2.5};
    cout << endl;
    cout << horners(shohog,x1);


}


