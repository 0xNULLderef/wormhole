#pragma once

#include <wormhole_api.h>

class c_plugin : public api::i_wormhole_plugin {
public:
	c_wormhole *wormhole;

	virtual bool load(c_wormhole *wormhole);
	virtual void unload();
};