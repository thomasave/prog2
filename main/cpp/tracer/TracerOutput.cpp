/**
 * @file
 * Implementation for class TrackerOutput.
 * @author J.Broeckhove  CoMP/UA
 */

#include "tracer/TracerOutput.h"
#include <sstream>
#include <string>

namespace UA_CoMP {
namespace Misc {

using std::ostringstream;

///
bool TracerOutput::g_make_output = true;
///
unsigned int TracerOutput::g_indent = 0;
///
LogSeverity TracerOutput::g_severity = INFO;

///
void TracerOutput::log(string const& msg, LogSeverity severity)
{
	if (is_output_on()) {
		ostringstream os;
		for (unsigned int i = 0; i < g_indent; ++i) {
			os << "     ";
		}
		os << msg;
		LOG(severity) << os.str();
	}
}

} // end of namespace Misc
} // end of namespace UA_CoMP