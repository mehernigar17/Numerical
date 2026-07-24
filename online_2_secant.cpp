#include<bits/stdc++.h>
using namespace std;

double f(double x){

return x*x*x+exp(-x)-5*sin(x)-2;
}

double horner(vector<double>&coeff,double x){

double result=coeff[0];
for( int i=1;i<coeff.size();i++){
result=result*x+coeff[i];
}
return result;


}

int main(){


double x1=0.3;
double x2=1;
double f1,f2,x3,error,preverror;
int itr=1;
do{
f1=f(x1);
f2=f(x2);
x3 = x2 - ((f2*(x2-x1))/(f2-f1));
error=fabs((x3-x2));
printf("%3d| %10.6f| %10.6f| %10.6f", itr , x1 , x2 , x3);
if(f(x3)>0){
    cout<<"positive"<<endl;
}
else{
    cout<<"negative"<<endl;
}
printf(" %10.6f| %10.6f ", error, preverror);
x1=x2;
x2=x3;

}


while(error >= 0.000001);

   cout << "Approx root: " <<x3 << endl;

   vector <double> coeff = {0.5,1.5,2.5};
  cout <<"poly root"<<horner(coeff,x3)<<endl;





return 0;
}
