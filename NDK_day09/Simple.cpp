#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


/*void main(){

	printf("Hello World");
	getchar();
}*/

/*// 定义字符串：有2种方式
void main(){

	// 第一种：字符串数组
	char str[] = {'N','o','v','a','t','e','\0'};

	str[2] = 'y';

	// 字符串占位符：%s，字符串结尾是以 '\0'
	printf("%s\n" , str); // Novate

	// 第二种：char* str 与 char *str一样，后者比较常用
	char *str1 = "Novate";  // char *str1 相当于字符串数组首地址
	str1[2] = 'y';
	printf("%s" , str1);

	getchar();
}*/

/*
// 读取字符串长度
int strlen_(char *str){

	// 方法2：不断的读取字符，判断末尾是否是 '\0'
	// while (*str)：表示不断的获取字符
	int len = 0;
	while (*str != '\0'){  // *str：代表取值，第一次取N，判断是否为0，不是就继续向后边取值，知道取到'\0'
		len++;
		str++;
	}
	return len;
}

// 字符串长度获取
void main(){
	char *name = "Novate is";
	// char str[] = { 'N', 'o', 'v', 'a', 't', 'e', '\0' };

	// 直接用系统的方法：strlen(name)
	// printf("name length is %d", strlen(name));   // name length is 6

	// 自己写一个方法读取字符串长度

	// 方法1：直接计算： str总大小/一个长度的大小，即就是Novate总大小/每个字符的大小，这种可能不好使
	// printf("length is %d\n", sizeof(str)/sizeof(char));  // length is 7

	// 方法2：不断的读取字符，判断末尾是否是 '\0'
	printf("length is %d\n", strlen_(name));  // length is 9
	getchar();
	}*/

/*// 字符串的转换
void main(){

	// 比如需要把：char *num = "1" 转为 int、float、double类型，该如何转换呢？
	//char *num_str = "12";
	//char *num_str1 = "12xxx"; 
	//char *num_str2 = "xxx12xxx";

	// char *num字符串 转为 int：如果不能转换，就会打印输出0，它不会报错也不会抛出异常
	// 比如：num_str打印12 ；num_str1打印12 ； num_str2打印0，不能转换，不能转换就会打印输出0
	// int number = atoi(num_str);

	// 转为 float类型：默认后边是6位小数
	// 如果不能转换，返回的是默认值：0.000000
	//char *num_str = "12.5";
	// float number = atof(num_str);


	char *num_str = "12.5";
	// 参数2：结束的指针，可以传递NULL
	double number = strtod(num_str , NULL);

	printf("number is %lf" , number);  // number is 12.500000
	getchar();
}*/

/*// 字符串比较
void main(){

	//char *str1 = "Novate";
	//char *str2 = "novate";

	// 字符串的大于、小于、等于

	// 区分大小写：如果大小写不一样，就不相等，否则就相等
	//int rc = strcmp(str1 , str2);  

	// 不区分大小写，只要一样就相等 
	// c中用strcmpi，c++中用_strcmpi，android的ndk中用 strcasecmp
	// int rc = _strcmpi(str1 , str2);

	char *str1 = "Novate is";
	char *str2 = "novate";

	// 比较前 5个字符，参数3表示比较字符串的前几个是否相等，区分大小写
	// int rc = strncmp(str1 , str2 , 5);

	// 不区分大小写
	int rc = strnicmp(str1, str2, 5);
	// 比较前几个字符
	if (rc = 0){
		printf("两个字符串相等");
	}else{
		printf("不相等");  
	}
	getchar();
}*/

/*// 字符串查找、包含
void main(){

	char *str = "name is Novate";
	char *substr = "is";

	// 返回的是字符串第一次出现的位置，其实就是头指针
	// 也就是说：substr在str中查找到Novate的位置后，就指针放到N的位置，而这个位置就是头指针
	char *pos = strstr(str , substr);

	// 字符第一次出现的位置：用指针相减
	//int position = pos - str;
	// printf("第一次出现的位置：%d\n", position);  // 5


	// 判断一个字符串中是否包含另一个字符串
	// 只需要判断 pos是否为空就可以，如果不为空，就是包含；否则就是不包含
	if (pos){
		printf("%s", "包含");
	}else{
		printf("%s", "不包含");
	}
	
	getchar();
}*/
/*// 拷贝
void main(){

	char *str = "novate";

	char cpy[20];
	// 把 str字符串拷贝到 cpy中
	char *str_cpy = strcpy(cpy,str);
	printf("%s", cpy);  // novate
	getchar();
}*/

/*// 拼接、截取、大小写转换
void main(){
	char *str = "novate";
	char *str1 = " is";

	// 获取 字符串str长度
	int len = strlen(str);
	// 定义20个内存空间
	char cpy[20];

	// 把 str拷贝到 cpy中
	strcpy(cpy,str);

	// 字符串拼接：把 str1拼接到 cpy后边
	strcat(cpy,str1);
	printf("%s", cpy);  // novate is

	getchar();
}*/

/*// 拼接
char* substr(char *str , int start , int end){

	// 1. 开辟一个字符串，用于存储我们的数据
	// 所需要的字符串的长度
	// char sub[end - start];  // 这种不行
	int len = end - start;
	char *sub = (char*)malloc(len * sizeof(char)+1);  // 这里记得+1，在Android Studio的 NDK中一般会采用静态的数组存储，如 char sub[len]

	// 2. 然后遍历赋值
	str += start; // 指针++
	int i = 0;
	for (; i < len; i++){
		sub[i] = *str;  // *str:表示取值
		str++;  // 指针往后挪动一位
	}

	// 3. 标记字符串结尾，否则 print无法判断结尾
	sub[len] = '\0';
	return sub;
}
// 字符串截取
void main(){

	// 定义字符串变量
	char *str = "Novate is";

	// 假设要截取第3个位置到第5个位置：3 - 5

	// 自己写一个方法：用于字符串截取
	char *sub = substr(str , 3 , 5);

	// 打印输出结果
	printf("%s" , sub);  // at

	// 用 malloc ，就一定要 free 释放内存，但是真正开发过程中并不会这么做，因为我们调用 上边的substr()方法可能是第三方的或者是别人写好的，
	// 我们不能随便释放别人的内存，所以针对于这种情况，如果 上边的substr()方法是自己写的，就尽量要自己处理好内存
	free(sub);
	getchar();
}*/

// 自己定义一个lower方法：用于把字符转为小写
void lower(char *dest , char *source){
	// dest：用于存放结果，大小自己指定；
	// source：需要转换的字符串；
	// 遍历 source，逐个转换

	while (*source != '\0'){  // *source：*代表取值，判断只要没有到结尾，就不断的取值

		// 获取当前字符
		char ch = *source;
		// 把 ch转为小写，转完赋值给dest，意思就是用 *dest接收
		*dest = tolower(ch); 

		// 接着指针++，遍历下一个
		source++;
		dest++;
	}

	// 标记字符串结尾
	*dest = '\0';
}
// 字符串大小写转换
void main(){

	// 定义字符指针变量
	char *name = "noVate";
	// 开辟内存空间
	char dest[20];
	lower(dest , name);

	printf("%s" , dest);  // novate
	getchar();
}