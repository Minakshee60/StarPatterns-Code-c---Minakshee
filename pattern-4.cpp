
  
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5



#include<iostream>
using namespace std;

int main(){
    int outer_var;
    cin>>outer_var;
    for(int i=0;i<outer_var;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

}