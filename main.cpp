//// Task 1
//#include "iostream"
//using namespace std;
//
//void swap2(unsigned int &a, unsigned int &b) {
//    unsigned int buffer = a;
//    a = b;
//    b = buffer;
//}
//
//int main() {
//    unsigned int a,b;
//    cin >> a >> b;
//    swap2(a,b);
//
//    cout << a  << " " << b;
//}
//
//
//// Task 2
//
//#include "iostream"
//using namespace std;
//
//int* inputArray(int n) {
//    int* result = new int[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> result[i];
//    }
//
//    return result;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int* array = inputArray(n);
//
//    for (int i = 0; i < n; ++i) {
//        cout << array[i];
//    }
//}
//
////// Task 3
//#include "iostream"
//#include <stdio.h>
//using namespace std;
//
//
//int main() {
//    int rowCount;
//    cin >> rowCount;
//
//    int* counts = new int[rowCount] {};
//    char** results = new char*[rowCount];
//
//    for (int i = 0; i < rowCount; ++i) {
//        char letter, *word = new char[100];
//        cin >> letter >> word;
//        counts[i] = 0;
//        for (int j = 0; j < 100; ++j) {
//            if (word[j] == '\0') break;
//            if (word[j] == letter) counts[i]++;
//        }
//        results[i] = new char[100];
//        sprintf(results[i], "%d %c in %s", counts[i], letter, word);
//    }
//
//    for (int i = 0; i < rowCount; ++i) {
//        cout << results[i] << endl;
//    }
//}
//
/////// Task 4
//#include "iostream"
//#include "cctype"
//using namespace std;
//
//void deleteLetter(char*& word, int letterIndex) {
//    word[letterIndex] = '\0';
//    int index = letterIndex;
//    while (word[index + 1] != '\0') {
//        swap(word[index], word[index + 1]);
//        index++;
//    }
//}
//
//void getClearWord(char*& word) {
//    int index = 0;
//    while (word[index] != '\0') {
//        if(!isalpha(word[index])) {
//            deleteLetter(word, index--);
//        }
//        index++;
//    }
//}
//
//int main() {
//    char* word = new char[100];
//    cin >> word;
//
//    getClearWord(word);
//    cout << word << endl;
//}
//
//
////// Task 6
//#include <iostream>
//using namespace std;
//
//
//void printArray(int *array, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    int *odds = new int[n], oddsSize = 0;
//    int *evens = new int[n], evensSize = 0;
//
//    for (int i = 0; i < n; ++i) {
//        int number;
//        cin >> number;
//
//        if((i + 1) % 2 == 0) {
//            odds[oddsSize++] = number;
//        }
//        else {
//            evens[evensSize++] = number;
//        }
//    }
//
//    printArray(evens, evensSize);
//    printArray(odds, oddsSize);
//}
//
////// Task 7
//#include <iostream>
//using namespace std;
//
//int getSumBetween(int& begin, int& end){
//    int sum = 0;
//    for (int* i = &begin; i <= &end; ++i) {
//        sum += *i;
//    }
//    return sum;
//}
//
//int main() {
//    int n, firstZeroIndex = -1, lastZeroIndex = -1;
//    cin >> n;
//
//    int *array = new int[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> array[i];
//        if (array[i] == 0) {
//            if (firstZeroIndex == -1) {
//                firstZeroIndex = i;
//            } else if(lastZeroIndex == -1) {
//                lastZeroIndex = i;
//            }
//        }
//    }
//
//    cout << getSumBetween(array[firstZeroIndex], array[lastZeroIndex]);
//}
//
//
////// Task 8
//#include <iostream>
//using namespace std;
//
//int sumOfPositive(int& begin, int&end) {
//    int sum = 0;
//
//    for (int* it = &begin; it < &end; ++it) {
//        if (*it > 0) {
//            sum += *it;
//        }
//    }
//
//    return sum;
//}
//
//int main(){
//    int n;
//    cin >> n;
//    int max_index = 0;
//    int* arr = new int[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//        if(arr[i] >= arr[max_index]) {
//            max_index = i;
//        }
//    }
//
//    cout << sumOfPositive(arr[0], arr[max_index]);
//}
//
//
////// Task 9
//#include <iostream>
//
//using namespace std;
//
//int countEvens(int& begin, int& end) {
//    int count = 0;
//
//    for (int* it = &begin + 1; it < &end; ++it) {
//        if (*it % 2 == 0) {
//            count ++;
//        }
//    }
//
//    return count;
//}
//
//int main(){
//    int n;
//    cin >> n;
//    int max_index = 0, min_index = 0;
//    int* arr = new int[n];
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//        if(arr[i] >= arr[max_index]) {
//            max_index = i;
//        }
//        if(arr[i] < arr[min_index]) {
//            min_index = i;
//        }
//    }
//
//    if(min_index > max_index) {
//        swap(max_index, min_index);
//    }
//
//    cout << countEvens(arr[min_index], arr[max_index]);
//}
//
////// Task 10
//#include <iostream>
//
//using namespace std;
//
//int compareString(char* line1, char* line2, int index=0) {
//    if(line1[index] == '\0' && line2[index] == '\0') return 0;
//    else if(line1[index] == '\0') return -1;
//    else if(line2[index] == '\0') return 1;
//    else if(line1[index] == line2[index]) return compareString(line1, line2, index + 1);
//    else if((int)line1[index] > (int)line2[index]) return 1;
//    else return -1;
//}
//
//int main() {
//    char* line1 = new char[100],
//        * line2 = new char[100];
//    cin >> line1 >> line2;
//    cout << (compareString(line1, line2) == 0 ? "YES" : "NO");
//
//}
//
//
////// Task 11
//#include "iostream"
//
//using namespace std;
//
//int main() {
//    char* line = new char[100];
//    cin >> line;
//
//    int size = -1;
//    while(line[++size] != '\0') {}
//
//    for (int i = 0; i < size / 2; ++i) {
//        if (line[i] != line[size - i - 1]) {
//            cout << "NO";
//            return 0;
//        }
//    }
//
//    cout << "YES";
//}
//
//
////// Task 12
//#include <iostream>
//using namespace std;
//
//int main() {
//    char* crypted = new char[100];
//    int k;
//    cin >> crypted >> k;
//
//    int size = -1;
//    while(crypted[++size] != '\0') {}
//
//    for (int i = 0; i < size; ++i) {
//        int cr = (((int) crypted[i]) - k);
//        cout << (char)(cr < 65 ? cr + 26 : cr);
//    }
//}
//
//
////// Task 13
//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//int main() {
//    char* ip = new char[100];
//    cin >> ip;
//
//    int size = 0;
//    char* ipPart = new char[3];
//    int ipPartIndex = 0;
//    int pintCount = 0;
//
//    while(true) {
//        if(ip[size] == '.' || ip[size] == '\0') {
//            int part = atoi(ipPart);
//            if(part > 255 || part < 0) {
//                cout << 0;
//                return 0;
//            }
//            ipPart = new char[part];
//
//            if (ip[size] == '\0') {
//                break;
//            }
//
//            pintCount++;
//        }
//        else {
//            ipPart[ipPartIndex++] = ip[size];
//        }
//        size++;
//    }
//
//    if (pintCount != 3) {
//        cout << 0;
//    }
//    else {
//        cout << 1;
//    }
//}
//
//
////// Task 14
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//    char* dirr = new char[100];
//    int steps;
//    int x = 0, y = 0;
//
//    while(cin >> dirr >> steps) {
//        if (!strcmp(dirr, "North")){
//            y += steps;
//        }
//        else if(!strcmp(dirr, "South")){
//            y -= steps;
//        }
//        else if(!strcmp(dirr, "East")){
//            x += steps;
//        }
//        else {
//            x -= steps;
//        }
//    }
//
//    cout << x << " " << y;
//}
//
//
////// Task 15
//#include <iostream>
//using namespace std;
//
//unsigned sumDigits(int n) { // make a sum
//    unsigned sum = 0;
//    while (n != 0) {
//        sum += n % 10;
//        n /= 10;
//    }
//    return sum;
//}
//
//bool isLuckyTicket(int number) { // check if it is lucky ticket
//    int firstHalf = number / 10000;
//    int secondHalf = number % 10000;
//
//    return sumDigits(firstHalf) == sumDigits(secondHalf);
//}
//
//unsigned countLuckyTickets(int n, int m) { // count total number of lucky tickets
//    int* sum = new int[10000];
//    for (int e = 0; e < 10000; ++e ) {
//        sum[e] = sumDigits(e);
//    }
//
//    unsigned counter = 0;
//    for (int i = n; i <= m; i++) {
//        int firstPart = i / 10000;
//        int secondPart = i % 10000;
//        if (sum[firstPart] == sum[secondPart] )
//            counter++;
//    }
//
//    return counter;
//}
//
//int main() {
//    int first, second;
//    cin >> first >> second;
//
//    cout << countLuckyTickets(first, second) << endl;
//    return 0;
//}
