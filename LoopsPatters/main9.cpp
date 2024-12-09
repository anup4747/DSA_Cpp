// pyramid pattern

#include <iostream>
using namespace std;

int main()
{
    // Your code here

    int count = 4;
    int count2 = count - 1;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <count-i-1; j++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i+1 ; j++)
        {
            cout <<j;
        }

        for (int j =i; j >0; j--)
        {
            cout <<j;
        }


        cout << " " << endl;
    }

    return 0;
}