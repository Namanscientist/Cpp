// Accept a character from the user and check whether
// it's a vowel or constant.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the Alphabet : ";
    cin>>ch;
    if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'){
        cout<<"It is a vowel";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
    
}