#include <iostream>
using namespace std;

class Ewallet
{
private: 
    int bal;

public:
    Ewallet()
    {
        bal = 0;
    }

    void setbal(int newbal)
    {
        if (newbal >= 0)
        {
            bal = newbal;
        }
        else
        {
            cout << "Invalid balance!" << endl;
        }
    }

    int getbal()
    {
        return bal;
    }

    void spend(int amount)
    {
        if (amount > 0 && amount <= bal)
        {
            bal -= amount;
        }
        else
        {
            cout << "Payment declined!" << endl;
        }
    }
};

int main()
{
    Ewallet wallet;

    int startbal;
    int spendbal;

    cin >> startbal;
    cin >> spendbal;

    wallet.setbal(startbal);
    wallet.spend(spendbal);

    cout << "Final balance: " << wallet.getbal() << endl;

    return 0;
}