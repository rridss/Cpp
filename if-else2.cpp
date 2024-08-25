#include <iostream>
using namespace std;

int main()
{
    char var;
    cin>>var;
    var= tolower(var);
    if(var=='a'||var=='e' || var=='i'|| var=='o'|| var=='u'){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }

    return 0;
}