(i)
//Print
 * 
 *  * 
 *  *  * 
 .
 .
 n

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <=n ; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 

 
(ii)
//Print
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            cout << "* "; 
        }
        cout << endl;
    }
    for(row = n-1; row >=1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 


(iii)
//Print
    * 
   * * 
  * * * 
 .
 .
 n

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;
 
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << " "; //space = 1
        }
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

 
(iv)
//Print
       * 
     * * * 
   * * * * * 
 * * * * * * * 
 
 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;
 
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << "  ";  //space = 2
        }
        for(col = 1; col <= 2*row-1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
 
 
(v)
//Print
         * 
     * * * 
 * * * * * 
 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << "    "; //space = 4
        }
        for(col = 1; col <= 2 * row - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
                * 
            * * * 
        * * * * * 
    * * * * * * * 
* * * * * * * * * 


(vi)
//Print
* * * * * 
 * * * * 
  * * * 
   * * 
    *

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;
 
    for(row = n; row >= 1; row--)
    {
        for(col = 1; col <= n-row; col++)
        {
            cout << " ";
        }
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
* * * * * 
 * * * * 
  * * * 
   * * 
    *
    
 
(vii)
//Print
 * * * * 
 * * * * 
 * * * * 
 * * * * 


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << " Enter a number= ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

 
(viii)
//Print
* * * * 
*     * 
*     * 
* * * * 


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n; col++)
        {
            if(row == 1 || row == n || col == 1 || col == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; //space = 2
            }
        }
        cout << endl;
    }
    getch();
}

//Output:
Enter a number= 5
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
 
 
(ix)
//Print
*
* *       
*   *        
* * * * 
 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n; col++)
        {
            if(col == 1 || row == n || col == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    getch();
}
 
//Output:
Enter a number= 5 
*
* *       
*   *     
*     *   
* * * * * 
 
 
(x)
//Print
*       * 
  *   *   
    *     
  *   *   
*       *
 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter a number= ";
    cin >> n;

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n; col++)
        {
            if(row == col || row + col == n + 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    getch();
}
 
//Output:
Enter a number= 5 
*       * 
  *   *   
    *     
  *   *   
*       *
 
 
(x)
//Print
 
 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
 
//Output:
Enter a number= 5 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
