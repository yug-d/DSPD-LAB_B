/*Aim:- Write a program to implement a Binary Search algorithm. Write a search function which takes a SearchList as its first parameter and a Comparable as its second. If either parameter is null, or if the SearchList is empty, you should return NULL.
 implement the following algorithm: 
• Examine the value in the middle of the current array and print it. 
• If the midpoint value is the value that we are looking for, return true 
• If the value that we are looking for is greater than the midpoint value, adjust the current array to start at the midpoint and print the index.
• if the value that we are looking for is less than the midpoint value, adjust the current array to end at the midpoint  and print the index.
• Continue until you find the value, or until the start reaches the end, 
*/

#include <stdio.h>

int main() {
    int i, n, search, first = 0, last, mid, found = 0;

    printf("Enter the range of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d sorted elements of array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    last = n - 1;

    printf("Enter element to search: ");
    scanf("%d", &search);

    while (first <= last) {
        mid = (first + last) / 2;

        printf("first of array is %d\n", first + 1);
        printf("last of array is %d\n", last + 1);
        printf("Mid of array is %d\n", mid + 1);
        printf("The array is:\n");
        for (i = first; i <= last; i++) {
            printf("%d ", a[i]);
        }
        printf("\n\n");

        if (a[mid] == search) {
            printf("The element %d is located at position %d.\n", search, mid + 1);
            found = 1;
            break;
        } else if (search < a[mid]) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }

    if (!found) {
        printf("The element %d is not present in the array.\n", search);
    }

    return 0;
}


