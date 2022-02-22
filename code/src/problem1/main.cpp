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
    VecInt vec;
    
    for (int i = 0; i < n; ++i)
    {
        vec.push_back(distr(gen));
    }
    return vec;
}

// consider using range-based loops for printing
void printVec(const VecInt& vecInt)
{
    for (int x : vecInt)
    {
        cout << x << std::endl;
    }
}

typedef std::map<int, size_t> MapInt;


//bool checkKey(const MapInt& m, int key, size_t& value)
//{
//    value = 0;
    
//    if (key in m)
//    {
////        value = m[key];   - does not work for const
//        value = m.at(key);
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}


MapInt fillMap(...)
{
    MapInt mapCount;
    int key = 0;
    size_t value = 1;
    mapCount[key] = 1;
    mapCount[key] += 1;
    
    // alternative
    mapCount.insert({key, value});
    
    if (mapCount.find(key) == mapCount.end())
    {
        // key is NOT in the map
    }
}




// for (int x : vec)
// for (std::pair<int, size_t> x : mapCount)
// for (const std::pair<const int, size_t>& x : mapCount)
// x.first   - this is the key
// x.second  - this is the value

//void printMap(const MapInt& mapInt)

//it->first
// (*it).first

std::set<int> makeSet(const std::vector<int>& vec)
{
    std::set<int> mySet;
    // go through all elements of vec
    // add them to mySet
}

std::set<int> makeSet(const std::map<int, size_t>& myMap)
{
    std::set<int> mySet;
    // go through all keys of myMap
    // add them to mySet
}

std::pair<std::multimap<int ,size_t>::iterator,
          std::multimap<int ,size_t>::iterator> a;
// loop through maps:
// for (const std::pair<const int, size_t>& x : mapCount)

int square(int x)
{
    int y = x*x;
    return y;
}

int main()
{
    
    for (std::multimap<int, size_t>::iterator it = it1; it != it2; ++it)
    {
        
    }
    int a = 3;
    int b = square(a);
    
    VecInt v = generateVector(15, -4, 9);
    printVec(v);
    
    return 0;
}
