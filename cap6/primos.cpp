# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>
using namespace std;

bool esprimo(int);


int main(){

// este programa determina los números primos entre 2 y 10000
int contador=0;
for (int i=2;i<=1000000;i++)
{
    if(esprimo(i)){
        ++contador;
    }
}

cout<<"La cantidad de números primos entre 2-10000 es de : "<<contador<<endl;

}

bool esprimo(int numero){

    bool bandera=true;

    for (int i=2;i<=sqrt(numero);i++){
         if (numero%i==0){
             bandera=false;
             break;
         }
    }

    return bandera;

}