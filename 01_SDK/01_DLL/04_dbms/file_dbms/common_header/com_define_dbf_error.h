/*
 * Copyright (C) 2021-2026 ASHINi Corp. 
 * 
 * This program is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public 
 * License as published by the Free Software Foundation; either 
 * version 3 of the License, or any later version. 
 * 
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public 
 * License along with this program. If not, see <https://www.gnu.org/licenses/>.  
 *
 */

#ifndef COM_DEFINE_DBF_ERROR_H_938EF200_F60B_452A_BD30_A10E8507EDCC
#define COM_DEFINE_DBF_ERROR_H_938EF200_F60B_452A_BD30_A10E8507EDCC

#define ASI_DBF_ERROR_TYPE_SUCCESS						0x00000000
#define ASI_DBF_ERROR_TYPE_OPEN_FILE_FAIL				0x00000001
#define ASI_DBF_ERROR_TYPE_MEM_ALLOC_FAIL				0x00000002
#define ASI_DBF_ERROR_TYPE_FILE_HANDLE_NULL				0x00000003
#define ASI_DBF_ERROR_TYPE_FILE_HANDLE_EOF				0x00000004
#define ASI_DBF_ERROR_TYPE_SET_FILE_POINTER_FAIL		0x00000005
#define ASI_DBF_ERROR_TYPE_NOT_DBF_HEADER				0x00000006
#define ASI_DBF_ERROR_TYPE_INVALID_HANDLE				0x00000007
#define ASI_DBF_ERROR_TYPE_INVALID_COLUMN_IDX			0x00000008
#define ASI_DBF_ERROR_TYPE_INVALID_COLUMN_NAME			0x00000009
#define ASI_DBF_ERROR_TYPE_NOT_DEFINE_ERROR				0x00000010
#define ASI_DBF_ERROR_TYPE_OPEN_DB_FAIL_USED_AN_PROC	0x00000011
#define ASI_DBF_ERROR_TYPE_INVALID_ARGUMENT				0x00000012
#define ASI_DBF_ERROR_TYPE_INVALID_BLOCK_SIZE			0x00000013

#define ASI_DBF_ERROR_TYPE_V2_NOT_DBF_DATABASE_HEADER	0x00000100
#define ASI_DBF_ERROR_TYPE_V2_NOT_FIND_DBF_TABLE		0x00000101
#define ASI_DBF_ERROR_TYPE_V2_INVALID_DBF_VERSION		0x00000102
#define ASI_DBF_ERROR_TYPE_V2_DBF_DATABASE_READ_FAIL	0x00000103
#define ASI_DBF_ERROR_TYPE_V2_DBF_DATABASE_WRITE_FAIL	0x00000104
#define ASI_DBF_ERROR_TYPE_V2_ALREADY_EXIST_DBF_FILE	0x00000105
#define ASI_DBF_ERROR_TYPE_V2_ALREADY_DELETE_ITEM		0x00000106
#define ASI_DBF_ERROR_TYPE_V2_CREATE_DBF_FAIL			0x00000107
#define ASI_DBF_ERROR_TYPE_V2_NOT_FIND_DBF_TABLE_COL	0x00000108
#define ASI_DBF_ERROR_TYPE_V2_NO_MORE_DATA				0x00000109
#define ASI_DBF_ERROR_TYPE_V2_NOT_PRIMARY_KEY			0x00000110
#define ASI_DBF_ERROR_TYPE_V2_NOT_FIND_PRIMARY_KEY		0x00000111

#define ASI_DBF_ERROR_TYPE_V2_AUTH_REQUEST_LOGIN_INFO	0x00001000
#define ASI_DBF_ERROR_TYPE_V2_AUTH_INVALID_LOGIN_INFO	0x00001001
#define ASI_DBF_ERROR_TYPE_V2_AUTH_INVALID_INFO_TYPE	0x00001002
#define ASI_DBF_ERROR_TYPE_V2_AUTH_INCORRECT_INFO		0x00001003
#define ASI_DBF_ERROR_TYPE_V2_AUTH_INVALID_RIGHT		0x00001004

#define ASI_DBFQ_ERROR_TYPE_NOT_FIND_DEFAULT_LIBRARY	0x00001000
#define ASI_DBFQ_ERROR_TYPE_EXT_MODULE_INIT_FAIL		0x00001001
#define ASI_DBFQ_ERROR_TYPE_OPEN_DBF_FAIL				0x00001002
#define ASI_DBFQ_ERROR_TYPE_NOT_FIND_DATABASE			0x00001003
#define ASI_DBFQ_ERROR_TYPE_SYSTEM_ERROR				0x00001004
#define ASI_DBFQ_ERROR_TYPE_INVALID_QUERY				0x00001005
#define ASI_DBFQ_ERROR_TYPE_CREATE_DBF_FAIL				0x00001006
#define ASI_DBFQ_ERROR_TYPE_OPEN_DBF_FAIL_USED_AN_PROC	0x00001007
#define ASI_DBFQ_ERROR_TYPE_INVALID_ARGUMENT			0x00001008
                                     
#endif	//COM_DEFINE_DBF_ERROR_H_938EF200_F60B_452A_BD30_A10E8507EDCC