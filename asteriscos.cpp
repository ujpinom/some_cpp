# include<iostream>
# include<string>
 using namespace std;

 int main(){
    unsigned int filas; unsigned int col;

    cout<<"Ingrese el numero de filas :"<<endl;
    cin>>filas;
    cout<<"Ingrese el numero de columnas"<<endl;
    cin>>col;

    unsigned int contador=1;
    while (contador<=filas)
    {
        int contador1=1;
         while (contador1<=col){

                if(contador%2!=0){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<"*";
                }
                ++contador1;
         }
         contador++;
         cout<<endl;
    }
 }