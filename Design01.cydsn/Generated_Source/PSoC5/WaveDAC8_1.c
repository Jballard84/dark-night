/*******************************************************************************
* File Name: WaveDAC8_1.c
* Version 2.10
*
* Description:
*  This file provides the source code for the 8-bit Waveform DAC 
*  (WaveDAC8) Component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "WaveDAC8_1.h"

uint8  WaveDAC8_1_initVar = 0u;

const uint8 CYCODE WaveDAC8_1_wave1[WaveDAC8_1_WAVE1_LENGTH] = { 253u,246u,234u,217u,198u,182u,168u,155u,144u,133u,122u,110u,95u,78u,58u,40u,25u,19u,21u,31u,43u,61u,81u,102u,122u,144u,165u,186u,205u,217u,225u,223u,215u,203u,189u,174u,162u,152u,142u,132u,122u,112u,98u,82u,64u,47u,32u,21u,21u,26u,37u,53u,70u,89u,110u,129u,149u,169u,187u,205u,217u,221u,220u,212u,200u,186u,172u,161u,150u,140u,132u,123u,114u,103u,88u,73u,57u,42u,31u,25u,26u,33u,44u,59u,76u,94u,112u,129u,148u,168u,186u,202u,212u,216u,215u,210u,200u,187u,175u,163u,153u,145u,138u,130u,122u,112u,102u,89u,75u,61u,47u,35u,30u,30u,36u,45u,58u,73u,89u,104u,119u,137u,152u,168u,183u,197u,207u,212u,213u,208u,200u,190u,178u,167u,157u,147u,139u,131u,124u,114u,102u,88u,71u,55u,38u,26u,20u,23u,32u,47u,65u,85u,106u,129u,151u,175u,199u,216u,227u,228u,224u,213u,195u,179u,164u,150u,140u,130u,119u,106u,90u,70u,52u,34u,22u,17u,21u,31u,48u,66u,87u,108u,128u,150u,172u,193u,210u,220u,222u,218u,209u,197u,183u,170u,158u,148u,140u,133u,125u,115u,103u,89u,74u,59u,44u,33u,29u,31u,38u,49u,63u,79u,95u,111u,127u,145u,162u,179u,194u,206u,212u,215u,212u,205u,196u,183u,172u,162u,152u,144u,136u,128u,118u,108u,94u,78u,62u,46u,31u,23u,22u,29u,40u,56u,74u,93u,113u,133u,155u,176u,196u,212u,222u,224u,219u,210u,195u,180u,167u,156u,144u,135u,126u,116u,105u,90u,73u,58u,41u,29u,23u,24u,33u,46u,63u,79u,98u,116u,135u,154u,172u,190u,204u,213u,217u,215u,207u,197u,184u,171u,161u,153u,144u,136u,128u,120u,110u,99u,85u,70u,55u,43u,34u,29u,32u,39u,52u,66u,81u,99u,116u,133u,150u,168u,186u,202u,212u,216u,215u,210u,200u,187u,174u,162u,152u,142u,135u,128u,118u,107u,94u,77u,62u,46u,32u,24u,24u,31u,42u,58u,76u,95u,114u,134u,152u,173u,192u,208u,217u,218u,215u,207u,195u,181u,167u,155u,147u,138u,129u,120u,110u,98u,82u,66u,51u,36u,28u,26u,30u,40u,55u,71u,90u,109u,126u,145u,166u,184u,201u,213u,218u,218u,212u,202u,189u,175u,163u,152u,144u,137u,127u,117u,106u,92u,76u,60u,44u,32u,25u,26u,32u,44u,60u,77u,96u,115u,134u,154u,174u,192u,208u,218u,220u,217u,208u,195u,181u,168u,157u,147u,136u,128u,120u,108u,95u,78u,61u,45u,31u,24u,24u,31u,44u,59u,77u,98u,118u,138u,159u,179u,198u,213u,221u,221u,214u,204u,190u,175u,163u,152u,143u,133u,123u,113u,101u,83u,66u,48u,32u,22u,20u,26u,38u,55u,74u,94u,115u,137u,158u,180u,200u,214u,222u,222u,216u,205u,190u,176u,162u,151u,142u,130u,121u,109u,95u,76u,59u,42u,26u,20u,21u,30u,45u,62u,82u,104u,124u,146u,168u,188u,207u,218u,223u,220u,212u,198u,182u,169u,156u,146u,136u,126u,115u,102u,86u,69u,51u,35u,24u,22u,27u,38u,54u,73u,93u,114u,134u,157u,179u,199u,215u,222u,221u,215u,205u,192u,176u,162u,151u,142u,134u,124u,112u,99u,82u,65u,49u,34u,25u,22u,28u,40u,57u,76u,96u,116u,136u,158u,178u,197u,211u,219u,220u,216u,205u,193u,179u,166u,155u,145u,137u,128u,119u,106u,93u,76u,60u,45u,33u,26u,27u,35u,47u,62u,79u,99u,115u,134u,153u,173u,190u,204u,214u,217u,214u,207u,197u,183u,172u,159u,149u,141u,133u,125u,116u,106u,95u,80u,66u,51u,39u,33u,31u,35u,44u,56u,71u,88u,105u,121u,139u,156u,173u,189u,203u,212u,215u,212u,206u,197u,185u,175u,165u,154u,145u,138u,131u,124u,115u,104u,92u,79u,66u,55u,43u,36u,34u,38u,45u,56u,71u,85u,101u,116u,134u,152u,172u,190u,207u,220u,225u,224u,216u,205u,190u,175u,162u,151u,140u,130u,118u,106u,90u,71u,53u,34u,20u,15u,19u,31u,48u,69u,91u,114u,137u,161u,184u,205u,221u,228u,225u,217u,204u,188u,173u,158u,148u,139u,130u,121u,111u,97u,81u,64u,48u,34u,27u,26u,32u,43u,58u,76u,94u,113u,132u,152u,172u,189u,205u,215u,219u,216u,209u,199u,187u,175u,164u,153u,144u,137u,129u,120u,110u,98u,84u,69u,56u,43u,33u,30u,33u,40u,50u,64u,80u,96u,112u,128u,145u,164u,181u,196u,208u,217u,219u,216u,209u,197u,184u,172u,160u,150u,142u,133u,123u,112u,97u,81u,64u,46u,30u,21u,20u,25u,38u,56u,73u,94u,115u,137u,160u,183u,203u,218u,226u,225u,218u,207u,191u,175u,162u,151u,140u,131u,121u,111u,97u,82u,65u,48u,33u,25u,23u,30u,42u,56u,73u,93u,112u,132u,152u,172u,191u,207u,218u,221u,217u,209u,197u,183u,170u,159u,149u,140u,132u,122u,112u,100u,84u,67u,50u,35u,26u,24u,28u,38u,52u,68u,87u,107u,126u,145u,166u,185u,202u,215u,222u,220u,213u,203u,190u,177u,165u,154u,144u,135u,126u,116u,104u,89u,72u,55u,39u,28u,23u,25u,33u,46u,62u,81u,101u,120u,139u,159u,180u,199u,215u,222u,221u,217u,206u,194u,179u,167u,154u,144u,135u,126u,117u,105u,90u,71u,54u,38u,27u,21u,24u,32u,46u,65u,84u,105u,124u,145u,168u,188u,206u,219u,225u,221u,213u,202u,188u,173u,159u,148u,140u,131u,121u,109u,93u,74u,56u,38u,25u,18u,20u,29u,45u,62u,82u,104u,124u,146u,169u,190u,210u,222u,226u,222u,213u,200u,184u,169u,158u,146u,136u,126u,115u,101u,84u,65u,46u,30u,19u,16u,21u,35u,53u,73u,94u,115u,137u,160u,183u,203u,218u,225u,224u,217u,205u,189u,174u,160u,148u,139u,130u,120u,107u,92u,73u,54u,37u,24u,18u,21u,31u,46u,65u,85u,106u,129u,150u,173u,194u,212u,222u,225u,220u,210u,196u,181u,167u,155u,145u,135u,126u,116u,102u,86u,68u,49u,35u,23u,21u,26u,37u,53u,71u,92u,112u,131u,153u,174u,194u,211u,220u,222u,219u,209u,198u,182u,169u,158u,147u,138u,130u,120u,107u,94u,77u,61u,45u,32u,25u,25u,32u,44u,60u,76u,96u,114u,133u,152u,171u,190u,207u,216u,220u,217u,211u,201u,187u,173u,161u,151u,142u,135u,126u,117u,106u,94u,79u,64u,49u,37u,30u,28u,34u,43u,58u,72u,88u,105u,123u,141u,159u,176u,193u,207u,217u,219u,216u,208u,198u,185u,173u,162u,153u,144u,136u,129u,121u,112u,98u,83u,66u,51u,36u,26u,23u,28u,38u,54u,72u,93u,113u,133u,154u,176u,198u,217u,227u,229u,224u,213u,197u,180u,165u,153u,142u,132u,121u,108u,91u,71u,51u,32u,18u,14u,19u,31u,48u,67u,89u,111u,132u,154u,176u,197u,215u,225u,225u,221u,210u,196u,181u,167u,156u,145u,136u,127u,116u,104u,89u,72u,55u,37u,26u,21u,24u,33u,45u,61u,79u,98u,116u,134u,152u,173u,191u,208u,218u,221u,219u,212u,202u,189u,175u,162u,152u,143u,136u,127u,118u,108u,95u,79u,64u,47u,33u,24u,21u,28u,39u,55u,72u,91u,111u,130u,151u,172u,193u,211u,223u,227u,223u,214u,200u,184u,170u,157u,147u,137u,128u,118u,105u,88u,70u,51u,33u,20u,16u,20u,31u,47u,66u,85u,107u,128u,149u,171u,192u,209u,223u,226u,224u,215u,201u,186u,170u,159u,148u,139u,130u,121u,109u,96u,80u,63u,45u,30u,22u,20u,27u,38u,54u,70u,90u,109u,129u,149u,168u,187u,205u,218u,224u,222u,215u,202u,189u,176u,163u,152u,143u,135u,126u,117u,106u,90u,74u,57u,40u,28u,21u,22u,29u,41u,58u,76u,96u,115u,135u,155u,176u,196u,212u,223u,225u,221u,212u,198u,183u,169u,157u,145u,136u,128u,118u,105u,90u,71u,53u,36u,23u,16u,20u,29u,44u,63u,82u,103u,123u,144u,167u,190u,210u,224u,229u,225u,216u,203u,187u,171u,158u,148u,138u,128u,119u,107u,90u,71u,52u,34u,20u,14u,17u,28u,42u,62u,83u,106u,127u,149u,173u,196u,215u,227u,231u,225u,213u,199u,182u,168u,156u,145u,135u,125u,113u,98u,79u,60u,40u,23u,13u,13u,22u,36u,55u,76u,100u,122u,144u,167u,191u,211u,225u,230u,226u,216u,201u,185u,170u,157u,146u,135u,124u,112u,96u,78u,58u,38u,22u,11u,12u,23u,39u,57u,79u,102u,125u,147u,172u,196u,214u,226u,231u,227u,216u,199u,182u,167u,155u,144u,134u,123u,110u,95u,75u,56u,37u,21u,14u,16u,28u,43u,62u,85u,107u,129u,153u,177u,200u,219u,229u,230u,224u,212u,197u,181u,165u,153u,142u,133u,123u,110u,96u,76u,57u,38u,23u,15u,17u,27u,42u,61u,82u,104u,124u,148u,172u,193u,212u,225u,229u,224u,214u,201u,185u,171u,159u,147u,138u,129u,118u,106u,89u,71u,52u,35u,23u,18u,21u,33u,47u,65u,86u,106u,125u,146u,167u,186u,205u,219u,224u,223u,216u,205u,191u,177u,163u,153u,143u,134u,125u,115u,103u,88u,70u,54u,39u,27u,23u,25u,33u,45u,61u,80u,98u,116u,135u,155u,175u,192u,208u,219u,223u,220u,212u,201u,187u,174u,162u,151u,143u,134u,126u,118u,107u,93u,78u,62u,46u,32u,26u,25u,30u,41u,54u,70u,89u,107u,124u,143u,162u,181u,197u,213u,221u,225u,223u,214u,202u,187u,174u,162u,152u,142u,130u,119u,105u,86u,66u,44u,25u,11u,9u,17u,32u,51u,73u,97u,120u,145u,172u,198u,219u,234u,237u,231u,220u,202u,183u,168u,154u,142u,130u,119u,105u,86u,67u,47u,28u,14u,10u,15u,29u,46u,67u,90u,111u,134u,156u,179u,201u,219u,229u,231u,225u,214u,200u,182u,168u,155u,144u,135u,125u,117u,103u,87u,70u,54u,37u,25u,21u,23u,34u,47u,63u,82u,102u,120u,140u,159u,179u,197u,213u,221u,222u,217u,209u,197u,183u,170u,158u,149u,141u,132u,125u,115u,103u,88u,72u,55u,39u,28u,22u,25u,33u,45u,61u,79u,99u,117u,139u,163u,184u,204u,222u,231u,232u,226u,214u,198u,181u,166u,153u,142u,133u,122u,111u,95u,75u,55u,35u,19u,11u,13u,25u,41u,60u,83u,106u,128u,152u,175u,197u,216u,228u,227u,221u,211u,195u,179u,165u,153u,143u,134u,123u,111u,97u,79u,60u,41u,27u,18u,18u,27u,41u,59u,79u,101u,121u,143u,166u,187u,207u,222u,228u,226u,219u,206u,190u,174u,161u,148u,138u,129u,118u,105u,88u,70u,49u,30u,13u,4u,2u,6u,15u,25u,36u,47u,58u,67u,75u,83u,89u,94u,100u,102u,104u,107u,109u,111u,112u,114u,115u,116u,117u,118u,119u,119u,120u,121u,120u,119u,121u,121u,121u,122u,121u,121u,121u,121u,121u,121u,121u,121u,121u,122u,122u,123u,124u,123u,124u,125u,124u,124u,125u,124u,125u,126u,127u,128u,130u,131u,133u,135u,138u,142u,146u,152u,159u,167u,178u,190u,204u,218u,233u,246u,251u,250u,243u,232u,216u,200u,182u,169u,157u,146u,136u,125u,111u,95u,76u,56u,37u,22u,15u,18u,28u,43u,62u,83u,105u,127u,149u,172u,194u,212u,224u,226u,222u,212u,198u,183u,168u,155u,145u,135u,125u,115u,102u,85u,67u,49u,33u,23u,20u,25u,35u,51u,69u,89u,109u,129u,151u,172u,192u,209u,220u,223u,220u,211u,199u,185u,172u,159u,148u,139u,130u,121u,111u,99u,83u,66u,49u,36u,26u,23u,27u,38u,53u,69u,88u,107u,127u,148u,170u,190u,207u,219u,224u,222u,214u,202u,186u,172u,160u,149u,140u,132u,123u,112u,98u,81u,64u,47u,31u,22u,19u,27u,38u,54u,73u,94u,112u,132u,152u,174u,193u,209u,219u,222u,218u,210u,197u,182u,170u,158u,148u,139u,131u,122u,110u,97u,82u,65u,49u,35u,26u,24u,29u,41u,56u,73u,92u,111u,131u,151u,171u,189u,207u,218u,223u,222u,213u,201u,186u,173u,160u,150u,142u,132u,124u,114u,103u,88u,70u,55u,39u,29u,25u,28u,37u,49u,66u,86u,105u,122u,142u,162u,180u,197u,211u,219u,221u,215u,205u,194u,180u,168u,156u,147u,138u,130u,121u,111u,99u,82u,67u,52u,37u,27u,25u,28u,37u,51u,67u,85u,104u,121u,140u,160u,179u,196u,210u,217u,218u,215u,206u,195u,182u,169u,156u,147u,139u,133u,124u,115u,105u,91u,76u,61u,46u,33u,27u,28u,33u,45u,60u,76u,94u,111u,128u,147u,166u,183u,199u,211u,217u,217u,211u,202u,190u,176u,165u,155u,146u,137u,128u,120u,112u,100u,86u,71u,55u,40u,30u,27u,28u,36u,49u,63u,80u,98u,115u,132u,150u,169u,186u,201u,211u,216u,215u,209u,200u,187u,176u,164u,153u,144u,136u,129u,120u,111u,100u,87u,72u,59u,45u,34u,30u,30u,36u,48u,61u,77u,93u,110u,127u,145u,163u,181u,196u,209u,216u,215u,210u,201u,191u,177u,166u,155u,146u,139u,131u,123u,114u,104u,91u,77u,63u,48u,37u,31u,29u,34u,43u,57u,72u,89u,105u,121u,138u,155u,173u,189u,203u,211u,214u,212u,205u,195u,182u,171u,159u,149u,141u,133u,126u,118u,108u,96u,82u,67u,53u,41u,32u,27u,31u,39u,51u,66u,82u,100u,117u,135u,152u,168u,186u,201u,210u,214u,213u,207u,197u,186u,173u,161u,152u,143u,136u,128u,119u,109u,98u,84u,69u,55u,42u,31u,28u,30u,38u,51u,65u,80u,98u,116u,133u,152u,170u,188u,203u,212u,216u,214u,208u,196u,184u,171u,160u,149u,142u,134u,126u,117u,107u,94u,78u,64u,48u,35u,27u,25u,31u,41u,55u,71u,89u,107u,125u,143u,161u,180u,196u,209u,215u,215u,211u,202u,189u,176u,164u,153u,144u,136u,127u,118u,107u,95u,79u,64u,48u,36u,27u,25u,29u,39u,54u,70u,87u,106u,124u,143u,163u,183u,200u,213u,218u,217u,211u,200u,187u,173u,161u,150u,140u,134u,126u,116u,106u,92u,76u,59u,44u,31u,24u,23u,30u,43u,60u,77u,96u,115u,134u,153u,173u,190u,205u,214u,216u,213u,207u,196u,183u,170u,159u,150u,141u,132u,123u,113u,100u,85u,70u,55u,41u,31u,27u,30u,39u,51u,66u,83u,101u,118u,137u,155u,175u,191u,205u,215u,218u,215u,207u,195u,182u,169u,157u,148u,140u,132u,125u,116u,106u,93u,79u,64u,50u,37u,31u,31u,35u,45u,58u,74u,91u,109u,125u,142u,160u,177u,192u,204u,211u,213u,210u,203u,194u,183u,171u,161u,151u,144u,136u,128u,121u,111u,100u,88u,74u,62u,50u,40u,35u,34u,40u,49u,61u,75u,91u,108u,124u,142u,161u,179u,196u,210u,218u,219u,215u,207u,195u,181u,168u,157u,148u,139u,131u,121u,109u,95u,77u,61u,43u,28u,21u,22u,31u,44u,61u,81u,102u,122u,143u,164u,185u,203u,216u,223u,221u,214u,203u,188u,174u,162u,151u,142u,132u,123u,113u,101u,86u,70u,55u,41u,31u,27u,30u,39u,51u,66u,83u,101u,118u,136u,154u,173u,190u,205u,215u,217u,216u,209u,199u,187u,175u,163u,152u,145u,138u,131u,124u,116u,106u,94u,81u,66u,53u,41u,34u,31u,35u,43u,56u,70u,85u,102u,119u,136u,154u,172u,189u,204u,215u,220u,219u,213u,202u,190u,176u,164u,154u,144u,136u,126u,116u,104u,89u,72u,56u,40u,27u,24u,27u,36u,49u,65u,83u,103u,120u,140u,160u,180u,199u,213u,220u,221u,216u,206u,194u,180u,167u,156u,146u,138u,130u,121u,112u,101u,87u,72u,59u,45u,34u,29u,31u,38u,48u,62u,78u,95u,111u,127u,144u,161u,178u,193u,206u,212u,215u,212u,205u,196u,183u,171u,161u,151u,143u,136u,128u,121u,112u,101u,88u,73u,58u,44u,32u,26u,29u,35u,45u,60u,76u,94u,111u,129u,147u,166u,185u,201u,213u,220u,219u,214u,204u,190u,177u,164u,153u,144u,136u,127u,118u,108u,94u,79u,62u,47u,33u,25u,25u,30u,40u,55u,72u,90u,109u,126u,145u,165u,184u,201u,213u,219u,219u,214u,204u,192u,178u,165u,155u,146u,138u,130u,121u,111u,99u,85u,69u,54u,39u,29u,25u,29u,37u,49u,64u,81u,100u,116u,135u,153u,172u,189u,205u,214u,219u,217u,212u,202u,187u,174u,163u,152u,143u,135u,128u,118u,108u,95u,79u,63u,48u,35u,26u,25u,31u,40u,53u,70u,88u,107u,124u,143u,162u,182u,200u,212u,220u,221u,216u,207u,194u,179u,167u,156u,145u,138u,129u,120u,109u,96u,80u,63u,46u,31u,22u,20u,26u,37u,52u,70u,89u,108u,128u,148u,168u,189u,206u,219u,223u,221u,214u,202u,188u,174u,161u,150u,140u,132u,123u,112u,98u,81u,64u,46u,30u,20u,18u,24u,36u,52u,70u,90u,110u,130u,151u,173u,194u,212u,223u,226u,221u,211u,199u,182u,169u,155u,145u,136u,127u,117u,104u,89u,72u,54u,34u,22u,17u,20u,29u,44u,63u,83u,104u,124u,145u,166u,188u,208u,220u,225u,223u,214u,202u,186u,171u,159u,149u,139u,130u,120u,108u,93u,76u,59u,41u,26u,19u,19u,28u,41u,57u,77u,98u,118u,139u,160u,180u,200u,215u,222u,224u,218u,207u,193u,179u,164u,152u,143u,135u,124u,115u,102u,87u,70u,53u,38u,26u,21u,24u,33u,47u,64u,83u,102u,121u,140u,160u,181u,199u,213u,221u,222u,216u,207u,194u,179u,167u,155u,146u,137u,129u,121u,111u,98u,83u,68u,51u,37u,27u,24u,28u,38u,51u,67u,84u,102u,119u,138u,156u,174u,192u,207u,216u,219u,217u,210u,200u,188u,175u,162u,152u,144u,136u,129u,122u,112u,101u,88u,73u,59u,46u,34u,29u,30u,36u,46u,58u,73u,90u,105u,120u,136u,154u,171u,187u,202u,213u,217u,218u,213u,205u,194u,180u,167u,156u,147u,139u,132u,123u,113u,100u,84u,66u,48u,30u,18u,16u,21u,35u,51u,72u,94u,115u,138u,161u,186u,208u,224u,232u,233u,225u,212u,195u,179u,165u,153u,141u,132u,121u,108u,91u,72u,52u,33u,19u,14u,18u,28u,45u,63u,82u,103u,123u,143u,165u,185u,206u,220u,227u,226u,220u,210u,195u,180u,167u,156u,145u,137u,129u,120u,110u,98u,84u,69u,53u,38u,28u,25u,28u,36u,47u,62u,77u,95u,111u,127u,145u,162u,179u,196u,210u,219u,221u,219u,212u,202u,189u,176u,165u,154u,145u,137u,129u,120u,109u,97u,79u,63u,45u,29u,18u,16u,23u,34u,49u,68u,87u,108u,128u,150u,171u,193u,212u,226u,229u,228u,219u,205u,189u,174u,161u,150u,139u,130u,119u,107u,91u,74u,55u,36u,22u,16u,19u,27u,40u,57u,76u,96u,115u,134u,154u,175u,195u,212u,223u,226u,222u,212u,199u,184u,171u,158u,147u,138u,132u,124u,114u,103u,89u,73u,58u,41u,29u,23u,24u,31u,42u,57u,74u,93u,110u,127u,147u,166u,185u,202u,214u,219u,219u,215u,207u,195u,180u,168u,157u,148u,140u,133u,125u,115u,103u,89u,73u,57u,40u,26u,20u,21u,30u,42u,57u,74u,93u,111u,129u,148u,168u,188u,207u,221u,227u,228u,220u,207u,192u,177u,163u,151u,141u,132u,123u,113u,100u,84u,66u,48u,30u,19u,14u,20u,31u,45u,63u,83u,104u,125u,146u,168u,189u,209u,222u,228u,224u,217u,205u,187u,173u,161u,150u,140u,130u,121u,109u,95u,76u,57u,37u,22u,14u,15u,24u,38u,56u,76u,99u,120u,141u,165u,187u,208u,223u,231u,229u,221u,206u,190u,175u,161u,149u,139u,130u,118u,105u,88u,69u,49u,29u,14u,10u,15u,27u,44u,64u,86u,109u,131u,155u,179u,201u,220u,230u,232u,225u,212u,196u,178u,163u,150u,140u,131u,119u,106u,90u,70u,50u,30u,15u,9u,16u,28u,45u,65u,88u,111u,134u,159u,184u,206u,223u,232u,231u,223u,210u,193u,176u,162u,150u,140u,130u,119u,105u,89u,68u,47u,28u,14u,11u,17u,32u,49u,71u,94u,117u,139u,165u,188u,210u,225u,231u,229u,220u,206u,189u,175u,162u,150u,140u,130u,119u,105u,87u,67u,48u,29u,17u,14u,20u,33u,49u,69u,92u,114u,135u,157u,179u,200u,216u,227u,230u,223u,212u,197u,182u,168u,157u,145u,136u,125u,114u,101u,83u,65u,47u,32u,20u,18u,25u,36u,51u,68u,90u,108u,128u,150u,170u,191u,209u,222u,227u,225u,216u,204u,190u,175u,162u,151u,142u,134u,125u,115u,104u,90u,73u,57u,40u,28u,23u,24u,31u,44u,59u,76u,95u,113u,131u,149u,168u,187u,205u,216u,222u,221u,216u,207u,195u,181u,169u,158u,148u,139u,132u,125u,115u,104u,92u,77u,63u,49u,37u,29u,27u,32u,42u,54u,67u,82u,98u,115u,130u,148u,164u,181u,197u,209u,217u,219u,216u,210u,199u,187u,175u,164u,154u,145u,138u,129u,121u,111u,97u,81u,62u,44u,27u,15u,14u,21u,33u,51u,71u,93u,116u,139u,162u,186u,209u,228u,236u,236u,227u,212u,194u,177u,163u,150u,139u,129u,116u,101u,81u,61u,40u,21u,10u,10u,20u,33u,53u,75u,97u,118u,141u,165u,188u,208u,222u,230u,228u,221u,207u,191u,175u,162u,150u,141u,133u,124u,115u,102u,88u,71u,53u,36u,25u,21u,24u,33u,45u,62u,79u,98u,117u,134u,154u,173u,191u,207u,218u,222u,221u,213u,203u,189u,176u,164u,153u,144u,136u,129u,122u,111u,100u,86u,71u,56u,41u,29u,23u,24u,32u,43u,58u,74u,93u,111u,128u,148u,169u,189u,207u,220u,226u,226u,218u,205u,190u,176u,162u,151u,142u,132u,123u,110u,97u,79u,60u,40u,24u,13u,13u,21u,35u,53u,73u,94u,116u,138u,161u,184u,206u,221u,228u,227u,220u,207u,192u,175u,161u,149u,140u,130u,121u,110u,95u,78u,60u,41u,26u,17u,16u,23u,36u,53u,72u,93u,113u,134u,155u,177u,199u,215u,225u,227u,222u,211u,197u,181u,167u,154u,143u,134u,124u,114u,101u,85u,66u,46u,28u,11u,2u,2u,7u,15u,25u,36u,47u,59u,67u,75u,82u,88u,94u,98u,100u,104u,106u,109u,111u,113u,114u,115u,115u,116u,116u,117u,118u,118u,118u,119u,120u,120u,120u,119u,120u,120u,121u,121u,121u,122u,122u,122u,122u,122u,122u,123u,122u,122u,122u,123u,123u,123u,123u,124u,125u,127u,127u,127u,129u,132u,133u,137u,140u,144u,149u,155u,163u,173u,184u,198u,212u,228u,242u,249u,251u };
const uint8 CYCODE WaveDAC8_1_wave2[WaveDAC8_1_WAVE2_LENGTH] = { 128u,132u,138u,143u,148u,152u,158u,162u,168u,172u,178u,182u,188u,192u,198u,202u,208u,213u,218u,222u,228u,232u,238u,242u,248u,252u,248u,242u,238u,232u,228u,222u,218u,212u,208u,202u,198u,192u,188u,182u,178u,173u,168u,162u,158u,152u,148u,143u,138u,132u,128u,122u,118u,112u,107u,102u,97u,93u,88u,83u,78u,73u,68u,62u,57u,52u,47u,42u,37u,33u,28u,23u,18u,13u,8u,3u,8u,13u,18u,23u,28u,33u,37u,42u,47u,52u,57u,62u,68u,73u,78u,83u,88u,93u,97u,102u,107u,112u,118u,122u };

static uint8  WaveDAC8_1_Wave1Chan;
static uint8  WaveDAC8_1_Wave2Chan;
static uint8  WaveDAC8_1_Wave1TD;
static uint8  WaveDAC8_1_Wave2TD;


/*******************************************************************************
* Function Name: WaveDAC8_1_Init
********************************************************************************
*
* Summary:
*  Initializes component with parameters set in the customizer.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_1_Init(void) 
{
	WaveDAC8_1_VDAC8_Init();
	WaveDAC8_1_VDAC8_SetSpeed(WaveDAC8_1_HIGHSPEED);
	WaveDAC8_1_VDAC8_SetRange(WaveDAC8_1_DAC_RANGE);

	#if(WaveDAC8_1_DAC_MODE == WaveDAC8_1_CURRENT_MODE)
		WaveDAC8_1_IDAC8_SetPolarity(WaveDAC8_1_DAC_POL);
	#endif /* WaveDAC8_1_DAC_MODE == WaveDAC8_1_CURRENT_MODE */

	#if(WaveDAC8_1_OUT_MODE == WaveDAC8_1_BUFFER_MODE)
	   WaveDAC8_1_BuffAmp_Init();
	#endif /* WaveDAC8_1_OUT_MODE == WaveDAC8_1_BUFFER_MODE */

	/* Get the TD Number for the DMA channel 1 and 2   */
	WaveDAC8_1_Wave1TD = CyDmaTdAllocate();
	WaveDAC8_1_Wave2TD = CyDmaTdAllocate();
	
	/* Initialize waveform pointers  */
	WaveDAC8_1_Wave1Setup(WaveDAC8_1_wave1, WaveDAC8_1_WAVE1_LENGTH) ;
	WaveDAC8_1_Wave2Setup(WaveDAC8_1_wave2, WaveDAC8_1_WAVE2_LENGTH) ;
	
	/* Initialize the internal clock if one present  */
	#if defined(WaveDAC8_1_DacClk_PHASE)
	   WaveDAC8_1_DacClk_SetPhase(WaveDAC8_1_CLK_PHASE_0nS);
	#endif /* defined(WaveDAC8_1_DacClk_PHASE) */
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Enable
********************************************************************************
*  
* Summary: 
*  Enables the DAC block and DMA operation.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_1_Enable(void) 
{
	WaveDAC8_1_VDAC8_Enable();

	#if(WaveDAC8_1_OUT_MODE == WaveDAC8_1_BUFFER_MODE)
	   WaveDAC8_1_BuffAmp_Enable();
	#endif /* WaveDAC8_1_OUT_MODE == WaveDAC8_1_BUFFER_MODE */

	/* 
	* Enable the channel. It is configured to remember the TD value so that
	* it can be restored from the place where it has been stopped.
	*/
	(void)CyDmaChEnable(WaveDAC8_1_Wave1Chan, 1u);
	(void)CyDmaChEnable(WaveDAC8_1_Wave2Chan, 1u);
	
	/* set the initial value */
	WaveDAC8_1_SetValue(0u);
	
	#if(WaveDAC8_1_CLOCK_SRC == WaveDAC8_1_CLOCK_INT)  	
	   WaveDAC8_1_DacClk_Start();
	#endif /* WaveDAC8_1_CLOCK_SRC == WaveDAC8_1_CLOCK_INT */
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Start
********************************************************************************
*
* Summary:
*  The start function initializes the voltage DAC with the default values, 
*  and sets the power to the given level.  A power level of 0, is the same as 
*  executing the stop function.
*
* Parameters:  
*  None
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void WaveDAC8_1_Start(void) 
{
	/* If not Initialized then initialize all required hardware and software */
	if(WaveDAC8_1_initVar == 0u)
	{
		WaveDAC8_1_Init();
		WaveDAC8_1_initVar = 1u;
	}
	
	WaveDAC8_1_Enable();
}


/*******************************************************************************
* Function Name: WaveDAC8_1_StartEx
********************************************************************************
*
* Summary:
*  The StartEx function sets pointers and sizes for both waveforms
*  and then starts the component.
*
* Parameters:  
*   uint8 * wavePtr1:     Pointer to the waveform 1 array.
*   uint16  sampleSize1:  The amount of samples in the waveform 1.
*   uint8 * wavePtr2:     Pointer to the waveform 2 array.
*   uint16  sampleSize2:  The amount of samples in the waveform 2.
*
* Return: 
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void WaveDAC8_1_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)

{
	WaveDAC8_1_Wave1Setup(wavePtr1, sampleSize1);
	WaveDAC8_1_Wave2Setup(wavePtr2, sampleSize2);
	WaveDAC8_1_Start();
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Stop
********************************************************************************
*
* Summary:
*  Stops the clock (if internal), disables the DMA channels
*  and powers down the DAC.
*
* Parameters:  
*  None  
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_1_Stop(void) 
{
	/* Turn off internal clock, if one present */
	#if(WaveDAC8_1_CLOCK_SRC == WaveDAC8_1_CLOCK_INT)  	
	   WaveDAC8_1_DacClk_Stop();
	#endif /* WaveDAC8_1_CLOCK_SRC == WaveDAC8_1_CLOCK_INT */
	
	/* Disble DMA channels */
	(void)CyDmaChDisable(WaveDAC8_1_Wave1Chan);
	(void)CyDmaChDisable(WaveDAC8_1_Wave2Chan);

	/* Disable power to DAC */
	WaveDAC8_1_VDAC8_Stop();
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Wave1Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 1.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None 
*
*******************************************************************************/
void WaveDAC8_1_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)

{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (WaveDAC8_1_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
		
		WaveDAC8_1_Wave1Chan = WaveDAC8_1_Wave1_DMA_DmaInitialize(
		WaveDAC8_1_Wave1_DMA_BYTES_PER_BURST, WaveDAC8_1_Wave1_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		WaveDAC8_1_Wave1Chan = WaveDAC8_1_Wave1_DMA_DmaInitialize(
		WaveDAC8_1_Wave1_DMA_BYTES_PER_BURST, WaveDAC8_1_Wave1_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(WaveDAC8_1_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
    * Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(WaveDAC8_1_Wave1TD, sampleSize, WaveDAC8_1_Wave1TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)WaveDAC8_1_Wave1_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(WaveDAC8_1_Wave1TD, LO16((uint32)wavePtr), LO16(WaveDAC8_1_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(WaveDAC8_1_Wave1Chan, WaveDAC8_1_Wave1TD);
}


/*******************************************************************************
* Function Name: WaveDAC8_1_Wave2Setup
********************************************************************************
*
* Summary:
*  Sets pointer and size for waveform 2.                                    
*
* Parameters:  
*  uint8 * WavePtr:     Pointer to the waveform array.
*  uint16  SampleSize:  The amount of samples in the waveform.
*
* Return: 
*  None
*
*******************************************************************************/
void WaveDAC8_1_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
 
{
	#if (CY_PSOC3)
		uint16 memoryType; /* determining the source memory type */
		memoryType = (WaveDAC8_1_HI16FLASHPTR == HI16(wavePtr)) ? HI16(CYDEV_FLS_BASE) : HI16(CYDEV_SRAM_BASE);
			
		WaveDAC8_1_Wave2Chan = WaveDAC8_1_Wave2_DMA_DmaInitialize(
		WaveDAC8_1_Wave2_DMA_BYTES_PER_BURST, WaveDAC8_1_Wave2_DMA_REQUEST_PER_BURST,
		memoryType, HI16(CYDEV_PERIPH_BASE));
	#else /* PSoC 5 */
		WaveDAC8_1_Wave2Chan = WaveDAC8_1_Wave2_DMA_DmaInitialize(
		WaveDAC8_1_Wave2_DMA_BYTES_PER_BURST, WaveDAC8_1_Wave2_DMA_REQUEST_PER_BURST,
		HI16(wavePtr), HI16(WaveDAC8_1_DAC8__D));
	#endif /* CY_PSOC3 */
	
	/*
	* TD is looping on itself. 
	* Increment the source address, but not the destination address. 
	*/
	(void)CyDmaTdSetConfiguration(WaveDAC8_1_Wave2TD, sampleSize, WaveDAC8_1_Wave2TD, 
                                    (uint8)CY_DMA_TD_INC_SRC_ADR | (uint8)WaveDAC8_1_Wave2_DMA__TD_TERMOUT_EN); 
	
	/* Set the TD source and destination address */
	(void)CyDmaTdSetAddress(WaveDAC8_1_Wave2TD, LO16((uint32)wavePtr), LO16(WaveDAC8_1_DAC8__D));
	
	/* Associate the TD with the channel */
	(void)CyDmaChSetInitialTd(WaveDAC8_1_Wave2Chan, WaveDAC8_1_Wave2TD);
}


/* [] END OF FILE */
