#include <iostream>
using namespace std;

int main()
{

    int count = 4;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i + 1; j++)
        {
            if (j > 1)
            {
                cout << "  ";
            }
            else
            {

                cout << "* ";
            }
        }

        for (int j = i; j > 0; j--)
        {
            if (j > 1)
            {
                cout << "  ";
            }
            else
            {

                cout << "* ";
            }
        }

        cout << " " << endl;
    }

    for (int i = 0; i < count - 1; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                cout << "* ";
            }
            else
            {

            }
        }

        

        cout << " " << endl;
    }

    return 0;
}