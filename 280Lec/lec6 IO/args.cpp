#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) // char **argv
{
    // if (argc != 2)
    // {
    //     // print out useage message
    //     cout << "Usage: args NAME" << endl;
    //     return 1;
    // }
    // cout << "Hello " << argv[1] << endl;
    cout << argc << " ";        // 4
    cout << argv[1] << " ";     // cat
    cout << *argv[1] << " ";    // c
    cout << argv[2] + 1 << " "; // og
}