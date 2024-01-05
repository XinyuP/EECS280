// #include <iostream>
// #include <vector>
// using namespace std;

// double sum(const vector<double> &data)
// {
//     double total = 0;
//     for (size_t i = 0; i < data.size(); ++i)
//     {
//         total += data[i];
//     }
//     return total;
// }

// int main()
// {
//     vector<double> data;
//     data.push_back(10);
//     data.push_back(20);
//     data.push_back(30);
//     cout << "sum(data) = " << sum(data) << endl;
// }
#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    delete p;
    cout << *p << endl; // use-after-free
}
