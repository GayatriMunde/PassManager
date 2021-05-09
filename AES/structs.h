#ifndef STRUCTS_H
#define STRUCTS_H

#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

extern vector<unsigned char> rc;
extern vector<vector<unsigned char>> rcon;
extern map<int, vector<vector<unsigned char>>> keys;

extern vector<vector<int>> MD5matrix;
extern vector<vector<int>> invMD5matrix;

extern vector<vector<unsigned char>> SBOX;
extern vector<vector<unsigned char>> INVSBOX;

extern map<int, int> NBOX;

void getMatrix(string text, vector<vector<unsigned char>> &matrix);

string check(string text, int *count);

int getIndex(char m);

string convertHex(int value);

unsigned char getSBoxVal(unsigned char value);

unsigned char getInvSBoxVal(unsigned char value);

void keyExpansion(vector<vector<unsigned char>> &key);

void display(vector<vector<unsigned char>> arr);

string toString(vector<vector<unsigned char>> message);
#endif