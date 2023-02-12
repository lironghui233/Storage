
#include <string.h>
#include <stdio.h>
#include <openssl/pem.h> 
#include <openssl/evp.h> 
  
  int mycb(char *buf,int num,int a,void *k) 
  { 

      char *key = (char*)k;
   if(key) 
    strcpy(buf,key); 
   else 
   { 
    if(a==1) 
     printf("请输入加密密码:\n"); 
    else 
     printf("请输入解密密码:\n"); 
    scanf("%s",buf); 
   } 
   return strlen(buf); 
  } 
  
  int main() 
  { 
   int    ret; 
   BIO    *out,*in; 
   RSA    *r,*read; 
   int    i,bits=512; 
   unsigned long e=RSA_3; 
   BIGNUM   *bne; 
   const EVP_CIPHER *enc=NULL; 
   
   bne=BN_new(); 
   ret=BN_set_word(bne,e); 
   r=RSA_new(); 
   ret=RSA_generate_key_ex(r,bits,bne,NULL); 
   if(ret!=1) 
   { 
    printf("RSA_generate_key_ex err!\n"); 
    return -1; 
   } 
   enc=EVP_des_ede3_ofb(); 
   out=BIO_new_file("pri.pem","w"); 
  // ret=PEM_write_bio_RSAPrivateKey(out,r,enc,NULL,0,mycb,"123456"); 
  // ret=PEM_write_bio_RSAPrivateKey(out,r,enc,NULL,0,NULL,"123456"); 
   ret=PEM_write_bio_RSAPrivateKey(out,r,enc,NULL,0,mycb,NULL); 
   if(ret!=1) 
   { 
    RSA_free(r); 
    BIO_free(out); 
    return -1; 
   } 
   BIO_flush(out); 
   BIO_free(out); 
   out=BIO_new_file("pub.pem","w"); 
   ret=PEM_write_bio_RSAPublicKey(out,r); 
   if(ret!=1) 
   { 
    RSA_free(r); 
    BIO_free(out); 
    return -1; 
   } 
   BIO_flush(out); 
   BIO_free(out); 
   OpenSSL_add_all_algorithms(); 
   in=BIO_new_file("pri.pem","rb"); 
   read=RSA_new(); 
  // read=PEM_read_bio_RSAPublicKey(in,&read,NULL,NULL); 
  // read=PEM_read_bio_RSAPrivateKey(in,&read,mycb,"123456"); 
  // read=PEM_read_bio_RSAPrivateKey(in,&read,NULL,"123456"); 
   read=PEM_read_bio_RSAPrivateKey(in,&read,mycb,NULL); 
   if(read->d!=NULL) 
    printf("test ok!\n"); 
   else 
    printf("err!\n"); 
    
   RSA_free(read); 
   BIO_free(in); 
   return 0; 
  } 
