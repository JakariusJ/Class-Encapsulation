#include <iostream>
using namespace std;

class result
{
private:
    int score;

public:
    void set_score(int new_score)
    {
        if (new_score >= 0 && new_score <= 100)
        {
            score = new_score;
        }
        else
        {
            cout << "Invalid score!" << endl;
        }
    }

    int get_score()
    {
        return score;
    }
};

int main()
{
    result quiz;

    int input;
    cin >> input;

    quiz.set_score(input);

    cout << "Final score: " << quiz.get_score() << endl;

    return 0;
}