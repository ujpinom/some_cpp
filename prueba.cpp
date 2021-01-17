# include <iostream>
# include <iomanip>
using namespace std;


int main(){

    for (int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<10;k++){
                
                if(j==1){
                    if(i<=k){
                        cout<<"*";
                        
                    }
                    else{
                        cout<<" ";
                    }
                }

                if(j==0){
                    if(k<=i){
                        cout<<"*";
                        
                    }
                    else
                    {
                        cout<<" ";
                    }
                    
                }

                if (j==2){
                    if((i+k)<10){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }

                }

                if(j==3){

                     if((i+k)<9){
                        cout<<" ";
                    }
                    else{
                        cout<<"*";
                    }

                }
            }
            cout<<setw((j+20));
        }
        cout<<setw(0)<<endl;

    }

}