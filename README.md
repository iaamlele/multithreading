# multithreading

## example1.c
使用线程完成分别计算2500个数字之和，使用结构体保存参数，无返回值
## example2.c
使用线程完成分别计算2500个数字之和，使用结构体保存参数和返回值
## example3.c
mutex锁机制：未上锁，线程读写混乱
## example4.c
mutex锁机制：上锁，考虑运行时间，锁的位置决定了运行效率。此例不如直接创建2个函数，两个线程分开执行，就不用考虑锁机制。
## example5.c
有False sharing（因次数不一致，为了能同步，导致的时间延误）
## example6.c
无False sharing， 有比无更慢
## example7.c
改进False sharing,扩大results[]数组大小，因为缓存内容小，同步覆盖时不会覆盖完RAM,因此不会出现同步检测和延误。
