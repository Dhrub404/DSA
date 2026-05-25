#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;


    cout << "\n Solid Square of Stars\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n Solid Rectangle of Stars\n";

    int rows = n;
    int cols = n + 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n Right-Angle Triangle\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }


    cout << "\n Inverted Right-Angle Triangle\n";

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

   
    cout << "\n Right-Aligned Triangle\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    // cout << "\n Half Diamond\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
    // for (int i = n - 1; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // cout << "\n Hollow Rectangle\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i == 1 || i == n || j == 1 || j == n)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << "\n";
    // }


    // cout << "\n Hollow Right-Angle Triangle\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         if (i == 1 || i == n || j == 1 || j == i)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << "\n";
    // }

    // cout << "\n Binary Triangle\n";

    // for (int i = 1; i <= n; i++) {
    //     int val = (i % 2 != 0) ? 1 : 0;
    //     for (int j = 1; j <= i; j++) {
    //         cout << val << " ";
    //         val = 1 - val;
    //     }
    //     cout << "\n";
    // }

    // cout << "\n Checkerboard Pattern\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << ((i + j) % 2 == 0 ? "1 " : "0 ");
    //     }
    //     cout << "\n";
    // }


    // cout << "\n Number Triangle\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }

    // cout << "\n Row Number Repeated\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << i << " ";
    //     }
    //     cout << "\n";
    // }

    // cout << "\n Inverted Number Triangle\n";

    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }


    // cout << "\n Continuous Number Triangle\n";

    // int count = 1;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << count++ << " ";
    //     }
    //     cout << "\n";
    // }


    // cout << "\n Number Mirror Triangle\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++)
    //         cout << j << " ";
    //     for (int j = i - 1; j >= 1; j--)
    //         cout << j << " ";
    //     cout << "\n";
    // }

  
    // cout << "\n Alphabet Triangle\n";

    // for (int i = 1; i <= n; i++) {
    //     char ch = 'A';
    //     for (int j = 1; j <= i; j++) {
    //         cout << ch++ << " ";
    //     }
    //     cout << "\n";
    // }

 
    // cout << "\n Inverted Alphabet Triangle\n";

    // for (int i = n; i >= 1; i--) {
    //     char ch = 'A';
    //     for (int j = 1; j <= i; j++) {
    //         cout << ch++ << " ";
    //     }
    //     cout << "\n";
    // }


    // cout << "\n Same Letter per Row\n";

    // for (int i = 1; i <= n; i++) {
    //     char ch = 'A' + i - 1;
    //     for (int j = 1; j <= i; j++) {
    //         cout << ch << " ";
    //     }
    //     cout << "\n";
    // }


    // cout << "\n Reversed Alphabet Triangle\n";

    // for (int i = 1; i <= n; i++) {
    //     char ch = 'A' + n - 1;
    //     for (int j = 1; j <= i; j++) {
    //         cout << ch-- << " ";
    //     }
    //     cout << "\n";
    // }

    // cout << "\n Full Pyramid\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n - i; j++)
    //         cout << " ";
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //         cout << "*";
    //     cout << "\n";
    // }

  
    // cout << "\n Inverted Full Pyramid\n";

    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= n - i; j++)
    //         cout << " ";
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //         cout << "*";
    //     cout << "\n";
    // }

    // cout << "\n Diamond Pattern\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n - i; j++)
    //         cout << " ";
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //         cout << "*";
    //     cout << "\n";
    // }
    // for (int i = n - 1; i >= 1; i--) {
    //     for (int j = 1; j <= n - i; j++)
    //         cout << " ";
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //         cout << "*";
    //     cout << "\n";
    // }


    // cout << "\n Alphabet Pyramid\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n - i; j++)
    //         cout << " ";
    //     char ch = 'A';
    //     for (int j = 1; j <= i; j++)
    //         cout << ch++;
    //     ch -= 2;
    //     for (int j = 1; j < i; j++)
    //         cout << ch--;
    //     cout << "\n";
    // }

 
    // cout << "\n Butterfly Pattern\n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++)
    //         cout << "*";
    //     for (int j = 1; j <= 2 * (n - i); j++)
    //         cout << " ";
    //     for (int j = 1; j <= i; j++)
    //         cout << "*";
    //     cout << "\n";
    // }
    // for (int i = n - 1; i >= 1; i--) {      
    //     for (int j = 1; j <= i; j++)
    //         cout << "*";
    //     for (int j = 1; j <= 2 * (n - i); j++)
    //         cout << " ";
    //     for (int j = 1; j <= i; j++)
    //         cout << "*";
    //     cout << "\n";
    // }


    // cout << "\n Number Spiral\n";

    // int size = 2 * n - 1;

    // for (int i = 0; i < size; i++) {
    //     for (int j = 0; j < size; j++) {
    //         int top    = i;
    //         int left   = j;
    //         int right  = size - 1 - j;
    //         int bottom = size - 1 - i;
    //         cout << n - min(min(top, bottom), min(left, right)) << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}