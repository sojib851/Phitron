#include <stdio.h>

int main() {
    int N;
    
    // ইনপুট নিচ্ছে
    scanf("%d", &N);
    
    // দুই ডিজিটকে বের করছে
    int tens = N / 10;  // প্রথম ডিজিট (tens place)
    int units = N % 10; // দ্বিতীয় ডিজিট (units place)

    // চেক করছে কোন একটি ডিজিট অন্যটি দ্বারা বিভাজ্য কিনা
    if (tens % units == 0 || units % tens == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}