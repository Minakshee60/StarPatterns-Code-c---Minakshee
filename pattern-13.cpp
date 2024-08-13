// odd-row starts with 1 
// even row startswith 0 
// 6
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
// 0 1 0 1 0 1 




#include<iostream>
using namespace std;

int main(){
    int outer_var;
    cin>>outer_var;
    int start;
    for(int i=1;i<=outer_var;i++){
        // if(i%2==0){
        //     for(int j=0;j<i;j++){
        //         cout<<j%2<<" ";
        //     }
            
        // }
        // else{
        //      for(int j=i;j>0;j--){
        //         cout<<j%2<<" ";
        //     }
        // }
        if(i%2==0) start=0;
        else  start=1;

        for(int j=0;j<i;j++){
                cout<<start<<" ";
                start=1-start;
            }

        cout<<endl;
    }
    
   return 0; 

}