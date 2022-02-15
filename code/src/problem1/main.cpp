#include <iostream>
#include <vector>
#include <random>
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

// https://en.cppreference.com/w/cpp/container/map/find

// condition is TRUE when element is NOT FOUND
//if (mapCount.find(key) == mapCount.end())

std::map<int, size_t> fillMap(...)
{
    int key = 0;
    size_t value = 1;
    std::map<int, size_t> mapCount;
    // code
    
//    mapCount[key] = value;
    mapCount[key] += 1;
    
    mapCount.insert({key, value});
}

//void printMap(const MapInt& mapInt)

// for (int x : vec)
// for (std::pair<int, size_t> x: mapVariable)
// x.first - key
// x.second - value

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
