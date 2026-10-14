#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int choice;
    bool repeat = true;

    double number1, number2;
    double result = 1;

    do {

        cout << "Please choose one of the following below." << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Power" << endl;
        cout << "7. Exit" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:cout << "--Addition--" << endl;
            cout << "Please enter two numbers with a space in between: ";
            cin >> number1 >> number2;
            result = number1 + number2;
            break;
        case 2:cout << "--Subtraction--" << endl;
            cout << "Please enter two numbers with a space in between: ";
            cin >> number1 >> number2;
            result = number1 - number2;
            break;
        case 3:cout << "--Multiplication--" << endl;
            cout << "Please enter two numbers with a space in between: ";
            cin >> number1 >> number2;
            result = number1 * number2;
            break;
        case 4:cout << "--Division--" << endl;
            cout << "Please enter two numbers with a space in between: ";
            cin >> number1 >> number2;
            result = number1 / number2;
            break;
        case 5:cout << "--Modulo--" << endl;
            cout << "Please enter two numbers with a space in between: ";
            cin >> number1 >> number2;
            result = static_cast<int>(number1) % static_cast<int>(number2);
            break;
        case 6:cout << "--Power--" << endl;
            cout << "Please enter two numbers with a space in between: ";
            cin >> number1 >> number2;
            result = 1;
            for (int count = 0; count < number2; count++)
                result *= number1;
            break;
        case 7:cout << "-Program Closed-" << endl;
            return 0;
        default:cout << "Please enter a valid choice";
        }
        cout << "The answer to your function is: " << result << endl;
    } while (repeat);

    return 0;
}
