using namespace std;
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    cout << "Task 1\n";
    cout << "If 'a' = 'b' then now 'a'=0 'b'=0 else 'a' and 'b' = max('a','b')\n";
    cout << "Please enter 'a' ";
    int a;
    cin >> a;
    cout << "         and 'b' ";
    int b;
    cin >> b;
    if (a == b)
        cout << "'a'= 0  'b'= 0\n";
    else
        cout << "'a'= " << max(a, b) << " 'b' = " << max(a, b) << "\n";

    cout << "Task 2\n";
    cout << "Find sum of 2 biggest numbers out of 3 total\n";
    cout << "Please enter 3 numbers\n";
    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    cout << "The answer is " << a1 + b1 + c1 - min(a1, min(b1, c1)) << "\n";

    cout << "Task 3\n";
    cout << "Which of this points 'B' 'C' is the closest to point 'A'?\n";
    cout << "Please enter coords for 3 points\n";
    int xa, xb, xc, ya, yb, yc;
    cout << "xA = ";
    cin >> xa;
    cout << "yA = ";
    cin >> ya;
    cout << "xB = ";
    cin >> xb;
    cout << "yB = ";
    cin >> yb;
    cout << "xC = ";
    cin >> xc;
    cout << "yC = ";
    cin >> yc;
    double Ab, Ac;
    Ab = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
    Ac = sqrt(pow((xc - xa), 2) + pow((yc - ya), 2));
    if (Ab < Ac) cout << "B is closer than C  AB = " << Ab << "\n";
    if (Ab > Ac) cout << "C is closer than B  AC = " << Ac << "\n";
    if (Ab == Ac) cout << "None of B and C are closest to A  AB = AC = " << Ab << "\n";

    cout << "Task 4\n";
    cout << "On which sector of coordinate plane point 'M' is located?\n";
    int xM, yM;
    cout << "xM = ";
    cin >> xM;
    cout << "yM = ";
    cin >> yM;
    if (xM > 0 and yM > 0) cout << "sector 1\n";
    else
        if (xM < 0 and yM > 0) cout << "sector 2\n";
        else
            if (xM < 0 and yM < 0) cout << "sector 3\n";
            else
                if (xM > 0 and yM < 0) cout << "sector 4\n";

    cout << "Task 5\n";
    cout << "Description of entered full number\n";
    cout << "Please enter the number ";
    int x;
    cin >> x;
    cout << "This number is ";
    if (x == 0) cout << "zero";
    else
    {
        if (x > 0) cout << "positive, ";
        if (x < 0) cout << "negative, ";
            if (x % 2 == 0) cout << "even, ";
            else cout << "odd, ";
        int xhelp, k;
        xhelp = abs(x);
        k = 0;
        while (xhelp != 0)
        {
            k++;
            xhelp = trunc(xhelp / 10);
        }
        if (k > 1) cout << k << " digits\n";
        else
            if (k < 2) cout << "1 digit\n";
    }
    
    cout << "Task 6\n";
    cout << "Description of entered full number\n";
    cout << "Please enter the number (1-999)  ";
    int x0;
    cin >> x0;
    cout << "This number is ";
    if (x0 % 2 == 0) cout << "even, ";
    else cout << "odd, ";
    int xhelp0, k0;
    xhelp0 = abs(x0);
    k0 = 0;
    while (xhelp0 != 0)
    {
        k0++;
        xhelp0 = trunc(xhelp0 / 10);
    }
    cout << k0 << " digits\n";
    return 0;
}
