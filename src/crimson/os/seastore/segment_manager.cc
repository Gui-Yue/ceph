#include "crimson/os/seastore/segment_manager.h"

namespace crimson::os::seastore {

  std::ostream& operator<<(std::ostream &out, Segment::segment_state_t s)
  {
    using state_t = Segment::segment_state_t;
    switch (s) {
      case state_t::EMPTY:
        return out << "EMPTY";
      case state_t::OPEN:
        return out << "OPEN";
      case state_t::CLOSED:
        return out << "CLOSED";
      default:
        return out << "INVALID_SEGMENT_STATE!";
    }
  }
}
