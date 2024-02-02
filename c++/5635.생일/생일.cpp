#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, i;
    string max_n, min_n, cur_n;
    vector<int> max_b, min_b, cur_b;
    max_b = { 31,12,9999};
    min_b = { 0,0,0 };
    cur_b = { 0, 0, 0 };
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> cur_n >> cur_b[0] >> cur_b[1] >> cur_b[2];

        if (cur_b[2] > min_b[2])
        {
            min_n = cur_n;
            min_b = cur_b;
        }
        else if (cur_b[2] < max_b[2])
        {
            max_n = cur_n;
            max_b = cur_b;
        }
        else if(cur_b[2] == min_b[2])
        {
            if (cur_b[1] > min_b[1])
            {
                min_n = cur_n;
                min_b = cur_b;
            }
            else if(cur_b[1] == min_b[1])
            {
                if (cur_b[0] > min_b[0])
                {
                    min_n = cur_n;
                    min_b = cur_b;
                }
            }
        }
        else if (cur_b[2] == max_b[2])
        {
            if (cur_b[1] < max_b[1])
            {
                max_n = cur_n;
                max_b = cur_b;
            }
            else if (cur_b[1] == max_b[1])
            {
                if (cur_b[0] < max_b[0])
                {
                    max_n = cur_n;
                    max_b = cur_b;
                }
            }
        }
    }

    cout << min_n << endl << max_n;

    return 0;
}
