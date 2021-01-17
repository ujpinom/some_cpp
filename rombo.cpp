# include <iostream>
# include <iomanip>
using namespace std;

int main(){
int filas;
cout<<"Ingrese un número de filas impar para el dibujar el rombo: ";
cin>>filas;

while(filas%2==0){

    cout<<"El número de filas debe ser par. Ingrese un número impar"<<endl;
    cin>>filas;

}

int puntoMedio=(filas+1)/2;
for (int k=0;k<2;k++){
    for (int i=0;i<puntoMedio;i++){
        for (int j=0;j<filas;j++){

            if(k==0){
                    if(j<=(puntoMedio-1+i)&&j>=(puntoMedio-1-i)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

            }
            else if(k==1){
                if(((j<(filas-1-i)&& j>(puntoMedio-1) )|| (j<=(puntoMedio-1)&&j>i) )){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        

           

        }
             cout<<endl;
    }
}



}