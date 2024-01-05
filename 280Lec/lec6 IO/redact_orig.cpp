#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// argv - argument vector altho it is an array (aka. the list of arguments)
// argc - number of arguments
int main(int argc, char *argv[])
{
  if (argc != 5)
  {
    // print out useage message
    cout << "Usage: redact WORD INFILE OUTFILE NUM_STARS" << endl;
    return 1;
  }

  // cout << "argc: " << argc << endl;
  // for (int i = 0; i < argc; ++i)
  // {
  //   cout << i << ": " << argv[i] << endl;
  // }
  string wordToRemove = argv[1];
  string inName = argv[2];      // "in.txt";
  string outName = argv[3];     // "out.txt";
  int numStars = stoi(argv[4]); // convert from a string representation of a number into the actual integer number
  // an equivalent function that works for c style strings: atoi - ASCII to int -> relies on the underlying ASCII representation of the numbers
  // but stoi is more recommended bc it works for any kinds of string

  cout << "Copying from " << inName << " to " << outName << endl;
  ifstream fin(inName);   // ifstream fin(argv[2]);
  ofstream fout(outName); // ofstream fout(argv[3]);

  // fstream - does both, DO NOT Use

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

  // fin is my input stream
  // string w;
  // fin >> w; // file IO streams use the same IO operators as cin and cout

  string word;
  while (fin >> word) // attempt to read a word, and if the read operation fails,
                      // eg. reach the end of the file, nothing left to read,
                      // fin >> word will evaluate to a false
  {
    if (word != wordToRemove)
    {
      fout << word << " ";
    }
    else
    {
      fout << string(numStars, '*') << " ";
    }
  }

  fin.close();
  fout.close();

  // A WHOLE BUNCH MORE CODE

  // end of main
  return 0; // COMPILER AUTOMATICALLY ADD THIS
}

/*
technically, when I reach the end of main() and the function returns,
fin and fout go out of scope, file streams will automatically close themselves

we don't really need to manually close fin fout except if I had a whole bunch
more code and the program contunue executing for a while, it is not a bad idea
to just close the streams manually ourselves as soon as we are done with them,
so that they aren't hanging out open, preventing other programs from using those
files
*/

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//   int sum = 0;
//   string word;
//   while (cin >> word && word != "done")
//   {
//     sum += stoi(word);
//   }
//   cout << "sum is " << sum << endl;
// }