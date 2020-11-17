# 字符串匹配暴力法代码示例

```
int forceSearch(string text, string pattern) {
    int len_txt = text.length();
    int len_pat = pattern.length();

    for (int i = 0; i <= len_txt - len_pat; i++) {
        int j = 0;
        for (j = 0; j < len_pat; j++) {
            if (text[i + j] != pattern[j]) break;
        }
        if (j == len_pat) {
            return i;
        }
    }
    return -1;
}
```
# 字符串匹配的KMP算法
http://www.ruanyifeng.com/blog/2013/05/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm.html
