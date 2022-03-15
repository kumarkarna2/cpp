#include <iostream>
using namespace std;

int main(void)
{
    int t;
    int n, x, p;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> p;
        int final_marks = (x * 3) - (n - x);
        if (final_marks >= p)
        {
            cout << "PASS"
                 << "\n";
        }
        else
        {
            cout << "FAIL"
                 << "\n";
        }
    }

    return 0;
}
