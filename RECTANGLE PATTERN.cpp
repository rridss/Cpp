#include <iostream>
int main()
{
    int rows,columns;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"\n"<<"Enter Columns: ";
    cin>>columns;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}