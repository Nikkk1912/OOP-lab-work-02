#include <iostream>

using namespace std;

class Football {
private:
  int two_point_attemps, two_point_succeeded;
  int three_point_attemps, three_point_succeeded;
  int penalty_attemps, penalty_succeeded;

public:
  Football(){};

  Football(int twoA, int twoS, int threeA, int threeS, int penA, int penS)
      : two_point_attemps(twoA), two_point_succeeded(twoS),
        three_point_attemps(threeA), three_point_succeeded(threeS),
        penalty_attemps(penA), penalty_succeeded(penS) {}

  void readFromConsole() {
    cin >> two_point_attemps >> two_point_succeeded >> three_point_attemps >>
        three_point_succeeded >> penalty_attemps >> penalty_succeeded;
  }

  int rez()
  {
    int one = 0, two = 0, three = 0;

    two =+ (two_point_succeeded * 2 - (two_point_attemps - two_point_succeeded));
    three =+ (three_point_succeeded * 3 - (three_point_attemps - three_point_succeeded));
    one =+ (penalty_succeeded * 1 - (penalty_attemps - penalty_succeeded));

    return one + two + three;
  }
};

int main()
{
    int  player = INT_MIN, maxScore = INT_MIN;
    int rez = 0, n;
    cin >> n;

    for (auto i = 0; i < n; i++)
    {
        Football t;
        t.readFromConsole();
        int score = t.rez();
        if(maxScore < score)
        {
          maxScore = score;
          player = i+1;
        }
    }

    cout << player;
}