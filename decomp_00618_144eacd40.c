// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144eacd40 FUN_144eacd40 body=181 status=ok
// SIG undefined FUN_144eacd40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eacd40(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_144bab640(1);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_144ea64e0(0x20,"crypto\\async\\async.c");
  if (lVar2 == 0) {
    FUN_144ba24f0(0x33,100,0x41,"crypto\\async\\async.c",0x2a);
  }
  else {
    FUN_14526d4d0(lVar2);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    iVar1 = FUN_144e987a0(&DAT_14c7969a8,lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  FUN_144ea6530(lVar2,"crypto\\async\\async.c",0x36);
  return 0;
}



// FUNCTION 144eace00 FUN_144eace00 body=86 status=ok
// SIG undefined FUN_144eace00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eace00(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0x30,"crypto\\async\\async.c",0x52);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x33,0x66,0x41,"crypto\\async\\async.c",0x54);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x24) = 0;
  return lVar1;
}



// FUNCTION 144eace60 FUN_144eace60 body=78 status=ok
// SIG undefined FUN_144eace60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eace60(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ea6530(param_1[3],"crypto\\async\\async.c",0x60);
    DeleteFiber((LPVOID)*param_1);
    FUN_144ea6530(param_1,"crypto\\async\\async.c",0x62);
  }
  return;
}



// FUNCTION 144eaceb0 FUN_144eaceb0 body=185 status=ok
// SIG undefined FUN_144eaceb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144eaceb0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  LPVOID pvVar4;
  
  puVar2 = (undefined8 *)FUN_144e98760(&DAT_14c7969ac);
  if (puVar2 == (undefined8 *)0x0) {
    iVar1 = FUN_144eac740(0,0);
    if (iVar1 == 0) {
      return (undefined8 *)0x0;
    }
    puVar2 = (undefined8 *)FUN_144e98760(&DAT_14c7969ac);
  }
  puVar3 = (undefined8 *)FUN_144bac250(*puVar2);
  if (puVar3 == (undefined8 *)0x0) {
    if ((puVar2[2] != 0) && ((ulonglong)puVar2[2] <= (ulonglong)puVar2[1])) {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)FUN_144eace00();
    if (puVar3 != (undefined8 *)0x0) {
      pvVar4 = CreateFiber(0,FUN_14526d520,(LPVOID)0x0);
      *puVar3 = pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        FUN_144eace60(puVar3);
        return (undefined8 *)0x0;
      }
      puVar2[1] = puVar2[1] + 1;
    }
  }
  return puVar3;
}



// FUNCTION 144eacf70 FUN_144eacf70 body=88 status=ok
// SIG undefined FUN_144eacf70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eacf70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144e98760(&DAT_14c7969ac);
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x18),"crypto\\async\\async.c",0x8b);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144bac1c0(*puVar1,param_1);
  return;
}



// FUNCTION 144eacfd0 FUN_144eacfd0 body=114 status=ok
// SIG undefined FUN_144eacfd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eacfd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    while (puVar1 = (undefined8 *)FUN_144bac250(*param_1), puVar1 != (undefined8 *)0x0) {
      FUN_144ea6530(puVar1[3],"crypto\\async\\async.c",0x60);
      DeleteFiber((LPVOID)*puVar1);
      FUN_144ea6530(puVar1,"crypto\\async\\async.c",0x62);
    }
  }
  return;
}



// FUNCTION 144ead050 FUN_144ead050 body=116 status=ok
// SIG undefined FUN_144ead050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ead050(void)

{
  longlong lVar1;
  __time64_t _Var2;
  undefined8 uVar3;
  
  uVar3 = 0x144ead05c;
  lVar1 = FUN_144ea6670(0x20,"crypto\\ct\\ct_policy.c",0x1e);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x32,0x85,0x41,"crypto\\ct\\ct_policy.c",0x21,uVar3);
    return 0;
  }
  _Var2 = _time64((__time64_t *)0x0);
  *(__time64_t *)(lVar1 + 0x18) = (_Var2 + 300) * 1000;
  return lVar1;
}



// FUNCTION 144ead0d0 FUN_144ead0d0 body=66 status=ok
// SIG undefined FUN_144ead0d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ead0d0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144b47250(*param_1);
    FUN_144b47250(param_1[1]);
    FUN_144ea6530(param_1,"crypto\\ct\\ct_policy.c",0x32);
  }
  return;
}



// FUNCTION 144ead120 FUN_144ead120 body=67 status=ok
// SIG undefined FUN_144ead120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ead120(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144bb6050(param_2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_1 = param_2;
  return 1;
}



// FUNCTION 144ead170 FUN_144ead170 body=68 status=ok
// SIG undefined FUN_144ead170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ead170(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144bb6050(param_2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 144ead1c0 FUN_144ead1c0 body=5 status=ok
// SIG undefined FUN_144ead1c0(void)

void FUN_144ead1c0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 144ead1d0 FUN_144ead1d0 body=5 status=ok
// SIG undefined FUN_144ead1d0(void)

void FUN_144ead1d0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 144ead1e0 FUN_144ead1e0 body=92 status=ok
// SIG undefined FUN_144ead1e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_144ead1e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_144ea6670(0x68,"crypto\\ct\\ct_sct.c",0x18);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(0x32,100,0x41,"crypto\\ct\\ct_sct.c",0x1b);
    return (undefined4 *)0x0;
  }
  puVar1[0x16] = 0xffffffff;
  *puVar1 = 0xffffffff;
  return puVar1;
}



// FUNCTION 144ead240 FUN_144ead240 body=139 status=ok
// SIG undefined FUN_144ead240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ead240(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x18),"crypto\\ct\\ct_sct.c",0x29);
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x30),"crypto\\ct\\ct_sct.c",0x2a);
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x48),"crypto\\ct\\ct_sct.c",0x2b);
    FUN_144ea6530(*(undefined8 *)(param_1 + 8),"crypto\\ct\\ct_sct.c",0x2c);
    FUN_144ea6530(param_1,"crypto\\ct\\ct_sct.c",0x2d);
  }
  return;
}



// FUNCTION 144ead2d0 FUN_144ead2d0 body=29 status=ok
// SIG undefined FUN_144ead2d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ead2d0(undefined8 param_1)

{
  FUN_144babe00(param_1,FUN_144ead240);
  return;
}



// FUNCTION 144ead2f0 FUN_144ead2f0 body=40 status=ok
// SIG undefined FUN_144ead2f0(void)

undefined8 FUN_144ead2f0(int *param_1)

{
  if ((*param_1 == 0) && ((char)param_1[0x10] == '\x04')) {
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      return 0x29c;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\x03') {
      return 0x31a;
    }
  }
  return 0;
}



// FUNCTION 144ead320 FUN_144ead320 body=184 status=ok
// SIG undefined FUN_144ead320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ead320(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ead335;
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x48),"crypto\\ct\\ct_sct.c",0xb3);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = FUN_144ea6d10(param_2,param_3,"crypto\\ct\\ct_sct.c",0xb9);
    *(longlong *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      FUN_144ba24f0(0x32,0x74,0x41,"crypto\\ct\\ct_sct.c",0xbb,uVar2);
      return 0;
    }
    *(longlong *)(param_1 + 0x50) = param_3;
  }
  return 1;
}



// FUNCTION 144ead3e0 FUN_144ead3e0 body=56 status=ok
// SIG undefined FUN_144ead3e0(void)

undefined8 FUN_144ead3e0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_2 != 1) {
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(undefined4 *)(param_1 + 0x60) = 0;
      return 1;
    }
    if (param_2 != 3) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 1;
}



// FUNCTION 144ead420 FUN_144ead420 body=486 status=ok
// SIG undefined FUN_144ead420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ead420(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  iVar7 = 0;
  uVar10 = 1;
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_144babbf0();
  }
  if (0 < iVar1) {
    do {
      uVar9 = 0;
      piVar3 = (int *)FUN_144babc00(param_1,iVar7);
      if (piVar3 != (int *)0x0) {
        uVar8 = 0xffffffff;
        local_res18 = 0;
        local_res20 = 0;
        if (*piVar3 == 0) {
          lVar4 = FUN_144eae360(param_2[2],*(undefined8 *)(piVar3 + 6),*(undefined8 *)(piVar3 + 8));
          if (lVar4 == 0) {
            piVar3[0x18] = 1;
            uVar9 = 0;
          }
          else {
            lVar5 = FUN_14526d580();
            uVar9 = 0xffffffff;
            if (lVar5 != 0) {
              uVar6 = FUN_144eae280(lVar4);
              iVar2 = FUN_144bb64d0(&local_res20,uVar6);
              uVar9 = uVar8;
              if ((iVar2 == 1) && (iVar2 = FUN_14526d8a0(lVar5,local_res20), iVar2 == 1)) {
                if (piVar3[0x16] == 1) {
                  if (param_2[1] != 0) {
                    uVar6 = FUN_144bb4f60();
                    iVar2 = FUN_144bb64d0(&local_res18,uVar6);
                    if ((iVar2 != 1) || (iVar2 = FUN_14526d870(lVar5,local_res18), iVar2 != 1))
                    goto LAB_144ead5ad;
                    goto LAB_144ead562;
                  }
                  piVar3[0x18] = 4;
                }
                else {
LAB_144ead562:
                  FUN_14526d920(lVar5,param_2[3]);
                  iVar2 = FUN_14526d680(lVar5,*param_2,0);
                  if (iVar2 == 1) {
                    iVar2 = FUN_14526db90(lVar5,piVar3);
                    piVar3[0x18] = (iVar2 != 1) + 2;
                  }
                  else {
                    piVar3[0x18] = 4;
                  }
                }
                uVar9 = (uint)(piVar3[0x18] == 2);
              }
            }
LAB_144ead5ad:
            FUN_144bb6480(local_res18);
            FUN_144bb6480(local_res20);
            FUN_14526d5e0(lVar5);
            if ((int)uVar9 < 0) {
              return uVar9;
            }
          }
        }
        else {
          piVar3[0x18] = 5;
        }
        uVar10 = uVar10 & uVar9;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return uVar10;
}



// FUNCTION 144ead610 FUN_144ead610 body=75 status=ok
// SIG undefined FUN_144ead610(void)

bool FUN_144ead610(int *param_1)

{
  if (*param_1 != -1) {
    if (*param_1 != 0) {
      return *(longlong *)(param_1 + 2) != 0;
    }
    if ((((*(longlong *)(param_1 + 6) != 0) && ((char)param_1[0x10] == '\x04')) &&
        ((*(char *)((longlong)param_1 + 0x41) == '\x01' ||
         (*(char *)((longlong)param_1 + 0x41) == '\x03')))) &&
       ((*(longlong *)(param_1 + 0x12) != 0 && (*(longlong *)(param_1 + 0x14) != 0)))) {
      return true;
    }
  }
  return false;
}



// FUNCTION 144ead660 FUN_144ead660 body=48 status=ok
// SIG undefined FUN_144ead660(void)

undefined8 FUN_144ead660(int *param_1)

{
  if ((((*param_1 == 0) && ((char)param_1[0x10] == '\x04')) &&
      ((*(char *)((longlong)param_1 + 0x41) == '\x01' ||
       (*(char *)((longlong)param_1 + 0x41) == '\x03')))) &&
     ((*(longlong *)(param_1 + 0x12) != 0 && (*(longlong *)(param_1 + 0x14) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ead690 FUN_144ead690 body=577 status=ok
// SIG undefined FUN_144ead690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ead690(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 local_res18;
  undefined1 *local_res20;
  
  puVar8 = (undefined1 *)0x0;
  bVar1 = false;
  if (param_2 != (longlong *)0x0) {
    if (*param_2 == 0) {
      iVar2 = FUN_144ead690(param_1,0);
      if (iVar2 == -1) {
        FUN_144ba24f0(0x32,0x6c,0x69,"crypto\\ct\\ct_oct.c",0x14a);
        return 0xffffffff;
      }
      lVar4 = FUN_144ea64e0((longlong)iVar2,"crypto\\ct\\ct_oct.c",0x14d);
      *param_2 = lVar4;
      if (lVar4 == 0) {
        FUN_144ba24f0(0x32,0x6c,0x41,"crypto\\ct\\ct_oct.c",0x14e);
        return 0xffffffff;
      }
      bVar1 = true;
    }
    puVar8 = (undefined1 *)(*param_2 + 2);
  }
  iVar2 = 0;
  local_res18 = (undefined1 *)((ulonglong)local_res18._4_4_ << 0x20);
  uVar7 = 2;
  iVar3 = FUN_144babbf0(param_1);
  if (0 < iVar3) {
    do {
      if (param_2 == (longlong *)0x0) {
        piVar6 = (int *)FUN_144babc00(param_1,iVar2);
        iVar2 = FUN_144ead610(piVar6);
        if (iVar2 == 0) {
          FUN_144ba24f0(0x32,0x6b,0x6a,"crypto\\ct\\ct_oct.c",0xce);
          FUN_144ea6530(0,"crypto\\ct\\ct_oct.c",0xfd);
          goto LAB_144ead89a;
        }
        if (*piVar6 == 0) {
          iVar3 = (int)*(undefined8 *)(piVar6 + 0xe) + 0x2f + (int)*(undefined8 *)(piVar6 + 0x14);
        }
        else {
          iVar3 = (int)*(undefined8 *)(piVar6 + 4);
        }
        if (iVar3 == -1) goto LAB_144ead89a;
        iVar2 = (int)local_res18;
      }
      else {
        local_res18 = puVar8 + 2;
        local_res20 = puVar8;
        uVar5 = FUN_144babc00(param_1,iVar2);
        iVar3 = FUN_144eadbe0(uVar5,&local_res18);
        if (iVar3 == -1) goto LAB_144ead89a;
        *local_res20 = (char)((uint)iVar3 >> 8);
        local_res20[1] = (char)iVar3;
        puVar8 = local_res18;
      }
      iVar2 = iVar2 + 1;
      uVar7 = uVar7 + (longlong)(iVar3 + 2);
      local_res18 = (undefined1 *)CONCAT44(local_res18._4_4_,iVar2);
      iVar3 = FUN_144babbf0(param_1);
    } while (iVar2 < iVar3);
    if (0xffff < uVar7) {
LAB_144ead89a:
      if (bVar1) {
        FUN_144ea6530(*param_2,"crypto\\ct\\ct_oct.c",0x172);
        *param_2 = 0;
      }
      return 0xffffffff;
    }
  }
  if (param_2 != (longlong *)0x0) {
    puVar8 = (undefined1 *)*param_2;
    *puVar8 = (char)(uVar7 - 2 >> 8);
    puVar8[1] = (char)uVar7 + -2;
    if (!bVar1) {
      *param_2 = *param_2 + uVar7;
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 144ead8e0 FUN_144ead8e0 body=487 status=ok
// SIG undefined FUN_144ead8e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ead8e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144ead8f1;
  if (0xfffd < param_3 - 2U) {
    FUN_144ba24f0(0x32,0x6f,0x69,"crypto\\ct\\ct_oct.c",0x108,0x144ead8f1);
    return 0;
  }
  puVar1 = (undefined1 *)*param_2;
  uVar5 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
  *param_2 = (longlong)(puVar1 + 2);
  if (uVar5 != param_3 - 2U) {
    FUN_144ba24f0(0x32,0x6f,0x69,"crypto\\ct\\ct_oct.c",0x10e,0x144ead8f1);
    return 0;
  }
  if ((param_1 == (longlong *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
    lVar4 = FUN_144babca0();
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    lVar3 = FUN_144bac250(lVar4);
    while (lVar3 != 0) {
      FUN_144ead240(lVar3);
      lVar3 = FUN_144bac250(lVar4);
    }
  }
  do {
    if (uVar5 == 0) {
      if (param_1 == (longlong *)0x0) {
        return lVar4;
      }
      if (*param_1 != 0) {
        return lVar4;
      }
      *param_1 = lVar4;
      return lVar4;
    }
    if (uVar5 < 2) {
      uVar7 = 0x123;
LAB_144eada69:
      FUN_144ba24f0(0x32,0x6f,0x69,"crypto\\ct\\ct_oct.c",uVar7,uVar8);
      goto LAB_144eada82;
    }
    puVar1 = (undefined1 *)*param_2;
    uVar6 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    *param_2 = (longlong)(puVar1 + 2);
    if ((uVar6 == 0) || (uVar5 - 2 < uVar6)) {
      uVar7 = 0x12a;
      goto LAB_144eada69;
    }
    uVar5 = (uVar5 - 2) - uVar6;
    lVar3 = FUN_144eadd90(0,param_2);
    if (lVar3 == 0) goto LAB_144eada82;
    iVar2 = FUN_144bac1c0(lVar4,lVar3);
  } while (iVar2 != 0);
  FUN_144ead240(lVar3);
LAB_144eada82:
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    FUN_144ead2d0(lVar4);
  }
  return 0;
}



// FUNCTION 144eadad0 FUN_144eadad0 body=100 status=ok
// SIG undefined FUN_144eadad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144eadad0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int local_28 [2];
  undefined8 local_20 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x144eadadc;
  local_20[0] = 0;
  local_28[0] = FUN_144ead690(param_1,local_20);
  if (local_28[0] == -1) {
    return 0xffffffff;
  }
  uVar1 = FUN_144efe990(local_28,param_2);
  FUN_144ea6530(local_20[0],"crypto\\ct\\ct_oct.c",0x195);
  return uVar1;
}



// FUNCTION 144eadb40 FUN_144eadb40 body=159 status=ok
// SIG undefined FUN_144eadb40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eadb40(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong local_res10;
  int *local_res20;
  
  local_res10 = *param_2;
  local_res20 = (int *)0x0;
  lVar1 = FUN_144efe970(&local_res20,&local_res10,param_3);
  if (lVar1 == 0) {
    return 0;
  }
  local_res10 = *(longlong *)(local_res20 + 2);
  lVar1 = FUN_144ead8e0(param_1,&local_res10,(longlong)*local_res20);
  if (lVar1 != 0) {
    *param_2 = *param_2 + (longlong)param_3;
  }
  FUN_144efe950(local_res20);
  return lVar1;
}



// FUNCTION 144eadbe0 FUN_144eadbe0 body=418 status=ok
// SIG undefined FUN_144eadbe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eadbe0(int *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *local_res18 [2];
  undefined8 uVar10;
  
  uVar10 = 0x144eadbf8;
  iVar5 = FUN_144ead610();
  if (iVar5 == 0) {
    FUN_144ba24f0(0x32,0x6b,0x6a,"crypto\\ct\\ct_oct.c",0xce,uVar10);
    puVar6 = (undefined1 *)0x0;
LAB_144eadd00:
    FUN_144ea6530(puVar6,"crypto\\ct\\ct_oct.c",0xfd);
    uVar9 = 0xffffffff;
  }
  else {
    if (*param_1 == 0) {
      uVar9 = *(longlong *)(param_1 + 0xe) + 0x2f + *(longlong *)(param_1 + 0x14);
    }
    else {
      uVar9 = *(ulonglong *)(param_1 + 4);
    }
    if (param_2 != (longlong *)0x0) {
      puVar7 = (undefined1 *)*param_2;
      if (puVar7 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)FUN_144ea64e0(uVar9,"crypto\\ct\\ct_oct.c",0xe3);
        puVar7 = puVar6;
        puVar8 = puVar6;
        if (puVar6 == (undefined1 *)0x0) {
          FUN_144ba24f0(0x32,0x6b,0x41,"crypto\\ct\\ct_oct.c",0xe5,uVar10);
          goto LAB_144eadd00;
        }
      }
      else {
        puVar6 = puVar7 + uVar9;
        puVar8 = (undefined1 *)0x0;
      }
      *param_2 = (longlong)puVar6;
      if (*param_1 == 0) {
        *puVar7 = (char)*param_1;
        puVar1 = *(undefined4 **)(param_1 + 6);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *(undefined4 *)(puVar7 + 1) = *puVar1;
        *(undefined4 *)(puVar7 + 5) = uVar2;
        *(undefined4 *)(puVar7 + 9) = uVar3;
        *(undefined4 *)(puVar7 + 0xd) = uVar4;
        uVar10 = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(puVar7 + 0x11) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(puVar7 + 0x19) = uVar10;
        puVar7[0x21] = *(undefined1 *)((longlong)param_1 + 0x2f);
        puVar7[0x22] = *(undefined1 *)((longlong)param_1 + 0x2e);
        puVar7[0x23] = *(undefined1 *)((longlong)param_1 + 0x2d);
        puVar7[0x24] = (char)param_1[0xb];
        puVar7[0x25] = *(undefined1 *)((longlong)param_1 + 0x2b);
        puVar7[0x26] = *(undefined1 *)((longlong)param_1 + 0x2a);
        puVar7[0x27] = *(undefined1 *)((longlong)param_1 + 0x29);
        puVar7[0x28] = (char)param_1[10];
        puVar7[0x29] = *(undefined1 *)((longlong)param_1 + 0x39);
        puVar7[0x2a] = (char)param_1[0xe];
        puVar7 = puVar7 + 0x2b;
        local_res18[0] = puVar7;
        if (*(size_t *)(param_1 + 0xe) != 0) {
          memcpy(puVar7,*(void **)(param_1 + 0xc),*(size_t *)(param_1 + 0xe));
          local_res18[0] = puVar7 + *(longlong *)(param_1 + 0xe);
        }
        iVar5 = FUN_144eadfb0(param_1,local_res18);
        puVar6 = puVar8;
        if (iVar5 < 1) goto LAB_144eadd00;
      }
      else {
        memcpy(puVar7,*(void **)(param_1 + 2),uVar9);
      }
    }
    uVar9 = uVar9 & 0xffffffff;
  }
  return uVar9;
}



// FUNCTION 144eadd90 FUN_144eadd90 body=533 status=ok
// SIG undefined FUN_144eadd90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * FUN_144eadd90(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  byte *local_res18;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144eaddae;
  puVar5 = (uint *)0x0;
  if (param_3 - 1 < 0xffff) {
    puVar5 = (uint *)FUN_144ead1e0();
    if (puVar5 == (uint *)0x0) goto LAB_144eadf82;
    pbVar2 = (byte *)*param_2;
    bVar1 = *pbVar2;
    *puVar5 = (uint)bVar1;
    if (bVar1 != 0) {
      lVar4 = FUN_144ea6d10(pbVar2,param_3,"crypto\\ct\\ct_oct.c",0x87);
      *(longlong *)(puVar5 + 2) = lVar4;
      if (lVar4 != 0) {
        *(ulonglong *)(puVar5 + 4) = param_3;
        *param_2 = (longlong)(pbVar2 + param_3);
LAB_144eadf4c:
        if (param_1 == (longlong *)0x0) {
          return puVar5;
        }
        FUN_144ead240(*param_1);
        *param_1 = (longlong)puVar5;
        return puVar5;
      }
      goto LAB_144eadf82;
    }
    if (param_3 < 0x2b) {
      uVar7 = 99;
    }
    else {
      lVar4 = FUN_144ea6d10(pbVar2 + 1,0x20,"crypto\\ct\\ct_oct.c");
      *(longlong *)(puVar5 + 6) = lVar4;
      if (lVar4 == 0) goto LAB_144eadf82;
      puVar5[8] = 0x20;
      puVar5[9] = 0;
      *(ulonglong *)(puVar5 + 10) = (ulonglong)pbVar2[0x21] << 0x38;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x22] << 0x30;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x23] << 0x28;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x24] << 0x20;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x25] << 0x18;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x26] << 0x10;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x27] << 8;
      *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar5 + 10) | (ulonglong)pbVar2[0x28];
      uVar6 = (ulonglong)CONCAT11(pbVar2[0x29],pbVar2[0x2a]);
      if (param_3 - 0x2b < uVar6) {
        uVar7 = 0x72;
      }
      else {
        if (uVar6 != 0) {
          lVar4 = FUN_144ea6d10(pbVar2 + 0x2b,uVar6,"crypto\\ct\\ct_oct.c",0x76);
          *(longlong *)(puVar5 + 0xc) = lVar4;
          if (lVar4 == 0) goto LAB_144eadf82;
        }
        lVar4 = (param_3 - 0x2b) - uVar6;
        *(ulonglong *)(puVar5 + 0xe) = uVar6;
        local_res18 = pbVar2 + 0x2b + uVar6;
        iVar3 = FUN_144eae0c0(puVar5,&local_res18,lVar4);
        if (0 < iVar3) {
          *param_2 = (longlong)(local_res18 + (lVar4 - iVar3));
          goto LAB_144eadf4c;
        }
        uVar7 = 0x80;
      }
    }
  }
  else {
    uVar7 = 0x4c;
  }
  FUN_144ba24f0(0x32,0x6e,0x68,"crypto\\ct\\ct_oct.c",uVar7,uVar8);
LAB_144eadf82:
  FUN_144ead240(puVar5);
  return (uint *)0x0;
}



// FUNCTION 144eadfb0 FUN_144eadfb0 body=270 status=ok
// SIG undefined FUN_144eadfb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eadfb0(int *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144eadfcb;
  iVar1 = FUN_144ead660();
  if (iVar1 == 0) {
    uVar6 = 0x9f;
    uVar5 = 0x6b;
  }
  else {
    if (*param_1 == 0) {
      uVar4 = *(longlong *)(param_1 + 0x14) + 4;
      if (param_2 != (longlong *)0x0) {
        puVar3 = (undefined1 *)*param_2;
        if (puVar3 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)FUN_144ea64e0(uVar4,"crypto\\ct\\ct_oct.c",0xb4);
          puVar3 = puVar2;
          if (puVar2 == (undefined1 *)0x0) {
            uVar6 = 0xb6;
            uVar5 = 0x41;
            goto LAB_144eae090;
          }
        }
        else {
          puVar2 = puVar3 + uVar4;
        }
        *param_2 = (longlong)puVar2;
        *puVar3 = (char)param_1[0x10];
        puVar3[1] = *(undefined1 *)((longlong)param_1 + 0x41);
        puVar3[2] = *(undefined1 *)((longlong)param_1 + 0x51);
        puVar3[3] = (char)param_1[0x14];
        memcpy(puVar3 + 4,*(void **)(param_1 + 0x12),*(size_t *)(param_1 + 0x14));
      }
      return uVar4 & 0xffffffff;
    }
    uVar6 = 0xa4;
    uVar5 = 0x67;
  }
LAB_144eae090:
  FUN_144ba24f0(0x32,0x6d,uVar5,"crypto\\ct\\ct_oct.c",uVar6,uVar7);
  FUN_144ea6530(0,"crypto\\ct\\ct_oct.c",0xc4);
  return 0xffffffff;
}



// FUNCTION 144eae0c0 FUN_144eae0c0 body=343 status=ok
// SIG undefined FUN_144eae0c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eae0c0(int *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144eae0d0;
  if (*param_1 != 0) {
    FUN_144ba24f0(0x32,0x70,0x67,"crypto\\ct\\ct_oct.c",0x1f,0x144eae0d0);
    return 0xffffffff;
  }
  if (4 < param_3) {
    puVar1 = (undefined1 *)*param_2;
    *(undefined1 *)(param_1 + 0x10) = *puVar1;
    *(undefined1 *)((longlong)param_1 + 0x41) = puVar1[1];
    iVar2 = FUN_144ead2f0();
    if (iVar2 == 0) {
      FUN_144ba24f0(0x32,0x70,0x6b,"crypto\\ct\\ct_oct.c",0x33,uVar6);
      return 0xffffffff;
    }
    puVar3 = puVar1 + 4;
    uVar4 = (*param_2 - (longlong)puVar3) + param_3;
    uVar5 = (ulonglong)CONCAT11(puVar1[2],puVar1[3]);
    if (uVar4 < uVar5) {
      FUN_144ba24f0(0x32,0x70,0x6b,"crypto\\ct\\ct_oct.c",0x3a,uVar6);
    }
    else {
      iVar2 = FUN_144ead320(param_1,puVar3,uVar5);
      if (iVar2 == 1) {
        *param_2 = (longlong)(puVar3 + uVar5);
        return param_3 + (uVar5 - uVar4);
      }
    }
    return 0xffffffff;
  }
  FUN_144ba24f0(0x32,0x70,0x6b,"crypto\\ct\\ct_oct.c",0x2a,0x144eae0d0);
  return 0xffffffff;
}



// FUNCTION 144eae220 FUN_144eae220 body=79 status=ok
// SIG undefined FUN_144eae220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eae220(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ea6530(*param_1,"crypto\\ct\\ct_log.c",0x10a);
    FUN_144ba6e60(param_1[5]);
    FUN_144ea6530(param_1,"crypto\\ct\\ct_log.c",0x10c);
  }
  return;
}



// FUNCTION 144eae270 FUN_144eae270 body=4 status=ok
// SIG undefined FUN_144eae270(void)

undefined8 FUN_144eae270(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144eae280 FUN_144eae280 body=5 status=ok
// SIG undefined FUN_144eae280(void)

undefined8 FUN_144eae280(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 144eae290 FUN_144eae290 body=131 status=ok
// SIG undefined FUN_144eae290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144eae290(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144eae29c;
  plVar1 = (longlong *)FUN_144ea6670(8,"crypto\\ct\\ct_log.c",0x5e);
  if (plVar1 == (longlong *)0x0) {
    FUN_144ba24f0(0x32,0x83,0x41,"crypto\\ct\\ct_log.c",0x61,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = FUN_144babca0();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    FUN_144ea6530(plVar1,"crypto\\ct\\ct_log.c",0x6b);
    return (longlong *)0x0;
  }
  return plVar1;
}



// FUNCTION 144eae320 FUN_144eae320 body=64 status=ok
// SIG undefined FUN_144eae320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eae320(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144babe00(*param_1,FUN_144eae220);
    FUN_144ea6530(param_1,"crypto\\ct\\ct_log.c",0x73);
  }
  return;
}



// FUNCTION 144eae360 FUN_144eae360 body=144 status=ok
// SIG undefined FUN_144eae360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eae360(undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_144babbf0(*param_1);
  if (0 < iVar1) {
    do {
      lVar2 = FUN_144babc00(*param_1,iVar3);
      iVar1 = memcmp((void *)(lVar2 + 8),param_2,param_3);
      if (iVar1 == 0) {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(*param_1);
    } while (iVar3 < iVar1);
  }
  return 0;
}



// FUNCTION 144eae3f0 FUN_144eae3f0 body=764 status=ok
// SIG undefined FUN_144eae3f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eae3f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144eae400;
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x598), lVar1 == 0)) {
    return 0;
  }
  memset((void *)(param_1 + 0x7b0),0,0x78);
  *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(lVar1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(lVar1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x7c0) = *(undefined8 *)(lVar1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x7c8) = *(undefined8 *)(lVar1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(lVar1 + 0x350);
  if (*(longlong *)(lVar1 + 0x308) != 0) {
    lVar2 = FUN_144ba0e20();
    *(longlong *)(param_1 + 0x7d8) = lVar2;
    if (lVar2 != 0) goto LAB_144eae49b;
LAB_144eae56e:
    uVar4 = 0x62;
    uVar3 = 3;
    goto LAB_144eae5f2;
  }
LAB_144eae49b:
  if (*(longlong *)(lVar1 + 0x310) != 0) {
    lVar2 = FUN_144ba0e20();
    *(longlong *)(param_1 + 0x7e0) = lVar2;
    if (lVar2 == 0) goto LAB_144eae56e;
  }
  if (*(longlong *)(lVar1 + 0x318) != 0) {
    lVar2 = FUN_144ba0e20();
    *(longlong *)(param_1 + 0x7e8) = lVar2;
    if (lVar2 == 0) goto LAB_144eae56e;
  }
  if (*(longlong *)(lVar1 + 800) != 0) {
    lVar2 = FUN_144ba0e20();
    *(longlong *)(param_1 + 0x7f0) = lVar2;
    if (lVar2 == 0) goto LAB_144eae56e;
  }
  if (*(longlong *)(lVar1 + 0x328) != 0) {
    lVar2 = FUN_144ba0e20();
    *(longlong *)(param_1 + 0x7f8) = lVar2;
    if (lVar2 == 0) goto LAB_144eae56e;
  }
  if (*(longlong *)(lVar1 + 0x330) != 0) {
    lVar2 = FUN_144ba0e20();
    *(longlong *)(param_1 + 0x800) = lVar2;
    if (lVar2 == 0) goto LAB_144eae56e;
  }
  if (*(longlong *)(lVar1 + 0x340) != 0) {
    lVar2 = FUN_144ba0e20();
    *(longlong *)(param_1 + 0x810) = lVar2;
    if (lVar2 == 0) goto LAB_144eae56e;
  }
  if (*(longlong *)(lVar1 + 0x338) != 0) {
    lVar2 = FUN_144ba0e20();
    *(longlong *)(param_1 + 0x808) = lVar2;
    if (lVar2 == 0) goto LAB_144eae56e;
  }
  if (*(longlong *)(lVar1 + 0x300) == 0) {
LAB_144eae5b2:
    if (*(longlong *)(lVar1 + 0x348) == 0) {
LAB_144eae6be:
      *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(lVar1 + 0x354);
      return 1;
    }
    lVar2 = FUN_144ea6dc0(*(longlong *)(lVar1 + 0x348),"ssl\\tls_srp.c",0x6b);
    *(longlong *)(param_1 + 0x818) = lVar2;
    if (lVar2 != 0) goto LAB_144eae6be;
    uVar4 = 0x6c;
  }
  else {
    lVar2 = FUN_144ea6dc0(*(longlong *)(lVar1 + 0x300),"ssl\\tls_srp.c",0x66);
    *(longlong *)(param_1 + 2000) = lVar2;
    if (lVar2 != 0) goto LAB_144eae5b2;
    uVar4 = 0x67;
  }
  uVar3 = 0x44;
LAB_144eae5f2:
  FUN_144ba24f0(0x14,0x139,uVar3,"ssl\\tls_srp.c",uVar4,uVar5);
  FUN_144ea6530(*(undefined8 *)(param_1 + 2000),"ssl\\tls_srp.c",0x73);
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x818),"ssl\\tls_srp.c",0x74);
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7d8));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7e0));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7e8));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7f0));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7f8));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x800));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x808));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x810));
  memset((void *)(param_1 + 0x7b0),0,0x78);
  return 0;
}



// FUNCTION 144eae6f0 FUN_144eae6f0 body=70 status=ok
// SIG undefined FUN_144eae6f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eae6f0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  memset((void *)(param_1 + 0x2e0),0,0x78);
  *(undefined4 *)(param_1 + 0x350) = 0x400;
  return 1;
}



// FUNCTION 144eae740 FUN_144eae740 body=216 status=ok
// SIG undefined FUN_144eae740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eae740(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  FUN_144ea6530(*(undefined8 *)(param_1 + 2000),"ssl\\tls_srp.c",0x2d);
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x818),"ssl\\tls_srp.c",0x2e);
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7d8));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7e0));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7e8));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7f0));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x7f8));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x800));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x808));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x810));
  memset((void *)(param_1 + 0x7b0),0,0x78);
  *(undefined4 *)(param_1 + 0x820) = 0x400;
  return 1;
}



// FUNCTION 144eae820 FUN_144eae820 body=216 status=ok
// SIG undefined FUN_144eae820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eae820(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x300),"ssl\\tls_srp.c",0x1a);
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x348),"ssl\\tls_srp.c",0x1b);
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x308));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x310));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x318));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 800));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x328));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x330));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x338));
  FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x340));
  memset((void *)(param_1 + 0x2e0),0,0x78);
  *(undefined4 *)(param_1 + 0x350) = 0x400;
  return 1;
}



// FUNCTION 144eae900 FUN_144eae900 body=262 status=ok
// SIG undefined FUN_144eae900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eae900(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144eae910;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0x73;
  if ((((*(code **)(param_1 + 0x7b8) == (code *)0x0) ||
       (iVar1 = (**(code **)(param_1 + 0x7b8))(param_1,param_2,*(undefined8 *)(param_1 + 0x7b0)),
       iVar1 == 0)) && (*param_2 = 0x50, *(longlong *)(param_1 + 0x7d8) != 0)) &&
     (((*(longlong *)(param_1 + 0x7e0) != 0 && (*(longlong *)(param_1 + 0x7e8) != 0)) &&
      ((*(longlong *)(param_1 + 0x810) != 0 && (iVar1 = FUN_144bac8c0(local_48,0x30), 0 < iVar1)))))
     ) {
    uVar2 = FUN_144ba0740(local_48,0x30);
    *(undefined8 *)(param_1 + 0x808) = uVar2;
    FUN_14259f0c0(local_48,0x30);
    uVar2 = FUN_14526e0a0(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(param_1 + 0x7d8),
                          *(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x810));
    *(undefined8 *)(param_1 + 0x7f0) = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 144eaea20 FUN_144eaea20 body=167 status=ok
// SIG undefined FUN_144eaea20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaea20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144eaea2c;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_144bac8c0(local_48,0x30);
  if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  uVar2 = FUN_144ba0740(local_48,0x30,*(undefined8 *)(param_1 + 0x800));
  *(undefined8 *)(param_1 + 0x800) = uVar2;
  FUN_14259f0c0(local_48,0x30);
  uVar2 = FUN_14526e450(*(undefined8 *)(param_1 + 0x800),*(undefined8 *)(param_1 + 0x7d8),
                        *(undefined8 *)(param_1 + 0x7e0));
  *(undefined8 *)(param_1 + 0x7f8) = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 144eaeae0 FUN_144eaeae0 body=334 status=ok
// SIG undefined FUN_144eaeae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144eaeae0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0x144eaeaf2;
  lVar4 = 0;
  iVar1 = FUN_14526e1f0(*(undefined8 *)(param_1 + 0x7f8),*(undefined8 *)(param_1 + 0x7d8));
  lVar3 = lVar4;
  uVar2 = 0xffffffff;
  if ((iVar1 != 0) &&
     (lVar3 = FUN_14526e210(*(undefined8 *)(param_1 + 0x7f8),*(undefined8 *)(param_1 + 0x7f0),
                            *(undefined8 *)(param_1 + 0x7d8)), uVar2 = 0xffffffff, lVar3 != 0)) {
    lVar4 = FUN_14526df80(*(undefined8 *)(param_1 + 0x7f8),*(undefined8 *)(param_1 + 0x810),lVar3,
                          *(undefined8 *)(param_1 + 0x808),*(undefined8 *)(param_1 + 0x7d8),uVar7);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (lVar4 != 0) {
      iVar1 = FUN_144ba03d0(lVar4);
      lVar6 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
      lVar5 = FUN_144ea64e0(lVar6,"ssl\\tls_srp.c",0x108);
      if (lVar5 == 0) {
        FUN_144eafc90(param_1,0x50,0x24d,0x41,"ssl\\tls_srp.c",CONCAT44(uVar8,0x10a));
        uVar2 = 0xffffffff;
      }
      else {
        FUN_144ba08c0(lVar4,lVar5);
        uVar2 = FUN_144ec9100(param_1,lVar5,lVar6,1);
      }
    }
  }
  FUN_144ba0630(lVar4);
  FUN_144ba0630(lVar3);
  return uVar2;
}



// FUNCTION 144eaec30 FUN_144eaec30 body=567 status=ok
// SIG undefined FUN_144eaec30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144eaec30(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  uVar14 = 1;
  uVar11 = 0;
  lVar4 = 0;
  lVar7 = 0;
  uVar3 = 0xffffffff;
  lVar6 = 0;
  pcVar5 = (char *)0x0;
  iVar2 = FUN_14526e730(*(undefined8 *)(param_1 + 0x7f0),*(undefined8 *)(param_1 + 0x7d8));
  if (((iVar2 == 0) ||
      (lVar4 = FUN_14526e210(*(undefined8 *)(param_1 + 0x7f8),*(undefined8 *)(param_1 + 0x7f0),
                             *(undefined8 *)(param_1 + 0x7d8)), lVar4 == 0)) ||
     (*(code **)(param_1 + 0x7c8) == (code *)0x0)) {
    uVar13 = CONCAT44(uVar14,0x126);
LAB_144eaedd7:
    uVar12 = 0x44;
  }
  else {
    pcVar5 = (char *)(**(code **)(param_1 + 0x7c8))(param_1,*(undefined8 *)(param_1 + 0x7b0));
    if (pcVar5 != (char *)0x0) {
      lVar6 = FUN_14526e230(*(undefined8 *)(param_1 + 0x7e8),*(undefined8 *)(param_1 + 2000),pcVar5)
      ;
      if (lVar6 != 0) {
        lVar8 = lVar4;
        lVar7 = FUN_14526e500(*(undefined8 *)(param_1 + 0x7d8),*(undefined8 *)(param_1 + 0x7f0),
                              *(undefined8 *)(param_1 + 0x7e0),lVar6,
                              *(undefined8 *)(param_1 + 0x800),lVar4);
        uVar14 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if (lVar7 != 0) {
          iVar2 = FUN_144ba03d0(lVar7);
          lVar8 = (longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          lVar9 = FUN_144ea64e0(lVar8,"ssl\\tls_srp.c",0x13b);
          if (lVar9 == 0) {
            FUN_144eafc90(param_1,0x50,0x253,0x41,"ssl\\tls_srp.c",CONCAT44(uVar14,0x13d));
            uVar3 = 0xffffffff;
          }
          else {
            FUN_144ba08c0(lVar7,lVar9);
            uVar3 = FUN_144ec9100(param_1,lVar9,lVar8,1);
          }
          goto LAB_144eaedfc;
        }
      }
      uVar13 = CONCAT44(uVar14,0x136);
      goto LAB_144eaedd7;
    }
    uVar13 = CONCAT44(uVar14,0x12e);
    uVar12 = 0xea;
  }
  FUN_144eafc90(param_1,0x50,0x253,uVar12,"ssl\\tls_srp.c",uVar13);
LAB_144eaedfc:
  FUN_144ba0630(lVar7);
  FUN_144ba0630(lVar6);
  if (pcVar5 != (char *)0x0) {
    cVar1 = *pcVar5;
    pcVar10 = pcVar5;
    for (; (cVar1 != '\0' && (uVar11 < 0x80000000)); uVar11 = uVar11 + 1) {
      pcVar10 = pcVar10 + 1;
      cVar1 = *pcVar10;
    }
    FUN_144ea66f0(pcVar5,uVar11 & 0x7fffffff,"ssl\\tls_srp.c",0x147);
  }
  FUN_144ba0630(lVar4);
  return uVar3;
}



// FUNCTION 144eaee70 FUN_144eaee70 body=289 status=ok
// SIG undefined FUN_144eaee70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eaee70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = 1;
  iVar1 = FUN_144ba0ef0(*(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7d8));
  if (((iVar1 < 0) &&
      (iVar1 = FUN_144ba0ef0(*(undefined8 *)(param_1 + 0x7f0),*(undefined8 *)(param_1 + 0x7d8)),
      iVar1 < 0)) && (iVar1 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x7f0)), iVar1 == 0)) {
    iVar1 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x7d8));
    if (iVar1 < *(int *)(param_1 + 0x820)) {
      uVar5 = CONCAT44(uVar3,0x15c);
      uVar3 = 0x47;
      uVar4 = 0xf1;
    }
    else if (*(code **)(param_1 + 0x7c0) == (code *)0x0) {
      lVar2 = FUN_14526ded0(*(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7d8));
      if (lVar2 != 0) {
        return 1;
      }
      uVar5 = CONCAT44(uVar3,0x169);
      uVar3 = 0x47;
      uVar4 = 0xf1;
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x7c0))(param_1,*(undefined8 *)(param_1 + 0x7b0));
      if (0 < iVar1) {
        return 1;
      }
      uVar5 = CONCAT44(uVar3,0x164);
      uVar3 = 0x47;
      uVar4 = 0xea;
    }
  }
  else {
    uVar5 = CONCAT44(uVar3,0x156);
    uVar3 = 0x2f;
    uVar4 = 0x186;
  }
  FUN_144eafc90(param_1,uVar3,0x254,uVar4,"ssl\\tls_srp.c",uVar5);
  return 0;
}



// FUNCTION 144eaefa0 FUN_144eaefa0 body=74 status=ok
// SIG undefined FUN_144eaefa0(void)

bool FUN_144eaefa0(longlong param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)0x0;
  puVar1 = *(ushort **)(*(longlong *)(param_1 + 0x138) + 0x1e0);
  puVar2 = *(ushort **)(*(longlong *)(param_1 + 0x138) + 0x1d8);
  puVar3 = puVar5;
  puVar4 = puVar5;
  if (puVar1 != (ushort *)0x0) {
    do {
      if ((param_2 == *puVar2) && (puVar3 = puVar2, (*(uint *)(puVar2 + 2) & 0xfffffffd) == 0))
      break;
      puVar4 = (ushort *)((longlong)puVar4 + 1);
      puVar2 = puVar2 + 0x1c;
      puVar3 = puVar5;
    } while (puVar4 < puVar1);
  }
  return puVar3 != (ushort *)0x0;
}



// FUNCTION 144eaeff0 FUN_144eaeff0 body=86 status=ok
// SIG undefined FUN_144eaeff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaeff0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_144eafa50(param_1,1,param_2,0x1d0,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 144eaf050 FUN_144eaf050 body=91 status=ok
// SIG undefined FUN_144eaf050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaf050(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_144eaf910(param_1,2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 144eaf0b0 FUN_144eaf0b0 body=61 status=ok
// SIG undefined FUN_144eaf0b0(void)

undefined8 FUN_144eaf0b0(uint param_1)

{
  if (param_1 < 0x3375) {
    if (param_1 != 0x3374) {
      switch(param_1) {
      case 0:
      case 1:
      case 5:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x10:
      case 0x12:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x23:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2f:
      case 0x31:
      case 0x33:
        break;
      default:
        goto switchD_144eaf0da_caseD_2;
      }
    }
  }
  else if (param_1 != 0xff01) {
switchD_144eaf0da_caseD_2:
    return 0;
  }
  return 1;
}



// FUNCTION 144eaf130 FUN_144eaf130 body=65 status=ok
// SIG undefined FUN_144eaf130(void)

ushort * FUN_144eaf130(undefined8 *param_1,int param_2,uint param_3,ulonglong *param_4)

{
  ushort *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  puVar1 = (ushort *)*param_1;
  if (param_1[1] != 0) {
    do {
      if ((param_3 == *puVar1) &&
         (((param_2 == 2 || (param_2 == *(int *)(puVar1 + 2))) || (*(int *)(puVar1 + 2) == 2)))) {
        if (param_4 == (ulonglong *)0x0) {
          return puVar1;
        }
        *param_4 = uVar2;
        return puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x1c;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  return (ushort *)0x0;
}



// FUNCTION 144eaf180 FUN_144eaf180 body=49 status=ok
// SIG undefined FUN_144eaf180(void)

void FUN_144eaf180(longlong *param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    puVar1 = (undefined4 *)(*param_1 + 0xc);
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0xe;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 144eaf1c0 FUN_144eaf1c0 body=391 status=ok
// SIG undefined FUN_144eaf1c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eaf1c0(longlong param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  int iVar2;
  ushort *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 local_res10 [2];
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar7 = 0x144eaf1d8;
  uVar4 = 0;
  uVar5 = 2;
  if ((param_2 & 0x180) != 0) {
    uVar5 = (uint)(*(int *)(param_1 + 0x38) != 0);
  }
  puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x488) + 0x1d8);
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x488) + 0x1e0);
  if (uVar1 != 0) {
    do {
      if ((param_3 == *puVar3) &&
         (((uVar5 == 2 || (uVar5 == *(uint *)(puVar3 + 2))) || (*(uint *)(puVar3 + 2) == 2)))) {
        iVar2 = FUN_1452704a0(param_1,*(undefined4 *)(puVar3 + 4),param_2);
        if (iVar2 == 0) {
          return 1;
        }
        if (((param_2 & 0x700) != 0) && ((puVar3[6] & 2) == 0)) {
          FUN_144eafc90(param_1,0x6e,0x22b,0x6e,"ssl\\statem\\extensions_cust.c",
                        CONCAT44(uVar6,0x8f));
          return 0;
        }
        if ((param_2 & 0x4080) != 0) {
          *(uint *)(puVar3 + 6) = *(uint *)(puVar3 + 6) | 1;
        }
        if (*(code **)(puVar3 + 0x14) == (code *)0x0) {
          return 1;
        }
        iVar2 = (**(code **)(puVar3 + 0x14))
                          (param_1,param_3,param_2,param_4,param_5,param_6,param_7,local_res10,
                           *(undefined8 *)(puVar3 + 0x18),uVar7);
        if (0 < iVar2) {
          return 1;
        }
        FUN_144eafc90(param_1,local_res10[0],0x22b,0x6e,"ssl\\statem\\extensions_cust.c",0xa3);
        return 0;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x1c;
    } while (uVar4 < uVar1);
  }
  return 1;
}



// FUNCTION 144eaf350 FUN_144eaf350 body=583 status=ok
// SIG undefined FUN_144eaf350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eaf350(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined4 param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  undefined8 uVar8;
  undefined8 local_48;
  longlong local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x488);
  uVar6 = 0;
  uVar7 = uVar6;
  if (*(longlong *)(lVar2 + 0x1e0) != 0) {
    do {
      lVar3 = *(longlong *)(lVar2 + 0x1d8);
      local_48 = 0;
      local_40 = 0;
      iVar5 = FUN_145270bc0(param_1,*(undefined4 *)(uVar7 + 8 + lVar3),param_2,param_6);
      if (((iVar5 != 0) &&
          (((param_2 & 0x1f00) == 0 || ((*(byte *)(uVar7 + 0xc + lVar3) & 1) != 0)))) &&
         (((param_2 & 0x80) != 0 || (*(longlong *)(uVar7 + 0x10 + lVar3) != 0)))) {
        pcVar4 = *(code **)(uVar7 + 0x10 + lVar3);
        if (pcVar4 != (code *)0x0) {
          iVar5 = (*pcVar4)(param_1,*(undefined2 *)(uVar7 + lVar3),param_2,&local_48,&local_40,
                            param_4,param_5,local_res8,*(undefined8 *)(uVar7 + 0x20 + lVar3));
          if (iVar5 < 0) {
            FUN_144eafc90(param_1,local_res8[0],0x22a,0xea,"ssl\\statem\\extensions_cust.c",0xd5);
            return 0;
          }
          if (iVar5 == 0) goto LAB_144eaf4f7;
        }
        iVar5 = FUN_14526ef00(param_3,*(undefined2 *)(uVar7 + lVar3),2);
        if ((((iVar5 == 0) || (iVar5 = FUN_14526eb60(param_3,2), iVar5 == 0)) ||
            ((local_40 != 0 && (iVar5 = FUN_14526ef90(param_3,local_48), iVar5 == 0)))) ||
           (iVar5 = FUN_14526ea40(param_3), iVar5 == 0)) {
          uVar8 = 0xe1;
LAB_144eaf553:
          FUN_144eafc90(param_1,0x50,0x22a,0x44,"ssl\\statem\\extensions_cust.c",uVar8);
          return 0;
        }
        if ((param_2 & 0x80) != 0) {
          uVar1 = *(uint *)(uVar7 + 0xc + lVar3);
          if ((~(uVar1 >> 1) & 1) == 0) {
            uVar8 = 0xea;
            goto LAB_144eaf553;
          }
          *(uint *)(uVar7 + 0xc + lVar3) = uVar1 | 2;
        }
        pcVar4 = *(code **)(uVar7 + 0x18 + lVar3);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(param_1,*(undefined2 *)(uVar7 + lVar3),param_2,local_48,
                    *(undefined8 *)(uVar7 + 0x20 + lVar3));
        }
      }
LAB_144eaf4f7:
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 0x38;
    } while (uVar6 < *(ulonglong *)(lVar2 + 0x1e0));
  }
  return 1;
}



// FUNCTION 144eaf5a0 FUN_144eaf5a0 body=344 status=ok
// SIG undefined FUN_144eaf5a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eaf5a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_2[1] != 0) {
    lVar2 = FUN_144ea6d10(*param_2,param_2[1] * 0x38,"ssl\\statem\\extensions_cust.c",0x117);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    param_1[1] = param_2[1];
    uVar5 = uVar4;
    uVar6 = uVar4;
    if (param_2[1] != 0) {
      do {
        lVar2 = *param_2;
        lVar1 = *param_1;
        if (*(code **)(lVar2 + 0x10 + uVar5) == FUN_144eaf840) {
          if ((int)uVar6 == 0) {
            uVar3 = FUN_144ea6d10(*(undefined8 *)(lVar2 + 0x20 + uVar5),0x18,
                                  "ssl\\statem\\extensions_cust.c",0x12f);
            *(undefined8 *)(uVar5 + 0x20 + lVar1) = uVar3;
            lVar2 = FUN_144ea6d10(*(undefined8 *)(lVar2 + 0x30 + uVar5),0x10,
                                  "ssl\\statem\\extensions_cust.c",0x131);
            *(longlong *)(uVar5 + 0x30 + lVar1) = lVar2;
            if ((*(longlong *)(uVar5 + 0x20 + lVar1) == 0) || (lVar2 == 0)) {
              uVar6 = 1;
            }
          }
          else {
            *(undefined8 *)(uVar5 + 0x20 + lVar1) = 0;
            *(undefined8 *)(uVar5 + 0x30 + lVar1) = 0;
          }
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 + 0x38;
      } while (uVar4 < (ulonglong)param_2[1]);
      if ((int)uVar6 != 0) {
        FUN_144eaf7a0(param_1);
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 144eaf700 FUN_144eaf700 body=151 status=ok
// SIG undefined FUN_144eaf700(void)

undefined8 FUN_144eaf700(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  ulonglong uVar2;
  short *psVar3;
  ulonglong uVar4;
  
  psVar3 = (short *)*param_2;
  uVar4 = 0;
  if (param_2[1] != 0) {
    do {
      uVar2 = 0;
      psVar1 = (short *)*param_1;
      if (param_1[1] != 0) {
        do {
          if ((*psVar3 == *psVar1) &&
             (((*(int *)(psVar3 + 2) == 2 || (*(int *)(psVar3 + 2) == *(int *)(psVar1 + 2))) ||
              (*(int *)(psVar1 + 2) == 2)))) {
            *(undefined4 *)(psVar1 + 6) = *(undefined4 *)(psVar3 + 6);
            break;
          }
          uVar2 = uVar2 + 1;
          psVar1 = psVar1 + 0x1c;
        } while (uVar2 < (ulonglong)param_1[1]);
      }
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 0x1c;
    } while (uVar4 < (ulonglong)param_2[1]);
  }
  return 1;
}



// FUNCTION 144eaf7a0 FUN_144eaf7a0 body=156 status=ok
// SIG undefined FUN_144eaf7a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaf7a0(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    puVar1 = (undefined8 *)(*param_1 + 0x20);
    do {
      if ((code *)puVar1[-2] == FUN_144eaf840) {
        FUN_144ea6530(*puVar1,"ssl\\statem\\extensions_cust.c",0x14a);
        FUN_144ea6530(puVar1[2],"ssl\\statem\\extensions_cust.c",0x14b);
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 7;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  FUN_144ea6530(*param_1,"ssl\\statem\\extensions_cust.c",0x14d);
  return;
}



// FUNCTION 144eaf840 FUN_144eaf840 body=76 status=ok
// SIG undefined FUN_144eaf840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eaf840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000030;
  undefined8 *in_stack_00000048;
  
  if ((code *)in_stack_00000048[1] == (code *)0x0) {
    return 1;
  }
  uStack0000000000000030 = *in_stack_00000048;
                    /* WARNING: Could not recover jumptable at 0x000144eaf889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)in_stack_00000048[1])(param_1,param_2,param_4,param_5);
  return uVar1;
}



// FUNCTION 144eaf890 FUN_144eaf890 body=48 status=ok
// SIG undefined FUN_144eaf890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eaf890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  if ((code *)param_5[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144eaf8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_5[2])(param_1,param_2,param_4,*param_5);
    return;
  }
  return;
}



// FUNCTION 144eaf8c0 FUN_144eaf8c0 body=76 status=ok
// SIG undefined FUN_144eaf8c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eaf8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000030;
  undefined8 *in_stack_00000048;
  
  if ((code *)in_stack_00000048[1] == (code *)0x0) {
    return 1;
  }
  uStack0000000000000030 = *in_stack_00000048;
                    /* WARNING: Could not recover jumptable at 0x000144eaf909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)in_stack_00000048[1])(param_1,param_2,param_4,param_5);
  return uVar1;
}



// FUNCTION 144eaf910 FUN_144eaf910 body=320 status=ok
// SIG undefined FUN_144eaf910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eaf910(longlong param_1,int param_2,uint param_3,undefined4 param_4,longlong param_5,
             longlong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  ushort *puVar3;
  int iVar4;
  longlong lVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (((((param_5 != 0) || (param_6 == 0)) &&
       ((param_3 != 0x12 || ((-1 < (char)param_4 || (iVar4 = FUN_144b9ac50(), iVar4 == 0)))))) &&
      ((iVar4 = FUN_144eaf0b0(param_3), iVar4 == 0 || (param_3 == 0x12)))) && (param_3 < 0x10000)) {
    uVar2 = *(ulonglong *)(lVar1 + 0x1e0);
    uVar8 = 0;
    puVar3 = *(ushort **)(lVar1 + 0x1d8);
    puVar6 = puVar3;
    if (uVar2 != 0) {
      do {
        if (param_3 == *puVar6) {
          if (param_2 == 2) {
            return 0;
          }
          if (param_2 == *(int *)(puVar6 + 2)) {
            return 0;
          }
          if (*(int *)(puVar6 + 2) == 2) {
            return 0;
          }
        }
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 0x1c;
      } while (uVar8 < uVar2);
    }
    lVar5 = FUN_144ea6570(puVar3,(uVar2 + 1) * 0x38,"ssl\\statem\\extensions_cust.c",0x185);
    if (lVar5 != 0) {
      *(longlong *)(lVar1 + 0x1d8) = lVar5;
      puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x1e0) * 0x38 + lVar5);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[5] = param_8;
      puVar7[4] = param_7;
      puVar7[6] = param_9;
      *(int *)((longlong)puVar7 + 4) = param_2;
      *(undefined4 *)(puVar7 + 1) = param_4;
      puVar7[2] = param_5;
      puVar7[3] = param_6;
      *(short *)puVar7 = (short)param_3;
      *(longlong *)(lVar1 + 0x1e0) = *(longlong *)(lVar1 + 0x1e0) + 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144eafa50 FUN_144eafa50 body=358 status=ok
// SIG undefined FUN_144eafa50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144eafa50(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144eafa6e;
  puVar2 = (undefined8 *)FUN_144ea64e0(0x18,"ssl\\statem\\extensions_cust.c",0x1a1);
  puVar3 = (undefined8 *)FUN_144ea64e0(0x10,"ssl\\statem\\extensions_cust.c",0x1a3);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 == (undefined8 *)0x0)) {
    FUN_144ea6530(puVar2,"ssl\\statem\\extensions_cust.c",0x1a7);
    FUN_144ea6530(puVar3,"ssl\\statem\\extensions_cust.c",0x1a8);
    iVar1 = 0;
  }
  else {
    *puVar2 = param_7;
    puVar2[1] = param_5;
    puVar2[2] = param_6;
    *puVar3 = param_9;
    puVar3[1] = param_8;
    iVar1 = FUN_144eaf910(param_1,param_2,param_3,param_4,FUN_144eaf840,FUN_144eaf890,puVar2,
                          FUN_144eaf8c0,puVar3,uVar4);
    if (iVar1 == 0) {
      FUN_144ea6530(puVar2,"ssl\\statem\\extensions_cust.c",0x1bb);
      FUN_144ea6530(puVar3,"ssl\\statem\\extensions_cust.c",0x1bc);
    }
  }
  return iVar1;
}



// FUNCTION 144eafbc0 FUN_144eafbc0 body=4 status=ok
// SIG undefined FUN_144eafbc0(void)

undefined4 FUN_144eafbc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// FUNCTION 144eafbd0 FUN_144eafbd0 body=21 status=ok
// SIG undefined FUN_144eafbd0(void)

undefined8 FUN_144eafbd0(longlong param_1)

{
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x48) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144eafbf0 FUN_144eafbf0 body=21 status=ok
// SIG undefined FUN_144eafbf0(void)

undefined8 FUN_144eafbf0(longlong param_1)

{
  if ((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 0x5c) == 1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144eafc10 FUN_144eafc10 body=4 status=ok
// SIG undefined FUN_144eafc10(void)

undefined4 FUN_144eafc10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// FUNCTION 144eafc20 FUN_144eafc20 body=25 status=ok
// SIG undefined FUN_144eafc20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eafc20(undefined8 param_1)

{
  FUN_144eafec0(param_1,1);
  return;
}



// FUNCTION 144eafc40 FUN_144eafc40 body=24 status=ok
// SIG undefined FUN_144eafc40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eafc40(undefined8 param_1)

{
  FUN_144eafec0(param_1,0);
  return;
}



// FUNCTION 144eafc60 FUN_144eafc60 body=19 status=ok
// SIG undefined FUN_144eafc60(void)

void FUN_144eafc60(longlong param_1)

{
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



// FUNCTION 144eafc80 FUN_144eafc80 body=15 status=ok
// SIG undefined FUN_144eafc80(void)

void FUN_144eafc80(longlong param_1)

{
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x13;
  return;
}



// FUNCTION 144eafc90 FUN_144eafc90 body=123 status=ok
// SIG undefined FUN_144eafc90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eafc90(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  FUN_144ba24f0(0x14,param_3,param_4,param_5,param_6,0x144eafca0);
  if ((*(int *)(param_1 + 100) == 0) || (*(int *)(param_1 + 0x48) != 1)) {
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    if ((param_2 != -1) && (*(int *)(param_1 + 0x7c) != 1)) {
      FUN_144ece130(param_1,2,param_2);
    }
  }
  return;
}



// FUNCTION 144eafd10 FUN_144eafd10 body=10 status=ok
// SIG undefined FUN_144eafd10(void)

bool FUN_144eafd10(longlong param_1)

{
  return *(int *)(param_1 + 0x48) == 1;
}



// FUNCTION 144eafd20 FUN_144eafd20 body=4 status=ok
// SIG undefined FUN_144eafd20(void)

void FUN_144eafd20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// FUNCTION 144eafd30 FUN_144eafd30 body=4 status=ok
// SIG undefined FUN_144eafd30(void)

undefined4 FUN_144eafd30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// FUNCTION 144eafd40 FUN_144eafd40 body=12 status=ok
// SIG undefined FUN_144eafd40(void)

void FUN_144eafd40(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    return;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  return;
}



// FUNCTION 144eafd50 FUN_144eafd50 body=39 status=ok
// SIG undefined FUN_144eafd50(void)

undefined8 FUN_144eafd50(longlong param_1)

{
  if ((((*(int *)(param_1 + 0x710) == 1) && (*(int *)(param_1 + 0x38) != 0)) &&
      (*(int *)(param_1 + 0x5c) == 0x2e)) && (*(int *)(param_1 + 0x4d8) != 2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144eafd80 FUN_144eafd80 body=116 status=ok
// SIG undefined FUN_144eafd80(void)

void FUN_144eafd80(longlong param_1,int param_2)

{
  if (param_2 == -1) {
    if (1 < *(int *)(param_1 + 0x5c) - 0x2eU) {
      return;
    }
    *(undefined4 *)(param_1 + 100) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      if (*(int *)(param_1 + 0x84) != 0xc) {
        return;
      }
      if (*(int *)(param_1 + 0x5c) != 0x2e) {
        return;
      }
      *(undefined4 *)(param_1 + 100) = 1;
      return;
    }
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x5c) != 0x2e) {
        return;
      }
    }
    else {
      if (1 < *(int *)(param_1 + 0x5c) - 0x2eU) {
        return;
      }
      if (*(int *)(param_1 + 0x84) == 4) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 100) = 1;
    if (param_2 == 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x84) != 3) {
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = 7;
  return;
}



// FUNCTION 144eafe00 FUN_144eafe00 body=70 status=ok
// SIG undefined FUN_144eafe00(void)

undefined8 FUN_144eafe00(longlong param_1)

{
  if (((*(int *)(param_1 + 0x48) != 0) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x110) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x108) != 0)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(int *)(param_1 + 0x5c) == 0xc) {
        return 1;
      }
    }
    else if ((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(param_1 + 0x5c) == 0x14)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144eafe50 FUN_144eafe50 body=32 status=ok
// SIG undefined FUN_144eafe50(void)

undefined8 FUN_144eafe50(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0) != 0) &&
     (*(int *)(param_1 + 0x5c) != 0x24)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144eafe70 FUN_144eafe70 body=73 status=ok
// SIG undefined FUN_144eafe70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eafe70(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 2;
  iVar1 = FUN_144b9efc0(*(undefined8 *)(param_1 + 0x18),0xb,0,0);
  if (iVar1 < 1) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return 1;
}



// FUNCTION 144eafec0 FUN_144eafec0 body=995 status=ok
// SIG undefined FUN_144eafec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144eafec0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x144eafed9;
  lVar8 = 0;
  uVar6 = 0xffffffff;
  if (param_1[0x12] == 1) {
    return 0xffffffff;
  }
  FUN_144ba26f0();
  SetLastError(0);
  pcVar5 = *(code **)(param_1 + 0x15a);
  if (pcVar5 == (code *)0x0) {
    pcVar5 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108);
  }
  param_1[0x1b] = param_1[0x1b] + 1;
  if ((((param_1[0x19] == 0) || ((param_1[0x17] == 0 && (param_1[0x12] == 0)))) &&
      ((**(uint **)(param_1 + 0x2a) & 0x800) == 0)) && (iVar2 = FUN_144b985b0(param_1), iVar2 == 0))
  {
    return 0xffffffff;
  }
  uVar7 = uVar6;
  if (param_1[0x12] == 0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  else if (param_1[0x12] != 4) {
    do {
      if (param_1[0x12] == 2) {
        iVar2 = FUN_144eb02b0(param_1);
        if (iVar2 != 1) goto LAB_144eb01db;
        param_1[0x12] = 3;
        param_1[0x13] = 0;
      }
      else {
        if (param_1[0x12] != 3) {
          if (((param_1[0x19] == 0) || (param_1[0x12] != 1)) &&
             ((FUN_144ba24f0(0x14,0x161,0x100,"ssl\\statem\\statem.c",0x1c7), param_1[0x19] == 0 ||
              (param_1[0x12] != 1)))) {
            param_1[0x19] = 1;
            param_1[0x12] = 1;
            if (param_1[0x1f] != 1) {
              FUN_144ece130(param_1,2,0x50);
            }
          }
          FUN_144ba24f0(0x14,0x161,0x42,"ssl\\statem\\statem.c",0x1c8);
          goto LAB_144eb01db;
        }
        iVar2 = FUN_144eb0670(param_1);
        if (iVar2 == 1) {
          param_1[0x12] = 2;
          param_1[0x15] = 0;
        }
        else {
          if (iVar2 != 2) goto LAB_144eb01db;
          param_1[0x12] = 4;
        }
      }
      uVar1 = param_1[0x12];
joined_r0x000144eb0181:
    } while (uVar1 != 4);
    uVar7 = 1;
    goto LAB_144eb01db;
  }
  param_1[0xe] = param_2;
  if ((pcVar5 != (code *)0x0) &&
     ((((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0 ||
        (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) ||
       ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0)) ||
      ((iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304 || (iVar2 == 0x10000)))))) {
    (*pcVar5)(param_1,0x10,1);
  }
  uVar1 = *param_1;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    if ((uVar1 & 0xffffff00) == 0x300) goto LAB_144eb0046;
    uVar10 = 0x16e;
    lVar8 = 0;
  }
  else if (((uVar1 & 0xff00) == 0xfe00) || ((param_2 == 0 && ((uVar1 & 0xff00) == 0x100)))) {
LAB_144eb0046:
    uVar9 = 0;
    iVar2 = FUN_144b9dff0(param_1,9,0,uVar1,0,uVar10);
    if (iVar2 == 0) {
      uVar10 = 0x175;
      lVar8 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x22) != 0) {
LAB_144eb00b1:
        iVar2 = FUN_144eb4570(param_1);
        if (iVar2 == 0) {
          uVar10 = CONCAT44(uVar9,0x18a);
        }
        else {
          param_1[0x26] = 0;
          param_1[0x27] = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xf0) = 0;
          iVar2 = FUN_144b9bc20(param_1);
          if (iVar2 != 0) {
            if (((param_1[0x17] != 0) || (param_1[0x12] != 0)) && (param_1[0x1e0] == 0)) {
LAB_144eb0175:
              param_1[0x12] = 3;
              param_1[0x13] = 0;
              uVar1 = param_1[0x12];
              goto joined_r0x000144eb0181;
            }
            iVar2 = FUN_144eb4ea0(param_1);
            if (iVar2 != 0) {
              if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0) ||
                 (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) {
                param_1[0x1a] = 1;
              }
              goto LAB_144eb0175;
            }
            goto LAB_144eb01db;
          }
          uVar10 = CONCAT44(uVar9,0x19d);
        }
        FUN_144ba24f0(0x14,0x161,0x44,"ssl\\statem\\statem.c",uVar10);
        if ((param_1[0x19] == 0) || (uVar7 = 0xffffffff, param_1[0x12] != 1)) {
          param_1[0x19] = 1;
          param_1[0x12] = 1;
          uVar7 = uVar6;
        }
        goto LAB_144eb01db;
      }
      lVar3 = FUN_144ea6fc0();
      if (lVar3 == 0) {
        uVar10 = 0x17c;
        lVar8 = lVar3;
      }
      else {
        lVar4 = FUN_144ea70e0(lVar3,0x4000);
        if (lVar4 != 0) {
          *(longlong *)(param_1 + 0x22) = lVar3;
          goto LAB_144eb00b1;
        }
        uVar10 = 0x181;
        lVar8 = lVar3;
      }
    }
  }
  else {
    uVar10 = 0x168;
  }
  FUN_144ba24f0(0x14,0x161,0x44,"ssl\\statem\\statem.c",uVar10);
  if ((param_1[0x19] == 0) || (uVar7 = 0xffffffff, param_1[0x12] != 1)) {
    param_1[0x19] = 1;
    param_1[0x12] = 1;
    uVar7 = uVar6;
  }
LAB_144eb01db:
  param_1[0x1b] = param_1[0x1b] - 1;
  FUN_144ea7070(lVar8);
  if (pcVar5 != (code *)0x0) {
    uVar10 = 0x2002;
    if (param_2 == 0) {
      uVar10 = 0x1002;
    }
    (*pcVar5)(param_1,uVar10,uVar7);
  }
  return uVar7;
}



// FUNCTION 144eb02b0 FUN_144eb02b0 body=956 status=ok
// SIG undefined FUN_144eb02b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb02b0(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  undefined4 uVar11;
  undefined8 local_48;
  ulonglong local_40;
  
  pcVar6 = *(code **)(param_1 + 0x568);
  local_res10 = 0;
  if (pcVar6 == (code *)0x0) {
    pcVar6 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    pcVar5 = FUN_1452734b0;
    pcVar8 = FUN_1452741c0;
    pcVar9 = (code *)&LAB_1452740c0;
    pcVar10 = FUN_145274320;
  }
  else {
    pcVar5 = FUN_144ebe900;
    pcVar8 = FUN_144ebf7d0;
    pcVar9 = FUN_144ebf730;
    pcVar10 = FUN_144ebf8d0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    *(undefined4 *)(param_1 + 0x5e8) = 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
LAB_144eb0360:
  while (iVar3 = *(int *)(param_1 + 0x54), iVar3 != 0) {
    if (iVar3 == 1) goto LAB_144eb0470;
    if (iVar3 != 2) {
      uVar11 = 0x2b1;
      uVar7 = 0x44;
      goto LAB_144eb053a;
    }
    iVar3 = (*pcVar10)(param_1,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3;
    if (iVar3 == 0) {
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar11 = 0x29b;
      goto LAB_144eb0534;
    }
    if (iVar3 == 1) {
      bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60);
      goto LAB_144eb05b2;
    }
    if (iVar3 == 2) goto LAB_144eb04ec;
    if (iVar3 - 3U < 3) {
      return 0;
    }
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
    iVar3 = FUN_144eb64d0(param_1,local_res8);
  }
  else {
    iVar3 = FUN_1452721d0(param_1,local_res8,&local_res10);
  }
  if (iVar3 == 0) {
    return 0;
  }
  if (pcVar6 != (code *)0x0) {
    uVar7 = 0x2001;
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar7 = 0x1001;
    }
    (*pcVar6)(param_1,uVar7,1);
  }
  iVar3 = (*pcVar5)(param_1,local_res8[0]);
  if (iVar3 == 0) {
    return 0;
  }
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x228);
  uVar4 = (*pcVar9)(param_1);
  if (uVar4 < uVar2) {
    FUN_144ba24f0(0x14,0x160,0x98,"ssl\\statem\\statem.c",0x25b);
    if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (*(int *)(param_1 + 0x7c) == 1) {
      return 0;
    }
    uVar7 = 0x2f;
    goto LAB_144eb063c;
  }
  if ((((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) &&
      (uVar2 != 0)) && (iVar3 = FUN_144eb0a70(param_1,uVar2 + 4), iVar3 == 0)) {
    uVar11 = 0x265;
    uVar7 = 7;
    goto LAB_144eb053a;
  }
  *(undefined4 *)(param_1 + 0x54) = 1;
LAB_144eb0470:
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) &&
     (iVar3 = FUN_144eb6790(param_1,&local_res10), iVar3 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x5e8) = 0;
  if (local_res10 < 0x8000000000000000) {
    local_48 = *(undefined8 *)(param_1 + 0x90);
    local_40 = local_res10;
    iVar3 = (*pcVar8)(param_1,&local_48);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60);
LAB_144eb05b2:
        if ((bVar1 & 8) != 0) {
          FUN_144ecc370(param_1);
        }
        return 1;
      }
      if (iVar3 == 2) {
        *(undefined4 *)(param_1 + 0x54) = 2;
        *(undefined4 *)(param_1 + 0x58) = 3;
      }
      else {
LAB_144eb04ec:
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      goto LAB_144eb0360;
    }
    if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
      return 0;
    }
    uVar11 = 0x283;
LAB_144eb0534:
    uVar7 = 0x100;
  }
  else {
    uVar11 = 0x279;
    uVar7 = 0x44;
  }
LAB_144eb053a:
  FUN_144ba24f0(0x14,0x160,uVar7,"ssl\\statem\\statem.c",uVar11);
  if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  if (*(int *)(param_1 + 0x7c) == 1) {
    return 0;
  }
  uVar7 = 0x50;
LAB_144eb063c:
  FUN_144ece130(param_1,2,uVar7);
  return 0;
}



// FUNCTION 144eb0670 FUN_144eb0670 body=1014 status=ok
// SIG undefined FUN_144eb0670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb0670(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  int local_res8 [2];
  code *local_res10;
  undefined4 uVar8;
  undefined1 local_58 [48];
  
  pcVar4 = *(code **)(param_1 + 0x568);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    pcVar3 = FUN_145273860;
    pcVar2 = FUN_145273b10;
    pcVar6 = FUN_145273be0;
    pcVar7 = FUN_145273ed0;
  }
  else {
    pcVar3 = FUN_144ebeb80;
    pcVar2 = FUN_144ebee90;
    pcVar6 = FUN_144ebf0f0;
    pcVar7 = FUN_144ebf4b0;
  }
LAB_144eb0700:
  while (iVar1 = *(int *)(param_1 + 0x4c), iVar1 == 0) {
    if (pcVar4 != (code *)0x0) {
      uVar5 = 0x2001;
      if (*(int *)(param_1 + 0x38) == 0) {
        uVar5 = 0x1001;
      }
      (*pcVar4)(param_1,uVar5,1);
    }
    iVar1 = (*pcVar3)(param_1);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar8 = 0x324;
      goto LAB_144eb09f3;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      *(undefined4 *)(param_1 + 0x50) = 3;
    }
    else if (iVar1 == 2) {
      return 1;
    }
  }
  if (iVar1 == 1) {
    iVar1 = (*pcVar2)(param_1,*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar8 = 0x32c;
    }
    else {
      if (iVar1 == 1) {
        return 2;
      }
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x4c) = 2;
      }
      else if (iVar1 - 3U < 3) {
        return 0;
      }
      iVar1 = (*pcVar7)(param_1,local_58,&local_res10,local_res8);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_res8[0] == -1) {
        *(undefined4 *)(param_1 + 0x4c) = 3;
        *(undefined4 *)(param_1 + 0x50) = 3;
        goto LAB_144eb0700;
      }
      iVar1 = FUN_14526e920(local_58,*(undefined8 *)(param_1 + 0x88));
      if ((iVar1 == 0) ||
         (iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x68))
                            (param_1,local_58,local_res8[0]), iVar1 == 0)) {
        FUN_14526f190(local_58);
        uVar5 = 0x44;
        uVar8 = 0x348;
        goto LAB_144eb09f9;
      }
      if ((local_res10 == (code *)0x0) || (iVar1 = (*local_res10)(param_1,local_58), iVar1 != 0)) {
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x70))
                          (param_1,local_58,local_res8[0]);
        if ((iVar1 == 0) || (iVar1 = FUN_14526ea70(local_58), iVar1 == 0)) {
          FUN_14526f190(local_58);
          uVar5 = 0x44;
          uVar8 = 0x354;
          goto LAB_144eb09f9;
        }
        goto LAB_144eb0843;
      }
      FUN_14526f190(local_58);
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar8 = 0x34d;
    }
  }
  else {
    if (iVar1 == 2) {
LAB_144eb0843:
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) &&
         (*(int *)(param_1 + 0x78) != 0)) {
        FUN_144ecc270(param_1);
      }
      if ((*(int *)(param_1 + 0x5c) == 0x10) || (*(int *)(param_1 + 0x5c) == 0x23)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
          iVar1 = FUN_144eb4c00(param_1,0x14);
        }
        else {
          iVar1 = FUN_1452716a0();
        }
      }
      else {
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x78))(param_1);
      }
      if (iVar1 < 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x4c) = 3;
      *(undefined4 *)(param_1 + 0x50) = 3;
    }
    else if (iVar1 != 3) {
      uVar8 = 0x37b;
      uVar5 = 0x44;
      goto LAB_144eb09f9;
    }
    iVar1 = (*pcVar6)(param_1,*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        return 2;
      }
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      else if (iVar1 - 3U < 3) {
        return 0;
      }
      goto LAB_144eb0700;
    }
    if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
      return 0;
    }
    uVar8 = 0x369;
  }
LAB_144eb09f3:
  uVar5 = 0x100;
LAB_144eb09f9:
  FUN_144ba24f0(0x14,0x24a,uVar5,"ssl\\statem\\statem.c",uVar8);
  if ((*(int *)(param_1 + 100) == 0) || (*(int *)(param_1 + 0x48) != 1)) {
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (*(int *)(param_1 + 0x7c) != 1) {
      FUN_144ece130(param_1,2);
    }
  }
  return 0;
}



// FUNCTION 144eb0a70 FUN_144eb0a70 body=126 status=ok
// SIG undefined FUN_144eb0a70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb0a70(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = *(longlong *)(param_1 + 0x90) - *(longlong *)(*(longlong *)(param_1 + 0x88) + 8);
  lVar1 = FUN_144ea7230(*(longlong *)(param_1 + 0x88),(longlong)(int)param_2);
  if ((lVar1 != 0) && (uVar2 <= param_2)) {
    *(ulonglong *)(param_1 + 0x90) = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8) + uVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 144eb0af0 FUN_144eb0af0 body=5 status=ok
// SIG undefined FUN_144eb0af0(void)

void FUN_144eb0af0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}



// FUNCTION 144eb0b00 FUN_144eb0b00 body=136 status=ok
// SIG undefined FUN_144eb0b00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb0b00(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144eb0b0c;
  local_18 = *(longlong *)(param_1 + 0x28);
  if (local_18 != 0) {
    local_28 = param_1;
    local_20 = param_2;
    FUN_144e98620(*(undefined8 *)(param_1 + 0x380));
    uVar1 = FUN_144ea89f0(*(undefined8 *)(param_1 + 0x28));
    FUN_144ea8a00(*(undefined8 *)(param_1 + 0x28),0);
    FUN_144ea88e0(local_18,FUN_144eb2020,&local_28);
    FUN_144ea8a00(*(undefined8 *)(param_1 + 0x28),uVar1);
    FUN_144e98640(*(undefined8 *)(param_1 + 0x380));
  }
  return;
}



// FUNCTION 144eb0b90 FUN_144eb0b90 body=15 status=ok
// SIG undefined FUN_144eb0b90(void)

undefined4 FUN_144eb0b90(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x1d4);
}



// FUNCTION 144eb0ba0 FUN_144eb0ba0 body=8 status=ok
// SIG undefined FUN_144eb0ba0(void)

undefined8 FUN_144eb0ba0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return 1;
}



// FUNCTION 144eb0bb0 FUN_144eb0bb0 body=8 status=ok
// SIG undefined FUN_144eb0bb0(void)

undefined8 FUN_144eb0bb0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1e0);
}



// FUNCTION 144eb0bc0 FUN_144eb0bc0 body=13 status=ok
// SIG undefined FUN_144eb0bc0(void)

undefined8 FUN_144eb0bc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1e0) = param_2;
  return 1;
}



// FUNCTION 144eb0bd0 FUN_144eb0bd0 body=38 status=ok
// SIG undefined FUN_144eb0bd0(void)

undefined8 FUN_144eb0bd0(longlong param_1)

{
  if ((*(int *)(param_1 + 0x1b0) == 0) &&
     ((*(longlong *)(param_1 + 0x150) != 0 || (*(longlong *)(param_1 + 0x218) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144eb0c00 FUN_144eb0c00 body=299 status=ok
// SIG undefined FUN_144eb0c00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eb0c00(void)

{
  int iVar1;
  longlong lVar2;
  __time64_t _Var3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_144b973d0(0x200000,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_144ea6670(0x270,"ssl\\ssl_sess.c",0x48);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x14,0xbd,0x41,"ssl\\ssl_sess.c",0x4a);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x1c8) = 1;
  *(undefined4 *)(lVar2 + 0x1cc) = 1;
  *(undefined4 *)(lVar2 + 0x1d0) = 0x130;
  _Var3 = _time64((__time64_t *)0x0);
  *(int *)(lVar2 + 0x1d4) = (int)_Var3;
  lVar4 = FUN_144e985a0();
  *(longlong *)(lVar2 + 0x268) = lVar4;
  if (lVar4 == 0) {
    FUN_144ba24f0(0x14,0xbd,0x41,"ssl\\ssl_sess.c",0x54);
    uVar5 = 0x55;
  }
  else {
    iVar1 = FUN_144ea5c20(2,lVar2,lVar2 + 0x1f0);
    if (iVar1 != 0) {
      return lVar2;
    }
    FUN_144e98660(*(undefined8 *)(lVar2 + 0x268));
    uVar5 = 0x5b;
  }
  FUN_144ea6530(lVar2,"ssl\\ssl_sess.c",uVar5);
  return 0;
}



// FUNCTION 144eb0d30 FUN_144eb0d30 body=24 status=ok
// SIG undefined FUN_144eb0d30(void)

bool FUN_144eb0d30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x1cc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 144eb0d50 FUN_144eb0d50 body=347 status=ok
// SIG undefined FUN_144eb0d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb0d50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x1cc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_144ea6040(2,param_1,param_1 + 0x1f0);
      FUN_14259f0c0(param_1 + 0x50,0x100);
      FUN_14259f0c0(param_1 + 0x158,0x20);
      FUN_144b47250(*(undefined8 *)(param_1 + 0x1b8));
      FUN_144babe00(*(undefined8 *)(param_1 + 0x1c0),FUN_144b47250);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x208),"ssl\\ssl_sess.c",0x2fd);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x210),"ssl\\ssl_sess.c",0x2fe);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x1a0),"ssl\\ssl_sess.c",0x300);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x1a8),"ssl\\ssl_sess.c",0x301);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x248),"ssl\\ssl_sess.c",0x304);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x230),"ssl\\ssl_sess.c",0x306);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x250),"ssl\\ssl_sess.c",0x307);
      FUN_144e98660(*(undefined8 *)(param_1 + 0x268));
      FUN_144ea66f0(param_1,0x270,"ssl\\ssl_sess.c",0x309);
    }
  }
  return;
}



// FUNCTION 144eb0eb0 FUN_144eb0eb0 body=189 status=ok
// SIG undefined FUN_144eb0eb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb0eb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) {
    iVar1 = FUN_144eafbc0();
    if (iVar1 == 0) {
      iVar1 = FUN_144eafbd0(param_1);
      if (iVar1 == 0) {
        FUN_144eb1eb0(*(undefined8 *)(param_1 + 0x768),*(undefined8 *)(param_1 + 0x508),1);
      }
    }
  }
  if (**(longlong **)(param_1 + 0x598) != *(longlong *)(param_1 + 8)) {
    uVar2 = FUN_144b9a690(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 0x1cc) = *(int *)(param_2 + 0x1cc) + 1;
    UNLOCK();
    *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_2 + 0x1c8);
  }
  FUN_144eb0d50(*(undefined8 *)(param_1 + 0x508));
  *(longlong *)(param_1 + 0x508) = param_2;
  return 1;
}



// FUNCTION 144eb0f70 FUN_144eb0f70 body=532 status=ok
// SIG undefined FUN_144eb0f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb0f70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 1;
  LOCK();
  *(int *)(param_2 + 0x1cc) = *(int *)(param_2 + 0x1cc) + 1;
  UNLOCK();
  FUN_144e98620(*(undefined8 *)(param_1 + 0x380));
  lVar4 = FUN_144ea86c0(*(undefined8 *)(param_1 + 0x28),param_2);
  if (lVar4 == 0) {
    lVar4 = FUN_144ea8820(*(undefined8 *)(param_1 + 0x28),param_2);
    if ((lVar4 == 0) && (lVar4 = param_2, param_2 != 0)) goto LAB_144eb1034;
  }
  else {
    if (lVar4 == param_2) {
LAB_144eb1034:
      FUN_144eb0d50(lVar4);
      uVar7 = 0;
      goto LAB_144eb1164;
    }
    FUN_144eb1df0(param_1);
    FUN_144eb0d50(lVar4);
  }
  if ((*(longlong *)(param_2 + 0x200) != 0) && (*(longlong *)(param_2 + 0x1f8) != 0)) {
    FUN_144eb1df0(param_1,param_2);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    *plVar1 = param_2;
    *(longlong *)(param_1 + 0x40) = param_2;
    *(longlong **)(param_2 + 0x1f8) = plVar1;
    *(longlong **)(param_2 + 0x200) = (longlong *)(param_1 + 0x40);
  }
  else {
    *(longlong *)(param_2 + 0x200) = lVar4;
    *(longlong *)(lVar4 + 0x1f8) = param_2;
    *(longlong **)(param_2 + 0x1f8) = plVar1;
    *plVar1 = param_2;
  }
  iVar2 = FUN_144b99c10(param_1,0x2b,0);
  if (0 < iVar2) {
    iVar2 = FUN_144b99c10(param_1,0x2b,0);
    iVar3 = FUN_144b99c10(param_1,0x14,0);
    if (iVar2 < iVar3) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x40);
        if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x150) == 0)) break;
        lVar5 = FUN_144ea8820(*(undefined8 *)(param_1 + 0x28),lVar4);
        uVar6 = 0;
        if (lVar5 != 0) {
          uVar6 = FUN_144ea8790(*(undefined8 *)(param_1 + 0x28),lVar5);
          FUN_144eb1df0(param_1,uVar6);
        }
        *(undefined4 *)(lVar4 + 0x1b0) = 1;
        if (*(code **)(param_1 + 0x58) != (code *)0x0) {
          (**(code **)(param_1 + 0x58))(param_1,lVar4);
        }
        if (lVar5 == 0) break;
        FUN_144eb0d50(uVar6);
        LOCK();
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        UNLOCK();
        iVar2 = FUN_144b99c10(param_1,0x2b,0);
        iVar3 = FUN_144b99c10(param_1,0x14);
      } while (iVar2 < iVar3);
    }
  }
LAB_144eb1164:
  FUN_144e98640(*(undefined8 *)(param_1 + 0x380));
  return uVar7;
}



// FUNCTION 144eb1190 FUN_144eb1190 body=26 status=ok
// SIG undefined FUN_144eb1190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb1190(undefined8 param_1,undefined8 param_2)

{
  FUN_144eb1eb0(param_1,param_2,1);
  return;
}



// FUNCTION 144eb11b0 FUN_144eb11b0 body=8 status=ok
// SIG undefined FUN_144eb11b0(void)

undefined8 FUN_144eb11b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x508);
}



// FUNCTION 144eb11c0 FUN_144eb11c0 body=97 status=ok
// SIG undefined FUN_144eb11c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb11c0(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) {
    iVar1 = FUN_144eafbc0();
    if (iVar1 == 0) {
      iVar1 = FUN_144eafbd0(param_1);
      if (iVar1 == 0) {
        FUN_144eb1eb0(*(undefined8 *)(param_1 + 0x768),*(undefined8 *)(param_1 + 0x508),1);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144eb1230 FUN_144eb1230 body=498 status=ok
// SIG undefined FUN_144eb1230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb1230(int *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar1 = *param_1;
  if ((((iVar1 != 0x100) && (4 < iVar1 - 0x300U)) && (iVar1 != 0xfefd)) && (iVar1 != 0xfeff)) {
    FUN_144eafc90(param_1,0x50,0x223,0x103,"ssl\\ssl_sess.c",0x10000012a);
    return 0;
  }
  *(undefined8 *)(param_2 + 0x150) = 0x20;
  if (param_1[0x19e] != 0) {
    *(undefined8 *)(param_2 + 0x150) = 0;
    return 1;
  }
  FUN_144e98600(*(undefined8 *)(param_1 + 0x5ce));
  FUN_144e98600(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
  pcVar2 = *(code **)(param_1 + 0x14a);
  if (*(code **)(param_1 + 0x14a) == (code *)0x0) {
    pcVar2 = FUN_144eb1fa0;
    if (*(code **)(*(longlong *)(param_1 + 0x1da) + 400) != (code *)0x0) {
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1da) + 400);
    }
  }
  FUN_144e98640(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
  FUN_144e98640(*(undefined8 *)(param_1 + 0x5ce));
  memset((void *)(param_2 + 0x158),0,*(size_t *)(param_2 + 0x150));
  local_res8[0] = *(uint *)(param_2 + 0x150);
  iVar1 = (*pcVar2)(param_1,param_2 + 0x158,local_res8);
  if (iVar1 == 0) {
    uVar4 = CONCAT44(uVar5,0x151);
    uVar3 = 0x12d;
  }
  else if ((local_res8[0] == 0) || (*(ulonglong *)(param_2 + 0x150) < (ulonglong)local_res8[0])) {
    uVar4 = CONCAT44(uVar5,0x15b);
    uVar3 = 0x12f;
  }
  else {
    *(ulonglong *)(param_2 + 0x150) = (ulonglong)local_res8[0];
    iVar1 = FUN_144b98ba0(param_1,param_2 + 0x158,local_res8[0]);
    if (iVar1 == 0) {
      return 1;
    }
    uVar4 = CONCAT44(uVar5,0x163);
    uVar3 = 0x12e;
  }
  FUN_144eafc90(param_1,0x50,0x223,uVar3,"ssl\\ssl_sess.c",uVar4);
  return 0;
}



// FUNCTION 144eb1430 FUN_144eb1430 body=399 status=ok
// SIG undefined FUN_144eb1430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb1430(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  puVar3 = (undefined4 *)FUN_144eb0c00();
  if (puVar3 == (undefined4 *)0x0) {
    FUN_144eafc90(param_1,0x50,0xb5,0x41,"ssl\\ssl_sess.c",CONCAT44(uVar5,0x172));
    return 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x1da) + 0x4c) == 0) {
    uVar1 = FUN_144b9a800(param_1);
    puVar3[0x74] = uVar1;
  }
  else {
    puVar3[0x74] = *(int *)(*(longlong *)(param_1 + 0x1da) + 0x4c);
  }
  FUN_144eb0d50(*(undefined8 *)(param_1 + 0x142));
  *(undefined8 *)(param_1 + 0x142) = 0;
  if ((param_2 == 0) ||
     ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
       (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)))) {
    *(undefined8 *)(puVar3 + 0x54) = 0;
  }
  else {
    iVar2 = FUN_144eb1230(param_1,puVar3);
    if (iVar2 == 0) {
      FUN_144eb0d50(puVar3);
      return 0;
    }
  }
  if (*(ulonglong *)(param_1 + 0x138) < 0x21) {
    memcpy(puVar3 + 0x60,param_1 + 0x13a,*(ulonglong *)(param_1 + 0x138));
    *(undefined8 *)(puVar3 + 0x5e) = *(undefined8 *)(param_1 + 0x138);
    *(undefined4 **)(param_1 + 0x142) = puVar3;
    *puVar3 = *param_1;
    puVar3[0x72] = 0;
    if ((**(uint **)(param_1 + 0x2a) & 0x200) != 0) {
      puVar3[0x98] = puVar3[0x98] | 1;
    }
    uVar4 = 1;
  }
  else {
    FUN_144eafc90(param_1,0x50,0xb5,0x44,"ssl\\ssl_sess.c",CONCAT44(uVar5,0x192));
    FUN_144eb0d50(puVar3);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144eb15c0 FUN_144eb15c0 body=330 status=ok
// SIG undefined FUN_144eb15c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb15c0(undefined4 *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  undefined1 auStack_2d8 [32];
  int local_2b8 [4];
  undefined4 local_2a8 [84];
  size_t local_158;
  undefined1 local_150 [280];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144eb15d6;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar1 = *(longlong *)(param_1 + 0x1da);
  if ((*(uint *)(lVar1 + 0x48) & 0x100) == 0) {
    local_2a8[0] = *param_1;
    if (0x20 < param_3) goto LAB_144eb16fa;
    memcpy(local_150,param_2,param_3);
    local_158 = param_3;
    FUN_144e98600(*(undefined8 *)(lVar1 + 0x380));
    lVar1 = FUN_144ea8820(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x28),local_2a8);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x1cc) = *(int *)(lVar1 + 0x1cc) + 1;
      UNLOCK();
    }
    FUN_144e98640(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
    if (lVar1 != 0) goto LAB_144eb16fa;
    LOCK();
    *(int *)(*(longlong *)(param_1 + 0x1da) + 0x80) =
         *(int *)(*(longlong *)(param_1 + 0x1da) + 0x80) + 1;
    UNLOCK();
  }
  if (*(code **)(*(longlong *)(param_1 + 0x1da) + 0x60) != (code *)0x0) {
    local_2b8[0] = 1;
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1da) + 0x60))
                      (param_1,param_2,param_3 & 0xffffffff,local_2b8);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(*(longlong *)(param_1 + 0x1da) + 0x90) =
           *(int *)(*(longlong *)(param_1 + 0x1da) + 0x90) + 1;
      UNLOCK();
      if (local_2b8[0] != 0) {
        LOCK();
        *(int *)(lVar1 + 0x1cc) = *(int *)(lVar1 + 0x1cc) + 1;
        UNLOCK();
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x1da) + 0x48) & 0x200) == 0) {
        FUN_144eb0f70(*(longlong *)(param_1 + 0x1da),lVar1);
      }
    }
  }
LAB_144eb16fa:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_2d8);
}



// FUNCTION 144eb1730 FUN_144eb1730 body=800 status=ok
// SIG undefined FUN_144eb1730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb1730(int *param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  __time64_t _Var5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  int *local_res8;
  undefined8 uVar9;
  
  uVar6 = 1;
  bVar1 = false;
  local_res8 = (int *)0x0;
  bVar2 = false;
  bVar3 = false;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
    param_1[0x19e] = 1;
    iVar4 = FUN_145270930(param_1,0x12,0x80,*(undefined8 *)(param_2 + 0x288),0,0);
    if ((iVar4 != 0) &&
       (iVar4 = FUN_145270930(param_1,0x19,0x80,*(undefined8 *)(param_2 + 0x288),0,0), iVar4 != 0))
    {
      local_res8 = *(int **)(param_1 + 0x142);
      bVar3 = false;
      goto LAB_144eb18d7;
    }
LAB_144eb17e6:
    uVar8 = 0xffffffff;
  }
  else {
    iVar4 = FUN_144ebabd0(param_1,param_2,&local_res8);
    if (iVar4 < 0) {
LAB_144eb18d7:
      bVar1 = bVar3;
      piVar7 = local_res8;
      if (local_res8 != (int *)0x0) {
        bVar3 = false;
        if (((*local_res8 == *param_1) &&
            (bVar3 = bVar2, *(size_t *)(local_res8 + 0x5e) == *(size_t *)(param_1 + 0x138))) &&
           (iVar4 = memcmp(local_res8 + 0x60,param_1 + 0x13a,*(size_t *)(local_res8 + 0x5e)),
           iVar4 == 0)) {
          if (((*(byte *)(param_1 + 0x156) & 1) == 0) || (*(longlong *)(param_1 + 0x138) != 0)) {
            _Var5 = _time64((__time64_t *)0x0);
            piVar7 = local_res8;
            if (local_res8[0x74] < (int)_Var5 - local_res8[0x75]) {
              LOCK();
              *(int *)(*(longlong *)(param_1 + 0x1da) + 0x84) =
                   *(int *)(*(longlong *)(param_1 + 0x1da) + 0x84) + 1;
              UNLOCK();
              bVar3 = false;
              if (bVar1) {
                FUN_144eb1eb0(*(undefined8 *)(param_1 + 0x1da),local_res8,1);
                piVar7 = local_res8;
                bVar3 = bVar2;
              }
            }
            else {
              if ((*(byte *)(local_res8 + 0x98) & 1) != 0) {
                if ((**(uint **)(param_1 + 0x2a) & 0x200) != 0) {
LAB_144eb19e6:
                  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0)
                      || (iVar4 = **(int **)(param_1 + 2), iVar4 < 0x304)) || (iVar4 == 0x10000)) {
                    FUN_144eb0d50(*(undefined8 *)(param_1 + 0x142));
                    *(int **)(param_1 + 0x142) = local_res8;
                  }
                  LOCK();
                  *(int *)(*(longlong *)(param_1 + 0x1da) + 0x8c) =
                       *(int *)(*(longlong *)(param_1 + 0x1da) + 0x8c) + 1;
                  UNLOCK();
                  param_1[0x16a] = *(int *)(*(longlong *)(param_1 + 0x142) + 0x1c8);
                  return 1;
                }
                uVar6 = 0x2f;
                uVar9 = 0x255;
                uVar8 = 0x68;
                goto LAB_144eb1934;
              }
              if ((**(uint **)(param_1 + 0x2a) & 0x200) == 0) goto LAB_144eb19e6;
            }
          }
          else {
            uVar9 = 0x242;
            uVar6 = 0x50;
            uVar8 = 0x115;
LAB_144eb1934:
            FUN_144eafc90(param_1,uVar6,0xd9,uVar8,"ssl\\ssl_sess.c",uVar9);
            piVar7 = local_res8;
            bVar3 = true;
          }
        }
        goto LAB_144eb1870;
      }
    }
    else {
      if (1 < iVar4) {
        if ((iVar4 < 4) && (*(longlong *)(param_2 + 0x28) != 0)) {
          local_res8 = (int *)FUN_144eb15c0(param_1,param_2 + 0x30);
          bVar3 = true;
        }
        goto LAB_144eb18d7;
      }
      bVar3 = true;
      FUN_144eafc90(param_1,0x50,0xd9,0x44,"ssl\\ssl_sess.c",CONCAT44(uVar6,0x213));
      piVar7 = local_res8;
LAB_144eb1870:
      if (piVar7 != (int *)0x0) {
        FUN_144eb0d50(piVar7);
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
            (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
          param_1[0x142] = 0;
          param_1[0x143] = 0;
        }
        if (!bVar1) {
          param_1[0x19e] = 1;
        }
      }
      if (bVar3) goto LAB_144eb17e6;
    }
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 144eb1a50 FUN_144eb1a50 body=924 status=ok
// SIG undefined FUN_144eb1a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144eb1a50(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  uVar12 = 0x144eb1a70;
  puVar8 = (undefined8 *)FUN_144ea64e0(0x270,"ssl\\ssl_sess.c",0x6e);
  if (puVar8 != (undefined8 *)0x0) {
    lVar9 = 4;
    puVar5 = param_1;
    puVar6 = puVar8;
    do {
      puVar11 = puVar6;
      puVar10 = puVar5;
      uVar4 = puVar10[1];
      *puVar11 = *puVar10;
      puVar11[1] = uVar4;
      uVar4 = puVar10[3];
      puVar11[2] = puVar10[2];
      puVar11[3] = uVar4;
      uVar4 = puVar10[5];
      puVar11[4] = puVar10[4];
      puVar11[5] = uVar4;
      uVar4 = puVar10[7];
      puVar11[6] = puVar10[6];
      puVar11[7] = uVar4;
      uVar4 = puVar10[9];
      puVar11[8] = puVar10[8];
      puVar11[9] = uVar4;
      uVar4 = puVar10[0xb];
      puVar11[10] = puVar10[10];
      puVar11[0xb] = uVar4;
      uVar4 = puVar10[0xd];
      puVar11[0xc] = puVar10[0xc];
      puVar11[0xd] = uVar4;
      uVar4 = puVar10[0xf];
      puVar11[0xe] = puVar10[0xe];
      puVar11[0xf] = uVar4;
      lVar9 = lVar9 + -1;
      puVar5 = puVar10 + 0x10;
      puVar6 = puVar11 + 0x10;
    } while (lVar9 != 0);
    uVar4 = puVar10[0x11];
    puVar11[0x10] = puVar10[0x10];
    puVar11[0x11] = uVar4;
    uVar4 = puVar10[0x13];
    puVar11[0x12] = puVar10[0x12];
    puVar11[0x13] = uVar4;
    uVar4 = puVar10[0x15];
    puVar11[0x14] = puVar10[0x14];
    puVar11[0x15] = uVar4;
    uVar4 = puVar10[0x17];
    puVar11[0x16] = puVar10[0x16];
    puVar11[0x17] = uVar4;
    uVar4 = puVar10[0x19];
    puVar11[0x18] = puVar10[0x18];
    puVar11[0x19] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar10 + 0xd4);
    uVar2 = *(undefined4 *)(puVar10 + 0x1b);
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0xdc);
    *(undefined4 *)(puVar11 + 0x1a) = *(undefined4 *)(puVar10 + 0x1a);
    *(undefined4 *)((longlong)puVar11 + 0xd4) = uVar1;
    *(undefined4 *)(puVar11 + 0x1b) = uVar2;
    *(undefined4 *)((longlong)puVar11 + 0xdc) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar10 + 0xe4);
    uVar2 = *(undefined4 *)(puVar10 + 0x1d);
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0xec);
    *(undefined4 *)(puVar11 + 0x1c) = *(undefined4 *)(puVar10 + 0x1c);
    *(undefined4 *)((longlong)puVar11 + 0xe4) = uVar1;
    *(undefined4 *)(puVar11 + 0x1d) = uVar2;
    *(undefined4 *)((longlong)puVar11 + 0xec) = uVar3;
    puVar8[0x34] = 0;
    puVar8[0x35] = 0;
    puVar8[0x41] = 0;
    puVar8[0x42] = 0;
    puVar8[0x46] = 0;
    puVar8[0x49] = 0;
    puVar8[0x38] = 0;
    puVar8[0x37] = 0;
    puVar8[0x4a] = 0;
    puVar8[0x3e] = 0;
    puVar8[0x3f] = 0;
    puVar8[0x40] = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1cc) = 1;
    lVar9 = FUN_144e985a0();
    puVar8[0x4d] = lVar9;
    if ((lVar9 != 0) && (iVar7 = FUN_144ea5c20(2,puVar8,puVar8 + 0x3e), iVar7 != 0)) {
      if (param_1[0x37] != 0) {
        iVar7 = FUN_144bb6050();
        if (iVar7 == 0) goto LAB_144eb1cf7;
        puVar8[0x37] = param_1[0x37];
      }
      if (param_1[0x38] != 0) {
        lVar9 = FUN_144bb5320();
        puVar8[0x38] = lVar9;
        if (lVar9 == 0) goto LAB_144eb1cf7;
      }
      if (param_1[0x34] != 0) {
        lVar9 = FUN_144ea6dc0(param_1[0x34],"ssl\\ssl_sess.c",0xa1);
        puVar8[0x34] = lVar9;
        if (lVar9 == 0) goto LAB_144eb1cf7;
      }
      if (param_1[0x35] != 0) {
        lVar9 = FUN_144ea6dc0(param_1[0x35],"ssl\\ssl_sess.c",0xa7);
        puVar8[0x35] = lVar9;
        if (lVar9 == 0) goto LAB_144eb1cf7;
      }
      iVar7 = FUN_144ea5df0(2,puVar8 + 0x3e,param_1 + 0x3e);
      if (iVar7 != 0) {
        if (param_1[0x41] != 0) {
          lVar9 = FUN_144ea6dc0(param_1[0x41],"ssl\\ssl_sess.c",0xb4);
          puVar8[0x41] = lVar9;
          if (lVar9 == 0) goto LAB_144eb1cf7;
        }
        if ((param_2 == 0) || (param_1[0x42] == 0)) {
          *(undefined4 *)(puVar8 + 0x44) = 0;
          puVar8[0x43] = 0;
        }
        else {
          lVar9 = FUN_144ea6d10(param_1[0x42],param_1[0x43],"ssl\\ssl_sess.c",0xbc);
          puVar8[0x42] = lVar9;
          if (lVar9 == 0) goto LAB_144eb1cf7;
        }
        if (param_1[0x46] != 0) {
          lVar9 = FUN_144ea6d10(param_1[0x46],param_1[0x47],"ssl\\ssl_sess.c",0xc6);
          puVar8[0x46] = lVar9;
          if (lVar9 == 0) goto LAB_144eb1cf7;
        }
        if (param_1[0x49] != 0) {
          lVar9 = FUN_144ea6dc0(param_1[0x49],"ssl\\ssl_sess.c",0xcd);
          puVar8[0x49] = lVar9;
          if (lVar9 == 0) goto LAB_144eb1cf7;
        }
        if (param_1[0x4a] == 0) {
          return puVar8;
        }
        lVar9 = FUN_144ea6d10(param_1[0x4a],param_1[0x4b],"ssl\\ssl_sess.c",0xd6);
        puVar8[0x4a] = lVar9;
        if (lVar9 != 0) {
          return puVar8;
        }
      }
    }
  }
LAB_144eb1cf7:
  FUN_144ba24f0(0x14,0x15c,0x41,"ssl\\ssl_sess.c",0xdd,uVar12);
  FUN_144eb0d50(puVar8);
  return (undefined8 *)0x0;
}



// FUNCTION 144eb1df0 FUN_144eb1df0 body=186 status=ok
// SIG undefined FUN_144eb1df0(void)

void FUN_144eb1df0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_2 + 0x200);
  if ((puVar2 != (undefined8 *)0x0) &&
     (puVar3 = *(undefined8 **)(param_2 + 0x1f8), puVar3 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    puVar4 = (undefined8 *)(param_1 + 0x38);
    if (puVar2 == puVar1) {
      if (puVar3 == puVar4) {
        *puVar4 = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_2 + 0x200) = 0;
        *(undefined8 *)(param_2 + 0x1f8) = 0;
        return;
      }
      *puVar1 = puVar3;
      *(undefined8 **)(*(longlong *)(param_2 + 0x1f8) + 0x200) = puVar1;
      *(undefined8 *)(param_2 + 0x200) = 0;
      *(undefined8 *)(param_2 + 0x1f8) = 0;
      return;
    }
    if (puVar3 == puVar4) {
      *puVar4 = puVar2;
      *(undefined8 **)(*(longlong *)(param_2 + 0x200) + 0x1f8) = puVar4;
      *(undefined8 *)(param_2 + 0x200) = 0;
      *(undefined8 *)(param_2 + 0x1f8) = 0;
      return;
    }
    puVar2[0x3f] = puVar3;
    *(undefined8 *)(*(longlong *)(param_2 + 0x1f8) + 0x200) = *(undefined8 *)(param_2 + 0x200);
    *(undefined8 *)(param_2 + 0x200) = 0;
    *(undefined8 *)(param_2 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 144eb1eb0 FUN_144eb1eb0 body=225 status=ok
// SIG undefined FUN_144eb1eb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144eb1eb0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x150) != 0)) {
    if (param_3 != 0) {
      FUN_144e98620(*(undefined8 *)(param_1 + 0x380));
    }
    lVar1 = FUN_144ea8820(*(undefined8 *)(param_1 + 0x28),param_2);
    bVar3 = lVar1 != 0;
    uVar2 = 0;
    if (bVar3) {
      uVar2 = FUN_144ea8790(*(undefined8 *)(param_1 + 0x28),lVar1);
      FUN_144eb1df0(param_1,uVar2);
    }
    *(undefined4 *)(param_2 + 0x1b0) = 1;
    if (param_3 != 0) {
      FUN_144e98640(*(undefined8 *)(param_1 + 0x380));
    }
    if (*(code **)(param_1 + 0x58) != (code *)0x0) {
      (**(code **)(param_1 + 0x58))(param_1,param_2);
    }
    if (bVar3) {
      FUN_144eb0d50(uVar2);
    }
  }
  return bVar3;
}



// FUNCTION 144eb1fa0 FUN_144eb1fa0 body=122 status=ok
// SIG undefined FUN_144eb1fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb1fa0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_144bac850(param_2,*param_3);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_144b98ba0(param_1,param_2,*param_3);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
    if (9 < uVar2) {
      return 0;
    }
  }
  if (9 < uVar2) {
    return 0;
  }
  return 1;
}



// FUNCTION 144eb2020 FUN_144eb2020 body=114 status=ok
// SIG undefined FUN_144eb2020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb2020(longlong param_1,longlong *param_2)

{
  if (((int)param_2[1] == 0) ||
     (*(int *)(param_1 + 0x1d4) + *(int *)(param_1 + 0x1d0) < (int)param_2[1])) {
    FUN_144ea8790(param_2[2],param_1);
    FUN_144eb1df0(*param_2,param_1);
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    if (*(code **)(*param_2 + 0x58) != (code *)0x0) {
      (**(code **)(*param_2 + 0x58))();
    }
    FUN_144eb0d50(param_1);
  }
  return;
}



// FUNCTION 144eb20a0 FUN_144eb20a0 body=8 status=ok
// SIG undefined FUN_144eb20a0(void)

void FUN_144eb20a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x858) = param_2;
  return;
}



// FUNCTION 144eb20b0 FUN_144eb20b0 body=45 status=ok
// SIG undefined FUN_144eb20b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb20b0(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_2 + 0x16d8) = 1;
  FUN_14527b490(param_1 + 0xa9,0x20);
  return;
}



// FUNCTION 144eb20e0 FUN_144eb20e0 body=174 status=ok
// SIG undefined FUN_144eb20e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb20e0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xf0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  param_1[0x1cd] = 0;
  param_1[0x1cf] = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  FUN_144eb45b0(param_1 + 4);
  FUN_144eb4880(*param_1);
  param_1[2] = 0;
  FUN_14527b490(param_1 + 0xa9,0x20);
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  if (param_1[0x1d6] != 0) {
    FUN_144eccc50(param_1);
  }
  return;
}



// FUNCTION 144eb2190 FUN_144eb2190 body=70 status=ok
// SIG undefined FUN_144eb2190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb2190(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    FUN_144eb4830(*param_1);
  }
  if (param_1[3] != 0) {
    FUN_144eb4880(*param_1);
  }
  FUN_14527b4e0(param_1 + 0xa9,0x20);
  return;
}



// FUNCTION 144eb21e0 FUN_144eb21e0 body=10 status=ok
// SIG undefined FUN_144eb21e0(void)

bool FUN_144eb21e0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x40) != 0;
}



// FUNCTION 144eb21f0 FUN_144eb21f0 body=43 status=ok
// SIG undefined FUN_144eb21f0(void)

bool FUN_144eb21f0(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x580);
    do {
      if (*piVar2 == 0) break;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x12;
    } while (uVar3 < uVar1);
  }
  return uVar3 < uVar1;
}



// FUNCTION 144eb2220 FUN_144eb2220 body=30 status=ok
// SIG undefined FUN_144eb2220(void)

undefined8 FUN_144eb2220(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(longlong *)(param_1 + 0x40 + *(longlong *)(param_1 + 0x18) * 0x28) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144eb2240 FUN_144eb2240 body=10 status=ok
// SIG undefined FUN_144eb2240(void)

void FUN_144eb2240(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xe98) = 0;
  return;
}



// FUNCTION 144eb2250 FUN_144eb2250 body=10 status=ok
// SIG undefined FUN_144eb2250(void)

void FUN_144eb2250(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xea0) = 0;
  return;
}



// FUNCTION 144eb2260 FUN_144eb2260 body=13 status=ok
// SIG undefined FUN_144eb2260(void)

bool FUN_144eb2260(longlong param_1)

{
  return *(int *)(param_1 + 0x548) == 2;
}



// FUNCTION 144eb2270 FUN_144eb2270 body=8 status=ok
// SIG undefined FUN_144eb2270(void)

undefined8 FUN_144eb2270(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x550);
}



// FUNCTION 144eb2280 FUN_144eb2280 body=200 status=ok
// SIG undefined FUN_144eb2280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eb2280(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x83c) == 0xf1) {
    return 0;
  }
  uVar3 = uVar4;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    local_res8 = FUN_144eb4b80(*(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x48));
    lVar1 = FUN_144eb4b90(&local_res8);
    uVar3 = 0;
    while (lVar1 != 0) {
      uVar3 = uVar3 + *(longlong *)(*(longlong *)(lVar1 + 8) + 0x40);
      lVar1 = FUN_144eb4b90(&local_res8);
    }
  }
  if (*(ulonglong *)(param_1 + 0x840) != 0) {
    plVar2 = (longlong *)(param_1 + 0xd80);
    do {
      if (*(int *)((longlong)plVar2 + -4) != 0x17) {
        return uVar3;
      }
      uVar3 = uVar3 + *plVar2;
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 9;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x840));
  }
  return uVar3;
}



// FUNCTION 144eb2350 FUN_144eb2350 body=1738 status=ok
// SIG undefined FUN_144eb2350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb2350(undefined4 *param_1,int param_2,longlong param_3,ulonglong param_4,
                  ulonglong *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined1 auStack_1f8 [32];
  ulonglong *local_1d8;
  undefined4 local_1d0;
  ulonglong *local_1c8;
  int local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  ulonglong *local_198;
  undefined8 local_190;
  undefined8 *local_188;
  ulonglong local_180;
  uint local_178;
  ulonglong local_170;
  ulonglong local_168 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined2 local_5d;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar11 = *(ulonglong *)(param_1 + 0x5a2);
  local_198 = param_5;
  param_1[10] = 1;
  local_1b8 = param_2;
  local_1a0 = param_3;
  if ((param_4 < uVar11) ||
     ((*(longlong *)(param_1 + 0x226) != 0 && (param_4 < *(longlong *)(param_1 + 0x5aa) + uVar11))))
  {
    local_1d0 = 0x179;
    local_1d8 = (ulonglong *)0x149bf5c58;
    FUN_144eafc90(param_1,0x50,0x9e,0x10f);
    goto LAB_144eb2832;
  }
  if ((param_1[0x21] == 4) && (iVar2 = FUN_14527d030(param_1,param_4,0,1), iVar2 == 0))
  goto LAB_144eb2832;
  *(undefined8 *)(param_1 + 0x5a2) = 0;
  if ((*(longlong *)(param_1 + 0x226) == 0) && (param_1[0x1e1] != -1)) {
    FUN_144eafd20(param_1);
  }
  iVar2 = FUN_144eafbc0(param_1);
  if (((iVar2 != 0) && (iVar2 = FUN_144eafd30(param_1), iVar2 == 0)) && (param_1[0x21] != 6)) {
    iVar2 = (**(code **)(param_1 + 0xc))(param_1);
    if ((iVar2 < 0) || (iVar2 == 0)) goto LAB_144eb2832;
  }
  if (*(longlong *)(param_1 + 0x226) != 0) {
    local_1d8 = &local_1b0;
    iVar2 = FUN_144eb4090(param_1,param_2,param_3 + uVar11,*(undefined8 *)(param_1 + 0x5aa));
    if (iVar2 < 1) {
      *(ulonglong *)(param_1 + 0x5a2) = uVar11;
      goto LAB_144eb2832;
    }
    uVar11 = uVar11 + local_1b0;
  }
  if (param_2 == 0x17) {
    uVar3 = FUN_144b9bba0(param_1);
    uVar12 = (ulonglong)uVar3;
    local_1a8 = uVar12;
    if (((param_4 < uVar12 * 4) || (*(longlong *)(param_1 + 0x116) != 0)) ||
       ((*(longlong *)(param_1 + 0x2e) != 0 ||
        (((**(uint **)(param_1 + 0x2a) & 0x400) != 0 ||
         ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0))))))
    goto LAB_144eb27fb;
    uVar6 = FUN_144ba3db0(*(undefined8 *)(param_1 + 0x11a));
    uVar4 = FUN_144ba3da0(uVar6);
    if ((uVar4 >> 0x16 & 1) == 0) goto LAB_144eb27fb;
    if ((uVar3 & 0xfff) == 0) {
      uVar12 = uVar12 - 0x200;
      local_1a8 = uVar12;
    }
    if ((uVar11 != 0) && (*(longlong *)(param_1 + 0x21e) != 0)) {
      if (uVar11 != param_4) goto LAB_144eb25ad;
      goto LAB_144eb281a;
    }
    FUN_144eb4880(param_1);
    iVar2 = FUN_144ba5290(*(undefined8 *)(param_1 + 0x11a),0x1c,uVar12 & 0xffffffff);
    lVar8 = 4;
    if (uVar12 * 8 <= param_4) {
      lVar8 = 8;
    }
    iVar2 = FUN_144eb46e0(param_1,1,iVar2 * lVar8);
    if (iVar2 == 0) goto LAB_144eb2832;
LAB_144eb25ad:
    local_170 = uVar12 * 4;
    uVar16 = param_4 - uVar11;
    if (local_170 <= uVar16) {
      do {
        uVar7 = local_170;
        if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0xfc) != 0) {
          iVar2 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(param_1);
          if (iVar2 < 1) goto LAB_144eb29bc;
          uVar7 = uVar12 * 4;
        }
        if (uVar16 < uVar12 * 8) {
          local_178 = 4;
        }
        else {
          local_178 = 8;
          uVar7 = uVar12 * 8;
        }
        local_68 = *(undefined8 *)(param_1 + 0x5b4);
        local_5f = (undefined1)((uint)*param_1 >> 8);
        local_5e = *(undefined1 *)param_1;
        local_188 = &local_68;
        local_60 = 0x17;
        local_5d = 0;
        local_190 = 0;
        local_180 = uVar7;
        iVar2 = FUN_144ba5290(*(undefined8 *)(param_1 + 0x11a),0x19,0x20,&local_190);
        if ((iVar2 < 1) || (*(ulonglong *)(param_1 + 0x222) < (ulonglong)(longlong)iVar2)) break;
        local_190 = *(undefined8 *)(param_1 + 0x21e);
        puVar14 = (undefined8 *)(param_3 + uVar11);
        local_188 = puVar14;
        local_180 = uVar7;
        iVar5 = FUN_144ba5290(*(undefined8 *)(param_1 + 0x11a),0x1a,0x20,&local_190);
        if (iVar5 < 1) goto LAB_144eb2832;
        *(char *)((longlong)param_1 + 0x16d7) =
             *(char *)((longlong)param_1 + 0x16d7) + (char)local_178;
        if (*(byte *)((longlong)param_1 + 0x16d7) < local_178) {
          pcVar9 = (char *)((longlong)param_1 + 0x16d6);
          do {
            if ((longlong)(pcVar9 + (-0x16d0 - (longlong)param_1)) < 0) break;
            *pcVar9 = *pcVar9 + '\x01';
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + -1;
          } while (cVar1 == '\0');
        }
        *(undefined8 *)(param_1 + 0x224) = 0;
        local_1d8 = &local_1b0;
        *(longlong *)(param_1 + 0x226) = (longlong)iVar2;
        *(ulonglong *)(param_1 + 0x5aa) = uVar7;
        *(undefined8 **)(param_1 + 0x5b0) = puVar14;
        param_1[0x5ac] = 0x17;
        *(ulonglong *)(param_1 + 0x5ae) = uVar7;
        iVar2 = FUN_144eb4090(param_1,0x17,puVar14,uVar7);
        if (iVar2 < 1) {
          if ((iVar2 < 0) &&
             ((*(longlong *)(param_1 + 6) == 0 ||
              (iVar2 = FUN_144b9e630(*(longlong *)(param_1 + 6),8), iVar2 == 0)))) {
            FUN_144eb4880(param_1);
          }
          *(ulonglong *)(param_1 + 0x5a2) = uVar11;
          goto LAB_144eb2832;
        }
        uVar12 = local_1b0;
        if (local_1b0 == uVar16) goto LAB_144eb29a3;
        uVar16 = uVar16 - local_1b0;
        uVar11 = uVar11 + local_1b0;
        uVar12 = local_1a8;
        param_3 = local_1a0;
      } while (local_170 <= uVar16);
    }
    FUN_144eb4880(param_1);
  }
  else {
LAB_144eb27fb:
    if (uVar11 == param_4) {
      if (((*(byte *)(param_1 + 0x174) & 0x10) != 0) &&
         ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0)) {
LAB_144eb281a:
        FUN_144eb4880(param_1);
      }
      *param_5 = uVar11;
      goto LAB_144eb2832;
    }
  }
  param_4 = param_4 - uVar11;
  uVar3 = FUN_144b9bba0(param_1);
  uVar16 = (ulonglong)uVar3;
  uVar3 = FUN_144b9bbd0(param_1);
  puVar15 = *(ulonglong **)(param_1 + 0x180);
  uVar12 = (ulonglong)uVar3;
  if (puVar15 < &DAT_00000021) {
    if ((puVar15 == (ulonglong *)0x0) || (*(longlong *)(param_1 + 0x11a) == 0)) {
LAB_144eb2888:
      puVar15 = (ulonglong *)&DAT_00000001;
    }
    else {
      uVar6 = FUN_144ba3db0();
      uVar3 = FUN_144ba3da0(uVar6);
      if (((uVar3 >> 0x17 & 1) == 0) ||
         ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0))
      goto LAB_144eb2888;
    }
    if (((uVar16 != 0) && (uVar12 != 0)) && (uVar12 <= uVar16)) {
      while( true ) {
        if (param_4 == 0) {
          local_1d8 = (ulonglong *)&DAT_00000001;
        }
        else {
          local_1d8 = (ulonglong *)((param_4 - 1) / uVar12 + 1);
        }
        if (puVar15 < local_1d8) {
          local_1d8 = puVar15;
        }
        uVar7 = param_4 / (ulonglong)local_1d8;
        if (uVar7 < uVar16) {
          puVar10 = (ulonglong *)0x0;
          if (local_1d8 != (ulonglong *)0x0) {
            do {
              local_168[(longlong)puVar10] = uVar7;
              if (puVar10 < (ulonglong *)(param_4 % (ulonglong)local_1d8)) {
                local_168[(longlong)puVar10] = uVar7 + 1;
              }
              puVar10 = (ulonglong *)((longlong)puVar10 + 1);
            } while (puVar10 < local_1d8);
          }
        }
        else if (local_1d8 != (ulonglong *)0x0) {
          puVar13 = local_168;
          for (puVar10 = local_1d8; puVar10 != (ulonglong *)0x0;
              puVar10 = (ulonglong *)((longlong)puVar10 + -1)) {
            *puVar13 = uVar16;
            puVar13 = puVar13 + 1;
          }
        }
        local_1c8 = &local_1b0;
        local_1d0 = 0;
        iVar2 = FUN_144eb2a30(param_1,local_1b8,local_1a0 + uVar11,local_168);
        if (iVar2 < 1) goto LAB_144eb29bc;
        if ((local_1b0 == param_4) ||
           ((local_1b8 == 0x17 && ((*(byte *)(param_1 + 0x174) & 1) != 0)))) break;
        param_4 = param_4 - local_1b0;
        uVar11 = uVar11 + local_1b0;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xdc) = 0;
      uVar12 = local_1b0;
      if ((local_1b0 == param_4) &&
         (((*(byte *)(param_1 + 0x174) & 0x10) != 0 &&
          ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0)))) {
LAB_144eb29a3:
        FUN_144eb4880(param_1);
      }
      *local_198 = uVar12 + uVar11;
      goto LAB_144eb2832;
    }
    local_1d0 = 599;
  }
  else {
    local_1d0 = 0x247;
  }
  local_1d8 = (ulonglong *)0x149bf5c58;
  FUN_144eafc90(param_1,0x50,0x9e,0x44);
LAB_144eb2832:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1f8);
LAB_144eb29bc:
  *(ulonglong *)(param_1 + 0x5a2) = uVar11;
  goto LAB_144eb2832;
}



// FUNCTION 144eb2a30 FUN_144eb2a30 body=3246 status=ok
// SIG undefined FUN_144eb2a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb2a30(int *param_1,int param_2,longlong param_3,longlong *param_4,ulonglong param_5,
                  int param_6,ulonglong *param_7)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong *puVar9;
  int *piVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_ff8 [32];
  ulonglong *local_fd8;
  int *local_fd0;
  ulonglong *local_fc8;
  int local_fb8;
  undefined1 local_fb4 [4];
  int local_fb0;
  int local_fac;
  undefined1 *local_fa8;
  ulonglong *local_fa0;
  ulonglong local_f98;
  int local_f90;
  ulonglong local_f88;
  longlong local_f80;
  longlong *local_f78;
  ulonglong local_f70;
  longlong local_f68;
  ulonglong local_f60;
  ulonglong local_f58;
  ulonglong local_f50;
  ulonglong *local_f48;
  ulonglong local_f40;
  undefined1 local_f38 [1536];
  undefined1 local_938 [8];
  ulonglong local_930 [287];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x144eb2a47;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_ff8;
  uVar7 = 0;
  local_f48 = param_7;
  local_f50 = 0;
  local_f88 = 0;
  local_fb0 = 0;
  local_f80 = 0;
  uVar6 = uVar7;
  uVar16 = uVar7;
  if (3 < param_5) {
    lVar12 = 0;
    lVar14 = 0;
    lVar13 = lVar12;
    lVar15 = lVar14;
    do {
      lVar12 = param_4[uVar6] + lVar12;
      lVar14 = (param_4 + uVar6)[1] + lVar14;
      lVar1 = uVar6 + 2;
      uVar6 = uVar6 + 4;
      lVar13 = param_4[lVar1] + lVar13;
      lVar15 = (param_4 + lVar1)[1] + lVar15;
    } while (uVar6 < (param_5 & 0xfffffffffffffffc));
    uVar16 = lVar13 + lVar12 + lVar15 + lVar14;
  }
  if (uVar6 < param_5) {
    uVar11 = uVar7;
    if (1 < param_5 - uVar6) {
      do {
        uVar7 = uVar7 + param_4[uVar6];
        uVar11 = uVar11 + param_4[uVar6 + 1];
        uVar6 = uVar6 + 2;
      } while (uVar6 < param_5 - 1);
    }
    if (uVar6 < param_5) {
      uVar16 = uVar16 + param_4[uVar6];
    }
    uVar16 = uVar16 + uVar11 + uVar7;
  }
  local_fb8 = param_2;
  local_f78 = param_4;
  local_f68 = param_3;
  if ((*(longlong *)(param_1 + 0x212) == 0) ||
     (*(longlong *)(param_1 + *(longlong *)(param_1 + 0x212) * 10 + 0x21c) == 0)) {
    if ((((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xfc) != 0) &&
         (iVar2 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(param_1), iVar2 < 1)) ||
        ((*(ulonglong *)(param_1 + 0x212) < param_5 &&
         (iVar2 = FUN_144eb46e0(param_1,param_5,0), iVar2 == 0)))) ||
       ((uVar16 == 0 && (param_6 == 0)))) goto LAB_144eb3638;
    if (((*(longlong *)(param_1 + 0x142) == 0) || (*(longlong *)(param_1 + 0x11a) == 0)) ||
       (lVar13 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x120)), lVar13 == 0)) {
      local_fac = 0;
      if (*(longlong *)(param_1 + 0x11a) != 0) goto LAB_144eb2c57;
      if (param_6 != 0) goto LAB_144eb2d39;
LAB_144eb2cdf:
      if (local_f88 == 0) {
        local_f98 = 0;
        if (param_5 != 0) {
          puVar8 = local_f38;
          piVar10 = param_1 + 0x21e;
          do {
            local_fa0 = (ulonglong *)(7 - (ulonglong)((int)*(undefined8 *)piVar10 - 4U & 7));
            *(ulonglong **)(piVar10 + 6) = local_fa0;
            iVar2 = FUN_14526e9b0(puVar8,*(undefined8 *)piVar10,*(undefined8 *)(piVar10 + 4),0);
            if ((iVar2 == 0) || (iVar2 = FUN_14526ed00(puVar8,local_fa0,0), iVar2 == 0)) {
              local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x32d);
              goto LAB_144eb3698;
            }
            puVar8 = puVar8 + 0x30;
            local_f80 = local_f80 + 1;
            local_f98 = local_f98 + 1;
            piVar10 = piVar10 + 10;
          } while (local_f98 < param_5);
        }
      }
      else {
        iVar2 = FUN_14526e9b0(local_f38,*(undefined8 *)(param_1 + 0x21e),
                              *(undefined8 *)(param_1 + 0x222),0);
        if ((iVar2 == 0) ||
           (iVar2 = FUN_14526ed00(local_f38,local_f88 + *(longlong *)(param_1 + 0x224),0),
           iVar2 == 0)) {
          local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x31b);
          goto LAB_144eb2c08;
        }
LAB_144eb2e36:
        local_f80 = 1;
      }
      if (*(longlong *)(param_1 + 0x11a) != 0) {
        uVar3 = *(uint *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
        if (((uVar3 & 1) != 0) &&
           (((((uVar3 & 8) != 0 || (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) ||
             (iVar2 == 0x10000)) && ((3 < param_1[0x21] - 1U && (param_1[0x136] != 1)))))) {
          uVar5 = FUN_144ba3db0(*(longlong *)(param_1 + 0x11a));
          uVar3 = FUN_144ba3da0(uVar5);
          uVar3 = uVar3 & 0xf0007;
          if (uVar3 == 2) {
            local_fb0 = FUN_144ba3df0(*(undefined8 *)(param_1 + 0x11a));
            if (local_fb0 < 2) {
              local_fb0 = 0;
            }
          }
          else if (uVar3 == 6) {
            local_fb0 = 8;
          }
          else if (uVar3 == 7) {
            local_fb0 = 8;
          }
        }
      }
      local_f98 = 0;
      memset(local_938,0,0x900);
      local_f70 = 0;
      if (param_5 != 0) {
        local_fa8 = local_f38;
        puVar9 = local_930;
        do {
          local_f60 = 0;
          iVar2 = *param_1;
          if (*param_1 == 0x304) {
            iVar2 = 0x303;
          }
          local_f90 = local_fb8;
          if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) ||
              ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
             ((*(longlong *)(param_1 + 0x11a) != 0 && ((param_1[0x1f] != 2 || (local_fb8 != 0x15))))
             )) {
            local_f90 = 0x17;
          }
          *(int *)((longlong)puVar9 + -4) = local_f90;
          local_fa0 = puVar9;
          iVar4 = FUN_144eafc10(param_1);
          if ((((iVar4 == 0xc) && (param_1[0x1e0] == 0)) &&
              (uVar3 = FUN_144b9a890(param_1), (uVar3 & 0xffffff00) == 0x300)) &&
             ((iVar4 = FUN_144b9a890(param_1), 0x301 < iVar4 && (param_1[0x136] == 0)))) {
            iVar2 = 0x301;
          }
          lVar13 = *(longlong *)(param_1 + 0x116);
          *(int *)(puVar9 + -1) = iVar2;
          lVar15 = local_f78[local_f70];
          if (lVar13 != 0) {
            lVar15 = lVar15 + 0x400;
          }
          iVar4 = FUN_14526ef00(local_fa8,local_f90,1);
          puVar8 = local_fa8;
          if ((((iVar4 == 0) || (iVar2 = FUN_14526ef00(local_fa8,iVar2,2), iVar2 == 0)) ||
              ((iVar2 = FUN_14526eb60(puVar8,2), iVar2 == 0 ||
               ((0 < local_fb0 && (iVar2 = FUN_14526ed00(puVar8,(longlong)local_fb0,0), iVar2 == 0))
               )))) || ((lVar15 != 0 &&
                        (iVar2 = FUN_14526ede0(puVar8,lVar15,&local_f60), iVar2 == 0)))) {
            local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x377);
            goto LAB_144eb3698;
          }
          puVar9 = local_fa0;
          local_fa0[3] = local_f60;
          uVar6 = local_f78[local_f70];
          uVar16 = local_f68 + local_f98;
          *local_fa0 = uVar6;
          local_f98 = local_f98 + uVar6;
          local_fa0[4] = uVar16;
          if (*(longlong *)(param_1 + 0x116) == 0) {
            iVar2 = FUN_14526ef90(puVar8,uVar16);
            if (iVar2 == 0) {
              local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x391);
              goto LAB_144eb3698;
            }
            puVar9[4] = puVar9[3];
          }
          else {
            iVar2 = FUN_14527c370(param_1,local_fa0 + -1);
            if ((iVar2 == 0) || (iVar2 = FUN_14526ed00(puVar8,*puVar9,0), iVar2 == 0)) {
              local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x38b);
              uVar5 = 0x8d;
              goto LAB_144eb36a1;
            }
          }
          if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)) ||
              ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
             ((*(longlong *)(param_1 + 0x11a) != 0 && ((param_1[0x1f] != 2 || (local_fb8 != 0x15))))
             )) {
            iVar2 = FUN_14526ef00(puVar8,(longlong)local_fb8,1);
            if (iVar2 == 0) {
              local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x39f);
              uVar5 = 0x44;
              goto LAB_144eb36a1;
            }
            *puVar9 = *puVar9 + 1;
            uVar3 = FUN_144b9bba0(param_1);
            uVar6 = *puVar9;
            puVar8 = local_fa8;
            if (uVar6 < uVar3) {
              uVar16 = uVar3 - uVar6;
              if (*(code **)(param_1 + 0x5c8) == (code *)0x0) {
                uVar7 = *(ulonglong *)(param_1 + 0x5cc);
                if (uVar7 != 0) {
                  if ((uVar7 - 1 & uVar7) == 0) {
                    uVar6 = uVar7 - 1 & uVar6;
                  }
                  else {
                    uVar6 = uVar6 % uVar7;
                  }
                  if (uVar6 != 0) {
                    uVar7 = uVar7 - uVar6;
                    goto LAB_144eb31fc;
                  }
                }
              }
              else {
                uVar7 = (**(code **)(param_1 + 0x5c8))
                                  (param_1,local_fb8,uVar6,*(undefined8 *)(param_1 + 0x5ca));
LAB_144eb31fc:
                puVar8 = local_fa8;
                if (uVar7 != 0) {
                  if (uVar7 <= uVar16) {
                    uVar16 = uVar7;
                  }
                  iVar2 = FUN_14526f010(local_fa8,0,uVar16);
                  if (iVar2 == 0) {
                    local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x3c1);
                    goto LAB_144eb3698;
                  }
                  *puVar9 = *puVar9 + uVar16;
                  puVar8 = local_fa8;
                }
              }
            }
          }
          if ((((**(uint **)(param_1 + 0x2a) & 0x400) == 0) && (local_fac != 0)) &&
             ((iVar2 = FUN_14526ed00(puVar8,(longlong)local_fac,&local_f40), iVar2 == 0 ||
              (iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                                 (param_1,puVar9 + -1,local_f40,1), iVar2 == 0)))) {
            local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x3d5);
            goto LAB_144eb3698;
          }
          iVar2 = FUN_14526ede0(puVar8,(longlong)(0x50 - local_fac),0);
          if ((iVar2 == 0) || (iVar2 = FUN_14526f140(puVar8,&local_f58), iVar2 == 0)) {
            local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x3ea);
            goto LAB_144eb3698;
          }
          lVar13 = FUN_14526f170(puVar8);
          local_fa8 = puVar8 + 0x30;
          local_f70 = local_f70 + 1;
          puVar9[3] = lVar13 - local_f58;
          puVar9[4] = lVar13 - local_f58;
          *puVar9 = local_f58;
          puVar9 = puVar9 + 9;
          local_fa0 = puVar9;
        } while (local_f70 < param_5);
      }
      if (param_1[0x1f] == 2) {
        iVar2 = FUN_14527a080();
        if (0 < iVar2) {
LAB_144eb33c0:
          if (param_5 != 0) {
            local_f78 = (longlong *)(param_1 + 0x226);
            puVar8 = local_f38;
            puVar9 = local_930;
            do {
              iVar2 = FUN_14526f140(puVar8,&local_f40);
              if (iVar2 == 0) {
LAB_144eb3690:
                local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x41d);
                goto LAB_144eb3698;
              }
              local_fa0 = (ulonglong *)(longlong)local_fac;
              uVar6 = *puVar9;
              if ((((local_f40 - (longlong)local_fa0) + 0x50 < uVar6) || (uVar6 < local_f40)) ||
                 ((local_f40 < uVar6 &&
                  (iVar2 = FUN_14526ed00(puVar8,uVar6 - local_f40,0), iVar2 == 0))))
              goto LAB_144eb3690;
              if (((**(uint **)(param_1 + 0x2a) & 0x400) != 0) && (local_fac != 0)) {
                iVar2 = FUN_14526ed00(puVar8,local_fa0,&local_f60);
                if ((iVar2 == 0) ||
                   (iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                                      (param_1,puVar9 + -1,local_f60,1), iVar2 == 0)) {
                  local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x426);
                  goto LAB_144eb3698;
                }
                *puVar9 = *puVar9 + (longlong)local_fa0;
              }
              iVar2 = FUN_14526f140(puVar8,&local_f58);
              if ((iVar2 == 0) || (iVar2 = FUN_14526ea40(puVar8), iVar2 == 0)) {
                local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x42f);
                goto LAB_144eb3698;
              }
              if (*(longlong *)(param_1 + 0x2e) != 0) {
                lVar13 = FUN_14526f170(puVar8);
                local_fc8 = *(ulonglong **)(param_1 + 0x30);
                local_fd8 = (ulonglong *)0x5;
                local_fd0 = param_1;
                (**(code **)(param_1 + 0x2e))(1,0,0x100,lVar13 + (-5 - local_f58));
                if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                      && (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)) ||
                    ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
                   (*(longlong *)(param_1 + 0x11a) != 0)) {
                  local_fb4[0] = (undefined1)local_fb8;
                  local_fc8 = *(ulonglong **)(param_1 + 0x30);
                  local_fd8 = (ulonglong *)&DAT_00000001;
                  local_fd0 = param_1;
                  (**(code **)(param_1 + 0x2e))(1,*param_1,0x101,local_fb4);
                }
              }
              iVar2 = FUN_14526ea70(puVar8);
              if (iVar2 == 0) {
                local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x444);
                goto LAB_144eb3698;
              }
              uVar6 = *puVar9 + 5;
              *(int *)((longlong)puVar9 + -4) = local_fb8;
              *puVar9 = uVar6;
              if (param_6 != 0) {
                if (local_f50 == 0) {
                  *local_f48 = uVar6;
                  goto LAB_144eb3638;
                }
                local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x458);
                goto LAB_144eb3698;
              }
              puVar8 = puVar8 + 0x30;
              puVar9 = puVar9 + 9;
              *local_f78 = uVar6 + local_f88;
              local_f78 = local_f78 + 5;
              local_f50 = local_f50 + 1;
            } while (local_f50 < param_5);
          }
          *(longlong *)(param_1 + 0x5b0) = local_f68;
          *(ulonglong *)(param_1 + 0x5aa) = local_f98;
          param_1[0x5ac] = local_fb8;
          *(ulonglong *)(param_1 + 0x5ae) = local_f98;
          uVar16 = local_f98;
          goto LAB_144eb3630;
        }
        iVar2 = FUN_144eafd10(param_1);
        if (iVar2 == 0) {
          local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x3fe);
LAB_144eb3698:
          uVar5 = 0x44;
LAB_144eb36a1:
          local_fd8 = (ulonglong *)0x149bf5c58;
          FUN_144eafc90(param_1,0x50,0x68,uVar5);
        }
      }
      else {
        iVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 2) + 0xc0))
                          (param_1,local_938,param_5,1);
        if (0 < iVar2) goto LAB_144eb33c0;
        iVar2 = FUN_144eafd10(param_1);
        if (iVar2 == 0) {
          local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x406);
          goto LAB_144eb3698;
        }
      }
    }
    else {
      uVar5 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x120));
      local_fac = FUN_144ba3cd0(uVar5);
      if (local_fac < 0) {
        local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x2d5);
LAB_144eb2c08:
        local_fd8 = (ulonglong *)0x149bf5c58;
        FUN_144eafc90(param_1,0x50,0x68,0x44);
        goto LAB_144eb3638;
      }
LAB_144eb2c57:
      if (param_6 != 0) {
LAB_144eb2d39:
        lVar13 = 7 - (ulonglong)((int)*(undefined8 *)(param_1 + 0x21e) + 1U & 7);
        *(longlong *)(param_1 + 0x224) = lVar13;
        iVar2 = FUN_14526e9b0(local_f38,*(undefined8 *)(param_1 + 0x21e),
                              *(undefined8 *)(param_1 + 0x222),0);
        if ((iVar2 == 0) || (iVar2 = FUN_14526ed00(local_f38,lVar13,0), iVar2 == 0)) {
          local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x30f);
          goto LAB_144eb2c08;
        }
        goto LAB_144eb2e36;
      }
      if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0xdc) != 0) goto LAB_144eb2cdf;
      if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xd8) == 0) || (local_fb8 != 0x17)) {
LAB_144eb2cce:
        *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xdc) = 1;
        goto LAB_144eb2cdf;
      }
      local_fc8 = &local_f88;
      local_fd0 = (int *)CONCAT44(local_fd0._4_4_,1);
      local_fd8 = (ulonglong *)&DAT_00000001;
      local_fa0 = (ulonglong *)0x0;
      iVar2 = FUN_144eb2a30(param_1,0x17,local_f68,&local_fa0);
      if (0 < iVar2) {
        if (0x55 < local_f88) {
          local_fd0 = (int *)CONCAT44(local_fd0._4_4_,0x2f7);
          goto LAB_144eb2c08;
        }
        goto LAB_144eb2cce;
      }
    }
    if (local_f80 != 0) {
      puVar8 = local_f38;
      lVar13 = local_f80;
      do {
        FUN_14526f190(puVar8);
        puVar8 = puVar8 + 0x30;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  else {
LAB_144eb3630:
    local_fd8 = local_f48;
    FUN_144eb4090(param_1,local_fb8,local_f68,uVar16);
  }
LAB_144eb3638:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_ff8);
}



// FUNCTION 144eb36f0 FUN_144eb36f0 body=2438 status=ok
// SIG undefined FUN_144eb36f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb36f0(int *param_1,int param_2,int *param_3,void *param_4,ulonglong param_5,int param_6
                  ,ulonglong *param_7)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  char *local_98;
  int *local_90;
  undefined8 local_88;
  void *local_78;
  code *local_70;
  int *local_68;
  ulonglong local_60;
  ulonglong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar17 = 0;
  local_58[0] = param_7;
  local_70 = (code *)0x0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
      (iVar3 = **(int **)(param_1 + 2), iVar3 < 0x304)) || (uVar14 = 1, iVar3 == 0x10000)) {
    uVar14 = uVar17;
  }
  local_78 = param_4;
  local_68 = param_3;
  local_60 = uVar14;
  if ((*(longlong *)(param_1 + 0x214) != 0) || (iVar3 = FUN_144eb4600(param_1), iVar3 != 0)) {
    if (((param_2 == 0) || (param_2 - 0x16U < 2)) && ((param_6 == 0 || (param_2 == 0x17)))) {
      if ((param_2 != 0x16) || (*(longlong *)(param_1 + 0x5a6) == 0)) {
        iVar3 = FUN_144eafd30(param_1);
        if ((iVar3 == 0) && (iVar3 = FUN_144eafbc0(param_1), iVar3 != 0)) {
          iVar3 = (**(code **)(param_1 + 0xc))(param_1);
          if ((iVar3 < 0) || (iVar3 == 0)) goto LAB_144eb4069;
        }
LAB_144eb38d0:
        param_1[10] = 1;
        uVar12 = *(ulonglong *)(param_1 + 0x210);
        do {
          if (uVar12 != 0) goto LAB_144eb3905;
LAB_144eb38e5:
          iVar3 = FUN_14527b560(param_1);
          if (iVar3 < 1) goto LAB_144eb4069;
          uVar12 = *(ulonglong *)(param_1 + 0x210);
          if (uVar12 == 0) {
            uVar9 = 0x50;
            local_90 = (int *)CONCAT44(local_90._4_4_,0x531);
            uVar15 = 0x44;
            goto LAB_144eb3fdf;
          }
LAB_144eb3905:
          uVar11 = uVar17;
          if (uVar12 != 0) {
            piVar8 = param_1 + 0x36c;
            do {
              if (*piVar8 == 0) break;
              uVar11 = uVar11 + 1;
              piVar8 = piVar8 + 0x12;
            } while (uVar11 < uVar12);
          }
          if (uVar11 != uVar12) goto LAB_144eb3936;
          param_1[0x210] = 0;
          param_1[0x211] = 0;
          uVar12 = uVar17;
        } while( true );
      }
      piVar8 = param_1 + 0x5a4;
      uVar14 = uVar17;
      if (param_5 != 0) {
        lVar16 = (longlong)local_78 - (longlong)piVar8;
        do {
          if (*(longlong *)(param_1 + 0x5a6) == 0) goto LAB_144eb385d;
          uVar14 = uVar14 + 1;
          *(char *)(lVar16 + (longlong)piVar8) = (char)*piVar8;
          piVar8 = (int *)((longlong)piVar8 + 1);
          *(longlong *)(param_1 + 0x5a6) = *(longlong *)(param_1 + 0x5a6) + -1;
          param_5 = param_5 - 1;
        } while (param_5 != 0);
      }
      if (*(longlong *)(param_1 + 0x5a6) != 0) {
        do {
          iVar3 = *piVar8;
          piVar8 = (int *)((longlong)piVar8 + 1);
          uVar12 = (ulonglong)((int)uVar17 + 1);
          *(char *)(uVar17 + 0x1690 + (longlong)param_1) = (char)iVar3;
          uVar17 = uVar12;
        } while (uVar12 < *(ulonglong *)(param_1 + 0x5a6));
      }
LAB_144eb385d:
      if (local_68 != (int *)0x0) {
        *local_68 = 0x16;
      }
      *local_58[0] = uVar14;
    }
    else {
      local_90 = (int *)CONCAT44(local_90._4_4_,0x4ed);
      local_98 = "ssl\\record\\rec_layer_s3.c";
      FUN_144eafc90(param_1,0x50,0x94,0x44);
    }
  }
  goto LAB_144eb4069;
LAB_144eb3936:
  if (uVar12 == 0) goto LAB_144eb38e5;
  piVar8 = param_1 + (uVar11 * 9 + 0x1af) * 2;
  if ((((*(longlong *)(param_1 + 0x5a6) == 0) || (piVar8[1] == 0x16)) ||
      ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0)) ||
     ((iVar3 = **(int **)(param_1 + 2), iVar3 < 0x304 || (iVar3 == 0x10000)))) {
    if ((piVar8[1] != 0x15) && (*(longlong *)(piVar8 + 2) != 0)) {
      param_1[0x5b7] = 0;
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xf0) == 0) || (piVar8[1] == 0x16)) {
      if ((param_1[0x11] & 2U) != 0) {
        piVar8[2] = 0;
        piVar8[3] = 0;
        param_1[10] = 1;
        goto LAB_144eb4069;
      }
      iVar3 = piVar8[1];
      if ((param_2 == iVar3) ||
         ((((iVar3 == 0x14 && (param_2 == 0x16)) && (local_68 != (int *)0x0)) && (uVar14 == 0)))) {
        iVar3 = FUN_144eafbc0(param_1);
        if ((iVar3 == 0) || (param_2 != 0x17)) {
          if ((param_2 != 0x16) || ((piVar8[1] != 0x14 || (*(longlong *)(param_1 + 0x5a6) == 0))))
          goto LAB_144eb3d4e;
          local_90 = (int *)CONCAT44(local_90._4_4_,0x57d);
LAB_144eb3fd1:
          uVar15 = 0x85;
        }
        else {
          if (*(longlong *)(param_1 + 0x10e) != 0) {
LAB_144eb3d4e:
            if (local_68 != (int *)0x0) {
              *local_68 = piVar8[1];
            }
            if (param_5 == 0) {
              if (*(longlong *)(piVar8 + 2) == 0) {
                piVar8[0xe] = 1;
              }
              goto LAB_144eb4069;
            }
            puVar13 = (ulonglong *)(piVar8 + 2);
            uVar18 = uVar17;
            goto LAB_144eb3d70;
          }
          local_90 = (int *)CONCAT44(local_90._4_4_,0x575);
          uVar15 = 100;
        }
      }
      else {
        if (*piVar8 == 2) {
          uVar9 = 0x50;
          local_90 = (int *)CONCAT44(local_90._4_4_,0x5ca);
          uVar15 = 0x44;
          goto LAB_144eb3fdf;
        }
        iVar4 = **(int **)(param_1 + 2);
        if ((iVar4 == 0x10000) && ((param_1[0xe] != 0 || (iVar3 != 0x15)))) {
          uVar15 = 0xf4;
          *param_1 = *piVar8;
          local_90 = (int *)CONCAT44(local_90._4_4_,0x5d8);
        }
        else if (iVar3 == 0x15) {
          uVar12 = *(ulonglong *)(piVar8 + 2);
          if ((((uVar12 < 0x8000000000000000) && (uVar12 != 0)) &&
              (cVar1 = *(char *)(*(longlong *)(piVar8 + 8) + *(longlong *)(piVar8 + 6)), uVar12 != 1
              )) && (bVar2 = ((char *)(*(longlong *)(piVar8 + 8) + *(longlong *)(piVar8 + 6)))[1],
                    uVar12 == 2)) {
            if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
              local_88 = *(undefined8 *)(param_1 + 0x30);
              local_98 = (char *)0x2;
              local_90 = param_1;
              (**(code **)(param_1 + 0x2e))(0,*param_1,0x15);
            }
            pcVar5 = *(code **)(param_1 + 0x15a);
            if ((*(code **)(param_1 + 0x15a) == (code *)0x0) &&
               (pcVar5 = local_70, *(code **)(*(longlong *)(param_1 + 0x166) + 0x108) != (code *)0x0
               )) {
              pcVar5 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108);
            }
            uVar10 = (uint)bVar2;
            local_70 = pcVar5;
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(param_1,0x4004,CONCAT11(cVar1,bVar2));
            }
            if (cVar1 == '\x01') {
LAB_144eb3ade:
              *(uint *)(*(longlong *)(param_1 + 0x2a) + 0xf4) = uVar10;
              piVar8[0xe] = 1;
              param_1[0x5b7] = param_1[0x5b7] + 1;
              if (param_1[0x5b7] == 5) {
                local_90 = (int *)CONCAT44(local_90._4_4_,0x606);
                uVar15 = 0x199;
                goto LAB_144eb3fd7;
              }
LAB_144eb3b05:
              if ((uVar14 != 0) && (uVar10 == 0x5a)) goto LAB_144eb38d0;
            }
            else if (uVar14 != 0) {
              if (uVar10 == 0x5a) goto LAB_144eb3ade;
              goto LAB_144eb3b05;
            }
            if ((uVar10 == 0) && ((uVar14 != 0 || (cVar1 == '\x01')))) {
              param_1[0x11] = param_1[0x11] | 2;
              goto LAB_144eb4069;
            }
            if ((cVar1 == '\x02') || (uVar14 != 0)) {
              param_1[10] = 1;
              local_90 = (int *)CONCAT44(local_90._4_4_,0x61b);
              *(uint *)(*(longlong *)(param_1 + 0x2a) + 0xf8) = uVar10;
              local_98 = "ssl\\record\\rec_layer_s3.c";
              FUN_144eafc90(param_1,0xffffffff,0x94,bVar2 + 1000);
              FUN_144ec7760(local_58,0x10,&DAT_149dfc0ac,bVar2);
              FUN_144ba2bd0(2,"SSL alert number ",local_58);
              param_1[0x11] = param_1[0x11] | 2;
              piVar8[0xe] = 1;
              FUN_144eb1190(*(undefined8 *)(param_1 + 0x1da),*(undefined8 *)(param_1 + 0x142));
              goto LAB_144eb4069;
            }
            if (uVar10 == 100) {
              local_90 = (int *)CONCAT44(local_90._4_4_,0x62c);
              uVar9 = 0x28;
              uVar15 = 0x153;
            }
            else {
              if (cVar1 == '\x01') goto LAB_144eb38d0;
              local_90 = (int *)CONCAT44(local_90._4_4_,0x634);
              uVar9 = 0x2f;
              uVar15 = 0xf6;
            }
            goto LAB_144eb3fdf;
          }
          local_90 = (int *)CONCAT44(local_90._4_4_,0x5ec);
          uVar15 = 0xcd;
        }
        else {
          if ((param_1[0x11] & 1U) != 0) {
            if (iVar3 != 0x16) {
              piVar8[2] = 0;
              piVar8[3] = 0;
              uVar15 = 0x123;
              piVar8[0xe] = 1;
              uVar9 = 0xffffffff;
              local_90 = (int *)CONCAT44(local_90._4_4_,0x65b);
              goto LAB_144eb3fdf;
            }
            if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
                (iVar4 < 0x304)) || (iVar4 == 0x10000)) {
              piVar8[2] = 0;
              piVar8[3] = 0;
              piVar8[0xe] = 1;
              bVar19 = (*(byte *)(param_1 + 0x174) & 4) == 0;
              goto LAB_144eb3ba2;
            }
          }
          if (iVar3 == 0x16) {
            uVar12 = 4 - *(longlong *)(param_1 + 0x5a6);
            if (*(ulonglong *)(piVar8 + 2) < uVar12) {
              uVar12 = *(size_t *)(piVar8 + 2);
            }
            memcpy((void *)(*(longlong *)(param_1 + 0x5a6) + 0x1690 + (longlong)param_1),
                   (void *)(*(longlong *)(piVar8 + 8) + *(longlong *)(piVar8 + 6)),uVar12);
            *(ulonglong *)(piVar8 + 6) = *(longlong *)(piVar8 + 6) + uVar12;
            *(ulonglong *)(piVar8 + 2) = *(longlong *)(piVar8 + 2) - uVar12;
            *(ulonglong *)(param_1 + 0x5a6) = *(longlong *)(param_1 + 0x5a6) + uVar12;
            if (*(longlong *)(piVar8 + 2) == 0) {
              piVar8[0xe] = 1;
            }
            if (*(ulonglong *)(param_1 + 0x5a6) < 4) goto LAB_144eb38d0;
          }
          if (piVar8[1] == 0x14) {
            local_90 = (int *)CONCAT44(local_90._4_4_,0x67e);
            goto LAB_144eb3fd1;
          }
          if ((3 < *(ulonglong *)(param_1 + 0x5a6)) && (iVar3 = FUN_144eafd30(param_1), iVar3 == 0))
          {
            iVar3 = param_1[0x21];
            FUN_144eafd20(param_1,1);
            iVar4 = (**(code **)(param_1 + 0xc))(param_1);
            if ((iVar4 < 0) || ((iVar4 == 0 || (iVar3 == 0xb)))) goto LAB_144eb4069;
            if ((*(byte *)(param_1 + 0x174) & 4) != 0) goto LAB_144eb38d0;
            bVar19 = *(longlong *)(param_1 + 0x21c) == 0;
LAB_144eb3ba2:
            if (!bVar19) goto LAB_144eb38d0;
            param_1[10] = 3;
            uVar6 = FUN_144b98ab0(param_1);
            FUN_144b9e640(uVar6,0xf);
            FUN_144b9e620(uVar6,9);
            goto LAB_144eb4069;
          }
          iVar3 = piVar8[1];
          if (0x13 < iVar3) {
            if (iVar3 < 0x17) {
              local_90 = (int *)CONCAT44(local_90._4_4_,0x6c6);
              uVar15 = 0x44;
              goto LAB_144eb3fd7;
            }
            if (iVar3 == 0x17) {
              iVar3 = FUN_144eafe00(param_1);
              if (iVar3 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x110) = 2;
                goto LAB_144eb4069;
              }
              iVar3 = FUN_144eafd50(param_1);
              if (iVar3 != 0) {
                iVar3 = FUN_14527d030(param_1,*(undefined8 *)(piVar8 + 2),0x68);
                if (iVar3 == 0) goto LAB_144eb4069;
                piVar8[0xe] = 1;
                goto LAB_144eb38d0;
              }
              local_90 = (int *)CONCAT44(local_90._4_4_,0x6e6);
              uVar9 = 10;
              uVar15 = 0xf5;
              goto LAB_144eb3fdf;
            }
          }
          local_90 = (int *)CONCAT44(local_90._4_4_,0x6bb);
          uVar15 = 0xf5;
        }
      }
    }
    else {
      local_90 = (int *)CONCAT44(local_90._4_4_,0x557);
      uVar15 = 0x91;
    }
  }
  else {
    local_90 = (int *)CONCAT44(local_90._4_4_,0x545);
    uVar15 = 0x125;
  }
LAB_144eb3fd7:
  uVar9 = 10;
LAB_144eb3fdf:
  local_98 = "ssl\\record\\rec_layer_s3.c";
  FUN_144eafc90(param_1,uVar9,0x94,uVar15);
  goto LAB_144eb4069;
LAB_144eb3d70:
  do {
    uVar14 = param_5 - uVar18;
    if (*puVar13 < param_5 - uVar18) {
      uVar14 = *puVar13;
    }
    memcpy(local_78,(void *)(puVar13[3] + puVar13[2]),uVar14);
    local_78 = (void *)((longlong)local_78 + uVar14);
    if (param_6 == 0) {
      *puVar13 = *puVar13 - uVar14;
      puVar13[2] = puVar13[2] + uVar14;
      if (*puVar13 == 0) {
        param_1[0x20f] = 0xf0;
        puVar13[2] = 0;
        goto LAB_144eb3dc3;
      }
LAB_144eb3dca:
      uVar7 = *puVar13;
      if (uVar7 != 0) goto LAB_144eb3dd2;
LAB_144eb3ddb:
      uVar11 = uVar11 + 1;
      puVar13 = puVar13 + 9;
    }
    else {
      uVar7 = *puVar13;
      if (uVar7 == 0) {
LAB_144eb3dc3:
        *(undefined4 *)(puVar13 + 6) = 1;
        goto LAB_144eb3dca;
      }
LAB_144eb3dd2:
      if ((param_6 != 0) && (uVar14 == uVar7)) goto LAB_144eb3ddb;
    }
    uVar18 = uVar18 + uVar14;
  } while (((param_2 == 0x17) && (uVar11 < uVar12)) && (uVar18 < param_5));
  uVar14 = local_60;
  if (uVar18 != 0) goto LAB_144eb3ffb;
  goto LAB_144eb38d0;
LAB_144eb3ffb:
  if (((param_6 == 0) && (uVar11 == uVar12)) &&
     (((*(byte *)(param_1 + 0x174) & 0x10) != 0 && (*(longlong *)(param_1 + 0x21c) == 0)))) {
    FUN_144eb4830(param_1);
  }
  *local_58[0] = uVar18;
LAB_144eb4069:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144eb4090 FUN_144eb4090 body=406 status=ok
// SIG undefined FUN_144eb4090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eb4090(longlong param_1,int param_2,longlong param_3,ulonglong param_4,
                       undefined8 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  if ((param_4 < *(ulonglong *)(param_1 + 0x16a8)) ||
     ((((*(byte *)(param_1 + 0x5d0) & 2) == 0 && (*(longlong *)(param_1 + 0x16c0) != param_3)) ||
      (*(int *)(param_1 + 0x16b0) != param_2)))) {
    FUN_144eafc90(param_1,0x50,0x9f,0x7f,"ssl\\record\\rec_layer_s3.c",0x100000486);
    uVar2 = 0xffffffff;
  }
  else {
    puVar4 = (ulonglong *)(param_1 + 0x898);
    uVar5 = uVar2;
LAB_144eb40f5:
    do {
      for (; (*puVar4 == 0 && (uVar5 < *(longlong *)(param_1 + 0x848) - 1U)); uVar5 = uVar5 + 1) {
        puVar4 = puVar4 + 5;
      }
      SetLastError(0);
      if (*(longlong *)(param_1 + 0x18) == 0) {
        FUN_144eafc90(param_1,0x50,0x9f,0x80,"ssl\\record\\rec_layer_s3.c",0x49d);
        uVar3 = 0xffffffff;
LAB_144eb41d7:
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
          *(undefined8 *)(param_1 + 0x898 + uVar5 * 0x28) = 0;
        }
        return uVar3 & 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x28) = 2;
      iVar1 = FUN_144b9eb80(*(longlong *)(param_1 + 0x18),puVar4[-4] + puVar4[-1],(int)*puVar4);
      uVar3 = (ulonglong)iVar1;
      if (-1 < iVar1) {
        uVar2 = uVar3;
      }
      if (iVar1 < 1) goto LAB_144eb41d7;
      puVar4[-1] = puVar4[-1] + uVar2;
      if (uVar2 != *puVar4) {
        *puVar4 = *puVar4 - uVar2;
        goto LAB_144eb40f5;
      }
      *puVar4 = 0;
    } while (uVar5 + 1 < *(ulonglong *)(param_1 + 0x848));
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *param_5 = *(undefined8 *)(param_1 + 0x16b8);
  }
  return uVar2;
}



// FUNCTION 144eb4230 FUN_144eb4230 body=785 status=ok
// SIG undefined FUN_144eb4230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eb4230(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4,int param_5
                       ,ulonglong *param_6)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  char *_Src;
  ulonglong _Size;
  void *_Dst;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x850) == 0) && (iVar2 = FUN_144eb4600(), iVar2 == 0)) {
    return 0xffffffff;
  }
  lVar1 = *(longlong *)(param_1 + 0x850);
  _Size = *(ulonglong *)(param_1 + 0x870);
  lVar5 = 7 - (ulonglong)((int)lVar1 - 4U & 7);
  if (param_4 == 0) {
    if (_Size == 0) {
LAB_144eb42f7:
      *(longlong *)(param_1 + 0x868) = lVar5;
    }
    else if ((((lVar5 != 0) && (4 < _Size)) &&
             (_Src = (char *)(*(longlong *)(param_1 + 0x868) + lVar1), *_Src == '\x17')) &&
            (0x7f < CONCAT11(_Src[3],_Src[4]))) {
      memmove((void *)(lVar1 + lVar5),_Src,_Size);
      goto LAB_144eb42f7;
    }
    *(longlong *)(param_1 + 0x1678) =
         *(longlong *)(param_1 + 0x868) + *(longlong *)(param_1 + 0x850);
    *(undefined8 *)(param_1 + 0x1680) = 0;
  }
  _Dst = (void *)(*(longlong *)(param_1 + 0x850) + lVar5);
  lVar1 = *(longlong *)(param_1 + 0x1680);
  if ((*(void **)(param_1 + 0x1678) != _Dst) && (param_5 == 1)) {
    memmove(_Dst,*(void **)(param_1 + 0x1678),lVar1 + _Size);
    *(void **)(param_1 + 0x1678) = _Dst;
    *(longlong *)(param_1 + 0x868) = lVar1 + lVar5;
  }
  uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8;
  if (uVar4 != 0) {
    if (_Size != 0) {
      if (_Size < param_2) {
        param_2 = _Size;
      }
      goto LAB_144eb4396;
    }
    if (param_4 != 0) {
      return 0;
    }
  }
  if (_Size < param_2) {
    uVar3 = *(longlong *)(param_1 + 0x860) - *(longlong *)(param_1 + 0x868);
    if (uVar3 < param_2) {
      FUN_144eafc90(param_1,0x50,0x95,0x44,"ssl\\record\\rec_layer_s3.c",0x118);
      return 0xffffffff;
    }
    if ((*(int *)(param_1 + 0x838) != 0) || (uVar7 = param_2, uVar4 != 0)) {
      if (param_3 < param_2) {
        param_3 = param_2;
      }
      uVar7 = param_3;
      if (uVar3 < param_3) {
        uVar7 = uVar3;
      }
    }
    do {
      SetLastError(0);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        FUN_144eafc90(param_1,0x50,0x95,0xd3,"ssl\\record\\rec_layer_s3.c",0x13a);
        uVar3 = 0xffffffff;
LAB_144eb44ef:
        *(ulonglong *)(param_1 + 0x870) = _Size;
        if ((((*(byte *)(param_1 + 0x5d0) & 0x10) != 0) &&
            ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0)) &&
           (lVar1 + _Size == 0)) {
          FUN_144eb4830(param_1);
        }
        return uVar3 & 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x28) = 3;
      iVar2 = FUN_144b9e930(*(longlong *)(param_1 + 0x10),(longlong)_Dst + _Size + lVar1,
                            (int)uVar7 - (int)_Size);
      uVar3 = (ulonglong)iVar2;
      uVar6 = 0;
      if (-1 < iVar2) {
        uVar6 = uVar3;
      }
      if (iVar2 < 1) goto LAB_144eb44ef;
      _Size = _Size + uVar6;
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
        if (_Size < param_2) {
          param_2 = _Size;
        }
        goto LAB_144eb4490;
      }
      if (param_2 <= _Size) {
LAB_144eb4490:
        *(longlong *)(param_1 + 0x868) = *(longlong *)(param_1 + 0x868) + param_2;
        *(ulonglong *)(param_1 + 0x870) = _Size - param_2;
        *(longlong *)(param_1 + 0x1680) = *(longlong *)(param_1 + 0x1680) + param_2;
        *(undefined4 *)(param_1 + 0x28) = 1;
        *param_6 = param_2;
        return 1;
      }
    } while( true );
  }
LAB_144eb4396:
  *(longlong *)(param_1 + 0x1680) = *(longlong *)(param_1 + 0x1680) + param_2;
  *(longlong *)(param_1 + 0x868) = *(longlong *)(param_1 + 0x868) + param_2;
  *(ulonglong *)(param_1 + 0x870) = _Size - param_2;
  *param_6 = param_2;
  return 1;
}



// FUNCTION 144eb4550 FUN_144eb4550 body=25 status=ok
// SIG undefined FUN_144eb4550(void)

void FUN_144eb4550(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 7);
  do {
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 != '\0') {
      return;
    }
    pcVar1 = pcVar1 + -1;
  } while (-1 < (longlong)pcVar1 - param_1);
  return;
}



// FUNCTION 144eb4570 FUN_144eb4570 body=63 status=ok
// SIG undefined FUN_144eb4570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eb4570(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_144eb4600();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_144eb46e0(param_1,1);
  return (ulonglong)(iVar1 != 0);
}



// FUNCTION 144eb45b0 FUN_144eb45b0 body=11 status=ok
// SIG undefined FUN_144eb45b0(void)

void FUN_144eb45b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 144eb45c0 FUN_144eb45c0 body=50 status=ok
// SIG undefined FUN_144eb45c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb45c0(undefined8 *param_1)

{
  FUN_144ea6530(*param_1,"ssl\\record\\ssl3_buffer.c",0x21);
  *param_1 = 0;
  return;
}



// FUNCTION 144eb4600 FUN_144eb4600 body=220 status=ok
// SIG undefined FUN_144eb4600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb4600(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if (*(longlong *)(param_1 + 0x850) == 0) {
    puVar3 = (undefined1 *)0x4150;
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      puVar3 = &DAT_00004148;
    }
    iVar1 = FUN_144eb5130(param_1);
    if (iVar1 != 0) {
      puVar3 = puVar3 + 0x400;
    }
    if (puVar3 < *(undefined1 **)(param_1 + 0x858)) {
      puVar3 = *(undefined1 **)(param_1 + 0x858);
    }
    lVar2 = FUN_144ea64e0(puVar3,"ssl\\record\\ssl3_buffer.c",0x3f);
    if (lVar2 == 0) {
      FUN_144eafc90(param_1,0xffffffff,0x9c,0x41,"ssl\\record\\ssl3_buffer.c",CONCAT44(uVar4,0x46));
      return 0;
    }
    *(longlong *)(param_1 + 0x850) = lVar2;
    *(undefined1 **)(param_1 + 0x860) = puVar3;
  }
  return 1;
}



// FUNCTION 144eb46e0 FUN_144eb46e0 body=334 status=ok
// SIG undefined FUN_144eb46e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb46e0(longlong param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  *(ulonglong *)(param_1 + 0x848) = param_2;
  if (param_3 == 0) {
    lVar2 = 0xe;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      lVar2 = 5;
    }
    iVar1 = FUN_144b9bba0();
    param_3 = lVar2 + 0x17 + (ulonglong)(iVar1 + 0x50);
    iVar1 = FUN_144eb5130(param_1);
    if (iVar1 != 0) {
      param_3 = param_3 + 0x400;
    }
    if ((*(uint *)(param_1 + 0x5cc) & 0x800) == 0) {
      param_3 = param_3 + 0x57 + lVar2;
    }
  }
  uVar4 = 0;
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x878);
    do {
      if (*plVar3 == 0) {
LAB_144eb47a5:
        lVar2 = FUN_144ea64e0(param_3,"ssl\\record\\ssl3_buffer.c",0x7c);
        if (lVar2 == 0) {
          *(ulonglong *)(param_1 + 0x848) = uVar4;
          FUN_144eafc90(param_1,0xffffffff,0x123,0x41,"ssl\\record\\ssl3_buffer.c",0x85);
          return 0;
        }
        plVar3[1] = 0;
        plVar3[3] = 0;
        plVar3[4] = 0;
        *plVar3 = lVar2;
        plVar3[2] = param_3;
      }
      else if (plVar3[2] != param_3) {
        FUN_144ea6530(*plVar3,"ssl\\record\\ssl3_buffer.c",0x77);
        *plVar3 = 0;
        goto LAB_144eb47a5;
      }
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 5;
    } while (uVar4 < param_2);
  }
  return 1;
}



// FUNCTION 144eb4830 FUN_144eb4830 body=65 status=ok
// SIG undefined FUN_144eb4830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb4830(longlong param_1)

{
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x850),"ssl\\record\\ssl3_buffer.c",0xb4);
  *(undefined8 *)(param_1 + 0x850) = 0;
  return 1;
}



// FUNCTION 144eb4880 FUN_144eb4880 body=140 status=ok
// SIG undefined FUN_144eb4880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb4880(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x848) = 0;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x850 + lVar1 * 0x28);
    do {
      FUN_144ea6530(*puVar2,"ssl\\record\\ssl3_buffer.c",0xa7);
      *puVar2 = 0;
      puVar2 = puVar2 + -5;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    *(undefined8 *)(param_1 + 0x848) = 0;
  }
  return 1;
}



// FUNCTION 144eb4910 FUN_144eb4910 body=129 status=ok
// SIG undefined FUN_144eb4910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144eb4910(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144eb4920;
  puVar1 = (undefined8 *)FUN_144ea64e0(0x18,"ssl\\pqueue.c",0x14);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x14,0x270,0x41,"ssl\\pqueue.c",0x17,uVar2);
    return (undefined8 *)0x0;
  }
  *puVar1 = *param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return puVar1;
}



// FUNCTION 144eb49a0 FUN_144eb49a0 body=33 status=ok
// SIG undefined FUN_144eb49a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb49a0(undefined8 param_1)

{
  FUN_144ea6530(param_1,"ssl\\pqueue.c",0x23);
  return;
}



// FUNCTION 144eb49d0 FUN_144eb49d0 body=83 status=ok
// SIG undefined FUN_144eb49d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eb49d0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144eb49dc;
  lVar1 = FUN_144ea6670(0x10,"ssl\\pqueue.c",0x28);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x14,0x271,0x41,"ssl\\pqueue.c",0x2b,uVar2);
  }
  return lVar1;
}



// FUNCTION 144eb4a30 FUN_144eb4a30 body=33 status=ok
// SIG undefined FUN_144eb4a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb4a30(undefined8 param_1)

{
  FUN_144ea6530(param_1,"ssl\\pqueue.c",0x32);
  return;
}



// FUNCTION 144eb4a60 FUN_144eb4a60 body=166 status=ok
// SIG undefined FUN_144eb4a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_144eb4a60(longlong *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Buf1;
  void *pvVar3;
  
  if ((void *)*param_1 == (void *)0x0) {
    *param_1 = (longlong)param_2;
    return param_2;
  }
  pvVar1 = (void *)*param_1;
  pvVar3 = (void *)0x0;
  do {
    _Buf1 = pvVar1;
    iVar2 = memcmp(_Buf1,param_2,8);
    if (0 < iVar2) {
      *(void **)((longlong)param_2 + 0x10) = _Buf1;
      if (pvVar3 == (void *)0x0) {
        *param_1 = (longlong)param_2;
        return param_2;
      }
      goto LAB_144eb4ad7;
    }
    if (iVar2 == 0) {
      return (void *)0x0;
    }
    pvVar1 = *(void **)((longlong)_Buf1 + 0x10);
    pvVar3 = _Buf1;
  } while (*(void **)((longlong)_Buf1 + 0x10) != (void *)0x0);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
LAB_144eb4ad7:
  *(void **)((longlong)pvVar3 + 0x10) = param_2;
  return param_2;
}



// FUNCTION 144eb4b10 FUN_144eb4b10 body=4 status=ok
// SIG undefined FUN_144eb4b10(void)

undefined8 FUN_144eb4b10(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144eb4b20 FUN_144eb4b20 body=16 status=ok
// SIG undefined FUN_144eb4b20(void)

void FUN_144eb4b20(longlong *param_1)

{
  if (*param_1 != 0) {
    *param_1 = *(longlong *)(*param_1 + 0x10);
  }
  return;
}



// FUNCTION 144eb4b30 FUN_144eb4b30 body=75 status=ok
// SIG undefined FUN_144eb4b30(void)

longlong * FUN_144eb4b30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)param_1[2];
  plVar3 = (longlong *)0x0;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    while (plVar1 = plVar2, plVar3 = param_1, *param_1 != *param_2) {
      param_1 = plVar1;
      plVar2 = (longlong *)plVar1[2];
      if ((longlong *)plVar1[2] == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
        if (*plVar1 == *param_2) {
          plVar2 = plVar1;
        }
        return plVar2;
      }
    }
  }
  if (*param_1 == *param_2) {
    plVar3 = param_1;
  }
  return plVar3;
}



// FUNCTION 144eb4b80 FUN_144eb4b80 body=4 status=ok
// SIG undefined FUN_144eb4b80(void)

undefined8 FUN_144eb4b80(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144eb4b90 FUN_144eb4b90 body=24 status=ok
// SIG undefined FUN_144eb4b90(void)

longlong FUN_144eb4b90(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      *param_1 = *(longlong *)(lVar1 + 0x10);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 144eb4bb0 FUN_144eb4bb0 body=29 status=ok
// SIG undefined FUN_144eb4bb0(void)

longlong FUN_144eb4bb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}



// FUNCTION 144eb4bd0 FUN_144eb4bd0 body=35 status=ok
// SIG undefined FUN_144eb4bd0(void)

undefined4 FUN_144eb4bd0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_149bf5d90;
  iVar2 = 0x32;
  do {
    if (iVar2 == param_1) break;
    iVar2 = *(int *)(puVar1 + 8);
    puVar1 = puVar1 + 8;
  } while (iVar2 != 0);
  return *(undefined4 *)(puVar1 + 4);
}



// FUNCTION 144eb4c00 FUN_144eb4c00 body=308 status=ok
// SIG undefined FUN_144eb4c00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb4c00(undefined4 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x144eb4c10;
  local_res8 = 0;
  iVar2 = FUN_144eb2350(param_1,param_2,
                        *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                        *(longlong *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x26),&local_res8);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  if ((((int)param_2 == 0x16) &&
      (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0 ||
         (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
       ((param_1[0x17] != 0x21 && (1 < param_1[0x17] - 0x2a)))))) &&
     (iVar2 = FUN_14527dc30(param_1,*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                                    *(longlong *)(param_1 + 0x28),local_res8), iVar2 == 0)) {
    return 0xffffffff;
  }
  lVar1 = *(longlong *)(param_1 + 0x26);
  if (local_res8 != lVar1) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + local_res8;
    *(longlong *)(param_1 + 0x26) = lVar1 - local_res8;
    return 0;
  }
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))
              (1,*param_1,param_2 & 0xffffffff,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
               lVar1 + *(longlong *)(param_1 + 0x28),param_1,*(undefined8 *)(param_1 + 0x30),uVar3);
  }
  return 1;
}



// FUNCTION 144eb4d40 FUN_144eb4d40 body=214 status=ok
// SIG undefined FUN_144eb4d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb4d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_14526eb60(param_2,3);
  if (iVar1 == 0) {
    FUN_144eafc90(param_1,0x50,0x93,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x3f3));
  }
  else {
    iVar1 = FUN_144eb8130(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_14526ea40(param_2);
      if (iVar1 == 0) {
        FUN_144eafc90(param_1,0x50,0x93,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x3fc));
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144eb4e20 FUN_144eb4e20 body=125 status=ok
// SIG undefined FUN_144eb4e20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb4e20(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong local_res20;
  
  if ((param_3 != 0x101) && (iVar1 = FUN_14526ea40(param_2), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_14526f140(param_2,&local_res20);
  if ((iVar1 != 0) && (local_res20 < 0x80000000)) {
    *(longlong *)(param_1 + 0x98) = (longlong)(int)local_res20;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 144eb4ea0 FUN_144eb4ea0 body=647 status=ok
// SIG undefined FUN_144eb4ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb4ea0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int local_res10 [2];
  undefined1 local_res18 [8];
  
  uVar4 = FUN_14527d180();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  *(undefined8 *)(param_1 + 0x608) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined2 *)(param_1 + 0x620) = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x768) + 0x68);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    else {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x768) + 0x6c);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    lVar5 = *(longlong *)(param_1 + 0xa8);
    *(undefined8 *)(lVar5 + 0xb8) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x248) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
LAB_144eb5108:
    uVar4 = 1;
  }
  else {
    uVar4 = FUN_144b9a240(param_1);
    iVar3 = FUN_144eb5b60(param_1,local_res18,local_res10,0);
    if (iVar3 == 0) {
      iVar6 = 0;
      iVar3 = FUN_144babbf0(uVar4);
      if (0 < iVar3) {
        do {
          lVar5 = FUN_144babc00(uVar4,iVar6);
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
            if ((*(int *)(lVar5 + 0x2c) <= local_res10[0]) &&
               (local_res10[0] <= *(int *)(lVar5 + 0x30))) {
LAB_144eb4fb8:
              if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
                 (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
                LOCK();
                piVar1 = (int *)(*(longlong *)(param_1 + 0x768) + 0x74);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              else {
                LOCK();
                piVar1 = (int *)(*(longlong *)(param_1 + 0x598) + 0x78);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
                *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) = 0;
              }
              goto LAB_144eb5108;
            }
          }
          else {
            iVar3 = *(int *)(lVar5 + 0x34);
            if (iVar3 == 0x100) {
              iVar3 = 0xff00;
            }
            iVar2 = local_res10[0];
            if (local_res10[0] == 0x100) {
              iVar2 = 0xff00;
            }
            if (iVar2 <= iVar3) {
              iVar3 = *(int *)(lVar5 + 0x38);
              if (iVar3 == 0x100) {
                iVar3 = 0xff00;
              }
              if (iVar3 <= iVar2) goto LAB_144eb4fb8;
            }
          }
          iVar6 = iVar6 + 1;
          iVar3 = FUN_144babbf0(uVar4);
        } while (iVar6 < iVar3);
      }
      FUN_144eafc90(param_1,0x28,0x1fc,0xb5,"ssl\\statem\\statem_lib.c",0x80);
      FUN_144ba2bd0(1,"No ciphers enabled for max supported SSL/TLS version");
      uVar4 = 0;
    }
    else {
      FUN_144eafc90(param_1,0x50,0x1fc,0x44,"ssl\\statem\\statem_lib.c",0x6e);
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 144eb5130 FUN_144eb5130 body=61 status=ok
// SIG undefined FUN_144eb5130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb5130(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x5cc) & 0x20000) != 0) {
    return 0;
  }
  uVar1 = FUN_144b9dff0(param_1,0xf,0,0,0);
  return uVar1;
}



// FUNCTION 144eb5170 FUN_144eb5170 body=458 status=ok
// SIG undefined FUN_144eb5170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144eb5170(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = **(int **)(param_1 + 2);
  if (iVar2 == 0x10000) {
    piVar6 = &DAT_149bf5ee0;
  }
  else {
    if (iVar2 != 0x1ffff) {
      iVar2 = *param_1;
      if (param_2 == iVar2) {
        return true;
      }
      if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) {
        if (iVar2 == 0x100) {
          iVar2 = 0xff00;
        }
        if (param_2 == 0x100) {
          param_2 = 0xff00;
        }
        iVar5 = 1;
        if (iVar2 < param_2) {
          iVar5 = -1;
        }
        return iVar5 == 0;
      }
      iVar5 = 1;
      if (param_2 < iVar2) {
        iVar5 = -1;
      }
      return iVar5 == 0;
    }
    piVar6 = &DAT_149bf5cc0;
  }
  iVar2 = *piVar6;
  do {
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = *piVar6;
    if (param_2 != iVar2) {
      iVar5 = 1;
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
        if (param_2 < iVar2) {
          iVar5 = -1;
        }
      }
      else {
        iVar4 = iVar2;
        if (iVar2 == 0x100) {
          iVar4 = 0xff00;
        }
        iVar1 = param_2;
        if (param_2 == 0x100) {
          iVar1 = 0xff00;
        }
        iVar5 = 1;
        if (iVar4 < iVar1) {
          iVar5 = -1;
        }
      }
      if (0 < iVar5) {
        return false;
      }
    }
    if (*(code **)(piVar6 + 2) != (code *)0x0) {
      if (param_2 != iVar2) {
        iVar5 = 1;
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          if (param_2 < iVar2) {
            iVar5 = -1;
          }
        }
        else {
          if (iVar2 == 0x100) {
            iVar2 = 0xff00;
          }
          iVar4 = param_2;
          if (param_2 == 0x100) {
            iVar4 = 0xff00;
          }
          iVar5 = 1;
          if (iVar2 < iVar4) {
            iVar5 = -1;
          }
        }
        if (iVar5 != 0) goto LAB_144eb52fc;
      }
      uVar3 = (**(code **)(piVar6 + 2))();
      iVar2 = FUN_144eb83d0(param_1,uVar3);
      if ((iVar2 == 0) &&
         (((param_1[0xe] == 0 || (param_2 != 0x304)) || (iVar2 = FUN_144eb8510(param_1), iVar2 != 0)
          ))) {
        if (param_3 != (undefined8 *)0x0) {
          uVar3 = (**(code **)(piVar6 + 2))();
          *param_3 = uVar3;
        }
        return true;
      }
    }
LAB_144eb52fc:
    piVar6 = piVar6 + 6;
    iVar2 = *piVar6;
  } while( true );
}



// FUNCTION 144eb5340 FUN_144eb5340 body=114 status=ok
// SIG undefined FUN_144eb5340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb5340(int *param_1)

{
  undefined8 uVar1;
  int local_res8 [2];
  undefined1 local_res10 [24];
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) {
    uVar1 = FUN_144eb5b60(param_1,local_res10,local_res8,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_1 = local_res8[0];
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) &&
       (0x303 < local_res8[0])) {
      local_res8[0] = 0x303;
    }
    param_1[0x17b] = local_res8[0];
  }
  return 0;
}



// FUNCTION 144eb53c0 FUN_144eb53c0 body=181 status=ok
// SIG undefined FUN_144eb53c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144eb53c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (*param_1 == *(int *)**(undefined8 **)(param_1 + 0x166)) {
    return true;
  }
  piVar2 = (int *)FUN_144b9e510();
  if (*(int *)**(undefined8 **)(param_1 + 0x166) == *piVar2) {
    piVar2 = &DAT_149bf5ee0;
  }
  else {
    piVar2 = (int *)FUN_144b9e540();
    if (*(int *)**(undefined8 **)(param_1 + 0x166) != *piVar2) {
      return false;
    }
    piVar2 = &DAT_149bf5cc0;
  }
  iVar1 = *piVar2;
  do {
    if (iVar1 == 0) {
      return false;
    }
    if (*(code **)(piVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(piVar2 + 4))();
      iVar1 = FUN_144eb83d0(param_1,uVar3);
      if (iVar1 == 0) {
        return *param_1 == *piVar2;
      }
    }
    piVar2 = piVar2 + 6;
    iVar1 = *piVar2;
  } while( true );
}



// FUNCTION 144eb5480 FUN_144eb5480 body=111 status=ok
// SIG undefined FUN_144eb5480(void)

undefined8 FUN_144eb5480(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *param_3 = 0;
    return 1;
  }
  bVar1 = param_2 - 0x300U < 5;
  iVar3 = param_2;
  if (param_2 == 0x100) {
    iVar3 = 0xff00;
  }
  bVar2 = iVar3 - 0xfefdU < 4;
  if ((!bVar1) && (!bVar2)) {
    return 0;
  }
  if (((param_1 == 0x10000) || (bVar1 = bVar2, param_1 == 0x1ffff)) && (bVar1)) {
    *param_3 = param_2;
  }
  return 1;
}



// FUNCTION 144eb54f0 FUN_144eb54f0 body=977 status=ok
// SIG undefined FUN_144eb54f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb54f0(uint *param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 local_res8;
  
  uVar13 = *(uint *)(param_2 + 4);
  piVar3 = *(int **)(param_1 + 2);
  uVar5 = 0;
  iVar6 = *piVar3;
  param_1[0x17b] = uVar13;
  if (iVar6 == 0x10000) {
LAB_144eb55c5:
    puVar14 = &DAT_149bf5ee0;
  }
  else {
    if (iVar6 != 0x1ffff) {
      uVar11 = *(uint *)(*(longlong *)(piVar3 + 0x30) + 0x60) & 8;
      if (((uVar11 != 0) || (*piVar3 < 0x304)) || (*piVar3 == 0x10000)) {
        uVar5 = *param_1;
        if (uVar13 != uVar5) {
          if (uVar11 == 0) {
            iVar6 = 1;
            if ((int)uVar13 < (int)uVar5) {
              iVar6 = -1;
            }
          }
          else {
            if (uVar5 == 0x100) {
              uVar5 = 0xff00;
            }
            if (uVar13 == 0x100) {
              uVar13 = 0xff00;
            }
            iVar6 = 1;
            if ((int)uVar5 < (int)uVar13) {
              iVar6 = -1;
            }
          }
          if (iVar6 < 0) {
            return 0x10a;
          }
        }
        *param_3 = 0;
        return 0;
      }
      goto LAB_144eb55c5;
    }
    puVar14 = &DAT_149bf5cc0;
  }
  lVar4 = *(longlong *)(param_2 + 0x288);
  if ((*(int *)(lVar4 + 0x2b8) == 0) && (param_1[0x136] != 0)) {
    return 0x102;
  }
  if ((*(int *)(lVar4 + 0x2b8) != 0) && ((*(byte *)(*(longlong *)(piVar3 + 0x30) + 0x60) & 8) == 0))
  {
    *(undefined4 *)(lVar4 + 700) = 1;
    local_res8 = 0;
    if (*(longlong *)(lVar4 + 0x2b0) != 0) {
      uVar10 = *(longlong *)(lVar4 + 0x2b0) - 1;
      bVar2 = **(byte **)(lVar4 + 0x2a8);
      uVar8 = (ulonglong)bVar2;
      pbVar12 = *(byte **)(lVar4 + 0x2a8) + 1;
      uVar15 = (ulonglong)bVar2;
      if ((uVar8 <= uVar10) && (uVar10 == uVar8)) {
        *(byte **)(lVar4 + 0x2a8) = pbVar12 + uVar8;
        *(undefined8 *)(lVar4 + 0x2b0) = 0;
        if ((int)uVar13 < 0x301) {
          return 0x124;
        }
        while (1 < uVar15) {
          bVar2 = *pbVar12;
          uVar15 = uVar15 - 2;
          pbVar1 = pbVar12 + 1;
          pbVar12 = pbVar12 + 2;
          uVar13 = (uint)CONCAT11(bVar2,*pbVar1);
          if (uVar13 != uVar5) {
            if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
              iVar6 = 1;
              if (uVar13 < uVar5) {
                iVar6 = -1;
              }
            }
            else {
              uVar11 = uVar5;
              if (uVar5 == 0x100) {
                uVar11 = 0xff00;
              }
              uVar7 = uVar13;
              if (uVar13 == 0x100) {
                uVar7 = 0xff00;
              }
              iVar6 = 1;
              if (uVar11 < uVar7) {
                iVar6 = -1;
              }
            }
            if ((0 < iVar6) && (iVar6 = FUN_144eb5170(param_1,uVar13,&local_res8), iVar6 != 0)) {
              uVar5 = uVar13;
            }
          }
        }
        if (uVar15 == 0) {
          if (uVar5 == 0) {
            return 0x102;
          }
          if (param_1[0x136] != 0) {
            if (uVar5 == 0x304) {
              return 0;
            }
            return 0x102;
          }
          FUN_144eb8650(param_1,uVar5,param_3);
          *(undefined8 *)(param_1 + 2) = local_res8;
          *param_1 = uVar5;
          return 0;
        }
      }
    }
    return 0x9f;
  }
  if (uVar13 != 0x304) {
    iVar6 = 1;
    if ((*(byte *)(*(longlong *)(piVar3 + 0x30) + 0x60) & 8) == 0) {
      if ((int)uVar13 < 0x304) {
        iVar6 = -1;
      }
    }
    else {
      uVar11 = uVar13;
      if (uVar13 == 0x100) {
        uVar11 = 0xff00;
      }
      iVar6 = 1;
      if (0x304 < (int)uVar11) {
        iVar6 = -1;
      }
    }
    if (iVar6 < 0) goto LAB_144eb57fc;
  }
  uVar13 = 0x303;
LAB_144eb57fc:
  uVar11 = *puVar14;
  do {
    if (uVar11 == 0) {
      uVar9 = 0x18c;
      if (uVar5 != 0) {
        uVar9 = 0x102;
      }
      return uVar9;
    }
    if (*(code **)(puVar14 + 4) != (code *)0x0) {
      uVar11 = *puVar14;
      if (uVar13 != uVar11) {
        iVar6 = 1;
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          if ((int)uVar13 < (int)uVar11) {
            iVar6 = -1;
          }
        }
        else {
          if (uVar11 == 0x100) {
            uVar11 = 0xff00;
          }
          uVar7 = uVar13;
          if (uVar13 == 0x100) {
            uVar7 = 0xff00;
          }
          iVar6 = 1;
          if ((int)uVar11 < (int)uVar7) {
            iVar6 = -1;
          }
        }
        if (iVar6 < 0) goto LAB_144eb5869;
      }
      uVar9 = (**(code **)(puVar14 + 4))();
      iVar6 = FUN_144eb83d0(param_1,uVar9);
      if (iVar6 == 0) {
        FUN_144eb8650(param_1,*puVar14,param_3);
        *param_1 = *puVar14;
        *(undefined8 *)(param_1 + 2) = uVar9;
        return 0;
      }
      uVar5 = 1;
    }
LAB_144eb5869:
    puVar14 = puVar14 + 6;
    uVar11 = *puVar14;
  } while( true );
}



// FUNCTION 144eb58d0 FUN_144eb58d0 body=655 status=ok
// SIG undefined FUN_144eb58d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb58d0(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  
  iVar1 = *param_1;
  *param_1 = param_2;
  uVar7 = 0;
  uVar5 = FUN_145270930(param_1,0x11,0x300,param_3,0,0);
  if ((int)uVar5 == 0) {
    *param_1 = iVar1;
    return uVar5;
  }
  if ((param_1[0x136] != 0) && (*param_1 != 0x304)) {
    *param_1 = iVar1;
    FUN_144eafc90(param_1,0x46,0x25f,0x10a,"ssl\\statem\\statem_lib.c",CONCAT44(uVar7,0x77e));
    return 0;
  }
  iVar3 = **(int **)(param_1 + 2);
  if (iVar3 == 0x10000) {
    piVar8 = &DAT_149bf5ee0;
LAB_144eb59a2:
    iVar3 = FUN_144eb5b60(param_1,local_res10,local_res8,local_res20);
    if (iVar3 == 0) {
      iVar3 = *param_1;
      uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8;
      if (uVar9 == 0) {
        bVar2 = iVar3 < local_res10[0];
      }
      else {
        iVar6 = iVar3;
        if (iVar3 == 0x100) {
          iVar6 = 0xff00;
        }
        if (local_res10[0] == 0x100) {
          local_res10[0] = 0xff00;
        }
        bVar2 = local_res10[0] < iVar6;
      }
      if (bVar2) {
        uVar5 = CONCAT44(uVar7,0x7a6);
      }
      else {
        if (uVar9 == 0) {
          bVar2 = local_res8[0] < iVar3;
        }
        else {
          iVar6 = iVar3;
          if (iVar3 == 0x100) {
            iVar6 = 0xff00;
          }
          iVar4 = local_res8[0];
          if (local_res8[0] == 0x100) {
            iVar4 = 0xff00;
          }
          bVar2 = iVar6 < iVar4;
        }
        if (bVar2) {
          uVar5 = CONCAT44(uVar7,0x7ac);
        }
        else {
          if ((*(byte *)(param_1 + 0x174) & 0x80) == 0) {
            local_res20[0] = local_res8[0];
          }
          if ((iVar3 == 0x303) && (0x303 < local_res20[0])) {
            if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0xb0) == 0x14452474e574f44) {
              uVar5 = CONCAT44(uVar7,0x7bc);
              uVar7 = 0x2f;
              iVar3 = 0x175;
              goto LAB_144eb5b1b;
            }
          }
          else if ((uVar9 == 0) &&
                  (((iVar3 < 0x303 && (iVar3 < local_res20[0])) &&
                   (*(char (*) [8])(*(longlong *)(param_1 + 0x2a) + 0xb0) ==
                    (char  [8])0x4452474e574f44)))) {
            uVar5 = CONCAT44(uVar7,0x7c9);
            uVar7 = 0x2f;
            iVar3 = 0x175;
            goto LAB_144eb5b1b;
          }
          iVar6 = *piVar8;
          while (iVar6 != 0) {
            if ((*(longlong *)(piVar8 + 2) != 0) && (iVar3 == *piVar8)) {
              uVar5 = (**(code **)(piVar8 + 2))();
              *(undefined8 *)(param_1 + 2) = uVar5;
              return 1;
            }
            piVar8 = piVar8 + 6;
            iVar6 = *piVar8;
          }
          uVar5 = CONCAT44(uVar7,0x7d8);
        }
      }
      iVar3 = 0x102;
    }
    else {
      uVar5 = CONCAT44(uVar7,0x79f);
    }
  }
  else {
    if (iVar3 == 0x1ffff) {
      piVar8 = &DAT_149bf5cc0;
      goto LAB_144eb59a2;
    }
    if (*param_1 == iVar3) {
      return 1;
    }
    uVar5 = CONCAT44(uVar7,0x788);
    iVar3 = 0x10a;
  }
  uVar7 = 0x46;
LAB_144eb5b1b:
  *param_1 = iVar1;
  FUN_144eafc90(param_1,uVar7,0x25f,iVar3,"ssl\\statem\\statem_lib.c",uVar5);
  return 0;
}



// FUNCTION 144eb5b60 FUN_144eb5b60 body=583 status=ok
// SIG undefined FUN_144eb5b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144eb5b60(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int local_res8;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    puVar10 = &DAT_149bf5ee0;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar5 = *param_1;
      *param_3 = iVar5;
      *param_2 = iVar5;
      return -(uint)(param_4 != (uint *)0x0) & 0x44;
    }
    puVar10 = &DAT_149bf5cc0;
  }
  uVar9 = 0;
  local_res8 = 0;
  *param_2 = 0;
  bVar3 = true;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  uVar1 = *puVar10;
  uVar4 = uVar9;
  do {
    if (uVar1 == 0) {
      *param_3 = local_res8;
      if (local_res8 == 0) {
        uVar9 = 0xbf;
      }
      return uVar9;
    }
    uVar11 = uVar9;
    if (*(code **)(puVar10 + 2) == (code *)0x0) {
LAB_144eb5c0c:
      bVar3 = true;
    }
    else {
      piVar7 = (int *)(**(code **)(puVar10 + 2))();
      uVar11 = uVar4;
      if ((bVar3) && (uVar4 == 0)) {
        uVar11 = *puVar10;
      }
      iVar5 = param_1[0x175];
      iVar2 = *piVar7;
      if ((iVar5 != 0) && (iVar2 != iVar5)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          iVar8 = 1;
          if (iVar2 < iVar5) {
            iVar8 = -1;
          }
        }
        else {
          if (iVar5 == 0x100) {
            iVar5 = 0xff00;
          }
          iVar6 = iVar2;
          if (iVar2 == 0x100) {
            iVar6 = 0xff00;
          }
          iVar8 = 1;
          if (iVar5 < iVar6) {
            iVar8 = -1;
          }
        }
        if (iVar8 < 0) goto LAB_144eb5c0c;
      }
      iVar5 = FUN_144b9dff0(param_1,9,0,iVar2,0);
      if (iVar5 == 0) goto LAB_144eb5c0c;
      iVar5 = param_1[0x176];
      if ((iVar5 != 0) && (iVar2 != iVar5)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          iVar6 = 1;
          if (iVar2 < iVar5) {
            iVar6 = -1;
          }
        }
        else {
          if (iVar5 == 0x100) {
            iVar5 = 0xff00;
          }
          if (iVar2 == 0x100) {
            iVar2 = 0xff00;
          }
          iVar6 = 1;
          if (iVar5 < iVar2) {
            iVar6 = -1;
          }
        }
        if (0 < iVar6) goto LAB_144eb5c0c;
      }
      if (((piVar7[2] & param_1[0x173]) != 0) ||
         (((*(byte *)(piVar7 + 1) & 2) != 0 &&
          ((*(uint *)(*(longlong *)(param_1 + 0x122) + 0x1c) & 0x30000) != 0)))) goto LAB_144eb5c0c;
      if (bVar3) {
        if ((param_4 != (uint *)0x0) && (uVar11 != 0)) {
          *param_4 = uVar11;
        }
        local_res8 = *piVar7;
        *param_2 = local_res8;
        bVar3 = false;
      }
      else {
        *param_2 = *piVar7;
      }
    }
    puVar10 = puVar10 + 6;
    uVar1 = *puVar10;
    uVar4 = uVar11;
  } while( true );
}



// FUNCTION 144eb5db0 FUN_144eb5db0 body=134 status=ok
// SIG undefined FUN_144eb5db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144eb5db0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
  }
  uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x28))
                    (param_1,uVar2,uVar3,*(longlong *)(param_1 + 0xa8) + 0x1a0);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x220) = uVar2;
  return *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0;
}



// FUNCTION 144eb5e40 FUN_144eb5e40 body=158 status=ok
// SIG undefined FUN_144eb5e40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144eb5e40(undefined8 param_1,short param_2,longlong param_3,ulonglong param_4,int param_5)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar3 = 0;
  if (param_4 != 0) {
    do {
      sVar1 = *(short *)(param_3 + uVar3 * 2);
      if ((param_2 == sVar1) &&
         ((param_5 == 0 || (iVar2 = FUN_144eba8d0(param_1,sVar1,0x20006), iVar2 != 0)))) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_4);
  }
  return 0;
}



// FUNCTION 144eb5ee0 FUN_144eb5ee0 body=276 status=ok
// SIG undefined FUN_144eb5ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb5ee0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144eb5eee;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = param_3;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = local_68;
    local_70 = 0;
    iVar1 = FUN_14527dd60();
    if ((iVar1 == 0) || (iVar1 = FUN_144b9bff0(param_1,local_68,0x40,&local_70), iVar1 == 0))
    goto LAB_144eb5fe7;
  }
  iVar1 = FUN_14527d180(param_1);
  if (iVar1 != 0) {
    local_78 = CONCAT13((undefined1)local_70,(undefined3)local_78);
    local_78 = CONCAT31(local_78._1_3_,0xfe);
    iVar1 = FUN_14527dc30(param_1,&local_78,4);
    if ((((iVar1 != 0) && (iVar1 = FUN_14527dc30(param_1,param_2,local_70), iVar1 != 0)) &&
        (param_4 != 0)) && (iVar1 = FUN_14527dc30(param_1,param_4,param_5), iVar1 != 0)) {
      FUN_14527dc30(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8),
                    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x228) + 4);
    }
  }
LAB_144eb5fe7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 144eb6000 FUN_144eb6000 body=546 status=ok
// SIG undefined FUN_144eb6000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb6000(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *local_res18 [2];
  undefined4 uVar12;
  
  lVar4 = FUN_144babc60(FUN_144eb8700);
  lVar5 = 0;
  if (lVar4 == 0) {
    uVar12 = 0x8d7;
LAB_144eb6043:
    uVar6 = 0x50;
    uVar11 = 0x41;
  }
  else {
    puVar10 = (undefined1 *)*param_2;
    if (1 < (ulonglong)param_2[1]) {
      uVar7 = param_2[1] - 2;
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      puVar10 = puVar10 + 2;
      uVar8 = (ulonglong)(uint)CONCAT11(uVar1,uVar2);
      if (uVar8 <= uVar7) {
        *param_2 = puVar10 + uVar8;
        param_2[1] = uVar7 - uVar8;
        if (CONCAT11(uVar1,uVar2) != 0) {
          do {
            if (uVar8 < 2) {
LAB_144eb6196:
              FUN_144eafc90(param_1,0x32,0x21d,0x9f,"ssl\\statem\\statem_lib.c",0x8e8);
              lVar5 = 0;
              goto LAB_144eb61f2;
            }
            puVar9 = puVar10 + 2;
            uVar7 = (ulonglong)CONCAT11(*puVar10,puVar10[1]);
            if (uVar8 - 2 < uVar7) goto LAB_144eb6196;
            puVar10 = puVar9 + uVar7;
            uVar8 = (uVar8 - 2) - uVar7;
            local_res18[0] = puVar9;
            lVar5 = FUN_144eabc60(0,local_res18);
            if (lVar5 == 0) {
              uVar12 = 0x8ef;
              uVar11 = 0xd;
              goto LAB_144eb61d3;
            }
            if (local_res18[0] != puVar9 + uVar7) {
              uVar12 = 0x8f4;
              uVar11 = 0x83;
              goto LAB_144eb61d3;
            }
            iVar3 = FUN_144bac1c0(lVar4,lVar5);
            if (iVar3 == 0) {
              uVar12 = 0x8fa;
              goto LAB_144eb6043;
            }
          } while (uVar8 != 0);
        }
        FUN_144babe00(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260),FUN_144eabc40);
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x260) = lVar4;
        return 1;
      }
    }
    uVar12 = 0x8dd;
    uVar11 = 0x9f;
LAB_144eb61d3:
    uVar6 = 0x32;
  }
  FUN_144eafc90(param_1,uVar6,0x21d,uVar11,"ssl\\statem\\statem_lib.c",uVar12);
LAB_144eb61f2:
  FUN_144babe00(lVar4,FUN_144eabc40);
  FUN_144eabc40(lVar5);
  return 0;
}



// FUNCTION 144eb6230 FUN_144eb6230 body=85 status=ok
// SIG undefined FUN_144eb6230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eb6230(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar2 = FUN_144b9cea0();
    if (lVar2 != 0) {
      iVar1 = FUN_144babbf0(lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
  lVar2 = FUN_144b9ce80(param_1);
  return lVar2;
}



// FUNCTION 144eb6290 FUN_144eb6290 body=327 status=ok
// SIG undefined FUN_144eb6290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb6290(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res20 [8];
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar5 = 0x144eb62a0;
  iVar1 = FUN_14526eb60(param_3,2);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (iVar1 == 0) {
    FUN_144eafc90(param_1,0x50,0x228,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar6,0x920));
    return 0;
  }
  if (param_2 != 0) {
    iVar4 = 0;
    iVar1 = FUN_144babbf0(param_2);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (0 < iVar1) {
      do {
        lVar3 = FUN_144babc00(param_2,iVar4);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (lVar3 == 0) {
LAB_144eb63af:
          uVar5 = CONCAT44(uVar6,0x932);
          goto LAB_144eb6388;
        }
        iVar1 = FUN_144eabc80(lVar3,0);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (iVar1 < 0) goto LAB_144eb63af;
        iVar2 = FUN_14526ed50(param_3,(longlong)iVar1,local_res20,2);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (iVar2 == 0) goto LAB_144eb63af;
        iVar2 = FUN_144eabc80(lVar3,local_res20);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (iVar2 != iVar1) goto LAB_144eb63af;
        iVar4 = iVar4 + 1;
        iVar1 = FUN_144babbf0(param_2);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      } while (iVar4 < iVar1);
    }
  }
  iVar1 = FUN_14526ea40(param_3);
  if (iVar1 == 0) {
    uVar5 = CONCAT44(uVar6,0x93a);
LAB_144eb6388:
    FUN_144eafc90(param_1,0x50,0x228,0x44,"ssl\\statem\\statem_lib.c",uVar5);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 144eb63e0 FUN_144eb63e0 body=232 status=ok
// SIG undefined FUN_144eb63e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eb63e0(longlong param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  puVar2 = (undefined8 *)FUN_144ea64e0(param_4 + 0x40,"ssl\\statem\\statem_lib.c",0x946);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_144eafc90(param_1,0x50,0x229,0x41,"ssl\\statem\\statem_lib.c",CONCAT44(uVar4,0x94a));
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    uVar1 = *(undefined8 *)(lVar3 + 0xc0);
    *puVar2 = *(undefined8 *)(lVar3 + 0xb8);
    puVar2[1] = uVar1;
    uVar1 = *(undefined8 *)(lVar3 + 0xd0);
    puVar2[2] = *(undefined8 *)(lVar3 + 200);
    puVar2[3] = uVar1;
    lVar3 = *(longlong *)(param_1 + 0xa8);
    uVar1 = *(undefined8 *)(lVar3 + 0xa0);
    puVar2[4] = *(undefined8 *)(lVar3 + 0x98);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)(lVar3 + 0xb0);
    puVar2[6] = *(undefined8 *)(lVar3 + 0xa8);
    puVar2[7] = uVar1;
    memcpy(puVar2 + 8,param_3,param_4);
    lVar3 = param_4 + 0x40;
    *param_2 = puVar2;
  }
  return lVar3;
}



// FUNCTION 144eb64d0 FUN_144eb64d0 body=704 status=ok
// SIG undefined FUN_144eb64d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb64d0(undefined4 *param_1,uint *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_res8 [2];
  longlong local_res18 [2];
  undefined4 *in_stack_ffffffffffffffd0;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144eb64e2;
  pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x22) + 8);
  do {
    uVar2 = *(ulonglong *)(param_1 + 0x26);
    while (uVar2 < 4) {
      in_stack_ffffffffffffffd0 =
           (undefined4 *)((ulonglong)in_stack_ffffffffffffffd0 & 0xffffffff00000000);
      iVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))
                        (param_1,0x16,local_res8,pbVar1 + *(longlong *)(param_1 + 0x26),
                         4 - *(longlong *)(param_1 + 0x26),in_stack_ffffffffffffffd0,local_res18,
                         uVar6);
      if (iVar3 < 1) {
        param_1[10] = 3;
        return 0;
      }
      if (local_res8[0] == 0x14) {
        if (((*(longlong *)(param_1 + 0x26) == 0) && (local_res18[0] == 1)) && (*pbVar1 == 1)) {
          if ((param_1[0x17] == 0) && ((**(uint **)(param_1 + 0x2a) & 0x800) != 0)) {
            return 0;
          }
          *param_2 = 0x101;
          *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x230) = 0x101;
          *(undefined8 *)(param_1 + 0x26) = 0;
          *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x228) = 1;
          return 1;
        }
        uVar5 = 0x498;
        uVar6 = 0x67;
LAB_144eb669a:
        FUN_144eafc90(param_1,10,0x183,uVar6,"ssl\\statem\\statem_lib.c",uVar5);
        return 0;
      }
      if (local_res8[0] != 0x16) {
        uVar5 = 0x4ae;
        uVar6 = 0x85;
        goto LAB_144eb669a;
      }
      *(longlong *)(param_1 + 0x26) = *(longlong *)(param_1 + 0x26) + local_res18[0];
      local_res8[0] = 0x16;
      uVar2 = *(ulonglong *)(param_1 + 0x26);
    }
    if (((param_1[0xe] != 0) || (param_1[0x17] == 1)) ||
       ((*pbVar1 != 0 || (((pbVar1[1] != 0 || (pbVar1[2] != 0)) || (pbVar1[3] != 0)))))) {
      *param_2 = (uint)*pbVar1;
      *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x230) = (uint)*pbVar1;
      iVar3 = FUN_144eb2260(param_1 + 0x20c);
      if (iVar3 == 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x2a) + 0x228) =
             (ulonglong)CONCAT21(CONCAT11(pbVar1[1],pbVar1[2]),pbVar1[3]);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 4;
        *(undefined8 *)(param_1 + 0x26) = 0;
      }
      else {
        lVar4 = FUN_144eb2270(param_1 + 0x20c);
        *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x228) = lVar4 + 4;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8);
        *(undefined8 *)(param_1 + 0x26) = 4;
      }
      *(longlong *)(param_1 + 0x24) = lVar4;
      return 1;
    }
    *(undefined8 *)(param_1 + 0x26) = 0;
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      in_stack_ffffffffffffffd0 = param_1;
      (**(code **)(param_1 + 0x2e))
                (0,*param_1,0x16,pbVar1,4,param_1,*(undefined8 *)(param_1 + 0x30));
    }
  } while( true );
}



// FUNCTION 144eb6790 FUN_144eb6790 body=591 status=ok
// SIG undefined FUN_144eb6790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb6790(undefined4 *param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffffd0;
  undefined8 uVar7;
  
  uVar7 = 0x144eb679e;
  if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) == 0x101) {
    *param_2 = (ulonglong)(uint)param_1[0x26];
    return 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x24);
  for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x228) - *(longlong *)(param_1 + 0x26);
      lVar4 != 0; lVar4 = lVar4 - local_res8) {
    in_stack_ffffffffffffffd0 = in_stack_ffffffffffffffd0 & 0xffffffff00000000;
    iVar1 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))
                      (param_1,0x16,0,*(longlong *)(param_1 + 0x26) + lVar2,lVar4,
                       in_stack_ffffffffffffffd0,&local_res8,uVar7);
    if (iVar1 < 1) {
      param_1[10] = 3;
      goto LAB_144eb68d2;
    }
    *(longlong *)(param_1 + 0x26) = *(longlong *)(param_1 + 0x26) + local_res8;
  }
  if ((**(char **)(*(longlong *)(param_1 + 0x22) + 8) == '\x14') &&
     (iVar1 = FUN_144eb5db0(param_1), iVar1 == 0)) {
LAB_144eb68d2:
    *param_2 = 0;
    return 0;
  }
  iVar1 = FUN_144eb2260(param_1 + 0x20c);
  if (iVar1 == 0) {
    if (((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
           (iVar1 = **(int **)(param_1 + 2), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
         ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) != 4 &&
          (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) != 0x18)))) &&
        ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) != 2 ||
         ((*(ulonglong *)(param_1 + 0x26) < 0x26 ||
          (iVar1 = memcmp(&DAT_149bf5d70,
                          (void *)(*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 6),0x20),
          iVar1 != 0)))))) &&
       (iVar1 = FUN_14527dc30(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
                              *(longlong *)(param_1 + 0x26) + 4), iVar1 == 0)) goto LAB_144eb68d2;
    pcVar6 = *(code **)(param_1 + 0x2e);
    if (pcVar6 == (code *)0x0) goto LAB_144eb69be;
    uVar5 = 0x16;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = *(longlong *)(param_1 + 0x26) + 4;
    uVar3 = *param_1;
  }
  else {
    iVar1 = FUN_14527dc30(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
                          *(undefined8 *)(param_1 + 0x26));
    if (iVar1 == 0) goto LAB_144eb68d2;
    pcVar6 = *(code **)(param_1 + 0x2e);
    if (pcVar6 == (code *)0x0) goto LAB_144eb69be;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = 0;
    lVar2 = *(longlong *)(param_1 + 0x26);
    uVar3 = 2;
  }
  (*pcVar6)(0,uVar3,uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),lVar2,param_1,uVar7);
LAB_144eb69be:
  *param_2 = *(ulonglong *)(param_1 + 0x26);
  return 1;
}



// FUNCTION 144eb69e0 FUN_144eb69e0 body=262 status=ok
// SIG undefined FUN_144eb69e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb69e0(int *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = 1;
  lVar1 = *(longlong *)(param_2 + 8);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    if (lVar1 == 0) goto LAB_144eb6a15;
    uVar5 = 0x1000002d4;
LAB_144eb6a49:
    uVar3 = 0x32;
    uVar4 = 0x67;
  }
  else {
    if (*param_1 == 0x100) {
      if (lVar1 != 2) {
LAB_144eb6a41:
        uVar5 = 0x1000002cd;
        goto LAB_144eb6a49;
      }
    }
    else if (lVar1 != 0) goto LAB_144eb6a41;
LAB_144eb6a15:
    if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) == 0) {
      uVar3 = 10;
      uVar5 = 0x1000002dc;
      uVar4 = 0x85;
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xf0) = 1;
      iVar2 = FUN_144ece370(param_1);
      if (iVar2 != 0) {
        if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) &&
           (FUN_144ecdb00(param_1,1), *param_1 == 0x100)) {
          *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) =
               *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) + 1;
        }
        return 3;
      }
      uVar5 = CONCAT44(uVar3,0x2e3);
      uVar3 = 0x50;
      uVar4 = 0x44;
    }
  }
  FUN_144eafc90(param_1,uVar3,0x16b,uVar4,"ssl\\statem\\statem_lib.c",uVar5);
  return 0;
}



// FUNCTION 144eb6af0 FUN_144eb6af0 body=686 status=ok
// SIG undefined FUN_144eb6af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb6af0(longlong param_1,undefined8 *param_2)

{
  ulonglong _Size;
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x788) != 4) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) &&
       (uVar6 = 1, iVar2 = FUN_144eb7cf0(param_1), iVar2 == 0)) {
      return 0;
    }
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) &&
     ((iVar2 != 0x10000 && (iVar2 = FUN_144eb21f0(param_1 + 0x830), iVar2 != 0)))) {
    uVar5 = CONCAT44(uVar6,0x315);
    uVar4 = 0xb6;
  }
  else {
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) ||
       (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xf0) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xf0) = 0;
      _Size = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x220);
      if (_Size == param_2[1]) {
        iVar2 = FUN_14259f120(*param_2,*(longlong *)(param_1 + 0xa8) + 0x1a0,_Size);
        if (iVar2 == 0) {
          if (_Size < 0x41) {
            lVar1 = *(longlong *)(param_1 + 0xa8);
            if (*(int *)(param_1 + 0x38) == 0) {
              memcpy((void *)(lVar1 + 0x390),(void *)(lVar1 + 0x1a0),_Size);
              *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0) = _Size;
            }
            else {
              memcpy((void *)(lVar1 + 0x348),(void *)(lVar1 + 0x1a0),_Size);
              *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x388) = _Size;
            }
            lVar1 = *(longlong *)(*(int **)(param_1 + 8) + 0x30);
            if ((((*(byte *)(lVar1 + 0x60) & 8) != 0) ||
                (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) {
              return 1;
            }
            if (*(int *)(param_1 + 0x38) == 0) {
              iVar2 = (**(code **)(lVar1 + 0x18))
                                (param_1,param_1 + 0x1b4,param_1 + 0x174,0,local_res8);
              if (iVar2 == 0) {
                return 0;
              }
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))
                                (param_1,0x111);
              if (iVar2 == 0) {
                return 0;
              }
              iVar2 = FUN_145274380(param_1);
              if (iVar2 == 0) {
                return 0;
              }
              return 1;
            }
            if (*(int *)(param_1 + 0x788) == 4) {
              return 1;
            }
            uVar4 = (**(code **)(lVar1 + 0x20))(param_1,0x121);
            if ((int)uVar4 != 0) {
              return 1;
            }
            return uVar4;
          }
          uVar3 = 0x50;
          uVar5 = CONCAT44(uVar6,0x335);
          uVar4 = 0x44;
        }
        else {
          uVar3 = 0x33;
          uVar5 = CONCAT44(uVar6,0x32c);
          uVar4 = 0x95;
        }
      }
      else {
        uVar3 = 0x32;
        uVar5 = CONCAT44(uVar6,0x325);
        uVar4 = 0x6f;
      }
      goto LAB_144eb6b9c;
    }
    uVar5 = CONCAT44(uVar6,0x31c);
    uVar4 = 0x9a;
  }
  uVar3 = 10;
LAB_144eb6b9c:
  FUN_144eafc90(param_1,uVar3,0x16c,uVar4,"ssl\\statem\\statem_lib.c",uVar5);
  return 0;
}



// FUNCTION 144eb6da0 FUN_144eb6da0 body=103 status=ok
// SIG undefined FUN_144eb6da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb6da0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_14526ef00(param_2,1,1);
  if (iVar1 == 0) {
    FUN_144eafc90(param_1,0x50,0x1ab,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x36a));
    return 0;
  }
  return 1;
}



// FUNCTION 144eb6e10 FUN_144eb6e10 body=494 status=ok
// SIG undefined FUN_144eb6e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb6e10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong _Size;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x788) != 4)) {
    *(undefined4 *)(param_1 + 0x70) = 1;
  }
  lVar1 = *(longlong *)(*(int **)(param_1 + 8) + 0x30);
  if ((((((*(byte *)(lVar1 + 0x60) & 8) == 0) && (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2))
       && (iVar2 != 0x10000)) &&
      ((*(int *)(param_1 + 0x38) == 0 && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) == 0))))
     && (uVar6 = 1, uVar3 = (**(code **)(lVar1 + 0x20))(param_1,0x92), (int)uVar3 == 0)) {
    return uVar3;
  }
  plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
  lVar1 = *plVar4;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
  }
  _Size = (**(code **)(*plVar4 + 0x28))(param_1,uVar3,uVar5,*(longlong *)(param_1 + 0xa8) + 0x118);
  if (_Size != 0) {
    *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x198) = _Size;
    iVar2 = FUN_14526ef90(param_2,*(longlong *)(param_1 + 0xa8) + 0x118,_Size);
    if (iVar2 == 0) {
      uVar3 = CONCAT44(uVar6,0x23f);
    }
    else {
      if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
           (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
         (iVar2 = FUN_144b9c160(param_1,"CLIENT_RANDOM",*(longlong *)(param_1 + 0x508) + 0x50,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8)), iVar2 == 0)) {
        return 0;
      }
      if (_Size < 0x41) {
        lVar1 = *(longlong *)(param_1 + 0xa8);
        if (*(int *)(param_1 + 0x38) == 0) {
          memcpy((void *)(lVar1 + 0x348),(void *)(lVar1 + 0x118),_Size);
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x388) = _Size;
        }
        else {
          memcpy((void *)(lVar1 + 0x390),(void *)(lVar1 + 0x118),_Size);
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0) = _Size;
        }
        return 1;
      }
      uVar3 = CONCAT44(uVar6,0x253);
    }
    FUN_144eafc90(param_1,0x50,0x167,0x44,"ssl\\statem\\statem_lib.c",uVar3);
  }
  return 0;
}



// FUNCTION 144eb7000 FUN_144eb7000 body=118 status=ok
// SIG undefined FUN_144eb7000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb7000(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_14526ef00(param_2,(longlong)*(int *)(param_1 + 0x784),1);
  if (iVar1 == 0) {
    FUN_144eafc90(param_1,0x50,0x205,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x267));
    return 0;
  }
  *(undefined4 *)(param_1 + 0x784) = 0xffffffff;
  return 1;
}



// FUNCTION 144eb7080 FUN_144eb7080 body=213 status=ok
// SIG undefined FUN_144eb7080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144eb7080(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = 1;
  iVar3 = FUN_144eb21f0(param_1 + 0x830);
  if (iVar3 != 0) {
    uVar6 = CONCAT44(uVar4,0x279);
    uVar4 = 10;
    uVar5 = 0xb6;
    goto LAB_144eb712e;
  }
  if (param_2[1] == 0) {
LAB_144eb711b:
    uVar6 = CONCAT44(uVar4,0x280);
    uVar4 = 0x32;
  }
  else {
    cVar2 = *(char *)*param_2;
    *param_2 = (char *)*param_2 + 1;
    lVar1 = param_2[1] + -1;
    param_2[1] = lVar1;
    if (lVar1 != 0) goto LAB_144eb711b;
    if (cVar2 == '\0') {
LAB_144eb70fe:
      iVar3 = FUN_144eb91e0(param_1,0);
      return iVar3 != 0;
    }
    if (cVar2 == '\x01') {
      *(undefined4 *)(param_1 + 0x784) = 0;
      goto LAB_144eb70fe;
    }
    uVar6 = CONCAT44(uVar4,0x28b);
    uVar4 = 0x2f;
  }
  uVar5 = 0x7a;
LAB_144eb712e:
  FUN_144eafc90(param_1,uVar4,0x206,uVar5,"ssl\\statem\\statem_lib.c",uVar6);
  return false;
}



// FUNCTION 144eb7160 FUN_144eb7160 body=703 status=ok
// SIG undefined FUN_144eb7160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144eb7160(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  uVar5 = 1;
  iVar1 = *(int *)(param_1 + 0x70);
  if (param_3 != 0) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      uVar5 = 1;
      FUN_144ea7070(*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    iVar4 = FUN_144b9bcd0(param_1);
    if (iVar4 == 0) {
      FUN_144eafc90(param_1,0x50,0x255,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar5,0x423));
      return 0;
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
       (iVar4 = **(int **)(param_1 + 8), 0x303 < iVar4)) && (iVar4 != 0x10000)) &&
     ((*(int *)(param_1 + 0x38) == 0 && (*(int *)(param_1 + 0x788) == 4)))) {
    *(undefined4 *)(param_1 + 0x788) = 1;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x780) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    FUN_14527d7b0(param_1);
    piVar2 = *(int **)(param_1 + 8);
    if (*(int *)(param_1 + 0x38) == 0) {
      if ((((*(byte *)(*(longlong *)(piVar2 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar2)) &&
         (*piVar2 != 0x10000)) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x768) + 0x48) & 1) != 0) {
          FUN_144eb1190(*(longlong *)(param_1 + 0x768),*(undefined8 *)(param_1 + 0x508));
        }
      }
      else {
        FUN_144b9b720(param_1,1);
      }
      if (*(int *)(param_1 + 200) != 0) {
        LOCK();
        piVar2 = (int *)(*(longlong *)(param_1 + 0x768) + 0x8c);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *(code **)(param_1 + 0x30) = FUN_144eafc40;
      LOCK();
      piVar2 = (int *)(*(longlong *)(param_1 + 0x768) + 0x70);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    else {
      if ((((*(byte *)(*(longlong *)(piVar2 + 0x30) + 0x60) & 8) != 0) || (*piVar2 < 0x304)) ||
         (*piVar2 == 0x10000)) {
        FUN_144b9b720(param_1,2);
      }
      LOCK();
      piVar2 = (int *)(*(longlong *)(param_1 + 0x598) + 0x7c);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      *(code **)(param_1 + 0x30) = FUN_144eafc20;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x110) = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10c) = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10e) = 0;
      FUN_144ecbec0(param_1);
    }
  }
  pcVar6 = *(code **)(param_1 + 0x568);
  if ((*(code **)(param_1 + 0x568) == (code *)0x0) &&
     (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108), pcVar6 = (code *)0x0,
     pcVar3 != (code *)0x0)) {
    pcVar6 = pcVar3;
  }
  FUN_144eafd20(param_1,0);
  if ((pcVar6 != (code *)0x0) &&
     (((iVar1 != 0 || ((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0))
      || ((iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304 ||
          (((iVar1 == 0x10000 || (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0)) ||
           (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)))))))) {
    (*pcVar6)(param_1,0x20,1);
  }
  if (param_4 == 0) {
    FUN_144eafd20(param_1,1);
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 144eb7420 FUN_144eb7420 body=852 status=ok
// SIG undefined FUN_144eb7420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb7420(int *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  char *local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  undefined8 local_108 [2];
  undefined1 local_f8 [176];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144eb743a;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar8 = 0;
  local_110 = 0;
  local_120 = 0;
  lVar6 = 0;
  local_128 = 0;
  lVar5 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x2d8);
  local_118 = (char *)0x0;
  if ((lVar1 == 0) || (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x2e0), lVar2 == 0)) {
    local_130 = 0xf4;
LAB_144eb772e:
    uVar7 = 0x44;
LAB_144eb7734:
    local_138 = "ssl\\statem\\statem_lib.c";
    FUN_144eafc90(param_1,0x50,0x1f0,uVar7);
  }
  else {
    pcVar3 = *(char **)(lVar2 + 8);
    if (pcVar3 == (char *)0x0) {
LAB_144eb7719:
      local_130 = 0xfb;
      goto LAB_144eb772e;
    }
    iVar4 = FUN_144ebc990(lVar1,&local_110);
    if (iVar4 == 0) goto LAB_144eb7719;
    lVar6 = FUN_144ba5700();
    lVar5 = lVar8;
    if (lVar6 == 0) {
      local_130 = 0x102;
      uVar7 = 0x41;
      goto LAB_144eb7734;
    }
    iVar4 = FUN_144eb7e80(param_1,local_f8,local_108,&local_118);
    if (iVar4 != 0) {
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 2) != 0) {
        iVar4 = FUN_14526ef00(param_2,*(undefined2 *)(lVar1 + 8),2);
        if (iVar4 == 0) {
          local_130 = 0x10e;
          goto LAB_144eb772e;
        }
      }
      iVar4 = FUN_144ba6830(pcVar3);
      local_128 = (longlong)iVar4;
      lVar5 = FUN_144ea64e0(local_128,"ssl\\statem\\statem_lib.c",0x112);
      if (lVar5 == 0) {
        local_130 = 0x115;
        uVar7 = 0x41;
      }
      else {
        local_138 = pcVar3;
        iVar4 = FUN_144ba6150(lVar6,&local_120,local_110,0);
        if (iVar4 < 1) {
          local_130 = 0x11b;
          uVar7 = 6;
        }
        else if (*(int *)(lVar1 + 0x14) == 0x390) {
          local_138 = (char *)0x0;
          iVar4 = FUN_144bada00(local_120,0xffffffff,0x1001,6);
          if (0 < iVar4) {
            local_138 = (char *)0x0;
            iVar4 = FUN_144bada00(local_120,0x18,0x1002);
            if (0 < iVar4) goto LAB_144eb7606;
          }
          local_130 = 0x124;
          uVar7 = 6;
        }
        else {
LAB_144eb7606:
          if (*param_1 == 0x300) {
            iVar4 = FUN_144ba5c70(lVar6,local_108[0],local_118);
            if (0 < iVar4) {
              iVar4 = FUN_144ba56c0(lVar6,0x1d,*(undefined4 *)(*(longlong *)(param_1 + 0x142) + 8),
                                    *(longlong *)(param_1 + 0x142) + 0x50);
              if (iVar4 != 0) {
                iVar4 = FUN_144ba6180(lVar6,lVar5,&local_128);
                if (0 < iVar4) goto LAB_144eb76a4;
              }
            }
            local_130 = 0x130;
            uVar7 = 6;
          }
          else {
            local_138 = local_118;
            iVar4 = FUN_144ba6030(lVar6,lVar5,&local_128,local_108[0]);
            if (0 < iVar4) {
LAB_144eb76a4:
              if ((*(int *)(lVar1 + 0x14) == 0x32b) || (*(int *)(lVar1 + 0x14) - 0x3d3U < 2)) {
                FUN_144ea73a0(lVar5,0,local_128);
              }
              iVar4 = FUN_14526f090(param_2,lVar5,local_128,2);
              if (iVar4 == 0) {
                local_130 = 0x146;
                goto LAB_144eb772e;
              }
              iVar4 = FUN_14527dd60(param_1,0);
              if (iVar4 != 0) {
                FUN_144ea6530(lVar5,"ssl\\statem\\statem_lib.c",0x150);
                FUN_144ba5800(lVar6);
                goto LAB_144eb7764;
              }
              goto LAB_144eb7749;
            }
            local_130 = 0x135;
            uVar7 = 6;
          }
        }
      }
      goto LAB_144eb7734;
    }
  }
LAB_144eb7749:
  FUN_144ea6530(lVar5,"ssl\\statem\\statem_lib.c",0x154);
  FUN_144ba5800(lVar6);
LAB_144eb7764:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
}



// FUNCTION 144eb7790 FUN_144eb7790 body=1350 status=ok
// SIG undefined FUN_144eb7790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb7790(int *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined1 auStack_148 [32];
  char *local_128;
  undefined4 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [176];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144eb77a6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar9 = 0;
  local_108 = 0;
  local_110 = (char *)0x0;
  lVar6 = FUN_144ba5700();
  local_118 = 0;
  if (lVar6 == 0) {
    local_120 = 0x16d;
    local_128 = "ssl\\statem\\statem_lib.c";
    FUN_144eafc90(param_1,0x50,0x17b,0x41);
    goto LAB_144eb7c85;
  }
  pcVar7 = (char *)FUN_144bb4f60(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x1b8));
  if (pcVar7 == (char *)0x0) {
    local_120 = 0x175;
    uVar10 = 0x50;
    uVar12 = 0x44;
  }
  else {
    lVar8 = FUN_144b9e120(pcVar7,0);
    if (lVar8 == 0) {
      local_120 = 0x17b;
      uVar10 = 0x2f;
      uVar12 = 0xdc;
    }
    else if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 2) == 0) {
      iVar5 = FUN_144ebc930(param_1,pcVar7);
      if (iVar5 != 0) goto LAB_144eb78c5;
      local_120 = 0x18d;
      uVar10 = 0x50;
      uVar12 = 0x44;
    }
    else {
      if ((ulonglong)param_2[1] < 2) {
        local_120 = 0x184;
        uVar12 = 0xf0;
      }
      else {
        puVar3 = (undefined1 *)*param_2;
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        *param_2 = (longlong)(puVar3 + 2);
        param_2[1] = param_2[1] - 2;
        iVar5 = FUN_144ebcb40(param_1,CONCAT11(uVar1,uVar2),pcVar7);
        if (iVar5 < 1) goto LAB_144eb7c85;
LAB_144eb78c5:
        iVar5 = FUN_144ebc990(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x308),&local_108);
        if (iVar5 == 0) {
          local_120 = 0x193;
          uVar10 = 0x50;
          uVar12 = 0x44;
          goto LAB_144eb7c61;
        }
        if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 2) == 0) &&
           (((param_2[1] == 0x40 &&
             ((iVar5 = FUN_144ba6750(pcVar7), iVar5 == 0x32b ||
              (iVar5 = FUN_144ba6750(pcVar7), iVar5 == 0x3d3)))) ||
            ((param_2[1] == 0x80 && (iVar5 = FUN_144ba6750(pcVar7), iVar5 == 0x3d4)))))) {
          uVar11 = (ulonglong)*(uint *)(param_2 + 1);
LAB_144eb79ab:
          iVar5 = FUN_144ba6830(pcVar7);
          if (((iVar5 < (int)uVar11) || (iVar5 < (int)param_2[1])) ||
             (uVar4 = param_2[1], uVar4 == 0)) {
            local_120 = 0x1b6;
            local_128 = "ssl\\statem\\statem_lib.c";
            FUN_144eafc90(param_1,0x32,0x17b);
            lVar9 = 0;
            goto LAB_144eb7c85;
          }
          if (uVar11 <= uVar4) {
            lVar8 = *param_2;
            param_2[1] = uVar4 - uVar11;
            *param_2 = lVar8 + uVar11;
            iVar5 = FUN_144eb7e80(param_1,local_f8,&local_100,&local_110);
            if (iVar5 == 0) goto LAB_144eb7c85;
            local_128 = pcVar7;
            iVar5 = FUN_144ba6360(lVar6,&local_118,local_108,0);
            if (iVar5 < 1) {
              uVar10 = 0x50;
              local_120 = 0x1ca;
              uVar12 = 6;
              goto LAB_144eb7c61;
            }
            iVar5 = FUN_144ba6750(pcVar7);
            if ((iVar5 == 0x32b) || (iVar5 - 0x3d3U < 2)) {
              lVar9 = FUN_144ea64e0(uVar11,"ssl\\statem\\statem_lib.c",0x1d3);
              if (lVar9 == 0) {
                local_120 = 0x1d5;
                uVar10 = 0x50;
                uVar12 = 0x41;
                goto LAB_144eb7c61;
              }
              FUN_144ea73a0(lVar9,lVar8,uVar11);
              lVar8 = lVar9;
            }
            if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x308) == 0) ||
               (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x308) + 0x14) != 0x390)) {
LAB_144eb7b19:
              if (*param_1 == 0x300) {
                iVar5 = FUN_144ba5c70(lVar6,local_100,local_110);
                if ((iVar5 < 1) ||
                   (iVar5 = FUN_144ba56c0(lVar6,0x1d,
                                          *(undefined4 *)(*(longlong *)(param_1 + 0x142) + 8),
                                          *(longlong *)(param_1 + 0x142) + 0x50), iVar5 == 0)) {
                  uVar10 = 0x50;
                  local_120 = 0x1ed;
                  uVar12 = 6;
                }
                else {
                  iVar5 = FUN_144ba6390(lVar6,lVar8,uVar11);
                  if (0 < iVar5) goto LAB_144eb7c85;
                  uVar10 = 0x33;
                  local_120 = 0x1f2;
                  uVar12 = 0x7b;
                }
              }
              else {
                local_128 = local_110;
                iVar5 = FUN_144ba60c0(lVar6,lVar8,uVar11,local_100);
                if (0 < iVar5) goto LAB_144eb7c85;
                uVar10 = 0x33;
                local_120 = 0x1f9;
                uVar12 = 0x7b;
              }
            }
            else {
              local_128 = (char *)0x0;
              iVar5 = FUN_144bada00(local_118,0xffffffff,0x1001,6);
              if (0 < iVar5) {
                local_128 = (char *)0x0;
                iVar5 = FUN_144bada00(local_118,0x18,0x1002,0xffffffff);
                if (0 < iVar5) goto LAB_144eb7b19;
              }
              uVar10 = 0x50;
              local_120 = 0x1e3;
              uVar12 = 6;
            }
            goto LAB_144eb7c61;
          }
          local_120 = 0x1bb;
        }
        else {
          if (1 < (ulonglong)param_2[1]) {
            puVar3 = (undefined1 *)*param_2;
            uVar11 = (ulonglong)CONCAT11(*puVar3,puVar3[1]);
            *param_2 = (longlong)(puVar3 + 2);
            param_2[1] = param_2[1] - 2;
            goto LAB_144eb79ab;
          }
          local_120 = 0x1ae;
        }
        uVar12 = 0x9f;
      }
      uVar10 = 0x32;
    }
  }
LAB_144eb7c61:
  local_128 = "ssl\\statem\\statem_lib.c";
  FUN_144eafc90(param_1,uVar10,0x17b,uVar12);
LAB_144eb7c85:
  FUN_144b9e7b0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0xe0));
  *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0xe0) = 0;
  FUN_144ba5800(lVar6);
  FUN_144ea6530(lVar9,"ssl\\statem\\statem_lib.c",0x20f);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
}



// FUNCTION 144eb7cf0 FUN_144eb7cf0 body=223 status=ok
// SIG undefined FUN_144eb7cf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb7cf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    return 1;
  }
  iVar1 = FUN_14527dd60(param_1,1);
  if (iVar1 != 0) {
    lVar2 = FUN_144ba5700();
    *(longlong *)(param_1 + 0x7a8) = lVar2;
    if (lVar2 != 0) {
      iVar1 = FUN_144ba5840(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
      if (iVar1 != 0) {
        return 1;
      }
      FUN_144eafc90(param_1,0x50,0x26a,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar3,0x96c));
      FUN_144ba5800(*(undefined8 *)(param_1 + 0x7a8));
      *(undefined8 *)(param_1 + 0x7a8) = 0;
      return 0;
    }
    FUN_144eafc90(param_1,0x50,0x26a,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar3,0x965));
  }
  return 0;
}



// FUNCTION 144eb7dd0 FUN_144eb7dd0 body=163 status=ok
// SIG undefined FUN_144eb7dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb7dd0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(param_1 + 0x7a8) == 0) {
    FUN_144eafc90(param_1,0x50,0x269,0x44,"ssl\\statem\\statem_lib.c",0x10000097e);
    return 0;
  }
  iVar1 = FUN_144ba5840(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  if (iVar1 == 0) {
    FUN_144eafc90(param_1,0x50,0x269,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x985));
    return 0;
  }
  return 1;
}



// FUNCTION 144eb7e80 FUN_144eb7e80 body=416 status=ok
// SIG undefined FUN_144eb7e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb7e80(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong local_res8;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    *param_2 = 0x2020202020202020;
    param_2[1] = 0x2020202020202020;
    param_2[2] = 0x2020202020202020;
    param_2[3] = 0x2020202020202020;
    param_2[4] = 0x2020202020202020;
    param_2[5] = 0x2020202020202020;
    param_2[6] = 0x2020202020202020;
    param_2[7] = 0x2020202020202020;
    if (*(int *)(param_1 + 0x5c) - 0x27U < 2) {
      pcVar3 = "TLS 1.3, server CertificateVerify";
      do {
        cVar1 = *pcVar3;
        *(char *)((longlong)(param_2 + -0x2937eb9c) + (longlong)pcVar3) = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar3 = "TLS 1.3, client CertificateVerify";
      do {
        cVar1 = *pcVar3;
        *(char *)((longlong)(param_2 + -0x2937eba1) + (longlong)pcVar3) = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    if ((*(int *)(param_1 + 0x5c) == 0x27) || (*(int *)(param_1 + 0x5c) == 0x1d)) {
      memcpy((void *)((longlong)param_2 + 0x62),(void *)(param_1 + 0x490),
             *(size_t *)(param_1 + 0x4d0));
      local_res8 = *(longlong *)(param_1 + 0x4d0) + 0x62;
      *param_3 = param_2;
    }
    else {
      iVar2 = FUN_144b9bff0(param_1,(longlong)param_2 + 0x62,0x40,&local_res8);
      if (iVar2 == 0) {
        return 0;
      }
      local_res8 = local_res8 + 0x62;
      *param_3 = param_2;
    }
  }
  else {
    iVar2 = FUN_144b9efc0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,param_3);
    if (iVar2 < 1) {
      FUN_144eafc90(param_1,0x50,0x24c,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar4,0xdd));
      return 0;
    }
    local_res8 = (longlong)iVar2;
  }
  *param_4 = local_res8;
  return 1;
}



// FUNCTION 144eb8020 FUN_144eb8020 body=266 status=ok
// SIG undefined FUN_144eb8020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb8020(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x144eb8040;
  iVar1 = FUN_144bb5d70(param_3,0);
  if (iVar1 < 0) {
    uVar4 = 0x37a;
    uVar3 = 7;
  }
  else {
    iVar2 = FUN_14526ed50(param_2,(longlong)iVar1,local_18,3);
    if ((iVar2 != 0) && (iVar2 = FUN_144bb5d70(param_3,local_18), iVar2 == iVar1)) {
      if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         (((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)) &&
          (iVar1 = FUN_145270c40(param_1,param_2,0x1000,param_3,(longlong)param_4), iVar1 == 0)))) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x380;
    uVar3 = 0x44;
  }
  FUN_144eafc90(param_1,0x50,0x1ed,uVar3,"ssl\\statem\\statem_lib.c",uVar4);
  return 0;
}



// FUNCTION 144eb8130 FUN_144eb8130 body=585 status=ok
// SIG undefined FUN_144eb8130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb8130(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = 1;
  uVar9 = 1;
  if ((param_3 != (longlong *)0x0) && (lVar1 = *param_3, lVar1 != 0)) {
    lVar3 = param_3[2];
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0xf8);
    }
    if ((((*(byte *)(param_1 + 0x5d0) & 8) == 0) && (lVar3 == 0)) &&
       ((lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1c8), lVar7 != 0 ||
        (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20), lVar7 != 0)))) {
      lVar3 = FUN_144baf720();
      if (lVar3 == 0) {
        uVar4 = CONCAT44(uVar10,0x3b0);
        iVar8 = 0x41;
      }
      else {
        iVar8 = FUN_144baf7b0(lVar3,lVar7,lVar1,0);
        if (iVar8 == 0) {
          FUN_144baf770();
          iVar8 = 0xb;
          uVar4 = CONCAT44(uVar10,0x3b6);
        }
        else {
          FUN_144bb0090(lVar3);
          FUN_144ba26f0();
          uVar4 = FUN_144bafb90(lVar3);
          iVar8 = FUN_144ebbfa0(param_1,uVar4,0,0);
          if (iVar8 == 1) {
            iVar8 = FUN_144babbf0(uVar4);
            iVar6 = 0;
            if (0 < iVar8) {
              do {
                uVar5 = FUN_144babc00(uVar4,iVar6);
                iVar2 = FUN_144eb8020(param_1,param_2,uVar5,iVar6);
                if (iVar2 == 0) {
                  FUN_144baf770(lVar3);
                  return 0;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar8);
            }
            FUN_144baf770(lVar3);
            return 1;
          }
          FUN_144baf770(lVar3);
          uVar4 = CONCAT44(uVar10,0x3cc);
        }
      }
    }
    else {
      iVar8 = FUN_144ebbfa0(param_1,lVar3,lVar1,0);
      if (iVar8 == 1) {
        iVar8 = FUN_144eb8020(param_1,param_2,lVar1,0);
        if (iVar8 == 0) {
          return 0;
        }
        iVar6 = 0;
        iVar8 = FUN_144babbf0(lVar3);
        if (0 < iVar8) {
          do {
            uVar4 = FUN_144babc00(lVar3,iVar6);
            iVar6 = iVar6 + 1;
            iVar8 = FUN_144eb8020(param_1,param_2,uVar4,iVar6);
            if (iVar8 == 0) {
              return 0;
            }
            iVar8 = FUN_144babbf0(lVar3);
          } while (iVar6 < iVar8);
        }
        return 1;
      }
      uVar4 = CONCAT44(uVar9,0x3dd);
    }
    FUN_144eafc90(param_1,0x50,0x13c,iVar8,"ssl\\statem\\statem_lib.c",uVar4);
    return 0;
  }
  return 1;
}



// FUNCTION 144eb8380 FUN_144eb8380 body=80 status=ok
// SIG undefined FUN_144eb8380(void)

undefined8 FUN_144eb8380(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 == param_3) {
    return 0;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
    uVar1 = 1;
    if (param_2 < param_3) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  if (param_2 == 0x100) {
    param_2 = 0xff00;
  }
  if (param_3 == 0x100) {
    param_3 = 0xff00;
  }
  uVar1 = 1;
  if (param_3 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144eb83d0 FUN_144eb83d0 body=317 status=ok
// SIG undefined FUN_144eb83d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb83d0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_2;
  iVar2 = *(int *)(param_1 + 0x5d4);
  if ((iVar2 != 0) && (iVar3 != iVar2)) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      iVar4 = 1;
      if (iVar3 < iVar2) {
        iVar4 = -1;
      }
    }
    else {
      if (iVar2 == 0x100) {
        iVar2 = 0xff00;
      }
      iVar1 = iVar3;
      if (iVar3 == 0x100) {
        iVar1 = 0xff00;
      }
      iVar4 = 1;
      if (iVar2 < iVar1) {
        iVar4 = -1;
      }
    }
    if (iVar4 < 0) {
      return 0x18c;
    }
  }
  iVar2 = FUN_144b9dff0(param_1,9,0,iVar3,0,0x144eb83e5);
  if (iVar2 == 0) {
    return 0x18c;
  }
  if ((*(int *)(param_1 + 0x5d8) != 0) && (iVar3 = FUN_144eb8380(param_1,iVar3), 0 < iVar3)) {
    return 0xa6;
  }
  if ((param_2[2] & *(uint *)(param_1 + 0x5cc)) != 0) {
    return 0x102;
  }
  if (((*(byte *)(param_2 + 1) & 2) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0)) {
    return 0x9e;
  }
  return 0;
}



// FUNCTION 144eb8510 FUN_144eb8510 body=306 status=ok
// SIG undefined FUN_144eb8510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb8510(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + 0x598) == 0) || (*(longlong *)(param_1 + 0x768) == 0)) {
    return 0;
  }
  if ((((*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x1f8) == 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x768) + 0x1f8) == 0)) &&
      (*(longlong *)(param_1 + 0x580) == 0)) &&
     ((*(longlong *)(param_1 + 0x588) == 0 &&
      (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1b8) == 0)))) {
    uVar5 = 0;
    lVar6 = 0;
    do {
      if (((uVar5 != 2) && (2 < uVar5 - 4)) &&
         ((uVar5 < 9 &&
          ((lVar3 = *(longlong *)(param_1 + 0x488), *(longlong *)(lVar6 + 0x20 + lVar3) != 0 &&
           (*(longlong *)(lVar6 + 0x28 + lVar3) != 0)))))) {
        if (uVar5 != 3) {
          return 1;
        }
        lVar3 = FUN_144ba6cd0(*(undefined8 *)(lVar3 + 0xa0));
        if (lVar3 != 0) {
          uVar4 = FUN_144ed31a0(lVar3);
          uVar1 = FUN_144efc1f0(uVar4);
          iVar2 = FUN_144ebca90(param_1,uVar1);
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((int)uVar5 < 9);
    return 0;
  }
  return 1;
}



// FUNCTION 144eb8650 FUN_144eb8650 body=166 status=ok
// SIG undefined FUN_144eb8650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb8650(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 == 0x303) {
    iVar1 = FUN_144eb5170(param_1,0x304,0);
    if (iVar1 != 0) {
      *param_3 = 1;
      return;
    }
  }
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) &&
     (param_2 < 0x303)) {
    iVar1 = FUN_144eb5170(param_1,0x303,0);
    if (iVar1 != 0) {
      *param_3 = 2;
      return;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 144eb8700 FUN_144eb8700 body=28 status=ok
// SIG undefined FUN_144eb8700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb8700(undefined8 *param_1,undefined8 *param_2)

{
  FUN_144bb54b0(*param_1,*param_2);
  return;
}



// FUNCTION 144eb8720 FUN_144eb8720 body=191 status=ok
// SIG undefined FUN_144eb8720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eb8720(longlong param_1)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  undefined4 uVar2;
  
  *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1e0) =
       *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  uVar2 = 0;
  iVar1 = FUN_144ea3dd0(*(undefined8 *)(param_1 + 0x508),&local_res8,local_res10,0,0,0,0,0x144eb872c
                       );
  if (iVar1 == 0) {
    FUN_144eafc90(param_1,0x50,0x1b9,0x8a,"ssl\\tls13_enc.c",CONCAT44(uVar2,0x15f));
    return 0;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278) = local_res8;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x280) = local_res10[0];
  return 1;
}



// FUNCTION 144eb87e0 FUN_144eb87e0 body=497 status=ok
// SIG undefined FUN_144eb87e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb87e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8 [2];
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144eb87fc;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar3 = FUN_144ea4500();
  lVar4 = FUN_144ba5700();
  iVar2 = FUN_144b9bff0(param_1,local_78,0x40,local_c8);
  uVar1 = local_c8[0];
  pcVar6 = (char *)0x0;
  if (iVar2 == 0) goto LAB_144eb89ae;
  if (param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x40)) {
    lVar7 = param_1 + 0x274;
LAB_144eb8918:
    pcVar6 = (char *)FUN_144ba7260(0x357,0,lVar7,local_c8[0]);
  }
  else {
    if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
      lVar7 = param_1 + 0x234;
      goto LAB_144eb8918;
    }
    uVar5 = FUN_144ea4500(param_1);
    local_d0 = 1;
    local_e0 = local_b8;
    local_d8 = uVar1;
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = (char *)0x8;
    iVar2 = FUN_144eb9330(param_1,uVar5,param_1 + 0x334,"finished");
    pcVar6 = (char *)0x0;
    if (iVar2 == 0) goto LAB_144eb89ae;
    pcVar6 = (char *)FUN_144ba7260(0x357,0,local_b8,local_c8[0]);
    FUN_14259f0c0(local_b8,0x40);
  }
  if ((((pcVar6 == (char *)0x0) || (lVar4 == 0)) ||
      (local_f8 = pcVar6, iVar2 = FUN_144ba6150(lVar4,0,uVar3,0), iVar2 < 1)) ||
     ((iVar2 = FUN_144ba5c70(lVar4,local_78,local_c8[0]), iVar2 < 1 ||
      (iVar2 = FUN_144ba6180(lVar4,param_4,local_c8), iVar2 < 1)))) {
    local_f0 = CONCAT44(local_f0._4_4_,0x148);
    local_f8 = "ssl\\tls13_enc.c";
    FUN_144eafc90(param_1,0x50,0x25d,0x44);
  }
LAB_144eb89ae:
  FUN_144ba6e60(pcVar6);
  FUN_144ba5800(lVar4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_118);
}



// FUNCTION 144eb89f0 FUN_144eb89f0 body=2012 status=ok
// SIG undefined FUN_144eb89f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb89f0(longlong param_1,byte param_2)

{
  char *_Size;
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_188 [32];
  char *local_168;
  undefined1 *local_160;
  char *local_158;
  longlong local_150;
  char *local_148;
  longlong local_140;
  undefined8 local_138;
  char *local_128;
  char *local_120;
  int local_118;
  uint local_114;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  char *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8 [2];
  undefined1 local_c8 [64];
  char local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_110 = local_c8;
  local_f8 = 0;
  local_f0 = (char *)0x0;
  local_128 = (char *)0x0;
  local_100 = 0;
  local_108 = 0;
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    if (*(longlong *)(param_1 + 0x468) == 0) {
      lVar7 = FUN_144ba50b0();
      *(longlong *)(param_1 + 0x468) = lVar7;
      if (lVar7 == 0) {
        local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1f1);
        goto LAB_144eb8a90;
      }
    }
    else {
      FUN_144ba50e0();
    }
    local_e8 = *(undefined8 *)(param_1 + 0x468);
    local_e0 = param_1 + 0x470;
    FUN_144eb2250(param_1 + 0x830);
  }
  else {
    if (*(longlong *)(param_1 + 0x438) == 0) {
      lVar7 = FUN_144ba50b0();
      *(longlong *)(param_1 + 0x438) = lVar7;
      if (lVar7 == 0) {
        local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1e1);
LAB_144eb8a90:
        local_168 = "ssl\\tls13_enc.c";
        FUN_144eafc90(param_1,0x50,0x1b8,0x41);
        goto LAB_144eb91b0;
      }
    }
    else {
      FUN_144ba50e0();
    }
    local_e8 = *(undefined8 *)(param_1 + 0x438);
    local_e0 = param_1 + 0x440;
    FUN_144eb2240(param_1 + 0x830);
  }
  pcVar8 = "s hs traffic";
  if (((param_2 & 0x12) == 0x12) || ((param_2 & 0x21) == 0x21)) {
    if ((param_2 & 0x40) == 0) {
      if (-1 < (char)param_2) {
        pcVar8 = "c ap traffic";
        local_120 = "CLIENT_TRAFFIC_SECRET_0";
        local_110 = (undefined1 *)(param_1 + 0x2b4);
        goto LAB_144eb8eea;
      }
      local_f8 = param_1 + 0x234;
      pcVar6 = (char *)(param_1 + 0x174);
      uVar4 = FUN_144ea4500(param_1);
      iVar2 = FUN_144ba3cd0(uVar4);
      local_f0 = (char *)(longlong)iVar2;
      pcVar8 = "c hs traffic";
      local_120 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
      local_110 = (undefined1 *)(param_1 + 0x2f4);
      goto LAB_144eb8ef1;
    }
    lVar7 = FUN_144eb0bb0(*(undefined8 *)(param_1 + 0x508));
    pcVar6 = (char *)(param_1 + 0x134);
    pcVar8 = "c e traffic";
    local_120 = "CLIENT_EARLY_TRAFFIC_SECRET";
    local_118 = FUN_144b9efc0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,local_d8);
    if (local_118 < 1) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x20d);
      local_168 = "ssl\\tls13_enc.c";
      FUN_144eafc90(param_1,0x50,0x1b8);
      goto LAB_144eb91b0;
    }
    if (((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x1710) != 0)) &&
       (*(int *)(*(longlong *)(param_1 + 0x508) + 0x228) == 0)) {
      if ((*(longlong *)(param_1 + 0x510) == 0) ||
         (*(int *)(param_1 + 0x1710) != *(int *)(*(longlong *)(param_1 + 0x510) + 0x228))) {
        local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x21e);
        local_168 = "ssl\\tls13_enc.c";
        FUN_144eafc90(param_1,0x50,0x1b8,0x44);
        goto LAB_144eb91b0;
      }
      lVar7 = FUN_144eb0bb0();
    }
    if (lVar7 == 0) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x225);
      local_168 = "ssl\\tls13_enc.c";
      FUN_144eafc90(param_1,0x50,0x1b8,0xdb);
      goto LAB_144eb91b0;
    }
    lVar5 = FUN_144ba5700();
    if (lVar5 == 0) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x231);
      local_168 = "ssl\\tls13_enc.c";
      FUN_144eafc90(param_1,0x50,0x1b8,0x41);
      goto LAB_144eb91b0;
    }
    uVar3 = FUN_144ea3250(lVar7);
    uVar4 = FUN_144ea8ee0(uVar3);
    local_108 = FUN_144baaaf0(uVar4);
    lVar7 = FUN_144ea44e0(*(undefined4 *)(lVar7 + 0x40));
    local_100 = lVar7;
    if (((lVar7 == 0) || (iVar2 = FUN_144ba5a20(lVar5,lVar7,0), iVar2 == 0)) ||
       ((iVar2 = FUN_144ba5c70(lVar5,local_d8[0],(longlong)local_118), iVar2 == 0 ||
        (iVar2 = FUN_144ba5ca0(lVar5,local_c8,&local_114), iVar2 == 0)))) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x23a);
      local_168 = "ssl\\tls13_enc.c";
      FUN_144eafc90(param_1,0x50,0x1b8,0x44);
      FUN_144ba5800(lVar5);
      goto LAB_144eb91b0;
    }
    local_128 = (char *)(ulonglong)local_114;
    FUN_144ba5800(lVar5);
    local_140 = CONCAT44(local_140._4_4_,1);
    local_148 = local_128;
    local_158 = local_128;
    local_160 = local_c8;
    local_168 = (char *)0xc;
    local_150 = param_1 + 0x3f4;
    iVar2 = FUN_144eb9330(param_1,lVar7,pcVar6,"e exp master");
    if (iVar2 == 0) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x248);
      local_168 = "ssl\\tls13_enc.c";
      FUN_144eafc90(param_1,0x50,0x1b8,0x44);
      goto LAB_144eb91b0;
    }
    iVar2 = FUN_144b9c160(param_1,"EARLY_EXPORTER_SECRET",param_1 + 0x3f4,local_128);
    if (iVar2 == 0) goto LAB_144eb91b0;
    lVar7 = 0xb;
  }
  else {
    if ((char)param_2 < '\0') {
      local_f8 = param_1 + 0x274;
      pcVar6 = (char *)(param_1 + 0x174);
      uVar4 = FUN_144ea4500(param_1);
      iVar2 = FUN_144ba3cd0(uVar4);
      local_f0 = (char *)(longlong)iVar2;
      local_120 = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
    }
    else {
      pcVar8 = "s ap traffic";
      local_120 = "SERVER_TRAFFIC_SECRET_0";
LAB_144eb8eea:
      pcVar6 = (char *)(param_1 + 0x1b4);
    }
LAB_144eb8ef1:
    lVar7 = 0xc;
  }
  if ((param_2 & 0x40) == 0) {
    local_100 = FUN_144ea4500(param_1);
    local_108 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278);
    iVar2 = FUN_14527dd60(param_1,1);
    if ((iVar2 == 0) || (iVar2 = FUN_144b9bff0(param_1,local_c8,0x40,&local_128), iVar2 == 0))
    goto LAB_144eb91b0;
  }
  _Size = local_128;
  if (pcVar8 == "s ap traffic") {
    memcpy((void *)(param_1 + 0x2b4),local_c8,(size_t)local_128);
  }
  if (pcVar8 == "s hs traffic") {
    memcpy((void *)(param_1 + 0x2f4),local_c8,(size_t)_Size);
  }
  if (pcVar8 == "c ap traffic") {
    uVar4 = FUN_144ea4500(param_1);
    local_140 = CONCAT44(local_140._4_4_,1);
    local_148 = local_128;
    local_158 = local_128;
    local_160 = local_c8;
    local_168 = (char *)0xa;
    local_150 = param_1 + 500;
    iVar2 = FUN_144eb9330(param_1,uVar4,pcVar6,"res master");
    if (iVar2 == 0) goto LAB_144eb91b0;
  }
  puVar1 = local_110;
  local_138 = local_e8;
  local_140 = local_e0;
  local_160 = local_110;
  local_168 = pcVar6;
  local_158 = pcVar8;
  local_150 = lVar7;
  local_148 = local_88;
  iVar2 = FUN_144eb9df0(param_1,param_2 & 2,local_100,local_108);
  if (iVar2 != 0) {
    if (pcVar8 == "s ap traffic") {
      memcpy((void *)(param_1 + 0x374),local_88,(size_t)local_128);
      uVar4 = FUN_144ea4500(param_1);
      local_140 = CONCAT44(local_140._4_4_,1);
      local_148 = local_128;
      local_158 = local_128;
      local_160 = puVar1;
      local_168 = (char *)0xa;
      local_150 = param_1 + 0x3b4;
      iVar2 = FUN_144eb9330(param_1,uVar4,pcVar6,"exp master");
      if ((iVar2 == 0) ||
         (iVar2 = FUN_144b9c160(param_1,"EXPORTER_SECRET",param_1 + 0x3b4,local_128), iVar2 == 0))
      goto LAB_144eb91b0;
    }
    else if (pcVar8 == "c ap traffic") {
      memcpy((void *)(param_1 + 0x334),local_88,(size_t)local_128);
    }
    iVar2 = FUN_144b9c160(param_1,local_120,local_88,local_128);
    lVar7 = local_f8;
    if (iVar2 != 0) {
      if (local_f8 != 0) {
        uVar4 = FUN_144ea4500(param_1);
        local_140 = CONCAT44(local_140._4_4_,1);
        local_148 = local_f0;
        local_150 = lVar7;
        local_158 = (char *)0x0;
        local_160 = (undefined1 *)0x0;
        local_168 = (char *)0x8;
        iVar2 = FUN_144eb9330(param_1,uVar4,local_88,"finished");
        if (iVar2 == 0) goto LAB_144eb91b0;
      }
      if ((*(int *)(param_1 + 0x38) == 0) && (pcVar8 == "c e traffic")) {
        *(undefined4 *)(param_1 + 0x7c) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
    }
  }
LAB_144eb91b0:
  FUN_14259f0c0(local_88,0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_188);
}



// FUNCTION 144eb91e0 FUN_144eb91e0 body=300 status=ok
// SIG undefined FUN_144eb91e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb91e0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  void *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144eb91fa;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = FUN_144ea4500();
  iVar2 = FUN_144ba3cd0(uVar4);
  lVar7 = 0x334;
  if (*(int *)(param_1 + 0x38) == param_2) {
    lVar7 = 0x374;
  }
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x438);
    FUN_144eb2240(param_1 + 0x830);
    lVar5 = 0x440;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x468);
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_144eb2250();
    lVar5 = 0x470;
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  uVar6 = FUN_144ea4500(param_1);
  local_a8 = local_88;
  local_b0 = 0xb;
  local_b8 = "traffic upd";
  local_c0 = 0;
  local_c8 = (void *)(lVar7 + param_1);
  local_a0 = param_1 + lVar5;
  local_98 = uVar4;
  iVar3 = FUN_144eb9df0(param_1,param_2,uVar6,*(undefined8 *)(lVar1 + 0x278));
  if (iVar3 != 0) {
    memcpy((void *)(lVar7 + param_1),local_88,(longlong)iVar2);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  FUN_14259f0c0(local_88,0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144eb9330 FUN_144eb9330 body=948 status=ok
// SIG undefined FUN_144eb9330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb9330(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,int param_10)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_218 [32];
  char *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0 [2];
  undefined1 local_1d8 [48];
  undefined1 local_1a8 [336];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1e8 = param_3;
  lVar4 = FUN_144ed1550(0x40c,0);
  if (lVar4 == 0) goto LAB_144eb96d4;
  if (0xf9 < param_5) {
    if (param_10 == 0) {
      local_1f8 = (char *)CONCAT44(local_1f8._4_4_,0x40);
      FUN_144ba24f0(0x14,0x231,0x16f);
      FUN_144ed16b0(lVar4);
    }
    else {
      local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,0x3a);
      local_1f8 = "ssl\\tls13_enc.c";
      FUN_144eafc90(param_1,0x50,0x231,0x44);
      FUN_144ed16b0(lVar4);
    }
    goto LAB_144eb96d4;
  }
  uVar2 = FUN_144ba3cd0(param_2);
  iVar3 = FUN_14526e9b0(local_1d8,local_1a8,0x143,0);
  if (((((iVar3 != 0) && (iVar3 = FUN_14526ef00(local_1d8,param_9,2), iVar3 != 0)) &&
       (iVar3 = FUN_14526eb60(local_1d8,1), iVar3 != 0)) &&
      ((iVar3 = FUN_14526ef90(local_1d8,"tls13 ",6), iVar3 != 0 &&
       (iVar3 = FUN_14526ef90(local_1d8,param_4,param_5), iVar3 != 0)))) &&
     (iVar3 = FUN_14526ea40(local_1d8), iVar3 != 0)) {
    bVar1 = false;
    if (param_6 == 0) {
      param_7 = 0;
    }
    iVar3 = FUN_14526f090(local_1d8,param_6,param_7,1);
    if (((iVar3 != 0) && (iVar3 = FUN_14526f120(local_1d8,local_1e0), iVar3 != 0)) &&
       (iVar3 = FUN_14526ea70(local_1d8), iVar3 != 0)) {
      iVar3 = FUN_144ed2580(lVar4);
      if (iVar3 < 1) {
LAB_144eb95ec:
        bVar1 = true;
      }
      else {
        local_1f0 = (undefined1 *)0x0;
        local_1f8 = (char *)CONCAT44(local_1f8._4_4_,2);
        iVar3 = FUN_144ed1710(lVar4,0xffffffff,0x400,0x1007);
        if (iVar3 < 1) goto LAB_144eb95ec;
        local_1f8 = (char *)((ulonglong)local_1f8 & 0xffffffff00000000);
        local_1f0 = param_2;
        iVar3 = FUN_144ed1710(lVar4,0xffffffff,0x400,0x1003);
        if (iVar3 < 1) goto LAB_144eb95ec;
        local_1f0 = local_1e8;
        local_1f8 = (char *)CONCAT44(local_1f8._4_4_,uVar2);
        iVar3 = FUN_144ed1710(lVar4,0xffffffff,0x400,0x1005);
        if (iVar3 < 1) goto LAB_144eb95ec;
        local_1f0 = local_1a8;
        local_1f8 = (char *)CONCAT44(local_1f8._4_4_,local_1e0[0]);
        iVar3 = FUN_144ed1710(lVar4,0xffffffff,0x400,0x1006);
        if ((iVar3 < 1) || (iVar3 = FUN_144ed2820(lVar4,param_8,&param_9), iVar3 < 1))
        goto LAB_144eb95ec;
      }
      FUN_144ed16b0(lVar4);
      if (bVar1) {
        if (param_10 == 0) {
          local_1f8 = (char *)CONCAT44(local_1f8._4_4_,0x6a);
          FUN_144ba24f0(0x14,0x231,0x44);
        }
        else {
          local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,0x68);
          local_1f8 = "ssl\\tls13_enc.c";
          FUN_144eafc90(param_1,0x50,0x231,0x44);
        }
      }
      goto LAB_144eb96d4;
    }
  }
  FUN_144ed16b0(lVar4);
  FUN_14526f190(local_1d8);
  if (param_10 == 0) {
    local_1f8 = (char *)CONCAT44(local_1f8._4_4_,0x57);
    FUN_144ba24f0(0x14,0x231,0x44);
  }
  else {
    local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,0x55);
    local_1f8 = "ssl\\tls13_enc.c";
    FUN_144eafc90(param_1,0x50,0x231,0x44);
  }
LAB_144eb96d4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_218);
}



// FUNCTION 144eb9700 FUN_144eb9700 body=77 status=ok
// SIG undefined FUN_144eb9700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb9700(void)

{
  FUN_144eb9330();
  return;
}



// FUNCTION 144eb9750 FUN_144eb9750 body=77 status=ok
// SIG undefined FUN_144eb9750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb9750(void)

{
  FUN_144eb9330();
  return;
}



// FUNCTION 144eb97a0 FUN_144eb97a0 body=824 status=ok
// SIG undefined FUN_144eb97a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb97a0(undefined8 param_1,undefined *param_2,longlong param_3,undefined *param_4,
                  int param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 auStack_138 [32];
  char *local_118;
  undefined *local_110;
  longlong local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e0 = param_6;
  lVar2 = FUN_144ed1550(0x40c,0);
  if (lVar2 == 0) {
    local_110 = (undefined *)CONCAT44(local_110._4_4_,0xb8);
    local_118 = "ssl\\tls13_enc.c";
    FUN_144eafc90(param_1,0x50,0x24f,0x44);
    goto LAB_144eb9ac8;
  }
  iVar1 = FUN_144ba3cd0(param_2);
  if (iVar1 < 0) {
    local_110 = (undefined *)CONCAT44(local_110._4_4_,0xc0);
    local_118 = "ssl\\tls13_enc.c";
    FUN_144eafc90(param_1,0x50,0x24f,0x44);
    FUN_144ed16b0(lVar2);
    goto LAB_144eb9ac8;
  }
  puVar4 = &DAT_149bf60b0;
  local_e8 = (longlong)iVar1;
  if (param_4 == (undefined *)0x0) {
    param_5 = iVar1;
    param_4 = &DAT_149bf60b0;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    lVar3 = FUN_144ba5700();
    if (((lVar3 == 0) || (iVar1 = FUN_144ba5a20(lVar3,param_2,0), iVar1 < 1)) ||
       (iVar1 = FUN_144ba5ca0(lVar3,local_98,0), iVar1 < 1)) {
      local_110 = (undefined *)CONCAT44(local_110._4_4_,0xd6);
      local_118 = "ssl\\tls13_enc.c";
      FUN_144eafc90(param_1,0x50,0x24f,0x44);
      FUN_144ba5800(lVar3);
    }
    else {
      FUN_144ba5800(lVar3);
      local_100 = local_d8;
      local_f0 = 1;
      local_f8 = local_e8;
      local_108 = local_e8;
      local_110 = local_98;
      local_118 = (char *)0x7;
      iVar1 = FUN_144eb9330(param_1,param_2,param_3,"derived");
      if (iVar1 != 0) {
        uVar5 = (undefined4)local_e8;
        puVar4 = local_d8;
        goto LAB_144eb995d;
      }
    }
    FUN_144ed16b0(lVar2);
    goto LAB_144eb9ac8;
  }
LAB_144eb995d:
  iVar1 = FUN_144ed2580(lVar2);
  if (iVar1 < 1) {
LAB_144eb9a1d:
    local_110 = (undefined *)CONCAT44(local_110._4_4_,0xf7);
    local_118 = "ssl\\tls13_enc.c";
    FUN_144eafc90(param_1,0x50,0x24f,0x44);
  }
  else {
    local_110 = (undefined *)0x0;
    local_118._0_4_ = 1;
    iVar1 = FUN_144ed1710(lVar2,0xffffffff,0x400,0x1007);
    if (iVar1 < 1) goto LAB_144eb9a1d;
    local_118._0_4_ = 0;
    local_110 = param_2;
    iVar1 = FUN_144ed1710(lVar2,0xffffffff,0x400,0x1003);
    if ((iVar1 < 1) ||
       (local_110 = param_4, local_118._0_4_ = param_5,
       iVar1 = FUN_144ed1710(lVar2,0xffffffff,0x400,0x1005), iVar1 < 1)) goto LAB_144eb9a1d;
    local_118 = (char *)CONCAT44(local_118._4_4_,uVar5);
    local_110 = puVar4;
    iVar1 = FUN_144ed1710(lVar2,0xffffffff,0x400,0x1004);
    if ((iVar1 < 1) || (iVar1 = FUN_144ed2820(lVar2,local_e0,&local_e8), iVar1 < 1))
    goto LAB_144eb9a1d;
  }
  FUN_144ed16b0(lVar2);
  if (puVar4 == local_d8) {
    FUN_14259f0c0(local_d8,local_e8);
  }
LAB_144eb9ac8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_138);
}



// FUNCTION 144eb9af0 FUN_144eb9af0 body=114 status=ok
// SIG undefined FUN_144eb9af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb9af0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ea4500();
  FUN_144eb97a0(param_1,uVar1,param_1 + 0x134,param_2,param_3,param_1 + 0x174);
  return;
}



// FUNCTION 144eb9b70 FUN_144eb9b70 body=117 status=ok
// SIG undefined FUN_144eb9b70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb9b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144ea4500();
  iVar1 = FUN_144ba3cd0(uVar2);
  *param_5 = (longlong)iVar1;
  FUN_144eb97a0(param_1,uVar2,param_3,0,0,param_2);
  return;
}



// FUNCTION 144eb9bf0 FUN_144eb9bf0 body=437 status=ok
// SIG undefined FUN_144eb9bf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb9bf0(longlong param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 *local_140;
  ulonglong local_138;
  undefined1 *local_130;
  ulonglong local_128;
  undefined4 local_120;
  uint local_118;
  uint local_114 [3];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144eb9c0a;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = FUN_144ea4500();
  lVar3 = FUN_144ba5700();
  if (((lVar3 != 0) && (iVar1 = FUN_144eafe50(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_144ba5a20(lVar3,uVar2,0), 0 < iVar1)) {
    uVar4 = 0;
    if (param_8 != 0) {
      uVar4 = param_7;
    }
    iVar1 = FUN_144ba5c70(lVar3,param_6,uVar4);
    if (((0 < iVar1) && (iVar1 = FUN_144ba5ca0(lVar3,local_c8,&local_118), 0 < iVar1)) &&
       ((iVar1 = FUN_144ba5a20(lVar3,uVar2,0), 0 < iVar1 &&
        (iVar1 = FUN_144ba5ca0(lVar3,local_108,local_114), 0 < iVar1)))) {
      local_128 = (ulonglong)local_118;
      local_138 = (ulonglong)local_114[0];
      local_120 = 0;
      local_130 = local_88;
      local_140 = local_108;
      local_148 = param_5;
      iVar1 = FUN_144eb9330(param_1,uVar2,param_1 + 0x3b4,param_4);
      if (iVar1 != 0) {
        local_138 = (ulonglong)local_118;
        local_120 = 0;
        local_140 = local_c8;
        local_148 = 8;
        local_130 = param_2;
        local_128 = param_3;
        FUN_144eb9330(param_1,uVar2,local_88,"exporter");
      }
    }
  }
  FUN_144ba5800(lVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
}



// FUNCTION 144eb9dc0 FUN_144eb9dc0 body=39 status=ok
// SIG undefined FUN_144eb9dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eb9dc0(uint param_1)

{
  ulonglong uVar1;
  
  if ((param_1 != 0x6d) && (param_1 != 0x74)) {
    uVar1 = FUN_14527f0b0();
    return uVar1;
  }
  return (ulonglong)param_1;
}



// FUNCTION 144eb9df0 FUN_144eb9df0 body=656 status=ok
// SIG undefined FUN_144eb9df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eb9df0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,char *param_8,
                  undefined1 *param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x144eb9e07;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a0 = param_10;
  local_a8 = param_2;
  iVar1 = FUN_144ba3cd0(param_3);
  if (iVar1 < 0) {
    local_d0 = CONCAT44(local_d0._4_4_,0x179);
LAB_144eba03e:
    local_d8 = "ssl\\tls13_enc.c";
    FUN_144eafc90(param_1,0x50,0x202);
  }
  else {
    local_b0 = 1;
    local_c8 = (longlong)iVar1;
    local_c0 = param_9;
    local_d0 = param_6;
    local_d8 = param_8;
    local_b8 = local_c8;
    iVar1 = FUN_144eb9330(param_1,param_3,param_5,param_7);
    if (iVar1 != 0) {
      iVar1 = FUN_144ba3d80(param_4);
      uVar2 = FUN_144ba3da0(param_4);
      if ((uVar2 & 0xf0007) == 7) {
        pcVar5 = (char *)0xc;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
        if (((lVar4 == 0) &&
            (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0), lVar4 == 0)) &&
           ((*(longlong *)(param_1 + 0x510) == 0 ||
            (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x510) + 0x1e0), lVar4 == 0)))) {
          local_d0 = CONCAT44(local_d0._4_4_,0x194);
          goto LAB_144eba03e;
        }
        lVar6 = 0x10;
        if ((*(uint *)(lVar4 + 0x24) & 0x30000) != 0) {
          lVar6 = 8;
        }
      }
      else {
        iVar3 = FUN_144ba3d90(param_4);
        pcVar5 = (char *)(longlong)iVar3;
        lVar6 = 0;
      }
      local_b0 = 1;
      local_c0 = local_98;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = (char *)0x3;
      local_b8 = (longlong)iVar1;
      iVar1 = FUN_144eb9330(param_1,param_3,param_9,&DAT_149bf5fd8);
      if ((iVar1 != 0) &&
         (local_d8 = pcVar5, iVar1 = FUN_144eb9700(param_1,param_3,param_9,local_a0), iVar1 != 0)) {
        local_d0 = CONCAT44(local_d0._4_4_,local_a8);
        local_d8 = (char *)0x0;
        iVar1 = FUN_144ba4d00(param_11,param_4,0,0);
        if (((0 < iVar1) &&
            (iVar1 = FUN_144ba5290(param_11,9,(ulonglong)pcVar5 & 0xffffffff,0), iVar1 != 0)) &&
           ((lVar6 == 0 || (iVar1 = FUN_144ba5290(param_11,0x11,lVar6,0), iVar1 != 0)))) {
          local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
          local_d8 = (char *)0x0;
          iVar1 = FUN_144ba4d00(param_11,0,0,local_98);
          if (0 < iVar1) goto LAB_144eba070;
        }
        local_d0 = CONCAT44(local_d0._4_4_,0x1ac);
        goto LAB_144eba03e;
      }
    }
  }
  FUN_14259f0c0(local_98,0x40);
LAB_144eba070:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144eba0b0 FUN_144eba0b0 body=58 status=ok
// SIG undefined FUN_144eba0b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eba0b0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_144ec9f60();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1);
  return (ulonglong)(iVar1 != 0);
}



// FUNCTION 144eba0f0 FUN_144eba0f0 body=54 status=ok
// SIG undefined FUN_144eba0f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eba0f0(longlong param_1)

{
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x6c0),"ssl\\t1_lib.c",0x75);
  FUN_144ec9fd0(param_1);
  return;
}



// FUNCTION 144eba130 FUN_144eba130 body=66 status=ok
// SIG undefined FUN_144eba130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eba130(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144eca340();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = **(int **)(param_1 + 2);
  if (**(int **)(param_1 + 2) == 0x10000) {
    iVar1 = 0x304;
  }
  *param_1 = iVar1;
  return 1;
}



// FUNCTION 144eba180 FUN_144eba180 body=35 status=ok
// SIG undefined FUN_144eba180(void)

undefined4 * FUN_144eba180(ushort param_1)

{
  if ((ushort)(param_1 - 1) < 0x1e) {
    return &DAT_149bf63c0 + (longlong)(int)(param_1 - 1) * 3;
  }
  return (undefined4 *)0x0;
}



// FUNCTION 144eba1b0 FUN_144eba1b0 body=370 status=ok
// SIG undefined FUN_144eba1b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eba1b0(longlong param_1,short param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if ((uVar4 != 0) && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238), lVar1 != 0)) {
    iVar2 = *(int *)(lVar1 + 0x18);
    if (iVar2 == 0x300c02b) {
      if (param_2 != 0x17) {
        return 0;
      }
    }
    else {
      if (iVar2 != 0x300c02c) {
        return 0;
      }
      if (param_2 != 0x18) {
        return 0;
      }
    }
  }
  uVar7 = 1;
  if (param_3 == 0) goto LAB_144eba2c7;
  if (uVar4 == 0x10000) {
    puVar5 = &DAT_149bf653c;
    uVar6 = 1;
LAB_144eba2a0:
    uVar3 = 0;
    if (uVar6 == 0) {
      return 0;
    }
  }
  else if (uVar4 == 0x20000) {
    puVar5 = &DAT_149bf653e;
    uVar6 = 1;
    uVar3 = 0;
  }
  else if (uVar4 == 0x30000) {
    puVar5 = &DAT_149bf653c;
    uVar6 = 2;
    uVar3 = 0;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0x6a8);
    if (puVar5 != (undefined2 *)0x0) {
      uVar6 = *(ulonglong *)(param_1 + 0x6a0);
      goto LAB_144eba2a0;
    }
    puVar5 = &DAT_149bf6530;
    uVar3 = 0;
    uVar6 = 5;
  }
  while (puVar5[uVar3] != param_2) {
    uVar3 = uVar3 + 1;
    if (uVar6 <= uVar3) {
      return 0;
    }
  }
LAB_144eba2c7:
  iVar2 = FUN_144eba8d0(param_1,param_2,0x20006);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar6 = *(ulonglong *)(param_1 + 0x6b0);
    if (uVar6 != 0) {
      uVar3 = 0;
      if (uVar6 != 0) {
        do {
          if (*(short *)(*(longlong *)(param_1 + 0x6b8) + uVar3 * 2) == param_2) {
            return 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar6);
      }
      uVar7 = 0;
    }
  }
  return uVar7;
}



// FUNCTION 144eba330 FUN_144eba330 body=707 status=ok
// SIG undefined FUN_144eba330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eba330(longlong param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8;
  undefined1 local_res9;
  uint local_res10;
  undefined2 *local_res18;
  
  uVar12 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  uVar9 = (ulonglong)param_2;
  local_res10 = param_2;
  if (param_2 == 0xfffffffe) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0) {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x18);
      if (iVar2 == 0x300c02b) {
        return 0x17;
      }
      if (iVar2 != 0x300c02c) {
        return 0;
      }
      return 0x18;
    }
    local_res10 = 0;
    uVar9 = uVar12;
  }
  iVar2 = (int)uVar9;
  if ((*(uint *)(param_1 + 0x5cc) & 0x400000) == 0) {
    local_res18 = *(undefined2 **)(param_1 + 0x6b8);
    uVar10 = *(ulonglong *)(param_1 + 0x6b0);
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
    if (uVar5 == 0x10000) {
      uVar7 = 1;
    }
    else {
      if (uVar5 == 0x20000) {
        puVar8 = &DAT_149bf653e;
        uVar7 = 1;
        goto LAB_144eba4fb;
      }
      if (uVar5 != 0x30000) {
        puVar8 = *(undefined2 **)(param_1 + 0x6a8);
        if (puVar8 == (undefined2 *)0x0) {
          puVar8 = &DAT_149bf6530;
          uVar7 = 5;
        }
        else {
          uVar7 = *(ulonglong *)(param_1 + 0x6a0);
        }
        goto LAB_144eba4fb;
      }
      uVar7 = 2;
    }
    puVar8 = &DAT_149bf653c;
    goto LAB_144eba4fb;
  }
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if (uVar5 == 0x10000) {
    uVar10 = 1;
LAB_144eba461:
    local_res18 = &DAT_149bf653c;
  }
  else if (uVar5 == 0x20000) {
    local_res18 = &DAT_149bf653e;
    uVar10 = 1;
  }
  else {
    if (uVar5 == 0x30000) {
      uVar10 = 2;
      goto LAB_144eba461;
    }
    local_res18 = *(undefined2 **)(param_1 + 0x6a8);
    if (local_res18 != (undefined2 *)0x0) {
      uVar10 = *(ulonglong *)(param_1 + 0x6a0);
      puVar8 = *(undefined2 **)(param_1 + 0x6b8);
      uVar7 = *(ulonglong *)(param_1 + 0x6b0);
      goto LAB_144eba4fb;
    }
    local_res18 = &DAT_149bf6530;
    uVar10 = 5;
  }
  puVar8 = *(undefined2 **)(param_1 + 0x6b8);
  uVar7 = *(ulonglong *)(param_1 + 0x6b0);
LAB_144eba4fb:
  puVar6 = local_res18;
  uVar4 = uVar12;
  uVar11 = uVar12;
  if (uVar10 != 0) {
    do {
      uVar1 = puVar6[uVar11];
      uVar3 = uVar12;
      if (uVar7 != 0) {
        do {
          if (puVar8[uVar3] == uVar1) {
            if ((ushort)(uVar1 - 1) < 0x1e) {
              puVar6 = local_res18;
              if (&DAT_149bf63c0 + (longlong)(int)(uVar1 - 1) * 3 != (undefined4 *)0x0) {
                local_res8 = (undefined1)(uVar1 >> 8);
                local_res9 = (undefined1)uVar1;
                iVar2 = FUN_144b9dff0(param_1,0x20005,
                                      *(undefined4 *)
                                       (&DAT_149bf63c4 + (longlong)(int)(uVar1 - 1) * 0xc),
                                      (&DAT_149bf63c0)[(longlong)(int)(uVar1 - 1) * 3],&local_res8);
                uVar9 = (ulonglong)local_res10;
                puVar6 = local_res18;
                if (iVar2 != 0) {
                  if (local_res10 == (uint)uVar4) {
                    return (ulonglong)uVar1;
                  }
                  uVar4 = (ulonglong)((uint)uVar4 + 1);
                }
              }
            }
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar7);
      }
      iVar2 = (int)uVar9;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar10);
  }
  uVar4 = uVar4 & 0xffff;
  if (iVar2 != -1) {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144eba600 FUN_144eba600 body=361 status=ok
// SIG undefined FUN_144eba600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eba600(longlong *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  short sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144eba61f;
  uVar8 = 0;
  if (param_4 == 0) {
    FUN_144ba24f0(0x14,0x275,0x10f,"ssl\\t1_lib.c",0x15e,0x144eba61f);
    uVar9 = 0;
  }
  else {
    lVar2 = FUN_144ea64e0(param_4 * 2,"ssl\\t1_lib.c",0x161);
    if (lVar2 == 0) {
      FUN_144ba24f0(0x14,0x275,0x41,"ssl\\t1_lib.c",0x162,uVar9);
      uVar9 = 0;
    }
    else {
      uVar6 = uVar8;
      uVar7 = uVar8;
      if (param_4 != 0) {
        do {
          uVar3 = uVar8;
          uVar5 = uVar8;
          do {
            if (*(int *)((longlong)&DAT_149bf63c0 + uVar3) == *(int *)(param_3 + uVar7 * 4)) {
              sVar4 = (short)uVar5 + 1;
              goto LAB_144eba6ee;
            }
            uVar5 = uVar5 + 1;
            uVar3 = uVar3 + 0xc;
          } while (uVar3 < 0x168);
          sVar4 = 0;
LAB_144eba6ee:
          uVar1 = 1 << ((byte)sVar4 & 0x1f);
          if ((sVar4 == 0) || (((uint)uVar6 & uVar1) != 0)) {
            FUN_144ea6530(lVar2,"ssl\\t1_lib.c",0x16c);
            return 0;
          }
          *(short *)(lVar2 + uVar7 * 2) = sVar4;
          uVar7 = uVar7 + 1;
          uVar6 = (ulonglong)((uint)uVar6 | uVar1);
        } while (uVar7 < param_4);
      }
      FUN_144ea6530(*param_1,"ssl\\t1_lib.c",0x172);
      *param_1 = lVar2;
      uVar9 = 1;
      *param_2 = param_4;
    }
  }
  return uVar9;
}



// FUNCTION 144eba770 FUN_144eba770 body=140 status=ok
// SIG undefined FUN_144eba770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eba770(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined1 local_90 [120];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144eba780;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  local_a8 = &local_98;
  iVar1 = FUN_144ba1dc0(param_3,0x3a,1,FUN_144ebd4f0);
  if ((iVar1 != 0) && (param_1 != 0)) {
    FUN_144eba600(param_1,param_2,local_90,local_98);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144eba810 FUN_144eba810 body=65 status=ok
// SIG undefined FUN_144eba810(void)

void FUN_144eba810(longlong param_1,longlong *param_2,longlong *param_3)

{
  if (*(longlong *)(param_1 + 0x688) != 0) {
    *param_2 = *(longlong *)(param_1 + 0x688);
    *param_3 = *(longlong *)(param_1 + 0x680);
    return;
  }
  *param_2 = (longlong)&DAT_149bf6528;
  *param_3 = 3 - (ulonglong)((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0);
  return;
}



// FUNCTION 144eba860 FUN_144eba860 body=110 status=ok
// SIG undefined FUN_144eba860(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eba860(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  ulonglong uVar2;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) == 0) {
    sVar1 = FUN_144eba330(param_1,0,param_3,param_4,0x144eba86a);
    return (ulonglong)(sVar1 != 0);
  }
  if (param_2 == 0x300c02b) {
    uVar2 = FUN_144eba1b0(param_1,0x17,1);
    return uVar2;
  }
  if (param_2 == 0x300c02c) {
    uVar2 = FUN_144eba1b0(param_1,0x18,1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144eba8d0 FUN_144eba8d0 body=104 status=ok
// SIG undefined FUN_144eba8d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eba8d0(undefined8 param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10;
  undefined1 local_res11;
  
  if ((ushort)((short)param_2 - 1U) < 0x1e) {
    lVar1 = (longlong)(int)((param_2 & 0xffff) - 1);
    if (&DAT_149bf63c0 + lVar1 * 3 != (undefined4 *)0x0) {
      local_res10 = (undefined1)(param_2 >> 8);
      local_res11 = (undefined1)param_2;
      uVar2 = FUN_144b9dff0(param_1,param_3,*(undefined4 *)(&DAT_149bf63c4 + lVar1 * 0xc),
                            (&DAT_149bf63c0)[lVar1 * 3],&local_res10);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144eba940 FUN_144eba940 body=143 status=ok
// SIG undefined FUN_144eba940(void)

void FUN_144eba940(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    *param_2 = (longlong)&DAT_149bf653c;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x20000) {
    *param_2 = (longlong)&DAT_149bf653e;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x30000) {
    *param_2 = (longlong)&DAT_149bf653c;
    *param_3 = 2;
    return;
  }
  if (*(longlong *)(param_1 + 0x6a8) == 0) {
    *param_2 = (longlong)&DAT_149bf6530;
    *param_3 = 5;
    return;
  }
  *param_2 = *(longlong *)(param_1 + 0x6a8);
  *param_3 = *(undefined8 *)(param_1 + 0x6a0);
  return;
}



// FUNCTION 144eba9d0 FUN_144eba9d0 body=510 status=ok
// SIG undefined FUN_144eba9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eba9d0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  
  uVar5 = 1;
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x1768),"ssl\\t1_lib.c",0x4e5);
  uVar11 = 0;
  uVar10 = 0x310;
  *(undefined8 *)(param_1 + 0x1768) = 0;
  uVar6 = 0x310;
  *(undefined8 *)(param_1 + 6000) = 0;
  do {
    *(undefined4 *)(uVar6 + *(longlong *)(param_1 + 0xa8)) = 0;
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x334);
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) != 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) != 0)) {
    iVar2 = FUN_144ebc840(param_1);
    if (iVar2 == 0) {
      uVar12 = CONCAT44(uVar5,0x507);
      uVar5 = 0x50;
      uVar9 = 0x44;
    }
    else {
      if (*(longlong *)(param_1 + 0x1768) != 0) {
        return 1;
      }
      uVar12 = CONCAT44(uVar5,0x50f);
      uVar5 = 0x28;
      uVar9 = 0x178;
    }
    FUN_144eafc90(param_1,uVar5,0x14f,uVar9,"ssl\\t1_lib.c",uVar12);
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x488);
  uVar1 = *(uint *)(lVar3 + 0x1c) & 0x30000;
  uVar6 = uVar11;
  if (uVar1 == 0x10000) {
    uVar8 = 1;
  }
  else {
    if (uVar1 == 0x20000) {
      puVar7 = &DAT_149bf6576;
      uVar8 = 1;
      goto LAB_144ebaaf0;
    }
    if (uVar1 != 0x30000) {
      if ((*(int *)(param_1 + 0x38) == 1) &&
         (puVar7 = *(undefined2 **)(lVar3 + 0x1a8), puVar7 != (undefined2 *)0x0)) {
        uVar8 = *(ulonglong *)(lVar3 + 0x1b0);
      }
      else {
        puVar7 = *(undefined2 **)(lVar3 + 0x198);
        if (puVar7 == (undefined2 *)0x0) {
          puVar7 = &DAT_149bf6540;
          uVar8 = 0x1a;
        }
        else {
          uVar8 = *(ulonglong *)(lVar3 + 0x1a0);
        }
      }
      goto LAB_144ebaaf0;
    }
    uVar8 = 2;
  }
  puVar7 = &DAT_149bf6574;
LAB_144ebaaf0:
  do {
    lVar3 = FUN_144ebd900(param_1,uVar6 & 0xffffffff);
    if ((lVar3 != 0) && (uVar8 != 0)) {
      uVar4 = uVar11;
      do {
        if (*(short *)(lVar3 + 8) == puVar7[uVar4]) {
          *(undefined4 *)(uVar10 + *(longlong *)(param_1 + 0xa8)) = 2;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar8);
    }
    uVar10 = uVar10 + 4;
    uVar6 = uVar6 + 1;
    if (0x333 < uVar10) {
      return 1;
    }
  } while( true );
}



// FUNCTION 144ebabd0 FUN_144ebabd0 body=180 status=ok
// SIG undefined FUN_144ebabd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebabd0(int *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  param_1[0x19e] = 0;
  if ((0x300 < *param_1) && ((param_1[0x173] & 0x4000U) == 0)) {
    iVar2 = FUN_144b9dff0(param_1,10,0,0,0,0x144ebabe5);
    if ((iVar2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x288), *(int *)(lVar1 + 0x100) != 0)) {
      uVar3 = FUN_144ebac90(param_1,*(undefined8 *)(lVar1 + 0xf0),*(undefined8 *)(lVar1 + 0xf8),
                            param_2 + 0x30,*(undefined8 *)(param_2 + 0x28),param_3);
      return uVar3;
    }
  }
  return 2;
}



// FUNCTION 144ebac90 FUN_144ebac90 body=1257 status=ok
// SIG undefined FUN_144ebac90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ebac90(longlong param_1,longlong *param_2,ulonglong param_3,void *param_4,size_t param_5
                  ,longlong *param_6)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  ulonglong local_d0;
  int local_c8 [2];
  longlong *local_c0;
  longlong local_b8;
  int local_b0 [2];
  void *local_a8;
  longlong *local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x144ebaca7;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = 0;
  lVar6 = *(longlong *)(param_1 + 0x768);
  iVar9 = 0;
  plVar3 = (longlong *)0x0;
  lVar4 = 0;
  local_a0 = param_6;
  iVar8 = 4;
  local_c0 = param_2;
  local_a8 = param_4;
  if (param_3 == 0) {
    iVar8 = 3;
    param_2 = param_2;
    goto LAB_144ebb066;
  }
  if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
        (iVar10 = **(int **)(param_1 + 8), iVar10 < 0x304)) || (iVar10 == 0x10000)) &&
      (*(longlong *)(param_1 + 0x6d8) != 0)) || (param_3 < 0x20)) goto LAB_144ebb066;
  plVar3 = (longlong *)FUN_14527f710();
  if (plVar3 == (longlong *)0x0) {
    iVar8 = 0;
    param_2 = local_c0;
    lVar4 = 0;
    goto LAB_144ebb066;
  }
  lVar4 = FUN_144ba50b0();
  if (lVar4 == 0) {
    iVar8 = 0;
    param_2 = local_c0;
    goto LAB_144ebb066;
  }
  if (*(code **)(lVar6 + 0x220) == (code *)0x0) {
    if ((*param_2 == *(longlong *)(lVar6 + 0x208)) && (param_2[1] == *(longlong *)(lVar6 + 0x210)))
    {
      uVar5 = FUN_144bab040();
      local_d8 = (longlong *)0x0;
      iVar8 = FUN_14527f850(plVar3,*(undefined8 *)(lVar6 + 0x218),0x20,uVar5);
      if (0 < iVar8) {
        lVar6 = *(longlong *)(lVar6 + 0x218);
        uVar5 = FUN_144baa3e0();
        local_d8 = param_2 + 2;
        iVar8 = FUN_144ba4820(lVar4,uVar5,0,lVar6 + 0x20);
        if (0 < iVar8) {
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
              (iVar8 = **(int **)(param_1 + 8), 0x303 < iVar8)) && (iVar9 = 0, iVar8 != 0x10000)) {
            iVar9 = 1;
          }
          goto LAB_144ebae50;
        }
      }
      goto LAB_144ebad8c;
    }
  }
  else {
    local_d0 = local_d0 & 0xffffffff00000000;
    local_d8 = plVar3;
    iVar8 = (**(code **)(lVar6 + 0x220))(param_1,param_2,param_2 + 2,lVar4);
    if (iVar8 < 0) {
LAB_144ebad8c:
      iVar8 = 1;
      param_2 = local_c0;
      goto LAB_144ebb066;
    }
    if (iVar8 != 0) {
      iVar9 = 0;
      if (iVar8 == 2) {
        iVar9 = 1;
      }
LAB_144ebae50:
      lVar6 = FUN_14527f6e0(plVar3);
      if (lVar6 == 0) {
        iVar8 = 1;
        param_2 = local_c0;
      }
      else {
        iVar8 = FUN_144ba3df0(lVar4);
        param_2 = local_c0;
        if ((ulonglong)((iVar8 + 0x10) + lVar6) < param_3) {
          param_3 = param_3 - lVar6;
          iVar8 = FUN_14527fb30(plVar3,local_c0,param_3);
          if ((0 < iVar8) && (iVar8 = FUN_14527fb60(plVar3,local_98,0), 0 < iVar8)) {
            iVar8 = FUN_14259f120(local_98,param_3 + (longlong)param_2,lVar6);
            if (iVar8 != 0) {
              iVar8 = 4;
              goto LAB_144ebb066;
            }
            iVar8 = FUN_144ba3df0(lVar4);
            local_b8 = (longlong)param_2 + (longlong)iVar8 + 0x10;
            iVar8 = FUN_144ba3df0(lVar4);
            param_3 = param_3 - (longlong)(iVar8 + 0x10);
            lVar6 = FUN_144ea64e0(param_3,"ssl\\t1_lib.c",0x5c1);
            if (lVar6 != 0) {
              local_d8 = (longlong *)CONCAT44(local_d8._4_4_,(int)param_3);
              iVar8 = FUN_144ba4850(lVar4,lVar6,local_c8,local_b8);
              if (0 < iVar8) {
                iVar8 = FUN_144ba4b10(lVar4,local_c8[0] + lVar6,local_b0);
                if (iVar8 < 1) {
                  FUN_144ea6530(lVar6,"ssl\\t1_lib.c",0x5c9);
                  iVar8 = 4;
                  lVar7 = 0;
                }
                else {
                  local_c8[0] = local_c8[0] + local_b0[0];
                  local_b8 = lVar6;
                  lVar7 = FUN_145279b20(0,&local_b8);
                  local_c8[0] = local_c8[0] + ((int)lVar6 - (int)local_b8);
                  FUN_144ea6530(lVar6,"ssl\\t1_lib.c",0x5d2);
                  if (lVar7 == 0) {
                    FUN_144ba26f0();
                    iVar8 = 4;
                  }
                  else if (local_c8[0] == 0) {
                    if (param_5 != 0) {
                      memcpy((void *)(lVar7 + 0x158),local_a8,param_5);
                      *(size_t *)(lVar7 + 0x150) = param_5;
                    }
                    iVar8 = iVar9 + 5;
                  }
                  else {
                    FUN_144eb0d50(lVar7);
                    iVar8 = 4;
                    lVar7 = 0;
                  }
                }
                goto LAB_144ebb066;
              }
            }
            FUN_144ea6530(lVar6,"ssl\\t1_lib.c",0x5c4);
          }
          iVar8 = 1;
          lVar7 = 0;
        }
        else {
          iVar8 = 4;
        }
      }
      goto LAB_144ebb066;
    }
  }
  iVar8 = 4;
  param_2 = local_c0;
LAB_144ebb066:
  iVar10 = 1;
  FUN_144ba5170(lVar4);
  FUN_14527f7e0(plVar3);
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x768) + 0x3b8);
  iVar9 = iVar8;
  if ((pcVar1 != (code *)0x0) && (iVar8 - 3U < 4)) {
    if (0x10 < param_3) {
      param_3 = 0x10;
    }
    local_d0 = *(ulonglong *)(*(longlong *)(param_1 + 0x768) + 0x3c0);
    local_d8 = (longlong *)CONCAT44(local_d8._4_4_,iVar8);
    iVar2 = (*pcVar1)(param_1,lVar7,param_2,param_3);
    iVar9 = iVar10;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        FUN_144eb0d50(lVar7);
        lVar7 = 0;
        iVar9 = 2;
      }
      else if (iVar2 == 2) {
        if (1 < iVar8 - 3U) {
          iVar8 = 4;
        }
        FUN_144eb0d50(lVar7);
        lVar7 = 0;
        iVar9 = iVar8;
      }
      else if ((iVar2 - 3U < 2) && (iVar8 - 5U < 2)) {
        iVar9 = (iVar2 != 3) + 5;
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x6d8) == 0) ||
      ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
        (iVar8 = **(int **)(param_1 + 8), 0x303 < iVar8)) && (iVar8 != 0x10000)))) &&
     (((iVar9 - 3U & 0xfffffffc) == 0 && (iVar9 != 5)))) {
    *(undefined4 *)(param_1 + 0x678) = 1;
  }
  *local_a0 = lVar7;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144ebb190 FUN_144ebb190 body=61 status=ok
// SIG undefined FUN_144ebb190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebb190(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x5cc) & 0x4000) != 0) {
    return 0;
  }
  uVar1 = FUN_144b9dff0(param_1,10,0,0,0);
  return uVar1;
}



// FUNCTION 144ebb1d0 FUN_144ebb1d0 body=358 status=ok
// SIG undefined FUN_144ebb1d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ebb1d0(uint *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined **ppuVar5;
  longlong lVar6;
  short *psVar7;
  uint uVar8;
  
  lVar6 = *(longlong *)(param_2 + 0x488);
  uVar8 = 0xb;
  uVar1 = *(uint *)(lVar6 + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    psVar7 = &DAT_149bf6574;
    lVar6 = 1;
  }
  else {
    if (uVar1 == 0x20000) {
      psVar7 = &DAT_149bf6576;
      lVar6 = 1;
      goto LAB_144ebb2a0;
    }
    if (uVar1 == 0x30000) {
      psVar7 = &DAT_149bf6574;
      lVar6 = 2;
      goto LAB_144ebb2a0;
    }
    if ((*(int *)(param_2 + 0x38) == 1) &&
       (psVar7 = *(short **)(lVar6 + 0x1a8), psVar7 != (short *)0x0)) {
      lVar6 = *(longlong *)(lVar6 + 0x1b0);
    }
    else {
      psVar7 = *(short **)(lVar6 + 0x198);
      if (psVar7 == (short *)0x0) {
        psVar7 = &DAT_149bf6540;
        lVar6 = 0x1a;
        goto LAB_144ebb2a0;
      }
      lVar6 = *(longlong *)(lVar6 + 0x1a0);
    }
  }
  if (lVar6 == 0) {
    *param_1 = *param_1 | 0xb;
    return;
  }
LAB_144ebb2a0:
  do {
    ppuVar5 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
    uVar3 = 0;
    do {
      if (*(short *)(ppuVar5 + 1) == *psVar7) {
        lVar4 = FUN_144b9e170((longlong)*(int *)(ppuVar5 + 3));
        if (((lVar4 != 0) && ((*(uint *)(lVar4 + 4) & uVar8) != 0)) &&
           (iVar2 = FUN_144ebd2e0(param_2,param_3,ppuVar5), iVar2 != 0)) {
          uVar8 = uVar8 & ~*(uint *)(lVar4 + 4);
        }
        break;
      }
      uVar3 = uVar3 + 1;
      ppuVar5 = ppuVar5 + 5;
    } while (uVar3 < 0x1a);
    psVar7 = psVar7 + 1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      *param_1 = *param_1 | uVar8;
      return;
    }
  } while( true );
}



// FUNCTION 144ebb340 FUN_144ebb340 body=140 status=ok
// SIG undefined FUN_144ebb340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ebb340(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined1 local_80 [104];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ebb350;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_98 = &local_88;
  iVar1 = FUN_144ba1dc0(param_2,0x3a,1,FUN_144ebe050);
  if ((iVar1 != 0) && (param_1 != 0)) {
    FUN_144ebb3e0(param_1,local_80,local_88,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144ebb3e0 FUN_144ebb3e0 body=236 status=ok
// SIG undefined FUN_144ebb3e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebb3e0(longlong param_1,void *param_2,longlong param_3,int param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x144ebb3fe;
  _Dst = (void *)FUN_144ea64e0(param_3 * 2,"ssl\\t1_lib.c",0x7f9);
  if (_Dst == (void *)0x0) {
    FUN_144ba24f0(0x14,0x276,0x41,"ssl\\t1_lib.c",0x7fa,uVar1);
    uVar1 = 0;
  }
  else {
    memcpy(_Dst,param_2,param_3 * 2);
    if (param_4 == 0) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x198),"ssl\\t1_lib.c",0x804);
      *(void **)(param_1 + 0x198) = _Dst;
      *(longlong *)(param_1 + 0x1a0) = param_3;
    }
    else {
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x1a8),"ssl\\t1_lib.c",0x800);
      *(void **)(param_1 + 0x1a8) = _Dst;
      *(longlong *)(param_1 + 0x1b0) = param_3;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144ebb4d0 FUN_144ebb4d0 body=370 status=ok
// SIG undefined FUN_144ebb4d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebb4d0(longlong param_1,int *param_2,ulonglong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  
  uVar8 = 0x144ebb4eb;
  if ((param_3 & 1) == 0) {
    puVar3 = (undefined2 *)FUN_144ea64e0(param_3 & 0xfffffffffffffffe,"ssl\\t1_lib.c",0x813);
    if (puVar3 == (undefined2 *)0x0) {
      FUN_144ba24f0(0x14,0x278,0x41,"ssl\\t1_lib.c",0x814,uVar8);
      uVar8 = 0;
    }
    else {
      uVar6 = 0;
      puVar7 = puVar3;
      if (param_3 != 0) {
        do {
          iVar2 = *param_2;
          uVar5 = 0;
          piVar1 = param_2 + 1;
          param_2 = param_2 + 2;
          ppuVar4 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
          do {
            if ((*(int *)((longlong)ppuVar4 + 0xc) == iVar2) &&
               (*(int *)((longlong)ppuVar4 + 0x14) == *piVar1)) {
              *puVar7 = *(undefined2 *)(ppuVar4 + 1);
              puVar7 = puVar7 + 1;
              break;
            }
            uVar5 = uVar5 + 1;
            ppuVar4 = ppuVar4 + 5;
          } while (uVar5 < 0x1a);
          if (uVar5 == 0x1a) {
            FUN_144ea6530(puVar3,"ssl\\t1_lib.c",0x836);
            return 0;
          }
          uVar6 = uVar6 + 2;
        } while (uVar6 < param_3);
      }
      if (param_4 == 0) {
        FUN_144ea6530(*(undefined8 *)(param_1 + 0x198),"ssl\\t1_lib.c",0x82e);
        *(ulonglong *)(param_1 + 0x1a0) = param_3 >> 1;
        *(undefined2 **)(param_1 + 0x198) = puVar3;
      }
      else {
        FUN_144ea6530(*(undefined8 *)(param_1 + 0x1a8),"ssl\\t1_lib.c",0x82a);
        *(ulonglong *)(param_1 + 0x1b0) = param_3 >> 1;
        *(undefined2 **)(param_1 + 0x1a8) = puVar3;
      }
      uVar8 = 1;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 144ebb650 FUN_144ebb650 body=1562 status=ok
// SIG undefined FUN_144ebb650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ebb650(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  longlong *plVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  short *psVar18;
  char cVar19;
  uint uVar20;
  uint local_res8;
  longlong local_res18;
  uint *local_48;
  undefined8 local_40;
  
  local_40 = 0x144ebb674;
  plVar1 = *(longlong **)(param_1 + 0x488);
  uVar14 = 0;
  local_res8 = 0;
  uVar5 = 0;
  uVar20 = *(uint *)((longlong)plVar1 + 0x1c) & 0x30000;
  if (param_5 == -1) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    lVar8 = FUN_144b9e120(param_3,&local_40);
    if (lVar8 == 0) {
      return 0;
    }
    iVar6 = (int)local_40;
    param_5 = 1;
    local_48 = (uint *)(*(longlong *)(param_1 + 0xa8) + ((longlong)iVar6 + 0xc4) * 4);
    local_res8 = 0x6f0;
    local_res18 = param_3;
    if ((*(uint *)((longlong)plVar1 + 0x1c) & 0x30001) == 0) {
      local_res8 = 0x50;
    }
  }
  else {
    if (param_5 == -2) {
      plVar17 = (longlong *)*plVar1;
      iVar6 = (int)(((longlong)plVar17 + (-0x20 - (longlong)plVar1)) / 0x28);
    }
    else {
      plVar17 = plVar1 + (longlong)(int)param_5 * 5 + 4;
      iVar6 = param_5;
    }
    param_4 = plVar17[2];
    param_5 = *(uint *)((longlong)plVar1 + 0x1c) & 0x30001;
    local_48 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x310 + (longlong)iVar6 * 4);
    local_res18 = plVar17[1];
    param_2 = *plVar17;
    uVar16 = 0;
    uVar3 = uVar5;
    if ((param_2 == 0) || (uVar16 = uVar5, local_res18 == 0)) goto LAB_144ebbc00;
  }
  uVar13 = 0;
  if (uVar20 != 0) {
    uVar3 = local_res8 | 0x800;
    if (local_res8 == 0) {
      uVar3 = local_res8;
    }
    iVar4 = FUN_144bb5060(0,param_2,param_4,uVar20);
    local_res8 = uVar3;
    if (iVar4 == 0) {
      uVar13 = 0x800;
    }
    else {
      uVar16 = uVar5;
      uVar13 = 0;
      if (uVar3 == 0) goto LAB_144ebbc00;
    }
  }
  uVar20 = FUN_144b9a890(param_1);
  uVar3 = local_res8;
  if ((((uVar20 & 0xffffff00) == 0x300) && (iVar4 = FUN_144b9a890(param_1), 0x302 < iVar4)) &&
     (param_5 != 0)) {
    uVar16 = uVar13;
    if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) == 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) == 0)) {
      switch(iVar6) {
      case 0:
        iVar6 = 6;
        uVar5 = 0x41;
        break;
      default:
        uVar5 = 0xffffffff;
        goto LAB_144ebb93e;
      case 2:
        iVar6 = 0x74;
        uVar5 = 0x71;
        break;
      case 3:
        iVar6 = 0x198;
        uVar5 = 0x1a0;
        break;
      case 4:
        iVar6 = 0x32b;
        uVar5 = 0x327;
        break;
      case 5:
        iVar6 = 0x3d3;
        uVar5 = 0x3d9;
        break;
      case 6:
        iVar6 = 0x3d4;
        uVar5 = 0x3da;
      }
      psVar18 = (short *)plVar1[0x33];
      if (psVar18 != (short *)0x0) {
        uVar15 = plVar1[0x34];
        uVar12 = uVar14;
        if (uVar15 != 0) {
          do {
            ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
            uVar10 = uVar14;
            do {
              if (*(short *)(ppuVar7 + 1) == *psVar18) {
                if ((*(int *)((longlong)ppuVar7 + 0xc) == 0x40) &&
                   (*(int *)((longlong)ppuVar7 + 0x14) == iVar6)) goto LAB_144ebb91d;
                break;
              }
              uVar10 = uVar10 + 1;
              ppuVar7 = ppuVar7 + 5;
            } while (uVar10 < 0x1a);
            uVar12 = uVar12 + 1;
            psVar18 = psVar18 + 1;
          } while (uVar12 < uVar15);
        }
LAB_144ebb91d:
        if (uVar12 == uVar15) {
joined_r0x000144ebb92a:
          uVar20 = uVar13;
          if (local_res8 == 0) goto LAB_144ebbc00;
          goto LAB_144ebb9fd;
        }
      }
    }
LAB_144ebb93e:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar6 = **(int **)(param_1 + 8), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
      lVar8 = FUN_144ebd130(param_1,param_2,local_res18);
      if (lVar8 != 0) {
LAB_144ebb97e:
        uVar13 = uVar13 | 0x10;
      }
    }
    else {
      iVar6 = FUN_144ebe210(param_1,param_2,uVar5);
      if (iVar6 != 0) goto LAB_144ebb97e;
      if (local_res8 == 0) goto LAB_144ebbc00;
    }
    uVar20 = uVar13 | 0x20;
    iVar6 = FUN_144babbf0(param_4);
    uVar15 = uVar14;
    if (0 < iVar6) {
      do {
        uVar9 = FUN_144babc00(param_4,uVar15);
        iVar6 = FUN_144ebe210(param_1,uVar9,uVar5);
        uVar16 = uVar20;
        if (iVar6 == 0) goto joined_r0x000144ebb92a;
        uVar16 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar16;
        iVar6 = FUN_144babbf0(param_4);
      } while ((int)uVar16 < iVar6);
    }
  }
  else {
    uVar20 = uVar13;
    if (local_res8 != 0) {
      uVar20 = uVar13 | 0x30;
    }
  }
LAB_144ebb9fd:
  iVar6 = FUN_144ebd750(param_1,param_2,1);
  if (iVar6 == 0) {
    uVar16 = uVar20;
    if (local_res8 == 0) goto LAB_144ebbc00;
  }
  else {
    uVar20 = uVar20 | 0x40;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar5 = uVar20 | 0x80;
  }
  else {
    uVar5 = uVar20;
    if (param_5 != 0) {
      uVar5 = uVar20 | 0x80;
      iVar6 = FUN_144babbf0(param_4);
      uVar15 = uVar14;
      if (0 < iVar6) {
        do {
          uVar9 = FUN_144babc00(param_4,uVar15);
          lVar8 = FUN_144bb4f60(uVar9);
          if (lVar8 == 0) {
LAB_144ebbabf:
            uVar16 = uVar5;
            uVar5 = uVar20;
            if (local_res8 == 0) goto LAB_144ebbc00;
            break;
          }
          iVar6 = FUN_144ba6750(lVar8);
          if (iVar6 == 0x198) {
            iVar6 = FUN_144ebd650(param_1,lVar8);
            if (iVar6 != 0) {
              uVar2 = FUN_144ebd5e0(lVar8);
              iVar6 = FUN_144eba1b0(param_1,uVar2,*(int *)(param_1 + 0x38) == 0);
              if (iVar6 != 0) goto LAB_144ebbaaf;
            }
            goto LAB_144ebbabf;
          }
LAB_144ebbaaf:
          uVar16 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar16;
          iVar6 = FUN_144babbf0(param_4);
        } while ((int)uVar16 < iVar6);
      }
    }
  }
  if ((*(int *)(param_1 + 0x38) == 0) && (param_5 != 0)) {
    iVar6 = FUN_144ba6750(local_res18);
    if (iVar6 == 6) {
      cVar19 = '\x01';
LAB_144ebbb24:
      uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 600);
      pcVar11 = *(char **)(*(longlong *)(param_1 + 0xa8) + 0x250);
      if (uVar15 != 0) {
        uVar12 = 0;
        do {
          if (*pcVar11 == cVar19) {
            uVar5 = uVar5 | 0x400;
            break;
          }
          pcVar11 = pcVar11 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar15);
      }
      if (((uVar5 >> 10 & 1) == 0) && (uVar16 = uVar5, local_res8 == 0)) goto LAB_144ebbc00;
    }
    else {
      if (iVar6 == 0x74) {
        cVar19 = '\x02';
        goto LAB_144ebbb24;
      }
      if (iVar6 == 0x198) {
        cVar19 = '@';
        goto LAB_144ebbb24;
      }
      uVar5 = uVar5 | 0x400;
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x260);
    if (((lVar8 == 0) || (iVar6 = FUN_144babbf0(lVar8), iVar6 == 0)) ||
       (iVar6 = FUN_144ebe350(lVar8,param_2), iVar6 != 0)) {
LAB_144ebbbcf:
      uVar5 = uVar5 | 0x200;
    }
    else {
      iVar6 = FUN_144babbf0(param_4);
      if (0 < iVar6) {
        do {
          uVar9 = FUN_144babc00(param_4,uVar14);
          iVar6 = FUN_144ebe350(lVar8,uVar9);
          if (iVar6 != 0) goto LAB_144ebbbcf;
          uVar20 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar20;
          iVar6 = FUN_144babbf0(param_4);
        } while ((int)uVar20 < iVar6);
      }
    }
    if (local_res8 == 0) {
      uVar16 = uVar5;
      if ((uVar5 >> 9 & 1) != 0) {
        uVar16 = uVar5 | 1;
      }
      goto LAB_144ebbc00;
    }
LAB_144ebbbee:
    uVar16 = uVar5;
    if ((local_res8 & uVar5) != local_res8) goto LAB_144ebbc00;
  }
  else {
    uVar5 = uVar5 | 0x600;
    if (local_res8 != 0) goto LAB_144ebbbee;
  }
  uVar16 = uVar5 | 1;
LAB_144ebbc00:
  uVar5 = FUN_144b9a890(param_1);
  if (((uVar5 & 0xffffff00) == 0x300) && (iVar6 = FUN_144b9a890(param_1), 0x302 < iVar6)) {
    uVar5 = *local_48 & 0x102;
  }
  else {
    uVar5 = 0x102;
  }
  uVar5 = uVar5 | uVar16;
  if (uVar3 == 0) {
    if ((uVar16 & 1) == 0) {
      *local_48 = *local_48 & 0x102;
      return 0;
    }
    *local_48 = uVar5;
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 144ebbc90 FUN_144ebbc90 body=237 status=ok
// SIG undefined FUN_144ebbc90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ebbc90(undefined8 param_1)

{
  FUN_144ebb650(param_1,0,0,0,0,0x144ebbc9c);
  FUN_144ebb650(param_1,0,0,0,1);
  FUN_144ebb650(param_1,0,0,0,2);
  FUN_144ebb650(param_1,0,0,0,3);
  FUN_144ebb650(param_1,0,0,0,4);
  FUN_144ebb650(param_1,0,0,0,5);
  FUN_144ebb650(param_1,0,0,0,6);
  FUN_144ebb650(param_1,0,0,0,7);
  FUN_144ebb650(param_1,0,0,0,8);
  return;
}



// FUNCTION 144ebbd80 FUN_144ebbd80 body=361 status=ok
// SIG undefined FUN_144ebbd80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ebbd80(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = 0x50;
  if (*(int *)(*(longlong *)(param_1 + 0x488) + 0x18) != 2) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if ((*(byte *)(lVar3 + 0x20) & 0x14) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
      if (lVar3 == 0) {
        return 0;
      }
      iVar2 = FUN_144ba67f0(*(undefined8 *)(lVar3 + 8));
    }
    else {
      iVar2 = 0x80;
      if (*(int *)(lVar3 + 0x44) != 0x100) {
        iVar2 = 0x50;
      }
    }
  }
  lVar3 = FUN_144ed3d30();
  if (lVar3 != 0) {
    lVar4 = FUN_144ba0570();
    if ((lVar4 == 0) || (iVar1 = FUN_144ba0bb0(lVar4,2), iVar1 == 0)) {
      FUN_144ed3d50(lVar3);
    }
    else {
      iVar1 = FUN_144b9e090(param_1,0,0);
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      if (iVar2 < 0xc0) {
        if (iVar2 < 0x98) {
          if (iVar2 < 0x80) {
            if (iVar2 < 0x70) {
              lVar5 = FUN_14527f5f0(0);
            }
            else {
              lVar5 = FUN_14527f620();
            }
          }
          else {
            lVar5 = FUN_14527f650();
          }
        }
        else {
          lVar5 = FUN_14527f680();
        }
      }
      else {
        lVar5 = FUN_14527f6b0();
      }
      if ((lVar5 != 0) && (iVar2 = FUN_144ed3f00(lVar3,lVar5,0,lVar4), iVar2 != 0)) {
        return lVar3;
      }
      FUN_144ed3d50(lVar3);
      FUN_144ba0cd0(lVar5);
    }
    FUN_144ba0cd0(lVar4);
    return 0;
  }
  return 0;
}



// FUNCTION 144ebbef0 FUN_144ebbef0 body=167 status=ok
// SIG undefined FUN_144ebbef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ebbef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0x1000;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  if (param_5 == 0) {
    iVar1 = FUN_144ebe3e0();
    if (iVar1 == 0) {
      return 0x18d;
    }
  }
  else {
    iVar1 = FUN_144ebe3e0();
    if (iVar1 == 0) {
      return 399;
    }
  }
  iVar1 = FUN_144ebe470(param_1,param_2,param_3,uVar3 | 0x60012);
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = 0x18e;
  }
  return uVar2;
}



// FUNCTION 144ebbfa0 FUN_144ebbfa0 body=295 status=ok
// SIG undefined FUN_144ebbfa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ebbfa0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    param_3 = FUN_144babc00(param_2,0);
    if (param_3 == 0) {
      return 0x44;
    }
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  uVar5 = 0x1000;
  if (param_4 == 0) {
    uVar5 = 0;
  }
  iVar1 = FUN_144ebe3e0(param_1,0,param_3,uVar5 | 0x60010);
  if (iVar1 == 0) {
    uVar2 = 399;
  }
  else {
    iVar1 = FUN_144ebe470(param_1,0,param_3,uVar5 | 0x60012);
    if (iVar1 == 0) {
LAB_144ebc044:
      uVar2 = 0x18e;
    }
    else {
      iVar1 = FUN_144babbf0(param_2);
      if (iVar4 < iVar1) {
        do {
          uVar3 = FUN_144babc00(param_2,iVar4);
          iVar1 = FUN_144ebe3e0(param_1,0,uVar3,uVar5 | 0x60011);
          if (iVar1 == 0) {
            return 0x18d;
          }
          iVar1 = FUN_144ebe470(param_1,0,uVar3,uVar5 | 0x60012);
          if (iVar1 == 0) goto LAB_144ebc044;
          iVar4 = iVar4 + 1;
          iVar1 = FUN_144babbf0(param_2);
        } while (iVar4 < iVar1);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 144ebc0d0 FUN_144ebc0d0 body=1145 status=ok
// SIG undefined FUN_144ebc0d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebc0d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  short *local_res8;
  int local_res10;
  undefined4 uVar15;
  
  uVar12 = 0;
  uVar4 = 0xffffffff;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d8) = 0;
  uVar5 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60);
  local_res10 = param_2;
  if ((((uVar5 & 8) == 0) && (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)
     ) {
    uVar7 = FUN_144ebd130(param_1,0,0);
    if (uVar7 == 0) {
      if (param_2 == 0) {
        return 1;
      }
      uVar15 = 0xac8;
LAB_144ebc161:
      uVar11 = 0x28;
      uVar13 = 0x76;
LAB_144ebc16a:
      FUN_144eafc90(param_1,uVar11,0x201,uVar13,"ssl\\t1_lib.c",uVar15);
      return 0;
    }
  }
  else {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0xab) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      plVar1 = *(longlong **)(param_1 + 0x488);
      uVar10 = (uint)(((*plVar1 - (longlong)plVar1) + -0x20) / 0x28);
      if (8 < uVar10) {
        return 1;
      }
      if (plVar1[(longlong)(int)uVar10 * 5 + 4] == 0) {
        return 1;
      }
      if (plVar1[(longlong)(int)uVar10 * 5 + 5] == 0) {
        return 1;
      }
    }
    if ((uVar5 & 2) == 0) {
      uVar7 = FUN_144ebd900(param_1,0xffffffff);
      if (uVar7 == 0) {
        if (param_2 == 0) {
          return 1;
        }
        uVar15 = 0xb41;
        uVar11 = 0x50;
        uVar13 = 0x44;
        goto LAB_144ebc16a;
      }
    }
    else if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) == 0) {
      uVar7 = FUN_144ebd900(param_1,0xffffffff);
      if (uVar7 == 0) {
        if (param_2 == 0) {
          return 1;
        }
        uVar15 = 0xb28;
        uVar11 = 0x50;
        uVar13 = 0x44;
        goto LAB_144ebc16a;
      }
      uVar14 = FUN_144ebc9e0(param_1,1,&local_res8);
      if (uVar14 != 0) {
        do {
          if ((*(short *)(uVar7 + 8) == *local_res8) && (*(uint *)(uVar7 + 0x18) < 9)) {
            lVar9 = (longlong)(int)*(uint *)(uVar7 + 0x18);
            lVar2 = *(longlong *)(param_1 + 0x488);
            if ((*(longlong *)(lVar2 + 0x20 + lVar9 * 0x28) != 0) &&
               ((*(longlong *)(lVar2 + 0x28 + lVar9 * 0x28) != 0 &&
                (iVar3 = FUN_144ebe5c0(param_1,uVar7,*(undefined8 *)(lVar2 + 0x20 + lVar9 * 0x28),
                                       *(undefined8 *)(lVar2 + 0x28 + lVar9 * 0x28)), iVar3 != 0))))
            break;
          }
          uVar12 = uVar12 + 1;
          local_res8 = local_res8 + 1;
        } while (uVar12 < uVar14);
      }
      if (uVar12 == uVar14) {
        if (param_2 == 0) {
          return 1;
        }
        uVar15 = 0xb38;
        uVar11 = 0x2f;
        uVar13 = 0x172;
        goto LAB_144ebc16a;
      }
    }
    else {
      if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) == 0) {
        iVar3 = -1;
      }
      else {
        uVar8 = FUN_144ba6cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0xa0));
        uVar8 = FUN_144ed31a0(uVar8);
        iVar3 = FUN_144efc1f0(uVar8);
      }
      uVar7 = uVar12;
      uVar14 = uVar12;
      if (*(longlong *)(param_1 + 6000) != 0) {
        do {
          uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x1768) + uVar14 * 8);
          if (*(int *)(param_1 + 0x38) == 0) {
            uVar4 = *(uint *)(uVar7 + 0x18);
            if ((uint)(((**(longlong **)(param_1 + 0x488) -
                        (longlong)*(longlong **)(param_1 + 0x488)) + -0x20) / 0x28) == uVar4)
            goto LAB_144ebc2d8;
          }
          else {
            uVar4 = FUN_144ebe530(param_1,uVar7);
            if (uVar4 != 0xffffffff) {
LAB_144ebc2d8:
              uVar5 = uVar4;
              if (uVar4 == 0xffffffff) {
                uVar5 = *(uint *)(uVar7 + 0x18);
              }
              if (uVar5 < 9) {
                lVar9 = (longlong)(int)uVar5;
                lVar2 = *(longlong *)(param_1 + 0x488);
                if (((*(longlong *)(lVar2 + 0x20 + lVar9 * 0x28) != 0) &&
                    (*(longlong *)(lVar2 + 0x28 + lVar9 * 0x28) != 0)) &&
                   (iVar6 = FUN_144ebe5c0(param_1,uVar7,*(undefined8 *)(lVar2 + 0x20 + lVar9 * 0x28)
                                          ,*(undefined8 *)(lVar2 + 0x28 + lVar9 * 0x28)), iVar6 != 0
                   )) {
                  if (*(int *)(uVar7 + 0x14) == 0x390) {
                    uVar8 = FUN_144ba69f0(*(undefined8 *)
                                           (*(longlong *)(param_1 + 0x488) +
                                           ((longlong)(int)uVar4 + 1) * 0x28));
                    iVar6 = FUN_144ebd870(uVar8,uVar7);
                    if (iVar6 == 0) goto LAB_144ebc359;
                  }
                  param_2 = local_res10;
                  if ((iVar3 == -1) || (*(int *)(uVar7 + 0x20) == iVar3)) break;
                }
              }
            }
          }
LAB_144ebc359:
          uVar14 = uVar14 + 1;
          param_2 = local_res10;
        } while (uVar14 < *(ulonglong *)(param_1 + 6000));
      }
      if (uVar14 == *(ulonglong *)(param_1 + 6000)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0xa0) != 0) {
          uVar7 = FUN_144ebd900(param_1,0xffffffff);
          if (uVar7 == 0) {
            if (param_2 == 0) {
              return 1;
            }
            uVar15 = 0xb0d;
            goto LAB_144ebc161;
          }
          uVar4 = *(uint *)(uVar7 + 0x18);
          uVar14 = uVar12;
        }
        if (uVar14 == *(ulonglong *)(param_1 + 6000)) {
          if (param_2 == 0) {
            return 1;
          }
          uVar15 = 0xb1a;
          goto LAB_144ebc161;
        }
      }
      if (uVar4 != 0xffffffff) goto LAB_144ebc3ea;
    }
  }
  uVar4 = *(uint *)(uVar7 + 0x18);
LAB_144ebc3ea:
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0) =
       *(longlong *)(param_1 + 0x488) + ((longlong)(int)uVar4 * 5 + 4) * 8;
  **(undefined8 **)(param_1 + 0x488) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
  *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2d8) = uVar7;
  return 1;
}



// FUNCTION 144ebc550 FUN_144ebc550 body=306 status=ok
// SIG undefined FUN_144ebc550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ebc550(longlong param_1,undefined8 param_2,short *param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ebc572;
  iVar5 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = 0;
      ppuVar3 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
      do {
        if (*(short *)(ppuVar3 + 1) == *param_3) goto LAB_144ebc5bd;
        uVar2 = uVar2 + 1;
        ppuVar3 = ppuVar3 + 5;
      } while (uVar2 < 0x1a);
      ppuVar3 = (undefined **)0x0;
LAB_144ebc5bd:
      iVar1 = FUN_144ebd2e0(param_1,0x5000b,ppuVar3);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ef00(param_2,*param_3,2);
        if (iVar1 == 0) {
          return 0;
        }
        if ((iVar5 == 0) &&
           (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
              (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
            (((*(int *)((longlong)ppuVar3 + 0x14) != 6 &&
              (*(int *)((longlong)ppuVar3 + 0xc) != 0x40)) &&
             (*(int *)((longlong)ppuVar3 + 0xc) != 0x2a3)))))) {
          iVar5 = 1;
        }
      }
      uVar4 = uVar4 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 < param_4);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  FUN_144ba24f0(0x14,0x215,0x76,"ssl\\t1_lib.c",0x6b8,uVar6);
  return 0;
}



// FUNCTION 144ebc690 FUN_144ebc690 body=294 status=ok
// SIG undefined FUN_144ebc690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebc690(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144ebc6ab;
  uVar5 = param_1[1];
  if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
    uVar5 = uVar5 >> 1;
    lVar4 = FUN_144ea64e0(uVar5 * 2,"ssl\\t1_lib.c",0x713);
    if (lVar4 == 0) {
      FUN_144ba24f0(0x14,0x274,0x41,"ssl\\t1_lib.c",0x714,uVar7);
    }
    else {
      uVar6 = 0;
      if (uVar5 != 0) {
        do {
          if ((ulonglong)param_1[1] < 2) break;
          puVar3 = (undefined1 *)*param_1;
          uVar1 = *puVar3;
          uVar2 = puVar3[1];
          *param_1 = (longlong)(puVar3 + 2);
          param_1[1] = param_1[1] - 2;
          *(ushort *)(lVar4 + uVar6 * 2) = CONCAT11(uVar1,uVar2);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      if (uVar6 == uVar5) {
        FUN_144ea6530(*param_2,"ssl\\t1_lib.c",0x71f);
        *param_2 = lVar4;
        *param_3 = uVar5;
        return 1;
      }
      FUN_144ea6530(lVar4,"ssl\\t1_lib.c",0x71b);
    }
  }
  return 0;
}



// FUNCTION 144ebc7c0 FUN_144ebc7c0 body=122 status=ok
// SIG undefined FUN_144ebc7c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebc7c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x488) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (param_3 != 0) {
    uVar2 = FUN_144ebc690(param_2,lVar1 + 0x2f0,lVar1 + 0x300);
    return uVar2;
  }
  uVar2 = FUN_144ebc690(param_2,lVar1 + 0x2e8,lVar1 + 0x2f8);
  return uVar2;
}



// FUNCTION 144ebc840 FUN_144ebc840 body=232 status=ok
// SIG undefined FUN_144ebc840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebc840(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xa8);
  puVar5 = (undefined8 *)(lVar4 + 0x310);
  uVar2 = FUN_144ebdc50();
  if ((int)uVar2 != 0) {
    uVar3 = 0;
    *puVar5 = 0;
    *(undefined8 *)(lVar4 + 0x318) = 0;
    *(undefined8 *)(lVar4 + 800) = 0;
    *(undefined8 *)(lVar4 + 0x328) = 0;
    *(undefined4 *)(lVar4 + 0x330) = 0;
    if (*(longlong *)(param_1 + 6000) != 0) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1768) + uVar3 * 8);
        if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
              (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
            (*(int *)(lVar4 + 0x14) != 6)) &&
           ((lVar4 = (longlong)*(int *)(lVar4 + 0x18), *(int *)((longlong)puVar5 + lVar4 * 4) == 0
            && (iVar1 = FUN_144ea40a0(lVar4), iVar1 == 0)))) {
          *(undefined4 *)((longlong)puVar5 + lVar4 * 4) = 0x102;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulonglong *)(param_1 + 6000));
    }
    return 1;
  }
  return uVar2;
}



// FUNCTION 144ebc930 FUN_144ebc930 body=92 status=ok
// SIG undefined FUN_144ebc930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebc930(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res18 [4];
  
  lVar1 = FUN_144b9e120(param_2,local_res18);
  if (lVar1 != 0) {
    lVar1 = FUN_144ebd900(param_1,local_res18[0]);
    if (lVar1 != 0) {
      *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x308) = lVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ebc990 FUN_144ebc990 body=73 status=ok
// SIG undefined FUN_144ebc990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebc990(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_144ea44e0(*(undefined4 *)(param_1 + 0x10));
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = lVar1;
  }
  return 1;
}



// FUNCTION 144ebc9e0 FUN_144ebc9e0 body=166 status=ok
// SIG undefined FUN_144ebc9e0(void)

undefined8 FUN_144ebc9e0(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  uVar2 = *(uint *)(lVar1 + 0x1c) & 0x30000;
  if (uVar2 == 0x10000) {
    *param_3 = (longlong)&DAT_149bf6574;
    return 1;
  }
  if (uVar2 == 0x20000) {
    *param_3 = (longlong)&DAT_149bf6576;
    return 1;
  }
  if (uVar2 == 0x30000) {
    *param_3 = (longlong)&DAT_149bf6574;
    return 2;
  }
  if ((*(int *)(param_1 + 0x38) == param_2) && (*(longlong *)(lVar1 + 0x1a8) != 0)) {
    *param_3 = *(longlong *)(lVar1 + 0x1a8);
    return *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1b0);
  }
  if (*(longlong *)(lVar1 + 0x198) != 0) {
    *param_3 = *(longlong *)(lVar1 + 0x198);
    return *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1a0);
  }
  *param_3 = (longlong)&DAT_149bf6540;
  return 0x1a;
}



// FUNCTION 144ebca90 FUN_144ebca90 body=171 status=ok
// SIG undefined FUN_144ebca90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebca90(longlong param_1,int param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  
  puVar5 = *(undefined2 **)(*(longlong *)(param_1 + 0x488) + 0x198);
  if (puVar5 == (undefined2 *)0x0) {
    puVar5 = &DAT_149bf6540;
    uVar4 = 0x1a;
  }
  else {
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x488) + 0x1a0);
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = 0;
      ppuVar1 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
      do {
        if (*(short *)(ppuVar1 + 1) == puVar5[uVar3]) {
          if (((*(int *)((longlong)ppuVar1 + 0x14) == 0x198) && (*(int *)(ppuVar1 + 4) != 0)) &&
             (param_2 == *(int *)(ppuVar1 + 4))) {
            return 1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        ppuVar1 = ppuVar1 + 5;
      } while (uVar2 < 0x1a);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return 0;
}



// FUNCTION 144ebcb40 FUN_144ebcb40 body=1008 status=ok
// SIG undefined FUN_144ebcb40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebcb40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  short *psVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined4 uVar14;
  int local_28 [2];
  short *local_20;
  
  local_20 = (short *)0x144ebcb53;
  sVar7 = (short)param_2;
  iVar3 = FUN_144ba6750(param_3);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  piVar1 = *(int **)(param_1 + 8);
  uVar8 = *(uint *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8;
  if (((uVar8 == 0) && (0x303 < *piVar1)) && (*piVar1 != 0x10000)) {
    if (iVar3 == 0x74) {
      FUN_144eafc90(param_1,0x2f,0x14d,0x172,"ssl\\t1_lib.c",0x411);
      return 0;
    }
    if (iVar3 == 6) {
      iVar3 = 0x390;
    }
  }
  ppuVar11 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
  uVar13 = 0;
  uVar5 = uVar13;
  do {
    if (*(short *)(ppuVar11 + 1) == sVar7) {
      if ((((uVar8 == 0) && (0x303 < *piVar1)) &&
          ((*piVar1 != 0x10000 &&
           ((*(int *)((longlong)ppuVar11 + 0xc) == 0x40 ||
            (*(int *)((longlong)ppuVar11 + 0xc) == 0x2a3)))))) ||
         ((iVar3 != *(int *)((longlong)ppuVar11 + 0x14) &&
          ((*(int *)((longlong)ppuVar11 + 0x14) != 0x390 || (iVar3 != 6)))))) {
        uVar14 = 0x422;
        goto LAB_144ebcef1;
      }
      uVar14 = FUN_144ba6750(param_3);
      iVar4 = FUN_144b9e0f0(uVar14,local_28);
      if ((iVar4 == 0) || (*(int *)(ppuVar11 + 3) != local_28[0])) {
        uVar14 = 0x429;
        goto LAB_144ebcef1;
      }
      if (iVar3 == 0x198) {
        iVar3 = FUN_144ebd650(param_1,param_3);
        if (iVar3 == 0) {
          uVar14 = 0x434;
          uVar12 = 0xa2;
          goto LAB_144ebcef7;
        }
        if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
             (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)) ||
           ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0)) {
          uVar12 = FUN_144ba6cd0(param_3);
          uVar12 = FUN_144ed31a0(uVar12);
          iVar3 = FUN_144efc1f0(uVar12);
          if ((*(int *)(ppuVar11 + 4) != 0) && (iVar3 != *(int *)(ppuVar11 + 4))) {
            uVar14 = 0x43f;
            uVar12 = 0x17a;
            goto LAB_144ebcef7;
          }
        }
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
            (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
          uVar2 = FUN_144ebd5e0(param_3);
          iVar3 = FUN_144eba1b0(param_1,uVar2,1);
          if (iVar3 == 0) {
            uVar14 = 0x447;
            uVar12 = 0x17a;
            goto LAB_144ebcef7;
          }
          if (((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0) &&
             ((sVar7 - 0x403U & 0xfeff) != 0)) {
            uVar14 = 0x450;
            uVar9 = 0x28;
            uVar12 = 0x172;
            goto LAB_144ebcefc;
          }
        }
      }
      else if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0) {
        uVar14 = 0x457;
        uVar9 = 0x28;
        uVar12 = 0x172;
        goto LAB_144ebcefc;
      }
      uVar6 = FUN_144ebc9e0(param_1,1,&local_20);
      uVar5 = uVar13;
      psVar10 = local_20;
      if (uVar6 == 0) goto LAB_144ebce11;
      goto LAB_144ebce00;
    }
    uVar5 = uVar5 + 1;
    ppuVar11 = ppuVar11 + 5;
  } while (uVar5 < 0x1a);
  uVar14 = 0x422;
LAB_144ebcef1:
  uVar12 = 0x172;
LAB_144ebcef7:
  uVar9 = 0x2f;
  goto LAB_144ebcefc;
  while( true ) {
    uVar5 = uVar5 + 1;
    psVar10 = psVar10 + 1;
    if (uVar6 <= uVar5) break;
LAB_144ebce00:
    if (sVar7 == *psVar10) break;
  }
LAB_144ebce11:
  if ((uVar5 == uVar6) &&
     ((*(int *)((longlong)ppuVar11 + 0xc) != 0x40 ||
      ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30001) != 0)))) {
    uVar14 = 0x466;
    uVar9 = 0x28;
    uVar12 = 0x172;
  }
  else {
    uVar5 = uVar13;
    if ((*(int *)((longlong)ppuVar11 + 0xc) == 0) ||
       (uVar5 = FUN_144ea44e0(*(undefined4 *)(ppuVar11 + 2)), uVar5 != 0)) {
      local_res21 = (undefined1)param_2;
      local_res20 = (undefined1)((ulonglong)param_2 >> 8);
      iVar3 = FUN_144ebdac0(ppuVar11);
      if (iVar3 != 0) {
        if (uVar5 != 0) {
          uVar8 = FUN_144ba3cb0(uVar5);
          uVar13 = (ulonglong)uVar8;
        }
        iVar3 = FUN_144b9dff0(param_1,0x5000d,iVar3,uVar13,&local_res20);
        if (iVar3 != 0) {
          *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x308) = ppuVar11;
          return 1;
        }
      }
      uVar14 = 0x47a;
      uVar9 = 0x28;
      uVar12 = 0x172;
    }
    else {
      uVar14 = 0x46b;
      uVar9 = 0x28;
      uVar12 = 0x170;
    }
  }
LAB_144ebcefc:
  FUN_144eafc90(param_1,uVar9,0x14d,uVar12,"ssl\\t1_lib.c",uVar14);
  return 0;
}



// FUNCTION 144ebcf30 FUN_144ebcf30 body=207 status=ok
// SIG undefined FUN_144ebcf30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebcf30(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x338) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x334) = 0;
  FUN_144ebb1d0(*(longlong *)(param_1 + 0xa8) + 0x338,param_1,0x5000e);
  iVar2 = FUN_144eb5b60(param_1,*(longlong *)(param_1 + 0xa8) + 0x33c,
                        *(longlong *)(param_1 + 0xa8) + 0x340,0);
  if (iVar2 != 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x578) == 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x338);
    *puVar1 = *puVar1 | 0x10;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x334);
    *puVar1 = *puVar1 | 0x1c8;
  }
  if ((*(byte *)(param_1 + 0x824) & 0x20) == 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x338);
    *puVar1 = *puVar1 | 0x40;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x334);
    *puVar1 = *puVar1 | 0x20;
  }
  return 1;
}



// FUNCTION 144ebd000 FUN_144ebd000 body=295 status=ok
// SIG undefined FUN_144ebd000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ebd000(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((((*(uint *)(lVar1 + 0x334) & *(uint *)(param_2 + 0x1c)) == 0) &&
      ((*(uint *)(param_2 + 0x20) & *(uint *)(lVar1 + 0x338)) == 0)) &&
     (iVar3 = *(int *)(lVar1 + 0x340), iVar3 != 0)) {
    uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8;
    if (uVar4 == 0) {
      iVar2 = *(int *)(param_2 + 0x2c);
      if (((iVar2 == 0x301) && (param_4 != 0)) && ((*(uint *)(param_2 + 0x1c) & 0x84) != 0)) {
        iVar2 = 0x300;
      }
      if (iVar3 < iVar2) {
        return true;
      }
      if (*(int *)(param_2 + 0x30) < *(int *)(lVar1 + 0x33c)) {
        return true;
      }
    }
    if (uVar4 == 0) {
LAB_144ebd0e3:
      iVar3 = FUN_144b9dff0(param_1,param_3,*(undefined4 *)(param_2 + 0x44),0,param_2,0x144ebd015);
      return iVar3 == 0;
    }
    iVar2 = *(int *)(param_2 + 0x34);
    if (iVar2 == 0x100) {
      iVar2 = 0xff00;
    }
    if (iVar3 == 0x100) {
      iVar3 = 0xff00;
    }
    if (iVar3 <= iVar2) {
      iVar3 = *(int *)(param_2 + 0x38);
      iVar2 = *(int *)(lVar1 + 0x33c);
      if (iVar3 == 0x100) {
        iVar3 = 0xff00;
      }
      if (iVar2 == 0x100) {
        iVar2 = 0xff00;
      }
      if (iVar3 <= iVar2) goto LAB_144ebd0e3;
    }
  }
  return true;
}



// FUNCTION 144ebd130 FUN_144ebd130 body=431 status=ok
// SIG undefined FUN_144ebd130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ebd130(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  
  uVar8 = 0;
  iVar3 = -1;
  uVar6 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 6000) != 0) {
    do {
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x1768) + uVar7 * 8);
      iVar2 = *(int *)(uVar6 + 0xc);
      if ((((iVar2 != 0x40) && (iVar2 != 0x2a3)) && (*(int *)(uVar6 + 0x14) != 0x74)) &&
         ((*(int *)(uVar6 + 0x14) != 6 &&
          ((iVar2 == 0 || (lVar4 = FUN_144ea44e0(*(undefined4 *)(uVar6 + 0x10)), lVar4 != 0)))))) {
        if (param_3 == 0) {
          lVar4 = (longlong)(int)*(uint *)(uVar6 + 0x18);
          if ((((*(uint *)(uVar6 + 0x18) < 9) &&
               (lVar1 = *(longlong *)(param_1 + 0x488),
               *(longlong *)(lVar1 + 0x20 + lVar4 * 0x28) != 0)) &&
              (*(longlong *)(lVar1 + 0x28 + lVar4 * 0x28) != 0)) &&
             (iVar2 = FUN_144ebe5c0(param_1,uVar6,*(undefined8 *)(lVar1 + 0x20 + lVar4 * 0x28),
                                    *(undefined8 *)(lVar1 + 0x28 + lVar4 * 0x28)), iVar2 != 0)) {
            lVar4 = *(longlong *)
                     (*(longlong *)(param_1 + 0x488) + ((longlong)*(int *)(uVar6 + 0x18) + 1) * 0x28
                     );
LAB_144ebd259:
            if (*(int *)(uVar6 + 0x14) == 0x198) {
              if (iVar3 == -1) {
                uVar5 = FUN_144ba6cd0();
                uVar5 = FUN_144ed31a0(uVar5);
                iVar3 = FUN_144efc1f0(uVar5);
              }
              if ((*(int *)(uVar6 + 0x20) == 0) || (iVar3 == *(int *)(uVar6 + 0x20))) break;
            }
            else {
              if (*(int *)(uVar6 + 0x14) != 0x390) break;
              uVar5 = FUN_144ba69f0(lVar4);
              iVar2 = FUN_144ebd870(uVar5,uVar6);
              if (iVar2 != 0) break;
            }
          }
        }
        else {
          lVar4 = FUN_144b9e120(param_3,local_res8);
          if (((lVar4 != 0) && (local_res8[0] == *(int *)(uVar6 + 0x18))) &&
             (iVar2 = FUN_144ebe5c0(param_1,uVar6,param_2,param_3), lVar4 = param_3, iVar2 != 0))
          goto LAB_144ebd259;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(param_1 + 6000));
  }
  if (uVar7 == *(ulonglong *)(param_1 + 6000)) {
    uVar6 = uVar8;
  }
  return uVar6;
}



// FUNCTION 144ebd2e0 FUN_144ebd2e0 body=518 status=ok
// SIG undefined FUN_144ebd2e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebd2e0(longlong param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 local_res18;
  undefined1 local_res19;
  
  if ((param_3 != 0) &&
     ((*(int *)(param_3 + 0xc) == 0 ||
      (lVar5 = FUN_144ea44e0(*(undefined4 *)(param_3 + 0x10)), lVar5 != 0)))) {
    uVar8 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
    if (((uVar8 != 0) ||
        (((iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304 || (iVar1 == 0x10000)) ||
         (*(int *)(param_3 + 0x14) != 0x74)))) &&
       (((((*(int *)(param_1 + 0x38) != 0 || (uVar8 != 0)) ||
          (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x33c) < 0x304)) ||
         (((*(int *)(param_3 + 0x14) != 0x74 && (1 < *(uint *)(param_3 + 0x10))) &&
          (*(uint *)(param_3 + 0x10) != 10)))) &&
        (iVar1 = FUN_144ea40a0((longlong)*(int *)(param_3 + 0x18)), iVar1 == 0)))) {
      if ((*(int *)(param_3 + 0x14) - 0x3d3U < 2) || (*(int *)(param_3 + 0x14) == 0x32b)) {
        if (*(int *)(param_1 + 0x38) != 0) {
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
              (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
            return 0;
          }
          if (*(int *)(param_1 + 0x38) != 0) goto LAB_144ebd49e;
        }
        if ((**(int **)(param_1 + 8) == 0x10000) &&
           (0x303 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x340))) {
          if (0x303 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x33c)) {
            return 0;
          }
          lVar5 = FUN_144b9a240(param_1);
          iVar1 = 0;
          if (lVar5 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_144babbf0(lVar5);
          }
          if (0 < iVar2) {
            do {
              lVar6 = FUN_144babc00(lVar5,iVar1);
              iVar3 = FUN_144ebd000(param_1,lVar6,0x10001,0);
              if ((iVar3 == 0) && ((*(byte *)(lVar6 + 0x1c) & 0x10) != 0)) break;
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar2);
          }
          if (iVar1 == iVar2) {
            return 0;
          }
        }
      }
LAB_144ebd49e:
      uVar4 = FUN_144ebdac0(param_3);
      local_res18 = *(undefined1 *)(param_3 + 9);
      local_res19 = *(undefined1 *)(param_3 + 8);
      uVar7 = FUN_144b9dff0(param_1,param_2,uVar4,*(undefined4 *)(param_3 + 0xc),&local_res18);
      return uVar7;
    }
  }
  return 0;
}



// FUNCTION 144ebd4f0 FUN_144ebd4f0 body=217 status=ok
// SIG undefined FUN_144ebd4f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ebd4f0(void *param_1,int param_2,ulonglong *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1 == (void *)0x0) || (*param_3 == 0x1e)) || (0x13 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  uVar4 = (ulonglong)param_2;
  memcpy(local_28,param_1,uVar4);
  if (0x13 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_144e2bb84();
  }
  local_28[uVar4] = 0;
  iVar1 = FUN_14527ff60();
  if (((iVar1 != 0) || (iVar1 = FUN_144ea96a0(), iVar1 != 0)) ||
     (iVar1 = FUN_144ea9580(), iVar1 != 0)) {
    uVar4 = *param_3;
    uVar3 = 0;
    if (uVar4 != 0) {
      puVar2 = param_3 + 1;
      do {
        if ((int)*puVar2 == iVar1) goto LAB_144ebd5b4;
        uVar3 = uVar3 + 1;
        puVar2 = (ulonglong *)((longlong)puVar2 + 4);
      } while (uVar3 < uVar4);
    }
    *(int *)((longlong)param_3 + uVar4 * 4 + 8) = iVar1;
    *param_3 = *param_3 + 1;
  }
LAB_144ebd5b4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144ebd5e0 FUN_144ebd5e0 body=99 status=ok
// SIG undefined FUN_144ebd5e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ebd5e0(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lVar3 = FUN_144ba6cd0();
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_144ed31a0(lVar3);
  iVar1 = FUN_144efc1f0(uVar4);
  iVar2 = 0;
  uVar5 = 0;
  do {
    if (*(int *)((longlong)&DAT_149bf63c0 + uVar5) == iVar1) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
    uVar5 = uVar5 + 0xc;
  } while (uVar5 < 0x168);
  return 0;
}



// FUNCTION 144ebd650 FUN_144ebd650 body=247 status=ok
// SIG undefined FUN_144ebd650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebd650(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  
  iVar1 = FUN_144ba6750(param_2);
  if (iVar1 != 0x198) {
    return 1;
  }
  uVar2 = FUN_144ba6cd0(param_2);
  uVar2 = FUN_144ed31a0(uVar2);
  iVar1 = FUN_144ed3260();
  if (iVar1 == 4) {
    cVar4 = '\0';
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
      return 1;
    }
    uVar2 = FUN_144efbee0(uVar2);
    iVar1 = FUN_144efbef0(uVar2);
    if (iVar1 == 0x196) {
      cVar4 = '\x01';
    }
    else {
      if (iVar1 != 0x197) {
        return 0;
      }
      cVar4 = '\x02';
    }
  }
  if (*(longlong *)(param_1 + 0x698) == 0) {
    return 1;
  }
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x690) != 0) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x698) + uVar3) == cVar4) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x690));
  }
  return 0;
}



// FUNCTION 144ebd750 FUN_144ebd750 body=275 status=ok
// SIG undefined FUN_144ebd750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebd750(longlong param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar3 = FUN_144bb4f60(param_2);
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = FUN_144ba6750(lVar3);
  if (iVar2 == 0x198) {
    iVar2 = FUN_144ebd650(param_1,lVar3);
    if (iVar2 == 0) {
      return 0;
    }
    sVar1 = FUN_144ebd5e0(lVar3);
    uVar5 = 0;
    iVar2 = FUN_144eba1b0(param_1,sVar1,*(int *)(param_1 + 0x38) == 0);
    if (iVar2 != 0) {
      if ((param_3 == 0) || ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) == 0)) {
        return 1;
      }
      if (sVar1 == 0x17) {
        iVar2 = 0x31a;
      }
      else {
        if (sVar1 != 0x18) {
          return 0;
        }
        iVar2 = 0x31b;
      }
      if (*(ulonglong *)(param_1 + 6000) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x1768);
        do {
          if (iVar2 == *(int *)(*plVar4 + 0x1c)) {
            return 1;
          }
          uVar5 = uVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 6000));
      }
    }
    return 0;
  }
  return 1;
}



// FUNCTION 144ebd870 FUN_144ebd870 body=135 status=ok
// SIG undefined FUN_144ebd870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ebd870(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_2 != 0) &&
     (((lVar3 = 0, *(int *)(param_2 + 0xc) == 0 ||
       (lVar3 = FUN_144ea44e0(*(undefined4 *)(param_2 + 0x10)), lVar3 != 0)) && (lVar3 != 0)))) {
    iVar1 = FUN_144ba3cd0(lVar3);
    iVar2 = FUN_144bae400(param_1);
    return iVar1 * 2 + 2 <= iVar2;
  }
  return false;
}



// FUNCTION 144ebd900 FUN_144ebd900 body=439 status=ok
// SIG undefined FUN_144ebd900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** FUN_144ebd900(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  
  uVar4 = 0;
  uVar6 = param_2 & 0xffffffff;
  if ((int)param_2 == -1) {
    uVar6 = uVar4;
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar6 = ((**(longlong **)(param_1 + 0x488) - (longlong)*(longlong **)(param_1 + 0x488)) +
              -0x20) / 0x28;
    }
    else {
      while (lVar2 = FUN_144b9e170(uVar6),
            (*(uint *)(lVar2 + 4) &
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20)) == 0) {
        uVar6 = uVar6 + 1;
        if (8 < uVar6) {
          return (undefined **)0x0;
        }
      }
      if ((int)uVar6 == 4) {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) != 0x20) {
          uVar5 = 6;
          lVar2 = 6;
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x488) + 0x118);
          do {
            if (*plVar3 != 0) {
              uVar6 = (ulonglong)uVar5;
              goto LAB_144ebd9e6;
            }
            uVar5 = uVar5 - 1;
            lVar2 = lVar2 + -1;
            plVar3 = plVar3 + -5;
          } while (3 < lVar2);
        }
        goto LAB_144ebd9eb;
      }
    }
  }
LAB_144ebd9e6:
  if (8 < (uint)uVar6) {
    return (undefined **)0x0;
  }
LAB_144ebd9eb:
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) &&
     ((int)uVar6 == 0)) {
    iVar1 = FUN_144ebd2e0(param_1,0x5000b,&PTR_s_rsa_pkcs1_md5_sha1_149bf6578);
    if (iVar1 == 0) {
      return (undefined **)0x0;
    }
    return &PTR_s_rsa_pkcs1_md5_sha1_149bf6578;
  }
  ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
  while (*(short *)(ppuVar7 + 1) != *(short *)(&DAT_149bf69b0 + (longlong)(int)uVar6 * 2)) {
    uVar4 = uVar4 + 1;
    ppuVar7 = ppuVar7 + 5;
    if (0x19 < uVar4) {
      return (undefined **)0x0;
    }
  }
  if ((*(int *)((longlong)ppuVar7 + 0xc) != 0) &&
     (lVar2 = FUN_144ea44e0(*(undefined4 *)(ppuVar7 + 2)), lVar2 == 0)) {
    return (undefined **)0x0;
  }
  iVar1 = FUN_144ebd2e0(param_1,0x5000b,ppuVar7);
  if (iVar1 != 0) {
    return ppuVar7;
  }
  return (undefined **)0x0;
}



// FUNCTION 144ebdac0 FUN_144ebdac0 body=156 status=ok
// SIG undefined FUN_144ebdac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ebdac0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_144ea44e0(*(undefined4 *)(param_1 + 0x10));
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (lVar2 == 0) {
    if (*(short *)(param_1 + 8) != 0x807) {
      iVar1 = 0;
      if (*(short *)(param_1 + 8) == 0x808) {
        iVar1 = 0xe0;
      }
      return iVar1;
    }
    return 0x80;
  }
  iVar1 = FUN_144ba3cd0(lVar2);
  return iVar1 << 2;
}



// FUNCTION 144ebdb60 FUN_144ebdb60 body=226 status=ok
// SIG undefined FUN_144ebdb60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ebdb60(undefined8 param_1,undefined8 *param_2,short *param_3,longlong param_4,
                      short *param_5,ulonglong param_6)

{
  int iVar1;
  ulonglong uVar2;
  short *psVar3;
  undefined **ppuVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    if (param_4 == 0) {
      return lVar5;
    }
    ppuVar4 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
    uVar2 = 0;
    do {
      if (*(short *)(ppuVar4 + 1) == *param_3) goto LAB_144ebdbd5;
      uVar2 = uVar2 + 1;
      ppuVar4 = ppuVar4 + 5;
    } while (uVar2 < 0x1a);
    ppuVar4 = (undefined **)0x0;
LAB_144ebdbd5:
    iVar1 = FUN_144ebd2e0(param_1,0x5000c,ppuVar4);
    if ((iVar1 != 0) && (uVar2 = 0, param_6 != 0)) {
      psVar3 = param_5;
      do {
        if (*param_3 == *psVar3) {
          lVar5 = lVar5 + 1;
          if (param_2 != (undefined8 *)0x0) {
            *param_2 = ppuVar4;
            param_2 = param_2 + 1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (uVar2 < param_6);
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  } while( true );
}



// FUNCTION 144ebdc50 FUN_144ebdc50 body=699 status=ok
// SIG undefined FUN_144ebdc50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebdc50(longlong param_1)

{
  longlong lVar1;
  short *psVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **ppuVar5;
  short *psVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar19;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  uVar14 = *(uint *)(lVar1 + 0x1c) & 0x30000;
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x1768),"ssl\\t1_lib.c",0x6df);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  ppuVar7 = (undefined **)0x0;
  *(undefined8 *)(param_1 + 0x1768) = 0;
  *(undefined8 *)(param_1 + 6000) = 0;
  if (((*(int *)(param_1 + 0x38) == 0) &&
      (psVar12 = *(short **)(lVar1 + 0x1a8), psVar12 != (short *)0x0)) && (uVar14 == 0)) {
    ppuVar16 = *(undefined ***)(lVar1 + 0x1b0);
  }
  else {
    psVar12 = *(short **)(lVar1 + 0x198);
    if ((psVar12 == (short *)0x0) || (uVar14 != 0)) {
      lVar1 = *(longlong *)(param_1 + 0x488);
      uVar9 = *(uint *)(lVar1 + 0x1c) & 0x30000;
      if (uVar9 == 0x10000) {
        ppuVar16 = (undefined **)&DAT_00000001;
      }
      else {
        if (uVar9 == 0x20000) {
          psVar12 = &DAT_149bf6576;
          ppuVar16 = (undefined **)&DAT_00000001;
          goto LAB_144ebdd76;
        }
        if (uVar9 != 0x30000) {
          if ((*(int *)(param_1 + 0x38) == 0) &&
             (psVar12 = *(short **)(lVar1 + 0x1a8), psVar12 != (short *)0x0)) {
            ppuVar16 = *(undefined ***)(lVar1 + 0x1b0);
          }
          else {
            psVar12 = *(short **)(lVar1 + 0x198);
            if (psVar12 == (short *)0x0) {
              psVar12 = &DAT_149bf6540;
              ppuVar16 = (undefined **)&DAT_0000001a;
            }
            else {
              ppuVar16 = *(undefined ***)(lVar1 + 0x1a0);
            }
          }
          goto LAB_144ebdd76;
        }
        ppuVar16 = (undefined **)0x2;
      }
      psVar12 = &DAT_149bf6574;
    }
    else {
      ppuVar16 = *(undefined ***)(lVar1 + 0x1a0);
    }
  }
LAB_144ebdd76:
  ppuVar15 = ppuVar7;
  ppuVar18 = ppuVar7;
  if (((*(uint *)(param_1 + 0x5cc) & 0x400000) == 0) && (uVar14 == 0)) {
    psVar2 = *(short **)(*(longlong *)(param_1 + 0xa8) + 0x2e8);
    ppuVar3 = *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x2f8);
    ppuVar17 = ppuVar16;
    psVar13 = psVar12;
    ppuVar16 = ppuVar3;
    psVar12 = psVar2;
  }
  else {
    psVar13 = *(short **)(*(longlong *)(param_1 + 0xa8) + 0x2e8);
    ppuVar17 = *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x2f8);
    psVar2 = psVar12;
    ppuVar3 = ppuVar16;
  }
  do {
    if (ppuVar3 == (undefined **)0x0) {
      uVar8 = 0;
      if (ppuVar18 != (undefined **)0x0) {
        ppuVar7 = (undefined **)FUN_144ea64e0((longlong)ppuVar18 * 8,"ssl\\t1_lib.c",0x6f8);
        if (ppuVar7 == (undefined **)0x0) {
          FUN_144ba24f0(0x14,0x277,0x41,"ssl\\t1_lib.c",CONCAT44(uVar19,0x6f9));
          return 0;
        }
        uVar8 = FUN_144ebdb60(param_1,ppuVar7,psVar12,ppuVar16,psVar13,ppuVar17);
      }
      *(undefined ***)(param_1 + 0x1768) = ppuVar7;
      *(undefined8 *)(param_1 + 6000) = uVar8;
      return 1;
    }
    ppuVar10 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
    ppuVar5 = ppuVar7;
    do {
      ppuVar11 = ppuVar10;
      if (*(short *)(ppuVar10 + 1) == *psVar2) break;
      ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
      ppuVar10 = ppuVar10 + 5;
      ppuVar11 = ppuVar7;
    } while (ppuVar5 < &DAT_0000001a);
    iVar4 = FUN_144ebd2e0(param_1,0x5000c,ppuVar11);
    uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    if ((iVar4 != 0) && (ppuVar17 != (undefined **)0x0)) {
      psVar6 = psVar13;
      ppuVar5 = ppuVar7;
      do {
        if (*psVar2 == *psVar6) {
          ppuVar18 = (undefined **)((longlong)ppuVar18 + 1);
          if (ppuVar15 != (undefined **)0x0) {
            *ppuVar15 = (undefined *)ppuVar11;
            ppuVar15 = ppuVar15 + 1;
          }
          break;
        }
        ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
        psVar6 = psVar6 + 1;
      } while (ppuVar5 < ppuVar17);
    }
    psVar2 = psVar2 + 1;
    ppuVar3 = (undefined **)((longlong)ppuVar3 + -1);
  } while( true );
}



// FUNCTION 144ebdf10 FUN_144ebdf10 body=314 status=ok
// SIG undefined FUN_144ebdf10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ebdf10(undefined4 *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  lVar3 = lVar5;
  do {
    lVar4 = lVar3 + 1;
    lVar2 = lVar5;
    if (*(char *)(param_3 + lVar3) != (&DAT_14997781c)[lVar3]) {
      do {
        lVar4 = lVar2 + 1;
        lVar3 = lVar5;
        if (*(char *)(param_3 + lVar2) != (&DAT_149bf6b68)[lVar2]) {
          do {
            lVar4 = lVar3 + 1;
            lVar2 = lVar5;
            if (*(char *)(param_3 + lVar3) != (&DAT_149bf6b70)[lVar3]) {
              do {
                lVar3 = lVar2 + 1;
                if (*(char *)(param_3 + lVar2) != (&DAT_149bf012c)[lVar2]) {
                  do {
                    lVar3 = lVar5 + 1;
                    if (*(char *)(param_3 + lVar5) != (&DAT_149bdc084)[lVar5]) {
                      iVar1 = FUN_144ea96a0(param_3);
                      *param_2 = iVar1;
                      if (iVar1 == 0) {
                        iVar1 = FUN_144ea9580(param_3);
                        *param_2 = iVar1;
                      }
                      return;
                    }
                    lVar5 = lVar3;
                  } while (lVar3 != 6);
                  *param_1 = 0x198;
                  return;
                }
                lVar2 = lVar3;
              } while (lVar3 != 4);
              *param_1 = 0x74;
              return;
            }
            lVar3 = lVar4;
          } while (lVar4 != 4);
          *param_1 = 0x390;
          return;
        }
        lVar2 = lVar4;
      } while (lVar4 != 8);
      *param_1 = 0x390;
      return;
    }
    lVar3 = lVar4;
  } while (lVar4 != 4);
  *param_1 = 6;
  return;
}



// FUNCTION 144ebe050 FUN_144ebe050 body=433 status=ok
// SIG undefined FUN_144ebe050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ebe050(void *param_1,int param_2,ulonglong *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  char local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  local_58 = 0;
  local_54 = 0;
  if (((param_1 == (void *)0x0) || (*param_3 == 0x34)) || (0x27 < param_2)) goto LAB_144ebe137;
  uVar6 = (ulonglong)param_2;
  memcpy(local_50,param_1,uVar6);
  if (0x27 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_144e2bb84();
  }
  local_50[uVar6] = '\0';
  pcVar3 = strchr(local_50,0x2b);
  if (pcVar3 == (char *)0x0) {
    ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
    uVar6 = uVar5;
    do {
      if (*ppuVar7 != (undefined *)0x0) {
        pcVar3 = local_50;
        lVar8 = (longlong)*ppuVar7 - (longlong)pcVar3;
        do {
          cVar1 = *pcVar3;
          cVar2 = pcVar3[lVar8];
          if (cVar1 != cVar2) break;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          *(undefined2 *)((longlong)param_3 + *param_3 * 2 + 8) = *(undefined2 *)(ppuVar7 + 1);
          *param_3 = *param_3 + 1;
          break;
        }
      }
      uVar6 = uVar6 + 1;
      ppuVar7 = ppuVar7 + 5;
    } while (uVar6 < 0x1a);
    bVar9 = uVar6 == 0x1a;
  }
  else {
    *pcVar3 = '\0';
    if (pcVar3[1] == '\0') goto LAB_144ebe137;
    FUN_144ebdf10(&local_58,&local_54,local_50);
    FUN_144ebdf10(&local_58,&local_54,pcVar3 + 1);
    if ((local_58 == 0) || (local_54 == 0)) goto LAB_144ebe137;
    ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
    uVar6 = uVar5;
    do {
      if ((*(int *)((longlong)ppuVar7 + 0xc) == local_54) &&
         (*(int *)((longlong)ppuVar7 + 0x14) == local_58)) {
        *(undefined2 *)((longlong)param_3 + *param_3 * 2 + 8) = *(undefined2 *)(ppuVar7 + 1);
        *param_3 = *param_3 + 1;
        bVar9 = uVar6 == 0x1a;
        goto LAB_144ebe12a;
      }
      uVar6 = uVar6 + 1;
      ppuVar7 = ppuVar7 + 5;
    } while (uVar6 < 0x1a);
    bVar9 = uVar6 == 0x1a;
  }
LAB_144ebe12a:
  if ((!bVar9) && (uVar6 = *param_3 - 1, uVar6 != 0)) {
    puVar4 = param_3 + 1;
    do {
      if ((short)*puVar4 == *(short *)((longlong)param_3 + uVar6 * 2 + 8)) {
        *param_3 = uVar6;
        break;
      }
      uVar5 = uVar5 + 1;
      puVar4 = (ulonglong *)((longlong)puVar4 + 2);
    } while (uVar5 < uVar6);
  }
LAB_144ebe137:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 144ebe210 FUN_144ebe210 body=307 status=ok
// SIG undefined FUN_144ebe210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ebe210(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  if (param_3 == -1) {
    return true;
  }
  iVar2 = FUN_144bb5ef0(param_2);
  ppuVar8 = (undefined **)0x0;
  if (param_3 != 0) {
    return iVar2 == param_3;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
       (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) != 0)) {
    ppuVar9 = *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x300);
    ppuVar5 = (undefined **)0x1;
  }
  else {
    ppuVar9 = *(undefined ***)(param_1 + 6000);
    ppuVar5 = ppuVar8;
  }
  ppuVar7 = ppuVar8;
  if (ppuVar9 != (undefined **)0x0) {
    do {
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar4 = *(undefined ***)(*(longlong *)(param_1 + 0x1768) + (longlong)ppuVar7 * 8);
      }
      else {
        ppuVar3 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
        ppuVar6 = ppuVar8;
        do {
          ppuVar4 = ppuVar3;
          if (*(short *)(ppuVar3 + 1) ==
              *(short *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) +
                        (longlong)ppuVar7 * 2)) break;
          ppuVar6 = (undefined **)((longlong)ppuVar6 + 1);
          ppuVar3 = ppuVar3 + 5;
          ppuVar4 = ppuVar8;
        } while (ppuVar6 < (undefined **)0x1a);
      }
      if ((ppuVar4 != (undefined **)0x0) && (iVar2 == *(int *)((longlong)ppuVar4 + 0x1c))) {
        return true;
      }
      ppuVar7 = (undefined **)((longlong)ppuVar7 + 1);
    } while (ppuVar7 < ppuVar9);
  }
  return false;
}



// FUNCTION 144ebe350 FUN_144ebe350 body=130 status=ok
// SIG undefined FUN_144ebe350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebe350(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_144bb4f40(param_2);
  iVar4 = 0;
  iVar1 = FUN_144babbf0(param_1);
  if (0 < iVar1) {
    do {
      uVar3 = FUN_144babc00(param_1,iVar4);
      iVar1 = FUN_144bb54b0(uVar2,uVar3);
      if (iVar1 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(param_1);
    } while (iVar4 < iVar1);
  }
  return 0;
}



// FUNCTION 144ebe3e0 FUN_144ebe3e0 body=136 status=ok
// SIG undefined FUN_144ebe3e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ebe3e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ebe400;
  uVar1 = 0xffffffff;
  lVar2 = FUN_144bb4f60(param_3);
  if (lVar2 != 0) {
    uVar1 = FUN_144ba67f0(lVar2);
  }
  if (param_1 == 0) {
    FUN_144b9e040(param_2,param_4,uVar1,0,param_3,uVar3);
  }
  else {
    FUN_144b9dff0(param_1);
  }
  return;
}



// FUNCTION 144ebe470 FUN_144ebe470 body=183 status=ok
// SIG undefined FUN_144ebe470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebe470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_18;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0x144ebe48a;
  uVar1 = FUN_144ec5660(param_3);
  if ((uVar1 >> 0xd & 1) == 0) {
    iVar2 = FUN_144bb5f30(param_3,&local_14,&local_10,&local_18,0);
    if (iVar2 == 0) {
      local_18 = 0xffffffff;
    }
    if (local_14 == 0) {
      local_14 = (int)local_10;
    }
    if (param_1 == 0) {
      uVar3 = FUN_144b9e040(param_2,param_4,local_18,local_14,param_3);
    }
    else {
      uVar3 = FUN_144b9dff0(param_1);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


