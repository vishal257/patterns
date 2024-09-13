#include <bits/stdc++.h>
using namespace std;
int print(int n, int i){
    if(n==i){
        return 0;
    }
    cout<< "Vishal"<< endl;
    print(n, i+1);
}
int count(int n, int i){
    if(n > i){
        return 0;
    }
    cout<< n << endl;
    count(n+1, i);
}
int countDown(int n){
    if(n == 0){
        return 0;
    }
    cout<< n << endl;
    countDown(n-1);
}

int sum(int n, int res){
    if(n == 0) return res;
    res += n;
    return sum(n-1, res);
}
int sum2(int n){
    if(n==0){
        return 0;
    }
    return n+sum2(n-1);
}
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int reverseArray(int arr[], int start, int end){
    if(start<end){
        swap(arr[start], arr[end]);
    return reverseArray(arr, start+1, end-1);
    }
}
void printArray(int arr[], int len){
    for(int i=0; i<len; ++i){
        cout<<arr[i]<< ", ";
    }
}
string palindrome(int i, string s){
    if(i>s.length()/2) return "It is a Palindrome";
    if(s[i] != s[s.length()-1-i]){
        return "It is not a Palindrome";
    }
    return palindrome(i+1, s);

}
int fibonacci(int num, vector<int>& memo){
    if(num<=1) return num;
    if(memo[num] != -1) return memo[num];
    memo[num] = fibonacci(num-1, memo)+fibonacci(num-2, memo);
    return memo[num];
}
int main(){

    // print(5, 0);
    // count(1,10);
    // countDown(5);
    // cout<< sum(5,0) << endl;
    // cout<< sum2(5) << endl;
    // cout<< factorial(5) << endl;

    // int n=5;
    // int arr[] = {1,2,3,4,5};
    // reverseArray(arr, 0, n-1);
    // printArray(arr,5);

    // cout<< palindrome(0, "racecar")<< endl;

    // int n=10000;
    // vector<int> memo(n+1, -1);
    // cout<< fibonacci(n, memo) << endl;

    return 0;
}