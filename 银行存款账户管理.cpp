#include <iostream>
#include <cstring>
using namespace std;

class Account {
private:
    int no;
    char name[10];
    float money;
public:
    Account(int no, char* name, float money);
    void Deposit(float amount);
    void Withdraw(float amount);
    void Show();
};

// 类外定义构造函数
Account::Account(int no, char* name, float money) {
    this->no = no;
    strncpy(this->name, name, 9);
    this->name[9] = '\0'; // 确保字符串终止
    this->money = money;
}

// 类外定义Show()
void Account::Show() {
    cout << no << ":" << money << endl;
}

// 类外定义Deposit()
void Account::Deposit(float amount) {
    money += amount;
    Show();
}

// 类外定义Withdraw()
void Account::Withdraw(float amount) {
    if (money < amount) {
        Show();
    } else {
        money -= amount;
        Show();
    }
}

int main() {
    int no;
    char name[10];
    float initial_money;
    
    // 读取开户信息
    cin >> no >> name >> initial_money;
    Account account(no, name, initial_money);
    
    int op;
    float amount;
    
    // 读取操作编号
    cin >> op;
    
    switch (op) {
        case 1:
            cin >> amount;
            account.Deposit(amount);
            break;
        case 2:
            cin >> amount;
            account.Withdraw(amount);
            break;
        case 3:
            account.Show();
            break;
        case 0:
            break; // 直接退出
        default:
            cout << "无效操作" << endl;
    }
    
    return 0;
}
