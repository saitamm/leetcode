int ft_char_rep(int start, int end, char *s, char c) {
    for (int i = start; i < end; i++) {
        if (s[i] == c) {
            return 1;
        }
    }
    return 0;
}

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) return 0;
    int max_length = 1;
    int l = 0;

    for (int i = 1; i < n; i++) {
        while (ft_char_rep(l, i, s, s[i])) {
            l++;
        }
        if (i - l + 1 > max_length) {
            max_length = i - l + 1;
        }
    }

    return max_length;
}