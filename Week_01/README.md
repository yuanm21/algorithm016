#### 旋转数组
先反转整组最后反转两个子组
1 2 3 4 5 6 7
7 6 5 4 3 2 1    reverse(0, len - 1);
5 6 7 1 2 3 4    reverse(0, k - 1); reverse(k, len - 1);
这就不像上面那样需要判断了k是否小于整组长度的1/2。通吃。需要注意的是这两个的整体反转的先后顺序不一样，那么他们反转子组的步长也会不一样。


#### 移动零
思路：双指针，快慢指针

所谓的快慢指针，就是有两个指针，一个指针移动快，一个指针移动慢，其实说指针是不够严谨的，更恰当的应该是索引，因为这个是直接操作数组下标的。

两次遍历：快的下标遍历整个数组长度，当碰到不为0的元素时，拖动慢下标，并将快下标的元素值赋予慢下标的元素，同时拖动慢下标往后移一格，快下标自己也移动；如此往复直至快下标遍历完整个数组；此时数组已经将非0的元素全部移至头部，没有0的元素，不过放心，我们记录了慢下标的位置，从这个位置往后再遍历一次所有赋0即可。

一次遍历：一次遍历，就是把第二次遍历给规避掉了，唯一的区别就是快下标拖动慢下标的条件成立(即快下标元素非0)时，多了一个步骤，就是将慢下标原来的值赋予快下标元素，即他们做了交换，之后再各自移动一格。