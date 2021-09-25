// TASK 1

#include <iostream>
#define ENDL std::endl
#define CW std::cout
#define CR std::cin

int main() {
    double a, b, c;
    CR >> a >> b >> c;
    CW << (a < b ? (b < c ? "YES" : "NO" ) : "NO");
}

// TASK 2



#include <iostream>
#include <cmath>
#define ENDL std::endl
#define CW std::cout
#define CR std::cin

int main() {
    double a, b, c;
    CR >> a >> b >> c;
    if (a <= b && b <= c){
        CW << a * 2 << ENDL
           << b * 2 << ENDL
           << c * 2;
    }
    else {
        CW << std::abs(a) << ENDL
           << std::abs(b) << ENDL
           << std::abs(c);
    }
}

// TASK 3


#include <iostream>
#include <cmath>
#define CW std::cout
#define CR std::cin

int main() {
    double a, b, c;
    CR >> a >> b >> c;
    if (a == 0) {
        return 1;
    }

    double d = (b * b) - (4 * a * c);
    if (d > 0.0) {
        CW << ((-b + std::sqrt(d)) / (2 * a)) + 0 << " "
           << ((-b - std::sqrt(d)) / (2 * a)) + 0;
    }
    else if (d == 0) {
        CW << (-b / (2 * a)) + 0.0;
    }
    else {
        CW << "no solution";
    }
}

// Task 4


#include <iostream>
#define CW std::cout
#define CR std::cin

int main() {
    double a, b, c;
    CR >> a >> b >> c;

    CW << (a < b ? (a < c ? a : c) : (b < c ? b : c)) << " "
       << (a > b ? (a > c ? a : c) : (b > c ? b : c));
}

// Task 5


#include <iostream>
#define CW std::cout
#define CR std::cin

int main() {
    double a, b, c;
    CR >> a >> b >> c;

    CW << (a + b > c && b + c > a && c + a > b ? "YES" : "NO");
}

// Task 6


#include <iostream>
#define CW std::cout
#define CR std::cin

int main() {
    int year;
    CR >> year;

    CW << ( ( (year % 4 == 0) && (year % 100 != 0) ) || (year % 400 == 0) ? 366 : 365);
}

// Task 7


#include <iostream>
#define CW std::cout
#define CR std::cin

int main() {
    int day, mouth, year;
    CR >> day >> mouth >> year;

    // Check if input is correct
    if (mouth <= 0 || mouth > 12 || day <= 0) {
        CW << "no";
        return 1;
    }

    // Check if the day is correct
    if (mouth == 2) { // if it is a february
        bool isYearLeap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
        CW << ( (isYearLeap && day <= 29) || (!isYearLeap && day <= 28) ? "yes" : "no" );
    }
    else if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11) { // if in the mouth 30 days
        CW << (day <= 30 ? "yes" : "no");
    }
    else { // if in the mouth 31 days
        CW << (day <= 31 ? "yes" : "no");
    }
}

// Task 8


#include <iostream>
#define CW std::cout
#define CR std::cin

int main() {
    int year;
    CR >> year;

    // код года = (6 + последние две цифры года + последние две цифры года / 4) % 7
    int yearCode = (6 + (year % 100) + (year % 100) / 4) % 7;

    int mouthCode = 1;

    for (int i = 0; i < 31; ++i) {
        // день недели = (день + код месяца + код года) % 7
        int dayOfWeek = (i + mouthCode + yearCode) % 7;
        if (dayOfWeek == 1) {
            CW << i;
            return 0;
        }
    }
}

// Task 9


#include <iostream>
#define CW std::cout
#define CR std::cin

int main(){
    int day, mouth, year;
    CR >> day >> mouth >> year;
    day ++;

    if (mouth == 2) {
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

        if (isLeap && day == 30 || !isLeap && day == 29) {
            day = 1;
            mouth++;
        }
    }
    else if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11) {
        if (day == 31) {
            day = 1;
            mouth++;
        }
    }
    else {
        if (day == 32) {
            day = 1;
            mouth++;
        }
    }

    if (mouth == 13) {
        mouth = 1;
        year++;
    }

    CW << day << " " << mouth << " " << year;
}


// Task 10


#include <iostream>
#define CW std::cout
#define CR std::cin

int main(){
    int n;
    CR >> n;
    int value = 1;

    for (int i = 0; i < n; ++i) {
        value *= 2;
    }


    CW << value;
}

// Task 11

#include <iostream>
#define CW std::cout
#define CR std::cin

int main() {
    int n;
    CR >> n;

    int result = 1;
    for (int i = 1; i < n + 1; ++i) {
        result *= i;
    }

    CW << result;

}



// Task 12
#include <iostream>
#define CW std::cout
#define CR std::cin

int main(){
    int n;
    CR >> n;

    double value = 1;
    for (double i = 1; i < n + 1; ++i) {
        value *= 1 + (1 / (i * i));
    }

    CW << value;
}

// Task 14

#include <iostream>
#include <cmath>
#define CW std::cout
#define CR std::cin

double recursion(int iteration, int max) {
    return std::sqrt(2 + (iteration < max ? recursion(++iteration, max) : 0));
}

int main() {
    int n;
    CR >> n;
    CW << recursion(1, n);
}



// Task 15

#include <iostream>
#define CW std::cout
#define CR std::cin

int main(){
    double a, result = 0;
    int c;

    CR >> a >> c;

    for (int i = 0; i < c; ++i) {
        result += a;
    }

    CW << result;
}

// Task 16

#include <iostream>
#define CW std::cout
#define CR std::cin

int main() {
    // (a + 1 - 1)(a + 2 -1) (a + 3 -1)
    double a;
    int n;
    CR >> a >> n;

    double result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= (a + i - 1);
    }

    CW << result;
}

// Task 17

#include <iostream>
#include <cmath>
#define CW std::cout
#define CR std::cin

int main() {
    double a, sum = 0;
    int n;
    CR >> a >> n;

    for (int i = 0; i <= n; ++i) {
        double expression = a;
        for (int j = 1; j <= i; ++j) {
            expression *= (a + j);
        }
        sum += std::pow(expression, -1);
    }
    CW << sum;
}

// Task 18

#include <iostream>
#include <cmath>
#define CW std::cout
#define CR std::cin

int main() {
    double a, value = 0;
    int n;
    CR >> a >> n;

    for (int i = 0; i <= n; i++) {
        int power = i == 0 ? 1 : 2 * i;
        value += 1.0 / (std::pow(a, power));
    }

    CW << value;
}



// Task 19

#include <iostream>
#include <cmath>
#define CW std::cout
#define CR std::cin

long double factorial(int n) {
    long double result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
   double x;
   CR >> x;
   long double result = x;

    for (int i = 3, operationNumber = 1; i <= 13; i+=2, operationNumber++) {
        if (operationNumber % 2 == 0){ // +
            result += std::pow(x, i) / factorial(i);
        }
        else { // -
            result -= std::pow(x, i) / factorial(i) + 0;
        }
    }

    CW << result;
}


// Task 20

#include <iostream>
#include <cmath>
#define CW std::cout
#define CR std::cin

double recursion(double x, double a, int iteration, int max) {
    return std::pow(a + (iteration < max ? recursion(x, a, ++iteration, max) : x), 2);
}

int main() {
    double x, a;
    int n;
    CR >> x >> a >> n;
    CW << recursion(x, a,1, n) + a;

}


// Task 21

#include <iostream>
#define CW std::cout
#define CR std::cin

int main() {
   double x, numerator = 1, denominator = 1;
   CR >> x;

    for (int i = 2; i <= 64; i*=2) {
        numerator *= x - i;
        denominator *= x - (i - 1);
    }

    CW << numerator / denominator;
}



// Task 22

#include <iostream>
#define CW std::cout

double innerDivision(int iteration, int max) {
    return iteration < max ? iteration + (1 / innerDivision(iteration + 2, max)) : max;
}

int main() {
    CW << 1 / innerDivision(1, 103);
}



// Task 23

#include <iostream>
#include <cmath>
#define CW std::cout
#define CR std::cin

double innerDivision(double x, int iteration, int max) {
    return std::pow(x, 2) + (iteration < max ?
    (iteration / innerDivision(x,  iteration * 2, max)) : 0);
}

int main() {
    double x;
    CR >> x;

    CW << x / innerDivision(x, 2, 257);
}



// Task 24

#include <iostream>
#include <cmath>
#define CW std::cout
#define CR std::cin

int main() {
    double i, sum = 0;
    CR >> i;

    for (int j = 1; j < 51; ++j) {
        sum += 1 / std::pow(j, 3);
    }

    CW << sum;
}



// Task 25


#include <iostream>
#include <cmath>
#define CW std::cout
#define CR std::cin

int main() {
    double result = 0;
    for (int i = 1; i <= 10; ++i) {
        double a;
        CR >> a;

        result += pow(a, i);
    }
    CW << result;
}



