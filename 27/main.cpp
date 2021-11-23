#include <iostream>

using namespace std;

void number_of_products_div()
{
    /**
   +1. считать число
    2. добавить его к одному из счётчиков соответствующего класса эквивалентности
    3. ответ
    */
    int n(0), cur(0);
    int n231(0), n77(0),n33(0), n21(0), n7(0), n11(0), n3(0);
    cin >> n;
    for (int i(0); i < n; i++) {
        cin >> cur;
        if (cur % 231 == 0) n231++;
        else if (cur % 77 == 0) n77++;
        else if (cur % 33 == 0) n33++;
        else if (cur % 21 == 0) n21++;
        else if (cur % 11 == 0) n11++;
        else if (cur % 7 == 0) n7++;
        else if (cur % 3 == 0) n3++;

    }
    cout << n231 * (n231 - 1) / 2 + n231 * (n - n231) + n77*n33 + n77*n21 + n77*n3 + n33*n21 + n33*n11 + n33*n7 + n21*n11<< endl;

}
int main()
{
    number_of_products_div();
    return 0;
}
