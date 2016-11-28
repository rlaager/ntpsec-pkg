/*
 * Copyright (C) 2004-2007, 2009  Internet Systems Consortium, Inc. ("ISC")
 * Copyright (C) 2000, 2001  Internet Software Consortium.
 * Copyright 2015 by the NTPsec project contributors
 * SPDX-License-Identifier: ISC
 */

#ifndef GUARD_ISC_SHA1_H
#define GUARD_ISC_SHA1_H 1

/*! \file isc/sha1.h
 * \brief SHA-1 in C
 * \author By Steve Reid <steve@edmweb.com>
 * \note 100% Public Domain
 */

#include <isc/lang.h>
#include <isc/types.h>

#define ISC_SHA1_DIGESTLENGTH 20U
#define ISC_SHA1_BLOCK_LENGTH 64U

#ifdef USE_OPENSSL_HASH
#include <openssl/evp.h>

typedef EVP_MD_CTX isc_sha1_t;

#else

typedef struct {
	uint32_t state[5];
	uint32_t count[2];
	unsigned char buffer[ISC_SHA1_BLOCK_LENGTH];
} isc_sha1_t;
#endif

ISC_LANG_BEGINDECLS

void
isc_sha1_init(isc_sha1_t *ctx);

void
isc_sha1_invalidate(isc_sha1_t *ctx);

void
isc_sha1_update(isc_sha1_t *ctx, const unsigned char *data, unsigned int len);

void
isc_sha1_final(isc_sha1_t *ctx, unsigned char *digest);

ISC_LANG_ENDDECLS

#endif /* GUARD_ISC_SHA1_H */
