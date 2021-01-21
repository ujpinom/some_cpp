# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>
using namespace std;

void hanoi(int n_discos,char A,char  B,char C){

if(n_discos==1){
    cout<<"Mueva el disco "<<n_discos<<" de la torre"<<A<<" a la torre "<<B<<endl;
}
else{
    hanoi(n_discos-1,A,C,B);
     cout<<"Mueva el disco "<<n_discos<<" de la torre"<<A<<" a la torre "<<B<<endl;
    hanoi(n_discos-1,C,B,A);
     
}

}

int main(){

    int numeroDiscos;
    cout<<"Ingrese el numero de discos: ";
    cin>>numeroDiscos;

    hanoi(numeroDiscos,'A','B','C');

}