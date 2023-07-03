#define program8

#ifdef program0

#include <stdio.h>

main() {
	char name[20];
	int cls;
	printf("自分の名前を入力してください");
	scanf_s("%s", &name , 20);
	printf("自分の学籍番号を入力してください");
	scanf_s("%d", &cls);
	printf("私は長野高専%d番の%sです", cls, name);
	return(0);
}
#endif


#ifdef program1
#include <stdio.h>

main(void) {
	printf("COMPUTER\n\n");
	return(0);
}
#endif 


#ifdef program2
#include <stdio.h>
//プログラム1
main(void) {
	long num;
	scanf_s("%d", &num);
	printf("%d\n", num);
	return(0);
}
#endif


#ifdef program3
//プログラム2
#include <stdio.h>
main(void) {
	long num;
	printf("整数を入力してください-->");
	scanf_s("%d", &num);
	printf("入力された値は%dです。\n", num);
	return(0);
}

#endif

#ifdef program4
//プログラム3
#include <stdio.h>
main(void) {
	long num;
	printf("整数を入力してください-->");
	scanf_s("%ld", &num);
	printf("入力された値は%ldです。\n", num);
	return(0);
}
#endif

#ifdef program5
//例題2.3
#include <stdio.h>
main(void) {
	long num;
	printf("整数を入力してください-->");
	scanf_s("%d", &num);
	printf("8進数は%oです。\n16進数は%xです。",num,num);
	return(0);
}
#endif

#ifdef program6
//5
#include <stdio.h>

main() {
	int asch;
	printf("アスキーコード16進数で入力してください--->");
	scanf_s("%x", &asch);
	printf("入力されたコードに対応する文字は「%c」です。\n", asch);
	return(0);
}
#endif

#ifdef program7
//5
#include <stdio.h>

main() {
	char m[32];
	printf("名前を入力してください-->");
	scanf_s("%s", &m,32);
	printf("%sさんよろしくおねがいします\n", m);
	return(0);
}
#endif




