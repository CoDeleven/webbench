# webbench
本项目主要用来学习Linux环境下的C编程，主要用于测试负载能力。

项目出自于[《EZLippi-WebBench》](https://github.com/EZLippi/WebBench)

由于初学原因，我将整个项目划分为以下几个阶段：
1. 学习 命令行参数 的编写 （可以加载不同的选项，打印出字符串来）
2. 学习 如何发送一个HTTP请求（可以发送一个HTTP请求，并接受到响应）
3. 学习 如何构建/使用代理（使用自己的VPN，访问google并接受到响应）
4. 学习 如何创建多个线程并发执行某一个函数
5. 学习 Makefile 开始构建项目
5. 完成一个基础版的压力测试工具
6. 开始在基础版上添加其他选项

需要实现的选项有以下几种(参考EZLippi大佬的)：

|选项   | 短参        | 长参数           | 作用   |
|------ | ------------- |:-------------:| -----:|
| [ ] |-f     |--force                |不需要等待服务器响应               | 
| [ ] |-r     |--reload               |发送重新加载请求                   |
| [ ] |-t     |--time <sec>           |运行多长时间，单位：秒"            |
| [ ] |-p     |--proxy <server:port>  |使用代理服务器来发送请求	    |
| [ ] |-c     |--clients <n>          |创建多少个客户端，默认1个"         |
| [ ] |-9     |--http09               |使用 HTTP/0.9                      |
| [ ] |-1     |--http10               |使用 HTTP/1.0 协议                 |
| [ ] |-2     |--http11               |使用 HTTP/1.1 协议                 |
| [ ] |       |--get                  |使用 GET请求方法                   |
| [ ] |       |--head                 |使用 HEAD请求方法                    |
| [ ] |       |--options              |使用 OPTIONS请求方法               |
| [ ] |       |--trace                |使用 TRACE请求方法                 |
| [ ] |-?/-h  |--help                 |打印帮助信息                       |
| [ ] |-V     |--version              |显示版本号                         |
