#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int, int> dictionary;

    int arr[] = {1,2,2,2,1,3,4};
    int query[] = {1,2,3,4,5};
    map<int, int> occur;
    vector<int> freq(4,0);
    freq[3] = numeric_limits<int>::max();

    for(int& i:arr){
        if(dictionary[i]){
            dictionary[i]++;
        }else{
            dictionary[i] = 1;
        }
        if(dictionary[i]>freq[1]){
            freq[0] = i;
            freq[1] = dictionary[i];
        }
        if(dictionary[i]<freq[3] || freq[2] == i){
            freq[2] = i;
            freq[3] = dictionary[i];
        }
    }

    for(const int& i:query){
        if(!dictionary[i]){
            occur[i] = 0;
        }else{
            occur[i] = dictionary[i];
        }
    }

    // for(const auto& pair:dictionary){
    //     cout<< pair.first << "->" << pair.second << endl;
    // }

    for(const auto& pair:occur){
        cout<< pair.first << "->" << pair.second << endl;
    }

    cout<<"The frequency of "<< freq[0] << " is "<< freq[1] << ", i.e. the highest and the frequency of "<< freq[2] << " is "<< freq[3] << " i.e. the lowest.";


    return 0;
}