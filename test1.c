
void fun1() {
  int a = 20;
  int b = 30;
  int i = 0;
  for (i=0; i<30; i++) {
    if (i>a) {
      b += i;
    } else {
      b -= i;
    }
  }
}

void fun2() {
  int x = 0;
#ifdef XX1
  if (x>10) {
#else
  if (x<20) {
#endif
  fun1();
  }
}
