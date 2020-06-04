//
//
// This program outputs the message 'Hello World from VS Code and the C++ extension' to the monitor
//
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() // C++ programs start by executing the function main
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word: msg)
    {
        cout << word << " "; // Outputs Hello World from VS Code and the C++ extension
    }
    cout << endl;
}