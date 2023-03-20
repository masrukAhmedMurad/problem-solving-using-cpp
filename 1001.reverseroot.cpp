#include <iostream>
#include <vector>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
    double val = 0;
    vector<double> v;
    while (cin >> val &&val!=EOF)
    {
        v.push_back(sqrt(val));
    }
    for (int i = v.size()-1; i >=0; i--)
    {
        cout<< fixed << setprecision(4) << v[i]<<endl;
    }
    return 0;
}
