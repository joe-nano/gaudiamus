/*

  
  Copyright (c) 2017 Erik Ronström
  
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
  
  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.

*/

#ifndef _GA_THREAD
#define _GA_THREAD

/*****************************************************************
 *****************************************************************
                        THREAD WRAPPER


 *****************************************************************
 *****************************************************************/

#include <stdlib.h>
#include <ga/util.h>

typedef struct ga_thread ga_thread;

typedef void* (* ga_thread_func)(void*);

ga_thread* ga_thread_create(ga_thread_func func, void* data);
ga_thread* ga_thread_create_named(ga_thread_func func, void* data, const char *name);

void ga_thread_sleep(unsigned int ms);
void* ga_thread_join(ga_thread *thread);
void ga_thread_detach(ga_thread *thread);
bool ga_thread_is_main(ga_thread *thread);
bool ga_thread_is_current(ga_thread *thread);

#endif
