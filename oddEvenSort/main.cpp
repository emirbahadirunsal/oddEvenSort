#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
void oddEvenSort(vector<int> vector, int size) {
    int low = 0;
    int high = (size - 1);
    int operationNumber = 0;
    // Iterate while j >= i
    while (high >= low) {
        // Check is array[low] is even or odd
        if (vector[low] % 2 == 0) {
            // Check is array[high] is even or odd
            if (vector[high] % 2 != 0) {
                // Swap array[low] and array[high]
                swap(vector[low], vector[high]);
                low++;
                high--;
            }
            else
                high--;
        }
        else
            low++;
        operationNumber++;
    }
    for (int i = 0; i < size; i++)
        cout << vector[i] << endl;
    cout << operationNumber << " comparisons in total.";
}
int main() {
    //Take lines as input from the user and push back them to a vector
    string line;
    int tmp;
    std::vector<int> inputVector;
    while(getline(cin, line)){
        istringstream iss(line);
        while (iss >> tmp)
            inputVector.push_back(tmp);
        if(line.empty())
            break;
    }
    int sizeofVector = (int) inputVector.size();
    // Function Call
    oddEvenSort(inputVector, sizeofVector);
    return 0;
}