/*
 *******************************************************************************
 * $Header$
 *  +-----------------------------------------------------------------+
 *  | PROVIDED OR OTHERWISE MADE AVAILABLE TO ANY OTHER PERSON. THE   |
 *  | OWNERSHIP AND TITLE OF THIS SOFTWARE IS NOT TRANSFERRED.        |
 *  |                                                                 |
 *  +-----------------------------------------------------------------+
 * $History$
 *******************************************************************************
	
/*!
 *******************************************************************************
 * Copyright 2016-2025 Spreadtrum, Inc. All rights reserved.
 * AF_Interface.h
 * Galen Tsai
 *******************************************************************************
	
#ifndef __AFV1_INTERFACE_H__
#define  __AFV1_INTERFACE_H__
	
	// Interface Commands
	typedef enum _AF_IOCTRL_CMD { 
	
	
	
	
	
	
} AF_IOCTRL_CMD;

	// Interface Param Structure
	typedef struct _AF_Result {
	
	


	
	
	
	
	


	
	


	
	


	// Interface
void *AF_init(AF_Ctrl_Ops * AF_Ops, af_tuning_block_param * af_tuning_data, haf_tuning_param_t * haf_tune_data, cmr_u32 * dump_info_len, char *sys_version);




#endif	/* 