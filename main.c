#include<stdio.h>
#include<math.h>
#define MAX 5
#define MAX1 10
#define MAX2 10

int plus(int a,int b){
	return a + b;
}

void func_1(){
	printf("FUNC\n");
}

int main(){


    // printf("hello,World\n");
    // int a,b;
    // char c;
    // a = 2;
    // b = 3;
    // c = 'A';
    // printf("a=%d\n",a);
    // printf("c=%c\n",c);
    // float d = 0.5;
    // printf("d=%f\n",d);
    
    // double radius = 10; //半径
    // double pi = 3.14;
    // double circumference;
    // double area;

    // circumference = radius * 2 * pi;
    // area = radius * radius * pi;
    // // double を表示するには%f
    // printf("Area is %f\n",area);

    // int old;
    // float weight;
    // printf("How old are you?\n");
    // scanf("%d",&old);
    // printf("%d\n",old);
    
    // if(old>20){
    //     printf("you are adult\n");
    // }else{
    //     printf("you aren't adult\n");
    // }
    // for(int i = 0; i<20; i++){
    //     printf("%d\n",i);
    // }
    
    // int point[MAX];
    // int total=0,avr;

    // for(int i = 0; i<MAX;i++){
    // 	printf("%d人目の点数は?\n",i+1);
    // 	scanf("%d",&point[i]);
    // }

    // for (int i = 0; i < MAX; i++)
    // {
    // 	printf("%d人目 = %d\n",i+1,point[i] );
    // 	total += point[i];
    // }
    // avr = total/MAX;
    // printf("avg is %d\n",avr);
    
	int i,j;
	for(i=1;i<MAX1;i++){
		for(j=1;j<MAX2;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}

	int a,b,c;

	a = 5;
	b = 2;
	c = plus(a,b);
	printf("%d\n",c);
	func_1();

	double rad;
	for (rad = 0; rad < 3.1; rad += 0.1)
	{
		printf("sin(%f) = %f\n",rad,sin(rad) );
	}

	printf("%f\n",cos(0) );

    return 0;

}
