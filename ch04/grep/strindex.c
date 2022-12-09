int strindex(char s[], char t[]) {
  for (int i = 0; s[i] != '\0'; i++) {
    int j = i;
    int k = 0;
    while (t[k] != '\0' && s[j] == t[k]) {
      j++;
      k++;
    }
    if (k > 0 && t[k] == '\0') {
      return i;
    }
  }
  return -1;
}
