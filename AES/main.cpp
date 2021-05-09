#include <vector>
#include <iostream>
#include "aesEncrypt.h"
#include "aesDecrypt.h"
#include "structs.cpp"

using namespace std;

int main()
{
    string text = "thisisthekeyssss";
    string key = "thisisthekeyssss";
    int a;
    text = check(text,&a);
    key = check(key,&a);

    vector<vector<unsigned char>> message = aes(text, key);;
    //getMatrix(encMsg, message);
    cout << decryptAES(message) << endl;

    return 0;
}