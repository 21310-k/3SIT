#define program8

#ifdef program0

#include <stdio.h>

main() {
	char name[20];
	int cls;
	printf("�����̖��O����͂��Ă�������");
	scanf_s("%s", &name , 20);
	printf("�����̊w�Дԍ�����͂��Ă�������");
	scanf_s("%d", &cls);
	printf("���͒��썂��%d�Ԃ�%s�ł�", cls, name);
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
//�v���O����1
main(void) {
	long num;
	scanf_s("%d", &num);
	printf("%d\n", num);
	return(0);
}
#endif


#ifdef program3
//�v���O����2
#include <stdio.h>
main(void) {
	long num;
	printf("��������͂��Ă�������-->");
	scanf_s("%d", &num);
	printf("���͂��ꂽ�l��%d�ł��B\n", num);
	return(0);
}

#endif

#ifdef program4
//�v���O����3
#include <stdio.h>
main(void) {
	long num;
	printf("��������͂��Ă�������-->");
	scanf_s("%ld", &num);
	printf("���͂��ꂽ�l��%ld�ł��B\n", num);
	return(0);
}
#endif

#ifdef program5
//���2.3
#include <stdio.h>
main(void) {
	long num;
	printf("��������͂��Ă�������-->");
	scanf_s("%d", &num);
	printf("8�i����%o�ł��B\n16�i����%x�ł��B",num,num);
	return(0);
}
#endif

#ifdef program6
//5
#include <stdio.h>

main() {
	int asch;
	printf("�A�X�L�[�R�[�h16�i���œ��͂��Ă�������--->");
	scanf_s("%x", &asch);
	printf("���͂��ꂽ�R�[�h�ɑΉ����镶���́u%c�v�ł��B\n", asch);
	return(0);
}
#endif

#ifdef program7
//5
#include <stdio.h>

main() {
	char m[32];
	printf("���O����͂��Ă�������-->");
	scanf_s("%s", &m,32);
	printf("%s�����낵�����˂������܂�\n", m);
	return(0);
}
#endif




