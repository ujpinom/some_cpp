# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>
using namespace std;

double exp(double, int);


int main(){

    double base;int exponente;

    cout<<"Ingrese la base: ";
    cin>>base;

    cout<<"Ingrese el exponete. Deber ser entero";
    cin>>exponente;

    cout<<base<<" elevado a la "<<exponente<<" es : "<<exp(base,exponente)<<endl;

}

double exp(double base,int exponente){

    if(exponente==1){
        return base;
    }
    else{
        return base*exp(base,exponente-1);
    }
}