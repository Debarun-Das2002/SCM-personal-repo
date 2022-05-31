#include <iostream>

using namespace std;

int main()
{
    char x;
    cout << "Enter any character: ";
    cin >> x;

    if (int(x)>= 65 && int(x)<= 90)
        cout << x << " it is UpperCase character\n";

    else if (int(x)>= 97 && int(x)<= 122)
        cout << x << " it is LowerCase character\n";

    else
        cout <<int(x)<< "not alphabets\n";

    return 0;
}