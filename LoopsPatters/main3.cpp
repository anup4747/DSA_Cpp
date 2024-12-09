#include <iostream>
using namespace std;

int main()
{
    // Your code here

    int count = 4;

    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
            /* code */
        }

        cout << " " << endl;
    }

    return 0;
}