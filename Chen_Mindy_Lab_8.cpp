//Mindy Chen
//Lab 8
//10.4.24

#include <iostream>
#include <cmath>

using namespace std;

int doubleMultiply(int a, int b) //Declare function
{
    int product;
    product = a * b * 2;
    return product; //The doubleMultiply function will return the product variable which multiplies a b and 2 together
}
int main()
{
    double num;
    
    cout << "Enter a decimal number" <<endl;
    cin >> num;

    cout << "The square root of " << num << " is " << sqrt(num)<<endl;
    cout << num << " rasied to the 4th power is " << pow(num , 4)<<endl;
    cout << "The floor of " << num << " is " << floor(num) <<endl;

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product is: "
        << doubleMultiply(num1, num2) <<endl; //Uses the function doubleMultiply and outputs the results

    return 0;
}
/*
Enter two integers: 15 67
Twice the product is: 2010
*/