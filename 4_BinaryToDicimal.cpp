#include <iostream>
using namespace std;

int binaryToDecimalConvertor(int num){
    int pow = 1;
    int rem;
    int decimalNumber = 0;
    
    while(num > 0){
        rem = num % 10;
        num /= 10;
        decimalNumber = decimalNumber + rem * pow;
        pow *= 2;    
    }

    return decimalNumber;
}

int main(){
    int num;
    cout<<"Please enter binary number \n";
    cin>>num;

    cout<<"Decimal Conversion is: " << binaryToDecimalConvertor(num);

    return 0;
}