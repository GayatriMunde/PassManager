#include <bits/stdc++.h>
#include "structs.h"

using namespace std;

void display(vector<vector<string>> arr){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<string>> getStateArr(string text){
    vector<vector<string>> matrix;

    int ch = 0;
    for (int i = 0; i < 4; i++)
    {
        if (ch >= 16) ch = i;
        vector<string> column;
        for (int j = 0; j < 4; j++){
            column.push_back(convertHex(text[ch]));
            ch += 4;
        }
        matrix.push_back(column);
    }
    
    return matrix;
}

void subBytes(vector<vector<string>> &stateArr){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            string val = stateArr[i][j];
            stateArr[i][j] = getSBoxVal(val[0], val[1]);
        }
	}
    return;
}

void shiftRows(vector<vector<string>> &stateArr){
	string tmp[16];

	tmp[0] = stateArr[0][0];
	tmp[1] = stateArr[0][1];
	tmp[2] = stateArr[0][2];
	tmp[3] = stateArr[0][3];
	
	tmp[4] = stateArr[1][1];
	tmp[5] = stateArr[1][2];
	tmp[6] = stateArr[1][3];
	tmp[7] = stateArr[1][0];

	tmp[8] = stateArr[2][2];
	tmp[9] = stateArr[2][3];
	tmp[10] = stateArr[2][0];
	tmp[11] = stateArr[2][1];
	
	tmp[12] = stateArr[3][3];
	tmp[13] = stateArr[3][0];
	tmp[14] = stateArr[3][1];
	tmp[15] = stateArr[3][2];

    int z = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++){
            stateArr[i][j] = tmp[z++];
        }
	}
}

void MixColumns(vector<vector<string>> &stateArr){
    
}

int main()
{
   string text = "ENCRYPTTHISWORD";
      
   if (text.length() % 16 != 0)
    {
        int rem = 16 - text.length();
        while(rem--){
            text += '-';
        }
    }
            
    vector<vector<string>> matrix;
    matrix = getStateArr(text);
    display(matrix);
    cout << endl;
    subBytes(matrix);
    display(matrix);
    cout << endl;
    shiftRows(matrix);
    display(matrix);

    return 0;
    
}