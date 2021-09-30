// Task 1

#include <iostream>

int main() {
    int maxSize = 100, arr[maxSize], size;

    for (int i = 0; i < 100; ++i) {
        std::cin >> arr[i];
        if (arr[i] == -1) {
            break;
        }
        size++;
    }

    std::cout << size << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

//Task 2

#include <iostream>
#include <cmath>

int main() {
    int maxSize = 100, size=0;
    double arr[maxSize];

    for (int i = 0; i < 100; ++i) {
        std::cin >> arr[i];
        if (arr[i] == 0) {
            break;
        }
        size++;
    }

    std::cout << size << std::endl;
    for (int i = size - 1; i >= 0; --i) {
        std::cout << std::sqrt(arr[i]) << std::endl;
    }
}


//Task 3

#include <iostream>
#define INT_MAX 2147483647

int main() {
    int maxSize = 1000, size=0;
    int arr[maxSize], min = INT_MAX;
    std::cin >> size;

    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        min = min > arr[i] ? arr[i] : min;
    }

    std::cout << min;
}


// Task 4


#include <iostream>
#define INT_MAX 2147483647

int main() {
    int maxSize = 101, size=0;
    int arr[maxSize], minIndex = maxSize - 1;
    arr[maxSize - 1] = INT_MAX;

    std::cin >> size;

    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        minIndex = arr[minIndex] > arr[i] ? i : minIndex;
    }

    std::cout << minIndex;
}


// Task 5


#include <iostream>
#define INT_MIN -2147483647

int main() {
    int maxSize = 101, size=0;
    int arr[maxSize], max = INT_MIN;

    std::cin >> size;

    // Input the array items and finding the max number
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        max = max < arr[i] ? arr[i] : max;
    }

    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if (max == arr[i]) {
            counter++;
        }
    }

    std::cout << counter;
}


// Task 6

#include <iostream>

int main() {
    int size, counter = 0;
    char line[100];

    std::cin >> size >> line;

    for (int i = 0; i < size; ++i) {
        char symbol = line[i];

        if (symbol == 'A') {
            counter++;
        }
    }

    std::cout << counter;
}

// Task 7

#include <iostream>
int main() {
    int size, unique_size=0;
    int symbol_count_pair[1001][2];
    unsigned char line[1001];

    std::cin >> size >> line;

    // input and storing
    for (int i = 0; i < size; ++i) {
        int symbol_id = (int)line[i];

        // find the same symbol in the array
        int same_symbol_index = -1;
        for (int j = 0; j < i; ++j) {
            if (symbol_count_pair[j][0] == symbol_id) {
                same_symbol_index = j;
                symbol_count_pair[same_symbol_index][1]++;
                break;
            }
        }

        // when it is a new symbol, create new pair in the array
        if (same_symbol_index == -1) {
            symbol_count_pair[unique_size][0] = symbol_id;
            symbol_count_pair[unique_size++][1] = 1;
        }
    }

    // sorting
    for (int i = 0; i < unique_size; ++i) {
        for (int j = i; j < unique_size; ++j) {
            if (symbol_count_pair[i][0] > symbol_count_pair[j][0]) {
                std::swap(symbol_count_pair[i][0], symbol_count_pair[j][0]);
                std::swap(symbol_count_pair[i][1], symbol_count_pair[j][1]);
            }
        }
    }

    // output
    std::cout << unique_size << std::endl;
    for (int i = 0; i < unique_size; ++i) {
        std::cout << (char)symbol_count_pair[i][0] << " " << symbol_count_pair[i][1] << std::endl;
    }
}

// Task 8

#include <iostream>

int main() {
    int n, arr[1000];
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
}


// Task 9

#include <iostream>

int main() {
    int n;
    int times[1000][3];

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> times[i][0] >> times[i][1] >> times[i][2];
    }


    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (times[i][0] > times[j][0] ||
                (times[i][1] > times[j][1] && times[i][0] == times[j][0]) ||
                (times[i][2] > times[j][2] && times[i][1] == times[j][1] && times[i][0] == times[j][0])) {

                std::swap(times[i][0], times[j][0]);
                std::swap(times[i][1], times[j][1]);
                std::swap(times[i][2], times[j][2]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        std::cout << times[i][0] << " " << times[i][1] << " " << times[i][2] << std::endl;
    }

}

// Task 10
#include <iostream>

int main(){
   int n;
   std::cin >> n;

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            std::cout << "NO";
            return 0;
        }
    }

    std::cout << "YES";
}

// Task 11

#include <iostream>

bool is_prime(int n, int start_with=2) {
    for (int i = start_with; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
   int n, primes[10000], size=0;
   std::cin >> n;

    for (int i = 2; i <= n; ++i) {
        // check if i is divided by one of saved primes
        bool should_continue = false;
        if (size != 0) {
            for (int j = 0; j < size; ++j) {
                if (i % primes[j] == 0) {
                    should_continue = true;
                }
            }
        }

        if (!should_continue && is_prime(i, size == 0 ? 2 : primes[size-1])) {
            primes[size++] = i;
        }
    }

    for (int i = 0; i < size; ++i) {
        std::cout << primes[i] << " ";
    }
}