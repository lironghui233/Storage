

//gcc -o ngx_list_main ngx_list_main.c -I ../nginx-1.13.7/src/core/ -I ../nginx-1.13.7/objs/  -I ../nginx-1.13.7/src/os/unix/ -I ../pcre-8.41/ -I ../nginx-1.13.7/src/event/ ../nginx-1.13.7/objs/src/core/ngx_list.o ../nginx-1.13.7/objs/src/core/ngx_string.o ../nginx-1.13.7/objs/src/core/ngx_palloc.o ../nginx-1.13.7/objs/src/os/unix/ngx_alloc.o

#include <stdio.h>
#include <string.h>

#include "ngx_config.h"

#include "ngx_core.h"


#include "ngx_list.h"
#include "ngx_palloc.h"
#include "ngx_string.h"

#define N	10



volatile ngx_cycle_t *ngx_cycle;
 
void ngx_log_error_core(ngx_uint_t level, ngx_log_t *log,
			ngx_err_t err, const char *fmt, ...)
{



}


void print_list(ngx_list_t *l) {
	ngx_list_part_t *p = &(l->part);
	
	while (p) {

		int i = 0;
		for (i = 0;i < p->nelts;i ++) {
			printf("%s\n", (char*)(((ngx_str_t*)p->elts + i)->data));
		}
		p = p->next;
		printf(" -------------------------- \n");
	}

}

int main() {

	ngx_pool_t *pool = ngx_create_pool(1024, NULL);

	ngx_list_t *l = ngx_list_create(pool, N, sizeof(ngx_str_t));

	int i = 0;
	for (i = 0;i < 24;i ++) {

		ngx_str_t *ptr = ngx_list_push(l);
		
		char *buf = ngx_palloc(pool, 32);
		sprintf(buf, "King %d", i+1);

		ptr->len = strlen(buf);
		ptr->data = buf;
	}

	print_list(l);

}


