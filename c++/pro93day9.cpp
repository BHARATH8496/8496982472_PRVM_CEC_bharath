//remove the duplicate alphabet characters from a string//
 #include <iostream>
using namespace std;

int main() {
    char input[100], result[100];
    int i, j, k = 0;
    bool found;

    cout << "Enter a string: ";
    cin.getline(input, 100);

    for (i = 0; input[i] != '\0'; i++) {
        found = false;
        for (j = 0; j < k; j++) {
            if (input[i] == result[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result[k++] = input[i];
        }
    }

    result[k] = '\0';
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}