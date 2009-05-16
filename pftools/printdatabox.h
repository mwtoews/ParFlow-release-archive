/*BHEADER**********************************************************************

  Copyright (c) 1995-2009, Lawrence Livermore National Security,
  LLC. Produced at the Lawrence Livermore National Laboratory. Written
  by the Parflow Team (see the CONTRIBUTORS file)
  <parflow@lists.llnl.gov> CODE-OCEC-08-103. All rights reserved.

  This file is part of Parflow. For details, see
  http://www.llnl.gov/casc/parflow

  Please read the COPYRIGHT file or Our Notice and the LICENSE file
  for the GNU Lesser General Public License.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License (as published
  by the Free Software Foundation) version 2.1 dated February 1999.

  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms
  and conditions of the GNU General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA
**********************************************************************EHEADER*/
/******************************************************************************
 * Header file for `printdatabox.c'
 *
 * (C) 1993 Regents of the University of California.
 *
 * $Revision: 1.12 $
 *
 *-----------------------------------------------------------------------------
 *
 *****************************************************************************/

#ifndef PRINTDATABOX_HEADER
#define PRINTDATABOX_HEADER

#include "parflow_config.h"

#ifdef HAVE_HDF4
#include <hdf.h>
#endif

#include <stdio.h>

#include "databox.h"

/*-----------------------------------------------------------------------
 * function prototypes
 *-----------------------------------------------------------------------*/


#ifdef __STDC__
# define        P(s) s
#else
# define P(s) ()
#endif
 
 
/* printdatabox.c */
void PrintSimpleA P((FILE *fp , Databox *v ));
void PrintSimpleB P((FILE *fp , Databox *v ));
void PrintParflowB P((FILE *fp , Databox *v ));
void PrintAVSField P((FILE *fp , Databox *v ));
int  PrintSDS P((char *filename , int type , Databox *v ));
void PrintVizamrai P((FILE *fp , Databox *v ));
 
#undef P

#endif