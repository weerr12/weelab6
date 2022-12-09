#include<iostream>
using namespace std;

int main(){
    int i=1,odd=0,even=0;
    while(i!=0){
        cout << "Enter an integer: ";
        cin >> i;
    if(i!=0){
        if(i%2!=0){
            odd++;
        }else{
            even++;
        }
    }
    }
    cout << "#Even numbers = "<< even <<endl;
    cout << "#Odd numbers = "<< odd <<endl;
    return 0;
}
