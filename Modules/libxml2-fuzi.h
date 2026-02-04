#ifndef LIBXML2_FUZI_H
#define LIBXML2_FUZI_H
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlreader.h>
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xpathInternals.h>
#include <libxml2/libxml/HTMLtree.h>
#include <libxml2/libxml/HTMLparser.h>
#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/SAX.h>
#include <libxml2/libxml/SAX2.h>

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
