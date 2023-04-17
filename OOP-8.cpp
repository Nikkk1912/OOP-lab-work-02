#include <iostream>
#include <cmath>

using namespace std;

class Triangl
{
    private:
    int x1, x2, x3, y1, y2, y3;
    int dot1, dot2, dot3;

    public:

    Triangl()
    {
        readFromConsole();
    }

    void readFromConsole()
    {
        cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    }

    int check()
    {
        
    if ((x2-x1)*(y3-y1) == (x3-x1)*(y2-y1)) {
        return 0;
    }

    
    int dot1 = (x2 - x1) * (x3 - x1) + (y2 - y1) * (y3 - y1);
    int dot2 = (x1 - x2) * (x3 - x2) + (y1 - y2) * (y3 - y2);
    int dot3 = (x1 - x3) * (x2 - x3) + (y1 - y3) * (y2 - y3);

    if (dot1 < 0 || dot2 < 0 || dot3 < 0)
    {
        return 1;
    }

    return 0;
    
    }

};

int main(){
    int n, rez = 0;
    bool found = false;

    cin >> n;

    for(auto i = 0; i < n; i++)
    {
        Triangl t;
        int checkResult = t.check();
        if(checkResult != 0){
            found = true;
            rez += checkResult;
        }
    }

    if(found == false)
    {
        cout << "NA";
    } 
    else
    {
        cout << rez;
    }
}