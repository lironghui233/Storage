//
//  Hello World 服务端
//  绑定一个REP套接字至tcp://*:5555
//  从客户端接收Hello，并应答World
//

#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
//gcc -o hwserver hwserver.c -lzmq
int main (void)
{
    //  Socket to talk to clients
    void *context = zmq_ctx_new ();
    //  与客户端通信的套接字
    void *responder = zmq_socket (context, ZMQ_REP);
    int rc = zmq_bind (responder, "tcp://*:5555");  // 服务器要做绑定
    assert (rc == 0);

    while (1) {
        //  等待客户端请求
        char buffer [10];
        int size = zmq_recv (responder, buffer, 10, 0);
        buffer[size] = '\0';
        printf ("收到 %s\n", buffer);
        sleep (1);          //  Do some 'work'
        //  返回应答
        zmq_send (responder, "World", 5, 0);
    }
    return 0;
}