// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144b9dc10 FUN_144b9dc10 body=821 status=ok
// SIG undefined FUN_144b9dc10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9dc10(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  
  uVar15 = 0x144b9dc2f;
  if (param_1 == 0) {
    plVar14 = *(longlong **)(param_2 + 0x138);
  }
  else {
    plVar14 = *(longlong **)(param_1 + 0x488);
  }
  plVar1 = (longlong *)*plVar14;
  lVar6 = 0;
  uVar13 = 0;
  uVar12 = 0;
  iVar5 = 0;
  iVar11 = 0;
  uVar8 = uVar13;
  iVar3 = iVar5;
  if (*plVar1 == 0) {
    FUN_144ba24f0(0x14,0x14c,0xb3,"ssl\\ssl_cert.c",0x300,0x144b9dc2f);
    goto LAB_144b9dedf;
  }
  if ((param_3 & 4) == 0) {
    lVar6 = plVar14[0x39];
    if (lVar6 == 0) {
      if (param_1 == 0) {
        lVar6 = *(longlong *)(param_2 + 0x20);
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20);
      }
    }
    uVar13 = uVar12;
    if ((param_3 & 1) != 0) {
      uVar13 = plVar1[2];
    }
  }
  else {
    lVar6 = FUN_144bb3fc0();
    if (lVar6 == 0) goto LAB_144b9dedf;
    iVar2 = FUN_144babbf0(plVar1[2]);
    if (0 < iVar2) {
      do {
        uVar7 = FUN_144babc00(plVar1[2],uVar12);
        iVar2 = FUN_144bb4960(lVar6,uVar7);
        if (iVar2 == 0) goto LAB_144b9dedf;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        iVar2 = FUN_144babbf0(plVar1[2]);
      } while ((int)uVar10 < iVar2);
    }
    iVar2 = FUN_144bb4960(lVar6,*plVar1);
    uVar8 = 0;
    iVar3 = iVar11;
    if (iVar2 == 0) goto LAB_144b9dedf;
  }
  uVar8 = FUN_144baf720();
  if (uVar8 == 0) {
    FUN_144ba24f0(0x14,0x14c,0x41,"ssl\\ssl_cert.c",0x31e,uVar15);
    iVar3 = iVar11;
    goto LAB_144b9dedf;
  }
  iVar3 = FUN_144baf7b0(uVar8,lVar6,*plVar1,uVar13);
  if (iVar3 == 0) {
    FUN_144ba24f0(0x14,0x14c,0xb,"ssl\\ssl_cert.c",0x322,uVar15);
    iVar3 = iVar11;
    goto LAB_144b9dedf;
  }
  FUN_144bafcf0(uVar8,*(uint *)((longlong)plVar14 + 0x1c) & 0x30000);
  iVar3 = FUN_144bb0090(uVar8);
  if (iVar3 < 1) {
    if ((param_3 & 8) != 0) {
      if ((param_3 & 0x10) != 0) {
        FUN_144ba26f0();
      }
      iVar3 = 1;
      iVar5 = 2;
      goto LAB_144b9ddca;
    }
  }
  else {
LAB_144b9ddca:
    lVar9 = FUN_144bafba0(uVar8);
    if (0 < iVar3) {
      uVar15 = FUN_144bac1f0(lVar9);
      FUN_144b47250(uVar15);
      if (((param_3 & 2) != 0) && (iVar3 = FUN_144babbf0(lVar9), 0 < iVar3)) {
        iVar3 = FUN_144babbf0(lVar9);
        uVar15 = FUN_144babc00(lVar9,iVar3 + -1);
        uVar10 = FUN_144ec5660(uVar15);
        if ((uVar10 >> 0xd & 1) != 0) {
          uVar15 = FUN_144bac250(lVar9);
          FUN_144b47250(uVar15);
        }
      }
      iVar11 = 0;
      iVar3 = FUN_144babbf0(lVar9);
      if (0 < iVar3) {
        do {
          uVar15 = FUN_144babc00(lVar9,iVar11);
          iVar5 = FUN_144ebbef0(param_1,param_2,uVar15,0,0);
          if (iVar5 != 1) {
            FUN_144ba24f0(0x14,0x14c,iVar5,"ssl\\ssl_cert.c",0x34f);
            FUN_144babe00(lVar9,FUN_144b47250);
            iVar3 = 0;
            goto LAB_144b9dedf;
          }
          iVar11 = iVar11 + 1;
          iVar3 = FUN_144babbf0(lVar9);
          iVar5 = 1;
        } while (iVar11 < iVar3);
      }
      FUN_144babe00(plVar1[2],FUN_144b47250);
      plVar1[2] = lVar9;
      iVar3 = iVar5;
      if (iVar5 == 0) {
        iVar3 = 1;
      }
      goto LAB_144b9dedf;
    }
  }
  FUN_144ba24f0(0x14,0x14c,0x86,"ssl\\ssl_cert.c",0x333);
  uVar4 = FUN_144bafb50(uVar8);
  uVar15 = FUN_144ec8b50(uVar4);
  FUN_144ba2bd0(2,"Verify error:",uVar15);
  iVar3 = iVar5;
LAB_144b9dedf:
  if ((param_3 & 4) != 0) {
    FUN_144bb4110(lVar6);
  }
  FUN_144baf770(uVar8);
  return iVar3;
}



// FUNCTION 144b9df50 FUN_144b9df50 body=110 status=ok
// SIG undefined FUN_144b9df50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9df50(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = 0x1d0;
  if (param_3 != 0) {
    lVar1 = 0x1c8;
  }
  FUN_144bb4110(*(undefined8 *)(lVar1 + param_1));
  *(longlong *)(lVar1 + param_1) = param_2;
  if ((param_4 != 0) && (param_2 != 0)) {
    FUN_144bb4270(param_2);
  }
  return 1;
}



// FUNCTION 144b9dfc0 FUN_144b9dfc0 body=37 status=ok
// SIG undefined FUN_144b9dfc0(void)

undefined8 FUN_144b9dfc0(longlong param_1,undefined8 *param_2,int param_3)

{
  if (param_3 != 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x1c8);
    return 1;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x1d0);
  return 1;
}



// FUNCTION 144b9dff0 FUN_144b9dff0 body=67 status=ok
// SIG undefined FUN_144b9dff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9dff0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  (**(code **)(*(longlong *)(param_1 + 0x488) + 0x1e8))
            (param_1,0,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1f8));
  return;
}



// FUNCTION 144b9e040 FUN_144b9e040 body=70 status=ok
// SIG undefined FUN_144b9e040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9e040(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  (**(code **)(*(longlong *)(param_1 + 0x138) + 0x1e8))
            (0,param_1,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x1f8));
  return;
}



// FUNCTION 144b9e090 FUN_144b9e090 body=82 status=ok
// SIG undefined FUN_144b9e090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b9e090(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = FUN_144b9acc0();
  }
  else {
    iVar1 = FUN_144b9acd0();
  }
  if (iVar1 < 6) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 5;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return (&DAT_149977820)[iVar1];
}



// FUNCTION 144b9e0f0 FUN_144b9e0f0 body=43 status=ok
// SIG undefined FUN_144b9e0f0(void)

undefined8 FUN_144b9e0f0(int param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_149977840)[uVar1 * 2] == param_1) {
      *param_2 = uVar1;
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 9);
  return 0;
}



// FUNCTION 144b9e120 FUN_144b9e120 body=78 status=ok
// SIG undefined FUN_144b9e120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_144b9e120(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_144ba6750();
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      if ((&DAT_149977840)[uVar2 * 2] == iVar1) {
        if (param_2 != (ulonglong *)0x0) {
          *param_2 = uVar2;
        }
        return &DAT_149977840 + uVar2 * 2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 9);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 144b9e170 FUN_144b9e170 body=21 status=ok
// SIG undefined FUN_144b9e170(void)

undefined4 * FUN_144b9e170(ulonglong param_1)

{
  if (8 < param_1) {
    return (undefined4 *)0x0;
  }
  return &DAT_149977840 + param_1 * 2;
}



// FUNCTION 144b9e190 FUN_144b9e190 body=476 status=ok
// SIG undefined FUN_144b9e190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144b9e190(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,longlong param_6
             )

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = FUN_144b9acc0();
  }
  else {
    iVar2 = FUN_144b9acd0(param_2);
  }
  if (iVar2 < 6) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 5;
  }
  iVar1 = (&DAT_149977820)[iVar2];
  if (iVar2 == 0) {
    if ((param_3 == 0x40007) && (param_4 < 0x50)) {
      return 0;
    }
  }
  else if (param_3 == 9) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      if (((param_5 < 0x301) && (1 < iVar2)) || ((param_5 < 0x302 && (2 < iVar2)))) {
        return 0;
      }
      if ((param_5 < 0x303) && (3 < iVar2)) {
        return 0;
      }
    }
    else {
      if (param_5 == 0x100) {
        param_5 = 0xff00;
      }
      if ((0xfefd < param_5) && (3 < iVar2)) {
        return 0;
      }
    }
  }
  else if (param_3 == 10) {
    if (2 < iVar2) {
      return 0;
    }
  }
  else if (param_3 == 0xf) {
    if (1 < iVar2) {
      return 0;
    }
  }
  else if (param_3 - 0x10001U < 3) {
    if (param_4 < iVar1) {
      return 0;
    }
    if ((*(byte *)(param_6 + 0x20) & 4) != 0) {
      return 0;
    }
    if ((*(uint *)(param_6 + 0x28) & 1) != 0) {
      return 0;
    }
    if ((0xa0 < iVar1) && ((*(uint *)(param_6 + 0x28) & 2) != 0)) {
      return 0;
    }
    if ((1 < iVar2) && (*(int *)(param_6 + 0x24) == 4)) {
      return 0;
    }
    if (((2 < iVar2) && (*(int *)(param_6 + 0x2c) != 0x304)) &&
       ((*(uint *)(param_6 + 0x1c) & 0x186) == 0)) {
      return 0;
    }
  }
  else if (param_4 < iVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 144b9e370 FUN_144b9e370 body=76 status=ok
// SIG undefined FUN_144b9e370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9e370(void)

{
  DAT_14c6d9920 = FUN_144ea5ab0(5,0,"SSL for verify callback",0,0,0);
  DAT_14c77f02c = (uint)(-1 < DAT_14c6d9920);
  return;
}



// FUNCTION 144b9e3c0 FUN_144b9e3c0 body=125 status=ok
// SIG undefined FUN_144b9e3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9e3c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    if (*param_1 == 0) {
      lVar2 = FUN_144babca0();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_144bb4f50(param_2);
    lVar2 = FUN_144eabba0(uVar3);
    if (lVar2 != 0) {
      iVar1 = FUN_144bac1c0(*param_1,lVar2);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_144eabc40(lVar2);
    }
  }
  return 0;
}



// FUNCTION 144b9e440 FUN_144b9e440 body=163 status=ok
// SIG undefined FUN_144b9e440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9e440(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *local_res18;
  void *local_res20;
  
  local_res20 = (void *)0x0;
  local_res18 = (void *)0x0;
  iVar2 = FUN_144eabc80(param_1,&local_res20);
  iVar3 = FUN_144eabc80(param_2,&local_res18);
  pvVar1 = local_res20;
  if ((iVar2 < 0) || (iVar3 < 0)) {
    iVar2 = -2;
  }
  else if (iVar2 == iVar3) {
    iVar2 = memcmp(local_res20,local_res18,(longlong)iVar2);
  }
  else {
    iVar2 = iVar2 - iVar3;
  }
  FUN_144ea6530(pvVar1,"ssl\\ssl_cert.c",0x24c);
  FUN_144ea6530(local_res18,"ssl\\ssl_cert.c",0x24d);
  return iVar2;
}



// FUNCTION 144b9e4f0 FUN_144b9e4f0 body=28 status=ok
// SIG undefined FUN_144b9e4f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9e4f0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_144b9e440(*param_1,*param_2);
  return;
}



// FUNCTION 144b9e510 FUN_144b9e510 body=8 status=ok
// SIG undefined FUN_144b9e510(void)

undefined * FUN_144b9e510(void)

{
  return &DAT_149977910;
}



// FUNCTION 144b9e520 FUN_144b9e520 body=8 status=ok
// SIG undefined FUN_144b9e520(void)

undefined * FUN_144b9e520(void)

{
  return &DAT_149977d70;
}



// FUNCTION 144b9e530 FUN_144b9e530 body=8 status=ok
// SIG undefined FUN_144b9e530(void)

undefined * FUN_144b9e530(void)

{
  return &DAT_1499781d0;
}



// FUNCTION 144b9e540 FUN_144b9e540 body=8 status=ok
// SIG undefined FUN_144b9e540(void)

undefined * FUN_144b9e540(void)

{
  return &DAT_1499787f0;
}



// FUNCTION 144b9e590 FUN_144b9e590 body=8 status=ok
// SIG undefined FUN_144b9e590(void)

undefined * FUN_144b9e590(void)

{
  return &DAT_149977f30;
}



// FUNCTION 144b9e5b0 FUN_144b9e5b0 body=8 status=ok
// SIG undefined FUN_144b9e5b0(void)

undefined * FUN_144b9e5b0(void)

{
  return &DAT_149977e50;
}



// FUNCTION 144b9e5e0 FUN_144b9e5e0 body=8 status=ok
// SIG undefined FUN_144b9e5e0(void)

undefined * FUN_144b9e5e0(void)

{
  return &DAT_149978b70;
}



// FUNCTION 144b9e600 FUN_144b9e600 body=8 status=ok
// SIG undefined FUN_144b9e600(void)

undefined * FUN_144b9e600(void)

{
  return &DAT_1499789b0;
}



// FUNCTION 144b9e610 FUN_144b9e610 body=8 status=ok
// SIG undefined FUN_144b9e610(void)

undefined * FUN_144b9e610(void)

{
  return &DAT_149978d30;
}



// FUNCTION 144b9e620 FUN_144b9e620 body=4 status=ok
// SIG undefined FUN_144b9e620(void)

void FUN_144b9e620(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | param_2;
  return;
}



// FUNCTION 144b9e630 FUN_144b9e630 body=6 status=ok
// SIG undefined FUN_144b9e630(void)

uint FUN_144b9e630(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x28) & param_2;
}



// FUNCTION 144b9e640 FUN_144b9e640 body=6 status=ok
// SIG undefined FUN_144b9e640(void)

void FUN_144b9e640(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & ~param_2;
  return;
}



// FUNCTION 144b9e650 FUN_144b9e650 body=344 status=ok
// SIG undefined FUN_144b9e650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144b9e650(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144b9e660;
  plVar2 = (longlong *)FUN_144ea6670(0x78,"crypto\\bio\\bio_lib.c",0x49);
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba24f0(0x20,0x6c,0x41,"crypto\\bio\\bio_lib.c",0x4c,uVar4);
    return (longlong *)0x0;
  }
  *plVar2 = param_1;
  *(undefined4 *)((longlong)plVar2 + 0x24) = 1;
  *(undefined4 *)(plVar2 + 10) = 1;
  iVar1 = FUN_144ea5c20(0xc,plVar2,plVar2 + 0xd);
  if (iVar1 != 0) {
    lVar3 = FUN_144e985a0();
    plVar2[0xe] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        iVar1 = (**(code **)(param_1 + 0x48))(plVar2);
        if (iVar1 == 0) {
          FUN_144ba24f0(0x20,0x6c,0x46,"crypto\\bio\\bio_lib.c",0x5f,uVar4);
          FUN_144ea6040(0xc,plVar2,plVar2 + 0xd);
          FUN_144e98660(plVar2[0xe]);
          goto LAB_144b9e714;
        }
      }
      if (*(longlong *)(param_1 + 0x48) == 0) {
        *(undefined4 *)(plVar2 + 4) = 1;
      }
      return plVar2;
    }
    FUN_144ba24f0(0x20,0x6c,0x41,"crypto\\bio\\bio_lib.c",0x59,uVar4);
    FUN_144ea6040(0xc,plVar2,plVar2 + 0xd);
  }
LAB_144b9e714:
  FUN_144ea6530(plVar2,"crypto\\bio\\bio_lib.c",0x6a);
  return (longlong *)0x0;
}



// FUNCTION 144b9e7b0 FUN_144b9e7b0 body=212 status=ok
// SIG undefined FUN_144b9e7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9e7b0(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  LOCK();
  plVar1 = param_1 + 10;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 < 2) {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar4 = (*(code *)param_1[1])(param_1,1,0,0,0,1);
      }
      else {
        uVar4 = (*(code *)param_1[2])(param_1,1,0,0,0,0,1,0);
      }
      if ((int)uVar4 < 1) {
        return uVar4;
      }
    }
    if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x50), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
    }
    FUN_144ea6040(0xc,param_1,param_1 + 0xd);
    FUN_144e98660(param_1[0xe]);
    FUN_144ea6530(param_1,"crypto\\bio\\bio_lib.c",0x8a);
  }
  return 1;
}



// FUNCTION 144b9e890 FUN_144b9e890 body=5 status=ok
// SIG undefined FUN_144b9e890(void)

void FUN_144b9e890(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 144b9e8a0 FUN_144b9e8a0 body=5 status=ok
// SIG undefined FUN_144b9e8a0(void)

undefined8 FUN_144b9e8a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 144b9e8b0 FUN_144b9e8b0 body=4 status=ok
// SIG undefined FUN_144b9e8b0(void)

void FUN_144b9e8b0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 144b9e8c0 FUN_144b9e8c0 body=4 status=ok
// SIG undefined FUN_144b9e8c0(void)

undefined4 FUN_144b9e8c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 144b9e8d0 FUN_144b9e8d0 body=4 status=ok
// SIG undefined FUN_144b9e8d0(void)

void FUN_144b9e8d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// FUNCTION 144b9e8e0 FUN_144b9e8e0 body=4 status=ok
// SIG undefined FUN_144b9e8e0(void)

undefined4 FUN_144b9e8e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// FUNCTION 144b9e8f0 FUN_144b9e8f0 body=22 status=ok
// SIG undefined FUN_144b9e8f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9e8f0(void)

{
  FUN_144b9e7b0();
  return;
}



// FUNCTION 144b9e910 FUN_144b9e910 body=21 status=ok
// SIG undefined FUN_144b9e910(void)

bool FUN_144b9e910(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 144b9e930 FUN_144b9e930 body=50 status=ok
// SIG undefined FUN_144b9e930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9e930(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    return 0;
  }
  iVar1 = FUN_144b9f600(param_1,param_2,(longlong)param_3,local_res20,0x144b9e93a);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}



// FUNCTION 144b9e970 FUN_144b9e970 body=520 status=ok
// SIG undefined FUN_144b9e970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144b9e970(longlong *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  undefined4 uVar6;
  
  uVar4 = (ulonglong)param_3;
  local_res8 = 0;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    uVar6 = 0x1b6;
    uVar5 = 0x79;
  }
  else {
    if (param_3 < 0) {
      FUN_144ba24f0(0x20,0x68,0x7d,"crypto\\bio\\bio_lib.c",0x1bb);
      return 0;
    }
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        if (0x7fffffff < uVar4) {
          return 0xffffffff;
        }
        uVar1 = (*(code *)param_1[1])(param_1,5,param_2,param_3,0,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])(param_1,5,param_2,uVar4,0,0,1,0);
      }
      uVar3 = (ulonglong)uVar1;
      if ((int)uVar1 < 1) goto LAB_144b9eaf0;
    }
    if ((int)param_1[4] != 0) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
      uVar3 = (longlong)iVar2;
      if (0 < iVar2) {
        uVar3 = 1;
        local_res8 = (longlong)iVar2;
      }
      iVar2 = (int)uVar3;
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          if (0x7fffffff < uVar4) {
            return 0xffffffff;
          }
          if (0 < iVar2) {
            if (0x7fffffff < local_res8) {
              return 0xffffffff;
            }
            iVar2 = (int)local_res8;
          }
          iVar2 = (*(code *)param_1[1])(param_1,0x85,param_2,param_3,0,iVar2);
          uVar3 = (longlong)iVar2;
          if (0 < iVar2) {
            uVar3 = 1;
            local_res8 = (longlong)iVar2;
          }
        }
        else {
          uVar1 = (*(code *)param_1[2])(param_1,0x85,param_2,uVar4,0,0,iVar2,&local_res8);
          uVar3 = (ulonglong)uVar1;
        }
      }
      if ((0 < (int)uVar3) && (uVar3 = local_res8 & 0xffffffff, uVar4 < local_res8)) {
        uVar3 = 0xffffffff;
      }
LAB_144b9eaf0:
      return uVar3 & 0xffffffff;
    }
    uVar6 = 0x1c6;
    uVar5 = 0x78;
  }
  FUN_144ba24f0(0x20,0x68,uVar5,"crypto\\bio\\bio_lib.c",uVar6);
  return 0xfffffffe;
}



// FUNCTION 144b9eb80 FUN_144b9eb80 body=50 status=ok
// SIG undefined FUN_144b9eb80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9eb80(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    return 0;
  }
  iVar1 = FUN_144b9f7b0(param_1,param_2,(longlong)param_3,local_res20,0x144b9eb8a);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}



// FUNCTION 144b9ebc0 FUN_144b9ebc0 body=486 status=ok
// SIG undefined FUN_144b9ebc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144b9ebc0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  undefined4 uVar3;
  
  local_res8 = 0;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x30) == 0)) {
    uVar3 = 0x189;
    uVar2 = 0x79;
  }
  else {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,4,param_2,0,0,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    if ((int)param_1[4] != 0) {
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
      if (0 < (int)uVar1) {
        local_res8 = (ulonglong)(int)uVar1;
        uVar1 = 1;
        param_1[0xc] = param_1[0xc] + local_res8;
      }
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          if (0 < (int)uVar1) {
            if (0x7fffffff < local_res8) {
              return 0xffffffff;
            }
            uVar1 = local_res8 & 0xffffffff;
          }
          uVar1 = (*(code *)param_1[1])(param_1,0x84,param_2,0,0,(int)uVar1);
          if (0 < (int)uVar1) {
            local_res8 = (ulonglong)(int)uVar1;
            uVar1 = 1;
          }
        }
        else {
          uVar1 = (*(code *)param_1[2])(param_1,0x84,param_2,0,0,0,(int)uVar1,&local_res8);
        }
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      if (0x7fffffff < local_res8) {
        FUN_144ba24f0(0x20,0x6e,0x66,"crypto\\bio\\bio_lib.c",0x1a6);
        return 0xffffffff;
      }
      return local_res8 & 0xffffffff;
    }
    uVar3 = 0x194;
    uVar2 = 0x78;
  }
  FUN_144ba24f0(0x20,0x6e,uVar2,"crypto\\bio\\bio_lib.c",uVar3);
  return 0xfffffffe;
}



// FUNCTION 144b9edb0 FUN_144b9edb0 body=520 status=ok
// SIG undefined FUN_144b9edb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9edb0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong local_res20;
  undefined4 uVar4;
  
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if (param_3 < iVar2) {
    iVar2 = param_3;
  }
  do {
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = iVar2 + -1;
    local_res20 = 0;
    if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x30) == 0))
    {
      uVar4 = 0x189;
      uVar3 = 0x79;
      goto LAB_144b9ef92;
    }
    if (((code *)param_1[1] == (code *)0x0) && (param_1[2] == 0)) {
LAB_144b9ee73:
      if ((int)param_1[4] == 0) {
        uVar4 = 0x194;
        uVar3 = 0x78;
LAB_144b9ef92:
        FUN_144ba24f0(0x20,0x6e,uVar3,"crypto\\bio\\bio_lib.c",uVar4);
        return 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&DAT_149dfc0cb);
      if (0 < iVar1) {
        local_res20 = (ulonglong)iVar1;
        iVar1 = 1;
        param_1[0xc] = param_1[0xc] + local_res20;
      }
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          if (0 < iVar1) {
            if (0x7fffffff < local_res20) {
              return 0;
            }
            iVar1 = (int)local_res20;
          }
          iVar1 = (*(code *)param_1[1])(param_1,0x84,&DAT_149dfc0cb,0,0,iVar1);
          if (0 < iVar1) {
            local_res20 = (ulonglong)iVar1;
            iVar1 = 1;
          }
        }
        else {
          iVar1 = (*(code *)param_1[2])(param_1,0x84,&DAT_149dfc0cb,0,0,0,iVar1,&local_res20);
        }
      }
      if (0 < iVar1) {
        if (0x7fffffff < local_res20) {
          uVar4 = 0x1a6;
          uVar3 = 0x66;
          goto LAB_144b9ef92;
        }
        iVar1 = (int)local_res20;
      }
    }
    else {
      if ((code *)param_1[2] == (code *)0x0) {
        iVar1 = (*(code *)param_1[1])(param_1,4,&DAT_149dfc0cb,0,0,1);
      }
      else {
        iVar1 = (*(code *)param_1[2])();
      }
      if (0 < iVar1) goto LAB_144b9ee73;
    }
    if (iVar1 != 1) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144b9efc0 FUN_144b9efc0 body=320 status=ok
// SIG undefined FUN_144b9efc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9efc0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x40) == 0)) {
    FUN_144ba24f0(0x20,0x67,0x79,"crypto\\bio\\bio_lib.c",0x206);
    uVar1 = 0xfffffffe;
  }
  else {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,6,param_4,param_2,param_3,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,0x86,param_4,param_2,param_3,(int)uVar1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
    }
  }
  return uVar1;
}



// FUNCTION 144b9f100 FUN_144b9f100 body=330 status=ok
// SIG undefined FUN_144b9f100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9f100(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  local_res18[0] = param_3;
  if (((*param_1 != 0) && (*(longlong *)(*param_1 + 0x58) != 0)) && (param_2 == 0xe)) {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,6,local_res18,0xe,0,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,0xe,local_res18[0]);
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,0x86,local_res18,0xe,0,(int)uVar1);
        return uVar1;
      }
      uVar1 = (*(code *)param_1[2])();
    }
    return uVar1;
  }
  FUN_144ba24f0(0x20,0x83,0x79,"crypto\\bio\\bio_lib.c",0x222);
  return 0xfffffffe;
}



// FUNCTION 144b9f250 FUN_144b9f250 body=33 status=ok
// SIG undefined FUN_144b9f250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9f250(void)

{
  FUN_144b9efc0();
  return;
}



// FUNCTION 144b9f280 FUN_144b9f280 body=96 status=ok
// SIG undefined FUN_144b9f280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144b9f280(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    lVar2 = param_1;
    while (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x40);
      lVar1 = *(longlong *)(lVar2 + 0x40);
    }
    *(longlong *)(lVar2 + 0x40) = param_2;
    if (param_2 != 0) {
      *(longlong *)(param_2 + 0x48) = lVar2;
    }
    FUN_144b9efc0(param_1,6);
    return param_1;
  }
  return param_2;
}



// FUNCTION 144b9f2e0 FUN_144b9f2e0 body=113 status=ok
// SIG undefined FUN_144b9f2e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9f2e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  FUN_144b9efc0(param_1,7,0,param_1);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x40) = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48) = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return uVar1;
}



// FUNCTION 144b9f360 FUN_144b9f360 body=262 status=ok
// SIG undefined FUN_144b9f360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9f360(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  do {
    if (param_1 == (longlong *)0x0) {
      return;
    }
    lVar4 = param_1[10];
    plVar1 = param_1 + 10;
    plVar2 = (longlong *)param_1[8];
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 < 2) {
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          iVar6 = (*(code *)param_1[1])();
        }
        else {
          iVar6 = (*(code *)param_1[2])();
        }
        if (iVar6 < 1) goto LAB_144b9f443;
      }
      if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x50), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1);
      }
      FUN_144ea6040(0xc,param_1,param_1 + 0xd);
      FUN_144e98660(param_1[0xe]);
      FUN_144ea6530(param_1,"crypto\\bio\\bio_lib.c");
    }
LAB_144b9f443:
    param_1 = plVar2;
    if (1 < (int)lVar4) {
      return;
    }
  } while( true );
}



// FUNCTION 144b9f470 FUN_144b9f470 body=46 status=ok
// SIG undefined FUN_144b9f470(void)

undefined8 * FUN_144b9f470(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if ((uint *)*param_1 != (uint *)0x0) {
      uVar1 = *(uint *)*param_1;
      if ((char)param_2 == '\0') {
        if ((param_2 & uVar1) != 0) {
          return param_1;
        }
      }
      else if (uVar1 == param_2) {
        return param_1;
      }
    }
    param_1 = (undefined8 *)param_1[8];
  } while( true );
}



// FUNCTION 144b9f4a0 FUN_144b9f4a0 body=13 status=ok
// SIG undefined FUN_144b9f4a0(void)

undefined8 FUN_144b9f4a0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 144b9f4b0 FUN_144b9f4b0 body=4 status=ok
// SIG undefined FUN_144b9f4b0(void)

undefined4 FUN_144b9f4b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// FUNCTION 144b9f4c0 FUN_144b9f4c0 body=20 status=ok
// SIG undefined FUN_144b9f4c0(void)

void FUN_144b9f4c0(longlong param_1)

{
  *(uint *)(param_1 + 0x28) =
       *(uint *)(param_1 + 0x28) | *(uint *)(*(longlong *)(param_1 + 0x40) + 0x28) & 0xf;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x2c);
  return;
}



// FUNCTION 144b9f4e0 FUN_144b9f4e0 body=69 status=ok
// SIG undefined FUN_144b9f4e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9f4e0(void)

{
  FUN_144ece440();
  FUN_144e98660(DAT_14c796b78);
  DAT_14c796b78 = 0;
  FUN_144e98660(DAT_14c797388);
  DAT_14c797388 = 0;
  return;
}



// FUNCTION 144b9f530 FUN_144b9f530 body=207 status=ok
// SIG undefined FUN_144b9f530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144b9f530(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5,
             undefined8 param_6,int param_7,ulonglong *param_8)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144b9f54f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x10))();
    return uVar1;
  }
  uVar2 = param_2 & 0xffffff7f;
  if ((((uVar2 - 2 & 0xfffffffc) == 0) && (uVar2 != 4)) && (0x7fffffff < param_4)) {
    return 0xffffffff;
  }
  if (((0 < param_7) && ((char)param_2 < '\0')) && ((uVar2 != 6 && (0x7fffffff < *param_8)))) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(param_1 + 8))();
  if (((0 < (int)uVar1) && ((char)param_2 < '\0')) && (uVar2 != 6)) {
    *param_8 = (longlong)(int)uVar1;
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144b9f600 FUN_144b9f600 body=425 status=ok
// SIG undefined FUN_144b9f600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9f600(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x20) == 0)) {
    FUN_144ba24f0(0x20,0x78,0x79,"crypto\\bio\\bio_lib.c",0x100);
    return 0xfffffffe;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < param_3) {
        return 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,2,param_2,param_3 & 0xffffffff,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,2,param_2,param_3,0,0,1,0);
    }
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  if ((int)param_1[4] == 0) {
    FUN_144ba24f0(0x20,0x78,0x78,"crypto\\bio\\bio_lib.c",0x10a);
    return 0xfffffffe;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
  if (0 < (int)uVar1) {
    param_1[0xb] = param_1[0xb] + *param_4;
  }
  if ((param_1[1] != 0) || (param_1[2] != 0)) {
    uVar1 = FUN_144b9f530(param_1,0x82,param_2,param_3,0,0,(int)uVar1,param_4);
  }
  if (0 < (int)uVar1) {
    if (param_3 < *param_4) {
      FUN_144ba24f0(0x20,0x78,0x44,"crypto\\bio\\bio_lib.c",0x119);
      return 0xffffffff;
    }
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 144b9f7b0 FUN_144b9f7b0 body=382 status=ok
// SIG undefined FUN_144b9f7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9f7b0(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    FUN_144ba24f0(0x20,0x80,0x79,"crypto\\bio\\bio_lib.c",0x149);
    uVar1 = 0xfffffffe;
  }
  else {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        if (0x7fffffff < param_3) {
          return 0xffffffff;
        }
        uVar1 = (*(code *)param_1[1])(param_1,3,param_2,param_3 & 0xffffffff,0,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])(param_1,3,param_2,param_3,0,0,1,0);
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    if ((int)param_1[4] == 0) {
      FUN_144ba24f0(0x20,0x80,0x78,"crypto\\bio\\bio_lib.c",0x153);
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
      if (0 < (int)uVar1) {
        param_1[0xc] = param_1[0xc] + *param_4;
      }
      if ((param_1[1] != 0) || (param_1[2] != 0)) {
        uVar1 = FUN_144b9f530(param_1,0x83,param_2,param_3,0,0,(int)uVar1,param_4);
      }
    }
  }
  return uVar1;
}



// FUNCTION 144b9f930 FUN_144b9f930 body=254 status=ok
// SIG undefined FUN_144b9f930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9f930(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  iVar6 = -1;
  if (param_2 == (void *)0x0) {
    FUN_144ba24f0(0x20,0x75,0x73,"crypto\\bio\\bss_mem.c",0xe0,0x144b9f948);
  }
  else if ((*(uint *)(param_1 + 0x28) & 0x200) == 0) {
    FUN_144b9e640(param_1,0xf);
    if (param_3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar1 = *(int *)plVar2[1];
      FUN_144ba00a0(param_1);
      lVar7 = FUN_144ea7230(*plVar2,(longlong)(iVar1 + param_3));
      if (lVar7 != 0) {
        memcpy((void *)((longlong)iVar1 + *(longlong *)(*plVar2 + 8)),param_2,(longlong)param_3);
        puVar3 = (undefined8 *)*plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        uVar5 = puVar3[1];
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        uVar5 = puVar3[3];
        puVar4[2] = puVar3[2];
        puVar4[3] = uVar5;
        iVar6 = param_3;
      }
    }
  }
  else {
    FUN_144ba24f0(0x20,0x75,0x7e,"crypto\\bio\\bss_mem.c",0xe4,0x144b9f948);
    iVar6 = -1;
  }
  return iVar6;
}



// FUNCTION 144b9fa30 FUN_144b9fa30 body=182 status=ok
// SIG undefined FUN_144b9fa30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9fa30(longlong param_1,void *param_2,int param_3)

{
  size_t _Size;
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(*(undefined8 **)(param_1 + 0x38))[1];
  if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
    puVar1 = (ulonglong *)**(undefined8 **)(param_1 + 0x38);
  }
  FUN_144b9e640(param_1,0xf);
  if ((-1 < param_3) && (*puVar1 < (ulonglong)(longlong)param_3)) {
    param_3 = (int)*puVar1;
  }
  if ((param_2 == (void *)0x0) || (param_3 < 1)) {
    if ((*puVar1 == 0) && (param_3 = *(int *)(param_1 + 0x30), param_3 != 0)) {
      FUN_144b9e620(param_1,9);
    }
  }
  else {
    _Size = (size_t)param_3;
    memcpy(param_2,(void *)puVar1[1],_Size);
    *puVar1 = *puVar1 - _Size;
    puVar1[2] = puVar1[2] - _Size;
    puVar1[1] = puVar1[1] + _Size;
  }
  return param_3;
}



// FUNCTION 144b9faf0 FUN_144b9faf0 body=66 status=ok
// SIG undefined FUN_144b9faf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9faf0(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  cVar1 = *param_2;
  pcVar2 = param_2;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  FUN_144b9f930(param_1,param_2,uVar3 & 0x7fffffff);
  return;
}



// FUNCTION 144b9fb40 FUN_144b9fb40 body=277 status=ok
// SIG undefined FUN_144b9fb40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144b9fb40(longlong param_1,undefined1 *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  size_t _Size;
  ulonglong *puVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(undefined8 **)(param_1 + 0x38))[1];
  if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
    piVar5 = (int *)**(undefined8 **)(param_1 + 0x38);
  }
  FUN_144b9e640(param_1,0xf);
  iVar3 = *piVar5;
  if (param_3 + -1 < *piVar5) {
    iVar3 = param_3 + -1;
  }
  if (iVar3 < 1) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = uVar2;
    if (0 < (longlong)iVar3) {
      do {
        uVar1 = (ulonglong)((int)uVar1 + 1);
        if (*(char *)(uVar2 + *(longlong *)(piVar5 + 2)) == '\n') break;
        uVar2 = uVar2 + 1;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
    puVar4 = (ulonglong *)(*(undefined8 **)(param_1 + 0x38))[1];
    if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
      puVar4 = (ulonglong *)**(undefined8 **)(param_1 + 0x38);
    }
    FUN_144b9e640(param_1,0xf);
    if ((-1 < (int)uVar1) && (*puVar4 < (ulonglong)(longlong)(int)uVar1)) {
      uVar1 = (ulonglong)(uint)*puVar4;
    }
    if ((param_2 == (undefined1 *)0x0) || ((int)uVar1 < 1)) {
      if (*puVar4 == 0) {
        uVar1 = (ulonglong)*(uint *)(param_1 + 0x30);
        if (*(uint *)(param_1 + 0x30) == 0) {
          return 0;
        }
        FUN_144b9e620(param_1,9);
      }
    }
    else {
      _Size = (size_t)(int)uVar1;
      memcpy(param_2,(void *)puVar4[1],_Size);
      *puVar4 = *puVar4 - _Size;
      puVar4[2] = puVar4[2] - _Size;
      puVar4[1] = puVar4[1] + _Size;
    }
    if (0 < (int)uVar1) {
      param_2[(int)uVar1] = 0;
    }
  }
  return uVar1;
}



// FUNCTION 144b9fc60 FUN_144b9fc60 body=351 status=ok
// SIG undefined FUN_144b9fc60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144b9fc60(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  
  uVar8 = 1;
  uVar7 = 1;
  plVar1 = *(longlong **)(param_1 + 0x38);
  uVar9 = *(uint *)(param_1 + 0x28) & 0x200;
  if (uVar9 == 0) {
    puVar10 = (uint *)plVar1[1];
  }
  else {
    puVar10 = (uint *)*plVar1;
  }
  switch(param_2) {
  case 1:
    puVar2 = (undefined8 *)*plVar1;
    uVar8 = uVar7;
    if ((void *)puVar2[1] != (void *)0x0) {
      if (uVar9 == 0) {
        if ((*(uint *)(param_1 + 0x28) >> 10 & 1) == 0) {
          memset((void *)puVar2[1],0,puVar2[2]);
          *puVar2 = 0;
        }
        puVar2 = (undefined8 *)*plVar1;
        puVar3 = (undefined8 *)plVar1[1];
        uVar5 = puVar2[1];
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        uVar5 = puVar2[3];
        puVar3[2] = puVar2[2];
        puVar3[3] = uVar5;
      }
      else {
        puVar3 = (undefined8 *)plVar1[1];
        uVar5 = puVar3[1];
        *puVar2 = *puVar3;
        puVar2[1] = uVar5;
        uVar5 = puVar3[3];
        puVar2[2] = puVar3[2];
        puVar2[3] = uVar5;
      }
    }
    break;
  case 2:
    uVar8 = (uint)(*(longlong *)puVar10 == 0);
    break;
  case 3:
    uVar8 = *puVar10;
    if (param_4 != (longlong *)0x0) {
      *param_4 = *(longlong *)(puVar10 + 2);
    }
    break;
  default:
    uVar8 = 0;
    break;
  case 8:
    uVar8 = *(uint *)(param_1 + 0x24);
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x24) = param_3;
    uVar8 = uVar7;
    break;
  case 10:
    uVar8 = *puVar10;
    break;
  case 0xb:
  case 0xc:
    break;
  case 0x72:
    FUN_144ba0040(param_1);
    *(undefined4 *)(param_1 + 0x24) = param_3;
    plVar4 = (longlong *)plVar1[1];
    *plVar1 = (longlong)param_4;
    lVar6 = param_4[1];
    *plVar4 = *param_4;
    plVar4[1] = lVar6;
    lVar6 = param_4[3];
    plVar4[2] = param_4[2];
    plVar4[3] = lVar6;
    uVar8 = uVar7;
    break;
  case 0x73:
    if (param_4 != (longlong *)0x0) {
      if (uVar9 == 0) {
        FUN_144ba00a0(param_1);
      }
      *param_4 = *plVar1;
    }
    break;
  case 0x82:
    *(undefined4 *)(param_1 + 0x30) = param_3;
  }
  return uVar8;
}



// FUNCTION 144b9fe80 FUN_144b9fe80 body=24 status=ok
// SIG undefined FUN_144b9fe80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9fe80(undefined8 param_1)

{
  FUN_144ba0120(param_1,0);
  return;
}



// FUNCTION 144b9fea0 FUN_144b9fea0 body=25 status=ok
// SIG undefined FUN_144b9fea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9fea0(undefined8 param_1)

{
  FUN_144ba0120(param_1,1);
  return;
}



// FUNCTION 144b9fec0 FUN_144b9fec0 body=137 status=ok
// SIG undefined FUN_144b9fec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9fec0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar1 != (longlong *)0x0)) {
    lVar2 = *plVar1;
    if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    FUN_144ea7070(lVar2);
  }
  FUN_144ea6530(plVar1[1],"crypto\\bio\\bss_mem.c",0x9c);
  FUN_144ea6530(plVar1,"crypto\\bio\\bss_mem.c",0x9d);
  return 1;
}



// FUNCTION 144b9ff50 FUN_144b9ff50 body=8 status=ok
// SIG undefined FUN_144b9ff50(void)

undefined * FUN_144b9ff50(void)

{
  return &DAT_149978f10;
}



// FUNCTION 144b9ff60 FUN_144b9ff60 body=8 status=ok
// SIG undefined FUN_144b9ff60(void)

undefined * FUN_144b9ff60(void)

{
  return &DAT_149978f70;
}



// FUNCTION 144b9ff70 FUN_144b9ff70 body=206 status=ok
// SIG undefined FUN_144b9ff70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144b9ff70(char *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  
  if (param_1 == (char *)0x0) {
    FUN_144ba24f0(0x20,0x7e,0x73,"crypto\\bio\\bss_mem.c",0x5e,0x144b9ff7c);
    return 0;
  }
  if (param_2 < 0) {
    cVar1 = *param_1;
    pcVar9 = param_1;
    for (uVar7 = 0; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    uVar10 = (ulonglong)(uVar7 & 0x7fffffff);
  }
  else {
    uVar10 = (ulonglong)param_2;
  }
  lVar8 = FUN_144b9e650(&DAT_149978f10);
  if (lVar8 != 0) {
    plVar2 = *(longlong **)(lVar8 + 0x38);
    puVar3 = (ulonglong *)*plVar2;
    *puVar3 = uVar10;
    puVar3[2] = uVar10;
    puVar3[1] = (ulonglong)param_1;
    puVar4 = (undefined8 *)*plVar2;
    puVar5 = (undefined8 *)plVar2[1];
    uVar6 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar6;
    uVar6 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar6;
    *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) | 0x200;
    *(undefined4 *)(lVar8 + 0x30) = 0;
    return lVar8;
  }
  return 0;
}



// FUNCTION 144ba0040 FUN_144ba0040 body=84 status=ok
// SIG undefined FUN_144ba0040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba0040(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) {
    lVar1 = **(longlong **)(param_1 + 0x38);
    if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    FUN_144ea7070(lVar1);
  }
  return 1;
}



// FUNCTION 144ba00a0 FUN_144ba00a0 body=114 status=ok
// SIG undefined FUN_144ba00a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba00a0(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      _Src = (void *)((size_t *)plVar1[1])[1];
      if (_Src != *(void **)(*plVar1 + 8)) {
        memmove(*(void **)(*plVar1 + 8),_Src,*(size_t *)plVar1[1]);
        *(undefined8 *)*plVar1 = *(undefined8 *)plVar1[1];
        *(undefined8 *)(plVar1[1] + 8) = *(undefined8 *)(*plVar1 + 8);
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 144ba0120 FUN_144ba0120 body=245 status=ok
// SIG undefined FUN_144ba0120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba0120(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar3 = (longlong *)FUN_144ea6670(0x10,"crypto\\bio\\bss_mem.c",0x73);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_144ea7010(param_2);
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)FUN_144ea6670(0x20,"crypto\\bio\\bss_mem.c");
      plVar3[1] = (longlong)puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        FUN_144ea7070(*plVar3);
        FUN_144ea6530(plVar3,"crypto\\bio\\bss_mem.c",0x7d);
        return 0;
      }
      puVar1 = (undefined8 *)*plVar3;
      uVar2 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      uVar2 = puVar1[3];
      puVar5[2] = puVar1[2];
      puVar5[3] = uVar2;
      *(longlong **)(param_1 + 0x38) = plVar3;
      *(undefined4 *)(param_1 + 0x24) = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return 1;
    }
    FUN_144ea6530(plVar3,"crypto\\bio\\bss_mem.c",0x78);
  }
  return 0;
}



// FUNCTION 144ba0220 FUN_144ba0220 body=4 status=ok
// SIG undefined FUN_144ba0220(void)

void FUN_144ba0220(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return;
}



// FUNCTION 144ba0230 FUN_144ba0230 body=6 status=ok
// SIG undefined FUN_144ba0230(void)

uint FUN_144ba0230(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x14) & param_2;
}



// FUNCTION 144ba0240 FUN_144ba0240 body=48 status=ok
// SIG undefined FUN_144ba0240(void)

void FUN_144ba0240(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(uint *)((longlong)param_1 + 0x14) =
       *(uint *)((longlong)param_2 + 0x14) & 0xfffffffe | *(uint *)((longlong)param_1 + 0x14) & 1 |
       param_3 | 2;
  return;
}



// FUNCTION 144ba0270 FUN_144ba0270 body=78 status=ok
// SIG undefined FUN_144ba0270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba0270(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea64e0(0x18,"crypto\\bn\\bn_lib.c",0x3b5);
  if (lVar1 == 0) {
    FUN_144ba24f0(3,0x8f,0x41,"crypto\\bn\\bn_lib.c",0x3b6);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144ba02c0 FUN_144ba02c0 body=41 status=ok
// SIG undefined FUN_144ba02c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba02c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    FUN_144ea6530(param_1,"crypto\\bn\\bn_lib.c",0x3c1,param_4,0x144ba02cf);
  }
  return;
}



// FUNCTION 144ba02f0 FUN_144ba02f0 body=15 status=ok
// SIG undefined FUN_144ba02f0(void)

void FUN_144ba02f0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}



// FUNCTION 144ba0300 FUN_144ba0300 body=5 status=ok
// SIG undefined FUN_144ba0300(void)

undefined8 FUN_144ba0300(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 144ba0310 FUN_144ba0310 body=37 status=ok
// SIG undefined FUN_144ba0310(void)

undefined8 FUN_144ba0310(undefined8 *param_1,longlong param_2)

{
  if (((*(int *)(param_1 + 1) != 1) || (*(longlong *)*param_1 != param_2)) &&
     ((param_2 != 0 || (*(int *)(param_1 + 1) != 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 144ba0340 FUN_144ba0340 body=9 status=ok
// SIG undefined FUN_144ba0340(void)

bool FUN_144ba0340(longlong param_1)

{
  return *(int *)(param_1 + 8) == 0;
}



// FUNCTION 144ba0350 FUN_144ba0350 body=30 status=ok
// SIG undefined FUN_144ba0350(void)

undefined8 FUN_144ba0350(undefined8 *param_1)

{
  if (((*(int *)(param_1 + 1) == 1) && (*(longlong *)*param_1 == 1)) && (*(int *)(param_1 + 2) == 0)
     ) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ba0370 FUN_144ba0370 body=48 status=ok
// SIG undefined FUN_144ba0370(void)

undefined8 FUN_144ba0370(undefined8 *param_1,longlong param_2)

{
  if ((((*(int *)(param_1 + 1) == 1) && (*(longlong *)*param_1 == param_2)) ||
      ((param_2 == 0 && (*(int *)(param_1 + 1) == 0)))) &&
     ((param_2 == 0 || (*(int *)(param_1 + 2) == 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ba03a0 FUN_144ba03a0 body=23 status=ok
// SIG undefined FUN_144ba03a0(void)

undefined8 FUN_144ba03a0(undefined8 *param_1)

{
  if ((0 < *(int *)(param_1 + 1)) && ((*(byte *)*param_1 & 1) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ba03c0 FUN_144ba03c0 body=8 status=ok
// SIG undefined FUN_144ba03c0(void)

undefined ** FUN_144ba03c0(void)

{
  return &PTR_DAT_149979018;
}



// FUNCTION 144ba03d0 FUN_144ba03d0 body=73 status=ok
// SIG undefined FUN_144ba03d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ba03d0(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1] + -1;
  if ((*(byte *)((longlong)param_1 + 0x14) & 4) != 0) {
    uVar2 = FUN_144ba1510();
    return uVar2;
  }
  if ((int)param_1[1] == 0) {
    return 0;
  }
  iVar1 = FUN_144ba0420(*(undefined8 *)(*param_1 + (longlong)iVar3 * 8));
  return (ulonglong)(uint)(iVar1 + iVar3 * 0x40);
}



// FUNCTION 144ba0420 FUN_144ba0420 body=214 status=ok
// SIG undefined FUN_144ba0420(void)

int FUN_144ba0420(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = -(param_1 >> 0x20);
  uVar6 = param_1 ^ (param_1 >> 0x20 ^ param_1) & lVar5 >> 0x3f;
  lVar2 = -(uVar6 >> 0x10);
  uVar6 = uVar6 ^ (uVar6 >> 0x10 ^ uVar6) & lVar2 >> 0x3f;
  lVar3 = -(uVar6 >> 8);
  uVar6 = uVar6 ^ (uVar6 >> 8 ^ uVar6) & lVar3 >> 0x3f;
  lVar4 = -(uVar6 >> 4);
  uVar6 = uVar6 ^ (uVar6 >> 4 ^ uVar6) & lVar4 >> 0x3f;
  lVar1 = -(uVar6 >> 2);
  return ((uint)(lVar1 >> 0x3f) & 2) +
         ((uint)((longlong)-(((uVar6 >> 2 ^ uVar6) & lVar1 >> 0x3f ^ uVar6) >> 1) >> 0x3f) & 1) +
         (uint)(param_1 != 0) + ((uint)(lVar5 >> 0x3f) & 0x20) + ((uint)(lVar2 >> 0x3f) & 0x10) +
         ((uint)(lVar3 >> 0x3f) & 8) + ((uint)(lVar4 >> 0x3f) & 4);
}



// FUNCTION 144ba0500 FUN_144ba0500 body=102 status=ok
// SIG undefined FUN_144ba0500(void)

int FUN_144ba0500(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e00) {
      if (param_1 < 0xc00) {
        if (param_1 < 0x800) {
          if (param_1 < 0x400) {
            return 0;
          }
          iVar1 = 0x50;
        }
        else {
          iVar1 = 0x70;
        }
      }
      else {
        iVar1 = 0x80;
      }
    }
    else {
      iVar1 = 0xc0;
    }
  }
  else {
    iVar1 = 0x100;
  }
  if (param_2 != -1) {
    param_2 = param_2 / 2;
    if (param_2 < 0x50) {
      return 0;
    }
    if (iVar1 <= param_2) {
      param_2 = iVar1;
    }
    return param_2;
  }
  return iVar1;
}



// FUNCTION 144ba0570 FUN_144ba0570 body=88 status=ok
// SIG undefined FUN_144ba0570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba0570(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0x18,"crypto\\bn\\bn_lib.c",0xf6);
  if (lVar1 == 0) {
    FUN_144ba24f0(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 1;
  return lVar1;
}



// FUNCTION 144ba05d0 FUN_144ba05d0 body=88 status=ok
// SIG undefined FUN_144ba05d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba05d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0x18,"crypto\\bn\\bn_lib.c",0xf6);
  if (lVar1 == 0) {
    FUN_144ba24f0(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 9;
  return lVar1;
}



// FUNCTION 144ba0630 FUN_144ba0630 body=126 status=ok
// SIG undefined FUN_144ba0630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba0630(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0)) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
        FUN_144ea66f0(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,
                      "crypto\\bn\\bn_lib.c",0xce);
      }
      else {
        FUN_144ea6f60();
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
      FUN_14259f0c0(param_1,0x18);
      FUN_144ea6530(param_1,"crypto\\bn\\bn_lib.c",0xdc);
    }
  }
  return;
}



// FUNCTION 144ba06b0 FUN_144ba06b0 body=142 status=ok
// SIG undefined FUN_144ba06b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144ba06b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  if ((*(byte *)((longlong)param_2 + 0x14) & 4) == 0) {
    iVar2 = *(int *)(param_2 + 1);
  }
  else {
    iVar2 = *(int *)((longlong)param_2 + 0xc);
  }
  if (param_1 != param_2) {
    puVar1 = param_1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      puVar1 = (undefined8 *)FUN_144ba12c0(param_1,iVar2);
    }
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (0 < *(int *)(param_2 + 1)) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)iVar2 << 3);
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  return param_1;
}



// FUNCTION 144ba0740 FUN_144ba0740 body=380 status=ok
// SIG undefined FUN_144ba0740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ba0740(byte *param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar10 = 0x144ba0753;
  plVar2 = (longlong *)0x0;
  if (param_3 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_144ea6670(0x18,"crypto\\bn\\bn_lib.c",0xf6);
    if (plVar2 == (longlong *)0x0) {
      FUN_144ba24f0(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7,uVar10);
      return (longlong *)0x0;
    }
    *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
    param_3 = plVar2;
  }
  for (; (0 < param_2 && (*param_1 == 0)); param_1 = param_1 + 1) {
    param_2 = param_2 + -1;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  uVar8 = param_2 - 1U & 7;
  uVar6 = (param_2 - 1U >> 3) + 1;
  uVar5 = (ulonglong)uVar6;
  plVar3 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) < (int)uVar6) {
    plVar3 = (longlong *)FUN_144ba12c0(param_3);
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_144ba0cd0(plVar2);
    param_3 = (longlong *)0x0;
  }
  else {
    *(uint *)(param_3 + 1) = uVar6;
    uVar4 = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
      bVar9 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      if (bVar9) {
        uVar5 = (ulonglong)((int)uVar5 - 1);
        *(ulonglong *)(*param_3 + uVar5 * 8) = uVar4;
        uVar4 = 0;
        uVar8 = 7;
      }
    } while (param_2 != 0);
    uVar5 = (ulonglong)(int)param_3[1];
    if (0 < (int)param_3[1]) {
      lVar7 = *param_3 + uVar5 * 8;
      do {
        uVar8 = (uint)uVar5;
        plVar2 = (longlong *)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        if (*plVar2 != 0) break;
        uVar8 = uVar8 - 1;
        uVar5 = (ulonglong)uVar8;
      } while (0 < (int)uVar8);
      *(uint *)(param_3 + 1) = uVar8;
    }
    if ((int)param_3[1] == 0) {
      *(undefined4 *)(param_3 + 2) = 0;
    }
  }
  return param_3;
}



// FUNCTION 144ba08c0 FUN_144ba08c0 body=271 status=ok
// SIG undefined FUN_144ba08c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ba08c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  iVar2 = (int)param_1[1];
  uVar5 = 0;
  if ((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) {
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_144ba0420(*(undefined8 *)(*param_1 + (longlong)(iVar2 + -1) * 8));
      iVar4 = iVar4 + (iVar2 + -1) * 0x40;
    }
  }
  else {
    iVar4 = FUN_144ba1510();
  }
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  iVar4 = (int)(iVar4 + 7 + (iVar4 + 7 >> 0x1f & 7U)) >> 3;
  uVar6 = (ulonglong)iVar4;
  if ((uVar3 & 0x1fffffff) == 0) {
    FUN_14259f0c0(param_2,uVar6);
    return iVar4;
  }
  pbVar8 = (byte *)(uVar6 + param_2);
  if (iVar4 != 0) {
    uVar7 = uVar5;
    do {
      lVar1 = uVar7 - (longlong)(iVar2 * 8);
      pbVar8 = pbVar8 + -1;
      uVar7 = uVar7 + 1;
      *pbVar8 = (byte)(*(ulonglong *)(*param_1 + (uVar5 & 0xfffffffffffffff8)) >>
                      (((byte)uVar5 & 7) << 3)) & (byte)(lVar1 >> 0x3f);
      uVar5 = uVar5 - ((longlong)(uVar5 - ((longlong)(int)(uVar3 << 3) + -1)) >> 0x3f);
    } while (uVar7 < uVar6);
  }
  return iVar4;
}



// FUNCTION 144ba09d0 FUN_144ba09d0 body=38 status=ok
// SIG undefined FUN_144ba09d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba09d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_144ba16c0();
  return uVar1;
}



// FUNCTION 144ba0a00 FUN_144ba0a00 body=380 status=ok
// SIG undefined FUN_144ba0a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ba0a00(longlong param_1,int param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 uVar11;
  
  uVar11 = 0x144ba0a13;
  uVar5 = (ulonglong)param_2;
  plVar9 = (longlong *)0x0;
  if (param_3 == (longlong *)0x0) {
    param_3 = (longlong *)FUN_144ea6670(0x18,"crypto\\bn\\bn_lib.c",0xf6);
    if (param_3 == (longlong *)0x0) {
      FUN_144ba24f0(3,0x71,0x41,"crypto\\bn\\bn_lib.c",0xf7,uVar11);
      return (longlong *)0x0;
    }
    *(undefined4 *)((longlong)param_3 + 0x14) = 1;
    plVar9 = param_3;
  }
  param_1 = param_1 + uVar5;
  if (0 < param_2) {
    do {
      if (*(char *)(param_1 + -1) != '\0') break;
      param_1 = param_1 + -1;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
    } while (0 < (int)uVar4);
    param_2 = (int)uVar5;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  uVar8 = (int)uVar5 - 1;
  uVar4 = uVar8 & 7;
  uVar8 = (uVar8 >> 3) + 1;
  uVar6 = (ulonglong)uVar8;
  plVar2 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) < (int)uVar8) {
    plVar2 = (longlong *)FUN_144ba12c0(param_3);
  }
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba0cd0(plVar9);
    param_3 = (longlong *)0x0;
  }
  else {
    *(uint *)(param_3 + 1) = uVar8;
    uVar3 = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    do {
      pbVar1 = (byte *)(param_1 + -1);
      param_1 = param_1 + -1;
      uVar8 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar8;
      uVar3 = uVar3 << 8 | (ulonglong)*pbVar1;
      bVar10 = uVar4 == 0;
      uVar4 = uVar4 - 1;
      if (bVar10) {
        uVar6 = (ulonglong)((int)uVar6 - 1);
        *(ulonglong *)(*param_3 + uVar6 * 8) = uVar3;
        uVar3 = 0;
        uVar4 = 7;
      }
    } while (uVar8 != 0);
    uVar5 = (ulonglong)(int)param_3[1];
    if (0 < (int)param_3[1]) {
      lVar7 = *param_3 + uVar5 * 8;
      do {
        uVar4 = (uint)uVar5;
        plVar9 = (longlong *)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        if (*plVar9 != 0) break;
        uVar4 = uVar4 - 1;
        uVar5 = (ulonglong)uVar4;
      } while (0 < (int)uVar4);
      *(uint *)(param_3 + 1) = uVar4;
    }
    if ((int)param_3[1] == 0) {
      *(undefined4 *)(param_3 + 2) = 0;
    }
  }
  return param_3;
}



// FUNCTION 144ba0b80 FUN_144ba0b80 body=26 status=ok
// SIG undefined FUN_144ba0b80(void)

void FUN_144ba0b80(longlong param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 144ba0ba0 FUN_144ba0ba0 body=9 status=ok
// SIG undefined FUN_144ba0ba0(void)

bool FUN_144ba0ba0(longlong param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}



// FUNCTION 144ba0bb0 FUN_144ba0bb0 body=98 status=ok
// SIG undefined FUN_144ba0bb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba0bb0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (*(int *)((longlong)param_1 + 0xc) < 1) {
    puVar1 = (undefined8 *)FUN_144ba12c0();
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(longlong *)*param_1 = param_2;
    *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
    return 1;
  }
  return 0;
}



// FUNCTION 144ba0c20 FUN_144ba0c20 body=25 status=ok
// SIG undefined FUN_144ba0c20(void)

undefined8 FUN_144ba0c20(undefined8 *param_1)

{
  if (1 < *(int *)(param_1 + 1)) {
    return 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 1) == 1) {
    return *(undefined8 *)*param_1;
  }
  return 0;
}



// FUNCTION 144ba0c40 FUN_144ba0c40 body=132 status=ok
// SIG undefined FUN_144ba0c40(void)

uint FUN_144ba0c40(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_1 == (longlong *)0x0) {
    uVar4 = (uint)(param_2 != (longlong *)0x0);
  }
  else {
    uVar4 = 0xffffffff;
    if (param_2 != (longlong *)0x0) {
      iVar1 = (int)param_1[2];
      if (iVar1 == (int)param_2[2]) {
        uVar4 = 0xffffffff;
        if (iVar1 != 0) {
          uVar4 = 1;
        }
        uVar7 = 1;
        if (iVar1 != 0) {
          uVar7 = 0xffffffff;
        }
        iVar1 = (int)param_1[1];
        if (iVar1 <= (int)param_2[1]) {
          if (iVar1 < (int)param_2[1]) {
            return uVar4;
          }
          if (-1 < iVar1 + -1) {
            lVar6 = (longlong)(iVar1 + -1);
            puVar5 = (ulonglong *)(*param_2 + lVar6 * 8);
            do {
              uVar2 = *(ulonglong *)((*param_1 - *param_2) + (longlong)puVar5);
              uVar3 = *puVar5;
              if (uVar2 >= uVar3 && uVar2 != uVar3) {
                return uVar7;
              }
              if (uVar2 < uVar3) {
                return uVar4;
              }
              puVar5 = puVar5 + -1;
              lVar6 = lVar6 + -1;
            } while (-1 < lVar6);
          }
          return 0;
        }
      }
      else {
        uVar7 = 1;
        if (iVar1 != 0) {
          uVar7 = 0xffffffff;
        }
      }
      return uVar7;
    }
  }
  return uVar4;
}



// FUNCTION 144ba0cd0 FUN_144ba0cd0 body=118 status=ok
// SIG undefined FUN_144ba0cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba0cd0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
        FUN_144ea6530(*param_1,"crypto\\bn\\bn_lib.c",0xd0);
      }
      else {
        FUN_144ea6f60(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,
                      "crypto\\bn\\bn_lib.c",0xcc);
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0) {
      FUN_144ea6530(param_1,"crypto\\bn\\bn_lib.c",0xe7);
    }
  }
  return;
}



// FUNCTION 144ba0d50 FUN_144ba0d50 body=57 status=ok
// SIG undefined FUN_144ba0d50(void)

uint FUN_144ba0d50(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (-1 < param_2) {
    uVar2 = param_2 >> 0x1f & 0x3f;
    param_2 = param_2 + uVar2;
    iVar1 = param_2 >> 6;
    if (iVar1 < (int)param_1[1]) {
      return (uint)(*(ulonglong *)(*param_1 + (longlong)iVar1 * 8) >>
                   (((byte)param_2 & 0x3f) - (char)uVar2 & 0x3f)) & 1;
    }
  }
  return 0;
}



// FUNCTION 144ba0d90 FUN_144ba0d90 body=138 status=ok
// SIG undefined FUN_144ba0d90(void)

undefined8 FUN_144ba0d90(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (-1 < param_2) {
    uVar6 = param_2 >> 0x1f & 0x3f;
    uVar3 = param_2 + uVar6;
    iVar4 = (uVar3 & 0x3f) - uVar6;
    iVar5 = (int)uVar3 >> 6;
    if (iVar5 < (int)param_1[1]) {
      if (iVar4 == 0) {
        *(int *)(param_1 + 1) = iVar5;
      }
      else {
        *(int *)(param_1 + 1) = iVar5 + 1;
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar5 * 8);
        *puVar2 = *puVar2 & ~(-1L << ((byte)iVar4 & 0x3f));
      }
      uVar7 = (ulonglong)(int)param_1[1];
      if (0 < (int)param_1[1]) {
        lVar8 = *param_1 + uVar7 * 8;
        do {
          uVar3 = (uint)uVar7;
          plVar1 = (longlong *)(lVar8 + -8);
          lVar8 = lVar8 + -8;
          if (*plVar1 != 0) break;
          uVar3 = uVar3 - 1;
          uVar7 = (ulonglong)uVar3;
        } while (0 < (int)uVar3);
        *(uint *)(param_1 + 1) = uVar3;
      }
      if ((int)param_1[1] == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ba0e20 FUN_144ba0e20 body=203 status=ok
// SIG undefined FUN_144ba0e20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144ba0e20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((*(byte *)((longlong)param_1 + 0x14) & 8) == 0) {
    puVar1 = (undefined8 *)FUN_144ba0570();
  }
  else {
    puVar1 = (undefined8 *)FUN_144ba05d0();
  }
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) {
      iVar3 = *(int *)(param_1 + 1);
    }
    else {
      iVar3 = *(int *)((longlong)param_1 + 0xc);
    }
    if (puVar1 != param_1) {
      puVar2 = puVar1;
      if (*(int *)((longlong)puVar1 + 0xc) < iVar3) {
        puVar2 = (undefined8 *)FUN_144ba12c0(puVar1,iVar3);
      }
      if (puVar2 == (undefined8 *)0x0) {
        FUN_144ba0cd0(puVar1);
        return (undefined8 *)0x0;
      }
      if (0 < *(int *)(param_1 + 1)) {
        memcpy((void *)*puVar1,(void *)*param_1,(longlong)iVar3 << 3);
      }
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 2);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144ba0ef0 FUN_144ba0ef0 body=76 status=ok
// SIG undefined FUN_144ba0ef0(void)

int FUN_144ba0ef0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1] - (int)param_2[1];
  if (iVar2 == 0) {
    iVar2 = (int)param_1[1] + -1;
    lVar4 = (longlong)iVar2;
    if (-1 < iVar2) {
      puVar3 = (ulonglong *)(*param_2 + lVar4 * 8);
      do {
        uVar1 = *(ulonglong *)((*param_1 - *param_2) + (longlong)puVar3);
        if (uVar1 != *puVar3) {
          iVar2 = -1;
          if (*puVar3 < uVar1) {
            iVar2 = 1;
          }
          return iVar2;
        }
        puVar3 = puVar3 + -1;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 144ba0f40 FUN_144ba0f40 body=176 status=ok
// SIG undefined FUN_144ba0f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba0f40(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 < 0) {
    return 0;
  }
  uVar6 = param_2 >> 0x1f & 0x3f;
  uVar3 = param_2 + uVar6;
  iVar7 = (int)uVar3 >> 6;
  if ((int)param_1[1] <= iVar7) {
    iVar1 = iVar7 + 1;
    plVar4 = param_1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
      plVar4 = (longlong *)FUN_144ba12c0(param_1,iVar1);
    }
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
    for (lVar5 = (longlong)(int)param_1[1]; lVar5 < iVar1; lVar5 = lVar5 + 1) {
      *(undefined8 *)(*param_1 + lVar5 * 8) = 0;
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  puVar2 = (ulonglong *)(*param_1 + (longlong)iVar7 * 8);
  *puVar2 = *puVar2 | 1L << ((longlong)(int)((uVar3 & 0x3f) - uVar6) & 0x3fU);
  return 1;
}



// FUNCTION 144ba0ff0 FUN_144ba0ff0 body=122 status=ok
// SIG undefined FUN_144ba0ff0(void)

undefined8 FUN_144ba0ff0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (-1 < param_2) {
    uVar4 = param_2 >> 0x1f & 0x3f;
    uVar2 = param_2 + uVar4;
    iVar3 = (int)uVar2 >> 6;
    if (iVar3 < (int)param_1[1]) {
      *(ulonglong *)(*param_1 + (longlong)iVar3 * 8) =
           *(ulonglong *)(*param_1 + (longlong)iVar3 * 8) &
           ~(1L << ((longlong)(int)((uVar2 & 0x3f) - uVar4) & 0x3fU));
      uVar5 = (ulonglong)(int)param_1[1];
      if (0 < (int)param_1[1]) {
        lVar6 = *param_1 + uVar5 * 8;
        do {
          uVar2 = (uint)uVar5;
          plVar1 = (longlong *)(lVar6 + -8);
          lVar6 = lVar6 + -8;
          if (*plVar1 != 0) break;
          uVar2 = uVar2 - 1;
          uVar5 = (ulonglong)uVar2;
        } while (0 < (int)uVar2);
        *(uint *)(param_1 + 1) = uVar2;
      }
      if ((int)param_1[1] == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ba1070 FUN_144ba1070 body=491 status=ok
// SIG undefined FUN_144ba1070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba1070(ulonglong param_1,ulonglong *param_2,ulonglong *param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if (param_2 != param_3) {
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0xffffffffffffffff - ((longlong)(param_1 - 1 & ~param_1) >> 0x3f);
    uVar8 = (uint)uVar11;
    uVar7 = ((uint)param_2[1] ^ (uint)param_3[1]) & uVar8;
    *(uint *)(param_2 + 1) = (uint)param_2[1] ^ uVar7;
    *(uint *)(param_3 + 1) = (uint)param_3[1] ^ uVar7;
    uVar7 = ((uint)param_2[2] ^ (uint)param_3[2]) & uVar8;
    *(uint *)(param_2 + 2) = (uint)param_2[2] ^ uVar7;
    *(uint *)(param_3 + 2) = (uint)param_3[2] ^ uVar7;
    uVar8 = (*(uint *)((longlong)param_2 + 0x14) ^ *(uint *)((longlong)param_3 + 0x14)) & 4 & uVar8;
    *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) ^ uVar8;
    *(uint *)((longlong)param_3 + 0x14) = *(uint *)((longlong)param_3 + 0x14) ^ uVar8;
    if ((0 < (int)param_4) && (3 < param_4)) {
      puVar3 = (ulonglong *)*param_3;
      puVar4 = (ulonglong *)*param_2;
      puVar1 = puVar3 + (int)(param_4 - 1);
      puVar2 = puVar4 + (int)(param_4 - 1);
      if (((puVar2 < puVar3) || (puVar1 < puVar4)) &&
         ((((param_3 < puVar3 || (puVar1 < param_3)) && ((param_2 < puVar3 || (puVar1 < param_2))))
          && (((param_3 < puVar4 || (puVar2 < param_3)) &&
              ((param_2 < puVar4 || (puVar2 < param_2)))))))) {
        uVar8 = param_4 & 0x80000003;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
        }
        uVar12 = uVar9;
        do {
          uVar5 = *(ulonglong *)(uVar12 + (longlong)puVar4);
          uVar6 = ((ulonglong *)(uVar12 + (longlong)puVar4))[1];
          uVar10 = (int)uVar9 + 4;
          uVar9 = (ulonglong)uVar10;
          uVar14 = (uVar5 ^ *(ulonglong *)(uVar12 + (longlong)puVar3)) & uVar11;
          uVar15 = (uVar6 ^ ((ulonglong *)(uVar12 + (longlong)puVar3))[1]) & uVar11;
          *(ulonglong *)(uVar12 + (longlong)puVar4) = uVar14 ^ uVar5;
          ((ulonglong *)(uVar12 + (longlong)puVar4))[1] = uVar15 ^ uVar6;
          uVar5 = ((ulonglong *)(uVar12 + (longlong)puVar3))[1];
          *(ulonglong *)(uVar12 + (longlong)puVar3) =
               uVar14 ^ *(ulonglong *)(uVar12 + (longlong)puVar3);
          ((ulonglong *)(uVar12 + (longlong)puVar3))[1] = uVar15 ^ uVar5;
          puVar1 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar4);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar3);
          uVar14 = (uVar5 ^ *puVar1) & uVar11;
          uVar15 = (uVar6 ^ puVar1[1]) & uVar11;
          puVar1 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar4);
          *puVar1 = uVar14 ^ uVar5;
          puVar1[1] = uVar15 ^ uVar6;
          puVar1 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar3);
          uVar5 = puVar1[1];
          puVar2 = (ulonglong *)(uVar12 + 0x10 + (longlong)puVar3);
          *puVar2 = uVar14 ^ *puVar1;
          puVar2[1] = uVar15 ^ uVar5;
          uVar12 = uVar12 + 0x20;
        } while ((int)uVar10 < (int)(param_4 - uVar8));
      }
    }
    for (lVar13 = (longlong)(int)uVar10; lVar13 < (int)param_4; lVar13 = lVar13 + 1) {
      uVar9 = *(ulonglong *)(*param_2 + lVar13 * 8);
      uVar12 = (*(ulonglong *)(*param_3 + lVar13 * 8) ^ uVar9) & uVar11;
      *(ulonglong *)(*param_2 + lVar13 * 8) = uVar9 ^ uVar12;
      puVar1 = (ulonglong *)(*param_3 + lVar13 * 8);
      *puVar1 = *puVar1 ^ uVar12;
    }
  }
  return;
}



// FUNCTION 144ba1260 FUN_144ba1260 body=38 status=ok
// SIG undefined FUN_144ba1260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba1260(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  FUN_144ece730(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}



// FUNCTION 144ba1290 FUN_144ba1290 body=35 status=ok
// SIG undefined FUN_144ba1290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba1290(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return param_1;
  }
  lVar1 = FUN_144ba12c0();
  return lVar1;
}



// FUNCTION 144ba12c0 FUN_144ba12c0 body=141 status=ok
// SIG undefined FUN_144ba12c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ba12c0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    lVar1 = FUN_144ba15c0();
    if (lVar1 == 0) {
      return (longlong *)0x0;
    }
    if (*param_1 != 0) {
      if ((*(byte *)((longlong)param_1 + 0x14) & 8) == 0) {
        FUN_144ea66f0(*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3,
                      "crypto\\bn\\bn_lib.c",0xce);
      }
      else {
        FUN_144ea6f60();
      }
    }
    *param_1 = lVar1;
    *(int *)((longlong)param_1 + 0xc) = param_2;
  }
  return param_1;
}



// FUNCTION 144ba1350 FUN_144ba1350 body=50 status=ok
// SIG undefined FUN_144ba1350(void)

void FUN_144ba1350(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)(int)param_1[1];
  if (0 < (int)param_1[1]) {
    lVar4 = *param_1 + uVar3 * 8;
    do {
      uVar2 = (uint)uVar3;
      plVar1 = (longlong *)(lVar4 + -8);
      lVar4 = lVar4 + -8;
      if (*plVar1 != 0) break;
      uVar2 = uVar2 - 1;
      uVar3 = (ulonglong)uVar2;
    } while (0 < (int)uVar2);
    *(uint *)(param_1 + 1) = uVar2;
  }
  if ((int)param_1[1] == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 144ba1390 FUN_144ba1390 body=24 status=ok
// SIG undefined FUN_144ba1390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ba1390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c77f050;
  uVar1 = uRam000000014c77f048;
  *param_1 = _DAT_14c77f040;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}



// FUNCTION 144ba13b0 FUN_144ba13b0 body=104 status=ok
// SIG undefined FUN_144ba13b0(void)

undefined8 FUN_144ba13b0(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    uVar1 = *(ulonglong *)(param_1 + (longlong)(param_3 + -1) * 8);
    uVar2 = *(ulonglong *)(param_2 + (longlong)(param_3 + -1) * 8);
    if (uVar1 != uVar2) {
      uVar3 = 0xffffffff;
      if (uVar2 < uVar1) {
        uVar3 = 1;
      }
      return uVar3;
    }
    lVar5 = (longlong)(param_3 + -2);
    if (-1 < param_3 + -2) {
      puVar4 = (ulonglong *)(param_2 + lVar5 * 8);
      do {
        uVar1 = *(ulonglong *)((param_1 - param_2) + (longlong)puVar4);
        if (uVar1 != *puVar4) {
          uVar3 = 0xffffffff;
          if (*puVar4 < uVar1) {
            uVar3 = 1;
          }
          return uVar3;
        }
        puVar4 = puVar4 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  return 0;
}



// FUNCTION 144ba1420 FUN_144ba1420 body=227 status=ok
// SIG undefined FUN_144ba1420(void)

undefined8 FUN_144ba1420(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar5 = (longlong)(param_3 + -1);
  if (param_4 < 0) {
    lVar7 = (longlong)param_4;
    plVar3 = (longlong *)(param_2 + (lVar5 - lVar7) * 8);
    do {
      if (*plVar3 != 0) {
        return 0xffffffff;
      }
      plVar3 = plVar3 + -1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0);
  }
  if ((0 < param_4) && (lVar7 = (longlong)param_4, 0 < param_4)) {
    plVar3 = (longlong *)(param_1 + (lVar7 + lVar5) * 8);
    do {
      if (*plVar3 != 0) {
        return 1;
      }
      lVar7 = lVar7 + -1;
      plVar3 = plVar3 + -1;
    } while (0 < lVar7);
  }
  if (param_3 != 0) {
    uVar4 = *(ulonglong *)(param_1 + lVar5 * 8);
    uVar6 = *(ulonglong *)(param_2 + lVar5 * 8);
    if (uVar4 != uVar6) {
LAB_144ba1498:
      uVar1 = 0xffffffff;
      if (uVar6 < uVar4) {
        uVar1 = 1;
      }
      return uVar1;
    }
    lVar5 = (longlong)(param_3 + -2);
    if (-1 < param_3 + -2) {
      puVar2 = (ulonglong *)(param_2 + lVar5 * 8);
      do {
        uVar4 = *(ulonglong *)((param_1 - param_2) + (longlong)puVar2);
        uVar6 = *puVar2;
        if (uVar4 != uVar6) goto LAB_144ba1498;
        puVar2 = puVar2 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  return 0;
}



// FUNCTION 144ba1510 FUN_144ba1510 body=169 status=ok
// SIG undefined FUN_144ba1510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ba1510(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  uVar4 = *(int *)(param_1 + 1) - 1;
  uVar7 = 0;
  uVar5 = 0;
  if (0 < iVar1) {
    param_1 = (undefined8 *)*param_1;
    do {
      uVar2 = (int)((uVar5 ^ uVar4) - 1 & ~(uVar5 ^ uVar4)) >> 0x1f;
      uVar6 = uVar6 | uVar2;
      uVar3 = FUN_144ba0420(*param_1);
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + (~uVar6 & 0x40) + (uVar3 & uVar2);
    } while ((int)uVar5 < iVar1);
  }
  return 0xffffffffU - ((int)(~uVar4 - 1 & uVar4) >> 0x1f) & uVar7;
}



// FUNCTION 144ba15c0 FUN_144ba15c0 body=249 status=ok
// SIG undefined FUN_144ba15c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_144ba15c0(undefined8 *param_1,int param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x144ba15cc;
  if (0x7fffff < param_2) {
    FUN_144ba24f0(3,0x78,0x72,"crypto\\bn\\bn_lib.c",0x10e,0x144ba15cc);
    return (void *)0x0;
  }
  if ((*(uint *)((longlong)param_1 + 0x14) & 2) != 0) {
    FUN_144ba24f0(3,0x78,0x69,"crypto\\bn\\bn_lib.c",0x112,0x144ba15cc);
    return (void *)0x0;
  }
  if ((*(uint *)((longlong)param_1 + 0x14) & 8) == 0) {
    _Dst = (void *)FUN_144ea6670((longlong)param_2 << 3,"crypto\\bn\\bn_lib.c",0x118);
  }
  else {
    _Dst = (void *)FUN_144ea6f20((longlong)param_2 << 3,"crypto\\bn\\bn_lib.c",0x116);
  }
  if (_Dst == (void *)0x0) {
    FUN_144ba24f0(3,0x78,0x41,"crypto\\bn\\bn_lib.c",0x11a,uVar1);
    return (void *)0x0;
  }
  if (0 < *(int *)(param_1 + 1)) {
    memcpy(_Dst,(void *)*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  }
  return _Dst;
}



// FUNCTION 144ba16c0 FUN_144ba16c0 body=585 status=ok
// SIG undefined FUN_144ba16c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ba16c0(longlong *param_1,byte *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iStack_54;
  
  iVar15 = (int)param_1[1];
  uVar10 = 0;
  uVar5 = 0;
  if ((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) {
    uVar3 = uVar5;
    if (iVar15 != 0) {
      iVar4 = FUN_144ba0420(*(undefined8 *)(*param_1 + (longlong)(iVar15 + -1) * 8));
      uVar3 = iVar4 + (iVar15 + -1) * 0x40;
    }
  }
  else {
    uVar3 = FUN_144ba1510();
  }
  iVar4 = (int)(uVar3 + 7 + ((int)(uVar3 + 7) >> 0x1f & 7U)) >> 3;
  if ((param_3 != -1) && (bVar2 = param_3 < iVar4, iVar4 = param_3, bVar2)) {
    puVar13 = (undefined8 *)*param_1;
    iVar7 = (int)param_1[1];
    if (0 < iVar7) {
      puVar8 = puVar13 + iVar7;
      do {
        plVar1 = puVar8 + -1;
        puVar8 = puVar8 + -1;
        if (*plVar1 != 0) break;
        iVar7 = iVar7 + -1;
      } while (0 < iVar7);
    }
    uVar3 = iVar7 - 1;
    if ((param_1[2] & 0x400000000U) == 0) {
      if (iVar7 != 0) {
        iVar7 = FUN_144ba0420(puVar13[(int)uVar3]);
        uVar5 = iVar7 + uVar3 * 0x40;
      }
    }
    else {
      iStack_54 = (int)((ulonglong)param_1[1] >> 0x20);
      uVar12 = uVar10;
      uVar16 = uVar10;
      uVar17 = uVar10;
      if (0 < iStack_54) {
        do {
          uVar5 = (uint)uVar16 ^ uVar3;
          uVar5 = (int)(uVar5 - 1 & ~uVar5) >> 0x1f;
          uVar9 = (uint)uVar12 | uVar5;
          uVar6 = FUN_144ba0420(*puVar13);
          puVar13 = puVar13 + 1;
          uVar14 = (uint)uVar16 + 1;
          uVar5 = (int)uVar17 + (~uVar9 & 0x40) + (uVar6 & uVar5);
          uVar12 = (ulonglong)uVar9;
          uVar16 = (ulonglong)uVar14;
          uVar17 = (ulonglong)uVar5;
        } while ((int)uVar14 < iStack_54);
      }
      iVar15 = (int)param_1[1];
      uVar5 = 0xffffffffU - ((int)(~uVar3 - 1 & uVar3) >> 0x1f) & uVar5;
    }
    if (param_3 < (int)(uVar5 + 7 + ((int)(uVar5 + 7) >> 0x1f & 7U)) >> 3) {
      return -1;
    }
  }
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((uVar5 & 0x1fffffff) == 0) {
    FUN_14259f0c0(param_2,(longlong)iVar4);
  }
  else {
    if (param_4 == 0) {
      param_2 = param_2 + iVar4;
    }
    if (iVar4 != 0) {
      uVar12 = uVar10;
      do {
        bVar11 = (byte)(*(ulonglong *)(*param_1 + (uVar10 & 0xfffffffffffffff8)) >>
                       (((byte)uVar10 & 7) << 3)) &
                 (byte)((longlong)(uVar12 - (longlong)(iVar15 * 8)) >> 0x3f);
        if (param_4 == 0) {
          param_2 = param_2 + -1;
          *param_2 = bVar11;
        }
        else {
          *param_2 = bVar11;
          param_2 = param_2 + 1;
        }
        uVar12 = uVar12 + 1;
        uVar10 = uVar10 - ((longlong)(uVar10 - ((longlong)(int)(uVar5 << 3) + -1)) >> 0x3f);
      } while (uVar12 < (ulonglong)(longlong)iVar4);
    }
  }
  return iVar4;
}



// FUNCTION 144ba1910 FUN_144ba1910 body=239 status=ok
// SIG undefined FUN_144ba1910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba1910(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 != 0) {
    lVar2 = FUN_144ecf480(param_1,0,param_2);
    if (lVar2 != 0) goto LAB_144ba1973;
    if ((param_3 & 0x20) == 0) goto LAB_144ba195e;
  }
  lVar2 = FUN_144ecf480(param_1,0,"openssl_conf");
  if (lVar2 == 0) {
LAB_144ba195e:
    FUN_144ba26f0();
    return 1;
  }
LAB_144ba1973:
  lVar2 = FUN_144ecf410(param_1,lVar2);
  if (lVar2 == 0) {
    return 0;
  }
  iVar5 = 0;
  iVar1 = FUN_144babbf0(lVar2);
  if (0 < iVar1) {
    do {
      lVar3 = FUN_144babc00(lVar2,iVar5);
      uVar4 = FUN_144ba1f20(param_1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),param_3
                           );
      if (((int)uVar4 < 1) && ((param_3 & 1) == 0)) {
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_144babbf0(lVar2);
    } while (iVar5 < iVar1);
  }
  return 1;
}



// FUNCTION 144ba1a00 FUN_144ba1a00 body=234 status=ok
// SIG undefined FUN_144ba1a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ba1a00(ulonglong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  lVar3 = FUN_144ecf350(0);
  uVar4 = uVar5;
  if (lVar3 == 0) {
LAB_144ba1a9f:
    if (param_1 != 0) goto LAB_144ba1ab9;
  }
  else {
    uVar4 = param_1;
    if ((param_1 != 0) || (uVar4 = FUN_144ba1cf0(), uVar4 != 0)) {
      iVar1 = FUN_144ecf3c0(lVar3,uVar4,0);
      if (iVar1 < 1) {
        uVar5 = 0;
        if (((param_3 & 0x10) != 0) && (uVar2 = FUN_144ba26c0(), (uVar2 & 0xfff) == 0x72)) {
          FUN_144ba26f0();
          uVar5 = 1;
        }
      }
      else {
        uVar2 = FUN_144ba1910(lVar3,param_2,param_3);
        uVar5 = (ulonglong)uVar2;
      }
      goto LAB_144ba1a9f;
    }
  }
  FUN_144ea6530(uVar4,"crypto\\conf\\conf_mod.c",0x8e);
LAB_144ba1ab9:
  FUN_144ecf3a0(lVar3);
  if ((param_3 & 2) != 0) {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 144ba1af0 FUN_144ba1af0 body=226 status=ok
// SIG undefined FUN_144ba1af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba1af0(int param_1)

{
  int iVar1;
  longlong *plVar2;
  
  FUN_144ba1be0();
  iVar1 = FUN_144babbf0(DAT_14c77f058);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    plVar2 = (longlong *)FUN_144babc00(DAT_14c77f058,iVar1);
    if ((((int)plVar2[4] < 1) && (*plVar2 != 0)) || (param_1 != 0)) {
      FUN_144bac0f0(DAT_14c77f058,iVar1);
      FUN_144ecf6b0(*plVar2);
      FUN_144ea6530(plVar2[1],"crypto\\conf\\conf_mod.c",0x180);
      FUN_144ea6530(plVar2,"crypto\\conf\\conf_mod.c",0x181);
    }
  }
  iVar1 = FUN_144babbf0(DAT_14c77f058);
  if (iVar1 == 0) {
    FUN_144babdb0(DAT_14c77f058);
    DAT_14c77f058 = 0;
  }
  return;
}



// FUNCTION 144ba1be0 FUN_144ba1be0 body=205 status=ok
// SIG undefined FUN_144ba1be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba1be0(void)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = FUN_144babbf0(DAT_14c77f060);
  while (0 < iVar1) {
    plVar2 = (longlong *)FUN_144bac250(DAT_14c77f060);
    if (plVar2 != (longlong *)0x0) {
      if (*(code **)(*plVar2 + 0x18) != (code *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      *(int *)(*plVar2 + 0x20) = *(int *)(*plVar2 + 0x20) + -1;
      FUN_144ea6530(plVar2[1],"crypto\\conf\\conf_mod.c",0x19a);
      FUN_144ea6530(plVar2[2],"crypto\\conf\\conf_mod.c",0x19b);
      FUN_144ea6530(plVar2,"crypto\\conf\\conf_mod.c",0x19c);
    }
    iVar1 = FUN_144babbf0(DAT_14c77f060);
  }
  FUN_144babdb0(DAT_14c77f060);
  DAT_14c77f060 = 0;
  return;
}



// FUNCTION 144ba1cb0 FUN_144ba1cb0 body=44 status=ok
// SIG undefined FUN_144ba1cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ba1cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2060(0,param_1,param_2,param_3,0x144ba1cba);
  return lVar1 != 0;
}



// FUNCTION 144ba1ce0 FUN_144ba1ce0 body=5 status=ok
// SIG undefined FUN_144ba1ce0(void)

undefined8 FUN_144ba1ce0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144ba1cf0 FUN_144ba1cf0 body=207 status=ok
// SIG undefined FUN_144ba1cf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba1cf0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_144ecf180();
  if (lVar1 != 0) {
    lVar1 = FUN_144ea6dc0(lVar1,"crypto\\conf\\conf_mod.c",0x1e7);
    return lVar1;
  }
  lVar1 = FUN_144ecfd80();
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar1 + lVar3) != '\0');
  lVar3 = (longlong)((int)lVar3 + 0xd);
  lVar1 = FUN_144ea64e0(lVar3,"crypto\\conf\\conf_mod.c",0x1f0);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_144ecfd80();
  FUN_144ec7760(lVar1,lVar3,"%s%s%s",uVar2,L"/Disabled","openssl.cnf");
  return lVar1;
}



// FUNCTION 144ba1dc0 FUN_144ba1dc0 body=315 status=ok
// SIG undefined FUN_144ba1dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba1dc0(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 uVar7;
  byte *pbVar8;
  longlong lVar6;
  
  if (param_1 == (byte *)0x0) {
    FUN_144ba24f0(0xe,0x77,0x73,"crypto\\conf\\conf_mod.c",0x209,0x144ba1dd4);
    return 0;
  }
  while( true ) {
    if (param_3 != 0) {
      bVar2 = *param_1;
      while ((bVar2 != 0 && (iVar3 = isspace((uint)bVar2), iVar3 != 0))) {
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      }
    }
    pbVar4 = (byte *)strchr((char *)param_1,param_2);
    if ((pbVar4 == param_1) || (*param_1 == 0)) {
      iVar3 = 0;
      param_1 = (byte *)0x0;
    }
    else {
      if (pbVar4 == (byte *)0x0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (param_1[lVar5] != 0);
        pbVar8 = param_1 + lVar6;
      }
      else {
        pbVar8 = pbVar4 + -1;
      }
      if (param_3 != 0) {
        iVar3 = isspace((uint)*pbVar8);
        while (iVar3 != 0) {
          pbVar1 = pbVar8 + -1;
          pbVar8 = pbVar8 + -1;
          iVar3 = isspace((uint)*pbVar1);
        }
      }
      iVar3 = ((int)pbVar8 - (int)param_1) + 1;
    }
    uVar7 = (*param_4)(param_1,iVar3,param_5);
    if ((int)uVar7 < 1) break;
    if (pbVar4 == (byte *)0x0) {
      return 1;
    }
    param_1 = pbVar4 + 1;
  }
  return uVar7;
}



// FUNCTION 144ba1f00 FUN_144ba1f00 body=32 status=ok
// SIG undefined FUN_144ba1f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba1f00(void)

{
  FUN_144ba1be0();
  FUN_144ba1af0(1);
  return;
}



// FUNCTION 144ba1f20 FUN_144ba1f20 body=304 status=ok
// SIG undefined FUN_144ba1f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba1f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  char *local_50;
  undefined1 *local_48;
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144ba1f32;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_144ba2180(param_2);
  if ((lVar2 == 0) &&
     (((param_4 & 8) != 0 || (lVar2 = FUN_144ba23e0(param_1,param_2,param_3), lVar2 == 0)))) {
    if ((param_4 & 4) == 0) {
      local_58 = CONCAT44(local_58._4_4_,0xa5);
      FUN_144ba24f0(0xe,0x76,0x71,"crypto\\conf\\conf_mod.c");
      FUN_144ba2bd0(2,"module=",param_2);
    }
  }
  else {
    iVar1 = FUN_144ba2240(lVar2,param_2,param_3,param_1);
    if ((iVar1 < 1) && ((param_4 & 4) == 0)) {
      local_58 = CONCAT44(local_58._4_4_,0xb1);
      FUN_144ba24f0(0xe,0x76,0x6d,"crypto\\conf\\conf_mod.c");
      FUN_144ec7760(local_38,0xd,&DAT_149979078,iVar1);
      local_48 = local_38;
      local_50 = ", retcode=";
      local_58 = param_3;
      FUN_144ba2bd0(6,"module=",param_2,", value=");
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 144ba2060 FUN_144ba2060 body=288 status=ok
// SIG undefined FUN_144ba2060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
FUN_144ba2060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ba207b;
  if ((DAT_14c77f058 == 0) && (DAT_14c77f058 = FUN_144babca0(), DAT_14c77f058 == 0)) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_144ea6670(0x30,"crypto\\conf\\conf_mod.c",0xee);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144ba24f0(0xe,0x7a,0x41,"crypto\\conf\\conf_mod.c",0xef,uVar4);
  }
  else {
    *puVar2 = param_1;
    lVar3 = FUN_144ea6dc0(param_2,"crypto\\conf\\conf_mod.c",0xf4);
    puVar2[1] = lVar3;
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    if (lVar3 == 0) {
      uVar4 = 0xf8;
    }
    else {
      iVar1 = FUN_144bac1c0(DAT_14c77f058,puVar2);
      if (iVar1 != 0) {
        return puVar2;
      }
      FUN_144ea6530(puVar2[1],"crypto\\conf\\conf_mod.c",0xfd);
      uVar4 = 0xfe;
    }
    FUN_144ea6530(puVar2,"crypto\\conf\\conf_mod.c",uVar4);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144ba2180 FUN_144ba2180 body=179 status=ok
// SIG undefined FUN_144ba2180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba2180(char *param_1)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = strrchr(param_1,0x2e);
  if (pcVar2 == (char *)0x0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_1[lVar3] != '\0');
    iVar5 = (int)lVar3;
  }
  else {
    iVar5 = (int)pcVar2 - (int)param_1;
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(DAT_14c77f058);
  if (0 < iVar1) {
    do {
      lVar3 = FUN_144babc00(DAT_14c77f058,iVar4);
      iVar1 = strncmp(*(char **)(lVar3 + 8),param_1,(longlong)iVar5);
      if (iVar1 == 0) {
        return lVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(DAT_14c77f058);
    } while (iVar4 < iVar1);
  }
  return 0;
}



// FUNCTION 144ba2240 FUN_144ba2240 body=411 status=ok
// SIG undefined FUN_144ba2240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ba2240(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = 1;
  bVar1 = false;
  plVar4 = (longlong *)FUN_144ea64e0(0x28,"crypto\\conf\\conf_mod.c",0x12a);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = param_1;
    lVar5 = FUN_144ea6dc0(param_2,"crypto\\conf\\conf_mod.c",0x12f);
    plVar4[1] = lVar5;
    lVar5 = FUN_144ea6dc0(param_3,"crypto\\conf\\conf_mod.c",0x130);
    plVar4[2] = lVar5;
    plVar4[4] = 0;
    if ((plVar4[1] == 0) || (lVar5 == 0)) goto LAB_144ba2350;
    bVar2 = false;
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      iVar6 = (**(code **)(param_1 + 0x10))(plVar4,param_4);
      bVar1 = true;
      bVar2 = true;
      if (iVar6 < 1) goto LAB_144ba233e;
    }
    bVar1 = bVar2;
    if ((DAT_14c77f060 == 0) && (DAT_14c77f060 = FUN_144babca0(), DAT_14c77f060 == 0)) {
      uVar7 = 0x142;
    }
    else {
      iVar3 = FUN_144bac1c0(DAT_14c77f060,plVar4);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        return iVar6;
      }
      uVar7 = 0x148;
    }
    FUN_144ba24f0(0xe,0x73,0x41,"crypto\\conf\\conf_mod.c",uVar7);
  }
LAB_144ba233e:
  if ((*(code **)(param_1 + 0x18) != (code *)0x0) && (bVar1)) {
    (**(code **)(param_1 + 0x18))(plVar4);
  }
LAB_144ba2350:
  if (plVar4 != (longlong *)0x0) {
    FUN_144ea6530(plVar4[1],"crypto\\conf\\conf_mod.c",0x158);
    FUN_144ea6530(plVar4[2],"crypto\\conf\\conf_mod.c",0x159);
    FUN_144ea6530(plVar4,"crypto\\conf\\conf_mod.c",0x15a);
  }
  return -1;
}



// FUNCTION 144ba23e0 FUN_144ba23e0 body=266 status=ok
// SIG undefined FUN_144ba23e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba23e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0;
  lVar1 = FUN_144ecf480(param_1,param_3,&DAT_149ecafea);
  if (lVar1 == 0) {
    FUN_144ba26f0();
    lVar1 = param_2;
  }
  lVar2 = FUN_144ecfaa0(0,lVar1,0,0);
  if (lVar2 == 0) {
    uVar5 = 0x6e;
  }
  else {
    lVar3 = FUN_144ecfbd0(lVar2,"OPENSSL_init");
    if (lVar3 == 0) {
      uVar5 = 0x70;
    }
    else {
      uVar4 = FUN_144ecfbd0(lVar2,"OPENSSL_finish");
      lVar3 = FUN_144ba2060(lVar2,param_2,lVar3,uVar4);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  FUN_144ecf6b0(lVar2);
  FUN_144ba24f0(0xe,0x75,uVar5,"crypto\\conf\\conf_mod.c",CONCAT44(uVar6,0xe0));
  FUN_144ba2bd0(4,"module=",param_2,", path=",lVar1);
  return 0;
}



// FUNCTION 144ba24f0 FUN_144ba24f0 body=305 status=ok
// SIG undefined FUN_144ba24f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba24f0(int param_1,uint param_2,uint param_3,undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = FUN_144ba2fb0();
  if (lVar2 != 0) {
    uVar1 = *(int *)(lVar2 + 0x200) + 1U & 0x8000000f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(lVar2 + 0x200) = uVar1;
    if (uVar1 == *(uint *)(lVar2 + 0x204)) {
      uVar3 = *(uint *)(lVar2 + 0x204) + 1 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      *(uint *)(lVar2 + 0x204) = uVar3;
    }
    *(undefined4 *)(lVar2 + (longlong)(int)uVar1 * 4) = 0;
    *(uint *)(lVar2 + 0x40 + (longlong)*(int *)(lVar2 + 0x200) * 4) =
         (param_2 & 0xfff | param_1 << 0xc) << 0xc | param_3 & 0xfff;
    *(undefined8 *)(lVar2 + 0x140 + (longlong)*(int *)(lVar2 + 0x200) * 8) = param_4;
    *(undefined4 *)(lVar2 + 0x1c0 + (longlong)*(int *)(lVar2 + 0x200) * 4) = param_5;
    if ((*(byte *)(lVar2 + 0x100 + (longlong)*(int *)(lVar2 + 0x200) * 4) & 1) != 0) {
      FUN_144ea6530(*(undefined8 *)(lVar2 + 0x80 + (longlong)*(int *)(lVar2 + 0x200) * 8),
                    "crypto\\err\\err.c",0x1c9);
      *(undefined8 *)(lVar2 + 0x80 + (longlong)*(int *)(lVar2 + 0x200) * 8) = 0;
    }
    *(undefined4 *)(lVar2 + 0x100 + (longlong)*(int *)(lVar2 + 0x200) * 4) = 0;
  }
  return;
}



// FUNCTION 144ba2630 FUN_144ba2630 body=46 status=ok
// SIG undefined FUN_144ba2630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba2630(void)

{
  FUN_144ba3510(1,0,0,0,0,0,0x144ba263a);
  return;
}



// FUNCTION 144ba2660 FUN_144ba2660 body=44 status=ok
// SIG undefined FUN_144ba2660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba2660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144ba3510(1,0,param_1,param_2,param_3,param_4,0x144ba266a);
  return;
}



// FUNCTION 144ba2690 FUN_144ba2690 body=45 status=ok
// SIG undefined FUN_144ba2690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba2690(void)

{
  FUN_144ba3510(0,0,0,0,0,0,0x144ba269a);
  return;
}



// FUNCTION 144ba26c0 FUN_144ba26c0 body=46 status=ok
// SIG undefined FUN_144ba26c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba26c0(void)

{
  FUN_144ba3510(0,1,0,0,0,0,0x144ba26ca);
  return;
}



// FUNCTION 144ba26f0 FUN_144ba26f0 body=190 status=ok
// SIG undefined FUN_144ba26f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba26f0(void)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_144ba2fb0();
  if (lVar1 != 0) {
    pbVar2 = (byte *)(lVar1 + 0x100);
    lVar3 = 0x10;
    puVar4 = (undefined8 *)(lVar1 + 0x80);
    do {
      if ((*pbVar2 & 1) != 0) {
        FUN_144ea6530(*puVar4,"crypto\\err\\err.c",0x1d6);
        *puVar4 = 0;
      }
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[-0x100] = 0;
      pbVar2[-0xff] = 0;
      pbVar2[-0xfe] = 0;
      pbVar2[-0xfd] = 0;
      pbVar2[-0xc0] = 0;
      pbVar2[-0xbf] = 0;
      pbVar2[-0xbe] = 0;
      pbVar2[-0xbd] = 0;
      puVar4[0x18] = 0;
      puVar4 = puVar4 + 1;
      pbVar2[0xc0] = 0xff;
      pbVar2[0xc1] = 0xff;
      pbVar2[0xc2] = 0xff;
      pbVar2[0xc3] = 0xff;
      pbVar2 = pbVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined8 *)(lVar1 + 0x200) = 0;
  }
  return;
}



// FUNCTION 144ba27b0 FUN_144ba27b0 body=52 status=ok
// SIG undefined FUN_144ba27b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_144ba27b0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14c7818a0;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  FUN_144ba27f0(param_1,puVar1,0x100);
  return puVar1;
}



// FUNCTION 144ba27f0 FUN_144ba27f0 body=429 status=ok
// SIG undefined FUN_144ba27f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba27f0(ulonglong param_1,char *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  if (param_3 != 0) {
    local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
    uVar7 = param_1 >> 0x18 & 0xff;
    puVar4 = (undefined1 *)FUN_144ba29b0();
    if (puVar4 == (undefined1 *)0x0) {
      FUN_144ec7760(local_108,0x40,"lib(%lu)",uVar7);
      puVar4 = local_108;
    }
    puVar5 = (undefined1 *)FUN_144ba2a50(param_1 & 0xffffffff);
    uVar2 = (uint)(param_1 >> 0xc);
    if (puVar5 == (undefined1 *)0x0) {
      FUN_144ec7760(local_c8,0x40,"func(%lu)",uVar2 & 0xfff);
      puVar5 = local_c8;
    }
    local_118 = (undefined1 *)FUN_144ba2af0(param_1 & 0xffffffff);
    if (local_118 == (undefined1 *)0x0) {
      FUN_144ec7760(local_88,0x40,"reason(%lu)",(uint)param_1 & 0xfff);
      local_118 = local_88;
    }
    local_128 = puVar4;
    local_120 = puVar5;
    FUN_144ec7760(param_2,param_3,"error:%08lX:%s:%s:%s",param_1 & 0xffffffff);
    cVar1 = *param_2;
    pcVar6 = param_2;
    for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    if ((ulonglong)(uVar3 & 0x7fffffff) == param_3 - 1U) {
      local_118 = (undefined1 *)(CONCAT44(local_118._4_4_,(uint)param_1) & 0xffffffff00000fff);
      local_120 = (undefined1 *)(CONCAT44(local_120._4_4_,uVar2) & 0xffffffff00000fff);
      local_128 = (undefined1 *)CONCAT44(local_128._4_4_,(int)uVar7);
      FUN_144ec7760(param_2,param_3,"err:%lx:%lx:%lx:%lx",param_1 & 0xffffffff);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
  }
  return;
}



// FUNCTION 144ba29b0 FUN_144ba29b0 body=147 status=ok
// SIG undefined FUN_144ba29b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ba29b0(uint param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ba29c0;
  iVar1 = FUN_144e986c0(&DAT_14c77f074,FUN_144ba3ac0);
  uVar4 = 0;
  uVar3 = uVar4;
  if (iVar1 != 0) {
    uVar3 = (ulonglong)DAT_14c77f088;
  }
  if ((int)uVar3 == 0) {
    return 0;
  }
  local_18[0] = param_1 & 0xff000000;
  FUN_144e98600(DAT_14c77f078);
  lVar2 = FUN_144ea8820(DAT_14c77f080,local_18);
  FUN_144e98640(DAT_14c77f078);
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 8);
  }
  return uVar4;
}



// FUNCTION 144ba2a50 FUN_144ba2a50 body=147 status=ok
// SIG undefined FUN_144ba2a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ba2a50(uint param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ba2a60;
  iVar1 = FUN_144e986c0(&DAT_14c77f074,FUN_144ba3ac0);
  uVar4 = 0;
  uVar3 = uVar4;
  if (iVar1 != 0) {
    uVar3 = (ulonglong)DAT_14c77f088;
  }
  if ((int)uVar3 == 0) {
    return 0;
  }
  local_18[0] = param_1 & 0xfffff000;
  FUN_144e98600(DAT_14c77f078);
  lVar2 = FUN_144ea8820(DAT_14c77f080,local_18);
  FUN_144e98640(DAT_14c77f078);
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 8);
  }
  return uVar4;
}



// FUNCTION 144ba2af0 FUN_144ba2af0 body=220 status=ok
// SIG undefined FUN_144ba2af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba2af0(uint param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ba2b00;
  iVar1 = FUN_144e986c0(&DAT_14c77f074,FUN_144ba3ac0);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = DAT_14c77f088;
  }
  if (iVar3 != 0) {
    local_18[0] = param_1 & 0xff000fff;
    FUN_144e98600(DAT_14c77f078);
    lVar2 = FUN_144ea8820(DAT_14c77f080,local_18);
    FUN_144e98640(DAT_14c77f078);
    if (lVar2 == 0) {
      local_18[0] = param_1 & 0xfff;
      FUN_144e98600(DAT_14c77f078);
      lVar2 = FUN_144ea8820(DAT_14c77f080,local_18);
      FUN_144e98640(DAT_14c77f078);
      if (lVar2 == 0) {
        return 0;
      }
    }
    return *(undefined8 *)(lVar2 + 8);
  }
  return 0;
}



// FUNCTION 144ba2bd0 FUN_144ba2bd0 body=47 status=ok
// SIG undefined FUN_144ba2bd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba2bd0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144ba2c00(param_1,&local_res10,param_3,param_4,0x144ba2bed);
  return;
}



// FUNCTION 144ba2c00 FUN_144ba2c00 body=296 status=ok
// SIG undefined FUN_144ba2c00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba2c00(int param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iVar11;
  
  iVar7 = 0x50;
  puVar4 = (undefined1 *)FUN_144ea64e0(0x51,"crypto\\err\\err.c",0x374);
  if (puVar4 != (undefined1 *)0x0) {
    iVar8 = 0;
    iVar11 = 0;
    *puVar4 = 0;
    if (0 < param_1) {
      param_2 = param_2 + -8;
      puVar6 = puVar4;
      do {
        puVar1 = (undefined8 *)(param_2 + 8);
        param_2 = param_2 + 8;
        pcVar9 = "<NULL>";
        if ((char *)*puVar1 != (char *)0x0) {
          pcVar9 = (char *)*puVar1;
        }
        cVar2 = *pcVar9;
        pcVar5 = pcVar9;
        for (uVar3 = 0; (cVar2 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
          pcVar5 = pcVar5 + 1;
          cVar2 = *pcVar5;
        }
        iVar8 = iVar8 + (uVar3 & 0x7fffffff);
        puVar4 = puVar6;
        if (iVar7 < iVar8) {
          iVar7 = iVar8 + 0x14;
          puVar4 = (undefined1 *)
                   FUN_144ea6570(puVar6,(longlong)(iVar8 + 0x15),"crypto\\err\\err.c",0x382);
          if (puVar4 == (undefined1 *)0x0) {
            uVar10 = 900;
            goto LAB_144ba2cf4;
          }
        }
        FUN_144ea6900(puVar4,pcVar9,(longlong)iVar7 + 1);
        iVar11 = iVar11 + 1;
        puVar6 = puVar4;
      } while (iVar11 < param_1);
    }
    iVar7 = FUN_144ba3b10(puVar4,3);
    if (iVar7 == 0) {
      uVar10 = 0x38c;
      puVar6 = puVar4;
LAB_144ba2cf4:
      FUN_144ea6530(puVar6,"crypto\\err\\err.c",uVar10);
    }
  }
  return;
}



// FUNCTION 144ba2d30 FUN_144ba2d30 body=99 status=ok
// SIG undefined FUN_144ba2d30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba2d30(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_144ba2e60();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar2 = *param_2;
  puVar1 = param_2;
  while (uVar2 != 0) {
    *puVar1 = *puVar1 | param_1 << 0x18;
    puVar1 = puVar1 + 4;
    uVar2 = *puVar1;
  }
  FUN_144ba3410(param_2);
  return 1;
}



// FUNCTION 144ba2da0 FUN_144ba2da0 body=52 status=ok
// SIG undefined FUN_144ba2da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba2da0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba2e60();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  FUN_144ba3410(param_1);
  return 1;
}



// FUNCTION 144ba2de0 FUN_144ba2de0 body=127 status=ok
// SIG undefined FUN_144ba2de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba2de0(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144e986c0(&DAT_14c77f074,FUN_144ba3ac0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c77f088;
  }
  if (iVar2 != 0) {
    FUN_144e98620(DAT_14c77f078);
    iVar2 = *param_2;
    while (iVar2 != 0) {
      FUN_144ea8790(DAT_14c77f080,param_2);
      param_2 = param_2 + 4;
      iVar2 = *param_2;
    }
    FUN_144e98640(DAT_14c77f078);
    return 1;
  }
  return 0;
}



// FUNCTION 144ba2e60 FUN_144ba2e60 body=328 status=ok
// SIG undefined FUN_144ba2e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba2e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  
  iVar2 = FUN_144e986c0(&DAT_14c77f074,FUN_144ba3ac0,param_3,param_4,0x144ba2e6a);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = DAT_14c77f088;
  }
  if (iVar4 != 0) {
    piVar5 = &DAT_14c6d9940;
    FUN_144e98620(DAT_14c77f078);
    iVar4 = DAT_14c6d9940;
    while (iVar4 != 0) {
      FUN_144ea86c0(DAT_14c77f080,piVar5);
      piVar5 = piVar5 + 4;
      iVar4 = *piVar5;
    }
    FUN_144e98640(DAT_14c77f078);
    piVar5 = &DAT_14c6d9d20;
    FUN_144e98620(DAT_14c77f078);
    iVar4 = DAT_14c6d9d20;
    while (iVar4 != 0) {
      FUN_144ea86c0(DAT_14c77f080,piVar5);
      piVar5 = piVar5 + 4;
      iVar4 = *piVar5;
    }
    FUN_144e98640(DAT_14c77f078);
    puVar6 = &DAT_14c6d9b90;
    puVar3 = &DAT_14c6d9b90;
    uVar1 = DAT_14c6d9b90;
    while (uVar1 != 0) {
      *puVar3 = *puVar3 | 0x2000000;
      puVar3 = puVar3 + 4;
      uVar1 = *puVar3;
    }
    FUN_144e98620(DAT_14c77f078);
    uVar1 = DAT_14c6d9b90;
    while (uVar1 != 0) {
      FUN_144ea86c0(DAT_14c77f080,puVar6);
      puVar6 = puVar6 + 4;
      uVar1 = *puVar6;
    }
    FUN_144e98640(DAT_14c77f078);
    FUN_144ba3880();
    return 1;
  }
  return 0;
}



// FUNCTION 144ba2fb0 FUN_144ba2fb0 body=267 status=ok
// SIG undefined FUN_144ba2fb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba2fb0(void)

{
  DWORD dwErrCode;
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_144bab1c0(0x40000,0);
  if (iVar1 != 0) {
    iVar2 = FUN_144e986c0(&DAT_14c77f070,FUN_144ba3ae0);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = DAT_14c77f08c;
    }
    if (iVar1 != 0) {
      lVar3 = FUN_144e98760(&DAT_14c77f094);
      if (lVar3 != -1) {
        if (lVar3 != 0) {
LAB_144ba3082:
          SetLastError(dwErrCode);
          return lVar3;
        }
        iVar1 = FUN_144e987a0(&DAT_14c77f094,0xffffffffffffffff);
        if (iVar1 != 0) {
          lVar3 = FUN_144ea6670(0x208,"crypto\\err\\err.c",0x2fe);
          if (lVar3 != 0) {
            iVar1 = FUN_144bab640(2);
            if (iVar1 != 0) {
              iVar1 = FUN_144e987a0(&DAT_14c77f094,lVar3);
              if (iVar1 != 0) {
                FUN_144bab1c0(2);
                goto LAB_144ba3082;
              }
            }
            FUN_144ba3470(lVar3);
          }
          FUN_144e987a0(&DAT_14c77f094,0);
        }
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 144ba30c0 FUN_144ba30c0 body=111 status=ok
// SIG undefined FUN_144ba30c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ba30c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144e986c0(&DAT_14c77f074,FUN_144ba3ac0,param_3,param_4,0x144ba30ca);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c77f088;
  }
  if (iVar2 == 0) {
    return 0;
  }
  FUN_144e98620(DAT_14c77f078);
  iVar2 = DAT_14c6d9f10;
  DAT_14c6d9f10 = DAT_14c6d9f10 + 1;
  FUN_144e98640(DAT_14c77f078);
  return iVar2;
}



// FUNCTION 144ba3130 FUN_144ba3130 body=62 status=ok
// SIG undefined FUN_144ba3130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba3130(void)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ba2fb0();
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x204) != *(int *)(lVar2 + 0x200))) {
    puVar1 = (uint *)(lVar2 + (longlong)*(int *)(lVar2 + 0x200) * 4);
    *puVar1 = *puVar1 | 1;
    return 1;
  }
  return 0;
}



// FUNCTION 144ba3170 FUN_144ba3170 body=276 status=ok
// SIG undefined FUN_144ba3170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba3170(void)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_144ba2fb0();
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x204) != *(int *)(lVar3 + 0x200)) {
      do {
        lVar4 = (longlong)*(int *)(lVar3 + 0x200);
        if ((*(byte *)(lVar3 + lVar4 * 4) & 1) != 0) break;
        if ((*(byte *)(lVar3 + 0x100 + lVar4 * 4) & 1) != 0) {
          FUN_144ea6530(*(undefined8 *)(lVar3 + 0x80 + lVar4 * 8),"crypto\\err\\err.c",0x3a7);
          *(undefined8 *)(lVar3 + 0x80 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
        }
        *(undefined4 *)(lVar3 + 0x100 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined4 *)(lVar3 + 0x40 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0;
        *(undefined8 *)(lVar3 + 0x140 + (longlong)*(int *)(lVar3 + 0x200) * 8) = 0;
        *(undefined4 *)(lVar3 + 0x1c0 + (longlong)*(int *)(lVar3 + 0x200) * 4) = 0xffffffff;
        if (*(int *)(lVar3 + 0x200) < 1) {
          iVar2 = 0xf;
        }
        else {
          iVar2 = *(int *)(lVar3 + 0x200) + -1;
        }
        *(int *)(lVar3 + 0x200) = iVar2;
      } while (*(int *)(lVar3 + 0x204) != iVar2);
    }
    if (*(int *)(lVar3 + 0x204) != *(int *)(lVar3 + 0x200)) {
      puVar1 = (uint *)(lVar3 + (longlong)*(int *)(lVar3 + 0x200) * 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ba3290 FUN_144ba3290 body=107 status=ok
// SIG undefined FUN_144ba3290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba3290(void)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_144ba2fb0();
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 0x200);
    uVar4 = (ulonglong)iVar3;
    uVar5 = uVar4;
    while (((longlong)*(int *)(lVar2 + 0x204) != uVar4 &&
           (iVar3 = (int)uVar5, (*(byte *)(lVar2 + uVar4 * 4) & 1) == 0))) {
      if ((longlong)uVar4 < 1) {
        uVar5 = 0xf;
        uVar4 = 0xf;
      }
      else {
        uVar5 = (ulonglong)(iVar3 - 1);
        uVar4 = uVar4 - 1;
      }
      iVar3 = (int)uVar5;
    }
    if (*(int *)(lVar2 + 0x204) != iVar3) {
      puVar1 = (uint *)(lVar2 + (longlong)iVar3 * 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ba3300 FUN_144ba3300 body=85 status=ok
// SIG undefined FUN_144ba3300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba3300(void)

{
  if (DAT_14c77f090 != 0) {
    FUN_144e987d0(&DAT_14c77f094);
  }
  FUN_144e98660(DAT_14c77f078);
  DAT_14c77f078 = 0;
  FUN_144ea8620(DAT_14c77f080);
  DAT_14c77f080 = 0;
  return;
}



// FUNCTION 144ba3360 FUN_144ba3360 body=68 status=ok
// SIG undefined FUN_144ba3360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba3360(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144e98760(&DAT_14c77f094);
  if (lVar1 != 0) {
    FUN_144e987a0(&DAT_14c77f094,0);
    FUN_144ba3470(lVar1);
    return;
  }
  return;
}



// FUNCTION 144ba33b0 FUN_144ba33b0 body=83 status=ok
// SIG undefined FUN_144ba33b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ba33b0(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_144ba2fb0();
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = (int)(param_1 - 1 & ~param_1) >> 0x1f;
    puVar1 = (uint *)(lVar3 + (longlong)*(int *)(lVar3 + 0x200) * 4);
    *puVar1 = *puVar1 | ~uVar2 & 2;
  }
  return uVar2;
}



// FUNCTION 144ba3410 FUN_144ba3410 body=95 status=ok
// SIG undefined FUN_144ba3410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba3410(int *param_1)

{
  int iVar1;
  
  FUN_144e98620(DAT_14c77f078);
  iVar1 = *param_1;
  while (iVar1 != 0) {
    FUN_144ea86c0(DAT_14c77f080,param_1);
    param_1 = param_1 + 4;
    iVar1 = *param_1;
  }
  FUN_144e98640(DAT_14c77f078);
  return 1;
}



// FUNCTION 144ba3470 FUN_144ba3470 body=159 status=ok
// SIG undefined FUN_144ba3470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba3470(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0x100);
    lVar2 = 0x10;
    puVar3 = (undefined8 *)(param_1 + 0x80);
    do {
      if ((*pbVar1 & 1) != 0) {
        FUN_144ea6530(*puVar3,"crypto\\err\\err.c",0x128);
        *puVar3 = 0;
      }
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      puVar3 = puVar3 + 1;
      pbVar1 = pbVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    FUN_144ea6530(param_1,"crypto\\err\\err.c",0x12a);
  }
  return;
}



// FUNCTION 144ba3510 FUN_144ba3510 body=776 status=ok
// SIG undefined FUN_144ba3510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144ba3510(int param_1,int param_2,longlong *param_3,undefined4 *param_4,longlong *param_5,
             undefined4 *param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = FUN_144ba2fb0();
  uVar3 = 0;
  if (lVar4 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      if (*(int *)(lVar4 + 0x204) != *(int *)(lVar4 + 0x200)) {
        do {
          lVar5 = (longlong)*(int *)(lVar4 + 0x200);
          if ((*(byte *)(lVar4 + lVar5 * 4) & 2) == 0) {
            uVar2 = *(int *)(lVar4 + 0x204) + 1U & 0x8000000f;
            if ((int)uVar2 < 0) {
              uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
            }
            lVar5 = (longlong)(int)uVar2;
            if ((*(byte *)(lVar4 + lVar5 * 4) & 2) == 0) break;
            *(uint *)(lVar4 + 0x204) = uVar2;
            if ((*(byte *)(lVar4 + 0x100 + lVar5 * 4) & 1) != 0) {
              FUN_144ea6530(*(undefined8 *)(lVar4 + 0x80 + lVar5 * 8),"crypto\\err\\err.c",0x22d);
              *(undefined8 *)(lVar4 + 0x80 + (longlong)*(int *)(lVar4 + 0x204) * 8) = 0;
            }
            *(undefined4 *)(lVar4 + 0x100 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0;
            *(undefined4 *)(lVar4 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0;
            *(undefined4 *)(lVar4 + 0x40 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0;
            *(undefined8 *)(lVar4 + 0x140 + (longlong)*(int *)(lVar4 + 0x204) * 8) = 0;
            *(undefined4 *)(lVar4 + 0x1c0 + (longlong)*(int *)(lVar4 + 0x204) * 4) = 0xffffffff;
          }
          else {
            if ((*(byte *)(lVar4 + 0x100 + lVar5 * 4) & 1) != 0) {
              FUN_144ea6530(*(undefined8 *)(lVar4 + 0x80 + lVar5 * 8),"crypto\\err\\err.c",0x226);
              *(undefined8 *)(lVar4 + 0x80 + (longlong)*(int *)(lVar4 + 0x200) * 8) = 0;
            }
            *(undefined4 *)(lVar4 + 0x100 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0;
            *(undefined4 *)(lVar4 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0;
            *(undefined4 *)(lVar4 + 0x40 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0;
            *(undefined8 *)(lVar4 + 0x140 + (longlong)*(int *)(lVar4 + 0x200) * 8) = 0;
            *(undefined4 *)(lVar4 + 0x1c0 + (longlong)*(int *)(lVar4 + 0x200) * 4) = 0xffffffff;
            if (*(int *)(lVar4 + 0x200) < 1) {
              *(undefined4 *)(lVar4 + 0x200) = 0xf;
            }
            else {
              *(int *)(lVar4 + 0x200) = *(int *)(lVar4 + 0x200) + -1;
            }
          }
        } while (*(int *)(lVar4 + 0x204) != *(int *)(lVar4 + 0x200));
      }
      uVar2 = *(uint *)(lVar4 + 0x200);
      if (*(uint *)(lVar4 + 0x204) == uVar2) {
        uVar3 = 0;
      }
      else {
        if ((param_2 == 0) && (uVar2 = *(uint *)(lVar4 + 0x204) + 1 & 0x8000000f, (int)uVar2 < 0)) {
          uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
        }
        lVar6 = (longlong)(int)uVar2;
        uVar3 = *(undefined4 *)(lVar4 + 0x40 + lVar6 * 4);
        lVar5 = lVar6 + 0x10;
        if (param_1 != 0) {
          *(uint *)(lVar4 + 0x204) = uVar2;
          *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
        }
        if ((param_3 != (longlong *)0x0) && (param_4 != (undefined4 *)0x0)) {
          lVar1 = *(longlong *)(lVar4 + 0x140 + lVar6 * 8);
          if (lVar1 == 0) {
            *param_3 = (longlong)&DAT_14996c80a;
            *param_4 = 0;
          }
          else {
            *param_3 = lVar1;
            *param_4 = *(undefined4 *)(lVar4 + 0x1c0 + lVar6 * 4);
          }
        }
        if (param_5 == (longlong *)0x0) {
          if (param_1 != 0) {
            lVar6 = lVar4 + lVar6 * 4;
            if ((*(byte *)(lVar6 + 0x100) & 1) != 0) {
              FUN_144ea6530(*(undefined8 *)(lVar4 + lVar5 * 8),"crypto\\err\\err.c",0x24d);
              *(undefined8 *)(lVar4 + lVar5 * 8) = 0;
            }
            *(undefined4 *)(lVar6 + 0x100) = 0;
          }
        }
        else {
          lVar5 = *(longlong *)(lVar4 + lVar5 * 8);
          if (lVar5 == 0) {
            *param_5 = (longlong)&DAT_149e02088;
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = 0;
            }
          }
          else {
            *param_5 = lVar5;
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = *(undefined4 *)(lVar4 + 0x100 + lVar6 * 4);
            }
          }
        }
      }
    }
    else {
      if (param_3 != (longlong *)0x0) {
        *param_3 = (longlong)&DAT_149e02088;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      if (param_5 != (longlong *)0x0) {
        *param_5 = (longlong)&DAT_149e02088;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0;
      }
      uVar3 = 0x44;
    }
  }
  return uVar3;
}



// FUNCTION 144ba3880 FUN_144ba3880 body=436 status=ok
// SIG undefined FUN_144ba3880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba3880(void)

{
  char cVar1;
  DWORD dwErrCode;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar8 = 0;
  pcVar5 = &DAT_14c77f8a0;
  dwErrCode = GetLastError();
  FUN_144e98620(DAT_14c77f078);
  if (DAT_14c6d9f14 == 0) {
    FUN_144e98640(DAT_14c77f078);
    return;
  }
  piVar6 = &DAT_14c77f0a0;
  puVar9 = (uint *)&DAT_14c77f0a0;
  uVar10 = 1;
  do {
    *puVar9 = uVar10 & 0xfff | 0x2000000;
    if (*(longlong *)(puVar9 + 2) == 0) {
      if ((uVar8 < 0x2000) && (iVar2 = FUN_144ea6ec0(uVar10,pcVar5,0x2000 - uVar8), iVar2 != 0)) {
        cVar1 = *pcVar5;
        pcVar4 = pcVar5;
        for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        *(char **)(puVar9 + 2) = pcVar5;
        lVar7 = uVar8 + (uVar3 & 0x7fffffff);
        pcVar5 = pcVar5 + (uVar3 & 0x7fffffff);
        while (&DAT_14c77f8a0 < pcVar5) {
          iVar2 = FUN_144ecfdd0((int)pcVar5[-1],8);
          if (iVar2 == 0) break;
          lVar7 = lVar7 + -1;
          pcVar5 = pcVar5 + -1;
        }
        *pcVar5 = '\0';
        pcVar5 = pcVar5 + 1;
        uVar8 = lVar7 + 1;
      }
      if (*(longlong *)(puVar9 + 2) == 0) {
        *(char **)(puVar9 + 2) = "unknown";
      }
    }
    uVar10 = uVar10 + 1;
    puVar9 = puVar9 + 4;
    if (0x7f < (int)uVar10) {
      DAT_14c6d9f14 = 0;
      FUN_144e98640(DAT_14c77f078);
      SetLastError(dwErrCode);
      FUN_144e98620(DAT_14c77f078);
      iVar2 = DAT_14c77f0a0;
      while (iVar2 != 0) {
        FUN_144ea86c0(DAT_14c77f080,piVar6);
        piVar6 = piVar6 + 4;
        iVar2 = *piVar6;
      }
      FUN_144e98640(DAT_14c77f078);
      return;
    }
  } while( true );
}



// FUNCTION 144ba3a40 FUN_144ba3a40 body=114 status=ok
// SIG undefined FUN_144ba3a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba3a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144bab1c0(0,0,param_3,param_4,0x144ba3a4a);
  if (iVar1 != 0) {
    DAT_14c77f078 = FUN_144e985a0();
    if (DAT_14c77f078 != 0) {
      DAT_14c77f080 = FUN_144ea8530(&LAB_144ba3820,&LAB_144ba3860);
      if (DAT_14c77f080 != 0) {
        return 1;
      }
      FUN_144e98660(DAT_14c77f078);
      DAT_14c77f078 = 0;
    }
  }
  return 0;
}



// FUNCTION 144ba3ac0 FUN_144ba3ac0 body=29 status=ok
// SIG undefined FUN_144ba3ac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba3ac0(void)

{
  DAT_14c77f088 = FUN_144ba3a40();
  return;
}



// FUNCTION 144ba3ae0 FUN_144ba3ae0 body=48 status=ok
// SIG undefined FUN_144ba3ae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba3ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DAT_14c77f090 = 1;
  DAT_14c77f08c = FUN_144e98730(&DAT_14c77f094,0,param_3,param_4,0x144ba3aea);
  return;
}



// FUNCTION 144ba3b10 FUN_144ba3b10 body=159 status=ok
// SIG undefined FUN_144ba3b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba3b10(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144ba2fb0();
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = (longlong)*(int *)(lVar1 + 0x200);
  if ((*(byte *)(lVar1 + 0x100 + lVar2 * 4) & 1) != 0) {
    FUN_144ea6530(*(undefined8 *)(lVar1 + 0x80 + lVar2 * 8),"crypto\\err\\err.c",0x356);
    *(undefined8 *)(lVar1 + 0x80 + lVar2 * 8) = 0;
  }
  *(undefined8 *)(lVar1 + 0x80 + lVar2 * 8) = param_1;
  *(undefined4 *)(lVar1 + 0x100 + lVar2 * 4) = param_2;
  return 1;
}



// FUNCTION 144ba3bb0 FUN_144ba3bb0 body=65 status=ok
// SIG undefined FUN_144ba3bb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba3bb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_144ea6670(0x48,"crypto\\evp\\evp_lib.c",0x150);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  return;
}



// FUNCTION 144ba3c00 FUN_144ba3c00 body=35 status=ok
// SIG undefined FUN_144ba3c00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba3c00(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\evp\\evp_lib.c",0x162);
  return;
}



// FUNCTION 144ba3c30 FUN_144ba3c30 body=9 status=ok
// SIG undefined FUN_144ba3c30(void)

undefined8 FUN_144ba3c30(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return 1;
}



// FUNCTION 144ba3c40 FUN_144ba3c40 body=9 status=ok
// SIG undefined FUN_144ba3c40(void)

undefined8 FUN_144ba3c40(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 144ba3c50 FUN_144ba3c50 body=9 status=ok
// SIG undefined FUN_144ba3c50(void)

undefined8 FUN_144ba3c50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return 1;
}



// FUNCTION 144ba3c60 FUN_144ba3c60 body=9 status=ok
// SIG undefined FUN_144ba3c60(void)

undefined8 FUN_144ba3c60(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return 1;
}



// FUNCTION 144ba3c70 FUN_144ba3c70 body=10 status=ok
// SIG undefined FUN_144ba3c70(void)

undefined8 FUN_144ba3c70(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



// FUNCTION 144ba3c80 FUN_144ba3c80 body=10 status=ok
// SIG undefined FUN_144ba3c80(void)

undefined8 FUN_144ba3c80(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}



// FUNCTION 144ba3c90 FUN_144ba3c90 body=10 status=ok
// SIG undefined FUN_144ba3c90(void)

undefined8 FUN_144ba3c90(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



// FUNCTION 144ba3ca0 FUN_144ba3ca0 body=4 status=ok
// SIG undefined FUN_144ba3ca0(void)

undefined4 FUN_144ba3ca0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 144ba3cb0 FUN_144ba3cb0 body=3 status=ok
// SIG undefined FUN_144ba3cb0(void)

undefined4 FUN_144ba3cb0(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 144ba3cc0 FUN_144ba3cc0 body=4 status=ok
// SIG undefined FUN_144ba3cc0(void)

undefined4 FUN_144ba3cc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 144ba3cd0 FUN_144ba3cd0 body=64 status=ok
// SIG undefined FUN_144ba3cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ba3cd0(longlong param_1)

{
  if (param_1 == 0) {
    FUN_144ba24f0(6,0xa2,0x9f,"crypto\\evp\\evp_lib.c",0x143);
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 144ba3d10 FUN_144ba3d10 body=4 status=ok
// SIG undefined FUN_144ba3d10(void)

undefined4 FUN_144ba3d10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 144ba3d20 FUN_144ba3d20 body=12 status=ok
// SIG undefined FUN_144ba3d20(void)

undefined8 FUN_144ba3d20(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}



// FUNCTION 144ba3d30 FUN_144ba3d30 body=5 status=ok
// SIG undefined FUN_144ba3d30(void)

void FUN_144ba3d30(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 144ba3d40 FUN_144ba3d40 body=5 status=ok
// SIG undefined FUN_144ba3d40(void)

undefined8 FUN_144ba3d40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144ba3d50 FUN_144ba3d50 body=5 status=ok
// SIG undefined FUN_144ba3d50(void)

undefined8 FUN_144ba3d50(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144ba3d60 FUN_144ba3d60 body=3 status=ok
// SIG undefined FUN_144ba3d60(void)

undefined4 FUN_144ba3d60(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 144ba3d70 FUN_144ba3d70 body=4 status=ok
// SIG undefined FUN_144ba3d70(void)

undefined4 FUN_144ba3d70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 144ba3d80 FUN_144ba3d80 body=4 status=ok
// SIG undefined FUN_144ba3d80(void)

undefined4 FUN_144ba3d80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 144ba3d90 FUN_144ba3d90 body=4 status=ok
// SIG undefined FUN_144ba3d90(void)

undefined4 FUN_144ba3d90(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 144ba3da0 FUN_144ba3da0 body=4 status=ok
// SIG undefined FUN_144ba3da0(void)

undefined4 FUN_144ba3da0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 144ba3db0 FUN_144ba3db0 body=4 status=ok
// SIG undefined FUN_144ba3db0(void)

undefined8 FUN_144ba3db0(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144ba3dc0 FUN_144ba3dc0 body=4 status=ok
// SIG undefined FUN_144ba3dc0(void)

undefined4 FUN_144ba3dc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 144ba3dd0 FUN_144ba3dd0 body=7 status=ok
// SIG undefined FUN_144ba3dd0(void)

undefined4 FUN_144ba3dd0(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}



// FUNCTION 144ba3de0 FUN_144ba3de0 body=4 status=ok
// SIG undefined FUN_144ba3de0(void)

undefined4 FUN_144ba3de0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// FUNCTION 144ba3df0 FUN_144ba3df0 body=68 status=ok
// SIG undefined FUN_144ba3df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ba3df0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res8 [8];
  
  if ((*(uint *)(*param_1 + 0x10) & 0x800) != 0) {
    iVar1 = FUN_144ba5290(param_1,0x25,0,local_res8,0x144ba3dfa);
    uVar2 = 0xffffffff;
    if (iVar1 == 1) {
      uVar2 = local_res8[0];
    }
    return uVar2;
  }
  return *(undefined4 *)(*param_1 + 0xc);
}



// FUNCTION 144ba3e40 FUN_144ba3e40 body=5 status=ok
// SIG undefined FUN_144ba3e40(void)

longlong FUN_144ba3e40(longlong param_1)

{
  return param_1 + 0x18;
}



// FUNCTION 144ba3e50 FUN_144ba3e50 body=5 status=ok
// SIG undefined FUN_144ba3e50(void)

longlong FUN_144ba3e50(longlong param_1)

{
  return param_1 + 0x28;
}



// FUNCTION 144ba3e60 FUN_144ba3e60 body=5 status=ok
// SIG undefined FUN_144ba3e60(void)

longlong FUN_144ba3e60(longlong param_1)

{
  return param_1 + 0x38;
}



// FUNCTION 144ba3e70 FUN_144ba3e70 body=4 status=ok
// SIG undefined FUN_144ba3e70(void)

undefined4 FUN_144ba3e70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// FUNCTION 144ba3e80 FUN_144ba3e80 body=4 status=ok
// SIG undefined FUN_144ba3e80(void)

void FUN_144ba3e80(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// FUNCTION 144ba3e90 FUN_144ba3e90 body=5 status=ok
// SIG undefined FUN_144ba3e90(void)

undefined8 FUN_144ba3e90(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// FUNCTION 144ba3ea0 FUN_144ba3ea0 body=27 status=ok
// SIG undefined FUN_144ba3ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba3ea0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144ba3eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



// FUNCTION 144ba3ec0 FUN_144ba3ec0 body=4 status=ok
// SIG undefined FUN_144ba3ec0(void)

void FUN_144ba3ec0(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2;
  return;
}



// FUNCTION 144ba3ed0 FUN_144ba3ed0 body=6 status=ok
// SIG undefined FUN_144ba3ed0(void)

void FUN_144ba3ed0(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2;
  return;
}



// FUNCTION 144ba3ee0 FUN_144ba3ee0 body=6 status=ok
// SIG undefined FUN_144ba3ee0(void)

uint FUN_144ba3ee0(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x10) & param_2;
}



// FUNCTION 144ba3ef0 FUN_144ba3ef0 body=4 status=ok
// SIG undefined FUN_144ba3ef0(void)

void FUN_144ba3ef0(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | param_2;
  return;
}



// FUNCTION 144ba3f00 FUN_144ba3f00 body=6 status=ok
// SIG undefined FUN_144ba3f00(void)

uint FUN_144ba3f00(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x6c) & param_2;
}



// FUNCTION 144ba3f10 FUN_144ba3f10 body=236 status=ok
// SIG undefined FUN_144ba3f10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ba3f10(int *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 < 0x1a6) {
    if (iVar3 == 0x1a5) {
switchD_144ba3f9a_caseD_28a:
      return 0x1a5;
    }
    switch(iVar3) {
    case 5:
    case 0x61:
      return 5;
    case 0x1e:
    case 0x3d:
      goto switchD_144ba3f56_caseD_1e;
    case 0x25:
    case 0x62:
    case 0xa6:
      return 0x25;
    }
  }
  else {
    switch(iVar3) {
    case 0x1a9:
    case 0x28b:
    case 0x28e:
      return 0x1a9;
    case 0x1ad:
    case 0x28c:
    case 0x28f:
      return 0x1ad;
    case 0x28a:
    case 0x28d:
      goto switchD_144ba3f9a_caseD_28a;
    case 0x290:
    case 0x291:
    case 0x292:
    case 0x293:
switchD_144ba3f56_caseD_1e:
      return 0x1e;
    }
  }
  uVar1 = FUN_144ea8d60(iVar3);
  lVar2 = FUN_144ea9bf0(uVar1);
  if (lVar2 == 0) {
    iVar3 = 0;
  }
  FUN_144ed0860(uVar1);
  return iVar3;
}



// FUNCTION 144ba41b0 FUN_144ba41b0 body=214 status=ok
// SIG undefined FUN_144ba41b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ba41b0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ba41c0;
  piVar1 = (int *)*param_1;
  iVar2 = -1;
  if (*(code **)(piVar1 + 0xe) == (code *)0x0) {
    if (((uint)piVar1[4] >> 0xc & 1) != 0) {
      uVar3 = piVar1[4] & 0xf0007;
      if (uVar3 < 6) {
LAB_144ba4207:
        iVar2 = FUN_144ba4350();
        goto LAB_144ba420c;
      }
      if ((7 < uVar3) && (uVar3 != 0x10001)) {
        if (uVar3 == 0x10002) {
          if (*piVar1 == 0xf6) {
            FUN_144ed0590(param_2,5);
          }
          return 1;
        }
        if (uVar3 != 0x10003) goto LAB_144ba4207;
      }
      iVar2 = -2;
    }
  }
  else {
    iVar2 = (**(code **)(piVar1 + 0xe))();
LAB_144ba420c:
    if (0 < iVar2) goto LAB_144ba4273;
  }
  uVar4 = 0x7a;
  if (iVar2 == -2) {
    uVar4 = 0xe4;
  }
  FUN_144ba24f0(6,0xcd,uVar4,"crypto\\evp\\evp_lib.c",0x2e,uVar5);
LAB_144ba4273:
  if (iVar2 < -1) {
    iVar2 = -1;
  }
  return iVar2;
}



// FUNCTION 144ba4290 FUN_144ba4290 body=185 status=ok
// SIG undefined FUN_144ba4290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ba4290(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ba42a0;
  iVar2 = -1;
  pcVar1 = *(code **)(*param_1 + 0x40);
  if (pcVar1 == (code *)0x0) {
    uVar3 = *(uint *)(*param_1 + 0x10);
    if ((uVar3 >> 0xc & 1) != 0) {
      uVar3 = uVar3 & 0xf0007;
      if (uVar3 < 6) {
LAB_144ba42e4:
        iVar2 = FUN_144ba43f0();
        goto LAB_144ba42e9;
      }
      if ((7 < uVar3) && (uVar3 != 0x10001)) {
        if (uVar3 == 0x10002) {
          return 1;
        }
        if (uVar3 != 0x10003) goto LAB_144ba42e4;
      }
      iVar2 = -2;
    }
  }
  else {
    iVar2 = (*pcVar1)();
LAB_144ba42e9:
    if (0 < iVar2) goto LAB_144ba4336;
  }
  uVar4 = 0x7a;
  if (iVar2 == -2) {
    uVar4 = 0x6b;
  }
  FUN_144ba24f0(6,0xcc,uVar4,"crypto\\evp\\evp_lib.c",0x51,uVar5);
LAB_144ba4336:
  if (iVar2 < -1) {
    iVar2 = -1;
  }
  return iVar2;
}



// FUNCTION 144ba4350 FUN_144ba4350 body=153 status=ok
// SIG undefined FUN_144ba4350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba4350(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_res10 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(uint *)(*param_1 + 0x10) & 0x800) == 0) {
    uVar3 = *(uint *)(*param_1 + 0xc);
  }
  else {
    iVar1 = FUN_144ba5290(param_1,0x25,0,local_res10);
    uVar3 = 0xffffffff;
    if (iVar1 == 1) {
      uVar3 = local_res10[0];
    }
  }
  if (0x10 < uVar3) {
    FUN_144ecfe40("assertion failed: j <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x6f);
  }
  uVar2 = FUN_144ed1200(param_2,param_1 + 3,uVar3);
  return uVar2;
}



// FUNCTION 144ba43f0 FUN_144ba43f0 body=181 status=ok
// SIG undefined FUN_144ba43f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ba43f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_res10 [2];
  
  uVar2 = 0;
  if (param_2 != 0) {
    if ((*(uint *)(*param_1 + 0x10) & 0x800) == 0) {
      uVar3 = *(uint *)(*param_1 + 0xc);
    }
    else {
      iVar1 = FUN_144ba5290(param_1,0x25,0,local_res10);
      uVar3 = 0xffffffff;
      if (iVar1 == 1) {
        uVar3 = local_res10[0];
      }
    }
    if (0x10 < uVar3) {
      FUN_144ecfe40("assertion failed: l <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x5e);
    }
    uVar2 = FUN_144ed1280(param_2,param_1 + 3,uVar3);
    if (uVar2 == uVar3) {
      if (0 < (int)uVar2) {
        memcpy(param_1 + 5,param_1 + 3,(ulonglong)uVar3);
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 144ba44b0 FUN_144ba44b0 body=378 status=ok
// SIG undefined FUN_144ba44b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba44b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ba44c0;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    if (param_2[1] != 0) {
      iVar2 = FUN_144ec6850();
      if (iVar2 == 0) {
        uVar4 = 0x2b6;
        uVar3 = 0x26;
        goto LAB_144ba4607;
      }
    }
    FUN_144ba50e0(param_1);
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    lVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    lVar1 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    lVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = lVar1;
    lVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = lVar1;
    lVar1 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar1;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
    lVar1 = param_2[0x11];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x8c);
    *(int *)(param_1 + 0x10) = (int)param_2[0x10];
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
    *(int *)(param_1 + 0x11) = (int)lVar1;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x94);
    lVar1 = param_2[0x13];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x9c);
    *(int *)(param_1 + 0x12) = (int)param_2[0x12];
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
    *(int *)(param_1 + 0x13) = (int)lVar1;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
    if ((param_2[0xe] != 0) && (*(int *)(*param_2 + 0x30) != 0)) {
      _Dst = (void *)FUN_144ea64e0((longlong)*(int *)(*param_2 + 0x30),"crypto\\evp\\evp_enc.c",
                                   0x2bf);
      param_1[0xe] = (longlong)_Dst;
      if (_Dst == (void *)0x0) {
        *param_1 = 0;
        uVar3 = 0x41;
        uVar4 = 0x2c2;
        goto LAB_144ba4607;
      }
      memcpy(_Dst,(void *)param_2[0xe],(longlong)*(int *)(*param_2 + 0x30));
    }
    if ((*(uint *)(*param_2 + 0x10) & 0x400) != 0) {
      iVar2 = (**(code **)(*param_2 + 0x48))(param_2,8,0,param_1);
      if (iVar2 == 0) {
        *param_1 = 0;
        uVar3 = 0x86;
        uVar4 = 0x2cb;
        goto LAB_144ba4607;
      }
    }
    return 1;
  }
  uVar4 = 0x2b0;
  uVar3 = 0x6f;
LAB_144ba4607:
  FUN_144ba24f0(6,0xa3,uVar3,"crypto\\evp\\evp_enc.c",uVar4,uVar5);
  return 0;
}



// FUNCTION 144ba4630 FUN_144ba4630 body=41 status=ok
// SIG undefined FUN_144ba4630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba4630(void)

{
  FUN_144ba4d00();
  return;
}



// FUNCTION 144ba4660 FUN_144ba4660 body=65 status=ok
// SIG undefined FUN_144ba4660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba4660(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_144ba24f0(6,0xa7,0x94,"crypto\\evp\\evp_enc.c",0x193);
    return 0;
  }
  uVar1 = FUN_144ba53f0();
  return uVar1;
}



// FUNCTION 144ba46b0 FUN_144ba46b0 body=329 status=ok
// SIG undefined FUN_144ba46b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba46b0(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ba46c6;
  if ((int)param_1[2] == 0) {
    FUN_144ba24f0(6,0x7f,0x94,"crypto\\evp\\evp_enc.c",0x1a8,0x144ba46c6);
    return 0;
  }
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 0x10) & 0x100000) == 0) {
    uVar2 = *(uint *)(lVar3 + 4);
    if (0x20 < uVar2) {
      FUN_144ecfe40("assertion failed: b <= sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",0x1b6);
    }
    if (uVar2 != 1) {
      uVar1 = *(uint *)((longlong)param_1 + 0x14);
      if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) == 0) {
        if (uVar1 < uVar2) {
          puVar4 = (undefined1 *)((longlong)param_1 + (ulonglong)uVar1 + 0x38);
          for (lVar3 = (longlong)(int)(uVar2 - uVar1); lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar4 = (char)(uVar2 - uVar1);
            puVar4 = puVar4 + 1;
          }
        }
        uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,uVar2);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        *param_3 = uVar2;
        return uVar5;
      }
      if (uVar1 != 0) {
        FUN_144ba24f0(6,0x7f,0x8a,"crypto\\evp\\evp_enc.c",0x1bf,uVar5);
        return 0;
      }
    }
    *param_3 = 0;
    return 1;
  }
  uVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,0,0);
  if ((int)uVar2 < 0) {
    return 0;
  }
  *param_3 = uVar2;
  return 1;
}



// FUNCTION 144ba4800 FUN_144ba4800 body=22 status=ok
// SIG undefined FUN_144ba4800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba4800(void)

{
  FUN_144ba46b0();
  return;
}



// FUNCTION 144ba4820 FUN_144ba4820 body=41 status=ok
// SIG undefined FUN_144ba4820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba4820(void)

{
  FUN_144ba4d00();
  return;
}



// FUNCTION 144ba4850 FUN_144ba4850 body=700 status=ok
// SIG undefined FUN_144ba4850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ba4850(longlong *param_1,void *param_2,int *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong _Size;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144ba4868;
  uVar6 = (ulonglong)(int)param_5;
  if ((int)param_1[2] != 0) {
    FUN_144ba24f0(6,0xa6,0x94,"crypto\\evp\\evp_enc.c",0x1da,0x144ba4868);
    return 0;
  }
  uVar1 = *(uint *)(*param_1 + 4);
  _Size = (ulonglong)uVar1;
  iVar3 = FUN_144ba3f00(param_1,0x2000);
  uVar5 = uVar6;
  if (iVar3 != 0) {
    uVar5 = uVar6 + 7 >> 3;
  }
  if (((int)param_5 < 0) ||
     ((param_5 == 0 && (uVar4 = FUN_144ba3da0(*param_1), (uVar4 & 0xf0007) != 7)))) {
    *param_3 = 0;
    return (ulonglong)(param_5 == 0);
  }
  if ((*(uint *)(*param_1 + 0x10) & 0x100000) == 0) {
    if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) != 0) {
      uVar6 = FUN_144ba53f0(param_1,param_2,param_3,param_4,param_5);
      return uVar6;
    }
    if (0x20 < uVar1) {
      FUN_144ecfe40("assertion failed: b <= sizeof(ctx->final)","crypto\\evp\\evp_enc.c",0x200);
    }
    if ((int)param_1[0xf] == 0) {
      bVar2 = false;
    }
    else {
      if ((param_2 == param_4) ||
         (uVar1 != 0 &&
          ((-_Size < (ulonglong)((longlong)param_2 - (longlong)param_4) ||
           (ulonglong)((longlong)param_2 - (longlong)param_4) < _Size) && param_2 != param_4))) {
        uVar7 = 0x206;
        goto LAB_144ba4a69;
      }
      if (0x7fffffff - uVar1 < (~(uVar1 - 1) & param_5)) {
        FUN_144ba24f0(6,0xa6,0xb8,"crypto\\evp\\evp_enc.c",0x213,uVar8);
        return 0;
      }
      memcpy(param_2,param_1 + 0x10,_Size);
      param_2 = (void *)((longlong)param_2 + _Size);
      bVar2 = true;
    }
    iVar3 = FUN_144ba53f0(param_1,param_2,param_3,param_4,param_5);
    if (iVar3 != 0) {
      if ((uVar1 < 2) || (*(int *)((longlong)param_1 + 0x14) != 0)) {
        *(undefined4 *)(param_1 + 0xf) = 0;
      }
      else {
        *param_3 = *param_3 - uVar1;
        *(undefined4 *)(param_1 + 0xf) = 1;
        memcpy(param_1 + 0x10,(void *)((longlong)*param_3 + (longlong)param_2),_Size);
      }
      if (bVar2) {
        *param_3 = *param_3 + uVar1;
      }
      return 1;
    }
  }
  else {
    if ((uVar1 != 1) ||
       (uVar5 == 0 ||
        ((ulonglong)((longlong)param_2 - (longlong)param_4) <= -uVar5 &&
         uVar5 <= (ulonglong)((longlong)param_2 - (longlong)param_4) || param_2 == param_4))) {
      iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,uVar6);
      if (iVar3 < 0) {
        *param_3 = 0;
        return 0;
      }
      *param_3 = iVar3;
      return 1;
    }
    uVar7 = 0x1f0;
LAB_144ba4a69:
    FUN_144ba24f0(6,0xa6,0xa2,"crypto\\evp\\evp_enc.c",uVar7,uVar8);
  }
  return 0;
}



// FUNCTION 144ba4b10 FUN_144ba4b10 body=22 status=ok
// SIG undefined FUN_144ba4b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba4b10(void)

{
  FUN_144ba4b30();
  return;
}



// FUNCTION 144ba4b30 FUN_144ba4b30 body=464 status=ok
// SIG undefined FUN_144ba4b30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba4b30(longlong *param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144ba4b46;
  if ((int)param_1[2] != 0) {
    FUN_144ba24f0(6,0x65,0x94,"crypto\\evp\\evp_enc.c",0x23e,0x144ba4b46);
    return 0;
  }
  iVar2 = 0;
  *param_3 = 0;
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 0x10) & 0x100000) != 0) {
    iVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2,0,0);
    if (-1 < iVar2) {
      *param_3 = iVar2;
      return 1;
    }
    return 0;
  }
  uVar4 = *(uint *)(lVar3 + 4);
  uVar6 = (ulonglong)uVar4;
  if ((*(uint *)((longlong)param_1 + 0x6c) & 0x100) == 0) {
    if (1 < uVar4) {
      if ((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[0xf] != 0)) {
        if (0x20 < uVar4) {
          FUN_144ecfe40("assertion failed: b <= sizeof(ctx->final)","crypto\\evp\\evp_enc.c",0x25c);
        }
        bVar1 = *(byte *)((ulonglong)(uVar4 - 1) + 0x80 + (longlong)param_1);
        if ((bVar1 != 0) && ((int)(uint)bVar1 <= (int)uVar4)) {
          uVar4 = (uint)bVar1;
          if (bVar1 != 0) {
            do {
              uVar6 = (ulonglong)((int)uVar6 - 1);
              if (*(byte *)(uVar6 + 0x80 + (longlong)param_1) != uVar4) {
                uVar7 = 0x269;
                goto LAB_144ba4c9b;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)uVar4);
          }
          iVar2 = *(int *)(*param_1 + 4) - uVar4;
          lVar3 = (longlong)iVar2;
          if (0 < iVar2) {
            puVar5 = param_2;
            do {
              *puVar5 = puVar5[(longlong)param_1 + (0x80 - (longlong)param_2)];
              puVar5 = puVar5 + 1;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          *param_3 = iVar2;
          return 1;
        }
        uVar7 = 0x264;
LAB_144ba4c9b:
        FUN_144ba24f0(6,0x65,100,"crypto\\evp\\evp_enc.c",uVar7,uVar8);
        return 0;
      }
      uVar7 = 0x259;
      uVar8 = 0x6d;
      goto LAB_144ba4cc5;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x14) != 0) {
    uVar7 = 0x251;
    uVar8 = 0x8a;
LAB_144ba4cc5:
    FUN_144ba24f0(6,0x65,uVar8,"crypto\\evp\\evp_enc.c",uVar7,0x144ba4b46);
    return 0;
  }
  *param_3 = 0;
  return 1;
}



// FUNCTION 144ba4d00 FUN_144ba4d00 body=815 status=ok
// SIG undefined FUN_144ba4d00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba4d00(longlong *param_1,int *param_2,longlong param_3,longlong param_4,longlong *param_5,
             int param_6)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *_Src;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144ba4d1f;
  if (param_6 == -1) {
    uVar7 = *(uint *)(param_1 + 2);
  }
  else {
    uVar7 = (uint)(param_6 != 0);
    *(uint *)(param_1 + 2) = uVar7;
  }
  if (((param_1[1] == 0) || ((int *)*param_1 == (int *)0x0)) ||
     ((param_2 != (int *)0x0 && (*param_2 != *(int *)*param_1)))) {
    if (param_2 != (int *)0x0) {
      if (((*param_1 != 0) || (param_1[1] != 0)) || (param_1[0xe] != 0)) {
        uVar6 = *(undefined4 *)((longlong)param_1 + 0x6c);
        FUN_144ba50e0(param_1);
        *(uint *)(param_1 + 2) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
      }
      if (param_3 == 0) {
        param_3 = FUN_144ed1ca0(*param_2);
LAB_144ba4de8:
        if (param_3 == 0) {
          param_1[1] = 0;
        }
        else {
          param_2 = (int *)FUN_144ed1c40(param_3,*param_2);
          if (param_2 == (int *)0x0) {
            FUN_144ec6930(param_3);
            uVar8 = 0x71;
            goto LAB_144ba4dbd;
          }
          param_1[1] = param_3;
        }
        *param_1 = (longlong)param_2;
        if (param_2[0xc] == 0) {
          param_1[0xe] = 0;
        }
        else {
          lVar3 = FUN_144ea6670((longlong)param_2[0xc],"crypto\\evp\\evp_enc.c",0x81);
          param_1[0xe] = lVar3;
          if (lVar3 == 0) {
            *param_1 = 0;
            uVar6 = 0x41;
            uVar8 = 0x84;
            goto LAB_144ba4dc3;
          }
        }
        iVar1 = param_2[2];
        *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 1;
        *(int *)(param_1 + 0xd) = iVar1;
        if (((*(byte *)(*param_1 + 0x10) & 0x40) == 0) ||
           (iVar1 = FUN_144ba5290(param_1,0,0,0), iVar1 != 0)) goto LAB_144ba4eab;
        *param_1 = 0;
        uVar8 = 0x90;
      }
      else {
        iVar1 = FUN_144ec6850(param_3);
        if (iVar1 != 0) goto LAB_144ba4de8;
        uVar8 = 0x66;
      }
LAB_144ba4dbd:
      uVar6 = 0x86;
      goto LAB_144ba4dc3;
    }
    if (*param_1 == 0) {
      uVar8 = 0x95;
      uVar6 = 0x83;
      goto LAB_144ba4dc3;
    }
  }
LAB_144ba4eab:
  if ((0x10 < *(uint *)(*param_1 + 4)) || ((0x10102U >> (*(uint *)(*param_1 + 4) & 0x1f) & 1) == 0))
  {
    FUN_144ecfe40("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                  ,"crypto\\evp\\evp_enc.c",0x9e);
  }
  if ((*(byte *)((longlong)param_1 + 0x6c) & 1) == 0) {
    uVar4 = FUN_144ba3db0(param_1);
    uVar2 = FUN_144ba3da0(uVar4);
    if ((uVar2 & 0xf0007) == 0x10002) {
      uVar8 = 0xa2;
      uVar6 = 0xaa;
LAB_144ba4dc3:
      FUN_144ba24f0(6,0x7b,uVar6,"crypto\\evp\\evp_enc.c",uVar8,uVar9);
      return 0;
    }
  }
  uVar9 = FUN_144ba3db0(param_1);
  uVar5 = FUN_144ba3da0(uVar9);
  if ((uVar5 & 0x10) == 0) {
    uVar9 = FUN_144ba3db0(param_1);
    uVar2 = FUN_144ba3da0(uVar9);
    switch(uVar2 & 0xf0007) {
    case 0:
    case 1:
      goto switchD_144ba4f5a_caseD_0;
    case 3:
    case 4:
      *(undefined4 *)(param_1 + 0xb) = 0;
    case 2:
      iVar1 = FUN_144ba3df0(param_1);
      if (0x10 < iVar1) {
        FUN_144ecfe40("assertion failed: EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)",
                      "crypto\\evp\\evp_enc.c",0xb6);
      }
      if (param_5 != (longlong *)0x0) {
        iVar1 = FUN_144ba3df0(param_1);
        memcpy(param_1 + 3,param_5,(longlong)iVar1);
      }
      iVar1 = FUN_144ba3df0(param_1);
      _Src = param_1 + 3;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0xb) = 0;
      if (param_5 == (longlong *)0x0) goto switchD_144ba4f5a_caseD_0;
      iVar1 = FUN_144ba3df0(param_1);
      _Src = param_5;
      break;
    default:
      goto LAB_144ba5010;
    }
    memcpy(param_1 + 5,_Src,(longlong)iVar1);
  }
switchD_144ba4f5a_caseD_0:
  if (((param_4 == 0) && ((*(byte *)(*param_1 + 0x10) & 0x20) == 0)) ||
     (iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_4,param_5,uVar7), iVar1 != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(int *)((longlong)param_1 + 0x7c) = *(int *)(*param_1 + 4) + -1;
    return 1;
  }
LAB_144ba5010:
  return 0;
}



// FUNCTION 144ba5050 FUN_144ba5050 body=47 status=ok
// SIG undefined FUN_144ba5050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba5050(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_144ba53f0();
    return;
  }
  FUN_144ba4850();
  return;
}



// FUNCTION 144ba5080 FUN_144ba5080 body=37 status=ok
// SIG undefined FUN_144ba5080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba5080(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_144ba46b0();
    return;
  }
  FUN_144ba4b30();
  return;
}



// FUNCTION 144ba50b0 FUN_144ba50b0 body=36 status=ok
// SIG undefined FUN_144ba50b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba50b0(void)

{
  FUN_144ea6670(0xa0,"crypto\\evp\\evp_enc.c",0x2b);
  return;
}



// FUNCTION 144ba50e0 FUN_144ba50e0 body=135 status=ok
// SIG undefined FUN_144ba50e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba50e0(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x28);
      if (pcVar1 != (code *)0x0) {
        uVar2 = (*pcVar1)();
        if ((int)uVar2 == 0) {
          return uVar2;
        }
      }
      if ((param_1[0xe] != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
        FUN_14259f0c0();
      }
    }
    FUN_144ea6530(param_1[0xe],"crypto\\evp\\evp_enc.c",0x21);
    FUN_144ec6930(param_1[1]);
    memset(param_1,0,0xa0);
  }
  return 1;
}



// FUNCTION 144ba5170 FUN_144ba5170 body=49 status=ok
// SIG undefined FUN_144ba5170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba5170(undefined8 param_1)

{
  FUN_144ba50e0();
  FUN_144ea6530(param_1,"crypto\\evp\\evp_enc.c",0x31);
  return;
}



// FUNCTION 144ba51b0 FUN_144ba51b0 body=184 status=ok
// SIG undefined FUN_144ba51b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba51b0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  if ((char)*(uint *)(lVar1 + 0x10) < '\0') {
    if (lVar1 == 0) {
      uVar4 = 0x292;
      uVar2 = 0x7c;
      uVar3 = 0x83;
    }
    else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
      uVar4 = 0x297;
      uVar2 = 0x7c;
      uVar3 = 0x84;
    }
    else {
      uVar3 = (**(code **)(lVar1 + 0x48))(param_1,1,param_2);
      if ((int)uVar3 != -1) {
        return uVar3;
      }
      uVar4 = 0x29e;
      uVar2 = 0x7c;
      uVar3 = 0x85;
    }
  }
  else {
    if ((int)param_1[0xd] == param_2) {
      return 1;
    }
    if ((0 < param_2) && ((*(uint *)(lVar1 + 0x10) & 8) != 0)) {
      *(int *)(param_1 + 0xd) = param_2;
      return 1;
    }
    uVar2 = 0x7a;
    uVar4 = 0x280;
    uVar3 = 0x82;
  }
  FUN_144ba24f0(6,uVar2,uVar3,"crypto\\evp\\evp_enc.c",uVar4);
  return 0;
}



// FUNCTION 144ba5270 FUN_144ba5270 body=25 status=ok
// SIG undefined FUN_144ba5270(void)

undefined8 FUN_144ba5270(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffeff;
    return 1;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x100;
  return 1;
}



// FUNCTION 144ba5290 FUN_144ba5290 body=110 status=ok
// SIG undefined FUN_144ba5290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba5290(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 0x292;
    uVar2 = 0x83;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x48);
    if (pcVar1 == (code *)0x0) {
      uVar3 = 0x297;
      uVar2 = 0x84;
    }
    else {
      uVar2 = (*pcVar1)();
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      uVar3 = 0x29e;
      uVar2 = 0x85;
    }
  }
  FUN_144ba24f0(6,0x7c,uVar2,"crypto\\evp\\evp_enc.c",uVar3);
  return 0;
}



// FUNCTION 144ba5300 FUN_144ba5300 body=162 status=ok
// SIG undefined FUN_144ba5300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ba5300(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar1 = *param_1;
  if ((*(uint *)(lVar1 + 0x10) & 0x200) == 0) {
    iVar3 = FUN_144bac8c0(param_2,(int)param_1[0xd]);
    return (uint)(0 < iVar3);
  }
  if (lVar1 == 0) {
    uVar5 = 0x292;
    uVar4 = 0x83;
  }
  else if (*(code **)(lVar1 + 0x48) == (code *)0x0) {
    uVar5 = 0x297;
    uVar4 = 0x84;
  }
  else {
    uVar2 = (**(code **)(lVar1 + 0x48))(param_1,6,0,param_2);
    if (uVar2 != 0xffffffff) {
      return uVar2;
    }
    uVar5 = 0x29e;
    uVar4 = 0x85;
  }
  FUN_144ba24f0(6,0x7c,uVar4,"crypto\\evp\\evp_enc.c",uVar5);
  return 0;
}



// FUNCTION 144ba53b0 FUN_144ba53b0 body=63 status=ok
// SIG undefined FUN_144ba53b0(void)

bool FUN_144ba53b0(longlong param_1,longlong param_2,ulonglong param_3)

{
  return ((-param_3 < (ulonglong)(param_1 - param_2) || (ulonglong)(param_1 - param_2) < param_3) &&
         param_1 != param_2) && param_3 != 0;
}



// FUNCTION 144ba53f0 FUN_144ba53f0 body=719 status=ok
// SIG undefined FUN_144ba53f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ba53f0(longlong *param_1,void *param_2,uint *param_3,void *param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  size_t sVar7;
  size_t _Size;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x144ba540d;
  _Size = (size_t)(int)param_5;
  iVar2 = FUN_144ba3f00(param_1,0x2000);
  sVar7 = _Size;
  if (iVar2 != 0) {
    sVar7 = _Size + 7 >> 3;
  }
  uVar4 = *(uint *)(*param_1 + 4);
  if (((int)param_5 < 0) || ((param_5 == 0 && (uVar3 = FUN_144ba3da0(), (uVar3 & 0xf0007) != 7)))) {
    *param_3 = 0;
    return param_5 == 0;
  }
  lVar1 = *param_1;
  if ((*(uint *)(lVar1 + 0x10) & 0x100000) == 0) {
    iVar2 = *(int *)((longlong)param_1 + 0x14);
    uVar5 = ((longlong)iVar2 - (longlong)param_4) + (longlong)param_2;
    if (sVar7 == 0 || (uVar5 <= -sVar7 && sVar7 <= uVar5 || uVar5 == 0)) {
      if ((iVar2 == 0) && ((*(uint *)((longlong)param_1 + 0x7c) & param_5) == 0)) {
        iVar2 = (**(code **)(lVar1 + 0x20))(param_1,param_2,param_4,_Size);
        if (iVar2 == 0) {
          *param_3 = 0;
          return false;
        }
        *param_3 = param_5;
        return true;
      }
      if (0x20 < (int)uVar4) {
        FUN_144ecfe40("assertion failed: bl <= (int)sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",0x15f
                     );
      }
      if (iVar2 == 0) {
        *param_3 = 0;
LAB_144ba564d:
        uVar4 = uVar4 - 1 & param_5;
        iVar2 = param_5 - uVar4;
        if (0 < iVar2) {
          iVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,(longlong)iVar2);
          if (iVar6 == 0) {
            return false;
          }
          *param_3 = *param_3 + iVar2;
        }
        if (uVar4 != 0) {
          memcpy(param_1 + 7,(void *)((longlong)iVar2 + (longlong)param_4),(longlong)(int)uVar4);
        }
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
        return true;
      }
      iVar6 = uVar4 - iVar2;
      if ((int)param_5 < iVar6) {
        memcpy((void *)((longlong)param_1 + (longlong)iVar2 + 0x38),param_4,_Size);
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + param_5;
        *param_3 = 0;
        return true;
      }
      param_5 = param_5 - iVar6;
      if ((int)(~(uVar4 - 1) & param_5) <= (int)(0x7fffffff - uVar4)) {
        memcpy((void *)((longlong)param_1 + (longlong)iVar2 + 0x38),param_4,(longlong)iVar6);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar6);
        iVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,(longlong)(int)uVar4);
        if (iVar2 == 0) {
          return false;
        }
        param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar4);
        *param_3 = uVar4;
        goto LAB_144ba564d;
      }
      uVar9 = 0x172;
      uVar8 = 0xb8;
      goto LAB_144ba54bf;
    }
    uVar9 = 0x151;
  }
  else {
    if ((uVar4 != 1) ||
       (sVar7 == 0 ||
        ((ulonglong)((longlong)param_2 - (longlong)param_4) <= -sVar7 &&
         sVar7 <= (ulonglong)((longlong)param_2 - (longlong)param_4) || param_2 == param_4))) {
      uVar4 = (**(code **)(lVar1 + 0x20))(param_1,param_2,param_4,_Size);
      if ((int)uVar4 < 0) {
        return false;
      }
      *param_3 = uVar4;
      return true;
    }
    uVar9 = 0x144;
  }
  uVar8 = 0xa2;
LAB_144ba54bf:
  FUN_144ba24f0(6,0xdb,uVar8,"crypto\\evp\\evp_enc.c",uVar9,uVar10);
  return false;
}



// FUNCTION 144ba56c0 FUN_144ba56c0 body=54 status=ok
// SIG undefined FUN_144ba56c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ba56c0(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x40), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return 0 < iVar2;
  }
  return false;
}



// FUNCTION 144ba5700 FUN_144ba5700 body=36 status=ok
// SIG undefined FUN_144ba5700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba5700(void)

{
  FUN_144ea6670(0x30,"crypto\\evp\\digest.c",0x3e);
  return;
}



// FUNCTION 144ba5730 FUN_144ba5730 body=194 status=ok
// SIG undefined FUN_144ba5730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba5730(longlong *param_1)

{
  int iVar1;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      if (*(longlong *)(*param_1 + 0x30) != 0) {
        iVar1 = FUN_144ba3ee0(param_1,2);
        if (iVar1 == 0) {
          (**(code **)(*param_1 + 0x30))(param_1);
        }
      }
      if ((param_1[3] != 0) && (0 < *(int *)(*param_1 + 0x3c))) {
        iVar1 = FUN_144ba3ee0(param_1,4);
        if (iVar1 == 0) {
          FUN_144ea66f0(param_1[3],(longlong)*(int *)(*param_1 + 0x3c),"crypto\\evp\\digest.c",0x1c)
          ;
          param_1[3] = 0;
        }
      }
    }
    iVar1 = FUN_144ba3ee0(param_1,0x400);
    if (iVar1 == 0) {
      FUN_144ed16b0(param_1[4]);
    }
    FUN_144ec6930(param_1[1]);
    FUN_14259f0c0(param_1,0x30);
  }
  return 1;
}



// FUNCTION 144ba5800 FUN_144ba5800 body=49 status=ok
// SIG undefined FUN_144ba5800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba5800(undefined8 param_1)

{
  FUN_144ba5730();
  FUN_144ea6530(param_1,"crypto\\evp\\digest.c",0x44);
  return;
}



// FUNCTION 144ba5840 FUN_144ba5840 body=479 status=ok
// SIG undefined FUN_144ba5840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba5840(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ba5850;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    FUN_144ba24f0(6,0x6e,0x6f,"crypto\\evp\\digest.c",0xe2,0x144ba5850);
    return 0;
  }
  if (param_2[1] != 0) {
    iVar4 = FUN_144ec6850();
    if (iVar4 == 0) {
      FUN_144ba24f0(6,0x6e,0x26,"crypto\\evp\\digest.c",0xe8,uVar6);
      return 0;
    }
  }
  if (*param_1 == *param_2) {
    lVar5 = param_1[3];
    FUN_144ba3ec0(param_1,4);
  }
  else {
    lVar5 = 0;
  }
  FUN_144ba5730(param_1);
  lVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar3 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar3 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 5) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  FUN_144ba3ed0(param_1,0x400);
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2[3] != 0) && (*(int *)(*param_1 + 0x3c) != 0)) {
    if (lVar5 == 0) {
      lVar5 = FUN_144ea64e0((longlong)*(int *)(*param_1 + 0x3c),"crypto\\evp\\digest.c",0x103);
      param_1[3] = lVar5;
      if (lVar5 == 0) {
        FUN_144ba24f0(6,0x6e,0x41,"crypto\\evp\\digest.c",0x105);
        return 0;
      }
    }
    else {
      param_1[3] = lVar5;
    }
    memcpy((void *)param_1[3],(void *)param_2[3],(longlong)*(int *)(*param_1 + 0x3c));
  }
  param_1[5] = param_2[5];
  if (param_2[4] != 0) {
    lVar5 = FUN_144ed1570();
    param_1[4] = lVar5;
    if (lVar5 == 0) {
      FUN_144ba5730(param_1);
      return 0;
    }
  }
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144ba59da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    return uVar6;
  }
  return 1;
}



// FUNCTION 144ba5a20 FUN_144ba5a20 body=579 status=ok
// SIG undefined FUN_144ba5a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba5a20(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ba5a35;
  FUN_144ba3ed0(param_1,2);
  if (((param_1[1] == 0) || ((int *)*param_1 == (int *)0x0)) ||
     ((param_2 != (int *)0x0 && (*param_2 != *(int *)*param_1)))) {
    if (param_2 == (int *)0x0) {
      param_2 = (int *)*param_1;
      if (param_2 == (int *)0x0) {
        FUN_144ba24f0(6,0x80,0x8b,"crypto\\evp\\digest.c",0x7f,uVar3);
        return 0;
      }
    }
    else {
      FUN_144ec6930();
      if (param_3 == 0) {
        param_3 = FUN_144ed1e30(*param_2);
      }
      else {
        iVar1 = FUN_144ec6850(param_3);
        if (iVar1 == 0) {
          FUN_144ba24f0(6,0x80,0x86,"crypto\\evp\\digest.c",100,uVar3);
          return 0;
        }
      }
      if (param_3 == 0) {
        param_1[1] = 0;
      }
      else {
        param_2 = (int *)FUN_144ed1dd0(param_3,*param_2);
        if (param_2 == (int *)0x0) {
          FUN_144ba24f0(6,0x80,0x86,"crypto\\evp\\digest.c",0x70);
          FUN_144ec6930(param_3);
          return 0;
        }
        param_1[1] = param_3;
      }
    }
    if ((int *)*param_1 != param_2) {
      FUN_144ba5f90(param_1,1);
      *param_1 = (longlong)param_2;
      if (((*(uint *)(param_1 + 2) & 0x100) == 0) && (param_2[0xf] != 0)) {
        param_1[5] = *(longlong *)(param_2 + 6);
        lVar2 = FUN_144ea6670((longlong)param_2[0xf],"crypto\\evp\\digest.c",0x8b);
        param_1[3] = lVar2;
        if (lVar2 == 0) {
          FUN_144ba24f0(6,0x80,0x41,"crypto\\evp\\digest.c",0x8d,uVar3);
          return 0;
        }
      }
    }
  }
  if (((param_1[4] != 0) &&
      (iVar1 = FUN_144ed1710(param_1[4],0xffffffff,0xf8,7,0,param_1), iVar1 < 1)) && (iVar1 != -2))
  {
    return 0;
  }
  if ((*(uint *)(param_1 + 2) & 0x100) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144ba5c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    return uVar3;
  }
  return 1;
}



// FUNCTION 144ba5c70 FUN_144ba5c70 body=35 status=ok
// SIG undefined FUN_144ba5c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba5c70(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000144ba5c8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x28))();
  return uVar1;
}



// FUNCTION 144ba5ca0 FUN_144ba5ca0 body=158 status=ok
// SIG undefined FUN_144ba5ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ba5ca0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (0x40 < *(int *)(*param_1 + 8)) {
    FUN_144ecfe40("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE",
                  "crypto\\evp\\digest.c",0xb7);
  }
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*param_1 + 8);
  }
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    FUN_144ba3ec0(param_1,2);
  }
  FUN_14259f0c0(param_1[3],(longlong)*(int *)(*param_1 + 0x3c));
  return uVar1;
}



// FUNCTION 144ba5d40 FUN_144ba5d40 body=206 status=ok
// SIG undefined FUN_144ba5d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144ba5d40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_144ea6670(0x30,"crypto\\evp\\digest.c",0x3e);
  if (lVar2 != 0) {
    uVar3 = 1;
    FUN_144ba3ec0(lVar2,1);
    iVar1 = FUN_144ba5a20(lVar2,param_5,param_6);
    if ((iVar1 == 0) ||
       (((param_2 != 0 && (iVar1 = (**(code **)(lVar2 + 0x28))(lVar2,param_1,param_2), iVar1 == 0))
        || (iVar1 = FUN_144ba5ca0(lVar2,param_3,param_4), iVar1 == 0)))) {
      uVar3 = 0;
    }
    FUN_144ba5730(lVar2);
    FUN_144ea6530(lVar2,"crypto\\evp\\digest.c",0x44);
    return uVar3;
  }
  return 0;
}



// FUNCTION 144ba5e10 FUN_144ba5e10 body=51 status=ok
// SIG undefined FUN_144ba5e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba5e10(undefined8 param_1,undefined8 param_2)

{
  FUN_144ba5730();
  FUN_144ba5840(param_1,param_2);
  return;
}



// FUNCTION 144ba5e50 FUN_144ba5e50 body=54 status=ok
// SIG undefined FUN_144ba5e50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba5e50(undefined8 param_1,undefined8 param_2)

{
  FUN_144ba5730();
  FUN_144ba5a20(param_1,param_2,0);
  return;
}



// FUNCTION 144ba5e90 FUN_144ba5e90 body=50 status=ok
// SIG undefined FUN_144ba5e90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ba5e90(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144ba5ca0();
  FUN_144ba5730(param_1);
  return uVar1;
}



// FUNCTION 144ba5ed0 FUN_144ba5ed0 body=177 status=ok
// SIG undefined FUN_144ba5ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ba5ed0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ba5ee0;
  if (((*(byte *)(*param_1 + 0xc) & 2) != 0) && (param_3 < 0x80000000)) {
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,3);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
        (**(code **)(*param_1 + 0x30))(param_1);
        FUN_144ba3ec0(param_1,2);
      }
      FUN_14259f0c0(param_1[3],(longlong)*(int *)(*param_1 + 0x3c));
      return uVar2;
    }
  }
  FUN_144ba24f0(6,0xae,0xb2,"crypto\\evp\\digest.c",0xd2,uVar3);
  return 0;
}



// FUNCTION 144ba5f90 FUN_144ba5f90 body=147 status=ok
// SIG undefined FUN_144ba5f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba5f90(longlong *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*(longlong *)(*param_1 + 0x30) != 0) {
      iVar1 = FUN_144ba3ee0(param_1,2);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1);
      }
    }
    if ((param_1[3] != 0) && (0 < *(int *)(*param_1 + 0x3c))) {
      iVar1 = FUN_144ba3ee0(param_1,4);
      if ((iVar1 == 0) || (param_2 != 0)) {
        FUN_144ea66f0(param_1[3],(longlong)*(int *)(*param_1 + 0x3c),"crypto\\evp\\digest.c",0x1c);
        param_1[3] = 0;
      }
    }
  }
  return;
}



// FUNCTION 144ba6030 FUN_144ba6030 body=139 status=ok
// SIG undefined FUN_144ba6030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba6030(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x20) + 0xd0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144ba6073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  if (param_2 != 0) {
    iVar1 = FUN_144ba5c70(param_1,param_4,param_5);
    if (iVar1 < 1) {
      return 0;
    }
  }
  uVar2 = FUN_144ba6180(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 144ba60c0 FUN_144ba60c0 body=135 status=ok
// SIG undefined FUN_144ba60c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba60c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x20) + 0xd8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144ba6103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  iVar1 = FUN_144ba5c70(param_1,param_4,param_5);
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  uVar2 = FUN_144ba6390(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 144ba6150 FUN_144ba6150 body=41 status=ok
// SIG undefined FUN_144ba6150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba6150(void)

{
  FUN_144ba6500();
  return;
}



// FUNCTION 144ba6180 FUN_144ba6180 body=462 status=ok
// SIG undefined FUN_144ba6180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba6180(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144ba6192;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)param_1[4];
  lVar4 = *plVar3;
  if ((*(byte *)(lVar4 + 4) & 4) == 0) {
    pcVar1 = *(code **)(lVar4 + 0x78);
    if (param_2 == 0) {
      if (pcVar1 == (code *)0x0) {
        iVar2 = FUN_144ba3cd0(*param_1);
        if (-1 < iVar2) {
          local_98 = (ulonglong)iVar2;
          FUN_144ed1f60(plVar3,0,param_3,0);
        }
      }
      else {
        (*pcVar1)(plVar3,0,param_3,param_1);
      }
    }
    else {
      local_88[0] = 0;
      if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
        lVar4 = FUN_144ba5700();
        if (lVar4 == 0) goto LAB_144ba62fb;
        iVar2 = FUN_144ba5840(lVar4,param_1);
        if (iVar2 == 0) {
          FUN_144ba5800(lVar4);
          goto LAB_144ba62fb;
        }
        if (pcVar1 == (code *)0x0) {
          iVar2 = FUN_144ba5ca0(lVar4,local_78,local_88);
        }
        else {
          iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x78))
                            (*(longlong **)(lVar4 + 0x20),param_2,param_3,lVar4);
        }
        FUN_144ba5800(lVar4);
      }
      else if (pcVar1 == (code *)0x0) {
        iVar2 = FUN_144ba5ca0(param_1,local_78,local_88);
      }
      else {
        iVar2 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2,param_3,param_1);
      }
      if ((pcVar1 == (code *)0x0) && (iVar2 != 0)) {
        local_98 = (ulonglong)local_88[0];
        FUN_144ed1f60(param_1[4],param_2,param_3,local_78);
      }
    }
  }
  else if (param_2 == 0) {
    (**(code **)(lVar4 + 0x78))(plVar3,0,param_3,param_1);
  }
  else if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    plVar3 = (longlong *)FUN_144ed1570(plVar3);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x78))(plVar3,param_2,param_3,param_1);
      FUN_144ed16b0(plVar3);
    }
  }
  else {
    (**(code **)(lVar4 + 0x78))();
  }
LAB_144ba62fb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144ba6360 FUN_144ba6360 body=41 status=ok
// SIG undefined FUN_144ba6360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba6360(void)

{
  FUN_144ba6500();
  return;
}



// FUNCTION 144ba6390 FUN_144ba6390 body=275 status=ok
// SIG undefined FUN_144ba6390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba6390(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144ba63a6;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88[0] = 0;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x20) + 0x88);
  if ((*(uint *)(param_1 + 0x10) & 0x200) == 0) {
    lVar3 = FUN_144ba5700();
    if (lVar3 == 0) goto LAB_144ba6493;
    iVar2 = FUN_144ba5840(lVar3,param_1);
    if (iVar2 == 0) {
      FUN_144ba5800(lVar3);
      goto LAB_144ba6493;
    }
    if (pcVar1 == (code *)0x0) {
      iVar2 = FUN_144ba5ca0(lVar3,local_78,local_88);
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x88))
                        (*(longlong **)(lVar3 + 0x20),param_2,param_3 & 0xffffffff,lVar3);
    }
    FUN_144ba5800(lVar3);
  }
  else if (pcVar1 == (code *)0x0) {
    iVar2 = FUN_144ba5ca0(param_1,local_78,local_88);
  }
  else {
    iVar2 = (*pcVar1)();
  }
  if ((pcVar1 == (code *)0x0) && (iVar2 != 0)) {
    local_98 = (ulonglong)local_88[0];
    FUN_144ed2130(*(undefined8 *)(param_1 + 0x20),param_2,param_3,local_78);
  }
LAB_144ba6493:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144ba64c0 FUN_144ba64c0 body=50 status=ok
// SIG undefined FUN_144ba64c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba64c0(void)

{
  FUN_144ba24f0(6,0xad,0xb1,"crypto\\evp\\m_sigver.c",0x14);
  return 0;
}


