    //      * * * * *
    //      * * * * *
    //      * * * * *    
    //      * * * * *
    //      * * * * *



#include<iostream>
using namespace std;

int main(){
    int outer_var;
    int inner_var;
    cin>>outer_var;
    cin >> inner_var;
    for(int i=0;i<outer_var;i++){
        for(int j=0;j<inner_var;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}