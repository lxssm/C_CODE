#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//2025.07.07
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
// 
//int score = 572;
//int main()
//{
//	int age = 17;
//	short weight = 46;
//	double high = 168.5;
//	printf("score=%d\n", score);
//	printf("age=%d\n", age);
//
//	return 0;
//}

//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//
//
//	return 0;
//}
//extern int a;
//extern int high;
//extern short weight;
//extern int age;
//int main()
//{
//	printf("a=%d", a);
//	printf("high=%d", high);
//	printf("weight=%d", weight);
//	printf("age=%d", age);
//
//
//	return 0;
//}
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d", a);
//	}
//
//	return 0;
//}
//int main()
//{
//	30;
//	3.14;
//	'w';
//	"abc";
//	const int a = 10;
//	//a = 20;
//	printf("a=%d", a);
//
//	return 0;
//}

//#define MAX 100
//#define c "abcd"
//
//int main()
//{
//	printf("MAX=%d", MAX);
//	int a = MAX;
//	printf("a=%d", a);
//	printf("c=%d", c);
//	return 0;
//}

//enum Color
//{
//	red,
//	green,
//	blue
//};
//enum Sex
//{
//	male,
//	female,
//	secret
//};
//int main()
//{
//	int num = 10;
//	enum Color c = red;
//	enum Sex b = male;
//
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c'};
//	printf("%s\n", arr1);
//	printf("%d\n", strlen(arr2));
//
//
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", 10);
//	//printf("%s\n", "abcd\0ef");
//	//printf("%c\n", 's');
//	//printf("%f\n", 3.14);
//	//printf("%c\n", '\'');
//	printf("abc\ndef");
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗(1/0)?\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("bad");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("study\n");
//	while (line<20000)
//	{
//		printf("写:%d\n",line);
//		line++;
//		
//	}
//
//	if (line >= 20000)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("加油");
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//
//	if(i = 10)
//	{
//		printf("%d", i);
//	}
//	else
//	{
//		int i = 0;
//	}
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
	/*int a = 0;
	int b = 0;
	b = a++;
	while (b < 10)
	{
		printf("a=%d", a);
		printf("b=%d\n", b);
		if (a == 10)
		{
			printf("end");
			return 0;
		}
		else
		{
			b = a++;
		}
	}*/
	/*int a = 1;
	int b = 2;
	int r = a > b ? a : b;
	printf("%d", r);*/
	/*int n1 = 0;
	int n2 = 0;
	scanf("%d%d", &n1, &n2);
	int r = n1 > n2 ? n1 : n2;
	printf("%d", r);


	return 0;
}*/

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int r = 0;
//	while(!i)
//	{
//		printf("请输入a和b的值");
//		scanf("%d %d", &a, &b);
//		if (a < 0) {
//			printf("错误：a必须不小于0！\n");
//		}
//		else if (b > 100) {
//			printf("错误：b必须不大于100！\n");
//		}
//		else
//		{
//			printf("\n运算结果：\n");
//			printf("%d + %d = %d\n", a, b, a + b);
//			printf("%d - %d = %d\n", a, b, a - b);
//			printf("%d × %d = %d\n", a, b, a * b);
//			printf("是否重新输入(结束0重新1)");
//			scanf("%d", &r);
//			if (r == 1)
//			{
//				i = 0;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//	
//    }
//}
//int main()
//{
//	int n = 0;
//	while (n<=100)
//	{
//		if (n % 2 == 0)
//		{
//			printf("%d为偶数\n", n);
//		}
//		else
//		{
//			printf("%d为奇数\n", n);
//		}
//		n++;
//	}
//
//	
//
//
//
//	return 0;
//}

//int main()
//{
//	int d = 0;
//	int r = 1;
//	while (r)
//	{
//		scanf("%d", &d);
//		switch ( d )
//		{
//			case 1:
//			case 2:
//			case 3:
//			case 4:
//			case 5:
//				printf("weekday\n");
//				printf("again?\n");
//				scanf("%d", &r);
//				break;
//			case 6:
//			case 7:
//				printf("weekend\n");
//				printf("again?\n");
//				scanf("%d", &r);
//				break;
//			default:
//				printf("err!\n");
//				printf("again?\n");
//				scanf("%d", &r);
//				break;
//				
//
//		}
//
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int r = 1;
//	int b = 0;
//	
//	scanf("%d", &n);
//	b = n;
//	while (n != 1)
//	{
//		r =  r * n ;
//		n = n - 1;
//	}
//	printf("%d的阶乘为%d",b, r);


//int main()
//{
//	int n = 1;
//	int a = 1;
//	int r = 0;
//	int b = 0;
//	for (r = 0;n <= 10; n++)
//	{
//	    b = n;
//		while (n != 0)
//		{
//			a = a * n;
//			n = n - 1;
//		}
//		r = r + a;
//		a = 1;
//		n = b;
//	}
//	printf("%d", r);
//
//	
//
//		
//
//	return 0;
//}


//int main()
//{
//	int arr[10];
//	int n = 0;
//	int d;
//	int b;
//	int c;
//	int e;
//	while (n < 10)
//	{
//		d = n + 1;
//		printf("请输入第%d个", d);
//		scanf("%d", &arr[n]);
//		c = arr[n];
//		for (b = 0;d >1 && b < n; b++)
//		{
//			if (c == arr[b])
//			{
//				e = b + 1;
//				printf("已与第%d个重复\n", e);
//				arr[n] = 0;
//				n--;
//			}
//
//		}
//		b = 0;
//		n++;
//	}
//	int a = 0;
//	int i = 0;
//	int r;
//	while (!i)
//	{
//		printf("请输入查找的数字\n");
//		scanf("%d", &a);
//		for (r = 0; r < 10; r++)
//		{
//			if (arr[r] == a)
//			{
//				i = 1;
//				printf("第%d个", r + 1);
//				break;
//			}
//			else
//			{
//				printf("不存在\n");
//				break;
//
//			}
//		}
//	}
//
//
//}
// 
//void ex(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	ex(&a, &b);
//	printf("%d %d", a, b);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 100;
//	int a = 0;
//	int b = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		b = 0;
//		for (a = 2; a < i;a++)
//		{
//			if (i % a == 0)
//			{
//				printf("%d不为素数\n", i);
//				break;
//			}
//			else
//			{
//				b++;
//			}
//			if (b == i - 2)
//			{
//				printf("%d为素数\n", i);
//			}
//	
//		}
//
//
//	}
//
//
//	return 0;
//}
//int four(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0)
//	{
//		printf("%d为闰年\n", x);
//	}
//	else
//	{
//		printf("%d不为闰年\n", x);
//	}
//}
//
//
//int main()
//{
//	int n = 1;
//	for (n = 1; n <= 2025; n++)
//	{
//		four(n);
//	}
//
//
//
//	return 0;
//}

//void find(int arr[], int left, int right,int n)
//{
//	int i = 0;
//	int mid;
//	int r = 0;
//	while(1)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] == n)
//		{
//			r = 1;
//			break;
//		}
//		else if (left >= right && arr[mid] != n)
//		{
//			r = 0;
//			break;
//		}
//		else if (arr[mid] < n)
//			left = mid + 1;
//		else
//			right = mid - 1;
//	}
//	if (r == 1)
//	{
//		printf("为第%d个\n", mid + 1);
//	}
//	else
//	{
//		printf("不存在该数\n");
//	}
//
//
//}
//
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	int left = 0;
//	int right = 99;
//	for (i = 0; i <= 99; i++)
//	{
//		arr[i] = 3 * i + 1;
//	}
//	again:
//	printf("请输入查找的数字\n");
//	int n = 0;
//	int b = 0;
//	scanf("%d", &n);
//	find(arr, left, right,n);
//	printf("是否重新查找(非0重新/0取消)");
//	scanf("%d", &b);
//	if (b != 0)
//		goto again;
//	return 0;
//
//}


//int main()
//
//{
//	int n = 1;
//	int i = 1;
//	for (n = 1; n <= 9; n++)
//		for (i = 1; i <= n; i++)
//		{
//			printf("%d*%d=%d ", n, i, n * i);
//			if (i == n)
//				printf("\n");
//		}
//
//
//
//
//
//	return 0;
//}
// 
//int chu(int x,int y)
//{
//	int i;
//	if (x > y)
//		i = y - 1;
//	else
//		i = x - 1;
//	for (;i > 1;i--)
//	{
//		if (x % i == 0 && y % i == 0)
//			return i;
//	}
//
//
//}
//
//int main()
//{
//	int a;
//	int b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int r =chu(a,b);
//	printf("%d和%d的最大公约数是%d", a, b, r);
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	int c;
//	int max;
//	int mid;
//	int min;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		max = a;
//		if (b > c)
//		{
//			mid = b;
//			min = c;
//		}
//		else
//		{
//			min = b;
//			mid = c;
//		}
//	}
//	else if (b > a && b > c)
//	{
//		max = b;
//			if (a > c)
//			{
//				mid = a;
//				min = c;
//			}
//			else
//			{
//				mid = c;
//				min = a;
//			}
//	}
//	else if (c > a && c > b)
//	{
//		max = c;
//			if (a > b)
//			{
//				mid = a;
//				min = b;
//			}
//			else
//			{
//				mid = b;
//				min = a;
//			}
//	}
//	printf("%d%d%d", max, mid, min);
//	
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 1; n < 101; n++)
//	{
//		if (n % 3 == 1)
//			printf("%d ", n);
//	}
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		c = b;
//	else
//		c = a;
//	for (int n = c; n > 0; n--)
//	{
//		if (a % n == 0 && b % n == 0)
//		{
//			printf("%d", n);
//			break;
//		}
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int r = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		r = 0;
//		for (int i = n - 1; i > 1; i--)
//		{
//			if (n % i == 0)
//				r = 1;
//		}
//		if(r == 0)
//		printf("%d ", n);
//
//
//	}
//
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	for (n = 88; n <= 101; n++)
//	{
//	     a = n % 10;
//		 b = n / 10;
//		 if (a == 9)
//			 r++;
//		 if (b == 9)
//			 r++;
//	}
//	printf("%d", r);
//
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	float r = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 2 == 1)
//			r = r + 1.0 / n;
//		else
//			r = r - 1.0 / n;
//
//	}
//	printf("%f", r);
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 0 };
//	int n = 0;
//	int i = 0;
//	for (n = 0; n <= 4; n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	for (n = 0; n <= 3; n++)
//	{
//		if (arr[n] > arr[n + 1])
//		{
//			arr[n + 1] = arr[n];
//		}
//	}
//	printf("%d", arr[4]);
//
//
//	return 0;
//}

//int main()
//{
//	for (int n = 1; n <= 9; n++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			printf("%d*%d=%d ", n, i, n * i);
//			if (i == n)
//				printf("\n");
//		}
//	}
//	return 0;
//}

//void test(int* n)
//{
//	*n = *n + 1;
//}
//
//int main()
//{
//	int n = 0;
//	test(&n);
//	printf("%d", n);
//
//	return 0;
//}
//void ex(char* arr)
//{
//	int n = 4;
//	int a = 0;
//	for (int i = 0; i <= 4; i++)
//	{
//		n = 4;
//		for (; n >= i + 1; n--)
//		{
//			a = arr[n];
//			arr[n] = arr[n - 1];
//			arr[n - 1] = a;
//		}
//	}
//}
//
//int main()
//{
//	int a = 0;
//	char arr[] = { 'a','b','c','d','e'};
//	for (a = 0; a <= 4; a++)
//	{
//		scanf(" %c",  &arr[a]);
//	}
//	ex(arr);
//	printf("%c%c%c%c%c", arr[0], arr[1], arr[2], arr[3], arr[4]);
//	
//	return 0;
//}


//int main()
//{
//	int n = 12345;
//	scanf("%d", &n);
//	int i = 0;
//	int c = n;
//	while (n >= 9)
//	{
//		n = n / 10;
//		i++;
//	}
//	n = c;
//	int a = 0;
//	int b = i;
//	printf("%d位数\n", i + 1);//12345 i = 4
//	int arr[5];
//	for (; i > 0; i--)
//	{
//		arr[a] = n % 10;
//		a++;
//		n = n / 10;
//	}
//	arr[4] = n;
//	a = b;
//	for (; b >= 0; b--)
//	{
//		printf("%d ", arr[a]);
//		a--;
//	}
//	//12345 arr[0] = 5 n = 1234 i =3
//
//
//	return 0;
//}
// 
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 0,2,4,6,8 };
//	int temp[5] = { 0,0,0,0,0 };
//	for (int i = 0; i <= 4; i++)
//	{
//		temp[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp[i];
//	}
//	printf("%d%d", arr1[0], arr2[4]);
//
//	return 0;
//}

//void init(int arr[], int tmp[])
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		tmp[i] = arr[i];
//		arr[i] = 0;
//	}
//
//	return 0;
//}
//void print(int arr[])
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void reverse(int arr[], int tmp[])
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		arr[i] = tmp[9 - i];
//	}
//	return 0;
//
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int tmp[10];
//	init(arr,tmp);
//	print(arr);
//	reverse(arr,tmp);
//	print(arr);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	unsigned int b = 1;
//	int n = 0;
//	for (int i = 0;i < sizeof(unsigned int) * 8;i++)
//	{
//		if ((a & b) == b)
//		{
//			n++;
//		}
//		b = b << 1;
//	}
//	printf("%d",n);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int r = (a > b) ? a : b;
//	printf("%d", r);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while ((scanf("%d", &a)), a++,a = a / 2, a > 1)
//	{
//		printf("%d", a);
//	}
//	return 0;
//}

//int fun()
//{
//	static int n = 1;
//	return ++n;
//}
//
//int main()
//{
//	int a = 0;
//	a = fun() - fun() * fun();
//	printf("%d", a);
//	return 0;
//}

//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	return fun(n - 1) + fun(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	again:
//	scanf("%d", &n);
//	if (n <= 0)
//	{
//		printf("again\n");
//		goto again;
//	}
//	int r = fun(n);
//	printf("%d", r);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	again:
//	scanf("%d", &del);
//	for (int i = 0; i <= n; i++)
//	{
//		if (arr[i] = del)
//			break;
//		if (i == n)
//		{
//			printf("again\n");
//			goto again;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == del)
//		{
//			continue;
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int max(int arr[],int n)
//{
//	int mx = arr[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] > mx);
//		mx = arr[i];
//	}
//	return mx;
//}
//
//int min(int arr[],int n )
//{
//	int mi = arr[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] < mi)
//			mi = arr[i];
//	}
//	return mi;
//}
//
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int mx = max(arr,n);
//	int mi = min(arr,n);
//	printf("%d", mx - mi);
//	return 0;
//}
//int ten(int p)
//{
//	int r = 1;
//	for (int i = 1; i <= p; i++)
//		r = r * 10;
//	return r;
//}
//int fun(int a, int n)
//{
//	int x = n / a;
//	int y = n % a;
//	printf("%d * %d = %d ", x, y, x * y);
//	return x * y;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int a = 0;
//	int r = 0;
//	for (int n1 = n; n1 > 0; i++)
//	{
//		n1 = n1 / 10;
//	}
//	for (int p = 0; p < i - 1; p++)
//	{
//		a = ten(p + 1);
//		r = r + fun(a, n);
//	}
//	printf("\n");
//	printf("%d", r);
//	return 0;
//}

//void printup(int n,int p)
//{
//	int i = 1;
//	for (; i <= n; i++)
//	{
//		if (i == p || i == n + 1 - p)
//		{
//			printf("*");
//			continue;
//		}
//		printf(" ");
//	}
//	printf("\n");
//	if((n+1)/2 == p)
//	{
//		return;
//	}
//	p++;
//	printup(n, p);
//}
//void printdown(n, p)
//{
//	int i = 1;
//	for (; i <= n; i++)//1 2 3
//	{
//		if (i == (n / 2) + 1 - p || i == (n / 2) + p + (n%2))
//		{
//			printf("*");
//			continue;
//		}
//		printf(" ");
//	}
//	printf("\n");
//	if (n == p)
//		return;
//	p++;
//	printdown(n, p);
//}
//int main()
//{
//	int n = 0;
//	int p = 1;
//	scanf("%d", &n);
//	printup(n,p);
//	printdown(n, p);
//	return 0;
//}


//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		if (a == b || a == c || b == c)
//			printf("等腰三角形");
//		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
//			printf("直角三角形");
//		else
//			printf("三角形");
//
//	}
//	else
//		printf("不为三角形");
//
//
//	return 0;
//}
//int Add(int n, int r,int p,int n1)
//{
//	r = r + n;
//	n = n * 10 + n1;
//	p++;
//	if (p == 5)
//		return r;
//	Add(n, r, p,n1);
//}
//
//int main()
//{
//	int n = 5;
//	int p = 1;
//	scanf("%d", &n);
//	int r = 0;
//	int n1 = n;
//	int b = 0;
//	int ret = Add(n, r, p,n1);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int n = 153;
//	scanf("%d", &n);
//	int p = 1;
//	int r = 0;
//	int n1 = n;
//	for (; n1 >=10; p++)
//	{
//		n1 = n1 / 10;
//	}
//	n1 = n;
//	int arr[10];
//	int arr1[10];
//	for (int i = 0; i < p; i++)
//	{
//		arr[i] = n1 % 10;
//		n1 = n1 / 10;
//	}
//	memcpy(arr1, arr, 4*p);
//	for (int i = 0; i < p; i++)
//	{
//		for (int j = 1; j < p; j++)
//		{
//			arr1[i] = arr1[i] * arr[i];
//		}
//		r = r + arr1[i];
//	}
//	if (r == n)
//		printf("yes");
//	else
//		printf("no");
//
//	return 0;
//}


//int main()
//{
//	int n = 6;
//	int i = 1;
//	scanf("%d", &n);
//	for (int i1 = 0; i <= n; i++)
//	{
//		i1 = i;
//		if (i >= (n / 2) + (n % 2))
//		{
//			if (n % 2 == 0)
//				i1 = n - i;
//			else
//				i1 = n - i + 1;
//		}
//		for (int j = 1; j <= n; j++)
//		{
//			if (n % 2 == 1)
//			{
//				if (j >= (n / 2) + 2 - i1 && j <= (n / 2) + i1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			else
//			{
//				if (j >= ((n / 2) + 1- i1) && j <= ((n / 2) + i1))
//					printf("*");
//				else
//					printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int fun(int n, int r)
//{
//	r = r + n;
//	n = n / 2;
//	if (n == 0)
//		return r;
//	fun(n, r);
//}
//
//
//int main()
//{
//	int n = 20;
//	scanf("%d", &n);
//	int r = 0;
//	int ret = fun(n, r);
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	for (i = 2;i != a && i != b; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			break;
//	}
//	printf("%d", i);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	for (i = 1;; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//			break;
//	}
//	printf("%d", i);
//
//	return 0;
//}


//int main()
//{
//	char arr[100];
//	char arr1[100];
//	fgets(arr, sizeof(arr), stdin);
//	int n = 0;
//	int p = 0;
//	int len = 0;
//	for (;;n++)
//	{
//		if (arr[n] == '\n')
//			break;
//	}
//	int n1 = n;
//	for (int i = n ;i >= -1; i--)
//	{
//		if (arr[i] == ' ' || i == -1)
//		{
//			len = n - i - 1;
//			strncpy(arr1 + p, arr + i + 1, len);
//			p = p + len;
//			arr1[p] = ' ';
//			p = p + 1;
//			n = n - 1 - len;
//		}
//	}
//	arr1[n1] = '\0';
//	printf("%s",arr1);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr1[20];
//	int n = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			arr1[n] = arr[i];
//			n++;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			arr1[n] = arr[i];
//			n++;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int min = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[10];
//	int arr2[10];
//	int arr3[20];
//	int arr4[20];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (int i = 0; i < n+m; i++)
//	{
//		if (i < n )
//			arr3[i] = arr1[i];
//		else
//			arr3[i] = arr2[i - n];
//	}
//	for (int i = 0; i < n+m; i++)
//	{
//		for (int j = i; j < n+m; j++)// 2 4 9 2 1  4 5 6
//		{
//			if (arr3[j] < arr3[i])
//			{
//				min = arr3[j];
//				arr3[j] = arr3[i];
//				arr3[i] = min;
//			}
//		}
//	}
//	for (int i = 0; i < n+m; i++)
//		printf("%d", arr3[i]);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp(const void* e1, const void* e2)
//{
//	
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int main()
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",22} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp);
//	for (int i = 0; i < sz; i++)
//		printf("%s %d\n",s[i].name, s[i].age);
//	return 0;
//}

//int cmp(const void* a, const void* b)
//{
//	return strcmp((int*)a, (int*)b);;
//}
//
//int main()
//{
//	int arr[10] = { 2,4,6,8,1,3,9,7,0,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int del(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div1(int x, int y)
//{
//	return x / y;
//}
//void fun(int(*arr[5])(int, int), int input)
//{
//	if (input == 0)
//		return;
//	if (input < 0 || input>4)
//	{
//		system("cls");
//		printf("输入错误\n");
//		return;
//	}
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数\n");
//	scanf("%d %d", &a, &b);
//	system("cls");
//	printf("%d\n", arr[input](a, b));
//}
//int main()
//{
//	int (*arr[5])(int, int) = { 0,add,del,mul,div1};
//	int input = 0;
//	int r = 0;
//	do {
//		printf("*******************\n");
//		printf("****1.add 2.del****\n");
//		printf("****3.mul 4.div****\n");
//		printf("****0.exit     ****\n");
//		printf("*******************\n");
//		printf("Enter:>");
//		scanf("%d", &input);
//		fun(arr, input);
//	} while (input);
//}

//const int my_strlen(char* p)
//{
//	int n = 0;
//	while (*(p + n) != 0)
//		n++;
//	return n;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//void my_strcpy(char* p2, char* p1)
//{
//	int n = 0;
//	while (*(p1 + n) != '\0')
//	{
//		*(p2 + n) = *(p1 + n);
//		n++;
//	}
//	*(p2 + n) = '\0';
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[10] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//}

//void my_strcat(char* p2, char* p1)
//{
//	int n = 0;
//	int m = 0;
//	while (*(p2 + n) != 0)
//		n++;
//	while (*(p1 + m) != 0)
//	{
//		*(p2 + n + m) = *(p1 + m);
//		m++;
//	}
//	*(p2 + n + m) = 0;
//}

//int main()
//{
//	char arr[20] = "hello ";
//	my_strcat(arr, "world");
//	strcat(arr, "world");
//	printf("%s", arr);
//	return 0;
//}

//char* my_strstr(char* p1, char* p2)
//{
//	int n = 0;
//	int m = 0;
//	char* r;
//	while (1)
//	{
//		if (*(p1 + n) == *p2)
//		{
//			r = p1 +n;
//			while (*(p1 + n) == *(p2 + m))
//			{
//				n++;
//				m++;
//				if (*(p2 + m) == 0)
//					return r;
//			}
//		}
//		n++;
//		if (*(p1 + n) == 0)
//			return NULL;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "abcdefgh";
//	char arr2[] = "cdef";
//	char* r = my_strstr(arr1, arr2);
//	//char* r = strstr(arr1, arr2);
//	printf("%s", r);
//
//	return 0;
//}


//int main()
//{
//	int n =11345;
//	scanf("%d", &n);
//	int arr[10];
//	int n1 = n;
//	int i = 0;
//	int r = 0;
//	for (int j = 0; n1 > 0; i++)
//	{
//		arr[j] = n1 % 10;
//		n1 = n1 / 10;
//		j++;
//	}
//	for (int j = 0; j < i; j++)
//	{
//		if (arr[j] % 2 == 0)
//			arr[j] = 0;
//		else
//			arr[j] = 1;
//	}
//	n = 0;
//	for (int j = 0; j < i; j++)
//	{
//		n = arr[j];
//		for (int a = 0; a < j; a++)
//		{
//			n = n * 10;
//		}
//		r = r + n;
//	}
//	printf("%d", r);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j > n - i && j <= n)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	float n = 0.0;
//	scanf("%f", &n);
//	int month = 0;
//	scanf("%d", &month);
//	int data = 0;
//	scanf("%d", &data);
//	int p = 0;
//	scanf("%d", &p);
//	if (month == 11 && data == 11)
//		n = n * (0.7);
//	if (month == 12 && data == 12)
//		n = n * (0.8);
//	if (p == 1)
//		n = n - 50;
//	printf("%f", n);
//	return 0;
//}

//int main()
//{
//	int n = 5;
//	scanf("%d", &n);
//	int arr[99][99] = { 0 };
//	arr[0][45] = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 1; j < 99; j++)
//		{
//			int a = 0;
//			if (i>0 && a < 99)
//			{
//				for (a = 0; a < 99; a++)
//				{
//					arr[i][a + 1] = arr[i-1][a] + arr[i - 1][a + 2];
//				}
//			}
//			if (arr[i][j] != 0)
//				printf("%d", arr[i][j]);
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcd\n";
//	char arr2[10] = "bcad\n";
//	char arr3[20] = { 0 };
//	int n = 0;
//	int p = 0;
//	fgets(arr1, 10, stdin);
//	fgets(arr2, 10, stdin);
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr1[i] == '\n')
//			break;
//		p++;
//	}
//	scanf("%d", &n);
//	strncpy(arr3, arr1 + n,p-n);
//	strncat(arr3, arr1, n);
//	arr3[p] = '\n';
//	int r = strcmp(arr3, arr2);
//	if (r == 0)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				i = 99;
//				a = 1;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i;j<n; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				i = 99;
//				b = 1;
//				break;
//			}
//		}
//	}
//	if (a == 0 && b == 0)
//		printf("yes");
//	else
//		printf("no");
//
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//			a++;
//		if (arr[i] < arr[i + 1])
//			b++;
//	}
//	if (a == n - 1 || b == n - 1)
//		printf("yes");
//	else
//		printf("no");
//return 0;
//}

//int main()
//{
//	int n = 3;
//	scanf("%d", &n);
//	int m = n + 1;
//	int a = (2 * n) + 1;
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= a; j++)
//		{
//			if (j >= (a + 2 - 2 * i) && j <= (a + 1 - i))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	for (int i = m-1; i >= 1; i--)
//	{
//		for (int j = 1; j <= a; j++)
//		{
//			if (j >= (a + 2 - 2 * i) && j <= (a + 1 - i))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

//1 1 2 3 5 8 13 21 34 55
//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 1;
//	return fun(n -1) + fun(n-2);
//}
//
//int main()
//{
//	int arr[40];
//	int r = 30;
//	int n = 30;
//	scanf("%d", &r);
//	for (; n >= 0; n--)
//	{
//		arr[n] = fun(n+1);
//	}
//	for (n = 0; n < 30; n++)
//		if (arr[n] > r)
//			break;
//	if (arr[n] - r > r - arr[n - 1])
//		printf("%d", r - arr[n - 1]);
//	else
//		printf("%d", arr[n] - r);
//	return 0;
//}

//int main()
//{
//	char arr[100] = "godbye bit";
//	char tmp[20] = { 0 };
//	fgets(arr, sizeof(arr), stdin);
//	int p = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			for (int j = 1; j < 100; j++)
//			{
//				if (arr[j + i] == ' ' || arr[j + i] == '\0')
//				{
//					p = j - 1;
//					strcpy(tmp, arr + i + 1);
//					for (int a = 0; tmp[a] != '\0';a++)
//					{
//						arr[i + 3 + a] = tmp[a];
//					}
//					strncpy(arr + i, "%20",3);
//					break;
//				}
//			}
//		}
//	}
//	printf("%s", arr);
//
//	return 0;
//}
//2025.08.07
//int main()
//{
//	int arr[10][10] = { {1,2,3},{ 4,5,6 } };
//	int tmp[10][10];
//	int a = 0;
//	int n = 2;
//	int m = 3;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < (n / 2); i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			a = arr[i][j];
//			arr[i][j] = arr[n - 1 - i][j];
//			arr[n - 1 - i][j] = a;
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			tmp[i][j] = arr[n - 1 - j][i];
//			printf("%d ", tmp[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//二维数组元素的倒置
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int a = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i > 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			a = arr[9-j];
//			arr[9-j] = arr[8-j];
//			arr[8-j] = a;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}
//两个数组的合并并正序排列
//int cmp(const void* x, const void* y)
//{
//    return *(int*)x - *(int*)y;
//}
//int main()
//{
//    int arr1[10];
//    int arr2[10];
//    int tmp[20];
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", arr1 + i);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", arr2 + i);
//    }
//    for (int i = 0; i < n + m; i++)
//    {
//        if (i < n)
//        {
//            tmp[i] = arr1[i];
//        }
//        else
//        {
//            tmp[i] = arr2[i - n];
//        }
//    }
//    qsort(tmp, n+m, sizeof(tmp[0]), cmp);
//    for (int i = 0; i < n + m; i++)
//    {
//        printf("%d ", tmp[i]);
//    }
//    return 0;
//}
//打印正方形
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == 1 || i == n || j == 1 || j == n)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//数组元素的总和
/*int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int r = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", arr + i);
		r = r + arr[i];
	}
	printf("%d", r / 10);
	return 0;
}*/
//两个相同数量元素的数组的交换
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9.10 };
//	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	int a = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		a = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = a;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}
//二分查找
//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == key)
//			return mid;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else
//			left = mid + 1;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = {1,2,4,8,10,23,28,30,34,50};
//	int n = 15;
//	scanf("%d", &n);
//	int r = bin_search(arr,0,9,n);
//	if (r == -1)
//		printf("不存在");
//	else
//		printf("第%d位", r + 1);
//}
//打印n的乘法表
//int main()
//{
//	int n = 0;
//	scanf("%d", &n); 
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d*%d=%d ", j, i, i * j);
//		printf("\n");
//	}
//
//	return 0;
//}
// 
//判断year是否为闰年
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0)
//	{
//		if (year % 100 == 0)
//		{
//			if (year % 400 == 0)
//				printf("yes");
//			else
//				printf("no");
//		}
//		else
//		{
//			printf("yes");
//		}
//	}
//	return 0;
//}
//void is_prime(a, b)
//{
//	for (int i = a; i <= b; i++)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//			if (j == i - 1)
//				printf("%d ", i);
//		}
//
//	}
//}
//int main()
//{
//	is_prime(100, 200);
//	return 0;
//}
// 
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//void print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//void reverse(int* arr, int sz)
//{
//	int a = 0;
//	for (int i = sz - 1; i > 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			a = arr[sz - 1 - j];
//			arr[sz - 1 - j] = arr[sz - 2 - j];
//			arr[sz - 2 - j] = a;
//		}
//	}
//}
//void init(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//		*(arr + i) = 0;
//}
//int  main()
//{
//	int arr[10] = { 1,7,2,6,3,9,4,8,5,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
int main() {
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) { // 如果i是偶数
			continue; // 跳过后续打印语句，直接开始i++和下一次循环
		}
		printf("%d is odd.\n", i); // 这只会在i为奇数时执行
	}
	return 0;
}
//2025.8.31
