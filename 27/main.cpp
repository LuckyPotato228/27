#include <iostream>
#include <vector>

using namespace std;

void min_sum_distance()
{
/**
+1.считать числа
+2 вывести пары
+3.вывести пары с минимальным расстоянием
+4 вместо вывода пары почитать сумму
+5.найти минимум среди сумм
**/

    int n;
    cin>>n;
    int min = 40001;
    vector<int> numbers(n);
    for(int i = 0; i<n; i++){
        cin>>numbers[i];
    }

    for (int j(0); j<n; j++){
        for (int i(j+1); i<n; i++){
            if(numbers[j] + numbers[i]< min and i-j>=4){
        min = numbers[j] + numbers[i];
            }
        }
    }
cout<<min;
}
int main()
{
    min_sum_distance();
    return 0;
}
