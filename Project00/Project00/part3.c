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
		printf("���͂����l�͋����ł�");
	else if (x % 2 == 1)
		printf("���͂����l�͊�ł�");
	else printf("�G���[:���p�Ő�������͂��Ă�������");
	return(0);
}


#endif

#ifdef p3
#include <stdio.h>
main() {

	int a, b, c;
	printf("3�̐���(a,b,c)�����s������œ��͂��Ă�������\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b | a == c | b == c) {
		printf("���̃v���O�����͓����l�̑召�𔻒肷�邱�Ƃ͂ł��܂���\n");
	}

	printf("�ł��傫��������");

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