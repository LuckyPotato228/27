#include <iostream>
#include <vector>
using namespace std;

void number_of_products_div()
{
    /**
   +1. считать и запомнить числа
   +2. вывести все пары чисел
   +3. вместо пар вывести произведения
   +4. проверить делимость произведений
    5. Посчитать и вывести кол-во подходящих проиведений
    */
    int n(0);
    cin>>n;
    vector<int> numbers(n,0);
    for (int i(0); i<n; i++){
        cin>>numbers[i];
    }
    for (int j(0); j<n; j++){
        for (int i(j+1); i<n; i++){
            int cur_prod(numbers[j]*numbers[i]);
            if(cur_prod%10 == 0){
            cout<<cur_prod;
        }
      }
    }
}

int main()
{
    number_of_products_div();
    return 0;
}
