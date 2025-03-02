#include <iostream>
using namespace std;

void increment(int num)
{
    num++;
    cout << "Inside Increment Function: " << num << endl;
}

int main()
{
    int number = 5;
    increment(number);
    cout << "Inside Main Function: " << number << endl;
    return 0;
}