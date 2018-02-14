#include <iostream>
#include <windows.h> // system()
using namespace std;
//我们定义要输入到的变量是整型,但如果我们输入了英文字母或者汉字,那就会发生错误,cin里有个方法能检测这个错误,就是cin.rdstate();
//当cin.rdstate()返回0(即ios::goodbit)时表示无错误,可以继续输入或者操作, 若返回4则发生非致命错误即ios::failbit,则不能继续输入或操作.
//而cin.clear则可以控制我们此时cin里对这个问题的一个标识. 语发如下: cin.clear(标识符); 标识符号为:
//goodbit 无错误
//Eofbit 已到达文件尾
//failbit 非致命的输入/输出错误，可挽回
//badbit　致命的输入/输出错误,无法挽回 若在输入输出类里.需要加ios::标识符号
//通过cin.clear,我们能确认它的内部标识符,如果输入错误则能重新输入.结合真正的清空数据流方法cin.sync(),请看下例:
int main()
{
    int a;
    while(1)
    {
        cin>>a;
        if(!cin)            //条件可改写为cin.fail()
        {
            cout<<"输入有错!请重新输入"<<endl;
            cin.clear();
            cin.sync();   //清空流
        }
        else
        {
            cout<<a;
            break;
        }
    }
    system("pause");
}
//上面的cin.clear()默认参数为0, 即无错误, 正常操作. 当我们输入英文字母'k'时, 它的状态标识改为fail, 即错误, 用cout对用户输出信息, 再用cin.clear让错误标识改回为0,
//让我们可以继续输入, 再清空流数据继续输入.
//如果我们没有了cin.clear,则会进入死循环, 其过程为我们输入了英文字母, 它的状态标识便为fail,
//当运行到条件判断时, 便总是回到错误的条件表示里, 并且我们再也没办法输入, 因为错误的表示关闭了cin,所以会进入死循环.
