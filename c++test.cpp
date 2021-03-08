#include <iostream>
#include <cstdlib>
using namespace std;

int displayMenu(){
    int x;
    while(1){

        cout<<"DIALEKSE 1 GIA PRAKSI ME AKAIREOUS\nDIALEKSE 2 GIA PRAKSI ME PRAGMATIKOUS\nDIALEKSE 3 GIA TERMATISMO PROGRAMMATOS.."<<endl;
        cin>>x;
        if ( x==1 || x==2 || x==3){
            break;
        }
    }
    return x;
}
void integerOperations(){
    int x,y;
    char z;
   cout<<"DWSE 1o ARITHMO: ";
   cin>>x;
   cout<<"DWSE 2o ARITHMO: ";
   cin>>y;

   while(1){
        cout<<"DWSE PRAKSI - + / *: ";
        cin>>z;
        if ( z == '-' || z=='+' || z=='/' || z=='*'){
            if(z=='/' && y==0){
                cout<<"DIAIRESH ME 0 , DIALEKSE ALLH PRAKSH"<<endl;
                continue;
            }
            break;
        }
   }

   if (z=='-'){
        cout<<x<<z<<y<<"="<<x-y<<endl;
   }
   else if (z=='+'){
        cout<<x<<z<<y<<"="<<x+y<<endl;
   }
   else if (z=='/'){
        cout<<x<<z<<y<<"="<<x/y<<endl;
   }
   else{
        cout<<x<<z<<y<<"="<<x*y<<endl;
    }
}
void realOperations(){
    float x,y;
    char z;
   cout<<"DWSE 1o ARITHMO: ";
   cin>>x;
   cout<<"DWSE 2o ARITHMO: ";
   cin>>y;

   while(1){
        cout<<"DWSE PRAKSI - + / *: ";
        cin>>z;
        if ( z == '-' || z=='+' || z=='/' || z=='*'){
            if(z=='/' && y==0){
                cout<<"DIAIRESH ME 0 , DIALEKSE ALLH PRAKSH"<<endl;
                continue;
            }
            break;
        }
   }

   if (z=='-'){
        cout<<x<<z<<y<<"="<<x-y<<endl;
   }
   else if (z=='+'){
        cout<<x<<z<<y<<"="<<x+y<<endl;
   }
   else if (z=='/'){
        cout<<x<<z<<y<<"="<<x/y<<endl;
   }
   else{
        cout<<x<<z<<y<<"="<<x*y<<endl;
    }
}


int main(void){
    int choice;

    while(1){

        choice = displayMenu();

        if ( choice == 3 ){
            break;
        }
        else if( choice == 1){
            integerOperations();
        }
        else{
            realOperations();
        }
    }

system("pause");
return 0;
}
