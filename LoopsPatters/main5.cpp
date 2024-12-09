#include <iostream>
using namespace std;

int main()
{
    // Your code here

    int count = 4;
    int j = 0;

    for (int i = 0; i < count; i++)
    {
        for (j = 1; j <= i + 1; j++)
        {
            /* code */
            cout << j << " ";
        }
        cout << " " << endl;
    }

    return 0;
}