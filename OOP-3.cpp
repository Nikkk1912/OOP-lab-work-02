#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

class Triang
{
    private:
    int a, b, c;

    public:
    Triang()
    {
        readFromConsole();
    }

    Triang(int a, int b, int c) : a(a), b(b), c(c) {}

    void readFromConsole()
    {
        cin >> a >> b >> c;
    }
    double getArea()
    {
        double s, area;

        s = (a + b + c) / 2.0;

        area = sqrt(s*(s-a)*(s-b)*(s-c));

        return area;
    }

};

int main(){
    int amo;
    double rez;

    cin >> amo;
    for (int i = 0; i < amo; i++){
    Triang t;
    rez += t.getArea();
    }
    cout <<fixed << setprecision(2) << rez;
}