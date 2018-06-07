#include<stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
    int v[5] = {1, 2, 3, 4, 5};
    int x = 2;

    printf("%d\n", binsearch(x, v, 5));
    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    mid = (high + low) / 2;
    while(low <= high && x != v[mid])
    {
        if(x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (high + low) / 2;
    }
    if(x == v[mid])
        return mid;
    else
        return -1;
}
