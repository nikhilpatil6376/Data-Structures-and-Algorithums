#include <iostream>
using namespace std;

void increment(int &num)
{
    num++;
    cout << num << endl;
}

int main()
{
    int number = 5;
    increment(number);
    cout << number << endl;
    return 0;
}