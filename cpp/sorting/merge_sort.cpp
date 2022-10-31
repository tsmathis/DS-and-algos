#include <vector>

std::vector<int> mergeArrays(std::vector<int> left, std::vector<int> right)
{
    if (left.size() == 0)
        return right;

    if (right.size() == 0)
        return left;

    std::vector<int> result;
    int index_left{0};
    int index_right{0};

    do
    {
        if (left[index_left] < right[index_right])
        {
            result.push_back(left[index_left]);
            ++index_left;
        }
        else
        {
            result.push_back(right[index_right]);
            ++index_right;
        }
        if (index_right == right.size())
        {
            result.insert(result.end(), left.begin() + index_left, left.end());
            break;
        }
        if (index_left == left.size())
        {
            result.insert(result.end(), right.begin() + index_right, right.end());
            break;
        }
    } while (result.size() < left.size() + right.size());

    return result;
}

std::vector<int> mergeSort(std::vector<int> arr)
{
    if (arr.size() < 2)
        return arr;

    int midpoint = arr.size() / 2;
    std::vector<int> left = {arr.begin(), arr.begin() + midpoint};
    std::vector<int> right = {arr.begin() + midpoint, arr.end()};

    return mergeArrays(mergeSort(left), mergeSort(right));
}