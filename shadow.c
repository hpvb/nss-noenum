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
  *errnop = 0;
  return NSS_STATUS_UNAVAIL;
}
