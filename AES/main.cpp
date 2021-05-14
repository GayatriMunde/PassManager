#include <vector>
#include <iostream>
#include "aesEncrypt.h"
#include "aesDecrypt.h"
#include "structs.h"

using namespace std;

int main()
{
    string text = "ThIsiSpaSswOrd.";
    string key = "thisisthekeyssss";
    int a;
    text = check(text,&a);
    key = check(key,&a);

    vector<vector<unsigned char>> message = aes(text, key);
    cout << decryptAES(message, key) << endl;


/*
    string abc;
    cin>>abc;

    vector<vector<unsigned char>> message;
    getMatrix(abc, message); 
    vector<vector<unsigned char>> message = aes(text, key);
    cout << toString(message) << endl;
    string msg = strToHex(message);
    cout << msg << endl;
    cout << hexToStr(msg) << endl;
    //getMatrix(, ip);
    //toString(ip);
    //display(ip);
    //cout << decryptAES(ip, key) << endl;
*/

    return 0;
}