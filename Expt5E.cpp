//PRIYANSHA GOUR 
//24070123079
//ENTC-A3
//EXPERIMENT- 5
#include <iostream>
using namespace std;
int main() {
    int choice;
    cout<<"Select your Book: "<<endl;
    cout<<"1.1984"<<endl<<"2. Pride and Prejudice"<<endl<<"3.The alchemist"<<endl<<"4. the great gatsby"<<endl<<"5.the hobbit";
   cin>>choice;
   switch(choice){
       case 1: 
            cout<<"chosen : 1984"<<endl;
            cout<<"Qoute: War is peace. Freedom is slavery. Ignorance is strength"<<endl;
            break;
        case 2:
            cout<<"chosen : Pride and Prejudice "<<endl;
            cout<<"Qoute: Vanity and pride are different things, though the words are often used synonymously"<<endl;
            break;
        case 3:
            cout<<"chosen : The Alchemist"<<endl;
            cout<<"Qoute: When you want something, all the universe conspires in helping you to achieve it"<<endl;
            break;
       case 4:
            cout<<"chosen : The Great Gatsby"<<endl;
            cout<<"Qoute: So we beat on, boats against the current, borne back ceaselessly into the past"<<endl;
            break;
       case 5:
            cout<<"chosen : The Hobbit"<<endl;
            cout<<"Qoute: The world is not in your books and maps. It's out there"<<endl;
            break;
       default:
       cout<<"wrong input"<<endl;
       break;
       
   }
    

    return 0;
}
