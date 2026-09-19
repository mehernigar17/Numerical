
#include <bits/stdc++.h>
using namespace std;


void LagrangeInterpolation(int n, vector <double> X, vector <double> Y, int xp)
{
    double yp = 0;
    for(int i = 0; i < n; i++)
    {
        double p = 1;
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                p*= (xp - X[j])/ (X[i] - X[j]);
            }
        }
        yp += p * Y[i];
    }

    cout << endl << yp;

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

   int xp;
   cin >> xp;

  LagrangeInterpolation(n,X,Y,xp);

}

/*
4
2 17
3 20
6 22
17 23
11
*/

