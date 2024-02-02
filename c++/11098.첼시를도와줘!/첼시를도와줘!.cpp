#include <iostream>

using namespace std;

int main()
{
    int n, p;
    int C, a;
    string P, b;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        C = 0;
        P = "";
        cin >> p;
        for(int j = 0; j < p; j++)
        {
            cin >> a >> b;
            if(a > C)
            {
                C = a;
                P = b;
            }
        }
        cout << P << endl;
    }

    return 0;
}
