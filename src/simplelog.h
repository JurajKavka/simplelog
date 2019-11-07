/**
 * Debugging definitions.
 *
 * Allowed debug levels (`DBG_LEVEL`) are:
 *
 *     0 - no output
 *     1 - error
 *     2 - warning
 *     3 - debug
 *
 */

// definition for atmel no-op command
#define NOP __asm__("nop\n\t")

// Define where debug output will be printed
#define DEBUG_PRINTER Serial

// default debug level
#ifndef DBG_LEVEL
    #define DBG_LEVEL 0
#endif

// Evaluate debug level
#define LEVEL_INFO ( DBG_LEVEL >= 4 )
#define LEVEL_DEBUG ( DBG_LEVEL >= 3 )
#define LEVEL_WARNING ( DBG_LEVEL >= 2 )
#define LEVEL_ERROR ( DBG_LEVEL >= 1 )

// Definition of debug, warning and error printing functions
#define LOGI(...) { \
        if(LEVEL_INFO) DEBUG_PRINTER.print(__VA_ARGS__); else NOP; \
    }

#define LOGI_LN(...) { \
        if(LEVEL_INFO) DEBUG_PRINTER.println(__VA_ARGS__); else NOP; \
    }

#define LOGD(...) { \
        if(LEVEL_DEBUG) DEBUG_PRINTER.print(__VA_ARGS__); else NOP; \
    }

#define LOGD_LN(...) { \
        if(LEVEL_DEBUG) DEBUG_PRINTER.println(__VA_ARGS__); else NOP; \
    }

#define LOGW(...) { \
    if(LEVEL_WARNING) DEBUG_PRINTER.print(__VA_ARGS__); else NOP; \
}

#define LOGW_LN(...) { \
    if(LEVEL_WARNING) DEBUG_PRINTER.println(__VA_ARGS__); else NOP; \
}

#define LOGE(...) { \
    if(LEVEL_ERROR) DEBUG_PRINTER.print(__VA_ARGS__); else NOP; \
}

#define LOGE_LN(...) { \
    if(LEVEL_ERROR) DEBUG_PRINTER.println(__VA_ARGS__); else NOP; \
}
