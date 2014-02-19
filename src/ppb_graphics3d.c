#include <ppapi/c/ppb_graphics_3d.h>
#include <stddef.h>
#include "trace.h"
#include "pp_resource.h"


int32_t
ppb_graphics3d_get_attrib_max_value(PP_Resource instance, int32_t attribute, int32_t* value)
{
    return 0;
}

PP_Resource
ppb_graphics3d_create(PP_Instance instance, PP_Resource share_context, const int32_t attrib_list[])
{
    PP_Resource context = pp_resource_allocate(PP_RESOURCE_GRAPHICS3D);

    // TODO: use attributes

    return context;
}

PP_Bool
ppb_graphics3d_is_graphics3d(PP_Resource resource)
{
    return pp_resource_get_type(resource) == PP_RESOURCE_GRAPHICS3D;
}

int32_t
ppb_graphics3d_get_attribs(PP_Resource context, int32_t attrib_list[])
{
    return 0;
}

int32_t
ppb_graphics3d_set_attribs(PP_Resource context, const int32_t attrib_list[])
{
    return 0;
}

int32_t
ppb_graphics3d_get_error(PP_Resource context)
{
    return 0;
}

int32_t
ppb_graphics3d_resize_buffers(PP_Resource context, int32_t width, int32_t height)
{
    return 0;
}

int32_t
ppb_graphics3d_swap_buffers(PP_Resource context, struct PP_CompletionCallback callback)
{
    return 0;
}


// trace wrappers
static
int32_t
trace_ppb_graphics3d_get_attrib_max_value(PP_Resource instance, int32_t attribute, int32_t* value)
{
    trace_info("[PPB] {zilch} %s\n", __func__+6);
    return ppb_graphics3d_get_attrib_max_value(instance, attribute, value);
}

static
PP_Resource
trace_ppb_graphics3d_create(PP_Instance instance, PP_Resource share_context,
                            const int32_t attrib_list[])
{
    trace_info("[PPB] {part} %s\n", __func__+6);
    return ppb_graphics3d_create(instance, share_context, attrib_list);
}

static
PP_Bool
trace_ppb_graphics3d_is_graphics3d(PP_Resource resource)
{
    trace_info("[PPB] {full} %s\n", __func__+6);
    return ppb_graphics3d_is_graphics3d(resource);
}

static
int32_t
trace_ppb_graphics3d_get_attribs(PP_Resource context, int32_t attrib_list[])
{
    trace_info("[PPB] {zilch} %s\n", __func__+6);
    return ppb_graphics3d_get_attribs(context, attrib_list);
}

static
int32_t
trace_ppb_graphics3d_set_attribs(PP_Resource context, const int32_t attrib_list[])
{
    trace_info("[PPB] {zilch} %s\n", __func__+6);
    return ppb_graphics3d_set_attribs(context, attrib_list);
}

static
int32_t
trace_ppb_graphics3d_get_error(PP_Resource context)
{
    trace_info("[PPB] {zilch} %s\n", __func__+6);
    return ppb_graphics3d_get_error(context);
}

static
int32_t
trace_ppb_graphics3d_resize_buffers(PP_Resource context, int32_t width, int32_t height)
{
    trace_info("[PPB] {zilch} %s\n", __func__+6);
    return ppb_graphics3d_resize_buffers(context, width, height);
}

static
int32_t
trace_ppb_graphics3d_swap_buffers(PP_Resource context, struct PP_CompletionCallback callback)
{
    trace_info("[PPB] {zilch} %s\n", __func__+6);
    return ppb_graphics3d_swap_buffers(context, callback);
}


const struct PPB_Graphics3D_1_0 ppb_graphics3d_interface_1_0 = {
    .GetAttribMaxValue =    trace_ppb_graphics3d_get_attrib_max_value,
    .Create =               trace_ppb_graphics3d_create,
    .IsGraphics3D =         trace_ppb_graphics3d_is_graphics3d,
    .GetAttribs =           trace_ppb_graphics3d_get_attribs,
    .SetAttribs =           trace_ppb_graphics3d_set_attribs,
    .GetError =             trace_ppb_graphics3d_get_error,
    .ResizeBuffers =        trace_ppb_graphics3d_resize_buffers,
    .SwapBuffers =          trace_ppb_graphics3d_swap_buffers,
};
