#include <iostream>

using namespace std;

int main()
{  
    int Bino, Cino;
    cin >> Bino;
    cin >> Cino;

        if (Bino > 10 or Cino > 10 )
            {
                cout << "Invalid" << endl;
            }

        if ( (Bino+Cino)%2==0)
            {
                cout << "Bino" << endl;
            }
                else
                {
                    cout << "Cino" << endl;
                }
        
}