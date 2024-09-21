#include <iostream>
#include <stack>
#include <vector>

// int main() {
//     // std::vectorをコンテナとして使用するstd::stackの作成
//     std::stack<int, std::string> myStack;

//     // スタックに要素をプッシュ
//     myStack.push(10);
//     myStack.push(20);
//     myStack.push(30);

//     // スタックの要素を表示
//     std::cout << "Stack top: " << myStack.top() << std::endl; // 30

//     // スタックから要素をポップ
//     myStack.pop();
//     std::cout << "Stack top after pop: " << myStack.top() << std::endl; // 20

//     // スタックが空かどうかを確認
//     if (!myStack.empty()) {
//         std::cout << "Stack is not empty." << std::endl;
//     }

//     // 残りの要素を表示
//     while (!myStack.empty()) {
//         std::cout << "Popping: " << myStack.top() << std::endl;
//         myStack.pop();
//     }

//     return 0;
// }

int main() {
    std::vector<int> vec;

    for (int i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    std::vector<int> vec1;

    vec1 = vec;
    for (std::vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++) {
        std::cout << *it << std::endl;
    }


}