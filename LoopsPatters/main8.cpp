// #include <iostream>
// using namespace std;

// int main()
// {

//     int count = 4;
//     int num = 0;

//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count; j++)
//         {
//             if (i<=j)
//             {

//                 cout << i + 1 << " ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << " " << endl;
//     }

//     return 0;
// }


// or 


#include <iostream>
using namespace std;

int main() {

    int count = 4 ;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++)
        {
           cout << "  ";
        }
        for (int j = 0; j < count- i; j++)
        {
             cout << i+1 << " ";
        }

        cout << " " << endl;
        
    }
    
    return 0;
}