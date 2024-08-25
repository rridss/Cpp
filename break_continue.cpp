#include <iostream>
using namespace std;
int main()
{
    int pocmoney=3000;
    for(int date=1;date<=5;date++){
        if(date%2==0){
            continue;
        }
        if(pocmoney==0){
            break;
        }
        
        cout<<"go out !!";
        pocmoney -=500;
        
    }
}