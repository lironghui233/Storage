

#include <string.h>
#include <openssl/comp.h>

int main() {

    COMP_CTX *ctx;
    int len, olen = 100, ilen = 50, i, total = 0;

    unsigned char in[50], out[100];
    unsigned char expend[200];

    ctx = COMP_CTX_new(COMP_zlib());

    for (i = 0;i < 50;i ++) {
        memset(&in[i], i, 1);
    }

    total = COMP_compress_block(ctx, out, olen, in, 50);
    
    for (i = 0;i < 100;i ++) {
        printf("%4d", out[i]);
    }
    printf("\n\n\n\n\n");
    
    len = COMP_expand_block(ctx, expend, 200, out, total);

    for (i = 0;i < 200;i ++) {
        printf("%4d", expend[i]);
    }
    printf("\n");

    COMP_CTX_free(ctx);

    return 0;

}

