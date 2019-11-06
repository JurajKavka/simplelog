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

// Define where debug output will be printed
#define DEBUG_PRINTER Serial 

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
        LEVEL_INFO ? DEBUG_PRINTER.print(__VA_ARGS__) : 0; \
    }

#define LOGI_LN(...) { \
        LEVEL_INFO ? DEBUG_PRINTER.println(__VA_ARGS__) : 0; \
    }

#define LOGD(...) { \
        LEVEL_DEBUG ? DEBUG_PRINTER.print(__VA_ARGS__) : 0; \
    }

#define LOGD_LN(...) { \
        LEVEL_DEBUG ? DEBUG_PRINTER.println(__VA_ARGS__) : 0; \
    }
    
#define LOGW(...) { \
    LEVEL_WARNING ? DEBUG_PRINTER.print(__VA_ARGS__) : 0; \
}

#define LOGW_LN(...) { \
    LEVEL_WARNING ? DEBUG_PRINTER.println(__VA_ARGS__) : 0; \
}

#define LOGE(...) { \
    LEVEL_ERROR ? DEBUG_PRINTER.print(__VA_ARGS__) : 0; \
}

#define LOGE_LN(...) { \
    LEVEL_ERROR ? DEBUG_PRINTER.println(__VA_ARGS__) : 0; \
}
