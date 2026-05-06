#include <iostream>
using namespace std;

class Thermo
{
private:
    int temp;

public:
    Thermo()
    {
        temp = 24;
    }

    void settemp(int t)
    {
        if (t >= 16 && t <= 30)
        {
            temp = t;
        }
        else
        {
            cout << "Invalid temperature!" << endl;
        }
    }

    int gettemp()
    {
        return temp;
    }
};

int main()
{
    Thermo room;

    int newtemp;
    cin >> newtemp;

    room.settemp(newtemp);

    cout << "Current Temperature: " << room.gettemp() << endl;

    return 0;
}