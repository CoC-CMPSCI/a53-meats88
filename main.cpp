#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, begin, end, sum = 0;
do{
    cout << "enter begin and end values:";
    cin >> begin >> end;
    // TODO: loop from begin to end and accumulate sum of even values
} while(begin > end);
for (i = begin; i <= end; i++){
    if(i % 2 == 0){
        sum += i;
    }
}
cout << "The sum of even value is " << sum << endl;
return 0;
}
