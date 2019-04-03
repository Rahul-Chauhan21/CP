#include<stdio.h>
#include<stdlib.h>

int binarySearch(int *ptr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (ptr[m] == x)
            return m;

        // If x greater, ignore left half
        if (ptr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

int main()
{
    int n;
    scanf("%d",&n);

    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    int x;
    printf("Enter the element to be searched \n");
    scanf("%d",&x);

    int result = binarySearch(ptr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present"
                            " in array")
                   : printf("Element is present at "
                            "index %d",
                            result);
    return 0;
}
