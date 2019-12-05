#include <iostream>
#include <vector>
using namespace std;
void vectors() {
    cout << "Intro to vectors: " << endl;
    vector<int> myVector;
    //Add value of i to end of the vector
    for (int i = 1; i <= 5; i++)
        myVector.push_back(i);
    //Iterate through vector in given order
    cout << "Iterate through vector in forward order: ";
    for (int & i : myVector)
        cout << i << " ";
    //Iterate through vector in reversed order
    cout << "\nIterate through vector in reversed order: ";
    for (auto ir = myVector.rbegin(); ir != myVector.rend(); ++ir)
        cout << *ir << " ";
    //Print vector's current size
    cout << "Vector size: " << myVector.size() << endl;
    //Print the vector's maximum size
    cout << "Vector max size: " << myVector.max_size() << endl;
}
int main() {
    vectors();
    return 0;
}
