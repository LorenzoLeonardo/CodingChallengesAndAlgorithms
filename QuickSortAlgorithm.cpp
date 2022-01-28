#include <vector>

void swap(long long* a, long long* b)
{
    long long  t;
    t = *a;
    *a = *b;
    *b = t;
}

long long  partition(long long  array[], long long  low, long long  high)
{
    long long  nPivot = array[high];
    long long  i = (low - 1);

    for (long long j = low; j < high; j++)
    {
        if (array[j] < nPivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quicksort(long long  array[], long long  low, long long  high)
{
    if (low < high)
    {
        long long  nPartitioningIndex = 0;

        nPartitioningIndex = partition(array, low, high);
        quicksort(array, low, nPartitioningIndex - 1);
        quicksort(array, nPartitioningIndex + 1, high);
    }
}

void quickSortIterative(long long  arr[], long long  nLow, long long  nHigh)
{
    // Create an auxiliary stack
    std::vector<long long > vStack(nHigh - nLow + 1);

    // initialize top of stack
    long long  nPartitioningIndex = 0;

    // push initial values of l and h to stack
    vStack.push_back(nLow);
    vStack.push_back(nHigh);

    // Keep popping from stack while is not empty
    while (!vStack.empty())
    {
        // Pop h and l
        nHigh = vStack[vStack.size() - 1];
        vStack.pop_back();
        nLow = vStack[vStack.size() - 1];
        vStack.pop_back();

        // Set pivot element at its correct position
        // in sorted array
        nPartitioningIndex = partition(arr, nLow, nHigh);

        // If there are elements on left side of pivot,
        // then push left side to stack
        if (nPartitioningIndex - 1 > nLow)
        {
            vStack.push_back(nLow);
            vStack.push_back(nPartitioningIndex - 1);
        }

        // If there are elements on right side of pivot,
        // then push right side to stack
        if (nPartitioningIndex + 1 < nHigh)
        {
            vStack.push_back(nPartitioningIndex + 1);
            vStack.push_back(nHigh);
        }
    }
}
