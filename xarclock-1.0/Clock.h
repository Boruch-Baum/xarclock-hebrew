/*
* $XConsortium: Clock.h,v 1.30 94/04/17 20:23:51 converse Exp $
*/


/***********************************************************

Copyright (c) 1987, 1988  X Consortium

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
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
X CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of the X Consortium shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from the X Consortium.


Copyright 1987, 1988 by Digital Equipment Corporation, Maynard, Massachusetts.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its 
documentation for any purpose and without fee is hereby granted, 
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in 
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.  

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/

#ifndef _XawClock_h
#define _XawClock_h

/***********************************************************************
 *
 * Clock Widget
 *
 ***********************************************************************/

#include <X11/Xmu/Converters.h>

/* Parameters:

 Name		     Class		RepType		Default Value
 ----		     -----		-------		-------------
 analog		     Boolean		Boolean		True

Following lines added by Andreas Franzen using source code by
Jaime Garcia Ghirelli:
 numerals            Integer            Integer         1
 north               Boolean            Boolean         False

 background	     Background		Pixel		white
 backingStore	     BackingStore	BackingStore	default
 border		     BorderColor	Pixel		Black
 borderWidth	     BorderWidth	Dimension	1
 chime		     Boolean		Boolean		False
 destroyCallback     Callback		Pointer		NULL
 font		     Font		XFontStruct*	fixed
 foreground	     Foreground		Pixel		black
 hand		     Foreground		Pixel		black
 height		     Height		Dimension	164
 highlight	     Foreground		Pixel		black
 mappedWhenManaged   MappedWhenManaged	Boolean		True
 padding	     Margin		int		8
 update		     Interval		int		60 (seconds)
 width		     Width		Dimension	164
 x		     Position		Position	0
 y		     Position		Position	0

*/

/* Resource names used to the clock widget */

		/* color of hands */
#define XtNhand "hands"


		/* Boolean: digital if FALSE */
#define XtNanalog "analog"

/* Following lines added by Andreas Franzen using source code by
 * Jaime Garcia Ghirelli: */
		/* Integer: 0=arabic, 1=roman, 2=hebrew */
#define XtNnumerals "numerals"
		/* Boolean: clockwise if FALSE */
#define XtNnorth "north"

		/* Boolean:  */
#define XtNchime "chime"

		/* Int: amount of space around outside of clock */
#define XtNpadding "padding"

typedef struct _ClockRec *ClockWidget;  /* completely defined in ClockPrivate.h */
typedef struct _ClockClassRec *ClockWidgetClass;    /* completely defined in ClockPrivate.h */

extern WidgetClass clockWidgetClass;

#endif /* _XawClock_h */
/* DON'T ADD STUFF AFTER THIS #endif */
