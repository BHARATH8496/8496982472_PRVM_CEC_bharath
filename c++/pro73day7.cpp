//file handling //
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream myfile("C:\\Users\\infinix\\OneDrive\\Desktop\\Git C Programing\\8496982472_PRVM_CEC_bharath\\c++sample.txt");
    myfile << "Hello, World!" << endl;
    myfile.close();
    return 0;
}
