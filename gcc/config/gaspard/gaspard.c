/* Target Code for gaspard
   Copyright (C) 2008-2014 Free Software Foundation, Inc.
   Contributed by Anthony Green.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "target.h"
#include "rtl.h"
#include "tree.h"
#include "stringpool.h"
#include "attribs.h"
#include "df.h"
#include "memmodel.h"
#include "tm_p.h"
#include "regs.h"
#include "emit-rtl.h"
#include "diagnostic-core.h"
#include "stor-layout.h"
#include "calls.h"
#include "conditions.h"
#include "output.h"
#include "expr.h"
#include "builtins.h"
/* This file should be included last.  */
#include "target-def.h"
int gaspard_comp_type_attributes (const tree_node *type1, const tree_node *type2) {
	
	
	
	}
 void  gaspard_expand_prologue (void){
	 
 }
 void  gaspard_expand_epilogue (void) {
	 
	 
	}
 int   gaspard_initial_elimination_offset (int i, int a) {
	 
	 
	 }
 void  gaspard_print_operand (FILE *fp, rtx rt, int i){
	 	 printf("gaspard_print_operand \n");

	 
	 }
 void  gaspard_print_operand_address (FILE * fp, rtx rt) {
	 
	 printf("print oprand adress \n");
	}
static inline unsigned int
gaspard_ret_register (void)
{
  return 31; // toujours 31
}	
rtx gaspard_function_value(const_tree ret_type, const_tree fn_decl_or_type, bool outgoing) {
	
	  return gen_rtx_REG (TYPE_MODE (ret_type), gaspard_ret_register ());

	
}
bool gaspard_function_value_regno_p(const unsigned int regno) {


	
	
}
#undef TARGET_COMP_TYPE_ATTRIBUTES
#define TARGET_COMP_TYPE_ATTRIBUTES gaspard_comp_type_attributes
#undef TARGET_FUNCTION_VALUE
#define TARGET_FUNCTION_VALUE gaspard_function_value
#undef TARGET_FUNCTION_VALUE_REGNO_P
#define TARGET_FUNCTION_VALUE_REGNO_P gaspard_function_value_regno_p
struct gcc_target targetm = TARGET_INITIALIZER;

