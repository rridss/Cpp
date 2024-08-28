#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int original=n;

    while(n>0){
        int lastdigit= n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
        
    }
    if(sum==original){
        cout<<"armstrong no.";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}