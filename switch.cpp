
#include <iostream>
using namespace std;
int main()
{
    char button;
    cin>>button;
    switch(button){
        case 'a':
            cout<<"Hello";
            break;
        case 'b':
            cout<< "Namaste";
            break;
        case 'c':
            cout<<"salut";
            break;
        case 'd':        
            cout<<"ciao";
            break;
        default:
            cout<<"no button found";
            break;
        
    }

    return 0;
}