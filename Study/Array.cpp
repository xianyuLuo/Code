1、数组是什么
        一组相同类型的变量集合,减少大量定义相同类型的变量。
2、数组怎么定义
        类型 名字[常量表达式];
        名字：跟变量名的命名规则一样；
        常量表达式：一个确定的值，无歧义；
        int array[10];
        double array[3 + 10];
        名字是首地址；
3、数组怎么初始化
        初始化列表;
        int array[5] = {1, 2, 3, 4, 5};
        int array[10] = {1, 2, 3, 4 ,5};    ----1 2 3 4 5 0 0 0 0 0
        数组若不初始化则所有值是垃圾值，有初始化就是初始化的值，未被完全初始化的设为0，字符数组设为'\0'；
        引用数组中的值array[id];
        下标的范围：0 — (n - 1);
        大数组，建议开全局数组
4、数组的应用：冒泡排序
5、二维，多维数组。
        类型 名字[常量表达式][常量表达式];
        double array[3][4];
        int array[2][3][4];
        double array[2][4] = {{1, 1, 1, 1}, {2, 2, 2, 2}};
        int array[][4] = {1, 2, 3, 4, 5, 6 ,7, 8};
        float array[2][4] = {{1, 2}};
        二维数组是一种特殊的一维数组，按行存放在内存中
        怎么引用。
        举例：3*4的二维数组（矩阵），求出其中的最大值，以及其行号列号
6、字符数组
        char ch[100];
        C语言规定字符数组以'\0'结束;
        char ch[100] = {"I love C!"};//其有效长度是9，数组大小是100
        char ch[100] = {'I',' ', 'l', 'o', 'v', 'e', ' ', 'C', '!'};
        输入scanf("%s", ch),scanf("%c", ch);
        字符数组不能直接赋值，strcpy()！   ch = "I love C!"; 错误
        常用函数举例：(头文件string.h)
            gets(ch) 接受一行输入
            puts(ch) 输出ch的值
            strcmp(ch1, ch2)  比较ch1和ch2的大小，ch1小于ch2 返回-1，相等0，大于1
            strlen(ch)
        英文字符占一个位置，中文字符占两个位置；
        char ch[100] = {"Hello World.\0 I love C!"};  strlen()?
        举例：
            输入名字，输出名字；
            输入大写英文句子，输出小写的结果；
        Wikioi：1202，1250
