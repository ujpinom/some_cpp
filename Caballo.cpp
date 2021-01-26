# include <iostream>
# include <string>
# include <iomanip>
# include <array>

using namespace std;
array<array<int,8>,8> tablero={};
array<array<int,2>,8> movimientos={2,1, 1,2, -1,2, -2,1,
-2,-1, -1,-2, 1,-2, 2,-1};

void solver(int,int,int);

bool validarMovimiento(int,int,int ,int);

void imprimirTablero();
bool bandera=false;
bool solucionB(int, int , int);
int main(){


    int posx=0;
    int posy=0;

    int contador=2;

    tablero[0][0]=1;
    //solver(posx,posy,contador);
    solucionB(posx,posy,contador);
    imprimirTablero();

}

bool solucionB(int x,int y ,int contador){

if(contador>64)
return true;

    for(int i=0;i<8;i++){

        int moveX=movimientos[i][0];
        int moveY=movimientos[i][1];

        if(validarMovimiento(moveX,moveY,x,y)){

                x+=moveX;
                y+=moveY;
                tablero[x][y]=contador;

                if(solucionB(x,y,contador+1)){
                    return true;
                }
                else{
                    tablero[x][y]=0;
                }

        }

    }

    return false;

}

void imprimirTablero(){

    for(int i=0;i<tablero.size();i++){
        for(int j=0;j<tablero[i].size();j++){
            cout<<tablero[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solver(int posx,int posy,int contador){
    int k=0;

    while(!bandera&&k<8){
       
        
            int moveX=movimientos[k][0];
            int moveY=movimientos[k][1];

            if( validarMovimiento(moveX,moveY,posx,posy)){
               
                posx+=moveX;
                posy+=moveY;
                tablero[posx][posy]=contador;
                
                if(contador<64){
                    solver(posx,posy,contador+1);

                    if(!bandera){
                        tablero[posx][posy]=0;
                    }

                }
                else{
                    bandera=true;
                }

            }
            k++;
    
    }

}

bool validarMovimiento(int movex,int movey,int posix,int posiy){

        if(((posix+movex)<=7&&(posix+movex)>=0)&&((posiy+movey)<=7&&(posiy+movey)>=0)&&(tablero[movex+posix][movey+posiy]==0)){
            return true;
        }
        else{
            return false;
        }

}