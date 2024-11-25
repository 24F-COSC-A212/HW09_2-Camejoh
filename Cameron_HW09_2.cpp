#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

// missing header area!
// formatting errors!
// missing right align

using namespace std;

int main()
{
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream inFile(filename);
    if (!inFile)
    {
        cout << "Error: Could not open file." << endl;
        return 1;
    }

    string line;
    int lineNumber = 1;
    while (getline(inFile, line))
    {
        cout << setw(3) << lineNumber << ": " << line << endl;
        lineNumber++;
    }

    inFile.close();
    return 0;
}