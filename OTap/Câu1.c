#include <stdio.h>
#include <stdlib.h>

// Hàm tiềm giá trị bé nhất 
int out_min(int arr[], int n) {
    int min_value = arr[0]; 
    int i;
    for(i = 1; i < n; i++) 
    { 
        if (arr[i] < min_value) 
        {
            min_value = arr[i];
        }
    }
    return min_value;
}

/*
// ========== Cấp phát tỉnh ===========
int main (){
    int arr[5];

    // Nhập các phần tử cho mảng
    for(int i = 0; i < 5; i++){
        printf("arr[%d] = ", i+1);
        scanf("%d", &arr[i]);
    }

    // In các phần tử của mảng
    // for(int i = 0; i < 5; i++){
    //     printf("%d ", arr[i]);
    // }

    // In ra giá trị bé nhất trong mảng
    printf("%d", out_min(arr, n));

    return 0;
}
*/


// ============ Cấp phát động ===========
int main (){
    int n;
    scanf("%d", &n);

    // Cấp phát bộ nhớ động cho mảng
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong du bo nho\n");
        return 1;
    }

	int i;
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("%d", out_min(arr, n));

    // Giải phóng bộ nhớ đã cấp phát
    free(arr);
}
