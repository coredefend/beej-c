#include <stdio.h>

int my_strlen(char* s);
int my_strcpy(char* src, char* dst);

int main() {
	// a pointer to the first character in a string
	char* s = "hello\n";
	printf("%s\n", s);

	// mutable
	char xc[] = "hello\n";
	xc[0] = 'H';
	printf("%s\n", xc);

	// you have 2 options to store a string in memory
	// 1. store raw bytes and a value to indicate the length
	// 2. store raw bytes and a value to indicate the end
	// C chose option 2 to optimize for space
	printf("length of 'xc' is: %d\n", my_strlen(xc));
	
	char* s3 = "jovon";
	char s4[10];
	int result = my_strcpy(s3, s4);
	if(result == -1) {
		printf("error copying s3 to s4\n");
	} else {
		printf("s4: %s\n", s4);
	}
	printf("length of 's3' is: %d\n", my_strlen(s3));
	printf("length of 's4' is: %d\n", my_strlen(s4));
	for(int i = 0; i < my_strlen(s4); i++) {
		printf("%c\n", s4[i]);
	}
}

int my_strlen(char* s) {
	int len = 0;
	while(s[len] != '\0') {
		len++;
	}
	return len;
}

int my_strcpy(char* src, char* dst) {
	int src_len = my_strlen(src);
	int dst_len = my_strlen(dst);
	// dst is not large enough to hold src
	if (dst_len < src_len) {
		return -1;
	}
	for(int i = 0; i < src_len; i++) {
		dst[i] = src[i];
	}
	return 0;
}
