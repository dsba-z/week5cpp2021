#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;


typedef std::vector<int> VecInt;

// Generating random numbers:
VecInt generateVector(size_t n, int rangeStart, int rangeEnd)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distr(rangeStart, rangeEnd - 1);
    
    VecInt randomVector;
    for (size_t i = 0; i < n; ++i)
    {
        randomVector.push_back(distr(gen));
    }
    return randomVector;
}
// consider using range-based loops for printing
void printVec(const VecInt& vecInt)
{
    for (int x : vecInt)
    {
        cout << x << endl;
    }
}
typedef std::map<int, size_t> MapInt;

MapInt fillMap(...)
{
    MapInt mapCount;
    
    int key = 0;
    size_t value = 1;
    mapCount[key] = value;
    mapCount[key] += 1;
    
    mapCount.insert({key, value});
    
    std::pair<bool, size_t> outputPair = std::make_pair(1, 2);

    std::map<int, size_t> mapInt;
    for (const std::pair<const int, size_t>& x : mapInt)
    {
        cout << x.first;
    }
    // if (mapCount.find(key) == mapCount.end())
//    {
//         key NOT in mapCount
//    }
}

std::pair<std::multimap<int, size_t>::iterator,
          std::multimap<int, size_t>::iterator> a;

//void printMap(const MapInt& mapInt)

// version 1
std::set<int> makeSet(const VecInt& vec)
{
    std::set<int> newSet;
    // make a loop through vec
    // add all elements to set
}

// version 2
std::set<int> makeSet(const MapInt& myMap)
{
    std::set<int> newSet;
    // make a loop through myMap
    // add all keys to set
}

// printing:
// for (int x : mySet)
// {
//     // print
// }

// x.first
// x.second

// 

//// blue comment
//// 
//// 


std::unordered_map<int, size_t> makeMap(std::vector<int> vec)
{
    std::unordered_map<int, size_t> newMap;
    // bucket_count, load_factor
    for (int x : vec)
    {
        // use newMap.bucket(element) to get which bucket the new element will use
        // check the size of this bucket with newMap.bucket_size(bucketIndex)
        // add element
        // check the size again
        
        
        // print all stats
        // print map
    }
}



bool compareAbs(int x, int y)
{
    if (std::abs(x) == std::abs(y))
    {
        return x < y;
    }
    return std::abs(x) < std::abs(y);
}

int main()
{
    cout << "Original\n";
    VecInt exampleVector = generateVector(15, -5, 5);
    printVec(exampleVector);
    
    cout << "Sorted\n";
    std::sort(exampleVector.begin(), exampleVector.end());
    printVec(exampleVector);

    cout << "Custom sorted\n";
    std::sort(exampleVector.begin(), exampleVector.end(), compareAbs);
    printVec(exampleVector);
    
    std::vector<std::string> vecString = {"first string", "qwe", "z", "a word", "more words"};
    for (const std::string& word: vecString)
    {
        cout << word << endl;
    }
    return 0;
}
