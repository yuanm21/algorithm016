学习笔记
本周学习的内容主要是递归。

递归知识结构：
递归
 |-泛型递归(普通) 最简单的函数调用自己，代码模板是：terminator-process-dilldown-reverse state,典型的题目是爬楼梯和括号生成
 |-分治 大问题分解为小问题，每个小问题解决后，然后合并，代码模板是：terminator-proecss-dilldown-splitsubproblem-mergetobigproblem-revers,典型
   是pow(x,n)
 |-回溯 满足条件结束后或者递归路径走不通时，需要回撤中间状态(是递归函数的某个参数)，这个回撤的动作就是回溯。代码模板跟泛型递归一样，只不过最后一步
   reverse state是一定要做的。而泛型不必。典型的题目就是子集，另外还有组合，需要注意的是组合是需要剪枝的。