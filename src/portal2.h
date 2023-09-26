#pragma once

#ifdef _WIN32
#	define offset(name, win, linux) inline int name = win
#else
#	define offset(name, win, linux) inline int name = linux
#endif

#ifdef _WIN32
#	define signature(name, win, linux) inline const char *name = win
#else
#	define signature(name, win, linux) inline const char *name = linux
#endif

#ifdef _WIN32
#	define symbol(name, win, linux) inline const char *name = win
#else
#	define symbol(name, win, linux) inline const char *name = linux
#endif

namespace offsets {
	namespace i_cvar {
		offset(register_con_command, 9, 9);
		offset(unregister_con_command, 10, 10);
		offset(find_command_base, 13, 13);
		offset(cmd_list, 48, 48);
	}  // namespace i_cvar
}  // namespace offsets

namespace signatures {

}

namespace symbols {
	namespace i_console {
		symbol(msg, "Msg", "Msg");
		symbol(color_msg, "?ConColorMsg@@YAXABVColor@@PBDZZ", "_Z11ConColorMsgRK5ColorPKcz");
		symbol(warning, "Warning", "Warning");
		symbol(dev_msg, "?DevMsg@@YAXPBDZZ", "_Z6DevMsgPKcz");
		symbol(dev_warning, "?DevWarning@@YAXPBDZZ", "_Z10DevWarningPKcz");
	}  // namespace i_console
}  // namespace sym