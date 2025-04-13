#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
//  প্রথমে N সাইজের ডায়নামিক অ্যারে A তৈরি করে ইনপুট নেয়া হয়েছে।
    int *arrayA = new int[n]; // Dynamic array
    for (int i = 0; i < n; i++)
    {
        cin >> arrayA[i];
    }

    cin >> m;
// M সাইজের নতুন ডায়নামিক অ্যারে B তৈরি করা হয়েছে।
    int *arrayB = new int[m]; // Dynamic array
    for (int i = 0; i < n; i++)
    {
        arrayB[i] = arrayA[i];
// প্রথমে A-এর সব উপাদান B-তে কপি করা হয়েছে।
    }
    delete[] arrayA; // delete[] A; ব্যবহার করে মেমোরি ফ্রি করা হয়েছে।

// N থেকে M পর্যন্ত ইনপুট নেয়া হয়েছে B-তে।
    for (int i = n; i < m; i++)
    {
        cin >> arrayB[i];
    }
// লুপ ব্যবহার করে B-এর সব উপাদান প্রিন্ট করা হয়েছে।
    for (int i = 0; i < m; i++)
    {
        cout << arrayB[i] << " ";
    }
    delete[] arrayB; 
    // প্রোগ্রামের শেষে delete[] B; ব্যবহার করে ডায়নামিক মেমোরি ফ্রি করা হয়েছে।
    return 0;
}