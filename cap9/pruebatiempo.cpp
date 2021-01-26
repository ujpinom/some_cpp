# include <iostream>
# include <string>
# include <iomanip>
# include "tiempo.cpp"
# include <stdexcept>

using namespace std;

int main(){

    tiempo t;

    try{
    t.establecerTiempo(25,25,45);
 
    }
    catch(invalid_argument &e){
        cout<<"Un error ocurrio: "<<e.what()<<endl;
    }
    cout<<"Hora predeterminada estandar"<<endl;
    t.imprimirEstandar();
    cout<<"Hora predeterminada Universal"<<endl;
    t.imprimirUniversal();
    


}