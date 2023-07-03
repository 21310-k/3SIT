#define	p3
#ifdef p1
#include <stdio.h>
main() {
	int a, b;
	scanf_s("%d\n%d", &a,&b);
	if (a > b)
		printf("big");
	if (a < b)
		printf("small");
}

#endif
#ifdef p2
#include <stdio.h>
main() {
	int x;
	scanf_s("%d", &x);
	if (x % 2 == 0)
		printf("入力した値は偶数です");
	else if (x % 2 == 1)
		printf("入力した値は奇数です");
	else printf("エラー:半角で整数を入力してください");
	return(0);
}


#endif

#ifdef p3
#include <stdio.h>
main() {

	int a, b, c;
	printf("3つの整数(a,b,c)を改行を挟んで入力してください\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b | a == c | b == c) {
		printf("このプログラムは同じ値の大小を判定することはできません\n");
	}

	printf("最も大きい整数は");

	if (a > b) {

		if (a > c) {

			printf("a");//a

		}else {
			printf("c");//c
		}

	}else if (b > c) {
		 
			printf("b");//b
	
	}else{
			printf("c");//c 
	}
	
	
	return(0);
}



#endif