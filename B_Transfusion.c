#include <stdio.h>

// ফাংশন: সব সংখ্যা সমান করা সম্ভব কিনা
int canBeMadeEqual(int arr[], int size) {
    int max = arr[0], min = arr[0];
    
    // সর্বোচ্চ এবং সর্বনিম্ন মান বের করা
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    // যদি সর্বোচ্চ এবং সর্বনিম্ন মানের পার্থক্য 0 হয়, তাহলে সমান
    if (max == min) return 1;

    // যদি পার্থক্য সমান না করা যায়, তাহলে NO
    return 0;
}

int main() {
    int n;
scanf("%d",&n);
while(n--){
    int size = 4; // ইনপুট সংখ্যা
    int arr[4];

    // ইনপুট নেওয়া
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // যাচাই করা
    if (canBeMadeEqual(arr, size)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
    return 0;
}
