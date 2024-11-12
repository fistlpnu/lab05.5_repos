#include <iostream>
using namespace std;

int pascal(int i, int j, int level, int& depth)
{
    if (level > depth)
        depth = level;

    if (j == 0 || j == i)
    {
        return 1;
    }


    return pascal(i - 1, j - 1, level + 1, depth) + pascal(i - 1, j, level + 1, depth);
}

int main()
{
    int n, depth = 0;

    cout << "Number of lines: ";
    cin >> n;


    for (int i = 0; i < n; i++)
    {

        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }


        for (int j = 0; j <= i; j++)
        {
            cout << pascal(i, j, 1, depth) << " ";
        }
        cout << endl;
    }


    cout << "Maximum recursion depth = " << depth << endl;

    return 0;
}
