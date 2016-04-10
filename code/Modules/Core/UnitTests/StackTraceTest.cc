//------------------------------------------------------------------------------
//  StackTraceTest.cc
//------------------------------------------------------------------------------
#include "Pre.h"
#include "UnitTest++/src/UnitTest++.h"
#include "Core/StackTrace.h"
#include "Core/Log.h"

using namespace Oryol;

TEST(StackTrace) {
    char buf[4096];
    StackTrace::Dump(buf, sizeof(buf));
    Log::Info("%s", buf);
}
