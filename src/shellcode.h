/*
 * The malelf tool was written in pure C and developed using malelf library
 * to analyze (static/dynamic) malwares and infect ELF binaries. Evil using
 * this tool is the responsibility of the programmer.
 *
 * Author: Tiago Natel de Moura <tiago4orion@gmail.com>
 *
 * Contributor: Daniel Ricardo dos Santos <danielricardo.santos@gmail.com>
 *              Paulo Leonardo Benatto <benatto@gmail.com>
 *
 * Copyright 2012, 2013 by Tiago Natel de Moura. All Rights Reserved.
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

#ifndef __SHELLCODE_H__
#define __SHELLCODE_H__

#include <malelf/shellcode.h>

/*
 * Shellcode Options
 */
#define SHELLCODE_FORMAT 'f'
#define SHELLCODE_LIST   'l'
#define SHELLCODE_HELP   'h'
#define SHELLCODE_BINARY 'i'
#define SHELLCODE_FILE   'o'
#define SHELLCODE_MAGIC_BYTES 'm'
#define SHELLCODE_ORIGINAL_ENTRY 'e'
#define SHELLCODE_UNKNOWN '?'

#define SHELLCODE_FMT_BINARY 0
#define SHELLCODE_FMT_CSTRING 1

typedef struct {
        char *ifname;
        char *ofname;
        char *format;
        _i8 iformat;
        union malelf_dword magic_bytes;
        _u32 original_entry;
} ShellcodeOptions;

_u32 malelf_shellcode_init(int argc, char **argv);

_u32 malelf_shellcode_finish();

void malelf_shellcode_help();


#endif /* __SHELLCODE_H__ */
