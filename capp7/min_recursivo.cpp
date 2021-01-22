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

const size_t size_arreglo=10;

int minimoRecursivo(const array<int,size_arreglo>&,unsigned int,unsigned int,int);


int main(){

array<int,size_arreglo> arreglo1={3,4,6,7,-12,9,10,76,-1,-5};

cout<<"El elemento minimo de arreglo1 es :"<<minimoRecursivo(arreglo1,0,arreglo1.size()-1,0)<<endl;

}

int minimoRecursivo(const array<int,size_arreglo>& arreglo,unsigned int min,unsigned int max,int helper){

int temp=arreglo[min];

if(arreglo[max]<arreglo[min]){
    temp=arreglo[max];

}
else if(arreglo[max]>arreglo[min]){
    temp=arreglo[min];
}

if(helper>temp){
    helper=temp;
}

if(min>max){
    return helper;
}

else{
    return minimoRecursivo(arreglo,min+1,max-1,helper);
}


}

