char pairs(char a) {
    /* map字符，如果是反括号，映射为对应正括号，如果是正括号，返回0 */
    if (a == '}') return '{';
    if (a == ']') return '[';
    if (a == ')') return '(';
    return 0;
}

bool isValid(char* s) {
    /* 获得输入字符串最大长度n */
    int n = strlen(s);
    /* 如果是奇数一定不会匹配，返回 */
    if (n % 2 == 1) {
        return false;
    /* 定义栈，top初始化为0 */
    int stk[n + 1], top = 0;
    /* 遍历字符串 */
    for (int i = 0; i < n; i++) {
        /* 解析括号，将反括号映射为对应正括号 */
        char ch = pairs(s[i]);
        /* 如果是反括号 */
        if (ch) {
            /* 得到反括号时时空栈，直接返回，如果不是空栈，则判断栈顶是否匹配，如果不匹配，返回失败，如果匹配则对消掉正括号 */
            if (top == 0 || stk[top - 1] != ch) {
                return false;
            }
            top--;
        /* 如果是正括号，直接入栈 */
        } else {
            stk[top++] = s[i];
        }
    }
    return top == 0;
}
