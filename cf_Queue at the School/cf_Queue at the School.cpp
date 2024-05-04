#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    char* c = new char[n];
    cin >> c;
    for(int j = 0; j< t; j++)
        for (int i = 0; i < n-1; i++)
        {
            if (c[i] == 'B' && c[i + 1] == 'G') {
                c[i] = 'G';
                c[i + 1] = 'B';
                i++;
            }
        }
    cout << c;
}
