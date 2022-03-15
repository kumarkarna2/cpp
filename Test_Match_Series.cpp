#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int match[5], india = 0, draw = 0, eng = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> match[i];
            if (match[i] == 0)
            {
                draw += 1;
            }
            else if (match[i] == 1)
            {
                india += 1;
            }
            else if (match[i] == 2)
            {
                eng += 1;
            }
        }
        string res = (india > eng) ? "INDIA" : (eng > india) ? "ENGLAND"
                                                             : "DRAW";
        cout << res << "\n";
    }

    return 0;
}
