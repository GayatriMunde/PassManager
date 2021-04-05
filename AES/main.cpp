#include <bits/stdc++.h>
#include "aesEncrypt.h"
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
    string text = "ENCRYPTTHISWORD";
    string key = "thisisthekeyssss";

    text = check(text);
    key = check(key);

    aes(text, key);       

    return 0;
}