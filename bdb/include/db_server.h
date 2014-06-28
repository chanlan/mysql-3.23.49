/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _DB_SERVER_H_RPCGEN
#define _DB_SERVER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct __env_cachesize_msg {
	u_int dbenvcl_id;
	u_int gbytes;
	u_int bytes;
	u_int ncache;
};
typedef struct __env_cachesize_msg __env_cachesize_msg;

struct __env_cachesize_reply {
	u_int status;
};
typedef struct __env_cachesize_reply __env_cachesize_reply;

struct __env_close_msg {
	u_int dbenvcl_id;
	u_int flags;
};
typedef struct __env_close_msg __env_close_msg;

struct __env_close_reply {
	u_int status;
};
typedef struct __env_close_reply __env_close_reply;

struct __env_create_msg {
	u_int timeout;
};
typedef struct __env_create_msg __env_create_msg;

struct __env_create_reply {
	u_int status;
	u_int envcl_id;
};
typedef struct __env_create_reply __env_create_reply;

struct __env_flags_msg {
	u_int dbenvcl_id;
	u_int flags;
	u_int onoff;
};
typedef struct __env_flags_msg __env_flags_msg;

struct __env_flags_reply {
	u_int status;
};
typedef struct __env_flags_reply __env_flags_reply;

struct __env_open_msg {
	u_int dbenvcl_id;
	char *home;
	u_int flags;
	u_int mode;
};
typedef struct __env_open_msg __env_open_msg;

struct __env_open_reply {
	u_int status;
};
typedef struct __env_open_reply __env_open_reply;

struct __env_remove_msg {
	u_int dbenvcl_id;
	char *home;
	u_int flags;
};
typedef struct __env_remove_msg __env_remove_msg;

struct __env_remove_reply {
	u_int status;
};
typedef struct __env_remove_reply __env_remove_reply;

struct __txn_abort_msg {
	u_int txnpcl_id;
};
typedef struct __txn_abort_msg __txn_abort_msg;

struct __txn_abort_reply {
	u_int status;
};
typedef struct __txn_abort_reply __txn_abort_reply;

struct __txn_begin_msg {
	u_int envpcl_id;
	u_int parentcl_id;
	u_int flags;
};
typedef struct __txn_begin_msg __txn_begin_msg;

struct __txn_begin_reply {
	u_int status;
	u_int txnidcl_id;
};
typedef struct __txn_begin_reply __txn_begin_reply;

struct __txn_commit_msg {
	u_int txnpcl_id;
	u_int flags;
};
typedef struct __txn_commit_msg __txn_commit_msg;

struct __txn_commit_reply {
	u_int status;
};
typedef struct __txn_commit_reply __txn_commit_reply;

struct __db_bt_maxkey_msg {
	u_int dbpcl_id;
	u_int maxkey;
};
typedef struct __db_bt_maxkey_msg __db_bt_maxkey_msg;

struct __db_bt_maxkey_reply {
	u_int status;
};
typedef struct __db_bt_maxkey_reply __db_bt_maxkey_reply;

struct __db_bt_minkey_msg {
	u_int dbpcl_id;
	u_int minkey;
};
typedef struct __db_bt_minkey_msg __db_bt_minkey_msg;

struct __db_bt_minkey_reply {
	u_int status;
};
typedef struct __db_bt_minkey_reply __db_bt_minkey_reply;

struct __db_close_msg {
	u_int dbpcl_id;
	u_int flags;
};
typedef struct __db_close_msg __db_close_msg;

struct __db_close_reply {
	u_int status;
};
typedef struct __db_close_reply __db_close_reply;

struct __db_create_msg {
	u_int flags;
	u_int envpcl_id;
};
typedef struct __db_create_msg __db_create_msg;

struct __db_create_reply {
	u_int status;
	u_int dbpcl_id;
};
typedef struct __db_create_reply __db_create_reply;

struct __db_del_msg {
	u_int dbpcl_id;
	u_int txnpcl_id;
	u_int keydlen;
	u_int keydoff;
	u_int keyflags;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
	u_int flags;
};
typedef struct __db_del_msg __db_del_msg;

struct __db_del_reply {
	u_int status;
};
typedef struct __db_del_reply __db_del_reply;

struct __db_extentsize_msg {
	u_int dbpcl_id;
	u_int extentsize;
};
typedef struct __db_extentsize_msg __db_extentsize_msg;

struct __db_extentsize_reply {
	u_int status;
};
typedef struct __db_extentsize_reply __db_extentsize_reply;

struct __db_flags_msg {
	u_int dbpcl_id;
	u_int flags;
};
typedef struct __db_flags_msg __db_flags_msg;

struct __db_flags_reply {
	u_int status;
};
typedef struct __db_flags_reply __db_flags_reply;

struct __db_get_msg {
	u_int dbpcl_id;
	u_int txnpcl_id;
	u_int keydlen;
	u_int keydoff;
	u_int keyflags;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
	u_int datadlen;
	u_int datadoff;
	u_int dataflags;
	struct {
		u_int datadata_len;
		char *datadata_val;
	} datadata;
	u_int flags;
};
typedef struct __db_get_msg __db_get_msg;

struct __db_get_reply {
	u_int status;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
	struct {
		u_int datadata_len;
		char *datadata_val;
	} datadata;
};
typedef struct __db_get_reply __db_get_reply;

struct __db_h_ffactor_msg {
	u_int dbpcl_id;
	u_int ffactor;
};
typedef struct __db_h_ffactor_msg __db_h_ffactor_msg;

struct __db_h_ffactor_reply {
	u_int status;
};
typedef struct __db_h_ffactor_reply __db_h_ffactor_reply;

struct __db_h_nelem_msg {
	u_int dbpcl_id;
	u_int nelem;
};
typedef struct __db_h_nelem_msg __db_h_nelem_msg;

struct __db_h_nelem_reply {
	u_int status;
};
typedef struct __db_h_nelem_reply __db_h_nelem_reply;

struct __db_key_range_msg {
	u_int dbpcl_id;
	u_int txnpcl_id;
	u_int keydlen;
	u_int keydoff;
	u_int keyflags;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
	u_int flags;
};
typedef struct __db_key_range_msg __db_key_range_msg;

struct __db_key_range_reply {
	u_int status;
	double less;
	double equal;
	double greater;
};
typedef struct __db_key_range_reply __db_key_range_reply;

struct __db_lorder_msg {
	u_int dbpcl_id;
	u_int lorder;
};
typedef struct __db_lorder_msg __db_lorder_msg;

struct __db_lorder_reply {
	u_int status;
};
typedef struct __db_lorder_reply __db_lorder_reply;

struct __db_open_msg {
	u_int dbpcl_id;
	char *name;
	char *subdb;
	u_int type;
	u_int flags;
	u_int mode;
};
typedef struct __db_open_msg __db_open_msg;

struct __db_open_reply {
	u_int status;
	u_int type;
	u_int dbflags;
};
typedef struct __db_open_reply __db_open_reply;

struct __db_pagesize_msg {
	u_int dbpcl_id;
	u_int pagesize;
};
typedef struct __db_pagesize_msg __db_pagesize_msg;

struct __db_pagesize_reply {
	u_int status;
};
typedef struct __db_pagesize_reply __db_pagesize_reply;

struct __db_put_msg {
	u_int dbpcl_id;
	u_int txnpcl_id;
	u_int keydlen;
	u_int keydoff;
	u_int keyflags;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
	u_int datadlen;
	u_int datadoff;
	u_int dataflags;
	struct {
		u_int datadata_len;
		char *datadata_val;
	} datadata;
	u_int flags;
};
typedef struct __db_put_msg __db_put_msg;

struct __db_put_reply {
	u_int status;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
};
typedef struct __db_put_reply __db_put_reply;

struct __db_re_delim_msg {
	u_int dbpcl_id;
	u_int delim;
};
typedef struct __db_re_delim_msg __db_re_delim_msg;

struct __db_re_delim_reply {
	u_int status;
};
typedef struct __db_re_delim_reply __db_re_delim_reply;

struct __db_re_len_msg {
	u_int dbpcl_id;
	u_int len;
};
typedef struct __db_re_len_msg __db_re_len_msg;

struct __db_re_len_reply {
	u_int status;
};
typedef struct __db_re_len_reply __db_re_len_reply;

struct __db_re_pad_msg {
	u_int dbpcl_id;
	u_int pad;
};
typedef struct __db_re_pad_msg __db_re_pad_msg;

struct __db_re_pad_reply {
	u_int status;
};
typedef struct __db_re_pad_reply __db_re_pad_reply;

struct __db_remove_msg {
	u_int dbpcl_id;
	char *name;
	char *subdb;
	u_int flags;
};
typedef struct __db_remove_msg __db_remove_msg;

struct __db_remove_reply {
	u_int status;
};
typedef struct __db_remove_reply __db_remove_reply;

struct __db_rename_msg {
	u_int dbpcl_id;
	char *name;
	char *subdb;
	char *newname;
	u_int flags;
};
typedef struct __db_rename_msg __db_rename_msg;

struct __db_rename_reply {
	u_int status;
};
typedef struct __db_rename_reply __db_rename_reply;

struct __db_stat_msg {
	u_int dbpcl_id;
	u_int flags;
};
typedef struct __db_stat_msg __db_stat_msg;

struct __db_stat_statsreplist {
	struct {
		u_int ent_len;
		char *ent_val;
	} ent;
	struct __db_stat_statsreplist *next;
};
typedef struct __db_stat_statsreplist __db_stat_statsreplist;

struct __db_stat_reply {
	u_int status;
	__db_stat_statsreplist *statslist;
};
typedef struct __db_stat_reply __db_stat_reply;

struct __db_swapped_msg {
	u_int dbpcl_id;
};
typedef struct __db_swapped_msg __db_swapped_msg;

struct __db_swapped_reply {
	u_int status;
};
typedef struct __db_swapped_reply __db_swapped_reply;

struct __db_sync_msg {
	u_int dbpcl_id;
	u_int flags;
};
typedef struct __db_sync_msg __db_sync_msg;

struct __db_sync_reply {
	u_int status;
};
typedef struct __db_sync_reply __db_sync_reply;

struct __db_cursor_msg {
	u_int dbpcl_id;
	u_int txnpcl_id;
	u_int flags;
};
typedef struct __db_cursor_msg __db_cursor_msg;

struct __db_cursor_reply {
	u_int status;
	u_int dbcidcl_id;
};
typedef struct __db_cursor_reply __db_cursor_reply;

struct __db_join_curslist {
	struct {
		u_int ent_len;
		char *ent_val;
	} ent;
	struct __db_join_curslist *next;
};
typedef struct __db_join_curslist __db_join_curslist;

struct __db_join_msg {
	u_int dbpcl_id;
	__db_join_curslist *curslist;
	u_int flags;
};
typedef struct __db_join_msg __db_join_msg;

struct __db_join_reply {
	u_int status;
	u_int dbcidcl_id;
};
typedef struct __db_join_reply __db_join_reply;

struct __dbc_close_msg {
	u_int dbccl_id;
};
typedef struct __dbc_close_msg __dbc_close_msg;

struct __dbc_close_reply {
	u_int status;
};
typedef struct __dbc_close_reply __dbc_close_reply;

struct __dbc_count_msg {
	u_int dbccl_id;
	u_int flags;
};
typedef struct __dbc_count_msg __dbc_count_msg;

struct __dbc_count_reply {
	u_int status;
	u_int dupcount;
};
typedef struct __dbc_count_reply __dbc_count_reply;

struct __dbc_del_msg {
	u_int dbccl_id;
	u_int flags;
};
typedef struct __dbc_del_msg __dbc_del_msg;

struct __dbc_del_reply {
	u_int status;
};
typedef struct __dbc_del_reply __dbc_del_reply;

struct __dbc_dup_msg {
	u_int dbccl_id;
	u_int flags;
};
typedef struct __dbc_dup_msg __dbc_dup_msg;

struct __dbc_dup_reply {
	u_int status;
	u_int dbcidcl_id;
};
typedef struct __dbc_dup_reply __dbc_dup_reply;

struct __dbc_get_msg {
	u_int dbccl_id;
	u_int keydlen;
	u_int keydoff;
	u_int keyflags;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
	u_int datadlen;
	u_int datadoff;
	u_int dataflags;
	struct {
		u_int datadata_len;
		char *datadata_val;
	} datadata;
	u_int flags;
};
typedef struct __dbc_get_msg __dbc_get_msg;

struct __dbc_get_reply {
	u_int status;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
	struct {
		u_int datadata_len;
		char *datadata_val;
	} datadata;
};
typedef struct __dbc_get_reply __dbc_get_reply;

struct __dbc_put_msg {
	u_int dbccl_id;
	u_int keydlen;
	u_int keydoff;
	u_int keyflags;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
	u_int datadlen;
	u_int datadoff;
	u_int dataflags;
	struct {
		u_int datadata_len;
		char *datadata_val;
	} datadata;
	u_int flags;
};
typedef struct __dbc_put_msg __dbc_put_msg;

struct __dbc_put_reply {
	u_int status;
	struct {
		u_int keydata_len;
		char *keydata_val;
	} keydata;
};
typedef struct __dbc_put_reply __dbc_put_reply;

#define DB_SERVERPROG 351457
#define DB_SERVERVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define __DB_env_cachesize 1
extern  __env_cachesize_reply * __db_env_cachesize_1(__env_cachesize_msg *, CLIENT *);
extern  __env_cachesize_reply * __db_env_cachesize_1_svc(__env_cachesize_msg *, struct svc_req *);
#define __DB_env_close 2
extern  __env_close_reply * __db_env_close_1(__env_close_msg *, CLIENT *);
extern  __env_close_reply * __db_env_close_1_svc(__env_close_msg *, struct svc_req *);
#define __DB_env_create 3
extern  __env_create_reply * __db_env_create_1(__env_create_msg *, CLIENT *);
extern  __env_create_reply * __db_env_create_1_svc(__env_create_msg *, struct svc_req *);
#define __DB_env_flags 4
extern  __env_flags_reply * __db_env_flags_1(__env_flags_msg *, CLIENT *);
extern  __env_flags_reply * __db_env_flags_1_svc(__env_flags_msg *, struct svc_req *);
#define __DB_env_open 5
extern  __env_open_reply * __db_env_open_1(__env_open_msg *, CLIENT *);
extern  __env_open_reply * __db_env_open_1_svc(__env_open_msg *, struct svc_req *);
#define __DB_env_remove 6
extern  __env_remove_reply * __db_env_remove_1(__env_remove_msg *, CLIENT *);
extern  __env_remove_reply * __db_env_remove_1_svc(__env_remove_msg *, struct svc_req *);
#define __DB_txn_abort 7
extern  __txn_abort_reply * __db_txn_abort_1(__txn_abort_msg *, CLIENT *);
extern  __txn_abort_reply * __db_txn_abort_1_svc(__txn_abort_msg *, struct svc_req *);
#define __DB_txn_begin 8
extern  __txn_begin_reply * __db_txn_begin_1(__txn_begin_msg *, CLIENT *);
extern  __txn_begin_reply * __db_txn_begin_1_svc(__txn_begin_msg *, struct svc_req *);
#define __DB_txn_commit 9
extern  __txn_commit_reply * __db_txn_commit_1(__txn_commit_msg *, CLIENT *);
extern  __txn_commit_reply * __db_txn_commit_1_svc(__txn_commit_msg *, struct svc_req *);
#define __DB_db_bt_maxkey 10
extern  __db_bt_maxkey_reply * __db_db_bt_maxkey_1(__db_bt_maxkey_msg *, CLIENT *);
extern  __db_bt_maxkey_reply * __db_db_bt_maxkey_1_svc(__db_bt_maxkey_msg *, struct svc_req *);
#define __DB_db_bt_minkey 11
extern  __db_bt_minkey_reply * __db_db_bt_minkey_1(__db_bt_minkey_msg *, CLIENT *);
extern  __db_bt_minkey_reply * __db_db_bt_minkey_1_svc(__db_bt_minkey_msg *, struct svc_req *);
#define __DB_db_close 12
extern  __db_close_reply * __db_db_close_1(__db_close_msg *, CLIENT *);
extern  __db_close_reply * __db_db_close_1_svc(__db_close_msg *, struct svc_req *);
#define __DB_db_create 13
extern  __db_create_reply * __db_db_create_1(__db_create_msg *, CLIENT *);
extern  __db_create_reply * __db_db_create_1_svc(__db_create_msg *, struct svc_req *);
#define __DB_db_del 14
extern  __db_del_reply * __db_db_del_1(__db_del_msg *, CLIENT *);
extern  __db_del_reply * __db_db_del_1_svc(__db_del_msg *, struct svc_req *);
#define __DB_db_extentsize 15
extern  __db_extentsize_reply * __db_db_extentsize_1(__db_extentsize_msg *, CLIENT *);
extern  __db_extentsize_reply * __db_db_extentsize_1_svc(__db_extentsize_msg *, struct svc_req *);
#define __DB_db_flags 16
extern  __db_flags_reply * __db_db_flags_1(__db_flags_msg *, CLIENT *);
extern  __db_flags_reply * __db_db_flags_1_svc(__db_flags_msg *, struct svc_req *);
#define __DB_db_get 17
extern  __db_get_reply * __db_db_get_1(__db_get_msg *, CLIENT *);
extern  __db_get_reply * __db_db_get_1_svc(__db_get_msg *, struct svc_req *);
#define __DB_db_h_ffactor 18
extern  __db_h_ffactor_reply * __db_db_h_ffactor_1(__db_h_ffactor_msg *, CLIENT *);
extern  __db_h_ffactor_reply * __db_db_h_ffactor_1_svc(__db_h_ffactor_msg *, struct svc_req *);
#define __DB_db_h_nelem 19
extern  __db_h_nelem_reply * __db_db_h_nelem_1(__db_h_nelem_msg *, CLIENT *);
extern  __db_h_nelem_reply * __db_db_h_nelem_1_svc(__db_h_nelem_msg *, struct svc_req *);
#define __DB_db_key_range 20
extern  __db_key_range_reply * __db_db_key_range_1(__db_key_range_msg *, CLIENT *);
extern  __db_key_range_reply * __db_db_key_range_1_svc(__db_key_range_msg *, struct svc_req *);
#define __DB_db_lorder 21
extern  __db_lorder_reply * __db_db_lorder_1(__db_lorder_msg *, CLIENT *);
extern  __db_lorder_reply * __db_db_lorder_1_svc(__db_lorder_msg *, struct svc_req *);
#define __DB_db_open 22
extern  __db_open_reply * __db_db_open_1(__db_open_msg *, CLIENT *);
extern  __db_open_reply * __db_db_open_1_svc(__db_open_msg *, struct svc_req *);
#define __DB_db_pagesize 23
extern  __db_pagesize_reply * __db_db_pagesize_1(__db_pagesize_msg *, CLIENT *);
extern  __db_pagesize_reply * __db_db_pagesize_1_svc(__db_pagesize_msg *, struct svc_req *);
#define __DB_db_put 24
extern  __db_put_reply * __db_db_put_1(__db_put_msg *, CLIENT *);
extern  __db_put_reply * __db_db_put_1_svc(__db_put_msg *, struct svc_req *);
#define __DB_db_re_delim 25
extern  __db_re_delim_reply * __db_db_re_delim_1(__db_re_delim_msg *, CLIENT *);
extern  __db_re_delim_reply * __db_db_re_delim_1_svc(__db_re_delim_msg *, struct svc_req *);
#define __DB_db_re_len 26
extern  __db_re_len_reply * __db_db_re_len_1(__db_re_len_msg *, CLIENT *);
extern  __db_re_len_reply * __db_db_re_len_1_svc(__db_re_len_msg *, struct svc_req *);
#define __DB_db_re_pad 27
extern  __db_re_pad_reply * __db_db_re_pad_1(__db_re_pad_msg *, CLIENT *);
extern  __db_re_pad_reply * __db_db_re_pad_1_svc(__db_re_pad_msg *, struct svc_req *);
#define __DB_db_remove 28
extern  __db_remove_reply * __db_db_remove_1(__db_remove_msg *, CLIENT *);
extern  __db_remove_reply * __db_db_remove_1_svc(__db_remove_msg *, struct svc_req *);
#define __DB_db_rename 29
extern  __db_rename_reply * __db_db_rename_1(__db_rename_msg *, CLIENT *);
extern  __db_rename_reply * __db_db_rename_1_svc(__db_rename_msg *, struct svc_req *);
#define __DB_db_stat 30
extern  __db_stat_reply * __db_db_stat_1(__db_stat_msg *, CLIENT *);
extern  __db_stat_reply * __db_db_stat_1_svc(__db_stat_msg *, struct svc_req *);
#define __DB_db_swapped 31
extern  __db_swapped_reply * __db_db_swapped_1(__db_swapped_msg *, CLIENT *);
extern  __db_swapped_reply * __db_db_swapped_1_svc(__db_swapped_msg *, struct svc_req *);
#define __DB_db_sync 32
extern  __db_sync_reply * __db_db_sync_1(__db_sync_msg *, CLIENT *);
extern  __db_sync_reply * __db_db_sync_1_svc(__db_sync_msg *, struct svc_req *);
#define __DB_db_cursor 33
extern  __db_cursor_reply * __db_db_cursor_1(__db_cursor_msg *, CLIENT *);
extern  __db_cursor_reply * __db_db_cursor_1_svc(__db_cursor_msg *, struct svc_req *);
#define __DB_db_join 34
extern  __db_join_reply * __db_db_join_1(__db_join_msg *, CLIENT *);
extern  __db_join_reply * __db_db_join_1_svc(__db_join_msg *, struct svc_req *);
#define __DB_dbc_close 35
extern  __dbc_close_reply * __db_dbc_close_1(__dbc_close_msg *, CLIENT *);
extern  __dbc_close_reply * __db_dbc_close_1_svc(__dbc_close_msg *, struct svc_req *);
#define __DB_dbc_count 36
extern  __dbc_count_reply * __db_dbc_count_1(__dbc_count_msg *, CLIENT *);
extern  __dbc_count_reply * __db_dbc_count_1_svc(__dbc_count_msg *, struct svc_req *);
#define __DB_dbc_del 37
extern  __dbc_del_reply * __db_dbc_del_1(__dbc_del_msg *, CLIENT *);
extern  __dbc_del_reply * __db_dbc_del_1_svc(__dbc_del_msg *, struct svc_req *);
#define __DB_dbc_dup 38
extern  __dbc_dup_reply * __db_dbc_dup_1(__dbc_dup_msg *, CLIENT *);
extern  __dbc_dup_reply * __db_dbc_dup_1_svc(__dbc_dup_msg *, struct svc_req *);
#define __DB_dbc_get 39
extern  __dbc_get_reply * __db_dbc_get_1(__dbc_get_msg *, CLIENT *);
extern  __dbc_get_reply * __db_dbc_get_1_svc(__dbc_get_msg *, struct svc_req *);
#define __DB_dbc_put 40
extern  __dbc_put_reply * __db_dbc_put_1(__dbc_put_msg *, CLIENT *);
extern  __dbc_put_reply * __db_dbc_put_1_svc(__dbc_put_msg *, struct svc_req *);
extern int db_serverprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define __DB_env_cachesize 1
extern  __env_cachesize_reply * __db_env_cachesize_1();
extern  __env_cachesize_reply * __db_env_cachesize_1_svc();
#define __DB_env_close 2
extern  __env_close_reply * __db_env_close_1();
extern  __env_close_reply * __db_env_close_1_svc();
#define __DB_env_create 3
extern  __env_create_reply * __db_env_create_1();
extern  __env_create_reply * __db_env_create_1_svc();
#define __DB_env_flags 4
extern  __env_flags_reply * __db_env_flags_1();
extern  __env_flags_reply * __db_env_flags_1_svc();
#define __DB_env_open 5
extern  __env_open_reply * __db_env_open_1();
extern  __env_open_reply * __db_env_open_1_svc();
#define __DB_env_remove 6
extern  __env_remove_reply * __db_env_remove_1();
extern  __env_remove_reply * __db_env_remove_1_svc();
#define __DB_txn_abort 7
extern  __txn_abort_reply * __db_txn_abort_1();
extern  __txn_abort_reply * __db_txn_abort_1_svc();
#define __DB_txn_begin 8
extern  __txn_begin_reply * __db_txn_begin_1();
extern  __txn_begin_reply * __db_txn_begin_1_svc();
#define __DB_txn_commit 9
extern  __txn_commit_reply * __db_txn_commit_1();
extern  __txn_commit_reply * __db_txn_commit_1_svc();
#define __DB_db_bt_maxkey 10
extern  __db_bt_maxkey_reply * __db_db_bt_maxkey_1();
extern  __db_bt_maxkey_reply * __db_db_bt_maxkey_1_svc();
#define __DB_db_bt_minkey 11
extern  __db_bt_minkey_reply * __db_db_bt_minkey_1();
extern  __db_bt_minkey_reply * __db_db_bt_minkey_1_svc();
#define __DB_db_close 12
extern  __db_close_reply * __db_db_close_1();
extern  __db_close_reply * __db_db_close_1_svc();
#define __DB_db_create 13
extern  __db_create_reply * __db_db_create_1();
extern  __db_create_reply * __db_db_create_1_svc();
#define __DB_db_del 14
extern  __db_del_reply * __db_db_del_1();
extern  __db_del_reply * __db_db_del_1_svc();
#define __DB_db_extentsize 15
extern  __db_extentsize_reply * __db_db_extentsize_1();
extern  __db_extentsize_reply * __db_db_extentsize_1_svc();
#define __DB_db_flags 16
extern  __db_flags_reply * __db_db_flags_1();
extern  __db_flags_reply * __db_db_flags_1_svc();
#define __DB_db_get 17
extern  __db_get_reply * __db_db_get_1();
extern  __db_get_reply * __db_db_get_1_svc();
#define __DB_db_h_ffactor 18
extern  __db_h_ffactor_reply * __db_db_h_ffactor_1();
extern  __db_h_ffactor_reply * __db_db_h_ffactor_1_svc();
#define __DB_db_h_nelem 19
extern  __db_h_nelem_reply * __db_db_h_nelem_1();
extern  __db_h_nelem_reply * __db_db_h_nelem_1_svc();
#define __DB_db_key_range 20
extern  __db_key_range_reply * __db_db_key_range_1();
extern  __db_key_range_reply * __db_db_key_range_1_svc();
#define __DB_db_lorder 21
extern  __db_lorder_reply * __db_db_lorder_1();
extern  __db_lorder_reply * __db_db_lorder_1_svc();
#define __DB_db_open 22
extern  __db_open_reply * __db_db_open_1();
extern  __db_open_reply * __db_db_open_1_svc();
#define __DB_db_pagesize 23
extern  __db_pagesize_reply * __db_db_pagesize_1();
extern  __db_pagesize_reply * __db_db_pagesize_1_svc();
#define __DB_db_put 24
extern  __db_put_reply * __db_db_put_1();
extern  __db_put_reply * __db_db_put_1_svc();
#define __DB_db_re_delim 25
extern  __db_re_delim_reply * __db_db_re_delim_1();
extern  __db_re_delim_reply * __db_db_re_delim_1_svc();
#define __DB_db_re_len 26
extern  __db_re_len_reply * __db_db_re_len_1();
extern  __db_re_len_reply * __db_db_re_len_1_svc();
#define __DB_db_re_pad 27
extern  __db_re_pad_reply * __db_db_re_pad_1();
extern  __db_re_pad_reply * __db_db_re_pad_1_svc();
#define __DB_db_remove 28
extern  __db_remove_reply * __db_db_remove_1();
extern  __db_remove_reply * __db_db_remove_1_svc();
#define __DB_db_rename 29
extern  __db_rename_reply * __db_db_rename_1();
extern  __db_rename_reply * __db_db_rename_1_svc();
#define __DB_db_stat 30
extern  __db_stat_reply * __db_db_stat_1();
extern  __db_stat_reply * __db_db_stat_1_svc();
#define __DB_db_swapped 31
extern  __db_swapped_reply * __db_db_swapped_1();
extern  __db_swapped_reply * __db_db_swapped_1_svc();
#define __DB_db_sync 32
extern  __db_sync_reply * __db_db_sync_1();
extern  __db_sync_reply * __db_db_sync_1_svc();
#define __DB_db_cursor 33
extern  __db_cursor_reply * __db_db_cursor_1();
extern  __db_cursor_reply * __db_db_cursor_1_svc();
#define __DB_db_join 34
extern  __db_join_reply * __db_db_join_1();
extern  __db_join_reply * __db_db_join_1_svc();
#define __DB_dbc_close 35
extern  __dbc_close_reply * __db_dbc_close_1();
extern  __dbc_close_reply * __db_dbc_close_1_svc();
#define __DB_dbc_count 36
extern  __dbc_count_reply * __db_dbc_count_1();
extern  __dbc_count_reply * __db_dbc_count_1_svc();
#define __DB_dbc_del 37
extern  __dbc_del_reply * __db_dbc_del_1();
extern  __dbc_del_reply * __db_dbc_del_1_svc();
#define __DB_dbc_dup 38
extern  __dbc_dup_reply * __db_dbc_dup_1();
extern  __dbc_dup_reply * __db_dbc_dup_1_svc();
#define __DB_dbc_get 39
extern  __dbc_get_reply * __db_dbc_get_1();
extern  __dbc_get_reply * __db_dbc_get_1_svc();
#define __DB_dbc_put 40
extern  __dbc_put_reply * __db_dbc_put_1();
extern  __dbc_put_reply * __db_dbc_put_1_svc();
extern int db_serverprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr___env_cachesize_msg (XDR *, __env_cachesize_msg*);
extern  bool_t xdr___env_cachesize_reply (XDR *, __env_cachesize_reply*);
extern  bool_t xdr___env_close_msg (XDR *, __env_close_msg*);
extern  bool_t xdr___env_close_reply (XDR *, __env_close_reply*);
extern  bool_t xdr___env_create_msg (XDR *, __env_create_msg*);
extern  bool_t xdr___env_create_reply (XDR *, __env_create_reply*);
extern  bool_t xdr___env_flags_msg (XDR *, __env_flags_msg*);
extern  bool_t xdr___env_flags_reply (XDR *, __env_flags_reply*);
extern  bool_t xdr___env_open_msg (XDR *, __env_open_msg*);
extern  bool_t xdr___env_open_reply (XDR *, __env_open_reply*);
extern  bool_t xdr___env_remove_msg (XDR *, __env_remove_msg*);
extern  bool_t xdr___env_remove_reply (XDR *, __env_remove_reply*);
extern  bool_t xdr___txn_abort_msg (XDR *, __txn_abort_msg*);
extern  bool_t xdr___txn_abort_reply (XDR *, __txn_abort_reply*);
extern  bool_t xdr___txn_begin_msg (XDR *, __txn_begin_msg*);
extern  bool_t xdr___txn_begin_reply (XDR *, __txn_begin_reply*);
extern  bool_t xdr___txn_commit_msg (XDR *, __txn_commit_msg*);
extern  bool_t xdr___txn_commit_reply (XDR *, __txn_commit_reply*);
extern  bool_t xdr___db_bt_maxkey_msg (XDR *, __db_bt_maxkey_msg*);
extern  bool_t xdr___db_bt_maxkey_reply (XDR *, __db_bt_maxkey_reply*);
extern  bool_t xdr___db_bt_minkey_msg (XDR *, __db_bt_minkey_msg*);
extern  bool_t xdr___db_bt_minkey_reply (XDR *, __db_bt_minkey_reply*);
extern  bool_t xdr___db_close_msg (XDR *, __db_close_msg*);
extern  bool_t xdr___db_close_reply (XDR *, __db_close_reply*);
extern  bool_t xdr___db_create_msg (XDR *, __db_create_msg*);
extern  bool_t xdr___db_create_reply (XDR *, __db_create_reply*);
extern  bool_t xdr___db_del_msg (XDR *, __db_del_msg*);
extern  bool_t xdr___db_del_reply (XDR *, __db_del_reply*);
extern  bool_t xdr___db_extentsize_msg (XDR *, __db_extentsize_msg*);
extern  bool_t xdr___db_extentsize_reply (XDR *, __db_extentsize_reply*);
extern  bool_t xdr___db_flags_msg (XDR *, __db_flags_msg*);
extern  bool_t xdr___db_flags_reply (XDR *, __db_flags_reply*);
extern  bool_t xdr___db_get_msg (XDR *, __db_get_msg*);
extern  bool_t xdr___db_get_reply (XDR *, __db_get_reply*);
extern  bool_t xdr___db_h_ffactor_msg (XDR *, __db_h_ffactor_msg*);
extern  bool_t xdr___db_h_ffactor_reply (XDR *, __db_h_ffactor_reply*);
extern  bool_t xdr___db_h_nelem_msg (XDR *, __db_h_nelem_msg*);
extern  bool_t xdr___db_h_nelem_reply (XDR *, __db_h_nelem_reply*);
extern  bool_t xdr___db_key_range_msg (XDR *, __db_key_range_msg*);
extern  bool_t xdr___db_key_range_reply (XDR *, __db_key_range_reply*);
extern  bool_t xdr___db_lorder_msg (XDR *, __db_lorder_msg*);
extern  bool_t xdr___db_lorder_reply (XDR *, __db_lorder_reply*);
extern  bool_t xdr___db_open_msg (XDR *, __db_open_msg*);
extern  bool_t xdr___db_open_reply (XDR *, __db_open_reply*);
extern  bool_t xdr___db_pagesize_msg (XDR *, __db_pagesize_msg*);
extern  bool_t xdr___db_pagesize_reply (XDR *, __db_pagesize_reply*);
extern  bool_t xdr___db_put_msg (XDR *, __db_put_msg*);
extern  bool_t xdr___db_put_reply (XDR *, __db_put_reply*);
extern  bool_t xdr___db_re_delim_msg (XDR *, __db_re_delim_msg*);
extern  bool_t xdr___db_re_delim_reply (XDR *, __db_re_delim_reply*);
extern  bool_t xdr___db_re_len_msg (XDR *, __db_re_len_msg*);
extern  bool_t xdr___db_re_len_reply (XDR *, __db_re_len_reply*);
extern  bool_t xdr___db_re_pad_msg (XDR *, __db_re_pad_msg*);
extern  bool_t xdr___db_re_pad_reply (XDR *, __db_re_pad_reply*);
extern  bool_t xdr___db_remove_msg (XDR *, __db_remove_msg*);
extern  bool_t xdr___db_remove_reply (XDR *, __db_remove_reply*);
extern  bool_t xdr___db_rename_msg (XDR *, __db_rename_msg*);
extern  bool_t xdr___db_rename_reply (XDR *, __db_rename_reply*);
extern  bool_t xdr___db_stat_msg (XDR *, __db_stat_msg*);
extern  bool_t xdr___db_stat_statsreplist (XDR *, __db_stat_statsreplist*);
extern  bool_t xdr___db_stat_reply (XDR *, __db_stat_reply*);
extern  bool_t xdr___db_swapped_msg (XDR *, __db_swapped_msg*);
extern  bool_t xdr___db_swapped_reply (XDR *, __db_swapped_reply*);
extern  bool_t xdr___db_sync_msg (XDR *, __db_sync_msg*);
extern  bool_t xdr___db_sync_reply (XDR *, __db_sync_reply*);
extern  bool_t xdr___db_cursor_msg (XDR *, __db_cursor_msg*);
extern  bool_t xdr___db_cursor_reply (XDR *, __db_cursor_reply*);
extern  bool_t xdr___db_join_curslist (XDR *, __db_join_curslist*);
extern  bool_t xdr___db_join_msg (XDR *, __db_join_msg*);
extern  bool_t xdr___db_join_reply (XDR *, __db_join_reply*);
extern  bool_t xdr___dbc_close_msg (XDR *, __dbc_close_msg*);
extern  bool_t xdr___dbc_close_reply (XDR *, __dbc_close_reply*);
extern  bool_t xdr___dbc_count_msg (XDR *, __dbc_count_msg*);
extern  bool_t xdr___dbc_count_reply (XDR *, __dbc_count_reply*);
extern  bool_t xdr___dbc_del_msg (XDR *, __dbc_del_msg*);
extern  bool_t xdr___dbc_del_reply (XDR *, __dbc_del_reply*);
extern  bool_t xdr___dbc_dup_msg (XDR *, __dbc_dup_msg*);
extern  bool_t xdr___dbc_dup_reply (XDR *, __dbc_dup_reply*);
extern  bool_t xdr___dbc_get_msg (XDR *, __dbc_get_msg*);
extern  bool_t xdr___dbc_get_reply (XDR *, __dbc_get_reply*);
extern  bool_t xdr___dbc_put_msg (XDR *, __dbc_put_msg*);
extern  bool_t xdr___dbc_put_reply (XDR *, __dbc_put_reply*);

#else /* K&R C */
extern bool_t xdr___env_cachesize_msg ();
extern bool_t xdr___env_cachesize_reply ();
extern bool_t xdr___env_close_msg ();
extern bool_t xdr___env_close_reply ();
extern bool_t xdr___env_create_msg ();
extern bool_t xdr___env_create_reply ();
extern bool_t xdr___env_flags_msg ();
extern bool_t xdr___env_flags_reply ();
extern bool_t xdr___env_open_msg ();
extern bool_t xdr___env_open_reply ();
extern bool_t xdr___env_remove_msg ();
extern bool_t xdr___env_remove_reply ();
extern bool_t xdr___txn_abort_msg ();
extern bool_t xdr___txn_abort_reply ();
extern bool_t xdr___txn_begin_msg ();
extern bool_t xdr___txn_begin_reply ();
extern bool_t xdr___txn_commit_msg ();
extern bool_t xdr___txn_commit_reply ();
extern bool_t xdr___db_bt_maxkey_msg ();
extern bool_t xdr___db_bt_maxkey_reply ();
extern bool_t xdr___db_bt_minkey_msg ();
extern bool_t xdr___db_bt_minkey_reply ();
extern bool_t xdr___db_close_msg ();
extern bool_t xdr___db_close_reply ();
extern bool_t xdr___db_create_msg ();
extern bool_t xdr___db_create_reply ();
extern bool_t xdr___db_del_msg ();
extern bool_t xdr___db_del_reply ();
extern bool_t xdr___db_extentsize_msg ();
extern bool_t xdr___db_extentsize_reply ();
extern bool_t xdr___db_flags_msg ();
extern bool_t xdr___db_flags_reply ();
extern bool_t xdr___db_get_msg ();
extern bool_t xdr___db_get_reply ();
extern bool_t xdr___db_h_ffactor_msg ();
extern bool_t xdr___db_h_ffactor_reply ();
extern bool_t xdr___db_h_nelem_msg ();
extern bool_t xdr___db_h_nelem_reply ();
extern bool_t xdr___db_key_range_msg ();
extern bool_t xdr___db_key_range_reply ();
extern bool_t xdr___db_lorder_msg ();
extern bool_t xdr___db_lorder_reply ();
extern bool_t xdr___db_open_msg ();
extern bool_t xdr___db_open_reply ();
extern bool_t xdr___db_pagesize_msg ();
extern bool_t xdr___db_pagesize_reply ();
extern bool_t xdr___db_put_msg ();
extern bool_t xdr___db_put_reply ();
extern bool_t xdr___db_re_delim_msg ();
extern bool_t xdr___db_re_delim_reply ();
extern bool_t xdr___db_re_len_msg ();
extern bool_t xdr___db_re_len_reply ();
extern bool_t xdr___db_re_pad_msg ();
extern bool_t xdr___db_re_pad_reply ();
extern bool_t xdr___db_remove_msg ();
extern bool_t xdr___db_remove_reply ();
extern bool_t xdr___db_rename_msg ();
extern bool_t xdr___db_rename_reply ();
extern bool_t xdr___db_stat_msg ();
extern bool_t xdr___db_stat_statsreplist ();
extern bool_t xdr___db_stat_reply ();
extern bool_t xdr___db_swapped_msg ();
extern bool_t xdr___db_swapped_reply ();
extern bool_t xdr___db_sync_msg ();
extern bool_t xdr___db_sync_reply ();
extern bool_t xdr___db_cursor_msg ();
extern bool_t xdr___db_cursor_reply ();
extern bool_t xdr___db_join_curslist ();
extern bool_t xdr___db_join_msg ();
extern bool_t xdr___db_join_reply ();
extern bool_t xdr___dbc_close_msg ();
extern bool_t xdr___dbc_close_reply ();
extern bool_t xdr___dbc_count_msg ();
extern bool_t xdr___dbc_count_reply ();
extern bool_t xdr___dbc_del_msg ();
extern bool_t xdr___dbc_del_reply ();
extern bool_t xdr___dbc_dup_msg ();
extern bool_t xdr___dbc_dup_reply ();
extern bool_t xdr___dbc_get_msg ();
extern bool_t xdr___dbc_get_reply ();
extern bool_t xdr___dbc_put_msg ();
extern bool_t xdr___dbc_put_reply ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_DB_SERVER_H_RPCGEN */