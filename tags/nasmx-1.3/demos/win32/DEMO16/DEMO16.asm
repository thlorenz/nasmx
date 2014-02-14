;////////////////////////////////////////////////////////////////
;// DEMO16.ASM
;//
;// Copyright (C)2005-2012 The NASMX Project
;//
;// Purpose:
;//    NASMX - GTK Demo in Windows 32 bit.
;//
;// Contributors:
;//    Mathi
;//
;// This demo needs gtk Runtime dlls.
;// 
;// http://www.gtk.org/download/win32.php
;// All in One Bundle :
;// http://ftp.gnome.org/pub/gnome/binaries/win32/gtk+/2.24/gtk+-bundle_2.24.10-20120208_win32.zip
;//


%include 'nasmx.inc'

%include "gtk/gtk.inc"

ENTRY demo16

IMPORT gtk_init,8
IMPORT gtk_window_new,4
IMPORT gtk_button_new_with_label,4
IMPORT gtk_entry_new,0
IMPORT gtk_hbox_new,8
IMPORT gtk_window_set_title,8
IMPORT gtk_window_set_default_size,12
IMPORT g_signal_connect_data,24
IMPORT gtk_box_pack_start,20
IMPORT gtk_container_add,8
IMPORT gtk_widget_show_all,4
IMPORT gtk_main,0
IMPORT gtk_exit,4
IMPORT gtk_entry_get_text,4
IMPORT gtk_message_dialog_new,20
IMPORT gtk_dialog_run,4
IMPORT gtk_widget_destroy,4
IMPORT gtk_main_quit,0

segment .bss

	window: reserve(uint32_t) 1
	button: reserve(uint32_t) 1
	hbox: reserve(uint32_t) 1
	entrydata: reserve(uint32_t) 1
	msgboxdiag: reserve(uint32_t) 1

segment .code
;;Define the call back functions.
proc cdecl, kill_window, ptrdiff_t widget, ptrdiff_t event, ptrdiff_t data  ;; cdecl for callback function which is called from inside the c library !? 
locals none

	invoke gtk_main_quit
	return 0
endproc

proc cdecl, button_press,ptrdiff_t widget, ptrdiff_t data  ;;cdecl for callback function which is called from inside the c library !? 
locals none

	invoke gtk_entry_get_text,[entrydata]

	invoke gtk_message_dialog_new, [window], GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, eax
	mov [msgboxdiag],eax

	invoke gtk_window_set_title, [msgboxdiag], "Info"

	invoke gtk_dialog_run, [msgboxdiag]

	invoke gtk_widget_destroy, [msgboxdiag]
endproc

;; Our Main proc.
proc demo16
locals none
	invoke gtk_init,NULL,NULL
	
	invoke gtk_window_new, GTK_WINDOW_TOPLEVEL
	mov [window],eax

	invoke gtk_button_new_with_label, "Echo"
	mov [button],eax

	invoke gtk_entry_new
	mov [entrydata],eax

	invoke gtk_hbox_new, FALSE, 2
	mov [hbox],eax

	invoke gtk_window_set_title, [window],"GTK application"
	invoke gtk_window_set_default_size, [window], 200, 200
	invoke g_signal_connect_data,[window], "delete_event", kill_window, 0, 0, 0

	invoke g_signal_connect_data, [button], "clicked", button_press , 0, 0, 0

	;;We pack a textbox and a button into the container. 
	;;The first two parameters are the container and the child widget. 
	;;The next three parameters are expand, fill and padding. 
	;;Note that the fill parameter has no effect, if the expand paramater is set to FALSE.
	
	invoke gtk_box_pack_start, [hbox],[entrydata], TRUE, TRUE, 2
	invoke gtk_box_pack_start, [hbox],[button], FALSE, FALSE, 2

	invoke gtk_container_add, [window], [hbox]

	invoke gtk_widget_show_all, [window]
	
	invoke gtk_main
	
	invoke gtk_exit,0
endproc

