#include <iostream>
using namespace std;

class pattern
{
private:
    int iRow;
    int iCol;

public:
    pattern(int x, int y)
    {
        iRow = x;
        iCol = y;
    }
    void Pattern()
    {
        int i = 0, j = 0;

        for (i = 1; i <= iRow; i++)
        {
            for (j = iCol; j >= 1; j--)
            {
                if (i == j || i == 1 || i == iRow || j == 1 || j == iCol)
                {
                    cout<<"*\t";
                }
                else
                {
                    cout<<"\t";
                }
            }

            cout<<"\n";
        }
    }
};
int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "enter the rows and columns" << endl;
    cin >> iValue1 >> iValue2;

    pattern *pobj = new pattern(iValue1, iValue2);

    pobj->Pattern();
    return 0;
}