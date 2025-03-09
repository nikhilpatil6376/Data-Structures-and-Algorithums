#include<iostream>
using namespace std;

bool isPerfect(int num){
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return (sum == num);
}

int main(){
    int num;
    cout<<"Please enter number"<<endl;
    cin>>num;
    
    if(isPerfect(num)){
        cout<<"Given Number is Perfect";
    }else{
        cout<<"Given Number is Not Perfect";
    }

    return 0;
}