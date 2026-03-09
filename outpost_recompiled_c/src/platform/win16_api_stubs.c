#include "platform/win16_api.h"

#if OUTPOST_WIN16_USE_STUBS

static uintptr_t outpost_win16_stub_return(const char *api_name)
{
    OUTPOST_UNUSED(api_name);
    return (uintptr_t)0;
}

#define OUTPOST_DEFINE_WIN16_STUB(name) \
    uintptr_t name() \
    { \
        return outpost_win16_stub_return(#name); \
    }

OUTPOST_WIN16_API_LIST(OUTPOST_DEFINE_WIN16_STUB)

#undef OUTPOST_DEFINE_WIN16_STUB

#endif /* OUTPOST_WIN16_USE_STUBS */
