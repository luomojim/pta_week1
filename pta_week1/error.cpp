#include <iostream>
#include <string>
using namespace std;

int error_res() 
{
    string errors[] = 
    {
        "Error : Incorrect use of parentheses",
        "Error : expected ',' or ';' before '}' token",
        "Error : Invalid number in octal constant in the number",
        "Error : the exponent part of the number does not specify a number",
        "Error : Chinese characters appear in this line",
        "Error : invalid operands of types 'int' and 'float' to binary 'operator%'",
        "Error : the procedure did not end within the specified time",
        "Error : the else does not detect a matching if",
        "Error : too many initializers,array bounds overflow",
        "Error : invalid operands of types 'int*' and 'int*' to binary 'operator+'",
        "Error : undeclared identifier，expected constant expression，cannot allocate an array of constant size 0",
        "Error : invalid conversion from 'const char*' to 'int' [-fpermissive]"
    };


    string in[] = 
    {
        "int a=0xhh;",
        "float a=123.456E;",
        "int x=081;",
        "int x=071,y=70; if(x>y)( printf(\"x比y大\"); ) else( printf(\"y比x大\"); )",
        "char x; scanf(\"%c\",&x); switch(x){ case \"a\" : printf(\"你输入的是a\"); break; }",
        "int a[n],n=10;",
        "int *pa=10,*pb=20,*a; a = pa + pb;",
        "char a[4]={'a','b','c','d','e'};",
        "int x=100000000; while((x++)<2147483648)",
        "int t=1; if(t>0) if(t>10) printf(\"aaa\"); else printf(\"bbb\") else printf(\"ccc\");",
        "int x=2022; float y=8; printf(\"%d\",x%y);",
        "double x; scanf(\"%2.3lf\",&x); printf(\"%lf\",x);",
        "int a=10；",
        "int x; scanf(\"%d\",&x); printf(\"%d\",&x);",
        "int x=10,y=20; x=x>y?x:y;",
        "int a=0"
    };

    string words[] = 
    {
        "", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT",
        "NINE", "TEN", "ELEVEN", "TWELVE", "THIRTEEN", "FOURTEEN", "FIFTEEN", "SIXTEEN"
    };

    
    int ans[] = { 0, 4, 16, 3, 2, 13, 11, 9, 10, 8, 7, 6, 5 };

    int err, input;
    cin >> err >> input;

    // 输出错误信息和表达式
    cout << "you choose the ERROR INFORMATION " << words[err] << "{" << errors[err - 1] << " } ";
    cout << "and the EXPRESS OPTION " << words[input] << "{" << in[input - 1] << "}" << endl;

    // 判断是否匹配
    if (ans[err] == input) 
    {
        cout << "MATCH" << endl;
    }
    else 
    {
        cout << "NOT MATCH" << endl;
    }

    return 0;
}
