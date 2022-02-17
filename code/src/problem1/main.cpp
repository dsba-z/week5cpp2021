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

std::map<int, size_t> fillMap(const VecInt& vec) // input argument is vector
{
    int key = 0;
    size_t value = 1;
    std::map<int, size_t> mapCount;
    // code
    //    mapCount[key] = 1;    - just examples
    //    mapCount[key] += 1;
    
    for (int x : vec)
    {
        
    }
    
    for (int i = 0; i < vec.size(); ++i)
    {
        int x = vec[i];
        
    }
    
    for (int x : vec)
    {
        if (...)
        {
            // something if true
        }
        else
        {
            // something if false
        }
    }
    return ....;
    
    
}

void printMap(const std::map<int, size_t>& mapInt)
{
    for (std::pair<int, size_t> x : mapVariable)
    {
        x.first;
        x.second;
    }
    for (const std::pair<const int, size_t>& x : mapVariable)
    {
        x.first;
        x.second;
    }
    
    for (std::map<int, size_t>::const_iterator it = mapInt.cbegin(); it != mapInt.cend(); ++it)
    {
        it->first;
        it->second;
    }
    // {}
    // x.first - key
    // x.second - value
}
// for (int x : vec) {}


bool checkIndex(std::map<int, size_t> map1, int key, size_t& value)
{
    
    value = map[key];
}

int square(int x)
{
    int y = x*x;
    cout << y;
    return y;
}

int main()
{
    int a = 10;
    int b = square(a);
    
    
    std::map<int, size_t> map1;
    int key = 0;
    size_t value = 1;
    bool found = checkIndex(map1, key, value);
    cout << value;
    
    std::string buffer;
    std::getline(cin, buffer);
    cout << "Hello World!" << endl;
    return 0;
}
