#ifndef KECCAK_FIPS202_H
#define KECCAK_FIPS202_H
#ifndef __STDC_WANT_LIB_EXT1__
# define memset_s(W,WL,V,OL) memset(W,V,OL)
#endif
#include <stdint.h>
#include <stdlib.h>

#define decshake(bits) \
  int shake##bits(uint8_t*, size_t, const uint8_t*, size_t);

#define decsha3(bits) \
  int sha3_##bits(uint8_t*, size_t, const uint8_t*, size_t);

#define deckeccak(bits) \
  int keccak##bits(uint8_t*, size_t, const uint8_t*, size_t);

#ifdef __cplusplus
extern "C" {
#endif

decshake(128)
decshake(256)
decsha3(224)
decsha3(256)
decsha3(384)
decsha3(512)
deckeccak(256)

#ifdef __cplusplus
}
#endif

#endif
