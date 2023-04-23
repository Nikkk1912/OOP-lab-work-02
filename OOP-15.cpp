#include <iostream>
#include <string>

using namespace std;

class Stud {
private:
  string name;
  int m1, m2, m3, m4, m5;

public:
  Stud() {}

  Stud(string n, int m1, int m2, int m3, int m4, int m5)
      : name(n), m1(m1), m2(m2), m3(m3), m4(m4), m5(m5) {}

  void readFromConsole() { cin >> name >> m1 >> m2 >> m3 >> m4 >> m5; }

  double midle() {
    double mark, sum;

    sum = m1 + m2 + m3 + m4 + m5;
    mark = sum / 5;
    return mark;
  }

  string getName()
  {
    return name;
  }


};

int main() { 
    
    int n;
    cin >> n;

    int amount = 0;
    double maxMark = INT_MIN;
    string student;


    for (auto i = 0; i < n; i++)
    {
        Stud s;
        s.readFromConsole();
        double mark = s.midle();

        if(maxMark < mark)
        {
            student = s.getName();
            maxMark = mark;
        }
        if(mark >= 9.2)
        {
            amount++;
        }
    }

    cout << amount << endl << student;
    
}