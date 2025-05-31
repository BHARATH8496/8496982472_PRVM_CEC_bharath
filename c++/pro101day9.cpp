//create file id , name//
//create file id , name//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create a file
    ofstream outFile("C:\\Users\\infinix\\OneDrive\\Desktop\\bharathcodepro.cdata.txt");
    if (outFile) {
        outFile << "ID,Name\n";
        outFile << "1,John Doe\n";
        outFile << "2,Jane Smith\n";
        outFile.close();
    }

    // Read from the file
    ifstream inFile("C:\\Users\\infinix\\OneDrive\\Desktop\\bharathcodepro.cdata.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}