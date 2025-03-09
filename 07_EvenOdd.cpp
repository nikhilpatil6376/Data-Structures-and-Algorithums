#include<iostream>
using namespace std;

bool isEven(int num){
    return (num % 2 == 0);
}

int main(){
    int num;
    cout<<"Pleae Enter the Number: ";
    cin>>num;

    if(isEven(num)){
        cout<<"Given Number Is Even";
    }else{
        cout<<"Given Number Is Odd";
    }

    return 0;
}
