#include "structs.h"
#include <bits/stdc++.h>

using namespace std;

void display(vector<vector<unsigned char>> &arr){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            cout << int(arr[i][j]) << " ";
        cout << endl;
    }
}

void getStateArr(string text, vector<vector<unsigned char>> &matrix){
    int ch = 0;
    for (int i = 0; i < 4; i++)
    {
        if (ch >= 16) ch = i;
        vector<unsigned char> column;
        for (int j = 0; j < 4; j++){
            column.push_back(int(text[ch]));
            ch += 4;
        }
        matrix.push_back(column);
    }
}

void subBytes(vector<vector<unsigned char>> &stateArr){
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            stateArr[i][j] = getSBoxVal(stateArr[i][j]);
}

void shiftRows(vector<vector<unsigned char>> &stateArr){
    for(int i = 1; i < 4; i++){
        if(i == 1)
            for(int j = 2; j >= 0; j--)
                swap(stateArr[i][j], stateArr[i][3]);
        else if(i == 2){
            swap(stateArr[i][0], stateArr[i][2]);
            swap(stateArr[i][1], stateArr[i][3]);
        } else
            for(int j = 1; j < 4; j++)
                swap(stateArr[i][0], stateArr[i][j]);
    }
}

void MixColumns(vector<vector<unsigned char>> &stateArr){
    vector<int> temp = {0, 0, 0, 0};

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            for(int k=0; k<4; k++){
                if(MD5matrix[j][k] == 3)
                    temp[j] ^= ((stateArr[k][i] * 2) ^ stateArr[k][i]);
                else
                    temp[j] ^= (stateArr[k][i] * MD5matrix[j][k]);
            }
        }
        for(int k=0; k<4; k++){
            stateArr[k][i] = temp[k];
            temp[k] = 0;
        }
    }
}

void addRoundKey(vector<vector<unsigned char>> &stateArr, vector<vector<unsigned char>> &key){ //First round key
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            stateArr[i][j] ^= key[i][j];
}

void keyExpansion(vector<vector<unsigned char>> &stateArr, vector<vector<unsigned char>> &key, int c){
    vector<vector<unsigned char>> newKey = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    vector<unsigned char> temp;
    vector<unsigned char> rcon = {rc[c], 0x00, 0x00, 0x00};

    for(int i=1; i<4; i++)
        temp.push_back(key[i][3]);
    temp.push_back(key[0][3]);

    for(int i=0; i<4; i++)
        temp[i] = getSBoxVal(temp[i]);
        
    for(int i=0; i<4; i++)
        newKey[i][0] = key[i][0] ^ temp[i] ^ rcon[i];

    for(int i=1; i<4; i++)
        for(int j=0; j<4; j++)
            newKey[j][i] = newKey[j][i-1] ^ key[j][i];

    key = newKey;
    addRoundKey(stateArr, key);
}

void lastRound(vector<vector<unsigned char>> stateArray, vector<vector<unsigned char>> keyArray){
    subBytes(stateArray);
    shiftRows(stateArray);
    keyExpansion(stateArray, keyArray, 9);
}

void rounds(vector<vector<unsigned char>> stateArray, vector<vector<unsigned char>> keyArray){
    for(int count = 0; count<9; count++){
        subBytes(stateArray);
        shiftRows(stateArray);
        MixColumns(stateArray);
        keyExpansion(stateArray, keyArray, count);
    }
    lastRound(stateArray, keyArray);
}

void aes(string text, string key){
    vector<vector<unsigned char>> stateArray, keyArray;
    getStateArr(text, stateArray);
    getStateArr(key, keyArray);

    addRoundKey(stateArray, keyArray);
    rounds(stateArray, keyArray);

    display(stateArray);
}

