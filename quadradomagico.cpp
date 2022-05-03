#include <iostream>

using namespace std;

int main()
{

    int N, quadrado[10][10], S = 0, T = 0, i, j;

    cin >> N;

    quadrado[N][N];

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            cin >> quadrado[i][j];
        }
    }

    for(j = 0; j < N; j++)
    {
        S += quadrado[0][j];
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            T += quadrado[i][j];
        }

        if(T != S)
        {
            cout << -1 <<endl;
            return 0;
        }
        T = 0;
    }

    for(i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            T += quadrado[j][i];
        }
        if(T != S)
        {
            cout << -1 <<endl;
            return 0;
        }
        T = 0;
    }

    for(i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j)
            {
                T += quadrado[i][j];
            }
        }
    }
    if(T != S)
    {
        cout << -1 <<endl;
        return 0;
    }
    T = 0;
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if((i+j) == (N-1))
            {
                T += quadrado[i][j];
            }
        }
    }
    if(T != S)
    {
        cout << -1 <<endl;
        return 0;
    }
    T = 0;

    cout << S <<endl;
	
	return 0;
}
