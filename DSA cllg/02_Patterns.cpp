#include <iostream>
using namespace std;
void a(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // if (i == 0||  j ==0 || j == n-1|| i == n/2) //basic A
            if ((j == 0 && i >= n / 2) || (j == n - 1 && i >= n / 2) || i == n / 2 || i + j == n / 2 || i - j == -(n / 2))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void b(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 && j != n - 1) || (i == n - 1 && j != n - 1) ||
                j == 0 || (j == n - 1 && i != n - 1 && i != 0) || i == n / 2)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void c(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 && j != 0) ||
                (i == n - 1 && j != 0) ||
                (j == 0 && i != 0 && i != n - 1))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void d(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 && j != n - 1) ||
                (i == n - 1 && j != n - 1) ||
                j == 0 || (j == n - 1 && i != n - 1 && i != 0))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void e(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 && j != 0) ||
                (i == n - 1 && j != 0) ||
                (j == 0 && i != 0 && i != n - 1) || i == n / 2)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void f(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n / 2)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void g(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // basic
            //  if (i == 0 || i== n-1|| j == 0 || (i == n / 2 && j>=n/2) ||
            //  (j == n-1 && i >n/2))
            // med
            // if (i == 0 || (i == n - 1 && j<= n/2) || j == 0 ||
            // (i == n / 2 && j >= n/2) ||(j == n - 1 && i >= n/2) || (j == n/2 && i>n/2))
            // hard
            if (i == 0 || (i == n - 1 && j <= 3 * n / 4) || j == 0 || (j == n - 1 && i >= n / 4) || (i == n / 4 && j > n / 4) || (j == 3 * n / 4 && i >= n / 2) || (j == n / 4 && i >= n / 4 && i <= 3 * n / 4) || (i == n / 2 && j > n / 2 && j < 3 * n / 4) || (i == 3 * n / 4 && j > n / 4 && j < n / 2) || (j == n / 2 && i >= n / 2 && i <= 3 * n / 4)
                // ||  (i == n / 2 && j >= n/2)  || (j == n/2 && i>n/2)
            )

            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void h(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || i == n / 2)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void i(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == n / 2)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void j(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i - j == n / 2 || j == n / 2)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void k(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j == n - 1 && i < n / 2) || (i - j == 0 && i > n / 2) || j == n / 2)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void l(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || i == n - 1)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void m(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || (i + j == n - 1 && i <= n / 2) || (i - j == 0 && i < n / 2))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void n1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || i - j == 0)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void o(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 && j != 0 && j != n - 1) ||
                (j == 0 && i != 0 && i != n - 1) ||
                (i == n - 1 && j != 0 && j != n - 1) ||
                (j == n - 1 && i != 0 && i != n - 1))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void p(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n / 2 || (i == 0 && j > n / 2) || (j == n - 1 && i <= n / 2) || (i == n / 2 && j > n / 2))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void q(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 && j != 0 && j != n - 1) ||
                (j == 0 && i != 0 && i != n - 1) ||
                (i == n - 1 && j != 0 && j != n - 1) ||
                (j == n - 1 && i != 0 && i != n - 1) ||
                (i - j == 0 && i >= n / 2))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void r(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n / 2 || (i == 0 && j > n / 2) || (j == n - 1 && i <= n / 2) || (i == n / 2 && j > n / 2) || (i - j == 0 && i >= n / 2))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void s(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || i == n / 2 || (j == n - 1 && i > n / 2) || (j == 0 && i < n / 2))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void t(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == n / 2)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void u(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j == 0 && i != 0 && i != n - 1) ||
                (i == n - 1 && j != 0 && j != n - 1) ||
                (j == n - 1 && i != 0 && i != n - 1))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void v(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - j == n / 2 || i + j == (3 * n / 2) - 1)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void w(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || (i + j == n - 1 && i >= n / 2) || (i - j == 0 && i > n / 2))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void x(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - j == 0 || i + j == n - 1)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void y(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i - j == 0 && i < n / 2) || (i + j == n - 1 && i <= n / 2) ||
                (j == n / 2 && i > n / 2))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void z(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || i + j == n - 1)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    int n = 5;
    // a(n);
    // b(n);
    // c(n);
    // d(n);
    // e(n);
    // f(n);
    // g(15);
    // h(n);
    // i(n);
    // j(n);
    // k(n);
    // l(n);
    // m(n);
    // n1(n);
    // o(n);
    // p(n);
    // q(n);
    // r(n);
    // s(n);
    // t(n);
    // u(n);
    // v(n);
    // w(n);
    // x(n);
    // z(n);

    cout << "Name: " << endl;
    // for (int i = 0; i < n; i++)
    // {
        d(n);
        cout << "\t";
        h(n);
        cout << "\t";
        r(n);
        cout << "\t";
        u(n);
        cout << "\t";
        v(n);

        // cout << endl;
    // }
    return 0;
}
