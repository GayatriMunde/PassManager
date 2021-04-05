#include <bits/stdc++.h>
#include "aesEncrypt.h"
#include "aesDecrypt.h"
#include "structs.h"

using namespace std;

string check(string text){
    if (text.length() < 16){
        int rem = 16 - text.length();
        while(rem--){
            text += '-';
        }
    }
    return text;
}

int main()
{
    string text = "ENCRYPTIONwith";
    string key = "thisisthekeyssss";

    text = check(text);
    key = check(key);

    vector<vector<unsigned char>> message = aes(text, key);
    cout<<endl; 
    decryptAES(message);

    return 0;
}