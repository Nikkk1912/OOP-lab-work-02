#include <iostream>
#include <cmath>

using namespace std;

class Triangl
{
    private:
    int a, b ,c;

    public:
    Triangl()
    {
        readFromConsole();
    }

    Triangl(int a, int b, int c) : a(a), b(b), c(c) {}

    ~Triangl()
    {
        cout << "destroy\n";
    }

    void readFromConsole()
    {
        cin >> a >> b >> c;
    }

    double area()
    {
        double s, area;

        s = (a + b + c) / 2.0;

        area = sqrt(s*(s-a)*(s-b)*(s-c));

        return area;
    }
};

int main()
{
    Triangl t1;
    Triangl t2(6, 6, 6);

    if (t1.area() > t2.area())
    {
        cout << "first\n";
    } 

    else if(t1.area() < t2.area())
    {
        cout << "second\n";
    } 

    else if (t1.area() == t2.area())
    {
        cout << "equal\n";
    }

    
}