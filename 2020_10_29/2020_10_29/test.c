#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

//strlen��ģ�⣨�ݹ�ʵ�֣�

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ�汾��
//�ݹ�汾���ַ������ȣ�û����ʱ������
//˼·���ǰ�������в��
//���� ����ַ�����"abcd"
//�� strLen("abcd") => strLen("a")+strLen("bcd");
//�� strLen("abcd") =>  1 +strLen("bcd");
// strLen("bcd") => 1 + strLen("cd"); ......
//�� 1 + strLen(str + 1)

//int StrLen(char str[]){	
//	if (str[0] == '\0'){
//		//����һ�����ַ��� ""
//		return 0;
//	}
//	return 1 + StrLen(str + 1);
//}
//
//int main(){
//	char str[] = "hehe";
//	int ret = StrLen(str);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//�ǵݹ�汾
//int StrLen(char str[]){
	//���ַ�����˼·���Ǵ�ǰ��������ַ�����
	//ÿ�ζ���һ���ַ� ��count++������'\0'��ͣ����������ѭ��
//	int count = 0;
//	for (int i = 0; str[i] != '\0'; i++){
//		count++;
//	}
//	return count;
//}
//
//int main(){
//	char str[] = "hehe";
//	int ret = StrLen(str);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//����쳲�������

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������(1,1,2,3,5,8,13......)

//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1

//�ݹ�汾
//int fib(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//		return fib(n - 1) + fib(n - 2);
//}

//�ǵݹ�汾
//int fib(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	//����last1��last2�ֱ��ʾ n-1,n-2
//	int last1 = 1;
//	int last2 = 1;
//	//�˴�cur��ʾ��i���ֵ��cur=last1+last2, i=i-1 + i-2;
//	int cur = 0;
//	for (int i = 3; i <= n; i++){
//		cur = last1 + last2;
//		//�������i���ֵ��Ȼ���last���¸�ֵ
//		//��ʱ��i-1��ӦΪcur��ֵ����i-2��ӦΪi-1��ֵ
//		last2 = last1;
//		last1 = cur;
//	}
	//��iΪ��n��ʱ�������cur�������ս��
//	return cur;
//}
//
//int main(){
//	int result = fib(10);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}


//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

//int digitsum(int n){
//	if (n < 10){
//		return n;
//	}
//	return n%10 + digitsum(n/10);
//}
//
//int main(){
//	int n = 0;
//	int sum = 0;
//	printf("������һ��������n: \n");
//	scanf("%d", &n);
//	sum = digitsum(n);
//	printf("���Ϊ��%d\n", sum);
//
//	/*int sum;
//	printf("������һ���Ǹ�����\n");
//	scanf("%d", &sum);
//	digitsum(sum);
//	printf("%d\n", digitsum);*/
//	system("pause");
//	return 0;
//}


//�ݹ�ʵ��n��k�η�

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//double Power(int n, int k){
//	//n*n*n*n*...... => n^k => n*n^(k-1)
//	if (k < 0){
//		k = -k;
//		return 1 / (n*Power(n, k - 1));
//	}
//	if (k == 0){
//		return 1;//n^0=1
//	}
//	if (k > 0){
//		return n*Power(n, k - 1);
//	}
//}
//
//int main(){
//	printf("��������Ҫ��ĵ�����ָ����\n");
//	int n;
//	int k;
//	scanf("%d %d", &n, &k);
//	int ret = Power(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//�ַ������򣨵ݹ�ʵ�֣�

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ� ���� ���С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//�ǵݹ�汾
//char *reverse_string(char *str){
//	char *start = str;
//	char *end = str + strlen(str) - 1;
//	for (; start < end; start++, end--){
//		char ch = *start; 
//		*start = *end;
//		*end = ch;
//	}
//	return str;
//}
//
//int main(){
//	char tmp[] = "hello bit!";
//	printf("%s\n", reverse_string(tmp));
//	system("pause");
//	return 0;
//}

//�ݹ�汾��
//char *reverse_string(char *str){
//	if (strlen(str) < 2){//�ݹ�Ľ�ֹλ�þ�����������Ҫ����
//		return str;
//	}
//	char ch = *str;
//	int len = strlen(str) - 1;
//	*str = *(str + len);//�����һ��λ�õ�����f��ֵ����ʼλ��
//	*(str + len) = '\0';//�ѵ�ǰ���һ���ַ������滻Ϊ'\0'
//	reverse_string(str + 1);
//	*(str + len) = ch;
//	return str;
//}
//
//int main(){
//	char tmp[] = "hello bit!";
//	printf("%s\n", reverse_string(tmp));
//	system("pause");
//	return 0;
//}

