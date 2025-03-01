#include <iostream>
using namespace std;

int decimalTobinaryConvertor(int num){
    
    int pow = 1;
    int rem;
    int binaryNumber = 0;

    while(num > 0){
        rem = num % 2;
        num /= 2;
        binaryNumber =binaryNumber + rem * pow;
        pow *= 10;    
    }

    return binaryNumber;
}

int main(){
    int num;
    cout<<"Please enter decimal number \n";
    cin>>num;

    cout<<"Binary Conversion is: " << decimalTobinaryConvertor(num);

    return 0;
}