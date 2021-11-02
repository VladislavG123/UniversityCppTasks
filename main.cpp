//// Task 1
//
//#include "iostream"
//#include "cstring"
//#include <cctype>
//
//using namespace std;
//
//int main() {
//    char* line = new char[100];
//    cin >> line;
//
//    for (int i = 0; i < strlen(line); i++) {
//        line[i] = (char)tolower(line[i]);
//    }
//
//    char* it = strstr(line, "aitu");
//
//    if (it == NULL) {
//        cout << "NO";
//    }
//    else {
//        cout << "YES";
//    }
//}

//// Task 2
//
//#include "iostream"
//#include "cstring"
//
//using namespace std;
//
//void replace(char *source,char *&dest) {
//    for (int i = 0; i < strlen(source); i++) {
//        dest[i] = source[i];
//        if (source[i] == '!') {
//            dest[i] = '.';
//        }
//    }
//}
//
//int main() {
//    char *input = new char[100];
//    char *output = new char[100];
//
//    cin.getline(input, 100, '\n');
//
//    replace(input,output);
//
//    cout << output;
//}

//// Task 3
// strtok
//
//#include "iostream"
//#include "cstring"
//
//using namespace std;
//
//char* beautifyNumber(char* number) {
//    unsigned long numberSize = strlen(number);
//    char* result = new char[numberSize + (numberSize / 3)];
//
//    int firstPartCount = numberSize % 3 == 0 ? 3 : numberSize % 3;
//
//    for (int i = 0; i < firstPartCount; i++) {
//        result[i] = number[i];
//    }
//    result[firstPartCount] = ' ';
//
//    int spaceCount = 1;
//    for (int i = firstPartCount; i < numberSize; i++) {
//        if ((i - firstPartCount) % 3 == 0 && (i - firstPartCount) != 0) {
//            result[spaceCount++ + i] = ' ';
//        }
//        result[spaceCount + i] = number[i];
//    }
//
//    return result;
//}
//
//int main() {
//    char *number = new char[100];
//    cin >> number;
//
//    cout << beautifyNumber(number) << endl;
//}


//// Task 4
//
//#include <iostream>
//#include <cstring>
//#include <cctype>
//
//using namespace std;
//
//template<class Key, class Value>
//struct Pair {
//    Key key;
//    Value value;
//
//    Pair() {}
//
//    Pair(Key key, Value value) {
//        this->key = key;
//        this->value = value;
//    }
//};
//
//template<class Key, class Value>
//struct Dictionary {
//    int size;
//    int bufferedSize;
//    Value defaultValue;
//    Pair<Key, Value> *pairs;
//
//    Dictionary() {
//        size = 0;
//        bufferedSize = 100;
//        pairs = new Pair<Key, Value>[bufferedSize];
//        // TODO: add size when it is required
//    }
//
//    Value& get(Key requestKey) {
//        int index = findIndex(requestKey);
//
//        if(index == -1) {
//            index = size++;
//            pairs[index] = Pair<Key, Value>(requestKey, defaultValue);
//        }
//
//        return pairs[index].value;
//    }
//
//
//    Key max() {
//        int maxIndex = 0;
//        for (int i = 0; i < size; i++) {
//            if (pairs[i].value > pairs[maxIndex].value) {
//                maxIndex = i;
//            }
//        }
//        return pairs[maxIndex].key;
//    }
//
//private:
//    int findIndex(Key requestKey) {
//        for (int i = 0; i < size; i++) {
//            if(pairs[i].key == requestKey){
//                return i;
//            }
//        }
//
//        return -1;
//    }
//};
//
//int main() {
//    char* line = new char[100];
//    cin.getline(line, 100);
//
//    int i = 0;
//    while (line[i] != '\0') {
//        line[i] = (char)toupper(line[i]);
//        i++;
//    }
//
//    Dictionary<char*, int>* dictionary = new Dictionary<char*, int>;
//
//    dictionary->defaultValue = -1;
//
//    char* pch = strtok(line, " ");
//
//    while (pch != NULL)
//    {
//        dictionary->get(pch)++;
//        pch = strtok (NULL, " ");
//    }
//
//    cout << dictionary->max();
//}



//// Task 5
//
//#include <iostream>
//#include <cstring>
//#include <cctype>
//
//using namespace std;
//
//int main() {
//
//    char* line = new char[100];
//    cin.getline(line, 100);
//
//    int size = 0;
//    char** words = new char*[100];
//
//    char* pch = strtok(line, " ");
//    while (pch != NULL)
//    {
//        bool hasCopy = false;
//        for (int i = 0; i < size; ++i) {
//            if (strcmp(pch, words[i]) == 0) {
//                hasCopy = true;
//                break;
//            }
//        }
//
//        if (!hasCopy) {
//            words[size] = new char[100];
//            words[size++] = pch;
//        }
//
//        pch = strtok (NULL, " ");
//    }
//
//    for (int i = 0; i < size; ++i) {
//        cout << words[i] << " ";
//    }
//
//}


//// Task 6
//
//#include <iostream>
//#include <cstring>
//#include <cctype>
//
//using namespace std;
//
//char* beautifyNumber(char* number) {
//    unsigned long numberSize = strlen(number);
//    char* result = new char[numberSize + (numberSize / 3)];
//
//    int firstPartCount = numberSize % 3 == 0 ? 3 : numberSize % 3;
//
//    for (int i = 0; i < firstPartCount; i++) {
//        result[i] = number[i];
//    }
//    result[firstPartCount] = ' ';
//
//    int spaceCount = 1;
//    for (int i = firstPartCount; i < numberSize; i++) {
//        if ((i - firstPartCount) % 3 == 0 && (i - firstPartCount) != 0) {
//            result[spaceCount++ + i] = ' ';
//        }
//        result[spaceCount + i] = number[i];
//    }
//
//    return result;
//}
//
//char* getMax(char*& first, char*& second) {
//    if (strlen(first) != strlen(second)) {
//        return strlen(first) > strlen(second) ? first : second;
//    }
//
//    for (int i = 0; i < strlen(first); i++) {
//        if((int)first[i] > (int)second[i]) {
//            return first;
//        }
//        else if((int)first[i] < (int)second[i]) {
//            return second;
//        }
//    }
//
//    return first;
//}
//
//char* appendCharToCharArray(char* array, char a)
//{
//    unsigned long len = strlen(array);
//
//    char* ret = new char[len+2];
//
//    strcpy(ret, array);
//    ret[len] = a;
//    ret[len+1] = '\0';
//
//    return ret;
//}
//
//int main() {
//    char* line = new char[100];
//    cin.getline(line, 100);
//
//    int size = 0;
//    char** nums = new char*[100];
//    nums[0] = new char[100];
//
//    for (int i = 0; i < strlen(line); ++i) {
//        bool isDigit = isdigit(line[i]);
//        while (isdigit(line[i])) {
//            nums[size] = appendCharToCharArray(nums[size], line[i++]);
//        }
//
//        if (isDigit) {
//            nums[++size] = new char[100];
//        }
//    }
//
//    char* max = nums[0];
//    for (int i = 1; i < size; ++i) {
//        max = getMax(max, nums[i]);
//    }
//
//    cout << beautifyNumber(max);
//}

//// Task 7
//
//#include "iostream"
//#include "cstring"
//
//using namespace std;
//
//
//char* getMax(char* first, char* second) {
//    if (strlen(first) != strlen(second)) {
//        return strlen(first) > strlen(second) ? first : second;
//    }
//
//    for (int i = 0; i < strlen(first); i++) {
//        if((int)first[i] > (int)second[i]) {
//            return first;
//        }
//        else if((int)first[i] < (int)second[i]) {
//            return second;
//        }
//    }
//
//    return first;
//}
//
//int main() {
//    char* first = new char[100];
//    char* second = new char[100];
//    char* third = new char[100];
//
//    cin >> first >> second >> third;
//
//    cout << getMax(getMax(first, second), third);
//
//}


//// Task 8
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int sumDigitChar(char a, char b) {
//    return ((int)b - 48) + ((int)a - 48);
//}
//
//void summarize(char* first, char* second, int*& summed, int& size) {
//    size = strlen(first) > strlen(second) ? strlen(first) : strlen(second);
//    for (int i = 0; i < size; ++i) {
//        int indexA = strlen(first) - i - 1;
//        char a = indexA >= 0 ? first[indexA] : '0';
//
//        int indexB = strlen(second) - i - 1;
//        char b = indexB >= 0 ? second[indexB] : '0';
//
//        int digit = sumDigitChar(a, b);
//
//        summed[i] += digit;
//        summed[i + 1] = 0;
//
//        if (summed[i] >= 10) {
//            summed[i + 1] += 1;
//            summed[i] -= 10;
//            if (i == size - 1) {
//                size++;
//                break;
//            }
//        }
//    }
//}
//
//int main() {
//    char* first = new char[1000] {};
//    char* second = new char[1000] {};
//
//    int* summed = new int[1001];
//    int size = 0;
//
//    cin >> first >> second;
//
//    summarize(first, second, summed, size);
//
//    for (int i = size - 1; i >= 0; --i) {
//        cout << summed[i];
//    }
//}


//// Task 9
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//unsigned int sumOfEveryK(char* number, int k, int start) {
//    unsigned int sum = 0;
//    for (int i = start; i < strlen(number); i += k) {
//        sum += (int)number[i] - 48;
//    }
//    return sum;
//}
//
//
//bool dividesTo11(char* number) {
//    long result = sumOfEveryK(number, 2, 0) - sumOfEveryK(number, 2, 1);
//
//    return result == 0 || (result > 0 ? result % 11 == 0 : -result % 11 == 0);
//}
//
//int main() {
//    char* number = new char[1000];
//
//    cin >> number;
//    cout << (dividesTo11(number) ? "YES" : "NO");
//}

//// Task 10
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//    char arrow1[6] = ">>-->";
//    char arrow2[6] = "<--<<";
//
//    char* line = new char[1000];
//    cin >> line;
//
//    int arrowCounter = 0;
//    for (int i = 0; i < strlen(line); ++i) {
//        if(line[i] == arrow1[0]) {
//            if(i + 5 >= strlen(line)) break;
//            bool isArrow = true;
//            for (int j = 1; j < 5; ++j) {
//                if (line[i + j] != arrow1[j]) isArrow = false;
//            }
//            arrowCounter += isArrow;
//        }
//
//        if(line[i] == arrow2[0]) {
//            if(i + 5 >= strlen(line)) break;
//            bool isArrow = true;
//            for (int j = 1; j < 5; ++j) {
//                if (line[i + j] != arrow2[j]) isArrow = false;
//            }
//            arrowCounter += isArrow;
//        }
//    }
//
//    cout << arrowCounter;
//
//}


////// Task 11
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int row, col;
//    cin >> row >> col;
//
//    int det = row % 2 == 0;
//
//    for (int i = 0; i < row; ++i) {
//        int colDet = det % 2 == 0;
//        for (int j = 0; j < col; ++j) {
//            if(colDet++ % 2 == 0) {
//                cout << "X";
//            } else {
//                cout << ".";
//            }
//        }
//        cout << endl;
//        det++;
//    }
//}

////// Task 12
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char symb;
//    int totalSum = 0, size = 0;
//    int det = 0;
//    while(cin.get(symb)) {
//        if(symb == '#'){
//            break;
//        }
//        else if(isalpha(symb)){
//            totalSum++;
//            det++;
//        }
//        else if(det != 0){
//            size++;
//            det = 0;
//        }
//    }
//
//    if(det != 0) {
//        size++;
//    }
//
//    cout.precision(10);
//    cout << totalSum / (size * 1.0);
//}

