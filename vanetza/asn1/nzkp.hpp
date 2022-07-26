#ifndef NZKP_HPP_WXYNEKFN
#define NZKP_HPP_WXYNEKFN

#include <vanetza/asn1/asn1c_conversion.hpp>
#include <vanetza/asn1/asn1c_wrapper.hpp>
#include <vanetza/asn1/its/MisbehaviorReportNZKP.h>

namespace vanetza
{
namespace asn1
{

class Nzkp : public asn1c_per_wrapper<MisbehaviorReportNZKP_t>
{
public:
    using wrapper = asn1c_per_wrapper<MisbehaviorReportNZKP_t>;
    Nzkp() : wrapper(asn_DEF_MisbehaviorReportNZKP) {}
};

} // namespace asn1
} // namespace vanetza

#endif /* NZKP_HPP_WXYNEKFN */

