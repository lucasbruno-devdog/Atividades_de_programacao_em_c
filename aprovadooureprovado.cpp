#include <iostream>

using namespace std;

int main()
{  
    double A, B;
    cin >> A >> B;

        if ((A+B)/2 >= 7)
            {
                cout << "Aprovado" << endl;
            }

       else if ((A+B)/2 < 7 and (A+B)/2 >= 4)
            {
                cout << "Recuperacao" << endl;
            }

        else if ((A+B)/2 < 4)
            {
                cout << "Reprovado" << endl;
            }
        
}
