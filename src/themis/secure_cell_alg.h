/*
 * Copyright (c) 2015 Cossack Labs Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef THEMIS_SECURE_CELL_ALG_H
#define THEMIS_SECURE_CELL_ALG_H

#include <soter/soter_sym.h>

#ifdef THEMIS_AUTH_SYM_ALG_AES_256_GCM
#define THEMIS_AUTH_SYM_KEY_LENGTH SOTER_SYM_256_KEY_LENGTH
#define THEMIS_AUTH_SYM_ALG (SOTER_SYM_AES_GCM | THEMIS_AUTH_SYM_KEY_LENGTH)
#define THEMIS_AUTH_SYM_IV_LENGTH 12
#define THEMIS_AUTH_SYM_AUTH_TAG_LENGTH 16
#define THEMIS_AUTH_SYM_PASSPHRASE_ALG (THEMIS_AUTH_SYM_ALG | SOTER_SYM_PBKDF2)
#define THEMIS_AUTH_SYM_PBKDF2_SALT_LENGTH 16
#define THEMIS_AUTH_SYM_PBKDF2_ITERATIONS 200000
#endif

#ifdef THEMIS_AUTH_SYM_ALG_AES_128_GCM
#define THEMIS_AUTH_SYM_KEY_LENGTH SOTER_SYM_128_KEY_LENGTH
#define THEMIS_AUTH_SYM_ALG (SOTER_SYM_AES_GCM | THEMIS_AUTH_SYM_KEY_LENGTH)
#define THEMIS_AUTH_SYM_IV_LENGTH 12
#define THEMIS_AUTH_SYM_AUTH_TAG_LENGTH 16
#define THEMIS_AUTH_SYM_PASSPHRASE_ALG (THEMIS_AUTH_SYM_ALG | SOTER_SYM_PBKDF2)
#define THEMIS_AUTH_SYM_PBKDF2_SALT_LENGTH 16
#define THEMIS_AUTH_SYM_PBKDF2_ITERATIONS 200000
#endif

#ifdef THEMIS_AUTH_SYM_ALG_AES_192_GCM
#define THEMIS_AUTH_SYM_KEY_LENGTH SOTER_SYM_192_KEY_LENGTH
#define THEMIS_AUTH_SYM_ALG (SOTER_SYM_AES_GCM | THEMIS_AUTH_SYM_KEY_LENGTH)
#define THEMIS_AUTH_SYM_IV_LENGTH 12
#define THEMIS_AUTH_SYM_AUTH_TAG_LENGTH 16
#define THEMIS_AUTH_SYM_PASSPHRASE_ALG (THEMIS_AUTH_SYM_ALG | SOTER_SYM_PBKDF2)
#define THEMIS_AUTH_SYM_PBKDF2_SALT_LENGTH 16
#define THEMIS_AUTH_SYM_PBKDF2_ITERATIONS 200000
#endif

/*default values*/
#ifndef THEMIS_AUTH_SYM_ALG
#define THEMIS_AUTH_SYM_KEY_LENGTH SOTER_SYM_256_KEY_LENGTH
#define THEMIS_AUTH_SYM_ALG (SOTER_SYM_AES_GCM | THEMIS_AUTH_SYM_KEY_LENGTH)
#define THEMIS_AUTH_SYM_IV_LENGTH 12
#define THEMIS_AUTH_SYM_AUTH_TAG_LENGTH 16
#define THEMIS_AUTH_SYM_PASSPHRASE_ALG (THEMIS_AUTH_SYM_ALG | SOTER_SYM_PBKDF2)
#define THEMIS_AUTH_SYM_PBKDF2_SALT_LENGTH 16
#define THEMIS_AUTH_SYM_PBKDF2_ITERATIONS 200000
#endif

#define THEMIS_AUTH_SYM_MAX_KEY_LENGTH SOTER_SYM_256_KEY_LENGTH

#ifdef THEMIS_SYM_ALG_AES_256_CTR
#define THEMIS_SYM_KEY_LENGTH SOTER_SYM_256_KEY_LENGTH
#define THEMIS_SYM_ALG (SOTER_SYM_AES_CTR | THEMIS_SYM_KEY_LENGTH)
#define THEMIS_SYM_IV_LENGTH 16
#endif

#ifdef THEMIS_SYM_ALG_AES_192_CTR
#define THEMIS_SYM_KEY_LENGTH SOTER_SYM_192_KEY_LENGTH
#define THEMIS_SYM_ALG (SOTER_SYM_AES_CTR | THEMIS_SYM_KEY_LENGTH)
#define THEMIS_SYM_IV_LENGTH 16
#endif

#ifdef THEMIS_SYM_ALG_AES_128_CTR
#define THEMIS_SYM_KEY_LENGTH SOTER_SYM_128_KEY_LENGTH
#define THEMIS_SYM_ALG (SOTER_SYM_AES_CTR | THEMIS_SYM_KEY_LENGTH)
#define THEMIS_SYM_IV_LENGTH 16
#endif

/*default values*/
#ifndef THEMIS_SYM_ALG

#define THEMIS_SYM_KEY_LENGTH SOTER_SYM_256_KEY_LENGTH
#define THEMIS_SYM_ALG (SOTER_SYM_AES_CTR | THEMIS_SYM_KEY_LENGTH)
#define THEMIS_SYM_IV_LENGTH 16
#endif

#endif /* THEMIS_SECURE_CELL_ALG_H */
