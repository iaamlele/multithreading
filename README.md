# multithreading

## example1.c
使用线程完成分别计算2500个数字之和，使用结构体保存参数，无返回值
## example2.c
使用线程完成分别计算2500个数字之和，使用结构体保存参数和返回值
## example3.c
mutex锁机制：未上锁，线程读写混乱
## example3.c
mutex锁机制：上锁，考虑运行时间，锁的位置决定了运行效率。此例不如直接创建2个函数，两个线程分开执行，就不用考虑锁机制。
