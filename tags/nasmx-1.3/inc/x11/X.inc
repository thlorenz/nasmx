;*****************************
;***** The NASMX Project *****
;*****************************

; Created by Keith Kanios

%ifndef __X11_INC__
%define __X11_INC__

IMPORT XOpenDisplay
IMPORT XCloseDisplay
IMPORT XDefaultScreen
IMPORT XDefaultRootWindow
IMPORT XBlackPixel
IMPORT XWhitePixel
IMPORT XSetStandardProperties
IMPORT XCreateSimpleWindow
IMPORT XDestroyWindow
IMPORT XSelectInput
IMPORT XCreatePixmap
IMPORT XLoadQueryFont
IMPORT XAllPlanes
IMPORT XCreateGC
IMPORT XCreateFontCursor
IMPORT XDefineCursor
IMPORT XClearWindow
IMPORT XMapRaised
IMPORT XNextEvent
IMPORT XDrawString
IMPORT XFlush

; X Protocol
%define X_PROTOCOL 11
%define X_PROTOCOL_REVISION 0

%xdefine XID uint64_t
%xdefine Mask uint64_t
%xdefine Atom uint64_t
%xdefine XIMStyle uint64_t
%xdefine XIMFeedback uint64_t
%xdefine XIMPreeditState uint64_t
%xdefine XIMResetState uint64_t
%xdefine XIMStringConversionFeedback uint64_t
%xdefine XIMHotKeyState uint64_t

%xdefine XIMStringConversionPosition uint16_t
%xdefine XIMStringConversionType uint16_t
%xdefine XIMStringConversionOperation uint16_t



%xdefine Colormap XID
%xdefine Window XID

%xdefine Drawable  XID

%xdefine Font XID

%xdefine Pixmap XID
%xdefine Cursor XID
%xdefine Colormap XID
%xdefine GContext XID
%xdefine KeySym XID
%xdefine KeyCode int8_t

%idefine FALSE 0
%idefine TRUE 1
%idefine NULL 0

; X Constants
%define None 0
%define ParentRelative 1
%define CopyFromParent 0
%define PointerWindow 0
%define InputFocus 1
%define PointerRoot 1
%define AnyPropertyType 0
%define AnyKey 0
%define AnyButton 0
%define AllTemporary 0
%define CurrentTime 0
%define NoSymbol 0

; Event Masks
%define NoEventMask 0h
%define KeyPressMask 1h
%define KeyReleaseMask 2h
%define ButtonPressMask 4h
%define ButtonReleaseMask 8h
%define EnterWindowMask 10h
%define LeaveWindowMask 20h
%define PointerMotionMask 40h
%define PointerMotionHintMask 80h
%define Button1MotionMask 100h
%define Button2MotionMask 200h
%define Button3MotionMask 400h
%define Button4MotionMask 800h
%define Button5MotionMask 1000h
%define ButtonMotionMask 2000h
%define KeymapStateMask 4000h
%define ExposureMask 8000h
%define VisibilityChangeMask 10000h
%define StructureNotifyMask 20000h
%define ResizeRedirectMask 40000h
%define SubstructureNotifyMask 80000h
%define SubstructureRedirectMask 100000h
%define FocusChangeMask 200000h
%define PropertyChangeMask 400000h
%define ColormapChangeMask 800000h
%define OwnerGrabButtonMask 1000000h

; Event Names
%define KeyPress 2
%define KeyRelease 3
%define ButtonPress 4
%define ButtonRelease 5
%define MotionNotify 6
%define EnterNotify 7
%define LeaveNotify 8
%define FocusIn 9
%define FocusOut 10
%define KeymapNotify 11
%define Expose 12
%define GraphicsExpose 13
%define NoExpose 14
%define VisibilityNotify 15
%define CreateNotify 16
%define DestroyNotify 17
%define UnmapNotify 18
%define MapNotify 19
%define MapRequest 20
%define ReparentNotify 21
%define ConfigureNotify 22
%define ConfigureRequest 23
%define GravityNotify 24
%define ResizeRequest 25
%define CirculateNotify 26
%define CirculateRequest 27
%define PropertyNotify 28
%define SelectionClear 29
%define SelectionRequest 30
%define SelectionNotify 31
%define ColormapNotify 32
%define ClientMessage 33
%define MappingNotify 34
%define LASTEvent 35

; Key Masks
%define ShiftMask 1h
%define LockMask 2h
%define ControlMask 4h
%define Mod1Mask 8h
%define Mod2Mask 10h
%define Mod3Mask 20h
%define Mod4Mask 40h
%define Mod5Mask 80h

; Modifier Names
%define ShiftMapIndex 0
%define LockMapIndex 1
%define ControlMapIndex 2
%define Mod1MapIndex 3
%define Mod2MapIndex 4
%define Mod3MapIndex 5
%define Mod4MapIndex 6
%define Mod5MapIndex 7

; Button Masks
%define Button1Mask 100h
%define Button2Mask 200h
%define Button3Mask 400h
%define Button4Mask 800h
%define Button5Mask 1000h
%define AnyModifier 10000h

; Button Names
%define Button1 1
%define Button2 2
%define Button3 3
%define Button4 4
%define Button5 5

; Notify Modes
%define NotifyNormal 0
%define NotifyGrab 1
%define NotifyUngrab 2
%define NotifyWhileGrabbed 3
%define NotifyHint 1
		       
; Notify Detail
%define NotifyAncestor 0
%define NotifyVirtual 1
%define NotifyInferior 2
%define NotifyNonlinear 3
%define NotifyNonlinearVirtual 4
%define NotifyPointer 5
%define NotifyPointerRoot 6
%define NotifyDetailNone 7

; Visibility Notify
%define VisibilityUnobscured 0
%define VisibilityPartiallyObscured 1
%define VisibilityFullyObscured 2

; Circulation request
%define PlaceOnTop 0
%define PlaceOnBottom 1

; Protocol Families
%define FamilyInternet 0
%define FamilyDECnet 1
%define FamilyChaos 2
%define FamilyInternet6 6

; Unspecific authentication families
%define FamilyServerInterpreted 5

;Property Notification
%define PropertyNewValue 0
%define PropertyDelete 1

; Color Map notification
%define ColormapUninstalled 0
%define ColormapInstalled 1

; Grab Modes
%define GrabModeSync 0
%define GrabModeAsync 1

; Grab reply status
%define GrabSuccess 0
%define AlreadyGrabbed 1
%define GrabInvalidTime 2
%define GrabNotViewable 3
%define GrabFrozen 4

; AllowEvents modes
%define AsyncPointer 0
%define SyncPointer 1
%define ReplayPointer 2
%define AsyncKeyboard 3
%define SyncKeyboard 4
%define ReplayKeyboard 5
%define AsyncBoth 6
%define SyncBoth 7

; InputFocus specific
%define RevertToNone None
%define RevertToPointerRoot PointerRoot
%define RevertToParent 2

; Error Codes
%define Success 0
%define BadRequest 1
%define BadValue 2
%define BadWindow 3
%define BadPixmap 4
%define BadAtom 5
%define BadCursor 6
%define BadFont 7
%define BadMatch 8
%define BadDrawable 9
%define BadAccess 10
%define BadAlloc 11
%define BadColor 12
%define BadGC 13
%define BadIDChoice 14
%define BadName 15
%define BadLength 16
%define BadImplementation 17
%define FirstExtensionError 128
%define LastExtensionError 255

; Window Classes
%define InputOutput 1
%define InputOnly 2

; Window Attributes
%define CWBackPixmap 1h
%define CWBackPixel 2h
%define CWBorderPixmap 4h
%define CWBorderPixel 8h
%define CWBitGravity 10h
%define CWWinGravity 20h
%define CWBackingStore 40h
%define CWBackingPlanes 80h
%define CWBackingPixel 100h
%define CWOverrideRedirect 200h
%define CWSaveUnder 400h
%define CWEventMask 800h
%define CWDontPropagate 1000h
%define CWColormap 2000h
%define CWCursor 4000h

; ConfigureWindow Structure
%define CWX 1h
%define CWY 2h
%define CWWidth 3h
%define CWHeight 4h
%define CWBorderWidth 5h
%define CWSibling 6h
%define CWStackMode 7h

; Bit Gravity
%define ForgetGravity 0
%define NorthWestGravity 1
%define NorthGravity 2
%define NorthEastGravity 3
%define WestGravity 4
%define CenterGravity 5
%define EastGravity 6
%define SouthWestGravity 7
%define SouthGravity 8
%define SouthEastGravity 9
%define StaticGravity 10

; Window Gravity
%define UnmapGravity 0

; CreateWindow backing-store hint
%define NotUseful 0
%define WhenMapped 1
%define Always 2

; GetWindowAttributes reply
%define IsUnmapped 0
%define IsUnviewable 1
%define IsViewable 2

; Used in ChangeSaveSet
%define SetModeInsert 0
%define SetModeDelete 1

; Used in ChangeCloseDownMode
%define DestroyAll 0
%define RetainPermanent 1
%define RetainTemporary 2

; Window stacking method (in configureWindow)
%define Above 0
%define Below 1
%define TopIf 2
%define BottomIf 3
%define Opposite 4

; Circulation direction
%define RaiseLowest 0
%define LowerHighest 1

; Property modes
%define PropModeReplace 0
%define PropModePrepend 1
%define PropModeAppend 2

; Graphics Functions
%define	GXclear 0h
%define GXand 1h
%define GXandReverse 2h
%define GXcopy 3h
%define GXandInverted 4h
%define	GXnoop 5h
%define GXxor 6h
%define GXor 7h
%define GXnor 8h
%define GXequiv 9h
%define GXinvert 10h
%define GXorReverse 11h
%define GXcopyInverted 12h
%define GXorInverted 13h
%define GXnand 14h
%define GXset 15h

; LineStyle
%define LineSolid 0
%define LineOnOffDash 1
%define LineDoubleDash 2

; capStyle
%define CapNotLast 0
%define CapButt 1
%define CapRound 2
%define CapProjecting 3

; joinStyle
%define JoinMiter 0
%define JoinRound 1
%define JoinBevel 2

; fillStyle
%define FillSolid 0
%define FillTiled 1
%define FillStippled 2
%define FillOpaqueStippled 3

; fillRule
%define EvenOddRule 0
%define WindingRule 1

; subwindow mode
%define ClipByChildren 0
%define IncludeInferiors 1

; SetClipRectangles ordering
%define Unsorted 0
%define YSorted 1
%define YXSorted 2
%define YXBanded 3

; CoordinateMode for drawing routines
%define CoordModeOrigin 0
%define CoordModePrevious 1

; Polygon shapes
%define Complex 0
%define Nonconvex 1
%define Convex 2

; Arc modes for PolyFillArc
%define ArcChord 0
%define ArcPieSlice 1

; GC components
%define GCFunction 1h
%define GCPlaneMask 2h
%define GCForeground 4h
%define GCBackground 8h
%define GCLineWidth 10h
%define GCLineStyle 20h
%define GCCapStyle 40h
%define GCJoinStyle 80h
%define GCFillStyle 100h
%define GCFillRule 200h 
%define GCTile 400h
%define GCStipple 800h
%define GCTileStipXOrigin 1000h
%define GCTileStipYOrigin 2000h
%define GCFont 4000h
%define GCSubwindowMode 8000h
%define GCGraphicsExposures 10000h
%define GCClipXOrigin 20000h
%define GCClipYOrigin 40000h
%define GCClipMask 80000h
%define GCDashOffset 100000h
%define GCDashList 200000h
%define GCArcMode 400000h

%define GCLastBit 22

; used in QueryFont -- draw direction
%define FontLeftToRight 0
%define FontRightToLeft 1

%define FontChange 255

; ImageFormat -- PutImage, GetImage
%define XYBitmap 0
%define XYPixmap 1
%define ZPixmap 2

; For CreateColormap
%define AllocNone 0
%define AllocAll 1


; Flags used in StoreNamedColor, StoreColors
%define DoRed 1h
%define DoGreen 2h
%define DoBlue 4h

; QueryBestSize Class
%define CursorShape 0
%define TileShape 1
%define StippleShape 2

; Keyboard pointer stuff
%define AutoRepeatModeOff 0
%define AutoRepeatModeOn 1
%define AutoRepeatModeDefault 2

%define LedModeOff 0
%define LedModeOn 1

; masks for ChangeKeyboardControl

%define KBKeyClickPercent 1h
%define KBBellPercent 2h
%define KBBellPitch 4h
%define KBBellDuration 8h
%define KBLed 10h
%define KBLedMode 20h
%define KBKey 40h
%define KBAutoRepeatMode 80h

%define MappingSuccess 0
%define MappingBusy 1
%define MappingFailed 2

%define MappingModifier 0
%define MappingKeyboard 1
%define MappingPointer 2

; Screensaver stuff
%define DontPreferBlanking 0
%define PreferBlanking 1
%define DefaultBlanking 2

%define DisableScreenSaver 0
%define DisableScreenInterval 0

%define DontAllowExposures 0
%define AllowExposures 1
%define DefaultExposures 2

; for ForceScreenSaver
%define ScreenSaverReset 0
%define ScreenSaverActive 1

; for ChangeHosts

%define HostInsert 0
%define HostDelete 1

; for ChangeAccessControl

%define EnableAccess 1      
%define DisableAccess 0

; display classes

%define StaticGray 0
%define GrayScale 1
%define StaticColor 2
%define PseudoColor 3
%define TrueColor 4
%define DirectColor 5


; Byte order  used in imageByteOrder and bitmapBitOrder

%define LSBFirst 0
%define MSBFirst 1

%endif ;;__X_INC__
