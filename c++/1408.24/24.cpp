#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    vector<int> tt1(3), tt2(3), tt3(3);
    string input, tmp;
    istringstream ss1, ss2;

    cin >> input;
    ss1.str(input);

    for (int i = 0; i < 3; i++)
    {
        getline(ss1, tmp, ':');
        tt1[i] = stoi(tmp);
    }

    cin >> input;
    ss2.str(input);

    for (int i = 0; i < 3; i++)
    {
        getline(ss2, tmp, ':');
        tt2[i] = stoi(tmp);
    }

    if (tt2[2] < tt1[2])
    {
        if (tt2[1] != 0)
        {
            tt2[1] -= 1;
        }   
        else
        {
            tt2[0] -= 1;
            tt2[1] = 59;
        }
        tt3[2] = 60 + tt2[2] - tt1[2];
    }
    else
    {
        tt3[2] = tt2[2] - tt1[2];
    }

    if (tt2[1] < tt1[1])
    {
        tt2[0] -= 1;
        tt3[1] = 60 + tt2[1] - tt1[1];
    }
    else
    {
        tt3[1] = tt2[1] - tt1[1];
    }

    tt3[0] = tt2[0] - tt1[0];
    if (tt3[0] < 0) tt3[0] += 24;

    for (int i = 0; i < 3; i++)
    {
        if (tt3[i] < 10)
        {
            cout << "0";
        }
        cout << tt3[i];
        if (i < 2)
        {
            cout << ":";
        }
    }

    return 0;
}
