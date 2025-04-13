#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer("bangladesh", 100);
    Cricketer *kohli = new Cricketer("bangladesh", 50);

    // cout << dhoni->jersey << endl;
    // cout << kohli->jersey << endl;
    // kohli = dhoni;
    
    // kohli->country = dhoni->country;
    // kohli->jersey = dhoni->jersey;

    *kohli = *dhoni;

    delete dhoni;
    cout << kohli->country << " " << kohli->jersey << endl;
    return 0;
}