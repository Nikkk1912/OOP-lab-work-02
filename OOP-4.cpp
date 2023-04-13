#include <iostream>

using namespace std;

class Rect
{
    private:
    int lengh , width;

    public:
    Rect()
    {
        readFromConsole();
    }

    void readFromConsole()
    {
        cin >> lengh >> width;
    }

    Rect(int l, int w)
    {
        lengh = l;
        width = w;
    }

    ~Rect()
    {

    }

    int area()
    {
        return lengh * width; 
    }

    int perimetr()
    {
        return 2 * (lengh + width);
    }


};

int main(){

    int command;
    cin >> command;

    Rect r1;
    Rect r2(6, 9);

    if(command == 1)
    {
        cout << r1.area() + r2.area();
    } else if (command == 2)
    {
        cout << r1.perimetr() + r2.perimetr();
    }

}
