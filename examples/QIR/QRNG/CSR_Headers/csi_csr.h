/*                                                                         */
/* Generated by Semifore, Inc. csrCompile                                  */
/*    Version: 2019.03 Build: release Linux 64-bit                         */
/*    C Header output                                                      */
/*                                                                         */
/* Command Line:                                                           */
/*    /home/cad/tools/semifore/csrcompiler/2019_03/bin/x64_re6/csrCompile  */
/*    -v -x CSRSpec -t h -t sv -t docx -t UVM_RALF -o fkb_dig_csi_csr      */
/*    csi_csr.csr                                                          */
/*                                                                         */
/* Input files:                                                            */
/*    csi_csr.csr                                                          */
/*                                                                         */
/* Generated on: Wed May 15 06:43:38 2019                                  */
/*           by: pasteinm                                                  */
/*                                                                         */

#ifndef _FKB_DIG_CSI_CSR_H_
#define _FKB_DIG_CSI_CSR_H_



/* ####################################################################### */
/*        ADDRESS MACROS                                                   */
/* ####################################################################### */

/* Address Space for Addressmap: csi                                       */
/* Source filename: csi_csr.csr, line: 451                                 */
/* Register: csi.rCscratch                                                 */
#define CSI_RCSCRATCH_ADDRESS 0x0u
#define CSI_RCSCRATCH_BYTE_ADDRESS 0x0u
/* Register: csi.rCspare                                                   */
#define CSI_RCSPARE_ADDRESS 0x4u
#define CSI_RCSPARE_BYTE_ADDRESS 0x4u
/* Register: csi.rCntrl                                                    */
#define CSI_RCNTRL_ADDRESS 0x8u
#define CSI_RCNTRL_BYTE_ADDRESS 0x8u
/* Register: csi.rCcmd                                                     */
#define CSI_RCCMD_ADDRESS 0xcu
#define CSI_RCCMD_BYTE_ADDRESS 0xcu
/* Register: csi.rCcfg                                                     */
#define CSI_RCCFG_ADDRESS 0x10u
#define CSI_RCCFG_BYTE_ADDRESS 0x10u
/* Register: csi.rCslvsel                                                  */
#define CSI_RCSLVSEL_ADDRESS 0x14u
#define CSI_RCSLVSEL_BYTE_ADDRESS 0x14u
/* Register: csi.rCdr                                                      */
#define CSI_RCDR_ADDRESS 0x18u
#define CSI_RCDR_BYTE_ADDRESS 0x18u


/* ####################################################################### */
/*        TEMPLATE MACROS                                                  */
/* ####################################################################### */

/* Addressmap type: csi                                                    */
/* Addressmap template: csi                                                */
/* Source filename: csi_csr.csr, line: 37                                  */
#define CSI_SIZE 0x20u
#define CSI_BYTE_SIZE 0x20u
/* Register member: csi.rCscratch                                          */
/* Register type referenced: csi::rCscratch                                */
/* Register template referenced: csi::rCscratch                            */
#define CSI_RCSCRATCH_OFFSET 0x0u
#define CSI_RCSCRATCH_BYTE_OFFSET 0x0u
#define CSI_RCSCRATCH_READ_ACCESS 1u
#define CSI_RCSCRATCH_WRITE_ACCESS 1u
#define CSI_RCSCRATCH_RESET_VALUE 0x00000000ul
#define CSI_RCSCRATCH_RESET_MASK 0xfffffffful
#define CSI_RCSCRATCH_READ_MASK 0xfffffffful
#define CSI_RCSCRATCH_WRITE_MASK 0xfffffffful
/* Register member: csi.rCspare                                            */
/* Register type referenced: csi::rCspare                                  */
/* Register template referenced: csi::rCspare                              */
#define CSI_RCSPARE_OFFSET 0x4u
#define CSI_RCSPARE_BYTE_OFFSET 0x4u
#define CSI_RCSPARE_READ_ACCESS 1u
#define CSI_RCSPARE_WRITE_ACCESS 1u
#define CSI_RCSPARE_RESET_VALUE 0x00000000ul
#define CSI_RCSPARE_RESET_MASK 0xfffffffful
#define CSI_RCSPARE_READ_MASK 0xfffffffful
#define CSI_RCSPARE_WRITE_MASK 0xfffffffful
/* Register member: csi.rCntrl                                             */
/* Register type referenced: csi::rCntrl                                   */
/* Register template referenced: csi::rCntrl                               */
#define CSI_RCNTRL_OFFSET 0x8u
#define CSI_RCNTRL_BYTE_OFFSET 0x8u
#define CSI_RCNTRL_READ_ACCESS 1u
#define CSI_RCNTRL_WRITE_ACCESS 1u
#define CSI_RCNTRL_RESET_VALUE 0x00000000ul
#define CSI_RCNTRL_RESET_MASK 0xfffffffful
#define CSI_RCNTRL_READ_MASK 0xfffffffful
#define CSI_RCNTRL_WRITE_MASK 0xfffffffful
/* Register member: csi.rCcmd                                              */
/* Register type referenced: csi::rCcmd                                    */
/* Register template referenced: csi::rCcmd                                */
#define CSI_RCCMD_OFFSET 0xcu
#define CSI_RCCMD_BYTE_OFFSET 0xcu
#define CSI_RCCMD_READ_ACCESS 1u
#define CSI_RCCMD_WRITE_ACCESS 1u
#define CSI_RCCMD_RESET_VALUE 0x00000000ul
#define CSI_RCCMD_RESET_MASK 0xfffffffful
#define CSI_RCCMD_READ_MASK 0xfffffffful
#define CSI_RCCMD_WRITE_MASK 0xfffffffful
/* Register member: csi.rCcfg                                              */
/* Register type referenced: csi::rCcfg                                    */
/* Register template referenced: csi::rCcfg                                */
#define CSI_RCCFG_OFFSET 0x10u
#define CSI_RCCFG_BYTE_OFFSET 0x10u
#define CSI_RCCFG_READ_ACCESS 1u
#define CSI_RCCFG_WRITE_ACCESS 1u
#define CSI_RCCFG_RESET_VALUE 0x00000000ul
#define CSI_RCCFG_RESET_MASK 0xfffffffful
#define CSI_RCCFG_READ_MASK 0xfffffffful
#define CSI_RCCFG_WRITE_MASK 0x000003fful
/* Register member: csi.rCslvsel                                           */
/* Register type referenced: csi::rCslvsel                                 */
/* Register template referenced: csi::rCslvsel                             */
#define CSI_RCSLVSEL_OFFSET 0x14u
#define CSI_RCSLVSEL_BYTE_OFFSET 0x14u
#define CSI_RCSLVSEL_READ_ACCESS 1u
#define CSI_RCSLVSEL_WRITE_ACCESS 1u
#define CSI_RCSLVSEL_RESET_VALUE 0x00000000ul
#define CSI_RCSLVSEL_RESET_MASK 0xfffffffful
#define CSI_RCSLVSEL_READ_MASK 0xfffffffful
#define CSI_RCSLVSEL_WRITE_MASK 0x000000fful
/* Register member: csi.rCdr                                               */
/* Register type referenced: csi::rCdr                                     */
/* Register template referenced: csi::rCdr                                 */
#define CSI_RCDR_OFFSET 0x18u
#define CSI_RCDR_BYTE_OFFSET 0x18u
#define CSI_RCDR_READ_ACCESS 1u
#define CSI_RCDR_WRITE_ACCESS 1u
#define CSI_RCDR_RESET_VALUE 0x00000000ul
#define CSI_RCDR_RESET_MASK 0xfffffffful
#define CSI_RCDR_READ_MASK 0xfffffffful
#define CSI_RCDR_WRITE_MASK 0xfffffffful

/* Register type: csi::rCscratch                                           */
/* Register template: csi::rCscratch                                       */
/* Source filename: csi_csr.csr, line: 55                                  */
/* Field member: csi::rCscratch.Value                                      */
/* Source filename: csi_csr.csr, line: 65                                  */
#define CSI_RCSCRATCH_VALUE_MSB 31u
#define CSI_RCSCRATCH_VALUE_LSB 0u
#define CSI_RCSCRATCH_VALUE_WIDTH 32u
#define CSI_RCSCRATCH_VALUE_READ_ACCESS 1u
#define CSI_RCSCRATCH_VALUE_WRITE_ACCESS 1u
#define CSI_RCSCRATCH_VALUE_RESET 0x00000000ul
#define CSI_RCSCRATCH_VALUE_FIELD_MASK 0xfffffffful
#define CSI_RCSCRATCH_VALUE_GET(x) ((x) & 0xfffffffful)
#define CSI_RCSCRATCH_VALUE_SET(x) ((x) & 0xfffffffful)
#define CSI_RCSCRATCH_VALUE_MODIFY(r, x) ((x) & 0xfffffffful)

/* Register type: csi::rCspare                                             */
/* Register template: csi::rCspare                                         */
/* Source filename: csi_csr.csr, line: 81                                  */
/* Field member: csi::rCspare.Bits                                         */
/* Source filename: csi_csr.csr, line: 91                                  */
#define CSI_RCSPARE_BITS_MSB 31u
#define CSI_RCSPARE_BITS_LSB 0u
#define CSI_RCSPARE_BITS_WIDTH 32u
#define CSI_RCSPARE_BITS_READ_ACCESS 1u
#define CSI_RCSPARE_BITS_WRITE_ACCESS 1u
#define CSI_RCSPARE_BITS_RESET 0x00000000ul
#define CSI_RCSPARE_BITS_FIELD_MASK 0xfffffffful
#define CSI_RCSPARE_BITS_GET(x) ((x) & 0xfffffffful)
#define CSI_RCSPARE_BITS_SET(x) ((x) & 0xfffffffful)
#define CSI_RCSPARE_BITS_MODIFY(r, x) ((x) & 0xfffffffful)

/* Register type: csi::rCntrl                                              */
/* Register template: csi::rCntrl                                          */
/* Source filename: csi_csr.csr, line: 109                                 */
/* Field member: csi::rCntrl.idle                                          */
/* Source filename: csi_csr.csr, line: 135                                 */
#define CSI_RCNTRL_IDLE_MSB 31u
#define CSI_RCNTRL_IDLE_LSB 31u
#define CSI_RCNTRL_IDLE_WIDTH 1u
#define CSI_RCNTRL_IDLE_READ_ACCESS 1u
#define CSI_RCNTRL_IDLE_WRITE_ACCESS 1u
#define CSI_RCNTRL_IDLE_RESET 0x0u
#define CSI_RCNTRL_IDLE_FIELD_MASK 0x80000000ul
#define CSI_RCNTRL_IDLE_GET(x) (((x) & 0x80000000ul) >> 31)
#define CSI_RCNTRL_IDLE_SET(x) (((x) << 31) & 0x80000000ul)
#define CSI_RCNTRL_IDLE_MODIFY(r, x) \
   ((((x) << 31) & 0x80000000ul) | ((r) & 0x7ffffffful))
/* Field member: csi::rCntrl.unused                                        */
/* Source filename: csi_csr.csr, line: 119                                 */
#define CSI_RCNTRL_UNUSED_MSB 30u
#define CSI_RCNTRL_UNUSED_LSB 0u
#define CSI_RCNTRL_UNUSED_WIDTH 31u
#define CSI_RCNTRL_UNUSED_READ_ACCESS 1u
#define CSI_RCNTRL_UNUSED_WRITE_ACCESS 1u
#define CSI_RCNTRL_UNUSED_RESET 0x00000000ul
#define CSI_RCNTRL_UNUSED_FIELD_MASK 0x7ffffffful
#define CSI_RCNTRL_UNUSED_GET(x) ((x) & 0x7ffffffful)
#define CSI_RCNTRL_UNUSED_SET(x) ((x) & 0x7ffffffful)
#define CSI_RCNTRL_UNUSED_MODIFY(r, x) \
   (((x) & 0x7ffffffful) | ((r) & 0x80000000ul))

/* Register type: csi::rCcmd                                               */
/* Register template: csi::rCcmd                                           */
/* Source filename: csi_csr.csr, line: 157                                 */
/* Field member: csi::rCcmd.rsrvd                                          */
/* Source filename: csi_csr.csr, line: 255                                 */
#define CSI_RCCMD_RSRVD_MSB 31u
#define CSI_RCCMD_RSRVD_LSB 31u
#define CSI_RCCMD_RSRVD_WIDTH 1u
#define CSI_RCCMD_RSRVD_READ_ACCESS 1u
#define CSI_RCCMD_RSRVD_WRITE_ACCESS 1u
#define CSI_RCCMD_RSRVD_RESET 0x0u
#define CSI_RCCMD_RSRVD_FIELD_MASK 0x80000000ul
#define CSI_RCCMD_RSRVD_GET(x) (((x) & 0x80000000ul) >> 31)
#define CSI_RCCMD_RSRVD_SET(x) (((x) << 31) & 0x80000000ul)
#define CSI_RCCMD_RSRVD_MODIFY(r, x) \
   ((((x) << 31) & 0x80000000ul) | ((r) & 0x7ffffffful))
/* Field member: csi::rCcmd.rnw                                            */
/* Source filename: csi_csr.csr, line: 239                                 */
#define CSI_RCCMD_RNW_MSB 30u
#define CSI_RCCMD_RNW_LSB 30u
#define CSI_RCCMD_RNW_WIDTH 1u
#define CSI_RCCMD_RNW_READ_ACCESS 1u
#define CSI_RCCMD_RNW_WRITE_ACCESS 1u
#define CSI_RCCMD_RNW_RESET 0x0u
#define CSI_RCCMD_RNW_FIELD_MASK 0x40000000ul
#define CSI_RCCMD_RNW_GET(x) (((x) & 0x40000000ul) >> 30)
#define CSI_RCCMD_RNW_SET(x) (((x) << 30) & 0x40000000ul)
#define CSI_RCCMD_RNW_MODIFY(r, x) \
   ((((x) << 30) & 0x40000000ul) | ((r) & 0xbffffffful))
/* Field member: csi::rCcmd.size                                           */
/* Source filename: csi_csr.csr, line: 217                                 */
#define CSI_RCCMD_SIZE_MSB 29u
#define CSI_RCCMD_SIZE_LSB 28u
#define CSI_RCCMD_SIZE_WIDTH 2u
#define CSI_RCCMD_SIZE_READ_ACCESS 1u
#define CSI_RCCMD_SIZE_WRITE_ACCESS 1u
#define CSI_RCCMD_SIZE_RESET 0x0u
#define CSI_RCCMD_SIZE_FIELD_MASK 0x30000000ul
#define CSI_RCCMD_SIZE_GET(x) (((x) & 0x30000000ul) >> 28)
#define CSI_RCCMD_SIZE_SET(x) (((x) << 28) & 0x30000000ul)
#define CSI_RCCMD_SIZE_MODIFY(r, x) \
   ((((x) << 28) & 0x30000000ul) | ((r) & 0xcffffffful))
/* Field member: csi::rCcmd.unused                                         */
/* Source filename: csi_csr.csr, line: 201                                 */
#define CSI_RCCMD_UNUSED_MSB 27u
#define CSI_RCCMD_UNUSED_LSB 19u
#define CSI_RCCMD_UNUSED_WIDTH 9u
#define CSI_RCCMD_UNUSED_READ_ACCESS 1u
#define CSI_RCCMD_UNUSED_WRITE_ACCESS 1u
#define CSI_RCCMD_UNUSED_RESET 0x000u
#define CSI_RCCMD_UNUSED_FIELD_MASK 0x0ff80000ul
#define CSI_RCCMD_UNUSED_GET(x) (((x) & 0x0ff80000ul) >> 19)
#define CSI_RCCMD_UNUSED_SET(x) (((x) << 19) & 0x0ff80000ul)
#define CSI_RCCMD_UNUSED_MODIFY(r, x) \
   ((((x) << 19) & 0x0ff80000ul) | ((r) & 0xf007fffful))
/* Field member: csi::rCcmd.bitAddr                                        */
/* Source filename: csi_csr.csr, line: 183                                 */
#define CSI_RCCMD_BITADDR_MSB 18u
#define CSI_RCCMD_BITADDR_LSB 16u
#define CSI_RCCMD_BITADDR_WIDTH 3u
#define CSI_RCCMD_BITADDR_READ_ACCESS 1u
#define CSI_RCCMD_BITADDR_WRITE_ACCESS 1u
#define CSI_RCCMD_BITADDR_RESET 0x0u
#define CSI_RCCMD_BITADDR_FIELD_MASK 0x00070000ul
#define CSI_RCCMD_BITADDR_GET(x) (((x) & 0x00070000ul) >> 16)
#define CSI_RCCMD_BITADDR_SET(x) (((x) << 16) & 0x00070000ul)
#define CSI_RCCMD_BITADDR_MODIFY(r, x) \
   ((((x) << 16) & 0x00070000ul) | ((r) & 0xfff8fffful))
/* Field member: csi::rCcmd.regAddr                                        */
/* Source filename: csi_csr.csr, line: 167                                 */
#define CSI_RCCMD_REGADDR_MSB 15u
#define CSI_RCCMD_REGADDR_LSB 0u
#define CSI_RCCMD_REGADDR_WIDTH 16u
#define CSI_RCCMD_REGADDR_READ_ACCESS 1u
#define CSI_RCCMD_REGADDR_WRITE_ACCESS 1u
#define CSI_RCCMD_REGADDR_RESET 0x0000u
#define CSI_RCCMD_REGADDR_FIELD_MASK 0x0000fffful
#define CSI_RCCMD_REGADDR_GET(x) ((x) & 0x0000fffful)
#define CSI_RCCMD_REGADDR_SET(x) ((x) & 0x0000fffful)
#define CSI_RCCMD_REGADDR_MODIFY(r, x) \
   (((x) & 0x0000fffful) | ((r) & 0xffff0000ul))

/* Register type: csi::rCcfg                                               */
/* Register template: csi::rCcfg                                           */
/* Source filename: csi_csr.csr, line: 273                                 */
/* Field member: csi::rCcfg.BWE                                            */
/* Source filename: csi_csr.csr, line: 367                                 */
#define CSI_RCCFG_BWE_MSB 9u
#define CSI_RCCFG_BWE_LSB 9u
#define CSI_RCCFG_BWE_WIDTH 1u
#define CSI_RCCFG_BWE_READ_ACCESS 1u
#define CSI_RCCFG_BWE_WRITE_ACCESS 1u
#define CSI_RCCFG_BWE_RESET 0x0u
#define CSI_RCCFG_BWE_FIELD_MASK 0x00000200ul
#define CSI_RCCFG_BWE_GET(x) (((x) & 0x00000200ul) >> 9)
#define CSI_RCCFG_BWE_SET(x) (((x) << 9) & 0x00000200ul)
#define CSI_RCCFG_BWE_MODIFY(r, x) \
   ((((x) << 9) & 0x00000200ul) | ((r) & 0xfffffdfful))
/* Field member: csi::rCcfg.VLAE                                           */
/* Source filename: csi_csr.csr, line: 351                                 */
#define CSI_RCCFG_VLAE_MSB 8u
#define CSI_RCCFG_VLAE_LSB 8u
#define CSI_RCCFG_VLAE_WIDTH 1u
#define CSI_RCCFG_VLAE_READ_ACCESS 1u
#define CSI_RCCFG_VLAE_WRITE_ACCESS 1u
#define CSI_RCCFG_VLAE_RESET 0x0u
#define CSI_RCCFG_VLAE_FIELD_MASK 0x00000100ul
#define CSI_RCCFG_VLAE_GET(x) (((x) & 0x00000100ul) >> 8)
#define CSI_RCCFG_VLAE_SET(x) (((x) << 8) & 0x00000100ul)
#define CSI_RCCFG_VLAE_MODIFY(r, x) \
   ((((x) << 8) & 0x00000100ul) | ((r) & 0xfffffefful))
/* Field member: csi::rCcfg.MCBT                                           */
/* Source filename: csi_csr.csr, line: 331                                 */
#define CSI_RCCFG_MCBT_MSB 7u
#define CSI_RCCFG_MCBT_LSB 4u
#define CSI_RCCFG_MCBT_WIDTH 4u
#define CSI_RCCFG_MCBT_READ_ACCESS 1u
#define CSI_RCCFG_MCBT_WRITE_ACCESS 1u
#define CSI_RCCFG_MCBT_RESET 0x0u
#define CSI_RCCFG_MCBT_FIELD_MASK 0x000000f0ul
#define CSI_RCCFG_MCBT_GET(x) (((x) & 0x000000f0ul) >> 4)
#define CSI_RCCFG_MCBT_SET(x) (((x) << 4) & 0x000000f0ul)
#define CSI_RCCFG_MCBT_MODIFY(r, x) \
   ((((x) << 4) & 0x000000f0ul) | ((r) & 0xffffff0ful))
/* Field member: csi::rCcfg.csclkDiv                                       */
/* Source filename: csi_csr.csr, line: 283                                 */
#define CSI_RCCFG_CSCLKDIV_MSB 3u
#define CSI_RCCFG_CSCLKDIV_LSB 0u
#define CSI_RCCFG_CSCLKDIV_WIDTH 4u
#define CSI_RCCFG_CSCLKDIV_READ_ACCESS 1u
#define CSI_RCCFG_CSCLKDIV_WRITE_ACCESS 1u
#define CSI_RCCFG_CSCLKDIV_RESET 0x0u
#define CSI_RCCFG_CSCLKDIV_FIELD_MASK 0x0000000ful
#define CSI_RCCFG_CSCLKDIV_GET(x) ((x) & 0x0000000ful)
#define CSI_RCCFG_CSCLKDIV_SET(x) ((x) & 0x0000000ful)
#define CSI_RCCFG_CSCLKDIV_MODIFY(r, x) \
   (((x) & 0x0000000ful) | ((r) & 0xfffffff0ul))

/* Register type: csi::rCslvsel                                            */
/* Register template: csi::rCslvsel                                        */
/* Source filename: csi_csr.csr, line: 389                                 */
/* Field member: csi::rCslvsel.bits                                        */
/* Source filename: csi_csr.csr, line: 399                                 */
#define CSI_RCSLVSEL_BITS_MSB 7u
#define CSI_RCSLVSEL_BITS_LSB 0u
#define CSI_RCSLVSEL_BITS_WIDTH 8u
#define CSI_RCSLVSEL_BITS_READ_ACCESS 1u
#define CSI_RCSLVSEL_BITS_WRITE_ACCESS 1u
#define CSI_RCSLVSEL_BITS_RESET 0x00u
#define CSI_RCSLVSEL_BITS_FIELD_MASK 0x000000fful
#define CSI_RCSLVSEL_BITS_GET(x) ((x) & 0x000000fful)
#define CSI_RCSLVSEL_BITS_SET(x) ((x) & 0x000000fful)
#define CSI_RCSLVSEL_BITS_MODIFY(r, x) \
   (((x) & 0x000000fful) | ((r) & 0xffffff00ul))

/* Register type: csi::rCdr                                                */
/* Register template: csi::rCdr                                            */
/* Source filename: csi_csr.csr, line: 419                                 */
/* Field member: csi::rCdr.data                                            */
/* Source filename: csi_csr.csr, line: 429                                 */
#define CSI_RCDR_DATA_MSB 31u
#define CSI_RCDR_DATA_LSB 0u
#define CSI_RCDR_DATA_WIDTH 32u
#define CSI_RCDR_DATA_READ_ACCESS 1u
#define CSI_RCDR_DATA_WRITE_ACCESS 1u
#define CSI_RCDR_DATA_RESET 0x00000000ul
#define CSI_RCDR_DATA_FIELD_MASK 0xfffffffful
#define CSI_RCDR_DATA_GET(x) ((x) & 0xfffffffful)
#define CSI_RCDR_DATA_SET(x) ((x) & 0xfffffffful)
#define CSI_RCDR_DATA_MODIFY(r, x) ((x) & 0xfffffffful)

/* ####################################################################### */
/*        TYPE DEFINITIONS                                                 */
/* ####################################################################### */

/* Typedef for Addressmap: csi                                             */
/* Source filename: csi_csr.csr, line: 451                                 */
typedef struct {
   volatile uint32_t rCscratch; /**< Offset 0x0 (R/W) */
   volatile uint32_t rCspare; /**< Offset 0x4 (R/W) */
   volatile uint32_t rCntrl; /**< Offset 0x8 (R/W) */
   volatile uint32_t rCcmd; /**< Offset 0xc (R/W) */
   volatile uint32_t rCcfg; /**< Offset 0x10 (R/W) */
   volatile uint32_t rCslvsel; /**< Offset 0x14 (R/W) */
   volatile uint32_t rCdr; /**< Offset 0x18 (R/W) */
   uint8_t _pad0[0x4];
} Csi, *PTR_Csi;

#endif
