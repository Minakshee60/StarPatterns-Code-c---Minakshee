//     *
//    ***
//   *****
//  *******
// *********


// for space=0;space<j=i-1;space++


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

  return 0;  

}