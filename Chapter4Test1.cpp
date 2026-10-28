#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int DisplayMenu() 
{
    int choice;

    cout << "Please choose one of the following below." << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;
    cout << "6. Power" << endl;
    cout << "7. Exit" << endl;
    cin >> choice;
    return choice;
}

int PerformArithmetic(int menuItem) 
{
    int choice;
    double number1, number2;
    double result;
    choice = menuItem;

    switch (choice)
    {
    case 1:cout << "--Addition--" << endl;
        cout << "Please enter two numbers with a space in between: ";
        cin >> number1 >> number2;
        result = number1 + number2;
        cout << "The answer to your function is: " << result << endl;
        break;
    case 2:cout << "--Subtraction--" << endl;
        cout << "Please enter two numbers with a space in between: ";
        cin >> number1 >> number2;
        result = number1 - number2;
        cout << "The answer to your function is: " << result << endl;
        break;
    case 3:cout << "--Multiplication--" << endl;
        cout << "Please enter two numbers with a space in between: ";
        cin >> number1 >> number2;
        result = number1 * number2;
        cout << "The answer to your function is: " << result << endl;
        break;
    case 4:cout << "--Division--" << endl;
        cout << "Please enter two numbers with a space in between: ";
        cin >> number1 >> number2;
        result = number1 / number2;
        cout << "The answer to your function is: " << result << endl;
        break;
    case 5:cout << "--Modulo--" << endl;
        cout << "Please enter two numbers with a space in between: ";
        cin >> number1 >> number2;
        result = static_cast<int>(number1) % static_cast<int>(number2);
        cout << "The answer to your function is: " << result << endl;
        break;
    case 6:cout << "--Power--" << endl;
        cout << "Please enter two numbers with a space in between: ";
        cin >> number1 >> number2;
        result = 1;
        for (int count = 0; count < number2; count++)
            result *= number1;
        cout << "The answer to your function is: " << result << endl;
        break;
    case 7:cout << "-Program Closed-" << endl;
        return 0;
    default:cout << "Please enter a valid choice" << endl;
    }
}

int main()
{
    int choice;
    double number1, number2;

    do
    {
        choice = DisplayMenu();
        PerformArithmetic(choice);
    } while (choice != 7);
    return 0;
}
