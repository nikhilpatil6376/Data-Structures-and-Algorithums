#include<iostream>
using namespace std;

bool isPrime(int num){
    
    if(num <= 0){
        return false;
    }

    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int num;
    cout<<"Please enter number"<<endl;
    cin>>num;
    
    if(isPrime(num)){
        cout<<"Given Number is Perfect";
    }else{
        cout<<"Given Number is Not Perfect";
    }

    return 0;
}