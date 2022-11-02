#include <iostream>
using namespace std;

void numSquared (int &referenceVariable) //& next to var means it is a ref variable.
{
    referenceVariable *= 2; //same as referenceVariable = referenceVariable * 2;
}

int main ()
{
    int value = 3;
    cout << value << endl; //prints out original.
    numSquared (value); //3 gets computed to 6.
    cout << value; //prints out the new original which is 6 not 3. w/o &, this value would still be 3. 
    return 0;
