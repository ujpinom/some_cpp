# include <string>
# include <array>
# include <iostream>
# include <iomanip>
# include "LibroCalificaciones.cpp"
# include <algorithm>
# include <vector>
# include <stdexcept>
# include <ctime>
# include <random>

using namespace std;

const size_t freq=13;
unsigned int tiros=0;
template<typename T>
void imprimirFreq(const array<T,freq> &);
array<double,freq> estandarizarArreglo(const array<int,freq>&);
void tirarDados(array<int,freq> &);

int main(){

cout<<"Por favor ingrese el numero de tiros :";
cin>>tiros;

array<int,freq> frecuencias={};

tirarDados(frecuencias);

array<double,freq> freq_std= estandarizarArreglo(frecuencias);



imprimirFreq(frecuencias);
cout<<"Imprimir el arreglo estandarizado."<<endl;
imprimirFreq(freq_std);

}

array<double,freq> estandarizarArreglo(const array<int,freq> &arreglo){

array<double,freq> arreglo_std={};

for( int i=0;i<arreglo.size();i++){

    arreglo_std[i]=(static_cast<double>(arreglo[i])/tiros)*100;


}

return arreglo_std;

}

void tirarDados(array<int,freq>& arreglo){

default_random_engine motor(static_cast<unsigned int>((time(0))));
uniform_int_distribution <unsigned int> aleatorio(1,6);

for (int i=0;i<tiros;i++){
    unsigned int dado1=aleatorio(motor);
    unsigned int dado2= aleatorio(motor);

    ++arreglo[dado1+dado2];
}


}
template<typename T>
void imprimirFreq(const array<T,freq> & arreglo){

     for(auto const elemento:arreglo){

         cout<<elemento<<"   ";
     }

}