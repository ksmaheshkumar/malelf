/*
 * The malelf tool was written in pure C and developed using malelf library
 * to analyze (static/dynamic) malwares and infect ELF binaries. Evil using
 * this tool is the responsibility of the programmer.
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
 *
 */

#ifndef __DATABASE_H__
#define __DATABASE_H__

#include <malelf/binary.h>

/*
 * Database Options
 */
#define DATABASE_HELP    'h'
#define DATABASE_INPUT   'i'
#define DATABASE_OUTPUT  'o'
#define DATABASE_SECTION 's'
#define DATABASE_ENTRY   'e'
#define DATABASE_LIST    'l'
#define DATABASE_UNKNOWN '?'

/* Store info about dissect */
typedef struct  {
        char *directory;   /* Binary (Input) Directory */
        FILE *fp;          /* FILE Pointer */
        char *database;    /* Database */
} Database;


_u32 database_init(Database *obj, int argc, char **argv);

_u32 database_finish(Database *obj);

void database_help();


#endif /* __DATABASE_H__ */
