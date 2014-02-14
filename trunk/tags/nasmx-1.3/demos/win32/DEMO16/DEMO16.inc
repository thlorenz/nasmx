%ifndef __NASMX_DEMOS_INC__
%define __NASMX_DEMOS_INC__

;// nasmx.inc should always be the first file included
%include "nasmx.inc"

%include "gtk/gtk.inc"

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

%endif  ;// __NASMX_DEMOS_INC__
