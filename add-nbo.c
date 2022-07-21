#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char **argv) {
	
	FILE *f1, *f2;
	f1 = fopen("thousand.bin","r");
	uint32_t s1;
	fread(&s1, sizeof(uint32_t), 1, f1);
	s1 = ntohl(s1);
	fclose(f1);
	
	

	f2 = fopen("five-hundred.bin","r");
	uint32_t s2;
	fread(&s2, sizeof(uint32_t), 1, f2);
	s2 = ntohl(s2);
	fclose(f2);
	
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", s1, s1, s2, s2, s1+s2, s1+s2);

	return 0;
}

