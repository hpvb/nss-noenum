/* libnss-noenum - Disable further enumeration of nss databases
 *
 * Copyright 2014 by Hein-Pieter van Braam <hp@tmm.cx>
 *
 * Licensed under the GNU Lesser GPL v3 or any later version. 
 * See COPYING for details.
 */

#define _GNU_SOURCE 1

#include <nss.h>
#include <pwd.h>
#include <errno.h>

enum nss_status
_nss_noenum_getpwuid_r (uid_t uid, struct passwd *result, char *buf,
			size_t buflen, int *errnop)
{
  *errnop = ENOENT;
  return NSS_STATUS_NOTFOUND;
}

enum nss_status
_nss_noenum_getpwnam_r (const char *name, struct passwd *result, char *buf,
			size_t buflen, int *errnop)
{
  *errnop = ENOENT;
  return NSS_STATUS_NOTFOUND;
}

enum nss_status
_nss_noenum_setpwent (void)
{
  return NSS_STATUS_SUCCESS;
}

enum nss_status
_nss_noenum_endpwent (void)
{
  return NSS_STATUS_SUCCESS;
}

enum nss_status
_nss_noenum_getpwent_r (struct passwd *pw, char *buffer, size_t buflen,
			int *errnop)
{
  *errnop = ENOENT;
  return NSS_STATUS_UNAVAIL;
}
