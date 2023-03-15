#include <stdio.h>

int binarysearch(int arr[], int low, int high, int ele)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == ele)
        {
            return mid;
        }
        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 5, 8, 23};
    int n  = sizeof(arr)/sizeof(arr[0]);

    int ele = 8;
    int result = binarysearch(arr,0,n-1,ele);
    if (result = -1){
        printf("The element is present at %d index",result);
    }
    else{
        printf("The element is not present in the given array");
    }

    return 0;
}
