
#include<bits/stdc++.h>
using namespace std;
double f(double x){


return sin(x*x)+(x/3)-(x/2);

}




int main(){

double a=1.0,b=2.0;
double fa=f(a);
double fb=f(b);
if(f(a)*f(b)>0){
    cout<<"invalid\n";
    return 0;
}
cout << fixed << setprecision(7);

cout<<"-----------------------------------------------------------------------"<<endl;
cout<<"no|    a|     b|      fa|     fb|     x0|       fx0|         rel erroe|     interval|      update|  "<<endl;




double error;
double itr=1;
double x;
  double prev=a;




do{
        x=a-((fa*(b-a))/(fb-fa));
        double fx=f(x);

        char update;
    double display_a=a;
    double display_b=b;

    double interval=fabs(a-b);
    error=fabs((x-prev)/x);
    if(fa*fx<0){
        b=x;
        fb=fx;
        update='b';


    }
    else{

        a=x;
        fa=fx;
        update='a';

    }

cout <<"| "<< setw(2) <<itr<<" | ";
cout<< setw(8)<< display_a << " | ";
cout<< setw(8)<< display_b << " | ";
cout<< setw(8)<< f(display_a)<< " | ";
cout<< setw(8)<< f(display_b) << " | ";
cout<< setw(8)<< x << " | ";
cout<< setw(8)<< fx << " | ";
cout<< setw(8)<< error << " | ";
cout<< setw(8)<< interval << " | ";
cout<< setw(8)<< update << " | " <<endl;;
prev=x;
itr++;

}while(error>=0.00001);



cout<<"-------------------------------------------------------------------"<<endl;
cout<<"result"<<x<<endl;
cout<<"iteration"<<itr-1<<endl;










return 0;}
