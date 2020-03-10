#include <stdlib.h>
#include "win_data.h"

/* windows dimensions */
int wmenu_h, wmenu_w;
int wflds_h, wflds_w;
int wmain_h, wmain_w;
int wstat_h, wstat_w;
int wcmd_h, wcmd_w;
int menu_h, menu_w;

int want_quit = 0;
unsigned win_flags = 0 | F_TAB(1);
enum win_func active_win;
int npvs = 0;
struct graphical_pv *gpvs[MAX_N_ENTRIES + 1];

void
release_data(void)
{
	int i;
	for (i=0; i < npvs; i++)
		free(gpvs[i]);
}

