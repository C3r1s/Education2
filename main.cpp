// Мерекин Артём Валерьевич
// Дан текстовый файл. В файле могут быть строки не того формата, что нам нужен. Формат строк придумайте сами.
// Необходимо скопировать только правильные строки в массив.
// И вывести сколько было всего строчек, сколько правильных, сколько неправильных.

#include <iostream>
#include <string>
#include <vector>
#include "Functions.h"
#include "config_app.h"
using namespace std;
// Нужно найти и вынести только ДАТЫ
int main() {
    vector<string> config = GetConfig("D:\\Programming\\Education2\\data.cfg");
    string input = FindValue(config, "Date");
    if (input.empty()) {
        cout << "!ERROR! Key not found" << endl;
    } else {
        cout << "!SUCCESS! Key found" << endl;
    }

    int correct_lines = GetNumberOfCorrectLines(config, "Date");
    int incorrect_lines = GetNumberOfIncorrectLines(config, "Date");
    cout << "Number of correct lines - " << correct_lines << endl;
    cout << "Number of incorrect lines - " << incorrect_lines << endl;

    int size = correct_lines;
    string* arr = new string[size];
    WriteCorrectLinesToArray(config, "Date", arr, size);
    PrintArray(arr, size);
    return 0;
}