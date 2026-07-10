#include<bits/stdc++.h>
using namespace std;
double f (double x){
    return sin(x*x)-x/6.;

}
int main(){

double a=1.0;
double b=2.0;
double fa=f(a),fb=f(b);
if (fa*fb>0){
    cout<<"invalid\n";
    return 0;

}


double prev=a;
double x,fx;
char update;
double error;
double itr=1;

cout<<fixed<<setprecision(6)<<endl;

cout<<"--------------------------------------------------------------------------------------"<<endl;

cout<<"--------------------------------------------------------------------------------------"<<endl;
cout<<"No|       a|        b|       fa|            fb|          x0|         real error|   interval|     update|"<<endl;

do{
double display_a=a;
double display_b=b;
  x=(a+b)  /2;
  fx=f(x);
  error=fabs((x-prev)/x);
  double interval=fabs(b-a);
   if (fx*fa<0){
    update='b';
    b=x;
    fb=fx;
   }
   else{
    update='a';
    a=x;
    fa=fx;

   }
  // cout<<"|"<<strew(2)<<itr<<"|"<<endl
cout << "| " << setw(2) << itr << " | ";
cout << setw(8) << display_a << " | ";
cout << setw(8) << display_b << " | ";
cout << setw(8) << f(display_a) << " | ";
cout << setw(8) << f(display_b) << " | ";
cout << setw(8) << x << " | ";
cout << setw(8) << fx << " | ";
cout << setw(10) << error << " | ";
cout << setw(8) << interval << " | ";
cout << setw(6) << update << " |" << endl;
       prev=x;
       itr++;



} while(error>=0.00001);
cout<<"-------------------------------------------------------------------"<<endl;
cout<<"result"<<x<<endl;
cout<<"iteration"<<itr-1<<endl;



















return 0;}
