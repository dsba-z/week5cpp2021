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

//void printMap(const MapInt& mapInt)



int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
