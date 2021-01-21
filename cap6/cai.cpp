# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>
# include <cstdlib>
using namespace std;

void estudio();

int main(){

    estudio();

}

void estudio(){

    int num1=1+rand()%8;
    int num2=1+rand()%8;

    int resultado=num1*num2;
    int entrada;

    cout<<"Cual es el producto de "<<num1<<" con "<<num2<<" ?";
    cin>>entrada;
    if(entrada==resultado){
        cout<<"Muy bien."<<endl;
        estudio();
    }
    else{

        while (true){

            cout<<"Intente de nuevo por favor "<<endl;
            cout<<"Cual es el producto de "<<num1<<" con "<<num2<<" ?";
            cin>>entrada;

            if(entrada==resultado){
                 cout<<"Muy bien."<<endl;
                 break;
            }
        }

        estudio();
       

    }

}