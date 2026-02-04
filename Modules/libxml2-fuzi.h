#ifndef LIBXML2_FUZI_H
#define LIBXML2_FUZI_H
#include <libxml/tree.h>
#include <libxml/xmlreader.h>
#include <libxml/xpath.h>
#include <libxml/xpathInternals.h>
#include <libxml/HTMLtree.h>
#include <libxml/HTMLparser.h>
#include <libxml/parser.h>
#include <libxml/entities.h>
#include <libxml/SAX.h>
#include <libxml/SAX2.h>

#if defined(__ELF__)
__asm__ (".section .swift1_autolink_entries,\"a\",@progbits\n"
         ".p2align 3\n"
         ".L_swift1_autolink_entries:\n"
         "  .asciz \"-lxml2\"\n"
         "  .size .L_swift1_autolink_entries, 7\n");
#elif defined(__wasm__)
#warning WASM autolinking not implemented
#else /* assume MachO */
__asm__ (".linker_option \"-lxml2\"\n");
#endif

#endif /* LIBXML2_FUZI_H */
