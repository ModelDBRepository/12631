#include <stdio.h>
modl_reg(){
	fprintf(stderr, "Additional mechanisms from files\n");

fprintf(stderr," AMPA.mod");
fprintf(stderr," GABAA.mod");
fprintf(stderr," GABAB1.mod");
fprintf(stderr," GABALOW.mod");
fprintf(stderr," HH_traub.mod");
fprintf(stderr," IAHP_destexhe.mod");
fprintf(stderr," ICAN_destexhe.mod");
fprintf(stderr," ICAN_voltdep.mod");
fprintf(stderr," IT2_huguenard.mod");
fprintf(stderr," IT_wang.mod");
fprintf(stderr," Ih_old.mod");
fprintf(stderr," NMDA.mod");
fprintf(stderr," calciumpump_destexhe.mod");
fprintf(stderr," passiv.mod");
fprintf(stderr," pregen.mod");
fprintf(stderr," presyn.mod");
fprintf(stderr," pulse.mod");
fprintf(stderr," rand.mod");
fprintf(stderr, "\n");
_AMPA_reg();
_GABAA_reg();
_GABAB1_reg();
_GABALOW_reg();
_HH_traub_reg();
_IAHP_destexhe_reg();
_ICAN_destexhe_reg();
_ICAN_voltdep_reg();
_IT2_huguenard_reg();
_IT_wang_reg();
_Ih_old_reg();
_NMDA_reg();
_calciumpump_destexhe_reg();
_passiv_reg();
_pregen_reg();
_presyn_reg();
_pulse_reg();
_rand_reg();
}
