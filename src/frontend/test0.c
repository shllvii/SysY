int n, a[10];

int main() {
  n = getint();
  if (n > 10) return 1;
  int i = 0, s = i;
  while (i < n) {
    a[i] = getint();
    s = s + a[i];
    i = i + 1;
  }
  putint(s);
  return 0;
}
