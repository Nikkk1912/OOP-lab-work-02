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

    bool chech()
    {
        double d;
        d = sqrt(pow(x-6, 2) + pow(y-6, 2));
        

        if (d <= (diam / 2.0) + 6 && d >= (diam / 2.0) - 6 && d >= 6 - (diam / 2.0))
        {
            return true;
        }
        return false;
    }

};

int main(){

    int amo, rez = 0;

    cin >> amo;

    for(int i = 0; i < amo; i++)
    {
        Circl c1;
        if (c1.chech() == true)
        {
            rez++;
        }
    }
    cout << rez;
}