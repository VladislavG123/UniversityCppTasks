#include <iostream>
#define ENDL std::endl
#define CW std::cout
#define CR std::cin

void problemTwo(){
    CW << "Problem 2 \n";

    int a, b;
    CR >> a >> b;

    CW << a + b;
}

void problemThree(){
    CW << "Problem 3 \n";

    int a, b;
    CR >> a >> b;

    CW << a * b;
}

void problemFour(){
    CW << "Problem 4 \n";

    int x, y, z;
    CR >> x >> y >> z;

    double result = (x * x) + y - (z / 2);

    CW << result;
}

void problemFive(){
    CW << "Problem 5 \n";

    int a, b;
    CR >> a >> b;

    CW << (a % b == 0 ? "Yes" : "No");
}

void problemSix(){
    CW << "Problem 6 \n";

    int a, b;
    CR >> a >> b;

    CW << (a == b ? "=" : a < b ? "<" : ">");
}

void problemSeven(){
    CW << "Problem 7 \n";

    int a, b;
    CR >> a >> b;

    CW << (a + b) / 2.0;
}

void problemEight(){
    CW << "Problem 8 \n";

    int a, b;
    CR >> a >> b;

    CW << a % b;
}


double countLinearFunction(double k, double c, double x){
    return k * x + c;
}

void problemNine(){
    CW << "Problem 9 \n";

    int k, c;
    CR >> k >> c;

    CW << "x = 0.1 : y = " << countLinearFunction(k, c, 0.1) << ENDL;
    CW << "x = 1 : y = " << countLinearFunction(k, c, 1) << ENDL;
    CW << "x = 5 : y = " << countLinearFunction(k, c, 5) << ENDL;
}

void problemTen(){
    CW << "Problem 10 \n";

    double x, y;
    CR >> x >> y;

    CW << ((x - (2 * y)) * x) / (-2 * y);
}

void (*functptr[])() = { NULL, NULL, problemTwo, problemThree, problemFour, problemFive, problemSix, problemSeven,
                         problemEight, problemNine, problemTen } ;

int main() {
    CW << "Choose a problem (2 - 10)\n";
    int problem;
    CR >> problem;

    functptr[problem]();

    return 0;
}
