;*****************************
;***** The NASMX Project *****
;*****************************
;;Translated by Mathi 
;;

%ifndef __GTK_INC__
%define __GTK_INC__

%define NULL 0
%define false		0
%define true		1
%define TRUE 1
%define FALSE 0

%define G_MINFLOAT	FLT_MIN 
%define G_MAXFLOAT	FLT_MAX 
%define G_MINDOUBLE	DBL_MIN 
%define G_MAXDOUBLE	DBL_MAX 
%define G_MINSHORT	SHRT_MIN 
%define G_MAXSHORT	SHRT_MAX 
%define G_MAXUSHORT	USHRT_MAX 
%define G_MININT	INT_MIN 
%define G_MAXINT	INT_MAX 
%define G_MAXUINT	UINT_MAX 
%define G_MINLONG	LONG_MIN 
%define G_MAXLONG	LONG_MAX 
%define G_MAXULONG	ULONG_MAX 
%define G_GINT16_MODIFIER "h" 
%define G_GINT16_FORMAT "hi" 
%define G_GUINT16_FORMAT "hu" 
%define G_GINT32_MODIFIER "" 
%define G_GINT32_FORMAT "i" 
%define G_GUINT32_FORMAT "u" 
%define G_HAVE_GINT64 1           
%define G_GINT64_MODIFIER "I64" 
%define G_GINT64_FORMAT "I64i" 
%define G_GUINT64_FORMAT "I64u" 
%define GLIB_SIZEOF_VOID_P 8 
%define GLIB_SIZEOF_LONG   4 
%define GLIB_SIZEOF_SIZE_T 8 
%define G_GSIZE_MODIFIER "I64" 
%define G_GSSIZE_FORMAT "I64d" 
%define G_GSIZE_FORMAT "I64u" 
%define G_MAXSIZE	G_MAXUINT64 
%define G_MINSSIZE	G_MININT64 
%define G_MAXSSIZE	G_MAXINT64 
%define GLIB_SIZEOF_VOID_P 4 
%define GLIB_SIZEOF_SIZE_T 4 
%define G_GSIZE_MODIFIER "" 
%define G_GSSIZE_FORMAT "i" 
%define G_GSIZE_FORMAT "u" 
%define G_MAXSIZE	G_MAXUINT 
%define G_MINSSIZE	G_MININT 
%define G_MAXSSIZE	G_MAXINT 
%define G_MINOFFSET	G_MININT64 
%define G_MAXOFFSET	G_MAXINT64 
%define G_GOFFSET_MODIFIER      G_GINT64_MODIFIER 
%define G_GOFFSET_FORMAT        G_GINT64_FORMAT 
%define G_GINTPTR_MODIFIER      "" 
%define G_GINTPTR_FORMAT        "i" 
%define G_GUINTPTR_FORMAT       "u" 
%define G_GINTPTR_MODIFIER      "I64" 
%define G_GINTPTR_FORMAT        "I64i" 
%define G_GUINTPTR_FORMAT       "I64u" 
%define GLIB_MAJOR_VERSION 2 
%define GLIB_MINOR_VERSION 28 
%define GLIB_MICRO_VERSION 8 
%define G_VA_COPY	va_copy 
%define G_HAVE_INLINE	1 
%define G_HAVE_INLINE 1 
%define G_HAVE___INLINE 1 
%define G_HAVE___INLINE__ 1 
%define G_CAN_INLINE	1 
%define G_HAVE_ISO_VARARGS 1 
%define G_HAVE_GROWING_STACK 0 
%define G_THREADS_ENABLED 
%define G_STATIC_MUTEX_INIT NULL 
%define G_BYTE_ORDER G_LITTLE_ENDIAN 
%define GLIB_SYSDEF_POLLIN =1 
%define GLIB_SYSDEF_POLLOUT =4 
%define GLIB_SYSDEF_POLLPRI =2 
%define GLIB_SYSDEF_POLLHUP =16 
%define GLIB_SYSDEF_POLLERR =8 
%define GLIB_SYSDEF_POLLNVAL =32 
%define G_MODULE_SUFFIX "dll" 
%define GLIB_SYSDEF_AF_UNIX 1 
%define GLIB_SYSDEF_AF_INET 2 
%define GLIB_SYSDEF_AF_INET6 23 
%define GLIB_SYSDEF_MSG_OOB       1 
%define GLIB_SYSDEF_MSG_PEEK      2 
%define GLIB_SYSDEF_MSG_DONTROUTE 4 
%define G_E     2.7182818284590452353602874713526624977572470937000 
%define G_LN2   0.69314718055994530941723212145817656807550013436026 
%define G_LN10  2.3025850929940456840179914546843642076011014886288 
%define G_PI    3.1415926535897932384626433832795028841971693993751 
%define G_PI_2  1.5707963267948966192313216916397514420985846996876 
%define G_PI_4  0.78539816339744830961566084581987572104929234984378 
%define G_SQRT2 1.4142135623730950488016887242096980785696718753769 
%define G_LITTLE_ENDIAN 1234 
%define G_BIG_ENDIAN    4321 
%define G_PDP_ENDIAN    3412			 
%define GLIB_VAR extern 
%define G_DIR_SEPARATOR '\\' 
%define G_DIR_SEPARATOR_S "\\" 
%define G_SEARCHPATH_SEPARATOR ';' 
%define G_SEARCHPATH_SEPARATOR_S ";" 
%define G_DIR_SEPARATOR '/' 
%define G_DIR_SEPARATOR_S "/" 
%define G_SEARCHPATH_SEPARATOR ':' 
%define G_SEARCHPATH_SEPARATOR_S ":" 
%define inline __inline__ 
%define inline __inline 
%define inline   
%define G_INLINE_FUNC 
%define G_INLINE_FUNC static inline 
%define g_get_user_name g_get_user_name_utf8 
%define g_get_real_name g_get_real_name_utf8 
%define g_get_home_dir g_get_home_dir_utf8 
%define g_get_tmp_dir g_get_tmp_dir_utf8 
%define g_get_system_data_dirs _g_win32_get_system_data_dirs 
%define g_dirname g_path_get_dirname 
%define g_get_current_dir g_get_current_dir_utf8 
%define g_getenv g_getenv_utf8 
%define g_setenv g_setenv_utf8 
%define g_unsetenv g_unsetenv_utf8 
%define g_find_program_in_path g_find_program_in_path_utf8 
%define G_NATIVE_ATEXIT 
%define G_MUTEX_DEBUG_MAGIC 0xf8e18ad7 
%define G_STATIC_PRIVATE_INIT { 0 } 
%define G_STATIC_REC_MUTEX_INIT { G_STATIC_MUTEX_INIT } 
%define G_STATIC_RW_LOCK_INIT { G_STATIC_MUTEX_INIT, NULL, NULL, 0, FALSE, 0, 0 } 
%define G_ONCE_INIT { G_ONCE_STATUS_NOTCALLED, NULL } 
%define G_MEM_ALIGN	GLIB_SIZEOF_VOID_P 
%define G_MEM_ALIGN	GLIB_SIZEOF_LONG 
%define G_ALLOC_ONLY	  1 
%define G_ALLOC_AND_FREE  2 
%define g_list_free1                   g_list_free_1 
%define g_filename_to_utf8 g_filename_to_utf8_utf8 
%define g_filename_from_utf8 g_filename_from_utf8_utf8 
%define g_filename_from_uri g_filename_from_uri_utf8 
%define g_filename_to_uri g_filename_to_uri_utf8  
%define G_DATALIST_FLAGS_MASK 0x3 
%define G_DATE_BAD_JULIAN 0U 
%define G_DATE_BAD_DAY    0U 
%define G_DATE_BAD_YEAR   0U 
%define g_date_weekday 			g_date_get_weekday 
%define g_date_month 			g_date_get_month 
%define g_date_year 			g_date_get_year 
%define g_date_day 			g_date_get_day 
%define g_date_julian 			g_date_get_julian 
%define g_date_day_of_year 		g_date_get_day_of_year 
%define g_date_monday_week_of_year 	g_date_get_monday_week_of_year 
%define g_date_sunday_week_of_year 	g_date_get_sunday_week_of_year 
%define g_date_days_in_month 		g_date_get_days_in_month 
%define g_date_monday_weeks_in_year 	g_date_get_monday_weeks_in_year 
%define g_date_sunday_weeks_in_year	g_date_get_sunday_weeks_in_year 
%define g_dir_open g_dir_open_utf8 
%define g_dir_read_name g_dir_read_name_utf8 
%define g_file_test g_file_test_utf8 
%define g_file_get_contents g_file_get_contents_utf8 
%define g_mkstemp g_mkstemp_utf8 
%define g_file_open_tmp g_file_open_tmp_utf8 
%define G_POLLFD_FORMAT "%#I64x" 
%define G_POLLFD_FORMAT "%#x" 
%define G_POLLFD_FORMAT "%d" 
%define g_slist_free1		         g_slist_free_1 
%define G_PRIORITY_HIGH            -100 
%define G_PRIORITY_DEFAULT          0 
%define G_PRIORITY_HIGH_IDLE        100 
%define G_PRIORITY_DEFAULT_IDLE     200 
%define G_PRIORITY_LOW              300 
%define g_string_sprintf	g_string_printf 
%define g_string_sprintfa	g_string_append_printf 
%define g_io_channel_new_file g_io_channel_new_file_utf8 
%define G_WIN32_MSG_HANDLE 19981206 
%define G_KEY_FILE_DESKTOP_GROUP                "Desktop Entry" 
%define G_KEY_FILE_DESKTOP_KEY_TYPE             "Type" 
%define G_KEY_FILE_DESKTOP_KEY_VERSION          "Version" 
%define G_KEY_FILE_DESKTOP_KEY_NAME             "Name" 
%define G_KEY_FILE_DESKTOP_KEY_GENERIC_NAME     "GenericName" 
%define G_KEY_FILE_DESKTOP_KEY_NO_DISPLAY       "NoDisplay" 
%define G_KEY_FILE_DESKTOP_KEY_COMMENT          "Comment" 
%define G_KEY_FILE_DESKTOP_KEY_ICON             "Icon" 
%define G_KEY_FILE_DESKTOP_KEY_HIDDEN           "Hidden" 
%define G_KEY_FILE_DESKTOP_KEY_ONLY_SHOW_IN     "OnlyShowIn" 
%define G_KEY_FILE_DESKTOP_KEY_NOT_SHOW_IN      "NotShowIn" 
%define G_KEY_FILE_DESKTOP_KEY_TRY_EXEC         "TryExec" 
%define G_KEY_FILE_DESKTOP_KEY_EXEC             "Exec" 
%define G_KEY_FILE_DESKTOP_KEY_PATH             "Path" 
%define G_KEY_FILE_DESKTOP_KEY_TERMINAL         "Terminal" 
%define G_KEY_FILE_DESKTOP_KEY_MIME_TYPE        "MimeType" 
%define G_KEY_FILE_DESKTOP_KEY_CATEGORIES       "Categories" 
%define G_KEY_FILE_DESKTOP_KEY_STARTUP_NOTIFY   "StartupNotify" 
%define G_KEY_FILE_DESKTOP_KEY_STARTUP_WM_CLASS "StartupWMClass" 
%define G_KEY_FILE_DESKTOP_KEY_URL              "URL" 
%define G_KEY_FILE_DESKTOP_TYPE_APPLICATION     "Application" 
%define G_KEY_FILE_DESKTOP_TYPE_LINK            "Link" 
%define G_KEY_FILE_DESKTOP_TYPE_DIRECTORY       "Directory" 
%define G_OPTION_REMAINING "" 
%define G_QUEUE_INIT { NULL, NULL, 0 } 
%define G_CSET_A_2_Z	"ABCDEFGHIJKLMNOPQRSTUVWXYZ" 
%define G_CSET_a_2_z	"abcdefghijklmnopqrstuvwxyz" 
%define G_CSET_DIGITS	"0123456789" 
%define G_CSET_LATINC	"\300\301\302\303\304\305\306"			"\307\310\311\312\313\314\315\316\317\320"			"\321\322\323\324\325\326"			"\330\331\332\333\334\335\336" 
%define G_CSET_LATINS	"\337\340\341\342\343\344\345\346"			"\347\350\351\352\353\354\355\356\357\360"			"\361\362\363\364\365\366"			"\370\371\372\373\374\375\376\377" 
%define g_spawn_async g_spawn_async_utf8 
%define g_spawn_async_with_pipes g_spawn_async_with_pipes_utf8 
%define g_spawn_sync g_spawn_sync_utf8 
%define g_spawn_command_line_sync g_spawn_command_line_sync_utf8 
%define g_spawn_command_line_async g_spawn_command_line_async_utf8 
%define G_STR_DELIMITERS	"_-|> <." 
%define G_USEC_PER_SEC 1000000 
%define G_URI_RESERVED_CHARS_GENERIC_DELIMITERS ":/?#[]@" 
%define G_URI_RESERVED_CHARS_ALLOWED_IN_PATH_ELEMENT G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS ":@" 
%define G_URI_RESERVED_CHARS_ALLOWED_IN_PATH G_URI_RESERVED_CHARS_ALLOWED_IN_PATH_ELEMENT "/" 
%define G_URI_RESERVED_CHARS_ALLOWED_IN_USERINFO G_URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS ":" 
%define MAXPATHLEN 1024 
%define g_win32_get_package_installation_directory g_win32_get_package_installation_directory_utf8 
%define g_win32_get_package_installation_subdirectory g_win32_get_package_installation_subdirectory_utf8 
%define g_cclosure_marshal_BOOL__FLAGS	g_cclosure_marshal_BOOLEAN__FLAGS 
%define g_cclosure_marshal_BOOL__BOXED_BOXED	g_cclosure_marshal_BOOLEAN__BOXED_BOXED 
%define G_SIGNAL_FLAGS_MASK  0x7f 
%define G_SIGNAL_MATCH_MASK  0x3f 
%define GOBJECT_VAR extern 
%define G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN "standard::is-hidden"            
%define G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP "standard::is-backup"            
%define G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK "standard::is-symlink"          
%define G_FILE_ATTRIBUTE_STANDARD_IS_VIRTUAL "standard::is-virtual"          
%define G_FILE_ATTRIBUTE_STANDARD_NAME "standard::name"                      
%define G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME "standard::display-name"      
%define G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME "standard::edit-name"            
%define G_FILE_ATTRIBUTE_STANDARD_COPY_NAME "standard::copy-name"            
%define G_FILE_ATTRIBUTE_STANDARD_DESCRIPTION "standard::description"         
%define G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE "standard::content-type"      
%define G_FILE_ATTRIBUTE_STANDARD_FAST_CONTENT_TYPE "standard::fast-content-type"  
%define G_FILE_ATTRIBUTE_STANDARD_SIZE "standard::size"                      
%define G_FILE_ATTRIBUTE_STANDARD_ALLOCATED_SIZE "standard::allocated-size"  
%define G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET "standard::symlink-target"  
%define G_FILE_ATTRIBUTE_STANDARD_TARGET_URI "standard::target-uri"          
%define G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER "standard::sort-order"          
%define G_FILE_ATTRIBUTE_ETAG_VALUE "etag::value"                  
%define G_FILE_ATTRIBUTE_ID_FILE "id::file"                      
%define G_FILE_ATTRIBUTE_ID_FILESYSTEM "id::filesystem"          
%define G_FILE_ATTRIBUTE_ACCESS_CAN_READ "access::can-read"        
%define G_FILE_ATTRIBUTE_ACCESS_CAN_WRITE "access::can-write"      
%define G_FILE_ATTRIBUTE_ACCESS_CAN_EXECUTE "access::can-execute"  
%define G_FILE_ATTRIBUTE_ACCESS_CAN_DELETE "access::can-delete"    
%define G_FILE_ATTRIBUTE_ACCESS_CAN_TRASH "access::can-trash"      
%define G_FILE_ATTRIBUTE_ACCESS_CAN_RENAME "access::can-rename"    
%define G_FILE_ATTRIBUTE_MOUNTABLE_CAN_MOUNT "mountable::can-mount"      
%define G_FILE_ATTRIBUTE_MOUNTABLE_CAN_UNMOUNT "mountable::can-unmount"  
%define G_FILE_ATTRIBUTE_MOUNTABLE_CAN_EJECT "mountable::can-eject"      
%define G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE "mountable::unix-device"  
%define G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE_FILE "mountable::unix-device-file"  
%define G_FILE_ATTRIBUTE_MOUNTABLE_HAL_UDI "mountable::hal-udi"          
%define G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START "mountable::can-start"      
%define G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START_DEGRADED "mountable::can-start-degraded"      
%define G_FILE_ATTRIBUTE_MOUNTABLE_CAN_STOP "mountable::can-stop"       
%define G_FILE_ATTRIBUTE_MOUNTABLE_CAN_POLL "mountable::can-poll"       
%define G_FILE_ATTRIBUTE_MOUNTABLE_IS_MEDIA_CHECK_AUTOMATIC "mountable::is-media-check-automatic"       
%define G_FILE_ATTRIBUTE_TIME_MODIFIED "time::modified"            
%define G_FILE_ATTRIBUTE_TIME_MODIFIED_USEC "time::modified-usec"  
%define G_FILE_ATTRIBUTE_TIME_ACCESS "time::access"                
%define G_FILE_ATTRIBUTE_TIME_ACCESS_USEC "time::access-usec"      
%define G_FILE_ATTRIBUTE_TIME_CHANGED "time::changed"              
%define G_FILE_ATTRIBUTE_TIME_CHANGED_USEC "time::changed-usec"    
%define G_FILE_ATTRIBUTE_TIME_CREATED "time::created"              
%define G_FILE_ATTRIBUTE_TIME_CREATED_USEC "time::created-usec"    
%define G_FILE_ATTRIBUTE_UNIX_DEVICE "unix::device"                
%define G_FILE_ATTRIBUTE_UNIX_INODE "unix::inode"                  
%define G_FILE_ATTRIBUTE_UNIX_MODE "unix::mode"                    
%define G_FILE_ATTRIBUTE_UNIX_NLINK "unix::nlink"                  
%define G_FILE_ATTRIBUTE_UNIX_UID "unix::uid"                      
%define G_FILE_ATTRIBUTE_UNIX_GID "unix::gid"                      
%define G_FILE_ATTRIBUTE_UNIX_RDEV "unix::rdev"                    
%define G_FILE_ATTRIBUTE_UNIX_BLOCK_SIZE "unix::block-size"        
%define G_FILE_ATTRIBUTE_UNIX_BLOCKS "unix::blocks"                
%define G_FILE_ATTRIBUTE_UNIX_IS_MOUNTPOINT "unix::is-mountpoint"  
%define G_FILE_ATTRIBUTE_DOS_IS_ARCHIVE "dos::is-archive"          
%define G_FILE_ATTRIBUTE_DOS_IS_SYSTEM "dos::is-system"            
%define G_FILE_ATTRIBUTE_OWNER_USER "owner::user"                  
%define G_FILE_ATTRIBUTE_OWNER_USER_REAL "owner::user-real"        
%define G_FILE_ATTRIBUTE_OWNER_GROUP "owner::group"                
%define G_FILE_ATTRIBUTE_THUMBNAIL_PATH "thumbnail::path"          
%define G_FILE_ATTRIBUTE_THUMBNAILING_FAILED "thumbnail::failed"          
%define G_FILE_ATTRIBUTE_FILESYSTEM_SIZE "filesystem::size"                        
%define G_FILE_ATTRIBUTE_FILESYSTEM_FREE "filesystem::free"                        
%define G_FILE_ATTRIBUTE_FILESYSTEM_TYPE "filesystem::type"                        
%define G_FILE_ATTRIBUTE_FILESYSTEM_READONLY "filesystem::readonly"                
%define G_FILE_ATTRIBUTE_GVFS_BACKEND "gvfs::backend"              
%define G_FILE_ATTRIBUTE_SELINUX_CONTEXT "selinux::context"        
%define G_FILE_ATTRIBUTE_TRASH_ITEM_COUNT "trash::item-count"      
%define G_FILE_ATTRIBUTE_TRASH_ORIG_PATH "trash::orig-path"      
%define G_FILE_ATTRIBUTE_TRASH_DELETION_DATE "trash::deletion-date"   
%define G_MODULE_IMPORT		extern 
%define G_MODULE_EXPORT 
%define g_module_open g_module_open_utf8 
%define g_module_name g_module_name_utf8 
%define G_VOLUME_MONITOR_EXTENSION_POINT_NAME "gio-volume-monitor" 
%define G_NATIVE_VOLUME_MONITOR_EXTENSION_POINT_NAME "gio-native-volume-monitor" 
%define G_PROXY_EXTENSION_POINT_NAME "gio-proxy" 
%define G_PROXY_RESOLVER_EXTENSION_POINT_NAME "gio-proxy-resolver" 
%define G_TLS_BACKEND_EXTENSION_POINT_NAME "gio-tls-backend" 
%define G_VFS_EXTENSION_POINT_NAME "gio-vfs" 
%define G_VOLUME_IDENTIFIER_KIND_HAL_UDI "hal-udi" 
%define G_VOLUME_IDENTIFIER_KIND_UNIX_DEVICE "unix-device" 
%define G_VOLUME_IDENTIFIER_KIND_LABEL "label" 
%define G_VOLUME_IDENTIFIER_KIND_UUID "uuid" 
%define G_VOLUME_IDENTIFIER_KIND_NFS_MOUNT "nfs-mount" 
%define PANGO_SCALE 1024 
%define PANGO_MATRIX_INIT { 1., 0., 0., 1., 0., 0. } 
%define PANGO_UNKNOWN_GLYPH_WIDTH  10 
%define PANGO_UNKNOWN_GLYPH_HEIGHT 14 
%define PANGO_ATTR_INDEX_FROM_TEXT_BEGINNING	0 
%define PANGO_ATTR_INDEX_TO_TEXT_END		G_MAXUINT 
%define PANGO_RENDER_TYPE_NONE "PangoRenderNone" 
%define PANGO_ENGINE_TYPE_LANG "PangoEngineLang" 
%define PANGO_ENGINE_TYPE_SHAPE "PangoEngineShape" 
%define PANGO_FEATURES_H 
%define PANGO_VERSION_MAJOR 1 
%define PANGO_VERSION_MINOR 29 
%define PANGO_VERSION_MICRO 4 
%define PANGO_VERSION_STRING "1.29.4" 
%define __PANGO_RENDERER_H_ 
%define GDKVAR extern 
%define GDK_CURRENT_TIME     0L 
%define GDK_PARENT_RELATIVE  1L 
%define gdk_rgb_get_cmap               gdk_rgb_get_colormap 
%define GDK_PIXBUF_H 
%define GDK_PIXBUF_H_INSIDE 
%define GDK_PIXBUF_FEATURES_H 1 
%define GDK_PIXBUF_VERSION "2.24.0" 
%define GDK_PIXBUF_VAR extern 
%define GDK_PIXBUF_CORE_H 
%define gdk_pixbuf_new_from_file gdk_pixbuf_new_from_file_utf8 
%define gdk_pixbuf_new_from_file_at_size gdk_pixbuf_new_from_file_at_size_utf8 
%define gdk_pixbuf_new_from_file_at_scale gdk_pixbuf_new_from_file_at_scale_utf8 
%define gdk_pixbuf_save gdk_pixbuf_save_utf8 
%define gdk_pixbuf_savev gdk_pixbuf_savev_utf8 
%define GDK_PIXBUF_TRANSFORM_H 
%define GDK_PIXBUF_ANIMATION_H 
%define gdk_pixbuf_animation_new_from_file gdk_pixbuf_animation_new_from_file_utf8 
%define GDK_PIXBUF_SIMPLE_ANIM_H 
%define GDK_PIXBUF_IO_H 
%define GDK_PIXBUF_LOADER_H 
%define gdk_cursor_destroy             gdk_cursor_unref 
%define GDK_MAX_TIMECOORD_AXES 128 
%define gdk_gc_destroy                 g_object_unref 
%define gdk_draw_pixmap                gdk_draw_drawable 
%define gdk_draw_bitmap                gdk_draw_drawable 
%define gdk_image_destroy              g_object_unref 
%define gdk_bitmap_ref                 g_object_ref 
%define gdk_bitmap_unref               g_object_unref 
%define gdk_pixmap_ref                 g_object_ref 
%define gdk_pixmap_unref               g_object_unref 
%define gdk_window_get_size            gdk_drawable_get_size 
%define gdk_window_get_type            gdk_window_get_window_type 
%define gdk_window_get_colormap        gdk_drawable_get_colormap 
%define gdk_window_set_colormap        gdk_drawable_set_colormap 
%define gdk_window_ref                 g_object_ref 
%define gdk_window_unref               g_object_unref 
%define GTK_PATH_PRIO_MASK 0x0f 
%define gtk_accel_group_ref	g_object_ref 
%define gtk_accel_group_unref	g_object_unref 
%define GTK_TYPE_INVALID G_TYPE_INVALID 
%define GTK_TYPE_NONE    G_TYPE_NONE 
%define GTK_TYPE_ENUM    G_TYPE_ENUM 
%define GTK_TYPE_FLAGS   G_TYPE_FLAGS 
%define GTK_TYPE_CHAR    G_TYPE_CHAR 
%define GTK_TYPE_UCHAR   G_TYPE_UCHAR 
%define GTK_TYPE_BOOL    G_TYPE_BOOLEAN 
%define GTK_TYPE_INT     G_TYPE_INT 
%define GTK_TYPE_UINT    G_TYPE_UINT 
%define GTK_TYPE_LONG    G_TYPE_LONG 
%define GTK_TYPE_ULONG   G_TYPE_ULONG 
%define GTK_TYPE_FLOAT   G_TYPE_FLOAT 
%define GTK_TYPE_DOUBLE  G_TYPE_DOUBLE 
%define GTK_TYPE_STRING  G_TYPE_STRING 
%define GTK_TYPE_BOXED   G_TYPE_BOXED 
%define GTK_TYPE_POINTER G_TYPE_POINTER 
%define GTK_FUNDAMENTAL_TYPE	G_TYPE_FUNDAMENTAL 
%define GTK_STRUCT_OFFSET	G_STRUCT_OFFSET 
%define GTK_CHECK_CAST		G_TYPE_CHECK_INSTANCE_CAST 
%define GTK_CHECK_CLASS_CAST	G_TYPE_CHECK_CLASS_CAST 
%define GTK_CHECK_GET_CLASS	G_TYPE_INSTANCE_GET_CLASS 
%define GTK_CHECK_TYPE		G_TYPE_CHECK_INSTANCE_TYPE 
%define GTK_CHECK_CLASS_TYPE	G_TYPE_CHECK_CLASS_TYPE 
%define GTKVAR extern 
%define GTK_OBJECT_TYPE                   G_OBJECT_TYPE 
%define GTK_OBJECT_TYPE_NAME              G_OBJECT_TYPE_NAME 
%define gtk_object_data_try_key	    g_quark_try_string 
%define gtk_object_data_force_id    g_quark_from_string 
%define gtk_rc_add_default_file gtk_rc_add_default_file_utf8 
%define gtk_rc_set_default_files gtk_rc_set_default_files_utf8 
%define gtk_rc_parse gtk_rc_parse_utf8 
%define gtk_widget_ref g_object_ref 
%define gtk_widget_unref g_object_unref 
%define gtk_container_children gtk_container_get_children 
%define gtk_container_border_width		gtk_container_set_border_width 
%define gtk_window_set_icon_from_file gtk_window_set_icon_from_file_utf8 
%define gtk_window_set_default_icon_from_file gtk_window_set_default_icon_from_file_utf8 
%define gtk_window_position			gtk_window_set_position 
%define gtk_label_set           gtk_label_set_text 
%define gtk_accel_label_accelerator_width	gtk_accel_label_get_accel_width 
%define gtk_accel_map_load gtk_accel_map_load_utf8 
%define gtk_accel_map_save gtk_accel_map_save_utf8 
%define GTK_BUTTONBOX_DEFAULT -1 
%define gtk_binding_entry_add		gtk_binding_entry_clear 
%define gtk_image_new_from_file gtk_image_new_from_file_utf8 
%define gtk_image_set_from_file gtk_image_set_from_file_utf8 
%define gtk_toggle_button_set_state		gtk_toggle_button_set_active 
%define gtk_check_menu_item_set_state		gtk_check_menu_item_set_active 
%define GTK_ENTRY_BUFFER_MAX_SIZE        G_MAXUSHORT 
%define gtk_file_chooser_get_filename gtk_file_chooser_get_filename_utf8 
%define gtk_file_chooser_set_filename gtk_file_chooser_set_filename_utf8 
%define gtk_file_chooser_select_filename gtk_file_chooser_select_filename_utf8 
%define gtk_file_chooser_unselect_filename gtk_file_chooser_unselect_filename_utf8 
%define gtk_file_chooser_get_filenames gtk_file_chooser_get_filenames_utf8 
%define gtk_file_chooser_set_current_folder gtk_file_chooser_set_current_folder_utf8 
%define gtk_file_chooser_get_current_folder gtk_file_chooser_get_current_folder_utf8 
%define gtk_file_chooser_get_preview_filename gtk_file_chooser_get_preview_filename_utf8 
%define gtk_file_chooser_add_shortcut_folder gtk_file_chooser_add_shortcut_folder_utf8 
%define gtk_file_chooser_remove_shortcut_folder gtk_file_chooser_remove_shortcut_folder_utf8 
%define gtk_file_chooser_list_shortcut_folders gtk_file_chooser_list_shortcut_folders_utf8 
%define gtk_icon_source_set_filename gtk_icon_source_set_filename_utf8 
%define gtk_icon_source_get_filename gtk_icon_source_get_filename_utf8 
%define gtk_icon_theme_set_search_path gtk_icon_theme_set_search_path_utf8 
%define gtk_icon_theme_get_search_path gtk_icon_theme_get_search_path_utf8 
%define gtk_icon_theme_append_search_path gtk_icon_theme_append_search_path_utf8 
%define gtk_icon_theme_prepend_search_path gtk_icon_theme_prepend_search_path_utf8 
%define gtk_icon_info_get_filename gtk_icon_info_get_filename_utf8 
%define GTK_MAX_COMPOSE_LEN 7 
%define GTK_PRIORITY_HIGH       G_PRIORITY_HIGH 
%define GTK_PRIORITY_INTERNAL   GTK_PRIORITY_REDRAW 
%define GTK_PRIORITY_DEFAULT	G_PRIORITY_DEFAULT_IDLE 
%define GTK_PRIORITY_LOW	G_PRIORITY_LOW 
%define GTKMAIN_C_VAR extern 
%define gtk_notebook_current_page               gtk_notebook_get_current_page 
%define gtk_notebook_set_page                   gtk_notebook_set_current_page 
%define GTK_PAPER_NAME_A3 "iso_a3" 
%define GTK_PAPER_NAME_A4 "iso_a4" 
%define GTK_PAPER_NAME_A5 "iso_a5" 
%define GTK_PAPER_NAME_B5 "iso_b5" 
%define GTK_PAPER_NAME_LETTER "na_letter" 
%define GTK_PAPER_NAME_EXECUTIVE "na_executive" 
%define GTK_PAPER_NAME_LEGAL "na_legal" 
%define GTK_PRINT_SETTINGS_PRINTER          "printer" 
%define GTK_PRINT_SETTINGS_ORIENTATION      "orientation" 
%define GTK_PRINT_SETTINGS_PAPER_FORMAT     "paper-format" 
%define GTK_PRINT_SETTINGS_PAPER_WIDTH      "paper-width" 
%define GTK_PRINT_SETTINGS_PAPER_HEIGHT     "paper-height" 
%define GTK_PRINT_SETTINGS_N_COPIES         "n-copies" 
%define GTK_PRINT_SETTINGS_DEFAULT_SOURCE   "default-source" 
%define GTK_PRINT_SETTINGS_QUALITY          "quality" 
%define GTK_PRINT_SETTINGS_RESOLUTION       "resolution" 
%define GTK_PRINT_SETTINGS_USE_COLOR        "use-color" 
%define GTK_PRINT_SETTINGS_DUPLEX           "duplex" 
%define GTK_PRINT_SETTINGS_COLLATE          "collate" 
%define GTK_PRINT_SETTINGS_REVERSE          "reverse" 
%define GTK_PRINT_SETTINGS_MEDIA_TYPE       "media-type" 
%define GTK_PRINT_SETTINGS_DITHER           "dither" 
%define GTK_PRINT_SETTINGS_SCALE            "scale" 
%define GTK_PRINT_SETTINGS_PRINT_PAGES      "print-pages" 
%define GTK_PRINT_SETTINGS_PAGE_RANGES      "page-ranges" 
%define GTK_PRINT_SETTINGS_PAGE_SET         "page-set" 
%define GTK_PRINT_SETTINGS_FINISHINGS       "finishings" 
%define GTK_PRINT_SETTINGS_NUMBER_UP        "number-up" 
%define GTK_PRINT_SETTINGS_NUMBER_UP_LAYOUT "number-up-layout" 
%define GTK_PRINT_SETTINGS_OUTPUT_BIN       "output-bin" 
%define GTK_PRINT_SETTINGS_RESOLUTION_X     "resolution-x" 
%define GTK_PRINT_SETTINGS_RESOLUTION_Y     "resolution-y" 
%define GTK_PRINT_SETTINGS_PRINTER_LPI      "printer-lpi" 
%define GTK_PRINT_SETTINGS_OUTPUT_FILE_FORMAT  "output-file-format" 
%define GTK_PRINT_SETTINGS_OUTPUT_URI          "output-uri" 
%define GTK_PRINT_SETTINGS_WIN32_DRIVER_VERSION "win32-driver-version" 
%define GTK_PRINT_SETTINGS_WIN32_DRIVER_EXTRA   "win32-driver-extra" 
%define gtk_radio_button_group gtk_radio_button_get_group 
%define gtk_radio_menu_item_group gtk_radio_menu_item_get_group 
%define GTK_INPUT_ERROR -1 
%define gtk_spin_button_get_value_as_float gtk_spin_button_get_value 
%define GTK_STOCK_ABOUT            "gtk-about" 
%define GTK_STOCK_ADD              "gtk-add" 
%define GTK_STOCK_APPLY            "gtk-apply" 
%define GTK_STOCK_BOLD             "gtk-bold" 
%define GTK_STOCK_CANCEL           "gtk-cancel" 
%define GTK_STOCK_CAPS_LOCK_WARNING "gtk-caps-lock-warning" 
%define GTK_STOCK_CDROM            "gtk-cdrom" 
%define GTK_STOCK_CLEAR            "gtk-clear" 
%define GTK_STOCK_CLOSE            "gtk-close" 
%define GTK_STOCK_COLOR_PICKER     "gtk-color-picker" 
%define GTK_STOCK_CONNECT          "gtk-connect" 
%define GTK_STOCK_CONVERT          "gtk-convert" 
%define GTK_STOCK_COPY             "gtk-copy" 
%define GTK_STOCK_CUT              "gtk-cut" 
%define GTK_STOCK_DELETE           "gtk-delete" 
%define GTK_STOCK_DIALOG_AUTHENTICATION "gtk-dialog-authentication" 
%define GTK_STOCK_DIALOG_INFO      "gtk-dialog-info" 
%define GTK_STOCK_DIALOG_WARNING   "gtk-dialog-warning" 
%define GTK_STOCK_DIALOG_ERROR     "gtk-dialog-error" 
%define GTK_STOCK_DIALOG_QUESTION  "gtk-dialog-question" 
%define GTK_STOCK_DIRECTORY        "gtk-directory" 
%define GTK_STOCK_DISCARD          "gtk-discard" 
%define GTK_STOCK_DISCONNECT       "gtk-disconnect" 
%define GTK_STOCK_DND              "gtk-dnd" 
%define GTK_STOCK_DND_MULTIPLE     "gtk-dnd-multiple" 
%define GTK_STOCK_EDIT             "gtk-edit" 
%define GTK_STOCK_EXECUTE          "gtk-execute" 
%define GTK_STOCK_FILE             "gtk-file" 
%define GTK_STOCK_FIND             "gtk-find" 
%define GTK_STOCK_FIND_AND_REPLACE "gtk-find-and-replace" 
%define GTK_STOCK_FLOPPY           "gtk-floppy" 
%define GTK_STOCK_FULLSCREEN       "gtk-fullscreen" 
%define GTK_STOCK_GOTO_BOTTOM      "gtk-goto-bottom" 
%define GTK_STOCK_GOTO_FIRST       "gtk-goto-first" 
%define GTK_STOCK_GOTO_LAST        "gtk-goto-last" 
%define GTK_STOCK_GOTO_TOP         "gtk-goto-top" 
%define GTK_STOCK_GO_BACK          "gtk-go-back" 
%define GTK_STOCK_GO_DOWN          "gtk-go-down" 
%define GTK_STOCK_GO_FORWARD       "gtk-go-forward" 
%define GTK_STOCK_GO_UP            "gtk-go-up" 
%define GTK_STOCK_HARDDISK         "gtk-harddisk" 
%define GTK_STOCK_HELP             "gtk-help" 
%define GTK_STOCK_HOME             "gtk-home" 
%define GTK_STOCK_INDEX            "gtk-index" 
%define GTK_STOCK_INDENT           "gtk-indent" 
%define GTK_STOCK_INFO             "gtk-info" 
%define GTK_STOCK_ITALIC           "gtk-italic" 
%define GTK_STOCK_JUMP_TO          "gtk-jump-to" 
%define GTK_STOCK_JUSTIFY_CENTER   "gtk-justify-center" 
%define GTK_STOCK_JUSTIFY_FILL     "gtk-justify-fill" 
%define GTK_STOCK_JUSTIFY_LEFT     "gtk-justify-left" 
%define GTK_STOCK_JUSTIFY_RIGHT    "gtk-justify-right" 
%define GTK_STOCK_LEAVE_FULLSCREEN "gtk-leave-fullscreen" 
%define GTK_STOCK_MISSING_IMAGE    "gtk-missing-image" 
%define GTK_STOCK_MEDIA_FORWARD    "gtk-media-forward" 
%define GTK_STOCK_MEDIA_NEXT       "gtk-media-next" 
%define GTK_STOCK_MEDIA_PAUSE      "gtk-media-pause" 
%define GTK_STOCK_MEDIA_PLAY       "gtk-media-play" 
%define GTK_STOCK_MEDIA_PREVIOUS   "gtk-media-previous" 
%define GTK_STOCK_MEDIA_RECORD     "gtk-media-record" 
%define GTK_STOCK_MEDIA_REWIND     "gtk-media-rewind" 
%define GTK_STOCK_MEDIA_STOP       "gtk-media-stop" 
%define GTK_STOCK_NETWORK          "gtk-network" 
%define GTK_STOCK_NEW              "gtk-new" 
%define GTK_STOCK_NO               "gtk-no" 
%define GTK_STOCK_OK               "gtk-ok" 
%define GTK_STOCK_OPEN             "gtk-open" 
%define GTK_STOCK_ORIENTATION_PORTRAIT "gtk-orientation-portrait" 
%define GTK_STOCK_ORIENTATION_LANDSCAPE "gtk-orientation-landscape" 
%define GTK_STOCK_ORIENTATION_REVERSE_LANDSCAPE "gtk-orientation-reverse-landscape" 
%define GTK_STOCK_ORIENTATION_REVERSE_PORTRAIT "gtk-orientation-reverse-portrait" 
%define GTK_STOCK_PAGE_SETUP       "gtk-page-setup" 
%define GTK_STOCK_PASTE            "gtk-paste" 
%define GTK_STOCK_PREFERENCES      "gtk-preferences" 
%define GTK_STOCK_PRINT            "gtk-print" 
%define GTK_STOCK_PRINT_ERROR      "gtk-print-error" 
%define GTK_STOCK_PRINT_PAUSED     "gtk-print-paused" 
%define GTK_STOCK_PRINT_PREVIEW    "gtk-print-preview" 
%define GTK_STOCK_PRINT_REPORT     "gtk-print-report" 
%define GTK_STOCK_PRINT_WARNING    "gtk-print-warning" 
%define GTK_STOCK_PROPERTIES       "gtk-properties" 
%define GTK_STOCK_QUIT             "gtk-quit" 
%define GTK_STOCK_REDO             "gtk-redo" 
%define GTK_STOCK_REFRESH          "gtk-refresh" 
%define GTK_STOCK_REMOVE           "gtk-remove" 
%define GTK_STOCK_REVERT_TO_SAVED  "gtk-revert-to-saved" 
%define GTK_STOCK_SAVE             "gtk-save" 
%define GTK_STOCK_SAVE_AS          "gtk-save-as" 
%define GTK_STOCK_SELECT_ALL       "gtk-select-all" 
%define GTK_STOCK_SELECT_COLOR     "gtk-select-color" 
%define GTK_STOCK_SELECT_FONT      "gtk-select-font" 
%define GTK_STOCK_SORT_ASCENDING   "gtk-sort-ascending" 
%define GTK_STOCK_SORT_DESCENDING  "gtk-sort-descending" 
%define GTK_STOCK_SPELL_CHECK      "gtk-spell-check" 
%define GTK_STOCK_STOP             "gtk-stop" 
%define GTK_STOCK_STRIKETHROUGH    "gtk-strikethrough" 
%define GTK_STOCK_UNDELETE         "gtk-undelete" 
%define GTK_STOCK_UNDERLINE        "gtk-underline" 
%define GTK_STOCK_UNDO             "gtk-undo" 
%define GTK_STOCK_UNINDENT         "gtk-unindent" 
%define GTK_STOCK_YES              "gtk-yes" 
%define GTK_STOCK_ZOOM_100         "gtk-zoom-100" 
%define GTK_STOCK_ZOOM_FIT         "gtk-zoom-fit" 
%define GTK_STOCK_ZOOM_IN          "gtk-zoom-in" 
%define GTK_STOCK_ZOOM_OUT         "gtk-zoom-out" 
%define gtk_ui_manager_add_ui_from_file gtk_ui_manager_add_ui_from_file_utf8 
%define gtk_file_selection_get_filename gtk_file_selection_get_filename_utf8 
%define gtk_file_selection_set_filename gtk_file_selection_set_filename_utf8 
%define gtk_file_selection_get_selections gtk_file_selection_get_selections_utf8 
%define gtk_marshal_BOOL__NONE	gtk_marshal_BOOLEAN__VOID 
%define gtk_marshal_BOOL__POINTER	gtk_marshal_BOOLEAN__POINTER 
%define gtk_marshal_BOOL__POINTER_POINTER_INT_INT	gtk_marshal_BOOLEAN__POINTER_POINTER_INT_INT 
%define gtk_marshal_BOOL__POINTER_INT_INT	gtk_marshal_BOOLEAN__POINTER_INT_INT 
%define gtk_marshal_BOOL__POINTER_INT_INT_UINT	gtk_marshal_BOOLEAN__POINTER_INT_INT_UINT 
%define gtk_marshal_BOOL__POINTER_STRING_STRING_POINTER	gtk_marshal_BOOLEAN__POINTER_STRING_STRING_POINTER 
%define gtk_marshal_VOID__BOOLEAN	g_cclosure_marshal_VOID__BOOLEAN 
%define gtk_marshal_NONE__BOOL	gtk_marshal_VOID__BOOLEAN 
%define gtk_marshal_VOID__BOXED	g_cclosure_marshal_VOID__BOXED 
%define gtk_marshal_NONE__BOXED	gtk_marshal_VOID__BOXED 
%define gtk_marshal_VOID__ENUM	g_cclosure_marshal_VOID__ENUM 
%define gtk_marshal_NONE__ENUM	gtk_marshal_VOID__ENUM 
%define gtk_marshal_NONE__ENUM_FLOAT	gtk_marshal_VOID__ENUM_FLOAT 
%define gtk_marshal_NONE__ENUM_FLOAT_BOOL	gtk_marshal_VOID__ENUM_FLOAT_BOOLEAN 
%define gtk_marshal_VOID__INT	g_cclosure_marshal_VOID__INT 
%define gtk_marshal_NONE__INT	gtk_marshal_VOID__INT 
%define gtk_marshal_NONE__INT_INT	gtk_marshal_VOID__INT_INT 
%define gtk_marshal_NONE__INT_INT_POINTER	gtk_marshal_VOID__INT_INT_POINTER 
%define gtk_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID 
%define gtk_marshal_NONE__NONE	gtk_marshal_VOID__VOID 
%define gtk_marshal_VOID__OBJECT	g_cclosure_marshal_VOID__OBJECT 
%define gtk_marshal_NONE__OBJECT	gtk_marshal_VOID__OBJECT 
%define gtk_marshal_VOID__POINTER	g_cclosure_marshal_VOID__POINTER 
%define gtk_marshal_NONE__POINTER	gtk_marshal_VOID__POINTER 
%define gtk_marshal_NONE__POINTER_INT	gtk_marshal_VOID__POINTER_INT 
%define gtk_marshal_NONE__POINTER_POINTER	gtk_marshal_VOID__POINTER_POINTER 
%define gtk_marshal_NONE__POINTER_POINTER_POINTER	gtk_marshal_VOID__POINTER_POINTER_POINTER 
%define gtk_marshal_NONE__POINTER_STRING_STRING	gtk_marshal_VOID__POINTER_STRING_STRING 
%define gtk_marshal_NONE__POINTER_UINT	gtk_marshal_VOID__POINTER_UINT 
%define gtk_marshal_NONE__POINTER_UINT_ENUM	gtk_marshal_VOID__POINTER_UINT_ENUM 
%define gtk_marshal_NONE__POINTER_POINTER_UINT_UINT	gtk_marshal_VOID__POINTER_POINTER_UINT_UINT 
%define gtk_marshal_NONE__POINTER_INT_INT_POINTER_UINT_UINT	gtk_marshal_VOID__POINTER_INT_INT_POINTER_UINT_UINT 
%define gtk_marshal_NONE__POINTER_UINT_UINT	gtk_marshal_VOID__POINTER_UINT_UINT 
%define gtk_marshal_VOID__STRING	g_cclosure_marshal_VOID__STRING 
%define gtk_marshal_NONE__STRING	gtk_marshal_VOID__STRING 
%define gtk_marshal_NONE__STRING_INT_POINTER	gtk_marshal_VOID__STRING_INT_POINTER 
%define gtk_marshal_VOID__UINT	g_cclosure_marshal_VOID__UINT 
%define gtk_marshal_NONE__UINT	gtk_marshal_VOID__UINT 
%define gtk_marshal_NONE__UINT_POINTER_UINT_ENUM_ENUM_POINTER	gtk_marshal_VOID__UINT_POINTER_UINT_ENUM_ENUM_POINTER 
%define gtk_marshal_NONE__UINT_POINTER_UINT_UINT_ENUM	gtk_marshal_VOID__UINT_POINTER_UINT_UINT_ENUM 
%define gtk_marshal_NONE__UINT_STRING	gtk_marshal_VOID__UINT_STRING 
%define gtk_signal_default_marshaller	g_cclosure_marshal_VOID__VOID 
%define GTK_SIGNAL_OFFSET	                      G_STRUCT_OFFSET 


;;structure definitions

NASMX_STRUC GTimeVal
	NASMX_RESERVE tv_sec,	uint32_t, 1
	NASMX_RESERVE tv_usec,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC _GArray
	NASMX_RESERVE data,	uint32_t, 1
	NASMX_RESERVE len,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GByteArray
	NASMX_RESERVE data,	uint32_t, 1
	NASMX_RESERVE len,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GPtrArray
	NASMX_RESERVE pdata,	uint32_t, 1
	NASMX_RESERVE len,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GError
	NASMX_RESERVE domain,	uint32_t, 1
	NASMX_RESERVE code,	uint32_t, 1
	NASMX_RESERVE message,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDebugKey
	NASMX_RESERVE key,	uint32_t, 1
	NASMX_RESERVE value,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTrashStack
	NASMX_RESERVE next,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GThread
	NASMX_RESERVE func,	uint32_t, 1
	NASMX_RESERVE data,	uint32_t, 1
	NASMX_RESERVE joinable, 	uint32_t, 1
	NASMX_RESERVE priority, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GThreadFunctions
	NASMX_RESERVE mutex_new, 	uint32_t, 1
	NASMX_RESERVE mutex_lock, 	uint32_t, 1
	NASMX_RESERVE mutex_trylock, 	uint32_t, 1
	NASMX_RESERVE mutex_unlock, 	uint32_t, 1
	NASMX_RESERVE mutex_free, 	uint32_t, 1
	NASMX_RESERVE cond_new, 	uint32_t, 1
	NASMX_RESERVE cond_signal, 	uint32_t, 1
	NASMX_RESERVE cond_broadcast, 	uint32_t, 1
	NASMX_RESERVE cond_wait, 	uint32_t, 1
	NASMX_RESERVE cond_timed_wait, 	uint32_t, 1
	NASMX_RESERVE cond_free, 	uint32_t, 1
	NASMX_RESERVE private_new, 	uint32_t, 1
	NASMX_RESERVE private_get, 	uint32_t, 1
	NASMX_RESERVE private_set, 	uint32_t, 1
	NASMX_RESERVE thread_create, 	uint32_t, 1
	NASMX_RESERVE thread_yield, 	uint32_t, 1
	NASMX_RESERVE thread_join, 	uint32_t, 1
	NASMX_RESERVE thread_exit, 	uint32_t, 1
	NASMX_RESERVE thread_set_priority, 	uint32_t, 1
	NASMX_RESERVE thread_self, 	uint32_t, 1
	NASMX_RESERVE thread_equal, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GStaticPrivate
	NASMX_RESERVE index,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GStaticRecMutex
	NASMX_RESERVE mutex,	uint32_t, 1
	NASMX_RESERVE depth,	uint32_t, 1
	NASMX_RESERVE owner,	int8_t, 4 ; GSystemThread_size
NASMX_ENDSTRUC

NASMX_STRUC GStaticRWLock
	NASMX_RESERVE mutex,	uint32_t, 1
	NASMX_RESERVE read_cond, 	uint32_t, 1
	NASMX_RESERVE write_cond, 	uint32_t, 1
	NASMX_RESERVE read_counter, 	uint32_t, 1
	NASMX_RESERVE have_writer, 	uint32_t, 1
	NASMX_RESERVE want_to_read, 	uint32_t, 1
	NASMX_RESERVE want_to_write, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GOnce
	NASMX_RESERVE status,	uint32_t, 1
	NASMX_RESERVE retval,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GList
	NASMX_RESERVE data,	uint32_t, 1
	NASMX_RESERVE next,	uint32_t, 1
	NASMX_RESERVE prev,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GCompletion
	NASMX_RESERVE items,	uint32_t, 1
	NASMX_RESERVE func,	uint32_t, 1
	NASMX_RESERVE prefix,	uint32_t, 1
	NASMX_RESERVE cache,	uint32_t, 1
	NASMX_RESERVE strncmp_func, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDate
	NASMX_RESERVE julian_days, 	uint32_t, 1
	NASMX_RESERVE julian,	uint32_t, 1
	NASMX_RESERVE dmy,	uint32_t, 1
	NASMX_RESERVE day,	uint32_t, 1
	NASMX_RESERVE month,	uint32_t, 1
	NASMX_RESERVE year,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GHashTableIter
	NASMX_RESERVE dummy1,	uint32_t, 1
	NASMX_RESERVE dummy2,	uint32_t, 1
	NASMX_RESERVE dummy3,	uint32_t, 1
	NASMX_RESERVE dummy4,	uint32_t, 1
	NASMX_RESERVE dummy5,	uint32_t, 1
	NASMX_RESERVE dummy6,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GHookList
	NASMX_RESERVE seq_id,	uint32_t, 1
	NASMX_RESERVE hook_size, 	uint32_t, 1
;;;;.is_setup:		RESD 1
	NASMX_RESERVE hooks,	uint32_t, 1
	NASMX_RESERVE dummy3,	uint32_t, 1
	NASMX_RESERVE finalize_hook, 	uint32_t, 1
	NASMX_RESERVE dummy,	uint32_t, 2
NASMX_ENDSTRUC

%macro  GHookList.hook_size__DATA__ 1
;;**TODO**
;;mov eax,%1 + GHookList.hook_size 
;;mov eax,[eax]

%endmacro


NASMX_STRUC GHook
	NASMX_RESERVE data,	uint32_t, 1
	NASMX_RESERVE next,	uint32_t, 1
	NASMX_RESERVE prev,	uint32_t, 1
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE hook_id,	uint32_t, 1
	NASMX_RESERVE flags,	uint32_t, 1
	NASMX_RESERVE func,	uint32_t, 1
	NASMX_RESERVE destroy,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GPollFD
	NASMX_RESERVE fd,	uint32_t, 1
	NASMX_RESERVE events,	uint16_t, 1
	NASMX_RESERVE revents,	uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSList
	NASMX_RESERVE data,	uint32_t, 1
	NASMX_RESERVE next,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC _GSource
	NASMX_RESERVE callback_data, 	uint32_t, 1
	NASMX_RESERVE callback_funcs, 	uint32_t, 1
	NASMX_RESERVE source_funcs, 	uint32_t, 1
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE context,	uint32_t, 1
	NASMX_RESERVE priority, 	uint32_t, 1
	NASMX_RESERVE flags,	uint32_t, 1
	NASMX_RESERVE source_id, 	uint32_t, 1
	NASMX_RESERVE poll_fds, 	uint32_t, 1
	NASMX_RESERVE prev,	uint32_t, 1
	NASMX_RESERVE next,	uint32_t, 1
	NASMX_RESERVE name,	uint32_t, 1
	NASMX_RESERVE priv,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC _GSourceCallbackFuncs
	NASMX_RESERVE ref,	uint32_t, 1
	NASMX_RESERVE unref,	uint32_t, 1
	NASMX_RESERVE get,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC _GSourceFuncs
	NASMX_RESERVE prepare,	uint32_t, 1
	NASMX_RESERVE check,	uint32_t, 1
	NASMX_RESERVE dispatch, 	uint32_t, 1
	NASMX_RESERVE finalize, 	uint32_t, 1
	NASMX_RESERVE closure_callback, uint32_t, 1
	NASMX_RESERVE closure_marshal, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GString
	NASMX_RESERVE str,	uint32_t, 1
	NASMX_RESERVE len,	uint32_t, 1
	NASMX_RESERVE allocated_len, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GIOChannel
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE funcs,	uint32_t, 1
	NASMX_RESERVE encoding, 	uint32_t, 1
	NASMX_RESERVE read_cd,	uint32_t, 1
	NASMX_RESERVE write_cd, 	uint32_t, 1
	NASMX_RESERVE line_term, 	uint32_t, 1
	NASMX_RESERVE line_term_len, 	uint32_t, 1
	NASMX_RESERVE buf_size, 	uint32_t, 1
	NASMX_RESERVE read_buf, 	uint32_t, 1
	NASMX_RESERVE encoded_read_buf, uint32_t, 1
	NASMX_RESERVE write_buf, 	uint32_t, 1
	NASMX_RESERVE partial_write_buf, 	int8_t, 6
	NASMX_RESERVE __PADDING1__, 	int8_t, 2
	NASMX_RESERVE use_buffer, 	uint32_t, 1
;;.do_encode:		RESD 1
;;.close_on_unref:	RESD 1
;;.is_readable:		RESD 1
;;.is_writeable:	RESD 1
;;.is_seekable:		RESD 1
	NASMX_RESERVE reserved1, 	uint32_t, 1
	NASMX_RESERVE reserved2, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GIOFuncs
	NASMX_RESERVE io_read,	uint32_t, 1
	NASMX_RESERVE io_write, 	uint32_t, 1
	NASMX_RESERVE io_seek,	uint32_t, 1
	NASMX_RESERVE io_close, 	uint32_t, 1
	NASMX_RESERVE io_create_watch, 	uint32_t, 1
	NASMX_RESERVE io_free,	uint32_t, 1
	NASMX_RESERVE io_set_flags, 	uint32_t, 1
	NASMX_RESERVE io_get_flags, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GMarkupParser
	NASMX_RESERVE start_element, 	uint32_t, 1
	NASMX_RESERVE end_element, 	uint32_t, 1
	NASMX_RESERVE text,	uint32_t, 1
	NASMX_RESERVE passthrough, 	uint32_t, 1
	NASMX_RESERVE error,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GNode
	NASMX_RESERVE data,	uint32_t, 1
	NASMX_RESERVE next,	uint32_t, 1
	NASMX_RESERVE prev,	uint32_t, 1
	NASMX_RESERVE parent,	uint32_t, 1
	NASMX_RESERVE children, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GOptionEntry
	NASMX_RESERVE long_name, 	uint32_t, 1
	NASMX_RESERVE short_name, 	int8_t, 1
	NASMX_RESERVE __PADDING1__, 	int8_t, 3
	NASMX_RESERVE flags,	uint32_t, 1
	NASMX_RESERVE arg,	uint32_t, 1
	NASMX_RESERVE arg_data, 	uint32_t, 1
	NASMX_RESERVE description, 	uint32_t, 1
	NASMX_RESERVE arg_description, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GQueue
	NASMX_RESERVE head,	uint32_t, 1
	NASMX_RESERVE tail,	uint32_t, 1
	NASMX_RESERVE length,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTuples
	NASMX_RESERVE len,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GScannerConfig
	NASMX_RESERVE cset_skip_characters, 	uint32_t, 1
	NASMX_RESERVE cset_identifier_first, 	uint32_t, 1
	NASMX_RESERVE cset_identifier_nth, 	uint32_t, 1
	NASMX_RESERVE cpair_comment_single, 	uint32_t, 1
	NASMX_RESERVE case_sensitive,	uint32_t, 1
;.skip_comment_multi:		RESD 1
;.skip_comment_single:		RESD 1
;.scan_comment_multi:		RESD 1
;.scan_identifier:		RESD 1
;.scan_identifier_1char:	RESD 1
;.scan_identifier_NULL:		RESD 1
;.scan_symbols:			RESD 1
;.scan_binary:			RESD 1
;.scan_octal:			RESD 1
;.scan_float:			RESD 1
;.scan_hex:			RESD 1
;.scan_hex_dollar:		RESD 1
;.scan_string_sq:		RESD 1
;.scan_string_dq:		RESD 1
;.numbers_2_int:		RESD 1
;.int_2_float:			RESD 1
;.identifier_2_string:		RESD 1
;.char_2_token:			RESD 1
;.symbol_2_token:		RESD 1
;.scope_0_fallback:		RESD 1
;.store_int64:			RESD 1
	NASMX_RESERVE padding_dummy, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GScanner
	NASMX_RESERVE user_data, 	uint32_t, 1
	NASMX_RESERVE max_parse_errors, uint32_t, 1
	NASMX_RESERVE parse_errors, 	uint32_t, 1
	NASMX_RESERVE input_name, 	uint32_t, 1
	NASMX_RESERVE qdata,	uint32_t, 1
	NASMX_RESERVE config,	uint32_t, 1
	NASMX_RESERVE token,	uint32_t, 1
	NASMX_RESERVE value,	int8_t,  4 ; GTokenValue_size
	NASMX_RESERVE line,	uint32_t, 1
	NASMX_RESERVE position, 	uint32_t, 1
	NASMX_RESERVE next_token, 	uint32_t, 1
	NASMX_RESERVE next_value, 	int8_t, 4 ; GTokenValue_size
	NASMX_RESERVE next_line, 	uint32_t, 1
	NASMX_RESERVE next_position, 	uint32_t, 1
	NASMX_RESERVE symbol_table, 	uint32_t, 1
	NASMX_RESERVE input_fd, 	uint32_t, 1
	NASMX_RESERVE text,	uint32_t, 1
	NASMX_RESERVE text_end, 	uint32_t, 1
	NASMX_RESERVE buffer,	uint32_t, 1
	NASMX_RESERVE scope_id, 	uint32_t, 1
	NASMX_RESERVE msg_handler, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GThreadPool
	NASMX_RESERVE func,		uint32_t, 1
	NASMX_RESERVE user_data, 	uint32_t, 1
	NASMX_RESERVE exclusive, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypeClass
	NASMX_RESERVE g_type,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypeInstance
	NASMX_RESERVE g_class,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypeInterface
	NASMX_RESERVE g_type,		uint32_t, 1
	NASMX_RESERVE g_instance_type, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypeQuery
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE type_name, 	uint32_t, 1
	NASMX_RESERVE class_size, 	uint32_t, 1
	NASMX_RESERVE instance_size, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypeInfo
	NASMX_RESERVE class_size, 	uint16_t, 1
	NASMX_RESERVE __PADDING1__, 	int8_t, 2
	NASMX_RESERVE base_init, 	uint32_t, 1
	NASMX_RESERVE base_finalize, 	uint32_t, 1
	NASMX_RESERVE class_init, 	uint32_t, 1
	NASMX_RESERVE class_finalize, 	uint32_t, 1
	NASMX_RESERVE class_data, 	uint32_t, 1
	NASMX_RESERVE instance_size, 	uint16_t, 1
	NASMX_RESERVE n_preallocs, 	uint16_t, 1
	NASMX_RESERVE instance_init, 	uint32_t, 1
	NASMX_RESERVE value_table, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypeFundamentalInfo
	NASMX_RESERVE type_flags, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GInterfaceInfo
	NASMX_RESERVE interface_init, 	uint32_t, 1
	NASMX_RESERVE interface_finalize, 	uint32_t, 1
	NASMX_RESERVE interface_data, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypeValueTable
	NASMX_RESERVE value_init, 	uint32_t, 1
	NASMX_RESERVE value_free, 	uint32_t, 1
	NASMX_RESERVE value_copy, 	uint32_t, 1
	NASMX_RESERVE value_peek_pointer, 	uint32_t, 1
	NASMX_RESERVE collect_format, 	uint32_t, 1
	NASMX_RESERVE collect_value, 	uint32_t, 1
	NASMX_RESERVE lcopy_format, 	uint32_t, 1
	NASMX_RESERVE lcopy_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GValue
	NASMX_RESERVE g_type,	uint32_t, 1
	NASMX_RESERVE __PADDING1__, 	int8_t, 4
;;;;;UNION conversion
;;.v_int:		RESD 1
;;.v_uint:		RESD 1
;;.v_long:		RESD 1
;;.v_ulong:		RESD 1
;;.v_int64:		RESQ 1
	NASMX_RESERVE v_uint64_data, 	uint64_t, 2
;;.v_float:		RESD 1
;;.v_double:		RESD 1
;;.v_pointer:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpec
	NASMX_RESERVE g_type_instance, 	int8_t, GTypeInstance_size
	NASMX_RESERVE name,	uint32_t, 1
	NASMX_RESERVE flags,	uint32_t, 1
	NASMX_RESERVE value_type, 	uint32_t, 1
	NASMX_RESERVE owner_type, 	uint32_t, 1
	NASMX_RESERVE _nick,	uint32_t, 1
	NASMX_RESERVE _blurb,	uint32_t, 1
	NASMX_RESERVE qdata,	uint32_t, 1
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE param_id, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecClass
	NASMX_RESERVE g_type_class, 	int8_t, GTypeClass_size
	NASMX_RESERVE value_type, 	uint32_t, 1
	NASMX_RESERVE finalize, 	uint32_t, 1
	NASMX_RESERVE value_set_default, 	uint32_t, 1
	NASMX_RESERVE value_validate, 	uint32_t, 1
	NASMX_RESERVE values_cmp, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParameter
	NASMX_RESERVE name,	uint32_t, 1
	NASMX_RESERVE value,	int8_t, GValue_size
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecTypeInfo
	NASMX_RESERVE instance_size, 	uint16_t, 1
	NASMX_RESERVE n_preallocs, 	uint16_t, 1
	NASMX_RESERVE instance_init, 	uint32_t, 1
	NASMX_RESERVE value_type, 	uint32_t, 1
	NASMX_RESERVE finalize, 	uint32_t, 1
	NASMX_RESERVE value_set_default, 	uint32_t, 1
	NASMX_RESERVE value_validate, 	uint32_t, 1
	NASMX_RESERVE values_cmp, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GClosureNotifyData
	NASMX_RESERVE data,	uint32_t, 1
	NASMX_RESERVE notify,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GClosure
	NASMX_RESERVE ref_count, 	uint32_t, 1
;.meta_marshal:		RESD 1
;.n_guards:		RESD 1
;.n_fnotifiers:		RESD 1
;.n_inotifiers:		RESD 1
;.in_inotify:		RESD 1
;.floating:		RESD 1
;.derivative_flag:		RESD 1
;.in_marshal:		RESD 1
;.is_invalid:		RESD 1
	NASMX_RESERVE marshal,	uint32_t, 1
	NASMX_RESERVE data,	uint32_t, 1
	NASMX_RESERVE notifiers, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GCClosure
	NASMX_RESERVE closure,	int8_t, GClosure_size
	NASMX_RESERVE callback, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSignalInvocationHint
	NASMX_RESERVE signal_id, 	uint32_t, 1
	NASMX_RESERVE detail,	uint32_t, 1
	NASMX_RESERVE run_type, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSignalQuery
	NASMX_RESERVE signal_id, 	uint32_t, 1
	NASMX_RESERVE signal_name, 	uint32_t, 1
	NASMX_RESERVE itype,	uint32_t, 1
	NASMX_RESERVE signal_flags, 	uint32_t, 1
	NASMX_RESERVE return_type, 	uint32_t, 1
	NASMX_RESERVE n_params, 	uint32_t, 1
	NASMX_RESERVE param_types, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GObject
	NASMX_RESERVE g_type_instance, 	int8_t, GTypeInstance_size
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE qdata,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GObjectClass
	NASMX_RESERVE g_type_class, 	int8_t, GTypeClass_size
	NASMX_RESERVE construct_properties, 	uint32_t, 1
	NASMX_RESERVE constructor, 	uint32_t, 1
	NASMX_RESERVE set_property, 	uint32_t, 1
	NASMX_RESERVE get_property, 	uint32_t, 1
	NASMX_RESERVE dispose,	uint32_t, 1
	NASMX_RESERVE finalize, 	uint32_t, 1
	NASMX_RESERVE dispatch_properties_changed, 	uint32_t, 1
	NASMX_RESERVE notify,	uint32_t, 1
	NASMX_RESERVE constructed, 	uint32_t, 1
	NASMX_RESERVE flags,	uint32_t, 1
	NASMX_RESERVE pdummy,	uint32_t, 6
NASMX_ENDSTRUC

NASMX_STRUC GObjectConstructParam
	NASMX_RESERVE pspec,	uint32_t, 1
	NASMX_RESERVE value,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GEnumClass
	NASMX_RESERVE g_type_class, 	int8_t, GTypeClass_size
	NASMX_RESERVE minimum,	uint32_t, 1
	NASMX_RESERVE maximum,	uint32_t, 1
	NASMX_RESERVE n_values, 	uint32_t, 1
	NASMX_RESERVE values,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFlagsClass
	NASMX_RESERVE g_type_class, 	int8_t, GTypeClass_size
	NASMX_RESERVE mask,	uint32_t, 1
	NASMX_RESERVE n_values, 	uint32_t, 1
	NASMX_RESERVE values,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GEnumValue
	NASMX_RESERVE value,	uint32_t, 1
	NASMX_RESERVE value_name, 	uint32_t, 1
	NASMX_RESERVE value_nick, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFlagsValue
	NASMX_RESERVE value,	uint32_t, 1
	NASMX_RESERVE value_name, 	uint32_t, 1
	NASMX_RESERVE value_nick, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecChar
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	int8_t, 1
	NASMX_RESERVE maximum,	int8_t, 1
	NASMX_RESERVE default_value, 	int8_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecUChar
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	int8_t, 1
	NASMX_RESERVE maximum,	int8_t, 1
	NASMX_RESERVE default_value, 	int8_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecBoolean
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE default_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecInt
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	uint32_t, 1
	NASMX_RESERVE maximum,	uint32_t, 1
	NASMX_RESERVE default_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecUInt
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	uint32_t, 1
	NASMX_RESERVE maximum,	uint32_t, 1
	NASMX_RESERVE default_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecLong
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	uint32_t, 1
	NASMX_RESERVE maximum,	uint32_t, 1
	NASMX_RESERVE default_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecULong
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	uint32_t, 1
	NASMX_RESERVE maximum,	uint32_t, 1
	NASMX_RESERVE default_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecInt64
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	uint64_t, 1
	NASMX_RESERVE maximum,	uint64_t, 1
	NASMX_RESERVE default_value, 	uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecUInt64
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	uint64_t, 1
	NASMX_RESERVE maximum,	uint64_t, 1
	NASMX_RESERVE default_value, 	uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecUnichar
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE default_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecEnum
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE enum_class, 	uint32_t, 1
	NASMX_RESERVE default_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecFlags
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE flags_class, 	uint32_t, 1
	NASMX_RESERVE default_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecFloat
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	uint32_t, 1
	NASMX_RESERVE maximum,	uint32_t, 1
	NASMX_RESERVE default_value, 	uint32_t, 1
	NASMX_RESERVE epsilon,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecDouble
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE minimum,	uint32_t, 1
	NASMX_RESERVE maximum,	uint32_t, 1
	NASMX_RESERVE default_value, 	uint32_t, 1
	NASMX_RESERVE epsilon,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecString
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE default_value, 	uint32_t, 1
	NASMX_RESERVE cset_first, 	uint32_t, 1
	NASMX_RESERVE cset_nth, 	uint32_t, 1
	NASMX_RESERVE substitutor, 	int8_t, 1
	NASMX_RESERVE __PADDING1__, 	int8_t, 3
	NASMX_RESERVE null_fold_if_empty, 	uint32_t, 1
;.ensure_non_null:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecParam
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecBoxed
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecPointer
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecValueArray
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE element_spec, 	uint32_t, 1
	NASMX_RESERVE fixed_n_elements, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecObject
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecOverride
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE overridden, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecGType
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE is_a_type, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GParamSpecVariant
	NASMX_RESERVE parent_instance, 	int8_t, GParamSpec_size
	NASMX_RESERVE type,	uint32_t, 1
	NASMX_RESERVE default_value, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypeModule
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE use_count, 	uint32_t, 1
	NASMX_RESERVE type_infos, 	uint32_t, 1
	NASMX_RESERVE interface_infos, 	uint32_t, 1
	NASMX_RESERVE name,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypeModuleClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE load,	uint32_t, 1
	NASMX_RESERVE unload,	uint32_t, 1
	NASMX_RESERVE reserved1, 	uint32_t, 1
	NASMX_RESERVE reserved2, 	uint32_t, 1
	NASMX_RESERVE reserved3, 	uint32_t, 1
	NASMX_RESERVE reserved4, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTypePluginClass
	NASMX_RESERVE base_iface, 	int8_t, GTypeInterface_size
	NASMX_RESERVE use_plugin, 	uint32_t, 1
	NASMX_RESERVE unuse_plugin, 	uint32_t, 1
	NASMX_RESERVE complete_type_info, 	uint32_t, 1
	NASMX_RESERVE complete_interface_info, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GValueArray
	NASMX_RESERVE n_values, 	uint32_t, 1
	NASMX_RESERVE values,		uint32_t, 1
	NASMX_RESERVE n_prealloced, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GAppInfoIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE dup,		uint32_t, 1
	NASMX_RESERVE equal,		uint32_t, 1
	NASMX_RESERVE get_id,		uint32_t, 1
	NASMX_RESERVE get_name, 	uint32_t, 1
	NASMX_RESERVE get_description, 	uint32_t, 1
	NASMX_RESERVE get_executable, 	uint32_t, 1
	NASMX_RESERVE get_icon, 	uint32_t, 1
	NASMX_RESERVE launch,		uint32_t, 1
	NASMX_RESERVE supports_uris, 	uint32_t, 1
	NASMX_RESERVE supports_files, 	uint32_t, 1
	NASMX_RESERVE launch_uris, 	uint32_t, 1
	NASMX_RESERVE should_show, 	uint32_t, 1
	NASMX_RESERVE set_as_default_for_type, uint32_t, 1
	NASMX_RESERVE set_as_default_for_extension, uint32_t, 1
	NASMX_RESERVE add_supports_type, 	uint32_t, 1
	NASMX_RESERVE can_remove_supports_type, uint32_t, 1
	NASMX_RESERVE remove_supports_type, 	uint32_t, 1
	NASMX_RESERVE can_delete, 	uint32_t, 1
	NASMX_RESERVE do_delete, 	uint32_t, 1
	NASMX_RESERVE get_commandline, 	uint32_t, 1
	NASMX_RESERVE get_display_name, uint32_t, 1
	NASMX_RESERVE set_as_last_used_for_type, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GAppLaunchContext
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GAppLaunchContextClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE get_display, 	uint32_t, 1
	NASMX_RESERVE get_startup_notify_id,	uint32_t, 1
	NASMX_RESERVE launch_failed, 	uint32_t, 1
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GActionInterface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE get_name, 	uint32_t, 1
	NASMX_RESERVE get_parameter_type, 	uint32_t, 1
	NASMX_RESERVE get_state_type, 	uint32_t, 1
	NASMX_RESERVE get_state_hint, 	uint32_t, 1
	NASMX_RESERVE get_enabled, 	uint32_t, 1
	NASMX_RESERVE get_state, 	uint32_t, 1
	NASMX_RESERVE set_state, 	uint32_t, 1
	NASMX_RESERVE activate, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSimpleAction
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSimpleActionClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE activate, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GActionGroupInterface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE has_action, 	uint32_t, 1
	NASMX_RESERVE list_actions, 	uint32_t, 1
	NASMX_RESERVE get_action_enabled, 	uint32_t, 1
	NASMX_RESERVE get_action_parameter_type,	uint32_t, 1
	NASMX_RESERVE get_action_state_type,	uint32_t, 1
	NASMX_RESERVE get_action_state_hint,	uint32_t, 1
	NASMX_RESERVE get_action_state,	uint32_t, 1
	NASMX_RESERVE change_action_state,	uint32_t, 1
	NASMX_RESERVE activate_action, 	uint32_t, 1
	NASMX_RESERVE action_added, 	uint32_t, 1
	NASMX_RESERVE action_removed, 	uint32_t, 1
	NASMX_RESERVE action_enabled_changed,	uint32_t, 1
	NASMX_RESERVE action_state_changed, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSimpleActionGroup
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSimpleActionGroupClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC GApplication
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GApplicationClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE startup,		uint32_t, 1
	NASMX_RESERVE activate,		uint32_t, 1
	NASMX_RESERVE open,		uint32_t, 1
	NASMX_RESERVE command_line, 	uint32_t, 1
	NASMX_RESERVE local_command_line,	uint32_t, 1
	NASMX_RESERVE before_emit, 	uint32_t, 1
	NASMX_RESERVE after_emit, 	uint32_t, 1
	NASMX_RESERVE add_platform_data, 	uint32_t, 1
	NASMX_RESERVE quit_mainloop, 	uint32_t, 1
	NASMX_RESERVE run_mainloop, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GApplicationCommandLine
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GApplicationCommandLineClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE print_literal, 	uint32_t, 1
	NASMX_RESERVE printerr_literal,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GInitableIface
	NASMX_RESERVE g_iface,	int8_t, GTypeInterface_size
	NASMX_RESERVE init,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GAsyncInitableIface
	NASMX_RESERVE g_iface,	int8_t, GTypeInterface_size
	NASMX_RESERVE init_async, 	uint32_t, 1
	NASMX_RESERVE init_finish, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GAsyncResultIface
	NASMX_RESERVE g_iface,	int8_t, GTypeInterface_size
	NASMX_RESERVE get_user_data, 	uint32_t, 1
	NASMX_RESERVE get_source_object,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GInputStream
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GInputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE read_fn,		uint32_t, 1
	NASMX_RESERVE skip,		uint32_t, 1
	NASMX_RESERVE close_fn, 	uint32_t, 1
	NASMX_RESERVE read_async, 	uint32_t, 1
	NASMX_RESERVE read_finish, 	uint32_t, 1
	NASMX_RESERVE skip_async, 	uint32_t, 1
	NASMX_RESERVE skip_finish, 	uint32_t, 1
	NASMX_RESERVE close_async, 	uint32_t, 1
	NASMX_RESERVE close_finish, 	uint32_t, 1
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFilterInputStream
	NASMX_RESERVE parent_instance, 	int8_t, GInputStream_size
	NASMX_RESERVE base_stream, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFilterInputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GInputStreamClass_size
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GBufferedInputStream
	NASMX_RESERVE parent_instance, 	int8_t, GFilterInputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GBufferedInputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GFilterInputStreamClass_size
	NASMX_RESERVE fill,		uint32_t, 1
	NASMX_RESERVE fill_async, 	uint32_t, 1
	NASMX_RESERVE fill_finish, 	uint32_t, 1
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GOutputStream
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GOutputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE write_fn, 	uint32_t, 1
	NASMX_RESERVE splice,		uint32_t, 1
	NASMX_RESERVE flush,		uint32_t, 1
	NASMX_RESERVE close_fn, 	uint32_t, 1
	NASMX_RESERVE write_async, 	uint32_t, 1
	NASMX_RESERVE write_finish, 	uint32_t, 1
	NASMX_RESERVE splice_async, 	uint32_t, 1
	NASMX_RESERVE splice_finish, 	uint32_t, 1
	NASMX_RESERVE flush_async, 	uint32_t, 1
	NASMX_RESERVE flush_finish, 	uint32_t, 1
	NASMX_RESERVE close_async, 	uint32_t, 1
	NASMX_RESERVE close_finish, 	uint32_t, 1
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
	NASMX_RESERVE _g_reserved6, 	uint32_t, 1
	NASMX_RESERVE _g_reserved7, 	uint32_t, 1
	NASMX_RESERVE _g_reserved8, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFilterOutputStream
	NASMX_RESERVE parent_instance, 	int8_t, GOutputStream_size
	NASMX_RESERVE base_stream, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFilterOutputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GOutputStreamClass_size
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GBufferedOutputStream
	NASMX_RESERVE parent_instance, 	int8_t, GFilterOutputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GBufferedOutputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GFilterOutputStreamClass_size
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GCancellable
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GCancellableClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE cancelled, 	uint32_t, 1
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GConverterIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE convert,		uint32_t, 1
	NASMX_RESERVE reset,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GCharsetConverterClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size


NASMX_ENDSTRUC

NASMX_STRUC GConverterInputStream
	NASMX_RESERVE parent_instance, 	int8_t, GFilterInputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GConverterInputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GFilterInputStreamClass_size
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GConverterOutputStream
	NASMX_RESERVE parent_instance, 	int8_t, GFilterOutputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GConverterOutputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GFilterOutputStreamClass_size
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDataInputStream
	NASMX_RESERVE parent_instance, 	int8_t, GBufferedInputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDataInputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GBufferedInputStreamClass_size
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDataOutputStream
	NASMX_RESERVE parent_instance, 	int8_t, GFilterOutputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDataOutputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GFilterOutputStreamClass_size
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusInterfaceVTable
	NASMX_RESERVE method_call, 	uint32_t, 1
	NASMX_RESERVE get_property, 	uint32_t, 1
	NASMX_RESERVE set_property, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusSubtreeVTable
	NASMX_RESERVE enumerate, 	uint32_t, 1
	NASMX_RESERVE introspect, 	uint32_t, 1
	NASMX_RESERVE dispatch, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusErrorEntry
	NASMX_RESERVE error_code, 	uint32_t, 1
	NASMX_RESERVE dbus_error_name, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusAnnotationInfo
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE key,		uint32_t, 1
	NASMX_RESERVE value,		uint32_t, 1
	NASMX_RESERVE annotations, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusArgInfo
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE signature, 	uint32_t, 1
	NASMX_RESERVE annotations, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusMethodInfo
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE in_args,		uint32_t, 1
	NASMX_RESERVE out_args, 	uint32_t, 1
	NASMX_RESERVE annotations, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusSignalInfo
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE args,		uint32_t, 1
	NASMX_RESERVE annotations, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusPropertyInfo
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE signature, 	uint32_t, 1
	NASMX_RESERVE flags,		uint32_t, 1
	NASMX_RESERVE annotations, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusInterfaceInfo
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE methods,		uint32_t, 1
	NASMX_RESERVE signals,		uint32_t, 1
	NASMX_RESERVE properties, 	uint32_t, 1
	NASMX_RESERVE annotations, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusNodeInfo
	NASMX_RESERVE ref_count, 	uint32_t, 1
	NASMX_RESERVE path,		uint32_t, 1
	NASMX_RESERVE interfaces, 	uint32_t, 1
	NASMX_RESERVE nodes,		uint32_t, 1
	NASMX_RESERVE annotations, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusProxy
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDBusProxyClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE g_properties_changed, 	uint32_t, 1
	NASMX_RESERVE g_signal, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GDriveIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE disconnected, 	uint32_t, 1
	NASMX_RESERVE eject_button, 	uint32_t, 1
	NASMX_RESERVE get_name, 	uint32_t, 1
	NASMX_RESERVE get_icon, 	uint32_t, 1
	NASMX_RESERVE has_volumes, 	uint32_t, 1
	NASMX_RESERVE get_volumes, 	uint32_t, 1
	NASMX_RESERVE is_media_removable, 	uint32_t, 1
	NASMX_RESERVE has_media, 	uint32_t, 1
	NASMX_RESERVE is_media_check_automatic, 	uint32_t, 1
	NASMX_RESERVE can_eject, 	uint32_t, 1
	NASMX_RESERVE can_poll_for_media, 	uint32_t, 1
	NASMX_RESERVE eject,		uint32_t, 1
	NASMX_RESERVE eject_finish, 	uint32_t, 1
	NASMX_RESERVE poll_for_media, 	uint32_t, 1
	NASMX_RESERVE poll_for_media_finish, 	uint32_t, 1
	NASMX_RESERVE get_identifier, 	uint32_t, 1
	NASMX_RESERVE enumerate_identifiers, 	uint32_t, 1
	NASMX_RESERVE get_start_stop_type, 	uint32_t, 1
	NASMX_RESERVE can_start, 	uint32_t, 1
	NASMX_RESERVE can_start_degraded, 	uint32_t, 1
	NASMX_RESERVE start,		uint32_t, 1
	NASMX_RESERVE start_finish, 	uint32_t, 1
	NASMX_RESERVE can_stop, 	uint32_t, 1
	NASMX_RESERVE stop,		uint32_t, 1
	NASMX_RESERVE stop_finish, 	uint32_t, 1
	NASMX_RESERVE stop_button, 	uint32_t, 1
	NASMX_RESERVE eject_with_operation,	uint32_t, 1
	NASMX_RESERVE eject_with_operation_finish, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GIconIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE hash,		uint32_t, 1
	NASMX_RESERVE equal,		uint32_t, 1
	NASMX_RESERVE to_tokens, 	uint32_t, 1
	NASMX_RESERVE from_tokens, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GEmblemedIcon
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GEmblemedIconClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC GFileAttributeInfo
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE flags,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileAttributeInfoList
	NASMX_RESERVE infos,		uint32_t, 1
	NASMX_RESERVE n_infos,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileEnumerator
	NASMX_RESERVE parent_instance, 	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileEnumeratorClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE next_file, 	uint32_t, 1
	NASMX_RESERVE close_fn, 	uint32_t, 1
	NASMX_RESERVE next_files_async, uint32_t, 1
	NASMX_RESERVE next_files_finish, uint32_t, 1
	NASMX_RESERVE close_async, 	uint32_t, 1
	NASMX_RESERVE close_finish, 	uint32_t, 1
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
	NASMX_RESERVE _g_reserved6, 	uint32_t, 1
	NASMX_RESERVE _g_reserved7, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE dup,		uint32_t, 1
	NASMX_RESERVE hash,		uint32_t, 1
	NASMX_RESERVE equal,		uint32_t, 1
	NASMX_RESERVE is_native, 	uint32_t, 1
	NASMX_RESERVE has_uri_scheme, 	uint32_t, 1
	NASMX_RESERVE get_uri_scheme, 	uint32_t, 1
	NASMX_RESERVE get_basename, 	uint32_t, 1
	NASMX_RESERVE get_path, 	uint32_t, 1
	NASMX_RESERVE get_uri,		uint32_t, 1
	NASMX_RESERVE get_parse_name, 	uint32_t, 1
	NASMX_RESERVE get_parent, 	uint32_t, 1
	NASMX_RESERVE prefix_matches, 	uint32_t, 1
	NASMX_RESERVE get_relative_path, 	uint32_t, 1
	NASMX_RESERVE resolve_relative_path, 	uint32_t, 1
	NASMX_RESERVE get_child_for_display_name, 	uint32_t, 1
	NASMX_RESERVE enumerate_children,	uint32_t, 1
	NASMX_RESERVE enumerate_children_async, 	uint32_t, 1
	NASMX_RESERVE enumerate_children_finish, 	uint32_t, 1
	NASMX_RESERVE query_info,	uint32_t, 1
	NASMX_RESERVE query_info_async,	uint32_t, 1
	NASMX_RESERVE query_info_finish,	uint32_t, 1
	NASMX_RESERVE query_filesystem_info,	uint32_t, 1
	NASMX_RESERVE query_filesystem_info_async, 	uint32_t, 1
	NASMX_RESERVE query_filesystem_info_finish, 	uint32_t, 1
	NASMX_RESERVE find_enclosing_mount,	uint32_t, 1
	NASMX_RESERVE find_enclosing_mount_async, 	uint32_t, 1
	NASMX_RESERVE find_enclosing_mount_finish, 	uint32_t, 1
	NASMX_RESERVE set_display_name,	uint32_t, 1
	NASMX_RESERVE set_display_name_async,	uint32_t, 1
	NASMX_RESERVE set_display_name_finish,	uint32_t, 1
	NASMX_RESERVE query_settable_attributes, 	uint32_t, 1
	NASMX_RESERVE _query_settable_attributes_async, 	uint32_t, 1
	NASMX_RESERVE _query_settable_attributes_finish, 	uint32_t, 1
	NASMX_RESERVE query_writable_namespaces,	uint32_t, 1
	NASMX_RESERVE _query_writable_namespaces_async, 	uint32_t, 1
	NASMX_RESERVE _query_writable_namespaces_finish, 	uint32_t, 1
	NASMX_RESERVE set_attribute,	uint32_t, 1
	NASMX_RESERVE set_attributes_from_info, uint32_t, 1
	NASMX_RESERVE set_attributes_async, 	uint32_t, 1
	NASMX_RESERVE set_attributes_finish, 	uint32_t, 1
	NASMX_RESERVE read_fn,		uint32_t, 1
	NASMX_RESERVE read_async,	uint32_t, 1
	NASMX_RESERVE read_finish,	uint32_t, 1
	NASMX_RESERVE append_to,	uint32_t, 1
	NASMX_RESERVE append_to_async,	uint32_t, 1
	NASMX_RESERVE append_to_finish, 	uint32_t, 1
	NASMX_RESERVE create,		uint32_t, 1
	NASMX_RESERVE create_async,	uint32_t, 1
	NASMX_RESERVE create_finish,	uint32_t, 1
	NASMX_RESERVE replace,		uint32_t, 1
	NASMX_RESERVE replace_async,	uint32_t, 1
	NASMX_RESERVE replace_finish,	uint32_t, 1
	NASMX_RESERVE delete_file,	uint32_t, 1
	NASMX_RESERVE _delete_file_async, 	uint32_t, 1
	NASMX_RESERVE _delete_file_finish, 	uint32_t, 1
	NASMX_RESERVE trash,		uint32_t, 1
	NASMX_RESERVE _trash_async,	uint32_t, 1
	NASMX_RESERVE _trash_finish,	uint32_t, 1
	NASMX_RESERVE make_directory,	uint32_t, 1
	NASMX_RESERVE _make_directory_async, 	uint32_t, 1
	NASMX_RESERVE _make_directory_finish, 	uint32_t, 1
	NASMX_RESERVE make_symbolic_link, 	uint32_t, 1
	NASMX_RESERVE _make_symbolic_link_async, uint32_t, 1
	NASMX_RESERVE _make_symbolic_link_finish, uint32_t, 1
	NASMX_RESERVE copy,		uint32_t, 1
	NASMX_RESERVE copy_async, 	uint32_t, 1
	NASMX_RESERVE copy_finish, 	uint32_t, 1
	NASMX_RESERVE move,		uint32_t, 1
	NASMX_RESERVE _move_async, 	uint32_t, 1
	NASMX_RESERVE _move_finish, 	uint32_t, 1
	NASMX_RESERVE mount_mountable, 	uint32_t, 1
	NASMX_RESERVE mount_mountable_finish,	uint32_t, 1
	NASMX_RESERVE unmount_mountable,	uint32_t, 1
	NASMX_RESERVE unmount_mountable_finish,	uint32_t, 1
	NASMX_RESERVE eject_mountable,	uint32_t, 1
	NASMX_RESERVE eject_mountable_finish, 	uint32_t, 1
	NASMX_RESERVE mount_enclosing_volume, 	uint32_t, 1
	NASMX_RESERVE mount_enclosing_volume_finish, uint32_t, 1
	NASMX_RESERVE monitor_dir,	uint32_t, 1
	NASMX_RESERVE monitor_file,	uint32_t, 1
	NASMX_RESERVE open_readwrite,	uint32_t, 1
	NASMX_RESERVE open_readwrite_async, 	uint32_t, 1
	NASMX_RESERVE open_readwrite_finish, 	uint32_t, 1
	NASMX_RESERVE create_readwrite, 	uint32_t, 1
	NASMX_RESERVE create_readwrite_async, 	uint32_t, 1
	NASMX_RESERVE create_readwrite_finish, 	uint32_t, 1
	NASMX_RESERVE replace_readwrite, 	uint32_t, 1
	NASMX_RESERVE replace_readwrite_async, 	uint32_t, 1
	NASMX_RESERVE replace_readwrite_finish,	uint32_t, 1
	NASMX_RESERVE start_mountable,	uint32_t, 1
	NASMX_RESERVE start_mountable_finish, 	uint32_t, 1
	NASMX_RESERVE stop_mountable,	uint32_t, 1
	NASMX_RESERVE stop_mountable_finish, 	uint32_t, 1
	NASMX_RESERVE supports_thread_contexts, uint32_t, 1
	NASMX_RESERVE unmount_mountable_with_operation,	uint32_t, 1
	NASMX_RESERVE unmount_mountable_with_operation_finish,	uint32_t, 1
	NASMX_RESERVE eject_mountable_with_operation,		uint32_t, 1
	NASMX_RESERVE eject_mountable_with_operation_finish,	uint32_t, 1
	NASMX_RESERVE poll_mountable,	uint32_t, 1
	NASMX_RESERVE poll_mountable_finish,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileInputStream
	NASMX_RESERVE parent_instance, 	int8_t, GInputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileInputStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GInputStreamClass_size
	NASMX_RESERVE tell,		uint32_t, 1
	NASMX_RESERVE can_seek, 	uint32_t, 1
	NASMX_RESERVE seek,		uint32_t, 1
	NASMX_RESERVE query_info, 	uint32_t, 1
	NASMX_RESERVE query_info_async, uint32_t, 1
	NASMX_RESERVE query_info_finish,	uint32_t, 1
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GIOStream
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GIOStreamClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE get_input_stream,	uint32_t, 1
	NASMX_RESERVE get_output_stream,	uint32_t, 1
	NASMX_RESERVE close_fn,		uint32_t, 1
	NASMX_RESERVE close_async, 	uint32_t, 1
	NASMX_RESERVE close_finish, 	uint32_t, 1
	NASMX_RESERVE _g_reserved1, 	uint32_t, 1
	NASMX_RESERVE _g_reserved2, 	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
	NASMX_RESERVE _g_reserved4, 	uint32_t, 1
	NASMX_RESERVE _g_reserved5, 	uint32_t, 1
	NASMX_RESERVE _g_reserved6, 	uint32_t, 1
	NASMX_RESERVE _g_reserved7, 	uint32_t, 1
	NASMX_RESERVE _g_reserved8, 	uint32_t, 1
	NASMX_RESERVE _g_reserved9, 	uint32_t, 1
	NASMX_RESERVE _g_reserved10, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileIOStream
	NASMX_RESERVE parent_instance,	int8_t, GIOStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileIOStreamClass
	NASMX_RESERVE parent_class,	int8_t, GIOStreamClass_size
	NASMX_RESERVE tell,		uint32_t, 1
	NASMX_RESERVE can_seek,		uint32_t, 1
	NASMX_RESERVE seek,		uint32_t, 1
	NASMX_RESERVE can_truncate,	uint32_t, 1
	NASMX_RESERVE truncate_fn,	uint32_t, 1
	NASMX_RESERVE query_info, 	uint32_t, 1
	NASMX_RESERVE query_info_async,	uint32_t, 1
	NASMX_RESERVE query_info_finish,	uint32_t, 1
	NASMX_RESERVE get_etag,		uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileMonitor
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileMonitorClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE cancel,		uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFilenameCompleterClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE got_completion_data,	uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3, 	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileOutputStream
	NASMX_RESERVE parent_instance,	int8_t, GOutputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GFileOutputStreamClass
	NASMX_RESERVE parent_class,	int8_t, GOutputStreamClass_size
	NASMX_RESERVE tell,		uint32_t, 1
	NASMX_RESERVE can_seek,		uint32_t, 1
	NASMX_RESERVE seek,		uint32_t, 1
	NASMX_RESERVE can_truncate,	uint32_t, 1
	NASMX_RESERVE truncate_fn,	uint32_t, 1
	NASMX_RESERVE query_info,	uint32_t, 1
	NASMX_RESERVE query_info_async, uint32_t, 1
	NASMX_RESERVE query_info_finish, uint32_t, 1
	NASMX_RESERVE get_etag,		uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GInetAddress
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GInetAddressClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE to_string,	uint32_t, 1
	NASMX_RESERVE to_bytes,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketAddress
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC GSocketAddressClass
	NASMX_RESERVE parent_class, 	int8_t, GObjectClass_size
	NASMX_RESERVE get_family,	uint32_t, 1
	NASMX_RESERVE get_native_size,	uint32_t, 1
	NASMX_RESERVE to_native,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GInetSocketAddress
	NASMX_RESERVE parent_instance,	int8_t, GSocketAddress_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GInetSocketAddressClass
	NASMX_RESERVE parent_class,	int8_t, GSocketAddressClass_size
NASMX_ENDSTRUC

NASMX_STRUC GLoadableIconIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE load,		uint32_t, 1
	NASMX_RESERVE load_async,	uint32_t, 1
	NASMX_RESERVE load_finish,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GMemoryInputStream
	NASMX_RESERVE parent_instance,	int8_t, GInputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GMemoryInputStreamClass
	NASMX_RESERVE parent_class,	int8_t, GInputStreamClass_size
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GMemoryOutputStream
	NASMX_RESERVE parent_instance,	int8_t, GOutputStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GMemoryOutputStreamClass
	NASMX_RESERVE parent_class,	int8_t, GOutputStreamClass_size
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GMountIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE unmounted,	uint32_t, 1
	NASMX_RESERVE get_root,		uint32_t, 1
	NASMX_RESERVE get_name,		uint32_t, 1
	NASMX_RESERVE get_icon,		uint32_t, 1
	NASMX_RESERVE get_uuid,		uint32_t, 1
	NASMX_RESERVE get_volume,	uint32_t, 1
	NASMX_RESERVE get_drive, 	uint32_t, 1
	NASMX_RESERVE can_unmount,	uint32_t, 1
	NASMX_RESERVE can_eject,	uint32_t, 1
	NASMX_RESERVE unmount,		uint32_t, 1
	NASMX_RESERVE unmount_finish,	uint32_t, 1
	NASMX_RESERVE eject,		uint32_t, 1
	NASMX_RESERVE eject_finish,	uint32_t, 1
	NASMX_RESERVE remount,		uint32_t, 1
	NASMX_RESERVE remount_finish,	uint32_t, 1
	NASMX_RESERVE guess_content_type,	uint32_t, 1
	NASMX_RESERVE guess_content_type_finish,	uint32_t, 1
	NASMX_RESERVE guess_content_type_sync,	uint32_t, 1
	NASMX_RESERVE pre_unmount,			uint32_t, 1
	NASMX_RESERVE unmount_with_operation,	uint32_t, 1
	NASMX_RESERVE unmount_with_operation_finish,	uint32_t, 1
	NASMX_RESERVE eject_with_operation,	uint32_t, 1
	NASMX_RESERVE eject_with_operation_finish,	uint32_t, 1
	NASMX_RESERVE get_default_location,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GMountOperation
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GMountOperationClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE ask_password,	uint32_t, 1
	NASMX_RESERVE ask_question,	uint32_t, 1
	NASMX_RESERVE reply,		uint32_t, 1
	NASMX_RESERVE aborted,		uint32_t, 1
	NASMX_RESERVE show_processes,	uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
	NASMX_RESERVE _g_reserved6,	uint32_t, 1
	NASMX_RESERVE _g_reserved7,	uint32_t, 1
	NASMX_RESERVE _g_reserved8,	uint32_t, 1
	NASMX_RESERVE _g_reserved9,	uint32_t, 1
	NASMX_RESERVE _g_reserved10,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GVolumeMonitor
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GVolumeMonitorClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE volume_added,	uint32_t, 1
	NASMX_RESERVE volume_removed,	uint32_t, 1
	NASMX_RESERVE volume_changed,	uint32_t, 1
	NASMX_RESERVE mount_added,	uint32_t, 1
	NASMX_RESERVE mount_removed,	uint32_t, 1
	NASMX_RESERVE mount_pre_unmount,	uint32_t, 1
	NASMX_RESERVE mount_changed,	uint32_t, 1
	NASMX_RESERVE drive_connected,	uint32_t, 1
	NASMX_RESERVE drive_disconnected,	uint32_t, 1
	NASMX_RESERVE drive_changed,	uint32_t, 1
	NASMX_RESERVE is_supported,	uint32_t, 1
	NASMX_RESERVE get_connected_drives,	uint32_t, 1
	NASMX_RESERVE get_volumes,	uint32_t, 1
	NASMX_RESERVE get_mounts,	uint32_t, 1
	NASMX_RESERVE get_volume_for_uuid,	uint32_t, 1
	NASMX_RESERVE get_mount_for_uuid,	uint32_t, 1
	NASMX_RESERVE adopt_orphan_mount,	uint32_t, 1
	NASMX_RESERVE drive_eject_button,	uint32_t, 1
	NASMX_RESERVE drive_stop_button,	uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
	NASMX_RESERVE _g_reserved6,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GNativeVolumeMonitor
	NASMX_RESERVE parent_instance,	int8_t, GVolumeMonitor_size
NASMX_ENDSTRUC

NASMX_STRUC GNativeVolumeMonitorClass
	NASMX_RESERVE parent_class,	int8_t, GVolumeMonitorClass_size
	NASMX_RESERVE get_mount_for_mount_path,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GNetworkAddress
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GNetworkAddressClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC GNetworkService
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GNetworkServiceClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC GPermission
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GPollableInputStreamInterface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE can_poll,		uint32_t, 1
	NASMX_RESERVE is_readable,	uint32_t, 1
	NASMX_RESERVE create_source,	uint32_t, 1
	NASMX_RESERVE read_nonblocking,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GPollableOutputStreamInterface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE can_poll,		uint32_t, 1
	NASMX_RESERVE is_writable,	uint32_t, 1
	NASMX_RESERVE create_source,	uint32_t, 1
	NASMX_RESERVE write_nonblocking,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GProxyInterface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE connect,		uint32_t, 1
	NASMX_RESERVE connect_async,	uint32_t, 1
	NASMX_RESERVE connect_finish,	uint32_t, 1
	NASMX_RESERVE supports_hostname,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GProxyAddress
	NASMX_RESERVE parent_instance,	int8_t, GInetSocketAddress_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GProxyAddressClass
	NASMX_RESERVE parent_class,	int8_t, GInetSocketAddressClass_size
NASMX_ENDSTRUC

NASMX_STRUC GSocketAddressEnumerator
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC GSocketAddressEnumeratorClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE next,		uint32_t, 1
	NASMX_RESERVE next_async,	uint32_t, 1
	NASMX_RESERVE next_finish,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GProxyAddressEnumerator
	NASMX_RESERVE parent_instance,	int8_t, GSocketAddressEnumerator_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GProxyAddressEnumeratorClass
	NASMX_RESERVE parent_class,	int8_t, GSocketAddressEnumeratorClass_size
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
	NASMX_RESERVE _g_reserved6,	uint32_t, 1
	NASMX_RESERVE _g_reserved7,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSeekableIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE tell,		uint32_t, 1
	NASMX_RESERVE can_seek,		uint32_t, 1
	NASMX_RESERVE seek,		uint32_t, 1
	NASMX_RESERVE can_truncate,	uint32_t, 1
	NASMX_RESERVE truncate_fn,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSettingsClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE writable_changed,	uint32_t, 1
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE writable_change_event,	uint32_t, 1
	NASMX_RESERVE change_event,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSettings
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketClientClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketClient
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketConnectableIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE enumerate,	uint32_t, 1
	NASMX_RESERVE proxy_enumerate,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
	NASMX_RESERVE _g_reserved6,	uint32_t, 1
	NASMX_RESERVE _g_reserved7,	uint32_t, 1
	NASMX_RESERVE _g_reserved8,	uint32_t, 1
	NASMX_RESERVE _g_reserved9,	uint32_t, 1
	NASMX_RESERVE _g_reserved10,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocket
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketConnectionClass
	NASMX_RESERVE parent_class,	int8_t, GIOStreamClass_size
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
	NASMX_RESERVE _g_reserved6,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketConnection
	NASMX_RESERVE parent_instance,	int8_t, GIOStream_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketControlMessageClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE get_size,		uint32_t, 1
	NASMX_RESERVE get_level,	uint32_t, 1
	NASMX_RESERVE get_type,		uint32_t, 1
	NASMX_RESERVE serialize,	uint32_t, 1
	NASMX_RESERVE deserialize,	uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketControlMessage
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketListenerClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
	NASMX_RESERVE _g_reserved6,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketListener
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketServiceClass
	NASMX_RESERVE parent_class,	int8_t, GSocketListenerClass_size
	NASMX_RESERVE incoming,		uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
	NASMX_RESERVE _g_reserved6,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GSocketService
	NASMX_RESERVE parent_instance,	int8_t, GSocketListener_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTcpConnectionClass
	NASMX_RESERVE parent_class,	int8_t, GSocketConnectionClass_size
NASMX_ENDSTRUC

NASMX_STRUC GTcpConnection
	NASMX_RESERVE parent_instance,	int8_t, GSocketConnection_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTcpWrapperConnectionClass
	NASMX_RESERVE parent_class,	int8_t, GTcpConnectionClass_size
NASMX_ENDSTRUC

NASMX_STRUC GTcpWrapperConnection
	NASMX_RESERVE parent_instance,	int8_t, GTcpConnection_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GThreadedSocketServiceClass
	NASMX_RESERVE parent_class,	int8_t, GSocketServiceClass_size
	NASMX_RESERVE run,		uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GThreadedSocketService
	NASMX_RESERVE parent_instance,	int8_t, GSocketService_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTlsBackendInterface
	NASMX_RESERVE g_iface,			int8_t, GTypeInterface_size
	NASMX_RESERVE supports_tls,		uint32_t, 1
	NASMX_RESERVE get_certificate_type,	uint32_t, 1
	NASMX_RESERVE get_client_connection_type,	uint32_t, 1
	NASMX_RESERVE get_server_connection_type,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTlsCertificateClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE verify,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTlsConnectionClass
	NASMX_RESERVE parent_class,	int8_t, GIOStreamClass_size
	NASMX_RESERVE accept_certificate,	uint32_t, 1
	NASMX_RESERVE handshake,	uint32_t, 1
	NASMX_RESERVE handshake_async,	uint32_t, 1
	NASMX_RESERVE handshake_finish,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GTlsClientConnectionInterface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
NASMX_ENDSTRUC

NASMX_STRUC GTlsServerConnectionInterface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
NASMX_ENDSTRUC

NASMX_STRUC GVfs
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC GVfsClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE is_active,	uint32_t, 1
	NASMX_RESERVE get_file_for_path,	uint32_t, 1
	NASMX_RESERVE get_file_for_uri,		uint32_t, 1
	NASMX_RESERVE get_supported_uri_schemes,	uint32_t, 1
	NASMX_RESERVE parse_name,	uint32_t, 1
	NASMX_RESERVE local_file_add_info,	uint32_t, 1
	NASMX_RESERVE add_writable_namespaces,	uint32_t, 1
	NASMX_RESERVE local_file_set_attributes,	uint32_t, 1
	NASMX_RESERVE local_file_removed,	uint32_t, 1
	NASMX_RESERVE local_file_moved,	uint32_t, 1
	NASMX_RESERVE _g_reserved1,	uint32_t, 1
	NASMX_RESERVE _g_reserved2,	uint32_t, 1
	NASMX_RESERVE _g_reserved3,	uint32_t, 1
	NASMX_RESERVE _g_reserved4,	uint32_t, 1
	NASMX_RESERVE _g_reserved5,	uint32_t, 1
	NASMX_RESERVE _g_reserved6,	uint32_t, 1
	NASMX_RESERVE _g_reserved7,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GVolumeIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE removed,		uint32_t, 1
	NASMX_RESERVE get_name,		uint32_t, 1
	NASMX_RESERVE get_icon,		uint32_t, 1
	NASMX_RESERVE get_uuid,		uint32_t, 1
	NASMX_RESERVE get_drive,	uint32_t, 1
	NASMX_RESERVE get_mount,	uint32_t, 1
	NASMX_RESERVE can_mount,	uint32_t, 1
	NASMX_RESERVE can_eject,	uint32_t, 1
	NASMX_RESERVE mount_fn,		uint32_t, 1
	NASMX_RESERVE mount_finish,	uint32_t, 1
	NASMX_RESERVE eject,		uint32_t, 1
	NASMX_RESERVE eject_finish,	uint32_t, 1
	NASMX_RESERVE get_identifier,	uint32_t, 1
	NASMX_RESERVE enumerate_identifiers,	uint32_t, 1
	NASMX_RESERVE should_automount,		uint32_t, 1
	NASMX_RESERVE get_activation_root,	uint32_t, 1
	NASMX_RESERVE eject_with_operation,	uint32_t, 1
	NASMX_RESERVE eject_with_operation_finish,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GZlibCompressorClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC GZlibDecompressorClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC PangoRectangle
	NASMX_RESERVE x,	uint32_t, 1
	NASMX_RESERVE y,	uint32_t, 1
	NASMX_RESERVE width,	uint32_t, 1
	NASMX_RESERVE height,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoMatrix
	NASMX_RESERVE xx,	uint32_t, 1
	NASMX_RESERVE xy,	uint32_t, 1
	NASMX_RESERVE yx,	uint32_t, 1
	NASMX_RESERVE yy,	uint32_t, 1
	NASMX_RESERVE x0,	uint32_t, 1
	NASMX_RESERVE y0,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoColor
	NASMX_RESERVE red,	uint16_t, 1
	NASMX_RESERVE green,	uint16_t, 1
	NASMX_RESERVE blue,	uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAttribute
	NASMX_RESERVE klass,		uint32_t, 1
	NASMX_RESERVE start_index,	uint32_t, 1
	NASMX_RESERVE end_index,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAttrClass
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE copy,		uint32_t, 1
	NASMX_RESERVE destroy,		uint32_t, 1
	NASMX_RESERVE equal,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAttrString
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE value,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAttrLanguage
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE value,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAttrInt
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE value,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAttrFloat
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE value,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAttrColor
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE color,		int8_t, PangoColor_size
NASMX_ENDSTRUC

NASMX_STRUC PangoAttrSize
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE size,		uint32_t, 1
	NASMX_RESERVE absolute,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAttrShape
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE ink_rect,		int8_t, PangoRectangle_size
	NASMX_RESERVE logical_rect,	int8_t, PangoRectangle_size
	NASMX_RESERVE data,		uint32_t, 1
	NASMX_RESERVE copy_func,	uint32_t, 1
	NASMX_RESERVE destroy_func,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAttrFontDesc
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE desc,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoAnalysis
	NASMX_RESERVE shape_engine,	uint32_t, 1
	NASMX_RESERVE lang_engine,	uint32_t, 1
	NASMX_RESERVE font,		uint32_t, 1
	NASMX_RESERVE level,		int8_t, 1
	NASMX_RESERVE gravity,		int8_t, 1
	NASMX_RESERVE flags,		int8_t, 1
	NASMX_RESERVE script,		int8_t, 1
	NASMX_RESERVE language,		uint32_t, 1
	NASMX_RESERVE extra_attrs,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoItem
	NASMX_RESERVE offset,		uint32_t, 1
	NASMX_RESERVE length,		uint32_t, 1
	NASMX_RESERVE num_chars,	uint32_t, 1
	NASMX_RESERVE analysis,		int8_t, PangoAnalysis_size
NASMX_ENDSTRUC

NASMX_STRUC PangoLogAttr
	NASMX_RESERVE is_line_break,	uint32_t, 1
;.is_mandatory_break:	RESD 1
;.is_char_break:	RESD 1
;.is_white:		RESD 1
;.is_cursor_position:	RESD 1
;.is_word_start:	RESD 1
;.is_word_end:		RESD 1
;.is_sentence_boundary:	RESD 1
	NASMX_RESERVE is_sentence_start, uint32_t, 1
;.is_sentence_end:	RESD 1
;.backspace_deletes_character:	RESD 1
;.is_expandable_space:	RESD 1
;.is_word_boundary:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC PangoGlyphGeometry
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE x_offset,		uint32_t, 1
	NASMX_RESERVE y_offset,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoGlyphVisAttr
	NASMX_RESERVE is_cluster_start,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoGlyphInfo
	NASMX_RESERVE glyph,		uint32_t, 1
	NASMX_RESERVE geometry,		int8_t, PangoGlyphGeometry_size
	NASMX_RESERVE attr,		int8_t, PangoGlyphVisAttr_size
NASMX_ENDSTRUC

NASMX_STRUC PangoGlyphItem
	NASMX_RESERVE item,		uint32_t, 1
	NASMX_RESERVE glyphs,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoGlyphItemIter
	NASMX_RESERVE glyph_item,	uint32_t, 1
	NASMX_RESERVE text,		uint32_t, 1
	NASMX_RESERVE start_glyph,	uint32_t, 1
	NASMX_RESERVE start_index,	uint32_t, 1
	NASMX_RESERVE start_char,	uint32_t, 1
	NASMX_RESERVE end_glyph,	uint32_t, 1
	NASMX_RESERVE end_index,	uint32_t, 1
	NASMX_RESERVE end_char,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoLayoutLine
	NASMX_RESERVE layout,		uint32_t, 1
	NASMX_RESERVE start_index,	uint32_t, 1
	NASMX_RESERVE length,		uint32_t, 1
	NASMX_RESERVE runs,		uint32_t, 1
	NASMX_RESERVE is_paragraph_start,	uint32_t, 1
;.resolved_dir:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC PangoRenderer
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE underline,	uint32_t, 1
	NASMX_RESERVE strikethrough,	uint32_t, 1
	NASMX_RESERVE active_count,	uint32_t, 1
	NASMX_RESERVE matrix,		uint32_t, 1
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PangoRendererClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE draw_glyphs,	uint32_t, 1
	NASMX_RESERVE draw_rectangle,	uint32_t, 1
	NASMX_RESERVE draw_error_underline,	uint32_t, 1
	NASMX_RESERVE draw_shape,	uint32_t, 1
	NASMX_RESERVE draw_trapezoid,	uint32_t, 1
	NASMX_RESERVE draw_glyph,	uint32_t, 1
	NASMX_RESERVE part_changed,	uint32_t, 1
	NASMX_RESERVE begin,		uint32_t, 1
	NASMX_RESERVE end,		uint32_t, 1
	NASMX_RESERVE prepare_run,	uint32_t, 1
	NASMX_RESERVE draw_glyph_item,	uint32_t, 1
	NASMX_RESERVE _pango_reserved2,	uint32_t, 1
	NASMX_RESERVE _pango_reserved3,	uint32_t, 1
	NASMX_RESERVE _pango_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkPoint
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkRectangle
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkSegment
	NASMX_RESERVE x1,		uint32_t, 1
	NASMX_RESERVE y1,		uint32_t, 1
	NASMX_RESERVE x2,		uint32_t, 1
	NASMX_RESERVE y2,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkSpan
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkColor
	NASMX_RESERVE pixel,		uint32_t, 1
	NASMX_RESERVE red,		uint16_t, 1
	NASMX_RESERVE green,		uint16_t, 1
	NASMX_RESERVE blue,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
NASMX_ENDSTRUC

NASMX_STRUC GdkColormap
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE size,		uint32_t, 1
	NASMX_RESERVE colors,		uint32_t, 1
	NASMX_RESERVE visual,		uint32_t, 1
	NASMX_RESERVE windowing_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkColormapClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC GdkDeviceKey
	NASMX_RESERVE keyval,		uint32_t, 1
	NASMX_RESERVE modifiers,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkDeviceAxis
	NASMX_RESERVE use,		uint32_t, 1
	NASMX_RESERVE min,		uint32_t, 1
	NASMX_RESERVE max,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkDevice
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE source,		uint32_t, 1
	NASMX_RESERVE mode,		uint32_t, 1
	NASMX_RESERVE has_cursor,	uint32_t, 1
	NASMX_RESERVE num_axes,		uint32_t, 1
	NASMX_RESERVE axes,		uint32_t, 1
	NASMX_RESERVE num_keys,		uint32_t, 1
	NASMX_RESERVE keys,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkTimeCoord
	NASMX_RESERVE time,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventAny
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
NASMX_ENDSTRUC

NASMX_STRUC GdkEventExpose
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE area,		int8_t, GdkRectangle_size
	NASMX_RESERVE region,		uint32_t, 1
	NASMX_RESERVE count,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventNoExpose
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
NASMX_ENDSTRUC

NASMX_STRUC GdkEventVisibility
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE state,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventMotion
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE time,		uint32_t, 1
	NASMX_RESERVE x,		uint64_t, 1
	NASMX_RESERVE y,		uint64_t, 1
	NASMX_RESERVE axes,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE is_hint,		uint16_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 2
	NASMX_RESERVE device,		uint32_t, 1
	NASMX_RESERVE x_root,		uint64_t, 1
	NASMX_RESERVE y_root,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventButton
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE time,		uint32_t, 1
	NASMX_RESERVE x,		uint64_t, 1
	NASMX_RESERVE y,		uint64_t, 1
	NASMX_RESERVE axes,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE button,		uint32_t, 1
	NASMX_RESERVE device,		uint32_t, 1
	NASMX_RESERVE x_root,		uint64_t, 1
	NASMX_RESERVE y_root,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventScroll
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE time,		uint32_t, 1
	NASMX_RESERVE x,		uint64_t, 1
	NASMX_RESERVE y,		uint64_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE direction,	uint32_t, 1
	NASMX_RESERVE device,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE x_root,		uint64_t, 1
	NASMX_RESERVE y_root,		uint64_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventKey
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE time,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE keyval,		uint32_t, 1
	NASMX_RESERVE length,		uint32_t, 1
	NASMX_RESERVE string,		uint32_t, 1
	NASMX_RESERVE hardware_keycode,	uint16_t, 1
	NASMX_RESERVE group,		int8_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 1
	NASMX_RESERVE is_modifier,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventCrossing
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE subwindow,	uint32_t, 1
	NASMX_RESERVE time,		uint32_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 4
	NASMX_RESERVE x,		uint64_t, 1
	NASMX_RESERVE y,		uint64_t, 1
	NASMX_RESERVE x_root,		uint64_t, 1
	NASMX_RESERVE y_root,		uint64_t, 1
	NASMX_RESERVE mode,		uint32_t, 1
	NASMX_RESERVE detail,		uint32_t, 1
	NASMX_RESERVE focus,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventFocus
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 1
	NASMX_RESERVE in,		uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventConfigure
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventProperty
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE atom,		uint32_t, 1
	NASMX_RESERVE time,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventSelection
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE selection,	uint32_t, 1
	NASMX_RESERVE target,		uint32_t, 1
	NASMX_RESERVE property,		uint32_t, 1
	NASMX_RESERVE time,		uint32_t, 1
	NASMX_RESERVE requestor,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventOwnerChange
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE owner,		uint32_t, 1
	NASMX_RESERVE reason,		uint32_t, 1
	NASMX_RESERVE selection,	uint32_t, 1
	NASMX_RESERVE time,		uint32_t, 1
	NASMX_RESERVE selection_time,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventProximity
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE time,		uint32_t, 1
	NASMX_RESERVE device,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventClient
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE message_type,	uint32_t, 1
	NASMX_RESERVE data_format,	uint16_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 2
NASMX_ENDSTRUC

NASMX_STRUC GdkEventSetting
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE action,		uint32_t, 1
	NASMX_RESERVE name,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkEventWindowState
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE send_event,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE changed_mask,	uint32_t, 1
	NASMX_RESERVE new_window_state,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkDisplay
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE queued_events,	uint32_t, 1
	NASMX_RESERVE queued_tail,	uint32_t, 1
	NASMX_RESERVE button_click_time,	uint32_t, 2
	NASMX_RESERVE button_window,	uint32_t, 2
	NASMX_RESERVE button_number,	uint32_t, 2
	NASMX_RESERVE double_click_time,	uint32_t, 1
	NASMX_RESERVE core_pointer,	uint32_t, 1
	NASMX_RESERVE pointer_hooks,	uint32_t, 1
	NASMX_RESERVE closed,		uint32_t, 1
;.ignore_core_events:		RESD 1
	NASMX_RESERVE double_click_distance,	uint32_t, 1
	NASMX_RESERVE button_x,		uint32_t, 2
	NASMX_RESERVE button_y,		uint32_t, 2
	NASMX_RESERVE pointer_grabs,	uint32_t, 1
	NASMX_RESERVE keyboard_grab,	uint32_t, 1
	NASMX_RESERVE pointer_info,	uint32_t, 1
	NASMX_RESERVE last_event_time,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkDisplayClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE get_display_name,	uint32_t, 1
	NASMX_RESERVE get_n_screens,	uint32_t, 1
	NASMX_RESERVE get_screen,	uint32_t, 1
	NASMX_RESERVE get_default_screen,	uint32_t, 1
	NASMX_RESERVE closed,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkDisplayPointerHooks
	NASMX_RESERVE get_pointer,	uint32_t, 1
	NASMX_RESERVE window_get_pointer,	uint32_t, 1
	NASMX_RESERVE window_at_pointer,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkScreen
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE closed,		uint32_t, 1
	NASMX_RESERVE normal_gcs,	uint32_t, 32
	NASMX_RESERVE exposure_gcs,	uint32_t, 32
	NASMX_RESERVE subwindow_gcs,	uint32_t, 32
	NASMX_RESERVE font_options,	uint32_t, 1
	NASMX_RESERVE resolution,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkScreenClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE size_changed,	uint32_t, 1
	NASMX_RESERVE composited_changed,	uint32_t, 1
	NASMX_RESERVE monitors_changed,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkAppLaunchContext
	NASMX_RESERVE parent_instance,	int8_t, GAppLaunchContext_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkAppLaunchContextClass
	NASMX_RESERVE parent_class,	int8_t, GAppLaunchContextClass_size
NASMX_ENDSTRUC

NASMX_STRUC GdkPixbufLoader
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkPixbufLoaderClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE size_prepared,	uint32_t, 1
	NASMX_RESERVE area_prepared,	uint32_t, 1
	NASMX_RESERVE area_updated,	uint32_t, 1
	NASMX_RESERVE closed,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkCursor
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE ref_count,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkDisplayManagerClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE display_opened,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkGCValues
	NASMX_RESERVE foreground,	int8_t, GdkColor_size
	NASMX_RESERVE background,	int8_t, GdkColor_size
	NASMX_RESERVE font,		uint32_t, 1
	NASMX_RESERVE function,		uint32_t, 1
	NASMX_RESERVE fill,		uint32_t, 1
	NASMX_RESERVE tile,		uint32_t, 1
	NASMX_RESERVE stipple,		uint32_t, 1
	NASMX_RESERVE clip_mask,	uint32_t, 1
	NASMX_RESERVE subwindow_mode,	uint32_t, 1
	NASMX_RESERVE ts_x_origin,	uint32_t, 1
	NASMX_RESERVE ts_y_origin,	uint32_t, 1
	NASMX_RESERVE clip_x_origin,	uint32_t, 1
	NASMX_RESERVE clip_y_origin,	uint32_t, 1
	NASMX_RESERVE graphics_exposures,	uint32_t, 1
	NASMX_RESERVE line_width,	uint32_t, 1
	NASMX_RESERVE line_style,	uint32_t, 1
	NASMX_RESERVE cap_style,	uint32_t, 1
	NASMX_RESERVE join_style,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkGC
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE clip_x_origin,	uint32_t, 1
	NASMX_RESERVE clip_y_origin,	uint32_t, 1
	NASMX_RESERVE ts_x_origin,	uint32_t, 1
	NASMX_RESERVE ts_y_origin,	uint32_t, 1
	NASMX_RESERVE colormap,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkGCClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE get_values,	uint32_t, 1
	NASMX_RESERVE set_values,	uint32_t, 1
	NASMX_RESERVE set_dashes,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkDrawable
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC GdkDrawableClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE create_gc,	uint32_t, 1
	NASMX_RESERVE draw_rectangle,	uint32_t, 1
	NASMX_RESERVE draw_arc,		uint32_t, 1
	NASMX_RESERVE draw_polygon,	uint32_t, 1
	NASMX_RESERVE draw_text,	uint32_t, 1
	NASMX_RESERVE draw_text_wc,	uint32_t, 1
	NASMX_RESERVE draw_drawable,	uint32_t, 1
	NASMX_RESERVE draw_points,	uint32_t, 1
	NASMX_RESERVE draw_segments,	uint32_t, 1
	NASMX_RESERVE draw_lines,	uint32_t, 1
	NASMX_RESERVE draw_glyphs,	uint32_t, 1
	NASMX_RESERVE draw_image,	uint32_t, 1
	NASMX_RESERVE get_depth,	uint32_t, 1
	NASMX_RESERVE get_size,		uint32_t, 1
	NASMX_RESERVE set_colormap,	uint32_t, 1
	NASMX_RESERVE get_colormap,	uint32_t, 1
	NASMX_RESERVE get_visual,	uint32_t, 1
	NASMX_RESERVE get_screen,	uint32_t, 1
	NASMX_RESERVE get_image,	uint32_t, 1
	NASMX_RESERVE get_clip_region,	uint32_t, 1
	NASMX_RESERVE get_visible_region,	uint32_t, 1
	NASMX_RESERVE get_composite_drawable,	uint32_t, 1
	NASMX_RESERVE draw_pixbuf,	uint32_t, 1
	NASMX_RESERVE _copy_to_image,	uint32_t, 1
	NASMX_RESERVE draw_glyphs_transformed,	uint32_t, 1
	NASMX_RESERVE draw_trapezoids,	uint32_t, 1
	NASMX_RESERVE ref_cairo_surface,	uint32_t, 1
	NASMX_RESERVE get_source_drawable,	uint32_t, 1
	NASMX_RESERVE set_cairo_clip,	uint32_t, 1
	NASMX_RESERVE create_cairo_surface,	uint32_t, 1
	NASMX_RESERVE draw_drawable_with_src,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved7,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved9,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved10,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved11,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved12,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved13,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved14,	uint32_t, 1
	NASMX_RESERVE _gdk_reserved15,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkTrapezoid
NASMX_ENDSTRUC

NASMX_STRUC GdkFont
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE ascent,		uint32_t, 1
	NASMX_RESERVE descent,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkImage
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE visual,		uint32_t, 1
	NASMX_RESERVE byte_order,	uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE depth,		uint16_t, 1
	NASMX_RESERVE bpp,		uint16_t, 1
	NASMX_RESERVE bpl,		uint16_t, 1
	NASMX_RESERVE bits_per_pixel,	uint16_t, 1
	NASMX_RESERVE mem,		uint32_t, 1
	NASMX_RESERVE colormap,		uint32_t, 1
	NASMX_RESERVE windowing_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkImageClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC GdkKeymapKey
	NASMX_RESERVE keycode,		uint32_t, 1
	NASMX_RESERVE group,		uint32_t, 1
	NASMX_RESERVE level,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkKeymap
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE display,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkKeymapClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE direction_changed,	uint32_t, 1
	NASMX_RESERVE keys_changed,	uint32_t, 1
	NASMX_RESERVE state_changed,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkPangoRenderer
	NASMX_RESERVE parent_instance,	int8_t, PangoRenderer_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkPangoRendererClass
	NASMX_RESERVE parent_class,	int8_t, PangoRendererClass_size
NASMX_ENDSTRUC

NASMX_STRUC GdkPangoAttrStipple
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE stipple,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkPangoAttrEmbossed
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE embossed,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkPangoAttrEmbossColor
	NASMX_RESERVE attr,		int8_t, PangoAttribute_size
	NASMX_RESERVE color,		int8_t, PangoColor_size
NASMX_ENDSTRUC

NASMX_STRUC GdkPixmapObject
	NASMX_RESERVE parent_instance,	int8_t, GdkDrawable_size
	NASMX_RESERVE impl,		uint32_t, 1
	NASMX_RESERVE depth,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkPixmapObjectClass
	NASMX_RESERVE parent_class,	int8_t, GdkDrawableClass_size
NASMX_ENDSTRUC

NASMX_STRUC GdkWindowAttr
	NASMX_RESERVE title,		uint32_t, 1
	NASMX_RESERVE event_mask,	uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE wclass,		uint32_t, 1
	NASMX_RESERVE visual,		uint32_t, 1
	NASMX_RESERVE colormap,		uint32_t, 1
	NASMX_RESERVE window_type,	uint32_t, 1
	NASMX_RESERVE cursor,		uint32_t, 1
	NASMX_RESERVE wmclass_name,	uint32_t, 1
	NASMX_RESERVE wmclass_class,	uint32_t, 1
	NASMX_RESERVE override_redirect,	uint32_t, 1
	NASMX_RESERVE type_hint,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkGeometry
	NASMX_RESERVE min_width,	uint32_t, 1
	NASMX_RESERVE min_height,	uint32_t, 1
	NASMX_RESERVE max_width,	uint32_t, 1
	NASMX_RESERVE max_height,	uint32_t, 1
	NASMX_RESERVE base_width,	uint32_t, 1
	NASMX_RESERVE base_height,	uint32_t, 1
	NASMX_RESERVE width_inc,	uint32_t, 1
	NASMX_RESERVE height_inc,	uint32_t, 1
	NASMX_RESERVE min_aspect,	uint32_t, 1
	NASMX_RESERVE max_aspect,	uint32_t, 1
	NASMX_RESERVE win_gravity,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkPointerHooks
	NASMX_RESERVE get_pointer,	uint32_t, 1
	NASMX_RESERVE window_at_pointer,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkWindowObject
	NASMX_RESERVE parent_instance,	int8_t, GdkDrawable_size
	NASMX_RESERVE impl,		uint32_t, 1
	NASMX_RESERVE parent,		uint32_t, 1
	NASMX_RESERVE user_data,	uint32_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE extension_events,	uint32_t, 1
	NASMX_RESERVE filters,		uint32_t, 1
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE bg_color,		int8_t, GdkColor_size
	NASMX_RESERVE bg_pixmap,	uint32_t, 1
	NASMX_RESERVE paint_stack,	uint32_t, 1
	NASMX_RESERVE update_area,	uint32_t, 1
	NASMX_RESERVE update_freeze_count,	uint32_t, 1
	NASMX_RESERVE window_type,	int8_t, 1
	NASMX_RESERVE depth,		int8_t, 1
	NASMX_RESERVE resize_count,	int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE guffaw_gravity,	uint32_t, 1
;.input_only:		RESD 1
;.modal_hint:		RESD 1
;.composited:		RESD 1
;.destroyed:		RESD 1
;.accept_focus:		RESD 1
;.focus_on_map:		RESD 1
;.shaped:		RESD 1
	NASMX_RESERVE event_mask,	uint32_t, 1
	NASMX_RESERVE update_and_descendants_freeze_count,	uint32_t, 1
	NASMX_RESERVE redirect,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GdkWindowObjectClass
	NASMX_RESERVE parent_class,	int8_t, GdkDrawableClass_size
NASMX_ENDSTRUC

NASMX_STRUC GdkVisual
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE depth,		uint32_t, 1
	NASMX_RESERVE byte_order,	uint32_t, 1
	NASMX_RESERVE colormap_size,	uint32_t, 1
	NASMX_RESERVE bits_per_rgb,	uint32_t, 1
	NASMX_RESERVE red_mask,		uint32_t, 1
	NASMX_RESERVE red_shift,	uint32_t, 1
	NASMX_RESERVE red_prec,		uint32_t, 1
	NASMX_RESERVE green_mask,	uint32_t, 1
	NASMX_RESERVE green_shift,	uint32_t, 1
	NASMX_RESERVE green_prec,	uint32_t, 1
	NASMX_RESERVE blue_mask,	uint32_t, 1
	NASMX_RESERVE blue_shift,	uint32_t, 1
	NASMX_RESERVE blue_prec,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAccelGroup
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE lock_count,	uint32_t, 1
	NASMX_RESERVE modifier_mask,	uint32_t, 1
	NASMX_RESERVE acceleratables,	uint32_t, 1
	NASMX_RESERVE n_accels,		uint32_t, 1
	NASMX_RESERVE priv_accels,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAccelGroupClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE accel_changed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAccelKey
	NASMX_RESERVE accel_key,	uint32_t, 1
	NASMX_RESERVE accel_mods,	uint32_t, 1
	NASMX_RESERVE accel_flags,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAccelGroupEntry
	NASMX_RESERVE key,		int8_t, GtkAccelKey_size
	NASMX_RESERVE closure,		uint32_t, 1
	NASMX_RESERVE accel_path_quark,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkArg
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE name,		uint32_t, 1
;;.char_data:		RESB 1
;;.uchar_data:		RESB 1
;;.bool_data:		RESD 1
;;.int_data:		RESD 1
;;.uint_data:		RESD 1
;;.long_data:		RESD 1
;;.ulong_data:		RESD 1
;;.float_data:		RESD 1
;;.double_data:		RESD 1
;;.string_data:		RESD 1
;;.object_data:		RESD 1
;;.pointer_data:	RESD 1
;;.f:		RESD 1
	NASMX_RESERVE d_union,		uint32_t, 2
NASMX_ENDSTRUC

NASMX_STRUC GtkTypeInfo
	NASMX_RESERVE type_name,	uint32_t, 1
	NASMX_RESERVE object_size,	uint32_t, 1
	NASMX_RESERVE class_size,	uint32_t, 1
	NASMX_RESERVE class_init_func,	int8_t, 4 ; GtkClassInitFunc_size
	NASMX_RESERVE object_init_func,	int8_t, 4 ; GtkObjectInitFunc_size
	NASMX_RESERVE reserved_1,	uint32_t, 1
	NASMX_RESERVE reserved_2,	uint32_t, 1
	NASMX_RESERVE base_class_init_func,	int8_t, 4 ; GtkClassInitFunc_size
NASMX_ENDSTRUC

NASMX_STRUC GtkObject
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE flags,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkObjectClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE set_arg,		uint32_t, 1
	NASMX_RESERVE get_arg,		uint32_t, 1
	NASMX_RESERVE destroy,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAdjustment
	NASMX_RESERVE parent_instance,	int8_t, GtkObject_size
	NASMX_RESERVE lower,		uint32_t, 1
	NASMX_RESERVE upper,		uint32_t, 1
	NASMX_RESERVE value,		uint32_t, 1
	NASMX_RESERVE step_increment,	uint32_t, 1
	NASMX_RESERVE page_increment,	uint32_t, 1
	NASMX_RESERVE page_size,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAdjustmentClass
	NASMX_RESERVE parent_class,	int8_t, GtkObjectClass_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE value_changed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkStyle
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE black,		int8_t, GdkColor_size
	NASMX_RESERVE white,		int8_t, GdkColor_size
	NASMX_RESERVE font_desc,	uint32_t, 1
	NASMX_RESERVE xthickness,	uint32_t, 1
	NASMX_RESERVE ythickness,	uint32_t, 1
	NASMX_RESERVE fg_gc,		uint32_t, 1
	NASMX_RESERVE bg_gc,		uint32_t, 1
	NASMX_RESERVE light_gc,		uint32_t, 1
	NASMX_RESERVE dark_gc,		uint32_t, 1
	NASMX_RESERVE mid_gc,		uint32_t, 1
	NASMX_RESERVE text_gc,		uint32_t, 1
	NASMX_RESERVE base_gc,		uint32_t, 1
	NASMX_RESERVE text_aa_gc,	uint32_t, 1
	NASMX_RESERVE black_gc,		uint32_t, 1
	NASMX_RESERVE white_gc,		uint32_t, 1
	NASMX_RESERVE bg_pixmap,	uint32_t, 1
	NASMX_RESERVE attach_count,	uint32_t, 1
	NASMX_RESERVE depth,		uint32_t, 1
	NASMX_RESERVE colormap,		uint32_t, 1
	NASMX_RESERVE private_font,	uint32_t, 1
	NASMX_RESERVE private_font_desc,	uint32_t, 1
	NASMX_RESERVE rc_style,		uint32_t, 1
	NASMX_RESERVE styles,		uint32_t, 1
	NASMX_RESERVE property_cache,	uint32_t, 1
	NASMX_RESERVE icon_factories,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkStyleClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE realize,		uint32_t, 1
	NASMX_RESERVE unrealize,	uint32_t, 1
	NASMX_RESERVE copy,		uint32_t, 1
	NASMX_RESERVE clone,		uint32_t, 1
	NASMX_RESERVE init_from_rc,	uint32_t, 1
	NASMX_RESERVE set_background,	uint32_t, 1
	NASMX_RESERVE render_icon,	uint32_t, 1
	NASMX_RESERVE draw_hline,	uint32_t, 1
	NASMX_RESERVE draw_vline,	uint32_t, 1
	NASMX_RESERVE draw_shadow,	uint32_t, 1
	NASMX_RESERVE draw_polygon,	uint32_t, 1
	NASMX_RESERVE draw_arrow,	uint32_t, 1
	NASMX_RESERVE draw_diamond,	uint32_t, 1
	NASMX_RESERVE draw_string,	uint32_t, 1
	NASMX_RESERVE draw_box,		uint32_t, 1
	NASMX_RESERVE draw_flat_box,	uint32_t, 1
	NASMX_RESERVE draw_check,	uint32_t, 1
	NASMX_RESERVE draw_option,	uint32_t, 1
	NASMX_RESERVE draw_tab,		uint32_t, 1
	NASMX_RESERVE draw_shadow_gap,	uint32_t, 1
	NASMX_RESERVE draw_box_gap,	uint32_t, 1
	NASMX_RESERVE draw_extension,	uint32_t, 1
	NASMX_RESERVE draw_focus,	uint32_t, 1
	NASMX_RESERVE draw_slider,	uint32_t, 1
	NASMX_RESERVE draw_handle,	uint32_t, 1
	NASMX_RESERVE draw_expander,	uint32_t, 1
	NASMX_RESERVE draw_layout,	uint32_t, 1
	NASMX_RESERVE draw_resize_grip,	uint32_t, 1
	NASMX_RESERVE draw_spinner,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved6,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved7,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved8,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved9,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved10,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved11,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBorder
	NASMX_RESERVE left,		uint32_t, 1
	NASMX_RESERVE right,		uint32_t, 1
	NASMX_RESERVE top,		uint32_t, 1
	NASMX_RESERVE bottom,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRcStyle
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE bg_pixmap_name,	uint32_t, 1
	NASMX_RESERVE font_desc,	uint32_t, 1
	NASMX_RESERVE xthickness,	uint32_t, 1
	NASMX_RESERVE ythickness,	uint32_t, 1
	NASMX_RESERVE rc_properties,	uint32_t, 1
	NASMX_RESERVE rc_style_lists,	uint32_t, 1
	NASMX_RESERVE icon_factories,	uint32_t, 1
	NASMX_RESERVE engine_specified,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRcStyleClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE create_rc_style,	uint32_t, 1
	NASMX_RESERVE parse,		uint32_t, 1
	NASMX_RESERVE merge,		uint32_t, 1
	NASMX_RESERVE create_style,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRcProperty
	NASMX_RESERVE type_name,	uint32_t, 1
	NASMX_RESERVE property_name,	uint32_t, 1
	NASMX_RESERVE origin,		uint32_t, 1
	NASMX_RESERVE value,		int8_t, GValue_size
NASMX_ENDSTRUC

NASMX_STRUC GtkSettings
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE queued_settings,	uint32_t, 1
	NASMX_RESERVE property_values,	uint32_t, 1
	NASMX_RESERVE rc_context,	uint32_t, 1
	NASMX_RESERVE screen,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSettingsClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkSettingsValue
	NASMX_RESERVE origin,		uint32_t, 1
	NASMX_RESERVE value,		int8_t, GValue_size
NASMX_ENDSTRUC

NASMX_STRUC AtkPropertyValues
	NASMX_RESERVE property_name,	uint32_t, 1
	NASMX_RESERVE old_value,	int8_t, GValue_size
	NASMX_RESERVE new_value,	int8_t, GValue_size
NASMX_ENDSTRUC

NASMX_STRUC AtkObject
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE description,	uint32_t, 1
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE accessible_parent,	uint32_t, 1
	NASMX_RESERVE role,		uint32_t, 1
	NASMX_RESERVE relation_set,	uint32_t, 1
	NASMX_RESERVE layer,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkObjectClass
	NASMX_RESERVE parent,		int8_t, GObjectClass_size
	NASMX_RESERVE get_name,		uint32_t, 1
	NASMX_RESERVE get_description,	uint32_t, 1
	NASMX_RESERVE get_parent,	uint32_t, 1
	NASMX_RESERVE get_n_children,	uint32_t, 1
	NASMX_RESERVE ref_child,	uint32_t, 1
	NASMX_RESERVE get_index_in_parent,	uint32_t, 1
	NASMX_RESERVE ref_relation_set,	uint32_t, 1
	NASMX_RESERVE get_role,		uint32_t, 1
	NASMX_RESERVE get_layer,	uint32_t, 1
	NASMX_RESERVE get_mdi_zorder,	uint32_t, 1
	NASMX_RESERVE ref_state_set,	uint32_t, 1
	NASMX_RESERVE set_name,		uint32_t, 1
	NASMX_RESERVE set_description,	uint32_t, 1
	NASMX_RESERVE set_parent,	uint32_t, 1
	NASMX_RESERVE set_role,		uint32_t, 1
	NASMX_RESERVE connect_property_change_handler,	uint32_t, 1
	NASMX_RESERVE remove_property_change_handler,	uint32_t, 1
	NASMX_RESERVE initialize,	uint32_t, 1
	NASMX_RESERVE children_changed,	uint32_t, 1
	NASMX_RESERVE focus_event,	uint32_t, 1
	NASMX_RESERVE property_change,	uint32_t, 1
	NASMX_RESERVE state_change,	uint32_t, 1
	NASMX_RESERVE visible_data_changed,	uint32_t, 1
	NASMX_RESERVE active_descendant_changed,	uint32_t, 1
	NASMX_RESERVE get_attributes,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkImplementorIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE ref_accessible,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkActionIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE do_action,	uint32_t, 1
	NASMX_RESERVE get_n_actions,	uint32_t, 1
	NASMX_RESERVE get_description,	uint32_t, 1
	NASMX_RESERVE get_name,		uint32_t, 1
	NASMX_RESERVE get_keybinding,	uint32_t, 1
	NASMX_RESERVE set_description,	uint32_t, 1
	NASMX_RESERVE get_localized_name,	uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkUtil
	NASMX_RESERVE parent,		int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC AtkUtilClass
	NASMX_RESERVE parent,		int8_t, GObjectClass_size
	NASMX_RESERVE add_global_event_listener,	uint32_t, 1
	NASMX_RESERVE remove_global_event_listener,	uint32_t, 1
	NASMX_RESERVE add_key_event_listener,	uint32_t, 1
	NASMX_RESERVE remove_key_event_listener,	uint32_t, 1
	NASMX_RESERVE get_root,		uint32_t, 1
	NASMX_RESERVE get_toolkit_name,	uint32_t, 1
	NASMX_RESERVE get_toolkit_version,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkRectangle
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkComponentIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE add_focus_handler,	uint32_t, 1
	NASMX_RESERVE contains,		uint32_t, 1
	NASMX_RESERVE ref_accessible_at_point,	uint32_t, 1
	NASMX_RESERVE get_extents,	uint32_t, 1
	NASMX_RESERVE get_position,	uint32_t, 1
	NASMX_RESERVE get_size,		uint32_t, 1
	NASMX_RESERVE grab_focus,	uint32_t, 1
	NASMX_RESERVE remove_focus_handler,	uint32_t, 1
	NASMX_RESERVE set_extents,	uint32_t, 1
	NASMX_RESERVE set_position,	uint32_t, 1
	NASMX_RESERVE set_size,		uint32_t, 1
	NASMX_RESERVE get_layer,	uint32_t, 1
	NASMX_RESERVE get_mdi_zorder,	uint32_t, 1
	NASMX_RESERVE bounds_changed,	uint32_t, 1
	NASMX_RESERVE get_alpha,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkDocumentIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE get_document_type,	uint32_t, 1
	NASMX_RESERVE get_document,	uint32_t, 1
	NASMX_RESERVE get_document_locale,	uint32_t, 1
	NASMX_RESERVE get_document_attributes,	uint32_t, 1
	NASMX_RESERVE get_document_attribute_value,	uint32_t, 1
	NASMX_RESERVE set_document_attribute,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
	NASMX_RESERVE pad3,		uint32_t, 1
	NASMX_RESERVE pad4,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkTextIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE get_text,		uint32_t, 1
	NASMX_RESERVE get_text_after_offset,	uint32_t, 1
	NASMX_RESERVE get_text_at_offset,	uint32_t, 1
	NASMX_RESERVE get_character_at_offset,	uint32_t, 1
	NASMX_RESERVE get_text_before_offset,	uint32_t, 1
	NASMX_RESERVE get_caret_offset,	uint32_t, 1
	NASMX_RESERVE get_run_attributes,	uint32_t, 1
	NASMX_RESERVE get_default_attributes,	uint32_t, 1
	NASMX_RESERVE get_character_extents,	uint32_t, 1
	NASMX_RESERVE get_character_count,	uint32_t, 1
	NASMX_RESERVE get_offset_at_point,	uint32_t, 1
	NASMX_RESERVE get_n_selections,	uint32_t, 1
	NASMX_RESERVE get_selection,	uint32_t, 1
	NASMX_RESERVE add_selection,	uint32_t, 1
	NASMX_RESERVE remove_selection,	uint32_t, 1
	NASMX_RESERVE set_selection,	uint32_t, 1
	NASMX_RESERVE set_caret_offset,	uint32_t, 1
	NASMX_RESERVE text_changed,	uint32_t, 1
	NASMX_RESERVE text_caret_moved,	uint32_t, 1
	NASMX_RESERVE text_selection_changed,	uint32_t, 1
	NASMX_RESERVE text_attributes_changed,	uint32_t, 1
	NASMX_RESERVE get_range_extents,	uint32_t, 1
	NASMX_RESERVE get_bounded_ranges,	uint32_t, 1
	NASMX_RESERVE pad4,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkEditableTextIface
	NASMX_RESERVE parent_interface,	int8_t, GTypeInterface_size
	NASMX_RESERVE set_run_attributes,	uint32_t, 1
	NASMX_RESERVE set_text_contents,	uint32_t, 1
	NASMX_RESERVE insert_text,	uint32_t, 1
	NASMX_RESERVE copy_text,	uint32_t, 1
	NASMX_RESERVE cut_text,		uint32_t, 1
	NASMX_RESERVE delete_text,	uint32_t, 1
	NASMX_RESERVE paste_text,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkGObjectAccessible
	NASMX_RESERVE parent,		int8_t, AtkObject_size
NASMX_ENDSTRUC

NASMX_STRUC AtkGObjectAccessibleClass
	NASMX_RESERVE parent_class,	int8_t, AtkObjectClass_size
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkHyperlink
	NASMX_RESERVE parent,		int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC AtkHyperlinkClass
	NASMX_RESERVE parent,		int8_t, GObjectClass_size
	NASMX_RESERVE get_uri,		uint32_t, 1
	NASMX_RESERVE get_object,	uint32_t, 1
	NASMX_RESERVE get_end_index,	uint32_t, 1
	NASMX_RESERVE get_start_index,	uint32_t, 1
	NASMX_RESERVE is_valid,		uint32_t, 1
	NASMX_RESERVE get_n_anchors,	uint32_t, 1
	NASMX_RESERVE link_state,	uint32_t, 1
	NASMX_RESERVE is_selected_link,	uint32_t, 1
	NASMX_RESERVE link_activated,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkHyperlinkImplIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE get_hyperlink,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkHypertextIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE get_link,		uint32_t, 1
	NASMX_RESERVE get_n_links,	uint32_t, 1
	NASMX_RESERVE get_link_index,	uint32_t, 1
	NASMX_RESERVE link_selected,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
	NASMX_RESERVE pad3,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkImageIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE get_image_position,	uint32_t, 1
	NASMX_RESERVE get_image_description,	uint32_t, 1
	NASMX_RESERVE get_image_size,	uint32_t, 1
	NASMX_RESERVE set_image_description,	uint32_t, 1
	NASMX_RESERVE get_image_locale,		uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkNoOpObject
	NASMX_RESERVE parent,		int8_t, AtkObject_size
NASMX_ENDSTRUC

NASMX_STRUC AtkNoOpObjectClass
	NASMX_RESERVE parent_class,	int8_t, AtkObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC AtkObjectFactory
	NASMX_RESERVE parent,		int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC AtkObjectFactoryClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE create_accessible,	uint32_t, 1
	NASMX_RESERVE invalidate,	uint32_t, 1
	NASMX_RESERVE get_accessible_type,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkNoOpObjectFactory
	NASMX_RESERVE parent,		int8_t, AtkObjectFactory_size
NASMX_ENDSTRUC

NASMX_STRUC AtkNoOpObjectFactoryClass
	NASMX_RESERVE parent_class,	int8_t, AtkObjectFactoryClass_size
NASMX_ENDSTRUC

NASMX_STRUC AtkPlug
	NASMX_RESERVE parent,		int8_t, AtkObject_size
NASMX_ENDSTRUC

NASMX_STRUC AtkPlugClass
	NASMX_RESERVE parent_class,	int8_t, AtkObjectClass_size
	NASMX_RESERVE get_object_id,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkRegistry
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE factory_type_registry,	uint32_t, 1
	NASMX_RESERVE factory_singleton_cache,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkRegistryClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC AtkRelation
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE target,		uint32_t, 1
	NASMX_RESERVE relationship,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkRelationClass
	NASMX_RESERVE parent,		int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC AtkRelationSet
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE relations,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkRelationSetClass
	NASMX_RESERVE parent,		int8_t, GObjectClass_size
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkSelectionIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE add_selection,	uint32_t, 1
	NASMX_RESERVE clear_selection,	uint32_t, 1
	NASMX_RESERVE ref_selection,	uint32_t, 1
	NASMX_RESERVE get_selection_count,	uint32_t, 1
	NASMX_RESERVE is_child_selected,	uint32_t, 1
	NASMX_RESERVE remove_selection,		uint32_t, 1
	NASMX_RESERVE select_all_selection,	uint32_t, 1
	NASMX_RESERVE selection_changed,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkSocket
	NASMX_RESERVE parent,		int8_t, AtkObject_size
	NASMX_RESERVE embedded_plug_id,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkSocketClass
	NASMX_RESERVE parent_class,	int8_t, AtkObjectClass_size
	NASMX_RESERVE embed,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkStateSet
	NASMX_RESERVE parent,		int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC AtkStateSetClass
	NASMX_RESERVE parent,		int8_t, GObjectClass_size
NASMX_ENDSTRUC

NASMX_STRUC AtkStreamableContentIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE get_n_mime_types,	uint32_t, 1
	NASMX_RESERVE get_mime_type,	uint32_t, 1
	NASMX_RESERVE get_stream,	uint32_t, 1
	NASMX_RESERVE get_uri,		uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
	NASMX_RESERVE pad3,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkTableIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE ref_at,		uint32_t, 1
	NASMX_RESERVE get_index_at,	uint32_t, 1
	NASMX_RESERVE get_column_at_index,	uint32_t, 1
	NASMX_RESERVE get_row_at_index,	uint32_t, 1
	NASMX_RESERVE get_n_columns,	uint32_t, 1
	NASMX_RESERVE get_n_rows,	uint32_t, 1
	NASMX_RESERVE get_column_extent_at,	uint32_t, 1
	NASMX_RESERVE get_row_extent_at,	uint32_t, 1
	NASMX_RESERVE get_caption,		uint32_t, 1
	NASMX_RESERVE get_column_description,	uint32_t, 1
	NASMX_RESERVE get_column_header,	uint32_t, 1
	NASMX_RESERVE get_row_description,	uint32_t, 1
	NASMX_RESERVE get_row_header,	uint32_t, 1
	NASMX_RESERVE get_summary,	uint32_t, 1
	NASMX_RESERVE set_caption,	uint32_t, 1
	NASMX_RESERVE set_column_description,	uint32_t, 1
	NASMX_RESERVE set_column_header,	uint32_t, 1
	NASMX_RESERVE set_row_description,	uint32_t, 1
	NASMX_RESERVE set_row_header,	uint32_t, 1
	NASMX_RESERVE set_summary,	uint32_t, 1
	NASMX_RESERVE get_selected_columns,	uint32_t, 1
	NASMX_RESERVE get_selected_rows,	uint32_t, 1
	NASMX_RESERVE is_column_selected,	uint32_t, 1
	NASMX_RESERVE is_row_selected,	uint32_t, 1
	NASMX_RESERVE is_selected,	uint32_t, 1
	NASMX_RESERVE add_row_selection,	uint32_t, 1
	NASMX_RESERVE remove_row_selection,	uint32_t, 1
	NASMX_RESERVE add_column_selection,	uint32_t, 1
	NASMX_RESERVE remove_column_selection,	uint32_t, 1
	NASMX_RESERVE row_inserted,	uint32_t, 1
	NASMX_RESERVE column_inserted,	uint32_t, 1
	NASMX_RESERVE row_deleted,	uint32_t, 1
	NASMX_RESERVE column_deleted,	uint32_t, 1
	NASMX_RESERVE row_reordered,	uint32_t, 1
	NASMX_RESERVE column_reordered,		uint32_t, 1
	NASMX_RESERVE model_changed,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
	NASMX_RESERVE pad2,		uint32_t, 1
	NASMX_RESERVE pad3,		uint32_t, 1
	NASMX_RESERVE pad4,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkMisc
	NASMX_RESERVE parent,		int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC AtkMiscClass
	NASMX_RESERVE parent,		int8_t, GObjectClass_size
	NASMX_RESERVE threads_enter,	uint32_t, 1
	NASMX_RESERVE threads_leave,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC AtkValueIface
	NASMX_RESERVE parent,		int8_t, GTypeInterface_size
	NASMX_RESERVE get_current_value,	uint32_t, 1
	NASMX_RESERVE get_maximum_value,	uint32_t, 1
	NASMX_RESERVE get_minimum_value,	uint32_t, 1
	NASMX_RESERVE set_current_value,	uint32_t, 1
	NASMX_RESERVE get_minimum_increment,	uint32_t, 1
	NASMX_RESERVE pad1,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRequisition
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkWidget
	NASMX_RESERVE object,		int8_t, GtkObject_size
	NASMX_RESERVE private_flags,	uint16_t, 1
	NASMX_RESERVE state,		int8_t, 1
	NASMX_RESERVE saved_state,	int8_t, 1
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE style,		uint32_t, 1
	NASMX_RESERVE requisition,	int8_t, GtkRequisition_size
	NASMX_RESERVE allocation,	int8_t, GdkRectangle_size
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE parent,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkWidgetClass
	NASMX_RESERVE parent_class,	int8_t, GtkObjectClass_size
	NASMX_RESERVE activate_signal,	uint32_t, 1
	NASMX_RESERVE set_scroll_adjustments_signal,		uint32_t, 1
	NASMX_RESERVE dispatch_child_properties_changed,	uint32_t, 1
	NASMX_RESERVE show,		uint32_t, 1
	NASMX_RESERVE show_all,		uint32_t, 1
	NASMX_RESERVE hide,		uint32_t, 1
	NASMX_RESERVE hide_all,		uint32_t, 1
	NASMX_RESERVE map,		uint32_t, 1
	NASMX_RESERVE unmap,		uint32_t, 1
	NASMX_RESERVE realize,		uint32_t, 1
	NASMX_RESERVE unrealize,	uint32_t, 1
	NASMX_RESERVE size_request,	uint32_t, 1
	NASMX_RESERVE size_allocate,	uint32_t, 1
	NASMX_RESERVE state_changed,	uint32_t, 1
	NASMX_RESERVE parent_set,	uint32_t, 1
	NASMX_RESERVE hierarchy_changed,	uint32_t, 1
	NASMX_RESERVE style_set,	uint32_t, 1
	NASMX_RESERVE direction_changed,	uint32_t, 1
	NASMX_RESERVE grab_notify,	uint32_t, 1
	NASMX_RESERVE child_notify,	uint32_t, 1
	NASMX_RESERVE mnemonic_activate,	uint32_t, 1
	NASMX_RESERVE grab_focus,	uint32_t, 1
	NASMX_RESERVE focus,			uint32_t, 1
	NASMX_RESERVE event,	 		uint32_t, 1
	NASMX_RESERVE button_press_event,	uint32_t, 1
	NASMX_RESERVE button_release_event,	uint32_t, 1
	NASMX_RESERVE scroll_event,	uint32_t, 1
	NASMX_RESERVE motion_notify_event,	uint32_t, 1
	NASMX_RESERVE delete_event,	uint32_t, 1
	NASMX_RESERVE destroy_event,	uint32_t, 1
	NASMX_RESERVE expose_event,	uint32_t, 1
	NASMX_RESERVE key_press_event,	uint32_t, 1
	NASMX_RESERVE key_release_event,	uint32_t, 1
	NASMX_RESERVE enter_notify_event,	uint32_t, 1
	NASMX_RESERVE leave_notify_event,	uint32_t, 1
	NASMX_RESERVE configure_event,	uint32_t, 1
	NASMX_RESERVE focus_in_event,	uint32_t, 1
	NASMX_RESERVE focus_out_event,	uint32_t, 1
	NASMX_RESERVE map_event,	uint32_t, 1
	NASMX_RESERVE unmap_event,	uint32_t, 1
	NASMX_RESERVE property_notify_event,	uint32_t, 1
	NASMX_RESERVE selection_clear_event,	uint32_t, 1
	NASMX_RESERVE selection_request_event,	uint32_t, 1
	NASMX_RESERVE selection_notify_event,	uint32_t, 1
	NASMX_RESERVE proximity_in_event,	uint32_t, 1
	NASMX_RESERVE proximity_out_event,	uint32_t, 1
	NASMX_RESERVE visibility_notify_event,	uint32_t, 1
	NASMX_RESERVE client_event,	uint32_t, 1
	NASMX_RESERVE no_expose_event,	uint32_t, 1
	NASMX_RESERVE window_state_event,	uint32_t, 1
	NASMX_RESERVE selection_get,	uint32_t, 1
	NASMX_RESERVE selection_received,	uint32_t, 1
	NASMX_RESERVE drag_begin,	uint32_t, 1
	NASMX_RESERVE drag_end,	uint32_t, 1
	NASMX_RESERVE drag_data_get,	uint32_t, 1
	NASMX_RESERVE drag_data_delete,		uint32_t, 1
	NASMX_RESERVE drag_leave,	uint32_t, 1
	NASMX_RESERVE drag_motion,	uint32_t, 1
	NASMX_RESERVE drag_drop,	uint32_t, 1
	NASMX_RESERVE drag_data_received,	uint32_t, 1
	NASMX_RESERVE popup_menu,	uint32_t, 1
	NASMX_RESERVE show_help,	uint32_t, 1
	NASMX_RESERVE get_accessible,	uint32_t, 1
	NASMX_RESERVE screen_changed,	uint32_t, 1
	NASMX_RESERVE can_activate_accel,	uint32_t, 1
	NASMX_RESERVE grab_broken_event,	uint32_t, 1
	NASMX_RESERVE composited_changed,	uint32_t, 1
	NASMX_RESERVE query_tooltip,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved6,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved7,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkWidgetAuxInfo
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE x_set,		uint32_t, 1
;.y_set:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkWidgetShapeInfo
	NASMX_RESERVE offset_x,		uint16_t, 1
	NASMX_RESERVE offset_y,		uint16_t, 1
	NASMX_RESERVE shape_mask,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkContainer
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE focus_child,	uint32_t, 1
	NASMX_RESERVE border_width,	uint32_t, 1
;.need_resize:		RESD 1
;.resize_mode:		RESD 1
;.reallocate_redraws:	RESD 1
;.has_focus_chain:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkContainerClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE add,		uint32_t, 1
	NASMX_RESERVE remove,		uint32_t, 1
	NASMX_RESERVE check_resize,	uint32_t, 1
	NASMX_RESERVE forall,		uint32_t, 1
	NASMX_RESERVE set_focus_child,	uint32_t, 1
	NASMX_RESERVE child_type,	uint32_t, 1
	NASMX_RESERVE composite_name,	uint32_t, 1
	NASMX_RESERVE set_child_property,	uint32_t, 1
	NASMX_RESERVE get_child_property,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBin
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE child,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBinClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkWindow
	NASMX_RESERVE bin,		int8_t, GtkBin_size
	NASMX_RESERVE title,		uint32_t, 1
	NASMX_RESERVE wmclass_name,	uint32_t, 1
	NASMX_RESERVE wmclass_class,	uint32_t, 1
	NASMX_RESERVE wm_role,		uint32_t, 1
	NASMX_RESERVE focus_widget,	uint32_t, 1
	NASMX_RESERVE default_widget,	uint32_t, 1
	NASMX_RESERVE transient_parent,	uint32_t, 1
	NASMX_RESERVE geometry_info,	uint32_t, 1
	NASMX_RESERVE frame,		uint32_t, 1
	NASMX_RESERVE group,		uint32_t, 1
	NASMX_RESERVE configure_request_count,	uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
	NASMX_RESERVE allow_shrink,	uint32_t, 1
;.allow_grow:		RESD 1
;.configure_notify_received:	RESD 1
;.need_default_position:	RESD 1
;.need_default_size:	RESD 1
;.position:		RESD 1
;.type:		RESD 1
;.has_user_ref_count:	RESD 1
;.has_focus:		RESD 1
;.modal:		RESD 1
;.destroy_with_parent:	RESD 1
;.has_frame:		RESD 1
;.iconify_initially:	RESD 1
;.stick_initially:	RESD 1
;.maximize_initially:	RESD 1
;.decorated:		RESD 1
;.type_hint:		RESD 1
;.gravity:		RESD 1
;.is_active:		RESD 1
;.has_toplevel_focus:	RESD 1
	NASMX_RESERVE frame_left,	uint32_t, 1
	NASMX_RESERVE frame_top,	uint32_t, 1
	NASMX_RESERVE frame_right,	uint32_t, 1
	NASMX_RESERVE frame_bottom,	uint32_t, 1
	NASMX_RESERVE keys_changed_handler,	uint32_t, 1
	NASMX_RESERVE mnemonic_modifier,	uint32_t, 1
	NASMX_RESERVE screen,		uint32_t, 1

NASMX_ENDSTRUC

NASMX_STRUC GtkWindowClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE set_focus,	uint32_t, 1
	NASMX_RESERVE frame_event,	uint32_t, 1
	NASMX_RESERVE activate_focus,	uint32_t, 1
	NASMX_RESERVE activate_default,		uint32_t, 1
	NASMX_RESERVE move_focus,	uint32_t, 1
	NASMX_RESERVE keys_changed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkWindowGroup
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE grabs,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkWindowGroupClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkDialog
	NASMX_RESERVE window,		int8_t, GtkWindow_size
	NASMX_RESERVE vbox,		uint32_t, 1
	NASMX_RESERVE action_area,	uint32_t, 1
	NASMX_RESERVE separator,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkDialogClass
	NASMX_RESERVE parent_class,	int8_t, GtkWindowClass_size
	NASMX_RESERVE response,		uint32_t, 1
	NASMX_RESERVE close,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAboutDialog
	NASMX_RESERVE parent_instance,	int8_t, GtkDialog_size
	NASMX_RESERVE private_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAboutDialogClass
	NASMX_RESERVE parent_class,	int8_t, GtkDialogClass_size
	NASMX_RESERVE activate_link,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMisc
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE xalign,		uint32_t, 1
	NASMX_RESERVE yalign,		uint32_t, 1
	NASMX_RESERVE xpad,		uint16_t, 1
	NASMX_RESERVE ypad,		uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMiscClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkMenuShell
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE active_menu_item,	uint32_t, 1
	NASMX_RESERVE parent_menu_shell,	uint32_t, 1
	NASMX_RESERVE button,		uint32_t, 1
	NASMX_RESERVE activate_time,	uint32_t, 1
	NASMX_RESERVE active,		uint32_t, 1
;.have_grab:		RESD 1
;.have_xgrab:		RESD 1
;.ignore_leave:		RESD 1
;.menu_flag:		RESD 1
;.ignore_enter:		RESD 1
;.keyboard_mode:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMenuShellClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE submenu_placement,	uint32_t, 1
	NASMX_RESERVE deactivate,	uint32_t, 1
	NASMX_RESERVE selection_done,	uint32_t, 1
	NASMX_RESERVE move_current,	uint32_t, 1
	NASMX_RESERVE activate_current,	uint32_t, 1
	NASMX_RESERVE cancel,		uint32_t, 1
	NASMX_RESERVE select_item,	uint32_t, 1
	NASMX_RESERVE insert,		uint32_t, 1
	NASMX_RESERVE get_popup_delay,	uint32_t, 1
	NASMX_RESERVE move_selected,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMenu
	NASMX_RESERVE menu_shell,	int8_t, GtkMenuShell_size
	NASMX_RESERVE parent_menu_item,	uint32_t, 1
	NASMX_RESERVE old_active_menu_item,	uint32_t, 1
	NASMX_RESERVE accel_group,	uint32_t, 1
	NASMX_RESERVE accel_path,	uint32_t, 1
	NASMX_RESERVE position_func,	uint32_t, 1
	NASMX_RESERVE position_func_data,	uint32_t, 1
	NASMX_RESERVE toggle_size,	uint32_t, 1
	NASMX_RESERVE toplevel,		uint32_t, 1
	NASMX_RESERVE tearoff_window,	uint32_t, 1
	NASMX_RESERVE tearoff_hbox,	uint32_t, 1
	NASMX_RESERVE tearoff_scrollbar,	uint32_t, 1
	NASMX_RESERVE tearoff_adjustment,	uint32_t, 1
	NASMX_RESERVE view_window,	uint32_t, 1
	NASMX_RESERVE bin_window,	uint32_t, 1
	NASMX_RESERVE scroll_offset,	uint32_t, 1
	NASMX_RESERVE saved_scroll_offset,	uint32_t, 1
	NASMX_RESERVE scroll_step,	uint32_t, 1
	NASMX_RESERVE timeout_id,	uint32_t, 1
	NASMX_RESERVE navigation_region,	uint32_t, 1
	NASMX_RESERVE navigation_timeout,	uint32_t, 1
	NASMX_RESERVE needs_destruction_ref_count,	uint32_t, 1
;.torn_off:		RESD 1
;.tearoff_active:	RESD 1
;.scroll_fast:		RESD 1
;.upper_arrow_visible:	RESD 1
;.lower_arrow_visible:	RESD 1
;.upper_arrow_prelight:	RESD 1
;.lower_arrow_prelight:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMenuClass
	NASMX_RESERVE parent_class,	int8_t, GtkMenuShellClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkLabel
	NASMX_RESERVE misc,		int8_t, GtkMisc_size
	NASMX_RESERVE label,		uint32_t, 1
	NASMX_RESERVE jtype,		uint32_t, 1
;.wrap:		RESD 1
;.use_underline:	RESD 1
;.use_markup:		RESD 1
;.ellipsize:		RESD 1
;.single_line_mode:	RESD 1
;.have_transform:	RESD 1
;.in_click:		RESD 1
;.wrap_mode:		RESD 1
;.pattern_set:		RESD 1
;.track_links:		RESD 1
	NASMX_RESERVE mnemonic_keyval,	uint32_t, 1
	NASMX_RESERVE text,		uint32_t, 1
	NASMX_RESERVE attrs,		uint32_t, 1
	NASMX_RESERVE effective_attrs,	uint32_t, 1
	NASMX_RESERVE layout,		uint32_t, 1
	NASMX_RESERVE mnemonic_widget,	uint32_t, 1
	NASMX_RESERVE mnemonic_window,	uint32_t, 1
	NASMX_RESERVE select_info,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkLabelClass
	NASMX_RESERVE parent_class,	int8_t, GtkMiscClass_size
	NASMX_RESERVE move_cursor,	uint32_t, 1
	NASMX_RESERVE copy_clipboard,	uint32_t, 1
	NASMX_RESERVE populate_popup,	uint32_t, 1
	NASMX_RESERVE activate_link,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAccelLabel
	NASMX_RESERVE label,		int8_t, GtkLabel_size
	NASMX_RESERVE gtk_reserved,	uint32_t, 1
	NASMX_RESERVE accel_padding,	uint32_t, 1
	NASMX_RESERVE accel_widget,	uint32_t, 1
	NASMX_RESERVE accel_closure,	uint32_t, 1
	NASMX_RESERVE accel_group,	uint32_t, 1
	NASMX_RESERVE accel_string,	uint32_t, 1
	NASMX_RESERVE accel_string_width,	uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
NASMX_ENDSTRUC

NASMX_STRUC GtkAccelLabelClass
	NASMX_RESERVE parent_class,	int8_t, GtkLabelClass_size
	NASMX_RESERVE signal_quote1,	uint32_t, 1
	NASMX_RESERVE signal_quote2,	uint32_t, 1
	NASMX_RESERVE mod_name_shift,	uint32_t, 1
	NASMX_RESERVE mod_name_control,	uint32_t, 1
	NASMX_RESERVE mod_name_alt,	uint32_t, 1
	NASMX_RESERVE mod_separator,	uint32_t, 1
	NASMX_RESERVE accel_seperator,	uint32_t, 1
	NASMX_RESERVE latin1_to_char,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAccessible
	NASMX_RESERVE parent,		int8_t, AtkObject_size
	NASMX_RESERVE widget,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAccessibleClass
	NASMX_RESERVE parent_class,	int8_t, AtkObjectClass_size
	NASMX_RESERVE connect_widget_destroyed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAction
	NASMX_RESERVE object,		int8_t, GObject_size
	NASMX_RESERVE private_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkActionClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE activate,		uint32_t, 1
	NASMX_RESERVE menu_item_type,	uint32_t, 1
	NASMX_RESERVE toolbar_item_type,	uint32_t, 1
	NASMX_RESERVE create_menu_item,		uint32_t, 1
	NASMX_RESERVE create_tool_item,		uint32_t, 1
	NASMX_RESERVE connect_proxy,	uint32_t, 1
	NASMX_RESERVE disconnect_proxy,		uint32_t, 1
	NASMX_RESERVE create_menu,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkActionGroup
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE private_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkActionGroupClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE get_action,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkActionEntry
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE stock_id,		uint32_t, 1
	NASMX_RESERVE label,		uint32_t, 1
	NASMX_RESERVE accelerator,	uint32_t, 1
	NASMX_RESERVE tooltip,		uint32_t, 1
	NASMX_RESERVE callback,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToggleActionEntry
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE stock_id,		uint32_t, 1
	NASMX_RESERVE label,		uint32_t, 1
	NASMX_RESERVE accelerator,	uint32_t, 1
	NASMX_RESERVE tooltip,		uint32_t, 1
	NASMX_RESERVE callback,		uint32_t, 1
	NASMX_RESERVE is_active,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRadioActionEntry
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE stock_id,		uint32_t, 1
	NASMX_RESERVE label,		uint32_t, 1
	NASMX_RESERVE accelerator,	uint32_t, 1
	NASMX_RESERVE tooltip,		uint32_t, 1
	NASMX_RESERVE value,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkActivatableIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE update,		uint32_t, 1
	NASMX_RESERVE sync_action_properties,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAlignment
	NASMX_RESERVE bin,		int8_t, GtkBin_size
	NASMX_RESERVE xalign,		uint32_t, 1
	NASMX_RESERVE yalign,		uint32_t, 1
	NASMX_RESERVE xscale,		uint32_t, 1
	NASMX_RESERVE yscale,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAlignmentClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkArrow
	NASMX_RESERVE misc,		int8_t, GtkMisc_size
	NASMX_RESERVE arrow_type,	uint16_t, 1
	NASMX_RESERVE shadow_type,	uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkArrowClass
	NASMX_RESERVE parent_class,	int8_t, GtkMiscClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkFrame
	NASMX_RESERVE bin,		int8_t, GtkBin_size
	NASMX_RESERVE label_widget,	uint32_t, 1
	NASMX_RESERVE shadow_type,	uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
	NASMX_RESERVE label_xalign,	uint32_t, 1
	NASMX_RESERVE label_yalign,	uint32_t, 1
	NASMX_RESERVE child_allocation,	int8_t, GdkRectangle_size
NASMX_ENDSTRUC

NASMX_STRUC GtkFrameClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE compute_child_allocation,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAspectFrame
	NASMX_RESERVE frame,		int8_t, GtkFrame_size
	NASMX_RESERVE xalign,		uint32_t, 1
	NASMX_RESERVE yalign,		uint32_t, 1
	NASMX_RESERVE ratio,		uint32_t, 1
	NASMX_RESERVE obey_child,	uint32_t, 1
	NASMX_RESERVE center_allocation,	int8_t, GdkRectangle_size
NASMX_ENDSTRUC

NASMX_STRUC GtkAspectFrameClass
	NASMX_RESERVE parent_class,	int8_t, GtkFrameClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkAssistant
	NASMX_RESERVE parent,		int8_t, GtkWindow_size
	NASMX_RESERVE cancel,		uint32_t, 1
	NASMX_RESERVE forward,		uint32_t, 1
	NASMX_RESERVE back,		uint32_t, 1
	NASMX_RESERVE apply,		uint32_t, 1
	NASMX_RESERVE close,		uint32_t, 1
	NASMX_RESERVE last,		uint32_t, 1
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkAssistantClass
	NASMX_RESERVE parent_class,	int8_t, GtkWindowClass_size
	NASMX_RESERVE prepare,		uint32_t, 1
	NASMX_RESERVE apply,		uint32_t, 1
	NASMX_RESERVE close,		uint32_t, 1
	NASMX_RESERVE cancel,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBox
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE spacing,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
	NASMX_RESERVE homogeneous,	uint32_t, 1

NASMX_ENDSTRUC

NASMX_STRUC GtkBoxClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkBoxChild
	NASMX_RESERVE widget,		uint32_t, 1
	NASMX_RESERVE padding,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
	NASMX_RESERVE expand,		uint32_t, 1
;.fill:		RESD 1
;.pack:		RESD 1
;.is_secondary:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkButtonBox
	NASMX_RESERVE box,		int8_t, GtkBox_size
	NASMX_RESERVE child_min_width,	uint32_t, 1
	NASMX_RESERVE child_min_height,	uint32_t, 1
	NASMX_RESERVE child_ipad_x,	uint32_t, 1
	NASMX_RESERVE child_ipad_y,	uint32_t, 1
	NASMX_RESERVE layout_style,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkButtonBoxClass
	NASMX_RESERVE parent_class,	int8_t, GtkBoxClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkBindingSet
	NASMX_RESERVE set_name,		uint32_t, 1
	NASMX_RESERVE priority,		uint32_t, 1
	NASMX_RESERVE widget_path_pspecs,	uint32_t, 1
	NASMX_RESERVE widget_class_pspecs,	uint32_t, 1
	NASMX_RESERVE class_branch_pspecs,	uint32_t, 1
	NASMX_RESERVE entries,		uint32_t, 1
	NASMX_RESERVE current,		uint32_t, 1
	NASMX_RESERVE parsed,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBindingEntry
	NASMX_RESERVE keyval,		uint32_t, 1
	NASMX_RESERVE modifiers,	uint32_t, 1
	NASMX_RESERVE binding_set,	uint32_t, 1
	NASMX_RESERVE destroyed,	uint32_t, 1
;.in_emission:		RESD 1
;.marks_unbound:	RESD 1
	NASMX_RESERVE set_next,		uint32_t, 1
	NASMX_RESERVE hash_next,	uint32_t, 1
	NASMX_RESERVE signals,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBindingArg
	NASMX_RESERVE arg_type,		uint32_t, 1
	NASMX_RESERVE long_data,	uint32_t, 1
	NASMX_RESERVE double_data,	uint32_t, 1
	NASMX_RESERVE string_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBindingSignal
	NASMX_RESERVE next,		uint32_t, 1
	NASMX_RESERVE signal_name,	uint32_t, 1
	NASMX_RESERVE n_args,		uint32_t, 1
	NASMX_RESERVE args,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBuilder
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBuilderClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE get_type_from_name,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved6,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved7,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved8,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkBuildableIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE set_name,		uint32_t, 1
	NASMX_RESERVE get_name,		uint32_t, 1
	NASMX_RESERVE add_child,	uint32_t, 1
	NASMX_RESERVE set_buildable_property,	uint32_t, 1
	NASMX_RESERVE construct_child,	uint32_t, 1
	NASMX_RESERVE custom_tag_start,	uint32_t, 1
	NASMX_RESERVE custom_tag_end,	uint32_t, 1
	NASMX_RESERVE custom_finished,	uint32_t, 1
	NASMX_RESERVE parser_finished,	uint32_t, 1
	NASMX_RESERVE get_internal_child,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImagePixmapData
	NASMX_RESERVE pixmap,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImageImageData
	NASMX_RESERVE image,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImagePixbufData
	NASMX_RESERVE pixbuf,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImageStockData
	NASMX_RESERVE stock_id,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImageIconSetData
	NASMX_RESERVE icon_set,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImageAnimationData
	NASMX_RESERVE anim,		uint32_t, 1
	NASMX_RESERVE iter,		uint32_t, 1
	NASMX_RESERVE frame_timeout,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImageIconNameData
	NASMX_RESERVE icon_name,	uint32_t, 1
	NASMX_RESERVE pixbuf,		uint32_t, 1
	NASMX_RESERVE theme_change_id,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImageGIconData
	NASMX_RESERVE icon,		uint32_t, 1
	NASMX_RESERVE pixbuf,		uint32_t, 1
	NASMX_RESERVE theme_change_id,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImage
	NASMX_RESERVE misc,		int8_t, GtkMisc_size
	NASMX_RESERVE storage_type,	uint32_t, 1
	NASMX_RESERVE pixmap,		int8_t, GtkImagePixmapData_size
	NASMX_RESERVE image,		int8_t, GtkImageImageData_size
	NASMX_RESERVE pixbuf,		int8_t, GtkImagePixbufData_size
	NASMX_RESERVE stock,		int8_t, GtkImageStockData_size
	NASMX_RESERVE icon_set,		int8_t, GtkImageIconSetData_size
	NASMX_RESERVE anim,		int8_t, GtkImageAnimationData_size
	NASMX_RESERVE name,		int8_t, GtkImageIconNameData_size
	NASMX_RESERVE gicon,		int8_t, GtkImageGIconData_size
	NASMX_RESERVE mask,		uint32_t, 1
	NASMX_RESERVE icon_size,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImageClass
	NASMX_RESERVE parent_class,	int8_t, GtkMiscClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkButton
	NASMX_RESERVE bin,		int8_t, GtkBin_size
	NASMX_RESERVE event_window,	uint32_t, 1
	NASMX_RESERVE label_text,	uint32_t, 1
	NASMX_RESERVE activate_timeout,	uint32_t, 1
	NASMX_RESERVE ructed,		uint32_t, 1
;.in_button:		RESD 1
;.button_down:		RESD 1
;.relief:		RESD 1
;.use_underline:	RESD 1
;.use_stock:		RESD 1
;.depressed:		RESD 1
;.depress_on_activate:	RESD 1
	NASMX_RESERVE focus_on_click,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE pressed,		uint32_t, 1
	NASMX_RESERVE released,		uint32_t, 1
	NASMX_RESERVE clicked,		uint32_t, 1
	NASMX_RESERVE enter,		uint32_t, 1
	NASMX_RESERVE leave,		uint32_t, 1
	NASMX_RESERVE activate,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCalendar
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE header_style,	uint32_t, 1
	NASMX_RESERVE label_style,	uint32_t, 1
	NASMX_RESERVE month,		uint32_t, 1
	NASMX_RESERVE year,		uint32_t, 1
	NASMX_RESERVE selected_day,	uint32_t, 1
	NASMX_RESERVE num_marked_dates,	uint32_t, 1
	NASMX_RESERVE display_flags,	uint32_t, 1
	NASMX_RESERVE gc,		uint32_t, 1
	NASMX_RESERVE xor_gc,		uint32_t, 1
	NASMX_RESERVE focus_row,	uint32_t, 1
	NASMX_RESERVE focus_col,	uint32_t, 1
	NASMX_RESERVE highlight_row,	uint32_t, 1
	NASMX_RESERVE highlight_col,	uint32_t, 1
	NASMX_RESERVE priv,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCalendarClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE month_changed,	uint32_t, 1
	NASMX_RESERVE day_selected,	uint32_t, 1
	NASMX_RESERVE day_selected_double_click,	uint32_t, 1
	NASMX_RESERVE prev_month,	uint32_t, 1
	NASMX_RESERVE next_month,	uint32_t, 1
	NASMX_RESERVE prev_year,	uint32_t, 1
	NASMX_RESERVE next_year,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellEditableIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE editing_done,	uint32_t, 1
	NASMX_RESERVE remove_widget,	uint32_t, 1
	NASMX_RESERVE start_editing,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRenderer
	NASMX_RESERVE parent,		int8_t, GtkObject_size
	NASMX_RESERVE xalign,		uint32_t, 1
	NASMX_RESERVE yalign,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE xpad,		uint16_t, 1
	NASMX_RESERVE ypad,		uint16_t, 1
	NASMX_RESERVE mode,		uint32_t, 1
;.visible:		RESD 1
;.is_expander:		RESD 1
;.is_expanded:		RESD 1
;.cell_background_set:	RESD 1
;.sensitive:		RESD 1
;.editing:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererClass
	NASMX_RESERVE parent_class,	int8_t, GtkObjectClass_size
	NASMX_RESERVE get_size,		uint32_t, 1
	NASMX_RESERVE render,		uint32_t, 1
	NASMX_RESERVE activate,		uint32_t, 1
	NASMX_RESERVE start_editing,	uint32_t, 1
	NASMX_RESERVE editing_canceled,	uint32_t, 1
	NASMX_RESERVE editing_started,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeIter
	NASMX_RESERVE stamp,		uint32_t, 1
	NASMX_RESERVE user_data,	uint32_t, 1
	NASMX_RESERVE user_data2,	uint32_t, 1
	NASMX_RESERVE user_data3,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeModelIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE row_changed,	uint32_t, 1
	NASMX_RESERVE row_inserted,	uint32_t, 1
	NASMX_RESERVE row_has_child_toggled,	uint32_t, 1
	NASMX_RESERVE row_deleted,	uint32_t, 1
	NASMX_RESERVE rows_reordered,	uint32_t, 1
	NASMX_RESERVE get_flags,	uint32_t, 1
	NASMX_RESERVE get_n_columns,	uint32_t, 1
	NASMX_RESERVE get_column_type,	uint32_t, 1
	NASMX_RESERVE get_iter,		uint32_t, 1
	NASMX_RESERVE get_path,		uint32_t, 1
	NASMX_RESERVE get_value,	uint32_t, 1
	NASMX_RESERVE iter_next,	uint32_t, 1
	NASMX_RESERVE iter_children,	uint32_t, 1
	NASMX_RESERVE iter_has_child,	uint32_t, 1
	NASMX_RESERVE iter_n_children,	uint32_t, 1
	NASMX_RESERVE iter_nth_child,	uint32_t, 1
	NASMX_RESERVE iter_parent,	uint32_t, 1
	NASMX_RESERVE ref_node,		uint32_t, 1
	NASMX_RESERVE unref_node,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeSortableIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE sort_column_changed,	uint32_t, 1
	NASMX_RESERVE get_sort_column_id,	uint32_t, 1
	NASMX_RESERVE set_sort_column_id,	uint32_t, 1
	NASMX_RESERVE set_sort_func,	uint32_t, 1
	NASMX_RESERVE set_default_sort_func,	uint32_t, 1
	NASMX_RESERVE has_default_sort_func,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeViewColumn
	NASMX_RESERVE parent,		int8_t, GtkObject_size
	NASMX_RESERVE tree_view,	uint32_t, 1
	NASMX_RESERVE button,		uint32_t, 1
	NASMX_RESERVE child,		uint32_t, 1
	NASMX_RESERVE arrow,		uint32_t, 1
	NASMX_RESERVE alignment,	uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE editable_widget,	uint32_t, 1
	NASMX_RESERVE xalign,		uint32_t, 1
	NASMX_RESERVE property_changed_signal,	uint32_t, 1
	NASMX_RESERVE spacing,		uint32_t, 1
	NASMX_RESERVE column_type,	uint32_t, 1
	NASMX_RESERVE requested_width,	uint32_t, 1
	NASMX_RESERVE button_request,	uint32_t, 1
	NASMX_RESERVE resized_width,	uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE fixed_width,	uint32_t, 1
	NASMX_RESERVE min_width,	uint32_t, 1
	NASMX_RESERVE max_width,	uint32_t, 1
	NASMX_RESERVE drag_x,		uint32_t, 1
	NASMX_RESERVE drag_y,		uint32_t, 1
	NASMX_RESERVE title,		uint32_t, 1
	NASMX_RESERVE cell_list,	uint32_t, 1
	NASMX_RESERVE sort_clicked_signal,	uint32_t, 1
	NASMX_RESERVE sort_column_changed_signal,	uint32_t, 1
	NASMX_RESERVE sort_column_id,	uint32_t, 1
	NASMX_RESERVE sort_order,	uint32_t, 1
	NASMX_RESERVE visible,		uint32_t, 1
;.resizable:		RESD 1
;.clickable:		RESD 1
;.dirty:		RESD 1
;.show_sort_indicator:	RESD 1
;.maybe_reordered:	RESD 1
;.reorderable:		RESD 1
;.use_resized_width:	RESD 1
;.expand:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeViewColumnClass
	NASMX_RESERVE parent_class,	int8_t, GtkObjectClass_size
	NASMX_RESERVE clicked,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellLayoutIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE pack_start,	uint32_t, 1
	NASMX_RESERVE pack_end,		uint32_t, 1
	NASMX_RESERVE clear,		uint32_t, 1
	NASMX_RESERVE add_attribute,	uint32_t, 1
	NASMX_RESERVE set_cell_data_func,	uint32_t, 1
	NASMX_RESERVE clear_attributes,	uint32_t, 1
	NASMX_RESERVE reorder,		uint32_t, 1
	NASMX_RESERVE get_cells,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererText
	NASMX_RESERVE parent,		int8_t, GtkCellRenderer_size
	NASMX_RESERVE text,		uint32_t, 1
	NASMX_RESERVE font,		uint32_t, 1
	NASMX_RESERVE font_scale,	uint32_t, 1
	NASMX_RESERVE foreground,	int8_t, PangoColor_size
	NASMX_RESERVE background,	int8_t, PangoColor_size
	NASMX_RESERVE extra_attrs,	uint32_t, 1
	NASMX_RESERVE underline_style,	uint32_t, 1
	NASMX_RESERVE rise,		uint32_t, 1
	NASMX_RESERVE fixed_height_rows,	uint32_t, 1
	NASMX_RESERVE strikethrough,	uint32_t, 1
;.editable:		RESD 1
;.scale_set:		RESD 1
;.foreground_set:	RESD 1
;.background_set:	RESD 1
;.underline_set:	RESD 1
;.rise_set:		RESD 1
;.strikethrough_set:	RESD 1
;.editable_set:		RESD 1
;.calc_fixed_height:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererTextClass
	NASMX_RESERVE parent_class,	int8_t, GtkCellRendererClass_size
	NASMX_RESERVE edited,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererAccel
	NASMX_RESERVE parent,		int8_t, GtkCellRendererText_size
	NASMX_RESERVE accel_key,	uint32_t, 1
	NASMX_RESERVE accel_mods,	uint32_t, 1
	NASMX_RESERVE keycode,		uint32_t, 1
	NASMX_RESERVE accel_mode,	uint32_t, 1
	NASMX_RESERVE edit_widget,	uint32_t, 1
	NASMX_RESERVE grab_widget,	uint32_t, 1
	NASMX_RESERVE sizing_label,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererAccelClass
	NASMX_RESERVE parent_class,	int8_t, GtkCellRendererTextClass_size
	NASMX_RESERVE accel_edited,	uint32_t, 1
	NASMX_RESERVE accel_cleared,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved0,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererCombo
	NASMX_RESERVE parent,		int8_t, GtkCellRendererText_size
	NASMX_RESERVE model,		uint32_t, 1
	NASMX_RESERVE text_column,	uint32_t, 1
	NASMX_RESERVE has_entry,	uint32_t, 1
	NASMX_RESERVE focus_out_id,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererComboClass
	NASMX_RESERVE parent,		int8_t, GtkCellRendererTextClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererPixbuf
	NASMX_RESERVE parent,		int8_t, GtkCellRenderer_size
	NASMX_RESERVE pixbuf,		uint32_t, 1
	NASMX_RESERVE pixbuf_expander_open,	uint32_t, 1
	NASMX_RESERVE pixbuf_expander_closed,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererPixbufClass
	NASMX_RESERVE parent_class,	int8_t, GtkCellRendererClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererProgress
	NASMX_RESERVE parent_instance,	int8_t, GtkCellRenderer_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererProgressClass
	NASMX_RESERVE parent_class,	int8_t, GtkCellRendererClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererSpin
	NASMX_RESERVE parent,		int8_t, GtkCellRendererText_size
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererSpinClass
	NASMX_RESERVE parent,		int8_t, GtkCellRendererTextClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererSpinner
	NASMX_RESERVE parent,		int8_t, GtkCellRenderer_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererSpinnerClass
	NASMX_RESERVE parent_class,	int8_t, GtkCellRendererClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererToggle
	NASMX_RESERVE parent,		int8_t, GtkCellRenderer_size
	NASMX_RESERVE active,		uint32_t, 1
;.activatable:		RESD 1
;.radio:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellRendererToggleClass
	NASMX_RESERVE parent_class,	int8_t, GtkCellRendererClass_size
	NASMX_RESERVE toggled,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellView
	NASMX_RESERVE parent_instance,	int8_t, GtkWidget_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellViewClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkToggleButton
	NASMX_RESERVE button,		int8_t, GtkButton_size
	NASMX_RESERVE active,		uint32_t, 1
;.draw_indicator:	RESD 1
;.inconsistent:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToggleButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkButtonClass_size
	NASMX_RESERVE toggled,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCheckButton
	NASMX_RESERVE toggle_button,	int8_t, GtkToggleButton_size
NASMX_ENDSTRUC

NASMX_STRUC GtkCheckButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkToggleButtonClass_size
	NASMX_RESERVE draw_indicator,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkItem
	NASMX_RESERVE bin,		int8_t, GtkBin_size
NASMX_ENDSTRUC

NASMX_STRUC GtkItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE select,		uint32_t, 1
	NASMX_RESERVE deselect,		uint32_t, 1
	NASMX_RESERVE toggle,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMenuItem
	NASMX_RESERVE item,		int8_t, GtkItem_size
	NASMX_RESERVE submenu,		uint32_t, 1
	NASMX_RESERVE event_window,	uint32_t, 1
	NASMX_RESERVE toggle_size,	uint16_t, 1
	NASMX_RESERVE accelerator_width,	uint16_t, 1
	NASMX_RESERVE accel_path,	uint32_t, 1
	NASMX_RESERVE show_submenu_indicator,	uint32_t, 1
;.submenu_placement:	RESD 1
;.submenu_direction:	RESD 1
;.right_justify:	RESD 1
;.timer_from_keypress:	RESD 1
;.from_menubar:		RESD 1
	NASMX_RESERVE timer,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMenuItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkItemClass_size
	NASMX_RESERVE hide_on_activate,	uint32_t, 1
	NASMX_RESERVE activate,		uint32_t, 1
	NASMX_RESERVE activate_item,	uint32_t, 1
	NASMX_RESERVE toggle_size_request,	uint32_t, 1
	NASMX_RESERVE toggle_size_allocate,	uint32_t, 1
	NASMX_RESERVE set_label,	uint32_t, 1
	NASMX_RESERVE get_label,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCheckMenuItem
	NASMX_RESERVE menu_item,	int8_t, GtkMenuItem_size
	NASMX_RESERVE active,		uint32_t, 1
;.always_show_toggle:	RESD 1
;.inconsistent:		RESD 1
;.draw_as_radio:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCheckMenuItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkMenuItemClass_size
	NASMX_RESERVE toggled,		uint32_t, 1
	NASMX_RESERVE draw_indicator,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextTag
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE table,		uint32_t, 1
	NASMX_RESERVE name,		uint32_t, 1
	NASMX_RESERVE priority,		uint32_t, 1
	NASMX_RESERVE values,		uint32_t, 1
	NASMX_RESERVE bg_color_set,	uint32_t, 1
;.bg_stipple_set:	RESD 1
;.fg_color_set:		RESD 1
;.scale_set:		RESD 1
;.fg_stipple_set:	RESD 1
;.justification_set:	RESD 1

;.left_margin_set:	RESD 1
;.indent_set:		RESD 1
;.rise_set:		RESD 1
;.strikethrough_set:	RESD 1
;.right_margin_set:	RESD 1
;.pixels_above_lines_set:	RESD 1
;.pixels_below_lines_set:	RESD 1
;.pixels_inside_wrap_set:	RESD 1
;.tabs_set:		RESD 1
;.underline_set:	RESD 1
;.wrap_mode_set:	RESD 1
;.bg_full_height_set:	RESD 1
;.invisible_set:	RESD 1
;.editable_set:		RESD 1
;.language_set:		RESD 1
;.pg_bg_color_set:	RESD 1
;.accumulative_margin:	RESD 1
;.pad1:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextTagClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE event,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextAppearance
	NASMX_RESERVE bg_color,		int8_t, GdkColor_size
	NASMX_RESERVE fg_color,		int8_t, GdkColor_size
	NASMX_RESERVE bg_stipple,	uint32_t, 1
	NASMX_RESERVE fg_stipple,	uint32_t, 1
	NASMX_RESERVE rise,		uint32_t, 1
	NASMX_RESERVE padding1,		uint32_t, 1
	NASMX_RESERVE underline,	uint32_t, 1
;.strikethrough:	RESD 1
;.draw_bg:		RESD 1
;.inside_selection:	RESD 1
;.is_text:		RESD 1
;.pad1:		RESD 1
;.pad2:		RESD 1
;.pad3:		RESD 1
;.pad4:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextAttributes
	NASMX_RESERVE refcount,		uint32_t, 1
	NASMX_RESERVE appearance,	int8_t, GtkTextAppearance_size
	NASMX_RESERVE justification,	uint32_t, 1
	NASMX_RESERVE direction,	uint32_t, 1
	NASMX_RESERVE font,		uint32_t, 1
	NASMX_RESERVE font_scale,	uint32_t, 1
	NASMX_RESERVE left_margin,	uint32_t, 1
	NASMX_RESERVE indent,		uint32_t, 1
	NASMX_RESERVE right_margin,	uint32_t, 1
	NASMX_RESERVE pixels_above_lines,	uint32_t, 1
	NASMX_RESERVE pixels_below_lines,	uint32_t, 1
	NASMX_RESERVE pixels_inside_wrap,	uint32_t, 1
	NASMX_RESERVE tabs,		uint32_t, 1
	NASMX_RESERVE wrap_mode,	uint32_t, 1
	NASMX_RESERVE language,		uint32_t, 1
	NASMX_RESERVE pg_bg_color,	uint32_t, 1
	NASMX_RESERVE invisible,	uint32_t, 1
;.bg_full_height:	RESD 1
;.editable:		RESD 1
;.realized:		RESD 1
;.pad1:		RESD 1
;.pad2:		RESD 1
;.pad3:		RESD 1
;.pad4:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextChildAnchor
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE segment,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextChildAnchorClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSelectionData
	NASMX_RESERVE selection,	uint32_t, 1
	NASMX_RESERVE target,		uint32_t, 1
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE format,		uint32_t, 1
	NASMX_RESERVE data,		uint32_t, 1
	NASMX_RESERVE length,		uint32_t, 1
	NASMX_RESERVE display,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkVBox
	NASMX_RESERVE box,		int8_t, GtkBox_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVBoxClass
	NASMX_RESERVE parent_class,	int8_t, GtkBoxClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkColorSelection
	NASMX_RESERVE parent_instance,	int8_t, GtkVBox_size
	NASMX_RESERVE private_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkColorSelectionClass
	NASMX_RESERVE parent_class,	int8_t, GtkVBoxClass_size
	NASMX_RESERVE color_changed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkColorSelectionDialog
	NASMX_RESERVE parent_instance,	int8_t, GtkDialog_size
	NASMX_RESERVE colorsel,		uint32_t, 1
	NASMX_RESERVE ok_button,	uint32_t, 1
	NASMX_RESERVE cancel_button,	uint32_t, 1
	NASMX_RESERVE help_button,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkColorSelectionDialogClass
	NASMX_RESERVE parent_class,	int8_t, GtkDialogClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkEditableClass
	NASMX_RESERVE base_iface,	int8_t, GTypeInterface_size
	NASMX_RESERVE insert_text,	uint32_t, 1
	NASMX_RESERVE delete_text,	uint32_t, 1
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE do_insert_text,	uint32_t, 1
	NASMX_RESERVE do_delete_text,	uint32_t, 1
	NASMX_RESERVE get_chars,	uint32_t, 1
	NASMX_RESERVE set_selection_bounds,	uint32_t, 1
	NASMX_RESERVE get_selection_bounds,	uint32_t, 1
	NASMX_RESERVE set_position,	uint32_t, 1
	NASMX_RESERVE get_position,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkIMContext
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
NASMX_ENDSTRUC

NASMX_STRUC GtkIMContextClass
	NASMX_RESERVE parent_class,	int8_t, GtkObjectClass_size
	NASMX_RESERVE preedit_start,	uint32_t, 1
	NASMX_RESERVE preedit_end,	uint32_t, 1
	NASMX_RESERVE preedit_changed,	uint32_t, 1
	NASMX_RESERVE commit,		uint32_t, 1
	NASMX_RESERVE retrieve_surrounding,	uint32_t, 1
	NASMX_RESERVE delete_surrounding,	uint32_t, 1
	NASMX_RESERVE set_client_window,	uint32_t, 1
	NASMX_RESERVE get_preedit_string,	uint32_t, 1
	NASMX_RESERVE filter_keypress,	uint32_t, 1
	NASMX_RESERVE focus_in,		uint32_t, 1
	NASMX_RESERVE focus_out,	uint32_t, 1
	NASMX_RESERVE reset,		uint32_t, 1
	NASMX_RESERVE set_cursor_location,	uint32_t, 1
	NASMX_RESERVE set_use_preedit,	uint32_t, 1
	NASMX_RESERVE set_surrounding,	uint32_t, 1
	NASMX_RESERVE get_surrounding,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved6,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkEntryBuffer
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkEntryBufferClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE inserted_text,	uint32_t, 1
	NASMX_RESERVE deleted_text,	uint32_t, 1
	NASMX_RESERVE get_text,		uint32_t, 1
	NASMX_RESERVE get_length,	uint32_t, 1
	NASMX_RESERVE insert_text,	uint32_t, 1
	NASMX_RESERVE delete_text,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved0,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkListStore
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE stamp,		uint32_t, 1
	NASMX_RESERVE seq,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE sort_list,	uint32_t, 1
	NASMX_RESERVE n_columns,	uint32_t, 1
	NASMX_RESERVE sort_column_id,	uint32_t, 1
	NASMX_RESERVE order,		uint32_t, 1
	NASMX_RESERVE column_headers,	uint32_t, 1
	NASMX_RESERVE length,		uint32_t, 1
	NASMX_RESERVE default_sort_func,	uint32_t, 1
	NASMX_RESERVE default_sort_data,	uint32_t, 1
	NASMX_RESERVE default_sort_destroy,	uint32_t, 1
	NASMX_RESERVE columns_dirty,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkListStoreClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeModelFilter
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeModelFilterClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _gtk_reserved0,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkEntryCompletion
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkEntryCompletionClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE match_selected,	uint32_t, 1
	NASMX_RESERVE action_activated,	uint32_t, 1
	NASMX_RESERVE insert_prefix,	uint32_t, 1
	NASMX_RESERVE cursor_on_match,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved0,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkEntry
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE text,		uint32_t, 1
	NASMX_RESERVE editable,		uint32_t, 1
;.visible:		RESD 1
;.overwrite_mode:	RESD 1
;.in_drag:		RESD 1
	NASMX_RESERVE text_length,	uint16_t, 1
	NASMX_RESERVE text_max_length,	uint16_t, 1
	NASMX_RESERVE text_area,	uint32_t, 1
	NASMX_RESERVE im_context,	uint32_t, 1
	NASMX_RESERVE popup_menu,	uint32_t, 1
	NASMX_RESERVE current_pos,	uint32_t, 1
	NASMX_RESERVE selection_bound,	uint32_t, 1
	NASMX_RESERVE cached_layout,	uint32_t, 1
	NASMX_RESERVE cache_includes_preedit,	uint32_t, 1
;.need_im_reset:	RESD 1
;.has_frame:		RESD 1
;.activates_default:	RESD 1
;.cursor_visible:	RESD 1
;.in_click:		RESD 1
;.is_cell_renderer:	RESD 1
;.editing_canceled:	RESD 1
;.mouse_cursor_obscured:	RESD 1
;.select_words:		RESD 1
;.select_lines:		RESD 1
;.resolved_dir:		RESD 1
;.truncate_multiline:	RESD 1
	NASMX_RESERVE button,		uint32_t, 1
	NASMX_RESERVE blink_timeout,	uint32_t, 1
	NASMX_RESERVE recompute_idle,	uint32_t, 1
	NASMX_RESERVE scroll_offset,	uint32_t, 1
	NASMX_RESERVE ascent,		uint32_t, 1
	NASMX_RESERVE descent,		uint32_t, 1
	NASMX_RESERVE x_text_size,	uint16_t, 1
	NASMX_RESERVE x_n_bytes,	uint16_t, 1
	NASMX_RESERVE preedit_length,	uint16_t, 1
	NASMX_RESERVE preedit_cursor,	uint16_t, 1
	NASMX_RESERVE dnd_position,	uint32_t, 1
	NASMX_RESERVE drag_start_x,	uint32_t, 1
	NASMX_RESERVE drag_start_y,	uint32_t, 1
	NASMX_RESERVE invisible_char,	uint32_t, 1
	NASMX_RESERVE width_chars,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkEntryClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE populate_popup,	uint32_t, 1
	NASMX_RESERVE activate,		uint32_t, 1
	NASMX_RESERVE move_cursor,	uint32_t, 1
	NASMX_RESERVE insert_at_cursor,	uint32_t, 1
	NASMX_RESERVE delete_from_cursor,	uint32_t, 1
	NASMX_RESERVE backspace,	uint32_t, 1
	NASMX_RESERVE cut_clipboard,	uint32_t, 1
	NASMX_RESERVE copy_clipboard,	uint32_t, 1
	NASMX_RESERVE paste_clipboard,	uint32_t, 1
	NASMX_RESERVE toggle_overwrite,	uint32_t, 1
	NASMX_RESERVE get_text_area_size,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeView
	NASMX_RESERVE parent,		int8_t, GtkContainer_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeViewClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE set_scroll_adjustments,	uint32_t, 1
	NASMX_RESERVE row_activated,	uint32_t, 1
	NASMX_RESERVE test_expand_row,	uint32_t, 1
	NASMX_RESERVE test_collapse_row,	uint32_t, 1
	NASMX_RESERVE row_expanded,	uint32_t, 1
	NASMX_RESERVE row_collapsed,	uint32_t, 1
	NASMX_RESERVE columns_changed,	uint32_t, 1
	NASMX_RESERVE cursor_changed,	uint32_t, 1
	NASMX_RESERVE move_cursor,	uint32_t, 1
	NASMX_RESERVE select_all,	uint32_t, 1
	NASMX_RESERVE unselect_all,	uint32_t, 1
	NASMX_RESERVE select_cursor_row,	uint32_t, 1
	NASMX_RESERVE toggle_cursor_row,	uint32_t, 1
	NASMX_RESERVE expand_collapse_cursor_row,	uint32_t, 1
	NASMX_RESERVE select_cursor_parent,	uint32_t, 1
	NASMX_RESERVE start_interactive_search, uint32_t, 1
	NASMX_RESERVE _gtk_reserved0,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkComboBox
	NASMX_RESERVE parent_instance,	int8_t, GtkBin_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkComboBoxClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE changed,	uint32_t, 1
	NASMX_RESERVE get_active_text,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved0,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkComboBoxEntry
	NASMX_RESERVE parent_instance,	int8_t, GtkComboBox_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

;;struct _GtkCombo {
;;	GtkHBox hbox;
;;	GtkWidget *entry;
;;	GtkWidget *button;
;;	GtkWidget *popup;
;;	GtkWidget *popwin;
;;	GtkWidget *list;
;;	guint entry_change_id;
;;	guint list_change_id;
;;	guint value_in_list:1;
;;	guint ok_if_empty:1;
;;	guint case_sensitive:1;
;;	guint use_arrows:1;
;;	guint use_arrows_always:1;
;;        guint16 current_button;
;;	guint activate_id;
;;};
;;struct _GtkComboClass {
;;	GtkHBoxClass parent_class;
;;        void (*_gtk_reserved1) (void);
;;        void (*_gtk_reserved2) (void);
;;        void (*_gtk_reserved3) (void);
;;        void (*_gtk_reserved4) (void);
;;};
;;


NASMX_STRUC GtkComboBoxEntryClass
	NASMX_RESERVE parent_class,	int8_t, GtkComboBoxClass_size
	NASMX_RESERVE _gtk_reserved0,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkComboBoxText
	NASMX_RESERVE parent_instance,	int8_t, GtkComboBox_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkComboBoxTextClass
	NASMX_RESERVE parent_class,	int8_t, GtkComboBoxClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkDrawingArea
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE draw_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkDrawingAreaClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkEventBox
	NASMX_RESERVE bin,		int8_t, GtkBin_size
NASMX_ENDSTRUC

NASMX_STRUC GtkEventBoxClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkExpander
	NASMX_RESERVE bin,		int8_t, GtkBin_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkExpanderClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE activate,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFixed
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE children,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFixedClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkFixedChild
	NASMX_RESERVE widget,		uint32_t, 1
	NASMX_RESERVE x,		uint32_t, 1
	NASMX_RESERVE y,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFileFilterInfo
	NASMX_RESERVE contains,		uint32_t, 1
	NASMX_RESERVE filename,		uint32_t, 1
	NASMX_RESERVE uri,		uint32_t, 1
	NASMX_RESERVE display_name,	uint32_t, 1
	NASMX_RESERVE mime_type,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkHBox
	NASMX_RESERVE box,		int8_t, GtkBox_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHBoxClass
	NASMX_RESERVE parent_class,	int8_t, GtkBoxClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkFileChooserButton
	NASMX_RESERVE parent,		int8_t, GtkHBox_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFileChooserButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkHBoxClass_size
	NASMX_RESERVE file_set,		uint32_t, 1
	NASMX_RESERVE __gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE __gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE __gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE __gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE __gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE __gtk_reserved6,	uint32_t, 1
	NASMX_RESERVE __gtk_reserved7,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFileChooserDialog
	NASMX_RESERVE parent_instance,	int8_t, GtkDialog_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFileChooserDialogClass
	NASMX_RESERVE parent_class,	int8_t, GtkDialogClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkFileChooserWidget
	NASMX_RESERVE parent_instance,	int8_t, GtkVBox_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFileChooserWidgetClass
	NASMX_RESERVE parent_class,	int8_t, GtkVBoxClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkFontSelection
	NASMX_RESERVE parent_instance,	int8_t, GtkVBox_size
	NASMX_RESERVE font_entry,	uint32_t, 1
	NASMX_RESERVE family_list,	uint32_t, 1
	NASMX_RESERVE font_style_entry,	uint32_t, 1
	NASMX_RESERVE face_list,	uint32_t, 1
	NASMX_RESERVE size_entry,	uint32_t, 1
	NASMX_RESERVE size_list,	uint32_t, 1
	NASMX_RESERVE pixels_button,	uint32_t, 1
	NASMX_RESERVE points_button,	uint32_t, 1
	NASMX_RESERVE filter_button,	uint32_t, 1
	NASMX_RESERVE preview_entry,	uint32_t, 1
	NASMX_RESERVE family,		uint32_t, 1
	NASMX_RESERVE face,		uint32_t, 1
	NASMX_RESERVE size,		uint32_t, 1
	NASMX_RESERVE font,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFontSelectionClass
	NASMX_RESERVE parent_class,	int8_t, GtkVBoxClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFontSelectionDialog
	NASMX_RESERVE parent_instance,	int8_t, GtkDialog_size
	NASMX_RESERVE fontsel,		uint32_t, 1
	NASMX_RESERVE main_vbox,	uint32_t, 1
	NASMX_RESERVE action_area,	uint32_t, 1
	NASMX_RESERVE ok_button,	uint32_t, 1
	NASMX_RESERVE apply_button,	uint32_t, 1
	NASMX_RESERVE cancel_button,	uint32_t, 1
	NASMX_RESERVE dialog_width,	uint32_t, 1
	NASMX_RESERVE auto_resize,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFontSelectionDialogClass
	NASMX_RESERVE parent_class,	int8_t, GtkDialogClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkHandleBox
	NASMX_RESERVE bin,		int8_t, GtkBin_size
	NASMX_RESERVE bin_window,	uint32_t, 1
	NASMX_RESERVE float_window,	uint32_t, 1
	NASMX_RESERVE shadow_type,	uint32_t, 1
	NASMX_RESERVE handle_position,	uint32_t, 1
;.float_window_mapped:	RESD 1
;.child_detached:	RESD 1
;.in_drag:		RESD 1
;.shrink_on_detach:	RESD 1
;.snap_edge 		RESD 1
	NASMX_RESERVE deskoff_x,	uint32_t, 1
	NASMX_RESERVE deskoff_y,	uint32_t, 1
	NASMX_RESERVE attach_allocation,	int8_t, GdkRectangle_size
	NASMX_RESERVE float_allocation,		int8_t, GdkRectangle_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHandleBoxClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE child_attached,	uint32_t, 1
	NASMX_RESERVE child_detached,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkHButtonBox
	NASMX_RESERVE button_box,	int8_t, GtkButtonBox_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHButtonBoxClass
	NASMX_RESERVE parent_class,	int8_t, GtkButtonBoxClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkPaned
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE child1,		uint32_t, 1
	NASMX_RESERVE child2,		uint32_t, 1
	NASMX_RESERVE handle,		uint32_t, 1
	NASMX_RESERVE xor_gc,		uint32_t, 1
	NASMX_RESERVE cursor_type,	uint32_t, 1
	NASMX_RESERVE handle_pos,	int8_t, GdkRectangle_size
	NASMX_RESERVE child1_siz, 	uint32_t, 1
	NASMX_RESERVE last_allocation,	uint32_t, 1
	NASMX_RESERVE min_position,	uint32_t, 1
	NASMX_RESERVE max_position,	uint32_t, 1
	NASMX_RESERVE position_set,	uint32_t, 1
;.in_drag:		RESD 1
;.child1_shrink:	RESD 1
;.child1_resize:	RESD 1
;.child2_shrink:	RESD 1
;.child2_resize:	RESD 1
;.orientation:		RESD 1
;.in_recursion:		RESD 1
;.handle_prelit:	RESD 1
	NASMX_RESERVE last_child1_focus,	uint32_t, 1
	NASMX_RESERVE last_child2_focus,	uint32_t, 1
	NASMX_RESERVE priv,		uint32_t, 1
	NASMX_RESERVE drag_pos,		uint32_t, 1
	NASMX_RESERVE original_position,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPanedClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE cycle_child_focus,	uint32_t, 1
	NASMX_RESERVE toggle_handle_focus,	uint32_t, 1
	NASMX_RESERVE move_handle,	uint32_t, 1
	NASMX_RESERVE cycle_handle_focus,	uint32_t, 1
	NASMX_RESERVE accept_position,	uint32_t, 1
	NASMX_RESERVE cancel_position,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkHPaned
	NASMX_RESERVE paned,		int8_t, GtkPaned_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHPanedClass
	NASMX_RESERVE parent_class,	int8_t, GtkPanedClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkRuler
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE backing_store,	uint32_t, 1
	NASMX_RESERVE non_gr_exp_gc,	uint32_t, 1
	NASMX_RESERVE metric,		uint32_t, 1
	NASMX_RESERVE xsrc,		uint32_t, 1
	NASMX_RESERVE ysrc,		uint32_t, 1
	NASMX_RESERVE slider_size,	uint32_t, 1
	NASMX_RESERVE lower,		uint32_t, 1
	NASMX_RESERVE upper,		uint32_t, 1
	NASMX_RESERVE position,		uint32_t, 1
	NASMX_RESERVE max_size,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRulerClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE draw_ticks,	uint32_t, 1
	NASMX_RESERVE draw_pos,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRulerMetric
	NASMX_RESERVE metric_name,	uint32_t, 1
	NASMX_RESERVE abbrev,		uint32_t, 1
	NASMX_RESERVE pixels_per_unit,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkHRuler
	NASMX_RESERVE ruler,		int8_t, GtkRuler_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHRulerClass
	NASMX_RESERVE parent_class,	int8_t, GtkRulerClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkRange
	NASMX_RESERVE widget,	int8_t, GtkWidget_size
	NASMX_RESERVE adjustment,	uint32_t, 1
	NASMX_RESERVE update_policy,	uint32_t, 1
	NASMX_RESERVE inverted,		uint32_t, 1
;.flippable:		RESD 1
;.has_stepper_a:	RESD 1
;.has_stepper_b:	RESD 1
;.has_stepper_c:	RESD 1
;.has_stepper_d:	RESD 1
;.need_recalc:		RESD 1
;.slider_size_fixed:	RESD 1
	NASMX_RESERVE min_slider_size,	uint32_t, 1
	NASMX_RESERVE orientation,	uint32_t, 1
	NASMX_RESERVE range_rect,	int8_t, GdkRectangle_size
	NASMX_RESERVE slider_start,	uint32_t, 1
	NASMX_RESERVE slider_end,	uint32_t, 1
	NASMX_RESERVE round_digits,	uint32_t, 1
	NASMX_RESERVE trough_click_forward,	uint32_t, 1
	NASMX_RESERVE update_pending,	uint32_t, 1
	NASMX_RESERVE layout,		uint32_t, 1
	NASMX_RESERVE timer,		uint32_t, 1
	NASMX_RESERVE slide_initial_slider_position,	uint32_t, 1
	NASMX_RESERVE slide_initial_coordinate,		uint32_t, 1
	NASMX_RESERVE update_timeout_id,	uint32_t, 1
	NASMX_RESERVE event_window,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRangeClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE slider_detail,	uint32_t, 1
	NASMX_RESERVE stepper_detail,	uint32_t, 1
	NASMX_RESERVE value_changed,	uint32_t, 1
	NASMX_RESERVE adjust_bounds,	uint32_t, 1
	NASMX_RESERVE move_slider,	uint32_t, 1
	NASMX_RESERVE get_range_border,	uint32_t, 1
	NASMX_RESERVE change_value,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkScale
	NASMX_RESERVE range,		int8_t, GtkRange_size
	NASMX_RESERVE digits,		uint32_t, 1
	NASMX_RESERVE draw_value,	uint32_t, 1
;.value_pos:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkScaleClass
	NASMX_RESERVE parent_class,	int8_t, GtkRangeClass_size
	NASMX_RESERVE format_value,	uint32_t, 1
	NASMX_RESERVE draw_value,	uint32_t, 1
	NASMX_RESERVE get_layout_offsets,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkHScale
	NASMX_RESERVE scale,		int8_t, GtkScale_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHScaleClass
	NASMX_RESERVE parent_class,	int8_t, GtkScaleClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkScrollbar
	NASMX_RESERVE range,		int8_t, GtkRange_size
NASMX_ENDSTRUC

NASMX_STRUC GtkScrollbarClass
	NASMX_RESERVE parent_class,	int8_t, GtkRangeClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkHScrollbar
	NASMX_RESERVE scrollbar,	int8_t, GtkScrollbar_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHScrollbarClass
	NASMX_RESERVE parent_class,	int8_t, GtkScrollbarClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkSeparator
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
NASMX_ENDSTRUC

NASMX_STRUC GtkSeparatorClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHSeparator
	NASMX_RESERVE separator,	int8_t, GtkSeparator_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHSeparatorClass
	NASMX_RESERVE parent_class, 	int8_t, GtkSeparatorClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkHSV
	NASMX_RESERVE parent_instance,	int8_t, GtkWidget_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkHSVClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE move,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkIconFactory
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE icons,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkIconFactoryClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkIconTheme
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkIconThemeClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE changed,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkIconView
	NASMX_RESERVE parent,		int8_t, GtkContainer_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkIconViewClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE set_scroll_adjustments,	uint32_t, 1
	NASMX_RESERVE item_activated,	uint32_t, 1
	NASMX_RESERVE selection_changed,	uint32_t, 1
	NASMX_RESERVE select_all,	uint32_t, 1
	NASMX_RESERVE unselect_all,	uint32_t, 1
	NASMX_RESERVE select_cursor_item,	uint32_t, 1
	NASMX_RESERVE toggle_cursor_item,	uint32_t, 1
	NASMX_RESERVE move_cursor,	uint32_t, 1
	NASMX_RESERVE activate_cursor_item,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImageMenuItem
	NASMX_RESERVE menu_item,	int8_t, GtkMenuItem_size
	NASMX_RESERVE image,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkImageMenuItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkMenuItemClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkIMContextSimple
	NASMX_RESERVE object,		int8_t, GtkIMContext_size
	NASMX_RESERVE tables,		uint32_t, 1
	NASMX_RESERVE compose_buffer,	uint32_t, 8
	NASMX_RESERVE tentative_match,	uint32_t, 1
	NASMX_RESERVE tentative_match_len,	uint32_t, 1
	NASMX_RESERVE in_hex_sequence,	uint32_t, 1
;.modifiers_dropped:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkIMContextSimpleClass
	NASMX_RESERVE parent_class,	int8_t, GtkIMContextClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkIMMulticontext
	NASMX_RESERVE object,		int8_t, GtkIMContext_size
	NASMX_RESERVE slave,		uint32_t, 1
	NASMX_RESERVE priv,		uint32_t, 1
	NASMX_RESERVE context_id,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkIMMulticontextClass
	NASMX_RESERVE parent_class,	int8_t, GtkIMContextClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkInfoBar
	NASMX_RESERVE parent,		int8_t, GtkHBox_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkInfoBarClass
	NASMX_RESERVE parent_class,	int8_t, GtkHBoxClass_size
	NASMX_RESERVE response,		uint32_t, 1
	NASMX_RESERVE close,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved6,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkInvisible
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE has_user_ref_count,	uint32_t, 1
	NASMX_RESERVE screen,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkInvisibleClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkLayout
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE hadjustment,	uint32_t, 1
	NASMX_RESERVE vadjustment,	uint32_t, 1
	NASMX_RESERVE bin_window,	uint32_t, 1
	NASMX_RESERVE visibility,	uint32_t, 1
	NASMX_RESERVE scroll_x,		uint32_t, 1
	NASMX_RESERVE scroll_y,		uint32_t, 1
	NASMX_RESERVE freeze_count,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkLayoutClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE set_scroll_adjustments,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkLinkButton
	NASMX_RESERVE parent_instance,	int8_t, GtkButton_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkLinkButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkButtonClass_size
	NASMX_RESERVE _gtk_padding1,	uint32_t, 1
	NASMX_RESERVE _gtk_padding2,	uint32_t, 1
	NASMX_RESERVE _gtk_padding3,	uint32_t, 1
	NASMX_RESERVE _gtk_padding4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMenuBar
	NASMX_RESERVE menu_shell,	int8_t, GtkMenuShell_size
NASMX_ENDSTRUC

NASMX_STRUC GtkMenuBarClass
	NASMX_RESERVE parent_class,	int8_t, GtkMenuShellClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTooltipsData
	NASMX_RESERVE tooltips,		uint32_t, 1
	NASMX_RESERVE widget,		uint32_t, 1
	NASMX_RESERVE tip_text,		uint32_t, 1
	NASMX_RESERVE tip_private,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTooltips
	NASMX_RESERVE parent_instance,	int8_t, GtkObject_size
	NASMX_RESERVE tip_window,	uint32_t, 1
	NASMX_RESERVE tip_label,	uint32_t, 1
	NASMX_RESERVE active_tips_data,	uint32_t, 1
	NASMX_RESERVE tips_data_list,	uint32_t, 1
	NASMX_RESERVE delay,		uint32_t, 1
;.enabled:		RESD 1
;.have_grab:		RESD 1
	NASMX_RESERVE use_sticky_delay,	uint32_t, 1
	NASMX_RESERVE timer_tag,	uint32_t, 1
	NASMX_RESERVE last_popdown,	int8_t, GTimeVal_size
NASMX_ENDSTRUC

NASMX_STRUC GtkTooltipsClass
	NASMX_RESERVE parent_class,	int8_t, GtkObjectClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSizeGroup
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE widgets,		uint32_t, 1
	NASMX_RESERVE mode,		int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE have_width,	uint32_t, 1
;.have_height:		RESD 1
;.ignore_hidden:	RESD 1
	NASMX_RESERVE requisition,	int8_t, GtkRequisition_size
NASMX_ENDSTRUC

NASMX_STRUC GtkSizeGroupClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolItem
	NASMX_RESERVE parent,		int8_t, GtkBin_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE create_menu_proxy,	uint32_t, 1
	NASMX_RESERVE toolbar_reconfigured,	uint32_t, 1
	NASMX_RESERVE set_tooltip,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolButton
	NASMX_RESERVE parent,		int8_t, GtkToolItem_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkToolItemClass_size
	NASMX_RESERVE button_type,	uint32_t, 1
	NASMX_RESERVE clicked,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMenuToolButton
	NASMX_RESERVE parent,		int8_t, GtkToolButton_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMenuToolButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkToolButtonClass_size
	NASMX_RESERVE show_menu,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMessageDialog
	NASMX_RESERVE parent_instance,	int8_t, GtkDialog_size
	NASMX_RESERVE image,		uint32_t, 1
	NASMX_RESERVE label,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMessageDialogClass
	NASMX_RESERVE parent_class,	int8_t, GtkDialogClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMountOperation
	NASMX_RESERVE parent_instance,	int8_t, GMountOperation_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkMountOperationClass
	NASMX_RESERVE parent_class,	int8_t, GMountOperationClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkNotebook
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE cur_page,		uint32_t, 1
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE first_tab,	uint32_t, 1
	NASMX_RESERVE focus_tab,	uint32_t, 1
	NASMX_RESERVE menu,		uint32_t, 1
	NASMX_RESERVE event_window,	uint32_t, 1
	NASMX_RESERVE timer,		uint32_t, 1
	NASMX_RESERVE tab_hborder,	uint16_t, 1
	NASMX_RESERVE tab_vborder,	uint16_t, 1
	NASMX_RESERVE show_tabs,	uint32_t, 1
;.homogeneous:		RESD 1
;.show_border:		RESD 1
;.tab_pos:		RESD 1
;.scrollable:		RESD 1
;.in_child:		RESD 1
;.click_child:		RESD 1
;.button:		RESD 1
;.need_timer:		RESD 1
;.child_has_focus:	RESD 1
;.have_visible_child:	RESD 1
;.focus_out:		RESD 1
;.has_before_previous:	RESD 1
;.has_before_next:	RESD 1
;.has_after_previous:	RESD 1
;.has_after_next:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkNotebookClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE switch_page,	uint32_t, 1
	NASMX_RESERVE select_page,	uint32_t, 1
	NASMX_RESERVE focus_tab,	uint32_t, 1
	NASMX_RESERVE change_current_page,	uint32_t, 1
	NASMX_RESERVE move_focus_out,	uint32_t, 1
	NASMX_RESERVE reorder_tab,	uint32_t, 1
	NASMX_RESERVE insert_page,	uint32_t, 1
	NASMX_RESERVE create_window,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkOffscreenWindow
	NASMX_RESERVE parent_object,	int8_t, GtkWindow_size
NASMX_ENDSTRUC

NASMX_STRUC GtkOffscreenWindowClass
	NASMX_RESERVE parent_class,	int8_t, GtkWindowClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkOrientableIface
	NASMX_RESERVE base_iface,	int8_t, GTypeInterface_size
NASMX_ENDSTRUC

NASMX_STRUC GtkSocket
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE request_width,	uint16_t, 1
	NASMX_RESERVE request_height,	uint16_t, 1
	NASMX_RESERVE current_width,	uint16_t, 1
	NASMX_RESERVE current_height,	uint16_t, 1
	NASMX_RESERVE plug_window,	uint32_t, 1
	NASMX_RESERVE plug_widget,	uint32_t, 1
	NASMX_RESERVE xembed_version,	uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
	NASMX_RESERVE same_app,		uint32_t, 1
;.focus_in:	RESD 1
;.have_size:	RESD 1
;.need_map:	RESD 1
;.is_mapped:	RESD 1
;.active:	RESD 1
	NASMX_RESERVE accel_group,	uint32_t, 1
	NASMX_RESERVE toplevel,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSocketClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE plug_added,	uint32_t, 1
	NASMX_RESERVE plug_removed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPlug
	NASMX_RESERVE window,		int8_t, GtkWindow_size
	NASMX_RESERVE socket_window,	uint32_t, 1
	NASMX_RESERVE modality_window,	uint32_t, 1
	NASMX_RESERVE modality_group,	uint32_t, 1
	NASMX_RESERVE grabbed_keys,	uint32_t, 1
	NASMX_RESERVE same_app,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPlugClass
	NASMX_RESERVE parent_class,	int8_t, GtkWindowClass_size
	NASMX_RESERVE embedded,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPageRange
	NASMX_RESERVE start,		uint32_t, 1
	NASMX_RESERVE end,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPrintOperationPreviewIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE ready,		uint32_t, 1
	NASMX_RESERVE got_page_size,	uint32_t, 1
	NASMX_RESERVE render_page,	uint32_t, 1
	NASMX_RESERVE is_selected,	uint32_t, 1
	NASMX_RESERVE end_preview,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved6,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved7,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPrintOperation
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPrintOperationClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE done,		uint32_t, 1
	NASMX_RESERVE begin_print,	uint32_t, 1
	NASMX_RESERVE paginate,		uint32_t, 1
	NASMX_RESERVE request_page_setup,	uint32_t, 1
	NASMX_RESERVE draw_page,	uint32_t, 1
	NASMX_RESERVE end_print,	uint32_t, 1
	NASMX_RESERVE status_changed,	uint32_t, 1
	NASMX_RESERVE create_custom_widget,	uint32_t, 1
	NASMX_RESERVE custom_widget_apply,	uint32_t, 1
	NASMX_RESERVE preview,		uint32_t, 1
	NASMX_RESERVE update_custom_widget,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved6,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkProgress
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE adjustment,	uint32_t, 1
	NASMX_RESERVE offscreen_pixmap,	uint32_t, 1
	NASMX_RESERVE format,		uint32_t, 1
	NASMX_RESERVE x_align,		uint32_t, 1
	NASMX_RESERVE y_align,		uint32_t, 1
	NASMX_RESERVE show_text,	uint32_t, 1
;.activity_mode:	RESD 1
;.use_text_format:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkProgressClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE paint,		uint32_t, 1
	NASMX_RESERVE update,		uint32_t, 1
	NASMX_RESERVE act_mode_enter,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkProgressBar
	NASMX_RESERVE progress,		int8_t, GtkProgress_size
	NASMX_RESERVE bar_style,	uint32_t, 1
	NASMX_RESERVE orientation,	uint32_t, 1
	NASMX_RESERVE blocks,		uint32_t, 1
	NASMX_RESERVE in_block,		uint32_t, 1
	NASMX_RESERVE activity_pos,	uint32_t, 1
	NASMX_RESERVE activity_step,	uint32_t, 1
	NASMX_RESERVE activity_blocks,	uint32_t, 1
	NASMX_RESERVE pulse_fraction,	uint32_t, 1
	NASMX_RESERVE activity_dir,	uint32_t, 1
;.ellipsize:	RESD 1
;.dirty:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkProgressBarClass
	NASMX_RESERVE parent_class,	int8_t, GtkProgressClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToggleAction
	NASMX_RESERVE parent,		int8_t, GtkAction_size
	NASMX_RESERVE private_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToggleActionClass
	NASMX_RESERVE parent_class, 	int8_t, GtkActionClass_size
	NASMX_RESERVE toggled,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRadioAction
	NASMX_RESERVE parent,		int8_t, GtkToggleAction_size
	NASMX_RESERVE private_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRadioActionClass
	NASMX_RESERVE parent_class,	int8_t, GtkToggleActionClass_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRadioButton
	NASMX_RESERVE check_button,	int8_t, GtkCheckButton_size
	NASMX_RESERVE group,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRadioButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkCheckButtonClass_size
	NASMX_RESERVE group_changed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRadioMenuItem
	NASMX_RESERVE check_menu_item,	int8_t, GtkCheckMenuItem_size
	NASMX_RESERVE group,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRadioMenuItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkCheckMenuItemClass_size
	NASMX_RESERVE group_changed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToggleToolButton
	NASMX_RESERVE parent,		int8_t, GtkToolButton_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToggleToolButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkToolButtonClass_size
	NASMX_RESERVE toggled,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRadioToolButton
	NASMX_RESERVE parent,		int8_t, GtkToggleToolButton_size
NASMX_ENDSTRUC

NASMX_STRUC GtkRadioToolButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkToggleToolButtonClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentData
	NASMX_RESERVE display_name,	uint32_t, 1
	NASMX_RESERVE description,	uint32_t, 1
	NASMX_RESERVE mime_type,	uint32_t, 1
	NASMX_RESERVE app_name,		uint32_t, 1
	NASMX_RESERVE app_exec,		uint32_t, 1
	NASMX_RESERVE groups,		uint32_t, 1
	NASMX_RESERVE is_private,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentManager
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentManagerClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE _gtk_recent1,	uint32_t, 1
	NASMX_RESERVE _gtk_recent2,	uint32_t, 1
	NASMX_RESERVE _gtk_recent3,	uint32_t, 1
	NASMX_RESERVE _gtk_recent4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentAction
	NASMX_RESERVE parent_instance,	int8_t, GtkAction_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentActionClass
	NASMX_RESERVE parent_class,	int8_t, GtkActionClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentFilterInfo
	NASMX_RESERVE contains,		uint32_t, 1
	NASMX_RESERVE uri,		uint32_t, 1
	NASMX_RESERVE display_name,	uint32_t, 1
	NASMX_RESERVE mime_type,	uint32_t, 1
	NASMX_RESERVE applications,	uint32_t, 1
	NASMX_RESERVE groups,		uint32_t, 1
	NASMX_RESERVE age,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentChooserIface
	NASMX_RESERVE base_iface,	int8_t, GTypeInterface_size
	NASMX_RESERVE set_current_uri,	uint32_t, 1
	NASMX_RESERVE get_current_uri,	uint32_t, 1
	NASMX_RESERVE select_uri,	uint32_t, 1
	NASMX_RESERVE unselect_uri,	uint32_t, 1
	NASMX_RESERVE select_all,	uint32_t, 1
	NASMX_RESERVE unselect_all,	uint32_t, 1
	NASMX_RESERVE get_items,	uint32_t, 1
	NASMX_RESERVE get_recent_manager,	uint32_t, 1
	NASMX_RESERVE add_filter,	uint32_t, 1
	NASMX_RESERVE remove_filter,	uint32_t, 1
	NASMX_RESERVE list_filters,	uint32_t, 1
	NASMX_RESERVE set_sort_func,	uint32_t, 1
	NASMX_RESERVE item_activated,	uint32_t, 1
	NASMX_RESERVE selection_changed,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentChooserDialog
	NASMX_RESERVE parent_instance,	int8_t, GtkDialog_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentChooserDialogClass
	NASMX_RESERVE parent_class,	int8_t, GtkDialogClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentChooserMenu
	NASMX_RESERVE parent_instance,	int8_t, GtkMenu_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentChooserMenuClass
	NASMX_RESERVE parent_class,	int8_t, GtkMenuClass_size
	NASMX_RESERVE gtk_recent1,	uint32_t, 1
	NASMX_RESERVE gtk_recent2,	uint32_t, 1
	NASMX_RESERVE gtk_recent3,	uint32_t, 1
	NASMX_RESERVE gtk_recent4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentChooserWidget
	NASMX_RESERVE parent_instance,	int8_t, GtkVBox_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkRecentChooserWidgetClass
	NASMX_RESERVE parent_class,	int8_t, GtkVBoxClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkScaleButton
	NASMX_RESERVE parent,		int8_t, GtkButton_size
	NASMX_RESERVE plus_button,	uint32_t, 1
	NASMX_RESERVE minus_button,	uint32_t, 1
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkScaleButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkButtonClass_size
	NASMX_RESERVE value_changed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkVScrollbar
	NASMX_RESERVE scrollbar,	int8_t, GtkScrollbar_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVScrollbarClass
	NASMX_RESERVE parent_class,	int8_t, GtkScrollbarClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkViewport
	NASMX_RESERVE bin,		int8_t, GtkBin_size
	NASMX_RESERVE shadow_type,	uint32_t, 1
	NASMX_RESERVE view_window,	uint32_t, 1
	NASMX_RESERVE bin_window,	uint32_t, 1
	NASMX_RESERVE hadjustment,	uint32_t, 1
	NASMX_RESERVE vadjustment,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkViewportClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE set_scroll_adjustments,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkScrolledWindow
	NASMX_RESERVE container,	int8_t, GtkBin_size
	NASMX_RESERVE hscrollbar,	uint32_t, 1
	NASMX_RESERVE vscrollbar,	uint32_t, 1
	NASMX_RESERVE hscrollbar_policy,	uint32_t, 1
;.vscrollbar_policy:		RESD 1
;.hscrollbar_visible:		RESD 1
;.vscrollbar_visible:		RESD 1
;.window_placement:		RESD 1
;.focus_out:		RESD 1
	NASMX_RESERVE shadow_type,	uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
NASMX_ENDSTRUC

NASMX_STRUC GtkScrolledWindowClass
	NASMX_RESERVE parent_class,	int8_t, GtkBinClass_size
	NASMX_RESERVE scrollbar_spacing,	uint32_t, 1
	NASMX_RESERVE scroll_child,	uint32_t, 1
	NASMX_RESERVE move_focus_out,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSeparatorMenuItem
	NASMX_RESERVE menu_item,	int8_t, GtkMenuItem_size
NASMX_ENDSTRUC

NASMX_STRUC GtkSeparatorMenuItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkMenuItemClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkSeparatorToolItem
	NASMX_RESERVE parent,		int8_t, GtkToolItem_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSeparatorToolItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkToolItemClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSpinButton
	NASMX_RESERVE entry,		int8_t, GtkEntry_size
	NASMX_RESERVE adjustment,	uint32_t, 1
	NASMX_RESERVE panel,		uint32_t, 1
	NASMX_RESERVE timer,		uint32_t, 1
	NASMX_RESERVE climb_rate,	uint32_t, 1
	NASMX_RESERVE timer_step,	uint32_t, 1
	NASMX_RESERVE update_policy,	uint32_t, 1
	NASMX_RESERVE in_child,		uint32_t, 1
;.click_child:		RESD 1
;.button:		RESD 1
;.need_timer:		RESD 1
;.timer_calls:		RESD 1
;.digits:		RESD 1
;.numeric:		RESD 1
;.wrap:		RESD 1
;.snap_to_ticks:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSpinButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkEntryClass_size
	NASMX_RESERVE input,		uint32_t, 1
	NASMX_RESERVE output,		uint32_t, 1
	NASMX_RESERVE value_changed,	uint32_t, 1
	NASMX_RESERVE change_value,	uint32_t, 1
	NASMX_RESERVE wrapped,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSpinner
	NASMX_RESERVE parent,		int8_t, GtkDrawingArea_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkSpinnerClass
	NASMX_RESERVE parent_class,	int8_t, GtkDrawingAreaClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkStatusbar
	NASMX_RESERVE parent_widget,	int8_t, GtkHBox_size
	NASMX_RESERVE frame,		uint32_t, 1
	NASMX_RESERVE label,		uint32_t, 1
	NASMX_RESERVE messages,		uint32_t, 1
	NASMX_RESERVE keys,		uint32_t, 1
	NASMX_RESERVE seq_context_id,	uint32_t, 1
	NASMX_RESERVE seq_message_id,	uint32_t, 1
	NASMX_RESERVE grip_window,	uint32_t, 1
	NASMX_RESERVE has_resize_grip,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkStatusbarClass
	NASMX_RESERVE parent_class,	int8_t, GtkHBoxClass_size
	NASMX_RESERVE reserved,		uint32_t, 1
	NASMX_RESERVE text_pushed,	uint32_t, 1
	NASMX_RESERVE text_popped,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkStatusIcon
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkStatusIconClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE activate,		uint32_t, 1
	NASMX_RESERVE popup_menu,	uint32_t, 1
	NASMX_RESERVE size_changed,	uint32_t, 1
	NASMX_RESERVE button_press_event,	uint32_t, 1
	NASMX_RESERVE button_release_event,	uint32_t, 1
	NASMX_RESERVE scroll_event,	uint32_t, 1
	NASMX_RESERVE query_tooltip,	uint32_t, 1
	NASMX_RESERVE __gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE __gtk_reserved2,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkStockItem
	NASMX_RESERVE stock_id,		uint32_t, 1
	NASMX_RESERVE label,		uint32_t, 1
	NASMX_RESERVE modifier,		uint32_t, 1
	NASMX_RESERVE keyval,		uint32_t, 1
	NASMX_RESERVE translation_domain,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTable
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE rows,		uint32_t, 1
	NASMX_RESERVE cols,		uint32_t, 1
	NASMX_RESERVE nrows,		uint16_t, 1
	NASMX_RESERVE ncols,		uint16_t, 1
	NASMX_RESERVE column_spacing,	uint16_t, 1
	NASMX_RESERVE row_spacing,	uint16_t, 1
	NASMX_RESERVE homogeneous,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTableClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkTableChild
	NASMX_RESERVE widget,		uint32_t, 1
	NASMX_RESERVE left_attach,	uint16_t, 1
	NASMX_RESERVE right_attach,	uint16_t, 1
	NASMX_RESERVE top_attach,	uint16_t, 1
	NASMX_RESERVE bottom_attach,	uint16_t, 1
	NASMX_RESERVE xpadding,		uint16_t, 1
	NASMX_RESERVE ypadding,		uint16_t, 1
	NASMX_RESERVE xexpand,		uint32_t, 1
;.yexpand:		RESD 1
;.xshrink:		RESD 1
;.yshrink:		RESD 1
;.xfill:		RESD 1
;.yfill:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTableRowCol
	NASMX_RESERVE requisition,	uint16_t, 1
	NASMX_RESERVE allocation,	uint16_t, 1
	NASMX_RESERVE spacing,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
	NASMX_RESERVE need_expand,	uint32_t, 1
;.need_shrink:		RESD 1
;.expand:		RESD 1
;.shrink:		RESD 1
;.empty:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTearoffMenuItem
	NASMX_RESERVE menu_item,	int8_t, GtkMenuItem_size
	NASMX_RESERVE torn_off,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTearoffMenuItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkMenuItemClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextTagTable
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE hash,		uint32_t, 1
	NASMX_RESERVE anonymous,	uint32_t, 1
	NASMX_RESERVE anon_count,	uint32_t, 1
	NASMX_RESERVE buffers,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextTagTableClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE tag_changed,	uint32_t, 1
	NASMX_RESERVE tag_added,	uint32_t, 1
	NASMX_RESERVE tag_removed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextMark
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE segment,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextMarkClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextBuffer
	NASMX_RESERVE parent_instance,	int8_t, GObject_size
	NASMX_RESERVE tag_table,	uint32_t, 1
	NASMX_RESERVE btree,		uint32_t, 1
	NASMX_RESERVE clipboard_contents_buffers,	uint32_t, 1
	NASMX_RESERVE selection_clipboards,	uint32_t, 1
	NASMX_RESERVE log_attr_cache,	uint32_t, 1
	NASMX_RESERVE user_action_count,	uint32_t, 1
	NASMX_RESERVE modified,		uint32_t, 1
;.has_selection:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextBufferClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE insert_text,	uint32_t, 1
	NASMX_RESERVE insert_pixbuf,	uint32_t, 1
	NASMX_RESERVE insert_child_anchor,	uint32_t, 1
	NASMX_RESERVE delete_range,	uint32_t, 1
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE modified_changed,	uint32_t, 1
	NASMX_RESERVE mark_set,		uint32_t, 1
	NASMX_RESERVE mark_deleted,	uint32_t, 1
	NASMX_RESERVE apply_tag,	uint32_t, 1
	NASMX_RESERVE remove_tag,	uint32_t, 1
	NASMX_RESERVE begin_user_action,	uint32_t, 1
	NASMX_RESERVE end_user_action,	uint32_t, 1
	NASMX_RESERVE paste_done,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextView
	NASMX_RESERVE parent_instance,	int8_t, GtkContainer_size
	NASMX_RESERVE layout,		uint32_t, 1
	NASMX_RESERVE buffer,		uint32_t, 1
	NASMX_RESERVE selection_drag_handler,	uint32_t, 1
	NASMX_RESERVE scroll_timeout,	uint32_t, 1
	NASMX_RESERVE pixels_above_lines,	uint32_t, 1
	NASMX_RESERVE pixels_below_lines,	uint32_t, 1
	NASMX_RESERVE pixels_inside_wrap,	uint32_t, 1
	NASMX_RESERVE wrap_mode,	uint32_t, 1
	NASMX_RESERVE justify,		uint32_t, 1
	NASMX_RESERVE left_margin,	uint32_t, 1
	NASMX_RESERVE right_margin,	uint32_t, 1
	NASMX_RESERVE indent,		uint32_t, 1
	NASMX_RESERVE tabs,		uint32_t, 1
	NASMX_RESERVE editable,		uint32_t, 1
;.overwrite_mode:	RESD 1
;.cursor_visible:	RESD 1
;.need_im_reset:	RESD 1
;.accepts_tab:		RESD 1
;.width_changed:	RESD 1
;.onscreen_validated:	RESD 1
;.mouse_cursor_obscured:	RESD 1
	NASMX_RESERVE text_window,	uint32_t, 1
	NASMX_RESERVE left_window,	uint32_t, 1
	NASMX_RESERVE right_window,	uint32_t, 1
	NASMX_RESERVE top_window,	uint32_t, 1
	NASMX_RESERVE bottom_window,	uint32_t, 1
	NASMX_RESERVE hadjustment,	uint32_t, 1
	NASMX_RESERVE vadjustment,	uint32_t, 1
	NASMX_RESERVE xoffset,		uint32_t, 1
	NASMX_RESERVE yoffset,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE virtual_cursor_x,	uint32_t, 1
	NASMX_RESERVE virtual_cursor_y,	uint32_t, 1
	NASMX_RESERVE first_para_mark,	uint32_t, 1
	NASMX_RESERVE first_para_pixels,	uint32_t, 1
	NASMX_RESERVE dnd_mark,		uint32_t, 1
	NASMX_RESERVE blink_timeout,	uint32_t, 1
	NASMX_RESERVE first_validate_idle,	uint32_t, 1
	NASMX_RESERVE incremental_validate_idle,	uint32_t, 1
	NASMX_RESERVE im_context,	uint32_t, 1
	NASMX_RESERVE popup_menu,	uint32_t, 1
	NASMX_RESERVE drag_start_x,	uint32_t, 1
	NASMX_RESERVE drag_start_y,	uint32_t, 1
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE pending_scroll,	uint32_t, 1
	NASMX_RESERVE pending_place_cursor_button,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTextViewClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE set_scroll_adjustments,	uint32_t, 1
	NASMX_RESERVE populate_popup,	uint32_t, 1
	NASMX_RESERVE move_cursor,	uint32_t, 1
	NASMX_RESERVE page_horizontally,	uint32_t, 1
	NASMX_RESERVE set_anchor,	uint32_t, 1
	NASMX_RESERVE insert_at_cursor,	uint32_t, 1
	NASMX_RESERVE delete_from_cursor,	uint32_t, 1
	NASMX_RESERVE backspace,	uint32_t, 1
	NASMX_RESERVE cut_clipboard,	uint32_t, 1
	NASMX_RESERVE copy_clipboard,	uint32_t, 1
	NASMX_RESERVE paste_clipboard,	uint32_t, 1
	NASMX_RESERVE toggle_overwrite,	uint32_t, 1
	NASMX_RESERVE move_focus,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved6,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved7,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPixmap
	NASMX_RESERVE misc,		int8_t, GtkMisc_size
	NASMX_RESERVE pixmap,		uint32_t, 1
	NASMX_RESERVE mask,		uint32_t, 1
	NASMX_RESERVE pixmap_insensitive,	uint32_t, 1
	NASMX_RESERVE build_insensitive,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPixmapClass
	NASMX_RESERVE parent_class,	int8_t, GtkMiscClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkToolbarChild
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE widget,		uint32_t, 1
	NASMX_RESERVE icon,		uint32_t, 1
	NASMX_RESERVE label,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolbar
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE num_children,	uint32_t, 1
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE orientation,	uint32_t, 1
	NASMX_RESERVE style,		uint32_t, 1
	NASMX_RESERVE icon_size,	uint32_t, 1
	NASMX_RESERVE tooltips,		uint32_t, 1
	NASMX_RESERVE button_maxw,	uint32_t, 1
	NASMX_RESERVE button_maxh,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE style_set,	uint32_t, 1
;.icon_size_set:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolbarClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE orientation_changed,	uint32_t, 1
	NASMX_RESERVE style_changed,	uint32_t, 1
	NASMX_RESERVE popup_context_menu,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolItemGroup
	NASMX_RESERVE parent_instance,	int8_t, GtkContainer_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolItemGroupClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkToolPalette
	NASMX_RESERVE parent_instance,	int8_t, GtkContainer_size
	NASMX_RESERVE priv,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolPaletteClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE set_scroll_adjustments,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved5,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved6,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkToolShellIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE get_icon_size,	uint32_t, 1
	NASMX_RESERVE get_orientation,	uint32_t, 1
	NASMX_RESERVE get_style,	uint32_t, 1
	NASMX_RESERVE get_relief_style,	uint32_t, 1
	NASMX_RESERVE rebuild_menu,	uint32_t, 1
	NASMX_RESERVE get_text_orientation,	uint32_t, 1
	NASMX_RESERVE get_text_alignment,	uint32_t, 1
	NASMX_RESERVE get_ellipsize_mode,	uint32_t, 1
	NASMX_RESERVE get_text_size_group,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeDragSourceIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE row_draggable,	uint32_t, 1
	NASMX_RESERVE drag_data_get,	uint32_t, 1
	NASMX_RESERVE drag_data_delete,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeDragDestIface
	NASMX_RESERVE g_iface,		int8_t, GTypeInterface_size
	NASMX_RESERVE drag_data_received,	uint32_t, 1
	NASMX_RESERVE row_drop_possible,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeModelSort
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE root,		uint32_t, 1
	NASMX_RESERVE stamp,		uint32_t, 1
	NASMX_RESERVE child_flags,	uint32_t, 1
	NASMX_RESERVE child_model,	uint32_t, 1
	NASMX_RESERVE zero_ref_count,	uint32_t, 1
	NASMX_RESERVE sort_list,	uint32_t, 1
	NASMX_RESERVE sort_column_id,	uint32_t, 1
	NASMX_RESERVE order,		uint32_t, 1
	NASMX_RESERVE default_sort_func,	uint32_t, 1
	NASMX_RESERVE default_sort_data,	uint32_t, 1
	NASMX_RESERVE default_sort_destroy,	uint32_t, 1
	NASMX_RESERVE changed_id,	uint32_t, 1
	NASMX_RESERVE inserted_id,	uint32_t, 1
	NASMX_RESERVE has_child_toggled_id,	uint32_t, 1
	NASMX_RESERVE deleted_id,	uint32_t, 1
	NASMX_RESERVE reordered_id,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeModelSortClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeSelection
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE tree_view,	uint32_t, 1
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE user_func,	uint32_t, 1
	NASMX_RESERVE user_data,	uint32_t, 1
	NASMX_RESERVE destroy,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeSelectionClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeStore
	NASMX_RESERVE parent,		int8_t, GObject_size
	NASMX_RESERVE stamp,		uint32_t, 1
	NASMX_RESERVE root,		uint32_t, 1
	NASMX_RESERVE last,		uint32_t, 1
	NASMX_RESERVE n_columns,	uint32_t, 1
	NASMX_RESERVE sort_column_id,	uint32_t, 1
	NASMX_RESERVE sort_list,	uint32_t, 1
	NASMX_RESERVE order,		uint32_t, 1
	NASMX_RESERVE column_headers,	uint32_t, 1
	NASMX_RESERVE default_sort_func,	uint32_t, 1
	NASMX_RESERVE default_sort_data,	uint32_t, 1
	NASMX_RESERVE default_sort_destroy,	uint32_t, 1
	NASMX_RESERVE columns_dirty,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTreeStoreClass
	NASMX_RESERVE parent_class,	int8_t, GObjectClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkVButtonBox
	NASMX_RESERVE button_box,	int8_t, GtkButtonBox_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVButtonBoxClass
	NASMX_RESERVE parent_class,	int8_t, GtkButtonBoxClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVolumeButton
	NASMX_RESERVE parent,		int8_t, GtkScaleButton_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVolumeButtonClass
	NASMX_RESERVE parent_class,	int8_t, GtkScaleButtonClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkVPaned
	NASMX_RESERVE paned,		int8_t, GtkPaned_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVPanedClass
	NASMX_RESERVE parent_class,	int8_t, GtkPanedClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVRuler
	NASMX_RESERVE ruler,		int8_t, GtkRuler_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVRulerClass
	NASMX_RESERVE parent_class,	int8_t, GtkRulerClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVScale
	NASMX_RESERVE scale,		int8_t, GtkScale_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVScaleClass
	NASMX_RESERVE parent_class,	int8_t, GtkScaleClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVSeparator
	NASMX_RESERVE separator,	int8_t, GtkSeparator_size
NASMX_ENDSTRUC

NASMX_STRUC GtkVSeparatorClass
	NASMX_RESERVE parent_class,	int8_t, GtkSeparatorClass_size
NASMX_ENDSTRUC

NASMX_STRUC GtkCListCellInfo
	NASMX_RESERVE row,		uint32_t, 1
	NASMX_RESERVE column,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCListDestInfo
	NASMX_RESERVE cell,		int8_t, GtkCListCellInfo_size
	NASMX_RESERVE insert_pos,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCList
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE flags,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
	NASMX_RESERVE reserved1,	uint32_t, 1
	NASMX_RESERVE reserved2,	uint32_t, 1
	NASMX_RESERVE freeze_count,	uint32_t, 1
	NASMX_RESERVE internal_allocation,	int8_t, GdkRectangle_size
	NASMX_RESERVE rows,		uint32_t, 1
	NASMX_RESERVE row_height,	uint32_t, 1
	NASMX_RESERVE row_list,		uint32_t, 1
	NASMX_RESERVE row_list_end,	uint32_t, 1
	NASMX_RESERVE columns,		uint32_t, 1
	NASMX_RESERVE column_title_area,	int8_t, GdkRectangle_size
	NASMX_RESERVE title_window,	uint32_t, 1
	NASMX_RESERVE column,		uint32_t, 1
	NASMX_RESERVE clist_window,	uint32_t, 1
	NASMX_RESERVE clist_window_width,	uint32_t, 1
	NASMX_RESERVE clist_window_height,	uint32_t, 1
	NASMX_RESERVE hoffset,		uint32_t, 1
	NASMX_RESERVE voffset,		uint32_t, 1
	NASMX_RESERVE shadow_type,	uint32_t, 1
	NASMX_RESERVE selection_mode,	uint32_t, 1
	NASMX_RESERVE selection,	uint32_t, 1
	NASMX_RESERVE selection_end,	uint32_t, 1
	NASMX_RESERVE undo_selection,	uint32_t, 1
	NASMX_RESERVE undo_unselection,	uint32_t, 1
	NASMX_RESERVE undo_anchor,	uint32_t, 1
	NASMX_RESERVE button_actions,	int8_t, 5
	NASMX_RESERVE drag_button,	int8_t, 1
	NASMX_RESERVE __PADDING2__,	int8_t, 2
	NASMX_RESERVE click_cell,	int8_t, GtkCListCellInfo_size
	NASMX_RESERVE hadjustment,	uint32_t, 1
	NASMX_RESERVE vadjustment,	uint32_t, 1
	NASMX_RESERVE xor_gc,		uint32_t, 1
	NASMX_RESERVE fg_gc,		uint32_t, 1
	NASMX_RESERVE bg_gc,		uint32_t, 1
	NASMX_RESERVE cursor_drag,	uint32_t, 1
	NASMX_RESERVE x_drag,		uint32_t, 1
	NASMX_RESERVE focus_row,	uint32_t, 1
	NASMX_RESERVE focus_header_column,	uint32_t, 1
	NASMX_RESERVE anchor,		uint32_t, 1
	NASMX_RESERVE anchor_state,	uint32_t, 1
	NASMX_RESERVE drag_pos,		uint32_t, 1
	NASMX_RESERVE htimer,		uint32_t, 1
	NASMX_RESERVE vtimer,		uint32_t, 1
	NASMX_RESERVE sort_type,	uint32_t, 1
	NASMX_RESERVE compare,		uint32_t, 1
	NASMX_RESERVE sort_column,	uint32_t, 1
	NASMX_RESERVE drag_highlight_row,	uint32_t, 1
	NASMX_RESERVE drag_highlight_pos,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCListClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE set_scroll_adjustments,	uint32_t, 1
	NASMX_RESERVE refresh,		uint32_t, 1
	NASMX_RESERVE select_row,	uint32_t, 1
	NASMX_RESERVE unselect_row,	uint32_t, 1
	NASMX_RESERVE row_move,		uint32_t, 1
	NASMX_RESERVE click_column,	uint32_t, 1
	NASMX_RESERVE resize_column,	uint32_t, 1
	NASMX_RESERVE toggle_focus_row,	uint32_t, 1
	NASMX_RESERVE select_all,	uint32_t, 1
	NASMX_RESERVE unselect_all,	uint32_t, 1
	NASMX_RESERVE undo_selection,	uint32_t, 1
	NASMX_RESERVE start_selection,	uint32_t, 1
	NASMX_RESERVE end_selection,	uint32_t, 1
	NASMX_RESERVE extend_selection,	uint32_t, 1
	NASMX_RESERVE scroll_horizontal,	uint32_t, 1
	NASMX_RESERVE scroll_vertical,	uint32_t, 1
	NASMX_RESERVE toggle_add_mode,	uint32_t, 1
	NASMX_RESERVE abort_column_resize,	uint32_t, 1
	NASMX_RESERVE resync_selection,	uint32_t, 1
	NASMX_RESERVE selection_find,	uint32_t, 1
	NASMX_RESERVE draw_row,		uint32_t, 1
	NASMX_RESERVE draw_drag_highlight,	uint32_t, 1
	NASMX_RESERVE clear,		uint32_t, 1
	NASMX_RESERVE fake_unselect_all,	uint32_t, 1
	NASMX_RESERVE sort_list,	uint32_t, 1
	NASMX_RESERVE insert_row,	uint32_t, 1
	NASMX_RESERVE remove_row,	uint32_t, 1
	NASMX_RESERVE set_cell_contents,	uint32_t, 1
	NASMX_RESERVE cell_size_request,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCListColumn
	NASMX_RESERVE title,		uint32_t, 1
	NASMX_RESERVE area,		int8_t, GdkRectangle_size
	NASMX_RESERVE button,		uint32_t, 1
	NASMX_RESERVE window,		uint32_t, 1
	NASMX_RESERVE width,		uint32_t, 1
	NASMX_RESERVE min_width,	uint32_t, 1
	NASMX_RESERVE max_width,	uint32_t, 1
	NASMX_RESERVE justification,	uint32_t, 1
	NASMX_RESERVE visible,		uint32_t, 1
;.width_set:		RESD 1
;.resizeable:		RESD 1
;.auto_resize:		RESD 1
;.button_passive:	RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCListRow
	NASMX_RESERVE cell,		uint32_t, 1
	NASMX_RESERVE state,		uint32_t, 1
	NASMX_RESERVE foreground,	int8_t, GdkColor_size
	NASMX_RESERVE background,	int8_t, GdkColor_size
	NASMX_RESERVE style,		uint32_t, 1
	NASMX_RESERVE data,		uint32_t, 1
	NASMX_RESERVE destroy,		uint32_t, 1
	NASMX_RESERVE fg_set,		uint32_t, 1
;.bg_set:		RESD 1
;.selectable:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellText
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE vertical,		uint16_t, 1
	NASMX_RESERVE horizontal,	uint16_t, 1
	NASMX_RESERVE style,		uint32_t, 1
	NASMX_RESERVE text,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellPixmap
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE vertical,		uint16_t, 1
	NASMX_RESERVE horizontal,	uint16_t, 1
	NASMX_RESERVE style,		uint32_t, 1
	NASMX_RESERVE pixmap,		uint32_t, 1
	NASMX_RESERVE mask,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellPixText
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE vertical,		uint16_t, 1
	NASMX_RESERVE horizontal,	uint16_t, 1
	NASMX_RESERVE style,		uint32_t, 1
	NASMX_RESERVE text,		uint32_t, 1
	NASMX_RESERVE spacing,		int8_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 3
	NASMX_RESERVE pixmap,		uint32_t, 1
	NASMX_RESERVE mask,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCellWidget
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE vertical,		uint16_t, 1
	NASMX_RESERVE horizontal,	uint16_t, 1
	NASMX_RESERVE style,		uint32_t, 1
	NASMX_RESERVE widget,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCell
	NASMX_RESERVE type,		uint32_t, 1
	NASMX_RESERVE vertical,		uint16_t, 1
	NASMX_RESERVE horizontal,	uint16_t, 1
	NASMX_RESERVE style,		uint32_t, 1

;;union {
;;    gchar *text;
;;    struct {
;;      GdkPixmap *pixmap;
;;      GdkBitmap *mask;
;;    } pm;
;;    struct {
;;      gchar *text;
;;      guint8 spacing;
;;      GdkPixmap *pixmap;
;;      GdkBitmap *mask;
;;    } pt;
;;    GtkWidget *widget;
;;  } u;
	NASMX_RESERVE u_union,	uint32_t, 4
NASMX_ENDSTRUC

NASMX_STRUC GtkCTree
	NASMX_RESERVE clist,		int8_t, GtkCList_size
	NASMX_RESERVE lines_gc,		uint32_t, 1
	NASMX_RESERVE tree_indent,	uint32_t, 1
	NASMX_RESERVE tree_spacing,	uint32_t, 1
	NASMX_RESERVE tree_column,	uint32_t, 1
	NASMX_RESERVE line_style,	uint32_t, 1
;.expander_style:	RESD 1
;.show_stub:		RESD 1
	NASMX_RESERVE drag_compare,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCTreeClass
	NASMX_RESERVE parent_class,	int8_t, GtkCListClass_size
	NASMX_RESERVE tree_select_row,	uint32_t, 1
	NASMX_RESERVE tree_unselect_row,	uint32_t, 1
	NASMX_RESERVE tree_expand,	uint32_t, 1
	NASMX_RESERVE tree_collapse,	uint32_t, 1
	NASMX_RESERVE tree_move,	uint32_t, 1
	NASMX_RESERVE change_focus_row_expansion,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCTreeRow
	NASMX_RESERVE row,		int8_t, GtkCListRow_size
	NASMX_RESERVE parent,		uint32_t, 1
	NASMX_RESERVE sibling,		uint32_t, 1
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE pixmap_closed,	uint32_t, 1
	NASMX_RESERVE mask_closed,	uint32_t, 1
	NASMX_RESERVE pixmap_opened,	uint32_t, 1
	NASMX_RESERVE mask_opened,	uint32_t, 1
	NASMX_RESERVE level,		uint16_t, 1
	NASMX_RESERVE __PADDING1__,	int8_t, 2
	NASMX_RESERVE is_leaf,		uint32_t, 1
;.expanded:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCurve
	NASMX_RESERVE graph,		int8_t, GtkDrawingArea_size
	NASMX_RESERVE cursor_type,	uint32_t, 1
	NASMX_RESERVE min_x,		uint32_t, 1
	NASMX_RESERVE max_x,		uint32_t, 1
	NASMX_RESERVE min_y,		uint32_t, 1
	NASMX_RESERVE max_y,		uint32_t, 1
	NASMX_RESERVE pixmap,		uint32_t, 1
	NASMX_RESERVE curve_type,	uint32_t, 1
	NASMX_RESERVE height,		uint32_t, 1
	NASMX_RESERVE grab_point,	uint32_t, 1
	NASMX_RESERVE last,		uint32_t, 1
	NASMX_RESERVE num_points,	uint32_t, 1
	NASMX_RESERVE point,		uint32_t, 1
	NASMX_RESERVE num_ctlpoints,	uint32_t, 1
	NASMX_RESERVE ctlpoint,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkCurveClass
	NASMX_RESERVE parent_class,	int8_t, GtkDrawingAreaClass_size
	NASMX_RESERVE curve_type_changed,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFileSelection
	NASMX_RESERVE parent_instance,	int8_t, GtkDialog_size
	NASMX_RESERVE dir_list,		uint32_t, 1
	NASMX_RESERVE file_list,	uint32_t, 1
	NASMX_RESERVE selection_entry,	uint32_t, 1
	NASMX_RESERVE selection_text,	uint32_t, 1
	NASMX_RESERVE main_vbox,	uint32_t, 1
	NASMX_RESERVE ok_button,	uint32_t, 1
	NASMX_RESERVE cancel_button,	uint32_t, 1
	NASMX_RESERVE help_button,	uint32_t, 1
	NASMX_RESERVE history_pulldown,	uint32_t, 1
	NASMX_RESERVE history_menu,	uint32_t, 1
	NASMX_RESERVE history_list,	uint32_t, 1
	NASMX_RESERVE fileop_dialog,	uint32_t, 1
	NASMX_RESERVE fileop_entry,	uint32_t, 1
	NASMX_RESERVE fileop_file,	uint32_t, 1
	NASMX_RESERVE cmpl_state,	uint32_t, 1
	NASMX_RESERVE fileop_c_dir,	uint32_t, 1
	NASMX_RESERVE fileop_del_file,	uint32_t, 1
	NASMX_RESERVE fileop_ren_file,	uint32_t, 1
	NASMX_RESERVE button_area,	uint32_t, 1
	NASMX_RESERVE action_area,	uint32_t, 1
	NASMX_RESERVE selected_names,	uint32_t, 1
	NASMX_RESERVE last_selected,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkFileSelectionClass
	NASMX_RESERVE parent_class,	int8_t, GtkDialogClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkGammaCurve
	NASMX_RESERVE vbox,		int8_t, GtkVBox_size
	NASMX_RESERVE table,		uint32_t, 1
	NASMX_RESERVE curve,		uint32_t, 1
	NASMX_RESERVE button,		uint32_t, 1
	NASMX_RESERVE gamma,		uint32_t, 1
	NASMX_RESERVE gamma_dialog,	uint32_t, 1
	NASMX_RESERVE gamma_text,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkGammaCurveClass
	NASMX_RESERVE parent_class,	int8_t, GtkVBoxClass_size
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkInputDialog
	NASMX_RESERVE dialog,		int8_t, GtkDialog_size
	NASMX_RESERVE axis_list,	uint32_t, 1
	NASMX_RESERVE axis_listbox,	uint32_t, 1
	NASMX_RESERVE mode_optionmenu,	uint32_t, 1
	NASMX_RESERVE close_button,	uint32_t, 1
	NASMX_RESERVE save_button,	uint32_t, 1
	NASMX_RESERVE axis_items,	uint32_t, 1
	NASMX_RESERVE current_device,	uint32_t, 1
	NASMX_RESERVE keys_list,	uint32_t, 1
	NASMX_RESERVE keys_listbox,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkInputDialogClass
	NASMX_RESERVE parent_class,	int8_t, GtkDialogClass_size
	NASMX_RESERVE enable_device,	uint32_t, 1
	NASMX_RESERVE disable_device,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkItemFactory
	NASMX_RESERVE object,		int8_t, GtkObject_size
	NASMX_RESERVE path,		uint32_t, 1
	NASMX_RESERVE accel_group,	uint32_t, 1
	NASMX_RESERVE widget,		uint32_t, 1
	NASMX_RESERVE items,		uint32_t, 1
	NASMX_RESERVE translate_func,	uint32_t, 1
	NASMX_RESERVE translate_data,	uint32_t, 1
	NASMX_RESERVE translate_notify,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkItemFactoryClass
	NASMX_RESERVE object_class,	int8_t, GtkObjectClass_size
	NASMX_RESERVE item_ht,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkItemFactoryEntry
	NASMX_RESERVE path,		uint32_t, 1
	NASMX_RESERVE accelerator,	uint32_t, 1
	NASMX_RESERVE callback,		uint32_t, 1
	NASMX_RESERVE callback_action,	uint32_t, 1
	NASMX_RESERVE item_type,	uint32_t, 1
	NASMX_RESERVE extra_data,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkItemFactoryItem
	NASMX_RESERVE path,		uint32_t, 1
	NASMX_RESERVE widgets,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkList
	NASMX_RESERVE container,	int8_t, GtkContainer_size
	NASMX_RESERVE children,		uint32_t, 1
	NASMX_RESERVE selection,	uint32_t, 1
	NASMX_RESERVE undo_selection,	uint32_t, 1
	NASMX_RESERVE undo_unselection,	uint32_t, 1
	NASMX_RESERVE last_focus_child,	uint32_t, 1
	NASMX_RESERVE undo_focus_child,	uint32_t, 1
	NASMX_RESERVE htimer,		uint32_t, 1
	NASMX_RESERVE vtimer,		uint32_t, 1
	NASMX_RESERVE anchor,		uint32_t, 1
	NASMX_RESERVE drag_pos,		uint32_t, 1
	NASMX_RESERVE anchor_state,	uint32_t, 1
	NASMX_RESERVE selection_mode,	uint32_t, 1
;.drag_selection:	RESD 1
;.add_mode:		RESD 1
NASMX_ENDSTRUC

NASMX_STRUC GtkListClass
	NASMX_RESERVE parent_class,	int8_t, GtkContainerClass_size
	NASMX_RESERVE selection_changed,	uint32_t, 1
	NASMX_RESERVE select_child,	uint32_t, 1
	NASMX_RESERVE unselect_child,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkListItem
	NASMX_RESERVE item,		int8_t, GtkItem_size
NASMX_ENDSTRUC

NASMX_STRUC GtkListItemClass
	NASMX_RESERVE parent_class,	int8_t, GtkItemClass_size
	NASMX_RESERVE toggle_focus_row,	uint32_t, 1
	NASMX_RESERVE select_all,	uint32_t, 1
	NASMX_RESERVE unselect_all,	uint32_t, 1
	NASMX_RESERVE undo_selection,	uint32_t, 1
	NASMX_RESERVE start_selection,	uint32_t, 1
	NASMX_RESERVE end_selection,	uint32_t, 1
	NASMX_RESERVE extend_selection,	uint32_t, 1
	NASMX_RESERVE scroll_horizontal,	uint32_t, 1
	NASMX_RESERVE scroll_vertical,	uint32_t, 1
	NASMX_RESERVE toggle_add_mode,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkOldEditable
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE current_pos,	uint32_t, 1
	NASMX_RESERVE selection_start_pos,	uint32_t, 1
	NASMX_RESERVE selection_end_pos,	uint32_t, 1
	NASMX_RESERVE has_selection,	uint32_t, 1
;.editable:		RESD 1
;.visible:		RESD 1
	NASMX_RESERVE clipboard_text,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkOldEditableClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE activate,		uint32_t, 1
	NASMX_RESERVE set_editable,	uint32_t, 1
	NASMX_RESERVE move_cursor,	uint32_t, 1
	NASMX_RESERVE move_word,	uint32_t, 1
	NASMX_RESERVE move_page,	uint32_t, 1
	NASMX_RESERVE move_to_row,	uint32_t, 1
	NASMX_RESERVE move_to_column,	uint32_t, 1
	NASMX_RESERVE kill_char,	uint32_t, 1
	NASMX_RESERVE kill_word,	uint32_t, 1
	NASMX_RESERVE kill_line,	uint32_t, 1
	NASMX_RESERVE cut_clipboard,	uint32_t, 1
	NASMX_RESERVE copy_clipboard,	uint32_t, 1
	NASMX_RESERVE paste_clipboard,	uint32_t, 1
	NASMX_RESERVE update_text,	uint32_t, 1
	NASMX_RESERVE get_chars,	uint32_t, 1
	NASMX_RESERVE set_selection,	uint32_t, 1
	NASMX_RESERVE set_position,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkOptionMenu
	NASMX_RESERVE button,		int8_t, GtkButton_size
	NASMX_RESERVE menu,		uint32_t, 1
	NASMX_RESERVE menu_item,	uint32_t, 1
	NASMX_RESERVE width,		uint16_t, 1
	NASMX_RESERVE height,		uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkOptionMenuClass
	NASMX_RESERVE parent_class,	int8_t, GtkButtonClass_size
	NASMX_RESERVE changed,		uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPreview
	NASMX_RESERVE widget,		int8_t, GtkWidget_size
	NASMX_RESERVE buffer,		uint32_t, 1
	NASMX_RESERVE buffer_width,	uint16_t, 1
	NASMX_RESERVE buffer_height,	uint16_t, 1
	NASMX_RESERVE bpp,		uint16_t, 1
	NASMX_RESERVE rowstride,	uint16_t, 1
	NASMX_RESERVE dither,		uint32_t, 1
	NASMX_RESERVE type,		uint32_t, 1
;.expand:		RESD 1	
NASMX_ENDSTRUC

NASMX_STRUC GtkPreviewInfo
	NASMX_RESERVE lookup,		uint32_t, 1
	NASMX_RESERVE gamma,		uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkPreviewClass
	NASMX_RESERVE parent_class,	int8_t, GtkWidgetClass_size
	NASMX_RESERVE info,		int8_t, GtkPreviewInfo_size
NASMX_ENDSTRUC

NASMX_STRUC GtkTipsQuery
	NASMX_RESERVE label,		int8_t, GtkLabel_size
	NASMX_RESERVE emit_always,	uint32_t, 1
;.in_query:		RESD 1
	NASMX_RESERVE label_inactive,	uint32_t, 1
	NASMX_RESERVE label_no_tip,	uint32_t, 1
	NASMX_RESERVE caller,		uint32_t, 1
	NASMX_RESERVE last_crossed,	uint32_t, 1
	NASMX_RESERVE query_cursor,	uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC GtkTipsQueryClass
	NASMX_RESERVE parent_class,	int8_t, GtkLabelClass_size
	NASMX_RESERVE start_query,	uint32_t, 1
	NASMX_RESERVE stop_query,	uint32_t, 1
	NASMX_RESERVE widget_entered,	uint32_t, 1
	NASMX_RESERVE widget_selected,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved1,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved2,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved3,	uint32_t, 1
	NASMX_RESERVE _gtk_reserved4,	uint32_t, 1
NASMX_ENDSTRUC


;;enum GUserDirectory
%define G_USER_DIRECTORY_PICTURES 	 4
%define G_USER_DIRECTORY_DESKTOP 	 0
%define G_USER_N_DIRECTORIES 	 8
%define G_USER_DIRECTORY_MUSIC 	 3
%define G_USER_DIRECTORY_PUBLIC_SHARE 	 5
%define G_USER_DIRECTORY_DOCUMENTS 	 1
%define G_USER_DIRECTORY_DOWNLOAD 	 2
%define G_USER_DIRECTORY_VIDEOS 	 7
%define G_USER_DIRECTORY_TEMPLATES 	 6

;;enum GThreadError
%define G_THREAD_ERROR_AGAIN 	 0

;;enum GThreadPriority
%define G_THREAD_PRIORITY_NORMAL 	 1
%define G_THREAD_PRIORITY_LOW 	 0
%define G_THREAD_PRIORITY_HIGH 	 2
%define G_THREAD_PRIORITY_URGENT 	 3

;;enum GOnceStatus
%define G_ONCE_STATUS_READY 	 2
%define G_ONCE_STATUS_NOTCALLED 	 0
%define G_ONCE_STATUS_PROGRESS 	 1

;;enum GBookmarkFileError
%define G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND 	 3
%define G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING 	 5
%define G_BOOKMARK_FILE_ERROR_INVALID_VALUE 	 1
%define G_BOOKMARK_FILE_ERROR_INVALID_URI 	 0
%define G_BOOKMARK_FILE_ERROR_READ 	 4
%define G_BOOKMARK_FILE_ERROR_WRITE 	 6
%define G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED 	 2
%define G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND 	 7

;;enum GSliceConfig
%define G_SLICE_CONFIG_CHUNK_SIZES 	 3
%define G_SLICE_CONFIG_WORKING_SET_MSECS 	 1
%define G_SLICE_CONFIG_CONTENTION_COUNTER 	 4
%define G_SLICE_CONFIG_ALWAYS_MALLOC 	 1
%define G_SLICE_CONFIG_BYPASS_MAGAZINES 	 0
%define G_SLICE_CONFIG_COLOR_INCREMENT 	 2

;;enum GChecksumType
%define G_CHECKSUM_SHA256 	 2
%define G_CHECKSUM_MD5 	 0
%define G_CHECKSUM_SHA1 	 1

;;enum GConvertError
%define G_CONVERT_ERROR_ILLEGAL_SEQUENCE 	 1
%define G_CONVERT_ERROR_BAD_URI 	 4
%define G_CONVERT_ERROR_FAILED 	 2
%define G_CONVERT_ERROR_NO_CONVERSION 	 0
%define G_CONVERT_ERROR_PARTIAL_INPUT 	 3
%define G_CONVERT_ERROR_NOT_ABSOLUTE_PATH 	 5

;;enum GDateDMY
%define G_DATE_YEAR 	 2
%define G_DATE_MONTH 	 1
%define G_DATE_DAY 	 0

;;enum GDateWeekday
%define G_DATE_THURSDAY 	 4
%define G_DATE_SATURDAY 	 6
%define G_DATE_MONDAY 	 1
%define G_DATE_SUNDAY 	 7
%define G_DATE_WEDNESDAY 	 3
%define G_DATE_BAD_WEEKDAY 	 0
%define G_DATE_TUESDAY 	 2
%define G_DATE_FRIDAY 	 5

;;enum GDateMonth
%define G_DATE_SEPTEMBER 	 9
%define G_DATE_DECEMBER 	 12
%define G_DATE_JUNE 	 6
%define G_DATE_OCTOBER 	 10
%define G_DATE_JULY 	 7
%define G_DATE_AUGUST 	 8
%define G_DATE_FEBRUARY 	 2
%define G_DATE_MAY 	 5
%define G_DATE_APRIL 	 4
%define G_DATE_JANUARY 	 1
%define G_DATE_MARCH 	 3
%define G_DATE_BAD_MONTH 	 0
%define G_DATE_NOVEMBER 	 11

;;enum GTimeType
%define G_TIME_TYPE_UNIVERSAL 	 2
%define G_TIME_TYPE_STANDARD 	 0
%define G_TIME_TYPE_DAYLIGHT 	 1

;;enum GFileError
%define G_FILE_ERROR_NOMEM 	 13
%define G_FILE_ERROR_ACCES 	 2
%define G_FILE_ERROR_NOSYS 	 23
%define G_FILE_ERROR_NOTDIR 	 5
%define G_FILE_ERROR_ISDIR 	 1
%define G_FILE_ERROR_NFILE 	 15
%define G_FILE_ERROR_BADF 	 16
%define G_FILE_ERROR_PIPE 	 18
%define G_FILE_ERROR_EXIST 	 0
%define G_FILE_ERROR_NAMETOOLONG 	 3
%define G_FILE_ERROR_ROFS 	 8
%define G_FILE_ERROR_NODEV 	 7
%define G_FILE_ERROR_INVAL 	 17
%define G_FILE_ERROR_FAULT 	 10
%define G_FILE_ERROR_FAILED 	 24
%define G_FILE_ERROR_NOSPC 	 12
%define G_FILE_ERROR_IO 	 21
%define G_FILE_ERROR_INTR 	 20
%define G_FILE_ERROR_LOOP 	 11
%define G_FILE_ERROR_PERM 	 22
%define G_FILE_ERROR_NXIO 	 6
%define G_FILE_ERROR_MFILE 	 14
%define G_FILE_ERROR_NOENT 	 4
%define G_FILE_ERROR_AGAIN 	 19
%define G_FILE_ERROR_TXTBSY 	 9

;;enum GFileTest
%define G_FILE_TEST_IS_DIR 	 1 << 2
%define G_FILE_TEST_IS_REGULAR 	 1 << 0
%define G_FILE_TEST_IS_SYMLINK 	 1 << 1
%define G_FILE_TEST_EXISTS 	 1 << 4
%define G_FILE_TEST_IS_EXECUTABLE 	 1 << 3

;;enum GHookFlagMask
%define G_HOOK_FLAG_MASK 	 0x0f
%define G_HOOK_FLAG_IN_CALL 	 1 << 1
%define G_HOOK_FLAG_ACTIVE 	 1 << 0

;;enum GUnicodeType
%define G_UNICODE_OTHER_SYMBOL 	 26
%define G_UNICODE_ENCLOSING_MARK 	 11
%define G_UNICODE_OTHER_LETTER 	 7
%define G_UNICODE_CONTROL 	 0
%define G_UNICODE_OPEN_PUNCTUATION 	 22
%define G_UNICODE_TITLECASE_LETTER 	 8
%define G_UNICODE_FORMAT 	 1
%define G_UNICODE_UPPERCASE_LETTER 	 9
%define G_UNICODE_UNASSIGNED 	 2
%define G_UNICODE_LINE_SEPARATOR 	 27
%define G_UNICODE_SURROGATE 	 4
%define G_UNICODE_LETTER_NUMBER 	 14
%define G_UNICODE_MATH_SYMBOL 	 25
%define G_UNICODE_CURRENCY_SYMBOL 	 23
%define G_UNICODE_SPACE_SEPARATOR 	 29
%define G_UNICODE_FINAL_PUNCTUATION 	 19
%define G_UNICODE_CLOSE_PUNCTUATION 	 18
%define G_UNICODE_LOWERCASE_LETTER 	 5
%define G_UNICODE_COMBINING_MARK 	 10
%define G_UNICODE_CONNECT_PUNCTUATION 	 16
%define G_UNICODE_OTHER_NUMBER 	 15
%define G_UNICODE_PARAGRAPH_SEPARATOR 	 28
%define G_UNICODE_INITIAL_PUNCTUATION 	 20
%define G_UNICODE_NON_SPACING_MARK 	 12
%define G_UNICODE_MODIFIER_LETTER 	 6
%define G_UNICODE_OTHER_PUNCTUATION 	 21
%define G_UNICODE_DECIMAL_NUMBER 	 13
%define G_UNICODE_MODIFIER_SYMBOL 	 24
%define G_UNICODE_DASH_PUNCTUATION 	 17
%define G_UNICODE_PRIVATE_USE 	 3

;;enum GUnicodeBreakType
%define G_UNICODE_BREAK_CONTINGENT 	 8
%define G_UNICODE_BREAK_HANGUL_T_JAMO 	 33
%define G_UNICODE_BREAK_HYPHEN 	 13
%define G_UNICODE_BREAK_INSEPARABLE 	 6
%define G_UNICODE_BREAK_COMPLEX_CONTEXT 	 26
%define G_UNICODE_BREAK_CLOSE_PARANTHESIS 	 36
%define G_UNICODE_BREAK_CLOSE_PUNCTUATION 	 16
%define G_UNICODE_BREAK_AFTER 	 10
%define G_UNICODE_BREAK_QUOTATION 	 17
%define G_UNICODE_BREAK_POSTFIX 	 25
%define G_UNICODE_BREAK_BEFORE 	 11
%define G_UNICODE_BREAK_BEFORE_AND_AFTER 	 12
%define G_UNICODE_BREAK_NUMERIC 	 20
%define G_UNICODE_BREAK_HANGUL_L_JAMO 	 31
%define G_UNICODE_BREAK_NON_BREAKING_GLUE 	 7
%define G_UNICODE_BREAK_MANDATORY 	 0
%define G_UNICODE_BREAK_OPEN_PUNCTUATION 	 15
%define G_UNICODE_BREAK_LINE_FEED 	 2
%define G_UNICODE_BREAK_WORD_JOINER 	 30
%define G_UNICODE_BREAK_AMBIGUOUS 	 27
%define G_UNICODE_BREAK_INFIX_SEPARATOR 	 21
%define G_UNICODE_BREAK_NEXT_LINE 	 29
%define G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE 	 35
%define G_UNICODE_BREAK_EXCLAMATION 	 18
%define G_UNICODE_BREAK_SPACE 	 9
%define G_UNICODE_BREAK_SYMBOL 	 22
%define G_UNICODE_BREAK_NON_STARTER 	 14
%define G_UNICODE_BREAK_IDEOGRAPHIC 	 19
%define G_UNICODE_BREAK_PREFIX 	 24
%define G_UNICODE_BREAK_HANGUL_V_JAMO 	 32
%define G_UNICODE_BREAK_HANGUL_LV_SYLLABLE 	 34
%define G_UNICODE_BREAK_ZERO_WIDTH_SPACE 	 5
%define G_UNICODE_BREAK_ALPHABETIC 	 23
%define G_UNICODE_BREAK_CARRIAGE_RETURN 	 1
%define G_UNICODE_BREAK_COMBINING_MARK 	 3
%define G_UNICODE_BREAK_SURROGATE 	 4
%define G_UNICODE_BREAK_UNKNOWN 	 28

;;enum GUnicodeScript
%define G_UNICODE_SCRIPT_KAYAH_LI 	 66
%define G_UNICODE_SCRIPT_GEORGIAN 	 11
%define G_UNICODE_SCRIPT_MEETEI_MAYEK 	 86
%define G_UNICODE_SCRIPT_HANUNOO 	 42
%define G_UNICODE_SCRIPT_KHMER 	 22
%define G_UNICODE_SCRIPT_SHAVIAN 	 49
%define G_UNICODE_SCRIPT_HIRAGANA 	 19
%define G_UNICODE_SCRIPT_ARMENIAN 	 2
%define G_UNICODE_SCRIPT_GREEK 	 13
%define G_UNICODE_SCRIPT_KANNADA 	 20
%define G_UNICODE_SCRIPT_BAMUM 	 78
%define G_UNICODE_SCRIPT_BOPOMOFO 	 4
%define G_UNICODE_SCRIPT_OLD_TURKIC 	 88
%define G_UNICODE_SCRIPT_TAI_THAM 	 90
%define G_UNICODE_SCRIPT_REJANG 	 68
%define G_UNICODE_SCRIPT_BRAHMI 	 93
%define G_UNICODE_SCRIPT_INSCRIPTIONAL_PAHLAVI 	 81
%define G_UNICODE_SCRIPT_OSMANYA 	 48
%define G_UNICODE_SCRIPT_LATIN 	 24
%define G_UNICODE_SCRIPT_PHAGS_PA 	 64
%define G_UNICODE_SCRIPT_CYPRIOT 	 46
%define G_UNICODE_SCRIPT_OLD_PERSIAN 	 58
%define G_UNICODE_SCRIPT_KHAROSHTHI 	 59
%define G_UNICODE_SCRIPT_BRAILLE 	 45
%define G_UNICODE_SCRIPT_CARIAN 	 74
%define G_UNICODE_SCRIPT_MYANMAR 	 27
%define G_UNICODE_SCRIPT_HANGUL 	 17
%define G_UNICODE_SCRIPT_LEPCHA 	 67
%define G_UNICODE_SCRIPT_NKO 	 65
%define G_UNICODE_SCRIPT_TAGBANWA 	 44
%define G_UNICODE_SCRIPT_LYCIAN 	 75
%define G_UNICODE_SCRIPT_LIMBU 	 47
%define G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL 	 39
%define G_UNICODE_SCRIPT_CYRILLIC 	 7
%define G_UNICODE_SCRIPT_INVALID_CODE 	 -1
%define G_UNICODE_SCRIPT_SUNDANESE 	 69
%define G_UNICODE_SCRIPT_ETHIOPIC 	 10
%define G_UNICODE_SCRIPT_MALAYALAM 	 25
%define G_UNICODE_SCRIPT_TELUGU 	 35
%define G_UNICODE_SCRIPT_COPTIC 	 6
%define G_UNICODE_SCRIPT_OLD_SOUTH_ARABIAN 	 87
%define G_UNICODE_SCRIPT_OL_CHIKI 	 72
%define G_UNICODE_SCRIPT_CHAM 	 71
%define G_UNICODE_SCRIPT_UNKNOWN 	 60
%define G_UNICODE_SCRIPT_KATAKANA 	 21
%define G_UNICODE_SCRIPT_VAI 	 73
%define G_UNICODE_SCRIPT_SYLOTI_NAGRI 	 57
%define G_UNICODE_SCRIPT_BUGINESE 	 54
%define G_UNICODE_SCRIPT_ARABIC 	 1
%define G_UNICODE_SCRIPT_TAI_VIET 	 91
%define G_UNICODE_SCRIPT_YI 	 40
%define G_UNICODE_SCRIPT_BENGALI 	 3
%define G_UNICODE_SCRIPT_SINHALA 	 32
%define G_UNICODE_SCRIPT_LINEAR_B 	 50
%define G_UNICODE_SCRIPT_LAO 	 23
%define G_UNICODE_SCRIPT_MANDAIC 	 94
%define G_UNICODE_SCRIPT_HEBREW 	 18
%define G_UNICODE_SCRIPT_THAI 	 37
%define G_UNICODE_SCRIPT_TAI_LE 	 51
%define G_UNICODE_SCRIPT_OLD_ITALIC 	 29
%define G_UNICODE_SCRIPT_BALINESE 	 61
%define G_UNICODE_SCRIPT_GLAGOLITIC 	 55
%define G_UNICODE_SCRIPT_CHEROKEE 	 5
%define G_UNICODE_SCRIPT_COMMON 	 0
%define G_UNICODE_SCRIPT_BUHID 	 43
%define G_UNICODE_SCRIPT_DESERET 	 8
%define G_UNICODE_SCRIPT_TAMIL 	 34
%define G_UNICODE_SCRIPT_THAANA 	 36
%define G_UNICODE_SCRIPT_SYRIAC 	 33
%define G_UNICODE_SCRIPT_AVESTAN 	 77
%define G_UNICODE_SCRIPT_HAN 	 16
%define G_UNICODE_SCRIPT_RUNIC 	 31
%define G_UNICODE_SCRIPT_LISU 	 85
%define G_UNICODE_SCRIPT_MONGOLIAN 	 26
%define G_UNICODE_SCRIPT_TIBETAN 	 38
%define G_UNICODE_SCRIPT_SAMARITAN 	 89
%define G_UNICODE_SCRIPT_GURMUKHI 	 15
%define G_UNICODE_SCRIPT_EGYPTIAN_HIEROGLYPHS 	 79
%define G_UNICODE_SCRIPT_DEVANAGARI 	 9
%define G_UNICODE_SCRIPT_GUJARATI 	 14
%define G_UNICODE_SCRIPT_INSCRIPTIONAL_PARTHIAN 	 82
%define G_UNICODE_SCRIPT_SAURASHTRA 	 70
%define G_UNICODE_SCRIPT_TAGALOG 	 41
%define G_UNICODE_SCRIPT_CUNEIFORM 	 62
%define G_UNICODE_SCRIPT_NEW_TAI_LUE 	 53
%define G_UNICODE_SCRIPT_KAITHI 	 84
%define G_UNICODE_SCRIPT_IMPERIAL_ARAMAIC 	 80
%define G_UNICODE_SCRIPT_JAVANESE 	 83
%define G_UNICODE_SCRIPT_UGARITIC 	 52
%define G_UNICODE_SCRIPT_LYDIAN 	 76
%define G_UNICODE_SCRIPT_OGHAM 	 28
%define G_UNICODE_SCRIPT_INHERITED 	 0
%define G_UNICODE_SCRIPT_TIFINAGH 	 56
%define G_UNICODE_SCRIPT_BATAK 	 92
%define G_UNICODE_SCRIPT_PHOENICIAN 	 63
%define G_UNICODE_SCRIPT_ORIYA 	 30
%define G_UNICODE_SCRIPT_GOTHIC 	 12

;;enum GNormalizeMode
%define G_NORMALIZE_DEFAULT 	 0
%define G_NORMALIZE_NFD 	 G_NORMALIZE_DEFAULT
%define G_NORMALIZE_ALL_COMPOSE 	 3
%define G_NORMALIZE_NFKD 	 G_NORMALIZE_ALL
%define G_NORMALIZE_DEFAULT_COMPOSE 	 1
%define G_NORMALIZE_ALL 	 2
%define G_NORMALIZE_NFC 	 G_NORMALIZE_DEFAULT_COMPOSE
%define G_NORMALIZE_NFKC 	 G_NORMALIZE_ALL_COMPOSE

;;enum GIOError
%define G_IO_ERROR_INVAL 	 2
%define G_IO_ERROR_UNKNOWN 	 3
%define G_IO_ERROR_AGAIN 	 1
%define G_IO_ERROR_NONE 	 0

;;enum GIOChannelError
%define G_IO_CHANNEL_ERROR_FBIG 	 0
%define G_IO_CHANNEL_ERROR_OVERFLOW 	 6
%define G_IO_CHANNEL_ERROR_NXIO 	 5
%define G_IO_CHANNEL_ERROR_PIPE 	 7
%define G_IO_CHANNEL_ERROR_IO 	 2
%define G_IO_CHANNEL_ERROR_INVAL 	 1
%define G_IO_CHANNEL_ERROR_NOSPC 	 4
%define G_IO_CHANNEL_ERROR_ISDIR 	 3
%define G_IO_CHANNEL_ERROR_FAILED 	 8

;;enum GIOStatus
%define G_IO_STATUS_EOF 	 2
%define G_IO_STATUS_ERROR 	 0
%define G_IO_STATUS_NORMAL 	 1
%define G_IO_STATUS_AGAIN 	 3

;;enum GSeekType
%define G_SEEK_END 	 2
%define G_SEEK_CUR 	 0
%define G_SEEK_SET 	 1

;;enum GIOCondition
%define G_IO_ERR 	 8
%define G_IO_PRI 	 2
%define G_IO_HUP 	 16
%define G_IO_IN 	 1
%define G_IO_OUT 	 4
%define G_IO_NVAL 	 32

;;enum GIOFlags
%define G_IO_FLAG_GET_MASK 	 G_IO_FLAG_MASK
%define G_IO_FLAG_IS_WRITEABLE 	 1 << 3
%define G_IO_FLAG_MASK 	 (1 << 5) - 1
%define G_IO_FLAG_NONBLOCK 	 1 << 1
%define G_IO_FLAG_APPEND 	 1 << 0
%define G_IO_FLAG_SET_MASK 	 G_IO_FLAG_APPEND | G_IO_FLAG_NONBLOCK
%define G_IO_FLAG_IS_SEEKABLE 	 1 << 4
%define G_IO_FLAG_IS_READABLE 	 1 << 2

;;enum GKeyFileError
%define G_KEY_FILE_ERROR_GROUP_NOT_FOUND 	 4
%define G_KEY_FILE_ERROR_NOT_FOUND 	 2
%define G_KEY_FILE_ERROR_UNKNOWN_ENCODING 	 0
%define G_KEY_FILE_ERROR_KEY_NOT_FOUND 	 3
%define G_KEY_FILE_ERROR_PARSE 	 1
%define G_KEY_FILE_ERROR_INVALID_VALUE 	 5

;;enum GKeyFileFlags
%define G_KEY_FILE_KEEP_COMMENTS 	 1 << 0
%define G_KEY_FILE_NONE 	 0
%define G_KEY_FILE_KEEP_TRANSLATIONS 	 1 << 1

;;enum GMarkupError
%define G_MARKUP_ERROR_EMPTY 	 1
%define G_MARKUP_ERROR_MISSING_ATTRIBUTE 	 6
%define G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE 	 4
%define G_MARKUP_ERROR_UNKNOWN_ELEMENT 	 3
%define G_MARKUP_ERROR_BAD_UTF8 	 0
%define G_MARKUP_ERROR_INVALID_CONTENT 	 5
%define G_MARKUP_ERROR_PARSE 	 2

;;enum GMarkupParseFlags
%define G_MARKUP_PREFIX_ERROR_POSITION 	 1 << 2
%define G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG 	 1 << 0
%define G_MARKUP_TREAT_CDATA_AS_TEXT 	 1 << 1

;;enum GMarkupCollectType
%define G_MARKUP_COLLECT_INVALID 	 0
%define G_MARKUP_COLLECT_STRING 	 1
%define G_MARKUP_COLLECT_BOOLEAN 	 3
%define G_MARKUP_COLLECT_STRDUP 	 2
%define G_MARKUP_COLLECT_OPTIONAL 	 (1 << 16)
%define G_MARKUP_COLLECT_TRISTATE 	 4

;;enum GLogLevelFlags
%define G_LOG_LEVEL_ERROR 	 1 << 2
%define G_LOG_LEVEL_DEBUG 	 1 << 7
%define G_LOG_LEVEL_CRITICAL 	 1 << 3
%define G_LOG_LEVEL_MESSAGE 	 1 << 5
%define G_LOG_LEVEL_WARNING 	 1 << 4
%define G_LOG_LEVEL_MASK 	 ~(G_LOG_FLAG_RECURSION | G_LOG_FLAG_FATAL)
%define G_LOG_LEVEL_INFO 	 1 << 6
%define G_LOG_FLAG_FATAL 	 1 << 1
%define G_LOG_FLAG_RECURSION 	 1 << 0

;;enum GTraverseFlags
%define G_TRAVERSE_NON_LEAVES 	 1 << 1
%define G_TRAVERSE_NON_LEAFS 	 G_TRAVERSE_NON_LEAVES
%define G_TRAVERSE_MASK 	 0x03
%define G_TRAVERSE_LEAFS 	 G_TRAVERSE_LEAVES
%define G_TRAVERSE_LEAVES 	 1 << 0
%define G_TRAVERSE_ALL 	 G_TRAVERSE_LEAVES | G_TRAVERSE_NON_LEAVES

;;enum GTraverseType
%define G_POST_ORDER 	 2
%define G_LEVEL_ORDER 	 3
%define G_IN_ORDER 	 0
%define G_PRE_ORDER 	 1

;;enum GOptionFlags
%define G_OPTION_FLAG_REVERSE 	 1 << 2
%define G_OPTION_FLAG_NO_ARG 	 1 << 3
%define G_OPTION_FLAG_IN_MAIN 	 1 << 1
%define G_OPTION_FLAG_OPTIONAL_ARG 	 1 << 5
%define G_OPTION_FLAG_FILENAME 	 1 << 4
%define G_OPTION_FLAG_NOALIAS 	 1 << 6
%define G_OPTION_FLAG_HIDDEN 	 1 << 0

;;enum GOptionArg
%define G_OPTION_ARG_DOUBLE 	 7
%define G_OPTION_ARG_STRING 	 1
%define G_OPTION_ARG_INT 	 2
%define G_OPTION_ARG_CALLBACK 	 3
%define G_OPTION_ARG_STRING_ARRAY 	 5
%define G_OPTION_ARG_NONE 	 0
%define G_OPTION_ARG_FILENAME 	 4
%define G_OPTION_ARG_INT64 	 8
%define G_OPTION_ARG_FILENAME_ARRAY 	 6

;;enum GOptionError
%define G_OPTION_ERROR_UNKNOWN_OPTION 	 0
%define G_OPTION_ERROR_FAILED 	 2
%define G_OPTION_ERROR_BAD_VALUE 	 1

;;enum GRegexError
%define G_REGEX_ERROR_MATCH 	 3
%define G_REGEX_ERROR_MEMORY_ERROR 	 121
%define G_REGEX_ERROR_MISSING_SUBPATTERN_NAME_TERMINATOR 	 142
%define G_REGEX_ERROR_SINGLE_BYTE_MATCH_IN_LOOKBEHIND 	 136
%define G_REGEX_ERROR_INVALID_ESCAPE_IN_CHARACTER_CLASS 	 107
%define G_REGEX_ERROR_QUANTIFIER_TOO_BIG 	 105
%define G_REGEX_ERROR_OPTIMIZE 	 1
%define G_REGEX_ERROR_MALFORMED_PROPERTY 	 146
%define G_REGEX_ERROR_EXPRESSION_TOO_LARGE 	 120
%define G_REGEX_ERROR_NOTHING_TO_REPEAT 	 109
%define G_REGEX_ERROR_TOO_MANY_SUBPATTERNS 	 149
%define G_REGEX_ERROR_MALFORMED_CONDITION 	 126
%define G_REGEX_ERROR_STRAY_BACKSLASH 	 101
%define G_REGEX_ERROR_ASSERTION_EXPECTED 	 128
%define G_REGEX_ERROR_UNRECOGNIZED_CHARACTER 	 112
%define G_REGEX_ERROR_MISSING_CONTROL_CHAR 	 102
%define G_REGEX_ERROR_REPLACE 	 2
%define G_REGEX_ERROR_INCONSISTENT_NEWLINE_OPTIONS 	 156
%define G_REGEX_ERROR_UNMATCHED_PARENTHESIS 	 114
%define G_REGEX_ERROR_DEFINE_REPETION 	 155
%define G_REGEX_ERROR_UNKNOWN_POSIX_CLASS_NAME 	 130
%define G_REGEX_ERROR_TOO_MANY_CONDITIONAL_BRANCHES 	 127
%define G_REGEX_ERROR_INVALID_CONDITION 	 135
%define G_REGEX_ERROR_MISSING_BACK_REFERENCE 	 157
%define G_REGEX_ERROR_POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED 	 131
%define G_REGEX_ERROR_UNKNOWN_PROPERTY 	 147
%define G_REGEX_ERROR_INFINITE_LOOP 	 140
%define G_REGEX_ERROR_SUBPATTERN_NAME_TOO_LONG 	 148
%define G_REGEX_ERROR_INTERNAL 	 4
%define G_REGEX_ERROR_VARIABLE_LENGTH_LOOKBEHIND 	 125
%define G_REGEX_ERROR_UNRECOGNIZED_ESCAPE 	 103
%define G_REGEX_ERROR_DUPLICATE_SUBPATTERN_NAME 	 143
%define G_REGEX_ERROR_POSIX_NAMED_CLASS_OUTSIDE_CLASS 	 113
%define G_REGEX_ERROR_RANGE_OUT_OF_ORDER 	 108
%define G_REGEX_ERROR_UNTERMINATED_COMMENT 	 118
%define G_REGEX_ERROR_INVALID_OCTAL_VALUE 	 151
%define G_REGEX_ERROR_TOO_MANY_BRANCHES_IN_DEFINE 	 154
%define G_REGEX_ERROR_HEX_CODE_TOO_LARGE 	 134
%define G_REGEX_ERROR_UNTERMINATED_CHARACTER_CLASS 	 106
%define G_REGEX_ERROR_QUANTIFIERS_OUT_OF_ORDER 	 104
%define G_REGEX_ERROR_COMPILE 	 0
%define G_REGEX_ERROR_INEXISTENT_SUBPATTERN_REFERENCE 	 115

;;enum GRegexCompileFlags
%define G_REGEX_NO_AUTO_CAPTURE 	 1 << 12
%define G_REGEX_NEWLINE_CR 	 1 << 20
%define G_REGEX_ANCHORED 	 1 << 4
%define G_REGEX_DUPNAMES 	 1 << 19
%define G_REGEX_DOLLAR_ENDONLY 	 1 << 5
%define G_REGEX_EXTENDED 	 1 << 3
%define G_REGEX_UNGREEDY 	 1 << 9
%define G_REGEX_OPTIMIZE 	 1 << 13
%define G_REGEX_DOTALL 	 1 << 2
%define G_REGEX_NEWLINE_CRLF 	 G_REGEX_NEWLINE_CR | G_REGEX_NEWLINE_LF
%define G_REGEX_RAW 	 1 << 11
%define G_REGEX_NEWLINE_LF 	 1 << 21
%define G_REGEX_MULTILINE 	 1 << 1
%define G_REGEX_CASELESS 	 1 << 0

;;enum GRegexMatchFlags
%define G_REGEX_MATCH_NOTBOL 	 1 << 7
%define G_REGEX_MATCH_ANCHORED 	 1 << 4
%define G_REGEX_MATCH_NEWLINE_CRLF 	 G_REGEX_MATCH_NEWLINE_CR | G_REGEX_MATCH_NEWLINE_LF
%define G_REGEX_MATCH_NOTEMPTY 	 1 << 10
%define G_REGEX_MATCH_NEWLINE_CR 	 1 << 20
%define G_REGEX_MATCH_NEWLINE_LF 	 1 << 21
%define G_REGEX_MATCH_PARTIAL 	 1 << 15
%define G_REGEX_MATCH_NOTEOL 	 1 << 8
%define G_REGEX_MATCH_NEWLINE_ANY 	 1 << 22

;;enum GErrorType
%define G_ERR_DIGIT_RADIX 	 5
%define G_ERR_FLOAT_MALFORMED 	 7
%define G_ERR_UNEXP_EOF_IN_COMMENT 	 3
%define G_ERR_NON_DIGIT_IN_CONST 	 4
%define G_ERR_FLOAT_RADIX 	 6
%define G_ERR_UNEXP_EOF 	 1
%define G_ERR_UNEXP_EOF_IN_STRING 	 2
%define G_ERR_UNKNOWN 	 0

;;enum GTokenType
%define G_TOKEN_COMMENT_SINGLE 	 268
%define G_TOKEN_INT 	 261
%define G_TOKEN_BINARY 	 259
%define G_TOKEN_OCTAL 	 260
%define G_TOKEN_COMMA 	 ','
%define G_TOKEN_RIGHT_CURLY 	 '}'
%define G_TOKEN_RIGHT_BRACE 	 ']'
%define G_TOKEN_LAST 	 270
%define G_TOKEN_COMMENT_MULTI 	 269
%define G_TOKEN_STRING 	 264
%define G_TOKEN_HEX 	 262
%define G_TOKEN_RIGHT_PAREN 	 ')'
%define G_TOKEN_IDENTIFIER 	 266
%define G_TOKEN_EQUAL_SIGN 	 '='
%define G_TOKEN_ERROR 	 257
%define G_TOKEN_SYMBOL 	 265
%define G_TOKEN_LEFT_CURLY 	 ''
%define G_TOKEN_NONE 	 256
%define G_TOKEN_FLOAT 	 263
%define G_TOKEN_CHAR 	 258
%define G_TOKEN_IDENTIFIER_NULL 	 267
%define G_TOKEN_LEFT_PAREN 	 '('
%define G_TOKEN_LEFT_BRACE 	 '['
%define G_TOKEN_EOF 	 0

;;enum GShellError
%define G_SHELL_ERROR_FAILED 	 2
%define G_SHELL_ERROR_BAD_QUOTING 	 0
%define G_SHELL_ERROR_EMPTY_STRING 	 1

;;enum GSpawnError
%define G_SPAWN_ERROR_READ 	 1
%define G_SPAWN_ERROR_MFILE 	 15
%define G_SPAWN_ERROR_NFILE 	 14
%define G_SPAWN_ERROR_INVAL 	 16
%define G_SPAWN_ERROR_FORK 	 0
%define G_SPAWN_ERROR_IO 	 13
%define G_SPAWN_ERROR_NOTDIR 	 10
%define G_SPAWN_ERROR_FAILED 	 19
%define G_SPAWN_ERROR_NOEXEC 	 6
%define G_SPAWN_ERROR_NOENT 	 8
%define G_SPAWN_ERROR_PERM 	 4
%define G_SPAWN_ERROR_NAMETOOLONG 	 7
%define G_SPAWN_ERROR_ACCES 	 3
%define G_SPAWN_ERROR_NOMEM 	 9
%define G_SPAWN_ERROR_CHDIR 	 2
%define G_SPAWN_ERROR_TXTBUSY 	 12
%define G_SPAWN_ERROR_2BIG 	 5
%define G_SPAWN_ERROR_LOOP 	 11
%define G_SPAWN_ERROR_LIBBAD 	 18
%define G_SPAWN_ERROR_ISDIR 	 17

;;enum GSpawnFlags
%define G_SPAWN_LEAVE_DESCRIPTORS_OPEN 	 1 << 0
%define G_SPAWN_DO_NOT_REAP_CHILD 	 1 << 1
%define G_SPAWN_SEARCH_PATH 	 1 << 2
%define G_SPAWN_FILE_AND_ARGV_ZERO 	 1 << 6
%define G_SPAWN_CHILD_INHERITS_STDIN 	 1 << 5
%define G_SPAWN_STDERR_TO_DEV_NULL 	 1 << 4
%define G_SPAWN_STDOUT_TO_DEV_NULL 	 1 << 3

;;enum GAsciiType
%define G_ASCII_UPPER 	 1 << 9
%define G_ASCII_DIGIT 	 1 << 3
%define G_ASCII_CNTRL 	 1 << 2
%define G_ASCII_ALNUM 	 1 << 0
%define G_ASCII_PUNCT 	 1 << 7
%define G_ASCII_XDIGIT 	 1 << 10
%define G_ASCII_GRAPH 	 1 << 4
%define G_ASCII_PRINT 	 1 << 6
%define G_ASCII_SPACE 	 1 << 8
%define G_ASCII_LOWER 	 1 << 5
%define G_ASCII_ALPHA 	 1 << 1

;;enum GTestTrapFlags
%define G_TEST_TRAP_SILENCE_STDOUT 	 1 << 7
%define G_TEST_TRAP_INHERIT_STDIN 	 1 << 9
%define G_TEST_TRAP_SILENCE_STDERR 	 1 << 8

;;enum GTestLogType
%define G_TEST_LOG_STOP_CASE 	 6
%define G_TEST_LOG_START_CASE 	 5
%define G_TEST_LOG_MESSAGE 	 9
%define G_TEST_LOG_SKIP_CASE 	 4
%define G_TEST_LOG_MIN_RESULT 	 7
%define G_TEST_LOG_ERROR 	 1
%define G_TEST_LOG_LIST_CASE 	 3
%define G_TEST_LOG_NONE 	 0
%define G_TEST_LOG_MAX_RESULT 	 8
%define G_TEST_LOG_START_BINARY 	 2

;;enum GVariantClass
%define G_VARIANT_CLASS_MAYBE 	 'm'
%define G_VARIANT_CLASS_BOOLEAN 	 'b'
%define G_VARIANT_CLASS_VARIANT 	 'v'
%define G_VARIANT_CLASS_BYTE 	 'y'
%define G_VARIANT_CLASS_HANDLE 	 'h'
%define G_VARIANT_CLASS_TUPLE 	 '('
%define G_VARIANT_CLASS_UINT32 	 'u'
%define G_VARIANT_CLASS_UINT64 	 't'
%define G_VARIANT_CLASS_INT64 	 'x'
%define G_VARIANT_CLASS_ARRAY 	 'a'
%define G_VARIANT_CLASS_UINT16 	 'q'
%define G_VARIANT_CLASS_STRING 	 's'
%define G_VARIANT_CLASS_INT16 	 'n'
%define G_VARIANT_CLASS_SIGNATURE 	 'g'
%define G_VARIANT_CLASS_OBJECT_PATH 	 'o'
%define G_VARIANT_CLASS_DOUBLE 	 'd'
%define G_VARIANT_CLASS_INT32 	 'i'
%define G_VARIANT_CLASS_DICT_ENTRY 	 ''

;;enum GVariantParseError
%define G_VARIANT_PARSE_ERROR_CANNOT_INFER_TYPE 	 2
%define G_VARIANT_PARSE_ERROR_INVALID_OBJECT_PATH 	 7
%define G_VARIANT_PARSE_ERROR_VALUE_EXPECTED 	 17
%define G_VARIANT_PARSE_ERROR_NUMBER_OUT_OF_RANGE 	 11
%define G_VARIANT_PARSE_ERROR_INVALID_SIGNATURE 	 8
%define G_VARIANT_PARSE_ERROR_INVALID_TYPE_STRING 	 9
%define G_VARIANT_PARSE_ERROR_TYPE_ERROR 	 13
%define G_VARIANT_PARSE_ERROR_NO_COMMON_TYPE 	 10
%define G_VARIANT_PARSE_ERROR_INVALID_CHARACTER 	 5
%define G_VARIANT_PARSE_ERROR_FAILED 	 0
%define G_VARIANT_PARSE_ERROR_DEFINITE_TYPE_EXPECTED 	 3
%define G_VARIANT_PARSE_ERROR_UNEXPECTED_TOKEN 	 14
%define G_VARIANT_PARSE_ERROR_UNTERMINATED_STRING_CONSTANT 	 16
%define G_VARIANT_PARSE_ERROR_BASIC_TYPE_EXPECTED 	 1
%define G_VARIANT_PARSE_ERROR_NUMBER_TOO_BIG 	 12
%define G_VARIANT_PARSE_ERROR_UNKNOWN_KEYWORD 	 15
%define G_VARIANT_PARSE_ERROR_INVALID_FORMAT_STRING 	 6
%define G_VARIANT_PARSE_ERROR_INPUT_NOT_AT_END 	 4

;;enum GTypeDebugFlags
%define G_TYPE_DEBUG_OBJECTS 	 1 << 0
%define G_TYPE_DEBUG_SIGNALS 	 1 << 1
%define G_TYPE_DEBUG_NONE 	 0
%define G_TYPE_DEBUG_MASK 	 0x03

;;enum GTypeFundamentalFlags
%define G_TYPE_FLAG_DERIVABLE 	 (1 << 2)
%define G_TYPE_FLAG_INSTANTIATABLE 	 (1 << 1)
%define G_TYPE_FLAG_DEEP_DERIVABLE 	 (1 << 3)
%define G_TYPE_FLAG_CLASSED 	 (1 << 0)

;;enum GTypeFlags
%define G_TYPE_FLAG_VALUE_ABSTRACT 	 (1 << 5)
%define G_TYPE_FLAG_ABSTRACT 	 (1 << 4)

;;enum GParamFlags
%define G_PARAM_CONSTRUCT_ONLY 	 1 << 3
%define G_PARAM_STATIC_NAME 	 1 << 5
%define G_PARAM_STATIC_NICK 	 1 << 6
%define G_PARAM_PRIVATE 	 G_PARAM_STATIC_NAME
%define G_PARAM_DEPRECATED 	 1 << 31
%define G_PARAM_STATIC_BLURB 	 1 << 7
%define G_PARAM_READABLE 	 1 << 0
%define G_PARAM_WRITABLE 	 1 << 1
%define G_PARAM_LAX_VALIDATION 	 1 << 4
%define G_PARAM_CONSTRUCT 	 1 << 2

;;enum GSignalFlags
%define G_SIGNAL_NO_HOOKS 	 1 << 6
%define G_SIGNAL_NO_RECURSE 	 1 << 3
%define G_SIGNAL_RUN_LAST 	 1 << 1
%define G_SIGNAL_RUN_CLEANUP 	 1 << 2
%define G_SIGNAL_RUN_FIRST 	 1 << 0
%define G_SIGNAL_ACTION 	 1 << 5
%define G_SIGNAL_DETAILED 	 1 << 4

;;enum GConnectFlags
%define G_CONNECT_AFTER 	 1 << 0
%define G_CONNECT_SWAPPED 	 1 << 1

;;enum GSignalMatchType
%define G_SIGNAL_MATCH_FUNC 	 1 << 3
%define G_SIGNAL_MATCH_ID 	 1 << 0
%define G_SIGNAL_MATCH_UNBLOCKED 	 1 << 5
%define G_SIGNAL_MATCH_DATA 	 1 << 4
%define G_SIGNAL_MATCH_DETAIL 	 1 << 1
%define G_SIGNAL_MATCH_CLOSURE 	 1 << 2

;;enum GBindingFlags
%define G_BINDING_BIDIRECTIONAL 	 1 << 0
%define G_BINDING_DEFAULT 	 0
%define G_BINDING_SYNC_CREATE 	 1 << 1
%define G_BINDING_INVERT_BOOLEAN 	 1 << 2

;;enum GAppInfoCreateFlags
%define G_APP_INFO_CREATE_NONE 	 0
%define G_APP_INFO_CREATE_SUPPORTS_URIS 	 (1 << 1)
%define G_APP_INFO_CREATE_NEEDS_TERMINAL 	 (1 << 0)
%define G_APP_INFO_CREATE_SUPPORTS_STARTUP_NOTIFICATION 	 (1 << 2)

;;enum GConverterFlags
%define G_CONVERTER_NO_FLAGS 	 0
%define G_CONVERTER_INPUT_AT_END 	 (1 << 0)
%define G_CONVERTER_FLUSH 	 (1 << 1)

;;enum GConverterResult
%define G_CONVERTER_ERROR 	 0
%define G_CONVERTER_CONVERTED 	 1
%define G_CONVERTER_FINISHED 	 2
%define G_CONVERTER_FLUSHED 	 3

;;enum GDataStreamByteOrder
%define G_DATA_STREAM_BYTE_ORDER_HOST_ENDIAN 	 2
%define G_DATA_STREAM_BYTE_ORDER_LITTLE_ENDIAN 	 1
%define G_DATA_STREAM_BYTE_ORDER_BIG_ENDIAN 	 0

;;enum GDataStreamNewlineType
%define G_DATA_STREAM_NEWLINE_TYPE_ANY 	 3
%define G_DATA_STREAM_NEWLINE_TYPE_LF 	 0
%define G_DATA_STREAM_NEWLINE_TYPE_CR_LF 	 2
%define G_DATA_STREAM_NEWLINE_TYPE_CR 	 1

;;enum GFileAttributeType
%define G_FILE_ATTRIBUTE_TYPE_UINT64 	 5
%define G_FILE_ATTRIBUTE_TYPE_STRINGV 	 8
%define G_FILE_ATTRIBUTE_TYPE_INVALID 	 0
%define G_FILE_ATTRIBUTE_TYPE_BOOLEAN 	 2
%define G_FILE_ATTRIBUTE_TYPE_OBJECT 	 7
%define G_FILE_ATTRIBUTE_TYPE_BYTE_STRING 	 1
%define G_FILE_ATTRIBUTE_TYPE_INT64 	 6
%define G_FILE_ATTRIBUTE_TYPE_INT32 	 4
%define G_FILE_ATTRIBUTE_TYPE_UINT32 	 3
%define G_FILE_ATTRIBUTE_TYPE_STRING 	 0

;;enum GFileAttributeInfoFlags
%define G_FILE_ATTRIBUTE_INFO_NONE 	 0
%define G_FILE_ATTRIBUTE_INFO_COPY_WHEN_MOVED 	 (1 << 1)
%define G_FILE_ATTRIBUTE_INFO_COPY_WITH_FILE 	 (1 << 0)

;;enum GFileAttributeStatus
%define G_FILE_ATTRIBUTE_STATUS_SET 	 0
%define G_FILE_ATTRIBUTE_STATUS_UNSET 	 0
%define G_FILE_ATTRIBUTE_STATUS_ERROR_SETTING 	 1

;;enum GFileQueryInfoFlags
%define G_FILE_QUERY_INFO_NOFOLLOW_SYMLINKS 	 (1 << 0)
%define G_FILE_QUERY_INFO_NONE 	 0

;;enum GFileCreateFlags
%define G_FILE_CREATE_REPLACE_DESTINATION 	 (1 << 1)
%define G_FILE_CREATE_NONE 	 0
%define G_FILE_CREATE_PRIVATE 	 (1 << 0)

;;enum GMountMountFlags
%define G_MOUNT_MOUNT_NONE 	 0

;;enum GMountUnmountFlags
%define G_MOUNT_UNMOUNT_FORCE 	 (1 << 0)
%define G_MOUNT_UNMOUNT_NONE 	 0

;;enum GDriveStartFlags
%define G_DRIVE_START_NONE 	 0

;;enum GDriveStartStopType
%define G_DRIVE_START_STOP_TYPE_PASSWORD 	 4
%define G_DRIVE_START_STOP_TYPE_UNKNOWN 	 0
%define G_DRIVE_START_STOP_TYPE_SHUTDOWN 	 1
%define G_DRIVE_START_STOP_TYPE_MULTIDISK 	 3
%define G_DRIVE_START_STOP_TYPE_NETWORK 	 2

;;enum GFileCopyFlags
%define G_FILE_COPY_ALL_METADATA 	 (1 << 3)
%define G_FILE_COPY_BACKUP 	 (1 << 1)
%define G_FILE_COPY_NO_FALLBACK_FOR_MOVE 	 (1 << 4)
%define G_FILE_COPY_NOFOLLOW_SYMLINKS 	 (1 << 2)
%define G_FILE_COPY_TARGET_DEFAULT_PERMS 	 (1 << 5)
%define G_FILE_COPY_NONE 	 0
%define G_FILE_COPY_OVERWRITE 	 (1 << 0)

;;enum GFileMonitorFlags
%define G_FILE_MONITOR_SEND_MOVED 	 (1 << 1)
%define G_FILE_MONITOR_NONE 	 0
%define G_FILE_MONITOR_WATCH_MOUNTS 	 (1 << 0)

;;enum GFileType
%define G_FILE_TYPE_REGULAR 	 0
%define G_FILE_TYPE_SYMBOLIC_LINK 	 2
%define G_FILE_TYPE_SHORTCUT 	 4
%define G_FILE_TYPE_SPECIAL 	 3
%define G_FILE_TYPE_UNKNOWN 	 0
%define G_FILE_TYPE_MOUNTABLE 	 5
%define G_FILE_TYPE_DIRECTORY 	 1

;;enum GFilesystemPreviewType
%define G_FILESYSTEM_PREVIEW_TYPE_NEVER 	 1
%define G_FILESYSTEM_PREVIEW_TYPE_IF_ALWAYS 	 0
%define G_FILESYSTEM_PREVIEW_TYPE_IF_LOCAL 	 0

;;enum GFileMonitorEvent
%define G_FILE_MONITOR_EVENT_MOVED 	 7
%define G_FILE_MONITOR_EVENT_ATTRIBUTE_CHANGED 	 4
%define G_FILE_MONITOR_EVENT_PRE_UNMOUNT 	 5
%define G_FILE_MONITOR_EVENT_CHANGES_DONE_HINT 	 1
%define G_FILE_MONITOR_EVENT_CHANGED 	 0
%define G_FILE_MONITOR_EVENT_CREATED 	 3
%define G_FILE_MONITOR_EVENT_UNMOUNTED 	 6
%define G_FILE_MONITOR_EVENT_DELETED 	 2

;;enum GIOErrorEnum
%define G_IO_ERROR_READ_ONLY 	 21
%define G_IO_ERROR_IS_DIRECTORY 	 3
%define G_IO_ERROR_NO_SPACE 	 12
%define G_IO_ERROR_WOULD_MERGE 	 29
%define G_IO_ERROR_NOT_FOUND 	 1
%define G_IO_ERROR_PROXY_NOT_ALLOWED 	 43
%define G_IO_ERROR_ALREADY_MOUNTED 	 17
%define G_IO_ERROR_TOO_MANY_LINKS 	 11
%define G_IO_ERROR_NOT_DIRECTORY 	 4
%define G_IO_ERROR_PROXY_NEED_AUTH 	 42
%define G_IO_ERROR_PROXY_FAILED 	 40
%define G_IO_ERROR_PENDING 	 20
%define G_IO_ERROR_WOULD_RECURSE 	 25
%define G_IO_ERROR_PROXY_AUTH_FAILED 	 41
%define G_IO_ERROR_FAILED 	 0
%define G_IO_ERROR_PERMISSION_DENIED 	 14
%define G_IO_ERROR_NETWORK_UNREACHABLE 	 38
%define G_IO_ERROR_PARTIAL_INPUT 	 34
%define G_IO_ERROR_TOO_MANY_OPEN_FILES 	 31
%define G_IO_ERROR_NOT_MOUNTABLE_FILE 	 8
%define G_IO_ERROR_CANCELLED 	 19
%define G_IO_ERROR_NOT_REGULAR_FILE 	 6
%define G_IO_ERROR_HOST_NOT_FOUND 	 28
%define G_IO_ERROR_INVALID_ARGUMENT 	 13
%define G_IO_ERROR_NOT_SYMBOLIC_LINK 	 7
%define G_IO_ERROR_NOT_MOUNTED 	 16
%define G_IO_ERROR_DBUS_ERROR 	 36
%define G_IO_ERROR_CLOSED 	 18
%define G_IO_ERROR_INVALID_FILENAME 	 10
%define G_IO_ERROR_NOT_EMPTY 	 5
%define G_IO_ERROR_BUSY 	 26
%define G_IO_ERROR_CANT_CREATE_BACKUP 	 22
%define G_IO_ERROR_WOULD_BLOCK 	 27
%define G_IO_ERROR_ADDRESS_IN_USE 	 33
%define G_IO_ERROR_WRONG_ETAG 	 23
%define G_IO_ERROR_NOT_INITIALIZED 	 32
%define G_IO_ERROR_INVALID_DATA 	 35
%define G_IO_ERROR_EXISTS 	 2
%define G_IO_ERROR_FILENAME_TOO_LONG 	 9
%define G_IO_ERROR_FAILED_HANDLED 	 30
%define G_IO_ERROR_HOST_UNREACHABLE 	 37
%define G_IO_ERROR_TIMED_OUT 	 24
%define G_IO_ERROR_CONNECTION_REFUSED 	 39
%define G_IO_ERROR_NOT_SUPPORTED 	 15

;;enum GAskPasswordFlags
%define G_ASK_PASSWORD_NEED_PASSWORD 	 (1 << 0)
%define G_ASK_PASSWORD_NEED_DOMAIN 	 (1 << 2)
%define G_ASK_PASSWORD_NEED_USERNAME 	 (1 << 1)
%define G_ASK_PASSWORD_SAVING_SUPPORTED 	 (1 << 3)
%define G_ASK_PASSWORD_ANONYMOUS_SUPPORTED 	 (1 << 4)

;;enum GPasswordSave
%define G_PASSWORD_SAVE_NEVER 	 0
%define G_PASSWORD_SAVE_FOR_SESSION 	 1
%define G_PASSWORD_SAVE_PERMANENTLY 	 2

;;enum GMountOperationResult
%define G_MOUNT_OPERATION_HANDLED 	 0
%define G_MOUNT_OPERATION_UNHANDLED 	 2
%define G_MOUNT_OPERATION_ABORTED 	 1

;;enum GOutputStreamSpliceFlags
%define G_OUTPUT_STREAM_SPLICE_NONE 	 0
%define G_OUTPUT_STREAM_SPLICE_CLOSE_SOURCE 	 (1 << 0)
%define G_OUTPUT_STREAM_SPLICE_CLOSE_TARGET 	 (1 << 1)

;;enum GIOStreamSpliceFlags
%define G_IO_STREAM_SPLICE_CLOSE_STREAM2 	 (1 << 1)
%define G_IO_STREAM_SPLICE_WAIT_FOR_BOTH 	 (1 << 2)
%define G_IO_STREAM_SPLICE_NONE 	 0
%define G_IO_STREAM_SPLICE_CLOSE_STREAM1 	 (1 << 0)

;;enum GEmblemOrigin
%define G_EMBLEM_ORIGIN_TAG 	 3
%define G_EMBLEM_ORIGIN_LIVEMETADATA 	 2
%define G_EMBLEM_ORIGIN_DEVICE 	 1
%define G_EMBLEM_ORIGIN_UNKNOWN 	 0

;;enum GResolverError
%define G_RESOLVER_ERROR_INTERNAL 	 2
%define G_RESOLVER_ERROR_NOT_FOUND 	 0
%define G_RESOLVER_ERROR_TEMPORARY_FAILURE 	 1

;;enum GSocketFamily
%define G_SOCKET_FAMILY_INVALID 	 0
%define G_SOCKET_FAMILY_UNIX 	 1
%define G_SOCKET_FAMILY_IPV4 	 2
%define G_SOCKET_FAMILY_IPV6 	 23

;;enum GSocketType
%define G_SOCKET_TYPE_STREAM 	 1
%define G_SOCKET_TYPE_INVALID 	 0
%define G_SOCKET_TYPE_DATAGRAM 	 2
%define G_SOCKET_TYPE_SEQPACKET 	 3

;;enum GSocketMsgFlags
%define G_SOCKET_MSG_PEEK 	 2
%define G_SOCKET_MSG_NONE 	 0
%define G_SOCKET_MSG_DONTROUTE 	 4
%define G_SOCKET_MSG_OOB 	 1

;;enum GSocketProtocol
%define G_SOCKET_PROTOCOL_SCTP 	 132
%define G_SOCKET_PROTOCOL_UNKNOWN 	 -1
%define G_SOCKET_PROTOCOL_TCP 	 6
%define G_SOCKET_PROTOCOL_DEFAULT 	 0
%define G_SOCKET_PROTOCOL_UDP 	 17

;;enum GZlibCompressorFormat
%define G_ZLIB_COMPRESSOR_FORMAT_ZLIB 	 0
%define G_ZLIB_COMPRESSOR_FORMAT_RAW 	 2
%define G_ZLIB_COMPRESSOR_FORMAT_GZIP 	 1

;;enum GUnixSocketAddressType
%define G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED 	 4
%define G_UNIX_SOCKET_ADDRESS_PATH 	 2
%define G_UNIX_SOCKET_ADDRESS_ABSTRACT 	 3
%define G_UNIX_SOCKET_ADDRESS_ANONYMOUS 	 1
%define G_UNIX_SOCKET_ADDRESS_INVALID 	 0

;;enum GBusType
%define G_BUS_TYPE_NONE 	 0
%define G_BUS_TYPE_SYSTEM 	 1
%define G_BUS_TYPE_STARTER 	 -1
%define G_BUS_TYPE_SESSION 	 2

;;enum GBusNameOwnerFlags
%define G_BUS_NAME_OWNER_FLAGS_ALLOW_REPLACEMENT 	 (1<<0)
%define G_BUS_NAME_OWNER_FLAGS_REPLACE 	 (1<<1)
%define G_BUS_NAME_OWNER_FLAGS_NONE 	 0

;;enum GBusNameWatcherFlags
%define G_BUS_NAME_WATCHER_FLAGS_AUTO_START 	 (1<<0)
%define G_BUS_NAME_WATCHER_FLAGS_NONE 	 0

;;enum GDBusProxyFlags
%define G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START 	 (1<<2)
%define G_DBUS_PROXY_FLAGS_DO_NOT_CONNECT_SIGNALS 	 (1<<1)
%define G_DBUS_PROXY_FLAGS_NONE 	 0
%define G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES 	 (1<<0)

;;enum GDBusError
%define G_DBUS_ERROR_NO_REPLY 	 4
%define G_DBUS_ERROR_BAD_ADDRESS 	 6
%define G_DBUS_ERROR_UNIX_PROCESS_ID_UNKNOWN 	 35
%define G_DBUS_ERROR_FILE_EXISTS 	 18
%define G_DBUS_ERROR_TIMEOUT 	 12
%define G_DBUS_ERROR_IO_ERROR 	 5
%define G_DBUS_ERROR_SERVICE_UNKNOWN 	 2
%define G_DBUS_ERROR_SPAWN_CHILD_SIGNALED 	 26
%define G_DBUS_ERROR_SPAWN_SETUP_FAILED 	 28
%define G_DBUS_ERROR_MATCH_RULE_INVALID 	 22
%define G_DBUS_ERROR_NO_MEMORY 	 1
%define G_DBUS_ERROR_NO_SERVER 	 11
%define G_DBUS_ERROR_SPAWN_SERVICE_NOT_FOUND 	 31
%define G_DBUS_ERROR_SPAWN_FAILED 	 27
%define G_DBUS_ERROR_DISCONNECTED 	 15
%define G_DBUS_ERROR_MATCH_RULE_NOT_FOUND 	 21
%define G_DBUS_ERROR_SPAWN_CHILD_EXITED 	 25
%define G_DBUS_ERROR_SELINUX_SECURITY_CONTEXT_UNKNOWN 	 38
%define G_DBUS_ERROR_INVALID_ARGS 	 16
%define G_DBUS_ERROR_LIMITS_EXCEEDED 	 8
%define G_DBUS_ERROR_AUTH_FAILED 	 10
%define G_DBUS_ERROR_ADDRESS_IN_USE 	 14
%define G_DBUS_ERROR_NO_NETWORK 	 13
%define G_DBUS_ERROR_SPAWN_CONFIG_INVALID 	 29
%define G_DBUS_ERROR_INVALID_SIGNATURE 	 36
%define G_DBUS_ERROR_OBJECT_PATH_IN_USE 	 40
%define G_DBUS_ERROR_FILE_NOT_FOUND 	 17
%define G_DBUS_ERROR_SPAWN_FILE_INVALID 	 33
%define G_DBUS_ERROR_ADT_AUDIT_DATA_UNKNOWN 	 39
%define G_DBUS_ERROR_TIMED_OUT 	 20
%define G_DBUS_ERROR_SPAWN_PERMISSIONS_INVALID 	 32
%define G_DBUS_ERROR_NAME_HAS_NO_OWNER 	 3
%define G_DBUS_ERROR_SPAWN_EXEC_FAILED 	 23
%define G_DBUS_ERROR_FAILED 	 0
%define G_DBUS_ERROR_NOT_SUPPORTED 	 7
%define G_DBUS_ERROR_SPAWN_SERVICE_INVALID 	 30
%define G_DBUS_ERROR_SPAWN_NO_MEMORY 	 34
%define G_DBUS_ERROR_SPAWN_FORK_FAILED 	 24
%define G_DBUS_ERROR_UNKNOWN_METHOD 	 19
%define G_DBUS_ERROR_INVALID_FILE_CONTENT 	 37
%define G_DBUS_ERROR_ACCESS_DENIED 	 9

;;enum GDBusConnectionFlags
%define G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER 	 (1<<1)
%define G_DBUS_CONNECTION_FLAGS_NONE 	 0
%define G_DBUS_CONNECTION_FLAGS_MESSAGE_BUS_CONNECTION 	 (1<<3)
%define G_DBUS_CONNECTION_FLAGS_DELAY_MESSAGE_PROCESSING 	 (1<<4)
%define G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS 	 (1<<2)
%define G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_CLIENT 	 (1<<0)

;;enum GDBusCapabilityFlags
%define G_DBUS_CAPABILITY_FLAGS_NONE 	 0
%define G_DBUS_CAPABILITY_FLAGS_UNIX_FD_PASSING 	 (1<<0)

;;enum GDBusCallFlags
%define G_DBUS_CALL_FLAGS_NONE 	 0
%define G_DBUS_CALL_FLAGS_NO_AUTO_START 	 (1<<0)

;;enum GDBusMessageType
%define G_DBUS_MESSAGE_TYPE_ERROR 	 3
%define G_DBUS_MESSAGE_TYPE_INVALID 	 0
%define G_DBUS_MESSAGE_TYPE_METHOD_RETURN 	 2
%define G_DBUS_MESSAGE_TYPE_METHOD_CALL 	 1
%define G_DBUS_MESSAGE_TYPE_SIGNAL 	 4

;;enum GDBusMessageFlags
%define G_DBUS_MESSAGE_FLAGS_NO_REPLY_EXPECTED 	 (1<<0)
%define G_DBUS_MESSAGE_FLAGS_NO_AUTO_START 	 (1<<1)
%define G_DBUS_MESSAGE_FLAGS_NONE 	 0

;;enum GDBusMessageHeaderField
%define G_DBUS_MESSAGE_HEADER_FIELD_SENDER 	 7
%define G_DBUS_MESSAGE_HEADER_FIELD_MEMBER 	 3
%define G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME 	 4
%define G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS 	 9
%define G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE 	 8
%define G_DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL 	 5
%define G_DBUS_MESSAGE_HEADER_FIELD_INTERFACE 	 2
%define G_DBUS_MESSAGE_HEADER_FIELD_DESTINATION 	 6
%define G_DBUS_MESSAGE_HEADER_FIELD_INVALID 	 0
%define G_DBUS_MESSAGE_HEADER_FIELD_PATH 	 1

;;enum GDBusPropertyInfoFlags
%define G_DBUS_PROPERTY_INFO_FLAGS_READABLE 	 (1<<0)
%define G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE 	 (1<<1)
%define G_DBUS_PROPERTY_INFO_FLAGS_NONE 	 0

;;enum GDBusSubtreeFlags
%define G_DBUS_SUBTREE_FLAGS_DISPATCH_TO_UNENUMERATED_NODES 	 (1<<0)
%define G_DBUS_SUBTREE_FLAGS_NONE 	 0

;;enum GDBusServerFlags
%define G_DBUS_SERVER_FLAGS_NONE 	 0
%define G_DBUS_SERVER_FLAGS_RUN_IN_THREAD 	 (1<<0)
%define G_DBUS_SERVER_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS 	 (1<<1)

;;enum GDBusSignalFlags
%define G_DBUS_SIGNAL_FLAGS_NONE 	 0
%define G_DBUS_SIGNAL_FLAGS_NO_MATCH_RULE 	 (1<<0)

;;enum GDBusSendMessageFlags
%define G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL 	 (1<<0)
%define G_DBUS_SEND_MESSAGE_FLAGS_NONE 	 0

;;enum GCredentialsType
%define G_CREDENTIALS_TYPE_FREEBSD_CMSGCRED 	 2
%define G_CREDENTIALS_TYPE_LINUX_UCRED 	 1
%define G_CREDENTIALS_TYPE_INVALID 	 0

;;enum GDBusMessageByteOrder
%define G_DBUS_MESSAGE_BYTE_ORDER_BIG_ENDIAN 	 'B'
%define G_DBUS_MESSAGE_BYTE_ORDER_LITTLE_ENDIAN 	 'l'

;;enum GApplicationFlags
%define G_APPLICATION_SEND_ENVIRONMENT 	 (1 << 4)
%define G_APPLICATION_IS_SERVICE 	 (1 << 0)
%define G_APPLICATION_FLAGS_NONE 	 0
%define G_APPLICATION_HANDLES_COMMAND_LINE 	 (1 << 3)
%define G_APPLICATION_IS_LAUNCHER 	 (1 << 1)
%define G_APPLICATION_HANDLES_OPEN 	 (1 << 2)

;;enum GTlsError
%define G_TLS_ERROR_EOF 	 6
%define G_TLS_ERROR_HANDSHAKE 	 4
%define G_TLS_ERROR_MISC 	 1
%define G_TLS_ERROR_NOT_TLS 	 3
%define G_TLS_ERROR_CERTIFICATE_REQUIRED 	 5
%define G_TLS_ERROR_UNAVAILABLE 	 0
%define G_TLS_ERROR_BAD_CERTIFICATE 	 2

;;enum GTlsCertificateFlags
%define G_TLS_CERTIFICATE_UNKNOWN_CA 	 (1 << 0)
%define G_TLS_CERTIFICATE_VALIDATE_ALL 	 0x007f
%define G_TLS_CERTIFICATE_EXPIRED 	 (1 << 3)
%define G_TLS_CERTIFICATE_REVOKED 	 (1 << 4)
%define G_TLS_CERTIFICATE_NOT_ACTIVATED 	 (1 << 2)
%define G_TLS_CERTIFICATE_GENERIC_ERROR 	 (1 << 6)
%define G_TLS_CERTIFICATE_BAD_IDENTITY 	 (1 << 1)
%define G_TLS_CERTIFICATE_INSECURE 	 (1 << 5)

;;enum GTlsAuthenticationMode
%define G_TLS_AUTHENTICATION_REQUIRED 	 2
%define G_TLS_AUTHENTICATION_REQUESTED 	 1
%define G_TLS_AUTHENTICATION_NONE 	 0

;;enum GTlsRehandshakeMode
%define G_TLS_REHANDSHAKE_NEVER 	 0
%define G_TLS_REHANDSHAKE_UNSAFELY 	 2
%define G_TLS_REHANDSHAKE_SAFELY 	 1

;;enum GModuleFlags
%define G_MODULE_BIND_LAZY 	 1 << 0
%define G_MODULE_BIND_LOCAL 	 1 << 1
%define G_MODULE_BIND_MASK 	 0x03

;;enum GSettingsBindFlags
%define G_SETTINGS_BIND_GET_NO_CHANGES 	 (1<<3)
%define G_SETTINGS_BIND_DEFAULT 	 0
%define G_SETTINGS_BIND_INVERT_BOOLEAN 	 (1<<4)
%define G_SETTINGS_BIND_GET 	 (1<<0)
%define G_SETTINGS_BIND_NO_SENSITIVITY 	 (1<<2)
%define G_SETTINGS_BIND_SET 	 (1<<1)

;;enum cairo_status_t
%define CAIRO_STATUS_INVALID_CLUSTERS 	 28
%define CAIRO_STATUS_DEVICE_ERROR 	 34
%define CAIRO_STATUS_INVALID_DSC_COMMENT 	 19
%define CAIRO_STATUS_TEMP_FILE_ERROR 	 22
%define CAIRO_STATUS_USER_FONT_NOT_IMPLEMENTED 	 32
%define CAIRO_STATUS_WRITE_ERROR 	 10
%define CAIRO_STATUS_INVALID_SIZE 	 31
%define CAIRO_STATUS_SURFACE_FINISHED 	 11
%define CAIRO_STATUS_NULL_POINTER 	 6
%define CAIRO_STATUS_LAST_STATUS 	 35
%define CAIRO_STATUS_INVALID_DASH 	 18
%define CAIRO_STATUS_INVALID_STRIDE 	 23
%define CAIRO_STATUS_SUCCESS 	 0
%define CAIRO_STATUS_FILE_NOT_FOUND 	 17
%define CAIRO_STATUS_INVALID_RESTORE 	 1
%define CAIRO_STATUS_NO_CURRENT_POINT 	 3
%define CAIRO_STATUS_INVALID_INDEX 	 20
%define CAIRO_STATUS_READ_ERROR 	 9
%define CAIRO_STATUS_INVALID_SLANT 	 29
%define CAIRO_STATUS_INVALID_CONTENT 	 14
%define CAIRO_STATUS_DEVICE_TYPE_MISMATCH 	 33
%define CAIRO_STATUS_INVALID_STATUS 	 5
%define CAIRO_STATUS_INVALID_WEIGHT 	 30
%define CAIRO_STATUS_INVALID_POP_GROUP 	 2
%define CAIRO_STATUS_INVALID_PATH_DATA 	 8
%define CAIRO_STATUS_NO_MEMORY 	 0
%define CAIRO_STATUS_PATTERN_TYPE_MISMATCH 	 13
%define CAIRO_STATUS_INVALID_MATRIX 	 4
%define CAIRO_STATUS_SURFACE_TYPE_MISMATCH 	 12
%define CAIRO_STATUS_CLIP_NOT_REPRESENTABLE 	 21
%define CAIRO_STATUS_NEGATIVE_COUNT 	 27
%define CAIRO_STATUS_USER_FONT_ERROR 	 26
%define CAIRO_STATUS_INVALID_FORMAT 	 15
%define CAIRO_STATUS_INVALID_VISUAL 	 16
%define CAIRO_STATUS_INVALID_STRING 	 7
%define CAIRO_STATUS_FONT_TYPE_MISMATCH 	 24
%define CAIRO_STATUS_USER_FONT_IMMUTABLE 	 25

;;enum cairo_content_t
%define CAIRO_CONTENT_COLOR 	 0x1000
%define CAIRO_CONTENT_COLOR_ALPHA 	 0x3000
%define CAIRO_CONTENT_ALPHA 	 0x2000

;;enum cairo_operator_t
%define CAIRO_OPERATOR_DARKEN 	 17
%define CAIRO_OPERATOR_SATURATE 	 13
%define CAIRO_OPERATOR_HSL_LUMINOSITY 	 28
%define CAIRO_OPERATOR_IN 	 3
%define CAIRO_OPERATOR_DEST_OUT 	 9
%define CAIRO_OPERATOR_MULTIPLY 	 14
%define CAIRO_OPERATOR_OUT 	 4
%define CAIRO_OPERATOR_HSL_HUE 	 25
%define CAIRO_OPERATOR_HARD_LIGHT 	 21
%define CAIRO_OPERATOR_EXCLUSION 	 24
%define CAIRO_OPERATOR_SOFT_LIGHT 	 22
%define CAIRO_OPERATOR_SCREEN 	 15
%define CAIRO_OPERATOR_HSL_SATURATION 	 26
%define CAIRO_OPERATOR_COLOR_BURN 	 20
%define CAIRO_OPERATOR_DEST_ATOP 	 10
%define CAIRO_OPERATOR_CLEAR 	 0
%define CAIRO_OPERATOR_DEST_OVER 	 7
%define CAIRO_OPERATOR_ATOP 	 5
%define CAIRO_OPERATOR_XOR 	 11
%define CAIRO_OPERATOR_DEST_IN 	 8
%define CAIRO_OPERATOR_DEST 	 6
%define CAIRO_OPERATOR_OVER 	 2
%define CAIRO_OPERATOR_DIFFERENCE 	 23
%define CAIRO_OPERATOR_LIGHTEN 	 18
%define CAIRO_OPERATOR_COLOR_DODGE 	 19
%define CAIRO_OPERATOR_ADD 	 12
%define CAIRO_OPERATOR_OVERLAY 	 16
%define CAIRO_OPERATOR_SOURCE 	 1
%define CAIRO_OPERATOR_HSL_COLOR 	 27

;;enum cairo_antialias_t
%define CAIRO_ANTIALIAS_GRAY 	 2
%define CAIRO_ANTIALIAS_NONE 	 1
%define CAIRO_ANTIALIAS_DEFAULT 	 0
%define CAIRO_ANTIALIAS_SUBPIXEL 	 3

;;enum cairo_fill_rule_t
%define CAIRO_FILL_RULE_EVEN_ODD 	 1
%define CAIRO_FILL_RULE_WINDING 	 0

;;enum cairo_line_cap_t
%define CAIRO_LINE_CAP_SQUARE 	 2
%define CAIRO_LINE_CAP_BUTT 	 0
%define CAIRO_LINE_CAP_ROUND 	 1

;;enum cairo_line_join_t
%define CAIRO_LINE_JOIN_ROUND 	 1
%define CAIRO_LINE_JOIN_MITER 	 0
%define CAIRO_LINE_JOIN_BEVEL 	 2

;;enum cairo_text_cluster_flags_t
%define CAIRO_TEXT_CLUSTER_FLAG_BACKWARD 	 0x00000001

;;enum cairo_font_slant_t
%define CAIRO_FONT_SLANT_NORMAL 	 0
%define CAIRO_FONT_SLANT_OBLIQUE 	 2
%define CAIRO_FONT_SLANT_ITALIC 	 1

;;enum cairo_font_weight_t
%define CAIRO_FONT_WEIGHT_NORMAL 	 0
%define CAIRO_FONT_WEIGHT_BOLD 	 1

;;enum cairo_subpixel_order_t
%define CAIRO_SUBPIXEL_ORDER_BGR 	 2
%define CAIRO_SUBPIXEL_ORDER_DEFAULT 	 0
%define CAIRO_SUBPIXEL_ORDER_VRGB 	 3
%define CAIRO_SUBPIXEL_ORDER_RGB 	 1
%define CAIRO_SUBPIXEL_ORDER_VBGR 	 4

;;enum cairo_hint_style_t
%define CAIRO_HINT_STYLE_DEFAULT 	 0
%define CAIRO_HINT_STYLE_FULL 	 4
%define CAIRO_HINT_STYLE_MEDIUM 	 3
%define CAIRO_HINT_STYLE_SLIGHT 	 2
%define CAIRO_HINT_STYLE_NONE 	 1

;;enum cairo_hint_metrics_t
%define CAIRO_HINT_METRICS_DEFAULT 	 0
%define CAIRO_HINT_METRICS_OFF 	 1
%define CAIRO_HINT_METRICS_ON 	 2

;;enum cairo_font_type_t
%define CAIRO_FONT_TYPE_QUARTZ 	 3
%define CAIRO_FONT_TYPE_WIN32 	 2
%define CAIRO_FONT_TYPE_USER 	 4
%define CAIRO_FONT_TYPE_FT 	 1
%define CAIRO_FONT_TYPE_TOY 	 0

;;enum cairo_path_data_type_t
%define CAIRO_PATH_LINE_TO 	 1
%define CAIRO_PATH_MOVE_TO 	 0
%define CAIRO_PATH_CURVE_TO 	 2
%define CAIRO_PATH_CLOSE_PATH 	 3

;;enum cairo_device_type_t
%define CAIRO_DEVICE_TYPE_XLIB 	 4
%define CAIRO_DEVICE_TYPE_DRM 	 0
%define CAIRO_DEVICE_TYPE_XML 	 5
%define CAIRO_DEVICE_TYPE_GL 	 1
%define CAIRO_DEVICE_TYPE_SCRIPT 	 2
%define CAIRO_DEVICE_TYPE_XCB 	 3

;;enum cairo_surface_type_t
%define CAIRO_SURFACE_TYPE_GL 	 18
%define CAIRO_SURFACE_TYPE_BEOS 	 8
%define CAIRO_SURFACE_TYPE_WIN32 	 7
%define CAIRO_SURFACE_TYPE_PS 	 2
%define CAIRO_SURFACE_TYPE_OS2 	 11
%define CAIRO_SURFACE_TYPE_QUARTZ 	 6
%define CAIRO_SURFACE_TYPE_SKIA 	 22
%define CAIRO_SURFACE_TYPE_XML 	 21
%define CAIRO_SURFACE_TYPE_GLITZ 	 5
%define CAIRO_SURFACE_TYPE_SCRIPT 	 14
%define CAIRO_SURFACE_TYPE_SUBSURFACE 	 23
%define CAIRO_SURFACE_TYPE_QUARTZ_IMAGE 	 13
%define CAIRO_SURFACE_TYPE_XLIB 	 3
%define CAIRO_SURFACE_TYPE_DIRECTFB 	 9
%define CAIRO_SURFACE_TYPE_TEE 	 20
%define CAIRO_SURFACE_TYPE_QT 	 15
%define CAIRO_SURFACE_TYPE_RECORDING 	 16
%define CAIRO_SURFACE_TYPE_IMAGE 	 0
%define CAIRO_SURFACE_TYPE_PDF 	 1
%define CAIRO_SURFACE_TYPE_SVG 	 10
%define CAIRO_SURFACE_TYPE_XCB 	 4
%define CAIRO_SURFACE_TYPE_VG 	 17
%define CAIRO_SURFACE_TYPE_DRM 	 19
%define CAIRO_SURFACE_TYPE_WIN32_PRINTING 	 12

;;enum cairo_format_t
%define CAIRO_FORMAT_A1 	 3
%define CAIRO_FORMAT_A8 	 2
%define CAIRO_FORMAT_ARGB32 	 0
%define CAIRO_FORMAT_INVALID 	 -1
%define CAIRO_FORMAT_RGB24 	 1
%define CAIRO_FORMAT_RGB16_565 	 4

;;enum cairo_pattern_type_t
%define CAIRO_PATTERN_TYPE_RADIAL 	 3
%define CAIRO_PATTERN_TYPE_SURFACE 	 1
%define CAIRO_PATTERN_TYPE_SOLID 	 0
%define CAIRO_PATTERN_TYPE_LINEAR 	 2

;;enum cairo_extend_t
%define CAIRO_EXTEND_PAD 	 3
%define CAIRO_EXTEND_REPEAT 	 1
%define CAIRO_EXTEND_REFLECT 	 2
%define CAIRO_EXTEND_NONE 	 0

;;enum cairo_filter_t
%define CAIRO_FILTER_BEST 	 2
%define CAIRO_FILTER_NEAREST 	 3
%define CAIRO_FILTER_FAST 	 0
%define CAIRO_FILTER_BILINEAR 	 4
%define CAIRO_FILTER_GOOD 	 1
%define CAIRO_FILTER_GAUSSIAN 	 5

;;enum cairo_region_overlap_t
%define CAIRO_REGION_OVERLAP_PART 	 2
%define CAIRO_REGION_OVERLAP_IN 	 0
%define CAIRO_REGION_OVERLAP_OUT 	 1

;;enum PangoCoverageLevel
%define PANGO_COVERAGE_FALLBACK 	 1
%define PANGO_COVERAGE_EXACT 	 3
%define PANGO_COVERAGE_NONE 	 0
%define PANGO_COVERAGE_APPROXIMATE 	 2

;;enum PangoGravity
%define PANGO_GRAVITY_WEST 	 3
%define PANGO_GRAVITY_SOUTH 	 0
%define PANGO_GRAVITY_NORTH 	 2
%define PANGO_GRAVITY_EAST 	 1
%define PANGO_GRAVITY_AUTO 	 4

;;enum PangoGravityHint
%define PANGO_GRAVITY_HINT_LINE 	 2
%define PANGO_GRAVITY_HINT_STRONG 	 1
%define PANGO_GRAVITY_HINT_NATURAL 	 0

;;enum PangoScript
%define PANGO_SCRIPT_TAGBANWA 	 44
%define PANGO_SCRIPT_NEW_TAI_LUE 	 53
%define PANGO_SCRIPT_GOTHIC 	 12
%define PANGO_SCRIPT_LINEAR_B 	 50
%define PANGO_SCRIPT_KANNADA 	 20
%define PANGO_SCRIPT_OGHAM 	 28
%define PANGO_SCRIPT_MONGOLIAN 	 26
%define PANGO_SCRIPT_COMMON 	 0
%define PANGO_SCRIPT_BOPOMOFO 	 4
%define PANGO_SCRIPT_SYLOTI_NAGRI 	 57
%define PANGO_SCRIPT_KHMER 	 22
%define PANGO_SCRIPT_LATIN 	 24
%define PANGO_SCRIPT_GLAGOLITIC 	 55
%define PANGO_SCRIPT_GREEK 	 13
%define PANGO_SCRIPT_DEVANAGARI 	 9
%define PANGO_SCRIPT_OLD_ITALIC 	 29
%define PANGO_SCRIPT_UNKNOWN 	 60
%define PANGO_SCRIPT_BRAILLE 	 45
%define PANGO_SCRIPT_HANUNOO 	 42
%define PANGO_SCRIPT_COPTIC 	 6
%define PANGO_SCRIPT_INHERITED 	 0
%define PANGO_SCRIPT_TIFINAGH 	 56
%define PANGO_SCRIPT_CUNEIFORM 	 62
%define PANGO_SCRIPT_GEORGIAN 	 11
%define PANGO_SCRIPT_YI 	 40
%define PANGO_SCRIPT_LYCIAN 	 75
%define PANGO_SCRIPT_SYRIAC 	 33
%define PANGO_SCRIPT_TAI_LE 	 51
%define PANGO_SCRIPT_LAO 	 23
%define PANGO_SCRIPT_PHAGS_PA 	 64
%define PANGO_SCRIPT_BALINESE 	 61
%define PANGO_SCRIPT_BUGINESE 	 54
%define PANGO_SCRIPT_CYPRIOT 	 46
%define PANGO_SCRIPT_TIBETAN 	 38
%define PANGO_SCRIPT_HANGUL 	 17
%define PANGO_SCRIPT_NKO 	 65
%define PANGO_SCRIPT_CYRILLIC 	 7
%define PANGO_SCRIPT_CHAM 	 71
%define PANGO_SCRIPT_HIRAGANA 	 19
%define PANGO_SCRIPT_TELUGU 	 35
%define PANGO_SCRIPT_RUNIC 	 31
%define PANGO_SCRIPT_SUNDANESE 	 69
%define PANGO_SCRIPT_KAYAH_LI 	 66
%define PANGO_SCRIPT_SINHALA 	 32
%define PANGO_SCRIPT_UGARITIC 	 52
%define PANGO_SCRIPT_DESERET 	 8
%define PANGO_SCRIPT_TAMIL 	 34
%define PANGO_SCRIPT_THAI 	 37
%define PANGO_SCRIPT_REJANG 	 68
%define PANGO_SCRIPT_KATAKANA 	 21
%define PANGO_SCRIPT_OLD_PERSIAN 	 58
%define PANGO_SCRIPT_HAN 	 16
%define PANGO_SCRIPT_ARABIC 	 1
%define PANGO_SCRIPT_KHAROSHTHI 	 59
%define PANGO_SCRIPT_MALAYALAM 	 25
%define PANGO_SCRIPT_OL_CHIKI 	 72
%define PANGO_SCRIPT_SAURASHTRA 	 70
%define PANGO_SCRIPT_LYDIAN 	 76

%define PANGO_SCRIPT_CHEROKEE 	 5
%define PANGO_SCRIPT_BUHID 	 43
%define PANGO_SCRIPT_TAGALOG 	 41
%define PANGO_SCRIPT_ETHIOPIC 	 10
%define PANGO_SCRIPT_VAI 	 73
%define PANGO_SCRIPT_INVALID_CODE 	 -1
%define PANGO_SCRIPT_LEPCHA 	 67
%define PANGO_SCRIPT_LIMBU 	 47
%define PANGO_SCRIPT_GURMUKHI 	 15
%define PANGO_SCRIPT_CARIAN 	 74
%define PANGO_SCRIPT_CANADIAN_ABORIGINAL 	 39
%define PANGO_SCRIPT_MYANMAR 	 27
%define PANGO_SCRIPT_ARMENIAN 	 2
%define PANGO_SCRIPT_OSMANYA 	 48
%define PANGO_SCRIPT_BENGALI 	 3
%define PANGO_SCRIPT_HEBREW 	 18
%define PANGO_SCRIPT_GUJARATI 	 14
%define PANGO_SCRIPT_PHOENICIAN 	 63
%define PANGO_SCRIPT_SHAVIAN 	 49
%define PANGO_SCRIPT_ORIYA 	 30
%define PANGO_SCRIPT_THAANA 	 36

;;enum PangoBidiType
%define PANGO_BIDI_TYPE_RLO 	 6
%define PANGO_BIDI_TYPE_ET 	 10
%define PANGO_BIDI_TYPE_B 	 15
%define PANGO_BIDI_TYPE_EN 	 8
%define PANGO_BIDI_TYPE_AL 	 4
%define PANGO_BIDI_TYPE_R 	 3
%define PANGO_BIDI_TYPE_NSM 	 13
%define PANGO_BIDI_TYPE_RLE 	 5
%define PANGO_BIDI_TYPE_LRE 	 1
%define PANGO_BIDI_TYPE_AN 	 11
%define PANGO_BIDI_TYPE_ES 	 9
%define PANGO_BIDI_TYPE_S 	 16
%define PANGO_BIDI_TYPE_L 	 0
%define PANGO_BIDI_TYPE_PDF 	 7
%define PANGO_BIDI_TYPE_WS 	 17
%define PANGO_BIDI_TYPE_BN 	 14
%define PANGO_BIDI_TYPE_ON 	 18
%define PANGO_BIDI_TYPE_LRO 	 2
%define PANGO_BIDI_TYPE_CS 	 12

;;enum PangoDirection
%define PANGO_DIRECTION_LTR 	 0
%define PANGO_DIRECTION_WEAK_RTL 	 5
%define PANGO_DIRECTION_NEUTRAL 	 6
%define PANGO_DIRECTION_RTL 	 1
%define PANGO_DIRECTION_TTB_LTR 	 2
%define PANGO_DIRECTION_TTB_RTL 	 3
%define PANGO_DIRECTION_WEAK_LTR 	 4

;;enum PangoStyle
%define PANGO_STYLE_OBLIQUE 	 1
%define PANGO_STYLE_ITALIC 	 2
%define PANGO_STYLE_NORMAL 	 0

;;enum PangoVariant
%define PANGO_VARIANT_NORMAL 	 0
%define PANGO_VARIANT_SMALL_CAPS 	 1

;;enum PangoWeight
%define PANGO_WEIGHT_HEAVY 	 900
%define PANGO_WEIGHT_ULTRABOLD 	 800
%define PANGO_WEIGHT_ULTRAHEAVY 	 1000
%define PANGO_WEIGHT_SEMIBOLD 	 600
%define PANGO_WEIGHT_BOLD 	 700
%define PANGO_WEIGHT_NORMAL 	 400
%define PANGO_WEIGHT_BOOK 	 380
%define PANGO_WEIGHT_LIGHT 	 300
%define PANGO_WEIGHT_MEDIUM 	 500
%define PANGO_WEIGHT_THIN 	 100
%define PANGO_WEIGHT_ULTRALIGHT 	 200

;;enum PangoStretch
%define PANGO_STRETCH_ULTRA_EXPANDED 	 8
%define PANGO_STRETCH_CONDENSED 	 2
%define PANGO_STRETCH_EXTRA_CONDENSED 	 1
%define PANGO_STRETCH_ULTRA_CONDENSED 	 0
%define PANGO_STRETCH_SEMI_CONDENSED 	 3
%define PANGO_STRETCH_NORMAL 	 4
%define PANGO_STRETCH_SEMI_EXPANDED 	 5
%define PANGO_STRETCH_EXPANDED 	 6
%define PANGO_STRETCH_EXTRA_EXPANDED 	 7

;;enum PangoFontMask
%define PANGO_FONT_MASK_SIZE 	 1 << 5
%define PANGO_FONT_MASK_STRETCH 	 1 << 4
%define PANGO_FONT_MASK_VARIANT 	 1 << 2
%define PANGO_FONT_MASK_STYLE 	 1 << 1
%define PANGO_FONT_MASK_GRAVITY 	 1 << 6
%define PANGO_FONT_MASK_WEIGHT 	 1 << 3
%define PANGO_FONT_MASK_FAMILY 	 1 << 0

;;enum PangoAttrType
%define PANGO_ATTR_ABSOLUTE_SIZE 	 20
%define PANGO_ATTR_SCALE 	 15
%define PANGO_ATTR_FALLBACK 	 16
%define PANGO_ATTR_STRETCH 	 6
%define PANGO_ATTR_BACKGROUND 	 10
%define PANGO_ATTR_RISE 	 13
%define PANGO_ATTR_GRAVITY_HINT 	 22
%define PANGO_ATTR_SIZE 	 7
%define PANGO_ATTR_STRIKETHROUGH_COLOR 	 19
%define PANGO_ATTR_UNDERLINE_COLOR 	 18
%define PANGO_ATTR_VARIANT 	 5
%define PANGO_ATTR_SHAPE 	 14
%define PANGO_ATTR_WEIGHT 	 4
%define PANGO_ATTR_STYLE 	 3
%define PANGO_ATTR_LANGUAGE 	 1
%define PANGO_ATTR_GRAVITY 	 21
%define PANGO_ATTR_INVALID 	 0
%define PANGO_ATTR_FONT_DESC 	 8
%define PANGO_ATTR_LETTER_SPACING 	 17
%define PANGO_ATTR_FAMILY 	 2
%define PANGO_ATTR_UNDERLINE 	 11
%define PANGO_ATTR_FOREGROUND 	 9
%define PANGO_ATTR_STRIKETHROUGH 	 12

;;enum PangoUnderline
%define PANGO_UNDERLINE_LOW 	 3
%define PANGO_UNDERLINE_NONE 	 0
%define PANGO_UNDERLINE_DOUBLE 	 2
%define PANGO_UNDERLINE_SINGLE 	 1
%define PANGO_UNDERLINE_ERROR 	 4

;;enum PangoTabAlign
%define PANGO_TAB_LEFT 	 0

;;enum PangoAlignment
%define PANGO_ALIGN_RIGHT 	 2
%define PANGO_ALIGN_LEFT 	 0
%define PANGO_ALIGN_CENTER 	 1

;;enum PangoWrapMode
%define PANGO_WRAP_WORD 	 0
%define PANGO_WRAP_WORD_CHAR 	 2
%define PANGO_WRAP_CHAR 	 1

;;enum PangoEllipsizeMode
%define PANGO_ELLIPSIZE_NONE 	 0
%define PANGO_ELLIPSIZE_END 	 3
%define PANGO_ELLIPSIZE_START 	 1
%define PANGO_ELLIPSIZE_MIDDLE 	 2

;;enum PangoRenderPart
%define PANGO_RENDER_PART_FOREGROUND 	 0
%define PANGO_RENDER_PART_UNDERLINE 	 2
%define PANGO_RENDER_PART_STRIKETHROUGH 	 3
%define PANGO_RENDER_PART_BACKGROUND 	 1

;;enum GdkByteOrder
%define GDK_MSB_FIRST 	 1
%define GDK_LSB_FIRST 	 0

;;enum GdkModifierType
%define GDK_MOD4_MASK 	 1 << 6
%define GDK_BUTTON1_MASK 	 1 << 8
%define GDK_MODIFIER_MASK 	 0x5c001fff
%define GDK_LOCK_MASK 	 1 << 1
%define GDK_HYPER_MASK 	 1 << 27
%define GDK_BUTTON4_MASK 	 1 << 11
%define GDK_SHIFT_MASK 	 1 << 0
%define GDK_BUTTON3_MASK 	 1 << 10
%define GDK_MOD3_MASK 	 1 << 5
%define GDK_MOD2_MASK 	 1 << 4
%define GDK_MOD5_MASK 	 1 << 7
%define GDK_SUPER_MASK 	 1 << 26
%define GDK_BUTTON5_MASK 	 1 << 12
%define GDK_META_MASK 	 1 << 28
%define GDK_BUTTON2_MASK 	 1 << 9
%define GDK_CONTROL_MASK 	 1 << 2
%define GDK_MOD1_MASK 	 1 << 3
%define GDK_RELEASE_MASK 	 1 << 30

;;enum GdkInputCondition
%define GDK_INPUT_WRITE 	 1 << 1
%define GDK_INPUT_READ 	 1 << 0
%define GDK_INPUT_EXCEPTION 	 1 << 2

;;enum GdkStatus
%define GDK_ERROR_PARAM 	 -2
%define GDK_OK 	 0
%define GDK_ERROR_MEM 	 -4
%define GDK_ERROR 	 -1
%define GDK_ERROR_FILE 	 -3

;;enum GdkGrabStatus
%define GDK_GRAB_FROZEN 	 4
%define GDK_GRAB_ALREADY_GRABBED 	 1
%define GDK_GRAB_SUCCESS 	 0
%define GDK_GRAB_NOT_VIEWABLE 	 3
%define GDK_GRAB_INVALID_TIME 	 2

;;enum GdkDragAction
%define GDK_ACTION_COPY 	 1 << 1
%define GDK_ACTION_DEFAULT 	 1 << 0
%define GDK_ACTION_ASK 	 1 << 5
%define GDK_ACTION_PRIVATE 	 1 << 4
%define GDK_ACTION_MOVE 	 1 << 2
%define GDK_ACTION_LINK 	 1 << 3

;;enum GdkDragProtocol
%define GDK_DRAG_PROTO_NONE 	 3
%define GDK_DRAG_PROTO_OLE2 	 5
%define GDK_DRAG_PROTO_ROOTWIN 	 2
%define GDK_DRAG_PROTO_WIN32_DROPFILES 	 4
%define GDK_DRAG_PROTO_LOCAL 	 6
%define GDK_DRAG_PROTO_XDND 	 1
%define GDK_DRAG_PROTO_MOTIF 	 0

;;enum GdkExtensionMode
%define GDK_EXTENSION_EVENTS_ALL 	 1
%define GDK_EXTENSION_EVENTS_NONE 	 0
%define GDK_EXTENSION_EVENTS_CURSOR 	 2

;;enum GdkInputSource
%define GDK_SOURCE_ERASER 	 2
%define GDK_SOURCE_PEN 	 1
%define GDK_SOURCE_MOUSE 	 0
%define GDK_SOURCE_CURSOR 	 3

;;enum GdkInputMode
%define GDK_MODE_SCREEN 	 1
%define GDK_MODE_DISABLED 	 0
%define GDK_MODE_WINDOW 	 2

;;enum GdkAxisUse
%define GDK_AXIS_Y 	 2
%define GDK_AXIS_X 	 1
%define GDK_AXIS_IGNORE 	 0
%define GDK_AXIS_LAST 	 7
%define GDK_AXIS_XTILT 	 4
%define GDK_AXIS_YTILT 	 5
%define GDK_AXIS_WHEEL 	 6
%define GDK_AXIS_PRESSURE 	 3

;;enum GdkFilterReturn
%define GDK_FILTER_CONTINUE 	 0
%define GDK_FILTER_REMOVE 	 2
%define GDK_FILTER_TRANSLATE 	 1

;;enum GdkEventType
%define GDK_SETTING 	 33
%define GDK_LEAVE_NOTIFY 	 11
%define GDK_3BUTTON_PRESS 	 6
%define GDK_CLIENT_EVENT 	 28
%define GDK_WINDOW_STATE 	 32
%define GDK_VISIBILITY_NOTIFY 	 29
%define GDK_SELECTION_NOTIFY 	 19
%define GDK_MOTION_NOTIFY 	 3
%define GDK_NOTHING 	 -1
%define GDK_SELECTION_CLEAR 	 17
%define GDK_SCROLL 	 31
%define GDK_OWNER_CHANGE 	 34
%define GDK_DRAG_LEAVE 	 23
%define GDK_EVENT_LAST 	 0
%define GDK_DROP_START 	 26
%define GDK_DESTROY 	 1
%define GDK_MAP 	 14
%define GDK_DELETE 	 0
%define GDK_2BUTTON_PRESS 	 5
%define GDK_BUTTON_PRESS 	 4
%define GDK_DROP_FINISHED 	 27
%define GDK_ENTER_NOTIFY 	 10
%define GDK_GRAB_BROKEN 	 35
%define GDK_DRAG_ENTER 	 22
%define GDK_UNMAP 	 15
%define GDK_CONFIGURE 	 13
%define GDK_PROPERTY_NOTIFY 	 16
%define GDK_FOCUS_CHANGE 	 12
%define GDK_SELECTION_REQUEST 	 18
%define GDK_KEY_RELEASE 	 9
%define GDK_DRAG_STATUS 	 25
%define GDK_DRAG_MOTION 	 24
%define GDK_PROXIMITY_IN 	 20
%define GDK_BUTTON_RELEASE 	 7
%define GDK_PROXIMITY_OUT 	 21
%define GDK_EXPOSE 	 2
%define GDK_DAMAGE 	 36
%define GDK_KEY_PRESS 	 8
%define GDK_NO_EXPOSE 	 30

;;enum GdkEventMask
%define GDK_PROXIMITY_OUT_MASK 	 1 << 19
%define GDK_KEY_PRESS_MASK 	 1 << 10
%define GDK_SCROLL_MASK 	 1 << 21
%define GDK_POINTER_MOTION_HINT_MASK 	 1 << 3
%define GDK_BUTTON_RELEASE_MASK 	 1 << 9
%define GDK_STRUCTURE_MASK 	 1 << 15
%define GDK_VISIBILITY_NOTIFY_MASK 	 1 << 17
%define GDK_LEAVE_NOTIFY_MASK 	 1 << 13
%define GDK_EXPOSURE_MASK 	 1 << 1
%define GDK_ALL_EVENTS_MASK 	 0x3FFFFE
%define GDK_PROPERTY_CHANGE_MASK 	 1 << 16
%define GDK_BUTTON_MOTION_MASK 	 1 << 4
%define GDK_BUTTON_PRESS_MASK 	 1 << 8
%define GDK_ENTER_NOTIFY_MASK 	 1 << 12
%define GDK_BUTTON1_MOTION_MASK 	 1 << 5
%define GDK_PROXIMITY_IN_MASK 	 1 << 18
%define GDK_SUBSTRUCTURE_MASK 	 1 << 20
%define GDK_FOCUS_CHANGE_MASK 	 1 << 14
%define GDK_BUTTON3_MOTION_MASK 	 1 << 7
%define GDK_BUTTON2_MOTION_MASK 	 1 << 6
%define GDK_POINTER_MOTION_MASK 	 1 << 2
%define GDK_KEY_RELEASE_MASK 	 1 << 11

;;enum GdkVisibilityState
%define GDK_VISIBILITY_FULLY_OBSCURED 	 2
%define GDK_VISIBILITY_UNOBSCURED 	 0
%define GDK_VISIBILITY_PARTIAL 	 1

;;enum GdkScrollDirection
%define GDK_SCROLL_RIGHT 	 3
%define GDK_SCROLL_DOWN 	 1
%define GDK_SCROLL_UP 	 0
%define GDK_SCROLL_LEFT 	 2

;;enum GdkNotifyType
%define GDK_NOTIFY_NONLINEAR 	 3
%define GDK_NOTIFY_NONLINEAR_VIRTUAL 	 4
%define GDK_NOTIFY_VIRTUAL 	 1
%define GDK_NOTIFY_UNKNOWN 	 5
%define GDK_NOTIFY_INFERIOR 	 2
%define GDK_NOTIFY_ANCESTOR 	 0

;;enum GdkCrossingMode
%define GDK_CROSSING_GTK_GRAB 	 3
%define GDK_CROSSING_GRAB 	 1
%define GDK_CROSSING_UNGRAB 	 2
%define GDK_CROSSING_STATE_CHANGED 	 5
%define GDK_CROSSING_NORMAL 	 0
%define GDK_CROSSING_GTK_UNGRAB 	 4

;;enum GdkPropertyState
%define GDK_PROPERTY_NEW_VALUE 	 0
%define GDK_PROPERTY_DELETE 	 1

;;enum GdkWindowState
%define GDK_WINDOW_STATE_MAXIMIZED 	 1 << 2
%define GDK_WINDOW_STATE_WITHDRAWN 	 1 << 0
%define GDK_WINDOW_STATE_ABOVE 	 1 << 5
%define GDK_WINDOW_STATE_ICONIFIED 	 1 << 1
%define GDK_WINDOW_STATE_BELOW 	 1 << 6
%define GDK_WINDOW_STATE_FULLSCREEN 	 1 << 4
%define GDK_WINDOW_STATE_STICKY 	 1 << 3

;;enum GdkSettingAction
%define GDK_SETTING_ACTION_DELETED 	 2
%define GDK_SETTING_ACTION_NEW 	 0
%define GDK_SETTING_ACTION_CHANGED 	 1

;;enum GdkOwnerChange
%define GDK_OWNER_CHANGE_DESTROY 	 1
%define GDK_OWNER_CHANGE_NEW_OWNER 	 0
%define GDK_OWNER_CHANGE_CLOSE 	 2

;;enum GdkRgbDither
%define GDK_RGB_DITHER_NORMAL 	 1
%define GDK_RGB_DITHER_NONE 	 0
%define GDK_RGB_DITHER_MAX 	 2

;;enum GdkPixbufAlphaMode
%define GDK_PIXBUF_ALPHA_BILEVEL 	 0
%define GDK_PIXBUF_ALPHA_FULL 	 1

;;enum GdkColorspace
%define GDK_COLORSPACE_RGB 	 0

;;enum GdkPixbufError
%define GDK_PIXBUF_ERROR_UNKNOWN_TYPE 	 3
%define GDK_PIXBUF_ERROR_BAD_OPTION 	 2
%define GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION 	 4
%define GDK_PIXBUF_ERROR_FAILED 	 5
%define GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY 	 1
%define GDK_PIXBUF_ERROR_CORRUPT_IMAGE 	 0

;;enum GdkInterpType
%define GDK_INTERP_TILES 	 1
%define GDK_INTERP_NEAREST 	 0
%define GDK_INTERP_BILINEAR 	 2
%define GDK_INTERP_HYPER 	 3

;;enum GdkPixbufRotation
%define GDK_PIXBUF_ROTATE_UPSIDEDOWN 	 180
%define GDK_PIXBUF_ROTATE_CLOCKWISE 	 270
%define GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE 	 90
%define GDK_PIXBUF_ROTATE_NONE 	 0

;;enum GdkCursorType
%define GDK_CROSS 	 30
%define GDK_EXCHANGE 	 50
%define GDK_WATCH 	 150
%define GDK_LEFTBUTTON 	 74
%define GDK_HAND1 	 58
%define GDK_SB_RIGHT_ARROW 	 112
%define GDK_HEART 	 62
%define GDK_BOTTOM_TEE 	 18
%define GDK_BOTTOM_LEFT_CORNER 	 12
%define GDK_COFFEE_MUG 	 28
%define GDK_LEFT_SIDE 	 70
%define GDK_RTL_LOGO 	 102
%define GDK_X_CURSOR 	 0
%define GDK_GUMBY 	 56
%define GDK_BOGOSITY 	 10
%define GDK_UMBRELLA 	 146
%define GDK_BASED_ARROW_DOWN 	 4
%define GDK_TCROSS 	 130
%define GDK_SAILBOAT 	 104
%define GDK_MAN 	 80
%define GDK_UL_ANGLE 	 144
%define GDK_ICON 	 64
%define GDK_CLOCK 	 26
%define GDK_PENCIL 	 86
%define GDK_LR_ANGLE 	 78
%define GDK_TOP_RIGHT_CORNER 	 136
%define GDK_SB_V_DOUBLE_ARROW 	 116
%define GDK_RIGHT_TEE 	 98
%define GDK_MOUSE 	 84
%define GDK_BOTTOM_SIDE 	 16
%define GDK_RIGHT_PTR 	 94
%define GDK_IRON_CROSS 	 66
%define GDK_TOP_SIDE 	 138
%define GDK_PIRATE 	 88
%define GDK_XTERM 	 152
%define GDK_CENTER_PTR 	 22
%define GDK_BOTTOM_RIGHT_CORNER 	 14
%define GDK_FLEUR 	 52
%define GDK_GOBBLER 	 54
%define GDK_DRAFT_SMALL 	 46
%define GDK_SB_H_DOUBLE_ARROW 	 108
%define GDK_DOTBOX 	 40
%define GDK_DRAPED_BOX 	 48
%define GDK_CIRCLE 	 24
%define GDK_ARROW 	 2
%define GDK_TOP_LEFT_ARROW 	 132
%define GDK_TREK 	 142
%define GDK_QUESTION_ARROW 	 92
%define GDK_SPIDER 	 122
%define GDK_LL_ANGLE 	 76
%define GDK_HAND2 	 60
%define GDK_SB_LEFT_ARROW 	 110
%define GDK_RIGHTBUTTON 	 100
%define GDK_CURSOR_IS_PIXMAP 	 -1
%define GDK_LEFT_TEE 	 72
%define GDK_LEFT_PTR 	 68
%define GDK_LAST_CURSOR 	 0
%define GDK_MIDDLEBUTTON 	 82
%define GDK_DOT 	 38
%define GDK_CROSS_REVERSE 	 32
%define GDK_BLANK_CURSOR 	 -2
%define GDK_SB_DOWN_ARROW 	 106
%define GDK_TARGET 	 128
%define GDK_SHUTTLE 	 118
%define GDK_DOUBLE_ARROW 	 42
%define GDK_TOP_LEFT_CORNER 	 134
%define GDK_UR_ANGLE 	 148
%define GDK_DIAMOND_CROSS 	 36
%define GDK_CROSSHAIR 	 34
%define GDK_BOAT 	 8
%define GDK_STAR 	 126
%define GDK_SIZING 	 120
%define GDK_BASED_ARROW_UP 	 6
%define GDK_PLUS 	 90
%define GDK_SB_UP_ARROW 	 114
%define GDK_RIGHT_SIDE 	 96
%define GDK_DRAFT_LARGE 	 44
%define GDK_TOP_TEE 	 140
%define GDK_SPRAYCAN 	 124
%define GDK_BOX_SPIRAL 	 20

;;enum GdkCapStyle
%define GDK_CAP_ROUND 	 2
%define GDK_CAP_BUTT 	 1
%define GDK_CAP_NOT_LAST 	 0
%define GDK_CAP_PROJECTING 	 3

;;enum GdkFill
%define GDK_STIPPLED 	 2
%define GDK_SOLID 	 0
%define GDK_OPAQUE_STIPPLED 	 3
%define GDK_TILED 	 1

;;enum GdkFunction
%define GDK_CLEAR 	 3
%define GDK_AND_INVERT 	 6
%define GDK_EQUIV 	 9
%define GDK_AND_REVERSE 	 5
%define GDK_INVERT 	 1
%define GDK_OR_INVERT 	 12
%define GDK_OR_REVERSE 	 10
%define GDK_NOR 	 14
%define GDK_OR 	 8
%define GDK_AND 	 4
%define GDK_COPY 	 0
%define GDK_NOOP 	 7
%define GDK_COPY_INVERT 	 11
%define GDK_SET 	 15
%define GDK_XOR 	 2
%define GDK_NAND 	 13

;;enum GdkJoinStyle
%define GDK_JOIN_ROUND 	 1
%define GDK_JOIN_BEVEL 	 2
%define GDK_JOIN_MITER 	 0

;;enum GdkLineStyle
%define GDK_LINE_ON_OFF_DASH 	 1
%define GDK_LINE_DOUBLE_DASH 	 2
%define GDK_LINE_SOLID 	 0

;;enum GdkSubwindowMode
%define GDK_CLIP_BY_CHILDREN 	 0
%define GDK_INCLUDE_INFERIORS 	 1

;;enum GdkGCValuesMask
%define GDK_GC_FILL 	 1 << 4
%define GDK_GC_TS_Y_ORIGIN 	 1 << 10
%define GDK_GC_JOIN_STYLE 	 1 << 17
%define GDK_GC_LINE_STYLE 	 1 << 15
%define GDK_GC_FOREGROUND 	 1 << 0
%define GDK_GC_FUNCTION 	 1 << 3
%define GDK_GC_TILE 	 1 << 5
%define GDK_GC_BACKGROUND 	 1 << 1
%define GDK_GC_CLIP_X_ORIGIN 	 1 << 11
%define GDK_GC_CLIP_Y_ORIGIN 	 1 << 12
%define GDK_GC_SUBWINDOW 	 1 << 8
%define GDK_GC_CAP_STYLE 	 1 << 16
%define GDK_GC_CLIP_MASK 	 1 << 7
%define GDK_GC_EXPOSURES 	 1 << 13
%define GDK_GC_FONT 	 1 << 2
%define GDK_GC_TS_X_ORIGIN 	 1 << 9
%define GDK_GC_LINE_WIDTH 	 1 << 14
%define GDK_GC_STIPPLE 	 1 << 6

;;enum GdkFontType
%define GDK_FONT_FONTSET 	 1
%define GDK_FONT_FONT 	 0

;;enum GdkImageType
%define GDK_IMAGE_FASTEST 	 2
%define GDK_IMAGE_SHARED 	 1
%define GDK_IMAGE_NORMAL 	 0

;;enum GdkPropMode
%define GDK_PROP_MODE_PREPEND 	 1
%define GDK_PROP_MODE_APPEND 	 2
%define GDK_PROP_MODE_REPLACE 	 0

;;enum GdkFillRule
%define GDK_EVEN_ODD_RULE 	 0
%define GDK_WINDING_RULE 	 1

;;enum GdkOverlapType
%define GDK_OVERLAP_RECTANGLE_PART 	 2
%define GDK_OVERLAP_RECTANGLE_IN 	 0
%define GDK_OVERLAP_RECTANGLE_OUT 	 1

;;enum GdkWindowClass
%define GDK_INPUT_OUTPUT 	 0
%define GDK_INPUT_ONLY 	 1

;;enum GdkWindowType
%define GDK_WINDOW_DIALOG 	 3
%define GDK_WINDOW_FOREIGN 	 5
%define GDK_WINDOW_CHILD 	 2
%define GDK_WINDOW_OFFSCREEN 	 6
%define GDK_WINDOW_ROOT 	 0
%define GDK_WINDOW_TOPLEVEL 	 1
%define GDK_WINDOW_TEMP 	 4

;;enum GdkWindowAttributesType
%define GDK_WA_WMCLASS 	 1 << 7
%define GDK_WA_CURSOR 	 1 << 4
%define GDK_WA_TYPE_HINT 	 1 << 9
%define GDK_WA_TITLE 	 1 << 1
%define GDK_WA_VISUAL 	 1 << 6
%define GDK_WA_COLORMAP 	 1 << 5
%define GDK_WA_X 	 1 << 2
%define GDK_WA_NOREDIR 	 1 << 8
%define GDK_WA_Y 	 1 << 3

;;enum GdkWindowHints
%define GDK_HINT_RESIZE_INC 	 1 << 5
%define GDK_HINT_MIN_SIZE 	 1 << 1
%define GDK_HINT_MAX_SIZE 	 1 << 2
%define GDK_HINT_BASE_SIZE 	 1 << 3
%define GDK_HINT_POS 	 1 << 0
%define GDK_HINT_WIN_GRAVITY 	 1 << 6
%define GDK_HINT_USER_SIZE 	 1 << 8
%define GDK_HINT_USER_POS 	 1 << 7
%define GDK_HINT_ASPECT 	 1 << 4

;;enum GdkWindowTypeHint
%define GDK_WINDOW_TYPE_HINT_DROPDOWN_MENU 	 8
%define GDK_WINDOW_TYPE_HINT_NORMAL 	 0
%define GDK_WINDOW_TYPE_HINT_DOCK 	 6
%define GDK_WINDOW_TYPE_HINT_POPUP_MENU 	 9
%define GDK_WINDOW_TYPE_HINT_DND 	 13
%define GDK_WINDOW_TYPE_HINT_MENU 	 2
%define GDK_WINDOW_TYPE_HINT_COMBO 	 12
%define GDK_WINDOW_TYPE_HINT_SPLASHSCREEN 	 4
%define GDK_WINDOW_TYPE_HINT_DIALOG 	 1
%define GDK_WINDOW_TYPE_HINT_UTILITY 	 5
%define GDK_WINDOW_TYPE_HINT_TOOLBAR 	 3
%define GDK_WINDOW_TYPE_HINT_NOTIFICATION 	 11
%define GDK_WINDOW_TYPE_HINT_TOOLTIP 	 10
%define GDK_WINDOW_TYPE_HINT_DESKTOP 	 7

;;enum GdkWMDecoration
%define GDK_DECOR_ALL 	 1 << 0
%define GDK_DECOR_MINIMIZE 	 1 << 5
%define GDK_DECOR_BORDER 	 1 << 1
%define GDK_DECOR_MENU 	 1 << 4
%define GDK_DECOR_RESIZEH 	 1 << 2
%define GDK_DECOR_TITLE 	 1 << 3
%define GDK_DECOR_MAXIMIZE 	 1 << 6

;;enum GdkWMFunction
%define GDK_FUNC_ALL 	 1 << 0
%define GDK_FUNC_MINIMIZE 	 1 << 3
%define GDK_FUNC_CLOSE 	 1 << 5
%define GDK_FUNC_MAXIMIZE 	 1 << 4
%define GDK_FUNC_MOVE 	 1 << 2
%define GDK_FUNC_RESIZE 	 1 << 1

;;enum GdkGravity
%define GDK_GRAVITY_STATIC 	 8
%define GDK_GRAVITY_SOUTH 	 6
%define GDK_GRAVITY_CENTER 	 3
%define GDK_GRAVITY_NORTH 	 0
%define GDK_GRAVITY_SOUTH_WEST 	 5
%define GDK_GRAVITY_EAST 	 4
%define GDK_GRAVITY_NORTH_WEST 	 1
%define GDK_GRAVITY_SOUTH_EAST 	 7
%define GDK_GRAVITY_NORTH_EAST 	 1
%define GDK_GRAVITY_WEST 	 2

;;enum GdkWindowEdge
%define GDK_WINDOW_EDGE_NORTH_EAST 	 2
%define GDK_WINDOW_EDGE_SOUTH 	 6
%define GDK_WINDOW_EDGE_NORTH 	 1
%define GDK_WINDOW_EDGE_NORTH_WEST 	 0
%define GDK_WINDOW_EDGE_EAST 	 4
%define GDK_WINDOW_EDGE_WEST 	 3
%define GDK_WINDOW_EDGE_SOUTH_EAST 	 7
%define GDK_WINDOW_EDGE_SOUTH_WEST 	 5

;;enum GdkVisualType
%define GDK_VISUAL_TRUE_COLOR 	 4
%define GDK_VISUAL_STATIC_GRAY 	 0
%define GDK_VISUAL_STATIC_COLOR 	 2
%define GDK_VISUAL_GRAYSCALE 	 1
%define GDK_VISUAL_DIRECT_COLOR 	 5
%define GDK_VISUAL_PSEUDO_COLOR 	 3

;;enum GtkAnchorType
%define GTK_ANCHOR_NORTH_WEST 	 2
%define GTK_ANCHOR_E 	 GTK_ANCHOR_EAST
%define GTK_ANCHOR_NE 	 GTK_ANCHOR_NORTH_EAST
%define GTK_ANCHOR_W 	 GTK_ANCHOR_WEST
%define GTK_ANCHOR_SE 	 GTK_ANCHOR_SOUTH_EAST
%define GTK_ANCHOR_S 	 GTK_ANCHOR_SOUTH
%define GTK_ANCHOR_SOUTH_EAST 	 6
%define GTK_ANCHOR_EAST 	 8
%define GTK_ANCHOR_NW 	 GTK_ANCHOR_NORTH_WEST
%define GTK_ANCHOR_SOUTH 	 4
%define GTK_ANCHOR_WEST 	 7
%define GTK_ANCHOR_NORTH_EAST 	 3
%define GTK_ANCHOR_SOUTH_WEST 	 5
%define GTK_ANCHOR_SW 	 GTK_ANCHOR_SOUTH_WEST
%define GTK_ANCHOR_NORTH 	 1
%define GTK_ANCHOR_CENTER 	 0
%define GTK_ANCHOR_N 	 GTK_ANCHOR_NORTH

;;enum GtkArrowPlacement
%define GTK_ARROWS_BOTH 	 0
%define GTK_ARROWS_END 	 2
%define GTK_ARROWS_START 	 1

;;enum GtkArrowType
%define GTK_ARROW_LEFT 	 2
%define GTK_ARROW_NONE 	 4
%define GTK_ARROW_UP 	 0
%define GTK_ARROW_DOWN 	 1
%define GTK_ARROW_RIGHT 	 3

;;enum GtkAttachOptions
%define GTK_FILL 	 1 << 2
%define GTK_EXPAND 	 1 << 0
%define GTK_SHRINK 	 1 << 1

;;enum GtkButtonBoxStyle
%define GTK_BUTTONBOX_END 	 4
%define GTK_BUTTONBOX_SPREAD 	 1
%define GTK_BUTTONBOX_CENTER 	 5
%define GTK_BUTTONBOX_DEFAULT_STYLE 	 0
%define GTK_BUTTONBOX_EDGE 	 2
%define GTK_BUTTONBOX_START 	 3

;;enum GtkCurveType
%define GTK_CURVE_TYPE_FREE 	 2
%define GTK_CURVE_TYPE_SPLINE 	 1
%define GTK_CURVE_TYPE_LINEAR 	 0

;;enum GtkDeleteType
%define GTK_DELETE_PARAGRAPH_ENDS 	 5
%define GTK_DELETE_WHITESPACE 	 7
%define GTK_DELETE_WORD_ENDS 	 1
%define GTK_DELETE_DISPLAY_LINE_ENDS 	 4
%define GTK_DELETE_DISPLAY_LINES 	 3
%define GTK_DELETE_CHARS 	 0
%define GTK_DELETE_PARAGRAPHS 	 6
%define GTK_DELETE_WORDS 	 2

;;enum GtkDirectionType
%define GTK_DIR_TAB_FORWARD 	 0
%define GTK_DIR_LEFT 	 4
%define GTK_DIR_RIGHT 	 5
%define GTK_DIR_DOWN 	 3
%define GTK_DIR_UP 	 2
%define GTK_DIR_TAB_BACKWARD 	 1

;;enum GtkExpanderStyle
%define GTK_EXPANDER_SEMI_EXPANDED 	 2
%define GTK_EXPANDER_EXPANDED 	 3
%define GTK_EXPANDER_COLLAPSED 	 0
%define GTK_EXPANDER_SEMI_COLLAPSED 	 1

;;enum GtkIconSize
%define GTK_ICON_SIZE_DIALOG 	 6
%define GTK_ICON_SIZE_INVALID 	 0
%define GTK_ICON_SIZE_DND 	 5
%define GTK_ICON_SIZE_BUTTON 	 4
%define GTK_ICON_SIZE_SMALL_TOOLBAR 	 2
%define GTK_ICON_SIZE_MENU 	 1
%define GTK_ICON_SIZE_LARGE_TOOLBAR 	 3

;;enum GtkSensitivityType
%define GTK_SENSITIVITY_ON 	 1
%define GTK_SENSITIVITY_OFF 	 2
%define GTK_SENSITIVITY_AUTO 	 0

;;enum GtkSideType
%define GTK_SIDE_TOP 	 0
%define GTK_SIDE_BOTTOM 	 1
%define GTK_SIDE_RIGHT 	 3
%define GTK_SIDE_LEFT 	 2

;;enum GtkTextDirection
%define GTK_TEXT_DIR_LTR 	 1
%define GTK_TEXT_DIR_NONE 	 0
%define GTK_TEXT_DIR_RTL 	 2

;;enum GtkJustification
%define GTK_JUSTIFY_RIGHT 	 1
%define GTK_JUSTIFY_CENTER 	 2
%define GTK_JUSTIFY_LEFT 	 0
%define GTK_JUSTIFY_FILL 	 3

;;enum GtkMatchType
%define GTK_MATCH_HEAD 	 2
%define GTK_MATCH_ALL_TAIL 	 1
%define GTK_MATCH_LAST 	 5
%define GTK_MATCH_EXACT 	 4
%define GTK_MATCH_ALL 	 0
%define GTK_MATCH_TAIL 	 3

;;enum GtkMenuDirectionType
%define GTK_MENU_DIR_CHILD 	 1
%define GTK_MENU_DIR_PARENT 	 0
%define GTK_MENU_DIR_NEXT 	 2
%define GTK_MENU_DIR_PREV 	 3

;;enum GtkMessageType
%define GTK_MESSAGE_QUESTION 	 2
%define GTK_MESSAGE_INFO 	 0
%define GTK_MESSAGE_OTHER 	 4
%define GTK_MESSAGE_ERROR 	 3
%define GTK_MESSAGE_WARNING 	 1

;;enum GtkMetricType
%define GTK_INCHES 	 1
%define GTK_PIXELS 	 0
%define GTK_CENTIMETERS 	 2

;;enum GtkMovementStep
%define GTK_MOVEMENT_BUFFER_ENDS 	 8
%define GTK_MOVEMENT_PARAGRAPHS 	 5
%define GTK_MOVEMENT_WORDS 	 2
%define GTK_MOVEMENT_DISPLAY_LINE_ENDS 	 4
%define GTK_MOVEMENT_PAGES 	 7
%define GTK_MOVEMENT_HORIZONTAL_PAGES 	 9
%define GTK_MOVEMENT_LOGICAL_POSITIONS 	 0
%define GTK_MOVEMENT_VISUAL_POSITIONS 	 1
%define GTK_MOVEMENT_PARAGRAPH_ENDS 	 6
%define GTK_MOVEMENT_DISPLAY_LINES 	 3

;;enum GtkScrollStep
%define GTK_SCROLL_HORIZONTAL_ENDS 	 5
%define GTK_SCROLL_HORIZONTAL_STEPS 	 3
%define GTK_SCROLL_STEPS 	 0
%define GTK_SCROLL_ENDS 	 2
%define GTK_SCROLL_PAGES 	 1
%define GTK_SCROLL_HORIZONTAL_PAGES 	 4

;;enum GtkOrientation
%define GTK_ORIENTATION_VERTICAL 	 1
%define GTK_ORIENTATION_HORIZONTAL 	 0

;;enum GtkCornerType
%define GTK_CORNER_BOTTOM_RIGHT 	 3
%define GTK_CORNER_BOTTOM_LEFT 	 1
%define GTK_CORNER_TOP_LEFT 	 0
%define GTK_CORNER_TOP_RIGHT 	 2

;;enum GtkPackType
%define GTK_PACK_START 	 0
%define GTK_PACK_END 	 1

;;enum GtkPathPriorityType
%define GTK_PATH_PRIO_THEME 	 10
%define GTK_PATH_PRIO_LOWEST 	 0
%define GTK_PATH_PRIO_RC 	 12
%define GTK_PATH_PRIO_GTK 	 4
%define GTK_PATH_PRIO_APPLICATION 	 8
%define GTK_PATH_PRIO_HIGHEST 	 15

;;enum GtkPathType
%define GTK_PATH_WIDGET_CLASS 	 1
%define GTK_PATH_CLASS 	 2
%define GTK_PATH_WIDGET 	 0

;;enum GtkPolicyType
%define GTK_POLICY_ALWAYS 	 0
%define GTK_POLICY_NEVER 	 2
%define GTK_POLICY_AUTOMATIC 	 1

;;enum GtkPositionType
%define GTK_POS_BOTTOM 	 3
%define GTK_POS_RIGHT 	 1
%define GTK_POS_TOP 	 2
%define GTK_POS_LEFT 	 0

;;enum GtkPreviewType
%define GTK_PREVIEW_COLOR 	 0
%define GTK_PREVIEW_GRAYSCALE 	 1

;;enum GtkReliefStyle
%define GTK_RELIEF_NORMAL 	 0
%define GTK_RELIEF_HALF 	 1
%define GTK_RELIEF_NONE 	 2

;;enum GtkResizeMode
%define GTK_RESIZE_QUEUE 	 1
%define GTK_RESIZE_IMMEDIATE 	 2
%define GTK_RESIZE_PARENT 	 0

;;enum GtkSignalRunType
%define GTK_RUN_LAST 	 G_SIGNAL_RUN_LAST
%define GTK_RUN_BOTH 	 (GTK_RUN_FIRST | GTK_RUN_LAST)
%define GTK_RUN_NO_HOOKS 	 G_SIGNAL_NO_HOOKS
%define GTK_RUN_NO_RECURSE 	 G_SIGNAL_NO_RECURSE
%define GTK_RUN_FIRST 	 G_SIGNAL_RUN_FIRST
%define GTK_RUN_ACTION 	 G_SIGNAL_ACTION

;;enum GtkScrollType
%define GTK_SCROLL_PAGE_UP 	 8
%define GTK_SCROLL_NONE 	 0
%define GTK_SCROLL_STEP_UP 	 6
%define GTK_SCROLL_PAGE_BACKWARD 	 4
%define GTK_SCROLL_PAGE_DOWN 	 9
%define GTK_SCROLL_STEP_FORWARD 	 3
%define GTK_SCROLL_STEP_DOWN 	 7
%define GTK_SCROLL_PAGE_RIGHT 	 13
%define GTK_SCROLL_JUMP 	 1
%define GTK_SCROLL_PAGE_LEFT 	 12
%define GTK_SCROLL_PAGE_FORWARD 	 5
%define GTK_SCROLL_START 	 14
%define GTK_SCROLL_STEP_RIGHT 	 11
%define GTK_SCROLL_STEP_BACKWARD 	 2
%define GTK_SCROLL_STEP_LEFT 	 10
%define GTK_SCROLL_END 	 15

;;enum GtkSelectionMode
%define GTK_SELECTION_MULTIPLE 	 3
%define GTK_SELECTION_NONE 	 0
%define GTK_SELECTION_EXTENDED 	 GTK_SELECTION_MULTIPLE
%define GTK_SELECTION_SINGLE 	 1
%define GTK_SELECTION_BROWSE 	 2

;;enum GtkShadowType
%define GTK_SHADOW_ETCHED_IN 	 3
%define GTK_SHADOW_ETCHED_OUT 	 4
%define GTK_SHADOW_OUT 	 2
%define GTK_SHADOW_IN 	 1
%define GTK_SHADOW_NONE 	 0

;;enum GtkStateType
%define GTK_STATE_INSENSITIVE 	 4
%define GTK_STATE_NORMAL 	 0
%define GTK_STATE_PRELIGHT 	 2
%define GTK_STATE_SELECTED 	 3
%define GTK_STATE_ACTIVE 	 1

;;enum GtkSubmenuDirection
%define GTK_DIRECTION_RIGHT 	 1
%define GTK_DIRECTION_LEFT 	 0

;;enum GtkSubmenuPlacement
%define GTK_LEFT_RIGHT 	 1
%define GTK_TOP_BOTTOM 	 0

;;enum GtkToolbarStyle
%define GTK_TOOLBAR_BOTH 	 2
%define GTK_TOOLBAR_TEXT 	 1
%define GTK_TOOLBAR_ICONS 	 0
%define GTK_TOOLBAR_BOTH_HORIZ 	 3

;;enum GtkUpdateType
%define GTK_UPDATE_DISCONTINUOUS 	 1
%define GTK_UPDATE_CONTINUOUS 	 0
%define GTK_UPDATE_DELAYED 	 2

;;enum GtkVisibility
%define GTK_VISIBILITY_NONE 	 0
%define GTK_VISIBILITY_FULL 	 2
%define GTK_VISIBILITY_PARTIAL 	 1

;;enum GtkWindowPosition
%define GTK_WIN_POS_CENTER_ALWAYS 	 3
%define GTK_WIN_POS_NONE 	 0
%define GTK_WIN_POS_MOUSE 	 2
%define GTK_WIN_POS_CENTER_ON_PARENT 	 4
%define GTK_WIN_POS_CENTER 	 1

;;enum GtkWindowType
%define GTK_WINDOW_TOPLEVEL 	 0
%define GTK_WINDOW_POPUP 	 1

;;enum GtkWrapMode
%define GTK_WRAP_CHAR 	 1
%define GTK_WRAP_WORD_CHAR 	 3
%define GTK_WRAP_WORD 	 2
%define GTK_WRAP_NONE 	 0

;;enum GtkSortType
%define GTK_SORT_DESCENDING 	 1
%define GTK_SORT_ASCENDING 	 0

;;enum GtkIMPreeditStyle
%define GTK_IM_PREEDIT_CALLBACK 	 1
%define GTK_IM_PREEDIT_NOTHING 	 0
%define GTK_IM_PREEDIT_NONE 	 2

;;enum GtkIMStatusStyle
%define GTK_IM_STATUS_NONE 	 2
%define GTK_IM_STATUS_NOTHING 	 0
%define GTK_IM_STATUS_CALLBACK 	 1

;;enum GtkPackDirection
%define GTK_PACK_DIRECTION_TTB 	 2
%define GTK_PACK_DIRECTION_RTL 	 1
%define GTK_PACK_DIRECTION_LTR 	 0
%define GTK_PACK_DIRECTION_BTT 	 3

;;enum GtkPrintPages
%define GTK_PRINT_PAGES_ALL 	 0
%define GTK_PRINT_PAGES_CURRENT 	 1
%define GTK_PRINT_PAGES_SELECTION 	 3
%define GTK_PRINT_PAGES_RANGES 	 2

;;enum GtkPageSet
%define GTK_PAGE_SET_EVEN 	 1


%define GTK_PAGE_SET_ODD 	 2
%define GTK_PAGE_SET_ALL 	 0

;;enum GtkNumberUpLayout
%define GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM 	 2
%define GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP 	 1
%define GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT 	 5
%define GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT 	 7
%define GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP 	 3
%define GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM 	 0
%define GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT 	 4
%define GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT 	 6

;;enum GtkPageOrientation
%define GTK_PAGE_ORIENTATION_LANDSCAPE 	 1
%define GTK_PAGE_ORIENTATION_REVERSE_PORTRAIT 	 2
%define GTK_PAGE_ORIENTATION_PORTRAIT 	 0
%define GTK_PAGE_ORIENTATION_REVERSE_LANDSCAPE 	 3

;;enum GtkPrintQuality
%define GTK_PRINT_QUALITY_HIGH 	 2
%define GTK_PRINT_QUALITY_DRAFT 	 3
%define GTK_PRINT_QUALITY_LOW 	 0
%define GTK_PRINT_QUALITY_NORMAL 	 1

;;enum GtkPrintDuplex
%define GTK_PRINT_DUPLEX_HORIZONTAL 	 1
%define GTK_PRINT_DUPLEX_VERTICAL 	 2
%define GTK_PRINT_DUPLEX_SIMPLEX 	 0

;;enum GtkUnit
%define GTK_UNIT_PIXEL 	 0
%define GTK_UNIT_POINTS 	 1
%define GTK_UNIT_MM 	 3
%define GTK_UNIT_INCH 	 2

;;enum GtkTreeViewGridLines
%define GTK_TREE_VIEW_GRID_LINES_BOTH 	 3
%define GTK_TREE_VIEW_GRID_LINES_HORIZONTAL 	 1
%define GTK_TREE_VIEW_GRID_LINES_VERTICAL 	 2
%define GTK_TREE_VIEW_GRID_LINES_NONE 	 0

;;enum GtkDragResult
%define GTK_DRAG_RESULT_SUCCESS 	 0
%define GTK_DRAG_RESULT_GRAB_BROKEN 	 4
%define GTK_DRAG_RESULT_TIMEOUT_EXPIRED 	 3
%define GTK_DRAG_RESULT_ERROR 	 5
%define GTK_DRAG_RESULT_USER_CANCELLED 	 2
%define GTK_DRAG_RESULT_NO_TARGET 	 1

;;enum GtkAccelFlags
%define GTK_ACCEL_MASK 	 0x07
%define GTK_ACCEL_LOCKED 	 1 << 1
%define GTK_ACCEL_VISIBLE 	 1 << 0

;;enum GtkDebugFlag
%define GTK_DEBUG_TEXT 	 1 << 2
%define GTK_DEBUG_ICONTHEME 	 1 << 9
%define GTK_DEBUG_PRINTING 	 1 << 10
%define GTK_DEBUG_MISC 	 1 << 0
%define GTK_DEBUG_UPDATES 	 1 << 4
%define GTK_DEBUG_BUILDER 	 1 << 11
%define GTK_DEBUG_TREE 	 1 << 3
%define GTK_DEBUG_GEOMETRY 	 1 << 8
%define GTK_DEBUG_PLUGSOCKET 	 1 << 1
%define GTK_DEBUG_KEYBINDINGS 	 1 << 5
%define GTK_DEBUG_MODULES 	 1 << 7
%define GTK_DEBUG_MULTIHEAD 	 1 << 6

;;enum GtkObjectFlags
%define GTK_RESERVED_1 	 1 << 2
%define GTK_RESERVED_2 	 1 << 3
%define GTK_IN_DESTRUCTION 	 1 << 0
%define GTK_FLOATING 	 1 << 1

;;enum GtkArgFlags
%define GTK_ARG_CONSTRUCT 	 G_PARAM_CONSTRUCT
%define GTK_ARG_READABLE 	 G_PARAM_READABLE
%define GTK_ARG_WRITABLE 	 G_PARAM_WRITABLE
%define GTK_ARG_CHILD_ARG 	 1 << 4
%define GTK_ARG_CONSTRUCT_ONLY 	 G_PARAM_CONSTRUCT_ONLY

;;enum GtkRcFlags
%define GTK_RC_BG 	 1 << 1
%define GTK_RC_TEXT 	 1 << 2
%define GTK_RC_FG 	 1 << 0
%define GTK_RC_BASE 	 1 << 3

;;enum GtkRcTokenType
%define GTK_RC_TOKEN_MODULE_PATH 	 30
%define GTK_RC_TOKEN_WIDGET 	 20
%define GTK_RC_TOKEN_ENGINE 	 29
%define GTK_RC_TOKEN_IM_MODULE_PATH 	 31
%define GTK_RC_TOKEN_LOWEST 	 23
%define GTK_RC_TOKEN_PRELIGHT 	 3
%define GTK_RC_TOKEN_FG 	 6
%define GTK_RC_TOKEN_YTHICKNESS 	 11
%define GTK_RC_TOKEN_THEME 	 26
%define GTK_RC_TOKEN_XTHICKNESS 	 10
%define GTK_RC_TOKEN_BG 	 7
%define GTK_RC_TOKEN_ACTIVE 	 2
%define GTK_RC_TOKEN_LTR 	 34
%define GTK_RC_TOKEN_LAST 	 38
%define GTK_RC_TOKEN_COLOR 	 36
%define GTK_RC_TOKEN_IM_MODULE_FILE 	 32
%define GTK_RC_TOKEN_UNBIND 	 37
%define GTK_RC_TOKEN_CLASS 	 22
%define GTK_RC_TOKEN_STYLE 	 17
%define GTK_RC_TOKEN_HIGHEST 	 28
%define GTK_RC_TOKEN_STOCK 	 33
%define GTK_RC_TOKEN_RC 	 27
%define GTK_RC_TOKEN_BIND 	 19
%define GTK_RC_TOKEN_TEXT 	 8
%define GTK_RC_TOKEN_APPLICATION 	 25
%define GTK_RC_TOKEN_BASE 	 9
%define GTK_RC_TOKEN_FONTSET 	 13
%define GTK_RC_TOKEN_GTK 	 24
%define GTK_RC_TOKEN_INVALID 	 G_TOKEN_LAST
%define GTK_RC_TOKEN_INSENSITIVE 	 5
%define GTK_RC_TOKEN_PIXMAP_PATH 	 16
%define GTK_RC_TOKEN_BINDING 	 18
%define GTK_RC_TOKEN_SELECTED 	 4
%define GTK_RC_TOKEN_RTL 	 35
%define GTK_RC_TOKEN_BG_PIXMAP 	 15
%define GTK_RC_TOKEN_INCLUDE 	 0
%define GTK_RC_TOKEN_WIDGET_CLASS 	 21
%define GTK_RC_TOKEN_FONT_NAME 	 14
%define GTK_RC_TOKEN_NORMAL 	 1
%define GTK_RC_TOKEN_FONT 	 12

;;enum AtkStateType
%define ATK_STATE_INVALID 	 0
%define ATK_STATE_EXPANDED 	 9
%define ATK_STATE_HORIZONTAL 	 12
%define ATK_STATE_PRESSED 	 18
%define ATK_STATE_CHECKED 	 4
%define ATK_STATE_ACTIVE 	 1
%define ATK_STATE_FOCUSABLE 	 10
%define ATK_STATE_BUSY 	 3
%define ATK_STATE_FOCUSED 	 11
%define ATK_STATE_ARMED 	 2
%define ATK_STATE_MULTI_LINE 	 15
%define ATK_STATE_ENABLED 	 7
%define ATK_STATE_OPAQUE 	 17
%define ATK_STATE_STALE 	 25
%define ATK_STATE_TRANSIENT 	 26
%define ATK_STATE_SINGLE_LINE 	 24
%define ATK_STATE_SUPPORTS_AUTOCOMPLETION 	 34
%define ATK_STATE_SENSITIVE 	 22
%define ATK_STATE_TRUNCATED 	 31
%define ATK_STATE_ICONIFIED 	 13
%define ATK_STATE_MULTISELECTABLE 	 16
%define ATK_STATE_INVALID_ENTRY 	 33
%define ATK_STATE_DEFAULT 	 36
%define ATK_STATE_SELECTABLE 	 20
%define ATK_STATE_INDETERMINATE 	 30
%define ATK_STATE_EDITABLE 	 6
%define ATK_STATE_ANIMATED 	 37
%define ATK_STATE_LAST_DEFINED 	 39
%define ATK_STATE_REQUIRED 	 32
%define ATK_STATE_VISITED 	 38
%define ATK_STATE_MODAL 	 14
%define ATK_STATE_VISIBLE 	 28
%define ATK_STATE_MANAGES_DESCENDANTS 	 29
%define ATK_STATE_RESIZABLE 	 19
%define ATK_STATE_SELECTED 	 21
%define ATK_STATE_SELECTABLE_TEXT 	 35
%define ATK_STATE_DEFUNCT 	 5
%define ATK_STATE_EXPANDABLE 	 8
%define ATK_STATE_VERTICAL 	 27
%define ATK_STATE_SHOWING 	 23

;;enum AtkRelationType
%define ATK_RELATION_LABEL_FOR 	 2
%define ATK_RELATION_NULL 	 0
%define ATK_RELATION_SUBWINDOW_OF 	 8
%define ATK_RELATION_NODE_PARENT_OF 	 15
%define ATK_RELATION_LABELLED_BY 	 3
%define ATK_RELATION_PARENT_WINDOW_OF 	 12
%define ATK_RELATION_POPUP_FOR 	 11
%define ATK_RELATION_EMBEDDED_BY 	 10
%define ATK_RELATION_CONTROLLER_FOR 	 1
%define ATK_RELATION_NODE_CHILD_OF 	 5
%define ATK_RELATION_DESCRIPTION_FOR 	 14
%define ATK_RELATION_MEMBER_OF 	 4
%define ATK_RELATION_LAST_DEFINED 	 16
%define ATK_RELATION_EMBEDS 	 9
%define ATK_RELATION_FLOWS_FROM 	 7
%define ATK_RELATION_FLOWS_TO 	 6
%define ATK_RELATION_CONTROLLED_BY 	 0
%define ATK_RELATION_DESCRIBED_BY 	 13

;;enum AtkRole
%define ATK_ROLE_DOCUMENT_FRAME 	 79
%define ATK_ROLE_FONT_CHOOSER 	 20
%define ATK_ROLE_PAGE_TAB_LIST 	 36
%define ATK_ROLE_ICON 	 24
%define ATK_ROLE_VIEWPORT 	 66
%define ATK_ROLE_TOOL_TIP 	 62
%define ATK_ROLE_STATUSBAR 	 52
%define ATK_ROLE_DIRECTORY_PANE 	 16
%define ATK_ROLE_RADIO_MENU_ITEM 	 43
%define ATK_ROLE_PAGE 	 81
%define ATK_ROLE_LIST_ITEM 	 30
%define ATK_ROLE_INTERNAL_FRAME 	 26
%define ATK_ROLE_IMAGE 	 25
%define ATK_ROLE_DRAWING_AREA 	 17
%define ATK_ROLE_CALENDAR 	 4
%define ATK_ROLE_AUTOCOMPLETE 	 73
%define ATK_ROLE_ANIMATION 	 2
%define ATK_ROLE_CHECK_MENU_ITEM 	 7
%define ATK_ROLE_ROW_HEADER 	 45
%define ATK_ROLE_REDUNDANT_OBJECT 	 83
%define ATK_ROLE_SECTION 	 82
%define ATK_ROLE_ACCEL_LABEL 	 0
%define ATK_ROLE_PASSWORD_TEXT 	 38
%define ATK_ROLE_PAGE_TAB 	 35
%define ATK_ROLE_INVALID 	 0
%define ATK_ROLE_SEPARATOR 	 48
%define ATK_ROLE_TREE_TABLE 	 64
%define ATK_ROLE_DIAL 	 14
%define ATK_ROLE_ROOT_PANE 	 44
%define ATK_ROLE_TREE 	 63
%define ATK_ROLE_DATE_EDITOR 	 11
%define ATK_ROLE_OPTION_PANE 	 34
%define ATK_ROLE_FOOTER 	 69
%define ATK_ROLE_CANVAS 	 5
%define ATK_ROLE_EMBEDDED 	 75
%define ATK_ROLE_TABLE_ROW_HEADER 	 56
%define ATK_ROLE_HTML_CONTAINER 	 23
%define ATK_ROLE_LAST_DEFINED 	 87
%define ATK_ROLE_MENU_ITEM 	 33
%define ATK_ROLE_DESKTOP_FRAME 	 13
%define ATK_ROLE_COLUMN_HEADER 	 9
%define ATK_ROLE_APPLICATION 	 72
%define ATK_ROLE_FRAME 	 21
%define ATK_ROLE_COLOR_CHOOSER 	 8
%define ATK_ROLE_TABLE 	 53
%define ATK_ROLE_SCROLL_BAR 	 46
%define ATK_ROLE_LABEL 	 27
%define ATK_ROLE_TABLE_COLUMN_HEADER 	 55
%define ATK_ROLE_HEADER 	 68
%define ATK_ROLE_SPLIT_PANE 	 50
%define ATK_ROLE_HEADING 	 80
%define ATK_ROLE_PARAGRAPH 	 70
%define ATK_ROLE_ALERT 	 1
%define ATK_ROLE_UNKNOWN 	 65
%define ATK_ROLE_TABLE_CELL 	 54
%define ATK_ROLE_INPUT_METHOD_WINDOW 	 86
%define ATK_ROLE_TERMINAL 	 58
%define ATK_ROLE_RULER 	 71
%define ATK_ROLE_FILLER 	 19
%define ATK_ROLE_DESKTOP_ICON 	 12
%define ATK_ROLE_PANEL 	 37
%define ATK_ROLE_LIST 	 29
%define ATK_ROLE_ARROW 	 3
%define ATK_ROLE_ENTRY 	 76
%define ATK_ROLE_EDITBAR 	 74
%define ATK_ROLE_PROGRESS_BAR 	 40
%define ATK_ROLE_DIALOG 	 15
%define ATK_ROLE_LAYERED_PANE 	 28
%define ATK_ROLE_TOOL_BAR 	 61
%define ATK_ROLE_CHART 	 77
%define ATK_ROLE_LINK 	 85
%define ATK_ROLE_TEAR_OFF_MENU_ITEM 	 57
%define ATK_ROLE_FORM 	 84
%define ATK_ROLE_MENU 	 31
%define ATK_ROLE_RADIO_BUTTON 	 42
%define ATK_ROLE_GLASS_PANE 	 22
%define ATK_ROLE_CHECK_BOX 	 6
%define ATK_ROLE_CAPTION 	 78
%define ATK_ROLE_TEXT 	 59
%define ATK_ROLE_SLIDER 	 49
%define ATK_ROLE_SCROLL_PANE 	 47
%define ATK_ROLE_FILE_CHOOSER 	 18
%define ATK_ROLE_PUSH_BUTTON 	 41
%define ATK_ROLE_TOGGLE_BUTTON 	 60
%define ATK_ROLE_COMBO_BOX 	 10
%define ATK_ROLE_SPIN_BUTTON 	 51
%define ATK_ROLE_MENU_BAR 	 32
%define ATK_ROLE_WINDOW 	 67
%define ATK_ROLE_POPUP_MENU 	 39

;;enum AtkLayer
%define ATK_LAYER_WINDOW 	 7
%define ATK_LAYER_MDI 	 4
%define ATK_LAYER_WIDGET 	 3
%define ATK_LAYER_CANVAS 	 2
%define ATK_LAYER_OVERLAY 	 6
%define ATK_LAYER_BACKGROUND 	 1
%define ATK_LAYER_INVALID 	 0
%define ATK_LAYER_POPUP 	 5

;;enum AtkKeyEventType
%define ATK_KEY_EVENT_PRESS 	 0
%define ATK_KEY_EVENT_LAST_DEFINED 	 2
%define ATK_KEY_EVENT_RELEASE 	 1

;;enum AtkCoordType
%define ATK_XY_WINDOW 	 1
%define ATK_XY_SCREEN 	 0

;;enum AtkTextAttribute
%define ATK_TEXT_ATTR_JUSTIFICATION 	 23
%define ATK_TEXT_ATTR_STRIKETHROUGH 	 11
%define ATK_TEXT_ATTR_EDITABLE 	 4
%define ATK_TEXT_ATTR_BG_FULL_HEIGHT 	 8
%define ATK_TEXT_ATTR_PIXELS_INSIDE_WRAP 	 7
%define ATK_TEXT_ATTR_STYLE 	 26
%define ATK_TEXT_ATTR_RISE 	 9
%define ATK_TEXT_ATTR_FAMILY_NAME 	 16
%define ATK_TEXT_ATTR_PIXELS_ABOVE_LINES 	 5
%define ATK_TEXT_ATTR_INDENT 	 2
%define ATK_TEXT_ATTR_LANGUAGE 	 15
%define ATK_TEXT_ATTR_VARIANT 	 25
%define ATK_TEXT_ATTR_DIRECTION 	 22
%define ATK_TEXT_ATTR_WEIGHT 	 14
%define ATK_TEXT_ATTR_INVISIBLE 	 3
%define ATK_TEXT_ATTR_FG_STIPPLE 	 20
%define ATK_TEXT_ATTR_STRETCH 	 24
%define ATK_TEXT_ATTR_SCALE 	 13
%define ATK_TEXT_ATTR_UNDERLINE 	 10
%define ATK_TEXT_ATTR_LAST_DEFINED 	 27
%define ATK_TEXT_ATTR_FG_COLOR 	 18
%define ATK_TEXT_ATTR_LEFT_MARGIN 	 0
%define ATK_TEXT_ATTR_RIGHT_MARGIN 	 1
%define ATK_TEXT_ATTR_BG_COLOR 	 17
%define ATK_TEXT_ATTR_SIZE 	 12
%define ATK_TEXT_ATTR_PIXELS_BELOW_LINES 	 6
%define ATK_TEXT_ATTR_WRAP_MODE 	 21
%define ATK_TEXT_ATTR_INVALID 	 0
%define ATK_TEXT_ATTR_BG_STIPPLE 	 19

;;enum AtkTextBoundary
%define ATK_TEXT_BOUNDARY_SENTENCE_START 	 3
%define ATK_TEXT_BOUNDARY_SENTENCE_END 	 4
%define ATK_TEXT_BOUNDARY_LINE_START 	 5
%define ATK_TEXT_BOUNDARY_LINE_END 	 6
%define ATK_TEXT_BOUNDARY_WORD_END 	 2
%define ATK_TEXT_BOUNDARY_CHAR 	 0
%define ATK_TEXT_BOUNDARY_WORD_START 	 1

;;enum AtkTextClipType
%define ATK_TEXT_CLIP_BOTH 	 3
%define ATK_TEXT_CLIP_MIN 	 1
%define ATK_TEXT_CLIP_NONE 	 0
%define ATK_TEXT_CLIP_MAX 	 2

;;enum AtkHyperlinkStateFlags
%define ATK_HYPERLINK_IS_INLINE 	 1 << 0

;;enum GtkWidgetFlags
%define GTK_REALIZED 	 1 << 6
%define GTK_COMPOSITE_CHILD 	 1 << 17
%define GTK_RECEIVES_DEFAULT 	 1 << 20
%define GTK_VISIBLE 	 1 << 8
%define GTK_HAS_GRAB 	 1 << 15
%define GTK_RC_STYLE 	 1 << 16
%define GTK_PARENT_SENSITIVE 	 1 << 10
%define GTK_CAN_DEFAULT 	 1 << 13
%define GTK_HAS_FOCUS 	 1 << 12
%define GTK_CAN_FOCUS 	 1 << 11
%define GTK_MAPPED 	 1 << 7
%define GTK_TOPLEVEL 	 1 << 4
%define GTK_NO_WINDOW 	 1 << 5
%define GTK_NO_SHOW_ALL 	 1 << 22
%define GTK_DOUBLE_BUFFERED 	 1 << 21
%define GTK_HAS_DEFAULT 	 1 << 14
%define GTK_SENSITIVE 	 1 << 9
%define GTK_APP_PAINTABLE 	 1 << 19
%define GTK_NO_REPARENT 	 1 << 18

;;enum GtkWidgetHelpType
%define GTK_WIDGET_HELP_TOOLTIP 	 0
%define GTK_WIDGET_HELP_WHATS_THIS 	 1

;;enum GtkDialogFlags
%define GTK_DIALOG_MODAL 	 1 << 0
%define GTK_DIALOG_NO_SEPARATOR 	 1 << 2
%define GTK_DIALOG_DESTROY_WITH_PARENT 	 1 << 1

;;enum GtkResponseType
%define GTK_RESPONSE_OK 	 -5
%define GTK_RESPONSE_NONE 	 -1
%define GTK_RESPONSE_REJECT 	 -2
%define GTK_RESPONSE_NO 	 -9
%define GTK_RESPONSE_YES 	 -8
%define GTK_RESPONSE_DELETE_EVENT 	 -4
%define GTK_RESPONSE_CLOSE 	 -7
%define GTK_RESPONSE_ACCEPT 	 -3
%define GTK_RESPONSE_CANCEL 	 -6
%define GTK_RESPONSE_HELP 	 -11
%define GTK_RESPONSE_APPLY 	 -10

;;enum GtkAssistantPageType
%define GTK_ASSISTANT_PAGE_CONFIRM 	 2
%define GTK_ASSISTANT_PAGE_PROGRESS 	 4
%define GTK_ASSISTANT_PAGE_SUMMARY 	 3
%define GTK_ASSISTANT_PAGE_CONTENT 	 0
%define GTK_ASSISTANT_PAGE_INTRO 	 1

;;enum GtkBuilderError
%define GTK_BUILDER_ERROR_INVALID_TYPE_FUNCTION 	 0
%define GTK_BUILDER_ERROR_UNHANDLED_TAG 	 1
%define GTK_BUILDER_ERROR_MISSING_ATTRIBUTE 	 2
%define GTK_BUILDER_ERROR_MISSING_PROPERTY_VALUE 	 5
%define GTK_BUILDER_ERROR_VERSION_MISMATCH 	 7
%define GTK_BUILDER_ERROR_INVALID_ATTRIBUTE 	 3
%define GTK_BUILDER_ERROR_DUPLICATE_ID 	 8
%define GTK_BUILDER_ERROR_INVALID_VALUE 	 6
%define GTK_BUILDER_ERROR_INVALID_TAG 	 4

;;enum GtkImageType
%define GTK_IMAGE_EMPTY 	 0
%define GTK_IMAGE_ANIMATION 	 6
%define GTK_IMAGE_PIXMAP 	 1
%define GTK_IMAGE_STOCK 	 4
%define GTK_IMAGE_ICON_SET 	 5
%define GTK_IMAGE_PIXBUF 	 3
%define GTK_IMAGE_ICON_NAME 	 7
%define GTK_IMAGE_GICON 	 8
%define GTK_IMAGE_IMAGE 	 2

;;enum GtkCalendarDisplayOptions
%define GTK_CALENDAR_SHOW_HEADING 	 1 << 0
%define GTK_CALENDAR_NO_MONTH_CHANGE 	 1 << 2
%define GTK_CALENDAR_WEEK_START_MONDAY 	 1 << 4
%define GTK_CALENDAR_SHOW_DAY_NAMES 	 1 << 1
%define GTK_CALENDAR_SHOW_WEEK_NUMBERS 	 1 << 3
%define GTK_CALENDAR_SHOW_DETAILS 	 1 << 5

;;enum GtkCellRendererState
%define GTK_CELL_RENDERER_SELECTED 	 1 << 0
%define GTK_CELL_RENDERER_SORTED 	 1 << 3
%define GTK_CELL_RENDERER_PRELIT 	 1 << 1
%define GTK_CELL_RENDERER_FOCUSED 	 1 << 4
%define GTK_CELL_RENDERER_INSENSITIVE 	 1 << 2

;;enum GtkCellRendererMode
%define GTK_CELL_RENDERER_MODE_INERT 	 0
%define GTK_CELL_RENDERER_MODE_EDITABLE 	 2
%define GTK_CELL_RENDERER_MODE_ACTIVATABLE 	 1

;;enum GtkTreeModelFlags
%define GTK_TREE_MODEL_ITERS_PERSIST 	 1 << 0
%define GTK_TREE_MODEL_LIST_ONLY 	 1 << 1

;;enum GtkTreeViewColumnSizing
%define GTK_TREE_VIEW_COLUMN_GROW_ONLY 	 0
%define GTK_TREE_VIEW_COLUMN_AUTOSIZE 	 1
%define GTK_TREE_VIEW_COLUMN_FIXED 	 2

;;enum GtkCellRendererAccelMode
%define GTK_CELL_RENDERER_ACCEL_MODE_GTK 	 0
%define GTK_CELL_RENDERER_ACCEL_MODE_OTHER 	 1

;;enum GtkTextSearchFlags
%define GTK_TEXT_SEARCH_TEXT_ONLY 	 1 << 1
%define GTK_TEXT_SEARCH_VISIBLE_ONLY 	 1 << 0

;;enum GtkDestDefaults
%define GTK_DEST_DEFAULT_DROP 	 1 << 2
%define GTK_DEST_DEFAULT_MOTION 	 1 << 0
%define GTK_DEST_DEFAULT_ALL 	 0x07
%define GTK_DEST_DEFAULT_HIGHLIGHT 	 1 << 1

;;enum GtkTargetFlags
%define GTK_TARGET_OTHER_WIDGET 	 1 << 3
%define GTK_TARGET_SAME_WIDGET 	 1 << 1
%define GTK_TARGET_OTHER_APP 	 1 << 2
%define GTK_TARGET_SAME_APP 	 1 << 0

;;enum GtkEntryIconPosition
%define GTK_ENTRY_ICON_SECONDARY 	 1
%define GTK_ENTRY_ICON_PRIMARY 	 0

;;enum GtkTreeViewDropPosition
%define GTK_TREE_VIEW_DROP_AFTER 	 1
%define GTK_TREE_VIEW_DROP_INTO_OR_AFTER 	 3
%define GTK_TREE_VIEW_DROP_BEFORE 	 0
%define GTK_TREE_VIEW_DROP_INTO_OR_BEFORE 	 2

;;enum GtkFileFilterFlags
%define GTK_FILE_FILTER_FILENAME 	 1 << 0
%define GTK_FILE_FILTER_DISPLAY_NAME 	 1 << 2
%define GTK_FILE_FILTER_MIME_TYPE 	 1 << 3
%define GTK_FILE_FILTER_URI 	 1 << 1

;;enum GtkFileChooserAction
%define GTK_FILE_CHOOSER_ACTION_OPEN 	 0
%define GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER 	 3
%define GTK_FILE_CHOOSER_ACTION_SAVE 	 1
%define GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER 	 2

;;enum GtkFileChooserConfirmation
%define GTK_FILE_CHOOSER_CONFIRMATION_CONFIRM 	 0
%define GTK_FILE_CHOOSER_CONFIRMATION_SELECT_AGAIN 	 2
%define GTK_FILE_CHOOSER_CONFIRMATION_ACCEPT_FILENAME 	 1

;;enum GtkFileChooserError

%define GTK_FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME 	 3
%define GTK_FILE_CHOOSER_ERROR_BAD_FILENAME 	 1
%define GTK_FILE_CHOOSER_ERROR_ALREADY_EXISTS 	 2
%define GTK_FILE_CHOOSER_ERROR_NONEXISTENT 	 0

;;enum GtkIconLookupFlags
%define GTK_ICON_LOOKUP_FORCE_SIZE 	 1 << 4
%define GTK_ICON_LOOKUP_USE_BUILTIN 	 1 << 2
%define GTK_ICON_LOOKUP_NO_SVG 	 1 << 0
%define GTK_ICON_LOOKUP_FORCE_SVG 	 1 << 1
%define GTK_ICON_LOOKUP_GENERIC_FALLBACK 	 1 << 3

;;enum GtkIconThemeError
%define GTK_ICON_THEME_NOT_FOUND 	 0
%define GTK_ICON_THEME_FAILED 	 1

;;enum GtkIconViewDropPosition
%define GTK_ICON_VIEW_DROP_RIGHT 	 3
%define GTK_ICON_VIEW_NO_DROP 	 0
%define GTK_ICON_VIEW_DROP_LEFT 	 2
%define GTK_ICON_VIEW_DROP_INTO 	 1
%define GTK_ICON_VIEW_DROP_ABOVE 	 4
%define GTK_ICON_VIEW_DROP_BELOW 	 5

;;enum GtkSizeGroupMode
%define GTK_SIZE_GROUP_HORIZONTAL 	 1
%define GTK_SIZE_GROUP_BOTH 	 3
%define GTK_SIZE_GROUP_VERTICAL 	 2
%define GTK_SIZE_GROUP_NONE 	 0

;;enum GtkButtonsType
%define GTK_BUTTONS_OK 	 1
%define GTK_BUTTONS_NONE 	 0
%define GTK_BUTTONS_YES_NO 	 4
%define GTK_BUTTONS_CANCEL 	 3
%define GTK_BUTTONS_CLOSE 	 2
%define GTK_BUTTONS_OK_CANCEL 	 5

;;enum GtkNotebookTab
%define GTK_NOTEBOOK_TAB_FIRST 	 0
%define GTK_NOTEBOOK_TAB_LAST 	 1

;;enum GtkPrintStatus
%define GTK_PRINT_STATUS_INITIAL 	 0
%define GTK_PRINT_STATUS_SENDING_DATA 	 3
%define GTK_PRINT_STATUS_PENDING 	 4
%define GTK_PRINT_STATUS_PREPARING 	 1
%define GTK_PRINT_STATUS_FINISHED 	 7
%define GTK_PRINT_STATUS_PRINTING 	 6
%define GTK_PRINT_STATUS_FINISHED_ABORTED 	 8
%define GTK_PRINT_STATUS_PENDING_ISSUE 	 5
%define GTK_PRINT_STATUS_GENERATING_DATA 	 2

;;enum GtkPrintOperationResult
%define GTK_PRINT_OPERATION_RESULT_APPLY 	 1
%define GTK_PRINT_OPERATION_RESULT_ERROR 	 0
%define GTK_PRINT_OPERATION_RESULT_IN_PROGRESS 	 3
%define GTK_PRINT_OPERATION_RESULT_CANCEL 	 2

;;enum GtkPrintOperationAction
%define GTK_PRINT_OPERATION_ACTION_PREVIEW 	 2
%define GTK_PRINT_OPERATION_ACTION_PRINT_DIALOG 	 0
%define GTK_PRINT_OPERATION_ACTION_EXPORT 	 3
%define GTK_PRINT_OPERATION_ACTION_PRINT 	 1

;;enum GtkPrintError
%define GTK_PRINT_ERROR_INVALID_FILE 	 3
%define GTK_PRINT_ERROR_NOMEM 	 2
%define GTK_PRINT_ERROR_GENERAL 	 0
%define GTK_PRINT_ERROR_INTERNAL_ERROR 	 1

;;enum GtkProgressBarStyle
%define GTK_PROGRESS_DISCRETE 	 1
%define GTK_PROGRESS_CONTINUOUS 	 0

;;enum GtkProgressBarOrientation
%define GTK_PROGRESS_LEFT_TO_RIGHT 	 0
%define GTK_PROGRESS_RIGHT_TO_LEFT 	 1
%define GTK_PROGRESS_TOP_TO_BOTTOM 	 3
%define GTK_PROGRESS_BOTTOM_TO_TOP 	 2

;;enum GtkRecentManagerError
%define GTK_RECENT_MANAGER_ERROR_INVALID_ENCODING 	 2
%define GTK_RECENT_MANAGER_ERROR_NOT_FOUND 	 0
%define GTK_RECENT_MANAGER_ERROR_READ 	 4
%define GTK_RECENT_MANAGER_ERROR_UNKNOWN 	 6
%define GTK_RECENT_MANAGER_ERROR_NOT_REGISTERED 	 3
%define GTK_RECENT_MANAGER_ERROR_WRITE 	 5
%define GTK_RECENT_MANAGER_ERROR_INVALID_URI 	 1

;;enum GtkRecentFilterFlags
%define GTK_RECENT_FILTER_GROUP 	 1 << 4
%define GTK_RECENT_FILTER_AGE 	 1 << 5
%define GTK_RECENT_FILTER_APPLICATION 	 1 << 3
%define GTK_RECENT_FILTER_URI 	 1 << 0
%define GTK_RECENT_FILTER_DISPLAY_NAME 	 1 << 1
%define GTK_RECENT_FILTER_MIME_TYPE 	 1 << 2

;;enum GtkRecentSortType
%define GTK_RECENT_SORT_NONE 	 0
%define GTK_RECENT_SORT_LRU 	 1
%define GTK_RECENT_SORT_MRU 	 0
%define GTK_RECENT_SORT_CUSTOM 	 2

;;enum GtkRecentChooserError
%define GTK_RECENT_CHOOSER_ERROR_NOT_FOUND 	 0
%define GTK_RECENT_CHOOSER_ERROR_INVALID_URI 	 1

;;enum GtkSpinButtonUpdatePolicy
%define GTK_UPDATE_IF_VALID 	 1
%define GTK_UPDATE_ALWAYS 	 0

;;enum GtkSpinType
%define GTK_SPIN_USER_DEFINED 	 6
%define GTK_SPIN_STEP_BACKWARD 	 1
%define GTK_SPIN_PAGE_FORWARD 	 2
%define GTK_SPIN_HOME 	 4
%define GTK_SPIN_PAGE_BACKWARD 	 3
%define GTK_SPIN_STEP_FORWARD 	 0
%define GTK_SPIN_END 	 5

;;enum GtkTextBufferTargetInfo
%define GTK_TEXT_BUFFER_TARGET_INFO_TEXT 	 - 3
%define GTK_TEXT_BUFFER_TARGET_INFO_RICH_TEXT 	 - 2
%define GTK_TEXT_BUFFER_TARGET_INFO_BUFFER_CONTENTS 	 - 1

;;enum GtkTextWindowType
%define GTK_TEXT_WINDOW_TEXT 	 2
%define GTK_TEXT_WINDOW_WIDGET 	 1
%define GTK_TEXT_WINDOW_TOP 	 5
%define GTK_TEXT_WINDOW_BOTTOM 	 6
%define GTK_TEXT_WINDOW_PRIVATE 	 0
%define GTK_TEXT_WINDOW_LEFT 	 3
%define GTK_TEXT_WINDOW_RIGHT 	 4

;;enum GtkToolbarChildType
%define GTK_TOOLBAR_CHILD_WIDGET 	 4
%define GTK_TOOLBAR_CHILD_TOGGLEBUTTON 	 2
%define GTK_TOOLBAR_CHILD_RADIOBUTTON 	 3
%define GTK_TOOLBAR_CHILD_BUTTON 	 1
%define GTK_TOOLBAR_CHILD_SPACE 	 0

;;enum GtkToolbarSpaceStyle
%define GTK_TOOLBAR_SPACE_LINE 	 1
%define GTK_TOOLBAR_SPACE_EMPTY 	 0

;;enum GtkToolPaletteDragTargets
%define GTK_TOOL_PALETTE_DRAG_GROUPS 	 (1 << 1)
%define GTK_TOOL_PALETTE_DRAG_ITEMS 	 (1 << 0)

;;enum GtkUIManagerItemType
%define GTK_UI_MANAGER_TOOLITEM 	 1 << 6
%define GTK_UI_MANAGER_POPUP 	 1 << 4
%define GTK_UI_MANAGER_AUTO 	 0
%define GTK_UI_MANAGER_MENU 	 1 << 1
%define GTK_UI_MANAGER_ACCELERATOR 	 1 << 8
%define GTK_UI_MANAGER_PLACEHOLDER 	 1 << 3
%define GTK_UI_MANAGER_POPUP_WITH_ACCELS 	 1 << 9
%define GTK_UI_MANAGER_MENUBAR 	 1 << 0
%define GTK_UI_MANAGER_MENUITEM 	 1 << 5
%define GTK_UI_MANAGER_TOOLBAR 	 1 << 2
%define GTK_UI_MANAGER_SEPARATOR 	 1 << 7

;;enum GtkCellType
%define GTK_CELL_TEXT 	 1
%define GTK_CELL_EMPTY 	 0
%define GTK_CELL_PIXTEXT 	 3
%define GTK_CELL_PIXMAP 	 2
%define GTK_CELL_WIDGET 	 4

;;enum GtkCListDragPos
%define GTK_CLIST_DRAG_INTO 	 2
%define GTK_CLIST_DRAG_AFTER 	 3
%define GTK_CLIST_DRAG_NONE 	 0
%define GTK_CLIST_DRAG_BEFORE 	 1

;;enum GtkButtonAction
%define GTK_BUTTON_SELECTS 	 1 << 0
%define GTK_BUTTON_EXPANDS 	 1 << 2
%define GTK_BUTTON_DRAGS 	 1 << 1
%define GTK_BUTTON_IGNORED 	 0

;;enum GtkCTreePos
%define GTK_CTREE_POS_BEFORE 	 0
%define GTK_CTREE_POS_AS_CHILD 	 1
%define GTK_CTREE_POS_AFTER 	 2

;;enum GtkCTreeLineStyle
%define GTK_CTREE_LINES_SOLID 	 1
%define GTK_CTREE_LINES_DOTTED 	 2
%define GTK_CTREE_LINES_NONE 	 0
%define GTK_CTREE_LINES_TABBED 	 3

;;enum GtkCTreeExpanderStyle
%define GTK_CTREE_EXPANDER_NONE 	 0
%define GTK_CTREE_EXPANDER_SQUARE 	 1
%define GTK_CTREE_EXPANDER_CIRCULAR 	 3
%define GTK_CTREE_EXPANDER_TRIANGLE 	 2

;;enum GtkCTreeExpansionType
%define GTK_CTREE_EXPANSION_COLLAPSE_RECURSIVE 	 3
%define GTK_CTREE_EXPANSION_COLLAPSE 	 2
%define GTK_CTREE_EXPANSION_TOGGLE 	 4
%define GTK_CTREE_EXPANSION_TOGGLE_RECURSIVE 	 5
%define GTK_CTREE_EXPANSION_EXPAND_RECURSIVE 	 1
%define GTK_CTREE_EXPANSION_EXPAND 	 0


%macro GTK_ACCEL_LABEL 1
	invoke gtk_accel_label_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ACCEL_LABEL_CLASS 1
	invoke gtk_accel_label_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ACCEL_LABEL 1
	invoke gtk_accel_label_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ACCEL_LABEL_CLASS 1
	invoke gtk_accel_label_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ACCESSIBLE 1
	invoke gtk_accessible_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ACCESSIBLE_CLASS 1
	invoke gtk_accessible_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ACCESSIBLE 1
	invoke gtk_accessible_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ACCESSIBLE_CLASS 1
	invoke gtk_accessible_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ACTION 1
	invoke gtk_action_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ACTION_CLASS 1
	invoke gtk_action_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ACTION 1
	invoke gtk_action_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ACTION_CLASS 1
	invoke gtk_action_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ACTION_GROUP 1
	invoke gtk_action_group_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ACTION_GROUP_CLASS 1


	invoke gtk_action_group_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ACTION_GROUP 1
	invoke gtk_action_group_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ACTION_GROUP_CLASS 1
	invoke gtk_action_group_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ACTIVATABLE 1
	invoke gtk_activatable_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ACTIVATABLE_CLASS 1
	invoke gtk_activatable_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ACTIVATABLE 1
	invoke gtk_activatable_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ACTIVATABLE_CLASS 1
	invoke gtk_activatable_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ADJUSTMENT 1
	invoke gtk_adjustment_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ADJUSTMENT_CLASS 1
	invoke gtk_adjustment_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ADJUSTMENT 1
	invoke gtk_adjustment_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ADJUSTMENT_CLASS 1
	invoke gtk_adjustment_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ALIGNMENT 1
	invoke gtk_alignment_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ALIGNMENT_CLASS 1
	invoke gtk_alignment_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ALIGNMENT 1
	invoke gtk_alignment_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ALIGNMENT_CLASS 1
	invoke gtk_alignment_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ARROW 1
	invoke gtk_arrow_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ARROW_CLASS 1
	invoke gtk_arrow_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ARROW 1
	invoke gtk_arrow_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ARROW_CLASS 1
	invoke gtk_arrow_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ASPECT_FRAME 1
	invoke gtk_aspect_frame_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ASPECT_FRAME_CLASS 1
	invoke gtk_aspect_frame_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ASPECT_FRAME 1
	invoke gtk_aspect_frame_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ASPECT_FRAME_CLASS 1
	invoke gtk_aspect_frame_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_BUTTON_BOX 1
	invoke gtk_button_box_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_BUTTON_BOX_CLASS 1
	invoke gtk_button_box_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_BUTTON_BOX 1
	invoke gtk_button_box_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_BUTTON_BOX_CLASS 1
	invoke gtk_button_box_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_BIN 1
	invoke gtk_bin_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_BIN_CLASS 1
	invoke gtk_bin_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_BIN 1
	invoke gtk_bin_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_BIN_CLASS 1
	invoke gtk_bin_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_BOX 1
	invoke gtk_box_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_BOX_CLASS 1
	invoke gtk_box_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_BOX 1
	invoke gtk_box_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_BOX_CLASS 1
	invoke gtk_box_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_BUILDABLE 1
	invoke gtk_buildable_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_BUILDABLE_CLASS 1
	invoke gtk_buildable_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_BUILDABLE 1
	invoke gtk_buildable_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_BUILDABLE_CLASS 1
	invoke gtk_buildable_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_BUILDER 1
	invoke gtk_builder_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_BUILDER_CLASS 1
	invoke gtk_builder_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_BUILDER 1
	invoke gtk_builder_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_BUILDER_CLASS 1
	invoke gtk_builder_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_BUTTON 1
	invoke gtk_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_BUTTON_CLASS 1
	invoke gtk_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_BUTTON 1
	invoke gtk_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_BUTTON_CLASS 1
	invoke gtk_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CALENDAR 1
	invoke gtk_calendar_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CALENDAR_CLASS 1
	invoke gtk_calendar_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CALENDAR 1
	invoke gtk_calendar_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CALENDAR_CLASS 1
	invoke gtk_calendar_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_EDITABLE 1
	invoke gtk_cell_editable_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_EDITABLE_CLASS 1
	invoke gtk_cell_editable_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_EDITABLE 1
	invoke gtk_cell_editable_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_EDITABLE_CLASS 1
	invoke gtk_cell_editable_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_LAYOUT 1
	invoke gtk_cell_layout_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_LAYOUT_CLASS 1
	invoke gtk_cell_layout_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_LAYOUT 1
	invoke gtk_cell_layout_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_LAYOUT_CLASS 1
	invoke gtk_cell_layout_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_RENDERER 1
	invoke gtk_cell_renderer_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_RENDERER_CLASS 1
	invoke gtk_cell_renderer_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER 1
	invoke gtk_cell_renderer_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_CLASS 1
	invoke gtk_cell_renderer_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_RENDERER_ACCEL 1
	invoke gtk_cell_renderer_accel_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_RENDERER_ACCEL_CLASS 1
	invoke gtk_cell_renderer_accel_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_ACCEL 1
	invoke gtk_cell_renderer_accel_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_ACCEL_CLASS 1
	invoke gtk_cell_renderer_accel_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_RENDERER_COMBO 1
	invoke gtk_cell_renderer_combo_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_RENDERER_COMBO_CLASS 1
	invoke gtk_cell_renderer_combo_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_COMBO 1
	invoke gtk_cell_renderer_combo_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_COMBO_CLASS 1
	invoke gtk_cell_renderer_combo_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_RENDERER_PIXBUF 1
	invoke gtk_cell_renderer_pixbuf_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_RENDERER_PIXBUF_CLASS 1
	invoke gtk_cell_renderer_pixbuf_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_PIXBUF 1
	invoke gtk_cell_renderer_pixbuf_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_PIXBUF_CLASS 1
	invoke gtk_cell_renderer_pixbuf_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_RENDERER_PROGRESS 1
	invoke gtk_cell_renderer_progress_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_RENDERER_PROGRESS_CLASS 1
	invoke gtk_cell_renderer_progress_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_PROGRESS 1
	invoke gtk_cell_renderer_progress_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_PROGRESS_CLASS 1
	invoke gtk_cell_renderer_progress_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_RENDERER_SPIN 1
	invoke gtk_cell_renderer_spin_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_RENDERER_SPIN_CLASS 1
	invoke gtk_cell_renderer_spin_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_SPIN 1
	invoke gtk_cell_renderer_spin_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_SPIN_CLASS 1
	invoke gtk_cell_renderer_spin_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_RENDERER_SPINNER 1
	invoke gtk_cell_renderer_spinner_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_RENDERER_SPINNER_CLASS 1
	invoke gtk_cell_renderer_spinner_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_SPINNER 1
	invoke gtk_cell_renderer_spinner_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_SPINNER_CLASS 1
	invoke gtk_cell_renderer_spinner_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_RENDERER_TEXT 1
	invoke gtk_cell_renderer_text_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_RENDERER_TEXT_CLASS 1
	invoke gtk_cell_renderer_text_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_TEXT 1
	invoke gtk_cell_renderer_text_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_TEXT_CLASS 1
	invoke gtk_cell_renderer_text_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_RENDERER_TOGGLE 1
	invoke gtk_cell_renderer_toggle_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_RENDERER_TOGGLE_CLASS 1
	invoke gtk_cell_renderer_toggle_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_TOGGLE 1
	invoke gtk_cell_renderer_toggle_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_RENDERER_TOGGLE_CLASS 1
	invoke gtk_cell_renderer_toggle_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CELL_VIEW 1
	invoke gtk_cell_view_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CELL_VIEW_CLASS 1
	invoke gtk_cell_view_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CELL_VIEW 1
	invoke gtk_cell_view_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CELL_VIEW_CLASS 1
	invoke gtk_cell_view_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CHECK_BUTTON 1
	invoke gtk_check_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CHECK_BUTTON_CLASS 1
	invoke gtk_check_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CHECK_BUTTON 1
	invoke gtk_check_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CHECK_BUTTON_CLASS 1
	invoke gtk_check_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CHECK_MENU_ITEM 1
	invoke gtk_check_menu_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CHECK_MENU_ITEM_CLASS 1
	invoke gtk_check_menu_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CHECK_MENU_ITEM 1
	invoke gtk_check_menu_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CHECK_MENU_ITEM_CLASS 1
	invoke gtk_check_menu_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CLIPBOARD 1
	invoke gtk_clipboard_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CLIPBOARD_CLASS 1
	invoke gtk_clipboard_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CLIPBOARD 1
	invoke gtk_clipboard_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CLIPBOARD_CLASS 1
	invoke gtk_clipboard_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CLIST 1
	invoke gtk_clist_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CLIST_CLASS 1
	invoke gtk_clist_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CLIST 1
	invoke gtk_clist_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CLIST_CLASS 1
	invoke gtk_clist_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_COLOR_BUTTON 1
	invoke gtk_color_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_COLOR_BUTTON_CLASS 1
	invoke gtk_color_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_COLOR_BUTTON 1
	invoke gtk_color_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_COLOR_BUTTON_CLASS 1
	invoke gtk_color_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_COLOR_SELECTION 1
	invoke gtk_color_selection_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_COLOR_SELECTION_CLASS 1
	invoke gtk_color_selection_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_COLOR_SELECTION 1
	invoke gtk_color_selection_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_COLOR_SELECTION_CLASS 1
	invoke gtk_color_selection_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_COLOR_SELECTION_DIALOG 1
	invoke gtk_color_selection_dialog_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_COLOR_SELECTION_DIALOG_CLASS 1
	invoke gtk_color_selection_dialog_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_COLOR_SELECTION_DIALOG 1
	invoke gtk_color_selection_dialog_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_COLOR_SELECTION_DIALOG_CLASS 1
	invoke gtk_color_selection_dialog_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_COMBO 1
	invoke gtk_combo_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_COMBO_CLASS 1
	invoke gtk_combo_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_COMBO 1
	invoke gtk_combo_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_COMBO_CLASS 1
	invoke gtk_combo_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_COMBO_BOX 1
	invoke gtk_combo_box_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_COMBO_BOX_CLASS 1
	invoke gtk_combo_box_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_COMBO_BOX 1
	invoke gtk_combo_box_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_COMBO_BOX_CLASS 1
	invoke gtk_combo_box_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_COMBO_BOX_ENTRY 1
	invoke gtk_combo_box_entry_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_COMBO_BOX_ENTRY_CLASS 1
	invoke gtk_combo_box_entry_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_COMBO_BOX_ENTRY 1
	invoke gtk_combo_box_entry_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_COMBO_BOX_ENTRY_CLASS 1
	invoke gtk_combo_box_entry_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_COMBO_BOX_TEXT 1
	invoke gtk_combo_box_text_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_COMBO_BOX_TEXT_CLASS 1
	invoke gtk_combo_box_text_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_COMBO_BOX_TEXT 1
	invoke gtk_combo_box_text_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_COMBO_BOX_TEXT_CLASS 1
	invoke gtk_combo_box_text_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CONTAINER 1
	invoke gtk_container_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CONTAINER_CLASS 1
	invoke gtk_container_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CONTAINER 1
	invoke gtk_container_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CONTAINER_CLASS 1
	invoke gtk_container_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CTREE 1
	invoke gtk_ctree_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CTREE_CLASS 1
	invoke gtk_ctree_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CTREE 1
	invoke gtk_ctree_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CTREE_CLASS 1
	invoke gtk_ctree_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_CURVE 1
	invoke gtk_curve_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_CURVE_CLASS 1
	invoke gtk_curve_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_CURVE 1
	invoke gtk_curve_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_CURVE_CLASS 1
	invoke gtk_curve_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_DIALOG 1
	invoke gtk_dialog_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_DIALOG_CLASS 1
	invoke gtk_dialog_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_DIALOG 1
	invoke gtk_dialog_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_DIALOG_CLASS 1
	invoke gtk_dialog_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_DRAWING_AREA 1
	invoke gtk_drawing_area_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_DRAWING_AREA_CLASS 1
	invoke gtk_drawing_area_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_DRAWING_AREA 1
	invoke gtk_drawing_area_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_DRAWING_AREA_CLASS 1
	invoke gtk_drawing_area_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_EDITABLE 1
	invoke gtk_editable_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_EDITABLE_CLASS 1
	invoke gtk_editable_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_EDITABLE 1
	invoke gtk_editable_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_EDITABLE_CLASS 1
	invoke gtk_editable_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ENTRY 1
	invoke gtk_entry_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ENTRY_CLASS 1
	invoke gtk_entry_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ENTRY 1
	invoke gtk_entry_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ENTRY_CLASS 1
	invoke gtk_entry_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ENTRY_BUFFER 1
	invoke gtk_entry_buffer_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ENTRY_BUFFER_CLASS 1
	invoke gtk_entry_buffer_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ENTRY_BUFFER 1
	invoke gtk_entry_buffer_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ENTRY_BUFFER_CLASS 1
	invoke gtk_entry_buffer_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ENTRY_COMPLETION 1
	invoke gtk_entry_completion_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ENTRY_COMPLETION_CLASS 1
	invoke gtk_entry_completion_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ENTRY_COMPLETION 1
	invoke gtk_entry_completion_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ENTRY_COMPLETION_CLASS 1
	invoke gtk_entry_completion_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_EVENT_BOX 1
	invoke gtk_event_box_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_EVENT_BOX_CLASS 1
	invoke gtk_event_box_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_EVENT_BOX 1
	invoke gtk_event_box_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_EVENT_BOX_CLASS 1
	invoke gtk_event_box_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_EXPANDER 1
	invoke gtk_expander_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_EXPANDER_CLASS 1
	invoke gtk_expander_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_EXPANDER 1
	invoke gtk_expander_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_EXPANDER_CLASS 1
	invoke gtk_expander_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FILE_CHOOSER 1
	invoke gtk_file_chooser_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FILE_CHOOSER_CLASS 1
	invoke gtk_file_chooser_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FILE_CHOOSER 1
	invoke gtk_file_chooser_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FILE_CHOOSER_CLASS 1
	invoke gtk_file_chooser_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FILE_CHOOSER_BUTTON 1
	invoke gtk_file_chooser_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FILE_CHOOSER_BUTTON_CLASS 1
	invoke gtk_file_chooser_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FILE_CHOOSER_BUTTON 1
	invoke gtk_file_chooser_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FILE_CHOOSER_BUTTON_CLASS 1
	invoke gtk_file_chooser_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FILE_CHOOSER_DIALOG 1
	invoke gtk_file_chooser_dialog_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FILE_CHOOSER_DIALOG_CLASS 1
	invoke gtk_file_chooser_dialog_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FILE_CHOOSER_DIALOG 1
	invoke gtk_file_chooser_dialog_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FILE_CHOOSER_DIALOG_CLASS 1
	invoke gtk_file_chooser_dialog_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FILE_CHOOSER_WIDGET 1
	invoke gtk_file_chooser_widget_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FILE_CHOOSER_WIDGET_CLASS 1
	invoke gtk_file_chooser_widget_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FILE_CHOOSER_WIDGET 1
	invoke gtk_file_chooser_widget_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FILE_CHOOSER_WIDGET_CLASS 1

	invoke gtk_file_chooser_widget_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FILE_FILTER 1
	invoke gtk_file_filter_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FILE_FILTER_CLASS 1
	invoke gtk_file_filter_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FILE_FILTER 1
	invoke gtk_file_filter_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FILE_FILTER_CLASS 1
	invoke gtk_file_filter_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FILE_SELECTION 1
	invoke gtk_file_selection_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FILE_SELECTION_CLASS 1
	invoke gtk_file_selection_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FILE_SELECTION 1
	invoke gtk_file_selection_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FILE_SELECTION_CLASS 1
	invoke gtk_file_selection_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FIXED 1
	invoke gtk_fixed_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FIXED_CLASS 1
	invoke gtk_fixed_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FIXED 1
	invoke gtk_fixed_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FIXED_CLASS 1
	invoke gtk_fixed_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FONT_BUTTON 1
	invoke gtk_font_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FONT_BUTTON_CLASS 1
	invoke gtk_font_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FONT_BUTTON 1
	invoke gtk_font_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FONT_BUTTON_CLASS 1
	invoke gtk_font_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FONT_SELECTION 1
	invoke gtk_font_selection_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FONT_SELECTION_CLASS 1
	invoke gtk_font_selection_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FONT_SELECTION 1
	invoke gtk_font_selection_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FONT_SELECTION_CLASS 1
	invoke gtk_font_selection_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FONT_SELECTION_DIALOG 1
	invoke gtk_font_selection_dialog_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FONT_SELECTION_DIALOG_CLASS 1
	invoke gtk_font_selection_dialog_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FONT_SELECTION_DIALOG 1
	invoke gtk_font_selection_dialog_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FONT_SELECTION_DIALOG_CLASS 1
	invoke gtk_font_selection_dialog_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_FRAME 1
	invoke gtk_frame_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_FRAME_CLASS 1
	invoke gtk_frame_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_FRAME 1
	invoke gtk_frame_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_FRAME_CLASS 1
	invoke gtk_frame_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_GAMMA_CURVE 1
	invoke gtk_gamma_curve_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_GAMMA_CURVE_CLASS 1
	invoke gtk_gamma_curve_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_GAMMA_CURVE 1
	invoke gtk_gamma_curve_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_GAMMA_CURVE_CLASS 1
	invoke gtk_gamma_curve_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_HANDLE_BOX 1
	invoke gtk_handle_box_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_HANDLE_BOX_CLASS 1
	invoke gtk_handle_box_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_HANDLE_BOX 1
	invoke gtk_handle_box_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_HANDLE_BOX_CLASS 1
	invoke gtk_handle_box_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_HBUTTON_BOX 1
	invoke gtk_hbutton_box_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_HBUTTON_BOX_CLASS 1
	invoke gtk_hbutton_box_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_HBUTTON_BOX 1
	invoke gtk_hbutton_box_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_HBUTTON_BOX_CLASS 1
	invoke gtk_hbutton_box_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_HBOX 1
	invoke gtk_hbox_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_HBOX_CLASS 1
	invoke gtk_hbox_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_HBOX 1
	invoke gtk_hbox_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_HBOX_CLASS 1
	invoke gtk_hbox_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_HPANED 1
	invoke gtk_hpaned_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_HPANED_CLASS 1
	invoke gtk_hpaned_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_HPANED 1
	invoke gtk_hpaned_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_HPANED_CLASS 1
	invoke gtk_hpaned_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_HRULER 1
	invoke gtk_hruler_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_HRULER_CLASS 1
	invoke gtk_hruler_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_HRULER 1
	invoke gtk_hruler_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_HRULER_CLASS 1
	invoke gtk_hruler_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_HSCALE 1
	invoke gtk_hscale_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_HSCALE_CLASS 1
	invoke gtk_hscale_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_HSCALE 1
	invoke gtk_hscale_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_HSCALE_CLASS 1
	invoke gtk_hscale_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_HSCROLLBAR 1
	invoke gtk_hscrollbar_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_HSCROLLBAR_CLASS 1
	invoke gtk_hscrollbar_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_HSCROLLBAR 1
	invoke gtk_hscrollbar_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_HSCROLLBAR_CLASS 1
	invoke gtk_hscrollbar_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_HSEPARATOR 1
	invoke gtk_hseparator_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_HSEPARATOR_CLASS 1
	invoke gtk_hseparator_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_HSEPARATOR 1
	invoke gtk_hseparator_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_HSEPARATOR_CLASS 1
	invoke gtk_hseparator_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_HSV 1
	invoke gtk_hsv_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_HSV_CLASS 1
	invoke gtk_hsv_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_HSV 1
	invoke gtk_hsv_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_HSV_CLASS 1
	invoke gtk_hsv_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ICON_THEME 1
	invoke gtk_icon_theme_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ICON_THEME_CLASS 1
	invoke gtk_icon_theme_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ICON_THEME 1
	invoke gtk_icon_theme_get_type


	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ICON_THEME_CLASS 1
	invoke gtk_icon_theme_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ICON_VIEW 1
	invoke gtk_icon_view_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ICON_VIEW_CLASS 1
	invoke gtk_icon_view_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ICON_VIEW 1
	invoke gtk_icon_view_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ICON_VIEW_CLASS 1
	invoke gtk_icon_view_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_IMAGE 1
	invoke gtk_image_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_IMAGE_CLASS 1
	invoke gtk_image_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_IMAGE 1
	invoke gtk_image_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_IMAGE_CLASS 1
	invoke gtk_image_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_IMAGE_MENU_ITEM 1
	invoke gtk_image_menu_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_IMAGE_MENU_ITEM_CLASS 1
	invoke gtk_image_menu_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_IMAGE_MENU_ITEM 1
	invoke gtk_image_menu_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_IMAGE_MENU_ITEM_CLASS 1
	invoke gtk_image_menu_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_IM_CONTEXT 1
	invoke gtk_im_context_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_IM_CONTEXT_CLASS 1
	invoke gtk_im_context_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_IM_CONTEXT 1
	invoke gtk_im_context_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_IM_CONTEXT_CLASS 1
	invoke gtk_im_context_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_IM_CONTEXT_SIMPLE 1
	invoke gtk_im_context_simple_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_IM_CONTEXT_SIMPLE_CLASS 1
	invoke gtk_im_context_simple_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_IM_CONTEXT_SIMPLE 1
	invoke gtk_im_context_simple_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_IM_CONTEXT_SIMPLE_CLASS 1
	invoke gtk_im_context_simple_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_IM_MULTICONTEXT 1
	invoke gtk_im_multicontext_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_IM_MULTICONTEXT_CLASS 1
	invoke gtk_im_multicontext_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_IM_MULTICONTEXT 1
	invoke gtk_im_multicontext_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_IM_MULTICONTEXT_CLASS 1
	invoke gtk_im_multicontext_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_INFO_BAR 1
	invoke gtk_info_bar_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_INFO_BAR_CLASS 1
	invoke gtk_info_bar_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_INFO_BAR 1
	invoke gtk_info_bar_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_INFO_BAR_CLASS 1
	invoke gtk_info_bar_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_INPUT_DIALOG 1
	invoke gtk_input_dialog_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_INPUT_DIALOG_CLASS 1
	invoke gtk_input_dialog_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_INPUT_DIALOG 1
	invoke gtk_input_dialog_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_INPUT_DIALOG_CLASS 1
	invoke gtk_input_dialog_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_INVISIBLE 1
	invoke gtk_invisible_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_INVISIBLE_CLASS 1
	invoke gtk_invisible_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_INVISIBLE 1
	invoke gtk_invisible_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_INVISIBLE_CLASS 1
	invoke gtk_invisible_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ITEM 1
	invoke gtk_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ITEM_CLASS 1
	invoke gtk_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ITEM 1
	invoke gtk_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ITEM_CLASS 1
	invoke gtk_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_LABEL 1
	invoke gtk_label_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_LABEL_CLASS 1
	invoke gtk_label_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_LABEL 1
	invoke gtk_label_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_LABEL_CLASS 1
	invoke gtk_label_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_LAYOUT 1
	invoke gtk_layout_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_LAYOUT_CLASS 1
	invoke gtk_layout_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_LAYOUT 1
	invoke gtk_layout_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_LAYOUT_CLASS 1
	invoke gtk_layout_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_LINK_BUTTON 1
	invoke gtk_link_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_LINK_BUTTON_CLASS 1
	invoke gtk_link_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_LINK_BUTTON 1
	invoke gtk_link_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_LINK_BUTTON_CLASS 1
	invoke gtk_link_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_LIST 1
	invoke gtk_list_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_LIST_CLASS 1
	invoke gtk_list_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_LIST 1
	invoke gtk_list_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_LIST_CLASS 1
	invoke gtk_list_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_LIST_ITEM 1
	invoke gtk_list_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_LIST_ITEM_CLASS 1
	invoke gtk_list_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_LIST_ITEM 1
	invoke gtk_list_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_LIST_ITEM_CLASS 1
	invoke gtk_list_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_LIST_STORE 1
	invoke gtk_list_store_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_LIST_STORE_CLASS 1
	invoke gtk_list_store_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_LIST_STORE 1
	invoke gtk_list_store_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_LIST_STORE_CLASS 1
	invoke gtk_list_store_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_MENU 1
	invoke gtk_menu_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_MENU_CLASS 1
	invoke gtk_menu_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_MENU 1
	invoke gtk_menu_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_MENU_CLASS 1
	invoke gtk_menu_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_MENU_BAR 1
	invoke gtk_menu_bar_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_MENU_BAR_CLASS 1
	invoke gtk_menu_bar_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_MENU_BAR 1
	invoke gtk_menu_bar_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_MENU_BAR_CLASS 1
	invoke gtk_menu_bar_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_MENU_ITEM 1
	invoke gtk_menu_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_MENU_ITEM_CLASS 1
	invoke gtk_menu_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_MENU_ITEM 1
	invoke gtk_menu_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_MENU_ITEM_CLASS 1
	invoke gtk_menu_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_MENU_SHELL 1
	invoke gtk_menu_shell_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_MENU_SHELL_CLASS 1
	invoke gtk_menu_shell_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_MENU_SHELL 1
	invoke gtk_menu_shell_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_MENU_SHELL_CLASS 1
	invoke gtk_menu_shell_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_MESSAGE_DIALOG 1
	invoke gtk_message_dialog_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_MESSAGE_DIALOG_CLASS 1
	invoke gtk_message_dialog_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_MESSAGE_DIALOG 1
	invoke gtk_message_dialog_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_MESSAGE_DIALOG_CLASS 1
	invoke gtk_message_dialog_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_MISC 1
	invoke gtk_misc_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_MISC_CLASS 1
	invoke gtk_misc_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_MISC 1
	invoke gtk_misc_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_MISC_CLASS 1
	invoke gtk_misc_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_NOTEBOOK 1
	invoke gtk_notebook_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_NOTEBOOK_CLASS 1
	invoke gtk_notebook_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_NOTEBOOK 1
	invoke gtk_notebook_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_NOTEBOOK_CLASS 1
	invoke gtk_notebook_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_OLD_EDITABLE 1
	invoke gtk_old_editable_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_OLD_EDITABLE_CLASS 1
	invoke gtk_old_editable_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_OLD_EDITABLE 1
	invoke gtk_old_editable_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_OLD_EDITABLE_CLASS 1
	invoke gtk_old_editable_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_OPTION_MENU 1
	invoke gtk_option_menu_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_OPTION_MENU_CLASS 1
	invoke gtk_option_menu_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_OPTION_MENU 1
	invoke gtk_option_menu_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_OPTION_MENU_CLASS 1
	invoke gtk_option_menu_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_ORIENTABLE 1
	invoke gtk_orientable_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_ORIENTABLE_CLASS 1
	invoke gtk_orientable_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_ORIENTABLE 1
	invoke gtk_orientable_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_ORIENTABLE_CLASS 1
	invoke gtk_orientable_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PAGE_SETUP 1
	invoke gtk_page_setup_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PAGE_SETUP_CLASS 1
	invoke gtk_page_setup_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PAGE_SETUP 1
	invoke gtk_page_setup_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PAGE_SETUP_CLASS 1
	invoke gtk_page_setup_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PANED 1
	invoke gtk_paned_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PANED_CLASS 1
	invoke gtk_paned_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PANED 1
	invoke gtk_paned_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PANED_CLASS 1
	invoke gtk_paned_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PIXMAP 1
	invoke gtk_pixmap_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PIXMAP_CLASS 1
	invoke gtk_pixmap_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PIXMAP 1
	invoke gtk_pixmap_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PIXMAP_CLASS 1
	invoke gtk_pixmap_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PLUG 1
	invoke gtk_plug_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PLUG_CLASS 1
	invoke gtk_plug_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PLUG 1
	invoke gtk_plug_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PLUG_CLASS 1
	invoke gtk_plug_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PREVIEW 1
	invoke gtk_preview_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PREVIEW_CLASS 1
	invoke gtk_preview_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PREVIEW 1
	invoke gtk_preview_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PREVIEW_CLASS 1
	invoke gtk_preview_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PRINT_CONTEXT 1
	invoke gtk_print_context_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PRINT_CONTEXT_CLASS 1
	invoke gtk_print_context_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PRINT_CONTEXT 1
	invoke gtk_print_context_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PRINT_CONTEXT_CLASS 1
	invoke gtk_print_context_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PRINT_OPERATION 1
	invoke gtk_print_operation_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PRINT_OPERATION_CLASS 1
	invoke gtk_print_operation_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PRINT_OPERATION 1
	invoke gtk_print_operation_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PRINT_OPERATION_CLASS 1
	invoke gtk_print_operation_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PRINT_OPERATION_PREVIEW 1
	invoke gtk_print_operation_preview_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PRINT_OPERATION_PREVIEW_CLASS 1
	invoke gtk_print_operation_preview_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PRINT_OPERATION_PREVIEW 1
	invoke gtk_print_operation_preview_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PRINT_OPERATION_PREVIEW_CLASS 1
	invoke gtk_print_operation_preview_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PRINT_SETTINGS 1
	invoke gtk_print_settings_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PRINT_SETTINGS_CLASS 1
	invoke gtk_print_settings_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PRINT_SETTINGS 1
	invoke gtk_print_settings_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro


%macro GTK_IS_PRINT_SETTINGS_CLASS 1
	invoke gtk_print_settings_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PROGRESS 1
	invoke gtk_progress_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PROGRESS_CLASS 1
	invoke gtk_progress_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PROGRESS 1
	invoke gtk_progress_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PROGRESS_CLASS 1
	invoke gtk_progress_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_PROGRESS_BAR 1
	invoke gtk_progress_bar_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_PROGRESS_BAR_CLASS 1
	invoke gtk_progress_bar_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_PROGRESS_BAR 1
	invoke gtk_progress_bar_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_PROGRESS_BAR_CLASS 1
	invoke gtk_progress_bar_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RADIO_ACTION 1
	invoke gtk_radio_action_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RADIO_ACTION_CLASS 1
	invoke gtk_radio_action_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RADIO_ACTION 1
	invoke gtk_radio_action_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RADIO_ACTION_CLASS 1
	invoke gtk_radio_action_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RADIO_BUTTON 1
	invoke gtk_radio_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RADIO_BUTTON_CLASS 1
	invoke gtk_radio_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RADIO_BUTTON 1
	invoke gtk_radio_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RADIO_BUTTON_CLASS 1
	invoke gtk_radio_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RADIO_MENU_ITEM 1
	invoke gtk_radio_menu_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RADIO_MENU_ITEM_CLASS 1
	invoke gtk_radio_menu_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RADIO_MENU_ITEM 1
	invoke gtk_radio_menu_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RADIO_MENU_ITEM_CLASS 1
	invoke gtk_radio_menu_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RADIO_TOOL_BUTTON 1
	invoke gtk_radio_tool_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RADIO_TOOL_BUTTON_CLASS 1
	invoke gtk_radio_tool_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RADIO_TOOL_BUTTON 1
	invoke gtk_radio_tool_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RADIO_TOOL_BUTTON_CLASS 1
	invoke gtk_radio_tool_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RANGE 1
	invoke gtk_range_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RANGE_CLASS 1
	invoke gtk_range_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RANGE 1
	invoke gtk_range_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RANGE_CLASS 1
	invoke gtk_range_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RECENT_ACTION 1
	invoke gtk_recent_action_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RECENT_ACTION_CLASS 1
	invoke gtk_recent_action_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RECENT_ACTION 1
	invoke gtk_recent_action_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RECENT_ACTION_CLASS 1
	invoke gtk_recent_action_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RECENT_CHOOSER 1
	invoke gtk_recent_chooser_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RECENT_CHOOSER_CLASS 1
	invoke gtk_recent_chooser_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RECENT_CHOOSER 1
	invoke gtk_recent_chooser_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RECENT_CHOOSER_CLASS 1
	invoke gtk_recent_chooser_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RECENT_CHOOSER_DIALOG 1
	invoke gtk_recent_chooser_dialog_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RECENT_CHOOSER_DIALOG_CLASS 1
	invoke gtk_recent_chooser_dialog_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RECENT_CHOOSER_DIALOG 1
	invoke gtk_recent_chooser_dialog_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RECENT_CHOOSER_DIALOG_CLASS 1
	invoke gtk_recent_chooser_dialog_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RECENT_CHOOSER_MENU 1
	invoke gtk_recent_chooser_menu_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RECENT_CHOOSER_MENU_CLASS 1
	invoke gtk_recent_chooser_menu_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RECENT_CHOOSER_MENU 1
	invoke gtk_recent_chooser_menu_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RECENT_CHOOSER_MENU_CLASS 1
	invoke gtk_recent_chooser_menu_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RECENT_CHOOSER_WIDGET 1
	invoke gtk_recent_chooser_widget_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RECENT_CHOOSER_WIDGET_CLASS 1
	invoke gtk_recent_chooser_widget_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RECENT_CHOOSER_WIDGET 1
	invoke gtk_recent_chooser_widget_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RECENT_CHOOSER_WIDGET_CLASS 1
	invoke gtk_recent_chooser_widget_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RECENT_FILTER 1
	invoke gtk_recent_filter_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RECENT_FILTER_CLASS 1
	invoke gtk_recent_filter_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RECENT_FILTER 1
	invoke gtk_recent_filter_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RECENT_FILTER_CLASS 1
	invoke gtk_recent_filter_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RECENT_MANAGER 1
	invoke gtk_recent_manager_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RECENT_MANAGER_CLASS 1
	invoke gtk_recent_manager_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RECENT_MANAGER 1
	invoke gtk_recent_manager_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RECENT_MANAGER_CLASS 1
	invoke gtk_recent_manager_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_RULER 1
	invoke gtk_ruler_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_RULER_CLASS 1
	invoke gtk_ruler_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_RULER 1
	invoke gtk_ruler_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_RULER_CLASS 1
	invoke gtk_ruler_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SCALE 1
	invoke gtk_scale_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SCALE_CLASS 1
	invoke gtk_scale_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SCALE 1
	invoke gtk_scale_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SCALE_CLASS 1
	invoke gtk_scale_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SCALE_BUTTON 1
	invoke gtk_scale_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SCALE_BUTTON_CLASS 1
	invoke gtk_scale_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SCALE_BUTTON 1
	invoke gtk_scale_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SCALE_BUTTON_CLASS 1
	invoke gtk_scale_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SCROLLBAR 1
	invoke gtk_scrollbar_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SCROLLBAR_CLASS 1
	invoke gtk_scrollbar_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SCROLLBAR 1
	invoke gtk_scrollbar_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SCROLLBAR_CLASS 1
	invoke gtk_scrollbar_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SCROLLED_WINDOW 1
	invoke gtk_scrolled_window_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SCROLLED_WINDOW_CLASS 1
	invoke gtk_scrolled_window_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SCROLLED_WINDOW 1
	invoke gtk_scrolled_window_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SCROLLED_WINDOW_CLASS 1
	invoke gtk_scrolled_window_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SEPARATOR 1
	invoke gtk_separator_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SEPARATOR_CLASS 1
	invoke gtk_separator_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SEPARATOR 1
	invoke gtk_separator_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SEPARATOR_CLASS 1
	invoke gtk_separator_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SEPARATOR_MENU_ITEM 1
	invoke gtk_separator_menu_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SEPARATOR_MENU_ITEM_CLASS 1
	invoke gtk_separator_menu_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SEPARATOR_MENU_ITEM 1
	invoke gtk_separator_menu_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SEPARATOR_MENU_ITEM_CLASS 1
	invoke gtk_separator_menu_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SEPARATOR_TOOL_ITEM 1
	invoke gtk_separator_tool_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SEPARATOR_TOOL_ITEM_CLASS 1
	invoke gtk_separator_tool_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SEPARATOR_TOOL_ITEM 1
	invoke gtk_separator_tool_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SEPARATOR_TOOL_ITEM_CLASS 1
	invoke gtk_separator_tool_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SETTINGS 1
	invoke gtk_settings_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SETTINGS_CLASS 1
	invoke gtk_settings_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SETTINGS 1
	invoke gtk_settings_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SETTINGS_CLASS 1
	invoke gtk_settings_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SIZE_GROUP 1
	invoke gtk_size_group_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SIZE_GROUP_CLASS 1
	invoke gtk_size_group_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SIZE_GROUP 1
	invoke gtk_size_group_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SIZE_GROUP_CLASS 1
	invoke gtk_size_group_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SOCKET 1
	invoke gtk_socket_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SOCKET_CLASS 1
	invoke gtk_socket_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SOCKET 1
	invoke gtk_socket_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SOCKET_CLASS 1
	invoke gtk_socket_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SPIN_BUTTON 1
	invoke gtk_spin_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SPIN_BUTTON_CLASS 1
	invoke gtk_spin_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SPIN_BUTTON 1
	invoke gtk_spin_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SPIN_BUTTON_CLASS 1
	invoke gtk_spin_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_SPINNER 1
	invoke gtk_spinner_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_SPINNER_CLASS 1
	invoke gtk_spinner_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_SPINNER 1
	invoke gtk_spinner_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_SPINNER_CLASS 1
	invoke gtk_spinner_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_STATUSBAR 1
	invoke gtk_statusbar_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_STATUSBAR_CLASS 1
	invoke gtk_statusbar_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_STATUSBAR 1
	invoke gtk_statusbar_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_STATUSBAR_CLASS 1
	invoke gtk_statusbar_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TABLE 1
	invoke gtk_table_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TABLE_CLASS 1
	invoke gtk_table_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TABLE 1
	invoke gtk_table_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TABLE_CLASS 1
	invoke gtk_table_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TEAROFF_MENU_ITEM 1
	invoke gtk_tearoff_menu_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TEAROFF_MENU_ITEM_CLASS 1
	invoke gtk_tearoff_menu_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TEAROFF_MENU_ITEM 1
	invoke gtk_tearoff_menu_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TEAROFF_MENU_ITEM_CLASS 1
	invoke gtk_tearoff_menu_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TEXT 1
	invoke gtk_text_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TEXT_CLASS 1
	invoke gtk_text_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TEXT 1
	invoke gtk_text_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TEXT_CLASS 1
	invoke gtk_text_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TEXT_BUFFER 1
	invoke gtk_text_buffer_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TEXT_BUFFER_CLASS 1
	invoke gtk_text_buffer_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TEXT_BUFFER 1
	invoke gtk_text_buffer_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TEXT_BUFFER_CLASS 1
	invoke gtk_text_buffer_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TEXT_LAYOUT 1
	invoke gtk_text_layout_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TEXT_LAYOUT_CLASS 1
	invoke gtk_text_layout_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TEXT_LAYOUT 1
	invoke gtk_text_layout_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TEXT_LAYOUT_CLASS 1
	invoke gtk_text_layout_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TEXT_TAG 1
	invoke gtk_text_tag_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TEXT_TAG_CLASS 1
	invoke gtk_text_tag_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TEXT_TAG 1
	invoke gtk_text_tag_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TEXT_TAG_CLASS 1
	invoke gtk_text_tag_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TEXT_TAG_TABLE 1
	invoke gtk_text_tag_table_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TEXT_TAG_TABLE_CLASS 1
	invoke gtk_text_tag_table_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TEXT_TAG_TABLE 1
	invoke gtk_text_tag_table_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TEXT_TAG_TABLE_CLASS 1
	invoke gtk_text_tag_table_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TEXT_VIEW 1
	invoke gtk_text_view_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TEXT_VIEW_CLASS 1
	invoke gtk_text_view_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TEXT_VIEW 1
	invoke gtk_text_view_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TEXT_VIEW_CLASS 1
	invoke gtk_text_view_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TIPS_QUERY 1
	invoke gtk_tips_query_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TIPS_QUERY_CLASS 1
	invoke gtk_tips_query_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TIPS_QUERY 1
	invoke gtk_tips_query_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TIPS_QUERY_CLASS 1
	invoke gtk_tips_query_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOGGLE_ACTION 1
	invoke gtk_toggle_action_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOGGLE_ACTION_CLASS 1
	invoke gtk_toggle_action_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOGGLE_ACTION 1
	invoke gtk_toggle_action_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOGGLE_ACTION_CLASS 1
	invoke gtk_toggle_action_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOGGLE_BUTTON 1
	invoke gtk_toggle_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOGGLE_BUTTON_CLASS 1
	invoke gtk_toggle_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOGGLE_BUTTON 1
	invoke gtk_toggle_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOGGLE_BUTTON_CLASS 1
	invoke gtk_toggle_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOGGLE_TOOL_BUTTON 1
	invoke gtk_toggle_tool_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOGGLE_TOOL_BUTTON_CLASS 1
	invoke gtk_toggle_tool_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOGGLE_TOOL_BUTTON 1
	invoke gtk_toggle_tool_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOGGLE_TOOL_BUTTON_CLASS 1
	invoke gtk_toggle_tool_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOOLBAR 1
	invoke gtk_toolbar_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOOLBAR_CLASS 1
	invoke gtk_toolbar_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOOLBAR 1
	invoke gtk_toolbar_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOOLBAR_CLASS 1
	invoke gtk_toolbar_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOOL_BUTTON 1
	invoke gtk_tool_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOOL_BUTTON_CLASS 1
	invoke gtk_tool_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOOL_BUTTON 1
	invoke gtk_tool_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOOL_BUTTON_CLASS 1
	invoke gtk_tool_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOOL_ITEM_GROUP 1
	invoke gtk_tool_item_group_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOOL_ITEM_GROUP_CLASS 1
	invoke gtk_tool_item_group_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOOL_ITEM_GROUP 1
	invoke gtk_tool_item_group_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOOL_ITEM_GROUP_CLASS 1
	invoke gtk_tool_item_group_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOOL_PALETTE 1
	invoke gtk_tool_palette_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOOL_PALETTE_CLASS 1
	invoke gtk_tool_palette_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOOL_PALETTE 1
	invoke gtk_tool_palette_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOOL_PALETTE_CLASS 1
	invoke gtk_tool_palette_get_type

	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOOL_SHELL 1
	invoke gtk_tool_shell_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOOL_SHELL_CLASS 1
	invoke gtk_tool_shell_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOOL_SHELL 1
	invoke gtk_tool_shell_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOOL_SHELL_CLASS 1
	invoke gtk_tool_shell_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOOLTIP 1
	invoke gtk_tooltip_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOOLTIP_CLASS 1
	invoke gtk_tooltip_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOOLTIP 1
	invoke gtk_tooltip_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOOLTIP_CLASS 1
	invoke gtk_tooltip_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TOOLTIPS 1
	invoke gtk_tooltips_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TOOLTIPS_CLASS 1
	invoke gtk_tooltips_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TOOLTIPS 1
	invoke gtk_tooltips_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TOOLTIPS_CLASS 1
	invoke gtk_tooltips_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE 1
	invoke gtk_tree_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_CLASS 1
	invoke gtk_tree_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE 1
	invoke gtk_tree_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_CLASS 1
	invoke gtk_tree_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_DRAG_SOURCE 1
	invoke gtk_tree_drag_source_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_DRAG_SOURCE_CLASS 1
	invoke gtk_tree_drag_source_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_DRAG_SOURCE 1
	invoke gtk_tree_drag_source_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_DRAG_SOURCE_CLASS 1
	invoke gtk_tree_drag_source_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_DRAG_DEST 1
	invoke gtk_tree_drag_dest_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_DRAG_DEST_CLASS 1
	invoke gtk_tree_drag_dest_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_DRAG_DEST 1
	invoke gtk_tree_drag_dest_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_DRAG_DEST_CLASS 1
	invoke gtk_tree_drag_dest_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_ITEM 1
	invoke gtk_tree_item_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_ITEM_CLASS 1
	invoke gtk_tree_item_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_ITEM 1
	invoke gtk_tree_item_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_ITEM_CLASS 1
	invoke gtk_tree_item_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_MODEL 1
	invoke gtk_tree_model_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_MODEL_CLASS 1
	invoke gtk_tree_model_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_MODEL 1
	invoke gtk_tree_model_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_MODEL_CLASS 1
	invoke gtk_tree_model_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_MODEL_FILTER 1
	invoke gtk_tree_model_filter_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_MODEL_FILTER_CLASS 1
	invoke gtk_tree_model_filter_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_MODEL_FILTER 1
	invoke gtk_tree_model_filter_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_MODEL_FILTER_CLASS 1
	invoke gtk_tree_model_filter_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_MODEL_SORT 1
	invoke gtk_tree_model_sort_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_MODEL_SORT_CLASS 1
	invoke gtk_tree_model_sort_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_MODEL_SORT 1
	invoke gtk_tree_model_sort_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_MODEL_SORT_CLASS 1
	invoke gtk_tree_model_sort_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_SELECTION 1
	invoke gtk_tree_selection_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_SELECTION_CLASS 1
	invoke gtk_tree_selection_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_SELECTION 1
	invoke gtk_tree_selection_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_SELECTION_CLASS 1
	invoke gtk_tree_selection_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_SORTABLE 1
	invoke gtk_tree_sortable_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_SORTABLE_CLASS 1
	invoke gtk_tree_sortable_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_SORTABLE 1
	invoke gtk_tree_sortable_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_SORTABLE_CLASS 1
	invoke gtk_tree_sortable_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_STORE 1
	invoke gtk_tree_store_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_STORE_CLASS 1
	invoke gtk_tree_store_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_STORE 1
	invoke gtk_tree_store_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_STORE_CLASS 1
	invoke gtk_tree_store_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_VIEW 1
	invoke gtk_tree_view_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_VIEW_CLASS 1
	invoke gtk_tree_view_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_VIEW 1
	invoke gtk_tree_view_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_VIEW_CLASS 1
	invoke gtk_tree_view_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_TREE_VIEW_COLUMN 1
	invoke gtk_tree_view_column_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_TREE_VIEW_COLUMN_CLASS 1
	invoke gtk_tree_view_column_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_TREE_VIEW_COLUMN 1
	invoke gtk_tree_view_column_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_TREE_VIEW_COLUMN_CLASS 1
	invoke gtk_tree_view_column_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_UI_MANAGER 1
	invoke gtk_ui_manager_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_UI_MANAGER_CLASS 1
	invoke gtk_ui_manager_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_UI_MANAGER 1
	invoke gtk_ui_manager_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_UI_MANAGER_CLASS 1
	invoke gtk_ui_manager_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_VBUTTON_BOX 1
	invoke gtk_vbutton_box_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_VBUTTON_BOX_CLASS 1
	invoke gtk_vbutton_box_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_VBUTTON_BOX 1
	invoke gtk_vbutton_box_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_VBUTTON_BOX_CLASS 1
	invoke gtk_vbutton_box_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_VBOX 1
	invoke gtk_vbox_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_VBOX_CLASS 1
	invoke gtk_vbox_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_VBOX 1
	invoke gtk_vbox_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_VBOX_CLASS 1
	invoke gtk_vbox_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_VIEWPORT 1
	invoke gtk_viewport_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_VIEWPORT_CLASS 1
	invoke gtk_viewport_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_VIEWPORT 1
	invoke gtk_viewport_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_VIEWPORT_CLASS 1
	invoke gtk_viewport_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_VOLUME_BUTTON 1
	invoke gtk_volume_button_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_VOLUME_BUTTON_CLASS 1
	invoke gtk_volume_button_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_VOLUME_BUTTON 1
	invoke gtk_volume_button_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_VOLUME_BUTTON_CLASS 1
	invoke gtk_volume_button_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_VPANED 1
	invoke gtk_vpaned_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_VPANED_CLASS 1
	invoke gtk_vpaned_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_VPANED 1
	invoke gtk_vpaned_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_VPANED_CLASS 1
	invoke gtk_vpaned_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_VRULER 1
	invoke gtk_vruler_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_VRULER_CLASS 1
	invoke gtk_vruler_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_VRULER 1
	invoke gtk_vruler_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_VRULER_CLASS 1
	invoke gtk_vruler_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_VSCALE 1
	invoke gtk_vscale_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_VSCALE_CLASS 1
	invoke gtk_vscale_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_VSCALE 1
	invoke gtk_vscale_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_VSCALE_CLASS 1
	invoke gtk_vscale_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_VSCROLLBAR 1
	invoke gtk_vscrollbar_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_VSCROLLBAR_CLASS 1
	invoke gtk_vscrollbar_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_VSCROLLBAR 1
	invoke gtk_vscrollbar_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_VSCROLLBAR_CLASS 1
	invoke gtk_vscrollbar_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_VSEPARATOR 1
	invoke gtk_vseparator_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_VSEPARATOR_CLASS 1
	invoke gtk_vseparator_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_VSEPARATOR 1
	invoke gtk_vseparator_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_VSEPARATOR_CLASS 1
	invoke gtk_vseparator_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%macro GTK_WINDOW 1
	invoke gtk_window_get_type
	invoke g_type_check_instance_cast, %1, eax
%endmacro

%macro GTK_WINDOW_CLASS 1
	invoke gtk_window_get_type
	invoke g_type_check_class_cast, %1, eax
%endmacro

%macro GTK_IS_WINDOW 1
	invoke gtk_window_get_type
	invoke g_type_check_instance_is_a , %1, eax
%endmacro

%macro GTK_IS_WINDOW_CLASS 1
	invoke gtk_window_get_type
	invoke g_type_check_class_is_a , %1, eax
%endmacro

%ifidni __OUTPUT_FORMAT__,win32
	%macro gtk_init 2
		invoke gtk_init_abi_check,%1,%2, 2, GtkWindow_size, GtkBox_size
	%endmacro
	%macro gtk_init_check 2
		invoke gtk_init_check_abi_check,%1 ,%2 ,2 ,GtkWindow_size ,GtkBox_size
	%endmacro
%endif


%endif  ;;__GTK_INC__
