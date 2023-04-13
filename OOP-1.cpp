#include <iostream>

using namespace std;

class Rect
{
    private:
    int a, b;

    public:
    Rect()
    {
        readFromConsole();
    }

    Rect(int a, int b) : a(a), b(b) {}

    void readFromConsole()
    {
        cin >> a >> b;
    }

    int getPerimeter()
    {
        return (a + b) * 2;
    }
};

int main(){
    
    Rect r;
    cout << r.getPerimeter();


}