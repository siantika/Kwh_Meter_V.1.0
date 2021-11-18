/* this is header file.
it includes pin definition, macros, etc.
*/
#ifndef HEADER_FILE_H
#define HEADER_FILE_H
#endif

/* Pzem004T pin setup */
#if !defined(PZEM_RX_PIN) && !defined(PZEM_TX_PIN)
#define PZEM_RX_PIN D4 // it is installed to TX pin in PZEM module
#define PZEM_TX_PIN D5 // it is installed to RX pin in Pzem module
#endif

