#ifndef RANDOM_H
#define RANDOM_H

#include <stdint.h>

namespace Cascade {

void set_random_uint64_seed(uint64_t seed);
uint64_t random_uint64();
int random_bit_nr(int start_bit_nr, int end_bit_nr);

} /* namespace Cascade */

#endif /* ifndef RANDOM_H */
