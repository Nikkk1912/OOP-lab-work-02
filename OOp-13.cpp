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
    int one = 0;

    
    one =+ three_point_succeeded * 3 + two_point_succeeded * 2 + penalty_succeeded;

    return one;
  }

  double accuracy()
  {
    double all = two_point_attemps + three_point_attemps + penalty_attemps;
    double accuracy;

    if (all == 0) {
        accuracy = 0;
    } 
    else {
        double total_good = two_point_succeeded + three_point_succeeded + penalty_succeeded;
        accuracy = total_good / all;
    }
    return accuracy;
  }
};

int main()
{
    int n;
    cin >> n;

    double maxAccuracy = -1;
    int rez = 0;


    for (auto i = 0; i < n; i++)
    {
        Football t;
        t.readFromConsole();
        double accuracy = t.accuracy();
        if ( maxAccuracy < accuracy)
        {
            maxAccuracy = accuracy;
            rez = t.rez();
        }
        
    }

    cout << rez;
}