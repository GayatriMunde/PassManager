#include <vector>
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

    string encMsg = aes(text, key);
    cout << encMsg << endl;

    vector<vector<unsigned char>> message;
    getMatrix(encMsg, message);
    cout << decryptAES(message) << endl;

    return 0;
}