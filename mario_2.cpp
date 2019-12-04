#include <iostream>
using namespace std;
int main(){
    int i, counter = 1, counter2 = 0, counter3, counter4, counter5 = 1, counter6;
    // counter和counter2決定左邊輸出幾個米字號
    // counter3和counter4決定左邊輸出幾個空格
    // counter5和counter6決定右邊輸出幾個米字號
    do{
        cout << "請輸入階梯高：";
        cin >> i;
        counter3 = i - 1;
        while(counter <= i){
            for(counter4 = counter3; counter4 > 0; counter4--){
                cout << " ";
            }
            counter3--;

            for(counter2 = 0; counter2 < counter; counter2++){
                cout << "*";
            }
            counter++;

            cout << "  ";

            for(counter6 = 0; counter6 <       counter5; counter6++){
                cout << "*";
            }
            counter5++;

            cout << endl;
        }
        if(i < 0){
            cout << "輸入錯誤。請重新輸入。\n";
        }
    } while(i < 1);
}
