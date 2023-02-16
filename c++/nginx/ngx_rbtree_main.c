

#include <stdio.h>
#include <string.h>

#include "ngx_config.h"

#include "ngx_core.h"


#include "ngx_list.h"
#include "ngx_palloc.h"
#include "ngx_string.h"
#include "ngx_rbtree.h"


volatile ngx_cycle_t *ngx_cycle;
 
void ngx_log_error_core(ngx_uint_t level, ngx_log_t *log,
			ngx_err_t err, const char *fmt, ...)
{



}


int main() {

	ngx_rbtree_t rbtree;
	ngx_rbtree_node_t sentinel;
	
	ngx_rbtree_init(&rbtree, &sentinel, ngx_str_rbtree_insert_value);

	ngx_str_node_t strnode[10];
	ngx_str_set(&strnode[0].str, "he");
	ngx_str_set(&strnode[1].str, "jon");
	ngx_str_set(&strnode[2].str, "Issac");
	ngx_str_set(&strnode[3].str, "tursom");
	ngx_str_set(&strnode[4].str, "will");

	ngx_str_set(&strnode[5].str, "birate");
	ngx_str_set(&strnode[6].str, "ren");
	ngx_str_set(&strnode[7].str, "stephen");
	ngx_str_set(&strnode[8].str, "ultimate");
	ngx_str_set(&strnode[9].str, "he");

	int i = 0;
	for (i = 0;i < 10;i ++) {
		strnode[i].node.key = i;
		ngx_rbtree_insert(&rbtree, &strnode[i].node);
	}

	ngx_str_t str = ngx_string("will");
	
	ngx_str_node_t *node = ngx_str_rbtree_lookup(&rbtree, &str, 0);
	if (node != NULL) {
		printf(" Exit\n");
	}
	

}




