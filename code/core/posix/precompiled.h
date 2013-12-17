#pragma once
//------------------------------------------------------------------------------
/**
    @class core/posix/precompiled.h
    
    Standard includes for POSIX platforms.
*/
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <vector>
#include <cstring>
#if ORYOL_HAS_THREADS
#include <atomic>
#endif

