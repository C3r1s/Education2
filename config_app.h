#ifndef EDUCATION2_CONFIG_APP_H
#define EDUCATION2_CONFIG_APP_H

#include <fstream>
#include <string>
#include <vector>

#include "Functions.h"

using namespace std;

vector<string> GetConfig(string path = "data.cfg") {
    vector<string> result;

    ifstream file;
    file.open(path);

    string str;
    while (getline(file, str)) {
        result.push_back(str);
    }

    return result;
}

string FindValue(vector<string> config, string key) {
    char delimiter = '=';
    for (string item : config) {
        string k = Parser(&item, delimiter);
        string v = item;

        if (k == key) {
            return v;
        }
    }

    return "";
}

string WriteCorrectLinesToArray(vector<string> config, string key, string* array, int s) {
    string result;
    char delimiter = '=';
    for (string item: config) {
        string k = Parser(&item, delimiter);
        string v = item;
        if (k == key) {
            for (int i = 0, j = 2; i < s; ++i, j--) {

            }
        }
    }
    return result;
}


int GetNumberOfCorrectLines(vector<string> config, string key){
    int count = 0;
    char delimiter = '=';
    for (string item : config){
        string k = Parser(&item, delimiter);

        if (k == key){
            count++;
        }
    }
    return count;
}
int GetNumberOfIncorrectLines(vector<string> config, string key){
    int count = 0;
    char delimiter = '=';
    for (string item : config){
        string k = Parser(&item, delimiter);

        if (k != key){
            count++;
        }
    }
    return count;
}





#endif //EDUCATION2_CONFIG_APP_H
