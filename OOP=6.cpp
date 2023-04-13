#include <iostream>
#include <cmath>

using namespace std;

class Circl
{
    private:
    int x, y, diam;

    public:

    Circl()
    {
        readFromConsole();
    }

    void readFromConsole()
    {
        cin >> x >> y >>diam;
    }

    double disctance()
    {
        double distance;

        distance = sqrt(pow(x, 2) + pow(y, 2));

        return distance;
    }

    double radius()
    {
        return diam / 2.0;
    }

};

int main(){

    int amo, rez = 0;

    cin >> amo;

    for(int i = 0; i < amo; i++)
    {
        Circl c1;
        if (c1.disctance() <= c1.radius())
        {
            rez++;
        }
    }
    cout << rez;
}