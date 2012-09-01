/*
 * (C) 2003-2012 Anope Team
 * Contact us at team@anope.org
 *
 * Please read COPYING and README for further details.
 */

#include "../../httpd.h"

namespace WebCPanel
{

class Register : public WebPanelPage
{
 public:
	Register(const Anope::string &u) : WebPanelPage(u) { }

	void OnRequest(HTTPProvider *, const Anope::string &, HTTPClient *, HTTPMessage &, HTTPReply &) anope_override;
};

}

