
#include <iostream>
using namespace std;
int main()
{
    int original,reversed=0;
    cout<<"enter number: ";
    cin>>original;
    while(original>0){
        int lastdigit= original%10;
        reversed= reversed*10+ lastdigit;
        original=original/10;
    }
    cout<<reversed;
    

    return 0;
}