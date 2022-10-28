################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
build/test/mocks/%.obj: ../build/test/mocks/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"/home/hazem/ti/TI-18.12.5.LTS compiler/ti-cgt-arm_18.12.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -Ooff --include_path="/home/hazem/ti/TI-18.12.5.LTS compiler/ti-cgt-arm_18.12.5.LTS/include" --include_path="/home/hazem/ti/tivaware_c_series_2_1_4_178" --advice:power="all" --define=ccs="ccs" --define=PART_TM4C123GH6PM --define=TARGET_IS_TM4C123_RB1 -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --ual --preproc_with_compile --preproc_dependency="build/test/mocks/$(basename $(<F)).d_raw" --obj_directory="build/test/mocks" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


