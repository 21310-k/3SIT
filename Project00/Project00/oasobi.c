#define p5
#ifdef p1 //スイッチ文
#include <stdio.h>

main() {
	int a, b;
	char op;
	printf("二つの数字の四則演算を入力してください\n");
	scanf_s("%d\n", &a);
	scanf_s("%c\n", &op);
	scanf_s("%d", &b);

	switch (op) {
	case  '+': printf("%d%c%d=%d", a, op, b, a + b);
		break;
	case  '-': printf("%d%c%d=%d", a, op, b, a - b);
		break;
	default:   printf("error"); printf("エラー：半角数字を入力してください");
		break;
	}

	return(0);
}
#endif

#ifdef p2 //関数
#include <stdio.h>

int calculate(x, y);


main() {
	int x, y, out;
	scanf_s("%d\n", &x);
	scanf_s("%d", &y);
	out = (calculate(x, y));
	printf("%d", out);

	return(0);
}

int calculate(x, y)
{
	int add;
	add = x + y;
	return (add);
}

#endif

#ifdef p3 //配列
#include <stdio.h>
main() {
	static int a[5] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i < 5; i++) {
	printf("%d\n", a[i]);
	}
	return(0);
}
#endif //配列

#ifdef p4 //二次関数グラフ
#include <stdio.h>
#include <conio.h>

main() {
	int x, y, i;
	clrscr();
	puts("-----y=x^2のグラフ");
	for (x = -5; x <= 5; x++) {
		y = x * x;
			for (i = 0; i <= y + 1; i++) 
				printf(" ");
		printf("*\n");
	}
	return(0);
#endif

#ifdef p5 //ポインタ
//ポインタとは
    //アドレスのデータ型の情報のこと
	// 経由させるための変数をポインタ変数といい、*を頭につけて指定する。
	//ポインタ変数にアドレスを入力、アドレス内のデータを取り出す(間接参照演算子)→　*
	//変数のアドレスを取り出す(アドレス演算子)→　&
//1.ポインタを用いて、変数aのデータ値20を変数bに入力するプログラムを書く

//コード
#include <stdio.h>
main() {
	
	int *ptr, a = 20, b;  //ポインタ変数の宣言 
	ptr = &a; //&aでaのアドレスを取得、ptrに代入
	printf("%p\n", ptr);
	b = *ptr;//*ptrでptrに代入されたアドレスにあるデータ値をbに代入
	printf("%d", b);
	//結果：0000008E94D3FA94
	//		20

	return(0);
}

#endif // p4
