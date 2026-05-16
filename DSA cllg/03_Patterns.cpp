#include <iostream>
using namespace std;
void a(int i, int n)
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
}
void b(int i, int n)
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
}
void c(int i, int n)
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
}
void d(int i, int n)
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
}
void e(int i, int n)
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
}
void f(int i, int n)
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
}
void g(int i, int n)
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
}
void h(int i, int n)
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
}
void i1(int i, int n)
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
}
void j(int i, int n)
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
}
void k(int i, int n)
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
}
void l(int i, int n)
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
}
void m(int i, int n)
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
}
void n1(int i, int n)
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
}
void o(int i, int n)
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
}
void p(int i, int n)
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
}
void q(int i, int n)
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
}
void r(int i, int n)
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
}
void s(int i, int n)
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
}
void t(int i, int n)
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
}
void u(int i, int n)
{

    for (int j = 0; j < n; j++)
    {
        if ((j == 0 && i != n - 1) ||
            (i == n - 1 && j != 0 && j != n - 1) ||
            (j == n - 1  && i != n - 1))
        {
            cout << "* ";
        }
        else
            cout << "  ";
    }
}
void v(int i, int n)
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
}
void w(int i, int n)
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
}
void x(int i, int n)
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
}
void y(int i, int n)
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
}
void z(int i, int n)
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
}
int main(int argc, char const *argv[])
{
    int n = 5;
    cout << "Name: " << endl;

    for (int i = 0; i < n; i++)
    {

        d(i, n);
        cout << "   ";
        h(i, n);
        cout << "   ";
        r(i, n);
        cout << "   ";
        u(i, n);
        cout << "   ";
        v(i, n);
        cout << "   ";

        cout << endl;
    }

    return 0;
}
