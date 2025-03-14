//
#include <iostream>
using namespace std;
int main()
{
    char z;
    int x, y;
    cout << "Enter two number" << endl;
    cout << "Enter the first value: ";
    cin >> x;
    cout << "Enter the second value:";
    cin >> y;
    
    cout << "|---------------------|" << endl;
    cout << "|          +          |" << endl;
    cout << "|---------------------|" << endl;
    cout << "|          -          |" << endl;
    cout << "|---------------------|" << endl;
    cout << "|          *          |" << endl;
    cout << "|---------------------|" << endl;
    cout << "|          /          |" << endl;
    cout << "|---------------------|" << endl;
    cout << "choose any one of the following options : ";
    cin >> z;
    switch (z)
    {
    case '+':
        cout << x << " + " << y << " = " << x + y << endl;
        cout << "|---------------------|" << endl;
    cout << "        "<<x<<z<<y<<"=" <<x+y<<"       " << endl;
    cout << "|---------------------|" << endl;

        break;
    case '-':
        cout << x << " - " << y << " = " << x - y << endl;
        cout << "|---------------------|" << endl;
    cout << "        "<<x<<z<<y<<"=" <<x-y<<"       " << endl;
    cout << "|---------------------|" << endl;

        break;
    case '*':
        cout << x << " * " << y << " = " << x * y << endl;
        cout << "|---------------------|" << endl;
    cout << "        "<<x<<z<<y<<"=" <<x*y<<"       " << endl;
    cout << "|---------------------|" << endl;

        break;
    case '/':
        cout << x << " / " << y << " = " << x / y << endl;
        cout << "|---------------------|" << endl;
    cout << "        "<<x<<z<<y<<"=" <<x/y<<"       " << endl;
    cout << "|---------------------|" << endl;

        break;
    default:
        cout << "Invalid choice" << endl;
    }
    cout << "|---------------------|" << endl;
    cout << "|---------------------|" << endl;
    cout << "|          +          |" << endl;
    cout << "|---------------------|" << endl;
    cout << "|          -          |" << endl;
    cout << "|---------------------|" << endl;
    cout << "|          *          |" << endl;
    cout << "|---------------------|" << endl;
    cout << "|          /          |" << endl;
    cout << "|---------------------|" << endl;
}
