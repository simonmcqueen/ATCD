/*

COPYRIGHT

Copyright 1992, 1993, 1994 Sun Microsystems, Inc.  Printed in the United
States of America.  All Rights Reserved.

This product is protected by copyright and distributed under the following
license restricting its use.

The Interface Definition Language Compiler Front End (CFE) is made
available for your use provided that you include this license and copyright
notice on all media and documentation and the software program in which
this product is incorporated in whole or part. You may copy and extend
functionality (but may not remove functionality) of the Interface
Definition Language CFE without charge, but you are not authorized to
license or distribute it to anyone else except as part of a product or
program developed by you or with the express written consent of Sun
Microsystems, Inc. ("Sun").

The names of Sun Microsystems, Inc. and any of its subsidiaries or
affiliates may not be used in advertising or publicity pertaining to
distribution of Interface Definition Language CFE as permitted herein.

This license is effective until terminated by Sun for failure to comply
with this license.  Upon termination, you shall destroy or return all code
and documentation for the Interface Definition Language CFE.

INTERFACE DEFINITION LANGUAGE CFE IS PROVIDED AS IS WITH NO WARRANTIES OF
ANY KIND INCLUDING THE WARRANTIES OF DESIGN, MERCHANTIBILITY AND FITNESS
FOR A PARTICULAR PURPOSE, NONINFRINGEMENT, OR ARISING FROM A COURSE OF
DEALING, USAGE OR TRADE PRACTICE.

INTERFACE DEFINITION LANGUAGE CFE IS PROVIDED WITH NO SUPPORT AND WITHOUT
ANY OBLIGATION ON THE PART OF Sun OR ANY OF ITS SUBSIDIARIES OR AFFILIATES
TO ASSIST IN ITS USE, CORRECTION, MODIFICATION OR ENHANCEMENT.

SUN OR ANY OF ITS SUBSIDIARIES OR AFFILIATES SHALL HAVE NO LIABILITY WITH
RESPECT TO THE INFRINGEMENT OF COPYRIGHTS, TRADE SECRETS OR ANY PATENTS BY
INTERFACE DEFINITION LANGUAGE CFE OR ANY PART THEREOF.

IN NO EVENT WILL SUN OR ANY OF ITS SUBSIDIARIES OR AFFILIATES BE LIABLE FOR
ANY LOST REVENUE OR PROFITS OR OTHER SPECIAL, INDIRECT AND CONSEQUENTIAL
DAMAGES, EVEN IF SUN HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

Use, duplication, or disclosure by the government is subject to
restrictions as set forth in subparagraph (c)(1)(ii) of the Rights in
Technical Data and Computer Software clause at DFARS 252.227-7013 and FAR
52.227-19.

Sun, Sun Microsystems and the Sun logo are trademarks or registered
trademarks of Sun Microsystems, Inc.

SunSoft, Inc.  
2550 Garcia Avenue 
Mountain View, California  94043

NOTE:

SunOS, SunSoft, Sun, Solaris, Sun Microsystems or the Sun logo are
trademarks or registered trademarks of Sun Microsystems, Inc.

 */

// DRV_init.cc - Initialization for IDL compiler driver program

#include	"idl.h"
#include	"idl_extern.h"

#include	"drv_private.h"
#include 	"drv_link.h"

void
DRV_init()
{
  // Initialize global data

  idl_global = new IDL_GlobalData();

  idl_global->set_scopes(NULL);
  idl_global->set_root(NULL);
  idl_global->set_gen(NULL);
  idl_global->set_err((*DRV_FE_new_UTL_Error)());
  idl_global->set_err_count(0);
  idl_global->set_indent((*DRV_FE_new_UTL_Indenter)());

  idl_global->set_filename(NULL);
  idl_global->set_main_filename(NULL);
  idl_global->set_real_filename(NULL);
  idl_global->set_stripped_filename(NULL);
  idl_global->set_import(I_TRUE);
  idl_global->set_in_main_file(I_FALSE);
  idl_global->set_lineno(-1);

  idl_global->set_prog_name(NULL);

  idl_global->set_cpp_location(CPP_LOCATION);

  idl_global->set_be("");

  idl_global->set_local_escapes(new char[1024]);

  idl_global->set_pragmas(NULL);

  idl_global->set_compile_flags(0);

  idl_global->set_read_from_stdin(I_FALSE);

  idl_global->set_include_file_names(NULL);
  idl_global->set_n_include_file_names(0);

  idl_global->set_parse_state(IDL_GlobalData::PS_NoState);

  // Initialize driver private data

  DRV_nfiles = 0;
  DRV_file_index = 0;  
}

