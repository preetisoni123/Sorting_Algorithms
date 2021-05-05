# Sorting_Algorithms
Sorting algorithms using C++11 and python

A brief understanding of different sorting algorithms without going into details.

Sorting algorithms can be categorised into following types:

1. Iterate through the sequence, placing each element in it's right place. Average time complexity is O(N * N). Examples: Insertion sort, Selection sort, Bubble sort etc.

2. Partition based: Partition the sequence into two parts based on some criterion. Repeat it and finally combine. Since in each step we divide the sequence into two halves, we reduce the steps to log(N)
. As a result, average time complexity is O(N * log(N)). Examples: Merge sort, Quick sort, Heap sort. 

    * Based on how we divide and then combine the partitioned sequence, the best/average/worst case time complexities, constant and space is calculated.

3. Use any properties of the given sequence and sort based on that property. These algorithms mostly give average case time complexity as O(N). Examples: Counting sort, Radix sort, Bucket sort, Pigeonhole sort.

4. Using combination of algorithms to provide best results based on length of sequence.: Intro sort which is used in C++ sort() function.
