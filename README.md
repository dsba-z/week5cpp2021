# DSBA Introduction to Programming // Workshops 11, 12, 13, 14
Spring semester 2021/22

Dealing with maps, sets and their variations.

## Task 4.

Recreate the original map (how many times an element has appeared in the vector) and the set as `unordered_map` and `unordered_set`.

Print them and compare the output of ordered and unordered containers.

### 4.1

Output paramenters of `unordered_map` when adding objects.

1. Check which bucked the new element will use with `mapVariable.bucket(element)`
2. Check the size of this bucket with `mapVariable.bucket_size(bucketIndex)`
3. Add the new element
4. Check the size again
5. Print `bucket_count`
6. Print `load_factor`.

# Additional tasks

## Task 5. Custom comparator

**Explanation**

Sort a vector of strings by length of the strings using a custom comparator.

Custom comparators are functions that take two arguments of the same type and return `true` if the first argument is **less** than the second one. They are similar to the `key` parameter in Python sorting functions.

Example:

```cpp
bool compareAbs(int x, int y)
{
    return std::abs(x) < std::abs(y);
}

int main()
{
    VecInt exampleVector = generateVector(15, -5, 5);
    std::sort(exampleVector.begin(), exampleVector.end(), compareAbs);
    printVec(exampleVector);
    return 0;
}
```

This vector will be printed in the increasing order of the *absolute value* of it's elements.

**Task**

Create a vector of strings, for example:

```cpp
std::vector<std::string> vecString = {"first string", "qwe", "z", "a word", "more words"};
```

Print this vector in the increasing order of the length of the string. Example output:

```
z
qwe
a word
more words
first string
```

