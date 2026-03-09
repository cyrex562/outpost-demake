#include "core/outpost_modules.h"
#include "core/outpost_common.h"
#include "core/outpost_platform.h"

int outpost_module_memory_init(void)
{
    return 0;
}

int outpost_module_io_init(void)
{
    return 0;
}

int outpost_module_media_init(void)
{
    return 0;
}

int outpost_module_sim_init(void)
{
    return 0;
}

int outpost_module_ui_init(void)
{
    return 0;
}

void outpost_module_ui_shutdown(void)
{
}

void outpost_module_sim_shutdown(void)
{
}

void outpost_module_media_shutdown(void)
{
}

void outpost_module_io_shutdown(void)
{
}

void outpost_module_memory_shutdown(void)
{
}

int outpost_modules_init(void)
{
    int status = 0;

    status = outpost_module_memory_init();
    if (status != 0)
    {
        return status;
    }

    status = outpost_module_io_init();
    if (status != 0)
    {
        outpost_module_memory_shutdown();
        return status;
    }

    status = outpost_module_media_init();
    if (status != 0)
    {
        outpost_module_io_shutdown();
        outpost_module_memory_shutdown();
        return status;
    }

    status = outpost_module_sim_init();
    if (status != 0)
    {
        outpost_module_media_shutdown();
        outpost_module_io_shutdown();
        outpost_module_memory_shutdown();
        return status;
    }

    status = outpost_module_ui_init();
    if (status != 0)
    {
        outpost_module_sim_shutdown();
        outpost_module_media_shutdown();
        outpost_module_io_shutdown();
        outpost_module_memory_shutdown();
        return status;
    }

    return 0;
}

void outpost_modules_shutdown(void)
{
    outpost_module_ui_shutdown();
    outpost_module_sim_shutdown();
    outpost_module_media_shutdown();
    outpost_module_io_shutdown();
    outpost_module_memory_shutdown();
}
