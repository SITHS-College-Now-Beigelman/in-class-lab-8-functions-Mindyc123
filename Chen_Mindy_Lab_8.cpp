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

double getSum(double numOne, double numTwo, double numThree)
{
    return numOne + numTwo + numThree; //The getSum function will return the sum of the three numbers
}

int main()
{
    double num;

    cout << "Enter a decimal number" <<endl;
    cin >> num;

    cout << "The square root of " << num << " is " << sqrt(num)<<endl;
    cout << num << " rasied to the 4th power is " << pow(num , 4)<<endl;
    cout << "The floor of " << num << " is " << floor(num) <<endl; //Uses premade functions on the input number

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product is: "
        << doubleMultiply(num1, num2) <<endl; //Uses the function doubleMultiply and outputs the results

    double result;

    double numOne, numTwo, numThree;

    cout << "Give me three decimal numbers" <<endl;
    cin >> numOne >> numTwo >> numThree;
    
    result = getSum(numOne, numTwo, numThree); //Uses the function getSum and sets it as the result

    cout << "The sum is: " << result << endl; // Outputs the result
    
    return 0;
}
/*
Enter a decimal number
.09
The square root of 0.09 is 0.3
0.09 rasied to the 4th power is 6.561e-05
The floor of 0.09 is 0
Enter two integers: 90 76
Twice the product is: 13680
Give me three decimal numbers
5.65 4.32 5.67
The sum is: 15.64
*/
