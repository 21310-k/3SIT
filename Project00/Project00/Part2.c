#define program7

#ifdef program1
#include <stdio.h>
//TRY01
main() {
int a, b , add, sub, mult, div,mod;
scanf_s("%d",&a);
scanf_s("%d",&b);

add = a + b;
sub = a - b;
mult = a * b;
div = a / b;
mod = a % b;

printf("����\n"
		"�a�F%d\n"
		"���F%d\n"
		"�ρF%d\n"
		"���F%d�@���܂�%d",
		add,sub,mult,div,mod);
return(0);
}


#endif



#ifdef program3
//TRY00
#include <stdio.h>

main() {
	char a;
	printf("��������͂��Ă�������--->");
	scanf_s("%c", &a);
	printf("���͂��ꂽ�����ɑΉ�����R�[�h��\�����܂��Bn���i���ł́u%o�v�ł��B\n�\�i���ł́u%d�v�ł��B\n�\�Z�i���ł́u%x�v�ł��B\n", a , a , a);
	return(0);
}

#endif

#ifdef program4
#include <stdio.h>

main() {

	float x, y, ans;
	scanf_s("%f\n %f", &x,&y);
	ans = x * (x + y) / y * (x - y);
	printf("%7.3f", ans);
	return(0);
}
#endif 
#ifdef program5
#include <stdio.h>

main() {

	double x, y, ans;
	scanf_s("%lf\n %lf", &x,&y);
	ans = x * (x + y) / y * (x - y);
	printf("%le", ans);
	return(0);
}
#endif 
#ifdef program6 //TRY02
#include <stdio.h>

main(void) {

	float data;
	scanf_s("%f", &data);
	printf("\n%8.2f",data);
	return(0);
}


#endif // program6


#ifdef program8 //TRY03
#include <stdio.h>

main() {

	float x, y, ans;
	printf("2�̎�������͂��Ă�������\n");
	scanf_s("%f %f", &x, &y);
	ans = x*x - y*y;
	printf("�v�Z���ʂ�\n%10.4f�ł��B", ans);

}



#endif
