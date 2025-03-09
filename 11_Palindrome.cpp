#include<iostream>
using namespace std;

int palindrome(int num){
    int palindrome = 0;
    int rem;
    
    while(num > 0){
        rem = num % 10;
        num /= 10;
        palindrome = palindrome * 10 + rem;
    }
    
    return palindrome;
}

int main(){
    int num;
    cout<<"Please enter number"<<endl;
    cin>>num;
    
    cout<< "Palindrome of given number: "<<palindrome(num);

    return 0;
}