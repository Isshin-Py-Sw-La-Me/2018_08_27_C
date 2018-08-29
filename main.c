#include<stdio.h>
int main(){
    printf("hello,World\n");
    int a,b;
    char c;
    a = 2;
    b = 3;
    c = 'A';
    printf("a=%d\n",a);
    printf("c=%c\n",c);
    float d = 0.5;
    printf("d=%f\n",d);
    
    double radius = 10; //半径
    double pi = 3.14;
    double circumference;
    double area;

    circumference = radius * 2 * pi;
    area = radius * radius * pi;
    // double を表示するには%f
    printf("Area is %f\n",area);
    return 0;
}
