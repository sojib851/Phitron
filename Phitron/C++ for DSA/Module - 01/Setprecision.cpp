#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double d = 23.34566834;
    cout << fixed << setprecision(1) << d << endl;
    // dosomik er por koy digit nibo ata korte hole setprecision() lage

    return 0;
}