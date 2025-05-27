# Simulation Information

*Simulation from:*
Lytton WW. Computer model of clonazepam's effect in thalamic slice.
*Neuroreport*, 8:3339-3343, 1997.
Figs. 3 (Fig3.gif; reticularis cells) and 4 (Fig4.gif; thalamocortical cells), p 3342
neurrep8:3339.pdf

This simulation is very similar to the one published in the paper but is not identical due to variations among randomizers using supposedly identical algorithms. The original was run under Sun Solaris. The example files included here were produced under Intel Linux. I have chosen traces from the current runs that are very similar to those in the publication. However, these specific traces may not look identical if a different randomizer is used. I also graph all 64 traces from the network so that they can all be looked at and compared to the figure.

# Instructions for Compilation and Running

**COMPILE:**
```bash
nrnivmodl
```

**RUN:**
```bash
$CPU/special init.hoc -
```

**TO JUST LOOK AT PRE-SAVED DATA:**
```bash
$CPU/special disp.hoc -
```

To look at your newly run data later, modify `disp.hoc` line 23:

- FROM
  ```hoc
  showfiles("ctl.dat","czp.dat")
  ```
- TO
  ```hoc
  showfiles("ctlnew.dat","czpnew.dat")
  ```

# Additional Notes

- 20110411 changed Euler solve method to `cnexp` in `IAHP_destexhe.mod` and `ICAN_destexhe.mod` as per "Integration methods for SOLVE statements" topic in the NEURON forum:
  [NEURON forum discussion](http://www.neuron.yale.edu/phpBB/viewtopic.php?f=28&t=592)
  - ModelDB Administrator

# Changelog

2022-05: Updated MOD files to contain valid C++ and be compatible with the upcoming versions 8.2 and 9.0 of NEURON.
2022-12: `IT2_huguenard.mod` & `IT_wang.mod`: replace Adams solver with Runge (see [GitHub pull request](https://github.com/ModelDBRepository/12631/pull/3))
Passiv.mod: drop INDEPENDENT block for v
Required for upcoming NEURON 9.0.0
2023-04: Do not store pointers to RANGE variables. Required for upcoming NEURON 9.0.0.

---

2025-05-27 – Standardized to Markdown.