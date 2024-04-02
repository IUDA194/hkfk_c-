#include <cmath>
#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    {
        int x = 17;
        int y = 22;
        int z = 20;

        if (x <= 15 && 15 <= y && y < z ) {
            cout << "Condition 1 is " << "True" << endl;
        } else {
            cout << "Condition 1 is " << "False" << endl;
        }

    }

    {
        double x = 0.5;
        double y = 0.2;
        
        if (abs(x) <= 1 || abs(x/y) > 3) {
            cout << "Condition 2 is " << "True" << endl;
        } else {
            cout << "Condition 2 is " << "False" << endl;
        }
    }

    {
        int x, y = 2;
        int z = 1;
        
        if (x - y <= z + 2 && x < abs(z)) {
            cout << "Condition 3 is " << "True" << endl;
        } else {
            cout << "Condition 3 is " << "False" << endl;
        }
    }

    {
        double x;
        double y;

        cout << "Enter x value: " << endl;
        cin >> x;
        cout << "Enter y value: " << endl;
        cin >> y;
        
        double q17 = (log(fabs(x - y)) + pow(cos(x*y), 2)*cos(x*y)) / (sqrt(fabs(pow(x + y, 2)*(x + y))) + 17.14);
        cout << "Expression 17: " << q17 << endl;

        double q18 = exp(1.0/3.0*log(log(exp(1.0))/log(10))) + exp(1.0/5.0*log(fabs(cos(exp(1.0)) - 2)));
        cout << "Expression 18: " << q18 << endl;

        double q19 = sqrt(8.67 + exp(y) + fabs(y));
        cout << "Expression 19: " << q19 << endl;

        double q20 = atan(pow(sin(x), 2) + pow(sin(y)/cos(y), 2)*sin(y)/cos(y));
        cout << "Expression 20: " << q20 << endl;
    }

    {
        double x = 1.0;
        double y = 1.0;
        double a = 1.0;

        double z = atan(1/sqrt(1 - pow(0.13/sqrt(x), 2))) / (0.13/sqrt(x)) + log(fabs(1/y));

        double result_x = cos(x) * ((a - 1) / exp(1)) / sin((a - 1) / exp(1)) + exp((a + 1) / 2 * log(2));

        double result_y = exp(-exp(1) * log(2 * x)) + M_PI / 2 - atan(sqrt(exp(1)));

        double final_result = z + result_x + result_y;

        cout << "Final result: " << final_result << std::endl;
    }

    {
        double num1 = -6.41E+2;
        double num2 = 2.98E-10;
        double num3 = 0.0183907E+5;
        double num4 = -6.65E+0;
        double num5 = 0.25E+15;

        printf("Number 1: %e\n", num1);
        printf("Number 2: %e\n", num2);
        printf("Number 3: %e\n", num3);
        printf("Number 4: %e\n", num4);
        printf("Number 5: %e\n", num5);
    }

    return 0;
}
