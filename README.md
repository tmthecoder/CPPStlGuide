# A Quick guide to the C++ STL  
**What is the STL?**  
  
The C++ STL, or Standard Template library is a collection of C++ templates for various data structures (including lists, maps, vectors, arrays, etc.). We will be taking a deeper dive into the various aspects of the STL, including Vectors, Sets, Maps, and Lists.  
  
**Vectors**
  
Vectors are dynamic arrays, meaning they can resize themselves and do not need a set size upon initialization. In a vector, new elements are placed at the end, and are iterable. Like arrays, you can access single elements in vectors using indices, for example: `myVector[4]` will return the 5th value in the vector (since they also start count at 0, like arrays). An example of vectors is seen within the execution of the `vectors()` method, which is executed upon an entry of `1` when running `main.cpp` 
  
**Sets**  
  
Sets are a type of container of elements in which each element has to be unique. Unlike arrays and vectors, sets are not index based, and are based around the element. Any duplicate items will **NOT** be placed in the set. To put a value into a set, use `setName.insert(value)`. If a duplicate item is inserted, it will simply leave the set as is, moving past the duplicate value. An example of sets is seen within the execution of the `sets()` method, which is executed upon an entry of `2` when running `main.cpp`  
  
**Maps**  
  
Maps are a type of container in which you have a pair of items stored in a mapped fasion, with keys corresponding to values. Each key will have a corresponding value, and can only have one value per key, but different keys can hold the same value (for example: `key: first, value: 1 and key: second, value: 1` is possible, but `key: first, value: 1 and key: first, value: 2` is not possible). Maps can be iterated through with a loop, giving you both the key and the value, or you can find a specific value when given a key, done in array-style notation: `myMap[key]`, which will yield the value for that given key. An example of maps is seen within the execution of the `maps()` method, which is executed upon an entry of `3` when running `main.cpp`  
  
**Lists** 
  
Lists are another type of dynamically allocated container, similar to vectors, meaning that they can automatically resize themselves based on the count of elements inside of them. Like vectors, you can also access them with indices, as such: `myList[3]`, which gives the 4th item of the list (since count starts at 0). The difference between lists and vectors is their speeds at different tasks. Lists are slower at traversing the items, but once a location is found, modification is done quickly. An example of lists is seen within the execution of the `lists()` method, which is executed upon an entry of `4` when running `main.cpp`
