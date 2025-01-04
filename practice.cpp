#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <errno.h>
#include<ctime>
using namespace std;
#define N 100
#include <iostream>

//struct Node {
//	int data;
//	Node* next;
//};
//Node* rever(Node* head)
//{
//	Node* bf = NULL;
//	Node* mid = head;
//	Node* end;
//	while (mid != NULL)
//	{
//		end = mid->next;
//		mid->next = bf;
//		bf = mid;
//		mid =end;
//	}
//	return bf;
//}
//int main()
//{
//	Node node3 = { 3,NULL };
//	Node node2 = { 2,&node3 };
//	Node node1 = { 1,&node2 };
//	Node* head(&node1);
//	Node* pf = rever(head);
//	while (pf != NULL)
//	{
//		cout << pf->data << " ";
//		pf = pf->next;
//	}
//	return 0;
//}

//main：键入一个数，调用函数，判断并输出100以内的所有素数
//int isPrime(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//void pfPrime(int res)
//{
//	cout<< " numbers less than " << res << " are:" << endl;
//	for (int i = 2; i < res; i++)
//	{
//		if (isPrime(i))
//			cout << i << " ";
//	}
//}
//int main()
//{
//	int a;
//	cout << "please enter a number" << endl;
//	cin >> a;
//	if (isPrime(a))
//	{
//		cout << a << " is a prime "<<endl;
//	}
//	else
//	{
//		cout << a << " is not a prime" << endl;
//	}
//	pfPrime(100);
//	return 0;
//}

//main函数：调用函数，更改大小写，输出
//函数：接收字符数组和大小，查找并返回最大字符地址
//题目：编写函数get_max，其功能是将字符串s中最大字符的地址返回，再编写一个主函数，调用该函数，将字符串s中从最大字符开始的子串中小写字母转换成大写字母，然后输出新字符串s。例如，假设s的内容为“qwertyou”，则从最大字符’y’开始的子串为“you”，处理后的s为“qwertYOU”。‌
//函数形式为：char* get_max(char s[])
//下面是我的函数;为什么没有大写ymself，而是只大写了lf？
//char* getMax(char ch[])
//{
//	int max(0);
//	for (int i = 1; ch[i]!='\0'; i++)
//	{
//		if (ch[i] > ch[max])
//		{
//			max = i;
//		}
//	}
//	return &(ch[max]);
//}
//int main()
//{
//	char ch[] = "imustbemyself";
//	cout << ch << endl;
//	for (char* cha = getMax(ch); *cha!='\0'; cha++)
//	{
//		*cha = toupper(*cha);
//	}
//	cout << ch << endl;
//	return 0;
//}

//main函数：产生随机数组，
//函数：接收数组和数组长度，递归求和
//int sum(int a[], int n)
//{
//	if (n == 1)
//	{
//		return a[0];
//	}
//	return a[n - 1] + sum(a, n - 1);
//}
//int nsum(int a[], int n)
//{
//	int sum(0);
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[i];
//	}
//	return sum;
//}
//int main()
//{
//	int arr[10];
//	srand(time(0));
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = rand() %90 + 10;
//	}
//	cout << sum(arr, 10) << endl;
//	cout << nsum(arr, 10) << endl;
//	return 0;
//}

//int fac(int n)
//{
//	if (n == 0)
//		return 1;
//	return n * fac(n - 1);
//}
//int fib(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if(n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//
//}
//void hanoi(int n, char from, char assist, char to)
//{
//	if (n == 1)
//	{
//		cout << "move disk 1 from " << from << " to " << to << endl;
//		return;
//	}
//	hanoi(n - 1, from, to, assist);
//	cout << "move disk "<<n<<" from " << from << " to " << to << endl;
//	hanoi(n - 1, assist, from, to);
//	return;
//}
//int main()
//{
//	//cout << fib(3);
//	
//	return 0;
//}


//定义书籍结构体
// main函数键入书籍数组，调用函数，输出结果
// 函数接收书籍引用，更改顺序
//下面是程序题，我对数组操作的时候，代码太麻烦了，如果我想用赋值运算符重载的方法，该怎么写？
//使用结构数组输入10本书的名称和单价，调用函数按照书名的字母顺序序进行排序，在主函数输出排序结果。
//struct book {
//	char name[10];
//	double price;
//	book& operator=(const book& other)
//	{
//		if (this != &other)
//		{
//			strcpy(this->name, other.name);
//			this->price = other.price;
//		}
//		return *this;
//	}
//};
//void coDer(book* books,int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (strcmp(books[j].name,books[j+1].name)>0)
//			{
//				book temp = books[j];
//				books[j] = books[j + 1];
//				books[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	book books[3] = { {"ckkk",12.5},{"abll",23.5},{"acuu",56.5} };
//	int size = sizeof(books) / sizeof(books[0]);
//	coDer(books,size);
//	for (int i = 0; i < size; i++)
//	{
//		cout << books[i].name << "  " << books[i].price << endl;
//	}
//	return 0;
//}

//定义日期结构体
//main函数：创建一个年月日结构体，输入今天的日期，年月日；
// 函数，接收日期结构体，先判断平闰年，再判断2月天数，计算总天数
//struct dateToday {
//	int year;
//	int month;
//	int day;
//};
//int totalDays(dateToday& day)
//{
//	int dIm[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (day.year % 4 == 0 && day.year % 100 != 0 || day.year % 400 == 0)
//	{
//		dIm[1] = 29;
//	}
//	int tD = 0;
//	for (int i = 0; i < day.month - 1; i++)
//	{
//		tD += dIm[i];
//	}
//	return tD + day.day;
//}
//int main()
//{
//	dateToday day = { 2024,12,28 };
//	cout << "第 " << totalDays(day) << "天" << endl;
//	cin.get();
//	return 0;
//}


//主函数里：用户输入学生数量-》动态创建结构体数组-》循环键入学生信息-》调用函数返回最高分学生结构体指针-》输出信息
//定义学生结构体-》写函数，传入结构体数组以及大小-》
//struct student
//{
//	char* num;
//	int score;
//};
//student* max(student* students, int n)
//{
//	if (n <= 0)
//	{
//		cout << "invalid number of students" << endl;
//		return NULL;
//	}
//	student* maxStudent = &students[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (maxStudent->score < students[i].score)
//		{
//			maxStudent = &students[i];
//		}
//	}
//	return maxStudent;
//}
//int main()
//{
//	int n;
//	cout << "please enter the number of students" << endl;
//	cin >> n;
//	student* students = new student[n];
//	for (int i = 0; i < n; i++)
//	{
//		cout << "please enter the number of the " << i + 1 << "th student" << endl;
//		students[i].num = new char[10];
//		cin >> students[i].num;
//		cout << "please enter the score of the " << i + 1 << "th student" << endl;
//		cin >> students[i].score;
//	}
//	student* topStudent = max(students, n);
//	if (topStudent != NULL)
//	{
//		cout << "the student with the highest score is:" << endl;
//		cout << "num: " << topStudent->num << "  score: " << topStudent->score << endl;
//		for (int i = 0; i < n; i++)
//		{
//			delete[] students[i].num;
//		}
//		delete[] students;
//	}
//	return 0;
//}

//编写程序，从键盘输入一串字符，要求将该串字符的倒序串先写入到文件f1.txt中，
//然后再将原字符串的内容接到该文件的末尾。例如，假设从键盘输入的字符串为
//“How do you do ? ”，则文件f1.txt的内容为：
//? od uoy od woHHow do you do ?
void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        // 交换字符
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char input[100];
    FILE* fp;
    fgets(input, sizeof(input), stdin);
    cout << input;
    return 0;
}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char hj = fgetc(pf);
//	while (hj != EOF)
//	{
//		cout << hj << " ";
//	}
//	char ch[] = "henry";
//	//fputc('a', pf);
//	//fputs(ch, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct person
//{
//	char name[20];
//	int salary;
//	float score;
//}p1; 
//int main()
//{
//	p1 = { "henry",1000000,55.5f };
//	char buf[100] = {0};
//	person p2 = {0};
//	//将p1中的格式化数据转化成字符串存储到buf中
//	sprintf(buf,"%s %d %f", p1.name, p1.salary, p1.score);
//	printf("字符串：%s\n", buf);
//	//将buf中的字符串转换成格式化数据存储到p2中
//	sscanf(buf, "%s %d %f", p2.name, &(p2.salary), &(p2.score));
//	printf("格式化：%s %d %f", p2.name, p2.salary, p2.score);
//	cin.get();
//	return 0;
//}
//随机读写：
//int main()
//{
//	FILE* fw = fopen("test.txt", "r");
//	if (fw == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//fprintf(fw, "henry loves rachel.");
//	fseek(fw, 7, SEEK_SET);  //本来文件指针指向第一个字符，操作后指向第八个字符
//	char ch = fgetc(fw);   //读取第八个字符后文件指针向后移动一位，指向第九个字符
//	cout << ftell(fw);  //8  返回文件指针相对于起始位置的偏移量
//	cout <<ch;
//	fseek(fw, 2, SEEK_CUR);  //文件指针从第九个字符向后移动两位
//	ch = fgetc(fw);
//	cout << ftell(fw);  //11
//	cout << ch;
//	fseek(fw, -3, SEEK_END);  //当从文件末尾开始时，文件指针一开始指向最后一个字符后面，通过移动-1位，指向我们所能看到的最后一个字符
//	ch = fgetc(fw); //注意，不管文件指针从哪个方向移动，读取字符后，文件指针都会向后移动一位
//	cout << ch;
//	cout << ftell(fw);
//	fseek(fw, -2, SEEK_CUR);  
//	ch = fgetc(fw); 
//	cout << ch;
//	rewind(fw); //让文件指针位置回到初始位置
//	fclose(fw);
//	fw = NULL;
//	return 0;
//}


//D:\C_note_files\鹏哥c_note\note1.docx
//二分法查找
//int gcd(int a, int b)  //最大公约数
//{
//	int c = a % b;	
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	return b;
//}
//int lcm(int a, int b)  //最小公倍数
//{
//	return a * (b / gcd(a, b));
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout<<lcm(a, b);
//	return 0;
//}
// 
// 
//void reverseArray(int arr[], int size)
//{
//	for (int i = 0; i <= size - 1 - i; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[size - i - 1];
//		arr[size - i - 1] = temp;
//	}
//}
//int main()
//{
//	int arr[20];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	srand(time(0));
//	for (int i = 0; i < 20; i++)
//	{
//		arr[i] = rand() % 100 + 1;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//	reverseArray(arr, size);
//	for (int i = 0; i < 20; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	return 0;
//}

//冒泡排序
//void bubbleSort(int arr[], int size)
//{
//	for (int i = 0; i < size-1; i++)
//	{
//		for (int j = 0; j < size - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[20];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	srand(time(0));
//	for (int i = 0; i < 20; i++)
//	{
//		arr[i] = rand() % 100 + 1;
//	}
//	bubbleSort(arr, size);
//	for (int i = 0; i < 20; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	return 0;
//}
//通过递归计算，输出斐波那契数列的每一项并求和
//int calfbnq(int n)
//{
//	int num;
//	if (n == 1)
//		num = 0;
//	else if (n == 2)
//		num = 1;
//	else
//		num = calfbnq(n - 1) + calfbnq(n - 2);
//	return num;
//}
//void coutfbnq(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		cout << calfbnq(i) << " ";
//	}
//}
//int sumfbnq(int m)
//{
//	int sum(0);
//	for (int i = 1; i <= m; i++)
//	{
//		sum += calfbnq(i);
//	}
//	return sum;
//}
//int main()
//{
//	coutfbnq(30);
//	cout <<endl<< sumfbnq(20);
//	return 0;
//}
// 
// 
//判断素数的函数和输出孪生素数
//int fun(int m)
//{
//	if (m <= 1)
//	{
//		return 0;
//	}
//	for (int i = 2; i <=sqrt(m); i++)
//	{
//		if (m % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int  i(0),k(101);
//	while (i < 10)
//	{
//		if (fun(k) && fun(k + 2))
//		{
//			cout << k << "  " << k + 2 << endl;
//			i++;
//		}
//		k++;
//	}
//	cin.get();
//	return 0;
//}

//int getpower(int x, int y)
//{
//	if (y < 0)
//		return 0;
//	else if (y == 0)
//		return 1;
//	else
//	{
//		return x * getpower(x,y - 1);
//	}
//}
//int main()
//{
//	cout << "7的7次方为：" << getpower(7, 7) << endl;
//	cout << pow(7, 7);
//	return 0;
//}
//定义职工信息结构体
//struct staff
//{
//	char num[6];
//	char name[20];
//	double wage;
//};
////定义链表节点结构体
//struct Node
//{
//	staff data;
//	Node* next;
//};
////创建链表函数并让用户输入职工信息
//Node* creatlist(int n)
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		Node* newNode = (Node*)malloc(sizeof(Node));
//		cout << "Enter the work number, name and salary of the " << i + 1 << "employee" << endl;
//		cin >> newNode->data.num >> newNode->data.name >> newNode->data.wage;
//		newNode->next = nullptr;
//		if (head == nullptr)
//		{
//			head = newNode;
//		}
//		else
//		{
//			tail->next = newNode;
//		}
//		tail = newNode;
//	}
//	return head;
//}
////删除链表中的第n个节点
//Node* deln(Node* head, int n)
//{
//	if (!head || n <= 0)
//	{
//		cout << "删除失败，链表为空或位置无效" << endl;
//		return head;
//	}
//	if (n == 1)
//	{
//		Node* temp = head;
//		head = head->next;
//		delete temp;
//		return head;
//	}
//	//剩余情况，定位到前一个节点
//	Node* prev = head;
//	for (int i = 1; i < n - 1&&prev; i++)
//	{
//		prev = prev->next;
//	}
//	if (prev == nullptr || prev->next == nullptr)
//	{
//		cout << "删除失败，超出链表长度" << endl;
//		return head;
//	}
//	Node* temp = prev->next;
//	prev->next = temp->next;
//	delete temp;
//	return head;
//}
////输出链表信息
//void printList(Node* head)
//{
//	if (!head)
//	{
//		cout << "链表为空" << endl;
//		return;
//	}
//	Node* current = head;
//	while (current != nullptr)
//	{
//		cout << "number: " << current->data.num;
//		cout << ",name: " << current->data.name;
//		cout << ",salary: " << current->data.wage << endl;;
//		current = current->next;
//	}
//}
//int main()
//{
//	int n;
//	cout << "输入职工数量：" << endl;
//	cin >> n;
//	Node* head = creatlist(n);  //创建链表
//	cout << "当前链表信息：" << endl;
//	printList(head);
//	int pos;
//	cout << "输入要删除的位置：" << endl;
//	cin >> pos;
//	head = deln(head, pos); //删除节点
//	cout << "删除后的链表：" << endl;
//	printList(head);
//	cin.get();
//	return 0;
//}
//struct Book
//{
//	char b_name[20];
//	float b_price;
//};
//void nameSort(Book books[], int n)
//{
//	Book tempbook;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (books[j].b_name[0] > books[j + 1].b_name[0])
//			{
//				strcpy(tempbook.b_name, books[j].b_name);
//				strcpy(books[j].b_name, books[j + 1].b_name);
//				strcpy(books[j+1].b_name, tempbook.b_name);
//			}
//		}
//	}
//}
//int main()
//{
//	Book books[3] =
//	{
//		{"lfafaf",20},
//		{"dafaf",20},
//		{"afafaf",20}
//	};
//	nameSort(books, 3);
//	for (int i = 0; i < 3; i++)
//	{
//		cout << books[i].b_name << endl;
//	}
//	cin.get();
//	return 0;
//}

//struct Date
//{
//	int year;
//	int month;
//	int day;
//};
//bool isleapyear(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int totaldays(const Date& date)
//{
//	int totalDays(0);
//	int daysinMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (isleapyear(date.year))
//		daysinMonth[1] = 29;
//	for (int i = 0; i < date.month - 1; i++)
//	{
//		totalDays += daysinMonth[i];
//	}
//	totalDays += date.day;
//	return totalDays;
//}
//int main()
//{
//	Date date1;
//	cout <<"Enter the year: " << endl;
//	cin >> date1.year;
//	cout << "Enter the month: " << endl;
//	cin >> date1.month;
//	cout << "Enter the day: " << endl;
//	cin >> date1.day;
//	int totalDays = totaldays(date1);
//	cout << "totalDays = " << totalDays << endl;
//	cin.get();
//	return 0;
//}



//struct student {
//
//	char* num;
//	int score;
//};
//student max(student a[], int n)
//{
//	int imax(0);
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i].score > a[imax].score)
//		{
//			imax = i;
//		}
//	}
//	return a[imax];
//}
//int main()
//{
//	student s[4];
//	size_t size = sizeof(s) / sizeof(s[0]);
//	for (int i = 0; i < size; i++)
//	{
//		s[i].num = new char[20];
//		cout << "Enter student " << i + 1 << "num = " << endl;
//		cin >> s[i].num;
//		cout << "score = " << endl;
//		cin >> s[i].score;
//	}
//	student s1 = max(s, size);
//	cout << s1.num << " got " << s1.score;
//	for (int i = 0; i < size; i++)
//	{
//		delete s[i].num;
//		s[i].num = nullptr;
//	}
//	cin.get();
//	return 0;
//}


//递归plus进制转换
//void convert(int m, int r)
//{
//	char b[17] = "0123456789ABCDEF";
//	if (m != 0)
//	{
//		convert(m / r, r);
//		cout << b[m % r];
//	}
//}
//int main()
//{
//	int m(17),r(16);
//	convert(m, r);
//	return 0;
//}

//递归plus二分法查找
//int b_s(int a[], int low, int high, int size,int key)
//{
//	if (high < low|| key<a[0] || key>a[size - 1])
//		return -1;
//	int mid = (low + high) / 2;
//	if (key == a[mid])
//	{
//		return mid;
//	}
//	if (key < a[mid])
//	{
//		high = mid - 1;
//		return b_s(a, low, high, size, key);
//	}
//	if (key > a[mid])
//	{
//		low = mid + 1;
//		return b_s(a, low, high, size, key);
//	}
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7 };  //使用二分法在递增数组a[]中查找3
//	int size = sizeof(a) / sizeof(a[0]);
//	int key = 10;
//	int low = 0;
//	int high = size - 1;
//	int inum = b_s(a,low,high,size,key);
//	if (inum == -1)
//		cout << "无此数" << endl;
//	else
//		cout << key << "是第" << inum + 1 << "号元素" << endl;
//	return 0;
//}


//void opdigitsum(int n, int& digitsum, bool& isdc)
//{
//	int lastdigit = n % 10;
//	digitsum += lastdigit;
//	n /= 10;
//	while (n > 0)
//	{
//		if (n > 0)
//		{
//			int currentdigit = n % 10;
//			if (currentdigit < lastdigit)
//			{
//				isdc = 0;
//			}
//			lastdigit = currentdigit;
//			digitsum += lastdigit;
//			n /= 10;
//		}
//	}
//}
//int main()
//{
//	int n;
//	cout << "请输入自然数n: " << endl;
//	cin >> n;
//	while (n <= 0)
//	{
//		cout << "输入的不是自然数，请重新输入" << endl;
//		cin >> n;
//	}
//	int digitsum(0);
//	bool isdc(1);
//	opdigitsum(n, digitsum, isdc);
//	cout << "它各位数的和为：" << digitsum << endl;
//	if (isdc)
//		cout << "yes" << endl;
//	else
//		cout << "no" << endl;
//	cin.get();
//	return 0;
//}

 //我的目的是：arr是一个指针类型的数组，它储存了a,b,c的地址，parr是数组类型的指针，指向arr的首地址。我的写法有问题吗？
//int main()
//{
//	int a = 10, b = 20, c = 30;
//	int* arr[] = { &a,&b,&c };
//	int* (*parr)[] = &arr;
//	cout << parr;
//	return 0;
//}
//我有三个问题：
//一：获取整个数组的地址和获取数组第一个元素的地址有什么区别吗？整个数组的地址是怎么包含数组中各个元素的地址的？
//二：在cpp中，[]有哪些不同的含义或者应用场景
//三：我如何更好的理解：int*; int**; int* (*)[]; int*(*)[5]以及相关的表达式？
////指针练习部分

//利用指针交换两个整数的值
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int x(5), y(6);
//	cout << "before change " << x << " " << y << endl;
//	swap(&x, &y);
//	cout << "after change " << x << " " << y << endl;
//	cin.get();
//	return 0;
//}

//求数组元素的和
//int sum(int* arr, int size)
//{
//	int total(0);
//	for (int i = 0; i < size; i++)
//	{
//		total += *(arr + i);
//	}
//	return total;
//}
//int main()
//{
//	int nums[] = { 2,4,6,3,1,4,5 };
//
//	int size = sizeof(nums) / sizeof(nums[0]); //数组名本质上是指向第一个元素的指针
//	int result = sum(nums, size);
//	cout << result;
//	cin.get();
//	return 0;
//}
 
//反转一个字符串  
//void reversestring(char* str)
//{
//	char* start = str;
//	char* end = str + strlen(str) - 1;
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	char a[] = "nerlcm a sah yrneh";
//	reversestring(a);
//	cout << a;
//	return 0;
//}

//查找数组中的最大元素
//int findmax(int* arr, int size, int* index)
//{
//	int max = *arr;  //假设第一个元素为最大元素
//	*index = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (*(arr + i) > max)
//		{
//			max = *(arr + i);
//			*index = i;
//		}
//	}
//	// *index++为错误代码，因为++运算符的优先级高于*，所以它执行的操作为：先将指针的位置向后移动一位，再解引用index
//	(*index)++;
//	return max;
//}
//int main()
//{
//	int arr[] = { 1,2,3,23,4,5,6,7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	cout << size << endl;
//	int maxindex;
//	int max = findmax(arr, size, &maxindex);
//	cout << "imax = "<<maxindex<<"  max = "<<max<<endl;
//	cin.get();
//	return 0;
//}
 
//利用指针计算平方
//void square(int* a)
//{
//	*a = (*a) * (*a);
//}
//int main()
//{
//	int a(9);
//	square(&a);
//	cout << a;
//	return 0;
//}

//创建动态分配内存的数组：使用new和delete来动态分配和释放一个整型数组，并用指针填充和输出数组元素
//int* creatarr(int size)
//{
//	int* arr = new int[size];
//	for(int i = 0;i < size;i++)
//	{
//		arr[i] = i * 2;
//	}
//	return arr;
//}
//int main()
//{
//	int size = 5;
//	int* myarr = creatarr(size);
//	for (int j = 0; j < size; j++)
//	{
//		cout << myarr[j] << "  ";
//	}
//	delete[]myarr;
//	cin.get();
//	return 0;
//}

//创建一个学生结构体，通过指针初始化并输出学生结构体
//struct student {
//	string name;
//	string car;
//}s1;
//void iostu(student * s)
//{
//	s->name = "henry";
//	s->car = "mclren";
//	cout << s->name << " has a " << s->car;
//}
//int main()
//{
//	iostu(&s1);
//	return 0;
//}
//}

//指针数组和指针的指针：创建一个指针数组（指向多个字符串的指针），然后再创建一个指向这些指针的指针，遍历并输出每一个字符串
//int main()
//{
//	string str[] = { "i ","am ","henry ",", ","i love ","rachel" };
//	const int size = sizeof(str) / sizeof(str[0]);
//	string* arr[size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = &str[i];
//	}
//	string * arrp = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		cout << *arrp << endl;
//		arrp++;
//	}
//	return 0;
//}

//编写一个函数 `void reverseWords(char* str)`，该函数将一个包含多个单词的字符串中每个单词的顺序反转，但保持单词的顺序不变。
// 例如，`"hello world"` 应该变成 `"olleh dlrow"`。  
//void reverserange(string  & str, int start, int end)
//{
//	while (start < end)
//	{
//		swap(str[start], str[end]);
//		start++;
//		end--;
//	}
//}
//void reversewords(string & str)
//{
//	int length = str.length();
//	int start = 0;
//	for (int i = 0; i <= length; i++)
//	{
//		if (str[i] == ' ' || str[i] == '\0')
//		{
//			int end = i - 1;
//			reverserange(str, start, end);
//			start = i + 1;
//		}
//	}
//}
//int main()
//{
//	string str = "henry has a mclren.";
//	cout << "before change : " << str << endl;
//	reversewords(str);
//	cout << "after change : " << str << endl;
//	return 0;
//}

//编写一个函数 `int* mergeSortedArrays(int* arr1, int size1, int* arr2, int size2)`，将两个有序数组 `arr1` 和 `arr2` 合并成一个新的有序数组，
// 并返回新数组的指针。  ** 提示** ：动态分配内存来存储结果数组。使用两个指针遍历两个数组，比较元素并依次放入结果数组。
//单个数组排序
//void ranksinglearr(int* arr,int size)
//{
//	for (int i = 0; i < size-1; i++)
//	{
//		for (int j = i+1; j <size; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int temp = arr[i];
//				*(arr + i) = *(arr + j);
//				*(arr + j) = temp;
//			}
//		}
//	}
//}
//int* mergesortedarrays(int* arr1, int size1, int* arr2, int size2)
//{
//	int* result = new int[size1 + size2];
//	int i(0), j(0), k(0);
//	while (i < size1 && j < size2)
//	{
//		if (arr1[i] <= arr2[j])
//		{
//			result[k++] = arr1[i++];
//		}
//		else
//		{
//			result[k++] = arr2[j++];
//		}
//	}
//	while (i < size1)
//	{
//		result[k++] = arr1[i++];
//	}
//	while (j < size1)
//	{
//		result[k++] = arr1[j++];
//	}
//	return result;
//}
//int main()
//{	
//	int arr1[] = { 1,2,6,3,5,7,0,9 };
//	int arr2[] = { 5,3,4,7,4,3,4,5,7 };
//	int size1 = sizeof(arr1) / sizeof(arr1[0]);
//	int size2 = sizeof(arr2) / sizeof(arr2[0]);
//	ranksinglearr(arr1, size1);
//	ranksinglearr(arr2, size2);
//	int* mergedarray = mergesortedarrays(arr1, size1,arr2,size2);
//	for (int i = 0; i < (size1 + size2); i++)
//	{
//		cout << mergedarray[i] << " ";
//	}
//	return 0;
//}

//链表反转** 描述** ：编写一个函数 `void reverseList(Node*& head)`，将单链表中的节点顺序反转。使用结构体 `Node` 定义节点。
//** 提示** ：需要遍历链表，逐步反转每个节点的指向关系，最后调整头指针


//动态分配二维数组**
//** 描述** ：编写一个函数 `int** createMatrix(int rows, int cols)`，创建一个 `rows x cols` 大小的二维数组，动态分配内存并初始化所有元素为 0。
//*提示 * *：需要动态分配一个指针数组，每个元素指向另一块内存区域，用来表示二维数组的每一行。
//int* creatmatrix(int rows, int cols)
//{
//	int* matrix = new int[rows,cols];
//	int* pmatrix =  new int [rows];
//
//}
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,0,1,2 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}


