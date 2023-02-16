

#include <stdio.h>
#include <string.h>

#include "ngx_config.h"

#include "ngx_core.h"


#include "ngx_list.h"
#include "ngx_palloc.h"
#include "ngx_string.h"


// ngx_create_pool
// ngx_palloc

typedef struct _key {
	int id;
	char name[32];
} Key;


volatile ngx_cycle_t *ngx_cycle;
 
void ngx_log_error_core(ngx_uint_t level, ngx_log_t *log,
			ngx_err_t err, const char *fmt, ...)
{



}


void print_pool(ngx_pool_t *pool) {

	ngx_pool_t *pool_head = pool;

	while (pool) {

		printf("unused : %ld\n", pool->d.end - pool->d.last);

		pool = pool->d.next;
		printf(" ----------------- \n");

	}

}

int main() {

	ngx_pool_t *pool = ngx_create_pool(1024, NULL);

	Key *key = ngx_palloc(pool, sizeof(Key));
	key->id = 10;
	sprintf(key->name, "king %d", key->id);

	print_pool(pool);
	
	
	char *ptr = ngx_palloc(pool, 990);
	ptr[989] = 'a';

	print_pool(pool);

	ngx_destroy_pool(pool);
}



