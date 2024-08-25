
#include <iostream>
using namespace std;
int main()
{
    int n,p;
    cout<<"enter 2 numbers: ";
    cin>>n>>p;
    char op;
    cout<<"enter operator: ";
    cin>>op;
    switch(op){
        case '+':
            cout<<n+p;
            break;
        case '/':
            cout<<n/p;
            break;
        case '*':
            cout<<n*p;
            break;
        case '-':
            cout<<n-p;
            break;
        default:
            cout<<"no operator found";
            break;
    }

    return 0;
}