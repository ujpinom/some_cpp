# include <iostream>
# include <string>
# include <iomanip>
# include "tiempo.h"
# include <stdexcept>

using namespace std;

tiempo::tiempo()
:hora(0),minuto(0),segundo(0)
{

}// fin del constructor

void tiempo::establecerTiempo(int horaa,int minutoo,int segundoo){

if((horaa>=0&&horaa<24) &&(minutoo>=0 && minutoo<60)&&(segundoo>=0 && segundoo<60)){
    hora=horaa;minuto=minutoo;segundo=segundoo;
}
else{
    throw invalid_argument("Los valores ingresados no son permitidos");
}

}

void tiempo::imprimirUniversal()const{

    cout<<setfill('0')<<setw(2)<<hora<<":"<<setw(2)<<minuto<<":"<<setw(2)<<segundo<<endl;



}

void tiempo::imprimirEstandar() const{

    cout<<((hora==0||hora==12)? 12:hora%12)<<":"<<setw(2)<<minuto<<":"<<setw(2)<<segundo<<setw(2)<<((hora<12?"AM":"PM"))<<endl;

}