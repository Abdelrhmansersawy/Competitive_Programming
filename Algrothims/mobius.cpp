const int N = 1e5;
int mobius[N] , sieve[N];
void gen_mobius(){
  for(int i = 1; i < N; i++) {mobius[i] = sieve[i] = 1;}
  sieve[1] = 0;
  for(int i = 2; i * i < N; i++){
    if(sieve[i]){
      for(int j = i; j < N; j += i){
        sieve[j] = 0;
        mobius[j] = (j % (i * i) == 0) ? 0 : -mobius[j];
      }
    }
  }
}
