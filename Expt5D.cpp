//PRIYANSHA GOUR 
//24070123079
//ENTC-A3
//EXPERIMENT- 5
#include <iostream>
using namespace std;
int main() {
    int choice, a,b,c,d,e,f;
    cout<<"number 1: ";
    cin>>a;
    cout<<"number 2: ";
    cin>>b;

    cout<<"1.Addition"<<endl<<"2. Subtraction"<<endl<<"3.Multiplicatoin"<<endl<<"4.Division"<<endl;
   cin>>choice;
   switch(choice){
       case 1:
       c = a+b;
       cout<<c<<" is the sum "<<endl;
       break;
       case 2:
       d = a-b;
       cout<<d<<" is the difference"<<endl;
       break;
       case 3:
       e = a*b;
       cout<<e<<" is the product"<<endl;
       break;
       case 4:
       f = a/b;
       cout<<f<<" is the division"<<endl;
       break;
       default:
       cout<<"wrong input"<<endl;
       break;
       
   }
    return 0;
}
