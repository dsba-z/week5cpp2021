#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <map>

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

//void printMap(const MapInt& mapInt)


// x.first
// x.second

// for (int x : vec)



int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
