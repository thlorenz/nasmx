;*****************************
;***** The NASMX Project *****
;*****************************
;;Translated by Mathi 

%ifndef __X11_XUTIL_INC__
%define __X11_XUTIL_INC__

%include "x11/Xlib.inc"

%define NoValue		0x0000 
%define XValue  	0x0001 
%define YValue		0x0002 
%define WidthValue  	0x0004 
%define HeightValue  	0x0008 
%define AllValues 	0x000F 
%define XNegative 	0x0010 
%define YNegative 	0x0020 
%define WithdrawnState 0	  
%define NormalState 1	  
%define IconicState 3	  
%define DontCareState 0	  
%define ZoomState 2	  
%define InactiveState 4	  
%define XNoMemory -1 
%define XLocaleNotSupported -2 
%define XConverterNotFound -3 
%define RectangleOut 0 
%define RectangleIn  1 
%define RectanglePart 2 
%define VisualNoMask		0x0 
%define VisualIDMask 		0x1 
%define VisualScreenMask	0x2 
%define VisualDepthMask		0x4 
%define VisualClassMask		0x8 
%define VisualRedMaskMask	0x10 
%define VisualGreenMaskMask	0x20 
%define VisualBlueMaskMask	0x40 
%define VisualColormapSizeMask	0x80 
%define VisualBitsPerRGBMask	0x100 
%define VisualAllMask		0x1FF 
%define BitmapSuccess		0 
%define BitmapOpenFailed 	1 
%define BitmapFileInvalid 	2 
%define BitmapNoMemory		3 
%define XCSUCCESS 0	  
%define XCNOMEM   1      
%define XCNOENT   2      


NASMX_STRUC XSizeHints
	NASMX_RESERVE flags,		uint64_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE min_width,		uint32_t, 1
	NASMX_RESERVE min_height,		uint32_t, 1
	NASMX_RESERVE max_width,		uint32_t, 1
	NASMX_RESERVE max_height,		uint32_t, 1
	NASMX_RESERVE width_inc,		uint32_t, 1
	NASMX_RESERVE height_inc,		uint32_t, 1
	NASMX_RESERVE min_aspect@@@x,		uint32_t, 1
	NASMX_RESERVE min_aspect@@@y,		uint32_t, 1
	NASMX_RESERVE max_aspect@@@x,		uint32_t, 1
	NASMX_RESERVE max_aspect@@@y,		uint32_t, 1
	NASMX_RESERVE base_width,		uint32_t, 1
	NASMX_RESERVE base_height,		uint32_t, 1
	NASMX_RESERVE win_gravity,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XWMHints
	NASMX_RESERVE flags,		uint32_t, 1
	NASMX_RESERVE input,		uint32_t, 1
	NASMX_RESERVE initial_state,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		int8_t, 4
	NASMX_RESERVE icon_pixmap,		uint64_t, 1
	NASMX_RESERVE icon_window,		uint64_t, 1
	NASMX_RESERVE icon_x,		uint32_t, 1
	NASMX_RESERVE icon_y,		uint32_t, 1
	NASMX_RESERVE icon_mask,		uint64_t, 1
	NASMX_RESERVE window_group,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XTextProperty
	NASMX_RESERVE value,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		int8_t, 4
	NASMX_RESERVE encoding,		uint64_t, 1
	NASMX_RESERVE format,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,		int8_t, 4
	NASMX_RESERVE nitems,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XIconSize
	NASMX_RESERVE min_width,		uint32_t, 1
	NASMX_RESERVE min_height,		uint32_t, 1
	NASMX_RESERVE max_width,		uint32_t, 1
	NASMX_RESERVE max_height,		uint32_t, 1
	NASMX_RESERVE width_inc,		uint32_t, 1
	NASMX_RESERVE height_inc,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XClassHint
	NASMX_RESERVE res_name,		uint64_t, 1
	NASMX_RESERVE res_class,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XComposeStatus
	NASMX_RESERVE compose_ptr,		uint64_t, 1
	NASMX_RESERVE chars_matched,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		int8_t, 4
NASMX_ENDSTRUC

NASMX_STRUC XVisualInfo
	NASMX_RESERVE visual,		uint64_t, 1
	NASMX_RESERVE visualid,		uint64_t, 1
	NASMX_RESERVE screen,		uint32_t, 1
	NASMX_RESERVE depth,		uint32_t, 1
	NASMX_RESERVE class,		uint32_t, 1
	NASMX_RESERVE __PADDING1__,		int8_t, 4
	NASMX_RESERVE red_mask,		uint64_t, 1
	NASMX_RESERVE green_mask,		uint64_t, 1
	NASMX_RESERVE blue_mask,		uint64_t, 1
	NASMX_RESERVE colormap_size,		uint32_t, 1
	NASMX_RESERVE bits_per_rgb,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC XStandardColormap
	NASMX_RESERVE colormap,		uint64_t, 1
	NASMX_RESERVE red_max,		uint64_t, 1
	NASMX_RESERVE red_mult,		uint64_t, 1
	NASMX_RESERVE green_max,		uint64_t, 1
	NASMX_RESERVE green_mult,		uint64_t, 1
	NASMX_RESERVE blue_max,		uint64_t, 1
	NASMX_RESERVE blue_mult,		uint64_t, 1
	NASMX_RESERVE base_pixel,		uint64_t, 1
	NASMX_RESERVE visualid,		uint64_t, 1
	NASMX_RESERVE killid,		uint64_t, 1
NASMX_ENDSTRUC


;;enum XICCEncodingStyle
%define XStdICCTextStyle 	 3
%define XCompoundTextStyle 	 1
%define XTextStyle 	 2
%define XStringStyle 	 0
%define XUTF8StringStyle 	 4


%endif
