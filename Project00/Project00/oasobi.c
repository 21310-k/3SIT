#define p5
#ifdef p1 //�X�C�b�`��
#include <stdio.h>

main() {
	int a, b;
	char op;
	printf("��̐����̎l�����Z����͂��Ă�������\n");
	scanf_s("%d\n", &a);
	scanf_s("%c\n", &op);
	scanf_s("%d", &b);

	switch (op) {
	case  '+': printf("%d%c%d=%d", a, op, b, a + b);
		break;
	case  '-': printf("%d%c%d=%d", a, op, b, a - b);
		break;
	default:   printf("error"); printf("�G���[�F���p��������͂��Ă�������");
		break;
	}

	return(0);
}
#endif

#ifdef p2 //�֐�
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

#ifdef p3 //�z��
#include <stdio.h>
main() {
	static int a[5] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i < 5; i++) {
	printf("%d\n", a[i]);
	}
	return(0);
}
#endif //�z��

#ifdef p4 //�񎟊֐��O���t
#include <stdio.h>
#include <conio.h>

main() {
	int x, y, i;
	clrscr();
	puts("-----y=x^2�̃O���t");
	for (x = -5; x <= 5; x++) {
		y = x * x;
			for (i = 0; i <= y + 1; i++) 
				printf(" ");
		printf("*\n");
	}
	return(0);
#endif

#ifdef p5 //�|�C���^
//�|�C���^�Ƃ�
    //�A�h���X�̃f�[�^�^�̏��̂���
	// �o�R�����邽�߂̕ϐ����|�C���^�ϐ��Ƃ����A*�𓪂ɂ��Ďw�肷��B
	//�|�C���^�ϐ��ɃA�h���X����́A�A�h���X���̃f�[�^�����o��(�ԐڎQ�Ɖ��Z�q)���@*
	//�ϐ��̃A�h���X�����o��(�A�h���X���Z�q)���@&
//1.�|�C���^��p���āA�ϐ�a�̃f�[�^�l20��ϐ�b�ɓ��͂���v���O����������

//�R�[�h
#include <stdio.h>
main() {
	
	int *ptr, a = 20, b;  //�|�C���^�ϐ��̐錾 
	ptr = &a; //&a��a�̃A�h���X���擾�Aptr�ɑ��
	printf("%p\n", ptr);
	b = *ptr;//*ptr��ptr�ɑ�����ꂽ�A�h���X�ɂ���f�[�^�l��b�ɑ��
	printf("%d", b);
	//���ʁF0000008E94D3FA94
	//		20

	return(0);
}

#endif // p4
