#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the starting digit : ";
    cin>>n;
    for (int i=1;i<=10*n-1;i+=10){
        cout<<i<<" "<<endl;
    }    
}