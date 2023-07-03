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

printf("結果\n"
		"和：%d\n"
		"差：%d\n"
		"積：%d\n"
		"商：%d　あまり%d",
		add,sub,mult,div,mod);
return(0);
}


#endif



#ifdef program3
//TRY00
#include <stdio.h>

main() {
	char a;
	printf("文字を入力してください--->");
	scanf_s("%c", &a);
	printf("入力された文字に対応するコードを表示します。n八進数では「%o」です。\n十進数では「%d」です。\n十六進数では「%x」です。\n", a , a , a);
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
	printf("2つの実数を入力してください\n");
	scanf_s("%f %f", &x, &y);
	ans = x*x - y*y;
	printf("計算結果は\n%10.4fです。", ans);

}



#endif
