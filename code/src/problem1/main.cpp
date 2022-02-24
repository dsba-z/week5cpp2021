#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <map>
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

//void printMap(const MapInt& mapInt)


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
    
    std::vector<std::string> vecString = {"z", "qwe", "a word", "more words"};
    for (const std::string& word: vecString)
    {
        cout << word << endl;
    }
    return 0;
}
