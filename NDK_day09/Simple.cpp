#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


/*void main(){

	printf("Hello World");
	getchar();
}*/

/*// �����ַ�������2�ַ�ʽ
void main(){

	// ��һ�֣��ַ�������
	char str[] = {'N','o','v','a','t','e','\0'};

	str[2] = 'y';

	// �ַ���ռλ����%s���ַ�����β���� '\0'
	printf("%s\n" , str); // Novate

	// �ڶ��֣�char* str �� char *strһ�������߱Ƚϳ���
	char *str1 = "Novate";  // char *str1 �൱���ַ��������׵�ַ
	str1[2] = 'y';
	printf("%s" , str1);

	getchar();
}*/

/*
// ��ȡ�ַ�������
int strlen_(char *str){

	// ����2�����ϵĶ�ȡ�ַ����ж�ĩβ�Ƿ��� '\0'
	// while (*str)����ʾ���ϵĻ�ȡ�ַ�
	int len = 0;
	while (*str != '\0'){  // *str������ȡֵ����һ��ȡN���ж��Ƿ�Ϊ0�����Ǿͼ�������ȡֵ��֪��ȡ��'\0'
		len++;
		str++;
	}
	return len;
}

// �ַ������Ȼ�ȡ
void main(){
	char *name = "Novate is";
	// char str[] = { 'N', 'o', 'v', 'a', 't', 'e', '\0' };

	// ֱ����ϵͳ�ķ�����strlen(name)
	// printf("name length is %d", strlen(name));   // name length is 6

	// �Լ�дһ��������ȡ�ַ�������

	// ����1��ֱ�Ӽ��㣺 str�ܴ�С/һ�����ȵĴ�С��������Novate�ܴ�С/ÿ���ַ��Ĵ�С�����ֿ��ܲ���ʹ
	// printf("length is %d\n", sizeof(str)/sizeof(char));  // length is 7

	// ����2�����ϵĶ�ȡ�ַ����ж�ĩβ�Ƿ��� '\0'
	printf("length is %d\n", strlen_(name));  // length is 9
	getchar();
	}*/

/*// �ַ�����ת��
void main(){

	// ������Ҫ�ѣ�char *num = "1" תΪ int��float��double���ͣ������ת���أ�
	//char *num_str = "12";
	//char *num_str1 = "12xxx"; 
	//char *num_str2 = "xxx12xxx";

	// char *num�ַ��� תΪ int���������ת�����ͻ��ӡ���0�������ᱨ��Ҳ�����׳��쳣
	// ���磺num_str��ӡ12 ��num_str1��ӡ12 �� num_str2��ӡ0������ת��������ת���ͻ��ӡ���0
	// int number = atoi(num_str);

	// תΪ float���ͣ�Ĭ�Ϻ����6λС��
	// �������ת�������ص���Ĭ��ֵ��0.000000
	//char *num_str = "12.5";
	// float number = atof(num_str);


	char *num_str = "12.5";
	// ����2��������ָ�룬���Դ���NULL
	double number = strtod(num_str , NULL);

	printf("number is %lf" , number);  // number is 12.500000
	getchar();
}*/

/*// �ַ����Ƚ�
void main(){

	//char *str1 = "Novate";
	//char *str2 = "novate";

	// �ַ����Ĵ��ڡ�С�ڡ�����

	// ���ִ�Сд�������Сд��һ�����Ͳ���ȣ���������
	//int rc = strcmp(str1 , str2);  

	// �����ִ�Сд��ֻҪһ������� 
	// c����strcmpi��c++����_strcmpi��android��ndk���� strcasecmp
	// int rc = _strcmpi(str1 , str2);

	char *str1 = "Novate is";
	char *str2 = "novate";

	// �Ƚ�ǰ 5���ַ�������3��ʾ�Ƚ��ַ�����ǰ�����Ƿ���ȣ����ִ�Сд
	// int rc = strncmp(str1 , str2 , 5);

	// �����ִ�Сд
	int rc = strnicmp(str1, str2, 5);
	// �Ƚ�ǰ�����ַ�
	if (rc = 0){
		printf("�����ַ������");
	}else{
		printf("�����");  
	}
	getchar();
}*/

/*// �ַ������ҡ�����
void main(){

	char *str = "name is Novate";
	char *substr = "is";

	// ���ص����ַ�����һ�γ��ֵ�λ�ã���ʵ����ͷָ��
	// Ҳ����˵��substr��str�в��ҵ�Novate��λ�ú󣬾�ָ��ŵ�N��λ�ã������λ�þ���ͷָ��
	char *pos = strstr(str , substr);

	// �ַ���һ�γ��ֵ�λ�ã���ָ�����
	//int position = pos - str;
	// printf("��һ�γ��ֵ�λ�ã�%d\n", position);  // 5


	// �ж�һ���ַ������Ƿ������һ���ַ���
	// ֻ��Ҫ�ж� pos�Ƿ�Ϊ�վͿ��ԣ������Ϊ�գ����ǰ�����������ǲ�����
	if (pos){
		printf("%s", "����");
	}else{
		printf("%s", "������");
	}
	
	getchar();
}*/
/*// ����
void main(){

	char *str = "novate";

	char cpy[20];
	// �� str�ַ��������� cpy��
	char *str_cpy = strcpy(cpy,str);
	printf("%s", cpy);  // novate
	getchar();
}*/

/*// ƴ�ӡ���ȡ����Сдת��
void main(){
	char *str = "novate";
	char *str1 = " is";

	// ��ȡ �ַ���str����
	int len = strlen(str);
	// ����20���ڴ�ռ�
	char cpy[20];

	// �� str������ cpy��
	strcpy(cpy,str);

	// �ַ���ƴ�ӣ��� str1ƴ�ӵ� cpy���
	strcat(cpy,str1);
	printf("%s", cpy);  // novate is

	getchar();
}*/

/*// ƴ��
char* substr(char *str , int start , int end){

	// 1. ����һ���ַ��������ڴ洢���ǵ�����
	// ����Ҫ���ַ����ĳ���
	// char sub[end - start];  // ���ֲ���
	int len = end - start;
	char *sub = (char*)malloc(len * sizeof(char)+1);  // ����ǵ�+1����Android Studio�� NDK��һ�����þ�̬������洢���� char sub[len]

	// 2. Ȼ�������ֵ
	str += start; // ָ��++
	int i = 0;
	for (; i < len; i++){
		sub[i] = *str;  // *str:��ʾȡֵ
		str++;  // ָ������Ų��һλ
	}

	// 3. ����ַ�����β������ print�޷��жϽ�β
	sub[len] = '\0';
	return sub;
}
// �ַ�����ȡ
void main(){

	// �����ַ�������
	char *str = "Novate is";

	// ����Ҫ��ȡ��3��λ�õ���5��λ�ã�3 - 5

	// �Լ�дһ�������������ַ�����ȡ
	char *sub = substr(str , 3 , 5);

	// ��ӡ������
	printf("%s" , sub);  // at

	// �� malloc ����һ��Ҫ free �ͷ��ڴ棬�����������������в�������ô������Ϊ���ǵ��� �ϱߵ�substr()���������ǵ������Ļ����Ǳ���д�õģ�
	// ���ǲ�������ͷű��˵��ڴ棬��������������������� �ϱߵ�substr()�������Լ�д�ģ��;���Ҫ�Լ�������ڴ�
	free(sub);
	getchar();
}*/

// �Լ�����һ��lower���������ڰ��ַ�תΪСд
void lower(char *dest , char *source){
	// dest�����ڴ�Ž������С�Լ�ָ����
	// source����Ҫת�����ַ�����
	// ���� source�����ת��

	while (*source != '\0'){  // *source��*����ȡֵ���ж�ֻҪû�е���β���Ͳ��ϵ�ȡֵ

		// ��ȡ��ǰ�ַ�
		char ch = *source;
		// �� chתΪСд��ת�긳ֵ��dest����˼������ *dest����
		*dest = tolower(ch); 

		// ����ָ��++��������һ��
		source++;
		dest++;
	}

	// ����ַ�����β
	*dest = '\0';
}
// �ַ�����Сдת��
void main(){

	// �����ַ�ָ�����
	char *name = "noVate";
	// �����ڴ�ռ�
	char dest[20];
	lower(dest , name);

	printf("%s" , dest);  // novate
	getchar();
}