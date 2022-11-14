
#include <iostream>
using namespace std;
int main()
{
    int N,M;
    cout<<"Введіть масть карти 1-4";
    cin>>M;
    cout<<"Введіть цифру від 1-14";
    cin>>N;
    switch(M){
        case 1:cout<<"Піки";break;
        case 2:cout<<"Трефи";break;
        case 3:cout<<"Бубни";break;
        case 4:cout<<"Черви";break;
        default:cout<<"Input correct number";
    }
    switch(N){
        case 6:cout<<"Шістка";break;
        case 7:cout<<"Сімка";break;
        case 8:cout<<"Вісімка";break;
        case 9:cout<<"Девятка";break;
        case 10:cout<<"Десятка";break;
        case 11:cout<<"Валет";break;
        case 12:cout<<"Дама";break;
        case 13:cout<<"Король";break;
        case 14:cout<<"Туз";break;
        default:cout<<"Input correct number";
        cout<<endl;
    }
    
    return 0;
}
