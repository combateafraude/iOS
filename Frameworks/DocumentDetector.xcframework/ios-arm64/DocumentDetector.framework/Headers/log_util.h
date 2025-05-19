//
// Created by caf on 27/11/2023.
//

#ifndef CAF_LOG_UTIL_H
#define CAF_LOG_UTIL_H

#if defined(DEBUG_MODE) && (defined(ANDROID_PLAT) || defined(IOS_PLAT))

// definido como Android
#if defined(ANDROID_PLAT)

#include <android/log.h>

#define LOG(type, fmt, ...) { \
  __android_log_print(type, "LibValidatorCpp", "[%s:%d] - [" fmt "]", __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__); \
}

#define D_LOG(fmt, ...) { \
  LOG(ANDROID_LOG_DEBUG, fmt, __VA_ARGS__); \
}

#define V_LOG(fmt, ...) { \
  LOG(ANDROID_LOG_VERBOSE, fmt, __VA_ARGS__); \
}

#define E_LOG(fmt, ...) { \
  LOG(ANDROID_LOG_ERROR, fmt, __VA_ARGS__); \
}

// definido como iOS
#elif defined(IOS_PLAT)

#import <os/log.h>

#define LOG(type, fmt, ...) { \
    os_log_with_type(OS_LOG_DEFAULT, type, "%s [Line %d] " fmt, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);\
}

#define D_LOG(fmt, ...) { \
    LOG(OS_LOG_TYPE_DEBUG, fmt, __VA_ARGS__); \
}

#define V_LOG(fmt, ...) { \
    LOG(OS_LOG_TYPE_DEFAULT, fmt, __VA_ARGS__); \
}

#define E_LOG(fmt, ...) { \
    LOG(OS_LOG_TYPE_ERROR, fmt, __VA_ARGS__); \
}

#endif



#else

//Sem DEBUG_MODE habilitado
#define D_LOG(fmt, ...)

#endif

#endif //CAF_LOG_UTIL_H
