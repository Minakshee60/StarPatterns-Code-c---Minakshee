
// * * * * *
// * * * *
// * * * 
// * *
// *

#include<iostream>
using namespace std;

int main(){
    int outer_var;
    cin>>outer_var;
    for(int i=outer_var;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}