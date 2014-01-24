%ifndef __NASMX_WLDAP32_INC__
%define __NASMX_WLDAP32_INC__

IMPORT LdapGetLastError
IMPORT LdapMapErrorToWin32
IMPORT LdapUTF8ToUnicode
IMPORT LdapUnicodeToUTF8
IMPORT ber_alloc_t
IMPORT ber_bvdup
IMPORT ber_bvecfree
IMPORT ber_bvfree
IMPORT ber_first_element
IMPORT ber_flatten
IMPORT ber_free
IMPORT ber_init
IMPORT ber_next_element
IMPORT ber_peek_tag
IMPORT ber_printf
IMPORT ber_scanf
IMPORT ber_skip_tag
IMPORT cldap_openA
IMPORT cldap_openW
IMPORT ldap_abandon
IMPORT ldap_addA
IMPORT ldap_addW
IMPORT ldap_add_extA
IMPORT ldap_add_extW
IMPORT ldap_add_ext_sA
IMPORT ldap_add_ext_sW
IMPORT ldap_add_sA
IMPORT ldap_add_sW
IMPORT ldap_bindA
IMPORT ldap_bindW
IMPORT ldap_bind_sA
IMPORT ldap_bind_sW
IMPORT ldap_check_filterA
IMPORT ldap_check_filterW
IMPORT ldap_cleanup
IMPORT ldap_close_extended_op
IMPORT ldap_compareA
IMPORT ldap_compareW
IMPORT ldap_compare_extA
IMPORT ldap_compare_extW
IMPORT ldap_compare_ext_sA
IMPORT ldap_compare_ext_sW
IMPORT ldap_compare_sA
IMPORT ldap_compare_sW
IMPORT ldap_conn_from_msg
IMPORT ldap_connect
IMPORT ldap_control_freeA
IMPORT ldap_control_freeW
IMPORT ldap_controls_freeA
IMPORT ldap_controls_freeW
IMPORT ldap_count_entries
IMPORT ldap_count_references
IMPORT ldap_count_valuesA
IMPORT ldap_count_valuesW
IMPORT ldap_count_values_len
IMPORT ldap_create_page_controlA
IMPORT ldap_create_page_controlW
IMPORT ldap_create_sort_controlA
IMPORT ldap_create_sort_controlW
IMPORT ldap_create_vlv_controlA
IMPORT ldap_create_vlv_controlW
IMPORT ldap_deleteA
IMPORT ldap_deleteW
IMPORT ldap_delete_extA
IMPORT ldap_delete_extW
IMPORT ldap_delete_ext_sA
IMPORT ldap_delete_ext_sW
IMPORT ldap_delete_sA
IMPORT ldap_delete_sW
IMPORT ldap_dn2ufnA
IMPORT ldap_dn2ufnW
IMPORT ldap_encode_sort_controlA
IMPORT ldap_encode_sort_controlW
IMPORT ldap_err2stringA
IMPORT ldap_err2stringW
IMPORT ldap_escape_filter_elementA
IMPORT ldap_escape_filter_elementW
IMPORT ldap_explode_dnA
IMPORT ldap_explode_dnW
IMPORT ldap_extended_operationA
IMPORT ldap_extended_operationW
IMPORT ldap_extended_operation_sA
IMPORT ldap_extended_operation_sW
IMPORT ldap_first_attributeA
IMPORT ldap_first_attributeW
IMPORT ldap_first_entry
IMPORT ldap_first_reference
IMPORT ldap_free_controlsA
IMPORT ldap_free_controlsW
IMPORT ldap_get_dnA
IMPORT ldap_get_dnW
IMPORT ldap_get_next_page
IMPORT ldap_get_next_page_s
IMPORT ldap_get_optionA
IMPORT ldap_get_optionW
IMPORT ldap_get_paged_count
IMPORT ldap_get_valuesA
IMPORT ldap_get_valuesW
IMPORT ldap_get_values_lenA
IMPORT ldap_get_values_lenW
IMPORT ldap_initA
IMPORT ldap_initW
IMPORT ldap_memfreeA
IMPORT ldap_memfreeW
IMPORT ldap_modifyA
IMPORT ldap_modifyW
IMPORT ldap_modify_extA
IMPORT ldap_modify_extW
IMPORT ldap_modify_ext_sA
IMPORT ldap_modify_ext_sW
IMPORT ldap_modify_sA
IMPORT ldap_modify_sW
IMPORT ldap_modrdn
IMPORT ldap_modrdn2A
IMPORT ldap_modrdn2W
IMPORT ldap_modrdn2_sA
IMPORT ldap_modrdn2_sW
IMPORT ldap_modrdnA
IMPORT ldap_modrdnW
IMPORT ldap_modrdn_sA
IMPORT ldap_modrdn_sW
IMPORT ldap_msgfree
IMPORT ldap_next_attributeA
IMPORT ldap_next_attributeW
IMPORT ldap_next_entry
IMPORT ldap_next_reference
IMPORT ldap_openA
IMPORT ldap_openW
IMPORT ldap_parse_extended_resultA
IMPORT ldap_parse_extended_resultW
IMPORT ldap_parse_page_controlA
IMPORT ldap_parse_page_controlW
IMPORT ldap_parse_referenceA
IMPORT ldap_parse_referenceW
IMPORT ldap_parse_resultA
IMPORT ldap_parse_resultW
IMPORT ldap_parse_sort_controlA
IMPORT ldap_parse_sort_controlW
IMPORT ldap_parse_vlv_controlA
IMPORT ldap_parse_vlv_controlW
IMPORT ldap_perror
IMPORT ldap_rename_extA
IMPORT ldap_rename_extW
IMPORT ldap_rename_ext_sA
IMPORT ldap_rename_ext_sW
IMPORT ldap_result
IMPORT ldap_result2error
IMPORT ldap_sasl_bindA
IMPORT ldap_sasl_bindW
IMPORT ldap_sasl_bind_sA
IMPORT ldap_sasl_bind_sW
IMPORT ldap_searchA
IMPORT ldap_searchW
IMPORT ldap_search_abandon_page
IMPORT ldap_search_extA
IMPORT ldap_search_extW
IMPORT ldap_search_ext_sA
IMPORT ldap_search_ext_sW
IMPORT ldap_search_init_pageA
IMPORT ldap_search_init_pageW
IMPORT ldap_search_sA
IMPORT ldap_search_sW
IMPORT ldap_search_stA
IMPORT ldap_search_stW
IMPORT ldap_set_dbg_flags
IMPORT ldap_set_dbg_routine
IMPORT ldap_set_optionA
IMPORT ldap_set_optionW
IMPORT ldap_simple_bindA
IMPORT ldap_simple_bindW
IMPORT ldap_simple_bind_sA
IMPORT ldap_simple_bind_sW
IMPORT ldap_sslinitA
IMPORT ldap_sslinitW
IMPORT ldap_start_tls_sA
IMPORT ldap_start_tls_sW
IMPORT ldap_startup
IMPORT ldap_stop_tls_s
IMPORT ldap_ufn2dnA
IMPORT ldap_ufn2dnW
IMPORT ldap_unbind
IMPORT ldap_unbind_s
IMPORT ldap_value_freeA
IMPORT ldap_value_freeW
IMPORT ldap_value_free_len

%ifdef UNICODE

%define cldap_open cldap_openW
%define ldap_add ldap_addW
%define ldap_add_ext ldap_add_extW
%define ldap_add_ext_s ldap_add_ext_sW
%define ldap_add_s ldap_add_sW
%define ldap_bind ldap_bindW
%define ldap_bind_s ldap_bind_sW
%define ldap_check_filter ldap_check_filterW
%define ldap_compare ldap_compareW
%define ldap_compare_ext ldap_compare_extW
%define ldap_compare_ext_s ldap_compare_ext_sW
%define ldap_compare_s ldap_compare_sW
%define ldap_control_free ldap_control_freeW
%define ldap_controls_free ldap_controls_freeW
%define ldap_count_values ldap_count_valuesW
%define ldap_create_page_control ldap_create_page_controlW
%define ldap_create_sort_control ldap_create_sort_controlW
%define ldap_create_vlv_control ldap_create_vlv_controlW
%define ldap_delete ldap_deleteW
%define ldap_delete_ext ldap_delete_extW
%define ldap_delete_ext_s ldap_delete_ext_sW
%define ldap_delete_s ldap_delete_sW
%define ldap_dn2ufn ldap_dn2ufnW
%define ldap_encode_sort_control ldap_encode_sort_controlW
%define ldap_err2string ldap_err2stringW
%define ldap_escape_filter_element ldap_escape_filter_elementW
%define ldap_explode_dn ldap_explode_dnW
%define ldap_extended_operation ldap_extended_operationW
%define ldap_extended_operation_s ldap_extended_operation_sW
%define ldap_first_attribute ldap_first_attributeW
%define ldap_free_controls ldap_free_controlsW
%define ldap_get_dn ldap_get_dnW
%define ldap_get_option ldap_get_optionW
%define ldap_get_values ldap_get_valuesW
%define ldap_get_values_len ldap_get_values_lenW
%define ldap_init ldap_initW
%define ldap_memfree ldap_memfreeW
%define ldap_modify ldap_modifyW
%define ldap_modify_ext ldap_modify_extW
%define ldap_modify_ext_s ldap_modify_ext_sW
%define ldap_modify_s ldap_modify_sW
%define ldap_modrdn2 ldap_modrdn2W
%define ldap_modrdn2_s ldap_modrdn2_sW
%define ldap_modrdn ldap_modrdnW
%define ldap_modrdn_s ldap_modrdn_sW
%define ldap_next_attribute ldap_next_attributeW
%define ldap_open ldap_openW
%define ldap_parse_extended_result ldap_parse_extended_resultW
%define ldap_parse_page_control ldap_parse_page_controlW
%define ldap_parse_reference ldap_parse_referenceW
%define ldap_parse_result ldap_parse_resultW
%define ldap_parse_sort_control ldap_parse_sort_controlW
%define ldap_parse_vlv_control ldap_parse_vlv_controlW
%define ldap_rename_ext ldap_rename_extW
%define ldap_rename_ext_s ldap_rename_ext_sW
%define ldap_sasl_bind ldap_sasl_bindW
%define ldap_sasl_bind_s ldap_sasl_bind_sW
%define ldap_search ldap_searchW
%define ldap_search_ext ldap_search_extW
%define ldap_search_ext_s ldap_search_ext_sW
%define ldap_search_init_page ldap_search_init_pageW
%define ldap_search_s ldap_search_sW
%define ldap_search_st ldap_search_stW
%define ldap_set_option ldap_set_optionW
%define ldap_simple_bind ldap_simple_bindW
%define ldap_simple_bind_s ldap_simple_bind_sW
%define ldap_sslinit ldap_sslinitW
%define ldap_start_tls_s ldap_start_tls_sW
%define ldap_ufn2dn ldap_ufn2dnW
%define ldap_value_free ldap_value_freeW

%else  ;// ANSI

%define cldap_open cldap_openA
%define ldap_add ldap_addA
%define ldap_add_ext ldap_add_extA
%define ldap_add_ext_s ldap_add_ext_sA
%define ldap_add_s ldap_add_sA
%define ldap_bind ldap_bindA
%define ldap_bind_s ldap_bind_sA
%define ldap_check_filter ldap_check_filterA
%define ldap_compare ldap_compareA
%define ldap_compare_ext ldap_compare_extA
%define ldap_compare_ext_s ldap_compare_ext_sA
%define ldap_compare_s ldap_compare_sA
%define ldap_control_free ldap_control_freeA
%define ldap_controls_free ldap_controls_freeA
%define ldap_count_values ldap_count_valuesA
%define ldap_create_page_control ldap_create_page_controlA
%define ldap_create_sort_control ldap_create_sort_controlA
%define ldap_create_vlv_control ldap_create_vlv_controlA
%define ldap_delete ldap_deleteA
%define ldap_delete_ext ldap_delete_extA
%define ldap_delete_ext_s ldap_delete_ext_sA
%define ldap_delete_s ldap_delete_sA
%define ldap_dn2ufn ldap_dn2ufnA
%define ldap_encode_sort_control ldap_encode_sort_controlA
%define ldap_err2string ldap_err2stringA
%define ldap_escape_filter_element ldap_escape_filter_elementA
%define ldap_explode_dn ldap_explode_dnA
%define ldap_extended_operation ldap_extended_operationA
%define ldap_extended_operation_s ldap_extended_operation_sA
%define ldap_first_attribute ldap_first_attributeA
%define ldap_free_controls ldap_free_controlsA
%define ldap_get_dn ldap_get_dnA
%define ldap_get_option ldap_get_optionA
%define ldap_get_values ldap_get_valuesA
%define ldap_get_values_len ldap_get_values_lenA
%define ldap_init ldap_initA
%define ldap_memfree ldap_memfreeA
%define ldap_modify ldap_modifyA
%define ldap_modify_ext ldap_modify_extA
%define ldap_modify_ext_s ldap_modify_ext_sA
%define ldap_modify_s ldap_modify_sA
%define ldap_modrdn2 ldap_modrdn2A
%define ldap_modrdn2_s ldap_modrdn2_sA
%define ldap_modrdn ldap_modrdnA
%define ldap_modrdn_s ldap_modrdn_sA
%define ldap_next_attribute ldap_next_attributeA
%define ldap_open ldap_openA
%define ldap_parse_extended_result ldap_parse_extended_resultA
%define ldap_parse_page_control ldap_parse_page_controlA
%define ldap_parse_reference ldap_parse_referenceA
%define ldap_parse_result ldap_parse_resultA
%define ldap_parse_sort_control ldap_parse_sort_controlA
%define ldap_parse_vlv_control ldap_parse_vlv_controlA
%define ldap_rename_ext ldap_rename_extA
%define ldap_rename_ext_s ldap_rename_ext_sA
%define ldap_sasl_bind ldap_sasl_bindA
%define ldap_sasl_bind_s ldap_sasl_bind_sA
%define ldap_search ldap_searchA
%define ldap_search_ext ldap_search_extA
%define ldap_search_ext_s ldap_search_ext_sA
%define ldap_search_init_page ldap_search_init_pageA
%define ldap_search_s ldap_search_sA
%define ldap_search_st ldap_search_stA
%define ldap_set_option ldap_set_optionA
%define ldap_simple_bind ldap_simple_bindA
%define ldap_simple_bind_s ldap_simple_bind_sA
%define ldap_sslinit ldap_sslinitA
%define ldap_start_tls_s ldap_start_tls_sA
%define ldap_ufn2dn ldap_ufn2dnA
%define ldap_value_free ldap_value_freeA

%endif  ;// UNICODE

%endif  ;// __NASMX_WLDAP32_INC__