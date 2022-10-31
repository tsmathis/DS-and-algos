#include <vector>

int binarySearch(std::vector<int> &arr, int target)
{
    int first{0};
    int last = arr.size() - 1;

    do
    {
        int mid{first + (last - first) / 2};

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            last = mid - 1;
        else
            first = mid + 1;

    } while (first <= last);

    return -1;
}
