# Sorting_Algorithms
Brief concept of Sorting algorithms and examples using C++11 and python

Sorting algorithms can be categorised into following types:

1. Iterate through the sequence, placing each element in it's right place.
      * Average time complexity is O(N * N). As to find the right place for each item, we iterate through entire sequence in average/worst case.
      * Examples: Insertion sort, Selection sort, Bubble sort etc.

2. Partition based: Partition the sequence into two, based on some criterion. Repeat it until the size is 1. Then start combining it again.
      * In each step we divide the sequence into two halves, we reduce the steps to log(N). The average time complexity becomes O(N * log(N)).
      * Examples: Merge sort, Quick sort, Heap sort. 
      * Binary tree related sorting algorithms also come into this category. Binary trees divide the sequence into two parts in each step.
      * Based on how we divide and then combine the partitioned sequence, the best/average/worst case time complexities, **constant** and space is calculated.

3. Use any properties of the given sequence and sort based on that property.** These algorithms mostly give average case time complexity as O(N). Examples: Counting sort, Radix sort, Bucket sort, Pigeonhole sort.

4. Using combination of algorithms to provide best results based on length of sequence.: Intro sort which is used in C++ sort() function.
