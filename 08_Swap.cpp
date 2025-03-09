#include<iostream>
using namespace std;

void SwapWithThreeVariable(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void SwapWithoutThreeVariable(int &num1, int &num2){
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int main(){
    int num1, num2;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    //SwapWithThreeVariable(num1, num2);
    SwapWithoutThreeVariable(num1, num2);

    cout << endl<<"After Swaping:" << endl;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    return 0;
}