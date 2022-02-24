#include <iostream>
#include <vector>
#include <random>
#include <map>
#include <set>

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

// https://en.cppreference.com/w/cpp/container/map/find

// condition is TRUE when element is NOT FOUND
//if (mapCount.find(key) == mapCount.end())

//std::map<int, size_t> fillMap(const VecInt& vec) // input argument is vector
//{
//    int key = 0;
//    size_t value = 1;
//    std::map<int, size_t> mapCount;
//    // code
//    //    mapCount[key] = 1;    - just examples
//    //    mapCount[key] += 1;
    
//    for (int x : vec)
//    {
        
//    }
    
//    for (int i = 0; i < vec.size(); ++i)
//    {
//        int x = vec[i];
        
//    }
    
//    for (int x : vec)
//    {
//        if (...)
//        {
//            // something if true
//        }
//        else
//        {
//            // something if false
//        }
//    }
//    return ....;
    
    
//}

//void printMap(const std::map<int, size_t>& mapInt)
//{
//    for (std::pair<int, size_t> x : mapInt)
//    {
//        x.first;
//        x.second;
//    }
//    for (const std::pair<const int, size_t>& x : mapInt)
//    {
//        x.first;
//        x.second;
//    }
    
//    for (std::map<int, size_t>::const_iterator it = mapInt.cbegin(); it != mapInt.cend(); ++it)
//    {
//        it->first;
//        it->second;
//    }
//    // {}
//    // x.first - key
//    // x.second - value
//}
// for (int x : vec) {}


//bool checkIndex(std::map<int, size_t> map1, int key, size_t& value)
//{
    
//    value = map[key];
//}

int square(int x)
{
    int y = x*x;
    cout << y;
    return y;
}

// github.com/dsba-z/workshops

#include <set>

//for (std::map<int, size_t>::const_iterator it = mapInt.cbegin(); it != mapInt.cend(); ++it)

//for (const std::pair<const int, size_t>& x : mapVariable)
//{
//    x.first;
//    x.second;
//}

void printSet(const std::set<int>& mySet)
{
    for (int x : mySet)
    {
        // do something with x
    }
}

// version 1
std::set<int> makeSet(const std::vector<int>& vec)
{
    std::set<int> newSet;
    // loop through all elements
    // add elements to set
    
}

// version 2
std::set<int> makeSet(const std::map<int, size_t>& m)
{
    std::set<int> newSet;
    // loop through all elements
    // add keys to set
}


// Task 1 solution for regular maps
std::map<int, size_t> fillMap(const VecInt& vec)
{
    std::map<int, size_t> mapCount;
    for (int x: vec)
    {
        if (mapCount.find(x) == mapCount.end())
        {
            mapCount[x] = 1;
        }
        else
        {
            mapCount[x] += 1;
        }
    }
    return mapCount;
}

void printMap(const std::map<int, size_t>& mapToPrint)
{
    for (const std::pair<const int, size_t>& x : mapToPrint)
    {
        cout << x.first << " - " << x.second << endl; 
    }
}

bool compareAbs(int x, int y)
{
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
