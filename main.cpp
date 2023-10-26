#include <iostream>
using namespace std;
int main() {
    while(true){

    int thang, nam;
    cout << "\nNhap thang: " << endl;
    cin >> thang;
    cout << "Nhap nam: " << endl;
    cin >> nam;
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
        cout << "Tháng " << thang << " có 31 ngày!";
    }else if (thang == 2){
        if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0){
            cout << "Năm " << nam << " là năm nhuận!";
            cout << "Tháng " << thang << " có 29 ngày!";
        }else{
            cout << "Năm " << nam << " không phải là năm nhuận!";
            cout << " Tháng " << thang << " có 28 ngày!";
        }
    }else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
        cout << "Tháng " << thang << " có 30 ngày!";
    }
    }
    return 0;
}
