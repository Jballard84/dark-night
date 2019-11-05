// ======================================================================
// Design01.v generated from TopDesign.cysch
// 02/02/2019 at 17:57
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 0
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 2
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 2
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 7
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 8
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 9
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 10
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 11
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 12
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 13
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 14
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 15
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 16
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 17
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 18
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 19
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 20
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 21
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 22
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 0
`define CYDEV_CHIP_REVISION_6A_NO_UDB 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 23
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 24
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 25
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 26
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 27
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 2
`define CYDEV_CHIP_REVISION_USED 0
// Component: cy_analog_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`endif

// Component: demux_v1_10
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10\demux_v1_10.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\demux_v1_10\demux_v1_10.v"
`endif

// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// VDAC8_v1_90(Data_Source=0, Initial_Value=100, Strobe_Mode=1, VDAC_Range=0, VDAC_Speed=2, Voltage=400, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Crank_Signal:VDAC8, CY_INSTANCE_SHORT_NAME=VDAC8, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Crank_Signal_VDAC8, )
module VDAC8_v1_90_0 (
    strobe,
    data,
    vOut);
    input       strobe;
    input      [7:0] data;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 100;
    parameter Strobe_Mode = 1;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .reset(Net_83),
        .idir(Net_81),
        .data(data[7:0]),
        .strobe(strobe),
        .vout(vOut),
        .iout(Net_77),
        .ioff(Net_82),
        .strobe_udb(strobe));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// OpAmp_v1_90(Mode=1, Power=2, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=OpAmp_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Crank_Signal:BuffAmp, CY_INSTANCE_SHORT_NAME=BuffAmp, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Crank_Signal_BuffAmp, )
module OpAmp_v1_90_1 (
    Vplus,
    Vout,
    Vminus);
    inout       Vplus;
    electrical  Vplus;
    inout       Vout;
    electrical  Vout;
    inout       Vminus;
    electrical  Vminus;

    parameter Mode = 1;

    electrical  Net_29;

    cy_psoc3_abuf_v1_0 ABuf (
        .vplus(Vplus),
        .vminus(Net_29),
        .vout(Vout));

	// abuf_negInput_mux (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 abuf_negInput_mux_connect(Net_29, Vout);
	defparam abuf_negInput_mux_connect.sig_width = 1;



endmodule

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// Component: cydff_v1_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`endif

// WaveDAC8_v2_10(Clock_SRC=0, DAC_Range=16, DacModeReplString=VDAC8, Sample_Clock_Freq=42000, Wave1_Amplitude=1, Wave1_Data=253u,246u,234u,217u,198u,182u,168u,155u,144u,133u,122u,110u,95u,78u,58u,40u,25u,19u,21u,31u,43u,61u,81u,102u,122u,144u,165u,186u,205u,217u,225u,223u,215u,203u,189u,174u,162u,152u,142u,132u,122u,112u,98u,82u,64u,47u,32u,21u,21u,26u,37u,53u,70u,89u,110u,129u,149u,169u,187u,205u,217u,221u,220u,212u,200u,186u,172u,161u,150u,140u,132u,123u,114u,103u,88u,73u,57u,42u,31u,25u,26u,33u,44u,59u,76u,94u,112u,129u,148u,168u,186u,202u,212u,216u,215u,210u,200u,187u,175u,163u,153u,145u,138u,130u,122u,112u,102u,89u,75u,61u,47u,35u,30u,30u,36u,45u,58u,73u,89u,104u,119u,137u,152u,168u,183u,197u,207u,212u,213u,208u,200u,190u,178u,167u,157u,147u,139u,131u,124u,114u,102u,88u,71u,55u,38u,26u,20u,23u,32u,47u,65u,85u,106u,129u,151u,175u,199u,216u,227u,228u,224u,213u,195u,179u,164u,150u,140u,130u,119u,106u,90u,70u,52u,34u,22u,17u,21u,31u,48u,66u,87u,108u,128u,150u,172u,193u,210u,220u,222u,218u,209u,197u,183u,170u,158u,148u,140u,133u,125u,115u,103u,89u,74u,59u,44u,33u,29u,31u,38u,49u,63u,79u,95u,111u,127u,145u,162u,179u,194u,206u,212u,215u,212u,205u,196u,183u,172u,162u,152u,144u,136u,128u,118u,108u,94u,78u,62u,46u,31u,23u,22u,29u,40u,56u,74u,93u,113u,133u,155u,176u,196u,212u,222u,224u,219u,210u,195u,180u,167u,156u,144u,135u,126u,116u,105u,90u,73u,58u,41u,29u,23u,24u,33u,46u,63u,79u,98u,116u,135u,154u,172u,190u,204u,213u,217u,215u,207u,197u,184u,171u,161u,153u,144u,136u,128u,120u,110u,99u,85u,70u,55u,43u,34u,29u,32u,39u,52u,66u,81u,99u,116u,133u,150u,168u,186u,202u,212u,216u,215u,210u,200u,187u,174u,162u,152u,142u,135u,128u,118u,107u,94u,77u,62u,46u,32u,24u,24u,31u,42u,58u,76u,95u,114u,134u,152u,173u,192u,208u,217u,218u,215u,207u,195u,181u,167u,155u,147u,138u,129u,120u,110u,98u,82u,66u,51u,36u,28u,26u,30u,40u,55u,71u,90u,109u,126u,145u,166u,184u,201u,213u,218u,218u,212u,202u,189u,175u,163u,152u,144u,137u,127u,117u,106u,92u,76u,60u,44u,32u,25u,26u,32u,44u,60u,77u,96u,115u,134u,154u,174u,192u,208u,218u,220u,217u,208u,195u,181u,168u,157u,147u,136u,128u,120u,108u,95u,78u,61u,45u,31u,24u,24u,31u,44u,59u,77u,98u,118u,138u,159u,179u,198u,213u,221u,221u,214u,204u,190u,175u,163u,152u,143u,133u,123u,113u,101u,83u,66u,48u,32u,22u,20u,26u,38u,55u,74u,94u,115u,137u,158u,180u,200u,214u,222u,222u,216u,205u,190u,176u,162u,151u,142u,130u,121u,109u,95u,76u,59u,42u,26u,20u,21u,30u,45u,62u,82u,104u,124u,146u,168u,188u,207u,218u,223u,220u,212u,198u,182u,169u,156u,146u,136u,126u,115u,102u,86u,69u,51u,35u,24u,22u,27u,38u,54u,73u,93u,114u,134u,157u,179u,199u,215u,222u,221u,215u,205u,192u,176u,162u,151u,142u,134u,124u,112u,99u,82u,65u,49u,34u,25u,22u,28u,40u,57u,76u,96u,116u,136u,158u,178u,197u,211u,219u,220u,216u,205u,193u,179u,166u,155u,145u,137u,128u,119u,106u,93u,76u,60u,45u,33u,26u,27u,35u,47u,62u,79u,99u,115u,134u,153u,173u,190u,204u,214u,217u,214u,207u,197u,183u,172u,159u,149u,141u,133u,125u,116u,106u,95u,80u,66u,51u,39u,33u,31u,35u,44u,56u,71u,88u,105u,121u,139u,156u,173u,189u,203u,212u,215u,212u,206u,197u,185u,175u,165u,154u,145u,138u,131u,124u,115u,104u,92u,79u,66u,55u,43u,36u,34u,38u,45u,56u,71u,85u,101u,116u,134u,152u,172u,190u,207u,220u,225u,224u,216u,205u,190u,175u,162u,151u,140u,130u,118u,106u,90u,71u,53u,34u,20u,15u,19u,31u,48u,69u,91u,114u,137u,161u,184u,205u,221u,228u,225u,217u,204u,188u,173u,158u,148u,139u,130u,121u,111u,97u,81u,64u,48u,34u,27u,26u,32u,43u,58u,76u,94u,113u,132u,152u,172u,189u,205u,215u,219u,216u,209u,199u,187u,175u,164u,153u,144u,137u,129u,120u,110u,98u,84u,69u,56u,43u,33u,30u,33u,40u,50u,64u,80u,96u,112u,128u,145u,164u,181u,196u,208u,217u,219u,216u,209u,197u,184u,172u,160u,150u,142u,133u,123u,112u,97u,81u,64u,46u,30u,21u,20u,25u,38u,56u,73u,94u,115u,137u,160u,183u,203u,218u,226u,225u,218u,207u,191u,175u,162u,151u,140u,131u,121u,111u,97u,82u,65u,48u,33u,25u,23u,30u,42u,56u,73u,93u,112u,132u,152u,172u,191u,207u,218u,221u,217u,209u,197u,183u,170u,159u,149u,140u,132u,122u,112u,100u,84u,67u,50u,35u,26u,24u,28u,38u,52u,68u,87u,107u,126u,145u,166u,185u,202u,215u,222u,220u,213u,203u,190u,177u,165u,154u,144u,135u,126u,116u,104u,89u,72u,55u,39u,28u,23u,25u,33u,46u,62u,81u,101u,120u,139u,159u,180u,199u,215u,222u,221u,217u,206u,194u,179u,167u,154u,144u,135u,126u,117u,105u,90u,71u,54u,38u,27u,21u,24u,32u,46u,65u,84u,105u,124u,145u,168u,188u,206u,219u,225u,221u,213u,202u,188u,173u,159u,148u,140u,131u,121u,109u,93u,74u,56u,38u,25u,18u,20u,29u,45u,62u,82u,104u,124u,146u,169u,190u,210u,222u,226u,222u,213u,200u,184u,169u,158u,146u,136u,126u,115u,101u,84u,65u,46u,30u,19u,16u,21u,35u,53u,73u,94u,115u,137u,160u,183u,203u,218u,225u,224u,217u,205u,189u,174u,160u,148u,139u,130u,120u,107u,92u,73u,54u,37u,24u,18u,21u,31u,46u,65u,85u,106u,129u,150u,173u,194u,212u,222u,225u,220u,210u,196u,181u,167u,155u,145u,135u,126u,116u,102u,86u,68u,49u,35u,23u,21u,26u,37u,53u,71u,92u,112u,131u,153u,174u,194u,211u,220u,222u,219u,209u,198u,182u,169u,158u,147u,138u,130u,120u,107u,94u,77u,61u,45u,32u,25u,25u,32u,44u,60u,76u,96u,114u,133u,152u,171u,190u,207u,216u,220u,217u,211u,201u,187u,173u,161u,151u,142u,135u,126u,117u,106u,94u,79u,64u,49u,37u,30u,28u,34u,43u,58u,72u,88u,105u,123u,141u,159u,176u,193u,207u,217u,219u,216u,208u,198u,185u,173u,162u,153u,144u,136u,129u,121u,112u,98u,83u,66u,51u,36u,26u,23u,28u,38u,54u,72u,93u,113u,133u,154u,176u,198u,217u,227u,229u,224u,213u,197u,180u,165u,153u,142u,132u,121u,108u,91u,71u,51u,32u,18u,14u,19u,31u,48u,67u,89u,111u,132u,154u,176u,197u,215u,225u,225u,221u,210u,196u,181u,167u,156u,145u,136u,127u,116u,104u,89u,72u,55u,37u,26u,21u,24u,33u,45u,61u,79u,98u,116u,134u,152u,173u,191u,208u,218u,221u,219u,212u,202u,189u,175u,162u,152u,143u,136u,127u,118u,108u,95u,79u,64u,47u,33u,24u,21u,28u,39u,55u,72u,91u,111u,130u,151u,172u,193u,211u,223u,227u,223u,214u,200u,184u,170u,157u,147u,137u,128u,118u,105u,88u,70u,51u,33u,20u,16u,20u,31u,47u,66u,85u,107u,128u,149u,171u,192u,209u,223u,226u,224u,215u,201u,186u,170u,159u,148u,139u,130u,121u,109u,96u,80u,63u,45u,30u,22u,20u,27u,38u,54u,70u,90u,109u,129u,149u,168u,187u,205u,218u,224u,222u,215u,202u,189u,176u,163u,152u,143u,135u,126u,117u,106u,90u,74u,57u,40u,28u,21u,22u,29u,41u,58u,76u,96u,115u,135u,155u,176u,196u,212u,223u,225u,221u,212u,198u,183u,169u,157u,145u,136u,128u,118u,105u,90u,71u,53u,36u,23u,16u,20u,29u,44u,63u,82u,103u,123u,144u,167u,190u,210u,224u,229u,225u,216u,203u,187u,171u,158u,148u,138u,128u,119u,107u,90u,71u,52u,34u,20u,14u,17u,28u,42u,62u,83u,106u,127u,149u,173u,196u,215u,227u,231u,225u,213u,199u,182u,168u,156u,145u,135u,125u,113u,98u,79u,60u,40u,23u,13u,13u,22u,36u,55u,76u,100u,122u,144u,167u,191u,211u,225u,230u,226u,216u,201u,185u,170u,157u,146u,135u,124u,112u,96u,78u,58u,38u,22u,11u,12u,23u,39u,57u,79u,102u,125u,147u,172u,196u,214u,226u,231u,227u,216u,199u,182u,167u,155u,144u,134u,123u,110u,95u,75u,56u,37u,21u,14u,16u,28u,43u,62u,85u,107u,129u,153u,177u,200u,219u,229u,230u,224u,212u,197u,181u,165u,153u,142u,133u,123u,110u,96u,76u,57u,38u,23u,15u,17u,27u,42u,61u,82u,104u,124u,148u,172u,193u,212u,225u,229u,224u,214u,201u,185u,171u,159u,147u,138u,129u,118u,106u,89u,71u,52u,35u,23u,18u,21u,33u,47u,65u,86u,106u,125u,146u,167u,186u,205u,219u,224u,223u,216u,205u,191u,177u,163u,153u,143u,134u,125u,115u,103u,88u,70u,54u,39u,27u,23u,25u,33u,45u,61u,80u,98u,116u,135u,155u,175u,192u,208u,219u,223u,220u,212u,201u,187u,174u,162u,151u,143u,134u,126u,118u,107u,93u,78u,62u,46u,32u,26u,25u,30u,41u,54u,70u,89u,107u,124u,143u,162u,181u,197u,213u,221u,225u,223u,214u,202u,187u,174u,162u,152u,142u,130u,119u,105u,86u,66u,44u,25u,11u,9u,17u,32u,51u,73u,97u,120u,145u,172u,198u,219u,234u,237u,231u,220u,202u,183u,168u,154u,142u,130u,119u,105u,86u,67u,47u,28u,14u,10u,15u,29u,46u,67u,90u,111u,134u,156u,179u,201u,219u,229u,231u,225u,214u,200u,182u,168u,155u,144u,135u,125u,117u,103u,87u,70u,54u,37u,25u,21u,23u,34u,47u,63u,82u,102u,120u,140u,159u,179u,197u,213u,221u,222u,217u,209u,197u,183u,170u,158u,149u,141u,132u,125u,115u,103u,88u,72u,55u,39u,28u,22u,25u,33u,45u,61u,79u,99u,117u,139u,163u,184u,204u,222u,231u,232u,226u,214u,198u,181u,166u,153u,142u,133u,122u,111u,95u,75u,55u,35u,19u,11u,13u,25u,41u,60u,83u,106u,128u,152u,175u,197u,216u,228u,227u,221u,211u,195u,179u,165u,153u,143u,134u,123u,111u,97u,79u,60u,41u,27u,18u,18u,27u,41u,59u,79u,101u,121u,143u,166u,187u,207u,222u,228u,226u,219u,206u,190u,174u,161u,148u,138u,129u,118u,105u,88u,70u,49u,30u,13u,4u,2u,6u,15u,25u,36u,47u,58u,67u,75u,83u,89u,94u,100u,102u,104u,107u,109u,111u,112u,114u,115u,116u,117u,118u,119u,119u,120u,121u,120u,119u,121u,121u,121u,122u,121u,121u,121u,121u,121u,121u,121u,121u,121u,122u,122u,123u,124u,123u,124u,125u,124u,124u,125u,124u,125u,126u,127u,128u,130u,131u,133u,135u,138u,142u,146u,152u,159u,167u,178u,190u,204u,218u,233u,246u,251u,250u,243u,232u,216u,200u,182u,169u,157u,146u,136u,125u,111u,95u,76u,56u,37u,22u,15u,18u,28u,43u,62u,83u,105u,127u,149u,172u,194u,212u,224u,226u,222u,212u,198u,183u,168u,155u,145u,135u,125u,115u,102u,85u,67u,49u,33u,23u,20u,25u,35u,51u,69u,89u,109u,129u,151u,172u,192u,209u,220u,223u,220u,211u,199u,185u,172u,159u,148u,139u,130u,121u,111u,99u,83u,66u,49u,36u,26u,23u,27u,38u,53u,69u,88u,107u,127u,148u,170u,190u,207u,219u,224u,222u,214u,202u,186u,172u,160u,149u,140u,132u,123u,112u,98u,81u,64u,47u,31u,22u,19u,27u,38u,54u,73u,94u,112u,132u,152u,174u,193u,209u,219u,222u,218u,210u,197u,182u,170u,158u,148u,139u,131u,122u,110u,97u,82u,65u,49u,35u,26u,24u,29u,41u,56u,73u,92u,111u,131u,151u,171u,189u,207u,218u,223u,222u,213u,201u,186u,173u,160u,150u,142u,132u,124u,114u,103u,88u,70u,55u,39u,29u,25u,28u,37u,49u,66u,86u,105u,122u,142u,162u,180u,197u,211u,219u,221u,215u,205u,194u,180u,168u,156u,147u,138u,130u,121u,111u,99u,82u,67u,52u,37u,27u,25u,28u,37u,51u,67u,85u,104u,121u,140u,160u,179u,196u,210u,217u,218u,215u,206u,195u,182u,169u,156u,147u,139u,133u,124u,115u,105u,91u,76u,61u,46u,33u,27u,28u,33u,45u,60u,76u,94u,111u,128u,147u,166u,183u,199u,211u,217u,217u,211u,202u,190u,176u,165u,155u,146u,137u,128u,120u,112u,100u,86u,71u,55u,40u,30u,27u,28u,36u,49u,63u,80u,98u,115u,132u,150u,169u,186u,201u,211u,216u,215u,209u,200u,187u,176u,164u,153u,144u,136u,129u,120u,111u,100u,87u,72u,59u,45u,34u,30u,30u,36u,48u,61u,77u,93u,110u,127u,145u,163u,181u,196u,209u,216u,215u,210u,201u,191u,177u,166u,155u,146u,139u,131u,123u,114u,104u,91u,77u,63u,48u,37u,31u,29u,34u,43u,57u,72u,89u,105u,121u,138u,155u,173u,189u,203u,211u,214u,212u,205u,195u,182u,171u,159u,149u,141u,133u,126u,118u,108u,96u,82u,67u,53u,41u,32u,27u,31u,39u,51u,66u,82u,100u,117u,135u,152u,168u,186u,201u,210u,214u,213u,207u,197u,186u,173u,161u,152u,143u,136u,128u,119u,109u,98u,84u,69u,55u,42u,31u,28u,30u,38u,51u,65u,80u,98u,116u,133u,152u,170u,188u,203u,212u,216u,214u,208u,196u,184u,171u,160u,149u,142u,134u,126u,117u,107u,94u,78u,64u,48u,35u,27u,25u,31u,41u,55u,71u,89u,107u,125u,143u,161u,180u,196u,209u,215u,215u,211u,202u,189u,176u,164u,153u,144u,136u,127u,118u,107u,95u,79u,64u,48u,36u,27u,25u,29u,39u,54u,70u,87u,106u,124u,143u,163u,183u,200u,213u,218u,217u,211u,200u,187u,173u,161u,150u,140u,134u,126u,116u,106u,92u,76u,59u,44u,31u,24u,23u,30u,43u,60u,77u,96u,115u,134u,153u,173u,190u,205u,214u,216u,213u,207u,196u,183u,170u,159u,150u,141u,132u,123u,113u,100u,85u,70u,55u,41u,31u,27u,30u,39u,51u,66u,83u,101u,118u,137u,155u,175u,191u,205u,215u,218u,215u,207u,195u,182u,169u,157u,148u,140u,132u,125u,116u,106u,93u,79u,64u,50u,37u,31u,31u,35u,45u,58u,74u,91u,109u,125u,142u,160u,177u,192u,204u,211u,213u,210u,203u,194u,183u,171u,161u,151u,144u,136u,128u,121u,111u,100u,88u,74u,62u,50u,40u,35u,34u,40u,49u,61u,75u,91u,108u,124u,142u,161u,179u,196u,210u,218u,219u,215u,207u,195u,181u,168u,157u,148u,139u,131u,121u,109u,95u,77u,61u,43u,28u,21u,22u,31u,44u,61u,81u,102u,122u,143u,164u,185u,203u,216u,223u,221u,214u,203u,188u,174u,162u,151u,142u,132u,123u,113u,101u,86u,70u,55u,41u,31u,27u,30u,39u,51u,66u,83u,101u,118u,136u,154u,173u,190u,205u,215u,217u,216u,209u,199u,187u,175u,163u,152u,145u,138u,131u,124u,116u,106u,94u,81u,66u,53u,41u,34u,31u,35u,43u,56u,70u,85u,102u,119u,136u,154u,172u,189u,204u,215u,220u,219u,213u,202u,190u,176u,164u,154u,144u,136u,126u,116u,104u,89u,72u,56u,40u,27u,24u,27u,36u,49u,65u,83u,103u,120u,140u,160u,180u,199u,213u,220u,221u,216u,206u,194u,180u,167u,156u,146u,138u,130u,121u,112u,101u,87u,72u,59u,45u,34u,29u,31u,38u,48u,62u,78u,95u,111u,127u,144u,161u,178u,193u,206u,212u,215u,212u,205u,196u,183u,171u,161u,151u,143u,136u,128u,121u,112u,101u,88u,73u,58u,44u,32u,26u,29u,35u,45u,60u,76u,94u,111u,129u,147u,166u,185u,201u,213u,220u,219u,214u,204u,190u,177u,164u,153u,144u,136u,127u,118u,108u,94u,79u,62u,47u,33u,25u,25u,30u,40u,55u,72u,90u,109u,126u,145u,165u,184u,201u,213u,219u,219u,214u,204u,192u,178u,165u,155u,146u,138u,130u,121u,111u,99u,85u,69u,54u,39u,29u,25u,29u,37u,49u,64u,81u,100u,116u,135u,153u,172u,189u,205u,214u,219u,217u,212u,202u,187u,174u,163u,152u,143u,135u,128u,118u,108u,95u,79u,63u,48u,35u,26u,25u,31u,40u,53u,70u,88u,107u,124u,143u,162u,182u,200u,212u,220u,221u,216u,207u,194u,179u,167u,156u,145u,138u,129u,120u,109u,96u,80u,63u,46u,31u,22u,20u,26u,37u,52u,70u,89u,108u,128u,148u,168u,189u,206u,219u,223u,221u,214u,202u,188u,174u,161u,150u,140u,132u,123u,112u,98u,81u,64u,46u,30u,20u,18u,24u,36u,52u,70u,90u,110u,130u,151u,173u,194u,212u,223u,226u,221u,211u,199u,182u,169u,155u,145u,136u,127u,117u,104u,89u,72u,54u,34u,22u,17u,20u,29u,44u,63u,83u,104u,124u,145u,166u,188u,208u,220u,225u,223u,214u,202u,186u,171u,159u,149u,139u,130u,120u,108u,93u,76u,59u,41u,26u,19u,19u,28u,41u,57u,77u,98u,118u,139u,160u,180u,200u,215u,222u,224u,218u,207u,193u,179u,164u,152u,143u,135u,124u,115u,102u,87u,70u,53u,38u,26u,21u,24u,33u,47u,64u,83u,102u,121u,140u,160u,181u,199u,213u,221u,222u,216u,207u,194u,179u,167u,155u,146u,137u,129u,121u,111u,98u,83u,68u,51u,37u,27u,24u,28u,38u,51u,67u,84u,102u,119u,138u,156u,174u,192u,207u,216u,219u,217u,210u,200u,188u,175u,162u,152u,144u,136u,129u,122u,112u,101u,88u,73u,59u,46u,34u,29u,30u,36u,46u,58u,73u,90u,105u,120u,136u,154u,171u,187u,202u,213u,217u,218u,213u,205u,194u,180u,167u,156u,147u,139u,132u,123u,113u,100u,84u,66u,48u,30u,18u,16u,21u,35u,51u,72u,94u,115u,138u,161u,186u,208u,224u,232u,233u,225u,212u,195u,179u,165u,153u,141u,132u,121u,108u,91u,72u,52u,33u,19u,14u,18u,28u,45u,63u,82u,103u,123u,143u,165u,185u,206u,220u,227u,226u,220u,210u,195u,180u,167u,156u,145u,137u,129u,120u,110u,98u,84u,69u,53u,38u,28u,25u,28u,36u,47u,62u,77u,95u,111u,127u,145u,162u,179u,196u,210u,219u,221u,219u,212u,202u,189u,176u,165u,154u,145u,137u,129u,120u,109u,97u,79u,63u,45u,29u,18u,16u,23u,34u,49u,68u,87u,108u,128u,150u,171u,193u,212u,226u,229u,228u,219u,205u,189u,174u,161u,150u,139u,130u,119u,107u,91u,74u,55u,36u,22u,16u,19u,27u,40u,57u,76u,96u,115u,134u,154u,175u,195u,212u,223u,226u,222u,212u,199u,184u,171u,158u,147u,138u,132u,124u,114u,103u,89u,73u,58u,41u,29u,23u,24u,31u,42u,57u,74u,93u,110u,127u,147u,166u,185u,202u,214u,219u,219u,215u,207u,195u,180u,168u,157u,148u,140u,133u,125u,115u,103u,89u,73u,57u,40u,26u,20u,21u,30u,42u,57u,74u,93u,111u,129u,148u,168u,188u,207u,221u,227u,228u,220u,207u,192u,177u,163u,151u,141u,132u,123u,113u,100u,84u,66u,48u,30u,19u,14u,20u,31u,45u,63u,83u,104u,125u,146u,168u,189u,209u,222u,228u,224u,217u,205u,187u,173u,161u,150u,140u,130u,121u,109u,95u,76u,57u,37u,22u,14u,15u,24u,38u,56u,76u,99u,120u,141u,165u,187u,208u,223u,231u,229u,221u,206u,190u,175u,161u,149u,139u,130u,118u,105u,88u,69u,49u,29u,14u,10u,15u,27u,44u,64u,86u,109u,131u,155u,179u,201u,220u,230u,232u,225u,212u,196u,178u,163u,150u,140u,131u,119u,106u,90u,70u,50u,30u,15u,9u,16u,28u,45u,65u,88u,111u,134u,159u,184u,206u,223u,232u,231u,223u,210u,193u,176u,162u,150u,140u,130u,119u,105u,89u,68u,47u,28u,14u,11u,17u,32u,49u,71u,94u,117u,139u,165u,188u,210u,225u,231u,229u,220u,206u,189u,175u,162u,150u,140u,130u,119u,105u,87u,67u,48u,29u,17u,14u,20u,33u,49u,69u,92u,114u,135u,157u,179u,200u,216u,227u,230u,223u,212u,197u,182u,168u,157u,145u,136u,125u,114u,101u,83u,65u,47u,32u,20u,18u,25u,36u,51u,68u,90u,108u,128u,150u,170u,191u,209u,222u,227u,225u,216u,204u,190u,175u,162u,151u,142u,134u,125u,115u,104u,90u,73u,57u,40u,28u,23u,24u,31u,44u,59u,76u,95u,113u,131u,149u,168u,187u,205u,216u,222u,221u,216u,207u,195u,181u,169u,158u,148u,139u,132u,125u,115u,104u,92u,77u,63u,49u,37u,29u,27u,32u,42u,54u,67u,82u,98u,115u,130u,148u,164u,181u,197u,209u,217u,219u,216u,210u,199u,187u,175u,164u,154u,145u,138u,129u,121u,111u,97u,81u,62u,44u,27u,15u,14u,21u,33u,51u,71u,93u,116u,139u,162u,186u,209u,228u,236u,236u,227u,212u,194u,177u,163u,150u,139u,129u,116u,101u,81u,61u,40u,21u,10u,10u,20u,33u,53u,75u,97u,118u,141u,165u,188u,208u,222u,230u,228u,221u,207u,191u,175u,162u,150u,141u,133u,124u,115u,102u,88u,71u,53u,36u,25u,21u,24u,33u,45u,62u,79u,98u,117u,134u,154u,173u,191u,207u,218u,222u,221u,213u,203u,189u,176u,164u,153u,144u,136u,129u,122u,111u,100u,86u,71u,56u,41u,29u,23u,24u,32u,43u,58u,74u,93u,111u,128u,148u,169u,189u,207u,220u,226u,226u,218u,205u,190u,176u,162u,151u,142u,132u,123u,110u,97u,79u,60u,40u,24u,13u,13u,21u,35u,53u,73u,94u,116u,138u,161u,184u,206u,221u,228u,227u,220u,207u,192u,175u,161u,149u,140u,130u,121u,110u,95u,78u,60u,41u,26u,17u,16u,23u,36u,53u,72u,93u,113u,134u,155u,177u,199u,215u,225u,227u,222u,211u,197u,181u,167u,154u,143u,134u,124u,114u,101u,85u,66u,46u,28u,11u,2u,2u,7u,15u,25u,36u,47u,59u,67u,75u,82u,88u,94u,98u,100u,104u,106u,109u,111u,113u,114u,115u,115u,116u,116u,117u,118u,118u,118u,119u,120u,120u,120u,119u,120u,120u,121u,121u,121u,122u,122u,122u,122u,122u,122u,123u,122u,122u,122u,123u,123u,123u,123u,124u,125u,127u,127u,127u,129u,132u,133u,137u,140u,144u,149u,155u,163u,173u,184u,198u,212u,228u,242u,249u,251u, Wave1_DCOffset=0.51, Wave1_Length=3749, Wave1_PhaseShift=0, Wave1_Type=11, Wave2_Amplitude=1, Wave2_Data=128u,132u,138u,143u,148u,152u,158u,162u,168u,172u,178u,182u,188u,192u,198u,202u,208u,213u,218u,222u,228u,232u,238u,242u,248u,252u,248u,242u,238u,232u,228u,222u,218u,212u,208u,202u,198u,192u,188u,182u,178u,173u,168u,162u,158u,152u,148u,143u,138u,132u,128u,122u,118u,112u,107u,102u,97u,93u,88u,83u,78u,73u,68u,62u,57u,52u,47u,42u,37u,33u,28u,23u,18u,13u,8u,3u,8u,13u,18u,23u,28u,33u,37u,42u,47u,52u,57u,62u,68u,73u,78u,83u,88u,93u,97u,102u,107u,112u,118u,122u, Wave2_DCOffset=0.51, Wave2_Length=100, Wave2_PhaseShift=0, Wave2_Type=2, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=WaveDAC8_v2_10, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Crank_Signal, CY_INSTANCE_SHORT_NAME=Crank_Signal, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Crank_Signal, )
module WaveDAC8_v2_10_2 (
    Wave,
    ws,
    clock,
    wc1,
    wc2);
    inout       Wave;
    electrical  Wave;
    input       ws;
    input       clock;
    output      wc1;
    output      wc2;


          wire  Net_280;
    electrical  Net_273;
          wire  Net_202;
          wire  Net_201;
          wire [7:0] Net_171;
          wire [7:0] Net_170;
          wire  Net_339;
          wire  Net_341;
          wire  Net_153;
    electrical  Net_211;
          wire  Net_134;
          wire  Net_107;
          wire  Net_183;
          wire  Net_336;
          wire  Net_279;
          wire  Net_80;
    electrical  Net_247;
    electrical  Net_254;
    electrical  Net_256;
    electrical  Net_190;
    electrical  Net_189;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_211));

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_189, Net_256);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_190, Net_211);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_254));


	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave1_DMA
		 (.drq(Net_183),
		  .trq(1'b0),
		  .nrq(wc1));



	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave2_DMA
		 (.drq(Net_107),
		  .trq(1'b0),
		  .nrq(wc2));


    // -- De Mux start --
    if (1)
    begin : demux
        reg  tmp__demux_0_reg;
        reg  tmp__demux_1_reg;
        always @(Net_336 or Net_134)
        begin
            case (Net_134)
                1'b0:
                begin
                    tmp__demux_0_reg = Net_336;
                    tmp__demux_1_reg = 1'b0;
                end
                1'b1:
                begin
                    tmp__demux_0_reg = 1'b0;
                    tmp__demux_1_reg = Net_336;
                end
            endcase
        end
        assign Net_183 = tmp__demux_0_reg;
        assign Net_107 = tmp__demux_1_reg;
    end
    // -- De Mux end --

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_336 = clock;

    VDAC8_v1_90_0 VDAC8 (
        .strobe(Net_336),
        .data(8'b00000000),
        .vOut(Net_189));
    defparam VDAC8.Data_Source = 0;
    defparam VDAC8.Initial_Value = 100;
    defparam VDAC8.Strobe_Mode = 1;

    OpAmp_v1_90_1 BuffAmp (
        .Vplus(Net_256),
        .Vout(Net_247),
        .Vminus(Net_273));
    defparam BuffAmp.Mode = 1;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Wave, Net_247);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;


    assign Net_280 = Net_80 | Net_279;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_80));

    // -- DFF Start --
    reg  cydff_1;
    always @(posedge Net_336)
    begin
        cydff_1 <= ws;
    end
    assign Net_134 = cydff_1;
    // -- DFF End --



endmodule

// VDAC8_v1_90(Data_Source=0, Initial_Value=100, Strobe_Mode=1, VDAC_Range=0, VDAC_Speed=2, Voltage=400, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Cam_signal:VDAC8, CY_INSTANCE_SHORT_NAME=VDAC8, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Cam_signal_VDAC8, )
module VDAC8_v1_90_3 (
    strobe,
    data,
    vOut);
    input       strobe;
    input      [7:0] data;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 100;
    parameter Strobe_Mode = 1;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .reset(Net_83),
        .idir(Net_81),
        .data(data[7:0]),
        .strobe(strobe),
        .vout(vOut),
        .iout(Net_77),
        .ioff(Net_82),
        .strobe_udb(strobe));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// OpAmp_v1_90(Mode=1, Power=2, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=OpAmp_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Cam_signal:BuffAmp, CY_INSTANCE_SHORT_NAME=BuffAmp, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Cam_signal_BuffAmp, )
module OpAmp_v1_90_4 (
    Vplus,
    Vout,
    Vminus);
    inout       Vplus;
    electrical  Vplus;
    inout       Vout;
    electrical  Vout;
    inout       Vminus;
    electrical  Vminus;

    parameter Mode = 1;

    electrical  Net_29;

    cy_psoc3_abuf_v1_0 ABuf (
        .vplus(Vplus),
        .vminus(Net_29),
        .vout(Vout));

	// abuf_negInput_mux (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 abuf_negInput_mux_connect(Net_29, Vout);
	defparam abuf_negInput_mux_connect.sig_width = 1;



endmodule

// WaveDAC8_v2_10(Clock_SRC=0, DAC_Range=17, DacModeReplString=VDAC8, Sample_Clock_Freq=42000, Wave1_Amplitude=4, Wave1_Data=249u,248u,249u,248u,248u,249u,248u,248u,248u,247u,247u,248u,248u,249u,248u,248u,249u,248u,249u,248u,248u,249u,248u,250u,250u,250u,250u,252u,251u,252u,251u,251u,251u,251u,251u,251u,250u,250u,250u,250u,251u,250u,250u,250u,248u,248u,248u,247u,249u,248u,249u,249u,248u,249u,249u,249u,249u,248u,249u,249u,248u,248u,249u,248u,249u,248u,249u,249u,248u,250u,250u,250u,251u,249u,250u,252u,250u,252u,251u,252u,253u,252u,252u,253u,252u,252u,251u,251u,251u,250u,251u,250u,249u,250u,249u,248u,249u,249u,249u,249u,248u,249u,248u,248u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,249u,248u,249u,249u,250u,251u,250u,251u,251u,251u,252u,252u,252u,254u,252u,253u,252u,253u,253u,252u,251u,252u,250u,251u,250u,248u,248u,247u,247u,247u,246u,247u,248u,247u,247u,247u,247u,248u,246u,247u,248u,245u,247u,246u,246u,248u,246u,247u,247u,247u,246u,248u,247u,248u,248u,248u,250u,249u,249u,250u,249u,249u,251u,251u,251u,251u,250u,251u,251u,250u,250u,249u,250u,250u,248u,248u,248u,248u,248u,248u,246u,247u,248u,247u,247u,247u,247u,248u,247u,247u,248u,248u,248u,248u,247u,249u,247u,248u,248u,248u,248u,249u,249u,249u,249u,249u,251u,250u,251u,251u,250u,251u,250u,250u,251u,251u,250u,250u,250u,248u,249u,249u,248u,248u,246u,246u,246u,246u,246u,246u,246u,246u,246u,245u,245u,246u,245u,245u,244u,245u,246u,245u,245u,245u,244u,245u,245u,244u,245u,245u,246u,247u,245u,246u,247u,247u,247u,248u,247u,248u,250u,249u,249u,250u,248u,249u,249u,247u,248u,247u,247u,248u,246u,245u,246u,246u,247u,247u,246u,246u,246u,244u,245u,245u,245u,246u,246u,245u,245u,246u,246u,247u,246u,246u,245u,244u,245u,246u,245u,247u,247u,247u,248u,247u,247u,248u,249u,248u,249u,248u,248u,248u,247u,249u,249u,248u,248u,248u,247u,246u,247u,245u,245u,245u,244u,245u,244u,245u,245u,246u,245u,246u,245u,244u,245u,245u,244u,246u,244u,245u,246u,244u,245u,246u,245u,246u,247u,246u,247u,248u,247u,248u,248u,248u,248u,248u,249u,251u,250u,249u,250u,249u,249u,250u,248u,248u,249u,247u,248u,247u,245u,246u,246u,245u,246u,245u,244u,245u,245u,244u,242u,242u,244u,244u,243u,245u,244u,244u,245u,244u,244u,245u,245u,245u,247u,246u,247u,247u,247u,248u,249u,248u,250u,250u,249u,251u,250u,250u,250u,250u,250u,250u,249u,249u,250u,248u,248u,248u,246u,245u,246u,244u,245u,246u,245u,245u,244u,246u,246u,246u,246u,247u,246u,246u,246u,246u,247u,246u,246u,246u,245u,245u,246u,245u,246u,247u,247u,248u,248u,248u,249u,249u,249u,250u,250u,250u,250u,249u,250u,249u,249u,250u,249u,248u,248u,247u,248u,247u,246u,246u,247u,246u,233u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,2u,2u,2u,2u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,90u,247u,248u,247u,248u,247u,248u,248u,246u,248u,249u,248u,249u,248u,247u,248u,247u,248u,248u,248u,248u,248u,247u,248u,248u,248u,250u,250u,250u,251u,251u,251u,251u,251u,251u,251u,252u,252u,251u,252u,252u,251u,250u,250u,249u,249u,248u,248u,248u,247u,248u,248u,248u,249u,248u,248u,249u,248u,248u,249u,247u,249u,247u,249u,249u,248u,248u,249u,247u,247u,248u,247u,249u,248u,248u,249u,249u,249u,249u,249u,250u,249u,249u,250u,249u,249u,249u,249u,250u,250u,249u,249u,251u,249u,250u,248u,247u,248u,247u,248u,248u,247u,247u,246u,247u,247u,246u,245u,246u,246u,245u,241u,238u,245u,246u,246u,245u,246u,247u,247u,247u,246u,247u,247u,248u,248u,246u,248u,249u,249u,249u,250u,250u,251u,250u,249u,250u,249u,250u,250u,249u,249u,248u,247u,247u,247u,247u,247u,247u,247u,247u,246u,246u,245u,245u,245u,247u,247u,247u,246u,247u,247u,246u,247u,247u,247u,247u,247u,247u,249u,247u,249u,248u,249u,250u,251u,251u,251u,251u,251u,252u,250u,251u,251u,251u,251u,250u,251u,251u,250u,249u,249u,248u,248u,246u,245u,246u,248u,247u,248u,247u,247u,247u,247u,248u,248u,247u,247u,246u,246u,247u,246u,247u,247u,247u,247u,247u,246u,248u,248u,248u,249u,249u,249u,250u,250u,251u,251u,251u,252u,251u,252u,252u,251u,251u,251u,250u,250u,250u,249u,248u,247u,247u,248u,247u,247u,248u,247u,247u,246u,247u,248u,246u,248u,248u,248u,248u,248u,248u,249u,248u,248u,249u,247u,248u,248u,247u,248u,248u,249u,250u,250u,251u,251u,251u,252u,251u,251u,253u,251u,252u,252u,252u,253u,252u,251u,252u,251u,250u,250u,248u,248u,249u,248u,248u,248u,249u,249u,248u,12u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,2u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,28u,246u,248u,248u,248u,246u,247u,247u,246u,247u,248u,247u,248u,247u,246u,246u,246u,245u,246u,246u,247u,246u,247u,246u,246u,246u,247u,246u,245u,245u,246u,245u,247u,247u,247u,249u,248u,249u,249u,248u,248u,250u,249u,248u,250u,248u,249u,250u,248u,249u,247u,247u,248u,246u,246u,246u,245u,245u,246u,245u,245u,246u,244u,246u,246u,244u,246u,246u,245u,246u,245u,245u,244u,244u,244u,245u,245u,244u,244u,244u,244u,246u,244u,244u,246u,245u,245u,246u,245u,245u,248u,245u,246u,249u,248u,248u,248u,248u,247u,249u,246u,246u,246u,244u,244u,244u,244u,245u,245u,245u,245u,245u,243u,245u,244u,245u,244u,245u,244u,245u,245u,243u,245u,244u,244u,245u,245u,244u,244u,245u,245u,246u,246u,245u,247u,246u,247u,247u,248u,248u,249u,248u,247u,249u,247u,247u,247u,247u,247u,247u,245u,245u,245u,243u,244u,244u,244u,245u,245u,244u,242u,244u,244u,243u,244u,243u,244u,243u,243u,244u,244u,243u,243u,244u,243u,243u,244u,244u,245u,245u,245u,246u,246u,246u,247u,248u,247u,249u,248u,247u,247u,247u,247u,247u,247u,247u,246u,245u,246u,246u,244u,244u,245u,245u,243u,244u,244u,243u,244u,244u,244u,245u,243u,244u,245u,244u,244u,244u,245u,244u,244u,243u,243u,244u,243u,245u,245u,245u,247u,247u,247u,247u,248u,246u,248u,249u,247u,248u,249u,247u,249u,248u,248u,249u,248u,247u,247u,246u,246u,245u,245u,244u,245u,244u,244u,245u,245u,245u,246u,245u,244u,245u,244u,245u,246u,245u,245u,246u,244u,246u,245u,244u,246u,246u,245u,247u,246u,246u,247u,247u,247u,247u,247u,248u,249u,248u,248u,249u,247u,248u,248u,247u,249u,248u,247u,248u,247u,245u,246u,245u,245u,246u,246u,246u,246u,245u,245u,246u,245u,245u,245u,244u,245u,245u,245u,246u,246u,244u,170u,2u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,2u,2u,2u,2u,2u,2u,3u,3u,3u,3u,3u,65u,244u,245u,244u,244u,243u,244u,244u,244u,245u,245u,244u,245u,245u,245u,244u,245u,244u,244u,245u,242u,244u,244u,244u,245u,245u,244u,245u,245u,245u,247u,246u,247u,247u,247u,247u,247u,247u,247u,249u,247u,247u,248u,247u,247u,246u,246u,245u,245u,244u,244u,245u,243u,245u,244u,244u,245u,245u,244u,244u,244u,243u,244u,244u,244u,244u,244u,244u,244u,244u,243u,245u,245u,245u,245u,246u,245u,246u,246u,246u,248u,247u,247u,248u,247u,248u,249u,247u,248u,248u,247u,247u,246u,245u,246u,247u,245u,245u,244u,242u,244u,244u,244u,245u,245u,244u,245u,245u,244u,245u,244u,245u,245u,245u,245u,246u,245u,245u,246u,245u,245u,245u,245u,246u,247u,246u,247u,248u,247u,249u,248u,248u,249u,249u,249u,250u,248u,249u,250u,248u,249u,249u,248u,249u,247u,246u,245u,245u,244u,245u,245u,244u,245u,244u,246u,246u,245u,244u,246u,245u,246u,246u,244u,246u,246u,245u,246u,245u,245u,245u,246u,246u,247u,247u,247u,248u,247u,248u,248u,247u,248u,248u,249u,250u,249u,248u,249u,249u,249u,249u,248u,248u,249u,247u,247u,246u,246u,247u,246u,245u,246u,246u,245u,247u,246u,246u,246u,245u,246u,245u,245u,246u,246u,245u,246u,246u,246u,246u,245u,246u,248u,246u,248u,248u,248u,249u,249u,249u,250u,250u,250u,251u,250u,250u,250u,249u,250u,249u,249u,250u,249u,247u,248u,246u,247u,247u,246u,247u,247u,246u,247u,247u,247u,248u,247u,247u,248u,247u,247u,246u,246u,246u,246u,246u,246u,245u,247u,247u,246u,248u,248u,248u,249u,249u,249u,250u,249u,251u,250u,250u,251u,251u,251u,252u,250u,250u,250u,249u,249u,249u,248u,247u,247u,247u,248u,247u,246u,248u,247u,248u,248u,247u,248u,247u,248u,248u,247u,248u,248u,247u,249u,248u,248u,249u,248u,248u,248u,248u,249u,249u,250u,251u,251u,251u,252u,251u,251u,252u,251u,252u,252u,252u,252u,252u,252u,252u,251u,252u,250u,249u,249u,247u,247u,248u,248u,247u,247u,247u,248u,248u,248u,249u,247u,247u,247u,247u,249u,247u,247u,248u,247u,248u,247u,247u,248u,247u,246u,247u,246u,248u,249u,248u,248u,249u,248u,250u,250u,247u,250u,249u,247u,249u,248u,247u,248u,248u,248u,247u,246u,246u,246u,244u,245u,246u,246u,245u,245u,244u,245u,245u,245u,246u,245u,246u,246u,244u,246u,246u,245u,245u,246u,245u,247u,245u,247u,247u,247u,248u,248u,248u,249u,249u,250u,250u,249u,250u,251u,250u,251u,250u,249u,249u,250u,249u,250u,249u,249u,247u,248u,247u,247u,245u,247u,247u,246u,247u,246u,246u,246u,246u,245u,246u,246u,245u,246u,245u,246u,245u,245u,246u,245u,243u,245u,245u,245u,246u,245u,245u,247u,247u,248u,249u,248u,248u,250u,248u,248u,249u,249u,248u,249u,248u,248u,248u,246u,245u,246u,244u,246u,244u,245u,246u,245u,245u,245u,245u,244u,245u,243u,245u,245u,246u,245u,246u,245u,246u,246u,245u,246u,246u,246u,247u,246u,247u,247u,247u,248u,249u,248u,248u,249u,249u,250u,250u,249u,250u,250u,249u,250u,249u,248u,249u,247u,247u,247u,245u,245u,246u,245u,245u,245u,244u,245u,245u,245u,246u,246u,244u,246u,245u,245u,246u,245u,246u,247u,244u,245u,245u,245u,246u,246u,246u,248u,248u,248u,248u,248u,248u,250u,248u,249u,249u,248u,248u,248u,248u,249u,249u,248u,248u,248u,247u,247u,246u,245u,246u,245u,246u,246u,246u,247u,246u,246u,245u,245u,245u,246u,247u,245u,246u,245u,245u,246u,246u,245u,246u,245u,247u,247u,246u,247u,248u,248u,249u,249u,249u,250u,250u,250u,251u,250u,250u,251u,249u,250u,250u,249u,249u,248u,248u,249u,247u,247u,247u,246u,247u,247u,246u,247u,247u,245u,247u,246u,247u,247u,246u,247u,247u,246u,246u,247u,246u,247u,247u,245u,246u,245u,247u,248u,247u,248u,249u,249u,249u,250u,249u,251u,250u,250u,251u,250u,250u,251u,250u,250u,250u,249u,249u,249u,248u,248u,246u,247u,70u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,3u,49u,245u,246u,247u,246u,247u,246u,246u,246u,246u,246u,247u,246u,247u,249u,248u,248u,249u,249u,249u,249u,250u,251u,251u,251u,251u,251u,251u,251u,250u,251u,251u,250u,250u,248u,248u,247u,247u,247u,247u,246u,246u,246u,246u,246u,246u,246u,246u,246u,246u,247u,246u,247u,246u,246u,245u,246u,245u,246u,246u,246u,246u,246u,247u,248u,247u,248u,249u,248u,248u,249u,249u,249u,250u,249u,249u,249u,249u,250u,248u,248u,249u,248u,248u,248u,246u,246u,245u,245u,246u,246u,246u,246u,245u,245u,245u,245u,245u,245u,244u,244u,246u,245u,245u,244u,245u,246u,245u,246u,246u,246u,247u,247u,247u,248u,248u,249u,250u,249u,250u,250u,250u,251u,251u,251u,251u,250u,250u,250u,249u,249u,249u,248u,248u,248u,246u,248u,247u,247u,248u,246u,247u,248u,246u,247u,246u,247u,248u,247u,247u,248u,247u,247u,248u,247u,247u,248u,246u,247u,246u,248u,248u,247u,249u,249u,249u,249u,249u,249u,250u,250u,251u,251u,250u,251u,251u,250u,250u,249u,249u,250u,249u,248u,247u,246u,247u,246u,247u,248u,247u,248u,248u,247u,247u, Wave1_DCOffset=2.04, Wave1_Length=3749, Wave1_PhaseShift=0, Wave1_Type=11, Wave2_Amplitude=4, Wave2_Data=128u,132u,138u,143u,148u,152u,158u,162u,168u,172u,178u,182u,188u,192u,198u,202u,208u,213u,218u,222u,228u,232u,238u,242u,248u,252u,248u,242u,238u,232u,228u,222u,218u,212u,208u,202u,198u,192u,188u,182u,178u,173u,168u,162u,158u,152u,148u,143u,138u,132u,128u,122u,118u,112u,107u,102u,97u,93u,88u,83u,78u,73u,68u,62u,57u,52u,47u,42u,37u,33u,28u,23u,18u,13u,8u,3u,8u,13u,18u,23u,28u,33u,37u,42u,47u,52u,57u,62u,68u,73u,78u,83u,88u,93u,97u,102u,107u,112u,118u,122u, Wave2_DCOffset=2.04, Wave2_Length=100, Wave2_PhaseShift=0, Wave2_Type=2, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=WaveDAC8_v2_10, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Cam_signal, CY_INSTANCE_SHORT_NAME=Cam_signal, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Cam_signal, )
module WaveDAC8_v2_10_5 (
    Wave,
    ws,
    clock,
    wc1,
    wc2);
    inout       Wave;
    electrical  Wave;
    input       ws;
    input       clock;
    output      wc1;
    output      wc2;


          wire  Net_280;
    electrical  Net_273;
          wire  Net_202;
          wire  Net_201;
          wire [7:0] Net_171;
          wire [7:0] Net_170;
          wire  Net_339;
          wire  Net_341;
          wire  Net_153;
    electrical  Net_211;
          wire  Net_134;
          wire  Net_107;
          wire  Net_183;
          wire  Net_336;
          wire  Net_279;
          wire  Net_80;
    electrical  Net_247;
    electrical  Net_254;
    electrical  Net_256;
    electrical  Net_190;
    electrical  Net_189;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_211));

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_189, Net_256);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_190, Net_211);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_254));


	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave1_DMA
		 (.drq(Net_183),
		  .trq(1'b0),
		  .nrq(wc1));



	cy_dma_v1_0
		#(.drq_type(2'b10))
		Wave2_DMA
		 (.drq(Net_107),
		  .trq(1'b0),
		  .nrq(wc2));


    // -- De Mux start --
    if (1)
    begin : demux
        reg  tmp__demux_0_reg;
        reg  tmp__demux_1_reg;
        always @(Net_336 or Net_134)
        begin
            case (Net_134)
                1'b0:
                begin
                    tmp__demux_0_reg = Net_336;
                    tmp__demux_1_reg = 1'b0;
                end
                1'b1:
                begin
                    tmp__demux_0_reg = 1'b0;
                    tmp__demux_1_reg = Net_336;
                end
            endcase
        end
        assign Net_183 = tmp__demux_0_reg;
        assign Net_107 = tmp__demux_1_reg;
    end
    // -- De Mux end --

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_336 = clock;

    VDAC8_v1_90_3 VDAC8 (
        .strobe(Net_336),
        .data(8'b00000000),
        .vOut(Net_189));
    defparam VDAC8.Data_Source = 0;
    defparam VDAC8.Initial_Value = 100;
    defparam VDAC8.Strobe_Mode = 1;

    OpAmp_v1_90_4 BuffAmp (
        .Vplus(Net_256),
        .Vout(Net_247),
        .Vminus(Net_273));
    defparam BuffAmp.Mode = 1;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Wave, Net_247);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;


    assign Net_280 = Net_80 | Net_279;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_80));

    // -- DFF Start --
    reg  cydff_1;
    always @(posedge Net_336)
    begin
        cydff_1 <= ws;
    end
    assign Net_134 = cydff_1;
    // -- DFF End --



endmodule

// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// Component: CyControlReg_v1_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80\CyControlReg_v1_80.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80\CyControlReg_v1_80.v"
`endif

// Component: B_Timer_v2_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Users\Joshua\Documents\PSoC Creator\4.1\Downloads ( 4.1).cylib\B_Timer_v2_80"
`include "C:\Users\Joshua\Documents\PSoC Creator\4.1\Downloads ( 4.1).cylib\B_Timer_v2_80\B_Timer_v2_80.v"
`else
`define CY_BLK_DIR "C:\Users\Joshua\Documents\PSoC Creator\4.1\Downloads ( 4.1).cylib\B_Timer_v2_80"
`include "C:\Users\Joshua\Documents\PSoC Creator\4.1\Downloads ( 4.1).cylib\B_Timer_v2_80\B_Timer_v2_80.v"
`endif

// Component: OneTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`endif

// Timer_v2_80(CaptureAlternatingFall=false, CaptureAlternatingRise=false, CaptureCount=2, CaptureCounterEnabled=false, CaptureInputEnabled=false, CaptureMode=0, CONTROL3=0, ControlRegRemoved=0, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG24, CySetRegReplacementString=CY_SET_REG24, DeviceFamily=PSoC5, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, HWCaptureCounterEnabled=false, InterruptOnCapture=false, InterruptOnFIFOFull=false, InterruptOnTC=true, IntOnCapture=0, IntOnFIFOFull=0, IntOnTC=1, NumberOfCaptures=1, param45=1, Period=16777215, RegDefReplacementString=reg32, RegSizeReplacementString=uint32, Resolution=24, RstStatusReplacementString=rstSts, RunMode=0, SiliconRevision=0, SoftwareCaptureModeEnabled=false, SoftwareTriggerModeEnabled=false, TriggerInputEnabled=false, TriggerMode=0, UDB16=false, UDB24=true, UDB32=false, UDB8=false, UDBControlReg=true, UsesHWEnable=0, VerilogSectionReplacementString=sT24, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=Timer_v2_80, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Timer_Sytem, CY_INSTANCE_SHORT_NAME=Timer_Sytem, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=80, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Timer_Sytem, )
module Timer_v2_80_6 (
    reset,
    interrupt,
    enable,
    trigger,
    capture,
    capture_out,
    tc,
    clock);
    input       reset;
    output      interrupt;
    input       enable;
    input       trigger;
    input       capture;
    output      capture_out;
    output      tc;
    input       clock;

    parameter CaptureCount = 2;
    parameter CaptureCounterEnabled = 0;
    parameter DeviceFamily = "PSoC5";
    parameter InterruptOnCapture = 0;
    parameter InterruptOnTC = 1;
    parameter Resolution = 24;
    parameter SiliconRevision = "0";

          wire  Net_261;
          wire  Net_260;
          wire  Net_266;
          wire  Net_102;
          wire  Net_55;
          wire  Net_57;
          wire  Net_53;
          wire  Net_51;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_260));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign tc = Net_53;

    B_Timer_v2_80 TimerUDB (
        .reset(reset),
        .interrupt(Net_55),
        .enable(enable),
        .trigger(trigger),
        .capture_in(capture),
        .capture_out(capture_out),
        .tc(Net_53),
        .clock(clock));
    defparam TimerUDB.Capture_Count = 2;
    defparam TimerUDB.CaptureCounterEnabled = 0;
    defparam TimerUDB.CaptureMode = 0;
    defparam TimerUDB.EnableMode = 0;
    defparam TimerUDB.InterruptOnCapture = 0;
    defparam TimerUDB.Resolution = 24;
    defparam TimerUDB.RunMode = 0;
    defparam TimerUDB.TriggerMode = 0;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_266 = Net_102;



endmodule

// Timer_v2_80(CaptureAlternatingFall=false, CaptureAlternatingRise=false, CaptureCount=2, CaptureCounterEnabled=false, CaptureInputEnabled=false, CaptureMode=0, CONTROL3=1, ControlRegRemoved=0, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeviceFamily=PSoC5, EnableMode=0, FF16=true, FF8=false, FixedFunction=true, FixedFunctionUsed=1, HWCaptureCounterEnabled=false, InterruptOnCapture=false, InterruptOnFIFOFull=false, InterruptOnTC=false, IntOnCapture=0, IntOnFIFOFull=0, IntOnTC=0, NumberOfCaptures=1, param45=1, Period=1683, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=rstSts, RunMode=0, SiliconRevision=0, SoftwareCaptureModeEnabled=false, SoftwareTriggerModeEnabled=false, TriggerInputEnabled=false, TriggerMode=0, UDB16=false, UDB24=false, UDB32=false, UDB8=false, UDBControlReg=false, UsesHWEnable=0, VerilogSectionReplacementString=sT16, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=Timer_v2_80, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Timer_1, CY_INSTANCE_SHORT_NAME=Timer_1, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=80, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Timer_1, )
module Timer_v2_80_7 (
    reset,
    interrupt,
    enable,
    trigger,
    capture,
    capture_out,
    tc,
    clock);
    input       reset;
    output      interrupt;
    input       enable;
    input       trigger;
    input       capture;
    output      capture_out;
    output      tc;
    input       clock;

    parameter CaptureCount = 2;
    parameter CaptureCounterEnabled = 0;
    parameter DeviceFamily = "PSoC5";
    parameter InterruptOnCapture = 0;
    parameter InterruptOnTC = 0;
    parameter Resolution = 16;
    parameter SiliconRevision = "0";

          wire  Net_261;
          wire  Net_260;
          wire  Net_266;
          wire  Net_102;
          wire  Net_55;
          wire  Net_57;
          wire  Net_53;
          wire  Net_51;

    cy_psoc3_timer_v1_0 TimerHW (
        .timer_reset(reset),
        .capture(capture),
        .enable(Net_266),
        .kill(Net_260),
        .clock(clock),
        .tc(Net_51),
        .compare(Net_261),
        .interrupt(Net_57));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_260));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign interrupt = Net_57;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign tc = Net_51;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_266 = Net_102;



endmodule

// VDAC8_v1_90(Data_Source=0, Initial_Value=100, Strobe_Mode=0, VDAC_Range=4, VDAC_Speed=0, Voltage=1600, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=VDAC8_1, CY_INSTANCE_SHORT_NAME=VDAC8_1, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=VDAC8_1, )
module VDAC8_v1_90_8 (
    strobe,
    data,
    vOut);
    input       strobe;
    input      [7:0] data;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 100;
    parameter Strobe_Mode = 0;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .reset(Net_83),
        .idir(Net_81),
        .data(data[7:0]),
        .strobe(strobe),
        .vout(vOut),
        .iout(Net_77),
        .ioff(Net_82),
        .strobe_udb(strobe));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// ADC_DelSig_v3_30(ADC_Alignment=0, ADC_Alignment_Config2=0, ADC_Alignment_Config3=0, ADC_Alignment_Config4=0, ADC_Charge_Pump_Clock=true, ADC_Clock=1, ADC_CLOCK_FREQUENCY=753664, ADC_Input_Mode=0, ADC_Input_Range=5, ADC_Input_Range_Config2=4, ADC_Input_Range_Config3=4, ADC_Input_Range_Config4=4, ADC_Power=1, ADC_Reference=0, ADC_Reference_Config2=0, ADC_Reference_Config3=0, ADC_Reference_Config4=0, ADC_Resolution=20, ADC_Resolution_Config2=16, ADC_Resolution_Config3=16, ADC_Resolution_Config4=16, Clock_Frequency=64000, Comment_Config1=Default Config, Comment_Config2=Second Config, Comment_Config3=Third Config, Comment_Config4=Fourth Config, Config1_Name=CFG1, Config2_Name=CFG2, Config3_Name=CFG3, Config4_Name=CFG4, Configs=4, Conversion_Mode=2, Conversion_Mode_Config2=2, Conversion_Mode_Config3=2, Conversion_Mode_Config4=2, Enable_Vref_Vss=false, EnableModulatorInput=false, Input_Buffer_Gain=1, Input_Buffer_Gain_Config2=1, Input_Buffer_Gain_Config3=1, Input_Buffer_Gain_Config4=1, Input_Buffer_Mode=2, Input_Buffer_Mode_Config2=1, Input_Buffer_Mode_Config3=1, Input_Buffer_Mode_Config4=1, Ref_Voltage=1.024, Ref_Voltage_Config2=1.024, Ref_Voltage_Config3=1.024, Ref_Voltage_Config4=1.024, rm_int=false, Sample_Rate=46, Sample_Rate_Config2=10000, Sample_Rate_Config3=10000, Sample_Rate_Config4=10000, Start_of_Conversion=0, Vdda_Value=5, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=ADC_DelSig_v3_30, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ADC_DelSig_1, CY_INSTANCE_SHORT_NAME=ADC_DelSig_1, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=ADC_DelSig_1, )
module ADC_DelSig_v3_30_9 (
    vplus,
    vminus,
    soc,
    eoc,
    aclk,
    nVref,
    mi);
    inout       vplus;
    electrical  vplus;
    inout       vminus;
    electrical  vminus;
    input       soc;
    output      eoc;
    input       aclk;
    inout       nVref;
    electrical  nVref;
    input       mi;


          wire  Net_268;
          wire  Net_270;
          wire  Net_252;
          wire  Net_275;
          wire  Net_250;
    electrical  Net_249;
    electrical  Net_257;
    electrical  Net_248;
    electrical  Net_23;
          wire  Net_247;
          wire  aclock;
          wire [3:0] mod_dat;
          wire  mod_reset;
    electrical  Net_352;
          wire  Net_246;
          wire [7:0] Net_245;
          wire  Net_482;
    electrical  Net_34;
    electrical  Net_35;
    electrical  Net_244;
          wire  Net_93;
    electrical  Net_20;
    electrical  Net_690;
    electrical  Net_686;
    electrical  Net_520;
          wire  Net_481;
    electrical  Net_677;
    electrical  Net_41;
    electrical  Net_573;
    electrical  Net_109;
          wire  Net_488;

	// cy_analog_virtualmux_6 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_6_connect(Net_690, Net_35);
	defparam cy_analog_virtualmux_6_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_34));

	// cy_analog_virtualmux_4 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_4_connect(Net_677, Net_34);
	defparam cy_analog_virtualmux_4_connect.sig_width = 1;

    cy_psoc3_ds_mod_v4_0 DSM (
        .vplus(vplus),
        .vminus(Net_520),
        .modbit(Net_481),
        .reset_udb(Net_482),
        .aclock(Net_488),
        .mod_dat(mod_dat[3:0]),
        .dout_udb(Net_245[7:0]),
        .reset_dec(mod_reset),
        .dec_clock(aclock),
        .extclk_cp_udb(Net_93),
        .clk_udb(1'b0),
        .ext_pin_1(Net_573),
        .ext_pin_2(Net_41),
        .ext_vssa(Net_109),
        .qtz_ref(Net_677));
    defparam DSM.resolution = 20;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_5 (
        .noconnect(Net_352));

	// cy_analog_virtualmux_5 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_5_connect(Net_109, Net_352);
	defparam cy_analog_virtualmux_5_connect.sig_width = 1;


	cy_clock_v1_0
		#(.id("cb9f50f2-dc26-4456-8b36-ffab04982101/b7604721-db56-4477-98c2-8fae77869066"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(1),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(1))
		Ext_CP_Clk
		 (.clock_out(Net_93));


    cy_analog_noconnect_v1_0 cy_analog_noconnect_3 (
        .noconnect(Net_257));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_249));

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Net_41, Net_257);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_573, Net_249);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_520, vminus);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;


	cy_isr_v1_0
		#(.int_type(2'b10))
		IRQ
		 (.int_signal(eoc));


	// Clock_VirtualMux (cy_virtualmux_v1_0)
	assign Net_488 = Net_250;


	cy_clock_v1_0
		#(.id("cb9f50f2-dc26-4456-8b36-ffab04982101/edd15f43-b66b-457b-be3a-5342345270c8"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(0),
		  .period("1328021248.33997"),
		  .is_direct(0),
		  .is_digital(0))
		theACLK
		 (.clock_out(Net_250));


    ZeroTerminal ZeroTerminal_2 (
        .z(Net_482));

	// Clock_VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_481 = Net_252;

    cy_psoc3_decimator_v1_0 DEC (
        .aclock(aclock),
        .mod_dat(mod_dat[3:0]),
        .ext_start(soc),
        .mod_reset(mod_reset),
        .interrupt(eoc));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_252));


    assign Net_268 = Net_270 | Net_93;

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_270));



endmodule

// OpAmp_v1_90(Mode=1, Power=1, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=OpAmp_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Opamp_1, CY_INSTANCE_SHORT_NAME=Opamp_1, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=Opamp_1, )
module OpAmp_v1_90_10 (
    Vplus,
    Vout,
    Vminus);
    inout       Vplus;
    electrical  Vplus;
    inout       Vout;
    electrical  Vout;
    inout       Vminus;
    electrical  Vminus;

    parameter Mode = 1;

    electrical  Net_29;

    cy_psoc3_abuf_v1_0 ABuf (
        .vplus(Vplus),
        .vminus(Net_29),
        .vout(Vout));

	// abuf_negInput_mux (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 abuf_negInput_mux_connect(Net_29, Vout);
	defparam abuf_negInput_mux_connect.sig_width = 1;



endmodule

// Component: AMux_v1_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80\AMux_v1_80.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80\AMux_v1_80.v"
`endif

// Component: B_PWM_v3_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`endif

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=true, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=1, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=0, CompareValue2=0, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=255, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, Resolution=8, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=true, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=true, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=true, UseControl=true, UseInterrupt=true, UseStatus=true, VerilogSectionReplacementString=sP8, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWM_1_FANCONTROLLER, CY_INSTANCE_SHORT_NAME=PWM_1_FANCONTROLLER, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=PWM_1_FANCONTROLLER, )
module PWM_v3_30_11 (
    reset,
    clock,
    tc,
    pwm1,
    pwm2,
    interrupt,
    capture,
    kill,
    enable,
    trigger,
    cmp_sel,
    pwm,
    ph1,
    ph2);
    input       reset;
    input       clock;
    output      tc;
    output      pwm1;
    output      pwm2;
    output      interrupt;
    input       capture;
    input       kill;
    input       enable;
    input       trigger;
    input       cmp_sel;
    output      pwm;
    output      ph1;
    output      ph2;

    parameter Resolution = 8;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .reset(reset),
        .clock(clock),
        .tc(Net_101),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .interrupt(Net_55),
        .kill(kill),
        .capture(capture),
        .enable(enable),
        .cmp_sel(cmp_sel),
        .trigger(trigger),
        .pwm(Net_96),
        .ph1(ph1),
        .ph2(ph2));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 1;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 0;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 0;
    defparam PWMUDB.Resolution = 8;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 1;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// Component: and_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0\and_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0\and_v1_0.v"
`endif

// Component: cy_tff_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_tff_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_tff_v1_0\cy_tff_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_tff_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_tff_v1_0\cy_tff_v1_0.v"
`endif

// Component: GlitchFilter_v2_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\GlitchFilter_v2_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\GlitchFilter_v2_0\GlitchFilter_v2_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\GlitchFilter_v2_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\GlitchFilter_v2_0\GlitchFilter_v2_0.v"
`endif

// VDAC8_v1_90(Data_Source=0, Initial_Value=250, Strobe_Mode=0, VDAC_Range=4, VDAC_Speed=2, Voltage=4000, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=MASS_AIRFLOW, CY_INSTANCE_SHORT_NAME=MASS_AIRFLOW, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=MASS_AIRFLOW, )
module VDAC8_v1_90_12 (
    strobe,
    data,
    vOut);
    input       strobe;
    input      [7:0] data;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 250;
    parameter Strobe_Mode = 0;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .reset(Net_83),
        .idir(Net_81),
        .data(data[7:0]),
        .strobe(strobe),
        .vout(vOut),
        .iout(Net_77),
        .ioff(Net_82),
        .strobe_udb(strobe));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// top
module top ;

          wire  Net_2256;
          wire [7:0] Net_2240;
          wire  Net_2239;
          wire  Net_2238;
          wire  Net_2235;
          wire  Net_2234;
          wire  Net_2228;
          wire  Net_2201;
          wire  Net_2200;
          wire  Net_2199;
          wire  Net_2198;
          wire  Net_2197;
          wire  Net_2196;
          wire  Net_2194;
          wire  Net_2193;
          wire  Net_2192;
          wire  Net_2175;
          wire  Net_1449;
          wire  Net_1448;
          wire  Net_1447;
          wire  Net_1446;
          wire  Net_1445;
          wire  Net_1444;
          wire  Net_1443;
          wire  Net_1442;
          wire  Net_1441;
          wire  Net_1418;
          wire  Net_1394;
          wire  Net_1440;
          wire  Net_1439;
    electrical  Net_346;
          wire  Net_343;
    electrical  Net_342;
          wire  Net_341;
          wire  Net_340;
          wire  Net_339;
    electrical  Net_338;
    electrical  Net_337;
    electrical  Net_336;
          wire [7:0] Net_335;
          wire  Net_334;
    electrical  Net_983;
          wire  Net_2218;
          wire  Net_2217;
          wire  Net_2216;
          wire  Net_2215;
          wire  Net_2214;
          wire  Net_2213;
          wire  Net_2212;
          wire  Net_2211;
          wire  Net_2210;
          wire  Net_2209;
          wire  Net_104;
          wire  Net_103;
          wire  Net_102;
          wire  Net_101;
          wire  Net_100;
          wire  Net_91;
          wire  Net_105;
          wire  Net_106;
          wire  Net_107;
          wire  Net_60;
          wire  Net_17;
          wire  Net_16;
          wire  Net_72;
          wire  Net_5;
          wire  Net_4;
          wire  Net_2187;
    electrical  Net_2264;
          wire  Net_2208;
    electrical  Net_2241;
          wire  Net_2232;
          wire  Net_2230;
          wire  Net_2255;
          wire  Net_12;
          wire  Net_94;
          wire  Net_10;
          wire  Net_1940;
          wire  Net_110;
          wire  Net_2189;
    electrical  Net_2220;
          wire  Net_74;
    electrical  Net_985;
    electrical  Net_984;
    electrical  Net_2263;
    electrical  Net_2262;
          wire  Net_109;
          wire  Net_112;
          wire  Net_2223;
    electrical  Net_13;

    WaveDAC8_v2_10_2 Crank_Signal (
        .Wave(Net_2220),
        .ws(Net_74),
        .clock(Net_2223),
        .wc1(Net_4),
        .wc2(Net_5));

	wire [0:0] tmpOE__Crank_Output_ecm_net;
	wire [0:0] tmpFB_0__Crank_Output_ecm_net;
	wire [0:0] tmpIO_0__Crank_Output_ecm_net;
	wire [0:0] tmpINTERRUPT_0__Crank_Output_ecm_net;
	electrical [0:0] tmpSIOVREF__Crank_Output_ecm_net;

	cy_psoc3_pins_v1_10
		#(.id("77715107-f8d5-47e5-a629-0fb83101ac6b"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Crank_Output_ecm
		 (.oe(tmpOE__Crank_Output_ecm_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Crank_Output_ecm_net[0:0]}),
		  .analog({Net_2220}),
		  .io({tmpIO_0__Crank_Output_ecm_net[0:0]}),
		  .siovref(tmpSIOVREF__Crank_Output_ecm_net),
		  .interrupt({tmpINTERRUPT_0__Crank_Output_ecm_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Crank_Output_ecm_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("5c7b30a0-5aa9-4aff-9281-ea350f925d23"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		timer_clock_1
		 (.clock_out(Net_94));


	wire [0:0] tmpOE__Cam_Output_net;
	wire [0:0] tmpFB_0__Cam_Output_net;
	wire [0:0] tmpIO_0__Cam_Output_net;
	wire [0:0] tmpINTERRUPT_0__Cam_Output_net;
	electrical [0:0] tmpSIOVREF__Cam_Output_net;

	cy_psoc3_pins_v1_10
		#(.id("b32c9895-8822-470d-b204-fc421165cfe8"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Cam_Output
		 (.oe(tmpOE__Cam_Output_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Cam_Output_net[0:0]}),
		  .analog({Net_13}),
		  .io({tmpIO_0__Cam_Output_net[0:0]}),
		  .siovref(tmpSIOVREF__Cam_Output_net),
		  .interrupt({tmpINTERRUPT_0__Cam_Output_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Cam_Output_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    WaveDAC8_v2_10_5 Cam_signal (
        .Wave(Net_13),
        .ws(Net_110),
        .clock(Net_2223),
        .wc1(Net_16),
        .wc2(Net_17));

    assign Net_74 = 1'h0;

    assign Net_110 = 1'h0;

	wire [0:0] tmpOE__Crank_Input_Diesel_net;
	wire [0:0] tmpIO_0__Crank_Input_Diesel_net;
	wire [0:0] tmpINTERRUPT_0__Crank_Input_Diesel_net;
	electrical [0:0] tmpSIOVREF__Crank_Input_Diesel_net;

	cy_psoc3_pins_v1_10
		#(.id("8d318d8b-cf7b-4b6b-b02c-ab1c5c49d0ba"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Crank_Input_Diesel
		 (.oe(tmpOE__Crank_Input_Diesel_net),
		  .y({1'b0}),
		  .fb({Net_2232}),
		  .io({tmpIO_0__Crank_Input_Diesel_net[0:0]}),
		  .siovref(tmpSIOVREF__Crank_Input_Diesel_net),
		  .interrupt({tmpINTERRUPT_0__Crank_Input_Diesel_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Crank_Input_Diesel_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_isr_v1_0
		#(.int_type(2'b00))
		isr_CKP_counter
		 (.int_signal(Net_2255));



	cy_clock_v1_0
		#(.id("c0fb34bd-1044-4931-9788-16b01ce89812"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("41666666.6666667"),
		  .is_direct(0),
		  .is_digital(1))
		timer_clock
		 (.clock_out(Net_10));


    CyControlReg_v1_80 Control_Reg_1 (
        .control_1(Net_107),
        .control_2(Net_106),
        .control_3(Net_105),
        .control_0(Net_109),
        .control_4(Net_91),
        .control_5(Net_100),
        .control_6(Net_101),
        .control_7(Net_102),
        .clock(1'b0),
        .reset(1'b0));
    defparam Control_Reg_1.Bit0Mode = 0;
    defparam Control_Reg_1.Bit1Mode = 0;
    defparam Control_Reg_1.Bit2Mode = 0;
    defparam Control_Reg_1.Bit3Mode = 0;
    defparam Control_Reg_1.Bit4Mode = 0;
    defparam Control_Reg_1.Bit5Mode = 0;
    defparam Control_Reg_1.Bit6Mode = 0;
    defparam Control_Reg_1.Bit7Mode = 0;
    defparam Control_Reg_1.BitValue = 0;
    defparam Control_Reg_1.BusDisplay = 0;
    defparam Control_Reg_1.ExtrReset = 0;
    defparam Control_Reg_1.NumOutputs = 1;

    Timer_v2_80_6 Timer_Sytem (
        .reset(Net_109),
        .interrupt(Net_2209),
        .enable(1'b1),
        .trigger(1'b1),
        .capture(1'b0),
        .capture_out(Net_2213),
        .tc(Net_112),
        .clock(Net_10));
    defparam Timer_Sytem.CaptureCount = 2;
    defparam Timer_Sytem.CaptureCounterEnabled = 0;
    defparam Timer_Sytem.DeviceFamily = "PSoC5";
    defparam Timer_Sytem.InterruptOnCapture = 0;
    defparam Timer_Sytem.InterruptOnTC = 1;
    defparam Timer_Sytem.Resolution = 24;
    defparam Timer_Sytem.SiliconRevision = "0";

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_12));

    Timer_v2_80_7 Timer_1 (
        .reset(Net_12),
        .interrupt(Net_2214),
        .enable(1'b1),
        .trigger(1'b1),
        .capture(1'b0),
        .capture_out(Net_2218),
        .tc(Net_1940),
        .clock(Net_94));
    defparam Timer_1.CaptureCount = 2;
    defparam Timer_1.CaptureCounterEnabled = 0;
    defparam Timer_1.DeviceFamily = "PSoC5";
    defparam Timer_1.InterruptOnCapture = 0;
    defparam Timer_1.InterruptOnTC = 0;
    defparam Timer_1.Resolution = 16;
    defparam Timer_1.SiliconRevision = "0";


	cy_isr_v1_0
		#(.int_type(2'b10))
		isr_Not_Runing
		 (.int_signal(Net_112));


    cy_annotation_universal_v1_0 Rt (
        .connect({
            Net_984,
            Net_983
        })
    );
    defparam Rt.comp_name = "Thermistor_v1_0";
    defparam Rt.port_names = "T1, T2";
    defparam Rt.width = 2;

    VDAC8_v1_90_8 VDAC8_1 (
        .strobe(1'b0),
        .data(8'b00000000),
        .vOut(Net_336));
    defparam VDAC8_1.Data_Source = 0;
    defparam VDAC8_1.Initial_Value = 100;
    defparam VDAC8_1.Strobe_Mode = 0;

    ADC_DelSig_v3_30_9 ADC_DelSig_1 (
        .vplus(Net_337),
        .vminus(Net_338),
        .soc(1'b1),
        .eoc(Net_340),
        .aclk(1'b0),
        .nVref(Net_342),
        .mi(1'b0));

    OpAmp_v1_90_10 Opamp_1 (
        .Vplus(Net_336),
        .Vout(Net_2262),
        .Vminus(Net_346));
    defparam Opamp_1.Mode = 1;

    // -- AMux AMux_1 start -- ***
    // -- Mux A --
    
    cy_psoc3_amux_v1_0 AMux_1_CYAMUXSIDE_A(
        .muxin({
            Net_2263,
            Net_2262
            }),
        .vout(Net_337)
        );
    
    defparam AMux_1_CYAMUXSIDE_A.muxin_width = 2;
    defparam AMux_1_CYAMUXSIDE_A.init_mux_sel = 2'h0;
    defparam AMux_1_CYAMUXSIDE_A.one_active = 0;
    defparam AMux_1_CYAMUXSIDE_A.connect_mode = 1;
    
    
    // -- Mux B --
    
    cy_psoc3_amux_v1_0 AMux_1_CYAMUXSIDE_B(
        .muxin({
            Net_2264,
            Net_2263
            }),
        .vout(Net_338)
        );
    
    defparam AMux_1_CYAMUXSIDE_B.muxin_width = 2;
    defparam AMux_1_CYAMUXSIDE_B.init_mux_sel = 2'h0;
    defparam AMux_1_CYAMUXSIDE_B.one_active = 0;
    defparam AMux_1_CYAMUXSIDE_B.connect_mode = 1;
    
    // -- AMux AMux_1 end --

	wire [0:0] tmpOE__Rref10Kpin1_net;
	wire [0:0] tmpFB_0__Rref10Kpin1_net;
	wire [0:0] tmpIO_0__Rref10Kpin1_net;
	wire [0:0] tmpINTERRUPT_0__Rref10Kpin1_net;
	electrical [0:0] tmpSIOVREF__Rref10Kpin1_net;

	cy_psoc3_pins_v1_10
		#(.id("7e4e11bf-21e2-4d2d-a87a-8ac9b664c550"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Rref10Kpin1
		 (.oe(tmpOE__Rref10Kpin1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Rref10Kpin1_net[0:0]}),
		  .analog({Net_2262}),
		  .io({tmpIO_0__Rref10Kpin1_net[0:0]}),
		  .siovref(tmpSIOVREF__Rref10Kpin1_net),
		  .interrupt({tmpINTERRUPT_0__Rref10Kpin1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Rref10Kpin1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Rref_and_thermistor_between_net;
	wire [0:0] tmpFB_0__Rref_and_thermistor_between_net;
	wire [0:0] tmpIO_0__Rref_and_thermistor_between_net;
	wire [0:0] tmpINTERRUPT_0__Rref_and_thermistor_between_net;
	electrical [0:0] tmpSIOVREF__Rref_and_thermistor_between_net;

	cy_psoc3_pins_v1_10
		#(.id("dc724531-fb96-40f5-a9a9-2f46a2d047ac"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Rref_and_thermistor_between
		 (.oe(tmpOE__Rref_and_thermistor_between_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Rref_and_thermistor_between_net[0:0]}),
		  .analog({Net_2263}),
		  .io({tmpIO_0__Rref_and_thermistor_between_net[0:0]}),
		  .siovref(tmpSIOVREF__Rref_and_thermistor_between_net),
		  .interrupt({tmpINTERRUPT_0__Rref_and_thermistor_between_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Rref_and_thermistor_between_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Thermoster_Vss_net;
	wire [0:0] tmpFB_0__Thermoster_Vss_net;
	wire [0:0] tmpIO_0__Thermoster_Vss_net;
	wire [0:0] tmpINTERRUPT_0__Thermoster_Vss_net;
	electrical [0:0] tmpSIOVREF__Thermoster_Vss_net;

	cy_psoc3_pins_v1_10
		#(.id("25a9f89e-d9f4-4703-bcb0-8a4b7f769b51"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Thermoster_Vss
		 (.oe(tmpOE__Thermoster_Vss_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Thermoster_Vss_net[0:0]}),
		  .analog({Net_2264}),
		  .io({tmpIO_0__Thermoster_Vss_net[0:0]}),
		  .siovref(tmpSIOVREF__Thermoster_Vss_net),
		  .interrupt({tmpINTERRUPT_0__Thermoster_Vss_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Thermoster_Vss_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    cy_annotation_universal_v1_0 GND_3 (
        .connect({
            Net_983
        })
    );
    defparam GND_3.comp_name = "Gnd_v1_0";
    defparam GND_3.port_names = "T1";
    defparam GND_3.width = 1;

    cy_annotation_universal_v1_0 Rref (
        .connect({
            Net_985,
            Net_984
        })
    );
    defparam Rref.comp_name = "Resistor_v1_0";
    defparam Rref.port_names = "T1, T2";
    defparam Rref.width = 2;

    PWM_v3_30_11 PWM_1_FANCONTROLLER (
        .reset(1'b0),
        .clock(Net_2187),
        .tc(Net_1440),
        .pwm1(Net_1394),
        .pwm2(Net_1418),
        .interrupt(Net_1441),
        .capture(1'b0),
        .kill(1'b1),
        .enable(1'b1),
        .trigger(1'b0),
        .cmp_sel(1'b0),
        .pwm(Net_1447),
        .ph1(Net_1448),
        .ph2(Net_1449));
    defparam PWM_1_FANCONTROLLER.Resolution = 8;

	wire [0:0] tmpOE__Fan_1_net;
	wire [0:0] tmpFB_0__Fan_1_net;
	wire [0:0] tmpIO_0__Fan_1_net;
	wire [0:0] tmpINTERRUPT_0__Fan_1_net;
	electrical [0:0] tmpSIOVREF__Fan_1_net;

	cy_psoc3_pins_v1_10
		#(.id("c7e3be9b-34ce-4b7c-a6da-93385d0a5daa"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Fan_1
		 (.oe(tmpOE__Fan_1_net),
		  .y({Net_1447}),
		  .fb({tmpFB_0__Fan_1_net[0:0]}),
		  .io({tmpIO_0__Fan_1_net[0:0]}),
		  .siovref(tmpSIOVREF__Fan_1_net),
		  .interrupt({tmpINTERRUPT_0__Fan_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Fan_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Glow_Plug_pin_net;
	wire [0:0] tmpFB_0__Glow_Plug_pin_net;
	wire [0:0] tmpIO_0__Glow_Plug_pin_net;
	wire [0:0] tmpINTERRUPT_0__Glow_Plug_pin_net;
	electrical [0:0] tmpSIOVREF__Glow_Plug_pin_net;

	cy_psoc3_pins_v1_10
		#(.id("4d3b9c3e-997e-41a4-b3b6-eeef1235e3b2"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Glow_Plug_pin
		 (.oe(tmpOE__Glow_Plug_pin_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Glow_Plug_pin_net[0:0]}),
		  .io({tmpIO_0__Glow_Plug_pin_net[0:0]}),
		  .siovref(tmpSIOVREF__Glow_Plug_pin_net),
		  .interrupt({tmpINTERRUPT_0__Glow_Plug_pin_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Glow_Plug_pin_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("b41d2acd-dede-4269-8929-6134966b2243"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("196078431372.549"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_1
		 (.clock_out(Net_2187));



    assign Net_2223 = Net_2189 & Net_1940;

    CyControlReg_v1_80 Control_Reg_2 (
        .control_1(Net_2192),
        .control_2(Net_2193),
        .control_3(Net_2194),
        .control_0(Net_2189),
        .control_4(Net_2196),
        .control_5(Net_2197),
        .control_6(Net_2198),
        .control_7(Net_2199),
        .clock(1'b0),
        .reset(1'b0));
    defparam Control_Reg_2.Bit0Mode = 0;
    defparam Control_Reg_2.Bit1Mode = 0;
    defparam Control_Reg_2.Bit2Mode = 0;
    defparam Control_Reg_2.Bit3Mode = 0;
    defparam Control_Reg_2.Bit4Mode = 0;
    defparam Control_Reg_2.Bit5Mode = 0;
    defparam Control_Reg_2.Bit6Mode = 0;
    defparam Control_Reg_2.Bit7Mode = 0;
    defparam Control_Reg_2.BitValue = 0;
    defparam Control_Reg_2.BusDisplay = 0;
    defparam Control_Reg_2.ExtrReset = 0;
    defparam Control_Reg_2.NumOutputs = 1;

    // -- TFF Start --
    reg  cy_tff_1;
    always @(posedge Net_2228)
    begin
        cy_tff_1 <= Net_2230^Net_2255;
    end
    assign Net_2255 = cy_tff_1;
    // -- TFF End --

    assign Net_2230 = 1'h1;

    GlitchFilter_v2_0 GlitchFilter_1 (
        .d(Net_2232),
        .reset(1'b0),
        .clock(Net_2235),
        .q(Net_2228));
    defparam GlitchFilter_1.BypassFilter = 0;
    defparam GlitchFilter_1.GlitchLength = 200;
    defparam GlitchFilter_1.SignalWidth = 1;


	cy_clock_v1_0
		#(.id("6c55b88a-a734-4654-aa96-648c12955610"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("2000000000"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_2
		 (.clock_out(Net_2235));


    VDAC8_v1_90_12 MASS_AIRFLOW (
        .strobe(1'b0),
        .data(8'b00000000),
        .vOut(Net_2241));
    defparam MASS_AIRFLOW.Data_Source = 0;
    defparam MASS_AIRFLOW.Initial_Value = 250;
    defparam MASS_AIRFLOW.Strobe_Mode = 0;

	wire [0:0] tmpOE__Mass_Air_Voltage_Output_net;
	wire [0:0] tmpFB_0__Mass_Air_Voltage_Output_net;
	wire [0:0] tmpIO_0__Mass_Air_Voltage_Output_net;
	wire [0:0] tmpINTERRUPT_0__Mass_Air_Voltage_Output_net;
	electrical [0:0] tmpSIOVREF__Mass_Air_Voltage_Output_net;

	cy_psoc3_pins_v1_10
		#(.id("04bcc114-3be6-4c59-89e2-dddf0bd93a5d"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Mass_Air_Voltage_Output
		 (.oe(tmpOE__Mass_Air_Voltage_Output_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Mass_Air_Voltage_Output_net[0:0]}),
		  .analog({Net_2241}),
		  .io({tmpIO_0__Mass_Air_Voltage_Output_net[0:0]}),
		  .siovref(tmpSIOVREF__Mass_Air_Voltage_Output_net),
		  .interrupt({tmpINTERRUPT_0__Mass_Air_Voltage_Output_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Mass_Air_Voltage_Output_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_isr_v1_0
		#(.int_type(2'b00))
		mass_air
		 (.int_signal(Net_2255));


	wire [0:0] tmpOE__Battery_interlock_net;
	wire [0:0] tmpFB_0__Battery_interlock_net;
	wire [0:0] tmpIO_0__Battery_interlock_net;
	wire [0:0] tmpINTERRUPT_0__Battery_interlock_net;
	electrical [0:0] tmpSIOVREF__Battery_interlock_net;

	cy_psoc3_pins_v1_10
		#(.id("fc8a738a-59a0-4ddb-941d-bb1bcfb71acd"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Battery_interlock
		 (.oe(tmpOE__Battery_interlock_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Battery_interlock_net[0:0]}),
		  .io({tmpIO_0__Battery_interlock_net[0:0]}),
		  .siovref(tmpSIOVREF__Battery_interlock_net),
		  .interrupt({tmpINTERRUPT_0__Battery_interlock_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Battery_interlock_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_isr_v1_0
		#(.int_type(2'b00))
		Temp_Checker
		 (.int_signal(Net_2208));


	wire [0:0] tmpOE__Glow_plug_indicator_net;
	wire [0:0] tmpFB_0__Glow_plug_indicator_net;
	wire [0:0] tmpIO_0__Glow_plug_indicator_net;
	wire [0:0] tmpINTERRUPT_0__Glow_plug_indicator_net;
	electrical [0:0] tmpSIOVREF__Glow_plug_indicator_net;

	cy_psoc3_pins_v1_10
		#(.id("339e4185-6d73-40bd-ada5-3958b49bc1a4"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Glow_plug_indicator
		 (.oe(tmpOE__Glow_plug_indicator_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Glow_plug_indicator_net[0:0]}),
		  .io({tmpIO_0__Glow_plug_indicator_net[0:0]}),
		  .siovref(tmpSIOVREF__Glow_plug_indicator_net),
		  .interrupt({tmpINTERRUPT_0__Glow_plug_indicator_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Glow_plug_indicator_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Cold_Advance_net;
	wire [0:0] tmpFB_0__Cold_Advance_net;
	wire [0:0] tmpIO_0__Cold_Advance_net;
	wire [0:0] tmpINTERRUPT_0__Cold_Advance_net;
	electrical [0:0] tmpSIOVREF__Cold_Advance_net;

	cy_psoc3_pins_v1_10
		#(.id("f740cd41-ce55-4015-ad4f-aa3fab71a68f"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Cold_Advance
		 (.oe(tmpOE__Cold_Advance_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Cold_Advance_net[0:0]}),
		  .io({tmpIO_0__Cold_Advance_net[0:0]}),
		  .siovref(tmpSIOVREF__Cold_Advance_net),
		  .interrupt({tmpINTERRUPT_0__Cold_Advance_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Cold_Advance_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Spare_1_net;
	wire [0:0] tmpFB_0__Spare_1_net;
	wire [0:0] tmpIO_0__Spare_1_net;
	wire [0:0] tmpINTERRUPT_0__Spare_1_net;
	electrical [0:0] tmpSIOVREF__Spare_1_net;

	cy_psoc3_pins_v1_10
		#(.id("8cdc3f49-fec3-4269-9f66-0faa3fbd532b"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Spare_1
		 (.oe(tmpOE__Spare_1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Spare_1_net[0:0]}),
		  .io({tmpIO_0__Spare_1_net[0:0]}),
		  .siovref(tmpSIOVREF__Spare_1_net),
		  .interrupt({tmpINTERRUPT_0__Spare_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Spare_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Spare_2_net;
	wire [0:0] tmpFB_0__Spare_2_net;
	wire [0:0] tmpIO_0__Spare_2_net;
	wire [0:0] tmpINTERRUPT_0__Spare_2_net;
	electrical [0:0] tmpSIOVREF__Spare_2_net;

	cy_psoc3_pins_v1_10
		#(.id("d23fddfa-a07d-4dd5-91d7-396ec59a79be"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Spare_2
		 (.oe(tmpOE__Spare_2_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Spare_2_net[0:0]}),
		  .io({tmpIO_0__Spare_2_net[0:0]}),
		  .siovref(tmpSIOVREF__Spare_2_net),
		  .interrupt({tmpINTERRUPT_0__Spare_2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Spare_2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("b59bfb3e-1211-4344-ad74-e2d48e6ccbec"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("100000000000000"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_3
		 (.clock_out(Net_2208));




endmodule

