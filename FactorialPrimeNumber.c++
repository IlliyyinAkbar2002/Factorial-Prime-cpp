#include <iostream>
#include <math.h>
using namespace std;

void ClearFunc()
{
    system("cls");
}

bool CheckPrime(int num)
{
    bool primeCheck = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            bool Primacheck = false;
            return Primacheck;
        }
    }
    return primeCheck;
}
void PrimeFact(int num2, int num3)
{
    if (CheckPrime(num2))
    {
        cout << "End";
    }
    else
    {
        if (num2 % num3 == 0)
        {
            num2 = num2 / num3;
            cout << num3 << " ";
            PrimeFact(num2, num3);
        }
        else if (num2 % num3 != 0)
        {
            int h;
            h = num3 + 1;
            PrimeFact(num2, h);
        }
    }
}

int main()
{

    ClearFunc();

    int number;
    int value = 2;
    char choose;

    do
    {
        cout << "Program Prime Factorial\n";
        cout << "Enter number prime factorial: ";
        cin >> number;

        // Enter Prime Factorial
        cout << "Result of prime factorial are: " << number << "\n";
        // Call th function
        PrimeFact(number, value);

        cout << "\nDo you like to try again? Y/N || y/n ";
        cin >> choose;
    } while (choose == 'Y' || choose == 'y');
    cout << "Thanks to you input prima factor";

    return 0;
}