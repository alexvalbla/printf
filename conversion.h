#ifndef CONVERSION
#define CONVERSION


typedef union{
  float f;
  uint32_t i;
} fltcst_t;

typedef union{
  double f;
  uint64_t i;
} dblcst_t;

typedef union{
  long double f;
  __uint128_t i;
} longdblcst_t;

typedef enum {NUMBER, NAN, POS_INF, NEG_INF} fpclass_t;

fpclass_t decomposeDouble(char *s, int32_t *E, uint64_t *m, double x);

fpclass_t decomposeLongDouble(char *s, int32_t *E, uint64_t *m, long double x);

void decimalConversion(int32_t *F, uint64_t *n, int32_t E, uint64_t m);


#endif
