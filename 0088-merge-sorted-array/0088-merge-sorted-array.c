void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int arr [m+n];
    int *p1 = nums1;
    int *p2 = nums2;
    int *p3 = arr;      
    for (int i = 0; i < m; i++)
    {
        *p3 = *p1;
        p1++;
        p3++;
    }
    for (int j = 0; j < n; j++)
    {
        *p3 = *p2;
        p2++;
        p3++;
    }
    for (int i = 0; i < m + n - 1; i++)
    {
        for (int j = i + 1; j < m + n ; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < m+n; i++)
    {
        nums1[i] = arr[i];
    }
}