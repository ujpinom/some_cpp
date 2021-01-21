# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>
using namespace std;

int mcd(int, int);


int main(){

    int num1;int num2;

    cout<<"Ingrese dos números enteros: ";
    cin>>num1>>num2;

    int max;int min;

    if(num1>=num2){
        max=num1;
        min=num2;
    }
    else{
        max=num2;
        min=num1;
    }

    cout<<"El mcd de "<<num1<<" y "<<num2<< " es :"<<mcd(max,min)<<endl;

}

int mcd(int x,int y){

    if(y==0){
        return x;
    }
    else{
        return mcd(y,x%y);
    }

}