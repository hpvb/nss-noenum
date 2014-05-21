/* libnss-noenum - Disable further enumeration of nss databases
 *
 * Copyright 2014 by Hein-Pieter van Braam <hp@tmm.cx>
 *
 * Licensed under the GNU Lesser GPL v3 or any later version. 
 * See COPYING for details.
 */

#define _GNU_SOURCE 1

#include <nss.h>
#include <shadow.h>
#include <errno.h>

enum nss_status
_nss_noenum_getspnam_r (const char *name, struct spwd *spw, char *buffer,
			size_t buflen, int *errnop)
{
  *errnop = ENOENT;
  return NSS_STATUS_NOTFOUND;
}

enum nss_status
_nss_noenum_setspent (void)
{
  return NSS_STATUS_SUCCESS;
}

enum nss_status
_nss_noenum_endspent (void)
{
  return NSS_STATUS_SUCCESS;
}

enum nss_status
_nss_noenum_getspent_r (struct spwd *spw, char *buffer, size_t buflen,
			int *errnop)
{
  *errnop = ENOENT;
  return NSS_STATUS_UNAVAIL;
}
