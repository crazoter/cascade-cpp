#ifndef BLOCK_H
#define BLOCK_H

#include <memory>
#include <stddef.h>
#include <string>

namespace Cascade {

class Iteration;

class Block
{
public:
    Block(Iteration& iteration, unsigned block_nr, size_t start_bit_nr, size_t end_bit_nr);
    ~Block();
    std::string get_name(void) const;
    int compute_current_parity() const;
private:
    Iteration& iteration;
    unsigned block_nr;
    size_t start_bit_nr;
    size_t end_bit_nr;
};

typedef std::shared_ptr<Block> BlockPtr;

} /* namespace Cascade */

#endif /* ifndef BLOCK_H */
