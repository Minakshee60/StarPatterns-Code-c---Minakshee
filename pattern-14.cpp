

// 1      1
// 12    21
// 123  321
// 12344321



#include<iostream>
using namespace std;

int main(){
    int outer_var;
    cin>>outer_var;
    
    for(int i=1;i<=outer_var;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*outer_var-(2*i);k++){
            cout<<" ";
        }
         for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
        
    }
   
    
   return 0; 

}