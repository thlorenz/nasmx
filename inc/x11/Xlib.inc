;*****************************
;***** The NASMX Project *****
;*****************************
;;Translated by Mathi 

%ifndef __X11_XLIB_INC__
%define __X11_XLIB_INC__

%include "x11/X.inc"

%if __BITS__ > 32

;#define ConnectionNumber(dpy) 	(((_XPrivDisplay)dpy)->fd)

%macro ConnectionNumber 1
	mov rax,[%1]
	mov eax,dword[rax+XDisplay.fd]
%endmacro
;#define DefaultScreen(dpy) 	(((_XPrivDisplay)dpy)->default_screen)
%macro DefaultScreen 1
	mov rbx,[%1]
	mov eax,dword[rbx+XDisplay.default_screen]
%endmacro

;#define ScreenOfDisplay(dpy, scr)(&((_XPrivDisplay)dpy)->screens[scr])
%macro ScreenOfDisplay 2
	mov rax,[%1]
	mov rax,qword[rax+XDisplay.screens]
	mov rcx,rax
	xor rbx,rbx	
	mov ebx,dword[%2]
	mov eax,Screen_size
	mul rbx
	lea rax,[rcx + rax]
%endmacro

;#define RootWindow(dpy, scr) 	(ScreenOfDisplay(dpy,scr)->root)
%macro RootWindow 2
	ScreenOfDisplay %1,%2
	mov rax,qword[rax + Screen.root]
%endmacro

;#define BlackPixel(dpy, scr) 	(ScreenOfDisplay(dpy,scr)->black_pixel)
%macro BlackPixel 2
	ScreenOfDisplay %1,%2
	mov rax,qword[rax + Screen.black_pixel]
%endmacro

;#define WhitePixel(dpy, scr) 	(ScreenOfDisplay(dpy,scr)->white_pixel)
%macro WhitePixel 2
	ScreenOfDisplay %1,%2
	mov rax,qword[rax + Screen.white_pixel]
%endmacro
;#define DefaultColormap(dpy, scr)(ScreenOfDisplay(dpy,scr)->cmap)
%macro DefaultColormap 2
	ScreenOfDisplay %1,%2
	mov rax,qword[rax + Screen.cmap]
%endmacro

NASMX_STRUC   XDisplay 
	NASMX_RESERVE 	ext_data, uint64_t, 1		;;;XExtData *ext_data;
	NASMX_RESERVE 	private1, uint64_t, 1		;;;struct _XPrivate *private1;
	NASMX_RESERVE 		fd, uint32_t, 1			;;;int fd;
	NASMX_RESERVE 		private2, uint32_t, 1		;;;int private2;
	NASMX_RESERVE 		proto_major_version, uint32_t, 1	;;;int proto_major_version;/* major version of server's X protocol */
	NASMX_RESERVE 		proto_minor_version, uint32_t, 1	;;;int proto_minor_version;/* minor version of servers X protocol */
			
	NASMX_RESERVE 	vendor, uint64_t , 1			;;;char *vendor;		/* vendor of the server hardware */
        NASMX_RESERVE 		private3, uint64_t, 1		;;;XID private3;
	NASMX_RESERVE 		private4, uint64_t, 1		;;;XID private4;
	NASMX_RESERVE 		private5, uint64_t, 1		;;;XID private5;
	NASMX_RESERVE 		private6, uint32_t, 1		;;;int private6;
	NASMX_RESERVE		__PADDING1__, int8_t, 4
			
	NASMX_RESERVE 	resource_alloc, uint64_t, 1 		;;;XID (*resource_alloc)(	/* allocator function */ struct _XDisplay*  );
	NASMX_RESERVE 		byte_order, uint32_t, 1		;;;int byte_order;		/* screen byte order, LSBFirst, MSBFirst */
	NASMX_RESERVE 		bitmap_unit, uint32_t, 1		;;;int bitmap_unit;	/* padding and data requirements */
	NASMX_RESERVE 		bitmap_pad, uint32_t, 1		;;;int bitmap_pad;		/* padding requirements on bitmaps */
	NASMX_RESERVE 		bitmap_bit_order, uint32_t, 1	;;;int bitmap_bit_order;	/* LeastSignificant or MostSignificant */
	NASMX_RESERVE 		nformats, uint32_t, 1		;;;int nformats;		/* number of pixmap formats in list */
	NASMX_RESERVE		__PADDING2__, int8_t, 4
			
	NASMX_RESERVE 	pixmap_format, uint64_t, 1		;;;ScreenFormat *pixmap_format;	/* pixmap format list */
	NASMX_RESERVE 		private8, uint32_t, 1		;;;int private8;
	NASMX_RESERVE 		release, uint32_t, 1			;;;int release;		/* release of the server */
			
	NASMX_RESERVE 	private9, uint64_t, 1
	NASMX_RESERVE		private10, uint64_t, 1	;;;struct _XPrivate *private9, *private10;
	NASMX_RESERVE 		qlen, uint32_t, 1			;;;int qlen;		/* Length of input event queue */
	NASMX_RESERVE		__PADDING3__, int8_t, 4
			
	NASMX_RESERVE 		last_request_read, uint64_t, 1	;;;unsigned long last_request_read; /* seq number of last event read */
	NASMX_RESERVE 		request, uint64_t, 1			;;;unsigned long request;	/* sequence number of last request. */
	NASMX_RESERVE 	private11, uint64_t, 1		;;;XPointer private11;
	NASMX_RESERVE 	private12, uint64_t, 1		;;;XPointer private12;
	NASMX_RESERVE 	private13, uint64_t, 1		;;;XPointer private13;
	NASMX_RESERVE 	private14, uint64_t, 1		;;;XPointer private14;
	NASMX_RESERVE 		max_request_size, uint32_t, 1	;;;unsigned max_request_size; /* maximum number 32 bit words in request*/
	NASMX_RESERVE	__PADDING4__, int8_t, 4
			
	NASMX_RESERVE 	db, uint64_t, 1			;;;struct _XrmHashBucketRec *db;
	NASMX_RESERVE 		private15, uint32_t, 1		;;;int (*private15)(	struct _XDisplay*	);
	
	NASMX_RESERVE	__PADDING5__, int8_t, 4
	NASMX_RESERVE 	display_name, uint64_t, 1		;;;char *display_name;	/* "host:display" string used on this connect*/
	NASMX_RESERVE 		default_screen, uint32_t, 1		;;;int default_screen;	/* default screen for operations */
	NASMX_RESERVE 		nscreens, uint32_t, 1		;;;int nscreens;		/* number of screens on this server*/
			
	NASMX_RESERVE 	screens, uint64_t, 1			;;;Screen *screens;	/* pointer to list of screens */
	NASMX_RESERVE 		motion_buffer, uint64_t, 1		;;;unsigned long motion_buffer;	/* size of motion buffer */
	NASMX_RESERVE 		private16, uint64_t, 1		;;;unsigned long private16;
	NASMX_RESERVE 		min_keycode, uint32_t, 1		;;;int min_keycode;	/* minimum defined keycode */
	NASMX_RESERVE 		max_keycode, uint32_t, 1		;;;int max_keycode;	/* maximum defined keycode */
			
	NASMX_RESERVE 	private17, uint64_t, 1		;;;XPointer private17;
	NASMX_RESERVE 	private18, uint64_t, 1		;;;XPointer private18;
	NASMX_RESERVE 		private19, uint32_t, 1		;;;int private19;
	NASMX_RESERVE	__PADDING6__, int8_t, 4
			
	NASMX_RESERVE 	xdefaults, uint64_t, 1		;;;char *xdefaults;	/* contents of defaults from server */   
NASMX_ENDSTRUC

NASMX_STRUC XExtData
	NASMX_RESERVE number,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE next,		uint64_t, 1
	NASMX_RESERVE fnptrfree_private,		uint64_t, 1
	NASMX_RESERVE private_data,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XExtCodes
	NASMX_RESERVE extension,		uint32_t, 1
	NASMX_RESERVE major_opcode,		uint32_t, 1
	NASMX_RESERVE first_event,		uint32_t, 1
	NASMX_RESERVE first_error,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XPixmapFormatValues
	NASMX_RESERVE depth,		uint32_t, 1
	NASMX_RESERVE bits_per_pixel,		uint32_t, 1
	NASMX_RESERVE scanline_pad,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XGCValues
	NASMX_RESERVE function,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE plane_mask,		uint64_t, 1
	NASMX_RESERVE foreground,		uint64_t, 1
	NASMX_RESERVE background,		uint64_t, 1
	NASMX_RESERVE line_width,		uint32_t, 1
	NASMX_RESERVE line_style,		uint32_t, 1
	NASMX_RESERVE cap_style,		uint32_t, 1
	NASMX_RESERVE join_style,		uint32_t, 1
	NASMX_RESERVE fill_style,		uint32_t, 1
	NASMX_RESERVE fill_rule,		uint32_t, 1
	NASMX_RESERVE arc_mode,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE tile,		uint64_t, 1
	NASMX_RESERVE stipple,		uint64_t, 1
	NASMX_RESERVE ts_x_origin,		uint32_t, 1
	NASMX_RESERVE ts_y_origin,		uint32_t, 1
	NASMX_RESERVE font,		uint64_t, 1
	NASMX_RESERVE subwindow_mode,		uint32_t, 1
	NASMX_RESERVE graphics_exposures,		uint32_t, 1
	NASMX_RESERVE clip_x_origin,		uint32_t, 1
	NASMX_RESERVE clip_y_origin,		uint32_t, 1
	NASMX_RESERVE clip_mask,		uint64_t, 1
	NASMX_RESERVE dash_offset,		uint32_t, 1
	NASMX_RESERVE dashes,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC Visual
	NASMX_RESERVE ext_data,		uint64_t, 1
	NASMX_RESERVE visualid,		uint64_t, 1
	NASMX_RESERVE class,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE red_mask,		uint64_t, 1
	NASMX_RESERVE green_mask,	uint64_t, 1
	NASMX_RESERVE blue_mask,	uint64_t, 1
	NASMX_RESERVE bits_per_rgb,		uint32_t, 1
	NASMX_RESERVE map_entries,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC Depth
	NASMX_RESERVE depth,		uint32_t, 1
	NASMX_RESERVE nvisuals,		uint32_t, 1
	NASMX_RESERVE visuals,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC Screen
	NASMX_RESERVE ext_data,		uint64_t, 1
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE root,		uint64_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE mwidth,		uint32_t, 1
	NASMX_RESERVE mheight,		uint32_t, 1
	NASMX_RESERVE ndepths,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE depths,		uint64_t, 1
	NASMX_RESERVE root_depth,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE root_visual,		uint64_t, 1
	NASMX_RESERVE default_gc,		uint64_t, 1
	NASMX_RESERVE cmap,		uint64_t, 1
	NASMX_RESERVE white_pixel,		uint64_t, 1
	NASMX_RESERVE black_pixel,		uint64_t, 1
	NASMX_RESERVE max_maps,		uint32_t, 1
	NASMX_RESERVE min_maps,		uint32_t, 1
	NASMX_RESERVE backing_store,		uint32_t, 1
	NASMX_RESERVE save_unders,		uint32_t, 1
	NASMX_RESERVE root_input_mask,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC ScreenFormat
	NASMX_RESERVE ext_data,		uint64_t, 1
	NASMX_RESERVE depth,		uint32_t, 1
	NASMX_RESERVE bits_per_pixel,		uint32_t, 1
	NASMX_RESERVE scanline_pad,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XSetWindowAttributes
	NASMX_RESERVE background_pixmap,		uint64_t, 1
	NASMX_RESERVE background_pixel,		uint64_t, 1
	NASMX_RESERVE border_pixmap,		uint64_t, 1
	NASMX_RESERVE border_pixel,		uint64_t, 1
	NASMX_RESERVE bit_gravity,		uint32_t, 1
	NASMX_RESERVE win_gravity,		uint32_t, 1
	NASMX_RESERVE backing_store,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		uint32_t, 1
	NASMX_RESERVE backing_planes,		uint64_t, 1
	NASMX_RESERVE backing_pixel,		uint64_t, 1
	NASMX_RESERVE save_under,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,		uint32_t, 1
	NASMX_RESERVE event_mask,		uint64_t, 1
	NASMX_RESERVE do_not_propagate_mask,		uint64_t, 1
	NASMX_RESERVE override_redirect,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,		uint32_t, 1
	NASMX_RESERVE colormap,		uint64_t, 1
	NASMX_RESERVE cursor,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XWindowAttributes
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE border_width,		uint32_t, 1
	NASMX_RESERVE depth,		uint32_t, 1
	NASMX_RESERVE visual,		uint64_t, 1
	NASMX_RESERVE root,		uint64_t, 1
	NASMX_RESERVE class,		uint32_t, 1
	NASMX_RESERVE bit_gravity,		uint32_t, 1
	NASMX_RESERVE win_gravity,		uint32_t, 1
	NASMX_RESERVE backing_store,		uint32_t, 1
	NASMX_RESERVE backing_planes,		uint64_t, 1
	NASMX_RESERVE backing_pixel,		uint64_t, 1
	NASMX_RESERVE save_under,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		int8_t, 4
	NASMX_RESERVE colormap,		uint64_t, 1
	NASMX_RESERVE map_installed,		uint32_t, 1
	NASMX_RESERVE map_state,		uint32_t, 1
	NASMX_RESERVE all_event_masks,		uint64_t, 1
	NASMX_RESERVE your_event_mask,		uint64_t, 1
	NASMX_RESERVE do_not_propagate_mask,		uint64_t ,1
	NASMX_RESERVE override_redirect,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,		int8_t, 4
	NASMX_RESERVE screen,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XHostAddress
	NASMX_RESERVE family,		uint32_t, 1
	NASMX_RESERVE length,		uint32_t, 1
	NASMX_RESERVE address,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XServerInterpretedAddress
	NASMX_RESERVE typelength,		uint32_t, 1
	NASMX_RESERVE valuelength,		uint32_t, 1
	NASMX_RESERVE type,		uint64_t, 1
	NASMX_RESERVE value,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XImage
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE xoffset,		uint32_t, 1
	NASMX_RESERVE format,		uint32_t, 1
	NASMX_RESERVE data,		uint64_t, 1
	NASMX_RESERVE byte_order,		uint32_t, 1
	NASMX_RESERVE bitmap_unit,		uint32_t, 1
	NASMX_RESERVE bitmap_bit_order,		uint32_t, 1
	NASMX_RESERVE bitmap_pad,		uint32_t, 1
	NASMX_RESERVE depth,		uint32_t, 1
	NASMX_RESERVE bytes_per_line,		uint32_t, 1
	NASMX_RESERVE bits_per_pixel,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		int8_t, 4
	NASMX_RESERVE red_mask,		uint64_t, 1
	NASMX_RESERVE green_mask,		uint64_t, 1
	NASMX_RESERVE blue_mask,		uint64_t, 1
	NASMX_RESERVE obdata,		uint64_t, 1

	NASMX_RESERVE fptr_create_image,		uint64_t, 1
	NASMX_RESERVE fptr_destroy_image,		uint64_t, 1
	NASMX_RESERVE fptr_get_pixel,		uint64_t, 1
	NASMX_RESERVE fptr_put_pixel,		uint64_t, 1
	NASMX_RESERVE fptr_sub_image,		uint64_t, 1
	NASMX_RESERVE fptr_add_pixel,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XWindowChanges
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE border_width,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		int8_t, 4
	NASMX_RESERVE sibling,		uint64_t, 1
	NASMX_RESERVE stack_mode,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,		int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XColor
	NASMX_RESERVE pixel,		uint64_t, 1
	NASMX_RESERVE red,		uint16_t, 1
	NASMX_RESERVE green,		uint16_t, 1
	NASMX_RESERVE blue,		uint16_t, 1
	NASMX_RESERVE flags,		int8_t, 1
	NASMX_RESERVE pad,		int8_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XSegment
	NASMX_RESERVE x1,		uint16_t, 1
	NASMX_RESERVE y1,		uint16_t, 1
	NASMX_RESERVE x2,		uint16_t, 1
	NASMX_RESERVE y2,		uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XPoint
	NASMX_RESERVE x,		uint16_t, 1
	NASMX_RESERVE y,		uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XRectangle
	NASMX_RESERVE x,		uint16_t, 1
	NASMX_RESERVE y,		uint16_t, 1
	NASMX_RESERVE width,		uint16_t, 1
	NASMX_RESERVE height,		uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XArc
	NASMX_RESERVE x,		uint16_t, 1
	NASMX_RESERVE y,		uint16_t, 1
	NASMX_RESERVE width,		uint16_t, 1
	NASMX_RESERVE height,		uint16_t, 1
	NASMX_RESERVE angle1,		uint16_t, 1
	NASMX_RESERVE angle2,		uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XKeyboardControl
	NASMX_RESERVE key_click_percent,		uint32_t, 1
	NASMX_RESERVE bell_percent,		uint32_t, 1
	NASMX_RESERVE bell_pitch,		uint32_t, 1
	NASMX_RESERVE bell_duration,		uint32_t, 1
	NASMX_RESERVE led,		uint32_t, 1
	NASMX_RESERVE led_mode,		uint32_t, 1
	NASMX_RESERVE key,		uint32_t, 1
	NASMX_RESERVE auto_repeat_mode,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XKeyboardState
	NASMX_RESERVE key_click_percent,		uint32_t, 1
	NASMX_RESERVE bell_percent,		uint32_t, 1
	NASMX_RESERVE bell_pitch,		uint32_t, 1
	NASMX_RESERVE bell_duration,		uint32_t, 1
	NASMX_RESERVE led_mask,		uint64_t, 1
	NASMX_RESERVE global_auto_repeat,		uint32_t, 1
	NASMX_RESERVE auto_repeats,		int8_t, 32
	NASMX_RESERVE __PADDING1__,		int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XTimeCoord
	NASMX_RESERVE time,		uint64_t, 1
	NASMX_RESERVE x,		uint16_t, 1
	NASMX_RESERVE y,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XModifierKeymap
	NASMX_RESERVE max_keypermod,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE modifiermap,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XKeyEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE root,		uint64_t, 1
	NASMX_RESERVE subwindow,		uint64_t, 1
	NASMX_RESERVE time,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE x_root,		uint32_t, 1
	NASMX_RESERVE y_root,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE keycode,		uint32_t, 1
	NASMX_RESERVE same_screen,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XButtonEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE root,		uint64_t, 1
	NASMX_RESERVE subwindow,		uint64_t, 1
	NASMX_RESERVE time,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE x_root,		uint32_t, 1
	NASMX_RESERVE y_root,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE button,		uint32_t, 1
	NASMX_RESERVE same_screen,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XMotionEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE root,		uint64_t, 1
	NASMX_RESERVE subwindow,		uint64_t, 1
	NASMX_RESERVE time,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE x_root,		uint32_t, 1
	NASMX_RESERVE y_root,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE is_hint,		int8_t, 10
	NASMX_RESERVE __PADDING3__,	int8_t, 3
	NASMX_RESERVE same_screen,		uint32_t, 1
	NASMX_RESERVE __PADDING4__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XCrossingEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE root,		uint64_t, 1
	NASMX_RESERVE subwindow,		uint64_t, 1
	NASMX_RESERVE time,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE x_root,		uint32_t, 1
	NASMX_RESERVE y_root,		uint32_t, 1
	NASMX_RESERVE mode,		uint32_t, 1
	NASMX_RESERVE detail,		uint32_t, 1
	NASMX_RESERVE same_screen,		uint32_t, 1
	NASMX_RESERVE focus,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XFocusChangeEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE mode,		uint32_t, 1
	NASMX_RESERVE detail,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XKeymapEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE key_vector, 	int8_t, 32
NASMX_ENDSTRUC

NASMX_STRUC XExposeEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE count,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XGraphicsExposeEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE drawable,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1

	NASMX_RESERVE count,		uint32_t, 1
	NASMX_RESERVE major_code,		uint32_t, 1
	NASMX_RESERVE minor_code,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,		int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XNoExposeEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE drawable,		uint64_t, 1
	NASMX_RESERVE major_code,		uint32_t, 1
	NASMX_RESERVE minor_code,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XVisibilityEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XCreateWindowEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE parent,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1

	NASMX_RESERVE border_width,		uint32_t, 1
	NASMX_RESERVE override_redirect,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XDestroyWindowEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE event,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XUnmapEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE event,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE from_configure,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4	
NASMX_ENDSTRUC

NASMX_STRUC XMapEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE event,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE override_redirect,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4	
NASMX_ENDSTRUC

NASMX_STRUC XMapRequestEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE parent,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XReparentEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE event,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE parent,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE override_redirect,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XConfigureEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE event,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE border_width,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
	NASMX_RESERVE above,		uint64_t, 1
	NASMX_RESERVE override_redirect,		uint32_t, 1
	NASMX_RESERVE __PADDING4__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XGravityEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE event,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XResizeRequestEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XConfigureRequestEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE parent,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE border_width,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
	NASMX_RESERVE above,		uint64_t, 1
	NASMX_RESERVE detail,		uint32_t, 1
	NASMX_RESERVE __PADDING4__,	int8_t, 4
	NASMX_RESERVE value_mask,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XCirculateEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE event,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE place,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XCirculateRequestEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE parent,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE place,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XPropertyEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE atom,		uint64_t, 1
	NASMX_RESERVE time,		uint64_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XSelectionClearEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE selection,		uint64_t, 1
	NASMX_RESERVE time,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XSelectionRequestEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE owner,		uint64_t, 1
	NASMX_RESERVE requestor,		uint64_t, 1
	NASMX_RESERVE selection,		uint64_t, 1
	NASMX_RESERVE target,		uint64_t, 1
	NASMX_RESERVE property,		uint64_t, 1
	NASMX_RESERVE time,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XSelectionEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE requestor,		uint64_t, 1
	NASMX_RESERVE selection,		uint64_t, 1
	NASMX_RESERVE target,		uint64_t, 1
	NASMX_RESERVE property,		uint64_t, 1
	NASMX_RESERVE time,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XColormapEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE colormap,		uint64_t, 1
	NASMX_RESERVE new,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XClientMessageEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE message_type,		uint64_t, 1
	NASMX_RESERVE format,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
;;; union {
;;;  char b[20];
;;;  short s[10];
;;;  long l[5];
;;;  } data;
	NASMX_UNION data
		NASMX_RESERVE b, int8_t , 20
		NASMX_RESERVE s, int16_t, 10
		NASMX_RESERVE l, uint64_t, 5
	NASMX_ENDUNION
	;;;;NASMX_RESERVE data,		int8_t, 40 ;;union
NASMX_ENDSTRUC

NASMX_STRUC XMappingEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
	NASMX_RESERVE request,		uint32_t, 1
	NASMX_RESERVE first_keycode,		uint32_t, 1
	NASMX_RESERVE count,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XErrorEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE resourceid,		uint64_t, 1
	NASMX_RESERVE serial,		uint32_t, 1
	NASMX_RESERVE error_code,		uint32_t, 1
	NASMX_RESERVE request_code,		uint32_t, 1
	NASMX_RESERVE minor_code,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XAnyEvent
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE window,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XGenericEventCookie
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE serial,		uint64_t, 1
	NASMX_RESERVE send_event,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE display,		uint64_t, 1
	NASMX_RESERVE extension,		uint32_t, 1
	NASMX_RESERVE evtype,		uint32_t, 1
	NASMX_RESERVE cookie,		uint32_t, 1
	NASMX_RESERVE __PADDING3__,	int8_t, 4
	NASMX_RESERVE data,		uint64_t
	NASMX_ENDSTRUC
NASMX_UNION XEvent  ;; UNION **
 int_type:
 XAnyEvent_xany:
 XKeyEvent_xkey:
 XButtonEvent_xbutton:
 XMotionEvent_xmotion:
 XCrossingEvent_xcrossing:
 XFocusChangeEvent_xfocus:
 XExposeEvent_xexpose:
 XGraphicsExposeEvent_xgraphicsexpose:
 XNoExposeEvent_xnoexpose:
 XVisibilityEvent_xvisibility:
 XCreateWindowEvent_xcreatewindow:
 XDestroyWindowEvent_xdestroywindow:
 XUnmapEvent_xunmap:
 XMapEvent_xmap:
 XMapRequestEvent_xmaprequest:
 XReparentEvent_xreparent:
 XConfigureEvent_xconfigure:
 XGravityEvent_xgravity:
 XResizeRequestEvent_xresizerequest:
 XConfigureRequestEvent_xconfigurerequest:
 XCirculateEvent_xcirculate:
 XCirculateRequestEvent_xcirculaterequest:
 XPropertyEvent_xproperty:
 XSelectionClearEvent_xselectionclear:
 XSelectionRequestEvent_xselectionrequest:
 XSelectionEvent_xselection:
 XColormapEvent_xcolormap:
 XClientMessageEvent_xclient:
 XMappingEvent_xmapping:
 XErrorEvent_xerror:
 XKeymapEvent_xkeymap:
 XGenericEvent_xgeneric:
 XGenericEventCookie_xcookie:
	NASMX_RESERVE long_pad_24,	uint64_t, 24
NASMX_ENDUNION

NASMX_STRUC XCharStruct
	NASMX_RESERVE lbearing,		uint16_t, 1
	NASMX_RESERVE rbearing,		uint16_t, 1
	NASMX_RESERVE width,		uint16_t, 1
	NASMX_RESERVE ascent,		uint16_t, 1
	NASMX_RESERVE descent,		uint16_t, 1
	NASMX_RESERVE attributes,		uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XFontProp
	NASMX_RESERVE name,		uint64_t, 1
	NASMX_RESERVE card32,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XFontStruct
	NASMX_RESERVE ext_data,		uint64_t, 1
	NASMX_RESERVE fid,		uint64_t, 1
	NASMX_RESERVE direction,		uint32_t, 1
	NASMX_RESERVE min_char_or_byte2,		uint32_t, 1
	NASMX_RESERVE max_char_or_byte2,		uint32_t, 1
	NASMX_RESERVE min_byte1,		uint32_t, 1
	NASMX_RESERVE max_byte1,		uint32_t, 1
	NASMX_RESERVE all_chars_exist,		uint32_t, 1
	NASMX_RESERVE n_properties,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		int8_t, 4
	NASMX_RESERVE properties,		uint64_t, 1
	NASMX_RESERVE min_bounds,		int8_t, 12 ;;; XCharStruct_size
	NASMX_RESERVE max_bounds,		int8_t, 12 ;;; XCharStruct_size
	NASMX_RESERVE per_char,		uint64_t, 1
	NASMX_RESERVE ascent,		uint32_t, 1
	NASMX_RESERVE descent,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XTextItem
	NASMX_RESERVE chars,		uint64_t, 1
	NASMX_RESERVE nchars,		uint32_t, 1
	NASMX_RESERVE delta,		uint32_t, 1
	NASMX_RESERVE font,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XChar2b
	NASMX_RESERVE byte1,		int8_t, 1
	NASMX_RESERVE byte2,		int8_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XTextItem16
	NASMX_RESERVE chars,		uint64_t, 1
	NASMX_RESERVE nchars,		uint32_t, 1
	NASMX_RESERVE delta,		uint32_t, 1
	NASMX_RESERVE font,		uint64_t, 1
NASMX_ENDSTRUC

;;union - XEDataObject - TODO


NASMX_STRUC XFontSetExtents
	NASMX_RESERVE max_ink_extent,		int8_t, 8 ;;; XRectangle_size
	NASMX_RESERVE max_logical_extent,	int8_t, 8 ;;; XRectangle_size
NASMX_ENDSTRUC

NASMX_STRUC XmbTextItem
	NASMX_RESERVE chars,		uint64_t, 1
	NASMX_RESERVE nchars,		uint32_t, 1
	NASMX_RESERVE delta,		uint32_t, 1
	NASMX_RESERVE font_set,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XwcTextItem
	NASMX_RESERVE chars,		uint64_t, 1
	NASMX_RESERVE nchars,		uint32_t, 1
	NASMX_RESERVE delta,		uint32_t, 1
	NASMX_RESERVE font_set,		uint64_t, 1
NASMX_ENDSTRUC
%endif  ;; __BITS__ > 32

%define XNRequiredCharSet "requiredCharSet"
%define XNQueryOrientation "queryOrientation"
%define XNBaseFontName "baseFontName"
%define XNOMAutomatic "omAutomatic"
%define XNMissingCharSet "missingCharSet"
%define XNDefaultString "defaultString"
%define XNOrientation "orientation"
%define XNDirectionalDependentDrawing "directionalDependentDrawing"
%define XNContextualDrawing "contextualDrawing"
%define XNFontInfo "fontInfo"

%if __BITS__ > 32

NASMX_STRUC XOMCharSetList
	NASMX_RESERVE charset_count,		uint32_t, 1
	NASMX_RESERVE __PADDDING1__,		int8_t, 4
	NASMX_RESERVE charset_list,		uint64_t, 1
NASMX_ENDSTRUC

%endif  ;;__BITS__ > 32

%define     XOMOrientation_LTR_TTB 	0
%define     XOMOrientation_RTL_TTB 	1
%define     XOMOrientation_TTB_LTR 	2
%define     XOMOrientation_TTB_RTL	3
%define     XOMOrientation_Context 	4

%if __BITS__ > 32
NASMX_STRUC XOMOrientation
	NASMX_RESERVE num_orientation,		uint32_t, 1
	NASMX_RESERVE __PADDDING1__,		int8_t, 4
	NASMX_RESERVE orientation,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XOMFontInfo
	NASMX_RESERVE num_font,		uint32_t, 1
	NASMX_RESERVE __PADDDING1__,		int8_t, 4
	NASMX_RESERVE font_struct_list,		uint64_t, 1
	NASMX_RESERVE font_name_list,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XIMStyles
	NASMX_RESERVE count_styles,		uint16_t, 1
	NASMX_RESERVE __PADDDING1__,		int8_t, 6
	NASMX_RESERVE supported_styles,		uint64_t, 1
NASMX_ENDSTRUC
%endif   ;;__BITS__ > 32

%define XIMPreeditArea		0x0001L
%define XIMPreeditCallbacks	0x0002L
%define XIMPreeditPosition	0x0004L
%define XIMPreeditNothing	0x0008L
%define XIMPreeditNone		0x0010L
%define XIMStatusArea		0x0100L
%define XIMStatusCallbacks	0x0200L
%define XIMStatusNothing	0x0400L
%define XIMStatusNone		0x0800L

%define XNVaNestedList "XNVaNestedList"
%define XNQueryInputStyle "queryInputStyle"
%define XNClientWindow "clientWindow"
%define XNInputStyle "inputStyle"
%define XNFocusWindow "focusWindow"
%define XNResourceName "resourceName"
%define XNResourceClass "resourceClass"
%define XNGeometryCallback "geometryCallback"
%define XNDestroyCallback "destroyCallback"
%define XNFilterEvents "filterEvents"
%define XNPreeditStartCallback "preeditStartCallback"
%define XNPreeditDoneCallback "preeditDoneCallback"
%define XNPreeditDrawCallback "preeditDrawCallback"
%define XNPreeditCaretCallback "preeditCaretCallback"
%define XNPreeditStateNotifyCallback "preeditStateNotifyCallback"
%define XNPreeditAttributes "preeditAttributes"
%define XNStatusStartCallback "statusStartCallback"
%define XNStatusDoneCallback "statusDoneCallback"
%define XNStatusDrawCallback "statusDrawCallback"
%define XNStatusAttributes "statusAttributes"
%define XNArea "area"
%define XNAreaNeeded "areaNeeded"
%define XNSpotLocation "spotLocation"
%define XNColormap "colorMap"
%define XNStdColormap "stdColorMap"
%define XNForeground "foreground"
%define XNBackground "background"
%define XNBackgroundPixmap "backgroundPixmap"
%define XNFontSet "fontSet"
%define XNLineSpace "lineSpace"
%define XNCursor "cursor"

%define XNQueryIMValuesList "queryIMValuesList"
%define XNQueryICValuesList "queryICValuesList"
%define XNVisiblePosition "visiblePosition"
%define XNR6PreeditCallback "r6PreeditCallback"
%define XNStringConversionCallback "stringConversionCallback"
%define XNStringConversion "stringConversion"
%define XNResetState "resetState"
%define XNHotKey "hotKey"
%define XNHotKeyState "hotKeyState"
%define XNPreeditState "preeditState"
%define XNSeparatorofNestedList "separatorofNestedList"

%define XBufferOverflow		-1
%define XLookupNone		1
%define XLookupChars		2
%define XLookupKeySym		3
%define XLookupBoth		4

%if __BITS__ > 32
NASMX_STRUC XIMCallback
	NASMX_RESERVE client_data,		uint64_t, 1
	NASMX_RESERVE callback,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XICCallback
	NASMX_RESERVE client_data,		uint64_t, 1
	NASMX_RESERVE callback,		uint64_t, 1
NASMX_ENDSTRUC
%endif ;;__BITS__ > 32
%define XIMReverse		1L
%define XIMUnderline		(1L<<1)
%define XIMHighlight		(1L<<2)
%define XIMPrimary	 	(1L<<5)
%define XIMSecondary		(1L<<6)
%define XIMTertiary	 	(1L<<7)
%define XIMVisibleToForward 	(1L<<8)
%define XIMVisibleToBackword 	(1L<<9)
%define XIMVisibleToCenter 	(1L<<10)

%if __BITS__ > 32
NASMX_STRUC XIMText
	NASMX_RESERVE length,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t , 6
	NASMX_RESERVE feedback,		uint64_t, 1
	NASMX_RESERVE encoding_is_wchar,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE string,		uint64_t, 1  ;; union with char *multi_byte , wchar_t *wide_char;
NASMX_ENDSTRUC
%endif ;;__BITS__ > 32

%define	XIMPreeditUnKnown	0L
%define	XIMPreeditEnable	1L
%define	XIMPreeditDisable	(1L<<1)

%if __BITS__ > 32
NASMX_STRUC XIMPreeditStateNotifyCallbackStruct
	NASMX_RESERVE state,		uint64_t, 1
NASMX_ENDSTRUC
%endif ;;__BITS__ > 32

%define	XIMInitialState		1L
%define	XIMPreserveState	(1L<<1)

%define	XIMStringConversionLeftEdge	(0x00000001)
%define	XIMStringConversionRightEdge	(0x00000002)
%define	XIMStringConversionTopEdge	(0x00000004)
%define	XIMStringConversionBottomEdge	(0x00000008)
%define	XIMStringConversionConcealed	(0x00000010)
%define	XIMStringConversionWrapped	(0x00000020)

%if __BITS__ > 32
NASMX_STRUC XIMStringConversionText
	NASMX_RESERVE length,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 6
	NASMX_RESERVE feedback,		uint64_t, 1
	NASMX_RESERVE encoding_is_wchar,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
;;;    union {
;;; char *mbs;
;;; wchar_t *wcs;
;;;    } string;
	NASMX_RESERVE string,		uint64_t, 1

NASMX_ENDSTRUC

%endif  ;;__BITS__ > 32

%define	XIMStringConversionBuffer	(0x0001)
%define	XIMStringConversionLine		(0x0002)
%define	XIMStringConversionWord		(0x0003)
%define	XIMStringConversionChar		(0x0004)
%define	XIMStringConversionSubstitution	(0x0001)
%define	XIMStringConversionRetrieval	(0x0002)

;;enum XIMCaretDirection
%define XIMCaretDirection.XIMLineStart 	 8
%define XIMCaretDirection.XIMAbsolutePosition 	 10
%define XIMCaretDirection.XIMCaretDown 	 5
%define XIMCaretDirection.XIMNextLine 	 6
%define XIMCaretDirection.XIMForwardWord 	 2
%define XIMCaretDirection.XIMForwardChar 	 0
%define XIMCaretDirection.XIMCaretUp 	 4
%define XIMCaretDirection.XIMLineEnd 	 9
%define XIMCaretDirection.XIMBackwardChar 	 1
%define XIMCaretDirection.XIMBackwardWord 	 3
%define XIMCaretDirection.XIMPreviousLine 	 7
%define XIMCaretDirection.XIMDontChange 	 11

%if __BITS__ > 32

NASMX_STRUC XIMStringConversionCallbackStruct
	NASMX_RESERVE position,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
	NASMX_RESERVE direction,		uint32_t, 1
	NASMX_RESERVE operation,		uint16_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 2
	NASMX_RESERVE factor,		uint32_t, 1
	NASMX_RESERVE text,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XIMPreeditDrawCallbackStruct
	NASMX_RESERVE caret,		uint32_t, 1
	NASMX_RESERVE chg_first,		uint32_t, 1
	NASMX_RESERVE chg_length,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE text,		uint64_t, 1
NASMX_ENDSTRUC

%endif ;;__BITS__ > 32

;;enum XIMCaretStyle
%define XIMCaretStyle.XIMIsInvisible 	 0
%define XIMCaretStyle.XIMIsPrimary 	 1
%define XIMCaretStyle.XIMIsSecondary 	 2

%if __BITS__ > 32

NASMX_STRUC XIMPreeditCaretCallbackStruct
	NASMX_RESERVE position,		uint32_t, 1
	NASMX_RESERVE direction,		uint32_t, 1
	NASMX_RESERVE style,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XIMStatusDrawCallbackStruct
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
;;;    union {
;;; XIMText *text;
;;; Pixmap bitmap;
;;;    } data;
	NASMX_RESERVE data,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XIMHotKeyTrigger
	NASMX_RESERVE keysym,		uint64_t, 1
	NASMX_RESERVE modifier,		uint32_t, 1
	NASMX_RESERVE modifier_mask,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XIMHotKeyTriggers
	NASMX_RESERVE num_hot_key,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 4
	NASMX_RESERVE key,		uint64_t, 1
NASMX_ENDSTRUC

%endif ;;__BITS__ > 32
%define	XIMHotKeyStateON	(0x0001L)
%define	XIMHotKeyStateOFF	(0x0002L)

%if __BITS__ > 32
NASMX_STRUC XIMValuesList
	NASMX_RESERVE count_values,		uint32_t, 1
	NASMX_RESERVE supported_values,		uint32_t, 1
NASMX_ENDSTRUC
%endif ;;__BITS__ > 32

%endif ;;__X11_XLIB_INC__
