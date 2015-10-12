#include "Dcel.hpp"

//#include "Vertex.hpp"
//#include "HalfEdge.hpp"
//#include "Face.hpp"

namespace Ra {
namespace Core {
namespace Dcel {

inline void Dcel::clear() {
    m_vertex.clear();
    m_halfedge.clear();
    m_face.clear();
}

} // namespace DCEL
} // namespace Core
} // namespace Ra

