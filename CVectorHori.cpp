#include "CVectorHori.h"


CVector1 operator+(const CVector& a, const CVector& b)
{
    if (a.n != b.n)
    {
        cout << "Error: vectors have different dimensions." << endl;
        exit(-1);
    }
    else
    {
        vector<double> q(a.n);
        for (int i = 0; i < a.n; i++)
        {
            q[i] = a.s[i] + b[i];
        }
        CVector1 res(b.filename, q, a.n);
        q.clear();
        return res;
    }
}

CVector1 operator-(const CVector& a, const CVector& b)
{
    if (a.n != b.n)
    {
        cout << "Error: vectors have different dimensions." << endl;
        exit(-1);
    }
    else
    {
        vector<double> q(a.n);
        for (int i = 0; i < a.n; i++)
        {
            q[i] = a.s[i] - b[i];
        }
        CVector1 res(b.filename, q, a.n);
        //q.clear();
        return res;
    }
}


int CVector1::output(string FileName) {
    ofstream output(FileName, ios_base::app);
    for (auto i = s.begin(); i != s.end(); ++i) {
        output << *i << ' ';
        cout << *i << ' ';
    }
    output << '\n';
    output.close();
    return 0;
}