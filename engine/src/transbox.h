/*
 *  This file is part of Signus: The Artefact Wars (http://signus.sf.net)
 *
 *  Copyright (C) 1997, 1998, 2002, 2003
 *  Vaclav Slavik, Richard Wunsch, Marek Wunsch
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */



/*

TransportBox - panel s jednotkami obsazenymi v trasporteru

*/


#ifndef _TRANSBOX_H
#define _TRANSBOX_H


#include "system.h"
#include "units.h"

class TTransBox {
		public:
			int w, h, x, y;
			byte *Bkg, *Buf, *Templ;
			int *lunits;
			int Cnt;
		
			TTransBox(int aw, int ah, int *aunits, int numun, byte *atempl);
			void Show(int fast = FALSE);
			void Hide(int fast = FALSE);
			void Draw(int phase);
			void DrawUnits();
			int Handle();
				// osetri vyber jednotky, vraci -1 pri cancel, jinak poradi 
				// jednotky v seznamu
	};





#endif
