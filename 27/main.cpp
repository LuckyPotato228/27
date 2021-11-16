#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
   +1. считать и сохранить все числа
    2. вывести все пары
    3. вместо пары вывести суммы
    4. провести делимость сумм
    5. вывести только наиольшую сумму
    */
    int n;
    ifs>>n;
    vector<int> numbers(n);
    for(int i = 0;i<n;i++){
        ifs >> numbers[i];
    }
    cout<<endl;
    for (int j(0); j<n; j++){
        for (int i(j+1); i<n; i++)
        cout<<numbers[j]<< " "<< numbers[i]<<endl;
    }

}


int main()
{
    max_sum_div();
    return 0;
}
