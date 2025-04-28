#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    vector<int> numbers;
    ifstream inputFile("liczby.txt");
    ofstream outputFile("wyniki4.txt");

    if (!inputFile.is_open()) {
        cout << "Nie udalo sie otworzyc pliku liczby.txt." << endl;
        return 1;
    }

    int number;
    while (inputFile >> number) {
        numbers.push_back(number);
    }

    for (int x : numbers) {
        outputFile << x << " " << reverseNumber(x) << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Program zakonczyl dzialanie. Wyniki zapisane w wyniki4.txt." << endl;
    return 0;
}


int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    vector<int> numbers;
    ifstream inputFile("liczby.txt");
    ofstream outputFile("wyniki4.txt");

    if (!inputFile.is_open()) {
        cout << "Nie udalo sie otworzyc pliku liczby.txt" << endl;
        return 1;
    }

    int number;
    while (inputFile >> number) {
        numbers.push_back(number);
    }

    inputFile.close();

    outputFile << "4.1" << endl;
    for (int x : numbers) {
        int reversed = reverseNumber(x);
        if (reversed % 17 == 0) {
            outputFile << reversed << endl;
        }
    }

    outputFile.close();

    cout << "Program zakonczyl dzialanie. Wyniki zapisane w wyniki4.txt" << endl;
    return 0;
}

using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    vector<int> numbers;
    ifstream inputFile("liczby.txt");
    ofstream outputFile("wyniki4.txt", ios::app); 

    if (!inputFile.is_open()) {
        cout << "Nie udalo sie otworzyc pliku liczby.txt" << endl;
        return 1;
    }

    int number;
    while (inputFile >> number) {
        numbers.push_back(number);
    }

    inputFile.close();

    int maxDifference = 0;
    int numberWithMaxDifference = 0;

    for (int x : numbers) {
        int reversed = reverseNumber(x);
        int difference = abs(x - reversed);

        if (difference > maxDifference) {
            maxDifference = difference;
            numberWithMaxDifference = x;
        }
    }

    outputFile << "4.2" << endl;
    outputFile << numberWithMaxDifference << " " << maxDifference << endl;

    outputFile.close();

    cout << "Program zakonczyl dzialanie. Wyniki zapisane w wyniki4.txt" << endl;
    return 0;
}

bool First(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

int main() {
    ifstream inputFile("liczby.txt");
    if (!inputFile.is_open()) {
        cout << "Nie mo¿na otworzyæ pliku" << endl;
        return 1;
    }

    int number;
    while (inputFile >> number) {
        int reversed = reverseNumber(number);
        if (First(number) && First(reversed)) {
            cout << number << endl;
        }
    }

    inputFile.close();
    return 0;
}


int main() {
    ifstream inputFile("liczby.txt");
    if (!inputFile.is_open()) {
        cerr << "Nie mo¿na otworzyæ pliku liczby.txt" << endl;
        return 1;
    }

    map<int, int> countMap;

    int number;
    while (inputFile >> number) {
        countMap[number]++;
    }

    int differentNumbers = countMap.size();
    int exactlyTwoTimes = 0;
    int exactlyThreeTimes = 0;

    for (auto& pair : countMap) {
        if (pair.second == 2) exactlyTwoTimes++;
        if (pair.second == 3) exactlyThreeTimes++;
    }

    cout << differentNumbers << " " << exactlyTwoTimes << " " << exactlyThreeTimes << endl;

    inputFile.close();
    return 0;
}

