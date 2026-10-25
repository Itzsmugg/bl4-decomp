// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b25444 FUN_140b25444 body=101 status=ok
// SIG undefined FUN_140b25444(void)

ulonglong FUN_140b25444(longlong *param_1,short *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 2;
    uVar3 = 0;
    do {
      if (*(short *)(lVar2 + uVar3 * 2) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_140b25487;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -2;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1405b572a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(short *)(lVar2 + uVar4 * 2) = *param_2;
LAB_140b25487:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140b254aa FUN_140b254aa body=362 status=ok
// SIG undefined FUN_140b254aa(void)

void FUN_140b254aa(longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != (undefined8 *)0x0) && (param_3 != -1)) {
    iVar3 = FUN_140b25616();
    if ((((iVar3 != 3) &&
         ((((*(int *)(param_1 + 0x1c) != 0 && (uVar4 = *(uint *)(param_1 + 0x18), -1 < (int)uVar4))
           && ((int)uVar4 < DAT_14c9647dc)) &&
          ((plVar6 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x1c))))))) &&
        ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar1 = *plVar6, lVar1 != 0)) {
      local_38 = *param_2;
      local_40 = *(undefined4 *)(param_2 + 5);
      local_48 = param_2[4];
      FUN_140b256b6(lVar1,*(undefined4 *)(param_1 + 0x20));
      if ((param_4 != '\0') && (sVar2 = *(short *)((longlong)param_2 + 10), sVar2 != -1)) {
        while ((-1 < sVar2 && (uVar4 = (uint)sVar2, (int)uVar4 < *(int *)(param_1 + 0x50)))) {
          lVar5 = *(longlong *)(param_1 + 0x48);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar5 = param_1 + 0x38;
          }
          if (((*(uint *)(lVar5 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0) ||
             (puVar7 = (undefined8 *)((ulonglong)uVar4 * 0x30 + *(longlong *)(param_1 + 0x28)),
             puVar7 == (undefined8 *)0x0)) break;
          local_38 = *puVar7;
          local_40 = *(undefined4 *)(puVar7 + 5);
          local_48 = puVar7[4];
          FUN_140b256b6(lVar1,*(undefined4 *)(param_1 + 0x20),&local_48);
          sVar2 = *(short *)((longlong)puVar7 + 10);
          if (sVar2 == -1) break;
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b25616 FUN_140b25616 body=159 status=ok
// SIG undefined FUN_140b25616(void)

ulonglong FUN_140b25616(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if (((*(int *)(param_1 + 0x14) != 0) && (uVar5 = *(uint *)(param_1 + 0x10), -1 < (int)uVar5)) &&
     ((int)uVar5 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x14))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar4;
      }
      else {
        lVar2 = 0;
      }
      uVar5 = *(uint *)(lVar2 + 0x4c);
      goto LAB_140b2566e;
    }
  }
  cVar1 = FUN_144729dda(param_1 + 8);
  uVar5 = 0;
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 8);
    if ((*(longlong *)(lVar2 + 0x30) != 0) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x360) != 0)) {
      uVar3 = FUN_14490d72a();
      return uVar3;
    }
  }
LAB_140b2566e:
  return (ulonglong)uVar5;
}



// FUNCTION 140b256b6 FUN_140b256b6 body=249 status=ok
// SIG undefined FUN_140b256b6(void)

void FUN_140b256b6(longlong param_1,int param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar5 = 0;
    lVar7 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xf8) + lVar5) == param_2) {
        lVar7 = *(longlong *)(param_1 + 0xf8) - lVar7;
        if (lVar7 != 0) {
          local_30 = (int)param_3[1];
          uVar6 = *param_3;
          local_38 = uVar6;
          if (local_30 != 0) {
            uVar3 = FUN_144a78877(uVar6 & 0xffffffff,local_30);
            uVar6 = (ulonglong)uVar3;
          }
          puVar4 = (undefined4 *)FUN_140b257b0(lVar7 + 8,uVar6,&local_38);
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          uVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *puVar4 = (int)*param_3;
          puVar4[1] = uVar1;
          puVar4[2] = (int)uVar6;
          puVar4[3] = uVar2;
          *(ulonglong *)(puVar4 + 4) = param_3[2];
          *(undefined1 *)(param_1 + 0x6a) = 1;
        }
        break;
      }
      lVar7 = lVar7 + -0x60;
      lVar5 = lVar5 + 0x60;
    } while (-lVar7 != (longlong)*(int *)(param_1 + 0x100) * 0x60);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  local_28 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  FUN_1405f6d44(lVar5 + 0x16c8,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b257b0 FUN_140b257b0 body=150 status=ok
// SIG undefined FUN_140b257b0(void)

longlong FUN_140b257b0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140b25848();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x30;
    if (lVar3 + lVar2 != 0) goto LAB_140b2580a;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_140b258ac(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x30;
LAB_140b2580a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x10;
}



// FUNCTION 140b25848 FUN_140b25848 body=99 status=ok
// SIG undefined FUN_140b25848(void)

int FUN_140b25848(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x30;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140b258ac FUN_140b258ac body=654 status=ok
// SIG undefined FUN_140b258ac(void)

int * FUN_140b258ac(longlong *param_1,int *param_2,uint param_3,longlong *param_4,char *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_140044672(param_1,iVar22);
    }
    lVar23 = (longlong)iVar22;
    iVar16 = FUN_144a54ea4(param_1 + 2,1);
    plVar18 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar18 = param_1 + 2;
    }
    iVar20 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar20 = iVar16;
    }
    bVar5 = (byte)iVar16 & 0x1f;
    puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar20 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar23 = (longlong)iVar22;
    iVar16 = *(int *)(*param_1 + 4 + lVar23 * 0x30);
    *(int *)(param_1 + 6) = iVar16;
    iVar20 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar20;
    if (iVar20 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x30) = 0xffffffff;
    }
  }
  plVar18 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar18 = (longlong *)param_1[4];
  }
  iVar16 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar16 = iVar22;
  }
  puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar16 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar22 & 0x1f);
  uVar6 = DAT_14c948620;
  uVar14 = DAT_14c948618;
  lVar19 = *param_1;
  lVar23 = lVar23 * 0x30;
  puVar2 = (undefined4 *)(lVar19 + lVar23);
  local_50 = DAT_14c948620;
  local_58 = DAT_14c948618;
  puVar4 = (undefined8 *)*param_4;
  *(undefined8 *)(lVar19 + lVar23) = *puVar4;
  *(undefined4 *)(lVar19 + 8 + lVar23) = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(lVar19 + 0x10 + lVar23) = uVar14;
  *(undefined4 *)(lVar19 + 0x18 + lVar23) = uVar6;
  *(undefined4 *)(lVar19 + 0x1c + lVar23) = 0;
  *(undefined8 *)(lVar19 + 0x20 + lVar23) = 0;
  *(undefined4 *)(lVar19 + 0x28 + lVar23) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar16 = FUN_140b25848(param_1,param_3,puVar2);
    if (iVar16 != -1) {
      lVar23 = *param_1;
      lVar19 = (longlong)iVar16 * 0x30;
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      uVar10 = puVar2[4];
      uVar11 = puVar2[5];
      uVar12 = puVar2[6];
      uVar13 = puVar2[7];
      *(undefined8 *)(lVar23 + 0x20 + lVar19) = *(undefined8 *)(puVar2 + 8);
      puVar3 = (undefined4 *)(lVar23 + 0x10 + lVar19);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(lVar23 + lVar19);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      FUN_143d33618(param_1,iVar22);
      cVar15 = '\x01';
      goto LAB_140b259d4;
    }
  }
  cVar15 = '\0';
LAB_140b259d4:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar15;
  }
  if (cVar15 == '\0') {
    uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar16 = 1;
    if (3 < uVar17) {
      uVar21 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar23 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar23 & 0x1f);
    }
    if (((int)uVar17 < 1) || (iVar16 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      puVar2[0xb] = param_3;
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = param_1 + 7;
      }
      puVar2[10] = *(undefined4 *)
                    ((longlong)plVar18 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = param_1 + 7;
      }
      *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar22;
    }
    else {
      *(int *)(param_1 + 9) = iVar16;
      FUN_14577313c(param_1);
    }
  }
  *param_2 = iVar22;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b25b3c FUN_140b25b3c body=9 status=ok
// SIG undefined FUN_140b25b3c(void)

void FUN_140b25b3c(longlong param_1)

{
  FUN_140b25b46(param_1 + 0x10);
  return;
}



// FUNCTION 140b25b46 FUN_140b25b46 body=151 status=ok
// SIG undefined FUN_140b25b46(void)

void FUN_140b25b46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aba0f40;
  FUN_140b25cd9(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140b25c15(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140b25bdd(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140b25c9c(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140b25c50(param_1);
  return;
}



// FUNCTION 140b25bdd FUN_140b25bdd body=56 status=ok
// SIG undefined FUN_140b25bdd(void)

void FUN_140b25bdd(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_1409f518e(param_1);
      FUN_1409f518e(param_1 + -0x18);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b25c15 FUN_140b25c15 body=59 status=ok
// SIG undefined FUN_140b25c15(void)

void FUN_140b25c15(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 140b25c50 FUN_140b25c50 body=76 status=ok
// SIG undefined FUN_140b25c50(void)

void FUN_140b25c50(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab9f0f0;
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140b25c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140b25c9c FUN_140b25c9c body=61 status=ok
// SIG undefined FUN_140b25c9c(void)

void FUN_140b25c9c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      FUN_140298e51(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b25cd9 FUN_140b25cd9 body=66 status=ok
// SIG undefined FUN_140b25cd9(void)

void FUN_140b25cd9(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 140b25d1c FUN_140b25d1c body=1264 status=ok
// SIG undefined FUN_140b25d1c(void)

void FUN_140b25d1c(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  longlong **pplVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined4 uVar13;
  undefined1 auStack_1f8 [32];
  undefined8 **local_1d8;
  longlong **local_1d0;
  undefined4 local_1c8;
  longlong **local_1c0;
  undefined4 local_1b8;
  longlong **local_1b0;
  undefined4 local_1a8;
  longlong **local_1a0;
  undefined4 local_198;
  longlong **local_190;
  undefined4 local_188;
  longlong **local_180;
  undefined4 local_178;
  undefined1 local_169;
  longlong *local_168;
  longlong *local_160;
  longlong **local_158;
  undefined4 local_150;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  longlong **local_f8;
  undefined4 local_f0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  longlong **local_98;
  undefined4 local_90;
  longlong **local_88;
  undefined4 local_80;
  undefined1 local_71;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_168 = param_2;
  local_160 = param_3;
  FUN_140146ccc(param_1 + 0x18,param_5);
  FUN_140146ccc(param_1 + 0x38,param_6);
  *(undefined4 *)(param_1 + 0x60) = param_4;
  *(undefined4 *)(param_1 + 0x278) = 4;
  *(longlong *)(param_1 + 0x280) = param_1;
  bVar6 = 1;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    bVar5 = 1;
  }
  else {
    bVar5 = 1;
    if (**(char **)(*param_2 + 0x20) == '\0') {
      local_180 = &local_168;
      local_178 = 1;
      bVar5 = FUN_140b262c0(&local_169);
      bVar5 = bVar5 ^ 1;
      param_3 = local_160;
    }
  }
  if (((param_3 != (longlong *)0x0) && (*param_3 != 0)) && (**(char **)(*param_3 + 0x20) == '\0')) {
    local_190 = &local_160;
    local_188 = 1;
    bVar6 = FUN_140b262c0(&local_169);
    bVar6 = bVar6 ^ 1;
  }
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0))
  {
    FUN_1407a4724(param_1);
  }
  plVar4 = local_160;
  plVar3 = local_168;
  FUN_140b26490(param_1,&local_f8,0);
  if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) && (**(char **)(*plVar3 + 0x20) == '\0')) {
    dVar12 = (double)*(float *)(param_1 + 0x60);
    local_d8 = dVar12 * local_d8;
    dStack_d0 = dVar12 * dStack_d0;
    local_c8 = dVar12 * local_c8;
    dStack_c0 = dStack_c0 * 0.0;
  }
  FUN_140b26490(param_1,&local_158,1);
  if (((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) && (**(char **)(*plVar4 + 0x20) == '\0')) {
    dVar12 = (double)*(float *)(param_1 + 0x60);
    local_138 = dVar12 * local_138;
    dStack_130 = dVar12 * dStack_130;
    local_128 = dVar12 * local_128;
    dStack_120 = dStack_120 * 0.0;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (DAT_14c761724 == '\0') {
    pplVar9 = (longlong **)*plVar1;
  }
  else {
    local_1d8 = &local_158;
    FUN_140b2ab50(&local_88,plVar3,plVar4,&local_f8);
    *plVar1 = (longlong)local_88;
    pplVar9 = local_88;
  }
  if ((pplVar9 != (longlong **)0x0) && (pplVar9[2] != (longlong *)0x0)) {
    FUN_140b266a8(plVar1,param_1 + 0x278);
    local_68 = local_160;
    local_70 = local_168;
    local_f0 = 1;
    local_f8 = &local_70;
    cVar7 = FUN_140b263aa(&local_71);
    if (cVar7 == '\0') {
      fVar10 = 0.0;
    }
    else {
      local_150 = 1;
      local_158 = &local_70;
      fVar10 = (float)FUN_140b2620e(&local_71);
      fVar10 = fVar10 + 0.0;
    }
    local_80 = 1;
    local_88 = &local_68;
    cVar8 = FUN_140b263aa(&local_71);
    if (cVar8 != '\0') {
      local_90 = 1;
      local_98 = &local_68;
      fVar11 = (float)FUN_140b2620e(&local_71);
      fVar10 = fVar10 + fVar11;
      if (cVar7 != '\0') {
        fVar10 = fVar10 * 0.5;
      }
    }
    *(float *)(param_1 + 0x114) = fVar10;
    if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
      uVar13 = 0x3f800000;
    }
    else {
      uVar13 = *(undefined4 *)(param_1 + 0x60);
    }
    local_1d8 = (undefined8 **)CONCAT71(local_1d8._1_7_,1);
    FUN_140b267ac(param_1 + 0x118,plVar1,fVar10,uVar13);
    if (bVar5 == 0 && bVar6 == 0) {
      local_198 = 1;
      local_1a0 = &local_168;
      cVar7 = FUN_146e203b4(&local_169);
      if (cVar7 == '\0') {
        local_1a8 = 1;
        local_1b0 = &local_168;
        FUN_146e20b4c(&local_169);
      }
      local_1b8 = 1;
      local_1c0 = &local_160;
      cVar7 = FUN_146e203b4(&local_169);
      if (cVar7 == '\0') {
        local_1c8 = 1;
        local_1d0 = &local_160;
        FUN_146e20b4c(&local_169);
      }
    }
  }
  if ((int)param_5[1] == 0) {
LAB_140b26091:
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_5,0,0,0x10);
      *(undefined4 *)(param_5 + 1) = 0;
      goto LAB_140b26091;
    }
  }
  if ((int)param_6[1] != 0) {
    puVar2 = (undefined8 *)*param_6;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140b260af;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_6,0,0,0x10);
    *(undefined4 *)(param_6 + 1) = 0;
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
LAB_140b260af:
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b2620e FUN_140b2620e body=177 status=ok
// SIG undefined FUN_140b2620e(void)

float FUN_140b2620e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  
  if ((longlong)(int)param_2[1] == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    lVar3 = 0;
    do {
      plVar4 = *(longlong **)(*param_2 + lVar3);
      if ((plVar4 == (longlong *)0x0) || (lVar2 = *plVar4, lVar2 == 0)) goto LAB_140b26268;
      iVar1 = *(int *)(lVar2 + 0x1c);
      if (iVar1 == 0xb) {
        plVar4 = (longlong *)(lVar2 + 0x40);
LAB_140b26246:
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (1 < *(byte *)(lVar2 + 0x90))) {
          fVar6 = fVar6 + (float)*(double *)(lVar2 + 0x148);
        }
      }
      else if (iVar1 == 2) {
        iVar1 = (int)plVar4[1];
        if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x418))) &&
           (lVar5 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)iVar1 * 4),
           lVar5 != -1)) {
          plVar4 = (longlong *)(lVar5 * 8 + *(longlong *)(lVar2 + 0x440));
          goto LAB_140b26246;
        }
      }
      else if (iVar1 == 0xc) {
        plVar4 = (longlong *)(lVar2 + 0x128);
        goto LAB_140b26246;
      }
LAB_140b26268:
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar3);
  }
  return fVar6;
}



// FUNCTION 140b262c0 FUN_140b262c0 body=233 status=ok
// SIG undefined FUN_140b262c0(void)

undefined8 FUN_140b262c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((longlong)(int)param_2[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    lVar4 = 0;
    do {
      plVar6 = *(longlong **)(*param_2 + lVar4);
      if (((plVar6 == (longlong *)0x0) || (lVar2 = *plVar6, lVar2 == 0)) ||
         (**(char **)(lVar2 + 0x20) != '\0')) {
        bVar8 = false;
      }
      else {
        iVar1 = *(int *)(lVar2 + 0x1c);
        if (iVar1 == 0xb) {
          plVar6 = (longlong *)(lVar2 + 0x40);
LAB_140b2630e:
          lVar2 = *plVar6;
          if (lVar2 == 0) goto LAB_140b263a4;
          if (*(byte *)(lVar2 + 0x90) < 2) {
            bVar5 = *(byte *)(lVar2 + 0x90) == 0 | 2;
          }
          else {
            bVar5 = *(byte *)(lVar2 + 0x1ac);
          }
        }
        else {
          if (iVar1 == 2) {
            iVar1 = (int)plVar6[1];
            if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x418))) &&
               (lVar7 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)iVar1 * 4),
               lVar7 != -1)) {
              plVar6 = (longlong *)(lVar7 * 8 + *(longlong *)(lVar2 + 0x440));
              goto LAB_140b2630e;
            }
          }
          else if (iVar1 == 0xc) {
            plVar6 = (longlong *)(lVar2 + 0x128);
            goto LAB_140b2630e;
          }
LAB_140b263a4:
          bVar5 = 0;
        }
        bVar8 = bVar5 == 1;
      }
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),(byte)uVar3 & bVar8);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar4);
  }
  return uVar3;
}



// FUNCTION 140b263aa FUN_140b263aa body=229 status=ok
// SIG undefined FUN_140b263aa(void)

undefined8 FUN_140b263aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((longlong)(int)param_2[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    lVar4 = 0;
    do {
      plVar6 = *(longlong **)(*param_2 + lVar4);
      if (((plVar6 == (longlong *)0x0) || (lVar2 = *plVar6, lVar2 == 0)) ||
         (**(char **)(lVar2 + 0x20) != '\0')) {
        bVar8 = false;
      }
      else {
        iVar1 = *(int *)(lVar2 + 0x1c);
        if (iVar1 == 0xb) {
          plVar6 = (longlong *)(lVar2 + 0x40);
LAB_140b263f4:
          lVar2 = *plVar6;
          if (lVar2 == 0) goto LAB_140b2648a;
          if (*(byte *)(lVar2 + 0x90) < 2) {
            bVar5 = *(byte *)(lVar2 + 0x90) == 0 | 2;
          }
          else {
            bVar5 = *(byte *)(lVar2 + 0x1ac);
          }
        }
        else {
          if (iVar1 == 2) {
            iVar1 = (int)plVar6[1];
            if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x418))) &&
               (lVar7 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)iVar1 * 4),
               lVar7 != -1)) {
              plVar6 = (longlong *)(lVar7 * 8 + *(longlong *)(lVar2 + 0x440));
              goto LAB_140b263f4;
            }
          }
          else if (iVar1 == 0xc) {
            plVar6 = (longlong *)(lVar2 + 0x128);
            goto LAB_140b263f4;
          }
LAB_140b2648a:
          bVar5 = 0;
        }
        bVar8 = bVar5 != 3;
      }
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),(byte)uVar3 & bVar8);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar4);
  }
  return uVar3;
}



// FUNCTION 140b26490 FUN_140b26490 body=535 status=ok
// SIG undefined FUN_140b26490(void)

undefined8 * FUN_140b26490(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  if (param_3 == 0) {
    local_80 = *(double *)(param_1 + 0xa0);
    local_a8 = *(double *)(param_1 + 0x80);
    local_a0 = *(double *)(param_1 + 0x88);
    local_88 = *(double *)(param_1 + 0x98);
    local_98 = *(double *)(param_1 + 0x90);
    local_78 = *(double *)(param_1 + 0xa8);
    local_58 = local_a8 * local_80 - local_88 * local_a0;
    local_60 = local_98 * local_88 - local_78 * local_a8;
    local_68 = local_a0 * local_78 - local_80 * local_98;
    local_48 = *(undefined8 *)(param_1 + 0x68);
    local_40 = *(undefined8 *)(param_1 + 0x70);
    uVar1 = (undefined4)*(undefined8 *)(param_1 + 0x78);
    uVar2 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  }
  else {
    local_80 = *(double *)(param_1 + 0xe8);
    local_a8 = *(double *)(param_1 + 200);
    local_a0 = *(double *)(param_1 + 0xd0);
    local_88 = *(double *)(param_1 + 0xe0);
    local_98 = *(double *)(param_1 + 0xd8);
    local_78 = *(double *)(param_1 + 0xf0);
    local_58 = local_a8 * local_80 - local_88 * local_a0;
    local_60 = local_98 * local_88 - local_78 * local_a8;
    local_68 = local_a0 * local_78 - local_80 * local_98;
    local_48 = *(undefined8 *)(param_1 + 0xb0);
    local_40 = *(undefined8 *)(param_1 + 0xb8);
    uVar1 = (undefined4)*(undefined8 *)(param_1 + 0xc0);
    uVar2 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
  }
  local_50 = 0;
  local_70 = 0;
  local_90 = 0;
  local_38 = CONCAT44(uVar2,uVar1);
  local_30 = 0x3ff0000000000000;
  FUN_1448ac920(param_2);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b266a8 FUN_140b266a8 body=260 status=ok
// SIG undefined FUN_140b266a8(void)

void FUN_140b266a8(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(undefined8 *)(lVar5 + 0x348) = param_2;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar5 = *(longlong *)(lVar6 + 8);
    if (lVar5 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b2671b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b267ac FUN_140b267ac body=387 status=ok
// SIG undefined FUN_140b267ac(void)

void FUN_140b267ac(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),(*(byte *)(param_1 + 0x20) & 1) == 0);
  FUN_140b26e80(param_2,uVar1);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(param_1 + 0x20)) &
          0xffffffffffffff08;
  uVar1 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 3);
  FUN_140b279e2(param_2,uVar1,param_1[2],param_1[3],*param_1,param_1[1]);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(param_1 + 0x20)) &
          0xffffffffffffff04;
  uVar1 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
  FUN_140b272d6(param_2,uVar1,param_1[4]);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(param_1 + 0x20)) &
          0xffffffffffffff02;
  uVar1 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  FUN_140b27192(param_2,uVar1);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(param_1 + 0x20)) &
          0xffffffffffffff10;
  FUN_140b26f84(param_2,CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 4));
  FUN_140b26be2(param_1 + 10,param_2,param_3,param_4);
  FUN_140b269ea(param_1 + 0x11,param_2,param_3);
  FUN_140b26976(param_1 + 0x19,param_2,param_3);
  fVar5 = 3.4028235e+38;
  uVar3 = 0x7f7fffff;
  if ((char)*(byte *)(param_1 + 0x20) < '\0') {
    uVar3 = param_1[5];
  }
  uVar4 = 0x7f7fffff;
  if ((*(byte *)(param_1 + 0x20) & 0x20) != 0) {
    uVar4 = param_1[7];
  }
  FUN_140b274d8(param_2,uVar3,uVar4);
  uVar3 = 0x7f7fffff;
  if ((*(byte *)((longlong)param_1 + 0x81) & 1) != 0) {
    uVar3 = param_1[6];
  }
  if ((*(byte *)(param_1 + 0x20) & 0x40) != 0) {
    fVar5 = (float)param_1[8] * 0.017453292;
  }
  FUN_140b276e0(param_2,uVar3,fVar5,*(undefined1 *)(param_1 + 0x56));
  FUN_140b27088(param_2,param_1[9]);
  FUN_140b26930(param_2,param_1 + 0x22,param_1 + 0x3c,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 140b26930 FUN_140b26930 body=69 status=ok
// SIG undefined FUN_140b26930(void)

void FUN_140b26930(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x10) != 0)) {
    FUN_140b29074(param_1,param_2,param_4);
    FUN_140b29d2a(param_1,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 140b26976 FUN_140b26976 body=115 status=ok
// SIG undefined FUN_140b26976(void)

void FUN_140b26976(float *param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_140b28aa2(param_2,(char)param_2,param_1);
  }
  if (((uint)param_1[4] & 1) == 0) {
    cVar1 = *(char *)(param_1 + 6);
  }
  else {
    cVar1 = *(char *)(param_1 + 6);
    if ((((param_1[1] * param_3 == 0.0) && (!NAN(param_1[1] * param_3))) &&
        (param_3 * *param_1 == 0.0)) &&
       ((!NAN(param_3 * *param_1) && (cVar2 = '\0', cVar1 == '\x01')))) goto LAB_140b269c6;
  }
  cVar2 = cVar1;
LAB_140b269c6:
  FUN_140b26a92(param_2,3,cVar2);
  return;
}



// FUNCTION 140b269ea FUN_140b269ea body=168 status=ok
// SIG undefined FUN_140b269ea(void)

void FUN_140b269ea(float *param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  char cVar2;
  
  if ((*(char *)(param_1 + 7) == '\x01') || (*(char *)((longlong)param_1 + 0x1d) == '\x01')) {
    FUN_140b284b4(param_2,(char)param_2,param_1);
  }
  if (((uint)param_1[4] & 1) == 0) {
    cVar1 = *(char *)(param_1 + 7);
LAB_140b26a37:
    FUN_140b26a92(param_2,4,cVar1);
    cVar1 = *(char *)((longlong)param_1 + 0x1d);
  }
  else {
    cVar1 = *(char *)(param_1 + 7);
    if ((((param_1[1] * param_3 != 0.0) || (NAN(param_1[1] * param_3))) ||
        (param_3 * *param_1 != 0.0)) || (NAN(param_3 * *param_1))) goto LAB_140b26a37;
    cVar2 = '\0';
    if (cVar1 == '\x01') {
      cVar1 = '\0';
    }
    FUN_140b26a92(param_2,4,cVar1);
    cVar1 = *(char *)((longlong)param_1 + 0x1d);
    if (cVar1 == '\x01') goto LAB_140b26a4b;
  }
  cVar2 = cVar1;
LAB_140b26a4b:
  FUN_140b26a92(param_2,5,cVar2);
  return;
}



// FUNCTION 140b26a92 FUN_140b26a92 body=336 status=ok
// SIG undefined FUN_140b26a92(void)

void FUN_140b26a92(longlong *param_1,char param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar4 = *param_1;
  if (((lVar4 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 != 0)) &&
     (*(int *)(lVar4 + 8) == 1)) {
    if (param_2 == '\x05') {
      uVar7 = 2;
      if (param_3 < 2) {
        uVar7 = param_3;
      }
      *(uint *)(lVar4 + 0x154) = uVar7;
    }
    else if (param_2 == '\x04') {
      uVar7 = 2;
      if (param_3 < 2) {
        uVar7 = param_3;
      }
      *(uint *)(lVar4 + 0x158) = uVar7;
    }
    else {
      if (param_2 != '\x03') {
        return;
      }
      uVar7 = 2;
      if (param_3 < 2) {
        uVar7 = param_3;
      }
      *(uint *)(lVar4 + 0x150) = uVar7;
    }
    *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) | 0x80;
    lVar4 = *(longlong *)(lVar5 + 8);
    if (lVar4 != 0) {
      if (DAT_14c992a90 != '\x01') {
        FUN_144aa3818(*(longlong *)(lVar4 + 0x98) + 0x160,lVar5);
        return;
      }
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
      if (*(int *)(lVar5 + 0x18) == -1) {
        lVar6 = *(longlong *)(lVar4 + 0x98);
        uVar7 = *(uint *)(lVar5 + 0x1c);
        piVar2 = (int *)(lVar6 + 0x160 + (ulonglong)uVar7 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar6 + 0x194) = *(int *)(lVar6 + 0x194) + 1;
        lVar6 = lVar6 + (ulonglong)uVar7 * 0x10;
        iVar3 = *(int *)(lVar6 + 0x1a0);
        *(int *)(lVar5 + 0x18) = iVar3;
        *(uint *)(lVar6 + 0x1a0) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x1a4) < iVar3 + 1U) {
          FUN_140431d5c((longlong *)(lVar6 + 0x198),iVar3);
        }
        lVar6 = *(longlong *)(lVar6 + 0x198);
        lVar8 = (longlong)iVar3 * 0x20;
        *(longlong *)(lVar6 + lVar8) = lVar5;
        *(undefined4 *)(lVar6 + 8 + lVar8) = 0;
        puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140b26b51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
      return;
    }
  }
  return;
}



// FUNCTION 140b26be2 FUN_140b26be2 body=230 status=ok
// SIG undefined FUN_140b26be2(void)

void FUN_140b26be2(float *param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  byte bVar2;
  
  param_4 = param_4 * param_1[5];
  if (param_4 <= 0.0001) {
    param_4 = 0.0001;
  }
  if (((uint)param_1[4] & 1) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = -(*param_1 * param_3 == 0.0 && param_3 * param_1[1] == 0.0);
  }
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4 < 0.1);
  bVar2 = bVar2 & 1;
  FUN_140b26cc8(param_2,0,*(undefined1 *)(param_1 + 6),uVar1 & 0xffffffff,bVar2);
  FUN_140b26cc8(param_2,1,*(undefined1 *)((longlong)param_1 + 0x19),uVar1 & 0xffffffff,bVar2);
  FUN_140b26cc8(param_2,2,*(undefined1 *)((longlong)param_1 + 0x1a),uVar1 & 0xffffffff,bVar2);
  if (((*(char *)(param_1 + 6) == '\0') && (*(char *)((longlong)param_1 + 0x19) == '\0')) &&
     (*(char *)((longlong)param_1 + 0x1a) == '\0')) {
    return;
  }
  FUN_140b27eec(param_2,param_4);
  return;
}



// FUNCTION 140b26cc8 FUN_140b26cc8 body=103 status=ok
// SIG undefined FUN_140b26cc8(void)

void FUN_140b26cc8(undefined8 param_1,undefined4 param_2,int param_3,char param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  
  if (param_3 != 2) {
    if ((param_3 != 1) || (iVar1 = 2, param_4 == '\0')) {
      iVar1 = param_3;
    }
    FUN_140b26d30(param_1,param_2,iVar1);
    bVar2 = param_3 != 1;
    param_3 = 0;
    if (param_5 != '\x01' || bVar2) {
      return;
    }
  }
  FUN_140b26d30(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b26d30 FUN_140b26d30 body=335 status=ok
// SIG undefined FUN_140b26d30(void)

void FUN_140b26d30(longlong *param_1,char param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar4 = *param_1;
  if (((lVar4 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 != 0)) &&
     (*(int *)(lVar4 + 8) == 1)) {
    if (param_2 == '\x02') {
      uVar7 = 2;
      if (param_3 < 2) {
        uVar7 = param_3;
      }
      *(uint *)(lVar4 + 0x144) = uVar7;
    }
    else if (param_2 == '\x01') {
      uVar7 = 2;
      if (param_3 < 2) {
        uVar7 = param_3;
      }
      *(uint *)(lVar4 + 0x140) = uVar7;
    }
    else {
      if (param_2 != '\0') {
        return;
      }
      uVar7 = 2;
      if (param_3 < 2) {
        uVar7 = param_3;
      }
      *(uint *)(lVar4 + 0x13c) = uVar7;
    }
    *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) | 0x80;
    lVar4 = *(longlong *)(lVar5 + 8);
    if (lVar4 != 0) {
      if (DAT_14c992a90 != '\x01') {
        FUN_144aa3818(*(longlong *)(lVar4 + 0x98) + 0x160,lVar5);
        return;
      }
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
      if (*(int *)(lVar5 + 0x18) == -1) {
        lVar6 = *(longlong *)(lVar4 + 0x98);
        uVar7 = *(uint *)(lVar5 + 0x1c);
        piVar2 = (int *)(lVar6 + 0x160 + (ulonglong)uVar7 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar6 + 0x194) = *(int *)(lVar6 + 0x194) + 1;
        lVar6 = lVar6 + (ulonglong)uVar7 * 0x10;
        iVar3 = *(int *)(lVar6 + 0x1a0);
        *(int *)(lVar5 + 0x18) = iVar3;
        *(uint *)(lVar6 + 0x1a0) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x1a4) < iVar3 + 1U) {
          FUN_140431d5c((longlong *)(lVar6 + 0x198),iVar3);
        }
        lVar6 = *(longlong *)(lVar6 + 0x198);
        lVar8 = (longlong)iVar3 * 0x20;
        *(longlong *)(lVar6 + lVar8) = lVar5;
        *(undefined4 *)(lVar6 + 8 + lVar8) = 0;
        puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140b26dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
      return;
    }
  }
  return;
}



// FUNCTION 140b26e80 FUN_140b26e80 body=259 status=ok
// SIG undefined FUN_140b26e80(void)

void FUN_140b26e80(longlong *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(undefined1 *)(lVar5 + 0x138) = param_2;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar5 = *(longlong *)(lVar6 + 8);
    if (lVar5 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b26ef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b26f84 FUN_140b26f84 body=259 status=ok
// SIG undefined FUN_140b26f84(void)

void FUN_140b26f84(longlong *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(undefined1 *)(lVar5 + 0x13b) = param_2;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar5 = *(longlong *)(lVar6 + 8);
    if (lVar5 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b26ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b27088 FUN_140b27088 body=265 status=ok
// SIG undefined FUN_140b27088(void)

void FUN_140b27088(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(double *)(lVar5 + 0x340) = (double)param_2;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar5 = *(longlong *)(lVar6 + 8);
    if (lVar5 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b27100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b27192 FUN_140b27192 body=324 status=ok
// SIG undefined FUN_140b27192(void)

void FUN_140b27192(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    if (param_2 == '\0') {
      *(undefined8 *)(lVar5 + 0x130) = 0x3ff0000000000000;
      *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
      lVar5 = *(longlong *)(lVar6 + 8);
      if (lVar5 != 0) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
          if (*(int *)(lVar6 + 0x18) == -1) {
            lVar7 = *(longlong *)(lVar5 + 0x98);
            uVar3 = *(uint *)(lVar6 + 0x1c);
            piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
            lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
            iVar4 = *(int *)(lVar7 + 0x1a0);
            *(int *)(lVar6 + 0x18) = iVar4;
            *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
            if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
              FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
            }
            lVar7 = *(longlong *)(lVar7 + 0x198);
            lVar8 = (longlong)iVar4 * 0x20;
            *(longlong *)(lVar7 + lVar8) = lVar6;
            *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
            puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
                    /* WARNING: Could not recover jumptable at 0x000140b27217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
          return;
        }
        FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
        return;
      }
    }
    else {
      *(undefined8 *)(lVar5 + 0x130) = 0;
      *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
      if (*(longlong *)(lVar6 + 8) != 0) {
        FUN_144a78688(*(longlong *)(lVar6 + 8) + 0x70,lVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b272d6 FUN_140b272d6 body=513 status=ok
// SIG undefined FUN_140b272d6(void)

void FUN_140b272d6(longlong *param_1,undefined1 param_2,float param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(undefined1 *)(lVar5 + 0x13a) = param_2;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar7 = *(longlong *)(lVar6 + 8);
    if (lVar7 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar9 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar4);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar9 + lVar8) = lVar6;
          *(undefined4 *)(lVar9 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x118) = (double)param_3;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar9) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b273b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b274d8 FUN_140b274d8 body=519 status=ok
// SIG undefined FUN_140b274d8(void)

void FUN_140b274d8(longlong *param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(double *)(lVar5 + 0x300) = (double)param_2;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar7 = *(longlong *)(lVar6 + 8);
    if (lVar7 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar9 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar4);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar9 + lVar8) = lVar6;
          *(undefined4 *)(lVar9 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x328) = (double)param_3;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar9) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b275bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b276e0 FUN_140b276e0 body=769 status=ok
// SIG undefined FUN_140b276e0(void)

void FUN_140b276e0(longlong *param_1,float param_2,float param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(undefined4 *)(lVar5 + 0x318) = param_4;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar7 = *(longlong *)(lVar6 + 8);
    if (lVar7 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar9 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar4);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar9 + lVar8) = lVar6;
          *(undefined4 *)(lVar9 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x310) = (double)param_2;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar9 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar4);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar9 + lVar8) = lVar6;
          *(undefined4 *)(lVar9 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x338) = (double)param_3;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar9) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b27829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b279e2 FUN_140b279e2 body=1290 status=ok
// SIG undefined FUN_140b279e2(void)

void FUN_140b279e2(longlong *param_1,undefined1 param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(undefined1 *)(lVar5 + 0x139) = param_2;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar7 = *(longlong *)(lVar6 + 8);
    if (lVar7 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar9 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar4);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar9 + lVar8) = lVar6;
          *(undefined4 *)(lVar9 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x108) = (double)param_3;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar9 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar4);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar9 + lVar8) = lVar6;
          *(undefined4 *)(lVar9 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x110) = (double)param_4;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar9 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar4);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar9 + lVar8) = lVar6;
          *(undefined4 *)(lVar9 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x120) = (double)param_5;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar9 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar4);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar9 + lVar8) = lVar6;
          *(undefined4 *)(lVar9 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x128) = (double)(param_6 * 0.017453292);
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar9) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b27c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b27eec FUN_140b27eec body=1479 status=ok
// SIG undefined FUN_140b27eec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b27eec(longlong *param_1,float param_2,undefined8 param_3,float *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(double *)(lVar5 + 0x148) = (double)param_2;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar7 = *(longlong *)(lVar6 + 8);
    if (lVar7 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(byte *)(lVar5 + 0x178) = *(byte *)(param_4 + 4) & 1;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x188) = (double)*param_4 * (double)_DAT_14c75f408;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 400) = (double)param_4[1] * (double)_DAT_14c75f40c;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x1d0) = (double)param_4[3];
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x1b8) = (double)param_4[2];
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b2815d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b284b4 FUN_140b284b4 body=1517 status=ok
// SIG undefined FUN_140b284b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b284b4(longlong *param_1,undefined8 param_2,float *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar6 = *param_1;
  if (((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 0x10), lVar7 != 0)) &&
     (*(int *)(lVar6 + 8) == 1)) {
    fVar3 = param_3[5];
    *(double *)(lVar6 + 0x168) = (double)(param_3[6] * 0.017453292);
    *(double *)(lVar6 + 0x170) = (double)(fVar3 * 0.017453292);
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    lVar8 = *(longlong *)(lVar7 + 8);
    if (lVar8 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
        if (*(int *)(lVar7 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar8 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar5;
          *(uint *)(lVar9 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar5);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar10 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar9 + lVar10) = lVar7;
          *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,lVar7);
      }
    }
    lVar7 = *(longlong *)(lVar6 + 0x10);
    *(byte *)(lVar6 + 0x17a) = *(byte *)(param_3 + 4) & 1;
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    if ((lVar7 != 0) && (lVar8 = *(longlong *)(lVar7 + 8), lVar8 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
        if (*(int *)(lVar7 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar8 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar5;
          *(uint *)(lVar9 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar5);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar10 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar9 + lVar10) = lVar7;
          *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,lVar7);
      }
    }
    lVar7 = *(longlong *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x1a8) = (double)*param_3 * (double)_DAT_14c75f410;
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    if ((lVar7 != 0) && (lVar8 = *(longlong *)(lVar7 + 8), lVar8 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
        if (*(int *)(lVar7 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar8 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar5;
          *(uint *)(lVar9 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar5);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar10 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar9 + lVar10) = lVar7;
          *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,lVar7);
      }
    }
    lVar7 = *(longlong *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x1b0) = (double)param_3[1] * (double)_DAT_14c75f414;
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    if ((lVar7 != 0) && (lVar8 = *(longlong *)(lVar7 + 8), lVar8 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
        if (*(int *)(lVar7 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar8 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar5;
          *(uint *)(lVar9 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar5);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar10 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar9 + lVar10) = lVar7;
          *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,lVar7);
      }
    }
    lVar7 = *(longlong *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x1e0) = (double)param_3[3];
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    if ((lVar7 != 0) && (lVar8 = *(longlong *)(lVar7 + 8), lVar8 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
        if (*(int *)(lVar7 + 0x18) == -1) {
          lVar9 = *(longlong *)(lVar8 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
          lVar9 = lVar9 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar9 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar5;
          *(uint *)(lVar9 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar9 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar5);
          }
          lVar9 = *(longlong *)(lVar9 + 0x198);
          lVar10 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar9 + lVar10) = lVar7;
          *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,lVar7);
      }
    }
    lVar7 = *(longlong *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x1c8) = (double)param_3[2];
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 8), lVar6 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
        if (*(int *)(lVar7 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar6 + 0x98);
          uVar4 = *(uint *)(lVar7 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar4 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar4 * 0x10;
          iVar5 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar7 + 0x18) = iVar5;
          *(uint *)(lVar8 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar5);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar7;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b2874b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar6 + 0x98) + 0x160,lVar7);
      return;
    }
  }
  return;
}



// FUNCTION 140b28aa2 FUN_140b28aa2 body=1490 status=ok
// SIG undefined FUN_140b28aa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b28aa2(longlong *param_1,undefined8 param_2,float *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *param_1;
  if (((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar5 + 8) == 1)) {
    *(double *)(lVar5 + 0x160) = (double)(param_3[5] * 0.017453292);
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    lVar7 = *(longlong *)(lVar6 + 8);
    if (lVar7 != 0) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(byte *)(lVar5 + 0x179) = *(byte *)(param_3 + 4) & 1;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x198) = (double)*param_3 * (double)_DAT_14c75f410;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x1a0) = (double)param_3[1] * (double)_DAT_14c75f414;
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x1d8) = (double)param_3[3];
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 8), lVar7 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar8 = *(longlong *)(lVar7 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar8 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar8 + 0x194) = *(int *)(lVar8 + 0x194) + 1;
          lVar8 = lVar8 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar8 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar8 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar8 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar8 + 0x198),iVar4);
          }
          lVar8 = *(longlong *)(lVar8 + 0x198);
          lVar9 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar8 + lVar9) = lVar6;
          *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar6);
      }
    }
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(double *)(lVar5 + 0x1c0) = (double)param_3[2];
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 0x80;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b28d1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140b29074 FUN_140b29074 body=3253 status=ok
// SIG undefined FUN_140b29074(void)

void FUN_140b29074(longlong *param_1,undefined4 *param_2,char param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  lVar14 = *(longlong *)(lVar6 + 0x10);
  if (lVar14 == 0) {
    return;
  }
  if (*(int *)(lVar6 + 8) != 1) {
    return;
  }
  *(undefined1 *)(lVar6 + 0x218) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  lVar7 = *(longlong *)(lVar14 + 8);
  if (lVar7 != 0) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
        lVar15 = lVar15 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar15 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar15 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar15 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar5);
        }
        lVar15 = *(longlong *)(lVar15 + 0x198);
        lVar16 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar15 + lVar16) = lVar14;
        *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar14);
    }
  }
  lVar14 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x219) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar14 != 0) && (lVar7 = *(longlong *)(lVar14 + 8), lVar7 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
        lVar15 = lVar15 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar15 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar15 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar15 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar5);
        }
        lVar15 = *(longlong *)(lVar15 + 0x198);
        lVar16 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar15 + lVar16) = lVar14;
        *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar14);
    }
  }
  lVar14 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x21a) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar14 != 0) && (lVar7 = *(longlong *)(lVar14 + 8), lVar7 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
        lVar15 = lVar15 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar15 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar15 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar15 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar5);
        }
        lVar15 = *(longlong *)(lVar15 + 0x198);
        lVar16 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar15 + lVar16) = lVar14;
        *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar14);
    }
  }
  lVar14 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x21b) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar14 != 0) && (lVar7 = *(longlong *)(lVar14 + 8), lVar7 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
        lVar15 = lVar15 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar15 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar15 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar15 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar5);
        }
        lVar15 = *(longlong *)(lVar15 + 0x198);
        lVar16 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar15 + lVar16) = lVar14;
        *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar14);
    }
  }
  lVar14 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x21c) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar14 != 0) && (lVar7 = *(longlong *)(lVar14 + 8), lVar7 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
        lVar15 = lVar15 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar15 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar15 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar15 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar5);
        }
        lVar15 = *(longlong *)(lVar15 + 0x198);
        lVar16 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar15 + lVar16) = lVar14;
        *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar14);
    }
  }
  lVar14 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x21d) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar14 != 0) && (lVar7 = *(longlong *)(lVar14 + 8), lVar7 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
        lVar15 = lVar15 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar15 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar15 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar15 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar5);
        }
        lVar15 = *(longlong *)(lVar15 + 0x198);
        lVar16 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar15 + lVar16) = lVar14;
        *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar14);
    }
  }
  if ((((*(byte *)(param_2 + 0xf) & 1) != 0) || ((*(byte *)(param_2 + 0x13) & 1) != 0)) ||
     ((*(byte *)(param_2 + 0x17) & 1) != 0)) {
    lVar14 = *(longlong *)(lVar6 + 0x10);
    *(byte *)(lVar6 + 0x218) = *(byte *)(param_2 + 0xf) & 1;
    uVar13 = *(uint *)(lVar6 + 0x18) | 0x80;
    *(uint *)(lVar6 + 0x18) = uVar13;
    if (lVar14 == 0) {
      *(byte *)(lVar6 + 0x219) = *(byte *)(param_2 + 0x13) & 1;
      *(uint *)(lVar6 + 0x18) = uVar13;
LAB_140b29af6:
      *(byte *)(lVar6 + 0x21a) = *(byte *)(param_2 + 0x17) & 1;
      *(uint *)(lVar6 + 0x18) = uVar13;
    }
    else {
      if (*(longlong *)(lVar14 + 8) == 0) {
        *(byte *)(lVar6 + 0x219) = *(byte *)(param_2 + 0x13) & 1;
        *(uint *)(lVar6 + 0x18) = uVar13;
      }
      else {
        FUN_144a78688(*(longlong *)(lVar14 + 8) + 0x70);
        lVar14 = *(longlong *)(lVar6 + 0x10);
        *(byte *)(lVar6 + 0x219) = *(byte *)(param_2 + 0x13) & 1;
        uVar13 = *(uint *)(lVar6 + 0x18) | 0x80;
        *(uint *)(lVar6 + 0x18) = uVar13;
        if (lVar14 == 0) goto LAB_140b29af6;
      }
      if (*(longlong *)(lVar14 + 8) == 0) {
        *(byte *)(lVar6 + 0x21a) = *(byte *)(param_2 + 0x17) & 1;
        *(uint *)(lVar6 + 0x18) = uVar13;
      }
      else {
        FUN_144a78688(*(longlong *)(lVar14 + 8) + 0x70);
        lVar14 = *(longlong *)(lVar6 + 0x10);
        *(byte *)(lVar6 + 0x21a) = *(byte *)(param_2 + 0x17) & 1;
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | 0x80;
        if (lVar14 == 0) goto LAB_140b29b07;
      }
      if (*(longlong *)(lVar14 + 8) != 0) {
        FUN_144a78688(*(longlong *)(lVar14 + 8) + 0x70);
      }
    }
LAB_140b29b07:
    if ((param_3 != '\0') || (ABS(*(double *)(lVar6 + 0x310) + -3.4028234663852886e+38) <= 1e-08)) {
      uVar9 = *param_2;
      uVar10 = param_2[1];
      uVar11 = param_2[2];
      uVar12 = param_2[3];
      *(undefined8 *)(lVar6 + 0x1f8) = *(undefined8 *)(param_2 + 4);
      *(undefined4 *)(lVar6 + 0x1e8) = uVar9;
      *(undefined4 *)(lVar6 + 0x1ec) = uVar10;
      *(undefined4 *)(lVar6 + 0x1f0) = uVar11;
      *(undefined4 *)(lVar6 + 500) = uVar12;
      *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
      if ((*(longlong *)(lVar6 + 0x10) != 0) &&
         (lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8), lVar14 != 0)) {
        FUN_144a78688(lVar14 + 0x70);
      }
    }
  }
  if ((((*(byte *)(param_2 + 0xf) & 2) != 0) || ((*(byte *)(param_2 + 0x13) & 2) != 0)) ||
     ((*(byte *)(param_2 + 0x17) & 2) != 0)) {
    lVar14 = *(longlong *)(lVar6 + 0x10);
    *(byte *)(lVar6 + 0x21b) = *(byte *)(param_2 + 0xf) >> 1 & 1;
    uVar13 = *(uint *)(lVar6 + 0x18) | 0x80;
    *(uint *)(lVar6 + 0x18) = uVar13;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else if (*(longlong *)(lVar14 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar14 + 8) + 0x70);
      lVar14 = *(longlong *)(lVar6 + 0x10);
      uVar13 = *(uint *)(lVar6 + 0x18);
    }
    *(byte *)(lVar6 + 0x21c) = *(byte *)(param_2 + 0x13) >> 1 & 1;
    uVar13 = uVar13 | 0x80;
    *(uint *)(lVar6 + 0x18) = uVar13;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else if (*(longlong *)(lVar14 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar14 + 8) + 0x70);
      lVar14 = *(longlong *)(lVar6 + 0x10);
      uVar13 = *(uint *)(lVar6 + 0x18);
    }
    *(byte *)(lVar6 + 0x21d) = *(byte *)(param_2 + 0x17) >> 1 & 1;
    uVar13 = uVar13 | 0x80;
    *(uint *)(lVar6 + 0x18) = uVar13;
    if (lVar14 == 0) {
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      uVar11 = param_2[8];
      uVar12 = param_2[9];
      *(undefined8 *)(lVar6 + 0x210) = *(undefined8 *)(param_2 + 10);
      *(undefined4 *)(lVar6 + 0x200) = uVar9;
      *(undefined4 *)(lVar6 + 0x204) = uVar10;
      *(undefined4 *)(lVar6 + 0x208) = uVar11;
      *(undefined4 *)(lVar6 + 0x20c) = uVar12;
      *(uint *)(lVar6 + 0x18) = uVar13;
    }
    else {
      if (*(longlong *)(lVar14 + 8) == 0) {
        uVar9 = param_2[6];
        uVar10 = param_2[7];
        uVar11 = param_2[8];
        uVar12 = param_2[9];
        *(undefined8 *)(lVar6 + 0x210) = *(undefined8 *)(param_2 + 10);
        *(undefined4 *)(lVar6 + 0x200) = uVar9;
        *(undefined4 *)(lVar6 + 0x204) = uVar10;
        *(undefined4 *)(lVar6 + 0x208) = uVar11;
        *(undefined4 *)(lVar6 + 0x20c) = uVar12;
        *(uint *)(lVar6 + 0x18) = uVar13;
      }
      else {
        FUN_144a78688(*(longlong *)(lVar14 + 8) + 0x70);
        lVar14 = *(longlong *)(lVar6 + 0x10);
        uVar8 = *(undefined8 *)(param_2 + 10);
        uVar9 = param_2[7];
        uVar10 = param_2[8];
        uVar11 = param_2[9];
        *(undefined4 *)(lVar6 + 0x200) = param_2[6];
        *(undefined4 *)(lVar6 + 0x204) = uVar9;
        *(undefined4 *)(lVar6 + 0x208) = uVar10;
        *(undefined4 *)(lVar6 + 0x20c) = uVar11;
        *(undefined8 *)(lVar6 + 0x210) = uVar8;
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | 0x80;
        if (lVar14 == 0) goto LAB_140b292bc;
      }
      if (*(longlong *)(lVar14 + 8) != 0) {
        FUN_144a78688(*(longlong *)(lVar14 + 8) + 0x70);
      }
    }
  }
LAB_140b292bc:
  lVar14 = *(longlong *)(lVar6 + 0x10);
  *(uint *)(lVar6 + 0x220) = *(byte *)(param_2 + 0x18) ^ 1;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar14 != 0) && (lVar7 = *(longlong *)(lVar14 + 8), lVar7 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
        lVar15 = lVar15 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar15 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar15 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar15 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar5);
        }
        lVar15 = *(longlong *)(lVar15 + 0x198);
        lVar16 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar15 + lVar16) = lVar14;
        *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar14);
    }
  }
  fVar3 = (float)param_2[0x14];
  fVar4 = (float)param_2[0x10];
  dVar17 = (double)DAT_14c75f3f8;
  lVar14 = *(longlong *)(lVar6 + 0x10);
  *(double *)(lVar6 + 0x228) = (double)(float)param_2[0xc] * dVar17;
  *(double *)(lVar6 + 0x230) = (double)fVar4 * dVar17;
  *(double *)(lVar6 + 0x238) = (double)fVar3 * dVar17;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar14 != 0) && (lVar7 = *(longlong *)(lVar14 + 8), lVar7 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
        lVar15 = lVar15 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar15 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar15 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar15 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar5);
        }
        lVar15 = *(longlong *)(lVar15 + 0x198);
        lVar16 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar15 + lVar16) = lVar14;
        *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar14);
    }
  }
  fVar3 = (float)param_2[0x15];
  fVar4 = (float)param_2[0x11];
  dVar17 = (double)DAT_14c75f3fc;
  lVar14 = *(longlong *)(lVar6 + 0x10);
  *(double *)(lVar6 + 0x240) = (double)(float)param_2[0xd] * dVar17;
  *(double *)(lVar6 + 0x248) = (double)fVar4 * dVar17;
  *(double *)(lVar6 + 0x250) = (double)fVar3 * dVar17;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar14 != 0) && (lVar7 = *(longlong *)(lVar14 + 8), lVar7 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
        lVar15 = lVar15 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar15 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar15 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar15 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar5);
        }
        lVar15 = *(longlong *)(lVar15 + 0x198);
        lVar16 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar15 + lVar16) = lVar14;
        *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
        puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar14);
    }
  }
  fVar3 = (float)param_2[0x16];
  fVar4 = (float)param_2[0x12];
  lVar14 = *(longlong *)(lVar6 + 0x10);
  *(double *)(lVar6 + 600) = (double)(float)param_2[0xe];
  *(double *)(lVar6 + 0x260) = (double)fVar4;
  *(double *)(lVar6 + 0x268) = (double)fVar3;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar14 != 0) && (lVar6 = *(longlong *)(lVar14 + 8), lVar6 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
      if (*(int *)(lVar14 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar6 + 0x98);
        uVar13 = *(uint *)(lVar14 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar13 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar13 * 0x10;
        iVar5 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar14 + 0x18) = iVar5;
        *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar15 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar7 + lVar15) = lVar14;
        *(undefined4 *)(lVar7 + 8 + lVar15) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar15);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140b294b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
      return;
    }
    FUN_144aa3818(*(longlong *)(lVar6 + 0x98) + 0x160,lVar14);
    return;
  }
  return;
}



// FUNCTION 140b29d2a FUN_140b29d2a body=3543 status=ok
// SIG undefined FUN_140b29d2a(void)

void FUN_140b29d2a(longlong *param_1,float *param_2,char param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_1;
  if (((lVar6 == 0) || (lVar10 = *(longlong *)(lVar6 + 0x10), lVar10 == 0)) ||
     (*(int *)(lVar6 + 8) != 1)) goto LAB_140b2aa0b;
  *(undefined1 *)(lVar6 + 0x2a8) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  lVar11 = *(longlong *)(lVar10 + 8);
  if (lVar11 != 0) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      if (*(int *)(lVar10 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar11 + 0x98);
        uVar9 = *(uint *)(lVar10 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x10;
        iVar5 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar10 + 0x18) = iVar5;
        *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar12 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar7 + lVar12) = lVar10;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar10);
    }
  }
  lVar10 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x2aa) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar10 != 0) && (lVar11 = *(longlong *)(lVar10 + 8), lVar11 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      if (*(int *)(lVar10 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar11 + 0x98);
        uVar9 = *(uint *)(lVar10 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x10;
        iVar5 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar10 + 0x18) = iVar5;
        *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar12 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar7 + lVar12) = lVar10;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar10);
    }
  }
  lVar10 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x2ac) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar10 != 0) && (lVar11 = *(longlong *)(lVar10 + 8), lVar11 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      if (*(int *)(lVar10 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar11 + 0x98);
        uVar9 = *(uint *)(lVar10 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x10;
        iVar5 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar10 + 0x18) = iVar5;
        *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar12 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar7 + lVar12) = lVar10;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar10);
    }
  }
  lVar10 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x2a9) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar10 != 0) && (lVar11 = *(longlong *)(lVar10 + 8), lVar11 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      if (*(int *)(lVar10 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar11 + 0x98);
        uVar9 = *(uint *)(lVar10 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x10;
        iVar5 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar10 + 0x18) = iVar5;
        *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar12 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar7 + lVar12) = lVar10;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar10);
    }
  }
  lVar10 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x2ab) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar10 != 0) && (lVar11 = *(longlong *)(lVar10 + 8), lVar11 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      if (*(int *)(lVar10 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar11 + 0x98);
        uVar9 = *(uint *)(lVar10 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x10;
        iVar5 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar10 + 0x18) = iVar5;
        *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar12 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar7 + lVar12) = lVar10;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar10);
    }
  }
  lVar10 = *(longlong *)(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x2ad) = 0;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar10 != 0) && (lVar11 = *(longlong *)(lVar10 + 8), lVar11 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      if (*(int *)(lVar10 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar11 + 0x98);
        uVar9 = *(uint *)(lVar10 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x10;
        iVar5 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar10 + 0x18) = iVar5;
        *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar12 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar7 + lVar12) = lVar10;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar10);
    }
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (((*(byte *)(param_2 + 3) & 1) != 0) || (((uint)param_2[7] & 1) != 0)) {
      lVar10 = *(longlong *)(lVar6 + 0x10);
      *(byte *)(lVar6 + 0x2aa) = *(byte *)(param_2 + 3) & 1;
      uVar9 = *(uint *)(lVar6 + 0x18) | 0x80;
      *(uint *)(lVar6 + 0x18) = uVar9;
      if (lVar10 != 0) {
        if (*(longlong *)(lVar10 + 8) != 0) {
          FUN_144a78688(*(longlong *)(lVar10 + 8) + 0x70);
          lVar10 = *(longlong *)(lVar6 + 0x10);
          *(byte *)(lVar6 + 0x2ac) = *(byte *)(param_2 + 7) & 1;
          *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | 0x80;
          goto LAB_140b2a6e9;
        }
        *(byte *)(lVar6 + 0x2ac) = *(byte *)(param_2 + 7) & 1;
        *(uint *)(lVar6 + 0x18) = uVar9;
        goto LAB_140b2a6ee;
      }
      *(byte *)(lVar6 + 0x2ac) = *(byte *)(param_2 + 7) & 1;
      *(uint *)(lVar6 + 0x18) = uVar9;
      goto LAB_140b2a700;
    }
  }
  else if (((uint)param_2[0xb] & 1) != 0) {
    lVar10 = *(longlong *)(lVar6 + 0x10);
    *(undefined1 *)(lVar6 + 0x2a8) = 1;
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
LAB_140b2a6e9:
    if (lVar10 != 0) {
LAB_140b2a6ee:
      if (*(longlong *)(lVar10 + 8) != 0) {
        FUN_144a78688(*(longlong *)(lVar10 + 8) + 0x70);
      }
    }
LAB_140b2a700:
    if ((param_3 != '\0') || (ABS(*(double *)(lVar6 + 0x338) + -3.4028234663852886e+38) <= 1e-08)) {
      FUN_144a7484c(param_2 + 0xc,&local_68);
      *(undefined4 *)(lVar6 + 0x270) = local_68;
      *(undefined4 *)(lVar6 + 0x274) = uStack_64;
      *(undefined4 *)(lVar6 + 0x278) = uStack_60;
      *(undefined4 *)(lVar6 + 0x27c) = uStack_5c;
      *(undefined4 *)(lVar6 + 0x280) = local_58;
      *(undefined4 *)(lVar6 + 0x284) = uStack_54;
      *(undefined4 *)(lVar6 + 0x288) = uStack_50;
      *(undefined4 *)(lVar6 + 0x28c) = uStack_4c;
      *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
      if ((*(longlong *)(lVar6 + 0x10) != 0) &&
         (lVar10 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8), lVar10 != 0)) {
        FUN_144a78688(lVar10 + 0x70);
      }
    }
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (((*(byte *)(param_2 + 3) & 2) != 0) || (((uint)param_2[7] & 2) != 0)) {
      lVar10 = *(longlong *)(lVar6 + 0x10);
      *(byte *)(lVar6 + 0x2ab) = *(byte *)(param_2 + 3) >> 1 & 1;
      uVar9 = *(uint *)(lVar6 + 0x18) | 0x80;
      *(uint *)(lVar6 + 0x18) = uVar9;
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else if (*(longlong *)(lVar10 + 8) != 0) {
        FUN_144a78688(*(longlong *)(lVar10 + 8) + 0x70);
        lVar10 = *(longlong *)(lVar6 + 0x10);
        uVar9 = *(uint *)(lVar6 + 0x18);
      }
      *(byte *)(lVar6 + 0x2ad) = *(byte *)(param_2 + 7) >> 1 & 1;
      *(uint *)(lVar6 + 0x18) = uVar9 | 0x80;
      goto LAB_140b2a803;
    }
  }
  else if (((uint)param_2[0xb] & 2) != 0) {
    lVar10 = *(longlong *)(lVar6 + 0x10);
    *(undefined1 *)(lVar6 + 0x2a9) = 1;
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
LAB_140b2a803:
    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 8) != 0)) {
      FUN_144a78688(*(longlong *)(lVar10 + 8) + 0x70);
    }
    if (ABS(*(double *)(lVar6 + 0x338) + -3.4028234663852886e+38) <= 1e-08) {
      dVar8 = *(double *)(param_2 + 0x16);
      dVar4 = *(double *)(param_2 + 0x14);
      lVar10 = *(longlong *)(lVar6 + 0x10);
      *(double *)(lVar6 + 0x290) =
           (*(double *)(param_2 + 0x12) + *(double *)(param_2 + 0x12)) * 3.1415927410125732;
      *(double *)(lVar6 + 0x298) = (dVar4 + dVar4) * 3.1415927410125732;
      *(double *)(lVar6 + 0x2a0) = (dVar8 + dVar8) * 3.1415927410125732;
    }
    else {
      if ((*(double *)(lVar6 + 0x290) == 0.0) && (!NAN(*(double *)(lVar6 + 0x290)))) {
        if ((*(double *)(lVar6 + 0x298) == 0.0) && (!NAN(*(double *)(lVar6 + 0x298)))) {
          if ((*(double *)(lVar6 + 0x2a0) == 0.0) && (!NAN(*(double *)(lVar6 + 0x2a0))))
          goto LAB_140b29f6b;
        }
      }
      lVar10 = *(longlong *)(lVar6 + 0x10);
      *(undefined8 *)(lVar6 + 0x290) = 0;
      *(undefined8 *)(lVar6 + 0x298) = 0;
      *(undefined8 *)(lVar6 + 0x2a0) = 0;
    }
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 8) != 0)) {
      FUN_144a78688(*(longlong *)(lVar10 + 8) + 0x70);
    }
  }
LAB_140b29f6b:
  lVar10 = *(longlong *)(lVar6 + 0x10);
  *(uint *)(lVar6 + 0x2b0) = *(byte *)((longlong)param_2 + 0x61) ^ 1;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
  if ((lVar10 != 0) && (lVar11 = *(longlong *)(lVar10 + 8), lVar11 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      if (*(int *)(lVar10 + 0x18) == -1) {
        lVar7 = *(longlong *)(lVar11 + 0x98);
        uVar9 = *(uint *)(lVar10 + 0x1c);
        piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar9 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x10;
        iVar5 = *(int *)(lVar7 + 0x1a0);
        *(int *)(lVar10 + 0x18) = iVar5;
        *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
          FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
        }
        lVar7 = *(longlong *)(lVar7 + 0x198);
        lVar12 = (longlong)iVar5 * 0x20;
        *(longlong *)(lVar7 + lVar12) = lVar10;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
    }
    else {
      FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar10);
    }
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    dVar8 = (double)param_2[4] * (double)DAT_14c75f400;
    lVar10 = *(longlong *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x2b8) = (double)*param_2 * (double)DAT_14c75f400;
    *(double *)(lVar6 + 0x2c0) = dVar8;
    *(double *)(lVar6 + 0x2c8) = dVar8;
    uVar9 = *(uint *)(lVar6 + 0x18) | 0x80;
    *(uint *)(lVar6 + 0x18) = uVar9;
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else if (*(longlong *)(lVar10 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar10 + 8) + 0x70,lVar10);
      lVar10 = *(longlong *)(lVar6 + 0x10);
      uVar9 = *(uint *)(lVar6 + 0x18) | 0x80;
    }
    dVar8 = (double)param_2[5] * (double)DAT_14c75f404;
    *(double *)(lVar6 + 0x2d0) = (double)param_2[1] * (double)DAT_14c75f404;
    *(double *)(lVar6 + 0x2d8) = dVar8;
    *(double *)(lVar6 + 0x2e0) = dVar8;
    *(uint *)(lVar6 + 0x18) = uVar9;
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else if (*(longlong *)(lVar10 + 8) != 0) {
      FUN_144a78688(*(longlong *)(lVar10 + 8) + 0x70,lVar10);
      lVar10 = *(longlong *)(lVar6 + 0x10);
      uVar9 = *(uint *)(lVar6 + 0x18) | 0x80;
    }
    fVar3 = param_2[6];
    *(double *)(lVar6 + 0x2e8) = (double)param_2[2];
    *(double *)(lVar6 + 0x2f0) = (double)fVar3;
    *(double *)(lVar6 + 0x2f8) = (double)fVar3;
    *(uint *)(lVar6 + 0x18) = uVar9;
    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
    }
  }
  else {
    dVar8 = (double)DAT_14c75f400 * (double)param_2[8];
    lVar10 = *(longlong *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x2b8) = dVar8;
    *(double *)(lVar6 + 0x2c0) = dVar8;
    *(double *)(lVar6 + 0x2c8) = dVar8;
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    if ((lVar10 != 0) && (lVar11 = *(longlong *)(lVar10 + 8), lVar11 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
        if (*(int *)(lVar10 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar11 + 0x98);
          uVar9 = *(uint *)(lVar10 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar9 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar9 * 0x10;
          iVar5 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar10 + 0x18) = iVar5;
          *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar12 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar7 + lVar12) = lVar10;
          *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar10);
      }
    }
    dVar8 = (double)DAT_14c75f404 * (double)param_2[9];
    lVar10 = *(longlong *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x2d0) = dVar8;
    *(double *)(lVar6 + 0x2d8) = dVar8;
    *(double *)(lVar6 + 0x2e0) = dVar8;
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    if ((lVar10 != 0) && (lVar11 = *(longlong *)(lVar10 + 8), lVar11 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
        if (*(int *)(lVar10 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar11 + 0x98);
          uVar9 = *(uint *)(lVar10 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar9 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar9 * 0x10;
          iVar5 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar10 + 0x18) = iVar5;
          *(uint *)(lVar7 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar5);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar12 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar7 + lVar12) = lVar10;
          *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar10);
      }
    }
    dVar8 = (double)param_2[10];
    lVar10 = *(longlong *)(lVar6 + 0x10);
    *(double *)(lVar6 + 0x2e8) = dVar8;
    *(double *)(lVar6 + 0x2f0) = dVar8;
    *(double *)(lVar6 + 0x2f8) = dVar8;
    *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) | 0x80;
    if ((lVar10 != 0) && (lVar6 = *(longlong *)(lVar10 + 8), lVar6 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
        if (*(int *)(lVar10 + 0x18) == -1) {
          lVar6 = *(longlong *)(lVar6 + 0x98);
          uVar9 = *(uint *)(lVar10 + 0x1c);
          piVar2 = (int *)(lVar6 + 0x160 + (ulonglong)uVar9 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar6 + 0x194) = *(int *)(lVar6 + 0x194) + 1;
          lVar6 = lVar6 + (ulonglong)uVar9 * 0x10;
          iVar5 = *(int *)(lVar6 + 0x1a0);
          *(int *)(lVar10 + 0x18) = iVar5;
          *(uint *)(lVar6 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(lVar6 + 0x1a4) < iVar5 + 1U) {
            FUN_140431d5c((longlong *)(lVar6 + 0x198),iVar5);
          }
          lVar6 = *(longlong *)(lVar6 + 0x198);
          lVar11 = (longlong)iVar5 * 0x20;
          *(longlong *)(lVar6 + lVar11) = lVar10;
          *(undefined4 *)(lVar6 + 8 + lVar11) = 0;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar11);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
    }
  }
LAB_140b2aa0b:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b2ab50 FUN_140b2ab50 body=2083 status=ok
// SIG undefined FUN_140b2ab50(void)

undefined8 *
FUN_140b2ab50(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong **pplVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_2b8 [39];
  char local_291;
  longlong local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  longlong local_278 [2];
  undefined8 local_268 [6];
  undefined8 auStack_238 [2];
  undefined4 auStack_228 [4];
  undefined8 auStack_218 [2];
  undefined4 local_208;
  undefined2 local_204;
  longlong local_200 [15];
  longlong local_188 [12];
  longlong *local_128 [2];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  byte bStack_ff;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  *param_1 = 0;
  if (DAT_14c75f420 != '\x01') goto LAB_140b2b157;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    lVar24 = 0;
  }
  else {
    lVar24 = *(longlong *)(*param_2 + 8);
  }
  if ((param_3 == (longlong *)0x0) || (*param_3 == 0)) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(longlong *)(*param_3 + 8);
  }
  if ((((lVar24 != 0) && (param_2 != (longlong *)0x0)) && (param_3 != (longlong *)0x0)) &&
     (lVar15 != 0)) {
    puVar12 = (undefined8 *)FUN_14001cc68(0x3a0,0x10);
    *(undefined4 *)(puVar12 + 1) = 1;
    puVar12[2] = 0;
    *(undefined4 *)(puVar12 + 3) = 0;
    *puVar12 = &PTR_FUN_149f58348;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    FUN_1408c9ee8(puVar12 + 8);
    *(undefined2 *)(puVar12 + 0x6a) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x352) = 0;
    *(undefined8 *)((longlong)puVar12 + 0x38c) = 0;
    puVar12[0x73] = 0;
    puVar12[0x6b] = 0;
    puVar12[0x6c] = 0;
    puVar12[0x6d] = 0;
    puVar12[0x6e] = 0;
    puVar12[0x6f] = 0;
    puVar12[0x70] = 0;
    *(undefined1 *)(puVar12 + 0x71) = 0;
    *param_1 = puVar12;
    local_128[0] = param_2;
    local_128[1] = param_3;
    FUN_1429bde48(puVar12);
    pplVar19 = local_128;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *pplVar19 = (longlong *)*param_4;
      param_4 = param_4 + 1;
      pplVar19 = pplVar19 + 1;
    }
    puVar17 = local_c8;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar17 = *param_5;
      param_5 = param_5 + 1;
      puVar17 = puVar17 + 1;
    }
    lVar15 = puVar12[2];
    memcpy(puVar12 + 8,local_128,0xc0);
    *(byte *)(puVar12 + 3) = *(byte *)(puVar12 + 3) | 0x80;
    if ((lVar15 != 0) && (lVar21 = *(longlong *)(lVar15 + 8), lVar21 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar21 + 0x128));
        if (*(int *)(lVar15 + 0x18) == -1) {
          lVar20 = *(longlong *)(lVar21 + 0x98);
          uVar3 = *(uint *)(lVar15 + 0x1c);
          piVar2 = (int *)(lVar20 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar20 + 0x194) = *(int *)(lVar20 + 0x194) + 1;
          lVar20 = lVar20 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar20 + 0x1a0);
          *(int *)(lVar15 + 0x18) = iVar4;
          *(uint *)(lVar20 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar20 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar20 + 0x198),iVar4);
          }
          lVar20 = *(longlong *)(lVar20 + 0x198);
          lVar23 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar20 + lVar23) = lVar15;
          *(undefined4 *)(lVar20 + 8 + lVar23) = 0;
          puVar17 = (undefined8 *)(lVar20 + 0x10 + lVar23);
          *puVar17 = 0;
          puVar17[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar21 + 0x128));
      }
      else if (*(int *)(lVar15 + 0x18) == -1) {
        lVar21 = *(longlong *)(lVar21 + 0x98);
        uVar3 = *(uint *)(lVar15 + 0x1c);
        piVar2 = (int *)(lVar21 + 0x160 + (ulonglong)uVar3 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar21 + 0x194) = *(int *)(lVar21 + 0x194) + 1;
        lVar21 = lVar21 + (ulonglong)uVar3 * 0x10;
        iVar4 = *(int *)(lVar21 + 0x1a0);
        *(int *)(lVar15 + 0x18) = iVar4;
        *(uint *)(lVar21 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(lVar21 + 0x1a4) < iVar4 + 1U) {
          FUN_140431d5c((longlong *)(lVar21 + 0x198),iVar4);
        }
        lVar21 = *(longlong *)(lVar21 + 0x198);
        lVar20 = (longlong)iVar4 * 0x20;
        *(longlong *)(lVar21 + lVar20) = lVar15;
        *(undefined4 *)(lVar21 + 8 + lVar20) = 0;
        puVar17 = (undefined8 *)(lVar21 + 0x10 + lVar20);
        *puVar17 = 0;
        puVar17[1] = 0;
      }
    }
    FUN_142a0ad8a(lVar24,puVar12);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_2b8);
  }
  if (param_2 == (longlong *)0x0 && param_3 == (longlong *)0x0) goto LAB_140b2b157;
  bVar5 = param_2 != (longlong *)0x0 && lVar24 != 0;
  if (bVar5) {
LAB_140b2ad6d:
    local_290 = lVar24;
    if ((*param_2 == 0) || (lVar24 = *(longlong *)(*param_2 + 8), lVar24 == 0)) {
      lVar24 = 0;
    }
    else {
      lVar24 = *(longlong *)(lVar24 + 0x260);
    }
  }
  else {
    if (lVar15 == 0) goto LAB_140b2b157;
    lVar24 = lVar15;
    param_2 = param_3;
    if (param_3 != (longlong *)0x0) goto LAB_140b2ad6d;
    param_2 = (longlong *)0x0;
    lVar24 = 0;
    local_290 = lVar15;
  }
  local_208 = 0;
  local_204 = 0x100;
  local_200[0] = 0;
  puVar12 = &DAT_14c846480;
  puVar17 = local_268;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar17 = puVar17 + 1;
  }
  local_291 = bVar5;
  local_280 = param_4;
  local_278[0] = lVar24;
  FUN_1407125d4(local_278,local_200 + 2);
  plVar13 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar13[1] = 0;
  plVar13[2] = 0;
  *(undefined2 *)(plVar13 + 3) = 0x101;
  *(undefined1 *)((longlong)plVar13 + 0x1a) = 1;
  *(undefined2 *)((longlong)plVar13 + 0x1c) = 0;
  *plVar13 = (longlong)&PTR_FUN_149f48e60;
  plVar13[4] = 0;
  plVar13[5] = 0;
  plVar13[6] = 0;
  if (plVar13 == (longlong *)0x0) {
    uVar16 = *(undefined8 *)(local_200[2] + 0x40);
    local_128[0] = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    uVar16 = *(undefined8 *)(local_200[2] + 0x40);
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    local_128[0] = plVar13;
  }
  FUN_1406188f0(uVar16,local_128);
  *(undefined8 *)(*(longlong *)(local_200[2] + 0x40) + 0x70) = 0;
  puVar12 = (undefined8 *)FUN_14001cc68(0x3a0,0x10);
  *(undefined4 *)(puVar12 + 1) = 1;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 0;
  *puVar12 = &PTR_FUN_149f58348;
  local_288 = puVar12 + 8;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  FUN_1408c9ee8();
  *(undefined2 *)(puVar12 + 0x6a) = 0;
  *(undefined1 *)((longlong)puVar12 + 0x352) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x38c) = 0;
  puVar12[0x73] = 0;
  puVar12[0x6b] = 0;
  puVar12[0x6c] = 0;
  puVar12[0x6d] = 0;
  puVar12[0x6e] = 0;
  puVar12[0x6f] = 0;
  puVar12[0x70] = 0;
  *(undefined1 *)(puVar12 + 0x71) = 0;
  uVar16 = *(undefined8 *)(lVar24 + 0x38);
  puVar12[0x73] = local_200[2];
  FUN_14162b148(uVar16,local_200[2]);
  *param_1 = puVar12;
  lVar24 = *(longlong *)(local_200[2] + 0x40);
  lVar15 = lVar24 + 0x78;
  if (*(longlong *)(lVar24 + 0x80) != 0) {
    lVar15 = *(longlong *)(lVar24 + 0x80);
  }
  iVar4 = *(int *)(lVar24 + 0x88);
  if ((longlong)iVar4 != 0) {
    lVar24 = 0;
    do {
      lVar21 = *(longlong *)(lVar15 + lVar24);
      uVar14 = (ulonglong)((*(byte *)(lVar21 + 8) & 3) == 0);
      puVar17 = (undefined8 *)(lVar21 + 0x48 + uVar14 * 8);
      uVar6 = *(undefined4 *)puVar17;
      uVar7 = *(undefined4 *)((longlong)puVar17 + 4);
      local_128[0] = (longlong *)*puVar17;
      uVar8 = *(undefined4 *)(puVar17 + 1);
      uVar9 = *(undefined4 *)((longlong)puVar17 + 0xc);
      local_128[1] = (longlong *)puVar17[1];
      puVar17 = (undefined8 *)(lVar21 + 0x58 + uVar14 * 8);
      local_118 = *(undefined4 *)puVar17;
      uStack_114 = *(undefined4 *)((longlong)puVar17 + 4);
      uVar16 = *puVar17;
      uStack_110 = *(undefined4 *)(puVar17 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar17 + 0xc);
      uVar11 = puVar17[1];
      puVar17 = (undefined8 *)(lVar21 + 0x68 + uVar14 * 8);
      local_108 = *(undefined4 *)puVar17;
      uStack_104 = *(undefined4 *)((longlong)puVar17 + 4);
      uVar10 = (undefined4)puVar17[1];
      uStack_fc = *(undefined4 *)((longlong)puVar17 + 0xc);
      uVar14 = puVar17[1];
      uStack_100 = (undefined1)uVar10;
      bStack_ff = (byte)((uint)uVar10 >> 8);
      uStack_fe = (undefined2)((uint)uVar10 >> 0x10);
      bStack_ff = bStack_ff & 0xfc;
      if ((*(byte *)(lVar21 + 8) & 3) == 0) {
        FUN_146285926(lVar21,local_128);
      }
      else {
        *(undefined8 *)(lVar21 + 0x68) = *puVar17;
        *(ulonglong *)(lVar21 + 0x70) = uVar14 & 0xfffffffffffffcff;
        *(undefined8 *)(lVar21 + 0x58) = uVar16;
        *(undefined8 *)(lVar21 + 0x60) = uVar11;
        *(undefined4 *)(lVar21 + 0x48) = uVar6;
        *(undefined4 *)(lVar21 + 0x4c) = uVar7;
        *(undefined4 *)(lVar21 + 0x50) = uVar8;
        *(undefined4 *)(lVar21 + 0x54) = uVar9;
      }
      lVar24 = lVar24 + 8;
    } while ((longlong)iVar4 * 8 != lVar24);
  }
  plVar1 = plVar13 + 1;
  local_128[1] = *(longlong **)(local_200[2] + 0x50);
  local_128[0] = param_2;
  FUN_1429bde48(puVar12);
  puVar17 = local_280;
  pplVar19 = local_128;
  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
    *pplVar19 = (longlong *)*puVar17;
    puVar17 = puVar17 + 1;
    pplVar19 = pplVar19 + 1;
  }
  puVar17 = local_c8;
  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar17 = *param_5;
    param_5 = param_5 + 1;
    puVar17 = puVar17 + 1;
  }
  lVar24 = 0x50;
  do {
    *(undefined8 *)((longlong)auStack_238 + lVar24) = 0;
    *(undefined8 *)((longlong)auStack_238 + lVar24 + 8) = 0;
    *(undefined4 *)((longlong)auStack_228 + lVar24) = 0;
    *(undefined4 *)((longlong)auStack_228 + lVar24 + 4) = 0;
    *(undefined4 *)((longlong)auStack_228 + lVar24 + 8) = 0;
    *(undefined4 *)((longlong)auStack_228 + lVar24 + 0xc) = 0x3ff00000;
    *(undefined8 *)((longlong)auStack_218 + lVar24) = 0;
    *(undefined8 *)((longlong)auStack_218 + lVar24 + 8) = 0;
    *(undefined8 *)((longlong)&local_208 + lVar24) = 0;
    *(undefined8 *)((longlong)local_200 + lVar24) = 0;
    *(undefined8 *)((longlong)local_200 + lVar24 + 8) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)local_200 + lVar24 + 0x10) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)local_200 + lVar24 + 0x18) = 0x3ff0000000000000;
    *(undefined8 *)((longlong)local_200 + lVar24 + 0x20) = 0;
    lVar24 = lVar24 + 0x60;
  } while (lVar24 != 0x110);
  memcpy(local_200 + 3,local_128,0xc0);
  if (local_291 == '\0') {
    plVar18 = local_200 + 3;
    pplVar19 = local_128;
    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
      *pplVar19 = (longlong *)*plVar18;
      plVar18 = plVar18 + 1;
      pplVar19 = pplVar19 + 1;
    }
    plVar18 = local_188;
    plVar22 = local_200 + 3;
    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
      *plVar22 = *plVar18;
      plVar18 = plVar18 + 1;
      plVar22 = plVar22 + 1;
    }
    pplVar19 = local_128;
    plVar18 = local_188;
    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
      *plVar18 = (longlong)*pplVar19;
      pplVar19 = pplVar19 + 1;
      plVar18 = plVar18 + 1;
    }
  }
  lVar24 = puVar12[2];
  memcpy(local_288,local_200 + 3,0xc0);
  *(byte *)(puVar12 + 3) = *(byte *)(puVar12 + 3) | 0x80;
  if ((lVar24 != 0) && (lVar15 = *(longlong *)(lVar24 + 8), lVar15 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar15 + 0x128));
      if (*(int *)(lVar24 + 0x18) == -1) {
        lVar21 = *(longlong *)(lVar15 + 0x98);
        uVar3 = *(uint *)(lVar24 + 0x1c);
        piVar2 = (int *)(lVar21 + 0x160 + (ulonglong)uVar3 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar21 + 0x194) = *(int *)(lVar21 + 0x194) + 1;
        lVar21 = lVar21 + (ulonglong)uVar3 * 0x10;
        iVar4 = *(int *)(lVar21 + 0x1a0);
        *(int *)(lVar24 + 0x18) = iVar4;
        *(uint *)(lVar21 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(lVar21 + 0x1a4) < iVar4 + 1U) {
          FUN_140431d5c((longlong *)(lVar21 + 0x198),iVar4);
        }
        lVar21 = *(longlong *)(lVar21 + 0x198);
        lVar20 = (longlong)iVar4 * 0x20;
        *(longlong *)(lVar21 + lVar20) = lVar24;
        *(undefined4 *)(lVar21 + 8 + lVar20) = 0;
        puVar17 = (undefined8 *)(lVar21 + 0x10 + lVar20);
        *puVar17 = 0;
        puVar17[1] = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar15 + 0x128));
    }
    else if (*(int *)(lVar24 + 0x18) == -1) {
      lVar15 = *(longlong *)(lVar15 + 0x98);
      uVar3 = *(uint *)(lVar24 + 0x1c);
      piVar2 = (int *)(lVar15 + 0x160 + (ulonglong)uVar3 * 4);
      *piVar2 = *piVar2 + 1;
      *(int *)(lVar15 + 0x194) = *(int *)(lVar15 + 0x194) + 1;
      lVar15 = lVar15 + (ulonglong)uVar3 * 0x10;
      iVar4 = *(int *)(lVar15 + 0x1a0);
      *(int *)(lVar24 + 0x18) = iVar4;
      *(uint *)(lVar15 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(lVar15 + 0x1a4) < iVar4 + 1U) {
        FUN_140431d5c((longlong *)(lVar15 + 0x198),iVar4);
      }
      lVar15 = *(longlong *)(lVar15 + 0x198);
      lVar21 = (longlong)iVar4 * 0x20;
      *(longlong *)(lVar15 + lVar21) = lVar24;
      *(undefined4 *)(lVar15 + 8 + lVar21) = 0;
      puVar17 = (undefined8 *)(lVar15 + 0x10 + lVar21);
      *puVar17 = 0;
      puVar17[1] = 0;
    }
  }
  FUN_142a0ad8a(local_290,puVar12);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)*plVar1 == 0) && (*(int *)((longlong)plVar13 + 0xc) == 0)) {
      (**(code **)*plVar13)(plVar13,1);
    }
  }
LAB_140b2b157:
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b2b37a FUN_140b2b37a body=64 status=ok
// SIG undefined FUN_140b2b37a(void)

int FUN_140b2b37a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140b2b43a(param_1,iVar1);
  }
  FUN_140b2b3ba((longlong)iVar1 * 0x60 + *param_1,1);
  return iVar1;
}



// FUNCTION 140b2b3ba FUN_140b2b3ba body=127 status=ok
// SIG undefined FUN_140b2b3ba(void)

void FUN_140b2b3ba(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x50);
    do {
      *(undefined8 *)((longlong)puVar1 + -0x2c) = 0x3f80000000000000;
      puVar1[-10] = 0;
      puVar1[-9] = 0;
      *(undefined4 *)(puVar1 + -8) = 0;
      *(undefined1 *)((longlong)puVar1 + -0x24) = 0;
      FUN_1404163bc(puVar1 + -9);
      *(undefined1 *)((longlong)puVar1 + -0x14) = 1;
      *(undefined4 *)(puVar1 + -3) = 0x1010101;
      puVar1[-2] = 0;
      puVar1[-1] = 0xffffffff7fffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b2b43a FUN_140b2b43a body=275 status=ok
// SIG undefined FUN_140b2b43a(void)

void FUN_140b2b43a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b2b55c FUN_140b2b55c body=40 status=ok
// SIG undefined FUN_140b2b55c(void)

undefined8 FUN_140b2b55c(undefined8 param_1,int param_2)

{
  FUN_140bf2fba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b2b584 FUN_140b2b584 body=1181 status=ok
// SIG undefined FUN_140b2b584(void)

void FUN_140b2b584(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  
  FUN_140b2ba96();
  iVar2 = *(int *)(param_1 + 0xae8);
  if (iVar2 == 0) {
    uVar20 = 1;
    uVar15 = 0;
    iVar7 = 0;
    iVar16 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0xae0);
    if (*(uint **)(param_1 + 0xae0) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0xad0);
    }
    uVar19 = *puVar10;
    if (uVar19 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar20 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar20 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar20 == uVar15) goto LAB_140b2b789;
        iVar16 = iVar16 + 0x20;
        uVar19 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar20 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar20 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar19 = 0xffffffff;
    do {
      lVar17 = *(longlong *)(param_1 + 0xac0);
      plVar4 = *(longlong **)(lVar17 + 8 + (longlong)iVar7 * 0x18);
      FUN_14073922e();
      cVar5 = (**(code **)(*plVar4 + 8))(plVar4,&DAT_14caab740);
      if (cVar5 != '\0') {
        lVar17 = *(longlong *)(lVar17 + (longlong)iVar7 * 0x18 + 8);
        uVar9 = FUN_140b2ba5c();
        lVar18 = *param_3;
        if (*(code **)(lVar18 + 0x38) == (code *)&LAB_144809cfe) {
          uVar14 = 0;
        }
        else {
          bVar6 = (**(code **)(lVar18 + 0x38))(param_3);
          uVar14 = (uint)bVar6 * 2;
          lVar18 = *param_3;
        }
        if (*(code **)(lVar18 + 0x48) == (code *)&LAB_144809d02) {
          uVar8 = 0;
        }
        else {
          bVar6 = (**(code **)(lVar18 + 0x48))(param_3);
          uVar8 = (uint)bVar6;
        }
        (*(code *)(&PTR_FUN_149eb1110)[uVar8 | uVar14])(param_3,uVar9,lVar17 + 0xf0,0);
      }
      uVar19 = uVar19 & ~(uint)uVar20;
      puVar10 = *(uint **)(param_1 + 0xae0);
      if (*(uint **)(param_1 + 0xae0) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0xad0);
      }
      iVar3 = *(int *)(param_1 + 0xae8);
      iVar7 = (int)uVar15;
      lVar17 = (longlong)iVar7;
      uVar14 = puVar10[lVar17] & uVar19;
      if (uVar14 == 0) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar7) {
          iVar13 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar18 = 0;
          do {
            uVar14 = puVar10[lVar17 + lVar18 + 1];
            if (uVar14 != 0) {
              uVar15 = (ulonglong)(iVar7 + (int)lVar18 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140b2b755;
            }
            iVar16 = iVar16 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar13 - lVar17 != lVar18);
          uVar19 = 0xffffffff;
          iVar7 = iVar13;
        }
        uVar15 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar3;
      }
      else {
LAB_140b2b755:
        uVar20 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar2);
  }
LAB_140b2b789:
  iVar2 = *(int *)(param_1 + 0xb38);
  if (iVar2 == 0) {
    uVar20 = 1;
    uVar15 = 0;
    iVar7 = 0;
    iVar16 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0xb30);
    if (*(uint **)(param_1 + 0xb30) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0xb20);
    }
    uVar19 = *puVar10;
    if (uVar19 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar20 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar20 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar20 == uVar15) {
          return;
        }
        iVar16 = iVar16 + 0x20;
        uVar19 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar20 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar20 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar19 = 0xffffffff;
    do {
      uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 8 + (longlong)iVar7 * 0x18);
      uVar11 = FUN_140b2ba22();
      lVar17 = *param_3;
      if (*(code **)(lVar17 + 0x38) == (code *)&LAB_144809cfe) {
        uVar14 = 0;
      }
      else {
        bVar6 = (**(code **)(lVar17 + 0x38))(param_3);
        uVar14 = (uint)bVar6 * 2;
        lVar17 = *param_3;
      }
      if (*(code **)(lVar17 + 0x48) == (code *)&LAB_144809d02) {
        uVar8 = 0;
      }
      else {
        bVar6 = (**(code **)(lVar17 + 0x48))(param_3);
        uVar8 = (uint)bVar6;
      }
      (*(code *)(&PTR_FUN_149eb1110)[uVar8 | uVar14])(param_3,uVar11,uVar9,0);
      uVar19 = uVar19 & ~(uint)uVar20;
      puVar10 = *(uint **)(param_1 + 0xb30);
      if (*(uint **)(param_1 + 0xb30) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0xb20);
      }
      iVar3 = *(int *)(param_1 + 0xb38);
      iVar7 = (int)uVar15;
      lVar17 = (longlong)iVar7;
      uVar14 = puVar10[lVar17] & uVar19;
      if (uVar14 == 0) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar7) {
          iVar13 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar18 = 0;
          do {
            uVar14 = puVar10[lVar17 + lVar18 + 1];
            if (uVar14 != 0) {
              uVar15 = (ulonglong)(iVar7 + (int)lVar18 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140b2b909;
            }
            iVar16 = iVar16 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar13 - lVar17 != lVar18);
          uVar19 = 0xffffffff;
          iVar7 = iVar13;
        }
        uVar15 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar3;
      }
      else {
LAB_140b2b909:
        uVar20 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar7 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar2);
  }
  return;
}



// FUNCTION 140b2ba22 FUN_140b2ba22 body=57 status=ok
// SIG undefined FUN_140b2ba22(void)

void FUN_140b2ba22(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa2a0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa2a0 = FUN_140002ddd(FUN_146331004,uVar1,L"AnimNode_Mirror_Standalone");
  }
  return;
}



// FUNCTION 140b2ba5c FUN_140b2ba5c body=57 status=ok
// SIG undefined FUN_140b2ba5c(void)

void FUN_140b2ba5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaa4c8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaa4c8 = FUN_140002ddd(FUN_146331ae8,uVar1,L"AnimNode_SequenceEvaluator_Standalone");
  }
  return;
}



// FUNCTION 140b2ba96 FUN_140b2ba96 body=461 status=ok
// SIG undefined FUN_140b2ba96(void)

void FUN_140b2ba96(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  FUN_140b2bc64();
  iVar2 = *(int *)(param_1 + 0x820);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar6 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x818);
    if (*(uint **)(param_1 + 0x818) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x808);
    }
    uVar14 = *puVar5;
    if (uVar14 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar13 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar15) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar14 = 0xffffffff;
    iVar4 = iVar2;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x7f8) + 8 + (longlong)iVar6 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x130))(plVar3,param_3);
        iVar4 = *(int *)(param_1 + 0x820);
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar5 = *(uint **)(param_1 + 0x818);
      if (*(uint **)(param_1 + 0x818) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x808);
      }
      iVar6 = (int)uVar15;
      lVar11 = (longlong)iVar6;
      uVar7 = puVar5[lVar11] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar12 = 0;
          do {
            uVar7 = puVar5[lVar11 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar15 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140b2bbe5;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar11 != lVar12);
          uVar14 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar15 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_140b2bbe5:
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar2);
  }
  return;
}



// FUNCTION 140b2bc64 FUN_140b2bc64 body=682 status=ok
// SIG undefined FUN_140b2bc64(void)

void FUN_140b2bc64(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint local_6c;
  ulonglong local_68;
  
  lVar13 = 0;
  bVar12 = true;
  do {
    lVar5 = (longlong)*(int *)(param_1 + 8 + lVar13 * 0x10);
    if (lVar5 != 0) {
      lVar16 = *(longlong *)(param_1 + lVar13 * 0x10);
      lVar5 = lVar5 * 0x88;
      do {
        (**(code **)(*param_3 + 0x88))(param_3,lVar16,param_2,0);
        lVar16 = lVar16 + 0x88;
        lVar5 = lVar5 + -0x88;
      } while (lVar5 != 0);
    }
    plVar1 = (longlong *)(param_1 + 0x20 + lVar13 * 0x50);
    lVar13 = param_1 + 0x20 + lVar13 * 0x50;
    puVar15 = (uint *)(lVar13 + 0x10);
    iVar2 = *(int *)(lVar13 + 0x28);
    if (iVar2 == 0) {
      uVar17 = 1;
      local_68 = 0;
      iVar14 = 0;
      iVar10 = 0;
    }
    else {
      puVar6 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar6 = puVar15;
      }
      uVar7 = *puVar6;
      if (uVar7 == 0) {
        iVar14 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar14 = iVar2 + -1;
        }
        local_68 = 0;
        uVar11 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar11 = local_68;
        }
        iVar14 = 0;
        do {
          if (uVar11 == local_68) goto LAB_140b2bcfd;
          iVar14 = iVar14 + 0x20;
          uVar7 = puVar6[local_68 + 1];
          local_68 = local_68 + 1;
        } while (uVar7 == 0);
      }
      else {
        local_68 = 0;
        iVar14 = 0;
      }
      uVar17 = (ulonglong)(-uVar7 & uVar7);
      uVar11 = uVar17 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar10 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar10) {
        iVar10 = iVar2;
      }
    }
    if (iVar10 != iVar2) {
      local_6c = 0xffffffff;
      iVar4 = iVar2;
      do {
        lVar13 = (longlong)*(int *)(*plVar1 + 0x10 + (longlong)iVar10 * 0x88);
        if (lVar13 != 0) {
          lVar5 = *(longlong *)(*plVar1 + 8 + (longlong)iVar10 * 0x88);
          lVar13 = lVar13 * 0x88;
          do {
            (**(code **)(*param_3 + 0x88))(param_3,lVar5,param_2,0);
            lVar5 = lVar5 + 0x88;
            lVar13 = lVar13 + -0x88;
          } while (lVar13 != 0);
          iVar4 = (int)plVar1[5];
        }
        local_6c = local_6c & ~(uint)uVar17;
        puVar6 = (uint *)plVar1[4];
        if ((uint *)plVar1[4] == (uint *)0x0) {
          puVar6 = puVar15;
        }
        iVar10 = (int)local_68;
        lVar13 = (longlong)iVar10;
        uVar7 = puVar6[lVar13] & local_6c;
        if (uVar7 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar10) {
            iVar9 = iVar10;
          }
          if (iVar10 < iVar8) {
            lVar5 = 0;
            do {
              uVar7 = puVar6[lVar13 + lVar5 + 1];
              if (uVar7 != 0) {
                local_68 = (ulonglong)(iVar10 + (int)lVar5 + 1);
                local_6c = 0xffffffff;
                goto LAB_140b2beae;
              }
              iVar14 = iVar14 + 0x20;
              lVar5 = lVar5 + 1;
            } while (iVar9 - lVar13 != lVar5);
            local_6c = 0xffffffff;
            lVar13 = (longlong)iVar9;
          }
          local_68 = lVar13 + 1;
          iVar10 = iVar4;
        }
        else {
LAB_140b2beae:
          uVar17 = (ulonglong)(-uVar7 & uVar7);
          uVar11 = uVar17 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar10 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar10) {
            iVar10 = iVar4;
          }
        }
      } while (iVar10 != iVar2);
    }
LAB_140b2bcfd:
    lVar13 = 1;
    bVar3 = !bVar12;
    bVar12 = false;
    if (bVar3) {
      return;
    }
  } while( true );
}



// FUNCTION 140b2bf0e FUN_140b2bf0e body=556 status=ok
// SIG undefined FUN_140b2bf0e(void)

void FUN_140b2bf0e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong local_60;
  longlong *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  FUN_140b2c13c();
  if ((param_2 != 0) && (*(int *)(param_1 + 0x3dc) < *(int *)(param_1 + 0x3b0))) {
    local_58 = &local_60;
    local_50 = &local_58;
    uVar2 = *(uint *)(param_1 + 0x4d0);
    if (uVar2 != 0) {
      local_64 = *(uint *)(param_3 + 0x40);
      if (*(char *)(param_3 + 0x48) == '\0') {
        FUN_144716af1(*(undefined8 *)(param_3 + 0x38),local_64);
        *(undefined1 *)(param_3 + 0x48) = 1;
      }
      if (*(char *)(param_1 + 0x4d8) == '\0') {
        FUN_1491c6563(*(undefined8 *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4d0));
        *(undefined1 *)(param_1 + 0x4d8) = 1;
      }
      uVar8 = local_64;
      if ((int)local_64 < (int)uVar2) {
        uVar8 = uVar2;
      }
      iVar6 = (int)uVar8 / 2 + uVar8;
      if (-1 < iVar6) {
        plVar1 = (longlong *)(param_3 + 0x38);
        if (*(int *)(param_3 + 0x44) < iVar6) {
          FUN_14480ffb8(plVar1);
        }
        uVar8 = 0;
        if (local_64 != 0 || (int)uVar2 < 1) {
          lVar9 = 0;
          uVar10 = 0;
          uVar8 = 0;
          do {
            if ((uVar8 == uVar2) && ((longlong)uVar10 <= (longlong)(int)local_64))
            goto LAB_140b2bf53;
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x4c8) + (longlong)(int)uVar8 * 0x10);
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + (longlong)(int)uVar8 * 0x10);
            lVar4 = *(longlong *)(*plVar1 + lVar9);
            if (lVar4 == lVar3) {
              puVar7 = (undefined8 *)(*plVar1 + lVar9);
LAB_140b2c0ad:
              FUN_144495184(&local_50,puVar7,puVar5);
              uVar8 = uVar8 + 1;
            }
            else {
              iVar6 = (int)lVar4 - (int)lVar3;
              if (iVar6 == 0) {
                iVar6 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar3 >> 0x20);
              }
              if (-1 < iVar6) {
                puVar7 = (undefined8 *)FUN_144a1cc74(plVar1,uVar10 & 0xffffffff);
                local_64 = *(uint *)(param_3 + 0x40);
                *puVar7 = *puVar5;
                goto LAB_140b2c0ad;
              }
            }
            uVar10 = uVar10 + 1;
            lVar9 = lVar9 + 0x10;
          } while (uVar10 != local_64 || (int)uVar2 <= (int)uVar8);
        }
        iVar6 = (uVar2 - uVar8) + *(int *)(param_3 + 0x40);
        if (-1 < iVar6) {
          if (*(int *)(param_3 + 0x44) < iVar6) {
            FUN_14480ffb8(plVar1);
          }
          iVar6 = uVar2 - uVar8;
          if (iVar6 != 0 && (int)uVar8 <= (int)uVar2) {
            lVar9 = (longlong)(int)uVar8 << 4;
            do {
              lVar3 = *(longlong *)(param_1 + 0x4c8);
              puVar5 = (undefined8 *)FUN_14470c6b2(plVar1);
              *puVar5 = *(undefined8 *)(lVar3 + lVar9);
              FUN_144495184(&local_50,puVar5,lVar3 + lVar9);
              lVar9 = lVar9 + 0x10;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          goto LAB_140b2bf53;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
  }
LAB_140b2bf53:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b2c13c FUN_140b2c13c body=5832 status=ok
// SIG undefined FUN_140b2c13c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b2c13c(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ushort *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  double *pdVar24;
  double *pdVar25;
  undefined8 *puVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auStack_438 [32];
  int local_418;
  uint local_414;
  longlong local_410;
  longlong *local_408;
  longlong *local_400;
  double local_3f8;
  uint *local_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [20];
  undefined1 local_3c4 [4];
  undefined8 local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_354 [4];
  undefined8 local_350;
  double local_348 [2];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  longlong local_2e8 [10];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  void *local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [12];
  uint uStack_16c;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  cVar8 = (**(code **)(*param_1 + 0x118))();
  if ((cVar8 != '\0') && (lVar5 = *(longlong *)(param_2 + 0x2f8), lVar5 != 0)) {
    if (*(char *)((longlong)param_1 + 0x252) == '\x01') {
      if ((*(char *)((longlong)param_1 + 0x102) != '\0') && (param_1[0x45] != 0)) {
        if (*(char *)(param_1[0x45] + 0x20) == '\x01') {
          FUN_14919885c();
        }
        else {
          FUN_149198a30();
        }
        lVar18 = param_1[0x45];
        if ((*(char *)(lVar18 + 0x20) == '\0') &&
           (*(int *)(lVar18 + 0x60) == *(int *)(param_3 + 0x28))) {
          FUN_14919885c(lVar18);
          lVar18 = param_1[0x45];
        }
        FUN_149199794(param_3 + 0x20,lVar18 + 0x48);
      }
      if ((*(char *)((longlong)param_1 + 0x103) == '\x01') && (0 < *(int *)(lVar5 + 0x108))) {
        local_1f8 = (void *)0x0;
        uVar9 = *(uint *)(*(longlong *)(lVar5 + 0xf0) + 0x38);
        pvVar6 = *(void **)(*(longlong *)(lVar5 + 0xf0) + 0x30);
        dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,uVar9);
        if ((longlong)(int)uVar9 == 0) {
          dStack_1f0 = (double)(ulonglong)uVar9;
        }
        else {
          FUN_1466cc7d0(&local_1f8,uVar9,0);
          memcpy(local_1f8,pvVar6,(longlong)(int)uVar9 << 3);
        }
        if ((longlong)*(int *)(param_3 + 0x40) == 0) {
          iVar28 = 0;
        }
        else {
          lVar18 = *(longlong *)(param_3 + 0x38);
          lVar11 = (longlong)*(int *)(param_3 + 0x40) << 4;
          lVar27 = 0;
          iVar28 = 0;
          do {
            lVar30 = (longlong)*(int *)(*(longlong *)(param_1[0x45] + 0x88) + lVar27);
            if (lVar30 != -1) {
              lVar30 = *(longlong *)((longlong)local_1f8 + lVar30 * 8);
              if ((lVar30 == 0) || (*(char *)(lVar30 + 0x10) != '\b')) {
                lVar30 = 0;
              }
              if (*(char *)(lVar30 + 0x48) == '\x01') {
                puVar23 = &DAT_14bb83714;
                if (*(undefined4 **)(lVar30 + 0x50) != (undefined4 *)0x0) {
                  puVar23 = *(undefined4 **)(lVar30 + 0x50);
                }
                *(undefined4 *)(lVar18 + 8 + lVar27 * 4) = *puVar23;
              }
              iVar28 = iVar28 + 1;
            }
            lVar27 = lVar27 + 4;
            lVar11 = lVar11 + -0x10;
          } while (lVar11 != 0);
        }
        if (iVar28 < dStack_1f0._0_4_) {
          lVar18 = param_1[0x45];
          iVar28 = *(int *)(lVar5 + 0xc0);
          iVar29 = *(int *)(lVar18 + 0xa0);
          if (iVar29 < iVar28) {
            *(int *)(lVar18 + 0xa0) = iVar28;
            if ((uint)(*(int *)(lVar18 + 0xa4) - iVar29) < (uint)(iVar28 - iVar29)) {
              FUN_1401c3474(lVar18 + 0x98);
            }
          }
          else {
            if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar28);
            }
            if (iVar28 < iVar29) {
              *(int *)(lVar18 + 0xa0) = iVar28;
              FUN_1403ed828();
            }
          }
          memset(*(void **)(param_1[0x45] + 0x98),0,(longlong)*(int *)(param_1[0x45] + 0xa4));
          local_160 = 0;
          _local_178 = ZEXT816(0);
          local_168 = (double)((ulonglong)local_168 & 0xffffffffffffff00);
          iVar28 = *(int *)(lVar5 + 0x108);
          if (iVar28 < 0) goto LAB_140b2d7e4;
          param_3 = param_3 + 0x38;
          if (iVar28 != 0) {
            FUN_14480ffb8(local_178);
            iVar28 = *(int *)(lVar5 + 0x108);
            if ((longlong)iVar28 != 0) {
              lVar18 = *(longlong *)(lVar5 + 0x100);
              lVar11 = 0;
              do {
                iVar29 = *(int *)(lVar18 + lVar11);
                lVar30 = (longlong)iVar29;
                lVar27 = *(longlong *)(param_1[0x45] + 0x98);
                if (*(char *)(lVar27 + lVar30) == '\0') {
                  if ((((-1 < iVar29) && (iVar29 < *(int *)(lVar5 + 0xc0))) &&
                      (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + lVar30 * 8), lVar7 != 0))
                     && ((*(char *)(lVar7 + 0x10) == '\b' && (*(char *)(lVar7 + 0x48) == '\x01'))))
                  {
                    puVar23 = &DAT_14bb83714;
                    if (*(undefined4 **)(lVar7 + 0x50) != (undefined4 *)0x0) {
                      puVar23 = *(undefined4 **)(lVar7 + 0x50);
                    }
                    uVar10 = local_178._8_4_;
                    lVar27 = (longlong)(int)local_178._8_4_;
                    uVar9 = local_178._8_4_ + 1;
                    local_178._8_4_ = uVar9;
                    local_410 = param_3;
                    if (uStack_16c < uVar9) {
                      FUN_1406de67a(local_178,uVar10);
                    }
                    lVar27 = lVar27 * 0x10;
                    uVar10 = *puVar23;
                    *(undefined8 *)(local_178._0_8_ + lVar27) = *(undefined8 *)(lVar7 + 0x14);
                    *(undefined4 *)(local_178._0_8_ + 8 + lVar27) = uVar10;
                    *(undefined1 *)(local_178._0_8_ + 0xc + lVar27) = 0;
                    local_168 = (double)((ulonglong)local_168 & 0xffffffffffffff00);
                    lVar30 = (longlong)*(int *)(lVar18 + lVar11);
                    lVar27 = *(longlong *)(param_1[0x45] + 0x98);
                    param_3 = local_410;
                  }
                  *(undefined1 *)(lVar27 + lVar30) = 1;
                }
                lVar11 = lVar11 + 4;
              } while ((longlong)iVar28 * 4 != lVar11);
            }
          }
          FUN_1449802a2(param_3,local_178);
        }
        if (local_1f8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      local_410 = param_3;
      if (*(char *)((longlong)param_1 + 0x102) != '\0') {
        local_400 = param_1 + 0x31;
        plVar1 = param_1 + 0x23;
        if (((int)param_1[0x32] == *(int *)((longlong)param_1 + 0x1bc)) && ((int)param_1[0x24] == 0)
           ) {
          FUN_145860a8a(local_400,param_1 + 0x27);
          iVar28 = (int)param_1[0x22];
          pvVar6 = (void *)param_1[0x21];
          *(int *)(param_1 + 0x24) = iVar28;
          if (iVar28 == 0 && *(int *)((longlong)param_1 + 0x124) == 0) {
            *(undefined4 *)((longlong)param_1 + 0x124) = 0;
          }
          else {
            FUN_1466cc832(plVar1,iVar28);
            if (iVar28 != 0) {
              memcpy((void *)*plVar1,pvVar6,(longlong)iVar28 << 2);
            }
          }
        }
        local_408 = (longlong *)(param_3 + 0x20);
        if ((*(char *)((longlong)param_1 + 0x73) == '\0') &&
           ((((*(int *)((longlong)param_1 + 0xfc) == 0 ||
              (uVar9 = *(uint *)(param_1 + 0x1f), (int)uVar9 < 0)) || (DAT_14c9647dc <= (int)uVar9))
            || (((lVar18 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8),
                 lVar18 == 0 || (*(int *)(lVar18 + 0x10) != *(int *)((longlong)param_1 + 0xfc))) ||
                ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)))))) {
          if ((longlong)(int)param_1[0x24] == 0) {
            iVar28 = (int)param_1[0x36];
            if (iVar28 == 0) {
              uVar21 = 1;
              uVar22 = 0;
              iVar29 = 0;
              iVar12 = 0;
            }
            else {
              puVar16 = (uint *)param_1[0x35];
              if ((uint *)param_1[0x35] == (uint *)0x0) {
                puVar16 = (uint *)(param_1 + 0x33);
              }
              uVar9 = *puVar16;
              if (uVar9 == 0) {
                iVar29 = iVar28 + 0x1e;
                if (-1 < iVar28 + -1) {
                  iVar29 = iVar28 + -1;
                }
                uVar22 = 0;
                uVar21 = (ulonglong)(uint)(iVar29 >> 5);
                if (iVar29 >> 5 < 1) {
                  uVar21 = uVar22;
                }
                iVar29 = 0;
                do {
                  if (uVar21 == uVar22) goto LAB_140b2d352;
                  iVar29 = iVar29 + 0x20;
                  uVar9 = puVar16[uVar22 + 1];
                  uVar22 = uVar22 + 1;
                } while (uVar9 == 0);
              }
              else {
                uVar22 = 0;
                iVar29 = 0;
              }
              uVar21 = (ulonglong)(-uVar9 & uVar9);
              uVar31 = uVar21 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar31 != 0) {
                for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar12 = (iVar29 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar28 <= iVar12) {
                iVar12 = iVar28;
              }
            }
            if (iVar12 < iVar28) {
              uVar9 = 0xffffffff;
              do {
                local_414 = uVar9;
                uVar4 = *(ushort *)(*local_400 + 8 + (longlong)iVar12 * 0x14);
                local_3c0 = *(undefined8 *)(*local_400 + (longlong)iVar12 * 0x14);
                local_3c4[0] = 1;
                local_418 = iVar29;
                uVar9 = FUN_140813180(lVar5,local_3c4);
                if (((((int)uVar9 < 0) || (*(int *)(lVar5 + 0xc0) <= (int)uVar9)) ||
                    (lVar18 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar9 * 8),
                    lVar18 == 0)) ||
                   (((bVar3 = *(byte *)(lVar18 + 0x10), 1 < bVar3 - 1 && (bVar3 != 0x80)) &&
                    ((0x20 < bVar3 || ((0x100010010U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)))))) {
                  puVar19 = &DAT_14c846480;
                  puVar26 = (undefined8 *)local_178;
                  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                    *puVar26 = *puVar19;
                    puVar19 = puVar19 + 1;
                    puVar26 = puVar26 + 1;
                  }
                }
                else {
                  FUN_1401571e4(lVar5,local_178,lVar18,1);
                }
                puVar19 = (undefined8 *)local_178;
                puVar26 = (undefined8 *)((ulonglong)((uint)uVar4 * 0x60) + *local_408);
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *puVar26 = *puVar19;
                  puVar19 = puVar19 + 1;
                  puVar26 = puVar26 + 1;
                }
                uVar9 = local_414 & ~(uint)uVar21;
                puVar16 = (uint *)param_1[0x35];
                if ((uint *)param_1[0x35] == (uint *)0x0) {
                  puVar16 = (uint *)(param_1 + 0x33);
                }
                iVar28 = (int)param_1[0x36];
                iVar12 = (int)uVar22;
                lVar18 = (longlong)iVar12;
                uVar14 = puVar16[lVar18] & uVar9;
                iVar29 = local_418;
                if (uVar14 == 0) {
                  iVar15 = iVar28 + 0x1e;
                  if (-1 < iVar28 + -1) {
                    iVar15 = iVar28 + -1;
                  }
                  iVar15 = iVar15 >> 5;
                  iVar13 = iVar15;
                  if (iVar15 < iVar12) {
                    iVar13 = iVar12;
                  }
                  if (iVar15 <= iVar12) break;
                  lVar11 = 0;
                  while( true ) {
                    iVar29 = iVar29 + 0x20;
                    uVar14 = puVar16[lVar18 + lVar11 + 1];
                    if (uVar14 != 0) break;
                    lVar11 = lVar11 + 1;
                    if (iVar13 - lVar18 == lVar11) goto LAB_140b2d352;
                  }
                  uVar22 = (ulonglong)(iVar12 + (int)lVar11 + 1);
                  uVar9 = 0xffffffff;
                }
                uVar21 = (ulonglong)(-uVar14 & uVar14);
                uVar31 = uVar21 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar31 != 0) {
                  for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar12 = (iVar29 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              } while (iVar12 < iVar28);
            }
          }
          else {
            puVar20 = (ushort *)*plVar1;
            puVar2 = puVar20 + (longlong)(int)param_1[0x24] * 2;
            do {
              uVar4 = puVar20[1];
              if ((((int)(uint)*puVar20 < *(int *)(lVar5 + 0xc0)) &&
                  (lVar18 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)*puVar20 * 8),
                  lVar18 != 0)) &&
                 (((bVar3 = *(byte *)(lVar18 + 0x10), bVar3 - 1 < 2 || (bVar3 == 0x80)) ||
                  ((bVar3 < 0x21 && ((0x100010010U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)))))) {
                FUN_1401571e4(lVar5,local_178,lVar18,1);
              }
              else {
                puVar19 = &DAT_14c846480;
                puVar26 = (undefined8 *)local_178;
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *puVar26 = *puVar19;
                  puVar19 = puVar19 + 1;
                  puVar26 = puVar26 + 1;
                }
              }
              puVar19 = (undefined8 *)local_178;
              puVar26 = (undefined8 *)((ulonglong)((uint)uVar4 * 0x60) + *local_408);
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *puVar26 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar26 = puVar26 + 1;
              }
              puVar20 = puVar20 + 2;
            } while (puVar20 != puVar2);
          }
        }
        else {
          local_2e8[6] = 0;
          local_2e8[7] = 0;
          local_2e8[4] = 0;
          local_2e8[5] = 0;
          local_2e8[2] = 0;
          local_2e8[3] = 0;
          local_2e8[0] = 0;
          local_2e8[1] = 0;
          local_2e8[8] = 0;
          FUN_1417977a6(local_2e8,local_408);
          if ((longlong)(int)param_1[0x24] == 0) {
            iVar28 = (int)param_1[0x36];
            if (iVar28 == 0) {
              uVar22 = 1;
              uVar21 = 0;
              iVar29 = 0;
              iVar12 = 0;
            }
            else {
              puVar16 = (uint *)param_1[0x35];
              if ((uint *)param_1[0x35] == (uint *)0x0) {
                puVar16 = (uint *)(param_1 + 0x33);
              }
              uVar9 = *puVar16;
              if (uVar9 == 0) {
                iVar29 = iVar28 + 0x1e;
                if (-1 < iVar28 + -1) {
                  iVar29 = iVar28 + -1;
                }
                uVar21 = 0;
                uVar22 = (ulonglong)(uint)(iVar29 >> 5);
                if (iVar29 >> 5 < 1) {
                  uVar22 = uVar21;
                }
                iVar29 = 0;
                do {
                  if (uVar22 == uVar21) goto LAB_140b2d32f;
                  iVar29 = iVar29 + 0x20;
                  uVar9 = puVar16[uVar21 + 1];
                  uVar21 = uVar21 + 1;
                } while (uVar9 == 0);
              }
              else {
                uVar21 = 0;
                iVar29 = 0;
              }
              uVar22 = (ulonglong)(-uVar9 & uVar9);
              uVar31 = uVar22 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar31 != 0) {
                for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar12 = (iVar29 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar28 <= iVar12) {
                iVar12 = iVar28;
              }
            }
            if (iVar12 < iVar28) {
              local_3f0 = (uint *)(param_1 + 0x33);
              uVar9 = 0xffffffff;
              do {
                local_414 = uVar9;
                lVar18 = *local_400;
                lVar11 = (longlong)iVar12;
                uVar4 = *(ushort *)(lVar18 + 8 + lVar11 * 0x14);
                local_350 = *(undefined8 *)(lVar18 + lVar11 * 0x14);
                local_354[0] = 1;
                local_418 = iVar29;
                uVar9 = FUN_140813180(lVar5,local_354);
                if (((((int)uVar9 < 0) || (*(int *)(lVar5 + 0xc0) <= (int)uVar9)) ||
                    (lVar27 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar9 * 8),
                    lVar27 == 0)) ||
                   (((bVar3 = *(byte *)(lVar27 + 0x10), 1 < bVar3 - 1 && (bVar3 != 0x80)) &&
                    ((0x20 < bVar3 || ((0x100010010U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)))))) {
                  pdVar24 = (double *)&DAT_14c846480;
                  pdVar25 = local_348;
                  for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                    *pdVar25 = *pdVar24;
                    pdVar24 = pdVar24 + 1;
                    pdVar25 = pdVar25 + 1;
                  }
                }
                else {
                  FUN_1401571e4(lVar5,local_348,lVar27,3);
                }
                if (((((*(int *)((longlong)param_1 + 0xfc) != 0) &&
                      (uVar9 = *(uint *)(param_1 + 0x1f), -1 < (int)uVar9)) &&
                     ((int)uVar9 < DAT_14c9647dc)) &&
                    ((puVar19 = (undefined8 *)
                                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                     puVar19 != (undefined8 *)0x0 &&
                     (*(int *)(puVar19 + 2) == *(int *)((longlong)param_1 + 0xfc))))) &&
                   ((*(uint *)(puVar19 + 1) & 0x10200000) == 0)) {
                  if ((*(uint *)(puVar19 + 1) & 0x10200000) == 0) {
                    uVar17 = *puVar19;
                  }
                  else {
                    uVar17 = 0;
                  }
                  uVar10 = FUN_149199512(uVar17,&local_3b8,lVar11 * 0x14 + lVar18);
                  dVar46 = local_308._0_8_;
                  dVar47 = local_308._8_8_;
                  dVar48 = local_2f8._0_8_;
                  dVar38 = local_2f8._8_8_;
                  dVar32 = local_378._0_8_;
                  dVar35 = local_378._8_8_;
                  dVar36 = local_368._0_8_;
                  auVar39 = minpd(local_378,local_308);
                  auVar40 = minpd(local_368,local_2f8);
                  auVar45._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
                  auVar45._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
                  iVar28 = movmskpd(uVar10,auVar45);
                  auVar39._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
                  auVar39._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
                  uVar9 = movmskpd((int)uVar17,auVar39);
                  if ((uVar9 & 0x3fffffff) == 0 && iVar28 == 0) {
                    dVar41 = dStack_3b0 * (double)local_338._0_8_ * -1.0 +
                             local_3a8 * local_348[1] +
                             dStack_3a0 * local_348[0] * 1.0 + local_3b8 * (double)local_338._8_8_;
                    dVar43 = local_3b8 * (double)local_338._0_8_ * 1.0 +
                             dStack_3a0 * local_348[1] +
                             local_3a8 * local_348[0] * -1.0 + dStack_3b0 * (double)local_338._8_8_;
                    auVar40._0_8_ =
                         dStack_3a0 * (double)local_338._0_8_ * 1.0 +
                         ((local_348[0] * dStack_3b0 * 1.0 + local_3a8 * (double)local_338._8_8_) -
                         local_3b8 * local_348[1]);
                    auVar40._8_8_ =
                         local_3a8 * (double)local_338._0_8_ * -1.0 +
                         ((local_348[0] * local_3b8 * -1.0 + dStack_3a0 * (double)local_338._8_8_) -
                         dStack_3b0 * local_348[1]);
                    dVar54 = local_398 * dVar46;
                    dVar55 = dStack_390 * dVar47;
                    dVar49 = local_388 * dVar48;
                    dVar51 = dStack_380 * dVar38;
                    dVar52 = dVar55 * local_348[0] - local_348[1] * dVar54;
                    dVar53 = dVar49 * local_348[1] - (double)local_338._0_8_ * dVar55;
                    dVar42 = dVar54 * (double)local_338._0_8_ - local_348[0] * dVar49;
                    dVar44 = dVar51 * (double)local_338._8_8_ - (double)local_338._8_8_ * dVar51;
                    dVar53 = dVar53 + dVar53;
                    dVar42 = dVar42 + dVar42;
                    dVar52 = dVar52 + dVar52;
                    dVar44 = dVar44 + dVar44;
                    dVar32 = dVar32 * dVar46;
                    dVar35 = dVar35 * dVar47;
                    dVar36 = dVar36 * dVar48;
                    dVar38 = local_368._8_8_ * dVar38;
                    local_328 = (dVar52 * local_348[1] - (double)local_338._0_8_ * dVar42) +
                                (double)local_338._8_8_ * dVar53 + dVar54 + local_328;
                    dStack_320 = (dVar53 * (double)local_338._0_8_ - dVar52 * local_348[0]) +
                                 (double)local_338._8_8_ * dVar42 + dVar55 + dStack_320;
                    local_318 = (dVar42 * local_348[0] - local_348[1] * dVar53) +
                                (double)local_338._8_8_ * dVar52 + dVar49 + local_318;
                    dStack_310 = (dVar44 * (double)local_338._8_8_ -
                                 dVar44 * (double)local_338._8_8_) +
                                 (double)local_338._8_8_ * dVar44 + dVar51 + dStack_310;
                  }
                  else {
                    dVar41 = local_348[1] + local_348[1];
                    dVar42 = (double)local_338._0_8_ + (double)local_338._0_8_;
                    dVar43 = local_348[0] * (local_348[0] + local_348[0]);
                    local_1a8 = (1.0 - (dVar43 + local_348[1] * dVar41)) * dVar48;
                    dVar44 = (local_348[0] + local_348[0]) * (double)local_338._8_8_;
                    local_1b8 = (dVar41 * (double)local_338._8_8_ + local_348[0] * dVar42) * dVar48;
                    dVar38 = dVar38 * local_368._8_8_;
                    local_3d8._8_4_ = SUB84(dVar38,0);
                    local_3d8._0_8_ = dVar48 * dVar36;
                    local_3d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                    local_1d8 = (dVar41 * local_348[0] - dVar42 * (double)local_338._8_8_) * dVar47;
                    dStack_1b0 = (dVar42 * local_348[1] - dVar44) * dVar48;
                    local_1f8 = (void *)((1.0 - ((double)local_338._0_8_ * dVar42 +
                                                local_348[1] * dVar41)) * dVar46);
                    dStack_1d0 = (1.0 - ((double)local_338._0_8_ * dVar42 + dVar43)) * dVar47;
                    dStack_1f0 = (dVar41 * local_348[0] + dVar42 * (double)local_338._8_8_) * dVar46
                    ;
                    local_1c8 = (dVar42 * local_348[1] + dVar44) * dVar47;
                    local_1e8 = (local_348[0] * dVar42 - dVar41 * (double)local_338._8_8_) * dVar46;
                    uStack_1e0 = 0;
                    uStack_1c0 = 0;
                    uStack_1a0 = 0;
                    local_198 = local_328;
                    dStack_190 = dStack_320;
                    local_188 = local_318;
                    uStack_180 = 0x3ff0000000000000;
                    dVar42 = dStack_3b0 + dStack_3b0;
                    dVar48 = local_3a8 + local_3a8;
                    dVar44 = local_3b8 * (local_3b8 + local_3b8);
                    local_228 = (1.0 - (dVar44 + dStack_3b0 * dVar42)) * dVar36;
                    dVar38 = (local_3b8 + local_3b8) * dStack_3a0;
                    local_238 = (dVar42 * dStack_3a0 + local_3b8 * dVar48) * dVar36;
                    local_258 = (dVar42 * local_3b8 - dVar48 * dStack_3a0) * dVar35;
                    dStack_230 = (dVar48 * dStack_3b0 - dVar38) * dVar36;
                    local_3e8 = dVar46 * dVar32;
                    dStack_3e0 = dVar47 * dVar35;
                    local_278 = (1.0 - (local_3a8 * dVar48 + dStack_3b0 * dVar42)) * dVar32;
                    dStack_250 = (1.0 - (local_3a8 * dVar48 + dVar44)) * dVar35;
                    dStack_270 = (dVar42 * local_3b8 + dVar48 * dStack_3a0) * dVar32;
                    local_248 = (dVar48 * dStack_3b0 + dVar38) * dVar35;
                    local_268 = (local_3b8 * dVar48 - dVar42 * dStack_3a0) * dVar32;
                    uStack_260 = 0;
                    uStack_240 = 0;
                    uStack_220 = 0;
                    local_218 = local_398;
                    dStack_210 = dStack_390;
                    local_208 = local_388;
                    uStack_200 = 0x3ff0000000000000;
                    FUN_1447fea8d(local_178,&local_278,&local_1f8);
                    dVar35 = dStack_3e0;
                    dVar32 = local_3e8;
                    auVar39 = _DAT_149934d80;
                    local_3f8 = local_168;
                    dVar46 = local_168 * local_168 +
                             (double)local_178._0_8_ * (double)local_178._0_8_ +
                             stack0xfffffffffffffe90 * stack0xfffffffffffffe90;
                    dVar48 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
                    dVar47 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                    uVar31 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
                    dVar46 = (double)(~uVar31 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar46)) & uVar31);
                    uVar31 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
                    dVar48 = (double)(~uVar31 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar48)) & uVar31);
                    dVar36 = (double)local_3d8._0_8_;
                    dVar38 = (double)local_3d8._8_8_;
                    uVar31 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
                    dVar47 = (double)(~uVar31 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar47)) & uVar31);
                    auVar33._8_8_ = -(ulonglong)(0.0 <= dStack_3e0);
                    auVar33._0_8_ = -(ulonglong)(0.0 <= local_3e8);
                    auVar45 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar33);
                    dVar42 = (double)(~-(ulonglong)(0.0 <= (double)local_3d8._0_8_) &
                                      0xbff0000000000000 |
                                     -(ulonglong)(0.0 <= (double)local_3d8._0_8_) &
                                     0x3ff0000000000000);
                    dVar44 = auVar45._0_8_;
                    stack0xfffffffffffffe90 = stack0xfffffffffffffe90 * dVar46 * dVar44;
                    local_178._0_8_ = (double)local_178._0_8_ * dVar46 * dVar44;
                    local_168 = dVar46 * local_168 * dVar44;
                    dVar46 = auVar45._8_8_;
                    local_148 = dVar48 * local_148 * dVar46;
                    local_150 = local_150 * dVar48 * dVar46;
                    local_158 = dVar46 * local_158 * dVar48;
                    local_128 = dVar47 * local_128 * dVar42;
                    local_130 = local_130 * dVar47 * dVar42;
                    local_138 = dVar42 * local_138 * dVar47;
                    FUN_14481fd10(&local_298,local_178);
                    dVar46 = local_288 * local_288 + local_298 * local_298;
                    dVar48 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                    auVar37._0_8_ = dVar46 + dVar48;
                    auVar37._8_8_ = dVar46 + dVar48;
                    auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
                    auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
                    auVar45 = sqrtpd(auVar37,auVar37);
                    auVar39 = divpd(auVar39,auVar45);
                    auVar50._0_8_ = auVar39._0_8_ * local_288;
                    auVar50._8_8_ = auVar39._8_8_ * dStack_280;
                    dVar41 = (double)((ulonglong)(local_298 * auVar39._0_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
                    dVar43 = (double)((ulonglong)(dStack_290 * auVar39._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
                    auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar34);
                    dStack_310 = 0.0;
                    local_318 = local_108;
                    local_328 = local_118;
                    dStack_320 = dStack_110;
                  }
                  local_348[0] = dVar41;
                  local_348[1] = dVar43;
                  local_338 = auVar40;
                  local_308._8_4_ = SUB84(dVar35,0);
                  local_308._0_8_ = dVar32;
                  local_308._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                  local_2f8._8_4_ = SUB84(dVar38,0);
                  local_2f8._0_8_ = dVar36;
                  local_2f8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                }
                pdVar24 = local_348;
                pdVar25 = (double *)((ulonglong)((uint)uVar4 * 0x60) + local_2e8[0]);
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *pdVar25 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar25 = pdVar25 + 1;
                }
                *(undefined1 *)(local_2e8[3] + (ulonglong)uVar4) = 1;
                uVar9 = local_414 & ~(uint)uVar22;
                puVar16 = (uint *)param_1[0x35];
                if ((uint *)param_1[0x35] == (uint *)0x0) {
                  puVar16 = local_3f0;
                }
                iVar28 = (int)param_1[0x36];
                iVar12 = (int)uVar21;
                lVar18 = (longlong)iVar12;
                uVar14 = puVar16[lVar18] & uVar9;
                iVar29 = local_418;
                if (uVar14 == 0) {
                  iVar15 = iVar28 + 0x1e;
                  if (-1 < iVar28 + -1) {
                    iVar15 = iVar28 + -1;
                  }
                  iVar15 = iVar15 >> 5;
                  iVar13 = iVar15;
                  if (iVar15 < iVar12) {
                    iVar13 = iVar12;
                  }
                  if (iVar15 <= iVar12) break;
                  lVar11 = 0;
                  while( true ) {
                    iVar29 = iVar29 + 0x20;
                    uVar14 = puVar16[lVar18 + lVar11 + 1];
                    if (uVar14 != 0) break;
                    lVar11 = lVar11 + 1;
                    if (iVar13 - lVar18 == lVar11) goto LAB_140b2d32f;
                  }
                  uVar21 = (ulonglong)(iVar12 + (int)lVar11 + 1);
                  uVar9 = 0xffffffff;
                }
                uVar22 = (ulonglong)(-uVar14 & uVar14);
                uVar31 = uVar22 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar31 != 0) {
                  for (; uVar31 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar12 = (iVar29 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              } while (iVar12 < iVar28);
            }
          }
          else {
            puVar20 = (ushort *)*plVar1;
            puVar2 = puVar20 + (longlong)(int)param_1[0x24] * 2;
            do {
              uVar4 = puVar20[1];
              if ((((int)(uint)*puVar20 < *(int *)(lVar5 + 0xc0)) &&
                  (lVar18 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)*puVar20 * 8),
                  lVar18 != 0)) &&
                 (((bVar3 = *(byte *)(lVar18 + 0x10), bVar3 - 1 < 2 || (bVar3 == 0x80)) ||
                  ((bVar3 < 0x21 && ((0x100010010U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)))))) {
                FUN_1401571e4(lVar5,local_178,lVar18,3);
              }
              else {
                puVar19 = &DAT_14c846480;
                puVar26 = (undefined8 *)local_178;
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *puVar26 = *puVar19;
                  puVar19 = puVar19 + 1;
                  puVar26 = puVar26 + 1;
                }
              }
              puVar19 = (undefined8 *)local_178;
              puVar26 = (undefined8 *)
                        ((ulonglong)(((uint)uVar4 * 2 + (uint)uVar4) * 0x20) + local_2e8[0]);
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *puVar26 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar26 = puVar26 + 1;
              }
              *(undefined1 *)(local_2e8[3] + (ulonglong)uVar4) = 1;
              puVar20 = puVar20 + 2;
            } while (puVar20 != puVar2);
          }
LAB_140b2d32f:
          FUN_144b1e05a(local_2e8,local_408);
          FUN_142400cf0(*(undefined8 *)(local_410 + 0x20),*(undefined4 *)(local_410 + 0x28));
        }
      }
LAB_140b2d352:
      if (*(char *)((longlong)param_1 + 0x103) == '\x01') {
        local_160 = 0;
        _local_178 = ZEXT816(0);
        local_168 = (double)((ulonglong)local_168 & 0xffffffffffffff00);
        iVar28 = *(int *)(*(longlong *)(lVar5 + 0xf0) + 0x38);
        if (iVar28 < 0) {
LAB_140b2d7e4:
          _local_178 = ZEXT816(0);
          local_160 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar28);
        }
        if (iVar28 != 0) {
          FUN_14480ffb8(local_178);
        }
        iVar28 = *(int *)(lVar5 + 0xc0);
        if (0 < iVar28) {
          lVar18 = 0;
          do {
            lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + lVar18 * 8);
            if (((lVar11 != 0) && (*(char *)(lVar11 + 0x10) == '\b')) &&
               (*(char *)(lVar11 + 0x48) == '\x01')) {
              puVar23 = &DAT_14bb83714;
              if (*(undefined4 **)(lVar11 + 0x50) != (undefined4 *)0x0) {
                puVar23 = *(undefined4 **)(lVar11 + 0x50);
              }
              uVar10 = local_178._8_4_;
              lVar27 = (longlong)(int)local_178._8_4_;
              uVar9 = local_178._8_4_ + 1;
              local_178._8_4_ = uVar9;
              if (uStack_16c < uVar9) {
                FUN_1406de67a(local_178,uVar10);
              }
              lVar27 = lVar27 * 0x10;
              uVar10 = *puVar23;
              *(undefined8 *)(local_178._0_8_ + lVar27) = *(undefined8 *)(lVar11 + 0x14);
              *(undefined4 *)(local_178._0_8_ + 8 + lVar27) = uVar10;
              *(undefined1 *)(local_178._0_8_ + 0xc + lVar27) = 0;
              local_168 = (double)((ulonglong)local_168 & 0xffffffffffffff00);
              iVar28 = *(int *)(lVar5 + 0xc0);
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 < iVar28);
        }
        FUN_1449802a2(local_410 + 0x38,local_178);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b2d805 FUN_140b2d805 body=1290 status=ok
// SIG undefined FUN_140b2d805(void)

undefined8 *
FUN_140b2d805(undefined8 *param_1,undefined8 param_2,uint param_3,ulonglong param_4,char param_5,
             char param_6)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (param_3 & 0xff) - 1;
  if ((param_4 & 0x20) == 0) {
    switch(iVar1) {
    case 0:
      if ((param_4 & 0x40) == 0) {
        FUN_140b2e05e();
        FUN_1448e935e(param_2,&local_30,&DAT_14caadcd0,0);
        FUN_140b2e05e();
      }
      else {
        FUN_1460a4944();
        FUN_1448e935e(param_2,&local_30,&DAT_14caae3c0,0);
        FUN_1460a4944();
      }
      break;
    case 1:
      FUN_140b2df44();
      FUN_1448e935e(param_2,&local_30,&DAT_14caaf1a0,0);
      FUN_140b2df44();
      break;
    case 2:
      FUN_140b2e178();
      FUN_1448e935e(param_2,&local_30,&DAT_14caaf3f0,0);
      FUN_140b2e178();
      break;
    case 3:
      FUN_140b2e292();
      FUN_1448e935e(param_2,&local_30,&DAT_14caaf640,0);
      FUN_140b2e292();
      break;
    default:
      if ((param_4 & 0x40) != 0) {
        if (param_6 == '\0') {
          if (param_5 == '\0') {
            FUN_140b2de2a();
            FUN_1448e935e(param_2,&local_30,&DAT_14caaef50,0);
            FUN_140b2de2a();
            break;
          }
          FUN_14750e968(&local_30,param_2);
        }
        else if (param_5 == '\0') {
          FUN_14750e900(&local_30,param_2);
        }
        else {
          FUN_14750e898();
        }
LAB_140b2db14:
        *param_1 = CONCAT44(uStack_2c,local_30);
        param_1[1] = CONCAT44(uStack_24,uStack_28);
        goto LAB_140b2d89a;
      }
      if (param_6 == '\0') {
        if (param_5 == '\0') {
          FUN_140b2dd10();
          FUN_1448e935e(param_2,&local_30,&DAT_14caaed00,0);
          FUN_140b2dd10();
        }
        else {
          FUN_140b2e92e();
          FUN_1448e935e(param_2,&local_30,&DAT_14caada80,0);
          FUN_140b2e92e();
        }
      }
      else if (param_5 == '\0') {
        FUN_140b2e814();
        FUN_1448e935e(param_2,&local_30,&DAT_14caaee28,0);
        FUN_140b2e814();
      }
      else {
        FUN_140b2e6fa();
        FUN_1448e935e(param_2,&local_30,&DAT_14caadba8,0);
        FUN_140b2e6fa();
      }
      break;
    case 6:
      FUN_140b2e3ac();
      FUN_1448e935e(param_2,&local_30,&DAT_14caaf890,0);
      FUN_140b2e3ac();
      break;
    case 7:
      FUN_140b2e4c6();
      FUN_1448e935e(param_2,&local_30,&DAT_14caafae0,0);
      FUN_140b2e4c6();
      break;
    case 8:
      FUN_140b2e5e0();
      FUN_1448e935e(param_2,&local_30,&DAT_14caafd30,0);
      FUN_140b2e5e0();
    }
  }
  else {
    switch(iVar1) {
    case 0:
      if ((param_4 & 0x40) == 0) {
        FUN_1460a41f4();
        FUN_1448e935e(param_2,&local_30,&DAT_14caae048,0);
        FUN_1460a41f4();
      }
      else {
        FUN_1460a5094();
        FUN_1448e935e(param_2,&local_30,&DAT_14caae738,0);
        FUN_1460a5094();
      }
      break;
    case 1:
      FUN_1460a5f34();
      FUN_1448e935e(param_2,&local_30,&DAT_14caaf2c8,0);
      FUN_1460a5f34();
      break;
    case 2:
      FUN_1460a61a4();
      FUN_1448e935e(param_2,&local_30,&DAT_14caaf518,0);
      FUN_1460a61a4();
      break;
    case 3:
      FUN_1460a6414();
      FUN_1448e935e(param_2,&local_30,&DAT_14caaf768,0);
      FUN_1460a6414();
      break;
    default:
      if ((param_4 & 0x40) == 0) {
        if (param_6 == '\0') {
          if (param_5 == '\0') {
            FUN_14750e690(&local_30,param_2);
          }
          else {
            FUN_14750e628();
          }
        }
        else if (param_5 == '\0') {
          FUN_14750e5c0(&local_30,param_2);
        }
        else {
          FUN_14750e558();
        }
      }
      else if (param_6 == '\0') {
        if (param_5 == '\0') {
          FUN_14750e830(&local_30,param_2);
        }
        else {
          FUN_14750e7c8();
        }
      }
      else if (param_5 == '\0') {
        FUN_14750e760(&local_30,param_2);
      }
      else {
        FUN_14750e6f8();
      }
      goto LAB_140b2db14;
    case 6:
      FUN_1460a6684();
      FUN_1448e935e(param_2,&local_30,&DAT_14caaf9b8,0);
      FUN_1460a6684();
      break;
    case 7:
      FUN_1460a68f4();
      FUN_1448e935e(param_2,&local_30,&DAT_14caafc08,0);
      FUN_1460a68f4();
      break;
    case 8:
      FUN_1460a6b64();
      FUN_1448e935e(param_2,&local_30,&DAT_14caafe58,0);
      FUN_1460a6b64();
    }
  }
  *(undefined4 *)param_1 = local_30;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_2c;
  *(undefined4 *)(param_1 + 1) = uStack_28;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_24;
LAB_140b2d89a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b2dd10 FUN_140b2dd10 body=281 status=ok
// SIG undefined FUN_140b2dd10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2dd10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaeda8) {
    FUN_144b3d300(&DAT_14caaeda8);
    if (DAT_14caaeda8 == -1) {
      FUN_14577371a();
      FUN_140db5666(&DAT_14caaed00,0,&DAT_14caaec98,L"TSlateElementPSDefaultfalsetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750fde0,
                    FUN_14750fdb8,&LAB_14750fdb4,&LAB_14750fdb0,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaed00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c608b);
      _Init_thread_footer(&DAT_14caaeda8);
    }
  }
  return &DAT_14caaed00;
}



// FUNCTION 140b2de2a FUN_140b2de2a body=281 status=ok
// SIG undefined FUN_140b2de2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2de2a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaeff8) {
    FUN_144b3d300(&DAT_14caaeff8);
    if (DAT_14caaeff8 == -1) {
      FUN_1457739c2();
      FUN_140db5666(&DAT_14caaef50,0,&DAT_14caaeee8,L"TSlateElementPSDefaultfalsefalsefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750ff34,
                    FUN_14750ff0c,&LAB_14750ff08,&LAB_14750ff04,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaef50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c60a3);
      _Init_thread_footer(&DAT_14caaeff8);
    }
  }
  return &DAT_14caaef50;
}



// FUNCTION 140b2df44 FUN_140b2df44 body=281 status=ok
// SIG undefined FUN_140b2df44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2df44(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaf248) {
    FUN_144b3d300(&DAT_14caaf248);
    if (DAT_14caaf248 == -1) {
      FUN_145773b16();
      FUN_140db5666(&DAT_14caaf1a0,0,&DAT_14caaf138,
                    L"TSlateElementPSGrayscaleFontfalsetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_147510088,
                    FUN_147510060,&LAB_14751005c,&LAB_147510058,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaf1a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c60bb);
      _Init_thread_footer(&DAT_14caaf248);
    }
  }
  return &DAT_14caaf1a0;
}



// FUNCTION 140b2e05e FUN_140b2e05e body=281 status=ok
// SIG undefined FUN_140b2e05e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2e05e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caadd78) {
    FUN_144b3d300(&DAT_14caadd78);
    if (DAT_14caadd78 == -1) {
      FUN_1457735c6();
      FUN_140db5666(&DAT_14caadcd0,0,&DAT_14caadc68,L"TSlateElementPSBorderfalsetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f494,
                    FUN_14750f46c,&LAB_14750f468,&LAB_14750f464,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caadcd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5fe3);
      _Init_thread_footer(&DAT_14caadd78);
    }
  }
  return &DAT_14caadcd0;
}



// FUNCTION 140b2e178 FUN_140b2e178 body=281 status=ok
// SIG undefined FUN_140b2e178(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2e178(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaf498) {
    FUN_144b3d300(&DAT_14caaf498);
    if (DAT_14caaf498 == -1) {
      FUN_145773c6a();
      FUN_140db5666(&DAT_14caaf3f0,0,&DAT_14caaf388,L"TSlateElementPSColorFontfalsetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_1475101dc,
                    FUN_1475101b4,&LAB_1475101b0,&LAB_1475101ac,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaf3f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c60d3);
      _Init_thread_footer(&DAT_14caaf498);
    }
  }
  return &DAT_14caaf3f0;
}



// FUNCTION 140b2e292 FUN_140b2e292 body=281 status=ok
// SIG undefined FUN_140b2e292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2e292(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaf6e8) {
    FUN_144b3d300(&DAT_14caaf6e8);
    if (DAT_14caaf6e8 == -1) {
      FUN_145773dbe();
      FUN_140db5666(&DAT_14caaf640,0,&DAT_14caaf5d8,
                    L"TSlateElementPSLineSegmentfalsetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_147510330,
                    FUN_147510308,&LAB_147510304,&LAB_147510300,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaf640 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c60eb);
      _Init_thread_footer(&DAT_14caaf6e8);
    }
  }
  return &DAT_14caaf640;
}



// FUNCTION 140b2e3ac FUN_140b2e3ac body=281 status=ok
// SIG undefined FUN_140b2e3ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2e3ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaf938) {
    FUN_144b3d300(&DAT_14caaf938);
    if (DAT_14caaf938 == -1) {
      FUN_145773f12();
      FUN_140db5666(&DAT_14caaf890,0,&DAT_14caaf828,L"TSlateElementPSRoundedBoxfalsetruefalsefalseA"
                    ,L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_147510484,
                    FUN_14751045c,&LAB_147510458,&LAB_147510454,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaf890 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6103);
      _Init_thread_footer(&DAT_14caaf938);
    }
  }
  return &DAT_14caaf890;
}



// FUNCTION 140b2e4c6 FUN_140b2e4c6 body=281 status=ok
// SIG undefined FUN_140b2e4c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2e4c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caafb88) {
    FUN_144b3d300(&DAT_14caafb88);
    if (DAT_14caafb88 == -1) {
      FUN_145774066();
      FUN_140db5666(&DAT_14caafae0,0,&DAT_14caafa78,L"TSlateElementPSSdfFontfalsetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_1475105d8,
                    FUN_1475105b0,&LAB_1475105ac,&LAB_1475105a8,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caafae0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c611b);
      _Init_thread_footer(&DAT_14caafb88);
    }
  }
  return &DAT_14caafae0;
}



// FUNCTION 140b2e5e0 FUN_140b2e5e0 body=281 status=ok
// SIG undefined FUN_140b2e5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2e5e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caafdd8) {
    FUN_144b3d300(&DAT_14caafdd8);
    if (DAT_14caafdd8 == -1) {
      FUN_1457741ba();
      FUN_140db5666(&DAT_14caafd30,0,&DAT_14caafcc8,L"TSlateElementPSMsdfFontfalsetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14751072c,
                    FUN_147510704,&LAB_147510700,&LAB_1475106fc,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caafd30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6133);
      _Init_thread_footer(&DAT_14caafdd8);
    }
  }
  return &DAT_14caafd30;
}



// FUNCTION 140b2e6fa FUN_140b2e6fa body=281 status=ok
// SIG undefined FUN_140b2e6fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2e6fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caadc50) {
    FUN_144b3d300(&DAT_14caadc50);
    if (DAT_14caadc50 == -1) {
      FUN_145773472();
      FUN_140db5666(&DAT_14caadba8,0,&DAT_14caadb40,L"TSlateElementPSDefaultfalsetruetruetrueA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f3ea,
                    FUN_14750f3c2,&LAB_14750f3be,&LAB_14750f3ba,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caadba8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5fd7);
      _Init_thread_footer(&DAT_14caadc50);
    }
  }
  return &DAT_14caadba8;
}



// FUNCTION 140b2e814 FUN_140b2e814 body=281 status=ok
// SIG undefined FUN_140b2e814(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2e814(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaeed0) {
    FUN_144b3d300(&DAT_14caaeed0);
    if (DAT_14caaeed0 == -1) {
      FUN_14577386e();
      FUN_140db5666(&DAT_14caaee28,0,&DAT_14caaedc0,L"TSlateElementPSDefaultfalsetruefalsetrueA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750fe8a,
                    FUN_14750fe62,&LAB_14750fe5e,&LAB_14750fe5a,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaee28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6097);
      _Init_thread_footer(&DAT_14caaeed0);
    }
  }
  return &DAT_14caaee28;
}



// FUNCTION 140b2e92e FUN_140b2e92e body=281 status=ok
// SIG undefined FUN_140b2e92e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2e92e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caadb28) {
    FUN_144b3d300(&DAT_14caadb28);
    if (DAT_14caadb28 == -1) {
      FUN_14577331e();
      FUN_140db5666(&DAT_14caada80,0,&DAT_14caada18,L"TSlateElementPSDefaultfalsetruetruefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f340,
                    FUN_14750f318,&LAB_14750f314,&LAB_14750f310,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caada80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5fcb);
      _Init_thread_footer(&DAT_14caadb28);
    }
  }
  return &DAT_14caada80;
}



// FUNCTION 140b2ea47 FUN_140b2ea47 body=1178 status=ok
// SIG undefined FUN_140b2ea47(void)

ulonglong FUN_140b2ea47(longlong *param_1,int *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  int *piVar16;
  undefined8 unaff_RBP;
  ulonglong uVar17;
  int *piVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  int *local_80;
  undefined8 local_78;
  int iStack_70;
  int iStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar12 = (**(code **)(*param_1 + 0x2e8))();
  if (lVar12 == 0) {
    uVar17 = 0;
    goto LAB_140b2ed35;
  }
  local_58 = 0;
  lVar13 = FUN_140b2f1e2(lVar12,param_2);
  uVar17 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (lVar13 != 0) goto LAB_140b2ed35;
  local_58 = 0;
  local_88 = param_3;
  lVar13 = FUN_140b2ef32(lVar12,param_2);
  if ((lVar13 != 0) && (cVar10 = FUN_1476c1324(lVar13), cVar10 != '\x02')) goto LAB_140b2ed35;
  local_58 = 0;
  uStack_50 = 0;
  local_90 = lVar12;
  lVar12 = (**(code **)(*param_1 + 0x2e8))(param_1);
  local_80 = param_2;
  if ((lVar12 != 0) && (iVar19 = *(int *)(lVar12 + 0x78), 0 < (longlong)iVar19)) {
    lVar13 = 0;
    do {
      uVar17 = uStack_50;
      lVar21 = *(longlong *)(lVar12 + 0x70);
      if ((((*(int *)(lVar21 + 0x58 + lVar13) == *param_2) &&
           (*(int *)(lVar21 + 0x5c + lVar13) == param_2[1])) &&
          (*(int *)(lVar21 + 0x60 + lVar13) == param_2[2])) &&
         (*(int *)(lVar21 + 100 + lVar13) == param_2[3])) {
        lVar20 = (longlong)(int)uStack_50;
        uVar11 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar11);
        if (uStack_50._4_4_ < uVar11) {
          FUN_140b2f284(&local_58,uVar17 & 0xffffffff);
        }
        lVar20 = lVar20 * 0x80;
        puVar1 = (undefined8 *)(local_58 + lVar20);
        *(undefined8 *)(local_58 + lVar20) = 0;
        iVar3 = *(int *)(lVar21 + 8 + lVar13);
        pvVar4 = *(void **)(lVar21 + lVar13);
        *(int *)(local_58 + 8 + lVar20) = iVar3;
        if ((longlong)iVar3 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1401b309e(puVar1,iVar3,0);
          memcpy((void *)*puVar1,pvVar4,(longlong)iVar3 << 3);
        }
        lVar20 = lVar21 + lVar13;
        FUN_140c13dec(puVar1 + 2,lVar20 + 0x10);
        uVar5 = *(undefined4 *)(lVar20 + 0x3c);
        uVar6 = *(undefined4 *)(lVar20 + 0x40);
        uVar7 = *(undefined4 *)(lVar20 + 0x44);
        *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(lVar20 + 0x38);
        *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar5;
        *(undefined4 *)(puVar1 + 8) = uVar6;
        *(undefined4 *)((longlong)puVar1 + 0x44) = uVar7;
        puVar1[9] = 0;
        iVar3 = *(int *)(lVar20 + 0x50);
        pvVar4 = *(void **)(lVar20 + 0x48);
        *(int *)(puVar1 + 10) = iVar3;
        if ((longlong)iVar3 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
        }
        else {
          FUN_1446dd670(puVar1 + 9,iVar3,0);
          memcpy((void *)puVar1[9],pvVar4,(longlong)iVar3 * 2);
        }
        lVar21 = lVar21 + lVar13;
        puVar1[0xf] = *(undefined8 *)(lVar21 + 0x78);
        uVar5 = *(undefined4 *)(lVar21 + 0x58);
        uVar6 = *(undefined4 *)(lVar21 + 0x5c);
        uVar7 = *(undefined4 *)(lVar21 + 0x60);
        uVar8 = *(undefined4 *)(lVar21 + 100);
        uVar9 = *(undefined8 *)(lVar21 + 0x70);
        puVar1[0xd] = *(undefined8 *)(lVar21 + 0x68);
        puVar1[0xe] = uVar9;
        *(undefined4 *)(puVar1 + 0xb) = uVar5;
        *(undefined4 *)((longlong)puVar1 + 0x5c) = uVar6;
        *(undefined4 *)(puVar1 + 0xc) = uVar7;
        *(undefined4 *)((longlong)puVar1 + 100) = uVar8;
        param_2 = local_80;
      }
      lVar13 = lVar13 + 0x80;
    } while ((longlong)iVar19 * 0x80 != lVar13);
  }
  uVar9 = local_88;
  if ((longlong)(int)uStack_50 != 0) {
    lVar12 = (longlong)(int)uStack_50 << 7;
    lVar13 = local_58 + 0x38;
    piVar18 = (int *)0x0;
    do {
      local_68 = (void *)0x0;
      local_60 = *(int *)(lVar13 + 0x18);
      lVar21 = (longlong)local_60;
      pvVar4 = *(void **)(lVar13 + 0x10);
      if (lVar21 == 0) {
        local_5c = 0;
        iVar19 = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar4,lVar21 * 2);
        iVar19 = local_60;
      }
      piVar16 = (int *)(ulonglong)(iVar19 - 1);
      if (iVar19 == 0) {
        piVar16 = piVar18;
      }
      cVar10 = FUN_1402ca054(uVar9,local_68,piVar16);
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (cVar10 != '\0') {
        local_78 = 0;
        lVar21 = FUN_140b2f1e2(local_90,lVar13);
        if (lVar21 != 0) goto LAB_140b2eebe;
      }
      local_78 = 0;
      lVar21 = FUN_140b2ef32(local_90);
      if ((lVar21 != 0) && (cVar10 = FUN_1476c1324(lVar21), cVar10 != '\x02')) goto LAB_140b2eebe;
      lVar13 = lVar13 + 0x80;
      lVar12 = lVar12 + -0x80;
    } while (lVar12 != 0);
  }
  if ((longlong)*(int *)(local_90 + 0xe8) == 0) {
    uVar17 = 0;
  }
  else {
    plVar22 = *(longlong **)(local_90 + 0xe0);
    plVar2 = plVar22 + *(int *)(local_90 + 0xe8);
    do {
      plVar14 = (longlong *)*plVar22;
      if (plVar14 != (longlong *)0x0) {
        lVar12 = FUN_14086216a();
        if ((*(int *)(lVar12 + 0x38) <= *(int *)(plVar14[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
            == lVar12 + 0x30)) {
          plVar14 = (longlong *)(**(code **)(*plVar14 + 0x328))(plVar14);
          lVar12 = plVar14[1];
          if ((longlong)(int)lVar12 != 0) {
            lVar13 = *plVar14;
            lVar21 = 0;
            do {
              lVar20 = *(longlong *)(lVar13 + lVar21);
              if (lVar20 != 0) {
                lVar15 = FUN_1408612da();
                piVar18 = local_80;
                if (((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) &&
                   (lVar20 = *(longlong *)(lVar20 + 0x7d8), lVar20 != 0)) {
                  lVar15 = FUN_140b2f383(lVar20,local_80);
                  piVar16 = (int *)(lVar15 + 0x38);
                  if (lVar15 == 0) {
                    piVar16 = piVar18;
                  }
                  local_78 = *(undefined8 *)piVar16;
                  iStack_70 = piVar16[2];
                  iStack_6c = piVar16[3];
                  cVar10 = FUN_140b2ea47(lVar20,&local_78,local_88);
                  if (cVar10 != '\0') goto LAB_140b2eebe;
                }
              }
              lVar21 = lVar21 + 8;
            } while ((longlong)(int)lVar12 * 8 != lVar21);
          }
        }
      }
      plVar22 = plVar22 + 1;
      uVar17 = 0;
    } while (plVar22 != plVar2);
  }
  goto LAB_140b2ed18;
LAB_140b2eebe:
  uVar17 = CONCAT71((int7)((ulonglong)piVar18 >> 8),1);
LAB_140b2ed18:
  FUN_140b2eee2(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_140b2ed35:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 140b2eee2 FUN_140b2eee2 body=79 status=ok
// SIG undefined FUN_140b2eee2(void)

void FUN_140b2eee2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-9] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b2ef32 FUN_140b2ef32 body=161 status=ok
// SIG undefined FUN_140b2ef32(void)

longlong FUN_140b2ef32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = FUN_140734c0a();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  lVar1 = FUN_140b2efd4(param_1,&local_28,param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_140734c0a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_140b2ef83;
  }
  lVar1 = 0;
LAB_140b2ef83:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 140b2efd4 FUN_140b2efd4 body=343 status=ok
// SIG undefined FUN_140b2efd4(void)

undefined8 FUN_140b2efd4(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = FUN_140b2f12c(param_1,param_3);
  if (((iVar2 == -1) || (lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x80), lVar3 == 0)
      ) || (iVar2 = *(int *)(lVar3 + 0x28), (longlong)iVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    uVar5 = 0;
    lVar6 = 0;
    do {
      plVar7 = (longlong *)*param_2;
      if (plVar7 == (longlong *)0x0) {
LAB_140b2f0fd:
        if ((*param_4 == 0) ||
           ((**(code **)(**(longlong **)(lVar3 + lVar6) + 0x2d0))
                      (*(longlong **)(lVar3 + lVar6),&local_50), local_50 == *param_4)) {
          uVar5 = *(undefined8 *)(lVar3 + lVar6);
          break;
        }
      }
      else if (plVar7[0x22] == 0) {
        (**(code **)(*plVar7 + 1000))(plVar7);
        if (plVar7[0x22] == 0) goto LAB_140b2f0fd;
        plVar7 = (longlong *)*param_2;
        if (plVar7 != (longlong *)0x0) goto LAB_140b2f058;
      }
      else {
LAB_140b2f058:
        lVar1 = *(longlong *)(*(longlong *)(lVar3 + lVar6) + 0x10);
        lVar4 = FUN_1402984e6();
        if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= (int)plVar7[7])) &&
            ((*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30 &&
             ((lVar4 = *param_2, lVar4 != 0 && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)))))
            )) && (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                   == lVar4 + 0x30)) goto LAB_140b2f0fd;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140b2f12c FUN_140b2f12c body=182 status=ok
// SIG undefined FUN_140b2f12c(void)

ulonglong FUN_140b2f12c(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  lVar4 = *(longlong *)(param_1 + 0x80);
  if ((int)uVar2 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar9 = uVar2;
    do {
      uVar8 = (uVar9 >> 1) + (int)uVar6;
      lVar7 = (ulonglong)uVar8 * 0x30;
      lVar1 = lVar4 + lVar7;
      uVar3 = *(uint *)(lVar4 + lVar7);
      if ((uVar3 < *param_2) ||
         ((uVar3 <= *param_2 &&
          ((*(uint *)(lVar1 + 4) < param_2[1] ||
           ((*(uint *)(lVar1 + 4) == param_2[1] &&
            ((*(uint *)(lVar1 + 8) < param_2[2] ||
             ((*(uint *)(lVar1 + 8) == param_2[2] && (*(uint *)(lVar1 + 0xc) < param_2[3])))))))))))
         ) {
        uVar6 = (ulonglong)(uVar8 + (uVar9 & 1));
      }
      bVar5 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar5);
  }
  if ((int)uVar6 < (int)uVar2) {
    lVar1 = lVar4 + uVar6 * 0x30;
    uVar2 = *(uint *)(lVar4 + uVar6 * 0x30);
    if (uVar2 <= *param_2) {
      if (*param_2 != uVar2) {
        return uVar6;
      }
      if (*(uint *)(lVar1 + 4) <= param_2[1]) {
        if (param_2[1] != *(uint *)(lVar1 + 4)) {
          return uVar6;
        }
        if (*(uint *)(lVar1 + 8) <= param_2[2]) {
          if (param_2[2] != *(uint *)(lVar1 + 8)) {
            return uVar6;
          }
          if (*(uint *)(lVar1 + 0xc) <= param_2[3]) {
            return uVar6;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 140b2f1e2 FUN_140b2f1e2 body=161 status=ok
// SIG undefined FUN_140b2f1e2(void)

longlong FUN_140b2f1e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = FUN_140bc800c();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  lVar1 = FUN_140b2efd4(param_1,&local_28,param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_140bc800c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_140b2f233;
  }
  lVar1 = 0;
LAB_140b2f233:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 140b2f284 FUN_140b2f284 body=255 status=ok
// SIG undefined FUN_140b2f284(void)

void FUN_140b2f284(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b2f383 FUN_140b2f383 body=89 status=ok
// SIG undefined FUN_140b2f383(void)

longlong FUN_140b2f383(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2e8))();
  if ((lVar1 != 0) && (lVar2 = (longlong)*(int *)(lVar1 + 0x78), 0 < lVar2)) {
    lVar1 = *(longlong *)(lVar1 + 0x70);
    do {
      if ((((*(int *)(lVar1 + 0x68) == *param_2) && (*(int *)(lVar1 + 0x6c) == param_2[1])) &&
          (*(int *)(lVar1 + 0x70) == param_2[2])) && (*(int *)(lVar1 + 0x74) == param_2[3])) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x80;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 140b2f3dc FUN_140b2f3dc body=40 status=ok
// SIG undefined FUN_140b2f3dc(void)

undefined8 FUN_140b2f3dc(undefined8 param_1,int param_2)

{
  FUN_140b2f404();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b2f404 FUN_140b2f404 body=237 status=ok
// SIG undefined FUN_140b2f404(void)

void FUN_140b2f404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae36100;
  param_1[5] = &PTR_FUN_14ae36b80;
  param_1[6] = &PTR_LAB_14ae36bc0;
  param_1[0x55] = &PTR_FUN_14ae36c10;
  param_1[0x56] = &PTR_FUN_14ae36c90;
  param_1[0x57] = &PTR_FUN_14ae36ca0;
  param_1[0xca] = &PTR_FUN_14ae36cd0;
  FUN_144760e21(param_1[0xda],*(undefined4 *)(param_1 + 0xdb));
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7e1b(param_1[0xcf],*(undefined4 *)(param_1 + 0xd0));
  if (param_1[0xcf] != 0) {
    FUN_1400020a8();
  }
  FUN_140b2f4f1(param_1[0xcd],*(undefined4 *)(param_1 + 0xce));
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 140b2f4f1 FUN_140b2f4f1 body=61 status=ok
// SIG undefined FUN_140b2f4f1(void)

void FUN_140b2f4f1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b2f52e FUN_140b2f52e body=337 status=ok
// SIG undefined FUN_140b2f52e(void)

undefined4 *
FUN_140b2f52e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b2f766(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar3 = *(undefined8 *)*param_3;
  *local_38 = uVar3;
  local_38[1] = *puVar1;
  lVar7 = puVar1[1];
  local_38[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar3 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = (uint)((ulonglong)uVar3 >> 0x20) ^ (uint)uVar3;
  local_58 = param_4;
  cVar2 = FUN_140b2f680(param_1,uVar8,local_38);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140b2f93c(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b2f680 FUN_140b2f680 body=230 status=ok
// SIG undefined FUN_140b2f680(void)

void FUN_140b2f680(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_1407cb62e(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          break;
        }
        iVar10 = puVar3[6];
        uVar8 = 0;
      } while (iVar10 != -1);
      goto LAB_140b2f6d2;
    }
  }
  uVar8 = 0;
LAB_140b2f6d2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 140b2f766 FUN_140b2f766 body=470 status=ok
// SIG undefined FUN_140b2f766(void)

int * FUN_140b2f766(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x20);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140b2f93c FUN_140b2f93c body=552 status=ok
// SIG undefined FUN_140b2f93c(void)

void FUN_140b2f93c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140b2fb1f;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140b2fb1f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b2fb7c FUN_140b2fb7c body=1895 status=ok
// SIG undefined FUN_140b2fb7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b2fb7c(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong *plVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_278 [32];
  uint local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined1 local_238 [4];
  undefined4 local_234;
  undefined4 local_194;
  undefined1 local_180 [24];
  undefined4 local_168;
  uint local_160;
  int local_15c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined2 local_c9;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80 [4];
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if ((param_1[0x10] == 0) ||
     (*(float *)((longlong)param_1 + 0x31c) <= *(float *)(param_1 + 0x65) &&
      *(float *)(param_1 + 0x65) != *(float *)((longlong)param_1 + 0x31c))) {
    uVar17 = 0x200;
    if (((double)param_1[0x60] == DAT_14c8464e0) &&
       (!NAN((double)param_1[0x60]) && !NAN(DAT_14c8464e0))) {
      if (((double)param_1[0x61] == DAT_14c8464e8) &&
         (!NAN((double)param_1[0x61]) && !NAN(DAT_14c8464e8))) {
        uVar17 = (-(uint)(DAT_14c8464f0 != (double)param_1[0x62]) & 1) << 9;
      }
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffdff | uVar17;
  }
  else {
    *(byte *)((longlong)param_1 + 0x101) = *(byte *)((longlong)param_1 + 0x101) & 0xfd;
    dVar1 = (double)param_1[0x60];
    dVar2 = (double)param_1[0x61];
    dVar3 = (double)param_1[0x62];
    if ((dVar1 == DAT_14c8464e0) && (!NAN(dVar1) && !NAN(DAT_14c8464e0))) {
      if ((dVar2 == DAT_14c8464e8) && (!NAN(dVar2) && !NAN(DAT_14c8464e8))) {
        if ((dVar3 == DAT_14c8464f0) && (!NAN(dVar3) && !NAN(DAT_14c8464f0))) goto LAB_140b30142;
      }
    }
    dVar23 = (double)param_1[0x97] - dVar3;
    dVar13 = (double)param_1[0x96] - dVar2;
    dVar14 = (double)param_1[0x95] - dVar1;
    dVar15 = dVar23 * dVar23 + dVar14 * dVar14 + dVar13 * dVar13;
    if (((dVar15 != 1.0) || (dVar21 = dVar14, dVar22 = dVar13, dVar24 = dVar23, NAN(dVar15))) &&
       (dVar21 = DAT_14c8464e0, dVar22 = DAT_14c8464e8, dVar24 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar15)) {
      dVar21 = 1.0 / SQRT(dVar15);
      dVar24 = dVar23 * dVar21;
      dVar22 = dVar13 * dVar21;
      dVar21 = dVar14 * dVar21;
    }
    local_e8 = dVar3 + dVar24 * 32.0;
    local_f0 = dVar2 + dVar22 * 32.0;
    local_f8 = dVar1 + dVar21 * 32.0;
    local_100 = dVar3 - dVar24 * 32.0;
    local_108 = dVar2 - dVar22 * 32.0;
    local_110 = dVar1 - dVar21 * 32.0;
    if ((*(byte *)(param_1[0x10] + 0x368) & 1) == 0) {
      lVar18 = param_1[0x30];
      if ((lVar18 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar18);
      }
    }
    else {
      lVar18 = 0;
    }
    local_bc = 0;
    local_d8 = 0;
    local_b8 = 0x101;
    local_90 = 0;
    local_88 = 0x800000000;
    local_70 = 0;
    local_68 = 0x400000000;
    local_d0 = 1;
    local_c4 = 0;
    local_e0 = DAT_14cb85218;
    local_cf = 1;
    local_c0 = 0;
    local_cc = 0;
    local_ca = 0;
    if (lVar18 != 0) {
      local_80[0] = *(undefined4 *)(lVar18 + 0xc);
      local_68 = 0x400000001;
      local_d8 = *(undefined8 *)(lVar18 + 0x18);
    }
    uVar17 = (uint)(lVar18 != 0);
    local_c9 = 0x101;
    local_cd = 1;
    if (((*(byte *)((longlong)param_1 + 0x102) & 1) == 0) && (lVar18 = param_1[0x31], lVar18 != 0))
    {
      lVar4 = param_1[0x30];
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
        lVar18 = param_1[0x31];
      }
      if ((lVar18 != lVar4) && (lVar18 != 0)) {
        local_68 = CONCAT44(local_68._4_4_,uVar17 + 1);
        local_80[uVar17] = *(undefined4 *)(lVar18 + 0xc);
      }
    }
    local_128 = _DAT_14cad0ee0;
    uStack_120 = uRam000000014cad0ee8;
    local_138 = _DAT_14cad0ed0;
    uStack_130 = _DAT_14cad0ed8;
    lVar18 = 0;
    do {
      bVar5 = *(char *)((longlong)&local_138 + lVar18) == '\x02';
      bVar6 = *(char *)((longlong)&local_138 + lVar18 + 1) == '\x02';
      bVar7 = *(char *)((longlong)&local_138 + lVar18 + 2) == '\x02';
      bVar8 = *(char *)((longlong)&local_138 + lVar18 + 3) == '\x02';
      bVar9 = *(char *)((longlong)&local_138 + lVar18 + 4) == '\x02';
      bVar10 = *(char *)((longlong)&local_138 + lVar18 + 5) == '\x02';
      bVar11 = *(char *)((longlong)&local_138 + lVar18 + 6) == '\x02';
      bVar12 = *(char *)((longlong)&local_138 + lVar18 + 7) == '\x02';
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&local_138 + lVar18) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&local_138 + lVar18 + 1) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&local_138 + lVar18 + 2) = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        *(undefined1 *)((longlong)&local_138 + lVar18 + 3) = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        *(undefined1 *)((longlong)&local_138 + lVar18 + 4) = 2;
      }
      if ((bool)(~bVar10 & 1)) {
        *(undefined1 *)((longlong)&local_138 + lVar18 + 5) = 2;
      }
      if ((bool)(~bVar11 & 1)) {
        *(undefined1 *)((longlong)&local_138 + lVar18 + 6) = 2;
      }
      if ((bool)(~bVar12 & 1)) {
        *(undefined1 *)((longlong)&local_138 + lVar18 + 7) = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&uStack_130 + lVar18) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&uStack_130 + lVar18 + 1) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&uStack_130 + lVar18 + 2) = 2;
      }
      if ((bool)(~bVar8 & 1)) {
        *(undefined1 *)((longlong)&uStack_130 + lVar18 + 3) = 2;
      }
      if ((bool)(~bVar9 & 1)) {
        *(undefined1 *)((longlong)&uStack_130 + lVar18 + 4) = 2;
      }
      if ((bool)(~bVar10 & 1)) {
        *(undefined1 *)((longlong)&uStack_130 + lVar18 + 5) = 2;
      }
      if ((bool)(~bVar11 & 1)) {
        *(undefined1 *)((longlong)&uStack_130 + lVar18 + 6) = 2;
      }
      if ((bool)(~bVar12 & 1)) {
        *(undefined1 *)((longlong)&uStack_130 + lVar18 + 7) = 2;
      }
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != 0x20);
    memset(local_238,0,0x100);
    local_168 = 0xffffffff;
    local_234 = 0x3f800000;
    local_194 = 0xffffffff;
    uVar19 = (**(code **)(*param_1 + 0x180))(param_1);
    local_248 = &local_138;
    local_250 = &local_e0;
    local_258 = (uint)*(byte *)(param_1[0x10] + 0x359);
    cVar16 = FUN_1400b50cc(uVar19,local_238,&local_f8,&local_110);
    if ((((cVar16 != '\0') && (local_15c != 0)) && (-1 < (int)local_160)) &&
       ((((int)local_160 < DAT_14c9647dc &&
         (plVar20 = (longlong *)
                    ((ulonglong)((local_160 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_160 >> 0x10) * 8)),
         plVar20 != (longlong *)0x0)) &&
        (((int)plVar20[2] == local_15c &&
         (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 && (*plVar20 != 0)))))))) {
      if (((*(uint *)(param_1 + 0x20) & 0x10000004) == 0) &&
         (((((-1 < (short)*(uint *)(param_1 + 0x20) || ((*(byte *)(param_1[0x10] + 0x378) & 1) != 0)
             ) && (lVar18 = FUN_14082ce84(param_1[0x10] + 0x3f8), lVar18 != 0)) &&
           (((*(byte *)(lVar18 + 0xa8) & 1) != 0 && (*(longlong *)(lVar18 + 0x1d0) != 0)))) &&
          (*(int *)(lVar18 + 0x1d8) - 1U < 0xfffffffe)))) {
        uVar19 = FUN_14485cccc(local_180);
        uVar19 = FUN_140b3080a(param_1,uVar19);
        local_250 = (undefined8 *)0x0;
        local_258 = local_258 & 0xffffff00;
        (**(code **)(*param_1 + 0x3e0))(param_1,local_238,uVar19,0);
      }
      (**(code **)(*param_1 + 0x410))(param_1,local_238,0,(char)param_1[0x5f]);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140b30142:
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b302e4 FUN_140b302e4 body=1316 status=ok
// SIG undefined FUN_140b302e4(void)

void FUN_140b302e4(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  longlong *local_190;
  undefined4 local_188;
  longlong local_178;
  undefined1 local_170 [24];
  longlong local_158;
  longlong local_148;
  longlong *plStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((param_1[0x10] != 0) && ((*(byte *)(param_2 + 0xad) & 1) != 0)) {
    if (param_3 == '\0') {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar9 = param_1[4];
      }
      else {
        lVar9 = 0;
      }
      if (*(char *)(lVar9 + 0x178) == '\x03') {
        *(char *)(param_1 + 0x5f) = param_4;
        uVar3 = *(undefined4 *)(param_2 + 0x2c);
        uVar4 = *(undefined4 *)(param_2 + 0x30);
        uVar5 = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)((longlong)param_1 + 0x304) = uVar3;
        *(undefined4 *)(param_1 + 0x61) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0x30c) = uVar5;
        param_1[0x62] = *(longlong *)(param_2 + 0x38);
        *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + 1;
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          plVar15 = (longlong *)param_1[4];
        }
        else {
          plVar15 = (longlong *)0x0;
        }
        *(int *)(plVar15 + 0x92) = (int)plVar15[0x92] + 1;
        (**(code **)(*plVar15 + 0x578))();
      }
    }
    if (((param_4 != '\0') && (param_1[0x1d] != 0)) && ((int)param_1[0x1e] - 1U < 0xfffffffe)) {
      lVar9 = FUN_14485cccc(param_2 + 0xb8);
      if (lVar9 != param_1[4]) {
        lVar9 = param_1[0x30];
        if ((param_1[0x30] == 0) && (lVar9 = 0, (*(uint *)(param_1 + 1) & 0x10) == 0)) {
          lVar9 = param_1[4];
        }
        uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_1407f7f84(&local_148,uVar10);
        if (plStack_140 != (longlong *)0x0) {
          iVar8 = (int)plStack_140[1];
          do {
            if (iVar8 == 0) {
              plVar15 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar6 = (int)plStack_140[1];
            bVar16 = iVar8 == iVar6;
            if (bVar16) {
              *(int *)(plStack_140 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
            plVar15 = plStack_140;
          } while (!bVar16);
          LOCK();
          piVar1 = (int *)((longlong)plStack_140 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_140 + 0x10))();
          }
          lVar13 = local_148;
          if (plVar15 != (longlong *)0x0) {
            if (local_148 != 0) {
              local_118 = 0;
              uStack_110 = 0;
              local_128 = 0;
              uStack_120 = 0;
              local_138 = 0;
              uStack_130 = 0;
              local_148 = 0;
              plStack_140 = (longlong *)0x0;
              local_108 = 0xc0;
              local_f8 = 0;
              local_e8 = (longlong *)0x0;
              local_b8 = 0;
              local_a8 = (longlong *)0x0;
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 0;
              local_60 = 0x3ff0000000000000;
              local_58 = 0x3ff0000000000000;
              local_50 = 0x3ff0000000000000;
              local_48 = 0;
              local_40 = 0;
              local_44 = (undefined4)param_1[0x4e];
              local_178 = param_1[0x1d];
              FUN_1446dcdd4(local_170);
              if (((DAT_14cb78ff0 != 0) &&
                  (lVar11 = FUN_144837462(DAT_14cb78ff0,local_170), lVar9 != 0)) && (lVar11 != 0)) {
                local_188 = 0;
                local_198 = 0;
                local_190 = &local_148;
                FUN_1408f2522(lVar13,lVar11,lVar9,param_2);
              }
              if (local_158 != 0) {
                FUN_1400020a8();
              }
              if (local_b8 != 0) {
                plVar14 = local_a8;
                if (local_a8 == (longlong *)0x0) {
                  plVar14 = local_98;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              if (local_f8 != 0) {
                plVar14 = local_e8;
                if (local_e8 == (longlong *)0x0) {
                  plVar14 = local_d8;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
              if (local_118 != 0) {
                FUN_1400020a8();
              }
              if (local_128 != 0) {
                FUN_1400020a8();
              }
              if (local_138 != 0) {
                FUN_1400020a8();
              }
              if (local_148 != 0) {
                FUN_1400020a8();
              }
            }
            LOCK();
            plVar14 = plVar15 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
        }
      }
    }
    lVar9 = (longlong)*(int *)(param_1[0x10] + 0x48);
    if (lVar9 != 0) {
      lVar9 = lVar9 * 0x28;
      plVar15 = (longlong *)(*(longlong *)(param_1[0x10] + 0x40) + 8);
      do {
        plVar14 = plVar15 + -1;
        plVar12 = (longlong *)FUN_14479d2ce(plVar14);
        if (plVar12 == (longlong *)0x0) {
          if (*plVar15 != 0) {
            plVar12 = (longlong *)FUN_140007850();
            cVar7 = (*(code *)PTR_FUN_14c758760)();
            if ((plVar12 == (longlong *)0x0) || (cVar7 == '\0')) {
              FUN_14485c47a(plVar14,plVar12);
              if (plVar12 == (longlong *)0x0) goto LAB_140b30691;
            }
            else {
              uVar2 = *(uint *)((longlong)plVar12 + 0xc);
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar13 = 0;
              }
              if ((*(uint *)(lVar13 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(plVar14,plVar12);
              }
            }
            if ((*(uint *)(plVar12 + 1) >> 0x1e & 1) == 0) goto LAB_140b3066d;
          }
        }
        else {
LAB_140b3066d:
          lVar13 = FUN_144a797b2();
          if ((((*(int *)(lVar13 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                lVar13 + 0x30)) && (lVar13 = FUN_145a557f0(), lVar13 != 0)) &&
             ((*(int *)(lVar13 + 0x38) <= (int)plVar12[7] &&
              (*(longlong *)(plVar12[6] + (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)))
             ) {
            lVar13 = plVar12[0x22];
            if (lVar13 == 0) {
              (**(code **)(*plVar12 + 1000))(plVar12);
              lVar13 = plVar12[0x22];
              if (lVar13 == 0) goto LAB_140b30691;
            }
            uVar10 = *(undefined8 *)(lVar13 + 0x28);
            *(longlong **)(lVar13 + 0x28) = param_1;
            FUN_14876f754(lVar13,param_1,param_2);
            *(undefined8 *)(lVar13 + 0x28) = uVar10;
          }
        }
LAB_140b30691:
        plVar15 = plVar15 + 5;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b3080a FUN_140b3080a body=758 status=ok
// SIG undefined FUN_140b3080a(void)

float FUN_140b3080a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f8 [40];
  float local_d0;
  undefined4 uStack_cc;
  ushort local_b8;
  byte local_b0;
  char local_a8 [16];
  longlong *local_98;
  undefined4 local_80 [2];
  float local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(byte *)(param_1 + 0x103) & 2) == 0) ||
     (lVar4 = FUN_14082ce84(*(longlong *)(param_1 + 0x80) + 0x3f8), lVar4 == 0)) {
    fVar8 = *(float *)(param_1 + 0x88);
  }
  else {
    fVar8 = (float)FUN_14074d5ce(lVar4,param_2,0);
  }
  if ((*(byte *)(param_1 + 0x100) & 0x10) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    local_a8[0] = '\0';
    local_80[0] = 0;
    FUN_1456bb102(local_a8,*(undefined8 *)(param_1 + 0x1c8));
    pfVar5 = &local_78;
    FUN_1448729ea(lVar4 + 0x468,pfVar5,local_a8);
    fVar7 = (float)FUN_144a7b41a(pfVar5,0x3f800000);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_60) {
        pfVar5 = (float *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar2)(pfVar5);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    fVar8 = fVar8 * fVar7;
    FUN_144a5ac3a(local_a8);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  local_a8[0] = '\0';
  local_80[0] = 0;
  FUN_1456bb102(local_a8,*(undefined8 *)(param_1 + 0x1c8));
  pfVar5 = &local_d0;
  FUN_1448729ea(lVar4 + 0x4b8,pfVar5,local_a8);
  if (local_b0 == 3) {
    uVar3 = 3;
    fVar7 = local_d0;
  }
  else {
    pfVar6 = &local_78;
    FUN_1400b56fe(pfVar6,&local_d0,3);
    fVar7 = local_78;
    if (local_58 == 0) {
      fVar7 = 1.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_60) {
        pfVar6 = (float *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar2)(pfVar6);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar3 = (uint)local_b0;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_b8) {
      pfVar5 = (float *)CONCAT44(uStack_cc,local_d0);
    }
    (*pcVar2)(pfVar5);
  }
  if (0x18 < local_b8) {
    FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
  }
  FUN_1448173f8(local_80);
  if ((local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar8 * fVar7;
}



// FUNCTION 140b30b02 FUN_140b30b02 body=103 status=ok
// SIG undefined FUN_140b30b02(void)

ulonglong FUN_140b30b02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140b30b4c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140b30b4c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140b30b6a FUN_140b30b6a body=61 status=ok
// SIG undefined FUN_140b30b6a(void)

void FUN_140b30b6a(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 in_EAX;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((longlong)*(int *)(lVar1 + 0x20) == 0) {
    in_EAX = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    lVar2 = 0;
    do {
      bVar3 = *(char *)(*(longlong *)(lVar1 + 0x18) + lVar2) == param_2;
      in_EAX = CONCAT31((int3)((uint)in_EAX >> 8),!bVar3);
      if (bVar3) break;
      bVar3 = (longlong)*(int *)(lVar1 + 0x20) + -1 != lVar2;
      lVar2 = lVar2 + 1;
    } while (bVar3);
  }
  FUN_1402a7054(param_1,CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX ^ *(byte *)(lVar1 + 0x10)));
  return;
}



// FUNCTION 140b30bad FUN_140b30bad body=152 status=ok
// SIG undefined FUN_140b30bad(void)

undefined4 FUN_140b30bad(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14069cc7b(&local_28,param_1);
  uVar4 = 0;
  if (local_28 != 0) {
    lVar3 = FUN_140b30c46(local_28 + 0x470,local_28 + 0x508,param_1);
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar3 + 8);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b30c46 FUN_140b30c46 body=133 status=ok
// SIG undefined FUN_140b30c46(void)

ulonglong FUN_140b30c46(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_2[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      while (puVar1 = (ulonglong *)(*param_2 + (longlong)iVar4 * 0x18), *puVar1 != param_3) {
        iVar4 = (int)puVar1[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (puVar1 == (ulonglong *)0x0) {
        return 0;
      }
      if (puVar1 + 1 == (ulonglong *)0x0) {
        return 0;
      }
      return puVar1[1];
    }
  }
  return 0;
}



// FUNCTION 140b30ccc FUN_140b30ccc body=260 status=ok
// SIG undefined FUN_140b30ccc(void)

void FUN_140b30ccc(longlong *param_1,longlong param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (0.0 <= param_3)) {
    lVar3 = (**(code **)(*param_1 + 0x28))();
    uStack_34 = 0;
    local_38 = *(uint *)(param_2 + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar2 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar6;
      }
    }
    uStack_34 = uVar2;
    pfVar4 = (float *)FUN_140b30dd2(lVar3 + 0xa8,uVar2 ^ local_38);
    *pfVar4 = param_3 + *pfVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b30dd2 FUN_140b30dd2 body=144 status=ok
// SIG undefined FUN_140b30dd2(void)

longlong FUN_140b30dd2(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140b30e64();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x14 != 0) goto LAB_140b30e28;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_140b30f1e(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_140b30e28:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x14 + 8;
}



// FUNCTION 140b30e64 FUN_140b30e64 body=185 status=ok
// SIG undefined FUN_140b30e64(void)

int FUN_140b30e64(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_14486088a(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140b30e8d;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140b30e8d:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 140b30f1e FUN_140b30f1e body=908 status=ok
// SIG undefined FUN_140b30f1e(void)

int * FUN_140b30f1e(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_140171ad2(param_1,iVar16);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar5 = iVar14 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar11 = iVar14 + 1;
    iVar17 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar17 = iVar14;
    }
    if (iVar17 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar14;
        }
        else {
          uVar6 = iVar14 + 0x20U >> 5;
          local_60 = (ulonglong)uVar6;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar6) {
              uVar12 = uVar6;
            }
          }
          else {
            uVar12 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar12 << 2,0);
          iVar5 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)local_60 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar8,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar8;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar7 = (longlong)iVar16;
    iVar14 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar14;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x14) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar14 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar14 = iVar16;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
  puVar2 = (undefined8 *)(*param_1 + lVar7 * 0x14);
  uVar3 = *(undefined8 *)*param_4;
  *puVar2 = uVar3;
  puVar2[1] = 0xffffffff00000000;
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar14 != -1) {
      lVar7 = *param_1;
      do {
        lVar9 = (longlong)iVar14;
        local_50 = *(undefined8 *)(lVar7 + lVar9 * 0x14);
        local_58 = uVar3;
        cVar4 = FUN_14472d054(&local_50,&local_58);
        lVar7 = *param_1;
        if (cVar4 != '\0') {
          uVar3 = *puVar2;
          *(undefined4 *)(lVar7 + 8 + lVar9 * 0x14) = *(undefined4 *)(puVar2 + 1);
          *(undefined8 *)(lVar7 + lVar9 * 0x14) = uVar3;
          FUN_147f6135c(param_1,iVar16);
          cVar4 = '\x01';
          break;
        }
        iVar14 = *(int *)(lVar7 + 0xc + lVar9 * 0x14);
        cVar4 = '\0';
      } while (iVar14 != -1);
      goto LAB_140b31038;
    }
  }
  cVar4 = '\0';
LAB_140b31038:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar4;
  }
  if (cVar4 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar6) {
      uVar13 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar14 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)(puVar2 + 2) = param_3;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(undefined4 *)((longlong)puVar2 + 0xc) =
           *(undefined4 *)
            ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar16;
    }
    else {
      *(int *)(param_1 + 9) = iVar14;
      FUN_140b312ac(param_1);
    }
  }
  *param_2 = iVar16;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b312ac FUN_140b312ac body=650 status=ok
// SIG undefined FUN_140b312ac(void)

void FUN_140b312ac(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_140b3130f;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar8 != uVar3);
LAB_140b3130f:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar12 = 1;
    iVar14 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar14 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar14 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar14) {
      iVar14 = iVar15;
    }
  }
  if (iVar14 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar13 = (longlong)iVar14;
      uVar2 = *(undefined8 *)(lVar7 + lVar13 * 0x14);
      uVar16 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x10 + lVar13 * 0x14) = iVar15;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0xc + lVar13 * 0x14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar14 = (int)uVar4;
      lVar7 = (longlong)iVar14;
      uVar3 = puVar11[lVar7] & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar9 <= iVar14) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar11[lVar7 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar7 == lVar13) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar14 + (int)lVar13 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar15);
  }
  return;
}



// FUNCTION 140b3153c FUN_140b3153c body=57 status=ok
// SIG undefined FUN_140b3153c(void)

void FUN_140b3153c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59e48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59e48 = FUN_140002ddd(FUN_1464c756c,uVar1,L"GbxAnimNode_SlopeWarping");
  }
  return;
}



// FUNCTION 140b31576 FUN_140b31576 body=355 status=ok
// SIG undefined FUN_140b31576(void)

undefined8 * FUN_140b31576(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951ae0) {
    FUN_144b3d300(&DAT_14c951ae0);
    if (DAT_14c951ae0 == -1) {
      FUN_1446ddbd2();
      local_40 = FUN_140b31576;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
  }
  puVar1[1] = &DAT_14c951a90;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e70270;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  local_58 = local_58 & 0xffffffffffffff00;
  FUN_140b316da(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b316da FUN_140b316da body=157 status=ok
// SIG undefined FUN_140b316da(void)

undefined8 *
FUN_140b316da(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140b31778(param_1,&local_30,param_3,param_4);
  *param_1 = &PTR_LAB_149e70270;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xe) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b31778 FUN_140b31778 body=135 status=ok
// SIG undefined FUN_140b31778(void)

undefined8 *
FUN_140b31778(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e91900;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b31800 FUN_140b31800 body=142 status=ok
// SIG undefined FUN_140b31800(void)

longlong FUN_140b31800(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140b31890();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_140b31839;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_140b3195a(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_140b31839:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b31890 FUN_140b31890 body=202 status=ok
// SIG undefined FUN_140b31890(void)

int FUN_140b31890(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 140b3195a FUN_140b3195a body=324 status=ok
// SIG undefined FUN_140b3195a(void)

undefined4 *
FUN_140b3195a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b31b7a(param_1,local_48);
  lVar5 = *(longlong *)*param_4;
  *local_40 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_58 = param_5;
  cVar1 = FUN_140b31aa0(param_1,param_3,local_40);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140b31d64(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b31aa0 FUN_140b31aa0 body=217 status=ok
// SIG undefined FUN_140b31aa0(void)

void FUN_140b31aa0(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar7 = FUN_140a01346(param_1,param_2,&local_40);
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      lVar4 = *param_3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar5 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(longlong *)(puVar1 + 4) = param_3[2];
      *puVar1 = (int)lVar4;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar5;
      puVar1[3] = uVar3;
      FUN_145762fd0(param_1,*param_4);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_140b31b07;
    }
  }
  uVar6 = 0;
LAB_140b31b07:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b31b7a FUN_140b31b7a body=489 status=ok
// SIG undefined FUN_140b31b7a(void)

int * FUN_140b31b7a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140b31d64 FUN_140b31d64 body=655 status=ok
// SIG undefined FUN_140b31d64(void)

void FUN_140b31d64(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar15 = local_68 >> 0x20;
    }
    uVar9 = (ulonglong)(uint)local_68;
    uVar14 = (uint)local_58;
    iVar10 = local_58._4_4_;
    iVar11 = local_50;
    bVar4 = DAT_14c950c29;
    plVar6 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_78 = plVar6;
        lVar12 = *param_1;
        uVar3 = *(ulonglong *)(lVar12 + (longlong)iVar10 * 0x20);
        local_7c = iVar11;
        local_70 = uVar9;
        if (((bVar4 & 1) != 0) && (uVar3 != 0)) {
          FUN_1456cec3c(uVar3);
          bVar4 = DAT_14c950c29;
        }
        lVar12 = lVar12 + (longlong)iVar10 * 0x20;
        uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar9;
        *(int *)(lVar12 + 0x1c) = iVar11;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar10;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar6 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar6 = local_78;
        }
        iVar2 = (int)local_78[3];
        iVar10 = (int)local_70;
        lVar12 = (longlong)iVar10;
        uVar5 = *(uint *)((longlong)plVar6 + lVar12 * 4) & uVar14;
        uVar9 = local_70;
        iVar11 = local_7c;
        if (uVar5 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar10) {
            iVar8 = iVar10;
          }
          if (iVar7 <= iVar10) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar6 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar8 - lVar12 == lVar13) goto LAB_140b31fb9;
          }
          uVar14 = 0xffffffff;
          uVar9 = (ulonglong)(iVar10 + (int)lVar13 + 1);
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar10 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        plVar6 = local_78;
      } while (iVar10 < iVar2);
    }
  }
LAB_140b31fb9:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b31ff4 FUN_140b31ff4 body=271 status=ok
// SIG undefined FUN_140b31ff4(void)

void FUN_140b31ff4(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = *(longlong **)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (param_2 != '\0') {
      *(undefined1 *)((longlong)plVar3 + 0x19) = 0;
    }
    plVar1 = plVar3 + 1;
    *(undefined1 *)(*(longlong *)(*param_1 + 0x158) + (longlong)(int)param_1[1]) = 1;
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_58);
    lVar4 = *(longlong *)(*param_1 + 0x110);
    lVar5 = (longlong)(int)param_1[1] * 0x30;
    *(undefined8 *)(lVar4 + 0x10 + lVar5) = local_48;
    *(undefined8 *)(lVar4 + lVar5) = local_58;
    ((undefined8 *)(lVar4 + lVar5))[1] = uStack_50;
    puVar2 = (undefined4 *)(lVar4 + 0x18 + lVar5);
    *puVar2 = local_40;
    puVar2[1] = uStack_3c;
    puVar2[2] = uStack_38;
    puVar2[3] = uStack_34;
    *(undefined8 *)(lVar4 + 0x28 + lVar5) = local_30;
    if (((*(char *)((longlong)plVar3 + 0x1c) == '\x05') ||
        (*(char *)((longlong)plVar3 + 0x1c) == '\x0f')) &&
       ((*(byte *)((longlong)plVar3 + 0x6c) & 1) == 0)) {
      *(byte *)((longlong)plVar3 + 0x6c) = *(byte *)((longlong)plVar3 + 0x6c) | 1;
      FUN_1401183f6(plVar3);
      FUN_14011842e(plVar3);
    }
    LOCK();
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)*plVar1 == 0) && (*(int *)((longlong)plVar3 + 0xc) == 0)) {
      (**(code **)*plVar3)(plVar3,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b32104 FUN_140b32104 body=129 status=ok
// SIG undefined FUN_140b32104(void)

void FUN_140b32104(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140901f38(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140b32119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140b321f2();
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b074610;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = &DAT_14a171d50;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = &DAT_14a171d50;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0xb] = &DAT_14cb70058;
  puVar2[0xf] = &DAT_14cb70058;
  return;
}



// FUNCTION 140b32186 FUN_140b32186 body=108 status=ok
// SIG undefined FUN_140b32186(void)

void FUN_140b32186(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140b321f2();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b074610;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = &DAT_14a171d50;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = &DAT_14a171d50;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0xb] = &DAT_14cb70058;
  puVar1[0xf] = &DAT_14cb70058;
  return;
}



// FUNCTION 140b321f2 FUN_140b321f2 body=96 status=ok
// SIG undefined FUN_140b321f2(void)

void FUN_140b321f2(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1400,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x14;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140b32296 FUN_140b32296 body=844 status=ok
// SIG undefined FUN_140b32296(void)

void FUN_140b32296(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  ulonglong local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90 [9];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar5 = *(undefined8 **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_140b322eb;
      puVar5 = puVar5 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar5 = (undefined8 *)0x0;
LAB_140b322eb:
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar3 = (ulonglong)uVar1;
  local_e0 = *(ulonglong *)(param_1 + 0x40);
  local_e4 = *(int *)(param_2 + 0x14);
  if (local_e4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar5 + 1));
  }
  LOCK();
  *(int *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_140b32339;
      plVar9 = plVar9 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_140b32339:
  puVar8 = (undefined8 *)*puVar5;
  local_e8 = *(int *)(param_2 + 0x14);
  if (local_e8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  local_f8 = *plVar9;
  local_f0 = param_1;
  FUN_140b325e4(param_2,&local_a8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_98 == 0) {
    FUN_1410bd96e(param_2,&local_c0,*(undefined2 *)(*(longlong *)(local_f0 + 0x18) + 0x106));
    if (local_b0 == 0) {
      FUN_1410bd9c4(param_2,&local_d8,*(undefined2 *)(*(longlong *)(local_f0 + 0x18) + 0x108));
      if (uVar1 != 0 && local_c8 != 0) {
        lVar2 = 0;
        do {
          FUN_1476463b4(*(undefined8 *)(local_c8 + lVar2 * 2),local_90,
                        *(undefined8 *)(local_f8 + lVar2));
          puVar6 = local_90;
          puVar7 = puVar8;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          lVar2 = lVar2 + 8;
          puVar8 = puVar8 + 9;
        } while ((ulonglong)uVar1 * 8 != lVar2);
      }
      if (local_d8 != 0) {
        LOCK();
        *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + -1;
        UNLOCK();
        if (local_d0 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_d8 + 8));
        }
      }
    }
    else if (uVar3 != 0) {
      uVar10 = 0;
      do {
        puVar6 = (undefined8 *)
                 ((ulonglong)*(ushort *)(local_b0 + uVar10 * 2) +
                 *(longlong *)(local_f8 + uVar10 * 8));
        puVar7 = puVar8;
        for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar8 = puVar8 + 9;
      } while (uVar3 != uVar10);
    }
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + -1;
      UNLOCK();
      if (local_b8 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_c0 + 8));
      }
    }
  }
  else if (uVar3 != 0) {
    uVar10 = 0;
    do {
      (**(code **)(*(longlong *)(local_f0 + 0x30) + 0x18 +
                  (longlong)*(int *)(local_f0 + 0x3c) *
                  (ulonglong)*(ushort *)(local_98 + uVar10 * 2)))
                (local_90,*(undefined8 *)(local_f8 + uVar10 * 8));
      puVar6 = local_90;
      puVar7 = puVar8;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + 9;
    } while (uVar3 != uVar10);
  }
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_e8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = puVar5[2];
    if ((ulonglong)puVar5[2] < local_e0) {
      uVar3 = local_e0;
    }
    puVar5[2] = uVar3;
    LOCK();
    *(int *)(puVar5 + 3) = *(int *)(puVar5 + 3) + -1;
    UNLOCK();
    if (local_e4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar5 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b325e4 FUN_140b325e4 body=86 status=ok
// SIG undefined FUN_140b325e4(void)

undefined8 * FUN_140b325e4(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_140b3263a(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 140b3263a FUN_140b3263a body=120 status=ok
// SIG undefined FUN_140b3263a(void)

longlong * FUN_140b3263a(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 2 + *param_2;
  }
  return param_1;
}



// FUNCTION 140b326b2 FUN_140b326b2 body=841 status=ok
// SIG undefined FUN_140b326b2(void)

void FUN_140b326b2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined1 local_118 [24];
  undefined8 local_100;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_2 != 0) && (lVar9 = *(longlong *)(param_2 + 0xa8), lVar9 != 0)) {
    if (*(char *)(param_1 + 0x118) == '\0') {
      cVar4 = FUN_140b329fc(param_2);
      if (cVar4 == '\0') goto LAB_140b3278d;
    }
    if (*(char *)(param_1 + 0x78) == '\x01') {
      FUN_14026e798(&local_b8,lVar9);
      if (local_b8 != 0) {
        lVar7 = FUN_140b335c8(local_b8,param_1 + 0x70);
        if (lVar7 != 0) {
          lVar9 = lVar7;
        }
      }
      if (uStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_b0)(uStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)uStack_b0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*uStack_b0 + 0x10))(uStack_b0);
          }
        }
      }
    }
    lVar7 = *(longlong *)(lVar9 + 0x1c8);
    if (lVar7 == 0) {
      local_a8 = DAT_14c8464f0;
      local_b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_b0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_b8 = *(longlong *)(lVar7 + 0x260);
      uStack_b0 = *(longlong **)(lVar7 + 0x268);
      local_a8 = *(undefined8 *)(lVar7 + 0x270);
    }
    uVar5 = FUN_1447210f0(lVar9);
    lVar7 = param_1 + 0x40;
    FUN_14026e798(local_c8,lVar9);
    uVar6 = FUN_140206ee8(lVar7,local_c8);
    cVar4 = FUN_140849a6e(uVar6,uVar5,&local_b8);
    if (cVar4 != '\0') {
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar3 == 0) {
        local_138 = 0;
        FUN_140b32deb(local_e0,lVar9,lVar7,*(undefined8 *)(param_1 + 0x7c));
      }
      else {
        if (iVar3 == 1) {
          local_b8 = 0;
          uStack_b0 = (longlong *)0x0;
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_9c = 0x3ff00000;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_74 = 0x3ff00000;
          uStack_70 = 0;
          uStack_6c = 0x3ff00000;
          local_68 = 0x3ff0000000000000;
          uStack_60 = 0;
          local_58 = 0x3f800000;
          local_50 = 0;
          local_4c = 0;
          if (*(longlong *)(param_4 + 0x18) == 0) {
            local_100 = *(undefined8 *)(param_1 + 0x110);
          }
          else {
            FUN_1407f8cf8(*(longlong *)(param_4 + 0x18),&local_100,(undefined8 *)(param_1 + 0x110),1
                         );
          }
          local_138 = CONCAT71(local_138._1_7_,1);
          puVar8 = local_f8;
        }
        else {
          if (iVar3 != 2) goto LAB_140b3278d;
          local_b8 = 0;
          uStack_b0 = (longlong *)0x0;
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_9c = 0x3ff00000;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_74 = 0x3ff00000;
          uStack_70 = 0;
          uStack_6c = 0x3ff00000;
          local_68 = 0x3ff0000000000000;
          uStack_60 = 0;
          local_58 = 0x3f800000;
          local_50 = 0;
          local_4c = 0;
          if (*(longlong *)(param_4 + 0x18) == 0) {
            local_100 = *(undefined8 *)(param_1 + 0x110);
          }
          else {
            FUN_1407f8cf8(*(longlong *)(param_4 + 0x18),&local_100,(undefined8 *)(param_1 + 0x110),1
                         );
          }
          local_138 = local_138 & 0xffffffffffffff00;
          puVar8 = local_118;
        }
        local_128 = 0;
        local_130 = &local_b8;
        FUN_140b3303c(puVar8,lVar9,lVar7,&local_100);
      }
    }
  }
LAB_140b3278d:
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b329fc FUN_140b329fc body=1006 status=ok
// SIG undefined FUN_140b329fc(void)

ulonglong FUN_140b329fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == 0) {
    uVar6 = 0;
    goto LAB_140b32b67;
  }
  plVar8 = *(longlong **)(param_1 + 0xa8);
  if (plVar8 == (longlong *)0x0) {
LAB_140b32b9b:
    plVar8 = (longlong *)0x0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b4754c;
      local_58 = &LAB_147c45ce0;
      local_60 = &LAB_1463f1ff4;
      local_68 = &DAT_149e063b2;
      local_70 = 0x4000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    param_2 = (longlong)*(int *)(DAT_14caf64b8 + 0x38);
    if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + param_2 * 8) != DAT_14caf64b8 + 0x30))
    goto LAB_140b32b9b;
  }
  if ((*(longlong *)(param_1 + 0x120) == 0) ||
     (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 0xa8), plVar7 == (longlong *)0x0)) {
LAB_140b32be0:
    plVar7 = (longlong *)0x0;
    lVar1 = param_1;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b4754c;
      local_58 = &LAB_147c45ce0;
      local_60 = &LAB_1463f1ff4;
      local_68 = &DAT_149e063b2;
      local_70 = 0x4000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    param_2 = (longlong)*(int *)(DAT_14caf64b8 + 0x38);
    if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (lVar1 = param_1,
       *(longlong *)(*(longlong *)(plVar7[2] + 0x30) + param_2 * 8) != DAT_14caf64b8 + 0x30))
    goto LAB_140b32be0;
  }
  do {
    lVar5 = lVar1;
    lVar1 = *(longlong *)(lVar5 + 0x120);
  } while (lVar1 != 0);
  plVar9 = *(longlong **)(lVar5 + 0xa8);
  if (plVar9 == (longlong *)0x0) {
LAB_140b32bd8:
    plVar9 = (longlong *)0x0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b4754c;
      local_58 = &LAB_147c45ce0;
      local_60 = &LAB_1463f1ff4;
      local_68 = &DAT_149e063b2;
      local_70 = 0x4000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    param_2 = (longlong)*(int *)(DAT_14caf64b8 + 0x38);
    if ((*(int *)(plVar9[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + param_2 * 8) != DAT_14caf64b8 + 0x30))
    goto LAB_140b32bd8;
  }
  if ((plVar8 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar8 + 0x798))(plVar8), cVar2 == '\0')
     ) {
LAB_140b32b2a:
    if ((plVar7 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar7 + 0x798))(plVar7), cVar2 != '\0')) {
      cVar3 = (**(code **)(*plVar7 + 0x700))(plVar7);
      cVar2 = '\x01';
      if (cVar3 != '\0') goto LAB_140b32b5a;
    }
    if ((plVar9 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar9 + 0x798))(plVar9), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(*plVar9 + 0x700))(plVar9);
    }
  }
  else {
    cVar3 = (**(code **)(*plVar8 + 0x700))(plVar8);
    cVar2 = '\x01';
    if (cVar3 == '\0') goto LAB_140b32b2a;
  }
LAB_140b32b5a:
  uVar4 = *(uint *)(param_1 + 0x5c8);
  uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if ((uVar4 & 3) != 0) {
    if (cVar2 == '\0') {
      uVar4 = (uVar4 & 2) >> 1;
    }
    else {
      uVar4 = uVar4 & 0xffffff01;
    }
    uVar6 = (ulonglong)uVar4;
  }
LAB_140b32b67:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140b32deb FUN_140b32deb body=592 status=ok
// SIG undefined FUN_140b32deb(void)

undefined8 *
FUN_140b32deb(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  __uint64 *p_Var5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  __uint64 *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    FUN_14026e798(&local_40);
    bVar4 = true;
    if (local_40 != 0) {
      local_50 = local_40;
      local_48 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      lVar6 = FUN_140206ee8(param_3,&local_50);
      if ((lVar6 != 0) && (FUN_1403c747e(local_40,&local_58,param_4), local_58 != (__uint64 *)0x0))
      {
        if ((param_5 != 0) && ((*local_58 != 0xffffffffffffffff && (DAT_14cb25ab0 == '\x01')))) {
          AK::SoundEngine::SetSwitch(*(uint *)(param_5 + 0x48),*(uint *)(param_5 + 0x38),*local_58);
        }
        p_Var5 = local_58;
        plVar3 = *(longlong **)(local_40 + 0x20);
        if ((plVar3 == (longlong *)0x0) || (*(int *)(local_40 + 0x1c) == 0)) {
LAB_140b32f38:
          plVar7 = (longlong *)0x0;
        }
        else {
          uVar2 = *(uint *)(local_40 + 0x18);
          plVar7 = (longlong *)0x0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if (((lVar8 == 0) || (*(int *)(lVar8 + 0x10) != *(int *)(local_40 + 0x1c))) ||
               ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) goto LAB_140b32f38;
            if (*(code **)(*plVar3 + 0x30) == (code *)&LAB_14479b63c) {
              plVar7 = plVar3 + -0xa4;
              if ((longlong *)plVar3[-0x77] != (longlong *)0x0) {
                plVar7 = (longlong *)plVar3[-0x77];
              }
            }
            else {
              plVar7 = (longlong *)(**(code **)(*plVar3 + 0x30))();
            }
          }
        }
        local_68 = 0;
        FUN_14084a448(p_Var5,param_1,lVar6,plVar7);
        if (((local_58 != (__uint64 *)0x0) &&
            (*(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1, (int)local_58[0x26] < 1)) &&
           (FUN_1400847bc(local_58 + 0x17,0), (int)local_58[0x21] == 0)) {
          FUN_140087e46(local_58);
          if (*local_58 != 0xffffffffffffffff) {
            if (DAT_14cb259f8 == 0) goto LAB_140b32f81;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_58);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_58);
          }
        }
LAB_140b32f81:
        bVar4 = false;
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if (!bVar4) goto LAB_140b32fc0;
  }
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0;
LAB_140b32fc0:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b3303c FUN_140b3303c body=1419 status=ok
// SIG undefined FUN_140b3303c(void)

undefined8 *
FUN_140b3303c(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             char param_5,undefined8 *param_6,longlong param_7)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  __uint64 *p_Var11;
  __uint64 *p_Var12;
  __uint64 *p_Var13;
  undefined8 *puVar14;
  __uint64 *p_Var15;
  longlong lVar16;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined8 local_1d0;
  __uint64 local_1c8 [12];
  __uint64 local_168 [12];
  __uint64 *local_108;
  longlong local_100 [2];
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  __uint64 *local_d0;
  undefined8 local_c8 [12];
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (param_2 != 0) {
    FUN_14026e798(&local_e0);
    bVar4 = true;
    if (local_e0 != 0) {
      local_f0 = local_e0;
      local_e8 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
        UNLOCK();
      }
      lVar6 = FUN_140206ee8(param_3,&local_f0);
      lVar16 = local_e0;
      if (lVar6 != 0) {
        if (param_5 == '\0') {
          local_d0 = *(__uint64 **)(param_2 + 0x18);
          FUN_1400021e4(&local_d0,local_100);
          local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffffffffff00);
          FUN_14084a140(lVar16,&local_108,local_100,0);
          if (local_100[0] != 0) {
            FUN_1400020a8();
          }
          if (local_108 != (__uint64 *)0x0) {
            if (((param_7 != 0) && (*local_108 != 0xffffffffffffffff)) && (DAT_14cb25ab0 == '\x01'))
            {
              AK::SoundEngine::SetSwitch
                        (*(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x38),*local_108);
            }
            p_Var13 = local_108;
            FUN_140a9d2f2(local_e0,local_1c8,*param_4);
            p_Var11 = local_1c8;
            p_Var12 = local_168;
            for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
              *p_Var12 = *p_Var11;
              p_Var11 = p_Var11 + 1;
              p_Var12 = p_Var12 + 1;
            }
            p_Var11 = p_Var13 + 0x28;
            uVar5 = *(uint *)((longlong)p_Var13 + 0x1d4);
            iVar9 = 0;
            *(undefined4 *)(p_Var13 + 0x3a) = 0;
            if ((int)uVar5 < 0) {
              FUN_147f80112(p_Var11,0);
              iVar9 = (int)p_Var13[0x3a];
              uVar5 = *(uint *)((longlong)p_Var13 + 0x1d4);
            }
            *(undefined1 *)((longlong)p_Var13 + 0x26c) = 0;
            *(uint *)(p_Var13 + 0x3a) = iVar9 + 1U;
            if (uVar5 < iVar9 + 1U) {
              FUN_140089f7a(p_Var11,iVar9);
            }
            if ((__uint64 *)p_Var13[0x38] != (__uint64 *)0x0) {
              p_Var11 = (__uint64 *)p_Var13[0x38];
            }
            lVar16 = (longlong)iVar9;
            p_Var12 = local_168;
            p_Var15 = p_Var11 + lVar16 * 0x10;
            for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
              *p_Var15 = *p_Var12;
              p_Var12 = p_Var12 + 1;
              p_Var15 = p_Var15 + 1;
            }
            p_Var11[lVar16 * 0x10 + 0xc] = 0x3f800000;
            *(undefined2 *)(p_Var11 + lVar16 * 0x10 + 0xd) = 0;
            *(undefined8 *)((longlong)p_Var11 + lVar16 * 0x80 + 0x6c) = 0;
            FUN_1447906c0(p_Var13,0);
            p_Var13 = local_108;
            plVar3 = *(longlong **)(local_e0 + 0x20);
            plVar7 = (longlong *)0x0;
            if (plVar3 != (longlong *)0x0) {
              if (*(int *)(local_e0 + 0x1c) == 0) {
LAB_140b33474:
                plVar7 = (longlong *)0x0;
              }
              else {
                uVar5 = *(uint *)(local_e0 + 0x18);
                plVar7 = (longlong *)0x0;
                if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
                  lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                  if ((lVar16 == 0) ||
                     ((*(int *)(lVar16 + 0x10) != *(int *)(local_e0 + 0x1c) ||
                      ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)))) goto LAB_140b33474;
                  if (*(code **)(*plVar3 + 0x30) == (code *)&LAB_14479b63c) {
                    plVar7 = plVar3 + -0xa4;
                    if ((longlong *)plVar3[-0x77] != (longlong *)0x0) {
                      plVar7 = (longlong *)plVar3[-0x77];
                    }
                  }
                  else {
                    plVar7 = (longlong *)(**(code **)(*plVar3 + 0x30))();
                  }
                }
              }
            }
            local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffff00000000);
            FUN_14084a448(p_Var13,param_1,lVar6,plVar7);
            p_Var13 = local_108;
            goto LAB_140b33497;
          }
        }
        else {
          local_1d8 = local_c8;
          puVar10 = param_6;
          puVar14 = local_1d8;
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar14 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
          local_68 = *(undefined4 *)(param_6 + 0xc);
          local_64 = *(undefined4 *)((longlong)param_6 + 100);
          local_60 = *(undefined1 *)(param_6 + 0xd);
          local_5f = *(undefined1 *)((longlong)param_6 + 0x69);
          local_5c = *(undefined8 *)((longlong)param_6 + 0x6c);
          uVar2 = *param_4;
          FUN_1400021e4(param_4,local_100);
          local_1d0 = 0;
          FUN_14071b0f2(lVar16,&local_d0,local_100,uVar2);
          if (local_100[0] != 0) {
            FUN_1400020a8();
          }
          if (local_d0 != (__uint64 *)0x0) {
            if (((param_7 != 0) && (*local_d0 != 0xffffffffffffffff)) && (DAT_14cb25ab0 == '\x01'))
            {
              AK::SoundEngine::SetSwitch
                        (*(uint *)(param_7 + 0x48),*(uint *)(param_7 + 0x38),*local_d0);
            }
            p_Var13 = local_d0;
            plVar3 = *(longlong **)(local_e0 + 0x20);
            if ((plVar3 == (longlong *)0x0) || (*(int *)(local_e0 + 0x1c) == 0)) {
LAB_140b33451:
              plVar7 = (longlong *)0x0;
            }
            else {
              uVar5 = *(uint *)(local_e0 + 0x18);
              plVar7 = (longlong *)0x0;
              if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
                lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                if (((lVar16 == 0) || (*(int *)(lVar16 + 0x10) != *(int *)(local_e0 + 0x1c))) ||
                   ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)) goto LAB_140b33451;
                if (*(code **)(*plVar3 + 0x30) == (code *)&LAB_14479b63c) {
                  plVar7 = plVar3 + -0xa4;
                  if ((longlong *)plVar3[-0x77] != (longlong *)0x0) {
                    plVar7 = (longlong *)plVar3[-0x77];
                  }
                }
                else {
                  plVar7 = (longlong *)(**(code **)(*plVar3 + 0x30))();
                }
              }
            }
            local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffff00000000);
            FUN_14084a448(p_Var13,param_1,lVar6,plVar7);
            p_Var13 = local_d0;
LAB_140b33497:
            if (((p_Var13 != (__uint64 *)0x0) &&
                (*(int *)(p_Var13 + 0x21) = (int)p_Var13[0x21] + -1, (int)p_Var13[0x26] < 1)) &&
               (FUN_1400847bc(p_Var13 + 0x17,0), (int)p_Var13[0x21] == 0)) {
              FUN_140087e46(p_Var13);
              if (*p_Var13 != 0xffffffffffffffff) {
                if (DAT_14cb259f8 == 0) goto LAB_140b334c6;
                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),p_Var13);
              }
              if (DAT_14cb259f8 != 0) {
                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),p_Var13);
              }
            }
LAB_140b334c6:
            bVar4 = false;
          }
        }
      }
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (!bVar4) goto LAB_140b33508;
  }
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0;
LAB_140b33508:
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b335c8 FUN_140b335c8 body=439 status=ok
// SIG undefined FUN_140b335c8(void)

longlong FUN_140b335c8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  longlong *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140b33780(param_1,&local_30,param_2);
  if ((((local_30 != 0) && (*(longlong **)(local_30 + 0x20) != (longlong *)0x0)) &&
      (*(int *)(local_30 + 0x1c) != 0)) &&
     ((uVar3 = *(uint *)(local_30 + 0x18), -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)))) {
    lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar4 != 0) &&
       ((*(int *)(lVar4 + 0x10) == *(int *)(local_30 + 0x1c) &&
        ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      lVar4 = (**(code **)(**(longlong **)(local_30 + 0x20) + 0x30))();
      if (lVar4 != 0) {
        if (DAT_14cac9ca8 == 0) {
          local_50 = &local_20;
          local_20 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_1478c0a72;
          local_60 = &LAB_1417b2375;
          local_68 = L"Engine";
          local_70 = 0x1000000000;
          local_78 = 0x10000004;
          local_80 = 8;
          local_88 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
        goto LAB_140b33682;
      }
    }
  }
  lVar4 = 0;
LAB_140b33682:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b33780 FUN_140b33780 body=250 status=ok
// SIG undefined FUN_140b33780(void)

undefined8 * FUN_140b33780(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  lVar2 = *param_3;
  if ((lVar2 != 0) && (*(int *)(param_1 + 0x238) != *(int *)(param_1 + 0x264))) {
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x268;
    if (*(longlong *)(param_1 + 0x270) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x270);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x278) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x230) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x230) + (longlong)iVar4 * 0x20) == lVar2) {
          if ((lVar5 != 0) && ((undefined8 *)(lVar5 + 8) != (undefined8 *)0x0)) {
            *param_2 = 0;
            lVar2 = *(longlong *)(lVar5 + 0x10);
            param_2[1] = lVar2;
            if (lVar2 == 0) {
              return param_2;
            }
            iVar4 = *(int *)(lVar2 + 8);
            do {
              if (iVar4 == 0) {
                param_2[1] = 0;
                return param_2;
              }
              LOCK();
              iVar1 = *(int *)(lVar2 + 8);
              bVar7 = iVar4 == iVar1;
              if (bVar7) {
                *(int *)(lVar2 + 8) = iVar4 + 1;
                iVar1 = iVar4;
              }
              iVar4 = iVar1;
              UNLOCK();
            } while (!bVar7);
            if (param_2[1] != 0) {
              *param_2 = *(undefined8 *)(lVar5 + 8);
            }
            return param_2;
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140b3387a FUN_140b3387a body=289 status=ok
// SIG undefined FUN_140b3387a(void)

void FUN_140b3387a(longlong *param_1,byte param_2,undefined1 param_3)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [44];
  byte local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[0x181] <= (int)(uint)param_2) {
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (((char)param_1[0x2f] == '\x03') || ((longlong *)param_1[0x36] == (longlong *)0x0))
  goto LAB_140b338b4;
  cVar1 = (**(code **)(*(longlong *)param_1[0x36] + 0x700))();
  if (cVar1 == '\0') goto LAB_140b338b4;
  if ((int)(uint)param_2 < (int)param_1[0x181]) {
    plVar3 = param_1 + 0x17f;
    if ((longlong *)param_1[0x180] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x180];
    }
    bVar2 = *(byte *)((longlong)plVar3 + (ulonglong)param_2);
  }
  else {
    bVar2 = 0xff;
  }
  if ((int)(uint)bVar2 < (int)param_1[0x17e]) {
    plVar3 = *(longlong **)(param_1[0x17d] + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
    if (plVar3 == (longlong *)0x0) goto LAB_140b339ab;
    local_2a = (**(code **)(*plVar3 + 0x330))();
  }
  else {
LAB_140b339ab:
    local_2a = 0;
  }
  local_2c = param_2;
  local_2b = param_3;
  uVar4 = FUN_14477b072(param_1,DAT_14cb93958);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_2c);
LAB_140b338b4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 140b33a5a FUN_140b33a5a body=279 status=ok
// SIG undefined FUN_140b33a5a(void)

undefined8 FUN_140b33a5a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140b33b6b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140b33b6b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140b33b6b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140b33b18;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140b33b18;
    }
  }
  uVar6 = 0;
LAB_140b33b18:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b33b72 FUN_140b33b72 body=290 status=ok
// SIG undefined FUN_140b33b72(void)

void FUN_140b33b72(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140b03ca2(param_2,&local_60);
  local_88 = local_60;
  uStack_84 = uStack_5c;
  uStack_80 = uStack_58;
  uStack_7c = uStack_54;
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
  local_68 = 1;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    FUN_140b33cce(*(longlong *)(param_1 + 0x60),&local_88,&local_98);
    if ((longlong)(int)uStack_90 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = local_98 + (longlong)(int)uStack_90 * 2;
      plVar7 = local_98;
      do {
        plVar3 = (longlong *)plVar7[1];
        if (plVar3 != (longlong *)0x0) {
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_140b33c28;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar9 = iVar5 == iVar4;
            if (bVar9) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar9);
          if (*plVar7 != 0) {
            FUN_140b343e6(*plVar7,param_2);
          }
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
LAB_140b33c28:
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar8);
      uVar6 = uStack_90 & 0xffffffff;
    }
    FUN_140b33c95(local_98,uVar6);
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b33c95 FUN_140b33c95 body=56 status=ok
// SIG undefined FUN_140b33c95(void)

void FUN_140b33c95(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b33cce FUN_140b33cce body=314 status=ok
// SIG undefined FUN_140b33cce(void)

void FUN_140b33cce(longlong *param_1,double *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = FUN_140b33e0a(param_1,param_2,local_68);
  iVar7 = (int)param_1[1];
  iVar8 = (int)param_3[1] + iVar7;
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
    FUN_140b33e9a(param_3);
    iVar7 = (int)param_1[1];
  }
  if (iVar7 != 0) {
    lVar3 = *param_1;
    lVar9 = 0;
    do {
      pdVar1 = (double *)(lVar3 + 0x10 + lVar9);
      if ((((*param_2 < *pdVar1 || *param_2 == *pdVar1) &&
           (*(double *)(lVar3 + lVar9) < param_2[2] || *(double *)(lVar3 + lVar9) == param_2[2])) &&
          (pdVar1 = (double *)(lVar3 + 0x18 + lVar9), param_2[1] < *pdVar1 || param_2[1] == *pdVar1)
          ) && (dVar2 = *(double *)(lVar3 + 8 + lVar9), dVar2 < param_2[3] || dVar2 == param_2[3]))
      {
        iVar8 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
          FUN_1488e347e(param_3,iVar8);
        }
        lVar4 = *param_3;
        *(undefined8 *)(lVar4 + (longlong)iVar8 * 0x10) = *(undefined8 *)(lVar3 + 0x28 + lVar9);
        lVar5 = *(longlong *)(lVar3 + 0x30 + lVar9);
        *(longlong *)(lVar4 + 8 + (longlong)iVar8 * 0x10) = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
          UNLOCK();
        }
      }
      lVar9 = lVar9 + 0x38;
    } while ((longlong)iVar7 * 0x38 - lVar9 != 0);
  }
  if (uVar6 != 0) {
    uVar10 = 0;
    do {
      FUN_140b33cce(local_68[uVar10],param_2,param_3);
      uVar10 = uVar10 + 1;
    } while (uVar6 != uVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b33e0a FUN_140b33e0a body=143 status=ok
// SIG undefined FUN_140b33e0a(void)

ulonglong FUN_140b33e0a(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = *(double *)(param_1 + 0x58);
    dVar4 = *(double *)(param_1 + 0x60);
    uVar7 = 0;
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    if ((dVar1 <= dVar3) && (dVar2 <= dVar4)) {
      *param_3 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 1;
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar2 <= dVar4)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x28);
    }
    uVar9 = uVar8;
    if ((dVar1 <= dVar3) && (dVar4 <= dVar6)) {
      uVar9 = (ulonglong)((int)uVar8 + 1);
      param_3[uVar8] = *(undefined8 *)(param_1 + 0x10);
    }
    uVar7 = uVar9;
    if ((dVar3 <= dVar5) && (dVar4 <= dVar6)) {
      uVar7 = (ulonglong)((int)uVar9 + 1);
      param_3[uVar9] = *(undefined8 *)(param_1 + 0x18);
    }
  }
  return uVar7;
}



// FUNCTION 140b33e9a FUN_140b33e9a body=212 status=ok
// SIG undefined FUN_140b33e9a(void)

void FUN_140b33e9a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140b33f6e FUN_140b33f6e body=290 status=ok
// SIG undefined FUN_140b33f6e(void)

void FUN_140b33f6e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140b03ca2(param_2,&local_60);
  local_88 = local_60;
  uStack_84 = uStack_5c;
  uStack_80 = uStack_58;
  uStack_7c = uStack_54;
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
  local_68 = 1;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    FUN_140b33cce(*(longlong *)(param_1 + 0x60),&local_88,&local_98);
    if ((longlong)(int)uStack_90 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = local_98 + (longlong)(int)uStack_90 * 2;
      plVar7 = local_98;
      do {
        plVar3 = (longlong *)plVar7[1];
        if (plVar3 != (longlong *)0x0) {
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_140b34024;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar9 = iVar5 == iVar4;
            if (bVar9) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar9);
          if (*plVar7 != 0) {
            FUN_140b34092(*plVar7,param_2);
          }
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
LAB_140b34024:
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar8);
      uVar6 = uStack_90 & 0xffffffff;
    }
    FUN_140b33c95(local_98,uVar6);
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b34092 FUN_140b34092 body=683 status=ok
// SIG undefined FUN_140b34092(void)

void FUN_140b34092(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  void *_Dst;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  
  iVar8 = *(int *)(param_1 + 0xf0);
  if ((longlong)iVar8 != 0) {
    lVar1 = *(longlong *)(param_1 + 0xe8);
    lVar14 = 0;
    do {
      cVar5 = FUN_140b34a8c(lVar1 + lVar14,param_2);
      if (cVar5 != '\0') {
        uVar10 = (int)(lVar14 >> 3) * -0x33333333;
        if ((int)uVar10 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0xf0) <= (int)uVar10) {
          return;
        }
        uVar12 = (ulonglong)(uVar10 & 0x7fffffff);
        lVar1 = *(longlong *)(param_1 + 0xe8) + uVar12 * 0x28;
        if ((longlong)*(int *)(lVar1 + 0x10) != 0) {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 8 + uVar12 * 0x28);
          lVar17 = (longlong)*(int *)(lVar1 + 0x10) * 0x20 + lVar14;
          do {
            iVar8 = *(int *)(lVar14 + 0x18);
            if ((-1 < (longlong)iVar8) && (iVar8 < *(int *)(param_1 + 0xb0))) {
              lVar9 = (longlong)iVar8 * 0x78;
              iVar8 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x70 + lVar9);
              lVar15 = (longlong)iVar8;
              if (lVar15 != 0) {
                lVar9 = lVar9 + *(longlong *)(param_1 + 0xa8);
                lVar2 = *(longlong *)(lVar9 + 0x68);
                bVar6 = FUN_140b3433e(lVar2);
                iVar16 = 0;
                iVar11 = 0;
                do {
                  lVar19 = (longlong)iVar11;
                  iVar3 = iVar11 + 1;
                  if (iVar11 + 1 < iVar8) {
                    iVar3 = iVar8;
                  }
                  lVar20 = lVar2 + 8 + lVar19 * 8;
                  lVar13 = lVar19;
                  iVar18 = iVar11;
                  do {
                    lVar13 = lVar13 + 1;
                    iVar4 = iVar3;
                    if (lVar15 <= lVar13) break;
                    bVar7 = FUN_140b3433e(lVar20,lVar1);
                    iVar18 = iVar18 + 1;
                    lVar20 = lVar20 + 8;
                    iVar4 = iVar18;
                  } while ((bVar6 & 1) == bVar7);
                  if ((bVar6 & 1) == 0) {
                    if (iVar16 != iVar11) {
                      memmove((void *)(lVar2 + (longlong)iVar16 * 8),(void *)(lVar2 + lVar19 * 8),
                              (longlong)(iVar4 - iVar11) << 3);
                    }
                    iVar16 = iVar16 + (iVar4 - iVar11);
                  }
                  iVar11 = iVar4;
                  bVar6 = bVar6 ^ 1;
                } while (lVar13 < lVar15);
                *(int *)(lVar9 + 0x70) = iVar16;
              }
            }
            lVar14 = lVar14 + 0x20;
          } while (lVar14 != lVar17);
        }
        iVar8 = *(int *)(lVar1 + 0x20);
        if ((longlong)iVar8 != 0) {
          lVar1 = *(longlong *)(lVar1 + 0x18);
          lVar14 = 0;
          do {
            iVar11 = *(int *)(lVar1 + lVar14);
            if ((-1 < (longlong)iVar11) && (iVar11 < *(int *)(param_1 + 0x90))) {
              *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x88 + (longlong)iVar11 * 0x90) = 0;
            }
            lVar14 = lVar14 + 4;
          } while ((longlong)iVar8 * 4 != lVar14);
        }
        _Dst = (void *)(uVar12 * 0x28 + *(longlong *)(param_1 + 0xe8));
        FUN_140b343a6(_Dst,1);
        iVar8 = *(int *)(param_1 + 0xf0);
        iVar11 = iVar8 - (uVar10 + 1);
        if (iVar11 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)iVar11 * 0x28);
          iVar8 = *(int *)(param_1 + 0xf0);
        }
        *(int *)(param_1 + 0xf0) = iVar8 + -1;
        return;
      }
      lVar14 = lVar14 + 0x28;
    } while ((longlong)iVar8 * 0x28 != lVar14);
  }
  return;
}



// FUNCTION 140b3433e FUN_140b3433e body=104 status=ok
// SIG undefined FUN_140b3433e(void)

ulonglong FUN_140b3433e(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 140b343a6 FUN_140b343a6 body=63 status=ok
// SIG undefined FUN_140b343a6(void)

void FUN_140b343a6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b343e6 FUN_140b343e6 body=1700 status=ok
// SIG undefined FUN_140b343e6(void)

void FUN_140b343e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  char local_180;
  ulonglong local_178;
  undefined8 uStack_170;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  undefined1 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined4 local_fc;
  ulonglong local_f8;
  undefined8 uStack_f0;
  ulonglong *local_78;
  ulonglong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xe8);
      lVar13 = (longlong)*(int *)(param_1 + 0xf0) * 0x28;
      do {
        cVar4 = FUN_140b34a8c(lVar8,param_2);
        if (cVar4 != '\0') goto LAB_140b34675;
        lVar8 = lVar8 + 0x28;
        lVar13 = lVar13 + -0x28;
      } while (lVar13 != 0);
    }
    FUN_140b03ca2(param_2,&local_138);
    local_160 = local_138;
    dStack_158 = dStack_130;
    local_150 = local_120;
    dStack_148 = dStack_118;
    local_140 = 1;
    local_178 = 0;
    uStack_170 = 0;
    local_78 = (ulonglong *)0x0;
    local_70 = 0x2000000000;
    FUN_140b34cf0(*(undefined8 *)(param_1 + 0xb8),&local_160,&local_f8);
    if ((int)local_70 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_70 & 0xffffffff);
    }
    if ((int)uStack_170._4_4_ < (int)local_70) {
      FUN_140b35150(&local_178);
    }
    puVar9 = &local_f8;
    if (local_78 != (ulonglong *)0x0) {
      puVar9 = local_78;
    }
    if ((int)local_70 != 0) {
      lVar13 = (longlong)(int)local_70;
      lVar8 = 0;
      do {
        iVar6 = *(int *)((longlong)puVar9 + lVar8);
        if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(param_1 + 0xb0))) {
          lVar14 = (longlong)iVar6 * 0x78;
          FUN_140b34bd8(&local_160,&local_1a0,*(longlong *)(param_1 + 0xa8) + lVar14);
          if (local_180 == '\x01') {
            local_1c8 = (local_198 + local_188) * 0.5;
            local_1d0 = (local_1a0 + local_190) * 0.5;
            local_1c0 = 0;
            local_fc = 0x7f7fffff;
            lVar14 = *(longlong *)(param_1 + 0xa8) + 0x30 + lVar14;
            uVar16 = FUN_14040e062(lVar14,&local_1d0,&local_fc,&local_1b8);
            FUN_140703ce0(lVar14,&local_1b8,uVar16,*(undefined8 *)(lVar14 + 0x28));
            uVar11 = uStack_170;
            lVar14 = (longlong)(int)uStack_170;
            uVar5 = (int)uStack_170 + 1;
            uStack_170 = CONCAT44(uStack_170._4_4_,uVar5);
            if (uStack_170._4_4_ < uVar5) {
              FUN_14882be1a(&local_178,uVar11 & 0xffffffff);
            }
            lVar14 = lVar14 * 0x20;
            *(undefined8 *)(local_178 + 0x10 + lVar14) = local_1a8;
            *(undefined8 *)(local_178 + lVar14) = local_1b8;
            ((undefined8 *)(local_178 + lVar14))[1] = uStack_1b0;
            *(int *)(local_178 + 0x18 + lVar14) = iVar6;
          }
        }
        lVar8 = lVar8 + 4;
      } while (lVar13 * 4 != lVar8);
    }
    if (local_78 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    if ((int)uStack_170 != 0) {
      local_f8 = 0;
      uStack_f0 = 0;
      FUN_140b34eca(*(undefined8 *)(param_1 + 0x98),&local_160,&local_f8);
      if (0 < (int)uStack_f0) {
        uVar5 = 0;
        iVar6 = (int)uStack_f0;
        do {
          iVar12 = *(int *)(local_f8 + (longlong)(int)uVar5 * 4);
          if (((longlong)iVar12 < 0) || (*(int *)(param_1 + 0x90) <= iVar12)) {
LAB_140b34784:
            iVar12 = ~uVar5 + iVar6;
            if (iVar12 != 0) {
              if (0 < iVar12) {
                iVar12 = 1;
              }
              memmove((void *)(local_f8 + (longlong)(int)uVar5 * 4),
                      (void *)(local_f8 + (longlong)(iVar6 - iVar12) * 4),(longlong)iVar12 << 2);
              iVar6 = (int)uStack_f0;
            }
            iVar6 = iVar6 + -1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar6);
          }
          else {
            lVar8 = (longlong)iVar12 * 0x90;
            dVar2 = *(double *)(*(longlong *)(param_1 + 0x88) + lVar8);
            if ((dVar2 < local_138) || (local_120 < dVar2)) goto LAB_140b34784;
            lVar8 = *(longlong *)(param_1 + 0x88) + lVar8;
            dVar2 = *(double *)(lVar8 + 8);
            if ((((dVar2 < dStack_130) || (dStack_118 < dVar2)) ||
                (dVar2 = *(double *)(lVar8 + 0x10), dVar2 < local_128)) || (local_110 < dVar2))
            goto LAB_140b34784;
            uVar5 = uVar5 + 1;
          }
        } while ((int)uVar5 < iVar6);
      }
      if (param_2 == 0) {
        uVar5 = 0;
        uVar11 = 0;
      }
      else {
        uVar5 = *(uint *)(param_2 + 0xc);
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        uVar11 = (ulonglong)*(uint *)(lVar8 + 0x10);
        if (*(uint *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          uVar10 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar10);
          }
          LOCK();
          uVar7 = *(uint *)(lVar8 + 0x10);
          bVar15 = uVar7 == 0;
          if (bVar15) {
            *(uint *)(lVar8 + 0x10) = uVar10;
            uVar7 = 0;
          }
          UNLOCK();
          if (bVar15) {
            uVar7 = uVar10;
          }
          uVar11 = (ulonglong)uVar7;
        }
      }
      uVar3 = local_178;
      local_1d8 = (ulonglong)uVar5;
      if ((longlong)(int)uStack_f0 != 0) {
        lVar8 = 0;
        do {
          iVar6 = *(int *)(local_f8 + lVar8);
          if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(param_1 + 0x90))) {
            *(ulonglong *)(*(longlong *)(param_1 + 0x88) + 0x88 + (longlong)iVar6 * 0x90) =
                 (uVar11 << 0x20) + local_1d8;
          }
          lVar8 = lVar8 + 4;
        } while ((longlong)(int)uStack_f0 * 4 != lVar8);
      }
      lVar8 = (longlong)(int)uStack_170;
      if (lVar8 != 0) {
        lVar13 = local_1d8 + (uVar11 << 0x20);
        lVar14 = 0;
        do {
          iVar6 = *(int *)(uVar3 + 0x18 + lVar14);
          if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(param_1 + 0xb0))) {
            lVar1 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar6 * 0x78;
            iVar6 = *(int *)(lVar1 + 0x70);
            *(uint *)(lVar1 + 0x70) = iVar6 + 1U;
            if (*(uint *)(lVar1 + 0x74) < iVar6 + 1U) {
              FUN_140b34fee((longlong *)(lVar1 + 0x68),iVar6);
            }
            *(longlong *)(*(longlong *)(lVar1 + 0x68) + (longlong)iVar6 * 8) = lVar13;
          }
          lVar14 = lVar14 + 0x20;
        } while (lVar8 * 0x20 != lVar14);
      }
      iVar6 = *(int *)(param_1 + 0xf0);
      *(uint *)(param_1 + 0xf0) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0xf4) < iVar6 + 1U) {
        FUN_140b35224((longlong *)(param_1 + 0xe8),iVar6);
      }
      lVar8 = *(longlong *)(param_1 + 0xe8);
      puVar9 = (ulonglong *)(lVar8 + (longlong)iVar6 * 0x28);
      FUN_140b34bc4(puVar9);
      *puVar9 = local_1d8 | uVar11 << 0x20;
      if ((ulonglong *)(lVar8 + (longlong)iVar6 * 0x28 + 0x18) != &local_f8) {
        if (puVar9[3] != 0) {
          FUN_1400020a8();
        }
        puVar9[3] = local_f8;
        local_f8 = 0;
        *(int *)(puVar9 + 4) = (int)uStack_f0;
        *(undefined4 *)((longlong)puVar9 + 0x24) = uStack_f0._4_4_;
        uStack_f0 = 0;
      }
      if (puVar9 + 1 != &local_178) {
        if (puVar9[1] != 0) {
          FUN_1400020a8();
        }
        puVar9[1] = local_178;
        local_178 = 0;
        *(int *)(puVar9 + 2) = (int)uStack_170;
        *(uint *)((longlong)puVar9 + 0x14) = uStack_170._4_4_;
        uStack_170 = 0;
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140b34675:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b34a8c FUN_140b34a8c body=311 status=ok
// SIG undefined FUN_140b34a8c(void)

ulonglong FUN_140b34a8c(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar5;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  local_24 = (uint)uVar3;
  uVar5 = *param_1;
  uVar2 = param_1[1];
  if ((uVar5 == local_28) && (uVar2 == local_24)) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else if (((uVar2 == 0) ||
           ((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
            (lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar4 == 0))))
          || ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) {
    uVar3 = FUN_144729dda(&local_28);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140b34bc4 FUN_140b34bc4 body=19 status=ok
// SIG undefined FUN_140b34bc4(void)

void FUN_140b34bc4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 140b34bd8 FUN_140b34bd8 body=279 status=ok
// SIG undefined FUN_140b34bd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b34bd8(double *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  dVar1 = *param_1;
  uVar8 = SUB84(dVar1,0);
  uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_3[2];
  if (dVar1 <= dVar2) {
    dVar3 = *param_3;
    dVar10 = param_1[2];
    if (dVar3 <= dVar10) {
      dVar11 = param_1[1];
      dVar4 = param_3[3];
      if (dVar11 <= dVar4) {
        dVar5 = param_3[1];
        dVar6 = param_1[3];
        uVar12 = SUB84(dVar6,0);
        uVar13 = (undefined4)((ulonglong)dVar6 >> 0x20);
        if (dVar5 <= dVar6) {
          if (dVar1 <= dVar3) {
            uVar8 = SUB84(dVar3,0);
            uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
          }
          if (dVar2 <= dVar10) {
            dVar10 = dVar2;
          }
          if (dVar11 <= dVar5) {
            dVar11 = dVar5;
          }
          if (dVar4 <= dVar6) {
            uVar12 = SUB84(dVar4,0);
            uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          *param_2 = CONCAT44(uVar9,uVar8);
          param_2[1] = dVar11;
          param_2[2] = dVar10;
          param_2[3] = CONCAT44(uVar13,uVar12);
          *(undefined1 *)(param_2 + 4) = 1;
          return param_2;
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c997480) && (FUN_144b3d300(&DAT_14c997480), DAT_14c997480 == -1)) {
    _DAT_14c997468 = (undefined4)DAT_14c8463f0;
    uRam000000014c99746c = DAT_14c8463f0._4_4_;
    uRam000000014c997470 = (undefined4)DAT_14c8463f8;
    uRam000000014c997474 = DAT_14c8463f8._4_4_;
    _DAT_14c997458 = (undefined4)DAT_14c8463f0;
    uRam000000014c99745c = DAT_14c8463f0._4_4_;
    uRam000000014c997460 = (undefined4)DAT_14c8463f8;
    uRam000000014c997464 = DAT_14c8463f8._4_4_;
    DAT_14c997478._0_1_ = 0;
    _Init_thread_footer(&DAT_14c997480);
  }
  param_2[4] = CONCAT71(DAT_14c997478._1_7_,(undefined1)DAT_14c997478);
  uVar7 = CONCAT44(uRam000000014c997474,uRam000000014c997470);
  param_2[2] = CONCAT44(uRam000000014c99746c,_DAT_14c997468);
  param_2[3] = uVar7;
  uVar7 = CONCAT44(uRam000000014c997464,uRam000000014c997460);
  *param_2 = CONCAT44(uRam000000014c99745c,_DAT_14c997458);
  param_2[1] = uVar7;
  return param_2;
}



// FUNCTION 140b34cf0 FUN_140b34cf0 body=331 status=ok
// SIG undefined FUN_140b34cf0(void)

void FUN_140b34cf0(longlong *param_1,double *param_2,longlong param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_140b34e3c(param_1,param_2,local_68);
  iVar5 = (int)param_1[1];
  iVar7 = *(int *)(param_3 + 0x88) + iVar5;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (*(int *)(param_3 + 0x8c) < iVar7) {
    FUN_1400cc56e(param_3);
    iVar5 = (int)param_1[1];
  }
  if (iVar5 != 0) {
    lVar3 = *param_1;
    lVar8 = 0;
    do {
      pdVar1 = (double *)(lVar3 + 0x10 + lVar8);
      if ((((*param_2 < *pdVar1 || *param_2 == *pdVar1) &&
           (*(double *)(lVar3 + lVar8) < param_2[2] || *(double *)(lVar3 + lVar8) == param_2[2])) &&
          (pdVar1 = (double *)(lVar3 + 0x18 + lVar8), param_2[1] < *pdVar1 || param_2[1] == *pdVar1)
          ) && (dVar2 = *(double *)(lVar3 + 8 + lVar8), dVar2 < param_2[3] || dVar2 == param_2[3]))
      {
        iVar7 = *(int *)(param_3 + 0x88);
        *(uint *)(param_3 + 0x88) = iVar7 + 1U;
        if (*(uint *)(param_3 + 0x8c) < iVar7 + 1U) {
          FUN_1456cba76(param_3,iVar7);
        }
        lVar6 = *(longlong *)(param_3 + 0x80);
        if (*(longlong *)(param_3 + 0x80) == 0) {
          lVar6 = param_3;
        }
        *(undefined4 *)(lVar6 + (longlong)iVar7 * 4) = *(undefined4 *)(lVar3 + 0x28 + lVar8);
      }
      lVar8 = lVar8 + 0x30;
    } while ((longlong)iVar5 * 0x30 != lVar8);
  }
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      FUN_140b34cf0(local_68[uVar9],param_2,param_3);
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b34e3c FUN_140b34e3c body=141 status=ok
// SIG undefined FUN_140b34e3c(void)

ulonglong FUN_140b34e3c(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = *(double *)(param_1 + 0x58);
    dVar4 = *(double *)(param_1 + 0x60);
    uVar7 = 0;
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    if ((dVar1 <= dVar3) && (dVar2 <= dVar4)) {
      *param_3 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 1;
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar2 <= dVar4)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x28);
    }
    uVar7 = uVar8;
    if ((dVar1 <= dVar3) && (dVar4 <= dVar6)) {
      uVar7 = (ulonglong)((int)uVar8 + 1);
      param_3[uVar8] = *(undefined8 *)(param_1 + 0x10);
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar4 <= dVar6)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x18);
    }
    return uVar8;
  }
  return 0;
}



// FUNCTION 140b34eca FUN_140b34eca body=289 status=ok
// SIG undefined FUN_140b34eca(void)

void FUN_140b34eca(longlong *param_1,double *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_140b34e3c(param_1,param_2,local_68);
  iVar5 = (int)param_1[1];
  iVar6 = (int)param_3[1] + iVar5;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
    FUN_14481578e(param_3);
    iVar5 = (int)param_1[1];
  }
  if (iVar5 != 0) {
    lVar3 = *param_1;
    lVar7 = 0;
    do {
      pdVar1 = (double *)(lVar3 + 0x10 + lVar7);
      if ((((*param_2 < *pdVar1 || *param_2 == *pdVar1) &&
           (*(double *)(lVar3 + lVar7) < param_2[2] || *(double *)(lVar3 + lVar7) == param_2[2])) &&
          (pdVar1 = (double *)(lVar3 + 0x18 + lVar7), param_2[1] < *pdVar1 || param_2[1] == *pdVar1)
          ) && (dVar2 = *(double *)(lVar3 + 8 + lVar7), dVar2 < param_2[3] || dVar2 == param_2[3]))
      {
        iVar6 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
          FUN_1446f48e2(param_3,iVar6);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar6 * 4) = *(undefined4 *)(lVar3 + 0x28 + lVar7);
      }
      lVar7 = lVar7 + 0x30;
    } while ((longlong)iVar5 * 0x30 != lVar7);
  }
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      FUN_140b34eca(local_68[uVar8],param_2,param_3);
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b34fee FUN_140b34fee body=353 status=ok
// SIG undefined FUN_140b34fee(void)

void FUN_140b34fee(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b35073;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140b35073:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140b35150 FUN_140b35150 body=212 status=ok
// SIG undefined FUN_140b35150(void)

void FUN_140b35150(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 140b35224 FUN_140b35224 body=373 status=ok
// SIG undefined FUN_140b35224(void)

void FUN_140b35224(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b352ad;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140b352ad:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140b3539a FUN_140b3539a body=1525 status=ok
// SIG undefined FUN_140b3539a(void)

void FUN_140b3539a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int iVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong *local_e8;
  char local_e0 [16];
  longlong *local_d0;
  int local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *param_2;
  uVar9 = FUN_140082ff6();
  cVar6 = FUN_1448093f4(lVar3,uVar9);
  if (cVar6 != '\0') {
    lVar3 = *param_2;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar19 = *(undefined4 *)(param_1 + 0xb70);
    uVar18 = *(undefined4 *)(param_1 + 0xb9c);
    uVar9 = FUN_140231a4a(param_3);
    FUN_140b35a56(uVar9,&local_f0);
    if (local_f0 != 0) {
      lVar17 = local_f0 + 0x10;
      local_e0[0] = '\0';
      local_b8 = 0;
      FUN_140b359ca(local_e0,param_2);
      puVar13 = &local_b0;
      FUN_1448729ea(lVar17,puVar13,local_e0);
      if (local_90 == 3) {
        uVar19 = local_b0;
        bVar7 = 3;
      }
      else {
        puVar16 = &local_88;
        FUN_1400b56fe(puVar16,&local_b0,3);
        if (local_68 != 0) {
          uVar19 = local_88;
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_70) {
            puVar16 = (undefined4 *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar5)(puVar16);
        }
        bVar7 = local_90;
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
          bVar7 = local_90;
        }
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_98) {
          puVar13 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
        }
        (*pcVar5)(puVar13);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
      }
      lVar17 = DAT_14c9a3da0;
      if ((longlong)local_b8 != 0) {
        lVar12 = (longlong)local_b8 + -1;
        lVar15 = lVar12 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
        if (*(longlong *)(lVar17 + lVar15) != 0) {
          FUN_1400020a8();
        }
        lVar17 = DAT_14c9a3da0;
        iVar14 = (int)lVar12;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar14;
        }
        *(undefined4 *)(lVar17 + lVar15) = 0xffffffff;
        iVar10 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar10 = DAT_14c9a3dd0;
        }
        *(int *)(lVar17 + 4 + lVar15) = iVar10;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar11 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar11 = DAT_14c9a3dc0;
        }
        iVar10 = iVar14 + 0x1f;
        if (-1 < iVar14) {
          iVar10 = iVar14;
        }
        bVar7 = (byte)lVar12 & 0x1f;
        DAT_14c9a3dd0 = iVar14;
        *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_b8 = 0;
      }
      if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
      local_e0[0] = '\0';
      local_b8 = 0;
      FUN_140b359ca(local_e0,param_2);
      puVar13 = &local_b0;
      FUN_1448729ea(local_f0 + 0x60,puVar13,local_e0);
      if (local_90 == 3) {
        uVar8 = 3;
        uVar18 = local_b0;
      }
      else {
        puVar16 = &local_88;
        FUN_1400b56fe(puVar16,&local_b0,3);
        if (local_68 != 0) {
          uVar18 = local_88;
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_70) {
            puVar16 = (undefined4 *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar5)(puVar16);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
        }
        uVar8 = (uint)local_90;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_98) {
          puVar13 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
        }
        (*pcVar5)(puVar13);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
      }
      lVar17 = DAT_14c9a3da0;
      if ((longlong)local_b8 != 0) {
        lVar12 = (longlong)local_b8 + -1;
        lVar15 = lVar12 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
        if (*(longlong *)(lVar17 + lVar15) != 0) {
          FUN_1400020a8();
        }
        lVar17 = DAT_14c9a3da0;
        iVar14 = (int)lVar12;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar14;
        }
        *(undefined4 *)(lVar17 + lVar15) = 0xffffffff;
        iVar10 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar10 = DAT_14c9a3dd0;
        }
        *(int *)(lVar17 + 4 + lVar15) = iVar10;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar11 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar11 = DAT_14c9a3dc0;
        }
        iVar10 = iVar14 + 0x1f;
        if (-1 < iVar14) {
          iVar10 = iVar14;
        }
        bVar7 = (byte)lVar12 & 0x1f;
        DAT_14c9a3dd0 = iVar14;
        *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_b8 = 0;
      }
      if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)local_e8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
        }
      }
    }
    uVar9 = FUN_140b35990();
    if (*(longlong *)(lVar3 + 0x200) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(*(longlong *)(lVar3 + 0x200),uVar9,0);
    }
    FUN_1407cace8(lVar3,uVar9,uVar19,2);
    uVar9 = FUN_140b35990();
    if (*(longlong *)(lVar3 + 0x200) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(*(longlong *)(lVar3 + 0x200),uVar9,1);
    }
    FUN_1407cace8(lVar3,uVar9,uVar18,2);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b35990 FUN_140b35990 body=57 status=ok
// SIG undefined FUN_140b35990(void)

void FUN_140b35990(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93788 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93788 = FUN_14171c317(FUN_146572334,uVar1,L"EAtt_Weapon");
  }
  return;
}



// FUNCTION 140b359ca FUN_140b359ca body=140 status=ok
// SIG undefined FUN_140b359ca(void)

void FUN_140b359ca(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x03';
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x20] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*(int *)(param_1 + 0x28) + -1,1);
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
  }
  return;
}



// FUNCTION 140b35a56 FUN_140b35a56 body=83 status=ok
// SIG undefined FUN_140b35a56(void)

longlong * FUN_140b35a56(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140b35aaa();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140b35aaa FUN_140b35aaa body=57 status=ok
// SIG undefined FUN_140b35aaa(void)

void FUN_140b35aaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93758 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93758 = FUN_140002ddd(FUN_14657223f,uVar1,L"WeaponClassData");
  }
  return;
}



// FUNCTION 140b35ae4 FUN_140b35ae4 body=210 status=ok
// SIG undefined FUN_140b35ae4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b35ae4(void)

{
  if ((DAT_14ca8c72f & 2) == 0) {
    DAT_14ca8c72f = DAT_14ca8c72f | 2;
    _DAT_14ca8c6d0 = L"FGlobalShader";
    _DAT_14ca8c6e8 = FUN_146826540;
    _DAT_14ca8c6f0 = FUN_146825d77;
    _DAT_14ca8c6f8 = FUN_146825fd6;
    _DAT_14ca8c700 = FUN_1407e02ea;
    _DAT_14ca8c708 = FUN_146826273;
    _DAT_14ca8c6e0 = FUN_14741c7c8;
    _DAT_14ca8c720 = 0xffffffff000000e0;
    _DAT_14ca8c728 = 8;
    DAT_14ca8c72c = 0;
    _DAT_14ca8c710 = &LAB_14741c7f4;
    FUN_14577430e(&DAT_14ca8c6c8);
    FUN_1407e00cc(&DAT_14ca8c6c8);
  }
  return &DAT_14ca8c6c8;
}



// FUNCTION 140b35bb6 FUN_140b35bb6 body=40 status=ok
// SIG undefined FUN_140b35bb6(void)

undefined8 FUN_140b35bb6(undefined8 param_1,int param_2)

{
  FUN_140b35bde();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b35bde FUN_140b35bde body=239 status=ok
// SIG undefined FUN_140b35bde(void)

void FUN_140b35bde(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a5d5c50;
  param_1[5] = &PTR_FUN_14a5d5f30;
  param_1[6] = &PTR_FUN_14a5d5f70;
  param_1[7] = &PTR_FUN_14a5d5fa0;
  param_1[0x11] = &PTR_FUN_14a5d5fd0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 400;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x130);
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14040f2c8(param_1);
  return;
}



// FUNCTION 140b35cce FUN_140b35cce body=452 status=ok
// SIG undefined FUN_140b35cce(void)

undefined8 * FUN_140b35cce(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = "Connections";
  local_48 = 0xb;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = (ulonglong)uVar1;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = FUN_140b35e94(param_2);
  param_1[6] = uVar2;
  local_50 = "ConnectionEdgeStarts";
  local_48 = 0x14;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = (ulonglong)uVar1;
  param_1[10] = DAT_14c996660;
  param_1[0xb] = DAT_14c9974a8;
  param_1[0xc] = 0;
  uVar2 = FUN_1401c0c0c(param_2);
  param_1[0xd] = uVar2;
  local_50 = "ConnectionEdgeEnds";
  local_48 = 0x12;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = (ulonglong)uVar1;
  param_1[0x11] = DAT_14c996660;
  param_1[0x12] = DAT_14c9974a8;
  param_1[0x13] = 0;
  uVar2 = FUN_1401c0c0c(param_2);
  param_1[0x14] = uVar2;
  local_50 = "ConnectionEdgeContacts";
  local_48 = 0x16;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = (ulonglong)uVar1;
  param_1[0x18] = DAT_14c996660;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar2 = FUN_140b35f8c(param_2);
  param_1[0x1b] = uVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b35e94 FUN_140b35e94 body=248 status=ok
// SIG undefined FUN_140b35e94(void)

undefined8 FUN_140b35e94(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = (uint)param_3;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
            (uVar4 >> 4) + (uVar2 << 0x13 | uVar2 & 0xffff);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar7 = (longlong)iVar6 * 0x40;
        lVar1 = lVar5 + lVar7;
        if ((*(longlong *)(lVar5 + lVar7) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar7) == param_3)) break;
        iVar6 = *(int *)(lVar1 + 0x38);
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((char *)(lVar1 + 0x10) == (char *)0x0) {
        return 0;
      }
      if (*(char *)(lVar1 + 0x10) == '\x0e') {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 140b35f8c FUN_140b35f8c body=252 status=ok
// SIG undefined FUN_140b35f8c(void)

undefined8 FUN_140b35f8c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\t')
         ) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 140b36088 FUN_140b36088 body=50 status=ok
// SIG undefined FUN_140b36088(void)

void FUN_140b36088(longlong param_1)

{
  FUN_140b360ba();
  if ((*(longlong *)(param_1 + 0xfb0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xfb0) + 0x9c) & 1) == 0)) {
    FUN_140b506a4();
    return;
  }
  return;
}



// FUNCTION 140b360ba FUN_140b360ba body=307 status=ok
// SIG undefined FUN_140b360ba(void)

void FUN_140b360ba(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406cc694();
  if (*(char *)(param_1 + 0x852) == '\x01') {
    bVar4 = *(int *)(param_1 + 0x688) == 0;
  }
  else {
    bVar4 = false;
  }
  FUN_140b361ee(param_1,bVar4);
  FUN_140b362ea(param_1);
  if (*(char *)(param_1 + 0x870) == '\x01') {
    lVar3 = *(longlong *)(param_1 + 0x868);
LAB_140b3610f:
    if ((DAT_14c950c29 & lVar3 != 0) == 0) {
      if (lVar3 == 0) goto LAB_140b36122;
    }
    else {
      FUN_1456cec3c(lVar3);
    }
    uVar2 = FUN_145990214();
    cVar1 = FUN_144a7ff9e(lVar3,uVar2);
    if (cVar1 != '\0') {
      if (((*(longlong *)(param_1 + 0x878) == 0) || (*(longlong *)(param_1 + 0x880) == 0)) ||
         (*(longlong *)(*(longlong *)(param_1 + 0x878) + 0x10) != lVar3)) {
        local_38 = 0;
        uStack_30 = 0;
        local_40 = 0;
        local_48 = 0;
        local_28 = FUN_140584627(param_1,lVar3,0,0x800040);
        FUN_1474a75e4(param_1 + 0x878);
      }
      FUN_1474a764c(param_1);
      goto LAB_140b3612c;
    }
  }
  else if (*(longlong *)(param_1 + 0x660) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0xb8);
    goto LAB_140b3610f;
  }
LAB_140b36122:
  *(undefined8 *)(param_1 + 0x878) = 0;
  *(undefined8 *)(param_1 + 0x880) = 0;
LAB_140b3612c:
  FUN_1448aa298(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b361ee FUN_140b361ee body=252 status=ok
// SIG undefined FUN_140b361ee(void)

void FUN_140b361ee(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  if (*(char *)((longlong)param_1 + 0x9c) < '\0' != (bool)param_2) {
    cVar2 = (**(code **)(*param_1 + 0x2d8))();
    if (cVar2 != '\0') {
      *(byte *)((longlong)param_1 + 0x9c) =
           *(byte *)((longlong)param_1 + 0x9c) & 0x7f | param_2 << 7;
      uVar1 = param_1[7];
      if (uVar1 < 0xffffffff00000000) {
        plVar6 = (longlong *)0x0;
        if (DAT_14c9980d8 != 0) {
          plVar6 = DAT_14c9980d0;
        }
        (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,0);
      }
      else {
        uVar7 = (uint)uVar1;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
          puVar4 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar4 = DAT_14c998080;
          }
          if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
            lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
            puVar5 = *(uint **)(lVar3 + 0x18);
            if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
              puVar5 = (uint *)(lVar3 + 8);
            }
            *puVar5 = *puVar5 | 1;
            *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
          }
        }
      }
      if (param_1[0x15] != 0) {
        FUN_14092d788(param_1[0x15],param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b362ea FUN_140b362ea body=845 status=ok
// SIG undefined FUN_140b362ea(void)

void FUN_140b362ea(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  undefined8 uStack_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x660) != 0) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_140b36638(*(longlong *)(param_1 + 0xa8),&local_58,0);
      lVar2 = local_58;
      lVar7 = (longlong)(int)uStack_50;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          plVar6 = *(longlong **)(lVar2 + lVar8);
          if (plVar6[4] == param_1) {
            if (plVar6 != (longlong *)0x0) goto LAB_140b36384;
          }
          else if ((plVar6 != (longlong *)0x0) && ((*(uint *)(plVar6[4] + 8) & 0x40000000) != 0)) {
LAB_140b36384:
            if (DAT_14cac1d70 == 0) {
              local_70 = &local_48;
              local_48 = FUN_144b223ce;
              local_60 = FUN_14081d0ea;
              local_68 = FUN_1432411d6;
              local_78 = &LAB_147878f54;
              local_80 = &LAB_1417ad3ba;
              local_88 = L"Engine";
              local_90 = 0;
              local_98 = 0x10000004;
              local_a0 = 0x10;
              local_a8 = 0xb10;
              FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,
                            FUN_14637c2da);
            }
            if ((*(int *)(DAT_14cac1d70 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cac1d70 + 0x38) * 8) ==
                DAT_14cac1d70 + 0x30)) {
              (**(code **)(*plVar6 + 0xb80))(plVar6);
              (**(code **)(*plVar6 + 0x420))(plVar6,0);
            }
          }
          lVar8 = lVar8 + 8;
        } while (lVar7 * 8 != lVar8);
      }
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
    }
    *(undefined4 *)(param_1 + 0xa68) = 0;
    if (*(int *)(param_1 + 0xa6c) != 0) {
      FUN_1474ad5f6(param_1 + 0xa60);
    }
    lVar2 = *(longlong *)(param_1 + 0xa8);
    if (lVar2 != 0) {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x660) + 0xa8);
      if (lVar7 != 0) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0xa0);
        lVar7 = lVar7 * 0x30;
        do {
          lVar4 = FUN_140081d40(lVar8,0);
          if (lVar4 != 0) {
            lVar5 = FUN_1406d0862();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (plVar6 = (longlong *)FUN_1474a8732(param_1), plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 0xa78))(plVar6,lVar4);
              FUN_140ea0802(plVar6,(int)*(float *)(lVar8 + 0x20),(int)*(float *)(lVar8 + 0x24));
              FUN_140381810(plVar6,0);
              (**(code **)(*plVar6 + 0x728))(plVar6,DAT_14cad0f30,1);
              FUN_1417be62e(plVar6,0);
              (**(code **)(*plVar6 + 0x588))(plVar6,1);
              FUN_140486fc4(plVar6,param_1,0);
              FUN_141200de6(lVar2);
              FUN_140b506a4(plVar6);
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(plVar6);
              }
              iVar1 = *(int *)(param_1 + 0xa68);
              uVar3 = iVar1 + 1;
              *(uint *)(param_1 + 0xa68) = uVar3;
              if (*(uint *)(param_1 + 0xa6c) < uVar3) {
                FUN_1474ad626((longlong *)(param_1 + 0xa60));
              }
              *(longlong **)(*(longlong *)(param_1 + 0xa60) + (longlong)iVar1 * 8) = plVar6;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(plVar6);
              }
            }
          }
          lVar8 = lVar8 + 0x30;
          lVar7 = lVar7 + -0x30;
        } while (lVar7 != 0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b36638 FUN_140b36638 body=323 status=ok
// SIG undefined FUN_140b36638(void)

void FUN_140b36638(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1417970e8(param_2,0);
  }
  if (DAT_14cad00c8 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_1479b7a0c;
    local_60 = &LAB_1463b464e;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000005;
    local_80 = 8;
    local_88 = 0x110;
    FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
  }
  local_30 = DAT_14cad00c8;
  if ((DAT_14cad00c8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140b3677c(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3677c FUN_140b3677c body=714 status=ok
// SIG undefined FUN_140b3677c(void)

void FUN_140b3677c(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_140b36963:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_140b367e7:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_140b36a48(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1474acef4(param_1,&local_40,param_4);
      }
      goto LAB_140b36830;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_140b36963;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140b367e7;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1474ad440(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1474ad15c(param_1,&local_50,param_4);
  }
LAB_140b36830:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b36a48 FUN_140b36a48 body=534 status=ok
// SIG undefined FUN_140b36a48(void)

void FUN_140b36a48(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar11 = 0;
    iVar8 = 0;
    iVar7 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x250);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar12 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar12 = uVar11;
      }
      iVar7 = 0;
      do {
        if (uVar12 == uVar11) {
          return;
        }
        iVar7 = iVar7 + 0x20;
        uVar13 = puVar4[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar11 = 0;
      iVar7 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 != iVar2) {
    uVar13 = 0xffffffff;
    iVar3 = iVar2;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar8 * 0x10);
      if (lVar9 != 0) {
        iVar8 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
          FUN_1406ca8e4(param_3,iVar8);
        }
        *(longlong *)(*param_3 + (longlong)iVar8 * 8) = lVar9;
        iVar3 = *(int *)(param_1 + 0x268);
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x250);
      }
      iVar8 = (int)uVar11;
      lVar9 = (longlong)iVar8;
      uVar14 = puVar4[lVar9] & uVar13;
      if (uVar14 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar8 < iVar5) {
          lVar10 = 0;
          do {
            uVar14 = puVar4[lVar9 + lVar10 + 1];
            if (uVar14 != 0) {
              uVar11 = (ulonglong)(iVar8 + (int)lVar10 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140b36bb1;
            }
            iVar7 = iVar7 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar6 - lVar9 != lVar10);
          uVar13 = 0xffffffff;
          iVar8 = iVar6;
        }
        uVar11 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar3;
      }
      else {
LAB_140b36bb1:
        uVar12 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar12 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar8 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar2);
  }
  return;
}



// FUNCTION 140b36c5e FUN_140b36c5e body=1574 status=ok
// SIG undefined FUN_140b36c5e(void)

void FUN_140b36c5e(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  DWORD DVar4;
  int iVar5;
  DWORD dwTlsIndex;
  DWORD DVar6;
  LPVOID lpTlsValue;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  ulonglong local_168;
  longlong local_160;
  int local_158;
  longlong local_150;
  int local_148;
  longlong local_140;
  int local_138;
  longlong local_130;
  int local_128;
  longlong local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  longlong lStack_c8;
  ulonglong local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  longlong lStack_98;
  undefined8 local_90;
  char local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dwTlsIndex = DAT_14c760f84;
  if (DAT_14c760f84 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c760f84 != 0xffffffff;
    DVar4 = dwTlsIndex;
    if (bVar14) {
      DVar6 = DAT_14c760f84;
      DVar4 = DAT_14c760f84;
    }
    DAT_14c760f84 = DVar4;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar6;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14179848e();
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  iVar5 = *(int *)(param_1 + 0x20);
  if ((0 < iVar5) && (iVar5 == *(int *)(param_1 + 0x40))) {
    local_178 = (longlong)lpTlsValue + 0x10;
    local_170 = (longlong)lpTlsValue + 0x110;
    local_180 = (longlong)lpTlsValue + 0x220;
    local_188 = (longlong)lpTlsValue + 0xe0;
    uVar12 = (ulonglong)*(uint *)((longlong)lpTlsValue + 0xd8);
    local_168 = (ulonglong)(int)*(uint *)((longlong)lpTlsValue + 0xd8);
    lVar10 = 0;
    lVar13 = 0;
    iVar11 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + lVar13 * 4);
      if (1e-05 < fVar1) {
        local_190 = CONCAT44(local_190._4_4_,iVar11);
        local_120 = *param_2;
        local_118 = (longlong *)0x0;
        local_110._0_4_ = CONCAT31(local_110._1_3_,1);
        local_110._4_4_ = 0xffffffff;
        uStack_108 = 0xffffffff;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        uStack_e7 = 0;
        local_e0 = 0;
        uStack_dc = 0;
        local_d8 = 0;
        local_d0 = 0;
        lStack_c8 = 0;
        local_c0 = 0;
        lStack_b8 = 0;
        local_b0 = 0;
        lStack_a8 = 0;
        local_a0 = 0;
        lStack_98 = 0;
        local_90 = 0;
        local_88 = (char)param_2[0x13];
        FUN_1447ce2ce();
        local_110._4_4_ = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_108 = (undefined4)param_2[3];
        lVar9 = *(longlong *)(param_1 + 0x18);
        if (*(longlong *)(lVar9 + lVar10) == 0) {
          if (local_88 == '\x01') {
            FUN_142400d60(local_100,uStack_f8 & 0xffffffff);
          }
          else {
            FUN_1448859f0(&local_100,local_f0);
          }
        }
        else {
          uStack_108 = local_110._4_4_;
          local_110._4_4_ = *(undefined4 *)(lVar9 + 8 + lVar10);
          (**(code **)(**(longlong **)(lVar9 + lVar10) + 0x28))
                    (*(longlong **)(lVar9 + lVar10),&local_120);
        }
        iVar11 = (int)local_190;
        puVar7 = (undefined8 *)FUN_1400cc81e(local_178);
        if (puVar7 != &local_100) {
          *puVar7 = local_100;
          local_100 = 0;
          *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_f8;
          *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_f8._4_4_;
          uStack_f8 = 0;
          puVar7[2] = local_f0;
          local_f0 = 0;
        }
        local_190 = uVar12;
        puVar7 = (undefined8 *)FUN_1400cc76a(local_170);
        if (puVar7 != (undefined8 *)&uStack_e8) {
          *puVar7 = CONCAT71(uStack_e7,uStack_e8);
          uStack_e8 = 0;
          uStack_e7 = 0;
          *(undefined4 *)(puVar7 + 1) = local_e0;
          *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_dc;
          local_e0 = 0;
          uStack_dc = 0;
        }
        *(undefined1 *)(puVar7 + 2) = local_d8;
        local_d8 = 0;
        uVar8 = FUN_1400cc7c4(local_180);
        FUN_1447e1642(uVar8,&lStack_c8);
        iVar5 = *(int *)((longlong)lpTlsValue + 0x108);
        *(uint *)((longlong)lpTlsValue + 0x108) = iVar5 + 1U;
        if (*(uint *)((longlong)lpTlsValue + 0x10c) < iVar5 + 1U) {
          FUN_140e79564(local_188,iVar5);
        }
        lVar9 = *(longlong *)((longlong)lpTlsValue + 0x100);
        if (*(longlong *)((longlong)lpTlsValue + 0x100) == 0) {
          lVar9 = local_188;
        }
        *(float *)(lVar9 + (longlong)iVar5 * 4) = fVar1;
        if (lStack_98 != 0) {
          FUN_1400020a8();
        }
        FUN_144716785(lStack_a8,local_a0 & 0xffffffff);
        uVar12 = local_190;
        if (lStack_a8 != 0) {
          FUN_1400020a8();
        }
        FUN_144716758(lStack_b8,local_b0 & 0xffffffff);
        if (lStack_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_144716727(lStack_c8,local_c0 & 0xffffffff);
        if (lStack_c8 != 0) {
          FUN_1400020a8();
        }
        iVar11 = iVar11 + 1;
        iVar5 = *(int *)(param_1 + 0x20);
      }
      uVar3 = local_168;
      lVar2 = local_170;
      lVar9 = local_178;
      lVar13 = lVar13 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar13 < iVar5);
    if (0 < iVar11) {
      local_160 = *(longlong *)((longlong)lpTlsValue + 0xd0);
      if (*(longlong *)((longlong)lpTlsValue + 0xd0) == 0) {
        local_160 = local_178;
      }
      local_150 = *(longlong *)((longlong)lpTlsValue + 0x210);
      if (*(longlong *)((longlong)lpTlsValue + 0x210) == 0) {
        local_150 = local_170;
      }
      local_150 = local_168 * 0x20 + local_150;
      local_140 = *(longlong *)((longlong)lpTlsValue + 0x420);
      if (*(longlong *)((longlong)lpTlsValue + 0x420) == 0) {
        local_140 = local_180;
      }
      local_140 = local_168 * 0x40 + local_140;
      local_130 = *(longlong *)((longlong)lpTlsValue + 0x100);
      if (*(longlong *)((longlong)lpTlsValue + 0x100) == 0) {
        local_130 = local_188;
      }
      local_160 = local_160 + local_168 * 0x18;
      local_130 = local_130 + local_168 * 4;
      local_120 = (longlong)(param_2 + 4);
      local_118 = param_2 + 7;
      local_110 = param_2 + 0xb;
      local_198 = &local_120;
      local_158 = iVar11;
      local_148 = iVar11;
      local_138 = iVar11;
      local_128 = iVar11;
      FUN_1400cc932();
      FUN_142400cf0(param_2[4],(int)param_2[5]);
      FUN_140b37432(lVar9,uVar3 & 0xffffffff);
      FUN_140b37286(lVar2);
      iVar5 = *(int *)((longlong)lpTlsValue + 0x108);
      iVar11 = (int)uVar12;
      if (iVar5 < (int)uVar3) {
        *(int *)((longlong)lpTlsValue + 0x108) = iVar11;
        if ((uint)(*(int *)((longlong)lpTlsValue + 0x10c) - iVar5) < (uint)(iVar11 - iVar5)) {
          FUN_140e79564(local_188);
        }
        lVar10 = local_188;
        if (*(longlong *)((longlong)lpTlsValue + 0x100) != 0) {
          lVar10 = *(longlong *)((longlong)lpTlsValue + 0x100);
        }
        memset((void *)(lVar10 + (longlong)iVar5 * 4),0,(longlong)(iVar11 - iVar5) << 2);
      }
      else {
        if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar12);
        }
        if (iVar11 < iVar5) {
          *(int *)((longlong)lpTlsValue + 0x108) = iVar11;
        }
      }
      FUN_140b3735c(local_180,uVar12 & 0xffffffff);
      goto LAB_140b37101;
    }
  }
  if ((*(char *)(param_1 + 0x50) == '\x01') || ((char)param_2[0x13] == '\x01')) {
    FUN_142400d60(param_2[4],(int)param_2[5]);
  }
  else {
    FUN_1448859f0(param_2 + 4,param_2[6]);
  }
LAB_140b37101:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b37286 FUN_140b37286 body=213 status=ok
// SIG undefined FUN_140b37286(void)

void FUN_140b37286(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x108);
  if (iVar4 < (int)param_2) {
    *(uint *)(param_1 + 0x108) = param_2;
    if ((uint)(*(int *)(param_1 + 0x10c) - iVar4) < param_2 - iVar4) {
      FUN_14091a6d6(param_1,iVar4);
    }
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar2 = param_1;
    }
    FUN_1447e1577((longlong)iVar4 * 0x20 + lVar2,param_2 - iVar4);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar4 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar4) {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar2 = param_1;
      }
      _Dst = (void *)((ulonglong)param_2 * 0x20 + lVar2);
      FUN_1447e163f(_Dst,iVar3);
      iVar1 = *(int *)(param_1 + 0x108) - iVar4;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)iVar3 * 0x20 + (longlong)_Dst),(longlong)iVar1 << 5);
        iVar4 = *(int *)(param_1 + 0x108);
      }
      *(int *)(param_1 + 0x108) = iVar4 - iVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140b3735c FUN_140b3735c body=213 status=ok
// SIG undefined FUN_140b3735c(void)

void FUN_140b3735c(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x208);
  if (iVar4 < (int)param_2) {
    *(uint *)(param_1 + 0x208) = param_2;
    if ((uint)(*(int *)(param_1 + 0x20c) - iVar4) < param_2 - iVar4) {
      FUN_14091a862(param_1,iVar4);
    }
    lVar2 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar2 = param_1;
    }
    FUN_1447e1596((longlong)iVar4 * 0x40 + lVar2,param_2 - iVar4);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar4 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar4) {
      lVar2 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar2 = param_1;
      }
      _Dst = (void *)((ulonglong)param_2 * 0x40 + lVar2);
      FUN_1447e15bf(_Dst,iVar3);
      iVar1 = *(int *)(param_1 + 0x208) - iVar4;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)iVar3 * 0x40 + (longlong)_Dst),(longlong)iVar1 << 6);
        iVar4 = *(int *)(param_1 + 0x208);
      }
      *(int *)(param_1 + 0x208) = iVar4 - iVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140b37432 FUN_140b37432 body=216 status=ok
// SIG undefined FUN_140b37432(void)

void FUN_140b37432(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 200);
  if (iVar4 < (int)param_2) {
    *(uint *)(param_1 + 200) = param_2;
    if ((uint)(*(int *)(param_1 + 0xcc) - iVar4) < param_2 - iVar4) {
      FUN_14099c088(param_1,iVar4);
    }
    lVar2 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar2 = param_1;
    }
    FUN_1447e15a9(lVar2 + (longlong)iVar4 * 0x18,param_2 - iVar4);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar4 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar4) {
      lVar2 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar2 = param_1;
      }
      _Dst = (void *)(lVar2 + (ulonglong)param_2 * 0x18);
      FUN_1447e1640(_Dst,iVar3);
      iVar1 = *(int *)(param_1 + 200) - iVar4;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x18),(longlong)iVar1 * 0x18);
        iVar4 = *(int *)(param_1 + 200);
      }
      *(int *)(param_1 + 200) = iVar4 - iVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140b37562 FUN_140b37562 body=625 status=ok
// SIG undefined FUN_140b37562(void)

void FUN_140b37562(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1409941a6();
  uVar3 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x30));
  fVar9 = (float)FUN_140284960(param_1);
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,3,0x10);
  puVar2 = local_c0;
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_c0[2] = lVar4;
  *local_c0 = &PTR_FUN_14b4aa4c0;
  local_c0[3] = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_c0 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar6 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar6;
  puVar2[4] = FUN_140b37562;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_c0);
  local_68 = 1;
  local_c8 = local_b0;
  local_b0[0] = 0;
  local_ac = 0xbf800000;
  FUN_1406f4044(uVar3,param_1 + 0x308,&local_a8,
                ~-(uint)(0.0 < fVar9) & 0x3dcccccd | (uint)(1.0 / fVar9) & -(uint)(0.0 < fVar9));
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  if (local_b8 != 0) {
    if (local_c0 == (undefined8 *)0x0) goto LAB_140b37704;
    (**(code **)*local_c0)(local_c0,0);
    FUN_1446efa72(&local_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_c0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140b37704:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b377d4 FUN_140b377d4 body=26 status=ok
// SIG undefined FUN_140b377d4(void)

void FUN_140b377d4(undefined8 param_1)

{
  FUN_140b384f8();
  FUN_140b377ee(param_1);
  return;
}



// FUNCTION 140b377ee FUN_140b377ee body=1000 status=ok
// SIG undefined FUN_140b377ee(void)

void FUN_140b377ee(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0) && (param_1[0xec] == 0)) {
    FUN_1402a37f2(param_1,0);
  }
  iVar6 = DAT_14c9647dc;
  if (((*(byte *)(param_1 + 0xf2) & 4) != 0) && ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0))
  {
    if (param_1[0x24] != 0) {
      puVar2 = (uint *)(param_1 + 0xf6);
      if ((((*(int *)((longlong)param_1 + 0x7b4) == 0) || (uVar4 = *puVar2, (int)uVar4 < 0)) ||
          (DAT_14c9647dc <= (int)uVar4)) ||
         (((lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar8 == 0 ||
           (*(int *)(lVar8 + 0x10) != *(int *)((longlong)param_1 + 0x7b4))) ||
          ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) {
        uVar4 = *(uint *)(param_1[0x24] + 0xc);
        *puVar2 = uVar4;
        if ((int)uVar4 < iVar6) {
          lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar6 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar6 = *(int *)(lVar8 + 0x10);
          bVar12 = iVar6 == 0;
          if (bVar12) {
            *(int *)(lVar8 + 0x10) = iVar10;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar6 = iVar10;
          }
        }
        *(int *)((longlong)param_1 + 0x7b4) = iVar6;
      }
      lVar8 = param_1[0xf7];
      if (lVar8 == 0) {
        lVar8 = param_1[0x25];
        param_1[0xf7] = lVar8;
      }
      lVar9 = (longlong)*(int *)(param_1[0x24] + 0x140);
      if (lVar9 != 0) {
        lVar11 = 0;
        do {
          if (*(longlong **)(*(longlong *)(param_1[0x24] + 0x138) + lVar11) == param_1) {
            if (((*(byte *)((longlong)param_1 + 0x9e) & 8) == 0) ||
               (((((char)param_1[0xf8] != '\0' && (*(char *)((longlong)param_1 + 0x7c1) != '\0')) &&
                 (*(char *)((longlong)param_1 + 0x7c2) != '\0')) ||
                ((lVar8 != param_1[0x25] || (cVar5 = FUN_1403e9e5e(puVar2), cVar5 == '\0')))))) {
              local_2c = 0;
              (**(code **)(*param_1 + 0x4a0))(param_1);
            }
            goto LAB_140b3795f;
          }
          lVar11 = lVar11 + 8;
        } while (lVar9 * 8 != lVar11);
      }
      FUN_140486fc4(param_1,0,0);
    }
LAB_140b3795f:
    param_1[0xfc] = param_1[0x35];
    param_1[0xfa] = param_1[0x33];
    param_1[0xfb] = param_1[0x34];
    param_1[0xfd] = param_1[0x36];
    param_1[0xfe] = param_1[0x37];
    param_1[0xff] = param_1[0x38];
    *(int *)(param_1 + 0x100) = (int)param_1[0x39];
    *(undefined4 *)((longlong)param_1 + 0x804) = *(undefined4 *)((longlong)param_1 + 0x1cc);
    *(int *)(param_1 + 0x101) = (int)param_1[0x3a];
    *(undefined4 *)((longlong)param_1 + 0x80c) = *(undefined4 *)((longlong)param_1 + 0x1d4);
    param_1[0x102] = param_1[0x3b];
  }
  if (((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x119) & 1) != 0)) &&
     (plVar7 = param_1, (*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
    do {
      if ((*(uint *)(plVar7 + 1) & 0x30) != 0) goto LAB_140b37833;
      plVar1 = plVar7 + 4;
      plVar7 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
    if (param_1[0x24] == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1[0x24] + 0xa8);
    }
    if (((param_1[0x15] == lVar8) && (param_1[0xb8] == 0)) && ((*(byte *)(param_1 + 0xb9) & 3) != 0)
       ) {
      FUN_140e996a4(param_1);
    }
    lVar8 = param_1[0x16];
    if (((lVar8 != 0) || (lVar8 = FUN_1448abda6(param_1), lVar8 != 0)) &&
       ((((bVar3 = *(byte *)(lVar8 + 0x152), bVar3 == 1 ||
          ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))) && (*(int *)(lVar8 + 0x78c) == 0))
        && ((*(longlong *)(lVar8 + 0x30) != 0 &&
            (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0), lVar8 != 0)))))) {
      (**(code **)(*param_1 + 0x170))(param_1,0,lVar8,5);
    }
  }
LAB_140b37833:
  FUN_1448aa298(param_1);
  if ((((param_1[0x22] == 0) && (param_1[0x15] == 0)) && (param_1[0x24] != 0)) &&
     ((*(uint *)(param_1[0x24] + 8) >> 0x1e & 1) == 0)) {
    lVar8 = FUN_14494250a();
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x2e8);
    }
    param_1[0x22] = lVar8;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b37bd8 FUN_140b37bd8 body=212 status=ok
// SIG undefined FUN_140b37bd8(void)

undefined4 FUN_140b37bd8(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xef;
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar3 = switchD_143c3d4dc::caseD_34();
  if (lVar1 == *(longlong *)(param_1 + 0x18)) {
    bVar5 = lVar2 == *(longlong *)(param_1 + 0x20);
  }
  else {
    bVar5 = false;
  }
  if (((!bVar5) && ((param_4 & 2) == 0)) && ((*(byte *)(param_1 + 0x9d) & 0x10) == 0)) {
    FUN_144750a86(param_1,&local_40,0,0);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Engine/Private/Components/ActorComponent.cpp",0x2d7,
                  L"%s failed to route PostRename.  Please call Super::PostRename() in your <className>::PostRename() function. "
                  ,puVar4);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140b37cae caseD_34 body=2120 status=ok
// SIG undefined caseD_34(void)

undefined8
switchD_143c3d4dc::caseD_34(longlong *param_1,longlong param_2,longlong *param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  code *pcVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  wchar_t *local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  wchar_t *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code **local_2b0;
  code *local_2a8;
  code *local_2a0;
  wchar_t *local_298;
  undefined8 uStack_290;
  wchar_t *local_288;
  undefined8 uStack_280;
  undefined8 local_270;
  code *local_268;
  code *local_260;
  code *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if ((param_3 != (longlong *)0x0) && ((longlong *)param_1[4] != param_3)) {
    plVar4 = param_3;
    if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
LAB_140b37e09:
      plVar5 = plVar4;
      plVar4 = plVar5;
      if ((longlong *)plVar5[4] != (longlong *)0x0) goto code_r0x000140b37e18;
      goto LAB_140b37e2a;
    }
    goto LAB_140b37cfd;
  }
  goto LAB_140b380aa;
code_r0x000140b37e18:
  plVar4 = (longlong *)plVar5[4];
  if ((*(uint *)(plVar5 + 1) >> 0x1c & 1) == 0) goto LAB_140b37e09;
  plVar4 = (longlong *)FUN_142840154(plVar5);
LAB_140b37e2a:
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)plVar5[4];
    goto LAB_140b37e09;
  }
  if (plVar4 == DAT_14c951640) {
LAB_140b37cfd:
    iVar3 = *(int *)((longlong)param_1 + 0xc);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    iVar2 = iVar3 + 0xffff;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    if ((iVar2 >> 0x10 < DAT_14c964390) &&
       (lVar7 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar2 >> 0x10) * 0x10), lVar7 != 0)) {
      lVar7 = *(longlong *)(lVar7 + (longlong)(iVar3 % 0x10000) * 0x10);
    }
    else {
      lVar7 = 0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    iVar3 = *(int *)((longlong)param_3 + 0xc);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    iVar2 = iVar3 + 0xffff;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    if ((iVar2 >> 0x10 < DAT_14c964390) &&
       (lVar12 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar2 >> 0x10) * 0x10), lVar12 != 0))
    {
      lVar12 = *(longlong *)(lVar12 + (longlong)(iVar3 % 0x10000) * 0x10);
    }
    else {
      lVar12 = 0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    if (((param_4 >> 9 & 1) == 0) && (lVar7 != lVar12)) {
      plVar4 = param_1;
      if (lVar12 == 0) {
LAB_140b38037:
        plVar5 = plVar4;
        plVar4 = plVar5;
        if ((longlong *)plVar5[4] != (longlong *)0x0) goto code_r0x000140b38046;
        goto LAB_140b3805c;
      }
      goto LAB_140b38097;
    }
    goto LAB_140b380aa;
  }
  lVar7 = *(longlong *)(param_1[2] + 0xe0);
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
  }
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) goto LAB_140b37cfd;
  if ((param_4 & 2) == 0) {
    local_268 = *(code **)(*(longlong *)(param_1[2] + 0xe0) + 0x18);
    FUN_1400021e4(&local_268,&local_288);
    pwVar10 = local_288;
    if ((int)uStack_280 == 0) {
      pwVar10 = L"";
    }
    local_298 = (wchar_t *)0x0;
    uStack_290 = 0;
    FUN_14005eb28(&local_298,0x80);
    local_268 = (code *)local_248;
    local_250 = '\0';
    local_258 = (code *)&local_48;
    local_270 = *(undefined8 *)(param_3[2] + 0x18);
    local_260 = local_268;
    FUN_14005eb5c(&local_270,&local_268);
    if (local_258 <= local_260 + 2) {
      FUN_140213274(&local_268,1);
    }
    *(wchar_t *)local_260 = L' ';
    local_260 = local_260 + 2;
    FUN_144750bde(param_3,0,&local_268);
    FUN_1400020e8(&local_298,local_268,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
    if (local_250 == '\x01') {
      FUN_1400020a8(local_268);
    }
    pwVar9 = L"";
    if ((int)uStack_290 != 0) {
      pwVar9 = local_298;
    }
    FUN_144750a86(param_1,&local_268,0,0);
    pcVar13 = (code *)&DAT_149dfb77a;
    if ((int)local_260 != 0) {
      pcVar13 = local_268;
    }
    local_2e8 = pwVar9;
    local_2e0 = pwVar10;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Obj.cpp",0xf7,
                  L"Cannot rename %s into Outer %s as it is not of type %s",pcVar13);
    if (local_268 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_298 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_288 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_140b37cfd;
  }
  goto LAB_140b382c5;
code_r0x000140b38046:
  plVar4 = (longlong *)plVar5[4];
  if ((*(uint *)(plVar5 + 1) >> 0x1c & 1) != 0) {
    plVar4 = (longlong *)FUN_142840154(plVar5);
LAB_140b3805c:
    plVar1 = param_3;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)plVar5[4];
      goto LAB_140b38037;
    }
    goto LAB_140b3806b;
  }
  goto LAB_140b38037;
LAB_140b3806b:
  plVar8 = plVar1;
  plVar5 = plVar8;
  if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x000140b3807a;
  goto LAB_140b3808d;
code_r0x000140b3807a:
  plVar1 = (longlong *)plVar8[4];
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0) goto LAB_140b3806b;
  plVar5 = (longlong *)FUN_142840154(plVar8);
LAB_140b3808d:
  if (plVar5 == (longlong *)0x0) {
    plVar1 = (longlong *)plVar8[4];
    goto LAB_140b3806b;
  }
  if (plVar4 != plVar5) {
LAB_140b38097:
    FUN_1400f84b8(param_1,0,0xffffffff,1);
  }
LAB_140b380aa:
  if (param_2 == 0) {
LAB_140b3824d:
    uVar6 = 1;
    if ((param_4 & 2) != 0) goto LAB_140b383e1;
  }
  else {
    if ((param_4 & 0x40) == 0) {
      plVar4 = param_3;
      if (param_3 == (longlong *)0x0) {
        plVar4 = (longlong *)param_1[4];
      }
      plVar4 = (longlong *)FUN_140277b32(0,plVar4,param_2,1);
    }
    else {
      local_2e8 = (wchar_t *)0x0;
      plVar4 = (longlong *)FUN_140277cc4(0,param_2,2,0);
    }
    if (plVar4 != param_1) {
      if (plVar4 != (longlong *)0x0) {
        if ((param_4 & 2) != 0) {
LAB_140b382c5:
          uVar6 = 0;
          goto LAB_140b383e1;
        }
        local_288 = (wchar_t *)0x0;
        uStack_280 = 0;
        FUN_14005eb28(&local_288,0x80);
        local_268 = (code *)local_248;
        local_250 = '\0';
        local_258 = (code *)&local_48;
        local_298 = *(wchar_t **)(plVar4[2] + 0x18);
        local_260 = local_268;
        FUN_14005eb5c(&local_298,&local_268);
        if (local_258 <= local_260 + 2) {
          FUN_140213274(&local_268,1);
        }
        *(wchar_t *)local_260 = L' ';
        local_260 = local_260 + 2;
        FUN_144750bde(plVar4,0,&local_268);
        FUN_1400020e8(&local_288,local_268,
                      (ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
        if (local_250 == '\x01') {
          FUN_1400020a8(local_268);
        }
        pwVar10 = L"";
        if ((int)uStack_280 != 0) {
          pwVar10 = local_288;
        }
        FUN_144750a86(param_1,&local_268,0,0);
        pcVar13 = (code *)&DAT_149dfb77a;
        if ((int)local_260 != 0) {
          pcVar13 = local_268;
        }
        local_2e8 = pwVar10;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Obj.cpp",300,
                      L"Renaming an object (%s) on top of an existing object (%s) is not allowed",
                      pcVar13);
        if (local_268 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_288 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_140b3824d;
    }
    local_288 = (wchar_t *)plVar4[3];
    FUN_1400021e4(&local_288,&local_268);
    FUN_140056680(&local_288,param_2);
    pwVar10 = local_288;
    if ((int)local_260 == (int)uStack_280) {
      bVar14 = true;
      if (1 < (int)local_260) {
        iVar3 = wcscmp((wchar_t *)local_268,local_288);
        bVar14 = iVar3 == 0;
      }
    }
    else {
      bVar14 = (int)uStack_280 + (int)local_260 == 1;
    }
    if (pwVar10 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar10);
    }
    if (local_268 != (code *)0x0) {
      FUN_1400020a8();
    }
    uVar6 = 1;
    if ((char)((param_4 & 2) >> 1) != '\0' || bVar14) goto LAB_140b383e1;
  }
  pcVar13 = (code *)param_1[3];
  if ((char)((param_4 & 4) >> 2) == '\0' && param_3 != (longlong *)0x0) {
    FUN_14282b7b8(param_3);
  }
  FUN_1402ab580();
  if (param_2 == 0) {
    if (param_3 == (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    else {
      local_2e0 = (wchar_t *)((ulonglong)local_2e0 & 0xffffffff00000000);
      local_2e8 = (wchar_t *)((ulonglong)local_2e8 & 0xffffffff00000000);
      lVar7 = FUN_14283d079(0,param_3,pcVar13,0);
      plVar4 = param_3;
      pcVar11 = pcVar13;
      if (lVar7 == 0) goto LAB_140b383a5;
    }
    local_2e8 = (wchar_t *)(CONCAT44(local_2e8._4_4_,param_4 >> 5) & 0xffffffff00000002);
    FUN_140af9fb2(&local_268,plVar4,param_1[2],0);
    pcVar11 = local_268;
  }
  else {
    FUN_1446f470e(&local_268,param_2,1);
    pcVar11 = local_268;
  }
LAB_140b383a5:
  lVar7 = param_1[4];
  if (((*(uint *)(param_1 + 1) & 1) != 0) && (DAT_14c951858 == 0)) {
    local_2b0 = &local_268;
    local_268 = FUN_1449e2820;
    local_2a0 = FUN_14081d0ea;
    local_2a8 = FUN_14081d0ea;
    local_2b8 = &LAB_1468c5283;
    local_2c0 = FUN_142809da0;
    local_2c8 = L"Engine";
    local_2d0 = 0x400000000;
    local_2d8 = 0x10000000;
    local_2e0 = (wchar_t *)CONCAT44(local_2e0._4_4_,8);
    local_2e8 = (wchar_t *)CONCAT44(local_2e8._4_4_,0x50);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  FUN_14282b3cc(param_1,pcVar11,param_3);
  FUN_1402ab5f2();
  (**(code **)(*param_1 + 0xe0))(param_1,lVar7,pcVar13);
  uVar6 = 1;
LAB_140b383e1:
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140b384f8 FUN_140b384f8 body=1994 status=ok
// SIG undefined FUN_140b384f8(void)

void FUN_140b384f8(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  code **ppcVar9;
  longlong lVar10;
  code *pcVar11;
  undefined ***pppuVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  bool bVar21;
  undefined1 auStack_258 [40];
  code **local_230;
  longlong local_228;
  longlong *local_220;
  code *local_218;
  undefined ***local_208;
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  code *local_1d8;
  undefined ***local_1c8;
  undefined **local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  code *local_198;
  longlong *local_190;
  undefined8 local_188 [6];
  code *local_158;
  int local_150;
  undefined8 local_148;
  undefined **local_138;
  code *local_130;
  longlong local_128;
  code **local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(longlong *)(param_1 + 0x8d8) == 0) ||
     (plVar6 = *(longlong **)(param_1 + 0xa8), plVar6 == (longlong *)0x0)) goto LAB_140b38a9c;
  uVar5 = FUN_1401fa540();
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_140b38a9c;
  uVar5 = FUN_1401fa540();
  plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
  if (((plVar6 == plVar7) || (plVar7 == (longlong *)0x0)) ||
     (lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar8 == 0)) goto LAB_140b38a9c;
  lVar18 = *(longlong *)(param_1 + 0xa8);
  if (*(int *)(lVar8 + 0x20) == 0) {
LAB_140b38b81:
    lVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0x1c);
    lVar10 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(lVar8 + 0x20) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))
         ) goto LAB_140b38b81;
      lVar10 = *plVar6;
    }
  }
  if ((lVar18 != 0) && (lVar10 == 0)) {
    lVar10 = FUN_140f4df0c(lVar18);
    cVar4 = '\x01';
    if ((lVar10 != 0) && ((*(byte *)(lVar18 + 0x60) & 2) != 0)) {
      cVar4 = FUN_1401b0ffe(lVar10);
    }
    if (cVar4 == '\x01' && lVar10 != 0) {
      local_158 = (code *)&LAB_1487bb792;
      local_150 = 0;
      FUN_1487bb692(lVar10 + 0x28,&local_198,param_1);
    }
  }
  FUN_140457ffc(lVar8,param_1);
  local_158 = (code *)0x0;
  local_150 = 0;
  FUN_1446efa72(&local_158,0,3,0x10);
  pcVar3 = local_158;
  local_150 = 3;
  *(undefined ***)local_158 = &PTR_LAB_14b3e7b60;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar18 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar18 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar18;
  *(longlong *)(local_158 + 0x10) = lVar10;
  *(undefined ***)local_158 = &PTR_FUN_14b3e73c0;
  *(undefined8 *)(local_158 + 0x18) = 0;
  iVar15 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_158 + 0x18) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar15 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar15 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar15;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar15 = *(int *)(lVar18 + 0x10);
      bVar21 = iVar15 == 0;
      if (bVar21) {
        *(int *)(lVar18 + 0x10) = iVar16;
        iVar15 = 0;
      }
      UNLOCK();
      if (bVar21) {
        iVar15 = iVar16;
      }
    }
  }
  *(int *)(pcVar3 + 0x1c) = iVar15;
  *(undefined1 **)(pcVar3 + 0x20) = &LAB_145c1cbde;
  *(undefined4 *)(pcVar3 + 0x28) = 0;
  FUN_140f4dcf0(lVar8,&local_198,&local_158);
  local_230 = &local_158;
  if (local_150 == 0) {
LAB_140b386fe:
    if (local_158 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_158 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    local_150 = 0;
    goto LAB_140b386fe;
  }
  FUN_140b38f58(lVar8,&local_198);
  pcVar3 = local_198;
  if (local_198 == (code *)0x0) {
    puVar20 = (uint *)0x0;
  }
  else {
    if ((((local_198[0x70] == (code)0x0) &&
         (local_198[0x70] = (code)0x1, *(longlong *)(local_198 + 0x10) != 0)) &&
        (cVar4 = FUN_144729dda(), cVar4 != '\0')) &&
       ((*(longlong **)(pcVar3 + 0x10) != (longlong *)0x0 &&
        (lVar18 = (**(code **)(**(longlong **)(pcVar3 + 0x10) + 0x10))(), lVar18 != 0)))) {
      local_148 = 0;
      local_138 = &PTR_LAB_14b3e7330;
      local_130 = pcVar3;
      local_158 = FUN_143c9a1ac;
      local_128 = lVar18;
      FUN_145774382();
    }
    if (*(int *)(pcVar3 + 0x80) != *(int *)(pcVar3 + 0xac)) {
      lVar18 = *(longlong *)(param_1 + 0x8d8);
      uVar2 = (uint)((ulonglong)lVar18 >> 0x10);
      uVar13 = (uint)lVar18 & 0xffff;
      pcVar11 = pcVar3 + 0xb0;
      if (*(code **)(pcVar3 + 0xb8) != (code *)0x0) {
        pcVar11 = *(code **)(pcVar3 + 0xb8);
      }
      iVar15 = *(int *)(pcVar11 +
                       (ulonglong)
                       (*(int *)(pcVar3 + 0xc0) - 1U &
                       (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar13) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar13 >> 4)) * 4);
      if (iVar15 != -1) {
        do {
          lVar10 = *(longlong *)(pcVar3 + 0x78) + (longlong)iVar15 * 0x68;
          if (*(longlong *)(*(longlong *)(pcVar3 + 0x78) + (longlong)iVar15 * 0x68) == lVar18)
          goto LAB_140b387c4;
          iVar15 = *(int *)(lVar10 + 0x60);
        } while (iVar15 != -1);
      }
    }
    lVar10 = 0;
LAB_140b387c4:
    puVar20 = (uint *)(lVar10 + 8);
    if (lVar10 == 0) {
      puVar20 = (uint *)0x0;
    }
  }
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_190 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)local_190 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_190 + 0x10))(local_190);
      }
    }
  }
  if (puVar20 == (uint *)0x0) {
    FUN_1409d23de(param_1,0,1);
    goto LAB_140b38a9c;
  }
  if (puVar20[1] == 0) {
LAB_140b38b88:
    uVar5 = 0;
  }
  else {
    uVar2 = *puVar20;
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar14 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar14 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar14 + 2) != puVar20[1] || ((*(uint *)(puVar14 + 1) & 0x10200000) != 0))))
      goto LAB_140b38b88;
      uVar5 = *puVar14;
    }
  }
  FUN_1409d23de(param_1,uVar5,1);
  if (puVar20[4] != puVar20[0xf]) {
    local_208 = (undefined ***)0x0;
    local_1f8 = &PTR_FUN_14b3e7430;
    local_218 = FUN_143c9a914;
    local_1f0 = param_1;
    uStack_1e8 = puVar20;
    FUN_140f874f6(lVar8,&local_228);
    if (local_228 != 0) {
      local_1d8 = FUN_143c9a914;
      local_1c8 = (undefined ***)0x0;
      local_1b8 = &PTR_FUN_14b3e7430;
      local_1b0 = (undefined4)local_1f0;
      uStack_1ac = local_1f0._4_4_;
      uStack_1a8 = (undefined4)uStack_1e8;
      uStack_1a4 = uStack_1e8._4_4_;
      local_58 = (code **)0x0;
      local_4c = 0x20;
      lVar18 = *(longlong *)(lVar8 + 0x40);
      if (lVar18 != 0) {
        local_50 = 0;
        uVar5 = FUN_140b38cc4();
        plVar6 = (longlong *)FUN_1403566f4(lVar18,uVar5);
        lVar18 = plVar6[1];
        if ((longlong)(int)lVar18 != 0) {
          lVar10 = *plVar6;
          lVar17 = 0;
          do {
            pcVar3 = *(code **)(lVar10 + lVar17);
            uVar5 = FUN_140b38cc4();
            if ((pcVar3 != (code *)0x0) &&
               (cVar4 = FUN_1448093f4(pcVar3,uVar5), uVar2 = local_50, cVar4 != '\0')) {
              lVar19 = (longlong)(int)local_50;
              local_50 = local_50 + 1;
              if (local_4c < local_50) {
                FUN_14577441c(&local_158,uVar2);
              }
              ppcVar9 = local_58;
              if (local_58 == (code **)0x0) {
                ppcVar9 = &local_158;
              }
              ppcVar9[lVar19] = pcVar3;
            }
            lVar17 = lVar17 + 8;
          } while ((longlong)(int)lVar18 * 8 != lVar17);
          lVar18 = (longlong)(int)local_50;
          if (local_58 != (code **)0x0) {
            local_230 = local_58;
          }
          if (lVar18 != 0) {
            lVar10 = 0;
            do {
              uVar5 = *(undefined8 *)((longlong)local_230 + lVar10);
              local_198 = local_1d8;
              local_188[0] = 0;
              if (local_1d8 != (code *)0x0) {
                pppuVar12 = local_1c8;
                if (local_1c8 == (undefined ***)0x0) {
                  pppuVar12 = &local_1b8;
                }
                (*(code *)**pppuVar12)(pppuVar12,local_188);
              }
              puVar14 = (undefined8 *)(*(longlong *)(lVar8 + 0x40) + 0x18);
              if (*(longlong *)(lVar8 + 0x40) == 0) {
                puVar14 = &DAT_14caa8558;
              }
              FUN_140b38cfe(uVar5,puVar14,&local_198);
              lVar10 = lVar10 + 8;
            } while (lVar18 * 8 != lVar10);
          }
          if (local_58 != (code **)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_1d8 != (code *)0x0) {
        pppuVar12 = &local_1b8;
        if (local_1c8 != (undefined ***)0x0) {
          pppuVar12 = local_1c8;
        }
        (*(code *)(*pppuVar12)[2])(pppuVar12);
      }
    }
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_220 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar1 = (int *)((longlong)local_220 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_220 + 0x10))(local_220);
        }
      }
    }
    if (local_218 != (code *)0x0) {
      pppuVar12 = local_208;
      if (local_208 == (undefined ***)0x0) {
        pppuVar12 = &local_1f8;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
LAB_140b38a9c:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b38cc4 FUN_140b38cc4 body=57 status=ok
// SIG undefined FUN_140b38cc4(void)

void FUN_140b38cc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb587c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb587c0 = FUN_140002ddd(FUN_1464c2178,uVar1,L"GbxActorPartDef_Material");
  }
  return;
}



// FUNCTION 140b38cfe FUN_140b38cfe body=383 status=ok
// SIG undefined FUN_140b38cfe(void)

void FUN_140b38cfe(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  undefined8 local_a8 [6];
  longlong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0x80;
  uStack_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_b8[0] = *param_3;
  local_a8[0] = 0;
  if (local_b8[0] != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(0,local_a8);
  }
  FUN_143c955d6(param_1,param_2,local_b8,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  uVar1 = uStack_70 >> 0x20;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_14472eb64(&local_78,0);
  }
  uStack_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    FUN_1446efbd8(local_68,0);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b38e7e FUN_140b38e7e body=218 status=ok
// SIG undefined FUN_140b38e7e(void)

void FUN_140b38e7e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (*param_2 != 0) {
    uVar4 = FUN_1415ae43e();
    plVar5 = (longlong *)FUN_1403566f4(param_1,uVar4);
    if ((longlong)(int)plVar5[1] != 0) {
      plVar9 = (longlong *)*plVar5;
      plVar5 = plVar9 + (int)plVar5[1];
      do {
        plVar1 = (longlong *)*plVar9;
        if (plVar1 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar1 + 8))(plVar1);
          lVar7 = FUN_1415ae43e();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            pcVar2 = (code *)*param_2;
            plVar8 = (longlong *)param_2[2];
            if ((longlong *)param_2[2] == (longlong *)0x0) {
              plVar8 = param_2 + 4;
            }
            uVar4 = (**(code **)(*plVar8 + 8))();
            cVar3 = (*pcVar2)(uVar4,plVar1);
            if (cVar3 == '\0') break;
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar5);
    }
    if (*param_2 != 0) {
      plVar5 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[2];
      }
                    /* WARNING: Could not recover jumptable at 0x000140b38f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140b38f58 FUN_140b38f58 body=717 status=ok
// SIG undefined FUN_140b38f58(void)

longlong * FUN_140b38f58(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  uint local_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x20) == 0) {
LAB_140b390e3:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  uVar4 = *(uint *)(param_1 + 0x1c);
  if (((((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) ||
      (lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar8 == 0)) ||
     (((*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x20) ||
       ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) ||
      ((*(longlong *)(param_1 + 0x30) == 0 || (*(int *)(param_1 + 0x2c) == 0))))))
  goto LAB_140b390e3;
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) ||
     ((lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar8 == 0 ||
      (((*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x2c) ||
        ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) || (lVar8 = FUN_140b39226(), lVar8 == 0))))))
  goto LAB_140b390e3;
  uStack_3c = 0;
  local_40 = *(uint *)(lVar8 + 0xc);
  if ((int)local_40 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  uVar4 = *(uint *)(lVar8 + 0x10);
  if (*(uint *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    uVar7 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar7);
    }
    LOCK();
    uVar4 = *(uint *)(lVar8 + 0x10);
    bVar10 = uVar4 == 0;
    if (bVar10) {
      *(uint *)(lVar8 + 0x10) = uVar7;
      uVar4 = 0;
    }
    UNLOCK();
    if (bVar10) {
      uVar4 = uVar7;
    }
  }
  uStack_3c = uVar4;
  plVar5 = (longlong *)FUN_1407699b8(param_1 + 0x50,uVar4 ^ local_40);
  if (*plVar5 != 0) goto LAB_140b390b5;
  plVar6 = (longlong *)FUN_145774494((uint *)(param_1 + 0x1c),(uint *)(param_1 + 0x28));
  if (plVar6 == (longlong *)0x0) {
    *plVar5 = 0x10;
    plVar9 = (longlong *)plVar5[1];
    if (plVar9 == (longlong *)0x0) goto LAB_140b390b5;
    plVar5[1] = 0;
LAB_140b391af:
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (plVar6 == (longlong *)0x0) goto LAB_140b390b5;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *plVar5 = (longlong)(plVar6 + 2);
    plVar9 = (longlong *)plVar5[1];
    if (plVar6 == plVar9) {
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    else {
      plVar5[1] = (longlong)plVar6;
      if (plVar9 != (longlong *)0x0) goto LAB_140b391af;
    }
  }
  LOCK();
  plVar9 = plVar6 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_140b390b5:
  *param_2 = *plVar5;
  lVar8 = plVar5[1];
  param_2[1] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b39226 FUN_140b39226 body=57 status=ok
// SIG undefined FUN_140b39226(void)

void FUN_140b39226(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58870 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58870 = FUN_140002ddd(FUN_1464c2a3e,uVar1,L"GbxActorPartState_Niagara");
  }
  return;
}



// FUNCTION 140b39260 FUN_140b39260 body=150 status=ok
// SIG undefined FUN_140b39260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b39260(ushort param_1)

{
  undefined *puVar1;
  
  if ((DAT_14cb7f870 == 0) || (*(int *)(DAT_14cb7f870 + 0x388) <= (int)(uint)param_1)) {
    puVar1 = &DAT_14cb7f91c;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7f92c) {
      FUN_144b3d300(&DAT_14cb7f92c);
      if (DAT_14cb7f92c == -1) {
        DAT_14cb7f91c = 0;
        _DAT_14cb7f920 = 0;
        _DAT_14cb7f928 = 0x3f400000;
        _Init_thread_footer(&DAT_14cb7f92c);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)param_1 * 0x10 + *(longlong *)(DAT_14cb7f870 + 0x380));
  }
  return puVar1;
}



// FUNCTION 140b392fb FUN_140b392fb body=138 status=ok
// SIG undefined FUN_140b392fb(void)

void FUN_140b392fb(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14069cc7b(&local_28,param_1);
  if (local_28 != 0) {
    FUN_140b39396(local_28 + 0x470,param_1);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b39396 FUN_140b39396 body=133 status=ok
// SIG undefined FUN_140b39396(void)

void FUN_140b39396(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 8);
  FUN_140b3941c(plVar1,&local_24,param_2);
  if ((longlong)local_24 != -1) {
    puVar2 = *(undefined8 **)(*plVar1 + 8 + (longlong)local_24 * 0x18);
    FUN_140b394a0(plVar1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      bVar3 = FUN_140b39584(puVar2);
      *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar3;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3941c FUN_140b3941c body=132 status=ok
// SIG undefined FUN_140b3941c(void)

void FUN_140b3941c(longlong *param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_3) goto LAB_140b3949d;
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_140b3949d:
  *param_2 = iVar2;
  return;
}



// FUNCTION 140b394a0 FUN_140b394a0 body=91 status=ok
// SIG undefined FUN_140b394a0(void)

void FUN_140b394a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140b394fc(param_1,param_2,1);
  return;
}



// FUNCTION 140b394fc FUN_140b394fc body=136 status=ok
// SIG undefined FUN_140b394fc(void)

void FUN_140b394fc(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b39584 FUN_140b39584 body=180 status=ok
// SIG undefined FUN_140b39584(void)

undefined8 FUN_140b39584(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 < 0xb) {
    if ((0x50U >> (uVar2 & 0x1f) & 1) == 0) {
      if ((0x602U >> (uVar2 & 0x1f) & 1) == 0) goto LAB_140b395ac;
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar4 != 0) goto LAB_140b39629;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar4 != 0) goto LAB_140b39629;
      *(undefined4 *)(param_1 + 8) = 1;
    }
LAB_140b395ff:
    uVar3 = 0;
  }
  else {
LAB_140b395ac:
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
LAB_140b39629:
      if (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)(iVar4 + -1) * 4) == 3)
      goto LAB_140b395ff;
    }
    plVar5 = (longlong *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 0x2c);
    iVar4 = 0;
    if ((int)uVar2 < 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      FUN_147e674e0(plVar5);
      iVar4 = *(int *)(param_1 + 0x28);
      uVar2 = *(uint *)(param_1 + 0x2c);
    }
    *(uint *)(param_1 + 0x28) = iVar4 + 1U;
    if (uVar2 < iVar4 + 1U) {
      FUN_140b39638(plVar5,iVar4);
    }
    lVar1 = *plVar5;
    *(undefined4 *)(lVar1 + (longlong)iVar4 * 4) = 3;
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 140b39638 FUN_140b39638 body=353 status=ok
// SIG undefined FUN_140b39638(void)

void FUN_140b39638(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b396bd;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140b396bd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 140b3979a FUN_140b3979a body=12 status=ok
// SIG undefined FUN_140b3979a(void)

void FUN_140b3979a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140b397a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140b397a6 FUN_140b397a6 body=31 status=ok
// SIG undefined FUN_140b397a6(void)

undefined8 FUN_140b397a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b397c6 FUN_140b397c6 body=61 status=ok
// SIG undefined FUN_140b397c6(void)

void FUN_140b397c6(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14577453c(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b39804 FUN_140b39804 body=104 status=ok
// SIG undefined FUN_140b39804(void)

undefined8 FUN_140b39804(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_140b3986e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3986e FUN_140b3986e body=42 status=ok
// SIG undefined FUN_140b3986e(void)

undefined8 FUN_140b3986e(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb89ba8;
  if ((((DAT_14cb89ba8 == (longlong *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) ||
     (*param_1 == DAT_14c948000)) {
    return 0;
  }
  if (*(code **)(*DAT_14cb89ba8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb89ba8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb89ba8[0x3a] <= *(int *)((longlong)DAT_14cb89ba8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb89ba8 + 0x300))(DAT_14cb89ba8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 140b3989e FUN_140b3989e body=258 status=ok
// SIG undefined FUN_140b3989e(void)

ulonglong FUN_140b3989e(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar6 = &DAT_14c7601ec;
  if ((iVar1 / 9 & 0x80000001U) == 1) {
    piVar6 = &DAT_14c7601dc;
  }
  iVar2 = *piVar6;
  iVar5 = 3;
  if (iVar2 < 3) {
    iVar5 = iVar2;
  }
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),2);
  if (((iVar1 / 3) % 3 == iVar4 + -1) && ((iVar1 / 0x24) % 3 == DAT_14c9c9af8)) {
    uVar3 = (ulonglong)
            (byte)((((iVar1 / 0x6c & 0x80000001U) != 1) == (DAT_14c760204 != 0)) * '\x02');
    if (iVar1 % 3 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 140b399a0 FUN_140b399a0 body=1505 status=ok
// SIG undefined FUN_140b399a0(void)

undefined8 FUN_140b399a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 ****ppppuVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar19;
  undefined8 uVar18;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ushort local_b8;
  byte local_b0;
  char local_a8 [8];
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined1 local_88;
  int local_80;
  undefined8 ***local_78;
  longlong lStack_70;
  undefined8 local_68;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar14 = *(longlong *)(param_1 + 0x40);
  if (lVar14 == 0) {
    lVar7 = 0;
    local_a0 = 0;
LAB_140b39ea4:
    local_98 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_140b39d30:
      lVar7 = 0;
    }
    else {
      uVar6 = *(uint *)(lVar14 + 0x48);
      lVar7 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_140b39d30;
        lVar7 = *plVar12;
      }
    }
    plVar12 = *(longlong **)(lVar14 + 0x118);
    local_a0 = param_1;
    if (plVar12 == (longlong *)0x0) goto LAB_140b39ea4;
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
    bVar15 = false;
    local_98 = plVar12;
  }
  plVar12 = local_98;
  local_80 = 0;
  local_a8[0] = '\x03';
  local_90._0_4_ = 0;
  if (lVar7 == 0) {
    iVar5 = 0;
    uVar6 = (uint)local_90;
  }
  else {
    uVar6 = *(uint *)(lVar7 + 0xc);
    local_90 = (ulonglong)uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar5 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar5 = *(int *)(lVar14 + 0x10);
      bVar16 = iVar5 == 0;
      if (bVar16) {
        *(int *)(lVar14 + 0x10) = iVar10;
        iVar5 = 0;
      }
      UNLOCK();
      uVar6 = (uint)local_90;
      if (bVar16) {
        iVar5 = iVar10;
      }
    }
  }
  local_90._0_4_ = uVar6;
  local_90 = CONCAT44(iVar5,(uint)local_90);
  local_88 = 2;
  if (local_80 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_80 + -1,1);
    local_80 = 0;
  }
  if (!bVar15) {
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    puVar9 = &local_d0;
    FUN_1447c3578(param_2 + 0x88,puVar9,local_a8);
    if (local_b0 == 4) {
      local_d8 = local_c0;
      local_e8 = (undefined8 ****)CONCAT44(uStack_cc,local_d0);
      uStack_e0 = CONCAT44(uStack_c4,uStack_c8);
      bVar15 = true;
      uVar6 = 4;
    }
    else {
      FUN_1400b56fe(&local_78,&local_d0,4);
      bVar15 = local_58 != 0;
      if (bVar15) {
        local_d8 = local_68;
        local_e8 = (undefined8 ****)local_78;
        uStack_e0 = lStack_70;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar13 = &local_78;
        if (0x18 < local_60) {
          ppppuVar13 = (undefined8 ****)local_78;
        }
        (*pcVar3)(ppppuVar13);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78);
      }
      uVar6 = (uint)local_b0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_b8) {
        puVar9 = (undefined4 *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar3)(puVar9);
    }
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
    }
    if (!bVar15) goto LAB_140b39d19;
  }
  else {
    lVar14 = FUN_140343d7a(param_1);
    if (lVar14 == 0) {
LAB_140b39d19:
      uVar18 = 0x7f7fffff;
      goto LAB_140b39bfc;
    }
    lVar14 = *(longlong *)(lVar14 + 0x1c8);
    if (lVar14 == 0) {
      plVar12 = &DAT_14c8464e0;
      uVar17 = (undefined4)DAT_14c8464f0;
      uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar17 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
      plVar12 = (longlong *)(lVar14 + 0x260);
    }
    local_e8 = (undefined8 ****)*plVar12;
    uStack_e0 = plVar12[1];
    local_d8 = CONCAT44(uVar19,uVar17);
  }
  uVar18 = 0x7f7fffff;
  if (((((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) &&
        (uVar18 = 0x7f7fffff, *(int *)(param_1 + 0xdc) != 0)) &&
       (uVar6 = *(uint *)(param_1 + 0xd8), uVar18 = 0x7f7fffff, -1 < (int)uVar6)) &&
      ((uVar18 = 0x7f7fffff, (int)uVar6 < DAT_14c9647dc &&
       (lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), uVar18 = 0x7f7fffff,
       lVar14 != 0)))) &&
     ((uVar18 = 0x7f7fffff, *(int *)(lVar14 + 0x10) == *(int *)(param_1 + 0xdc) &&
      ((uVar18 = 0x7f7fffff, (*(uint *)(lVar14 + 8) & 0x10200000) == 0 &&
       (lVar14 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))(), uVar18 = 0x7f7fffff,
       lVar14 != 0)))))) {
    local_78 = *(undefined8 ****)(lVar14 + 0x260);
    lStack_70 = *(longlong *)(lVar14 + 0x268);
    local_68 = *(undefined8 *)(lVar14 + 0x270);
    if (*(char *)(param_2 + 0x80) == '\x02') {
      lVar7 = 0x758;
    }
    else if (*(char *)(param_2 + 0x80) == '\x01') {
      lVar7 = 0x878;
      if ((*(char *)(lVar14 + 0x999) == '\x01') &&
         (lVar7 = 0x758, *(char *)(lVar14 + 0x998) == '\0')) {
        lVar7 = 0x638;
      }
    }
    else {
      lVar7 = 0x638;
    }
    uVar18 = FUN_140b39f82(lVar14 + lVar7,&local_78,&local_e8);
  }
LAB_140b39bfc:
  lVar14 = DAT_14c9a3da0;
  if ((longlong)local_80 != 0) {
    lVar7 = (longlong)local_80 + -1;
    lVar11 = lVar7 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar14 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar14 = DAT_14c9a3da0;
    iVar5 = (int)lVar7;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
    }
    *(undefined4 *)(lVar14 + lVar11) = 0xffffffff;
    iVar10 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar10 = DAT_14c9a3dd0;
    }
    *(int *)(lVar14 + 4 + lVar11) = iVar10;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar10 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar10 = iVar5;
    }
    bVar4 = (byte)lVar7 & 0x1f;
    DAT_14c9a3dd0 = iVar5;
    *(uint *)(puVar8 + (longlong)(iVar10 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar10 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_80 = 0;
  }
  if ((local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_98 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 140b39f82 FUN_140b39f82 body=570 status=ok
// SIG undefined FUN_140b39f82(void)

undefined8 FUN_140b39f82(float *param_1,double *param_2,double *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Db;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_d8 [40];
  float local_b0 [6];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x46) == '\0') {
    if (*param_1 <= 0.0) {
      fVar8 = 3.4028235e+38;
    }
    else {
      dVar6 = SQRT((*param_3 - *param_2) * (*param_3 - *param_2) +
                   (param_3[1] - param_2[1]) * (param_3[1] - param_2[1])) - (double)*param_1;
      dVar7 = 0.0;
      if (0.0 <= dVar6) {
        dVar7 = dVar6;
      }
      fVar8 = (float)dVar7;
      if (*(char *)((longlong)param_1 + 0x119) == '\x01') {
        dVar6 = (double)(param_1[1] * -0.5) + ABS(param_3[2] - param_2[2]);
        dVar7 = 0.0;
        if (0.0 <= dVar6) {
          dVar7 = dVar6;
        }
        fVar8 = SQRT((float)dVar7 * (float)dVar7 + fVar8 * fVar8);
      }
    }
    fVar9 = param_1[4];
    if ((longlong)(int)fVar9 != 0) {
      lVar3 = *(longlong *)(param_1 + 2);
      lVar4 = 0;
      do {
        local_b0[0] = 0.0;
        if (*(longlong *)(lVar3 + lVar4) != 0) {
          local_88 = param_3[2];
          local_98 = *(undefined4 *)param_3;
          uStack_94 = *(undefined4 *)((longlong)param_3 + 4);
          uStack_90 = *(undefined4 *)(param_3 + 1);
          uStack_8c = *(undefined4 *)((longlong)param_3 + 0xc);
          FUN_140056702(*(longlong *)(lVar3 + lVar4),&local_98,0,local_b0);
          if (local_b0[0] < fVar8) {
            fVar8 = local_b0[0];
          }
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)fVar9 * 8 != lVar4);
    }
    uVar5 = 0;
    if ((longlong)(int)param_1[0x10] != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe);
      lVar4 = (longlong)(int)param_1[0x10] << 3;
      fVar9 = fVar8;
      do {
        plVar2 = (longlong *)FUN_14479d2ce(lVar3);
        fVar8 = fVar9;
        if (plVar2 != (longlong *)0x0) {
          local_74 = -1.0;
          cVar1 = (**(code **)(*plVar2 + 0x7c0))(plVar2,param_3,&local_74,local_b0);
          fVar8 = -1.0;
          uVar5 = 0;
          if (cVar1 != '\0') {
            uVar5 = 0;
            if (local_74 < 0.0) {
              fVar8 = sqrtf(local_74);
              uVar5 = extraout_XMM0_Db;
            }
            else {
              fVar8 = SQRT(local_74);
            }
          }
          if (fVar9 <= fVar8) {
            fVar8 = fVar9;
          }
        }
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
        fVar9 = fVar8;
      } while (lVar4 != 0);
    }
  }
  else {
    fVar8 = 0.0;
    uVar5 = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar5,fVar8);
}



// FUNCTION 140b3a1cc FUN_140b3a1cc body=31 status=ok
// SIG undefined FUN_140b3a1cc(void)

undefined8 FUN_140b3a1cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b3a1ec FUN_140b3a1ec body=95 status=ok
// SIG undefined FUN_140b3a1ec(void)

void FUN_140b3a1ec(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_140b3a24c(param_1,param_2,1);
  return;
}



// FUNCTION 140b3a24c FUN_140b3a24c body=136 status=ok
// SIG undefined FUN_140b3a24c(void)

void FUN_140b3a24c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b3a2d4 FUN_140b3a2d4 body=61 status=ok
// SIG undefined FUN_140b3a2d4(void)

void FUN_140b3a2d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_140b3a311(lVar1,*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b3a311 FUN_140b3a311 body=75 status=ok
// SIG undefined FUN_140b3a311(void)

void FUN_140b3a311(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b3a35c FUN_140b3a35c body=240 status=ok
// SIG undefined FUN_140b3a35c(void)

undefined8 *
FUN_140b3a35c(undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,float param_6,float param_7)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14c84635c;
  local_58 = param_5;
  FUN_140b3a44e(param_1);
  *param_1 = &PTR_FUN_149f57478;
  *(float *)(param_1 + 7) = param_6;
  fVar2 = logf(param_6);
  *(float *)((longlong)param_1 + 0x3c) = fVar2;
  param_1[8] = 0;
  fVar2 = param_2[1];
  if (param_7 <= param_2[1]) {
    fVar2 = param_7;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = *param_2;
  if (param_7 <= *param_2) {
    fVar3 = param_7;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  bVar1 = 1;
  if ((*(float *)(param_1 + 5) == fVar3) && (!NAN(*(float *)(param_1 + 5)) && !NAN(fVar3))) {
    bVar1 = -(*(float *)((longlong)param_1 + 0x2c) != fVar2) & 1;
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | bVar1;
  *(float *)(param_1 + 5) = fVar3;
  *(float *)((longlong)param_1 + 0x2c) = fVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3a44e FUN_140b3a44e body=299 status=ok
// SIG undefined FUN_140b3a44e(void)

undefined8 *
FUN_140b3a44e(undefined8 *param_1,undefined8 *param_2,longlong *param_3,uint param_4,uint param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  
  *param_1 = &PTR_FUN_149f57480;
  plVar1 = param_1 + 1;
  plVar2 = param_1 + 3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = *param_2;
  *(undefined1 *)(param_1 + 6) = 1;
  if (((int)param_4 < 1) || (*(uint *)(param_3 + 1) != param_4)) {
    *(undefined4 *)(param_1 + 2) = 1;
    FUN_1447403be(plVar1,0);
    *(undefined1 *)param_1[1] = 0;
    iVar3 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x24) == iVar3) {
      FUN_14475e4ac(plVar2,iVar3);
    }
    *(undefined4 *)(*plVar2 + (longlong)iVar3 * 4) = 0;
  }
  else {
    *(uint *)(param_1 + 2) = param_4;
    uVar4 = 0;
    FUN_1447403be(plVar1,0);
    do {
      fVar5 = *(float *)(*param_3 + uVar4 * 4);
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      *(char *)(*plVar1 + uVar4) = (char)(int)(fVar5 * (float)(int)(param_5 - 1));
      uVar4 = uVar4 + 1;
    } while (param_4 != uVar4);
    iVar3 = *(int *)(param_1 + 4);
    *(uint *)(param_1 + 4) = iVar3 + param_5;
    if ((uint)(*(int *)((longlong)param_1 + 0x24) - iVar3) < param_5) {
      FUN_14475e4ac(plVar2);
    }
    memset((void *)((longlong)iVar3 * 4 + *plVar2),0,(longlong)(int)param_5 << 2);
  }
  return param_1;
}



// FUNCTION 140b3a57a FUN_140b3a57a body=1189 status=ok
// SIG undefined FUN_140b3a57a(void)

void FUN_140b3a57a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  longlong local_178;
  int local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8;
  char local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar2 = param_1;
LAB_140b3a5b5:
  lVar5 = lVar2;
  lVar2 = lVar5;
  if (*(longlong *)(lVar5 + 0x20) != 0) goto code_r0x000140b3a5c4;
  goto LAB_140b3a5d2;
code_r0x000140b3a5c4:
  lVar2 = *(longlong *)(lVar5 + 0x20);
  if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_140b3a5b5;
  lVar2 = FUN_142840154(lVar5);
LAB_140b3a5d2:
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(lVar5 + 0x20);
    goto LAB_140b3a5b5;
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) goto LAB_140b3a8c4;
  uStack_d8 = 0;
  uStack_d7 = 0;
  uStack_d0 = 0;
  local_e8 = 0.0;
  uStack_e0 = 0;
  uStack_df = 0;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_108 = 0;
  dStack_100 = 0.0;
  local_118 = 0;
  uStack_110 = 0;
  FUN_140056680(&local_c8,L"Uncategorized");
  local_b8 = 0;
  uStack_b0 = 0xc35000000000;
  local_a8 = '\x01';
  local_a0 = '\0';
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x748) != 0) {
    local_1c8 = *(undefined8 *)(lVar2 + 0x18);
    lVar5 = FUN_147db1978();
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x18);
      puVar7 = &local_118;
      for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_144a787a6(&local_c8,lVar5 + 0x68);
      local_b8 = *(undefined8 *)(lVar5 + 0x78);
      uStack_b0 = *(undefined8 *)(lVar5 + 0x80);
      local_a8 = *(char *)(lVar5 + 0x88);
      local_a0 = *(char *)(lVar5 + 0x90);
      FUN_144a787a6(&local_98,lVar5 + 0x98);
      FUN_147db827c(&local_88,lVar5 + 0xa8);
      local_78 = *(int *)(lVar5 + 0xb8);
    }
  }
  uStack_188 = 0;
  uStack_187 = 0;
  uStack_180 = 0;
  local_198 = 0.0;
  uStack_190 = 0;
  uStack_18f = 0;
  local_1a8 = 0.0;
  dStack_1a0 = 0.0;
  local_1b8 = 0;
  dStack_1b0 = 0.0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  FUN_140056680(&local_178);
  local_168 = 0;
  uStack_160 = 0xc35000000000;
  local_158 = 1;
  local_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  if (((((int)local_118 != (int)local_1c8) || (local_118._4_4_ != local_1c8._4_4_)) ||
      ((int)uStack_110 != (int)uStack_1c0)) ||
     (((0.5 < ABS(dStack_100 - dStack_1b0) || (0.5 < ABS(local_f8 - local_1a8))) ||
      ((0.5 < ABS(dStack_f0 - dStack_1a0) ||
       ((0.5 < ABS(local_e8 - local_198) ||
        (0.5 < ABS((double)CONCAT71(uStack_df,uStack_e0) - (double)CONCAT71(uStack_18f,uStack_190)))
        ))))))) {
LAB_140b3a9ce:
    cVar1 = '\0';
  }
  else {
    cVar1 = '\0';
    if ((ABS((double)CONCAT71(uStack_d7,uStack_d8) - (double)CONCAT71(uStack_187,uStack_188)) <= 0.5
        ) && ((uint)uStack_90 < 2)) {
      if (local_c0 == local_170) {
        if (1 < local_c0) {
          lVar5 = 0;
          while( true ) {
            uVar8 = *(ushort *)(local_c8 + lVar5);
            uVar9 = (ulonglong)uVar8;
            uVar10 = *(ushort *)(local_178 + lVar5);
            if (uVar8 != uVar10) break;
            if (uVar8 == 0) goto LAB_140b3a82a;
LAB_140b3a7fa:
            lVar5 = lVar5 + 2;
          }
          if ((uVar10 | uVar8) < 0x80) {
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar10;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_140b3a7fa;
          }
          if (uVar8 != uVar10) goto LAB_140b3a9ce;
        }
      }
      else if (local_170 + local_c0 != 1) goto LAB_140b3a9ce;
LAB_140b3a82a:
      cVar1 = '\0';
      if ((((uStack_b0._4_4_ == 50000) && (local_a8 != '\0')) && (local_a0 == '\0')) &&
         ((local_78 == 0 && ((int)uStack_80 == 0)))) {
        cVar1 = FUN_140b3aa20(local_88,0,0);
      }
    }
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    uVar3 = FUN_14001cc68(0xa8,0x10);
    FUN_147dba96e(uVar3,&local_118);
    local_1d0 = uVar3;
    FUN_143797428(lVar2);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_140b3a8c4:
  if ((local_70 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3aa20 FUN_140b3aa20 body=46 status=ok
// SIG undefined FUN_140b3aa20(void)

bool FUN_140b3aa20(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      param_3 = param_3 + -1;
      bVar2 = *(int *)(param_1 + lVar1) == *(int *)(param_2 + lVar1);
      if (!bVar2) {
        return bVar2;
      }
      lVar1 = lVar1 + 0x14;
    } while (param_3 != 0);
  }
  return bVar2;
}



// FUNCTION 140b3aa4e FUN_140b3aa4e body=163 status=ok
// SIG undefined FUN_140b3aa4e(void)

void FUN_140b3aa4e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_20 = FUN_140b3ab00();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  lVar2 = FUN_14009ee5c(uVar1,&local_20);
  FUN_1447ba426(*(longlong *)(param_1 + 0x28) + 0x3e0,*(undefined2 *)(param_1 + 0x34),
                *(undefined2 *)(lVar2 + 0x34));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) == 0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 140b3ab00 FUN_140b3ab00 body=228 status=ok
// SIG undefined FUN_140b3ab00(void)

longlong FUN_140b3ab00(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6180 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_14769f545;
    local_40 = FUN_1417a70aa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneTransformOriginInstantiatorSystem",
                  &DAT_14cab6180,&DAT_14769f544);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6180;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3abf4 FUN_140b3abf4 body=54 status=ok
// SIG undefined FUN_140b3abf4(void)

undefined8 * FUN_140b3abf4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7cdc50;
  FUN_140b3ac2a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b3ac2a FUN_140b3ac2a body=176 status=ok
// SIG undefined FUN_140b3ac2a(void)

void FUN_140b3ac2a(longlong *param_1)

{
  FUN_140abf09f(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140b3acda(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140b3acda(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140b3ad09(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140b3ad34(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140b3acda FUN_140b3acda body=47 status=ok
// SIG undefined FUN_140b3acda(void)

void FUN_140b3acda(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b3ad09 FUN_140b3ad09 body=43 status=ok
// SIG undefined FUN_140b3ad09(void)

void FUN_140b3ad09(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140b3ad34 FUN_140b3ad34 body=47 status=ok
// SIG undefined FUN_140b3ad34(void)

void FUN_140b3ad34(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b3ad64 FUN_140b3ad64 body=26 status=ok
// SIG undefined FUN_140b3ad64(void)

undefined8 FUN_140b3ad64(longlong param_1)

{
  FUN_140b3ad7e();
  return *(undefined8 *)(param_1 + 0x660);
}



// FUNCTION 140b3ad7e FUN_140b3ad7e body=67 status=ok
// SIG undefined FUN_140b3ad7e(void)

void FUN_140b3ad7e(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x660) == 0) {
    lVar1 = FUN_140b3adc2();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x660) = lVar1;
  }
  return;
}



// FUNCTION 140b3adc2 FUN_140b3adc2 body=195 status=ok
// SIG undefined FUN_140b3adc2(void)

longlong FUN_140b3adc2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  GUID local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = 0;
  lVar1 = param_1;
  do {
    if (lVar1 == 0) {
LAB_140b3adfb:
      local_40 = 0;
      local_48 = 0;
      lVar1 = FUN_140c9d4a9(param_1,0,uVar2,0);
      local_38.Data1 = 0;
      local_38.Data2 = 0;
      local_38.Data3 = 0;
      local_38.Data4[0] = '\0';
      local_38.Data4[1] = '\0';
      local_38.Data4[2] = '\0';
      local_38.Data4[3] = '\0';
      local_38.Data4[4] = '\0';
      local_38.Data4[5] = '\0';
      local_38.Data4[6] = '\0';
      local_38.Data4[7] = '\0';
      CoCreateGuid(&local_38);
      *(ulong *)(lVar1 + 0xe8) = local_38.Data1;
      *(undefined4 *)(lVar1 + 0xec) = local_38._4_4_;
      *(undefined4 *)(lVar1 + 0xf0) = local_38.Data4._0_4_;
      *(undefined4 *)(lVar1 + 0xf4) = local_38.Data4._4_4_;
      *(byte *)(lVar1 + 0xb8) = *(byte *)(lVar1 + 0xb8) & 0xb7 | 8;
      *(char *)(lVar1 + 0x31) = (*(char *)(param_1 + 0x658) != '\0') * '\x03';
      if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return lVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
      uVar2 = 0x21;
      goto LAB_140b3adfb;
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
  } while( true );
}



// FUNCTION 140b3ae8c FUN_140b3ae8c body=57 status=ok
// SIG undefined FUN_140b3ae8c(void)

void FUN_140b3ae8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb579b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb579b8 = FUN_140002ddd(FUN_1464bdf6d,uVar1,L"FactsSystemActorReference");
  }
  return;
}



// FUNCTION 140b3aec6 FUN_140b3aec6 body=345 status=ok
// SIG undefined FUN_140b3aec6(void)

void FUN_140b3aec6(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  undefined *puVar2;
  bool bVar3;
  
  if ((int)param_3 < 1) {
    return;
  }
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    puVar2 = *(undefined **)(param_5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                    FUN_140b31576);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c951a90 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
          if (puVar2 == &DAT_14c951a90) break;
        } while (puVar2 != (undefined *)0x0);
      }
      if (!bVar3) goto LAB_140b3af33;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c951a98) == 0) goto LAB_140b3af33;
    param_5 = *(longlong *)(param_5 + 0x78);
  }
LAB_140b3af33:
  uVar1 = (ulonglong)param_3;
  do {
    FUN_140b3b020(param_1,param_2,param_4,param_5);
    param_2 = param_2 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}



// FUNCTION 140b3b020 FUN_140b3b020 body=366 status=ok
// SIG undefined FUN_140b3b020(void)

void FUN_140b3b020(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  
  if (*param_2 == 0) {
    return;
  }
  if ((param_4 != 0) && ((*(uint *)(*param_2 + 8) & 0x1000000) == 0)) {
    puVar2 = *(undefined **)(param_4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
      FUN_1446f4b16();
      FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0,0x4018001,0,&DAT_14c951c78,
                    FUN_1403a5f94);
      atexit(FUN_1428170e8);
      _Init_thread_footer(&DAT_14c952478);
    }
    if (DAT_14c952430 == 0) {
      bVar3 = puVar2 != (undefined *)0x0;
      if (puVar2 != &DAT_14c952428 && bVar3) {
        do {
          puVar2 = *(undefined **)(puVar2 + 0x30);
          bVar3 = puVar2 != (undefined *)0x0;
        } while (puVar2 != &DAT_14c952428 && bVar3);
      }
      if (!bVar3) goto LAB_140b3b0ce;
    }
    else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c952430) == 0) goto LAB_140b3b0ce;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                      (*(longlong **)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18));
    if (cVar1 != '\0') {
      return;
    }
  }
LAB_140b3b0ce:
                    /* WARNING: Could not recover jumptable at 0x000140b3b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
            (*(longlong **)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}



// FUNCTION 140b3b18e thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b3b194 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b3b1a8 FUN_140b3b1a8 body=31 status=ok
// SIG undefined FUN_140b3b1a8(void)

undefined8 FUN_140b3b1a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b3b1c8 FUN_140b3b1c8 body=746 status=ok
// SIG undefined FUN_140b3b1c8(void)

void FUN_140b3b1c8(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  longlong *local_60;
  undefined *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_64 = param_2;
  if (0 < *(int *)(param_3 + 0x110)) {
    lVar9 = 0;
    do {
      local_60 = (longlong *)
                 CONCAT44(local_60._4_4_,
                          *(undefined4 *)(*(longlong *)(param_3 + 0x108) + 4 + lVar9 * 8));
      FUN_140db0a94(*(longlong *)(param_1 + 0x2e8) + 0x50,local_4c,&local_60,0);
      FUN_1403458a2(*(longlong *)(param_1 + 0x2e8) + 0xa0,&local_60,
                    lVar9 * 8 + *(longlong *)(param_3 + 0x108));
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_3 + 0x110));
  }
  if ((*(byte *)(param_3 + 0xf5) & 4) != 0) {
    puVar8 = (undefined *)(param_3 + 0x118);
    if (*(undefined **)(param_3 + 0x128) != (undefined *)0x0) {
      puVar8 = *(undefined **)(param_3 + 0x128);
    }
    if ((longlong)*(int *)(param_3 + 0x130) != 0) {
      lVar9 = (longlong)*(int *)(param_3 + 0x130) << 2;
      do {
        local_60 = (longlong *)&local_64;
        local_58 = puVar8;
        FUN_147bf2890(param_1 + 0x468,local_4c,&local_60);
        puVar8 = puVar8 + 4;
        lVar9 = lVar9 + -4;
      } while (lVar9 != 0);
    }
  }
  if (0 < *(int *)(param_3 + 0x100)) {
    lVar9 = 0;
    do {
      plVar3 = *(longlong **)(param_1 + 0x2e8);
      plVar5 = (longlong *)(*(longlong *)(param_3 + 0xf8) + lVar9 * 8);
      iVar2 = (int)plVar3[1];
      iVar4 = *(int *)((longlong)plVar3 + 0x34);
      if (iVar2 != iVar4) {
        lVar1 = *plVar5;
        plVar7 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar3[8];
        }
        iVar6 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)plVar3[9] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17)
                        * 4);
        if (iVar6 != -1) {
          do {
            if (*(longlong *)(*plVar3 + (longlong)iVar6 * 0x18) == lVar1) goto LAB_140b3b29e;
            iVar6 = *(int *)(*plVar3 + (longlong)iVar6 * 0x18 + 0x10);
          } while (iVar6 != -1);
        }
      }
      local_58 = &DAT_14a9f7568;
      local_60 = plVar5;
      FUN_14085bf06(plVar3,local_4c);
      plVar3 = *(longlong **)(param_1 + 0x2e8);
      iVar2 = (int)plVar3[1];
      iVar4 = *(int *)((longlong)plVar3 + 0x34);
LAB_140b3b29e:
      if (iVar2 != iVar4) {
        lVar1 = *(longlong *)(*(longlong *)(param_3 + 0xf8) + lVar9 * 8);
        plVar5 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar3[8];
        }
        iVar2 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)plVar3[9] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17)
                        * 4);
        if (iVar2 != -1) {
          do {
            plVar5 = (longlong *)(*plVar3 + (longlong)iVar2 * 0x18);
            if (*plVar5 == lVar1) goto LAB_140b3b305;
            iVar2 = (int)plVar5[2];
          } while (iVar2 != -1);
        }
      }
      plVar5 = (longlong *)0x0;
LAB_140b3b305:
      if ((int)plVar5[1] == -2) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x130) + 0xa4) & 2) == 0) {
          *(undefined4 *)(plVar5 + 1) = local_64;
          FUN_140b3b4b4(param_1 + 0x1e8,lVar9 * 8 + *(longlong *)(param_3 + 0xf8));
        }
        else {
          *(undefined4 *)(plVar5 + 1) = 0xffffffff;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_3 + 0x100));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b3b4b4 FUN_140b3b4b4 body=105 status=ok
// SIG undefined FUN_140b3b4b4(void)

void FUN_140b3b4b4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140b3b51e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 140b3b51e FUN_140b3b51e body=353 status=ok
// SIG undefined FUN_140b3b51e(void)

void FUN_140b3b51e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b3b5a3;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140b3b5a3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140b3b680 FUN_140b3b680 body=130 status=ok
// SIG undefined FUN_140b3b680(void)

undefined8 FUN_140b3b680(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x3f0);
  if ((DAT_14c7601a0 == 0) && (1 < (int)uVar1)) {
LAB_140b3b6fe:
    uVar3 = 0;
  }
  else {
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        cVar2 = FUN_140b3b702();
        if (cVar2 == '\0') goto LAB_140b3b6fe;
        lVar4 = lVar4 + 0x13c10;
      } while ((ulonglong)uVar1 * 0x13c10 - lVar4 != 0);
    }
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                     *(int *)(*(longlong *)(param_1 + 8) + 0x4588) != 0);
  }
  return uVar3;
}



// FUNCTION 140b3b702 FUN_140b3b702 body=110 status=ok
// SIG undefined FUN_140b3b702(void)

bool FUN_140b3b702(undefined8 param_1,ushort param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((DAT_14c76019c != 0) && (0 < DAT_14c7601a4)) {
    if ((DAT_14ca84df0 == '\0') &&
       (((DAT_14ca84f11 != '\x01' || (3 < DAT_14c760db4)) &&
        ((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)param_2 * 0x3c + 1) & 2) != 0)))) {
      puVar1 = &DAT_14ca96c28;
      if (DAT_14ca96c78 != (undefined4 *)0x0) {
        puVar1 = DAT_14ca96c78;
      }
      bVar2 = ((uint)puVar1[param_2 >> 5] >> (param_2 & 0x1f) & 1) != 0;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



// FUNCTION 140b3b770 FUN_140b3b770 body=29 status=ok
// SIG undefined FUN_140b3b770(void)

void FUN_140b3b770(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140b3b78e FUN_140b3b78e body=73 status=ok
// SIG undefined FUN_140b3b78e(void)

undefined8 * FUN_140b3b78e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b478ce0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b3b830 FUN_140b3b830 body=109 status=ok
// SIG undefined FUN_140b3b830(void)

void FUN_140b3b830(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x968) & 0x40) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x968) = *(byte *)(param_1 + 0x968) & 0xbf | param_2 << 6;
  if (param_2 == '\0') {
    FUN_140b3b8ec(param_1 + 0x530);
  }
  else {
    FUN_1409b5cf2();
    if ((*(byte *)(param_1 + 100) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9a1) = 1;
      FUN_14022e476(param_1);
    }
  }
  FUN_140b3becc(param_1);
  FUN_140b3b89e(param_1);
  return;
}



// FUNCTION 140b3b89e FUN_140b3b89e body=78 status=ok
// SIG undefined FUN_140b3b89e(void)

void FUN_140b3b89e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x968) & 0xc0) == 0x40) {
    FUN_140b3c604(param_1);
    lVar1 = *(longlong *)(param_1 + 0x790);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 1;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x790);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 0;
  }
  FUN_14045627c(lVar1,uVar2,1);
  return;
}



// FUNCTION 140b3b8ec FUN_140b3b8ec body=106 status=ok
// SIG undefined FUN_140b3b8ec(void)

void FUN_140b3b8ec(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 8))) &&
      ((*(longlong *)(param_1 + 0x20) != 0 && (*(int *)(param_1 + 0x1c) != 0)))) &&
     ((uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      FUN_140b3b956(param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 140b3b956 FUN_140b3b956 body=146 status=ok
// SIG undefined FUN_140b3b956(void)

void FUN_140b3b956(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140b3b99b;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      uVar7 = FUN_140b3b9e8(param_1);
      FUN_140b3bb3e(lVar4,uVar7);
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
LAB_140b3b99b:
    plVar3 = (longlong *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 140b3b9e8 FUN_140b3b9e8 body=321 status=ok
// SIG undefined FUN_140b3b9e8(void)

undefined8 FUN_140b3b9e8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x14))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      if (DAT_14cb6f900 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1487a9c57;
        local_50 = FUN_146541d03;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900,&DAT_1487a9c56);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3bb3e FUN_140b3bb3e body=861 status=ok
// SIG undefined FUN_140b3bb3e(void)

void FUN_140b3bb3e(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  ulonglong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = param_2;
  FUN_1409b622a(param_1 + 0x40);
  if (*(int *)(&DAT_00001868 + param_1) != *(int *)(param_1 + 0x18a4)) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = param_1 + 0x18a8;
    if (*(longlong *)(param_1 + 0x1aa8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1aa8);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x1ab0) - 1U & (uVar5 >> 0x10 ^ uVar5))
                             * 4);
    if (iVar7 != -1) {
      lVar6 = param_1 + 0x60;
      if (*(longlong *)(&DAT_00001860 + param_1) != 0) {
        lVar6 = *(longlong *)(&DAT_00001860 + param_1);
      }
      do {
        puVar1 = (ulonglong *)(lVar6 + (longlong)iVar7 * 0x18);
        if (*puVar1 == param_2) {
          if (((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) &&
             (uVar3 = puVar1[1], uVar3 != 0)) {
            iVar7 = *(int *)(uVar3 + 0x100);
            if ((longlong)iVar7 != 0) {
              lVar6 = *(longlong *)(uVar3 + 0xf8);
              lVar9 = 0;
              do {
                iVar2 = *(int *)(lVar6 + 4 + lVar9);
                if (((((iVar2 != 0) && (uVar5 = *(uint *)(lVar6 + lVar9), -1 < (int)uVar5)) &&
                     (((int)uVar5 < DAT_14c9647dc &&
                      ((plVar8 = (longlong *)
                                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar2)))))) &&
                    ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
                   ((*plVar8 != 0 && (*(longlong *)(lVar6 + 8 + lVar9) != 0)))) {
                  FUN_14480f766(*plVar8 + 0x200);
                }
                lVar9 = lVar9 + 0x10;
              } while ((longlong)iVar7 * 0x10 != lVar9);
            }
            *(undefined4 *)(uVar3 + 0x100) = 0;
            if (*(int *)(uVar3 + 0x104) != 0) {
              FUN_140b3be9c(uVar3 + 0xf8);
            }
            if ((*(longlong **)(uVar3 + 0x10) != (longlong *)0x0) &&
               (lVar6 = (**(code **)(**(longlong **)(uVar3 + 0x10) + 8))(), lVar6 != 0)) {
              if (DAT_14cac9ca8 == 0) {
                local_60 = &local_38;
                local_38 = FUN_141030f22;
                local_50 = FUN_14081d0ea;
                local_58 = FUN_14081d0ea;
                local_68 = &LAB_1478c0a72;
                local_70 = &LAB_1417b2375;
                local_78 = L"Engine";
                local_80 = 0x1000000000;
                local_88 = 0x10000004;
                local_90 = 8;
                local_98 = 0x390;
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              }
              if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
                if (*(longlong *)(uVar3 + 0x110) == 0) {
                  if (*(longlong *)(uVar3 + 0x118) != 0) goto LAB_140b3bd44;
                }
                else {
                  FUN_14480f766(lVar6 + 0x300);
                  if (*(longlong *)(uVar3 + 0x118) != 0) {
LAB_140b3bd44:
                    FUN_14480f766(lVar6 + 0x318);
                  }
                  *(undefined8 *)(uVar3 + 0x110) = 0;
                  *(undefined8 *)(uVar3 + 0x118) = 0;
                }
                if (*(longlong *)(uVar3 + 0x108) != 0) {
                  lVar6 = FUN_14080eed4(uVar3);
                  if (((lVar6 != 0) && (lVar9 = *(longlong *)(uVar3 + 0x108), lVar9 != 0)) &&
                     (cVar4 = FUN_14480f766(lVar6 + 0x40,lVar9), cVar4 == '\0')) {
                    FUN_14480f766(lVar6 + 0x58,lVar9);
                  }
                  *(undefined8 *)(uVar3 + 0x108) = 0;
                }
              }
            }
            FUN_1409b61be(param_1 + 0x50,&local_40);
          }
          break;
        }
        iVar7 = (int)puVar1[2];
      } while (iVar7 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b3be9c FUN_140b3be9c body=48 status=ok
// SIG undefined FUN_140b3be9c(void)

void FUN_140b3be9c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 140b3becc FUN_140b3becc body=1432 status=ok
// SIG undefined FUN_140b3becc(void)

void FUN_140b3becc(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  code *local_a0;
  char *local_98;
  int *local_90;
  undefined8 *local_88;
  int local_80;
  char local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) goto LAB_140b3c135;
  lVar12 = *(longlong *)(param_1 + 0x4e8);
  lVar6 = FUN_14081cebe();
  if ((((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) || (lVar12 == 0)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30)) || ((*(char *)(lVar12 + 0xd4) != '\x01' || (*(int *)(lVar12 + 0x138) < 0)))
     ) goto LAB_140b3c135;
  local_79 = FUN_140b3c466(param_1 + 0x538);
  local_80 = *(int *)(lVar12 + 0x138);
  if (DAT_14cb83100 == '\0') {
    DAT_14cb83100 = '\x01';
    FUN_1457745e8(&local_68);
  }
  lVar6 = *(longlong *)(param_1 + 0x168);
  if (lVar6 == 0) {
LAB_140b3bf95:
    lVar6 = FUN_1447210f0(param_1);
    if (((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x1f0), lVar6 != 0)) &&
       (0 < *(int *)(lVar6 + 0x40))) {
      lVar11 = 0;
      do {
        plVar13 = *(longlong **)(*(longlong *)(lVar6 + 0x38) + lVar11 * 8);
        if (plVar13 != (longlong *)0x0) {
          lVar7 = FUN_140628492();
          if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)) && (plVar13[6] != 0)) {
            uVar5 = (**(code **)(*plVar13 + 0x370))(plVar13);
            puVar8 = (undefined8 *)FUN_140945fa2(lVar12 + 0xd8,uVar5);
            local_98 = (char *)((ulonglong)local_98 & 0xffffffff00000000);
            cVar4 = FUN_14016169c(plVar13[6],&local_98);
            if (cVar4 == '\0') {
              local_68 = (code *)*puVar8;
              uStack_60 = puVar8[1];
            }
            else {
              lVar7 = (longlong)(int)local_98;
              if (lVar7 < 2) {
                uVar5 = *(undefined4 *)((longlong)puVar8 + 4);
                uVar2 = *(undefined4 *)(puVar8 + 1);
                uVar3 = *(undefined4 *)((longlong)puVar8 + 0xc);
                *(undefined4 *)(&local_68 + lVar7 * 2) = *(undefined4 *)puVar8;
                *(undefined4 *)((longlong)&local_68 + lVar7 * 0x10 + 4) = uVar5;
                *(undefined4 *)(&uStack_60 + lVar7 * 2) = uVar2;
                *(undefined4 *)((longlong)&uStack_60 + lVar7 * 0x10 + 4) = uVar3;
              }
            }
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(lVar6 + 0x40));
    }
  }
  else {
    if (DAT_14caf9cd0 == 0) {
      local_b0 = &local_68;
      local_68 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1463c0cc2;
      local_b8 = &LAB_147c9db5b;
      local_c0 = &LAB_1463f9c44;
      local_c8 = L"Game";
      local_d0 = 0x2000000000;
      local_d8 = 0x10000004;
      local_e0 = 8;
      local_e8 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) != DAT_14caf9cd0 + 0x30)) goto LAB_140b3bf95;
    plVar13 = *(longlong **)(lVar6 + 0x430);
    if (plVar13 == (longlong *)0x0) {
LAB_140b3c40c:
      puVar8 = (undefined8 *)(lVar12 + 0xd8);
    }
    else {
      if (DAT_14cae9568 == 0) {
        local_b0 = &local_68;
        local_68 = FUN_1417de738;
        local_a0 = (code *)&LAB_145893408;
        local_a8 = &LAB_1458cbbd2;
        local_b8 = &LAB_147ba21f1;
        local_c0 = &LAB_1463e9233;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x1000000c;
        local_e0 = 8;
        local_e8 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        plVar13 = *(longlong **)(lVar6 + 0x430);
        if (plVar13 == (longlong *)0x0) goto LAB_140b3c40c;
      }
      if ((((DAT_14cae9568 == 0) || (lVar6 = plVar13[2], lVar6 == 0)) ||
          (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          != DAT_14cae9568 + 0x30)) goto LAB_140b3c40c;
      lVar6 = FUN_140628492();
      if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) goto LAB_140b3c40c;
      uVar5 = (**(code **)(*plVar13 + 0x370))(plVar13);
      puVar8 = (undefined8 *)FUN_140945fa2(lVar12 + 0xd8,uVar5);
    }
    local_68 = (code *)*puVar8;
    uStack_60 = puVar8[1];
    local_58 = *(undefined4 *)puVar8;
    uStack_54 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_50 = *(undefined4 *)(puVar8 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar8 + 0xc);
  }
  local_98 = &local_79;
  local_90 = &local_80;
  local_88 = &local_68;
  FUN_140b3c4ca(lVar1);
  if (local_79 == '\x01') {
    iVar9 = 0xff;
    if (local_80 < 0xff) {
      iVar9 = local_80;
    }
    iVar10 = 0;
    if (0 < iVar9) {
      iVar10 = iVar9;
    }
    if ((*(int *)(lVar1 + 0x33c) != iVar10) &&
       (*(int *)(lVar1 + 0x33c) = iVar10, *(longlong *)(lVar1 + 0x5a8) != 0)) {
      FUN_1413672a8();
    }
    local_78 = (undefined4)local_68;
    uStack_74 = local_68._4_4_;
    uStack_70 = (undefined4)uStack_60;
    uStack_6c = uStack_60._4_4_;
    FUN_140b3c54c(lVar1,0);
    if (**(char **)(lVar1 + 0x5d0) == '\0') {
      **(char **)(lVar1 + 0x5d0) = '\x01';
      FUN_1448215fa(lVar1);
    }
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    FUN_140b3c54c(lVar1,1);
    if (*(char *)(*(longlong *)(lVar1 + 0x5d0) + 1) == '\0') {
      *(undefined1 *)(*(longlong *)(lVar1 + 0x5d0) + 1) = 1;
      FUN_1448215fa(lVar1);
    }
  }
  iVar9 = *(int *)(lVar1 + 0x140);
  if ((longlong)iVar9 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x138);
    lVar12 = 0;
    do {
      lVar6 = *(longlong *)(lVar1 + lVar12);
      if (lVar6 != 0) {
        lVar11 = FUN_14081cebe();
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
          FUN_143da97e4(&local_98,lVar6);
        }
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar9 * 8 != lVar12);
  }
LAB_140b3c135:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b3c466 FUN_140b3c466 body=99 status=ok
// SIG undefined FUN_140b3c466(void)

undefined4 FUN_140b3c466(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (0 < *(int *)(param_1[1] + 8))) &&
     ((param_1[3] != 0 && (*(int *)((longlong)param_1 + 0x14) != 0)))) {
    uVar1 = *(uint *)(param_1 + 2);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)((longlong)param_1 + 0x14))) {
      return CONCAT31((int3)(*(uint *)(lVar2 + 8) >> 8),(*(uint *)(lVar2 + 8) & 0x10200000) == 0);
    }
  }
  return 0;
}



// FUNCTION 140b3c4ca FUN_140b3c4ca body=129 status=ok
// SIG undefined FUN_140b3c4ca(void)

void FUN_140b3c4ca(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (((*(byte *)(param_1 + 0x2de) & 0x40) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x2de) = *(byte *)(param_1 + 0x2de) & 0xbf | param_2 << 6;
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 0x9d);
      if ((bVar2 & 1) == 0) {
LAB_140b3c527:
        *(byte *)(param_1 + 0x9d) = bVar2 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar1 = FUN_1448abda6(param_1);
        if (lVar1 == 0) {
          bVar2 = *(byte *)(param_1 + 0x9d);
          goto LAB_140b3c527;
        }
      }
    }
  }
  return;
}



// FUNCTION 140b3c54c FUN_140b3c54c body=183 status=ok
// SIG undefined FUN_140b3c54c(void)

void FUN_140b3c54c(longlong param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  longlong lVar6;
  
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x5e0) + (longlong)param_2 * 0x10);
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x5e0) + (longlong)param_2 * 0x10);
  if (((((fVar2 != *param_3) || (NAN(fVar2) || NAN(*param_3))) || (pfVar1[1] != param_3[1])) ||
      ((NAN(pfVar1[1]) || NAN(param_3[1]) || (pfVar1[2] != param_3[2])))) ||
     ((NAN(pfVar1[2]) || NAN(param_3[2]) ||
      ((pfVar1[3] != param_3[3] || (NAN(pfVar1[3]) || NAN(param_3[3]))))))) {
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    *pfVar1 = *param_3;
    pfVar1[1] = fVar2;
    pfVar1[2] = fVar3;
    pfVar1[3] = fVar4;
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar5 = *(byte *)(param_1 + 0x9d);
      if ((bVar5 & 1) != 0) {
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          return;
        }
        lVar6 = FUN_1448abda6(param_1);
        if (lVar6 != 0) {
          return;
        }
        bVar5 = *(byte *)(param_1 + 0x9d);
      }
      *(byte *)(param_1 + 0x9d) = bVar5 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140b3c604 FUN_140b3c604 body=1510 status=ok
// SIG undefined FUN_140b3c604(void)

void FUN_140b3c604(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((param_1[0x39] == 0) || (lVar7 = param_1[0x9d], local_68 = lVar7, lVar7 == 0)) ||
     (lVar3 = FUN_1402d1dc0(lVar7 + 0x98), lVar3 == 0)) goto LAB_140b3c89c;
  if (param_1[0xf2] == 0) {
    uVar4 = FUN_14058439c();
    local_b8 = 0;
    uStack_b0 = 0;
    local_c0 = local_c0 & 0xffffff00;
    local_c8 = 0;
    lVar5 = FUN_140584627(param_1,uVar4,0,0);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = FUN_140288b94();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar5;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar5);
        }
      }
    }
    param_1[0xf2] = lVar6;
    *(byte *)(lVar6 + 0x9e) = *(byte *)(lVar6 + 0x9e) & 0xf7;
    FUN_14057a3b2(param_1[0xf2],0,1,1);
    (**(code **)(*(longlong *)param_1[0xf2] + 0xa78))((longlong *)param_1[0xf2],lVar3);
  }
  if (0 < *(int *)(lVar7 + 200)) {
    local_60 = (longlong *)((ulonglong)local_60 & 0xffffffffffffff00);
    local_38 = 0;
    FUN_1456bb102(&local_60,param_1);
    local_78 = *(code **)(lVar7 + 0xc0);
    local_70 = *(undefined4 *)(lVar7 + 200);
    FUN_140e99737(param_1[0xf2],&local_78,&local_60);
    lVar7 = DAT_14c9a3da0;
    if ((longlong)local_38 != 0) {
      lVar6 = (longlong)local_38 + -1;
      lVar3 = lVar6 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar3),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar3));
      if (*(longlong *)(lVar7 + lVar3) != 0) {
        FUN_1400020a8();
      }
      lVar7 = DAT_14c9a3da0;
      iVar10 = (int)lVar6;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
      }
      *(undefined4 *)(lVar7 + lVar3) = 0xffffffff;
      iVar8 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar8 = DAT_14c9a3dd0;
      }
      *(int *)(lVar7 + 4 + lVar3) = iVar8;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar9 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar9 = DAT_14c9a3dc0;
      }
      iVar8 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar8 = iVar10;
      }
      bVar2 = (byte)lVar6 & 0x1f;
      DAT_14c9a3dd0 = iVar10;
      *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      local_38 = 0;
    }
    if (((char)local_60 == '\x03') && (local_50 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  local_58 = FUN_140831778();
  local_60 = &local_68;
  local_50 = param_1;
  if (DAT_14cb83100 == '\0') {
    DAT_14cb83100 = '\x01';
    FUN_1457745e8(&local_78);
  }
  lVar7 = param_1[0x2d];
  if (lVar7 == 0) {
LAB_140b3c7c4:
    lVar7 = FUN_1447210f0(param_1);
    if (((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x1f0), lVar7 != 0)) &&
       (0 < *(int *)(lVar7 + 0x40))) {
      lVar3 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar3 * 8);
        if (lVar6 != 0) {
          lVar5 = FUN_140628492();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             (*(longlong *)(lVar6 + 0x30) != 0)) {
            FUN_140b3cbec(&local_60,lVar6);
          }
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(lVar7 + 0x40));
    }
  }
  else {
    if (DAT_14caf9cd0 == 0) {
      local_90 = &local_78;
      local_78 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1463c0cc2;
      local_98 = &LAB_147c9db5b;
      local_a0 = &LAB_1463f9c44;
      local_a8 = L"Game";
      uStack_b0 = 0x2000000000;
      local_b8 = CONCAT44(local_b8._4_4_,0x10000004);
      local_c0 = 8;
      local_c8 = CONCAT44(local_c8._4_4_,0x958);
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) != DAT_14caf9cd0 + 0x30)) goto LAB_140b3c7c4;
    lVar3 = *(longlong *)(lVar7 + 0x430);
    if (lVar3 != 0) {
      if (DAT_14cae9568 == 0) {
        local_90 = &local_78;
        local_78 = FUN_1417de738;
        local_80 = (code *)&LAB_145893408;
        local_88 = &LAB_1458cbbd2;
        local_98 = &LAB_147ba21f1;
        local_a0 = &LAB_1463e9233;
        local_a8 = L"Engine";
        uStack_b0 = 0;
        local_b8 = CONCAT44(local_b8._4_4_,0x1000000c);
        local_c0 = 8;
        local_c8 = CONCAT44(local_c8._4_4_,0x2b8);
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar3 = *(longlong *)(lVar7 + 0x430);
        if (lVar3 == 0) goto LAB_140b3c837;
      }
      if ((((DAT_14cae9568 != 0) && (lVar7 = *(longlong *)(lVar3 + 0x10), lVar7 != 0)) &&
          (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30)) {
        lVar7 = FUN_140628492();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
           (*(longlong *)(lVar3 + 0x30) != 0)) {
          FUN_140b3cbec(&local_60,lVar3);
        }
      }
    }
  }
LAB_140b3c837:
  lVar7 = param_1[0xf2];
  uVar4 = FUN_1447210f0(param_1);
  FUN_140b506dc(lVar7,uVar4,0);
  (**(code **)(*(longlong *)param_1[0xf2] + 0x490))
            ((longlong *)param_1[0xf2],param_1[0x39],&DAT_14cadada0,0);
  (**(code **)(*(longlong *)param_1[0xf2] + 0xa60))((longlong *)param_1[0xf2],0);
  FUN_140357fa8(param_1[0xf2],(int)param_1[0xf0],0);
LAB_140b3c89c:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b3cbec FUN_140b3cbec body=538 status=ok
// SIG undefined FUN_140b3cbec(void)

void FUN_140b3cbec(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_64;
  char local_60 [16];
  longlong *local_50;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = param_1[2];
  puVar9 = (undefined4 *)(*(longlong *)*param_1 + 0x38);
  if (param_2 != (longlong *)0x0) {
    uVar4 = (**(code **)(*param_2 + 0x370))(param_2);
    puVar9 = (undefined4 *)FUN_140945fa2(puVar9,uVar4);
  }
  local_64 = 0;
  FUN_14016169c(param_2[6]);
  if ((-1 < (longlong)local_64) && (local_64 < *(int *)(param_1[1] + 0xa8))) {
    local_b4 = 0;
    local_b8 = 3;
    local_a8 = DAT_14c8464e0;
    uStack_a0 = DAT_14c8464e8;
    local_98 = DAT_14c8464f0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_c0 = *(undefined8 *)(*(longlong *)(param_1[1] + 0xa0) + (longlong)local_64 * 8);
    local_90 = *puVar9;
    uStack_8c = puVar9[1];
    uStack_88 = puVar9[2];
    uStack_84 = puVar9[3];
    local_60[0] = '\0';
    local_38 = 0;
    FUN_1456bb102(local_60,lVar2);
    local_c8 = 1;
    local_d0 = &local_c0;
    FUN_140e99737(*(undefined8 *)(lVar2 + 0x790),&local_d0,local_60);
    lVar2 = DAT_14c9a3da0;
    if ((longlong)local_38 != 0) {
      lVar8 = (longlong)local_38 + -1;
      lVar10 = lVar8 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
      if (*(longlong *)(lVar2 + lVar10) != 0) {
        FUN_1400020a8();
      }
      lVar2 = DAT_14c9a3da0;
      iVar7 = (int)lVar8;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
      }
      *(undefined4 *)(lVar2 + lVar10) = 0xffffffff;
      iVar5 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar5 = DAT_14c9a3dd0;
      }
      *(int *)(lVar2 + 4 + lVar10) = iVar5;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar6 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar6 = DAT_14c9a3dc0;
      }
      iVar5 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar5 = iVar7;
      }
      bVar3 = (byte)lVar8 & 0x1f;
      DAT_14c9a3dd0 = iVar7;
      *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
           (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      local_38 = 0;
    }
    if ((local_60[0] == '\x03') && (local_50 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3ce08 FUN_140b3ce08 body=487 status=ok
// SIG undefined FUN_140b3ce08(void)

void FUN_140b3ce08(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  plVar7 = local_60;
  iVar16 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar9 * 0x30);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_140b3cf4a;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_140b3cf4a:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3cff0 FUN_140b3cff0 body=134 status=ok
// SIG undefined FUN_140b3cff0(void)

void FUN_140b3cff0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x4b8);
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140b3d076(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140b3d072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140b3d076 FUN_140b3d076 body=62 status=ok
// SIG undefined FUN_140b3d076(void)

void FUN_140b3d076(longlong param_1)

{
  FUN_140b3d0b4(param_1,0);
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x400) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b3d0b4 FUN_140b3d0b4 body=137 status=ok
// SIG undefined FUN_140b3d0b4(void)

void FUN_140b3d0b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(int *)(param_1 + 0x40c) != param_2) {
    FUN_140b3d13e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x428) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x424)) && (*(int *)(param_1 + 0x424) < 0x21)) {
    return;
  }
  uVar1 = 0x20;
  if (0x20 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x424) = uVar1;
  FUN_14008f53c(param_1 + 0x410,0);
  return;
}



// FUNCTION 140b3d13e FUN_140b3d13e body=110 status=ok
// SIG undefined FUN_140b3d13e(void)

void FUN_140b3d13e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 0x20, 0x20 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x40c)) {
    return;
  }
  *(int *)(param_1 + 0x40c) = (int)uVar2;
  FUN_140b3d1ac(param_1,*(undefined4 *)(param_1 + 0x408),uVar2,0x20);
  return;
}



// FUNCTION 140b3d1ac FUN_140b3d1ac body=141 status=ok
// SIG undefined FUN_140b3d1ac(void)

void FUN_140b3d1ac(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b3d268 FUN_140b3d268 body=479 status=ok
// SIG undefined FUN_140b3d268(void)

void FUN_140b3d268(longlong param_1,double *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
  double dVar8;
  
  *(undefined8 *)(param_1 + 0x11a8) = DAT_14c872be0;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(double *)(param_1 + 0x1178) = param_2[2];
    dVar8 = param_2[1];
    *(double *)(param_1 + 0x1168) = *param_2;
    *(double *)(param_1 + 0x1170) = dVar8;
    bVar3 = *(char *)(param_1 + 0x1160) + 1;
    bVar6 = 1;
    if (1 < bVar3) {
      bVar6 = bVar3;
    }
    *(byte *)(param_1 + 0x1160) = bVar6;
  }
  if (*(longlong *)(param_1 + 0xe38) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xe38) + 0x180);
    *pbVar1 = *pbVar1 & 0xf7;
    *(undefined4 *)(*(longlong *)(param_1 + 0xe38) + 0x178) = 0;
    lVar4 = *(longlong *)(param_1 + 0xe38);
    *(double *)(lVar4 + 0x138) = param_2[2];
    dVar8 = param_2[1];
    *(double *)(lVar4 + 0x128) = *param_2;
    *(double *)(lVar4 + 0x130) = dVar8;
    lVar4 = *(longlong *)(param_1 + 0xe38);
    if (*(float *)(lVar4 + 0x4f4) <= 0.0001) {
      *(float *)(lVar4 + 0x4f4) =
           (float)SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
      lVar4 = *(longlong *)(param_1 + 0xe38);
    }
    fVar7 = *(float *)(lVar4 + 0x17c);
    if (0.0 < fVar7) {
      dVar8 = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
      if ((double)fVar7 <= dVar8) {
        fVar7 = (float)dVar8;
      }
      *(float *)(lVar4 + 0x17c) = fVar7;
      lVar4 = *(longlong *)(param_1 + 0xe38);
    }
    if (lVar4 != 0) {
      lVar5 = FUN_140b3d448();
      lVar4 = *(longlong *)(param_1 + 0xe38);
      if ((((lVar4 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        fVar7 = (float)SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1])
        ;
        if (fVar7 <= *(float *)(lVar4 + 0x17c)) {
          fVar7 = *(float *)(lVar4 + 0x17c);
        }
        *(float *)(lVar4 + 0x524) = fVar7;
      }
    }
  }
  return;
}



// FUNCTION 140b3d448 FUN_140b3d448 body=228 status=ok
// SIG undefined FUN_140b3d448(void)

longlong FUN_140b3d448(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6fbc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464dd44a;
    local_38 = &LAB_1487a9c97;
    local_40 = &LAB_14118ac7a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x5d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"WalkingProjectileMovementComponent",&DAT_14cb6fbc0,
                  FUN_146542cea);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6fbc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b3d52e FUN_140b3d52e body=88 status=ok
// SIG undefined FUN_140b3d52e(void)

undefined8 * FUN_140b3d52e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b3d586(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b3d586 FUN_140b3d586 body=314 status=ok
// SIG undefined FUN_140b3d586(void)

void FUN_140b3d586(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b3d5f4;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140b3d5f4:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b3d6e0 FUN_140b3d6e0 body=1066 status=ok
// SIG undefined FUN_140b3d6e0(void)

undefined8 FUN_140b3d6e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined **ppuVar13;
  uint uVar14;
  longlong lVar15;
  undefined *puVar16;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined8 *puStack_70;
  longlong *local_68;
  ulonglong local_60;
  undefined *local_58;
  undefined1 local_49 [9];
  
  local_49._1_8_ = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)((longlong)param_2 + 0x2b) & 2) == 0) ||
     ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) {
    FUN_140b3db0c(param_2);
    iVar1 = *(int *)(param_1 + 0x20);
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (iVar1 == 0) {
        uVar11 = 1;
        uVar10 = 1;
      }
      else {
        uVar11 = 1;
        lVar8 = 0;
        uVar12 = 1;
        do {
          lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8);
          uVar2 = uVar12;
          if (lVar15 != 0) {
            uVar2 = *(uint *)(lVar15 + 0x5c);
            uVar14 = -uVar2 & (*(int *)(lVar15 + 0x58) + uVar2) - 1;
            if ((int)uVar11 <= (int)uVar14) {
              uVar11 = uVar14;
            }
            if ((int)uVar2 < (int)uVar12) {
              uVar2 = uVar12;
            }
          }
          uVar12 = uVar2;
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar1 * 8 != lVar8);
        uVar10 = (ulonglong)uVar12;
      }
      puStack_70 = (undefined8 *)local_49;
      local_78 = (undefined **)FUN_140036a08;
      lVar8 = FUN_144a773aa(&local_78,&DAT_14c7585d0);
      ppuVar13 = (undefined **)(lVar8 + 0x10);
      puStack_70 = *(undefined8 **)(lVar8 + 0x10);
      local_68 = *(longlong **)(lVar8 + 0x20);
      local_60 = local_60 & 0xffffffffffffff00;
      local_58 = *(undefined **)(lVar8 + 0x28);
      *(undefined ****)(lVar8 + 0x28) = &local_78;
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      uVar9 = (ulonglong)(0xf < uVar11) * 8 + 8;
      if (uVar9 < uVar10) {
        uVar9 = uVar10;
      }
      uVar10 = (longlong)puStack_70 + (uVar9 - 1) & -uVar9;
      puVar16 = (undefined *)(uVar10 + uVar11);
      local_78 = ppuVar13;
      if (*(undefined **)(lVar8 + 0x18) < puVar16) {
        FUN_140023dd8(ppuVar13,(int)uVar9 + uVar11);
        uVar10 = (ulonglong)(*ppuVar13 + (uVar9 - 1)) & -uVar9;
        puVar16 = (undefined *)(uVar11 + uVar10);
      }
      *ppuVar13 = puVar16;
      iVar1 = *(int *)(param_1 + 0x30);
      if ((longlong)iVar1 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x28);
        lVar15 = 0;
        do {
          plVar3 = *(longlong **)(lVar8 + lVar15);
          plVar7 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3);
          (**(code **)(*plVar7 + 0x2e8))(plVar7,uVar10,1);
          FUN_14047320e(plVar7,param_2,plVar3,uVar10);
          (**(code **)(*plVar7 + 0x2f0))(plVar7,uVar10,1);
          lVar15 = lVar15 + 8;
        } while ((longlong)iVar1 * 8 != lVar15);
      }
      if ((char)local_60 == '\0') {
        local_60 = CONCAT71(local_60._1_7_,1);
        *(int *)(local_78 + 4) = *(int *)(local_78 + 4) + -1;
        if (local_68 != (longlong *)local_78[2]) {
          FUN_14004673c();
        }
        *local_78 = (undefined *)puStack_70;
        local_78[3] = local_58;
      }
    }
    else {
      if (iVar1 != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8) == 0) {
            puStack_70 = (undefined8 *)local_49;
            local_78 = (undefined **)FUN_141073f72;
            lVar8 = FUN_144a773aa(&local_78,&DAT_14c75ec34);
            if ((*(longlong *)(lVar8 + 0x58) == 0) ||
               (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + 0x30), lVar8 == 0)) {
              FUN_140056680(&local_78,&DAT_149e01fe8);
            }
            else {
              local_78 = (undefined **)0x0;
              puStack_70 = (undefined8 *)0x0;
              FUN_1401031ac(lVar8,0);
            }
            ppuVar13 = local_78;
            if ((int)puStack_70 == 0) {
              ppuVar13 = (undefined **)&DAT_149dfb77a;
            }
            FUN_140033559(".\\Runtime/Gearbox/GbxEngine/Private/GbxGraph/GbxGraphSettings.cpp",0xc1,
                          L"\nEncountered unknown NodeSettings types when loading \'%s\'. This is likely caused by a coder renaming a NodeSettings type and not adding a StructRedirector."
                          ,ppuVar13);
            if (local_78 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            break;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar1 * 8 != lVar8);
      }
      FUN_140b3ddec(param_1);
      iVar1 = *(int *)(param_1 + 0x30);
      if ((longlong)iVar1 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x28);
        lVar15 = 0;
        do {
          plVar3 = *(longlong **)(lVar8 + lVar15);
          uVar4 = (**(code **)(*plVar3 + 8))(plVar3);
          FUN_14047320e(uVar4,param_2,plVar3,plVar3);
          lVar15 = lVar15 + 8;
        } while ((longlong)iVar1 * 8 != lVar15);
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x10);
    FUN_140b3db0c(param_2,param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x28);
      lVar15 = 0;
      do {
        plVar3 = *(longlong **)(lVar8 + lVar15);
        if ((plVar3 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar3 + 8))(plVar3), lVar5 != 0))
        {
          plVar7 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar7 != (longlong *)0x0) &&
             ((**(code **)(*plVar7 + 8))(plVar7,&local_78),
             ((ulonglong)puStack_70 & 0x2000000000000) != 0)) {
            puStack_70 = (undefined8 *)0x0;
            local_78 = &PTR_FUN_14a1c9600;
            local_60 = 0;
            local_68 = param_2;
            pcVar6 = (code *)(**(code **)(*plVar7 + 0x88))(plVar7);
            (*pcVar6)(plVar3,&local_78);
            local_78 = &PTR_LAB_149eb0140;
            if (puStack_70 != (undefined8 *)0x0) {
              (**(code **)*puStack_70)(puStack_70,1);
            }
          }
          FUN_14047320e(lVar5,param_2,plVar3,0);
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar1 * 8 != lVar15);
    }
  }
  if ((local_49._1_8_ ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140b3db0c FUN_140b3db0c body=418 status=ok
// SIG undefined FUN_140b3db0c(void)

longlong * FUN_140b3db0c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140b3dcb0(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x138))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_140b3dcb0(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140c48848(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x138))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b3dcb0 FUN_140b3dcb0 body=315 status=ok
// SIG undefined FUN_140b3dcb0(void)

void FUN_140b3dcb0(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140b3dd1a;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140b3dd1a:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140b3ddec FUN_140b3ddec body=563 status=ok
// SIG undefined FUN_140b3ddec(void)

void FUN_140b3ddec(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  FUN_14076be10();
  if ((longlong)(int)param_1[4] == 0) {
    iVar8 = 0;
  }
  else {
    lVar9 = 0;
    iVar8 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1[3] + lVar9) + 0x5c);
      iVar8 = (iVar2 + -1 + *(int *)(*(longlong *)(param_1[3] + lVar9) + 0x58) & -iVar2) +
              ((iVar8 + iVar2) - 1U & -iVar2);
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)param_1[4] * 8 != lVar9);
  }
  FUN_1401211f6(param_1 + 7,iVar8,1);
  uVar7 = *(uint *)(param_1 + 4);
  iVar8 = (int)param_1[6];
  lVar9 = param_1[7];
  if (iVar8 < (int)uVar7) {
    *(uint *)(param_1 + 6) = uVar7;
    if ((uint)(*(int *)((longlong)param_1 + 0x34) - iVar8) < uVar7 - iVar8) {
      FUN_140b3e020();
    }
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar8) {
      *(uint *)(param_1 + 6) = uVar7;
      FUN_1470e87ac(param_1 + 5);
    }
  }
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a1c9e00;
  plVar5[2] = 0;
  param_1[0x13] = 0;
  plVar3 = (longlong *)param_1[0x14];
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) goto LAB_140b3ded9;
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_140b3ded9;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar8 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    param_1[0x14] = (longlong)plVar5;
    if (plVar3 == (longlong *)0x0) goto LAB_140b3ded9;
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_140b3ded9;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar8 = *piVar1;
    UNLOCK();
  }
  if (iVar8 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_140b3ded9:
  if (0 < (int)uVar7) {
    uVar10 = 0;
    do {
      plVar3 = *(longlong **)(param_1[3] + uVar10 * 8);
      uVar11 = -(longlong)*(int *)((longlong)plVar3 + 0x5c) &
               (lVar9 + *(int *)((longlong)plVar3 + 0x5c)) - 1U;
      (**(code **)(*plVar3 + 0x2e8))(plVar3,uVar11,1);
      *(longlong **)(uVar11 + 8) = param_1;
      *(int *)(uVar11 + 0x18) = (int)uVar10;
      *(ulonglong *)(param_1[5] + uVar10 * 8) = uVar11;
      lVar9 = (longlong)
              (int)(-*(int *)((longlong)plVar3 + 0x5c) &
                   ((int)plVar3[0xb] + *(int *)((longlong)plVar3 + 0x5c)) - 1U) + uVar11;
      uVar10 = uVar10 + 1;
    } while (uVar7 != uVar10);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  lVar9 = param_1[6];
  if ((longlong)(int)lVar9 != 0) {
    lVar4 = param_1[5];
    lVar12 = 0;
    do {
      lVar6 = (**(code **)(**(longlong **)(lVar4 + lVar12) + 0x10))();
      if (lVar6 != 0) {
        iVar8 = *(int *)(lVar6 + 0x5c) + -1;
        uVar7 = -*(int *)(lVar6 + 0x5c);
        *(uint *)(param_1 + 9) =
             (iVar8 + *(int *)(lVar6 + 0x58) & uVar7) + ((int)param_1[9] + iVar8 & uVar7);
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x000140b3df9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// FUNCTION 140b3e020 FUN_140b3e020 body=353 status=ok
// SIG undefined FUN_140b3e020(void)

void FUN_140b3e020(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b3e0a5;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140b3e0a5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140b3e1a8 FUN_140b3e1a8 body=326 status=ok
// SIG undefined FUN_140b3e1a8(void)

longlong FUN_140b3e1a8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar5 = *(longlong *)(lVar1 + 0x150);
  if (lVar5 == 0) {
    uVar4 = FUN_140b3e2ee();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x150) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x158) == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x148) == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(lVar1 + 0x158) = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x148));
      *(longlong *)(lVar1 + 0x158) = lVar5;
      if (lVar5 != 0) goto LAB_140b3e24d;
    }
    return 0;
  }
LAB_140b3e24d:
  lVar1 = *param_1;
  lVar5 = *(longlong *)(lVar1 + 0x150);
  if (lVar5 == 0) {
    uVar4 = FUN_140b3e2ee();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x150) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x158) != 0) {
    return *(longlong *)(lVar1 + 0x158);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x148) != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x148));
    }
    *(longlong *)(lVar1 + 0x158) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 140b3e2ee FUN_140b3e2ee body=57 status=ok
// SIG undefined FUN_140b3e2ee(void)

void FUN_140b3e2ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6368 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6368 = FUN_140002ddd(FUN_1465c68b4,uVar1,L"OakAchievementDef");
  }
  return;
}



// FUNCTION 140b3e33e FUN_140b3e33e body=47 status=ok
// SIG undefined FUN_140b3e33e(void)

void FUN_140b3e33e(longlong param_1)

{
  FUN_140b3e36e();
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_140b3e3e4(param_1);
    return;
  }
  return;
}



// FUNCTION 140b3e36e FUN_140b3e36e body=117 status=ok
// SIG undefined FUN_140b3e36e(void)

void FUN_140b3e36e(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (((*(longlong *)(param_1 + 0x50) != 0) && (lVar1 = *(longlong *)(param_1 + 0x40), lVar1 != 0))
     && (*(int *)(lVar1 + 0x68) != 0)) {
    lVar1 = FUN_14494f566(lVar1 + 0x98);
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      goto LAB_140b3e3ab;
    }
  }
  FUN_140b3e45e(param_1);
LAB_140b3e3ab:
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      bVar2 = true;
    }
    else {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        lVar1 = *(longlong *)(param_1 + 0x20);
      }
      else {
        lVar1 = 0;
      }
      bVar2 = *(longlong *)(param_1 + 0x48) == lVar1;
    }
    *(bool *)(*(longlong *)(param_1 + 0x40) + 400) = bVar2;
  }
  return;
}


