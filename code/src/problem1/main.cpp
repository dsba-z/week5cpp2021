#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <map>
#include <set>

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
    
    // now use the function call distr(gen) whenever you need a new randon number
    // for example:
    int rNum1 = distr(gen);
    int rNum2 = distr(gen);
    // these will be two different random numbers
}

// consider using range-based loops for printing
void printVec(const VecInt& vecInt);

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



int main()
{
    int a = 1 + \
    2;
    cout << "Hello World!" << endl;
    return 0;
}
