//PRIYANSHA GOUR 
//24070123079
//ENTC-A3
//EXPERIMENT- 5
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<<"enter number 1 : ";
    cin>>a;
    cout<<"enter number 2 : ";
    cin>>b;
    cout<<"enter number 3 : ";
    cin>>c;
    if(a>b & a>c){
        cout<<a<<" IS THE LARGEST"<<endl;
    }
    else if(b>a &b>c){
        cout<<b<<" IS THE LARGEST"<<endl;
    }
    else{
        cout<<c<<" IS THE LARGEST"<<endl;
    }
    

    return 0;
}
