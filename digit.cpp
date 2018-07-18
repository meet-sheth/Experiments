
// After so many changes finally uploading

// Second change made by me...lets check

#include <bits/stdc++.h>

using namespace std;

//vector<string> split_string(string);

int superDigit(string n, int k) {
    
    if(n.length()<=1)return stoi(n); 
    
    
    int cnt=0;
    for(int i=0;i<n.length();i++){
        cnt += (n[i]-'0')*k;
        
    }
    return superDigit(to_string(cnt),1);

}


int main()
{
    cout << superDigit("861568688536788",100000) << endl;
    return 0;
}

