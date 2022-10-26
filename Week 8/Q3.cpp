/* Write a c++ program to Add members of two different classes using friend functions */
#include <iostream>
using namespace std;

class paruchuri;
class pareekshith
{
    int num1;

public:
    pareekshith()
    {
        cout << "Enter number 1 : " << endl;
        cin >> num1;
    }
    friend void sumof(pareekshith a, paruchuri b);
};

class paruchuri
{
    int num2;

public:
    paruchuri()
    {
        cout << "Enter number 2 : " << endl;
        cin >> num2;
    }
    friend void sumof(pareekshith a, paruchuri b);
};

void sumof(pareekshith a, paruchuri b)
{
    cout << "Sum of number 1 and number 2 is = " << a.num1 + b.num2 << endl;
}

int main()
{
    pareekshith obj1;
    paruchuri obj2;

    sumof(obj1, obj2);

    return 0;
}
