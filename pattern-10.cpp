//     *
//    ***
//   *****
//  *******
// *********
// ********* 
//  *******  
//   *****   
//    ***    
//     * 


#include<iostream>
using namespace std;

int main(){
    int outer_var;
    cin>>outer_var;
    
    for(int i=0,space=outer_var-1;i<outer_var;i++,space--){
    for(int k=space;k>0;k--){
        cout<<" ";
    }
     for(int j=0;j< (2*i)+1 ;j++){
        cout<<"*";
    }
    
    cout<<endl;
}
    
for(int i=outer_var-1,space=0;i>=0;i--,space++){
    for(int k=space;k>0;k--){
        cout<<" ";
    }
     for(int j=0;j< (2*i)+1 ;j++){
        cout<<"*" ;
    }
    
      for(int k=space;k>=0;k--){
        cout<<" ";
    }
    
    cout<<endl;
}
   return 0; 

}