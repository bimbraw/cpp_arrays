#include <iostream>

using namespace std;

int main()
{
    int a[3][3] = {{2, 2, 2}, {2, 2, 2}, {2, 2, 2}};
    int val;
    
    for (int i = 0; i < 3; i ++)
    {
        for  (int j = 0; j < 3; j++)
        {
            cout << "enter the value in " << i+1 << " row and " << j+1 << " column: ";
            cin >> val;
            a[i][j] = val;
            cout << "The value in " << i+1 << " row and " << j+1 << " column is: " << a[i][j] << endl;
        }
    }
    
    cout << "Array is: " << endl;
    cout << a[0][0] << "    " << a[0][1] << "    " << a[0][2] << endl;
    cout << a[1][0] << "    " << a[1][1] << "    " << a[1][2] << endl;
    cout << a[2][0] << "    " << a[2][1] << "    " << a[2][2] << endl;
    
    
    return 0;
}
