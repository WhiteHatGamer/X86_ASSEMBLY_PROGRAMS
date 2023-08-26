#include <iostream>

using namespace std;

int main()
{
    int i=0;
    _asm 
    {
        mov i, 12345
    }
    cout << "The Result is: " << i << endl;
    return 0;
}
