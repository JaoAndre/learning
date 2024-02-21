#include <iostream>
#include <vector>

int search(std::vector<int> array, int item)
{
    int low = 0;
    int high = array.size() - 1;

    while (low <= high)
    {
        int middle = (low + high) / 2;
        int guess = array[middle];

        if (guess == item) return middle;
        if (guess > item) high = middle - 1;
        else low = middle + 1;
    }

    return -1;
}

int main()
{
    std::vector<int> array{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << search(array, 9) << '\n';

    return 0;
}