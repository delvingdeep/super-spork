/*README : File Input/Output operation
**The goal is to practice writing and reading files.
**Read the contents of file "input.txt" and then write to it.
**
**We are using input.txt as our file.
**Your assignment for this quiz**
**
**This program changes the contents of the file called input.txt
**and also changes the ifstream and ofstream to fstream
**
**The file must be stored in the same directory or else it's
**explicit path should be mentioned while calling.
**
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //creating an output stream to write to the file
    //it appends the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //creating an input stream to write to the file
    ifstream myfileO ("input.txt");
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}
