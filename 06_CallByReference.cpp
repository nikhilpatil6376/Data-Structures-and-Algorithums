#include <iostream>
using namespace std;

void increment(int &num)  //Alias
{
    num++;
    cout << num << endl;
}

void decrement(int* num)  //pointers
{
    (*num)--;
    cout << *num << endl;
}

int main()
{
    int number1 = 5;
    int number2 = 5;
    increment(number1);
    cout << number1 << endl;

    decrement(&number2);
    cout << number2 << endl;

    return 0;
}