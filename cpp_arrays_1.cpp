#include <iostream>

using namespace std;

int main()
{
    double val_1, val_2, val_3, val_4;
    double a[] = {0, 0, 0, 0};
    
    cout << "Enter the first number: ";
    cin >> val_1;
    cout << "Enter the second number: ";
    cin >> val_2;
    cout << "Enter the third number: ";
    cin >> val_3;
    cout << "Enter the fourth number: ";
    cin >> val_4;
    
    a[0] = val_1;
    a[1] = val_2;
    a[2] = val_3;
    a[3] = val_4;
    
    cout << "The array is: " << a << endl;
    cout << "First element of the array is: " << a[0] << endl;
    cout << "First element's address is: " << &a[0] << endl;
    cout << "Last element of the array is: " << a[3] << endl;
    cout << "Last element's address is: " << &a[3] << endl;
    
    return 0;
}
