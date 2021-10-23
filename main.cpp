//// Task 1
//
//#include "iostream"
//using namespace std;
//
//int min(int a, int b, int c, int d) {
//    int first = (a < b ? a : b);
//    int second = (c < d ? c : d);
//    return  first < second ? first : second;
//}
//
//int main() {
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//    cout << min (a, b, c, d);
//}


//// Task 2
//#include "iostream"
//using namespace std;
//
//double power(double num, int power) {
//    for (int i = 0; i < power - 1; ++i) {
//        num *= num;
//    }
//    return num;
//}
//
//int main() {
//    double a, b;
//    cin >> a >> b;
//    cout << power (a, b);
//}


//// Task 3
//
//#include "iostream"
//using namespace std;
//
//double myXor(bool x, bool y) {
//    return !(x && y) && (x || y);
//}
//
//int main() {
//    int a, b;
//    cin >> a >> b;
//    cout << myXor (a, b);
//}

//// Task 4
//#include "iostream"
//using namespace std;
//
//double election(bool x, bool y, bool z) {
//    return x + y + z >= 2;
//}
//
//int main() {
//    int a, b, c;
//    cin >> a >> b >> c;
//    cout << election (a, b, c);
//}

//// Task 5
//
//#include "iostream"
//using namespace std;
//
//char getSign(int a, int b) {
//    return a > b ? '>' : (a < b ? '<' : '=');
//}
//
//int main() {
//    int a, b, c;
//    cin >> a >> b;
//    cout << getSign (a, b);
//}

//// Task 6
//
//#include "iostream"
//using namespace std;
//
//int countPositives(const int *a, int n) {
//    int sum = 0;
//    for (int i = 0; i < n; ++i) {
//        if (a[i] > 0) {
//            sum++;
//        }
//    }
//    return sum;
//}
//
//char getSign(int *a, int *b, int n) {
//    return countPositives(a, n) > countPositives(b, n) ? '>' : (countPositives(a, n) < countPositives(b, n) ? '<' : '=');
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int a[100], b[100];
//
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//
//
//    for (int i = 0; i < n; ++i) {
//        cin >> b[i];
//    }
//
//    switch (getSign (a, b, n)) {
//        case '>':
//            cout << "Number of positives in the first array is greater";
//            break;
//        case '<':
//            cout << "Number of positives in the second array is greater";
//            break;
//        default:
//            cout << "Numbers are equal";
//            break;
//    }
//
//}

//
//// Task 7
//
//#include "iostream"
//using namespace std;
//
//
//int countPositives(int *a, int n) {
//    int sum = 0;
//    for (int i = 0; i < n; ++i) {
//        if (a[i] > 0) {
//            sum++;
//        }
//    }
//    return sum;
//}
//
//int getSign(int **a, int n, int m) {
//    int max = 0, index = 0;
//    for (int i = 0; i < n; ++i) {
//        int count = countPositives(a[i], m);
//        if (count == max) {
//            index = 0;
//        } else if (count > max) {
//            index = i + 1;
//            max = count;
//        }
//    }
//    return index;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    int **a = new int*[n];
//    for(int i = 0; i < n; ++i) {
//        a[i] = new int[m];
//    }
//
//    for (int i = 0; i < n; ++i) {
//
//        for (int j = 0; j < m; ++j) {
//            cin >> a[i][j];
//        }
//    }
//
//    int result = getSign(a, n, m);
//    switch (result) {
//        case 0:
//            cout << "Numbers are equal";
//            break;
//        default:
//            cout << result;
//            break;
//    }
//
//}

////// Task 8
//#include "iostream"
//
//using namespace std;
//
//int getMaxLine(int **arr, int n, int m) {
//    int max = -99999999, maxIndex = -1;
//
//    for (int i = 0; i < n; ++i) {
//        int sum = 0;
//        for (int j = 0; j < m; ++j) {
//            sum += arr[i][j];
//        }
//
//        if (sum > max) {
//            max = sum;
//            maxIndex = i + 1;
//        } else if (sum == max) {
//            maxIndex = -1;
//        }
//    }
//
//    return maxIndex;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    int **a = new int*[m * n];
//    for(int i = 0; i < n; ++i) {
//        a[i] = new int[m];
//    }
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> a[i][j];
//        }
//    }
//
//    int result = getMaxLine(a, n, m);
//    switch (result) {
//        case -1:
//            cout << "No series of equal elements";
//            break;
//        default:
//            cout << "Longest series is in the string " << result;
//            break;
//    }
//}


//// Task 9