#include <iostream>
#include <iterator>
#include <vector>
#include <set>
#include <list>
#include <map>
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
void sets() {
    cout << "Intro to sets: " << endl;
    //Make a new set
   set <int> mySet;
   //Insert 4 values, with one duplicate (only the 3 will show, not the duplicate)
   mySet.insert(1);
   mySet.insert(2);
   mySet.insert(3);
   mySet.insert(1);
   //Print the size of the set (it will be 3 not 4 as sets do not have duplicate values)
   cout << "Set size: " << mySet.size() << endl;
   //Iterate through the set and print all contents
   cout << "Set contents: ";
   for (int num : mySet)
        cout << num << " ";
   //Remove a value in a set
   mySet.erase(3);
   //Reprint set and size to show removal
    cout << "\nNew set size: " << mySet.size() << endl;
    cout << "New set contents: ";
    for (int num : mySet)
        cout << num << " ";
}
void maps() {
    cout << "Intro to maps: " << endl;
    //Make a new map
    map<string, int> myMap;
    //Insert 4 values, one with the same value for a different key
    myMap.insert(pair<string, int>("first", 100));
    myMap.insert(pair<string, int>("second", 670));
    myMap.insert(pair<string, int>("third", 250));
    myMap.insert(pair<string, int>("fourth", 100));
    //print the size of the map
    cout << "Map size: " << myMap.size() << endl;
    //Iterate through the map and print all the key/value pairs
    cout << "Map K/V pairs: ";
    for( auto const& [key, val] : myMap ){
        cout << "Key: " << key << ", value for key: " << val << endl;
    }
    //Print value for each key
    cout << "Individually printed items for keys:" << endl;
    cout << "Value for 'first': " << myMap["first"] << endl;
    cout << "Value for 'second': " << myMap["second"] << endl;
    cout << "Value for 'third': " << myMap["third"] << endl;
    cout << "Value for 'fourth': " << myMap["fourth"] <<endl;
    //Replace the value for 'first'
    cout << "Replacing first's value with 200: " << endl;
    myMap["first"] = 200;
    cout << "New value for 'first': " << myMap["first"] << endl;
}
void lists() {
    cout << "Intro to maps: " << endl;
    //Make a new list
    list <int> myList;
    //Add each value of i (1-5) to the list
    for (int i = 1; i <= 5; i++)
        myList.push_back(i);
    //Print the list's size
    cout << "List size: " << myList.size() << endl;
    //Print the list's value (in normal order)
    cout << "List contents: ";
    for (auto const& i : myList) {
        cout << i;
    }
    //Iterate through list in reversed order
    cout << "\nIterate through vector in reversed order: ";
    for (auto ir = myList.rbegin(); ir != myList.rend(); ++ir)
        cout << *ir << " ";
}
int main() {
    while (true) {
        //Ask the user for a choice of which to see
        cout << "Select a number from the list below(or any other key to quit):"
                "\n1. Vectors"
                "\n2. Sets"
                "\n3. Maps"
                "\n4. Lists" << endl;
        char userNumber;
        cin >> userNumber;
        switch (userNumber) {
            case '1':
                vectors();
                break;
            case '2':
                sets();
                break;
            case '3':
                maps();
                break;
            case '4':
                lists();
                break;
            default:
                return 0;
        }
    }
}
