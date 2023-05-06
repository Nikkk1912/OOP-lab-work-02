#include <iostream>
#include <vector>

using namespace std;

class Stud
{
    private:
        int amount;
        vector<int> marks;
    public:
    Stud() {}

    void readFromConsole()
    { 
        cin >> amount;
        for (auto i = 0; i < amount; i++)
        {   
            int t;
            cin >> t;
            marks.push_back(t);
        } 
    }

    bool checkHonor()
    {
        
        for (auto i = 0; i< amount; i++)
        {
            if (marks[i] < 8)
            {
                return false;
            }
        }

        int sum = 0;

        for (auto i = 0; i < amount; i++)
        {
            sum += marks.back(); 
            marks.pop_back();
        }

        float minor;

        minor = (float)sum / amount;
        //minor += sum % amount;

        if (minor > 8.5)
        {
            return true;
        }
        return false;

    }

};

int main()
{
    int n;
    int amo = 0;
    cin >> n;

    for(auto i = 0; i < n; i++)
    {
        bool check;
        Stud stud;
        stud.readFromConsole();
        check = stud.checkHonor();

        if(check)
        {
            amo++;
        }
    }
    cout << amo;

}