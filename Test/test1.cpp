#include<iostream>
#include<vector>

//预处理（展开宏定义等） = 》 编译阶段 = 》 汇编 = 》 链接
//编译 词法分析 = 》 语法分析 = 》语义分析 =》 中间代码生成 =》优化 =》 生成和机器相符合的代码 = 》 优化
//中间存在符号表

void test(){
    std::cout<<"Hello g++";
}

int main(){
    test();
}