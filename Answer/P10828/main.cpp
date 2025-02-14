#include <iostream>
#include <string>
using namespace std;

const int MAX_STACK_SIZE = 10000; // ������ �ִ� ũ��
int stack[MAX_STACK_SIZE]; // ���� �迭
int topIndex = -1; // ������ top�� ����Ű�� �ε���

bool empty()
{
    return topIndex == -1; // ������ ��������� true
}

int size()
{
    return topIndex + 1; // ������ ũ�� ��ȯ
}

int top()
{
    if (empty()) return -1; // ������ ��������� -1 ��ȯ
    return stack[topIndex]; // ������ top ��� ��ȯ
}

void push(int x)
{
    if (topIndex >= MAX_STACK_SIZE - 1) return; // ������ ���� ���� ����
    stack[++topIndex] = x; // ���ÿ� ��� �߰�
}

void pop()
{
    if (empty())
    {
        cout << -1 << "\n"; // ������ ��������� -1 ���
    }
    else
    {
        cout << stack[topIndex--] << "\n"; // ������ top ��� ��� �� ����
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count;
    cin >> count;

    while (count--) {
        string order;
        cin >> order;

        if (order == "push")
        {
            int num;
            cin >> num;
            push(num);
        }
        else if (order == "pop")
        {
            pop();
        }
        else if (order == "size")
        {
            cout << size() << "\n";
        }
        else if (order == "empty")
        {
            cout << empty() << "\n";
        }
        else if (order == "top")
        {
            cout << top() << "\n";
        }
    }

    return 0;
}