/*
 * libniftyled - Interface library for LED interfaces
 * Copyright (C) 2006-2014 Daniel Hiepler <daniel@niftylight.de>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Alternatively, the contents of this file may be used under the
 * GNU Lesser General Public License Version 2.1 (the "LGPL"), in
 * which case the following provisions apply instead of the ones
 * mentioned above:
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/**
 * @file _thread.h
 * @brief Threading functionality
 */

/**         
 * @defgroup thread Thread
 * @brief Threading functionality
 * @{
 */

#ifndef _THREAD_H
#define _THREAD_H


/** mutex to synchronize data between threads */
typedef struct _Mutex           Mutex;

/** thread to wrap different threading mechanisms */
typedef struct _Thread          Thread;

/**
 * The function defination for a function that forms the base of a new Thread when
 * thread_create is used.
 *
 * @see thread_create
 *
 * @arg data Pointer that can contains the private data from the thread_create function.
 *
 * @return Pointer to the data when a thread is joined.
 */
typedef void                   *(*ThreadFunc) (void *data);


Mutex                          *_thread_mutex_new(void);
NftResult                       _thread_mutex_free(Mutex * mutex);
NftResult                       _thread_mutex_lock(Mutex * mutex);
NftResult                       _thread_mutex_unlock(Mutex * mutex);



#endif /* _THREAD_H */


/**
 * @}
 */
