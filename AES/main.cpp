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
    string text = "thisisthekeyssss";
    string key = "thisisthekeyssss";

    text = check(text);
    key = check(key);

    string encMsg = aes(text, key);
    cout << encMsg << endl;

    vector<vector<unsigned char>> message;
    getMatrix(encMsg, message);
    cout << decryptAES(message) << endl;

    return 0;
}