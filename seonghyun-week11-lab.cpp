#include "iostream"
#include "math.h"

using namespace std;

double add (float newNumber1, float newNumber2);
double subtract (float newNumber1, float newNumber2);
double divide (float newNumber1, float newNumber2);
double multiply (float newNumber1, float newNumber2);
double sqaureRoot (float newNumber1);
double exponent (float newNumber1, float newNumber2);

int main() 
{

    int choice;
    float number1, number2;
    int number3, number4;

    cout << endl;    
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Divide" << endl;
    cout << "4. multiply" << endl;
    cout << "5. Sqaure Root" << endl;
    cout << "6. Base with exponent" << endl;
    cout << endl;
    cout << "Please, select the type of calculation:" << endl;

    cin >> choice;

    if (cin.fail() || choice < 1 || choice > 6) 
    {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
        return main();
    }

    if (choice == 1) 
    {
        double resultAdd;
        cout << "Enter your two numbers: " << endl;
        cin >> number1 >> number2;
        resultAdd = add ( number1, number2);
        cout << number1 << " + " << number2 << " = " << resultAdd << endl; 
        return main();
    }  
    else if (choice == 2) 
    {
        double resultSubtract;
        cout << "Enter your two numbers: " << endl;
        cin >> number1 >> number2;
        resultSubtract = subtract ( number1, number2 );
        cout << number1 << " - " << number2 << " = " << resultSubtract << endl; 
        return main();
    }
    else if (choice == 3) 
    {
        double resultDivide;
        cout << "Enter your two numbers: " << endl;
        cin >> number1 >> number2;
        resultDivide = divide ( number1, number2 );
        cout << number1 << " - " << number2 << " = " << resultDivide << endl; 
        return main();
    }
    else if (choice == 4) 
    {
        double resultMultiply;
        cout << "Enter your two numbers: " << endl;
        cin >> number1 >> number2;
        resultMultiply = multiply ( number1, number2 );
        cout << number1 << " * " << number2 << " = " << resultMultiply << endl;
        return main(); 
    }
    else if (choice == 5) 
    {
        double resultSquareRoot;
        cout << "Enter your numbers: " << endl;
        cin >> number1;
        resultSquareRoot = sqaureRoot ( number1 );
        cout << "square root of " << number1 << " = " << resultSquareRoot << endl; 
        return main();
    }

    else if(choice == 6) 
    {
        double resultExponent;        
        cout << "Enter your base number: " << endl;
        cin >> number1;
        cout << "Enter your exponent number: " << endl;
        cin >> number2;
        resultExponent = exponent ( number1, number2 );
        cout << number1 << " ^ " << number2 << " = " << resultExponent << endl; 
        return main();
    }
return 0;
}

// Add
double add (float newNumber1, float newNumber2) {
    double resultAdd;    
    resultAdd = newNumber1 + newNumber2;
    return resultAdd;
}

// Subtract
double subtract (float newNumber1, float newNumber2) {
    double resultSubtract;    
    resultSubtract = newNumber1 - newNumber2;
    return resultSubtract;
}

// Divide
double divide (float newNumber1, float newNumber2) {
    double resultDivide;    
    resultDivide = newNumber1 / newNumber2;
    return resultDivide;
}

// Multiply
double multiply (float newNumber1, float newNumber2) {
    double resultMultiply;    
    resultMultiply = newNumber1 * newNumber2;
    return resultMultiply;
}

// SqaureRoot
double sqaureRoot (float newNumber1) {
    double resultSquareRoot;    
    resultSquareRoot = sqrt( newNumber1 );
    return resultSquareRoot;
}

//Exponent
double exponent (float newNumber1, float newNumber2) {
    double resultExponent;    
    resultExponent = pow (newNumber1, newNumber2);
    return resultExponent;
}

