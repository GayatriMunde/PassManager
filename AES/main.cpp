#include <vector>
#include <iostream>
#include "aesEncrypt.h"
#include "aesDecrypt.h"
#include "structs.h"

using namespace std;

int main()
{
    string text = "thisisthekeyssss";
    string key = "thisisthekeyssss";
    int a;
    text = check(text,&a);
    key = check(key,&a);

/*     string abc;
    cin>>abc;

    vector<vector<unsigned char>> message;
    getMatrix(abc, message); */
    vector<vector<unsigned char>> message = aes(text, key);
    cout << decryptAES(message, key) << endl;

    return 0;
}