#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	//①
	//int arr[] = { 1, 2, 3, 4, 5 };
	//short *p = (short*)arr;
	//int i = 0;
	//for (i = 0; i<4; i++)
	//{
	//	*(p + i) = 0;//p+i中跳过i个元素应该用*p的类型（short），所以跳过2个字节。
	//}

	//for (i = 0; i<5; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//②
	//unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	//unsigned long *pulPtr;
	//pulPtr = pulArray; // 数组名代表数组 首元素地址 ，因此pulptr指向的是数组中第一个元素的位置
	//*(pulPtr + 3) += 3;
	//printf("%d %d\n", *pulPtr, *(pulPtr + 3));

	//③
	int a = 0x11223344;
	char *pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	system("pause");
	return 0;
}
//①：输入结果为： 0 0 3 4 5
//原因：
/*arr数组在内存中的存储格式为：
0x00ECFBF4:  01 00 00 00
0x00ECFBF8 : 02 00 00 00
0x00ECFBFC : 03 00 00 00
0x00ECFC00 : 04 00 00 00
0x00ECFC04 : 05 00 00 00
指针p的类型为short*类型的，因此p每次只能所有两个字节，for循环对数组中内容进行修改时，一次访问的是：
arr[0]的低两个字节，arr[0]的高两个字节，arr[1]的低两个字节，arr[1]的高两个字节，故改变之后，数组中内容如下：
0x00ECFBF4 : 00 00 00 00
0x00ECFBF8 : 00 00 00 00
0x00ECFBFC : 03 00 00 00
0x00ECFC00 : 04 00 00 00
0x00ECFC04 : 05 00 00 00
故最后打印：0   0   3   4   5*/

//③：答案解析：
 
/*假设，a变量的地址为0x64，则a变量在内存中的模型为：
0x64 | 44 |
0x65 | 33 |
0x66 | 22 |
0x67 | 11 |

char*类型的指针变量pc指向只能指向字符类型的空间，如果是非char类型的空间，必须要将该空间的地址强转为char*类型。
char *pc = (char*)&a; pc实际指向的是整形变量a的空间，即pc的内容为0x64，即44，
*pc = 0，即将44位置中内容改为0，修改完成之后，a中内容为：0x11223300 */