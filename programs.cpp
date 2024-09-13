#include <bits/stdc++.h>
using namespace std;
int countDigits();
string reverseDigit();
string palindrome();
int gcd();
string isArmstrong();
vector<int> allDivisor();
string isPrime();


int main(){
    // cout<< countDigits() << endl;
    // cout<< reverseDigit() << endl;
    // cout<< palindrome() << endl;
    // cout<< gcd() << endl;
    // cout<< isArmstrong() << endl;

    // vector<int> divisors = allDivisor();
    // for(int divisor: divisors){
    //     cout<< divisor << ", ";
    // }

    cout<< isPrime() << endl;

}

int countDigits(){
    string s;
    int count = 0;

    cout<<"Enter a number: ";
    cin>>s;
    for(const char c:s){
        count++;
    }
    return count;
}
string reverseDigit(){
    int s;
    int val;
    int res=0;
    string res2 = "";
    cout<< "Enter the Digits: ";
    cin>>s;

    while(s){
        val = s%10;
        res = res*10+val; // no 0's at the end
        s /= 10;
        res2 = res2 + to_string(val);// for 0's in the end
    }
    return res2;
}
string palindrome(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    for(int i=0; i<=s.length()/2; ++i){
        if(s[i] != s[s.length()-1-i]){
            return "Not a palindrome";
        }
    }
    return "It is a palindrome";
}
int gcd(){
    int a;
    int b;
    int gcd;
    cout<<"Enter N1: ";
    cin>>a;
    cout<<"Enter N2: ";
    cin>>b;

    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a==0){
        return b;
    }else{
        return a;
    }

}
string isArmstrong(){
    int num;
    float sum = 0;
    int temp;
    cout<<"Enter a Number: ";
    cin>>num;
    temp = num;
    while(temp>0){
        sum += pow(temp%10, 3);
        temp /= 10;
    }
    cout<<"sumend = "<<sum << endl;
    if(sum == num){
        return "It is an Armstrong Number";
    }else{
        return "It is not an Armstrong Number";
    }
}
vector<int> allDivisor(){
    int num;
    vector<int> divisors;
    cout<< "Enter a Number: ";
    cin>> num;

    for(int i=1; i<=(num+1)/2; ++i){
        if(num%i == 0){
            divisors.push_back(i);
        }
    }
    divisors.push_back(num);
    return divisors;
}
string isPrime(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num<=0){
        return "It is not a Prime Number";
    }
    if(num==1 || num==2){
        return "It is a Prime Number";
    }
    for(int i=2; i<=(num+1)/2; ++i){
        if(num%i==0){
            return "It is not a Prime Number";
        }
    }
    return "It is a Prime Number";
}
