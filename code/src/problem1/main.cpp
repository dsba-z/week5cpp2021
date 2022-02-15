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


bool checkKey(const MapInt& m, int key, size_t& value)
{
    value = 0;
    
    if (key in m)
    {
//        value = m[key];   - does not work for const
        value = m.at(key);
        return true;
    }
    else
    {
        return false;
    }
}


MapInt fillMap(...)
{
    MapInt mapCount;
    int key = 0;
    size_t value = 1;
    mapCount[key] = value;
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



int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
