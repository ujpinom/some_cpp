# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>

using namespace std;

unsigned long long factorial(int);
int fibonacci(int);

int main(){

int fact_fib;

cout<<"Ingrese 1 para factorial o ingrese 2 para fibonacci: ";
cin>>fact_fib;

if(fact_fib==1){

    for(int i=0;i<=50;i++){

        cout<<i<<"!"<<"="<<factorial(i)<<endl;

    }
}
else{
    int posi;
    cout<<"Ingrese la posicion en la serie: ";
    cin>>posi;
    cout<<"La posicion "<<posi<<"corresponde al numero :"<<fibonacci(posi)<<endl;

}




}

unsigned long long factorial(int numero){

    if(numero==0){
        return 1;
    }
    else{
        return numero*factorial(numero-1);
    }

}

int fibonacci(int posi){

    if(posi==0){
        return 0;
    }
    if(posi==1){
        return 1;
    }
    else{
        return fibonacci(posi-1)+fibonacci(posi-2);
    }
}