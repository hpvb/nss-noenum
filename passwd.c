/*
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
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
  *errnop = -1;
  return NSS_STATUS_UNAVAIL;
}
