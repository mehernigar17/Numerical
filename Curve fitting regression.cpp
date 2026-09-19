#include <bits/stdc++.h>
using namespace std;


void CurveFittingRegression(int n, vector <double> X, vector <double> Y)
{
    double SUMX = 0;
    double SUMXX = 0;
    double SUMY = 0;
    double SUMXY = 0;
    for(int i =0; i <n; i++)
    {
         SUMX += log(X[i]);
         SUMXX += log(X[i]) * log(X[i]);
         SUMY += log(Y[i]);
         SUMXY += log(X[i]) * log(Y[i]);
    }

    double b = (n*(SUMXY) - (SUMX * SUMY))/((n*SUMXX)-(SUMX*SUMX));
    double a = (SUMY/n) - b*(SUMX / n);
    a = exp(a);
    cout << a << " " << b;
    double y = a*(pow(3,b));
    cout << endl <<y;
}

int main()
{
    int n;
    cin >> n;
    vector <double> X(n);
    vector <double> Y(n);

    for(int i =0; i < n; i++)
    {
        cin >> X[i];
        cin >> Y[i];
    }


   CurveFittingRegression(n,X,Y);


}

/*
5
1 0.5
2 2
3 4.5
4 8
5 12.5
*/
