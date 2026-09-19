#include <bits/stdc++.h>
using namespace std;


void NewtonDividedInterpolation(int n, vector <double> X, double Y[100][100], double xp)
{

    for(int i =1; i < n; i++)
    {
        for(int j = 0; j < n- i; j++){
             Y[j][i] = (Y[j+1][i-1] - Y[j][i-1]) / (X[j+i] - X[j]);
        }
    }

    double yp = Y[0][0];
    for(int i =1; i < n; i++)
    {
        double p = 1;
        for(int j = 0; j < i; j++)
        {
            p *= (xp - X[j]);
        }
        yp += p * Y[0][i];
    }

    cout << endl << yp;


}

int main()
{
    int n;
    cin >> n;
    vector <double> X(n);
    double Y[100][100];

    for(int i =0; i < n; i++)
    {
        cin >> X[i];
        cin >> Y[i][0];
    }

   double xp;
   cin >> xp;



  NewtonDividedInterpolation(n,X,Y,xp);

}

/*
5
5 150
7 392
11 1452
13 2366
21 9702
6
*/


