#include <iostream> //引入iostream文件

int main()
{
    // 这条语句让你在代码中可以直接使用标准库中的名称，如cout、endl、string等，而不需要前面加上std::前缀。
    using namespace std;

    cout << "你好";
    cout << endl;
    cout << "世界";
    cout << endl;
    std::cout << "hello" << endl;
    return 0;
}