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

// ���ⶨ�幹�캯��
Account::Account(int no, char* name, float money) {
    this->no = no;
    strncpy(this->name, name, 9);
    this->name[9] = '\0'; // ȷ���ַ�����ֹ
    this->money = money;
}

// ���ⶨ��Show()
void Account::Show() {
    cout << no << ":" << money << endl;
}

// ���ⶨ��Deposit()
void Account::Deposit(float amount) {
    money += amount;
    Show();
}

// ���ⶨ��Withdraw()
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
    
    // ��ȡ������Ϣ
    cin >> no >> name >> initial_money;
    Account account(no, name, initial_money);
    
    int op;
    float amount;
    
    // ��ȡ�������
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
            break; // ֱ���˳�
        default:
            cout << "��Ч����" << endl;
    }
    
    return 0;
}
