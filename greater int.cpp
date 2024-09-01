#include <iostream>
using namespace std;
#include <algorithm>
int main() {
    string s="4351";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<"\n";
    return 0;
}
    
 // forms the greatest number from given number string
