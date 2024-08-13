// * 
// * * 
// * * * 
// * * * * 
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
    // for(int i=0;i<outer_var;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    //   for(int i=outer_var-1;i>0;i--){
    //     for(int j=0;j<i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    
    for(int i=1;i<=(2*outer_var)-1;i++){
        int star=i;
        if(i>outer_var){
            star=2*outer_var-i;
        }
        for(int j=0;j<star;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    
   return 0; 

}