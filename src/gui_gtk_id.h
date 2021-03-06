/****************************************************************************
*    Copyright © 2014-2015 Xorg
*
*    This program is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
****************************************************************************/

/*
* gui_gtk_id.h
*/

#ifndef _GUI_GTK_ID_H_
#define _GUI_GTK_ID_H_


/* Translation */
static const char *trad[LASTOBJ] =
{
	"cpulabel", "mainboardlabel", "ramlabel", "systemlabel", "aboutlabel",
	"proc_lab", "clock_lab", "cache_lab", "motherboard_lab", "bios_lab", "banks_lab", "os_lab", "mem_lab", "about_lab", "license_lab",
	"about_version", "about_descr", "about_author", "license_labcopyright", "license_lablicense"
};

/* Tab CPU */
static const char *objectcpu[2][LASTCPU] =
{
	{ "proc_labvendor", "proc_labcdename", "proc_labpkg", "proc_labarch", "proc_labspec", "proc_labfam", "proc_labextfam", "proc_labmod", "proc_labextmod", "proc_labstep", "proc_labinstr",
		"clock_labcore", "clock_labmult", "clock_labbus", "clock_labmips",
		"cache_labl1d", "cache_labl1i", "cache_labl2", "cache_labl3",
		"trg_labsock", "trg_labcore", "trg_labthrd"
	},
	{ "proc_valvendor", "proc_valcdename", "proc_valpkg", "proc_valarch", "proc_valspec", "proc_valfam", "proc_valextfam", "proc_valmod", "proc_valextmod", "proc_valstep", "proc_valinstr",
		"clock_valcore", "clock_valmult", "clock_valbus", "clock_valmips",
		"cache_vall1d", "cache_vall1i", "cache_vall2", "cache_vall3",
		"trg_valsock", "trg_valcore", "trg_valthrd"
	}
};

/* Tab Mainboard */
static const char *objectmb[2][LASTMB] =
{
	{ "motherboard_labmanu", "motherboard_labmod", "motherboard_labrev",
		"bios_labbrand", "bios_labvers", "bios_labdate", "bios_labrom"
	},
	{ "motherboard_valmanu", "motherboard_valmod", "motherboard_valrev",
		"bios_valbrand", "bios_valvers", "bios_valdate", "bios_valrom"
	}
};

/* Tab RAM */
static const char *objectram[2][LASTRAM] =
{
	{ "banks_labbank0_0", "banks_labbank0_1", "banks_labbank1_0", "banks_labbank1_1", "banks_labbank2_0", "banks_labbank2_1", "banks_labbank3_0", "banks_labbank3_1",
		"banks_labbank4_0", "banks_labbank4_1", "banks_labbank5_0", "banks_labbank5_1", "banks_labbank6_0", "banks_labbank6_1", "banks_labbank7_0", "banks_labbank7_1"
	},
	{ "banks_valbank0_0", "banks_valbank0_1", "banks_valbank1_0", "banks_valbank1_1", "banks_valbank2_0", "banks_valbank2_1", "banks_valbank3_0", "banks_valbank3_1",
		"banks_valbank4_0", "banks_valbank4_1", "banks_valbank5_0", "banks_valbank5_1", "banks_valbank6_0", "banks_valbank6_1", "banks_valbank7_0", "banks_valbank7_1"
	}
};

/* Tab System */
static const char *objectsys[2][LASTSYS] =
{
	{ "os_labkern", "os_labdistro", "os_labhost", "os_labuptime", "os_labcomp",
		"mem_labused", "mem_labbuff", "mem_labcache", "mem_labfree", "mem_labswap",
	},
	{ "os_valkern", "os_valdistro", "os_valhost", "os_valuptime", "os_valcomp",
		"mem_valused", "mem_valbuff", "mem_valcache", "mem_valfree", "mem_valswap"
	}
};


#endif /* _GUI_GTK_ID_H_ */
