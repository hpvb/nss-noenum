/* libnss-noenum - Disable further enumeration of nss databases
 *
 * Copyright 2014 by Hein-Pieter van Braam <hp@tmm.cx>
 *
 * Licensed under the GNU Lesser GPL v3 or any later version. 
 * See COPYING for details.
 */

#define _GNU_SOURCE 1

#include <nss.h>
#include <grp.h>
#include <errno.h>

enum nss_status
_nss_noenum_getgrgid_r (const gid_t gid, struct group *gr, char *buffer,
			size_t buflen, int *errnop)
{
  *errnop = ENOENT;
  return NSS_STATUS_NOTFOUND;
}

enum nss_status
_nss_noenum_getgrnam_r (const char *name, struct group *gr, char *buffer,
			size_t buflen, int *errnop)
{
  *errnop = ENOENT;
  return NSS_STATUS_NOTFOUND;
}

enum nss_status
_nss_noenum_setgrent (void)
{
  return NSS_STATUS_SUCCESS;
}

enum nss_status
_nss_noenum_endgrent (void)
{
  return NSS_STATUS_SUCCESS;
}

enum nss_status
_nss_noenum_getgrent_r (struct group *gr, char *buffer, size_t buflen,
			int *errnop)
{
  *errnop = ENOENT;
  return NSS_STATUS_UNAVAIL;
}
