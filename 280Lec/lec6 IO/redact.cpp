#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 5)
    {
        cout << "Usage: redact WORD INFILE OUTFILE NUM_STARS" << endl; // print out useage message
        return 1;
    }

    string wordToRemove = argv[1];
    string inName = argv[2];      // "in.txt";
    string outName = argv[3];     // "out.txt";
    int numStars = stoi(argv[4]); // convert from a string representation of a number into the actual integer number
                                  // an equivalent function that works for c style strings: atoi - ASCII to int -> relies on the underlying ASCII representation of the numbers
                                  // but stoi is more recommended bc it works for any kinds of string

    cout << "Copying from " << inName << " to " << outName << endl;

    // open the files for reading/writing
    ifstream fin(inName);   // ifstream objects, analogous to cin
    ofstream fout(outName); // ofstream objects, analogous to cout

    // ifstream fin(argv[2]);
    // ofstream fout(argv[3]);
    // we can put cstrings directly somewhere where cstring is acceptable

    if (!fin.is_open())
    {
        cout << "Unable to open " << inName << endl;
        return 1; // indicate there was a failure
    }
    if (!fout.is_open())
    {
        cout << "Unable to open " << outName << endl;
        return 1;
    }

    string word;
    while (fin >> word)
    {
        if (word != wordToRemove)
        {
            fout << word << " ";
        }
        else
        {

            string replacement(numStars, '*'); // this constructor make *** if numStars is 3
            fout << replacement << " ";

            // fout << string(numStars, '*') << " ";
        }
    }

    fin.close();
    fout.close();

    // A WHOLE BUNCH MORE CODE

    // end of main
    return 0; // COMPILER AUTOMATICALLY ADD THIS
}