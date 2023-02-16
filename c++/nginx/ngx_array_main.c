

// gcc -o ngx_array_main ngx_array_main.c -I ../nginx-1.13.7/src/core/ -I ../nginx-1.13.7/objs/  -I ../nginx-1.13.7/src/os/unix/ -I ../pcre-8.41/ -I ../nginx-1.13.7/src/event/ ../nginx-1.13.7/objs/src/core/ngx_list.o ../nginx-1.13.7/objs/src/core/ngx_string.o ../nginx-1.13.7/objs/src/core/ngx_palloc.o ../nginx-1.13.7/objs/src/os/unix/ngx_alloc.o ../nginx-1.13.7/objs/src/core/ngx_array.o



#include <stdio.h>
#include <string.h>

#include "ngx_config.h"

#include "ngx_core.h"


#include "ngx_list.h"
#include "ngx_palloc.h"
#include "ngx_string.h"



#define N		10

typedef struct _key {
	int id;
	char name[32];
} Key;

volatile ngx_cycle_t *ngx_cycle;
 
void ngx_log_error_core(ngx_uint_t level, ngx_log_t *log,
			ngx_err_t err, const char *fmt, ...)
{



}



void print_array(ngx_array_t *array) {

	Key *key = array->elts;

	int i = 0;
	for (i = 0;i < array->nelts;i ++) {
		printf("%s .\n", key[i].name);
	}

}

int main() {

	ngx_pool_t *pool = ngx_create_pool(1024, NULL);

	ngx_array_t *array = ngx_array_create(pool, N, sizeof(Key));

	int i = 0;
	Key *key = NULL;
	for (i = 0;i < 25;i ++) {

		key = ngx_array_push(array);
		key->id = i+1;
		sprintf(key->name, "King %d", key->id);
		
	}

	key = ngx_array_push_n(array, 10);
	for (i = 0;i < 10;i ++) {
		key[i].id = 25+i+1;
		sprintf(key[i].name, "King %d", key[i].id);
	}

	print_array(array);

}



