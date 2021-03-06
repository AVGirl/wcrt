/*
 * WCRT  -  Win32API CRT
 *
 * debugf.h
 *
 * Copyright (c) 2003-2004 by Joergen Ibsen / Jibz
 * All Rights Reserved
 *
 * http://www.ibsensoftware.com/
 *
 * This software is provided 'as-is', without any express
 * or implied warranty.  In no event will the authors be
 * held liable for any damages arising from the use of
 * this software.
 *
 * Permission is granted to anyone to use this software
 * for any purpose, including commercial applications,
 * and to alter it and redistribute it freely, subject to
 * the following restrictions:
 *
 * 1. The origin of this software must not be
 *    misrepresented; you must not claim that you
 *    wrote the original software. If you use this
 *    software in a product, an acknowledgment in
 *    the product documentation would be appreciated
 *    but is not required.
 *
 * 2. Altered source versions must be plainly marked
 *    as such, and must not be misrepresented as
 *    being the original software.
 *
 * 3. This notice may not be removed or altered from
 *    any source distribution.
 */

#ifndef WCRT_DEBUGF_H_INCLUDED
#define WCRT_DEBUGF_H_INCLUDED

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef NDEBUGF

    #define debugf(ignore) ((void)0)

#else /* NDEBUGF */

    char * __cdecl wcrt_debugf_format(const char *format, ...);

    void __cdecl wcrt_debugf_out(const char *file, int line, const char *func, char *s);

    #ifndef __FUNCTION__
    # define __FUNCTION__ "<unknown>"
    #endif

    #define debugf(args) wcrt_debugf_out(__FILE__, __LINE__, __FUNCTION__, wcrt_debugf_format args)

#endif /* NDEBUGF */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* WCRT_DEBUGF_H_INCLUDED */
