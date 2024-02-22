string caesarCipher(string s, int k) {
    int n = s.size();
    
    for (int i = 0; i <= n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = ((s[i] - 'a' + k) % 26) + 'a';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = ((s[i] - 'A' + k) % 26) + 'A';
        }
    }
    
    return s;
}
