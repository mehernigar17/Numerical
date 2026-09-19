#include <bits/stdc++.h>
using namespace std;


void LinearRegression(int n, vector <double> X, vector <double> Y)
{
    double SUMX = 0;
    double SUMXX = 0;
    double SUMY = 0;
    double SUMXY = 0;
    for(int i =0; i <n; i++)
    {
         SUMX += X[i];
         SUMXX += X[i] * X[i];
         SUMY += Y[i];
         SUMXY += X[i] * Y[i];

    }
    double b = (n*(SUMXY) - (SUMX * SUMY))/((n*SUMXX)-(SUMX*SUMX));
    double a = (SUMY/n) - b*(SUMX / n);
    cout << a << " " << b;
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


   LinearRegression(n,X,Y);


}

/*
5
1 3
2 4
3 5
4 6
5 8
*/
