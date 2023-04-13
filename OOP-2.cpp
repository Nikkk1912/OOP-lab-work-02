#include <iostream>
#include <vector>

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

    int getArea()
    {
        return a * b;
    }
};

int main(){
    
   int n, sum =0;
   vector<Rect> rects;
   cin >> n;

   for (int i = 0; i < n; i++)
    rects.push_back(Rect());
   for (Rect r : rects)
    sum += r.getArea();

    cout << sum;

}