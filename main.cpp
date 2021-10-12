
//// Task 1
//#include <iostream>
//#define INT_MAX 2147483647
//
//int main() {
//    int n, m, arr[100][100], min = INT_MAX;
//    std::cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            std::cin >> arr[i][j];
//            if (arr[i][j] < min) {
//                min = arr[i][j];
//            }
//        }
//    }
//
//    std::cout << min;
//
//}


//// Task 2
//#include <iostream>
//
//int main() {
//    int n, arr[100][100], sum1 = 0, sum2 = 0;
//    std::cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            std::cin >> arr[i][j];
//
//            if (i == j) {
//                sum1 += arr[i][j];
//            }
//
//            if (i + j == n - 1) {
//                sum2 += arr[i][j];
//            }
//        }
//    }
//
//    std::cout << sum1 << " " << sum2;
//
//}


//// Task 3
//
//#include <iostream>
//
//int main() {
//    int n, m, arr[100][100], zero_i = -1, zero_j = -1;
//    std::cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            std::cin >> arr[i][j];
//
//            if (arr[i][j] == 0) {
//                zero_i = i;
//                zero_j = j;
//            }
//        }
//    }
//
//    std::cout << zero_i + 1 << " " << zero_j + 1;
//
//}

//// Task 4
//
//#include <iostream>
//
//int main() {
//    int n, m, arr[101][101], zero_i = -1, zero_j = -1;
//    std::cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            std::cin >> arr[i][j];
//
//            if (arr[i][j] == -1) {
//                zero_i = i + 1;
//                zero_j = j + 1;
//            }
//        }
//    }
//
//    std::cout << zero_i << " " << zero_j;
//
//}


//// Task 5
//
//#include <iostream>
//
//int main() {
//    int n, arr1[101][101], arr2[101][101];
//    std::cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            std::cin >> arr1[i][j];
//        }
//    }
//
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            std::cin >> arr2[i][j];
//        }
//    }
//
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            std::cout << arr1[i][j] + arr2[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//}


//// Task 6
//
//#include <iostream>
//
//int main() {
//    int n, arr[101][101];
//    std::cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            std::cin >> arr[i][j];
//        }
//    }
//
//    bool is_symmetric = true;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if (arr[i][j] != arr[j][i]) {
//                is_symmetric = false;
//            }
//        }
//    }
//
//    std::cout << (is_symmetric ? "YES" : "NO");
//}


//// Task 7
//
//#include <iostream>
//
//int main() {
//    int n, arr[101][101], sum = 0;
//    std::cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            std::cin >> arr[i][j];
//
//            if (i > j) {
//                sum += arr[i][j];
//            }
//        }
//    }
//
//    std::cout << sum;
//}


//// Task 8
//
//#include <iostream>
//
//int main() {
//    int n, arr[101][101], sum = 0;
//    std::cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            std::cin >> arr[i][j];
//
//            if (i < j) {
//                sum += arr[i][j];
//            }
//        }
//    }
//
//    std::cout << sum;
//}


//// Task 9
//
//#include <iostream>
//
//int main() {
//    int n, m, arr[101][101];
//    std::cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            std::cin >> arr[i][j];
//        }
//    }
//
//    int sum_max = -100000, index_max = -1;
//    for (int j = 0; j < m; ++j) {
//        int sum = 0;
//        for (int i = 0; i < n; ++i) {
//            sum += arr[i][j];
//        }
//
//        if (sum > sum_max) {
//            sum_max = sum;
//            index_max = j + 1;
//        }
//    }
//
//    std::cout << index_max;
//}


//// Task 10
////
//#include <iostream>
//
//int main() {
//    int n, m, arr[101][101], res[101*101] {}, res_size = 0;
//    std::cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            std::cin >> arr[i][j];
//
//            if (arr[i][j] > 0) {
//                res[res_size++] = arr[i][j];
//            }
//        }
//    }
//
//    for (int i = 0; i < res_size; ++i) {
//        for (int j = i; j < res_size; ++j) {
//            if (res[i] > res[j]) {
//                std::swap(res[i], res[j]);
//            }
//        }
//    }
//
//    std::cout << res_size << std::endl;
//    for (int i = 0; i < res_size; ++i) {
//        std::cout << res[i] << " ";
//    }
//}

//// Task 11
////
//#include <iostream>
//
//int main() {
//    int n, arr[101][101], num = 1;
//    std::cin >> n;
//
//    for (int i = n - 1; i >= 0; --i) {
//        for (int j = n - 1; j >= 0; --j) {
//            arr[j][i] = num++;
//        }
//    }
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            std::cout << arr[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//
//}

//// Task 12
//
//#include <iostream>
//
//int main() {
//    int n, m, arr[101][101], num = 1;
//    std::cin >> n >> m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            std::cin >> arr[i][j];
//        }
//    }
//
//    for (int i = m - 1; i >=0; --i) {
//        for (int j = 0; j < n; ++j) {
//            std::cout << arr[j][i] << " ";
//        }
//        std::cout << std::endl;
//    }
//}


//// Task 13
//
//
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int main() {
//    char tels[5][2][100], input[100];
//
//    strcpy(tels[0][0], "Tom");
//    strcpy(tels[0][1], "555-3322");
//
//    strcpy(tels[1][0], "Mary");
//    strcpy(tels[1][1], "555-8976");
//
//    strcpy(tels[2][0], "Jon");
//    strcpy(tels[2][1], "555-1037");
//
//    strcpy(tels[3][0], "Rachel");
//    strcpy(tels[3][1], "555-1400");
//
//    strcpy(tels[4][0], "Sherry");
//    strcpy(tels[4][1], "555-8873");
//
//    cin >> input;
//
//    for (int i = 0; i < 5; ++i) {
//        if (strcmp(input, tels[i][0]) == 0) {
//            cout << tels[i][1];
//            return 0;
//        }
//    }
//    cout << "Not found";
//}

//// Task 14
//
//#include <iostream>
//
//int main() {
//    int n, arr[31][31] {0};
//    std::cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if (i == j || j == 0) {
//                arr[i][j] = 1;
//                continue;
//            }
//            else if (j > i){
//                continue;
//            }
//
//            int sum = 0;
//            sum += i - 1 >= 0 ? arr[i - 1][j] : 0;
//            sum += j - 1 >= 0 && i - 1 >= 0 ? arr[i - 1][j - 1] : 0;
//
//            arr[i][j] = sum;
//        }
//    }
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if (arr[i][j] != 0) {
//                std::cout << arr[i][j] << " ";
//            }
//        }
//        std::cout << std::endl;
//    }
//}

//// Task 15
//
//#include <iostream>
//
//int main() {
//    int n, k;
//    bool arr[101];
//    std::cin >> n >> k;
//
//
//    int counter = 0;
//    int i = 0, actual_size = n;
//    while(actual_size > 1) {
//        if (arr[i]) {
//            i++;
//            continue;
//        }
//
//        if (i == n) {
//            i = 0;
//        }
//
//        if (counter == k) {
//            actual_size--;
//            arr[i] = true;
//            counter = 0;
//        }
//
//        counter++;
//
//        i++;
//    }
//
//    for (int j = 0; j < n; ++j) {
//        if (!arr[j]) {
//            std::cout << j;
//            return 0;
//        }
//    }
//
//
////}
//
//
//
//#include<iostream>
//using namespace std;
///*
//7
//1011111
//2010001
//3010101
//4010101
//5011101
//6000001
//7111111
//g
//*/
//int main() {
//    int n;
//    cin >> n;
//    int map[51][51]{};
//    int dir = 0, i = 1, j = 1, k = 1;
//    while (dir < n) {
//        map[i][j] = k;
//        switch (dir % 4) {
//            case 0:
//                if (i == n || map[i + 2][j] != 0) {
//                    dir++;
//                    k = 1;
//                    continue;
//                }
//                i++;
//                break;
//            case 1:
//                if (j == n || map[i][j + 2] != 0) {
//                    dir++;
//                    k = 1;
//                    continue;
//                }
//                j++;
//                break;
//            case 2:
//                if (i - 1 == 0 || map[i - 2][j] != 0) {
//                    dir++;
//                    k = 1;
//                    continue;
//                }
//                i--;
//                break;
//            default:
//                if (j - 1 == 0 || map[i][j - 2] != 0) {
//                    dir++;
//                    k = 1;
//                    continue;
//                }
//                j--;
//        }
//        k++;
//    }
//
//    for (int i = 0; i <= n+1; i++) {
//        for (int j = 0; j <= n+1; j++) {
//            cout << map[i][j] << " ";
//            if (map[i][j] < 10) {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}



//// Task 18

#include <iostream>

using namespace std;

int* getArr(int arr[10]) {
    return arr;
}


int main() {
    int oneArr[10];
    int* newArr = getArr(oneArr);

    bool map[10][10];
    int maxSize = 0;

    // input
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> map[i][j];
        }
    }

    // horizontal
    for (int i = 0; i < 10; ++i) {
        int len = 0;
        for (int j = 0; j < 10; ++j) {
            if (map[i][j]) {
                if (len > maxSize) {
                    maxSize = len;
                }
                len = 0;
                continue;
            }
            len++;
        }
        if (len > maxSize) {
            maxSize = len;
        }
    }


    // vertical
    for (int i = 0; i < 10; ++i) {

        int len = 0;
        for (int j = 0; j < 10; ++j) {
            if (map[j][i]) {

                if (len > maxSize) {
                    maxSize = len;
                }
                len = 0;
                continue;
            }
            len++;
        }
        if (len > maxSize) {
            maxSize = len;
        }
    }

    cout << maxSize;
}
