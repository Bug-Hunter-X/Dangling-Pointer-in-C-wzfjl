int main() {int x = 10; int *ptr = &x; *ptr = 20; free(ptr); return 0;}