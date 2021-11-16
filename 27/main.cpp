#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
   +1. считать и сохранить все числа
   +2. вывести все пары
   +3. вместо пары вывести суммы
   +4. провести делимость сумм
   +5. вывести только наибольшую сумму
    */
    int n;
    int max = 0;
    ifs>>n;
    vector<int> numbers(n);
    for(int i = 0;i<n;i++){
        ifs >> numbers[i];
    }
    for (int j(0); j<n; j++){
        for (int i(j+1); i<n; i++)
        if(numbers[j] + numbers[i]>= max&&(numbers[j] + numbers[i])%2){
            max = numbers[j] + numbers[i];
        }

    }
    cout<<max;
}


int main()
{
    max_sum_div();
    return 0;
}
