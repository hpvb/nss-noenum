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
  *errnop = -1;
  return NSS_STATUS_UNAVAIL;
}
