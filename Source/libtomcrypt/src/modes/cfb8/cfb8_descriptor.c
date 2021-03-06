/* 
 * Copyright (c) 2006 Apple Computer, Inc. All Rights Reserved.
 * 
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*
 *  cfb_descriptor.c
 *  MacTomCrypt
 */

#include "tomcrypt.h"
#if defined(LTC_CFB_MODE) && defined(MACTOMCRYPT)

const struct ltc_mode_descriptor modeCFB8_desc =
{
	"CFB8",
	10,   /* Must match 	kCCModeCFB = 3 */
	1,
	sizeof(symmetric_CFB),
	&cfb8_start,
	&cfb8_encrypt, 
	&cfb8_decrypt, 
	&unimp_mode_encrypt_tweaked, 
	&unimp_mode_decrypt_tweaked, 
	&cfb8_done, 
	&cfb8_setiv,
	&cfb8_getiv,
};
#endif /* LTC_CFB_MODE */
