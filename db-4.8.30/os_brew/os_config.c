/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 1998-2009 Oracle.  All rights reserved.
 *
 * $Id$
 */

#include "db_config.h"

#include "db_int.h"

/*
 * __os_fs_notzero --
 *	Return 1 if allocated filesystem blocks are not zeroed.
 */
int
__os_fs_notzero()
{
	/*
	 * XXX
	 * We don't know if the BREW filesystem zero-fills newly allocated
	 * filesystem blocks.  For now, be conservative and zero out blocks
	 * in Berkeley DB.
	 *
	 * This should be tested.
	 */
	return (1);
}

/*
 * __os_support_direct_io --
 *	Return 1 if we support direct I/O.
 */
int
__os_support_direct_io()
{
	return (0);
}

/*
 * __os_support_db_register --
 *	Return 1 if the system supports DB_REGISTER.
 */
int
__os_support_db_register()
{
	return (0);
}

/*
 * __os_support_replication --
 *	Return 1 if the system supports replication.
 */
int
__os_support_replication()
{
	return (0);
}
