// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1401f8392 FUN_1401f8392 body=63 status=ok
// SIG undefined FUN_1401f8392(void)

void FUN_1401f8392(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1401f83d2();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001401f83cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401f83d2 FUN_1401f83d2 body=97 status=ok
// SIG undefined FUN_1401f83d2(void)

void FUN_1401f83d2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001401f842f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401f8434 FUN_1401f8434 body=636 status=ok
// SIG undefined FUN_1401f8434(void)

longlong * FUN_1401f8434(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [24];
  undefined8 local_70;
  int local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144b3e850();
  *param_1 = (longlong)&PTR_FUN_14aba4d40;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = param_2;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_144b3e890(local_88);
  if ((longlong)*(int *)(param_3 + 0x10) != 0) {
    lVar4 = *(longlong *)(param_3 + 8);
    lVar5 = (longlong)*(int *)(param_3 + 0x10) * 0xb0;
    do {
      FUN_1412aff1a(lVar4,local_88,0,0xbf800000);
      lVar4 = lVar4 + 0xb0;
      lVar5 = lVar5 + -0xb0;
    } while (lVar5 != 0);
  }
  if ((int)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) < local_68) {
    FUN_140c3e7da(param_1 + 0xe,&PTR_vftable_14c6e47a0,local_68);
  }
  FUN_144b3d470(param_1[0xe],local_70,(longlong)local_68 << 4);
  *(int *)(param_1 + 0xf) = local_68;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) == 0) {
    FUN_1401f86b2(param_1 + 0x10,&PTR_vftable_14c6e47a0,1);
    lVar4 = (longlong)(int)param_1[0x11];
  }
  else {
    lVar4 = 0;
  }
  *(int *)(param_1[0x10] + lVar4 * 4) = local_68;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa6) = 1;
  FUN_144b3e8d0(param_1[0xe],(int)param_1[0xf],param_1 + 10);
  (**(code **)(*param_1 + 0x28))(param_1);
  if (*(int *)(param_2 + 0x144) != 0) {
    uVar1 = *(uint *)(param_2 + 0x140);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1401f85f0;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_2 + 0x144) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar3;
      goto LAB_1401f85f0;
    }
  }
  uVar2 = 0;
LAB_1401f85f0:
  FUN_144750a86(uVar2,&local_98,0,0);
  if (param_1 + 0x18 == &local_98) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x18] != 0) {
      FUN_1400020a8();
    }
    param_1[0x18] = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 0x19) = local_90;
    *(undefined4 *)((longlong)param_1 + 0xcc) = local_8c;
  }
  param_1[0x1b] = *(longlong *)(param_2 + 0x140);
  FUN_144b3e940(local_88);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f86b2 FUN_1401f86b2 body=278 status=ok
// SIG undefined FUN_1401f86b2(void)

void FUN_1401f86b2(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_40 = uVar4 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_40,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar4 * 4 + 4;
  uVar3 = uVar4;
  if (uVar1 <= local_40) {
    uVar3 = uVar4 + 1;
    local_40 = local_40 - 4;
    if (uVar1 <= local_40) {
      uVar3 = uVar3 + (local_40 + uVar4 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)(param_2 + 8)),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar3;
  *param_1 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f87ca FUN_1401f87ca body=110 status=ok
// SIG undefined FUN_1401f87ca(void)

int FUN_1401f87ca(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1401f8838(lVar1 + (longlong)iVar4 * 0x38,param_3,0);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x30 + (longlong)iVar4 * 0x38);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1401f8838 FUN_1401f8838 body=75 status=ok
// SIG undefined FUN_1401f8838(void)

undefined4 FUN_1401f8838(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  uint uVar2;
  
  if (((*(int *)param_2[1] == *(int *)param_1[1] && *param_2 == *param_1) &&
      (param_1[1][4] == param_2[1][4])) && (*(int *)(param_1[1] + 8) == *(int *)(param_2[1] + 8))) {
    uVar2 = *(uint *)param_1[2] ^ *(uint *)param_2[2];
    uVar1 = CONCAT31((int3)(uVar2 >> 8),
                     *(int *)(param_2[1] + 0xc) == *(int *)(param_1[1] + 0xc) && uVar2 == 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1401f8898 FUN_1401f8898 body=92 status=ok
// SIG undefined FUN_1401f8898(void)

IBreakIterator * FUN_1401f8898(IBreakIterator *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_14b452ac0;
  plVar3 = *(longlong **)(param_1 + 0x10);
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
  cohtml::i18n::IBreakIterator::~IBreakIterator(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401f88f4 FUN_1401f88f4 body=187 status=ok
// SIG undefined FUN_1401f88f4(void)

void FUN_1401f88f4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x1150)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar4 * 8);
      if (*(longlong *)(lVar1 + 0x2a8) != 0) {
        FUN_1401f89b0();
      }
      plVar3 = *(longlong **)(lVar1 + 0x2a0);
      if ((plVar3 != (longlong *)0x0) && (plVar3[0x1f] == 0)) {
        plVar2 = *(longlong **)(param_1 + 0xc20);
        if ((plVar2 != (longlong *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(plVar2);
          plVar3 = *(longlong **)(lVar1 + 0x2a0);
        }
        if (plVar3 == plVar2) {
          *(undefined8 *)(param_1 + 0xc20) = 0;
          plVar3 = *(longlong **)(lVar1 + 0x2a0);
        }
        (**(code **)(*plVar3 + 0x308))();
        *(undefined8 *)(lVar1 + 0x2a0) = 0;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(param_1 + 0x1150));
  }
  return;
}



// FUNCTION 1401f89b0 FUN_1401f89b0 body=84 status=ok
// SIG undefined FUN_1401f89b0(void)

void FUN_1401f89b0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (longlong)(int)param_1[8]) {
    uVar2 = (longlong)(int)param_1[8] + 1;
    do {
      lVar1 = *(longlong *)(param_1[7] + -0x10 + uVar2 * 8);
      if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x78), lVar1 != 0)) &&
         (*(longlong *)(lVar1 + 0xf8) == 0)) {
        (**(code **)(*param_1 + 0x338))(param_1);
      }
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return;
}



// FUNCTION 1401f8a0e FUN_1401f8a0e body=171 status=ok
// SIG undefined FUN_1401f8a0e(void)

void FUN_1401f8a0e(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1401f8aa3;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1401f8aa3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1401f8ac8 FUN_1401f8ac8 body=31 status=ok
// SIG undefined FUN_1401f8ac8(void)

undefined8 FUN_1401f8ac8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401f8ae8 FUN_1401f8ae8 body=116 status=ok
// SIG undefined FUN_1401f8ae8(void)

void FUN_1401f8ae8(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401f8b5c FUN_1401f8b5c body=116 status=ok
// SIG undefined FUN_1401f8b5c(void)

void FUN_1401f8b5c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1401f8bd0 FUN_1401f8bd0 body=320 status=ok
// SIG undefined FUN_1401f8bd0(void)

void FUN_1401f8bd0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401f8c39;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1401f8c39:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 1401f8d10 FUN_1401f8d10 body=1450 status=ok
// SIG undefined FUN_1401f8d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401f8d10(undefined8 param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,byte param_6,longlong param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined1 uVar19;
  int iVar20;
  undefined1 auStack_138 [32];
  int *local_118;
  undefined1 *local_110;
  byte *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e5;
  int local_e4;
  undefined1 local_e0 [7];
  undefined1 local_d9;
  int local_d8;
  undefined4 local_d4;
  undefined8 *local_d0;
  int local_c8;
  char local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar14 = (int)param_2;
  if (iVar14 == 0) goto LAB_1401f9156;
  bVar6 = FUN_1447e0190();
  iVar8 = 0;
  if (((1 < iVar14) && (((~bVar6 | param_6) & 1) == 0)) &&
     (iVar8 = (param_3 / 2 + iVar14) / param_3, DAT_14c8335d8 < iVar8)) {
    iVar8 = DAT_14c8335d8;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = (uint)(*(undefined **)(lVar4 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar4 + 0x2c8) == 0) +
          iVar8;
  if (DAT_14c8c27ac < 1) {
    memset(&local_d0,0,0x82);
    local_f0 = 0;
    local_d4 = 0;
    local_d8 = 0;
    FUN_140e55932(&local_d0,&local_f0,&local_d4,&local_d8);
    iVar9 = local_d8;
    local_110 = &local_e5;
    local_118 = &local_e4;
    FUN_1457b80ec(local_d4,local_d8,&local_d9,local_e0);
    DAT_14c8c27ac = iVar9;
    if ((0 < local_e4) && (local_e4 <= iVar9)) {
      DAT_14c8c27ac = local_e4;
    }
  }
  iVar9 = DAT_14c8c27ac;
  if (iVar8 < DAT_14c8c27ac) {
    iVar9 = iVar8;
  }
  iVar8 = 1;
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  iVar17 = *(int *)(param_7 + 8);
  iVar20 = iVar17;
  if (iVar9 < iVar17) {
    iVar20 = iVar9;
  }
  if (iVar17 == 0) {
    iVar20 = iVar9;
  }
  if (iVar20 < 2) {
    if (0 < iVar14) {
      iVar8 = 0;
      do {
        local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,iVar8);
        (*(code *)*param_4)(param_4[1],&local_d0);
        iVar8 = iVar8 + 1;
      } while (iVar14 != iVar8);
    }
    goto LAB_1401f9156;
  }
  iVar9 = iVar14;
  if ((param_6 & 2) == 0) {
    iVar17 = iVar20 * 6;
    iVar8 = 1;
    iVar18 = -6;
    param_2 = param_2 & 0xffffffff;
    do {
      if (iVar17 <= iVar14) {
        iVar8 = (iVar14 + -1 + iVar17) / iVar17;
        param_2 = (longlong)(iVar8 + iVar14 + -1) / (longlong)iVar8;
        iVar9 = (int)param_2;
        param_2 = param_2 & 0xffffffff;
        if (iVar20 <= iVar9) break;
      }
      iVar9 = (int)param_2;
      iVar17 = iVar17 - iVar20;
      iVar18 = iVar18 + 1;
    } while (iVar18 != 0);
  }
  iVar20 = iVar20 + -1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_100 = (byte *)(lVar4 + 0xc60);
  uVar12 = 6;
  if ((*local_100 & 0x37) != 0) {
    uVar12 = 0;
  }
  uVar19 = 3;
  if ((param_6 & 8) == 0) {
    uVar19 = uVar12;
  }
  local_f8 = param_1;
  FUN_144a85b52(&local_f0,1);
  puVar2 = (undefined8 *)(lVar4 + 0x308);
  puVar11 = (uint *)*puVar2;
  if (puVar11 != (uint *)0x0) goto LAB_1401f8f4b;
  while( true ) {
    uVar13 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar13 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar13 | 1;
      __tlregdtor(&LAB_14274dd49);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar10 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar10 = 0xffffffff;
    *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
    puVar10[0x12] = 0;
    *puVar2 = puVar10;
    FUN_140217a48(puVar2);
    puVar11 = (uint *)*puVar2;
LAB_1401f8f4b:
    puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 0x3fU & 0xffffffffffffffc0);
    puVar15 = (uint *)(puVar16 + 0x10);
    uVar13 = puVar11[0x12];
    if (puVar15 <= puVar11 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
      LOCK();
      uVar3 = *puVar11;
      *puVar11 = *puVar11 + uVar13 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar13) != 0xffffffff) break;
      puVar11 = (uint *)*puVar2;
      *puVar11 = 0xffffffff;
      *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar2 = puVar11;
      puVar16 = (undefined8 *)((longlong)puVar11 + 0x97U & 0xffffffffffffffc0);
      puVar15 = (uint *)(puVar16 + 0x10);
      uVar13 = 0;
      if (puVar15 <= puVar11 + 0x4000) {
        uVar13 = 1;
        goto LAB_1401f8fd0;
      }
    }
  }
  uVar13 = uVar13 + 1;
LAB_1401f8fd0:
  *(uint **)(puVar11 + 0x10) = puVar15;
  puVar11[0x12] = uVar13;
  *puVar16 = &PTR_FUN_149e002e8;
  *(undefined4 *)(puVar16 + 1) = 0;
  *puVar16 = &PTR_FUN_149e061d8;
  puVar16[3] = local_f8;
  *(undefined4 *)(puVar16 + 4) = 0;
  *(undefined4 *)(puVar16 + 5) = 0;
  *(int *)((longlong)puVar16 + 0x2c) = iVar14;
  *(int *)(puVar16 + 6) = iVar8;
  *(int *)((longlong)puVar16 + 0x34) = iVar9;
  puVar16[7] = param_7;
  puVar16[8] = param_4;
  puVar16[9] = &local_f0;
  *(undefined1 *)(puVar16 + 10) = uVar19;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  *(int *)((longlong)puVar16 + 0x24) = iVar9;
  *(int *)(puVar16 + 0xc) = iVar20;
  FUN_1447f90c4(puVar16 + 0xb,0);
  FUN_144afd42a(puVar16[0xb],iVar20);
  if (puVar16 == (undefined8 *)0x0) {
    LOCK();
    iVar14 = _DAT_00000028 + 1;
    UNLOCK();
    if ((_DAT_00000028 != -1) && (iVar8 = _DAT_00000028, _DAT_00000028 < _DAT_00000060))
    goto LAB_1401f909e;
  }
  else {
    LOCK();
    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar16 + 5);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar14 = _DAT_00000028;
    if ((iVar8 != -1) && (iVar8 < *(int *)(puVar16 + 0xc))) {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      iVar14 = _DAT_00000028;
LAB_1401f909e:
      _DAT_00000028 = iVar14;
      local_d0 = puVar16;
      FUN_1448eed04(&local_d0,iVar8,1);
      iVar14 = _DAT_00000028;
      if (local_d0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_d0 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        iVar14 = _DAT_00000028;
        if (*piVar1 == 0) {
          (**(code **)*local_d0)(local_d0,1);
          iVar14 = _DAT_00000028;
        }
      }
    }
  }
  _DAT_00000028 = iVar14;
  local_c4 = '\0';
  local_d0 = puVar16;
  local_c8 = iVar20;
  cVar7 = FUN_14007617a(&local_d0,1);
  if (cVar7 == '\0') {
    plVar5 = (longlong *)CONCAT44(uStack_ec,local_f0);
    if (((param_6 & 4) == 0) || (*(int *)local_100 != 0x10)) {
      (**(code **)(*plVar5 + 0x20))(plVar5,0xffffffff,0);
    }
    else {
      cVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,1,0);
      while (cVar7 == '\0') {
        (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,DAT_14c7585d4);
        cVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_ec,local_f0) + 0x20))
                          ((longlong *)CONCAT44(uStack_ec,local_f0),1,0);
      }
    }
  }
  if ((local_d0 != (undefined8 *)0x0) &&
     ((local_c4 != '\x01' || (FUN_1448eed04(&local_d0,local_c8,1), local_d0 != (undefined8 *)0x0))))
  {
    LOCK();
    piVar1 = (int *)(local_d0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      if (*(code **)*local_d0 == FUN_140200994) {
        FUN_140200994(local_d0,1);
      }
      else {
        (**(code **)*local_d0)(local_d0,1);
      }
    }
  }
  FUN_144a75412(&local_f0);
LAB_1401f9156:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401f92c0 FUN_1401f92c0 body=97 status=ok
// SIG undefined FUN_1401f92c0(void)

undefined2 FUN_1401f92c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 == (longlong *)0x0) {
LAB_1401f9300:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1401f9300;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x38) + 0xc);
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
  return uVar6;
}



// FUNCTION 1401f9322 FUN_1401f9322 body=103 status=ok
// SIG undefined FUN_1401f9322(void)

ulonglong FUN_1401f9322(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_1401f938a();
  if (cVar1 == '\0') {
LAB_1401f936a:
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x660);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar2 == 0) goto LAB_1401f936a;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1401f938a FUN_1401f938a body=617 status=ok
// SIG undefined FUN_1401f938a(void)

bool FUN_1401f938a(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x9f) & 0x40) == 0) {
    if ((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
        ((lVar5 = *(longlong *)(param_1 + 0xb0), lVar5 != 0 ||
         (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)))) &&
       ((((*(byte *)(lVar5 + 0x152) == 1 || (*(byte *)(lVar5 + 0x152) - 5 < 2)) &&
         (*(longlong *)(lVar5 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
      bVar1 = *(byte *)(param_1 + 0x1fc);
      iVar4 = *(int *)(*(longlong *)(lVar5 + 0x178) + 0x3e4);
      if (iVar4 < 0) {
        iVar4 = FUN_141348de4();
      }
      if (iVar4 < (int)(uint)bVar1) goto LAB_1401f94b1;
    }
    if (((*(byte *)(param_1 + 0x9c) & 1) != 0) ||
       ((*(int *)(param_1 + 0x98) == 1 &&
        (cVar3 = (*(code *)**(undefined8 **)(param_1 + 0x30))(param_1 + 0x30), cVar3 != '\0')))) {
      if ((*(byte *)(param_1 + 0x2d3) & 4) != 0) {
        bVar7 = true;
        goto LAB_1401f9480;
      }
      if (((*(int *)(param_1 + 0x554) == 0) || (uVar2 = *(uint *)(param_1 + 0x550), (int)uVar2 < 0))
         || (((DAT_14c9647dc <= (int)uVar2 ||
              (((plVar6 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x554))) ||
               ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) || (lVar5 = *plVar6, lVar5 == 0)))) {
LAB_1401f9473:
        lVar5 = param_1;
      }
      else {
        if ((*(longlong *)(lVar5 + 0xa8) != 0) &&
           ((*(byte *)(*(longlong *)(lVar5 + 0xa8) + 0x65) & 1) == 0)) goto LAB_1401f94b1;
        if (DAT_14cad2858 == 0) {
          local_40 = &local_20;
          local_20 = FUN_144a7958c;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_146395584;
          local_48 = &LAB_147a0ba80;
          local_50 = &LAB_14575ccce;
          local_58 = L"Engine";
          local_60 = 0x40000000000;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
        goto LAB_1401f9473;
      }
      bVar7 = *(char *)(lVar5 + 0x427) != '\0';
      goto LAB_1401f9480;
    }
  }
LAB_1401f94b1:
  bVar7 = false;
LAB_1401f9480:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 1401f95f4 FUN_1401f95f4 body=70 status=ok
// SIG undefined FUN_1401f95f4(void)

void FUN_1401f95f4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f963a(param_1 + 4);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401f963a FUN_1401f963a body=55 status=ok
// SIG undefined FUN_1401f963a(void)

void FUN_1401f963a(longlong *param_1)

{
  FUN_1401f9672(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401f9672 FUN_1401f9672 body=123 status=ok
// SIG undefined FUN_1401f9672(void)

void FUN_1401f9672(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1401f96ee FUN_1401f96ee body=369 status=ok
// SIG undefined FUN_1401f96ee(void)

void FUN_1401f96ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bad5cc0;
  FUN_1401f9ba6();
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f9f(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9860(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9898(param_1 + 0x21);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1448eac94(param_1 + 0x16);
  FUN_1401f9e80(param_1 + 0xc);
  FUN_1401f9e80(param_1 + 2);
  return;
}



// FUNCTION 1401f9860 FUN_1401f9860 body=55 status=ok
// SIG undefined FUN_1401f9860(void)

void FUN_1401f9860(longlong *param_1)

{
  FUN_1401f98d0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401f9898 FUN_1401f9898 body=55 status=ok
// SIG undefined FUN_1401f9898(void)

void FUN_1401f9898(longlong *param_1)

{
  FUN_1401f994c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401f98d0 FUN_1401f98d0 body=123 status=ok
// SIG undefined FUN_1401f98d0(void)

void FUN_1401f98d0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1401f994c FUN_1401f994c body=123 status=ok
// SIG undefined FUN_1401f994c(void)

void FUN_1401f994c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1401f99c8 FUN_1401f99c8 body=316 status=ok
// SIG undefined FUN_1401f99c8(void)

void FUN_1401f99c8(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58 [12];
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0xb1) & 0x60) == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    uVar5 = -*(int *)(param_1 + 0x5c) & (*(int *)(param_1 + 0x5c) + iVar1) - 1U;
    plVar2 = *(longlong **)(param_1 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
      iVar3 = 0;
    }
    else {
      (**(code **)(*plVar2 + 8))(plVar2,local_58);
      if ((0 < (int)param_3) && ((local_4c & 4) != 0)) {
        uVar4 = (ulonglong)param_3;
        lVar6 = param_2;
        do {
          (**(code **)(*plVar2 + 0x20))(plVar2,lVar6);
          lVar6 = lVar6 + (int)uVar5;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar3 = (int)plVar2[1];
      iVar1 = *(int *)(param_1 + 0x58);
    }
    if ((iVar3 < iVar1) && (plVar2 = *(longlong **)(param_1 + 0x80), plVar2 != (longlong *)0x0)) {
      local_60 = (longlong)(int)uVar5;
      do {
        if (*(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6] + *(int *)((longlong)plVar2 + 0x44)
            <= iVar3) break;
        if ((0 < (int)param_3) &&
           (uVar4 = (ulonglong)param_3, lVar6 = param_2, (plVar2[7] & 0x1000000000U) == 0)) {
          do {
            if ((plVar2[7] & 0x1000000000U) == 0) {
              (**(code **)(*plVar2 + 0x148))(plVar2,*(int *)((longlong)plVar2 + 0x44) + lVar6);
            }
            uVar4 = uVar4 - 1;
            lVar6 = lVar6 + local_60;
          } while (uVar4 != 0);
        }
        plVar2 = (longlong *)plVar2[0xb];
      } while (plVar2 != (longlong *)0x0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401f9b1e FUN_1401f9b1e body=66 status=ok
// SIG undefined FUN_1401f9b1e(void)

void FUN_1401f9b1e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_2 + *(int *)(param_1 + 0x34) * lVar2) != 0) {
        FUN_1400020a8();
        iVar1 = *(int *)(param_1 + 0x30);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 1401f9b60 FUN_1401f9b60 body=69 status=ok
// SIG undefined FUN_1401f9b60(void)

void FUN_1401f9b60(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_2 + 0x18 + *(int *)(param_1 + 0x34) * lVar2) != 0) {
        FUN_1400020a8();
        iVar1 = *(int *)(param_1 + 0x30);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 1401f9ba6 FUN_1401f9ba6 body=729 status=ok
// SIG undefined FUN_1401f9ba6(void)

void FUN_1401f9ba6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1401fa1fe();
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 4;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if ((undefined8 *)(param_1 + 0x10) != &local_98) {
    FUN_1401fa0f0((undefined8 *)(param_1 + 0x10),0,0);
  }
  *(undefined1 *)(param_1 + 0x20) = local_88;
  FUN_1401fa034(param_1 + 0x28,&local_80);
  FUN_1401f9fdc(param_1 + 0x38,&local_70);
  FUN_1401fa092(param_1 + 0x48,&local_60);
  *(undefined4 *)(param_1 + 0x58) = local_50;
  FUN_1401f9e80(&local_98);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 4;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if ((undefined8 *)(param_1 + 0x60) != &local_98) {
    FUN_1401fa0f0((undefined8 *)(param_1 + 0x60),0,0);
  }
  *(undefined1 *)(param_1 + 0x70) = local_88;
  FUN_1401fa034(param_1 + 0x78,&local_80);
  FUN_1401f9fdc(param_1 + 0x88,&local_70);
  FUN_1401fa092(param_1 + 0x98,&local_60);
  *(undefined4 *)(param_1 + 0xa8) = local_50;
  FUN_1401f9e80(&local_98);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  FUN_1448a8284(param_1 + 0x1f0);
  if (*(int *)(param_1 + 0x1b4) < 0) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    FUN_1459747b8(param_1 + 0x1a8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x214);
  FUN_1401f9f9f(*(undefined8 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x210));
  *(undefined4 *)(param_1 + 0x210) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x214) != 0)) {
    FUN_1490ee65e(param_1 + 0x208,0);
  }
  if (*(int *)(param_1 + 0x224) < 0) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    FUN_1459b4c14(param_1 + 0x218,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  if ((((*(int *)(param_1 + 0xbc) != 0) && (uVar2 = *(uint *)(param_1 + 0xb8), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar3 != 0 &&
       (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xbc))) &&
      (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 && (*(longlong *)(param_1 + 0xc0) != 0)))))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  if (*(int *)(param_1 + 0x1cc) < 0) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    FUN_14481578e(param_1 + 0x1c0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 0;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401f9e80 FUN_1401f9e80 body=93 status=ok
// SIG undefined FUN_1401f9e80(void)

void FUN_1401f9e80(longlong param_1)

{
  FUN_1401f9f1c(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9edd(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f5c(param_1);
  return;
}



// FUNCTION 1401f9edd FUN_1401f9edd body=63 status=ok
// SIG undefined FUN_1401f9edd(void)

void FUN_1401f9edd(longlong param_1,int param_2)

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



// FUNCTION 1401f9f1c FUN_1401f9f1c body=63 status=ok
// SIG undefined FUN_1401f9f1c(void)

void FUN_1401f9f1c(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401f9f5c FUN_1401f9f5c body=67 status=ok
// SIG undefined FUN_1401f9f5c(void)

void FUN_1401f9f5c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)*param_1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2f0))(plVar2,lVar1,1);
    }
    FUN_1400020a8(lVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1401f9f9f FUN_1401f9f9f body=61 status=ok
// SIG undefined FUN_1401f9f9f(void)

void FUN_1401f9f9f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140201ac2(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1401f9fdc FUN_1401f9fdc body=88 status=ok
// SIG undefined FUN_1401f9fdc(void)

undefined8 * FUN_1401f9fdc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1456e48f6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1401fa034 FUN_1401fa034 body=93 status=ok
// SIG undefined FUN_1401fa034(void)

undefined8 * FUN_1401fa034(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401f9edd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1456e4a14(param_1,iVar1);
      FUN_1456e488d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1401fa092 FUN_1401fa092 body=93 status=ok
// SIG undefined FUN_1401fa092(void)

undefined8 * FUN_1401fa092(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401f9f1c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1456e4958(param_1,iVar1);
      FUN_1456e48c1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1401fa0f0 FUN_1401fa0f0 body=269 status=ok
// SIG undefined FUN_1401fa0f0(void)

void FUN_1401fa0f0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == param_2 && param_2 != (longlong *)0x0) {
    lVar1 = param_1[1];
    if (param_3 == 0) {
      FUN_141095ae8(plVar3,lVar1,1);
      return;
    }
LAB_1401fa198:
    FUN_1449b16b6(plVar3,lVar1,param_3,1);
    return;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2f0))(plVar3,lVar1,1);
    }
    FUN_1400020a8(lVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    uVar4 = -*(int *)((longlong)param_2 + 0x5c) &
            ((int)param_2[0xb] + *(int *)((longlong)param_2 + 0x5c)) - 1U;
    uVar2 = 1;
    if (1 < (int)uVar4) {
      uVar2 = uVar4;
    }
    lVar1 = FUN_14001cc68(uVar2);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *param_1 = (longlong)param_2;
    param_1[1] = lVar1;
    (**(code **)(*param_2 + 0x2e8))(param_2,lVar1,1);
    if (param_3 != 0) {
      lVar1 = param_1[1];
      plVar3 = param_2;
      goto LAB_1401fa198;
    }
  }
  return;
}



// FUNCTION 1401fa1fe FUN_1401fa1fe body=218 status=ok
// SIG undefined FUN_1401fa1fe(void)

void FUN_1401fa1fe(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  plVar2 = *(longlong **)(param_1 + 0xc0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar2[0x21] = param_1;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  uVar4 = *(uint *)(param_1 + 0xec);
  iVar5 = 0;
  if ((int)uVar4 < 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    FUN_1490f24dc(param_1 + 0xe0);
    iVar5 = *(int *)(param_1 + 0xe8);
    uVar4 = *(uint *)(param_1 + 0xec);
  }
  *(uint *)(param_1 + 0xe8) = iVar5 + 1U;
  if (uVar4 < iVar5 + 1U) {
    FUN_1401fa2e0(param_1 + 0xe0,iVar5);
  }
  lVar3 = *(longlong *)(param_1 + 0xe0);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar5 * 0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar5 * 0x14) = 0xffffffff;
  if (*(int *)(param_1 + 0xfc) < 0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    FUN_1448759c8(param_1 + 0xf0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}



// FUNCTION 1401fa2e0 FUN_1401fa2e0 body=370 status=ok
// SIG undefined FUN_1401fa2e0(void)

void FUN_1401fa2e0(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401fa369;
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
LAB_1401fa369:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 1401fa452 FUN_1401fa452 body=88 status=ok
// SIG undefined FUN_1401fa452(void)

void FUN_1401fa452(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1[6];
  param_1[6] = param_2;
  (**(code **)(*param_1 + 0x2b8))();
  FUN_1407a53c4(param_1,param_2,param_3,param_4);
  param_1[6] = lVar1;
  FUN_1401fa4aa(param_2,param_1[7],(int)param_1[8]);
  return;
}



// FUNCTION 1401fa4aa FUN_1401fa4aa body=150 status=ok
// SIG undefined FUN_1401fa4aa(void)

void FUN_1401fa4aa(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((param_1 != 0) && (plVar2 = *(longlong **)(param_1 + 0xa8), plVar2 != (longlong *)0x0)) {
    uVar1 = FUN_1408e1156();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1408e1156();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,param_1);
        if (lVar4 != 0) {
          FUN_1409804ea(lVar4,param_2,param_3,*(undefined1 *)(lVar4 + 0x7a),0,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1401fa540 FUN_1401fa540 body=228 status=ok
// SIG undefined FUN_1401fa540(void)

longlong FUN_1401fa540(void)

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
  if (DAT_14cb58980 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148655a8b;
    local_40 = FUN_1464c2f0b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActorPartOwner",&DAT_14cb58980,&DAT_148655a8a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58980;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fa626 FUN_1401fa626 body=149 status=ok
// SIG undefined FUN_1401fa626(void)

undefined8 * FUN_1401fa626(undefined8 *param_1,int param_2)

{
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0xb] != 0) {
    FUN_1401fa6bc(param_1 + 0xb,&local_1a,&local_19);
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[0xb] = 0;
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fa6bc FUN_1401fa6bc body=138 status=ok
// SIG undefined FUN_1401fa6bc(void)

void FUN_1401fa6bc(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (char)param_1[1];
  if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return;
    }
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (cVar1 != '\x03') {
      return;
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return;
    }
    FUN_146cd3abe(param_1);
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1401fa756 FUN_1401fa756 body=121 status=ok
// SIG undefined FUN_1401fa756(void)

void FUN_1401fa756(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_1403de8ba(param_1 + 2,0);
  }
  lVar2 = (longlong)(int)param_1[1];
  if (0 < lVar2) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
      lVar2 = (longlong)(int)param_1[1];
      if (lVar2 == 0) {
        return;
      }
    }
    lVar1 = DAT_14caa8580;
    lVar3 = *param_1;
    lVar2 = lVar3 + lVar2 * 8;
    do {
      FUN_1403a41cc(lVar1,lVar3,param_1 + 2);
      lVar3 = lVar3 + 8;
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 1401fa7d0 FUN_1401fa7d0 body=269 status=ok
// SIG undefined FUN_1401fa7d0(void)

bool FUN_1401fa7d0(longlong param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = param_1 + 0x30;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x170);
  }
  plVar6 = (longlong *)((longlong)(*(int *)(param_1 + 0x454) % param_3) * 0x50 + lVar4);
  uVar2 = ((uint)(*(ulonglong *)(param_2 + 2) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)(param_2 + 2) >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  iVar3 = FUN_1401fa8de(plVar6,(uVar2 >> 2) + uVar2 * 0x40 + *param_2 + 0x9e3779b9 ^ uVar2,param_2);
  if (iVar3 != -1) {
    lVar4 = *plVar6;
    bVar7 = false;
    local_18 = 0;
    if ((lVar4 + (longlong)iVar3 * 0x30 == 0) ||
       (puVar5 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x30 + 0x18), puVar5 == (undefined8 *)0x0)
       ) goto LAB_1401fa863;
    local_28 = 0xffffffff;
    cVar1 = (**(code **)(*DAT_14ca83900 + 0x2b8))(DAT_14ca83900,*puVar5,&local_18,1);
    if (cVar1 != '\0') {
      bVar7 = local_18 == 0;
      goto LAB_1401fa863;
    }
  }
  bVar7 = false;
LAB_1401fa863:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fa8de FUN_1401fa8de body=121 status=ok
// SIG undefined FUN_1401fa8de(void)

int FUN_1401fa8de(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x30;
        if ((((*(int *)(lVar3 + lVar5) == *param_3) &&
             (lVar1 = lVar3 + lVar5, *(longlong *)(lVar1 + 8) == *(longlong *)(param_3 + 2))) &&
            (*(int *)(lVar1 + 0x10) == param_3[4])) && (*(char *)(lVar1 + 0x14) == (char)param_3[5])
           ) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x28 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1401fa958 FUN_1401fa958 body=26 status=ok
// SIG undefined FUN_1401fa958(void)

void FUN_1401fa958(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1401fa972(param_1,*(undefined4 *)(param_1 + 8),param_2,0xc);
    return;
  }
  return;
}



// FUNCTION 1401fa972 FUN_1401fa972 body=469 status=ok
// SIG undefined FUN_1401fa972(void)

void FUN_1401fa972(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401faaa2:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401faadf:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401fa9dc;
LAB_1401fa9d1:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401fa9dc:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x0001401faa09;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401faa5f:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401faadf;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401faaa2;
code_r0x0001401faa09:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1401faa5f;
    }
  }
  goto LAB_1401fa9d1;
}



// FUNCTION 1401fab48 FUN_1401fab48 body=96 status=ok
// SIG undefined FUN_1401fab48(void)

void FUN_1401fab48(longlong param_1,undefined8 param_2)

{
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb8));
    FUN_1448eb096(*(longlong *)(param_1 + 0x28) + 0x160,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001401fab89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb8));
    return;
  }
  FUN_1448eb096(*(longlong *)(param_1 + 0x28) + 0x160,param_2);
  return;
}



// FUNCTION 1401faba8 FUN_1401faba8 body=110 status=ok
// SIG undefined FUN_1401faba8(void)

void FUN_1401faba8(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 0x208);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140431d5c(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_2 + 0x200);
    if (*(longlong *)(param_2 + 0x200) == 0) {
      lVar3 = param_2;
    }
    FUN_1448eb146((longlong)iVar2 * 0x20 + *param_1,lVar3,uVar1);
    return;
  }
  return;
}



// FUNCTION 1401fac16 FUN_1401fac16 body=278 status=ok
// SIG undefined FUN_1401fac16(void)

longlong FUN_1401fac16(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 0x218);
  }
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = param_5;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)(param_1 + 0xac) = param_6;
  *(undefined4 *)(param_1 + 0xb0) = param_7;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  FUN_1401fad2c(param_1);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x6f0);
    uVar2 = *(undefined8 *)(param_4 + 0x6d0);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_4 + 0x6e0);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    *(undefined8 *)(param_1 + 0x90) = uVar1;
  }
  return param_1;
}



// FUNCTION 1401fad2c FUN_1401fad2c body=746 status=ok
// SIG undefined FUN_1401fad2c(void)

void FUN_1401fad2c(undefined4 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined4 uVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  plVar2 = *(longlong **)(param_1 + 0x16);
  if (plVar2 == (longlong *)0x0) {
    local_130 = &DAT_100000001;
  }
  else {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_130);
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
      dVar16 = 1.0;
      goto LAB_1401fadd5;
    }
  }
  dVar16 = (double)(float)param_1[0x2c];
LAB_1401fadd5:
  FUN_1401fb128(&local_128,(ulonglong)local_130 & 0xffffffff,local_130._4_4_);
  dVar5 = local_128 * 0.0 + local_108 * 0.0;
  dVar6 = dStack_120 * 0.0 + dStack_100 * 0.0;
  dVar9 = local_118 * 0.0 + local_f8 * 0.0;
  dVar10 = dStack_110 * 0.0 + dStack_f0 * 0.0;
  dVar27 = local_e8 * 0.0;
  dVar28 = dStack_e0 * 0.0;
  dVar25 = local_d8 * 0.0;
  dVar26 = dStack_d0 * 0.0;
  dVar7 = dVar6 + dVar28 + dStack_c0;
  dVar24 = local_c8 * 0.0;
  dStack_c0 = dStack_c0 * 0.0;
  dVar11 = dVar10 + dVar26 + dStack_b0;
  dVar23 = local_b8 * 0.0;
  dStack_b0 = dStack_b0 * 0.0;
  dVar18 = dVar16 * dStack_120 + dStack_100 * 0.0 + dVar28 + dStack_c0;
  dVar28 = dStack_100 * dVar16 + dStack_120 * 0.0 + dVar28 + dStack_c0;
  dStack_c0 = dStack_e0 * dVar16 + dVar6 + dStack_c0;
  dVar20 = dVar16 * dStack_110 + dStack_f0 * 0.0 + dVar26 + dStack_b0;
  dVar6 = dStack_f0 * dVar16 + dStack_110 * 0.0 + dVar26 + dStack_b0;
  dStack_b0 = dVar16 * dStack_d0 + dVar10 + dStack_b0;
  iVar1 = param_1[0xc];
  param_1[0xc] = iVar1 + 1U;
  if ((uint)param_1[0xd] < iVar1 + 1U) {
    FUN_1401fb018(param_1 + 10,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 10);
  lVar22 = (longlong)iVar1 * 0x90;
  auVar17._8_4_ = SUB84(dVar18,0);
  auVar17._0_8_ = dVar16 * local_128 + local_108 * 0.0 + dVar27 + dVar24;
  auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + lVar22) = auVar17;
  auVar19._8_4_ = SUB84(dVar20,0);
  auVar19._0_8_ = dVar16 * local_118 + local_f8 * 0.0 + dVar25 + dVar23;
  auVar19._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + 0x10 + lVar22) = auVar19;
  auVar12._8_4_ = SUB84(dVar28,0);
  auVar12._0_8_ = local_108 * dVar16 + local_128 * 0.0 + dVar27 + dVar24;
  auVar12._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + 0x20 + lVar22) = auVar12;
  auVar13._8_4_ = SUB84(dVar6,0);
  auVar13._0_8_ = local_f8 * dVar16 + local_118 * 0.0 + dVar25 + dVar23;
  auVar13._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + 0x30 + lVar22) = auVar13;
  auVar14._8_4_ = SUB84(dStack_c0,0);
  auVar14._0_8_ = local_e8 * dVar16 + dVar5 + dVar24;
  auVar14._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + 0x40 + lVar22) = auVar14;
  auVar15._8_4_ = SUB84(dStack_b0,0);
  auVar15._0_8_ = dVar16 * local_d8 + dVar9 + dVar23;
  auVar15._12_4_ = (int)((ulonglong)dStack_b0 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + 0x50 + lVar22) = auVar15;
  auVar4._8_4_ = SUB84(dVar7,0);
  auVar4._0_8_ = dVar5 + dVar27 + local_c8;
  auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + 0x60 + lVar22) = auVar4;
  auVar8._8_4_ = SUB84(dVar11,0);
  auVar8._0_8_ = dVar9 + dVar25 + local_b8;
  auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + 0x70 + lVar22) = auVar8;
  uVar21 = FUN_1448eb174(lVar3 + lVar22,0x80,0);
  *(undefined4 *)(lVar3 + 0x80 + lVar22) = uVar21;
  *param_1 = 0x3f800000;
  param_1[0x46] = 0xffffffff;
  iVar1 = param_1[8];
  param_1[8] = iVar1 + 1U;
  if ((uint)param_1[9] < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 6,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 6) + (longlong)iVar1 * 4) = 0;
  if ((local_a0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fb018 FUN_1401fb018 body=272 status=ok
// SIG undefined FUN_1401fb018(void)

void FUN_1401fb018(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1401fb128 FUN_1401fb128 body=1083 status=ok
// SIG undefined FUN_1401fb128(void)

void FUN_1401fb128(undefined1 (*param_1) [16],uint param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  fVar19 = (float)param_2;
  if (fVar19 <= 1.0) {
    fVar19 = 1.0;
  }
  fVar20 = (float)param_3;
  if (fVar20 <= 1.0) {
    fVar20 = 1.0;
  }
  dVar25 = (double)(-1.0 / ((float)((longlong)fVar20 & 0xffffffff) * 0.5));
  dVar30 = (double)(1.0 / ((float)((longlong)fVar19 & 0xffffffff) * 0.5));
  dVar26 = dVar25 * 0.0;
  dVar21 = dVar30 + 0.0 + -0.0;
  dVar23 = dVar26 + 0.0 + 0.0;
  dVar30 = dVar30 * 0.0;
  dVar4 = dVar30 + 0.0 + 0.0 + -0.0;
  dVar5 = dVar25 + 0.0 + 0.0 + 0.0;
  dVar25 = dVar30 + 0.0 + 0.0;
  dVar30 = dVar26 + 0.0 + 0.0;
  dVar26 = dVar25 + -0.0;
  dVar28 = dVar30 + 0.0;
  dVar25 = dVar25 + -1.0;
  dVar30 = dVar30 + 1.0;
  dVar12 = dVar23 * 0.0 + dVar21 * 1.0 + 0.0;
  dVar13 = dVar23 * 1.0 + dVar21 * 0.0 + 0.0;
  dVar22 = dVar23 * 0.0 + dVar21 * 0.0 + 0.0;
  dVar24 = dVar23 * 0.0 + dVar21 * 0.0 + 0.0;
  dVar16 = dVar5 * 0.0 + dVar4 * 1.0 + 0.0;
  dVar17 = dVar5 * 1.0 + dVar4 * 0.0 + 0.0;
  dVar21 = dVar5 * 0.0 + dVar4 * 0.0 + 0.0;
  dVar5 = dVar5 * 0.0 + dVar4 * 0.0 + 0.0;
  dVar8 = dVar28 * 0.0 + dVar26 * 1.0 + 0.0;
  dVar9 = dVar28 * 1.0 + dVar26 * 0.0 + 0.0;
  dVar27 = dVar28 * 0.0 + dVar26 * 0.0 + 1.0;
  dVar29 = dVar28 * 0.0 + dVar26 * 0.0 + 0.0;
  dVar28 = dVar30 * 0.0 + dVar25 * 1.0 + 0.0;
  dVar6 = dVar30 * 1.0 + dVar25 * 0.0 + 0.0;
  dVar26 = dVar30 * 0.0 + dVar25 * 0.0 + 0.0 + 0.0;
  dVar30 = dVar30 * 0.0 + dVar25 * 0.0 + 0.0 + 1.0;
  dVar14 = dVar24 * 0.0 + dVar22 * 0.0 + dVar13 * 1.0 + dVar12 * 0.0;
  dVar18 = dVar5 * 0.0 + dVar21 * 0.0 + dVar17 * 1.0 + dVar16 * 0.0;
  dVar23 = dVar5 * 1.0 + dVar21 * 0.0 + dVar17 * 0.0 + dVar16 * 0.0;
  dVar10 = dVar29 * 0.0 + dVar27 * 0.0 + dVar9 * 1.0 + dVar8 * 0.0;
  dVar25 = dVar30 * 0.0 + dVar26 * 0.0 + dVar6 * 1.0 + dVar28 * 0.0;
  dVar4 = dVar30 * 1.0 + dVar26 * 0.0 + dVar6 * 0.0 + dVar28 * 0.0;
  auVar11._8_4_ = SUB84(dVar14,0);
  auVar11._0_8_ = dVar24 * 0.0 + dVar22 * 0.0 + dVar13 * 0.0 + dVar12 * 1.0;
  auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *param_1 = auVar11;
  *(double *)param_1[1] = dVar24 * 0.0 + dVar22 * 1.0 + dVar13 * 0.0 + dVar12 * 0.0;
  *(double *)(param_1[1] + 8) = dVar24 * 1.0 + dVar22 * 0.0 + dVar13 * 0.0 + dVar12 * 0.0;
  auVar15._8_4_ = SUB84(dVar18,0);
  auVar15._0_8_ = dVar5 * 0.0 + dVar21 * 0.0 + dVar17 * 0.0 + dVar16 * 1.0;
  auVar15._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  param_1[2] = auVar15;
  auVar3._8_4_ = SUB84(dVar23,0);
  auVar3._0_8_ = dVar5 * 0.0 + dVar21 * 1.0 + dVar17 * 0.0 + dVar16 * 0.0;
  auVar3._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  param_1[3] = auVar3;
  auVar7._8_4_ = SUB84(dVar10,0);
  auVar7._0_8_ = dVar29 * 0.0 + dVar27 * 0.0 + dVar9 * 0.0 + dVar8 * 1.0;
  auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  param_1[4] = auVar7;
  *(double *)param_1[5] = dVar29 * 0.0 + dVar27 * 1.0 + dVar9 * 0.0 + dVar8 * 0.0;
  *(double *)(param_1[5] + 8) = dVar29 * 1.0 + dVar27 * 0.0 + dVar9 * 0.0 + dVar8 * 0.0;
  auVar1._8_4_ = SUB84(dVar25,0);
  auVar1._0_8_ = dVar30 * 0.0 + dVar26 * 0.0 + dVar6 * 0.0 + dVar28 * 1.0;
  auVar1._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  param_1[6] = auVar1;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar30 * 0.0 + dVar26 * 1.0 + dVar6 * 0.0 + dVar28 * 0.0;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  param_1[7] = auVar2;
  return;
}



// FUNCTION 1401fb564 FUN_1401fb564 body=22 status=ok
// SIG undefined FUN_1401fb564(void)

undefined1 FUN_1401fb564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1401fb57a(param_2,param_3);
  return 1;
}



// FUNCTION 1401fb57a FUN_1401fb57a body=587 status=ok
// SIG undefined FUN_1401fb57a(void)

longlong * FUN_1401fb57a(longlong *param_1,double *param_2)

{
  float *pfVar1;
  double *pdVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [36];
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)((longlong)param_1 + 0x44) < 0x3ec) {
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_20);
      }
    }
    else {
      local_20 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_24);
      }
    }
    else {
      local_24 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    *param_2 = (double)local_1c;
    param_2[1] = (double)local_20;
    param_2[2] = (double)local_24;
  }
  else {
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[1] = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    param_2 = param_2 + 2;
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fb7cc FUN_1401fb7cc body=344 status=ok
// SIG undefined FUN_1401fb7cc(void)

longlong * FUN_1401fb7cc(longlong *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_1 + 0x2b) & 6) == 2) goto LAB_1401fb8a2;
  if (param_2[1] == 0) {
LAB_1401fb8d8:
    local_30 = 0;
  }
  else {
    uVar2 = *param_2;
    local_30 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_2[1] || ((*(uint *)(plVar3 + 1) >> 0x1c & 1) != 0))))
      goto LAB_1401fb8d8;
      local_30 = *plVar3;
    }
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  if (((*(byte *)(param_1 + 5) & 1) != 0) || ((*(byte *)((longlong)param_1 + 0x2b) & 4) != 0)) {
    if (local_30 == 0) {
      *param_2 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(local_30 + 0xc);
      *param_2 = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar2 = *(uint *)(lVar5 + 0x10);
      if (*(uint *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar4);
        }
        LOCK();
        uVar2 = *(uint *)(lVar5 + 0x10);
        bVar6 = uVar2 == 0;
        if (bVar6) {
          *(uint *)(lVar5 + 0x10) = uVar4;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          uVar2 = uVar4;
        }
      }
    }
    param_2[1] = uVar2;
  }
LAB_1401fb8a2:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401fb926 FUN_1401fb926 body=58 status=ok
// SIG undefined FUN_1401fb926(void)

undefined8 FUN_1401fb926(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1448d221e(*(undefined2 *)(param_1 + 0x48));
  if ((cVar1 != '\0') && ((*(ulonglong *)(param_1 + 0x38) & 0x2000000002) != 0)) {
    uVar2 = FUN_1401fb960(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1401fb960 FUN_1401fb960 body=940 status=ok
// SIG undefined FUN_1401fb960(void)

ulonglong FUN_1401fb960(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae1520) && (FUN_144b3d300(&DAT_14cae1520), DAT_14cae1520 == -1)) {
    FUN_140056680(&DAT_14cae1508,L"r.GPUSkin.UnlimitedBoneInfluences");
    DAT_14cae1518 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_143518fcc);
    _Init_thread_footer(&DAT_14cae1520);
  }
  uVar1 = *(ushort *)(param_1 + 0x48);
  puVar3 = &DAT_14ca84468;
  if (uVar1 == 0x31) goto switchD_1401fbab4_caseD_33;
  switch(uVar1) {
  case 0x30:
switchD_1401fbab4_caseD_30:
    puVar3 = &DAT_14ca84470;
    break;
  case 0x31:
  case 0x32:
switchD_1401fbab4_caseD_31:
    if ((uVar1 & 0xfff0) == 0x20) {
      lVar5 = FUN_14741392a();
      puVar3 = (undefined8 *)(lVar5 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    }
    uVar7 = 0;
    goto LAB_1401fb9a6;
  case 0x33:
    break;
  case 0x34:
switchD_1401fbab4_caseD_34:
    puVar3 = &DAT_14ca84480;
    break;
  case 0x35:
switchD_1401fbab4_caseD_35:
    puVar3 = &DAT_14ca84478;
    break;
  default:
    switch((uint)uVar1) {
    case 0:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x14:
      break;
    default:
      goto switchD_1401fbab4_caseD_31;
    case 0xb:
    case 0xc:
      goto switchD_1401fbab4_caseD_35;
    case 0x10:
    case 0x16:
    case 0x1b:
      goto switchD_1401fbab4_caseD_34;
    case 0x15:
    case 0x18:
      goto switchD_1401fbab4_caseD_30;
    case 0x1e:
    case 0x1f:
      puVar3 = &DAT_14ca84488;
    }
  }
switchD_1401fbab4_caseD_33:
  uVar7 = *puVar3;
LAB_1401fb9a6:
  if (DAT_14cae1518 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar6 = DAT_14cae1508;
    if (DAT_14cae1510 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    DAT_14cae1518 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar6,1);
  }
  cVar2 = FUN_14002b5e0(uVar7,"Windows",7);
  if ((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) {
    (**(code **)(*DAT_14cae1518 + 0xb0))();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae1540) && (FUN_144b3d300(&DAT_14cae1540), DAT_14cae1540 == -1)) {
    FUN_140056680(&DAT_14cae1528,L"r.GPUSkin.AlwaysUseDeformerForUnlimitedBoneInfluences");
    DAT_14cae1538 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_143518fdd);
    _Init_thread_footer(&DAT_14cae1540);
  }
  uVar1 = *(ushort *)(param_1 + 0x48);
  puVar3 = &DAT_14ca84468;
  if (uVar1 != 0x31) {
    switch(uVar1) {
    case 0x30:
switchD_1401fbad0_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1401fbad0_caseD_31:
      if ((uVar1 & 0xfff0) != 0x20) {
        uVar7 = 0;
        goto LAB_1401fba22;
      }
      lVar5 = FUN_14741392a();
      puVar3 = (undefined8 *)(lVar5 + (ulonglong)(uVar1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1401fbad0_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1401fbad0_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar1) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1401fbad0_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1401fbad0_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1401fbad0_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1401fbad0_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
  }
  uVar7 = *puVar3;
LAB_1401fba22:
  if (DAT_14cae1538 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar6 = DAT_14cae1528;
    if (DAT_14cae1530 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    DAT_14cae1538 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar6,1);
  }
  cVar2 = FUN_14002b5e0(uVar7,"Windows",7);
  if ((cVar2 != '\0') || (uVar1 == DAT_14ca85550)) {
    (**(code **)(*DAT_14cae1538 + 0xa8))();
  }
  cVar2 = FUN_1448eb2da(*(undefined2 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x20));
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulonglong *)(param_1 + 0x38);
    if ((uVar4 & 0x1800000000) == 0) {
      uVar4 = (ulonglong)(((uint)uVar4 & 2) >> 1);
    }
    else {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4;
}



// FUNCTION 1401fbd1c FUN_1401fbd1c body=1183 status=ok
// SIG undefined FUN_1401fbd1c(void)

ulonglong FUN_1401fbd1c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  double dStack_f0;
  double local_e8;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  longlong alStack_d0 [21];
  
  alStack_d0[2] = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar3 = (undefined4 *)*param_4;
  uStack_d8 = (undefined5)((ulonglong)*(undefined8 *)((longlong)puVar3 + 0x2d) >> 0x18);
  local_108 = *puVar3;
  uStack_104 = puVar3[1];
  uStack_100 = puVar3[2];
  uStack_fc = puVar3[3];
  local_f8 = *(undefined8 *)(puVar3 + 4);
  dStack_f0 = *(double *)(puVar3 + 6);
  local_e8 = *(double *)(puVar3 + 8);
  uStack_e0 = (undefined5)*(undefined8 *)(puVar3 + 10);
  uStack_db = (undefined3)((ulonglong)*(undefined8 *)(puVar3 + 10) >> 0x28);
  bVar19 = false;
  lVar18 = 0;
  bVar14 = DAT_14c950c29;
  do {
    lVar15 = *(longlong *)(puVar3 + lVar18 * 2 + 0xe);
    alStack_d0[lVar18] = lVar15;
    if (((bVar14 & 1) != 0) && (lVar15 != 0)) {
      FUN_1456cec3c();
      bVar14 = DAT_14c950c29;
    }
    lVar18 = 1;
    bVar13 = !bVar19;
    bVar19 = true;
  } while (bVar13);
  lVar18 = FUN_143642428(param_2);
  lVar15 = FUN_143642428(param_3);
  uVar17 = (ulonglong)(lVar18 == 0);
  if (lVar15 != 0 && lVar18 != 0) {
    if ((*(longlong *)(lVar18 + 0x138) == 0) || (*(longlong *)(lVar15 + 0x138) == 0)) {
      uVar1 = *(uint *)(lVar15 + 0x144);
      uVar17 = (ulonglong)uVar1;
      if ((uVar1 != 0) &&
         ((((uVar2 = *(uint *)(lVar15 + 0x140), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
           (lVar18 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar18 != 0)) &&
          (*(uint *)(lVar18 + 0x10) == uVar1)))) {
        uVar17 = (ulonglong)*(uint *)(lVar18 + 8);
      }
    }
    else {
      FUN_1402a8b50(&local_160,(longlong *)(lVar18 + 0x138),&local_108);
      lVar18 = *(longlong *)(lVar18 + 0x138);
      dVar4 = 0.0;
      dVar7 = 0.0;
      dVar6 = 0.0;
      dVar5 = 0.0;
      if (((lVar18 != 0) &&
          (lVar18 = *(longlong *)(lVar18 + 0x40), dVar7 = 0.0, dVar6 = 0.0, dVar5 = 0.0, lVar18 != 0
          )) && (dVar7 = 0.0, dVar6 = 0.0, dVar5 = 0.0, *(char *)(lVar18 + 0x90) != '\0')) {
        dVar7 = (double)*(float *)(lVar18 + 0xac) * 57.2957763671875;
        dVar6 = (double)*(float *)(lVar18 + 0xa8) * 57.2957763671875;
        dVar5 = (double)*(float *)(lVar18 + 0xa4) * 57.2957763671875;
      }
      FUN_1402a8b50(&local_178,(longlong *)(lVar15 + 0x138),&local_108);
      lVar18 = *(longlong *)(lVar15 + 0x138);
      if ((lVar18 == 0) || (lVar18 = *(longlong *)(lVar18 + 0x40), lVar18 == 0)) {
        dVar9 = 0.0;
        dVar8 = 0.0;
      }
      else {
        dVar9 = 0.0;
        dVar8 = 0.0;
        dVar4 = 0.0;
        if (*(char *)(lVar18 + 0x90) != '\0') {
          dVar8 = (double)*(float *)(lVar18 + 0xac) * 57.2957763671875;
          dVar9 = (double)*(float *)(lVar18 + 0xa8) * 57.2957763671875;
          dVar4 = (double)*(float *)(lVar18 + 0xa4) * 57.2957763671875;
        }
      }
      dVar11 = (local_170 - local_158) * local_e8;
      dVar10 = (local_178 - local_160) * dStack_f0;
      dVar12 = (double)CONCAT35(uStack_db,uStack_e0);
      uVar16 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar17 = uVar16;
      if ((uVar16 != 0) && (param_1[6] != 0)) {
        fVar20 = ABS((float)((local_168 - local_150) * dVar12 + dVar10 + dVar11));
        fVar21 = (float)(SQRT((dVar8 - dVar7) * (dVar8 - dVar7) +
                              (dVar4 - dVar5) * (dVar4 - dVar5) + (dVar9 - dVar6) * (dVar9 - dVar6))
                        * 70.0);
        if (fVar21 <= fVar20) {
          fVar21 = fVar20;
        }
        if (*(float *)(param_1 + 5) <= fVar21 && fVar21 != *(float *)(param_1 + 5)) {
          local_138 = local_f8;
          local_148 = CONCAT44(uStack_104,local_108);
          uStack_140 = CONCAT44(uStack_fc,uStack_100);
          local_118 = DAT_14c846508;
          local_128 = DAT_14c8464f8;
          uStack_120 = DAT_14c846500;
          local_190 = 0;
          uStack_188 = 0;
          local_1a0 = 0;
          uStack_198 = 0;
          local_1b0 = 0x3f800000;
          local_1b8 = 0x3f800000;
          local_1a8 = 0;
          uVar17 = FUN_147abea3c(uVar16);
          *(float *)(param_1 + 7) = (float)*(double *)(uVar16 + 0x6d0);
        }
      }
    }
  }
  if ((alStack_d0[2] ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fc1bc FUN_1401fc1bc body=40 status=ok
// SIG undefined FUN_1401fc1bc(void)

undefined8 FUN_1401fc1bc(undefined8 param_1,int param_2)

{
  FUN_1401fc1e4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401fc1e4 FUN_1401fc1e4 body=94 status=ok
// SIG undefined FUN_1401fc1e4(void)

void FUN_1401fc1e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9d6e20;
  param_1[5] = &PTR_FUN_14a9d73d0;
  param_1[6] = &PTR_FUN_14a9d73f0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc242(param_1 + 0x5c);
  FUN_1401fc27a(param_1);
  return;
}



// FUNCTION 1401fc242 FUN_1401fc242 body=55 status=ok
// SIG undefined FUN_1401fc242(void)

void FUN_1401fc242(longlong *param_1)

{
  FUN_1401fc9ae(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401fc27a FUN_1401fc27a body=475 status=ok
// SIG undefined FUN_1401fc27a(void)

void FUN_1401fc27a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14a9d2b10;
  param_1[5] = &PTR_FUN_14a9d30c0;
  param_1[6] = &PTR_FUN_14a9d30e0;
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc455(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x56];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  FUN_1401fc47e(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x49];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc5a0(param_1);
  return;
}



// FUNCTION 1401fc455 FUN_1401fc455 body=40 status=ok
// SIG undefined FUN_1401fc455(void)

void FUN_1401fc455(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1401fc4ce(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1401fc47e FUN_1401fc47e body=80 status=ok
// SIG undefined FUN_1401fc47e(void)

void FUN_1401fc47e(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401fc4ce FUN_1401fc4ce body=208 status=ok
// SIG undefined FUN_1401fc4ce(void)

void FUN_1401fc4ce(longlong *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = (longlong)&PTR_LAB_14a9ceb10;
  lVar1 = param_1[1];
  if ((int)lVar1 != 0) {
    (**(code **)(*param_1 + 0x520))(param_1,&local_30);
    puVar2 = local_30;
    if (local_28 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    local_38 = (int)lVar1;
    FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0xa1e,
                  L"%s Leaked %d refs",puVar2);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1401fc67c();
  }
  if (param_1[2] != 0) {
    FUN_1401fc67c();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401fc5a0 FUN_1401fc5a0 body=220 status=ok
// SIG undefined FUN_1401fc5a0(void)

void FUN_1401fc5a0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14a9d75d0;
  param_1[5] = &PTR_FUN_14a9d7b70;
  param_1[6] = &PTR_FUN_14a9d7b90;
  lVar2 = param_1[0x18];
  if (lVar2 != 0) {
    FUN_14063db7c(lVar2);
    FUN_1400020a8(lVar2);
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x10];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1401fc67c FUN_1401fc67c body=818 status=ok
// SIG undefined FUN_1401fc67c(void)

ulonglong FUN_1401fc67c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined *puVar11;
  bool bVar12;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
  piVar1 = (int *)(param_1 + 0x74);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if ((*(uint *)(param_1 + 0x7c) & 1) != 0) {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffffffe;
      uVar4 = 0x9b;
      if ((*(longlong *)(param_1 + 0x28) != 0) && (DAT_14ca80058 != DAT_14ca80084)) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
        uVar5 = (uint)((ulonglong)lVar6 >> 0x10);
        uVar10 = (uint)lVar6 & 0xffff;
        puVar11 = &DAT_14ca80088;
        if (DAT_14ca80090 != (undefined *)0x0) {
          puVar11 = DAT_14ca80090;
        }
        iVar3 = *(int *)(puVar11 +
                        (ulonglong)
                        (DAT_14ca80098 - 1U &
                        (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar10) +
                        (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) * 4);
        while (iVar3 != -1) {
          plVar2 = (longlong *)(DAT_14ca80050 + (longlong)iVar3 * 0x14);
          if (*plVar2 == lVar6) {
            if ((plVar2 != (longlong *)0x0) && ((ushort *)(plVar2 + 1) != (ushort *)0x0)) {
              uVar4 = (uint)*(ushort *)(plVar2 + 1);
            }
            break;
          }
          iVar3 = *(int *)((longlong)plVar2 + 0xc);
        }
      }
      iVar3 = FUN_1401f87ca(&DAT_14caec650 + uVar4 * 0x50,*(undefined4 *)(param_1 + 0x50),
                            param_1 + 0x50);
      if ((iVar3 == -1) ||
         (lVar6 = (longlong)iVar3 * 0x38 + *(longlong *)(&DAT_14caec650 + uVar4 * 0x50), lVar6 == 0)
         ) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 0x28);
      }
      if (lVar6 == param_1) {
        uVar4 = 0x9b;
        if ((*(longlong *)(param_1 + 0x28) != 0) && (DAT_14ca80058 != DAT_14ca80084)) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
          uVar5 = (uint)((ulonglong)lVar6 >> 0x10);
          uVar10 = (uint)lVar6 & 0xffff;
          puVar11 = &DAT_14ca80088;
          if (DAT_14ca80090 != (undefined *)0x0) {
            puVar11 = DAT_14ca80090;
          }
          iVar3 = *(int *)(puVar11 +
                          (ulonglong)
                          (DAT_14ca80098 - 1U &
                          (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar10) +
                          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) * 4);
          while (iVar3 != -1) {
            plVar2 = (longlong *)(DAT_14ca80050 + (longlong)iVar3 * 0x14);
            if (*plVar2 == lVar6) {
              if ((plVar2 != (longlong *)0x0) && ((ushort *)(plVar2 + 1) != (ushort *)0x0)) {
                uVar4 = (uint)*(ushort *)(plVar2 + 1);
              }
              break;
            }
            iVar3 = *(int *)((longlong)plVar2 + 0xc);
          }
        }
        FUN_1406d1a14(&DAT_14caec650 + uVar4 * 0x50,param_1 + 0x50);
      }
    }
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
  uVar8 = extraout_RAX;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    uVar4 = FUN_14493c560();
    if (uVar4 == 0) {
      uVar5 = 0;
      uVar9 = 0;
      lVar6 = 0;
    }
    else {
      uVar9 = (ulonglong)(uVar4 >> 0xe);
      uVar5 = uVar4 & 0x3fff;
      lVar6 = (ulonglong)(uVar5 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
    }
    *(longlong *)(lVar6 + 8) = param_1 + 0x40;
    do {
      uVar8 = DAT_14ca96680;
      uVar7 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
      if (uVar7 >> 0x1a < DAT_14ca96680 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      if (uVar4 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar5 * 0x18);
      }
      *(uint *)(lVar6 + 0x10) = (uint)uVar8 & 0x3ffffff;
      LOCK();
      bVar12 = uVar8 != DAT_14ca96680;
      uVar7 = uVar7 | uVar4;
      if (bVar12) {
        uVar8 = DAT_14ca96680;
        uVar7 = DAT_14ca96680;
      }
      DAT_14ca96680 = uVar7;
      UNLOCK();
    } while (bVar12);
  }
  return uVar8;
}



// FUNCTION 1401fc9ae FUN_1401fc9ae body=520 status=ok
// SIG undefined FUN_1401fc9ae(void)

void FUN_1401fc9ae(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_1401fc9e1;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1401fc9e1;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1401fc9e1:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1401fcbb6 FUN_1401fcbb6 body=350 status=ok
// SIG undefined FUN_1401fcbb6(void)

void FUN_1401fcbb6(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x11) {
    uVar6 = 0x10;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x10 < *(uint *)(param_1 + 0x4c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1401fcc37;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_1401fcc37:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x4c) = (int)uVar6;
  FUN_1401fcd14(param_1,param_2,uVar6,4);
  return;
}



// FUNCTION 1401fcd14 FUN_1401fcd14 body=133 status=ok
// SIG undefined FUN_1401fcd14(void)

void FUN_1401fcd14(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1401fcd9a FUN_1401fcd9a body=179 status=ok
// SIG undefined FUN_1401fcd9a(void)

undefined8 * FUN_1401fcd9a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401fce4e(param_1,&local_30);
  if (local_30 != 0) {
    FUN_14697ea50(local_30 + 8);
    *param_2 = *(undefined8 *)(local_30 + 8);
    lVar3 = *(longlong *)(local_30 + 0x10);
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
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
  if (local_30 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1401fce4e FUN_1401fce4e body=187 status=ok
// SIG undefined FUN_1401fce4e(void)

undefined8 * FUN_1401fce4e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      FUN_1401fcf0a();
      cVar7 = (**(code **)(*plVar5 + 8))(plVar5,&DAT_14c98e148);
      if (cVar7 != '\0') {
        uVar6 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar6;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1401fcf0a FUN_1401fcf0a body=104 status=ok
// SIG undefined FUN_1401fcf0a(void)

void FUN_1401fcf0a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e150) {
    FUN_144b3d300(&DAT_14c98e150);
    if (DAT_14c98e150 == -1) {
      FUN_1446f470e(&DAT_14c98e148,L"FSlateToolTipMetaData",1);
      _Init_thread_footer(&DAT_14c98e150);
      return;
    }
  }
  return;
}



// FUNCTION 1401fcf72 FUN_1401fcf72 body=28 status=ok
// SIG undefined FUN_1401fcf72(void)

undefined8 FUN_1401fcf72(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1401fcf8e();
  return CONCAT71((int7)((ulonglong)*plVar1 >> 8),*plVar1 == *param_2);
}



// FUNCTION 1401fcf8e FUN_1401fcf8e body=109 status=ok
// SIG undefined FUN_1401fcf8e(void)

undefined * FUN_1401fcf8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e144) {
    FUN_144b3d300(&DAT_14c98e144);
    if (DAT_14c98e144 == -1) {
      FUN_1446f470e(&DAT_14c98e13c,L"FSlateMouseEventsMetaData",1);
      _Init_thread_footer(&DAT_14c98e144);
    }
  }
  return &DAT_14c98e13c;
}



// FUNCTION 1401fcffb FUN_1401fcffb body=589 status=ok
// SIG undefined FUN_1401fcffb(void)

void FUN_1401fcffb(longlong param_1,int param_2,longlong param_3,longlong param_4,undefined4 param_5
                  )

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  
  sVar8 = *(short *)(param_4 + 10);
  if ((-1 < sVar8) && ((int)sVar8 < *(int *)(param_3 + 0x28))) {
    lVar11 = *(longlong *)(param_1 + 0x10);
    uVar3 = *(ushort *)(lVar11 + 10 + (longlong)param_2 * 0x10);
    uVar18 = (ulonglong)uVar3;
    if (uVar3 == 0xffff) {
      iVar17 = *(int *)(param_1 + 0x28);
      uVar18 = (ulonglong)iVar17;
      *(uint *)(param_1 + 0x28) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar17 + 1U) {
        FUN_1405a6c8c((longlong *)(param_1 + 0x20),iVar17);
      }
      lVar12 = *(longlong *)(param_1 + 0x20);
      puVar2 = (undefined8 *)(lVar12 + uVar18 * 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar12 + 0x10 + uVar18 * 0x18) = 0;
      *(short *)(lVar11 + (longlong)param_2 * 0x10 + 10) = (short)iVar17;
      sVar8 = *(short *)(param_4 + 10);
    }
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(short)uVar18 * 0x18);
    uVar16 = *(uint *)(plVar1 + 1);
    FUN_1401fd248(plVar1,(longlong)sVar8 * 0x18 + *(longlong *)(param_3 + 0x20));
    uVar18 = (ulonglong)*(uint *)(plVar1 + 1);
    if ((int)uVar16 < (int)*(uint *)(plVar1 + 1)) {
      lVar11 = (longlong)(int)uVar16;
      lVar12 = lVar11 * 0x30 + 0x2c;
      do {
        *(undefined4 *)(*plVar1 + lVar12) = param_5;
        lVar11 = lVar11 + 1;
        uVar18 = (ulonglong)(int)plVar1[1];
        lVar12 = lVar12 + 0x30;
      } while (lVar11 < (longlong)uVar18);
    }
    iVar17 = (int)uVar18;
    if (0 < iVar17) {
      plVar4 = (longlong *)*plVar1;
      uVar13 = 0;
      uVar14 = 0;
      plVar15 = plVar4;
      do {
        if ((uVar13 == uVar16) ||
           (((int)uVar16 < iVar17 &&
            ((int)plVar4[(longlong)(int)uVar16 * 6 + 5] < (int)plVar4[(longlong)(int)uVar14 * 6 + 5]
            )))) {
          uVar7 = uVar16 + 1;
          uVar9 = uVar16;
        }
        else {
          uVar7 = uVar16;
          uVar9 = uVar14;
          uVar14 = uVar14 + 1;
        }
        uVar16 = uVar7;
        lVar12 = (longlong)(int)uVar9;
        lVar11 = plVar4[lVar12 * 6];
        if (*plVar15 != lVar11) {
          plVar15[2] = 0;
        }
        *plVar15 = lVar11;
        if (plVar15[1] != plVar4[lVar12 * 6 + 1]) {
          plVar15[2] = 0;
        }
        uVar10 = FUN_14477b664();
        lVar11 = FUN_14477b664(uVar10);
        plVar15[1] = lVar11;
        plVar15[2] = plVar4[lVar12 * 6 + 2];
        uVar5 = *(undefined4 *)((longlong)plVar4 + lVar12 * 0x30 + 0x1c);
        lVar11 = plVar4[lVar12 * 6 + 4];
        uVar6 = *(undefined4 *)((longlong)plVar4 + lVar12 * 0x30 + 0x24);
        *(int *)(plVar15 + 3) = (int)plVar4[lVar12 * 6 + 3];
        *(undefined4 *)((longlong)plVar15 + 0x1c) = uVar5;
        *(int *)(plVar15 + 4) = (int)lVar11;
        *(undefined4 *)((longlong)plVar15 + 0x24) = uVar6;
        plVar15[5] = plVar4[lVar12 * 6 + 5];
        uVar13 = uVar13 + 1;
        plVar15 = plVar15 + 6;
      } while ((uVar18 & 0xffffffff) != uVar13);
      iVar17 = (int)plVar1[1];
    }
    if (iVar17 == 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)(*plVar1 + 0x28);
    }
    if (param_2 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x10);
      do {
        lVar12 = (longlong)param_2 * 0x10;
        if (iVar17 <= *(int *)(lVar11 + 0xc + lVar12)) {
          return;
        }
        *(int *)(lVar11 + lVar12 + 0xc) = iVar17;
        lVar11 = *(longlong *)(param_1 + 0x10);
        param_2 = (int)*(short *)(lVar11 + lVar12);
      } while (param_2 != -1);
    }
  }
  return;
}



// FUNCTION 1401fd248 FUN_1401fd248 body=96 status=ok
// SIG undefined FUN_1401fd248(void)

void FUN_1401fd248(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1405a63b6(param_1,iVar2);
    }
    FUN_1401fd2a8((longlong)iVar2 * 0x30 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1401fd2a8 FUN_1401fd2a8 body=134 status=ok
// SIG undefined FUN_1401fd2a8(void)

void FUN_1401fd2a8(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      *(undefined8 *)(param_1 + lVar7) = 0;
      ((undefined8 *)(param_1 + lVar7))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar7) = 0;
      *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
      uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar7));
      uVar6 = FUN_14477b664(uVar6);
      *(undefined8 *)(param_1 + 8 + lVar7) = uVar6;
      *(undefined8 *)(param_1 + 0x10 + lVar7) = *(undefined8 *)(param_2 + 0x10 + lVar7);
      puVar1 = (undefined4 *)(param_2 + 0x18 + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + 0x18 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_1 + 0x28 + lVar7) = *(undefined8 *)(param_2 + 0x28 + lVar7);
      lVar7 = lVar7 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1401fd32e FUN_1401fd32e body=269 status=ok
// SIG undefined FUN_1401fd32e(void)

void FUN_1401fd32e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1401fd43c FUN_1401fd43c body=42 status=ok
// SIG undefined FUN_1401fd43c(void)

void FUN_1401fd43c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1401fd4ae();
    return;
  }
  return;
}



// FUNCTION 1401fd468 FUN_1401fd468 body=70 status=ok
// SIG undefined FUN_1401fd468(void)

int FUN_1401fd468(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1481da5c8(param_1,iVar1);
  }
  FUN_1448ec583((longlong)iVar1 * 8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 1401fd4ae FUN_1401fd4ae body=315 status=ok
// SIG undefined FUN_1401fd4ae(void)

void FUN_1401fd4ae(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401fd518;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
      }
    }
LAB_1401fd518:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,2);
  }
  return;
}



// FUNCTION 1401fd5ea FUN_1401fd5ea body=129 status=ok
// SIG undefined FUN_1401fd5ea(void)

longlong FUN_1401fd5ea(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  FUN_1401fd66b(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401fd66b FUN_1401fd66b body=58 status=ok
// SIG undefined FUN_1401fd66b(void)

void FUN_1401fd66b(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401fd6f8 FUN_1401fd6f8 body=405 status=ok
// SIG undefined FUN_1401fd6f8(void)

undefined4
FUN_1401fd6f8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 unaff_RBP;
  undefined7 uVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  byte local_4d;
  uint local_4c;
  ulonglong local_48;
  undefined8 uVar6;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  uVar2 = FUN_1401fdbae(param_1);
  bVar1 = *(byte *)(param_3 + 0x28);
  uVar3 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar4 = CONCAT71(uVar3,bVar1) & 0xffffff04;
  bVar5 = (byte)uVar4;
  uVar6 = CONCAT71((int7)(uVar4 >> 8),bVar5 >> 2);
  local_4c = local_4c & 0xffffff00;
  FUN_1401fd88e(uVar6,param_3,param_1 + 0x72,&local_4c);
  local_4c = 0;
  FUN_1401fd94a(uVar6,param_3,param_1 + 0x74,&local_4c);
  local_4c = local_4c & 0xffff0000;
  FUN_1401fdade(uVar6,param_3,param_1 + 0x70,&local_4c);
  local_4c = 0;
  FUN_1401fda14(uVar6,param_3,param_1 + 0x78,&local_4c);
  if (bVar5 == 0) {
    local_4d = 0;
    local_4c = (uint)local_4c._1_3_ << 8;
    FUN_1401fd88e(0,param_3,&local_4d);
    *(uint *)(param_1 + 0x7c) = (uint)local_4d;
  }
  else {
    local_4d = *(byte *)(param_1 + 0x7c);
    local_4c = (uint)local_4c._1_3_ << 8;
    FUN_1401fd88e(1,param_3);
  }
  local_4c = local_4c & 0xffffff00;
  FUN_1401fd88e(uVar6,param_3,param_1 + 0x98);
  if (*(char *)(param_1 + 0x98) != '\0') {
    uVar4 = CONCAT71(uVar3,bVar1 >> 2);
    local_4c = 0;
    FUN_1401fdf7f(uVar4 & 0xffffff01,param_3,param_1 + 0x9c,&local_4c);
    local_4c = 0;
    FUN_1401fdf7f((uint)uVar4 & 0xffffff01,param_3,param_1 + 0xa0,&local_4c);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fd88e FUN_1401fd88e body=187 status=ok
// SIG undefined FUN_1401fd88e(void)

ulonglong FUN_1401fd88e(byte param_1,longlong *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = *param_3 != *param_4 & param_1;
  (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
  if (local_31 == 1) {
    pcVar1 = *(char **)param_2[1];
    if ((char *)((undefined8 *)param_2[1])[1] < pcVar1 + 1) {
      uVar3 = (**(code **)(*param_2 + 0x170))(param_2,param_3,1);
      uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),local_31);
    }
    else {
      *param_3 = *pcVar1;
      plVar2 = (longlong *)param_2[1];
      *plVar2 = *plVar2 + 1;
      uVar4 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
    }
  }
  else {
    if (param_1 == 0) {
      *param_3 = *param_4;
    }
    uVar4 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fd94a FUN_1401fd94a body=201 status=ok
// SIG undefined FUN_1401fd94a(void)

byte FUN_1401fd94a(byte param_1,longlong *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = *param_3 != *param_4 & param_1;
  (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
  if (local_31 == 1) {
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
      }
      else {
        thunk_FUN_14572512c(param_2,param_3);
      }
    }
    else {
      *param_3 = *piVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if (param_1 == 0) {
    *param_3 = *param_4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_31;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fda14 FUN_1401fda14 body=201 status=ok
// SIG undefined FUN_1401fda14(void)

byte FUN_1401fda14(byte param_1,longlong *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = *param_3 != *param_4 & param_1;
  (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
  if (local_31 == 1) {
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
      }
      else {
        thunk_FUN_14572512c(param_2,param_3);
      }
    }
    else {
      *param_3 = *piVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if (param_1 == 0) {
    *param_3 = *param_4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_31;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fdade FUN_1401fdade body=207 status=ok
// SIG undefined FUN_1401fdade(void)

byte FUN_1401fdade(byte param_1,longlong *param_2,short *param_3,short *param_4)

{
  short *psVar1;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = *param_3 != *param_4 & param_1;
  (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
  if (local_31 == 1) {
    psVar1 = *(short **)param_2[1];
    if ((short *)((undefined8 *)param_2[1])[1] < psVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,param_3);
      }
    }
    else {
      *param_3 = *psVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
  }
  else if (param_1 == 0) {
    *param_3 = *param_4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_31;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fdbae FUN_1401fdbae body=446 status=ok
// SIG undefined FUN_1401fdbae(void)

bool FUN_1401fdbae(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulonglong uVar3;
  byte bVar5;
  undefined1 auStack_68 [36];
  undefined1 local_44;
  undefined1 local_43;
  byte local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 8) = param_5;
  bVar1 = *(byte *)(param_3 + 5);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  puVar2 = *(undefined4 **)param_3[1];
  if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined4 *)(param_1 + 0xc),4);
    }
    else {
      thunk_FUN_14572512c(param_3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar2;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  uVar3 = CONCAT71(uVar4,bVar1) & 0xffffffff;
  bVar5 = (byte)uVar3 >> 2;
  uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar5) & 0xffffffffffffff01;
  FUN_1401fde76(param_1 + 0x10,param_3);
  FUN_1401fdd6d(param_1 + 0x28,param_3);
  FUN_14032b138(param_1 + 0x40,param_3);
  local_43 = 0;
  FUN_1401fd88e(uVar3,param_3,param_1 + 0x58);
  local_42 = *(longlong *)(param_1 + 0x60) != 0 & (byte)uVar3;
  (**(code **)(*param_3 + 0x178))(param_3,&local_42,1);
  if (local_42 == 1) {
    (**(code **)(*param_3 + 0x150))(param_3,(undefined8 *)(param_1 + 0x60));
  }
  else if ((bVar1 & 4) == 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  local_41 = bVar5 & *(longlong *)(param_1 + 0x68) != 0;
  (**(code **)(*param_3 + 0x178))(param_3,&local_41,1);
  if (local_41 == 1) {
    (**(code **)(*param_3 + 0x160))(param_3,(undefined8 *)(param_1 + 0x68));
  }
  else if ((bVar1 & 4) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  uVar3 = CONCAT71(uVar4,bVar1) & 0xffffffffffffff04;
  local_44 = 1;
  FUN_1401fd88e(CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 2) & 0xffffffff,param_3,param_1 + 0x59);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (*(byte *)((longlong)param_3 + 0x29) & 2) == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fdd6d FUN_1401fdd6d body=218 status=ok
// SIG undefined FUN_1401fdd6d(void)

void FUN_1401fdd6d(double *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_58 [44];
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if (0x16 < uVar1) {
    iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar2 != 0x1a) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  local_24 = (float)param_1[2];
  local_28 = (float)param_1[1];
  local_2c = (float)*param_1;
  FUN_14788624e(&local_2c,param_2);
  *param_1 = (double)local_2c;
  param_1[1] = (double)local_28;
  param_1[2] = (double)local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fde76 FUN_1401fde76 body=218 status=ok
// SIG undefined FUN_1401fde76(void)

void FUN_1401fde76(double *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_58 [44];
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if (0x16 < uVar1) {
    iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar2 != 0x1a) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  local_24 = (float)param_1[2];
  local_28 = (float)param_1[1];
  local_2c = (float)*param_1;
  FUN_14788602c(&local_2c,param_2);
  *param_1 = (double)local_2c;
  param_1[1] = (double)local_28;
  param_1[2] = (double)local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fdf7f FUN_1401fdf7f body=214 status=ok
// SIG undefined FUN_1401fdf7f(void)

byte FUN_1401fdf7f(byte param_1,longlong *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = *param_3 != *param_4 & param_1;
  (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
  if (local_31 == 1) {
    pfVar1 = *(float **)param_2[1];
    if ((float *)((undefined8 *)param_2[1])[1] < pfVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
      }
      else {
        thunk_FUN_14572512c(param_2,param_3);
      }
    }
    else {
      *param_3 = *pfVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if (param_1 == 0) {
    *param_3 = *param_4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_31;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fe056 FUN_1401fe056 body=268 status=ok
// SIG undefined FUN_1401fe056(void)

void FUN_1401fe056(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  if ((lVar5 != 0) && (1 < *(byte *)(lVar5 + 0x90))) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(ushort *)(lVar5 + 0x1b4) = (*(ushort *)(lVar5 + 0x1b4) & 0xfffd) + (ushort)param_2 * 2;
    *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) | 8;
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
                    /* WARNING: Could not recover jumptable at 0x0001401fe0d0. Too many branches */
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



// FUNCTION 1401fe162 FUN_1401fe162 body=626 status=ok
// SIG undefined FUN_1401fe162(void)

uint * FUN_1401fe162(longlong *param_1,uint *param_2,longlong param_3,longlong *param_4,
                    undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_c8 [40];
  uint local_a0;
  byte local_9c;
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_1[7];
  plVar4 = (longlong *)param_1[8];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    *(undefined1 *)(param_2 + 1) = 0;
    goto LAB_1401fe1db;
  }
  cVar7 = FUN_1448ec59e(param_3,(longlong *)(lVar3 + 8));
  if (((cVar7 == '\0') || (*(longlong *)(param_3 + 0x78) != *(longlong *)(lVar3 + 8))) ||
     ((*(char *)(lVar3 + 0x20) == '\x01' && (*(longlong *)(lVar3 + 0x14) != *param_4)))) {
    cVar7 = '\0';
LAB_1401fe1d1:
    *(undefined1 *)(param_2 + 1) = 0;
    if ((char)param_1[9] == cVar7) goto LAB_1401fe1db;
    *(char *)(param_1 + 9) = cVar7;
    if (cVar7 == '\0') {
      (**(code **)(*param_1 + 0x48))(param_1);
      goto LAB_1401fe1db;
    }
  }
  else {
    cVar7 = *(char *)(lVar3 + 0x28);
    if (cVar7 == '\0') {
      lVar5 = *(longlong *)(lVar3 + 0x48);
joined_r0x0001401fe2b9:
      if (lVar5 != 0) {
        if (((param_1[4] == 0) || (cVar7 = FUN_144729dda(param_1 + 3), cVar7 == '\0')) ||
           ((longlong *)param_1[4] == (longlong *)0x0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*(longlong *)param_1[4] + 8))();
        }
        local_a0 = local_a0 & 0xffffff00;
        local_78 = 0;
        FUN_1456bb102(&local_a0,uVar8);
        FUN_140168de2(lVar3 + 0x28,local_70,&local_a0);
        cVar7 = FUN_144a7fca4(local_70);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar6 != (code *)0x0) {
          ppppuVar9 = local_70;
          if (0x18 < local_58) {
            ppppuVar9 = (undefined8 ****)local_70[0];
          }
          (*pcVar6)(ppppuVar9);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        FUN_144a5ac3a(&local_a0);
        goto LAB_1401fe1d1;
      }
    }
    else if ((cVar7 == '\x01') || (cVar7 == '\x02')) {
      lVar5 = *(longlong *)(lVar3 + 0x30);
      goto joined_r0x0001401fe2b9;
    }
    *(undefined1 *)(param_2 + 1) = 0;
    if ((char)param_1[9] != '\0') goto LAB_1401fe1db;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  (**(code **)(*param_1 + 0x38))(param_1,&local_a0,param_5);
  if (&local_a0 != param_2) {
    if ((local_9c & 1) == 0) {
      if ((char)param_2[1] != '\x01') goto LAB_1401fe1db;
      cVar7 = '\0';
    }
    else {
      *param_2 = local_a0;
      cVar7 = '\x01';
    }
    *(char *)(param_2 + 1) = cVar7;
  }
LAB_1401fe1db:
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
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fe3d6 FUN_1401fe3d6 body=228 status=ok
// SIG undefined FUN_1401fe3d6(void)

longlong FUN_1401fe3d6(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a44a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462a6978;
    local_38 = &LAB_1470b8557;
    local_40 = FUN_1462a740a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxActorStateSchemaProvider",&DAT_14c9a44a8,&DAT_1470b8556)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a44a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fe4bc FUN_1401fe4bc body=353 status=ok
// SIG undefined FUN_1401fe4bc(void)

longlong FUN_1401fe4bc(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
      && ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
    return *plVar6;
  }
  if (*(longlong *)(param_1 + 2) == 0) {
LAB_1401fe51f:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        goto LAB_1401fe51f;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar3 = *(uint *)(lVar5 + 0x10);
      if (*(uint *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar5 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar5 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    lVar5 = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
      lVar5 = lVar4;
    }
  }
  return lVar5;
}



// FUNCTION 1401fe61e FUN_1401fe61e body=536 status=ok
// SIG undefined FUN_1401fe61e(void)

ulonglong * FUN_1401fe61e(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  code *local_60;
  undefined1 *local_58;
  undefined2 **local_50;
  undefined2 *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    while ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
      if (DAT_14c9a63a0 != DAT_14c9a63cc) {
        uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar4 = DAT_14c9a63d8;
        if (DAT_14c9a63d8 == (undefined *)0x0) {
          puVar4 = &DAT_14c9a63d0;
        }
        iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14c9a63e0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        while (iVar2 != -1) {
          puVar1 = (ulonglong *)(DAT_14c9a6398 + (longlong)iVar2 * 0x28);
          if (*puVar1 == param_1) {
            puVar8 = puVar1 + 1;
            if (puVar8 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_1401fe724;
            break;
          }
          iVar2 = (int)puVar1[4];
        }
      }
      param_1 = *(ulonglong *)(param_1 + 0x40);
      if (param_1 == 0) break;
      if (DAT_14c948fa0 == 0) {
        local_40 = &DAT_1427db2a2;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948fa0 = lVar5;
        FUN_1446f470e(local_38,L"ScriptStruct",1);
        local_58 = &LAB_1468915ce;
        local_60 = FUN_1427dc742;
        local_70 = L"Engine";
        local_68 = 199;
        local_78 = 0x10;
        local_80 = 0x10000020;
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
        local_50 = &local_40;
        FUN_14574b4b2(lVar5);
        DAT_14c948fa0 = lVar5;
        uVar6 = FUN_1446f8646();
        lVar5 = DAT_14c948fa0;
        uVar7 = FUN_1449e2fb2();
        local_88 = L"ScriptStruct";
        FUN_14574b446(uVar7,lVar5,uVar6,L"/Script/CoreUObject");
      }
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) != DAT_14c948fa0 + 0x30)) break;
    }
  }
  puVar8 = (ulonglong *)0x0;
LAB_1401fe724:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fe838 FUN_1401fe838 body=125 status=ok
// SIG undefined FUN_1401fe838(void)

undefined8 * FUN_1401fe838(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1401fe8b6();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1401fe8b6 FUN_1401fe8b6 body=150 status=ok
// SIG undefined FUN_1401fe8b6(void)

longlong * FUN_1401fe8b6(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1401fe94c FUN_1401fe94c body=749 status=ok
// SIG undefined FUN_1401fe94c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401fe94c(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  code **ppcVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  code *local_98;
  double dStack_90;
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = param_1[4];
  if ((*(longlong **)(lVar3 + 0xae8) == param_1) &&
     (iVar1 = *(int *)(lVar3 + 0xb80), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0xb78);
    lVar6 = 0;
    do {
      if ((*(byte *)(*(longlong *)(lVar3 + lVar6) + 0x31) & 4) != 0) {
        FUN_1401fe94c();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((*(byte *)((longlong)param_1 + 0x31) & 4) != 0) {
    *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) & 0xfb;
    if (param_1 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      lVar3 = param_1[4];
      if (lVar3 != 0) {
        if (DAT_14cad2858 == 0) {
          local_b0 = &local_98;
          local_98 = FUN_144a7958c;
          local_a0 = FUN_14081d0ea;
          local_a8 = &LAB_146395584;
          local_b8 = &LAB_147a0ba80;
          local_c0 = &LAB_14575ccce;
          local_c8 = L"Engine";
          local_d0 = 0x40000000000;
          local_d8 = 0x10000004;
          local_e0 = 0x10;
          local_e8 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        lVar3 = *(longlong *)(lVar3 + 0x10);
        iVar1 = *(int *)(DAT_14cad2858 + 0x38);
        if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30
           )) {
          FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
        }
      }
      plVar2 = (longlong *)param_1[0x7c];
      if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x350))(param_1);
        param_1[0x7c] = (longlong)plVar2;
      }
    }
    *(int *)(plVar2 + 0x66) = 1 - (int)plVar2[0x66];
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_1);
    if ((*(byte *)(param_1 + 0x86) & 1) == 0) {
      (**(code **)(*plVar2 + 0x70))(plVar2,param_1);
    }
    if ((char)plVar2[0xc6] == '\x01') {
      plVar4 = plVar2 + 200;
      ppcVar5 = &local_98;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *ppcVar5 = (code *)*plVar4;
        plVar4 = plVar4 + 1;
        ppcVar5 = ppcVar5 + 1;
      }
      dVar8 = (double)local_88._0_8_ * (double)local_88._0_8_ + (double)local_98 * (double)local_98;
      dVar11 = (double)local_88._8_8_ * (double)local_88._8_8_ + dStack_90 * dStack_90;
      auVar9._0_8_ = dVar8 + dVar11;
      auVar9._8_8_ = dVar8 + dVar11;
      uVar7 = -(ulonglong)(1e-08 <= auVar9._8_8_);
      auVar10 = sqrtpd(auVar9,auVar9);
      auVar12 = divpd(_DAT_149934d80,auVar10);
      auVar13._0_8_ = auVar12._0_8_ * (double)local_88._0_8_;
      auVar13._8_8_ = auVar12._8_8_ * (double)local_88._8_8_;
      auVar10._8_4_ = (int)uVar7;
      auVar10._0_8_ = -(ulonglong)(1e-08 <= auVar9._0_8_);
      auVar10._12_4_ = (int)(uVar7 >> 0x20);
      local_88._0_16_ = blendvpd(_DAT_149935300,auVar13,auVar10);
      local_98 = (code *)((ulonglong)((double)local_98 * auVar12._0_8_) &
                         -(ulonglong)(1e-08 <= auVar9._0_8_));
      dStack_90 = (double)((ulonglong)(dStack_90 * auVar12._8_8_) & uVar7);
      FUN_140167042(param_1 + 0x6e);
      *(undefined1 *)(plVar2 + 0xc6) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x634) = 0;
    }
    if ((longlong)(int)param_1[0x6d] != 0) {
      lVar6 = (longlong)(int)param_1[0x6d] * 0x70;
      lVar3 = param_1[0x6c] + 0x60;
      do {
        FUN_1478f6298(param_1,lVar3);
        FUN_1433d5eb6(param_1 + 0x6e,lVar3 + -0x60);
        lVar3 = lVar3 + 0x70;
        lVar6 = lVar6 + -0x70;
      } while (lVar6 != 0);
    }
    if ((char)param_1[0x6e] != '\0') {
      FUN_1433d5ff6(param_1 + 0x6e);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401fec3a FUN_1401fec3a body=692 status=ok
// SIG undefined FUN_1401fec3a(void)

void FUN_1401fec3a(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x378))();
  uVar2 = FUN_14477b072(param_1,DAT_14cacb548);
  plVar3 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
  if (param_1 != (longlong *)0x0) {
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      if (DAT_14cad2858 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146395584;
        local_48 = &LAB_147a0ba80;
        local_50 = &LAB_14575ccce;
        local_58 = L"Engine";
        local_60 = 0x40000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    plVar3 = (longlong *)param_1[0x7c];
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = (longlong)plVar3;
    }
  }
  (**(code **)(*plVar3 + 0xb0))(plVar3,param_1);
  if ((*(byte *)(param_1 + 0x86) & 1) == 0) {
    if (param_1 != (longlong *)0x0) {
      lVar4 = param_1[4];
      if (lVar4 != 0) {
        if (DAT_14cad2858 == 0) {
          local_40 = &local_28;
          local_28 = FUN_144a7958c;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_146395584;
          local_48 = &LAB_147a0ba80;
          local_50 = &LAB_14575ccce;
          local_58 = L"Engine";
          local_60 = 0x40000000000;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        lVar4 = *(longlong *)(lVar4 + 0x10);
        iVar1 = *(int *)(DAT_14cad2858 + 0x38);
        if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30
           )) {
          FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
        }
      }
      if (param_1[0x7c] == 0) {
        lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
        param_1[0x7c] = lVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401fef06 FUN_1401fef06 body=64 status=ok
// SIG undefined FUN_1401fef06(void)

void FUN_1401fef06(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1401fef46(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 1401fef46 FUN_1401fef46 body=309 status=ok
// SIG undefined FUN_1401fef46(void)

ulonglong FUN_1401fef46(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar3 = (ulonglong)param_2;
    }
    else {
      uVar3 = (ulonglong)param_2 * 4;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar3 + 0xf;
          if (param_2 < 0x1ffd) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x3fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar5 = 0x32;
              if (0x32 < bVar2) {
                uVar5 = (ulonglong)bVar2;
              }
              uVar6 = 0x32 - (ulonglong)bVar2;
              do {
                uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401fefe1;
                lVar1 = uVar5 + 1 + uVar6;
                uVar6 = uVar6 - 1;
              } while (lVar1 != 0x33);
            }
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar3 = -uVar3 & ((uVar4 & 0x3fffffff0) + uVar3) - 1;
          }
        }
        else {
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
        }
      }
LAB_1401fefe1:
      uVar3 = uVar3 >> 2;
    }
  }
  return uVar3;
}



// FUNCTION 1401ff07c FUN_1401ff07c body=247 status=ok
// SIG undefined FUN_1401ff07c(void)

void FUN_1401ff07c(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  
  (**(code **)(*param_1 + 0xca8))();
  bVar1 = *(byte *)((longlong)param_1 + 0xc5e);
  bVar2 = *(byte *)(param_1 + 0x18d);
  if ((bVar2 & 8) == 0) {
    if (-1 < (char)bVar2) goto LAB_1401ff0cf;
  }
  else {
    *(byte *)(param_1 + 0x18d) = bVar2 & 0xf7;
    if ((char)param_1[0x18c] == '\x01') {
      bVar4 = bVar1 < 2;
      bVar2 = 1;
    }
    else {
      if ((char)param_1[0x18c] != '\x02') goto LAB_1401ff0c7;
      bVar4 = bVar1 < 3;
      bVar2 = 2;
    }
    if (!bVar4) {
      bVar2 = bVar1;
    }
    *(byte *)((longlong)param_1 + 0xc5e) = bVar2;
  }
LAB_1401ff0c7:
  FUN_1401ff174(param_1);
LAB_1401ff0cf:
  plVar3 = (longlong *)param_1[0x1ca];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2,param_1[0x1cb],0);
    plVar3 = (longlong *)param_1[0x1cc];
    if (plVar3 != (longlong *)0x0) {
      if (bVar1 == 3) {
        (**(code **)(*plVar3 + 0x2b8))();
        plVar3 = (longlong *)param_1[0x1cc];
      }
      (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1[0x1ca],param_1[0x1cb]);
    }
  }
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc5e) = 0;
  return;
}



// FUNCTION 1401ff174 FUN_1401ff174 body=107 status=ok
// SIG undefined FUN_1401ff174(void)

void FUN_1401ff174(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0xe50) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xe50) + 0x38))();
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xe50) + 0x70))();
      if ((*(byte *)(param_1 + 0xc68) & 0x40) != 0) {
        FUN_1456e50d4(param_1);
      }
      if (0 < *(int *)(param_1 + 0xe70)) {
        FUN_1412030de(param_1);
      }
      if ((*(byte *)(param_1 + 0xc68) & 0x20) != 0) {
        FUN_1436b7936(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401ff1e0 FUN_1401ff1e0 body=544 status=ok
// SIG undefined FUN_1401ff1e0(void)

void FUN_1401ff1e0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [128];
  double local_178 [5];
  double local_150;
  double local_128;
  undefined8 local_f8 [12];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1401ff402(param_1,local_f8,0);
  if (*DAT_14cb06e50 == '\x01') {
    bVar2 = *DAT_14cb06e68;
    fVar8 = *DAT_14cb06e80;
    fVar7 = fVar8 * fVar8;
    fVar6 = *DAT_14cb06e98;
    fVar5 = cosf(fVar6 * 0.017453292);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0xc70);
    fVar8 = *(float *)(param_1 + 0xdc0);
    fVar7 = *(float *)(param_1 + 0xdcc);
    fVar6 = *(float *)(param_1 + 0xdc4);
    fVar5 = *(float *)(param_1 + 0xdc8);
  }
  if (((0.0 < fVar8) && (*(char *)(param_1 + 0xc5e) == '\0')) &&
     (local_98 = local_98 - *(double *)(param_1 + 0xe30),
     local_90 = local_90 - *(double *)(param_1 + 0xe38),
     local_88 = local_88 - *(double *)(param_1 + 0xe40),
     fVar7 < (float)(local_88 * local_88 + local_90 * local_90 + local_98 * local_98))) {
    *(byte *)(param_1 + 0xc5e) = (bVar2 & 1) + 1;
  }
  if ((0.0 < fVar6) && (*(char *)(param_1 + 0xc5e) == '\0')) {
    FUN_14007522e(local_1f8,param_1 + 0xdd0);
    FUN_1447fea8d(local_178,local_f8,local_1f8);
    if (((float)(local_178[0] + local_150 + local_128) + -1.0) * 0.5 < fVar5) {
      *(byte *)(param_1 + 0xc5e) = (bVar2 & 1) + 1;
    }
  }
  puVar3 = local_f8;
  puVar4 = (undefined8 *)(param_1 + 0xdd0);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((local_70 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ff402 FUN_1401ff402 body=1108 status=ok
// SIG undefined FUN_1401ff402(void)

undefined8 * FUN_1401ff402(longlong param_1,undefined8 *param_2,uint param_3)

{
  double *pdVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_1a8 [32];
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) goto LAB_1401ff7f3;
  if (*(int *)(param_1 + 0x66c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x668);
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar14 != (longlong *)0x0) &&
         ((((int)plVar14[2] == *(int *)(param_1 + 0x66c) &&
           ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) && (lVar10 = *plVar14, lVar10 != 0)))) {
        if (*(int *)(param_1 + 0x748) <= (int)param_3) goto LAB_1401ff7f3;
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x740) + (longlong)(int)param_3 * 4);
        uVar11 = (ulonglong)iVar3;
        if ((uVar11 == 0xffffffffffffffff) ||
           (lVar13 = (longlong)*(int *)(lVar10 + 0x718) * 0x10,
           *(int *)(lVar10 + 0x6d8 + lVar13) <= iVar3)) goto LAB_1401ff7f3;
        lVar10 = *(longlong *)(lVar10 + 0x6d0 + lVar13);
        goto LAB_1401ff53b;
      }
    }
  }
  if (((int)param_3 < 0) ||
     (lVar10 = (longlong)*(int *)(param_1 + 0x718) * 0x10,
     *(int *)(param_1 + 0x6d8 + lVar10) <= (int)param_3)) {
LAB_1401ff7f3:
    puVar12 = &DAT_14c846400;
    for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *param_2 = *puVar12;
      puVar12 = puVar12 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_1a8);
  }
  lVar10 = *(longlong *)(param_1 + 0x6d0 + lVar10);
  uVar11 = (ulonglong)param_3;
LAB_1401ff53b:
  lVar13 = uVar11 * 0x60;
  dVar7 = *(double *)(lVar10 + lVar13);
  dVar4 = ((double *)(lVar10 + lVar13))[1];
  dVar5 = *(double *)(lVar10 + 0x10 + lVar13);
  pdVar1 = (double *)(lVar10 + 0x40 + lVar13);
  local_f8 = *pdVar1;
  dVar8 = pdVar1[1];
  dVar9 = *(double *)(lVar10 + 0x50 + lVar13);
  dVar19 = dVar4 + dVar4;
  dVar15 = dVar5 + dVar5;
  dVar18 = dVar7 * (dVar7 + dVar7);
  local_108 = (1.0 - (dVar5 * dVar15 + dVar4 * dVar19)) * local_f8;
  dVar5 = (1.0 - (dVar5 * dVar15 + dVar18)) * dVar8;
  local_b8 = (1.0 - (dVar18 + dVar4 * dVar19)) * dVar9;
  dVar6 = *(double *)(lVar10 + lVar13) * dVar15;
  pdVar1 = (double *)(lVar10 + 0x18 + lVar13);
  dVar18 = *pdVar1;
  dVar16 = dVar15 * dVar18;
  dVar17 = (dVar7 + dVar7) * *pdVar1;
  dVar18 = dVar19 * dVar18;
  dStack_100 = (dVar19 * dVar7 + dVar16) * local_f8;
  local_d8 = (dVar15 * dVar4 + dVar17) * dVar8;
  local_f8 = (dVar6 - dVar18) * local_f8;
  dVar4 = (dVar15 * dVar4 - dVar17) * dVar9;
  uStack_f0 = 0;
  local_e8._8_4_ = SUB84(dVar5,0);
  local_e8._0_8_ = (dVar19 * dVar7 - dVar16) * dVar8;
  local_e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  uStack_d0 = 0;
  local_c8._8_4_ = SUB84(dVar4,0);
  local_c8._0_8_ = (dVar18 + dVar6) * dVar9;
  local_c8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  uStack_b0 = 0;
  puVar12 = (undefined8 *)(lVar10 + 0x20 + lVar13);
  local_a8 = *puVar12;
  uStack_a0 = puVar12[1];
  local_98 = *(undefined8 *)(lVar10 + 0x30 + lVar13);
  uStack_90 = 0x3ff0000000000000;
  dVar8 = *(double *)(param_1 + 0x240);
  dVar6 = *(double *)(param_1 + 0x248);
  dVar4 = *(double *)(param_1 + 0x250);
  local_178 = *(double *)(param_1 + 0x280);
  dVar9 = *(double *)(param_1 + 0x288);
  dVar15 = *(double *)(param_1 + 0x290);
  dVar5 = dVar6 + dVar6;
  dVar16 = dVar4 + dVar4;
  dVar18 = dVar8 * (dVar8 + dVar8);
  local_188 = (1.0 - (dVar4 * dVar16 + dVar6 * dVar5)) * local_178;
  dVar4 = (1.0 - (dVar4 * dVar16 + dVar18)) * dVar9;
  local_138 = (1.0 - (dVar18 + dVar6 * dVar5)) * dVar15;
  dVar7 = *(double *)(param_1 + 0x240) * dVar16;
  dVar18 = *(double *)(param_1 + 600);
  dVar17 = dVar16 * dVar18;
  dVar19 = (dVar8 + dVar8) * *(double *)(param_1 + 600);
  dVar18 = dVar5 * dVar18;
  dStack_180 = (dVar5 * dVar8 + dVar17) * local_178;
  local_158 = (dVar16 * dVar6 + dVar19) * dVar9;
  local_178 = (dVar7 - dVar18) * local_178;
  dVar6 = (dVar16 * dVar6 - dVar19) * dVar15;
  uStack_170 = 0;
  local_168._8_4_ = SUB84(dVar4,0);
  local_168._0_8_ = (dVar5 * dVar8 - dVar17) * dVar9;
  local_168._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  uStack_150 = 0;
  local_148._8_4_ = SUB84(dVar6,0);
  local_148._0_8_ = (dVar18 + dVar7) * dVar15;
  local_148._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  uStack_130 = 0;
  local_128 = *(undefined4 *)(param_1 + 0x260);
  uStack_124 = *(undefined4 *)(param_1 + 0x264);
  uStack_120 = *(undefined4 *)(param_1 + 0x268);
  uStack_11c = *(undefined4 *)(param_1 + 0x26c);
  local_118 = *(undefined8 *)(param_1 + 0x270);
  uStack_110 = 0x3ff0000000000000;
  FUN_1447fea8d(param_2);
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1401ff858 FUN_1401ff858 body=1184 status=ok
// SIG undefined FUN_1401ff858(void)

void FUN_1401ff858(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0x1ca] != 0) {
    (**(code **)(*param_1 + 0xc60))(param_1);
    (**(code **)(*(longlong *)param_1[0x1ca] + 0x70))();
  }
  FUN_140107756(param_1);
  plVar9 = (longlong *)param_1[0xcb];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar9 != (longlong *)0x0) != 0) goto LAB_1401ffd08;
    if (plVar9 == (longlong *)0x0) goto LAB_1401ffb68;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1401ffd08:
    FUN_1456cec3c(plVar9);
  }
  if (DAT_14cb06da8 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1464003b0;
    local_68 = &LAB_147d17bdf;
    local_70 = &LAB_1417edf22;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if (((*(int *)(plVar9[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
      (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
       != DAT_14cb06da8 + 0x30)) || ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0))
  goto LAB_1401ffb68;
  if ((*(char *)((longlong)param_1 + 0x1175) == '\x01') &&
     (*(char *)((longlong)param_1 + 0x1174) == '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
  plVar5 = param_1 + 0x1ca;
  if (((*(byte *)((longlong)param_1 + 0xc62) & 2) != 0) && (*DAT_14cb07778 != 0)) {
    (**(code **)(*param_1 + 0xd08))(param_1,&local_48);
    iVar1 = (int)uStack_40;
    if (local_48 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (0 < iVar1) {
      lVar4 = param_1[0x199];
      if ((((lVar4 == 0) || (lVar3 = FUN_14010780e(), lVar3 == 0)) ||
          (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30 || (plVar6 = (longlong *)param_1[0x199], plVar6 == (longlong *)0x0)))) {
LAB_1401ff9c6:
        if (*plVar5 == 0) goto LAB_1401ffb68;
      }
      else {
        plVar8 = (longlong *)plVar6[0x22];
        if (plVar8 == (longlong *)0x0) {
          (**(code **)(*plVar6 + 1000))(plVar6);
          plVar8 = (longlong *)plVar6[0x22];
        }
        if (*plVar5 == 0) {
          plVar6 = (longlong *)(**(code **)(*plVar8 + 0x2a0))(plVar8);
          *plVar5 = (longlong)plVar6;
          if (plVar6 == (longlong *)0x0) goto LAB_1401ffb68;
          (**(code **)(*plVar6 + 0x28))(plVar6);
          lVar4 = (**(code **)(*(longlong *)param_1[0x1ca] + 0x10))();
          param_1[0x1cb] = lVar4;
          cVar2 = (**(code **)(*plVar8 + 0x2b8))(plVar8);
          if (cVar2 != '\0') {
            lVar4 = (**(code **)(*plVar8 + 0x2c0))(plVar8);
            if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar4);
            }
            param_1[0x1cc] = lVar4;
          }
          goto LAB_1401ff9c6;
        }
      }
      lVar4 = param_1[0x16];
      if ((((lVar4 != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
          ((*(byte *)(lVar4 + 0x154) & 4) != 0)) && (*(longlong *)(lVar4 + 0x260) != 0)) {
        cVar2 = (**(code **)(*param_1 + 0xbf0))(param_1);
        if (cVar2 == '\0') {
          local_48 = (code *)0x0;
          uStack_40 = 0;
          FUN_140e11408(plVar9);
          local_98 = CONCAT31(local_98._1_3_,1);
          (**(code **)(*(longlong *)param_1[0x1ca] + 0x18))
                    ((longlong *)param_1[0x1ca],param_1,0,param_1[0x1cb]);
          lVar4 = (**(code **)(*plVar9 + 0x4b8))(plVar9);
          iVar1 = *(int *)(lVar4 + 8);
          if (0 < (longlong)iVar1) {
            uVar7 = 0;
            do {
              plVar5 = (longlong *)(**(code **)(*plVar9 + 0x4b8))(plVar9);
              lVar4 = *(longlong *)(*plVar5 + uVar7 * 8);
              if (lVar4 != 0) {
                if ((longlong)(int)uStack_40 != 0) {
                  lVar3 = 0;
                  do {
                    if (*(longlong *)(local_48 + lVar3) == lVar4) {
                      (**(code **)(*(longlong *)param_1[0x1ca] + 8))
                                ((longlong *)param_1[0x1ca],param_1,lVar4,uVar7 & 0xffffffff);
                      if (param_1[0x1cc] != 0) {
                        FUN_140e11630(param_1[0x1cc],lVar4,uVar7 & 0xffffffff);
                      }
                      break;
                    }
                    lVar3 = lVar3 + 8;
                  } while ((longlong)(int)uStack_40 * 8 != lVar3);
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 != (longlong)iVar1);
          }
          if (local_48 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          (**(code **)(*param_1 + 0xd10))(param_1);
        }
      }
      FUN_14019f46a(param_1);
      goto LAB_1401ffb68;
    }
  }
  plVar6 = (longlong *)FUN_1401077a0(param_1);
  plVar9 = (longlong *)param_1[0x1ca];
  if (plVar6 != (longlong *)0x0 && plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x50))(plVar9,param_1[0x1cb]);
    (**(code **)(*(longlong *)param_1[0x1ca] + 0x48))();
    (**(code **)(*(longlong *)param_1[0x1ca] + 0x30))();
    (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1[0x1ca]);
    *plVar5 = 0;
    param_1[0x1cb] = 0;
  }
LAB_1401ffb68:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401ffd16 FUN_1401ffd16 body=353 status=ok
// SIG undefined FUN_1401ffd16(void)

void FUN_1401ffd16(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401ffd9b;
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
LAB_1401ffd9b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 1401ffe78 FUN_1401ffe78 body=980 status=ok
// SIG undefined FUN_1401ffe78(void)

undefined8 * FUN_1401ffe78(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  void *pvVar21;
  int iVar22;
  void *_Src;
  
  *param_1 = &PTR_FUN_14aa75248;
  param_1[1] = 0;
  iVar22 = *(int *)(param_2 + 0x10);
  pvVar21 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar22;
  if ((longlong)iVar22 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1400f69e4(param_1 + 1,iVar22,0);
    memcpy((void *)param_1[1],pvVar21,(longlong)iVar22 << 3);
  }
  param_1[3] = 0;
  iVar22 = *(int *)(param_2 + 0x20);
  pvVar21 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar22;
  if ((longlong)iVar22 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1400f69e4(param_1 + 3,iVar22,0);
    memcpy((void *)param_1[3],pvVar21,(longlong)iVar22 << 3);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar14 = *(undefined8 *)(param_2 + 0x30);
  uVar15 = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = uVar15;
  param_1[5] = uVar2;
  param_1[6] = uVar14;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x55);
  uVar4 = *(undefined4 *)(param_2 + 0x59);
  uVar5 = *(undefined4 *)(param_2 + 0x5d);
  uVar6 = *(undefined4 *)(param_2 + 0x61);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x55) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x59) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x5d) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x61) = uVar6;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  iVar22 = *(int *)(param_2 + 0x80);
  uVar18 = iVar22 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar18) {
    uVar19 = 0x80;
    if (0x80 < uVar18) {
      uVar19 = uVar18;
    }
    *(uint *)((longlong)param_1 + 0x84) = uVar19;
    FUN_1446efbd8(param_1 + 0xd,0);
    iVar22 = *(int *)(param_2 + 0x80);
  }
  *(int *)(param_1 + 0x10) = iVar22;
  if (iVar22 != 0) {
    pvVar21 = (void *)(param_2 + 0x68);
    if (*(void **)(param_2 + 0x78) != (void *)0x0) {
      pvVar21 = *(void **)(param_2 + 0x78);
    }
    puVar20 = param_1 + 0xd;
    if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
      puVar20 = (undefined8 *)param_1[0xf];
    }
    memcpy(puVar20,pvVar21,(ulonglong)(iVar22 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  uVar14 = *(undefined8 *)(param_2 + 0x90);
  uVar15 = *(undefined8 *)(param_2 + 0x98);
  uVar16 = *(undefined8 *)(param_2 + 0xa0);
  uVar17 = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x16] = uVar17;
  param_1[0x13] = uVar15;
  param_1[0x14] = uVar16;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar14;
  cVar1 = *(char *)(param_2 + 0xc0);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  }
  uVar3 = *(undefined4 *)(param_2 + 200);
  uVar4 = *(undefined4 *)(param_2 + 0xcc);
  uVar5 = *(undefined4 *)(param_2 + 0xd0);
  uVar6 = *(undefined4 *)(param_2 + 0xd4);
  uVar7 = *(undefined4 *)(param_2 + 0xd8);
  uVar8 = *(undefined4 *)(param_2 + 0xdc);
  uVar9 = *(undefined4 *)(param_2 + 0xe0);
  uVar10 = *(undefined4 *)(param_2 + 0xe4);
  uVar11 = *(undefined4 *)(param_2 + 0xe8);
  uVar12 = *(undefined4 *)(param_2 + 0xec);
  uVar13 = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0x1d) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar12;
  *(undefined4 *)(param_1 + 0x1e) = uVar13;
  *(undefined4 *)(param_1 + 0x1b) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar8;
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar10;
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
  *(undefined4 *)(param_1 + 0x1a) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar6;
  param_1[0x1f] = 0;
  iVar22 = *(int *)(param_2 + 0x100);
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  *(int *)(param_1 + 0x20) = iVar22;
  if (iVar22 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  }
  else {
    FUN_1400f55fa(param_1 + 0x1f,iVar22,0);
    FUN_14480c599(param_1[0x1f],uVar2,iVar22);
  }
  param_1[0x23] = *(undefined8 *)(param_2 + 0x118);
  uVar3 = *(undefined4 *)(param_2 + 0x10c);
  uVar4 = *(undefined4 *)(param_2 + 0x110);
  uVar5 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  *(undefined4 *)(param_1 + 0x22) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar5;
  param_1[0x24] = 0;
  iVar22 = *(int *)(param_2 + 0x128);
  pvVar21 = *(void **)(param_2 + 0x120);
  *(int *)(param_1 + 0x25) = iVar22;
  if ((longlong)iVar22 == 0) {
    *(undefined4 *)((longlong)param_1 + 300) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x24,iVar22,0);
    memcpy((void *)param_1[0x24],pvVar21,(longlong)iVar22 * 2);
  }
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  param_1[0x2d] = 0;
  iVar22 = *(int *)(param_2 + 0x170);
  pvVar21 = *(void **)(param_2 + 0x168);
  *(int *)(param_1 + 0x2e) = iVar22;
  if ((longlong)iVar22 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x174) = 2;
  }
  else {
    _Src = (void *)(param_2 + 0x138);
    if (pvVar21 != (void *)0x0) {
      _Src = pvVar21;
    }
    FUN_1448ee84c(param_1 + 0x27,iVar22,0);
    puVar20 = (undefined8 *)param_1[0x2d];
    if ((undefined8 *)param_1[0x2d] == (undefined8 *)0x0) {
      puVar20 = param_1 + 0x27;
    }
    memcpy(puVar20,_Src,(longlong)iVar22 * 0x18);
  }
  param_1[0x33] = *(undefined8 *)(param_2 + 0x198);
  uVar3 = *(undefined4 *)(param_2 + 0x178);
  uVar4 = *(undefined4 *)(param_2 + 0x17c);
  uVar5 = *(undefined4 *)(param_2 + 0x180);
  uVar6 = *(undefined4 *)(param_2 + 0x184);
  uVar7 = *(undefined4 *)(param_2 + 0x18c);
  uVar8 = *(undefined4 *)(param_2 + 400);
  uVar9 = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar7;
  *(undefined4 *)(param_1 + 0x32) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x194) = uVar9;
  *(undefined4 *)(param_1 + 0x2f) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar6;
  param_1[0x34] = 0;
  iVar22 = *(int *)(param_2 + 0x1a8);
  uVar2 = *(undefined8 *)(param_2 + 0x1a0);
  *(int *)(param_1 + 0x35) = iVar22;
  if (iVar22 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  }
  else {
    FUN_147d0b890(param_1 + 0x34,iVar22);
    FUN_147d0b8e8(param_1[0x34],uVar2,iVar22);
  }
  *(undefined1 *)((longlong)param_1 + 0x1b2) = *(undefined1 *)(param_2 + 0x1b2);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 14020024c FUN_14020024c body=110 status=ok
// SIG undefined FUN_14020024c(void)

byte FUN_14020024c(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  if ((longlong)(int)param_1[1] == 0) {
    bVar4 = 0;
  }
  else {
    lVar5 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0x13c10 + lVar5;
    bVar4 = 0;
    do {
      cVar1 = FUN_1448ee8d8(lVar5);
      bVar2 = (*(float *)(lVar5 + 0x23f8) <= 0.0) + 1;
      if (cVar1 != '\0') {
        bVar2 = 4;
      }
      bVar4 = bVar4 | bVar2;
      lVar5 = lVar5 + 0x13c10;
    } while (lVar5 != lVar3);
  }
  return bVar4;
}



// FUNCTION 1402002ba FUN_1402002ba body=99 status=ok
// SIG undefined FUN_1402002ba(void)

void FUN_1402002ba(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14020031d FUN_14020031d body=19 status=ok
// SIG undefined FUN_14020031d(void)

bool FUN_14020031d(void)

{
  char cVar1;
  
  cVar1 = FUN_140200330();
  return cVar1 != '\0';
}



// FUNCTION 140200330 FUN_140200330 body=261 status=ok
// SIG undefined FUN_140200330(void)

ulonglong FUN_140200330(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar1 = DAT_14ca97170;
  iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar6 = 0;
  }
  else if (iVar3 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  if (0 < *(int *)(lVar1 + uVar6 * 4)) {
    uVar6 = 0;
    cVar2 = FUN_1412e1fec(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2)
                          ,0,0);
    if (cVar2 == '\0') goto LAB_1402003e7;
    iVar3 = FUN_147d678c6();
    if (iVar3 - 1U < 8) {
      uVar6 = 0x304070806050201 >> ((char)(iVar3 - 1U) * '\b' & 0x3fU);
      goto LAB_1402003e7;
    }
    if (DAT_14cb0ac90 == '\0') {
      FUN_147d6664c(&DAT_14cb0ac30);
    }
    if ((*(longlong *)(param_1 + 8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 8) + 0x4c) & 2) != 0)) {
      uVar6 = FUN_147d6782c(&DAT_14cb0ac30,param_1 + 0x1e0c);
      return uVar6;
    }
  }
  uVar6 = 0;
LAB_1402003e7:
  return uVar6 & 0xffffffff;
}



// FUNCTION 140200440 FUN_140200440 body=465 status=ok
// SIG undefined FUN_140200440(void)

void FUN_140200440(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
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
  code *local_30;
  code **local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((DAT_14cb1d8f0 & 1) != 0) ||
     (((DAT_14c762388 == '\x01' && (param_1[0x15] != 0)) && (-1 < *(char *)(param_1[0x15] + 100)))))
  goto LAB_140200561;
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x40) == 0) {
    if (-1 < (char)*(byte *)((longlong)param_1 + 0x9e)) goto LAB_140200561;
  }
  else {
    if ((param_1 == (longlong *)0x0) || (param_1[0x15] == 0)) goto LAB_140200561;
    if (DAT_14cac4ee8 == 0) {
      local_50 = &local_20;
      local_20 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147885155;
      local_60 = &LAB_1459be7ae;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"NavRelevantInterface",&DAT_14cac4ee8,&DAT_147885154);
    }
    lVar2 = FUN_144718840(param_1,DAT_14cac4ee8);
    if (lVar2 == 0) goto LAB_140200561;
    cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
    if (cVar1 != '\0') {
      local_28 = &local_20;
      local_30 = FUN_14383d4e4;
      FUN_1438384dc(lVar2,param_1,0);
      goto LAB_140200561;
    }
  }
  lVar2 = param_1[0x16];
  if (((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
     (lVar2 = FUN_144aeb994(lVar2), lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
LAB_140200561:
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140200626 FUN_140200626 body=34 status=ok
// SIG undefined FUN_140200626(void)

void FUN_140200626(undefined4 param_1,undefined4 param_2,byte param_3)

{
  FUN_140200648((longlong)&DAT_14c873410 + (ulonglong)((uint)param_3 * 0x30),param_1,param_2);
  return;
}



// FUNCTION 140200648 FUN_140200648 body=131 status=ok
// SIG undefined FUN_140200648(void)

longlong FUN_140200648(longlong param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar2 = *(uint *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      if ((int)uVar1 < 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulonglong)((uVar1 - 1) + param_2) / (ulonglong)uVar1;
      }
      if ((int)uVar2 < 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = (ulonglong)((uVar2 - 1) + param_3) / (ulonglong)uVar2;
      }
      lVar4 = lVar4 + uVar5 * (longlong)*(int *)(param_1 + 0x18) * uVar3;
      param_2 = param_2 >> 1;
      if (param_2 < 2) {
        param_2 = 1;
      }
      param_3 = param_3 >> 1;
      if (param_3 < 2) {
        param_3 = 1;
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return lVar4;
}



// FUNCTION 1402006cc FUN_1402006cc body=419 status=ok
// SIG undefined FUN_1402006cc(void)

longlong * FUN_1402006cc(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
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
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14020094d(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1456e5396(param_2,0);
      }
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_140200870(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1456e535c(param_2);
    if (0 < (int)local_34) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1467ee674(param_2,iVar2);
        }
        lVar4 = (longlong)iVar2 * 0x10 + *param_2;
        FUN_1402008dd(lVar4);
        FUN_140200870(param_1,lVar4);
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



// FUNCTION 140200870 FUN_140200870 body=109 status=ok
// SIG undefined FUN_140200870(void)

longlong * FUN_140200870(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_14021219d(param_1,*param_2 + 8);
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1402008dd FUN_1402008dd body=112 status=ok
// SIG undefined FUN_1402008dd(void)

void FUN_1402008dd(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_14001cc68(0x18,0x10);
  *piVar1 = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
  }
  else {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *param_1 = piVar1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      if (*(longlong *)(piVar1 + 2) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(piVar1);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14020094d FUN_14020094d body=71 status=ok
// SIG undefined FUN_14020094d(void)

void FUN_14020094d(undefined8 *param_1,int param_2)

{
  int *piVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        if (*(longlong *)(piVar1 + 2) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(piVar1);
      }
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140200994 FUN_140200994 body=289 status=ok
// SIG undefined FUN_140200994(void)

undefined8 * FUN_140200994(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  
  *param_1 = &PTR_FUN_149e061d8;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar4);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar4);
      }
      lVar4 = lVar4 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar4);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_144afd463(lVar2,uVar3,param_3);
  FUN_14274dd70(param_1 + 0xb);
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar5 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      _Memory = piVar5;
      if (*(longlong *)(piVar5 + 0x10) - (longlong)piVar5 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14274dd49);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar5;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 140200ab6 FUN_140200ab6 body=154 status=ok
// SIG undefined FUN_140200ab6(void)

longlong FUN_140200ab6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140200b0b;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140200b0b:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140200b50(param_1,param_2);
  return param_1;
}



// FUNCTION 140200b50 FUN_140200b50 body=372 status=ok
// SIG undefined FUN_140200b50(void)

longlong * FUN_140200b50(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1400dbf46(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar8 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar7,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar10 = 0;
      uVar9 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar5 + lVar10) = *(undefined4 *)(lVar3 + lVar10);
          *(undefined4 *)(lVar5 + 4 + lVar10) = *(undefined4 *)(lVar3 + 4 + lVar10);
        }
        else {
          lVar4 = *(longlong *)(lVar3 + lVar10);
          *(longlong *)(lVar5 + lVar10) = lVar4;
          if ((lVar4 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar5 + 8 + lVar10) = *(undefined8 *)(lVar3 + 8 + lVar10);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while (uVar1 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 140200cc4 FUN_140200cc4 body=272 status=ok
// SIG undefined FUN_140200cc4(void)

undefined8
FUN_140200cc4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    return 0;
  }
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') &&
     ((cVar1 = FUN_144a61b4f(), cVar1 != '\0' ||
      (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc60) == 0x40000002)))) {
    uVar2 = FUN_14344be4c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10);
    return uVar2;
  }
  uVar2 = FUN_140200dd4(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 140200dd4 FUN_140200dd4 body=1177 status=ok
// SIG undefined FUN_140200dd4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_140200dd4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,longlong param_7,longlong param_8,
                       uint *param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  byte bVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 auStack_1dc8 [32];
  longlong local_1da8;
  undefined8 local_1da0;
  uint local_1d98;
  longlong local_1d90;
  longlong local_1d88;
  uint *local_1d80;
  undefined1 local_1d78;
  undefined ***local_1d68;
  undefined ***local_1d60;
  undefined8 local_1d58;
  undefined4 *local_1d50;
  longlong local_1d48;
  undefined8 local_1d40;
  longlong local_1d38;
  ushort *local_1d30;
  undefined8 *local_1d28;
  undefined1 *local_1d20;
  byte *local_1d18;
  undefined8 local_1d10;
  longlong local_1d08;
  uint *local_1d00;
  undefined1 *local_1cf8;
  undefined ****local_1cf0;
  undefined1 local_1ce3;
  ushort local_1ce2;
  undefined **local_1ce0;
  undefined1 local_1cd8;
  longlong local_1cd0;
  longlong local_1cc8;
  undefined1 local_1cc0;
  undefined1 local_1cbf;
  undefined1 local_1cbe;
  byte local_1cbd;
  undefined2 local_1cbc;
  undefined8 local_1cb8;
  uint local_1cb0;
  uint local_1cac;
  byte local_1ca1;
  undefined **local_1ca0 [3];
  undefined4 local_1c88;
  undefined8 local_1c80;
  undefined8 uStack_1c78;
  undefined8 local_1c70;
  undefined4 local_1c68;
  undefined4 local_1c60;
  undefined2 local_1c5c;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  lVar5 = param_8;
  lVar4 = param_7;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1dc8;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar9 = 0;
  }
  else {
    local_1ca1 = 0;
    bVar12 = *(byte *)(param_2 + 0x1c) & 0x1f;
    lVar13 = param_2;
    if (bVar12 == 4 && param_2 != 0) {
      do {
        lVar13 = *(longlong *)(lVar13 + 0x20);
        bVar12 = *(byte *)(lVar13 + 0x1c) & 0x1f;
      } while (lVar13 != 0 && bVar12 == 4);
    }
    uVar9 = 0;
    if ((bVar12 < 9) && (uVar15 = 0x10b, (0x10bU >> (uint)bVar12 & 1) != 0)) {
      if (*param_9 == 0) {
        lVar13 = 0;
        local_1cb0 = 0;
        uVar15 = 0;
        do {
          if (*(char *)(param_8 + lVar13) == '\x02') {
            uVar15 = uVar15 | 1 << ((uint)lVar13 & 0x1f);
          }
          else if (*(char *)(param_8 + lVar13) == '\x01') {
            local_1cb0 = local_1cb0 | 1 << ((uint)lVar13 & 0x1f);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x20);
        local_1cb8 = CONCAT44(uVar15,1);
        local_1cac = (uint)*(byte *)(param_7 + 0x10) + (param_6 & 0xff) * 0x200000 + 1 |
                     *(int *)(param_7 + 0x20) << 0x1a;
      }
      else {
        local_1cb0 = 0;
        local_1cb8 = (ulonglong)*param_9 << 0x20;
        local_1cac = (uint)*(byte *)(param_7 + 0x10) + param_9[1] * 0x4000000 + 0x200001;
      }
      local_1ce0 = &PTR_FUN_14a83af80;
      if (*(char *)(param_7 + 0x29) == '\0') {
        *(undefined1 *)(param_7 + 0x29) = 1;
        if (1 < *(int *)(param_7 + 0x58)) {
          piVar1 = (int *)(param_7 + 0x30);
          piVar11 = *(int **)(param_7 + 0x50);
          if (*(int **)(param_7 + 0x50) == (int *)0x0) {
            piVar11 = piVar1;
          }
          FUN_1449e0cb6(piVar11,*(int *)(param_7 + 0x58),uVar15,local_1ca0);
          piVar11 = *(int **)(lVar4 + 0x50);
          piVar10 = piVar11;
          if (piVar11 == (int *)0x0) {
            piVar10 = piVar1;
          }
          iVar2 = *(int *)(lVar4 + 0x58);
          if ((longlong)iVar2 != 1) {
            lVar13 = 4;
            piVar14 = piVar10;
            iVar16 = *piVar10;
            do {
              iVar3 = *(int *)((longlong)piVar10 + lVar13);
              if (iVar16 != iVar3) {
                piVar14[1] = iVar3;
                piVar14 = piVar14 + 1;
              }
              lVar13 = lVar13 + 4;
              iVar16 = iVar3;
            } while ((longlong)iVar2 * 4 != lVar13);
            piVar11 = *(int **)(lVar4 + 0x50);
            piVar10 = piVar14;
          }
          if (piVar11 == (int *)0x0) {
            piVar11 = piVar1;
          }
          FUN_1479ab1f6(piVar1,(int)((ulonglong)((longlong)piVar10 - (longlong)piVar11) >> 2) + 1,0)
          ;
        }
      }
      local_1cd0 = lVar4 + 0x30;
      local_1cc8 = lVar4 + 0x60;
      plVar17 = (longlong *)0x0;
      local_1cbc = 0;
      local_1cd8 = 0;
      local_1cbf = *(undefined1 *)(lVar4 + 0x15);
      local_1cbe = *(undefined1 *)(lVar4 + 0x14);
      local_1cbd = *(byte *)(lVar4 + 0x11) ^ 1;
      local_1cc0 = 1;
      local_1ce2 = (ushort)*(byte *)(lVar4 + 0x16) << 5 | 4;
      local_1ca0[0] = &PTR_FUN_149f760b8;
      local_1c88 = 0xffffffff;
      local_1c80 = 0;
      uStack_1c78 = 0;
      local_1c70 = 0;
      local_1c68 = 0xffffffff;
      local_1c60 = 0;
      local_1c5c = 0;
      local_58 = 0;
      local_50 = 0x8000000000;
      if (0.0 < *(float *)(lVar4 + 0x24)) {
        plVar17 = *(longlong **)(param_1 + 0x938);
        if (plVar17 == (longlong *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar17 + 0x28))(plVar17,*(float *)(lVar4 + 0x24),1);
        }
        local_1cbc = CONCAT11(uVar7,(undefined1)local_1cbc);
      }
      puVar6 = param_9;
      local_1d40 = *(undefined8 *)(param_1 + 0x260);
      local_1d68 = local_1ca0;
      local_1cf0 = &local_1d68;
      local_1d60 = &local_1ce0;
      local_1d50 = &param_6;
      local_1d48 = lVar4;
      local_1d30 = &local_1ce2;
      local_1d28 = &local_1cb8;
      local_1d20 = &local_1ce3;
      local_1d18 = &local_1ca1;
      local_1d10 = param_5;
      local_1d08 = lVar5;
      local_1d00 = param_9;
      local_1cf8 = &LAB_1401d6746;
      local_1d58 = param_4;
      local_1d38 = param_2;
      uVar8 = FUN_1400d1732();
      if ((plVar17 != (longlong *)0x0) && (local_1cbc._1_1_ != '\0')) {
        local_1d80 = puVar6;
        local_1d88 = lVar5;
        local_1d90 = lVar4;
        local_1d98 = param_6;
        local_1d78 = 1;
        local_1da8 = param_2;
        local_1da0 = param_4;
        uVar8 = (**(code **)(*plVar17 + 0x68))(plVar17,*(undefined4 *)(lVar4 + 0x24),param_5,1);
        local_1ca1 = local_1ca1 | (byte)uVar8;
      }
      local_1ca0[0] = &PTR_FUN_149f760b8;
      if (local_58 != 0) {
        uVar8 = FUN_1400020a8();
      }
      uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),local_1ca1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1dc8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 14020126e FUN_14020126e body=273 status=ok
// SIG undefined FUN_14020126e(void)

void FUN_14020126e(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  if ((lVar5 != 0) && (1 < *(byte *)(lVar5 + 0x90))) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(ushort *)(lVar5 + 0x1b4) = *(ushort *)(lVar5 + 0x1b4) & 0xfdff | (ushort)param_2 << 9;
    *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) | 8;
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
                    /* WARNING: Could not recover jumptable at 0x0001402012ed. Too many branches */
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



// FUNCTION 140201380 FUN_140201380 body=1340 status=ok
// SIG undefined FUN_140201380(void)

void FUN_140201380(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  float *local_180;
  float *local_178;
  undefined8 local_168;
  float local_15c;
  undefined8 local_158;
  undefined8 local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_110;
  longlong *local_108;
  undefined4 local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  char local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(byte *)(param_1 + 0x39) & *param_3) == 0) goto LAB_140201619;
  local_15c = *(float *)(param_1 + 0x230);
  fStack_144 = param_2[1] * (1.0 / local_15c);
  local_148 = (1.0 / local_15c) * *param_2;
  fStack_130 = (float)DAT_14c8463f8 * local_15c;
  fStack_134 = (float)DAT_14c8463f0 * local_15c;
  local_158 = CONCAT44(fStack_130,fStack_134);
  local_168 = CONCAT44(fStack_144,local_148);
  local_110 = *(longlong *)(param_1 + 0x208);
  local_b0 = *(char *)(local_110 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_b0 == '\0') goto LAB_140201491;
    local_b8 = *(ulonglong *)(local_110 + 400);
    local_c8 = *(undefined8 *)(local_110 + 0x180);
    uStack_c0 = *(undefined8 *)(local_110 + 0x188);
LAB_1402016e3:
    fVar10 = (float)*(double *)(local_110 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar10 = (0.5 - fVar10) + 0.5;
    }
    local_150 = CONCAT44((float)*(double *)(local_110 + 0x178),fVar10);
    local_188 = &local_150;
    local_178 = param_2 + 7;
    local_148 = param_2[2];
    local_180 = &local_148;
    fStack_144 = (float)*(undefined8 *)(param_2 + 3);
    fStack_140 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
    FUN_146978c22(&local_100,&local_168,&local_15c,&local_c8);
    local_110 = *(longlong *)(param_1 + 0x208);
    plVar7 = *(longlong **)(param_1 + 0x210);
    if (plVar7 == (longlong *)0x0) {
      local_118 = local_d0;
      local_128 = CONCAT44(uStack_dc,local_e0);
      uStack_120 = CONCAT44(uStack_d4,uStack_d8);
      local_138 = local_f0;
      fStack_134 = fStack_ec;
      fStack_130 = fStack_e8;
      fStack_12c = fStack_e4;
      local_148 = local_100;
      fStack_144 = fStack_fc;
      fStack_140 = fStack_f8;
      fStack_13c = fStack_f4;
      goto LAB_140201825;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_118 = local_d0;
    local_128 = CONCAT44(uStack_dc,local_e0);
    uStack_120 = CONCAT44(uStack_d4,uStack_d8);
    local_138 = local_f0;
    fStack_134 = fStack_ec;
    fStack_130 = fStack_e8;
    fStack_12c = fStack_e4;
    local_148 = local_100;
    fStack_144 = fStack_fc;
    fStack_140 = fStack_f8;
    fStack_13c = fStack_f4;
LAB_1402015d8:
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_108 = plVar7;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  else {
    if (local_b0 != '\0') {
      local_c8 = *(undefined8 *)(local_110 + 0x180);
      uStack_c0 = *(undefined8 *)(local_110 + 0x188);
      local_b8 = *(ulonglong *)(local_110 + 400) ^ 0x80000000;
      goto LAB_1402016e3;
    }
LAB_140201491:
    uVar6 = *(undefined1 *)(param_2 + 0xd);
    fVar10 = param_2[8];
    fVar3 = param_2[10];
    fStack_140 = param_2[2];
    fVar4 = param_2[7];
    fVar5 = param_2[9];
    fVar8 = fStack_134 * fVar10 + fStack_130 * fVar3 + param_2[0xc];
    fVar11 = fStack_134 * fVar4 + fStack_130 * fVar5 + param_2[0xb];
    fVar9 = fVar10 * 0.0 + local_15c * fVar3;
    fVar12 = fVar4 * 0.0 + local_15c * fVar5;
    fVar10 = fVar3 * 0.0 + local_15c * fVar10;
    local_138 = fStack_130 * fStack_140 + param_2[4];
    fStack_13c = fStack_134 * fStack_140 + param_2[3];
    fStack_12c = fVar5 * 0.0 + local_15c * fVar4;
    fStack_140 = local_15c * fStack_140;
    plVar7 = *(longlong **)(param_1 + 0x210);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_128 = CONCAT44(fVar12,fVar10);
      uStack_120 = CONCAT44(fVar11,fVar9);
      local_118 = CONCAT17(local_100._2_1_,CONCAT25((undefined2)local_100,CONCAT14(uVar6,fVar8))) &
                  0xffffff01ffffffff;
      goto LAB_1402015d8;
    }
    local_128 = CONCAT44(fVar12,fVar10);
    uStack_120 = CONCAT44(fVar11,fVar9);
    local_118 = CONCAT35(local_118._5_3_,CONCAT14(uVar6,fVar8)) & 0xffffff01ffffffff;
LAB_140201825:
    local_108 = (longlong *)0x0;
  }
  FUN_1402018be(param_3,&local_148);
  plVar7 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_140201619:
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402018be FUN_1402018be body=157 status=ok
// SIG undefined FUN_1402018be(void)

void FUN_1402018be(byte *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  longlong lVar9;
  
  if ((*(byte *)(param_2[7] + 0x39) & *param_1) != 0) {
    iVar1 = *(int *)(param_1 + 0x130);
    lVar9 = (longlong)iVar1;
    *(uint *)(param_1 + 0x130) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x134) < iVar1 + 1U) {
      FUN_14022ed06(param_1 + 8,iVar1);
    }
    pbVar8 = param_1 + 8;
    if (*(byte **)(param_1 + 0x128) != (byte *)0x0) {
      pbVar8 = *(byte **)(param_1 + 0x128);
    }
    *(undefined8 *)(pbVar8 + lVar9 * 0x48 + 0x30) = param_2[6];
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[5];
    *(undefined8 *)(pbVar8 + lVar9 * 0x48 + 0x20) = param_2[4];
    *(undefined8 *)(pbVar8 + lVar9 * 0x48 + 0x20 + 8) = uVar7;
    *(undefined8 *)(pbVar8 + lVar9 * 0x48 + 0x10) = uVar5;
    *(undefined8 *)(pbVar8 + lVar9 * 0x48 + 0x10 + 8) = uVar6;
    *(undefined8 *)(pbVar8 + lVar9 * 0x48) = uVar3;
    *(undefined8 *)(pbVar8 + lVar9 * 0x48 + 8) = uVar4;
    *(undefined8 *)(pbVar8 + lVar9 * 0x48 + 0x38) = param_2[7];
    lVar2 = param_2[8];
    *(longlong *)(pbVar8 + lVar9 * 0x48 + 0x40) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14020195c FUN_14020195c body=49 status=ok
// SIG undefined FUN_14020195c(void)

void FUN_14020195c(longlong param_1,byte param_2)

{
  FUN_14020198e();
  *(uint *)(param_1 + 0x36a8) = *(uint *)(param_1 + 0x36a8) & 0xfffffffe | (uint)(param_2 >> 4 & 1);
  return;
}



// FUNCTION 14020198e FUN_14020198e body=134 status=ok
// SIG undefined FUN_14020198e(void)

void FUN_14020198e(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1f0);
  if (lVar1 != 0) {
    bVar3 = *(byte *)(lVar1 + 0x550);
    *(byte *)(lVar1 + 0x550) = bVar3 & 0xf7 | param_2 * '\b' & 8;
    *(byte *)(param_1 + 0x5b5) = *(byte *)(param_1 + 0x5b5) & 0xdf | (param_2 & 2) << 4;
    plVar2 = *(longlong **)(param_1 + 0x1f0);
    if ((char)plVar2[0x2f] == '\x03') {
      bVar3 = bVar3 & 8;
      if (((*(byte *)(plVar2 + 0xaa) & 8) == 0) || (bVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140201a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x7f0 +
                    (ulonglong)(byte)(bVar3 >> 3 | (*(byte *)(plVar2 + 0xaa) & 8) == 0) * 8))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140201a14 FUN_140201a14 body=112 status=ok
// SIG undefined FUN_140201a14(void)

void FUN_140201a14(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x80);
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
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140201aa4 FUN_140201aa4 body=29 status=ok
// SIG undefined FUN_140201aa4(void)

undefined8 FUN_140201aa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140201ac2 FUN_140201ac2 body=55 status=ok
// SIG undefined FUN_140201ac2(void)

void FUN_140201ac2(longlong *param_1)

{
  FUN_140201afa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140201afa FUN_140201afa body=121 status=ok
// SIG undefined FUN_140201afa(void)

void FUN_140201afa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140201b74 FUN_140201b74 body=84 status=ok
// SIG undefined FUN_140201b74(void)

void FUN_140201b74(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 140201bca FUN_140201bca body=964 status=ok
// SIG undefined FUN_140201bca(void)

void FUN_140201bca(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448ef896();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2870) {
    FUN_144b3d300(&DAT_14cbc2870);
    if (DAT_14cbc2870 == -1) {
      FUN_1446f470e(&local_28,L"HealthState",1);
      uVar1 = FUN_140aed286();
      FUN_140aed286();
      DAT_14cbc2868 = FUN_140f1fabf(uVar1,local_28);
      _Init_thread_footer(&DAT_14cbc2870);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998000) {
    FUN_144b3d300(&DAT_14c998000);
    if (DAT_14c998000 == -1) {
      FUN_145984cc0(&DAT_14c997f90);
      atexit((_func_5014 *)&LAB_142a64008);
      _Init_thread_footer(&DAT_14c998000);
    }
  }
  if (0 < *(int *)(DAT_14cbc2868 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_1448ef1fe(&DAT_14c997f90,param_1,*(int *)(DAT_14cbc2868 + 0x40) + iVar2,
                    *(byte *)(param_1 + 0x1d39) & 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_14cbc2868 + 0x30));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2880) {
    FUN_144b3d300(&DAT_14cbc2880);
    if (DAT_14cbc2880 == -1) {
      FUN_1446f470e(&local_28,L"GrappleableState",1);
      uVar1 = FUN_140aed286();
      FUN_140aed286();
      DAT_14cbc2878 = FUN_140f1fabf(uVar1,local_28);
      _Init_thread_footer(&DAT_14cbc2880);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998000) {
    FUN_144b3d300(&DAT_14c998000);
    if (DAT_14c998000 == -1) {
      FUN_145984cc0(&DAT_14c997f90);
      atexit((_func_5014 *)&LAB_142a64008);
      _Init_thread_footer(&DAT_14c998000);
    }
  }
  if (0 < *(int *)(DAT_14cbc2878 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_1448ef1fe(&DAT_14c997f90,param_1,*(int *)(DAT_14cbc2878 + 0x40) + iVar2,
                    *(undefined1 *)(param_1 + 0x2588));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_14cbc2878 + 0x30));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2890) {
    FUN_144b3d300(&DAT_14cbc2890);
    if (DAT_14cbc2890 == -1) {
      FUN_1446f470e(&local_28,L"bGrappleEnabled",1);
      uVar1 = FUN_140aed286();
      FUN_140aed286();
      DAT_14cbc2888 = FUN_140f1fabf(uVar1,local_28);
      _Init_thread_footer(&DAT_14cbc2890);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998000) {
    FUN_144b3d300(&DAT_14c998000);
    if (DAT_14c998000 == -1) {
      FUN_145984cc0(&DAT_14c997f90);
      atexit((_func_5014 *)&LAB_142a64008);
      _Init_thread_footer(&DAT_14c998000);
    }
  }
  if (0 < *(int *)(DAT_14cbc2888 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_1448ef1fe(&DAT_14c997f90,param_1,*(int *)(DAT_14cbc2888 + 0x40) + iVar2,
                    *(undefined1 *)(param_1 + 0x2588));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_14cbc2888 + 0x30));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140201f92 FUN_140201f92 body=145 status=ok
// SIG undefined FUN_140201f92(void)

void FUN_140201f92(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448f0094();
  if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
    lVar2 = FUN_1402020be(param_1);
    cVar1 = (**(code **)(*param_1 + 0x7c0))(param_1);
    if (cVar1 == '\0') {
      *(byte *)(lVar2 + 0x78) = *(byte *)(lVar2 + 0x78) & 0xfb;
    }
    else {
      *(byte *)(lVar2 + 0x78) = *(byte *)(lVar2 + 0x78) | 4;
      FUN_144b21218(param_1[0x86],&local_30);
      *(undefined8 *)(lVar2 + 0x70) = local_20;
      *(undefined4 *)(lVar2 + 0x60) = local_30;
      *(undefined4 *)(lVar2 + 100) = uStack_2c;
      *(undefined4 *)(lVar2 + 0x68) = uStack_28;
      *(undefined4 *)(lVar2 + 0x6c) = uStack_24;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140202030 FUN_140202030 body=78 status=ok
// SIG undefined FUN_140202030(void)

undefined8 * FUN_140202030(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_3 == 0) || (DAT_14cad86e8 < 1)) {
    param_1[2] = param_2[2];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  else {
    lVar2 = FUN_1447210f0(param_3);
    FUN_147a92d32(param_1,param_2,lVar2 + 0x710);
  }
  return param_1;
}



// FUNCTION 14020207e FUN_14020207e body=64 status=ok
// SIG undefined FUN_14020207e(void)

undefined8 * FUN_14020207e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 == (longlong *)0x0) {
    param_2[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar2;
  }
  else {
    (**(code **)(*plVar1 + 0x4e0))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1402020be FUN_1402020be body=186 status=ok
// SIG undefined FUN_1402020be(void)

longlong FUN_1402020be(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,7);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x80;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return param_1 + 0xe0;
}



// FUNCTION 140202178 FUN_140202178 body=55 status=ok
// SIG undefined FUN_140202178(void)

void FUN_140202178(longlong *param_1)

{
  FUN_1402021b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402021b6 FUN_1402021b6 body=123 status=ok
// SIG undefined FUN_1402021b6(void)

void FUN_1402021b6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140202232 FUN_140202232 body=125 status=ok
// SIG undefined FUN_140202232(void)

undefined8 * FUN_140202232(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1402022b0();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1402022b0 FUN_1402022b0 body=150 status=ok
// SIG undefined FUN_1402022b0(void)

longlong * FUN_1402022b0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 140202346 FUN_140202346 body=94 status=ok
// SIG undefined FUN_140202346(void)

void FUN_140202346(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar2 = FUN_14001cc68(0x78,0x10);
    FUN_1456e54e6(uVar2,param_1);
    puVar1 = *(undefined8 **)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Jumptable with 0 entries at 0x0001402023a1 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1402023a4 FUN_1402023a4 body=239 status=ok
// SIG undefined FUN_1402023a4(void)

void * FUN_1402023a4(void *param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80;
  *(int *)((longlong)param_1 + 0x18) = (int)param_2;
  uVar5 = (int)param_2 + 0x1f;
  if (uVar5 < 0x20) goto LAB_140202419;
  pvVar3 = param_1;
  if (uVar5 < 0xa0) {
LAB_1402023d5:
    uVar5 = uVar5 >> 3 & 0xfffffffc;
    iVar4 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff);
  }
  else {
    param_2 = 0;
    FUN_14499171c(param_1,0,uVar5 >> 5,4);
    *(uint *)((longlong)param_1 + 0x1c) = uVar5 & 0xffffffe0;
    pvVar3 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar3 = param_1;
    }
    if (uVar5 < 0x120) goto LAB_1402023d5;
    uVar5 = (uVar5 >> 5) << 2;
    iVar4 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff);
  }
  memset(pvVar3,iVar4,(ulonglong)uVar5);
  iVar4 = *(int *)((longlong)param_1 + 0x18);
  iVar1 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  if (iVar4 % 0x20 != 0) {
    pvVar3 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar3 = param_1;
    }
    bVar2 = -(char)(iVar4 % 0x20);
    *(uint *)((longlong)pvVar3 + (longlong)(iVar1 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar3 + (longlong)(iVar1 >> 5) * 4) << (bVar2 & 0x1f)) >>
         (bVar2 & 0x1f);
  }
LAB_140202419:
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  return param_1;
}



// FUNCTION 140202494 FUN_140202494 body=417 status=ok
// SIG undefined FUN_140202494(void)

undefined8 FUN_140202494(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined1 local_50 [24];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_70 = param_3;
  lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_108);
  }
  if (DAT_14c761944 == '\x01') {
    dVar3 = (double)(**(code **)(param_1[0x57] + 0x18))(param_1 + 0x57,&local_70);
    if (dVar3 != 0.0) {
      FUN_1457e87ce(local_50,dVar3);
      FUN_146e1fc90(local_38,&local_d8,dVar3);
      *param_2 = local_b8;
      param_2[1] = uStack_b0;
      param_2[2] = local_a8;
      *(undefined4 *)(param_2 + 4) = local_d8;
      *(undefined4 *)((longlong)param_2 + 0x24) = uStack_d4;
      *(undefined4 *)(param_2 + 5) = uStack_d0;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_cc;
      *(undefined4 *)(param_2 + 6) = local_c8;
      *(undefined4 *)((longlong)param_2 + 0x34) = uStack_c4;
      *(undefined4 *)(param_2 + 7) = uStack_c0;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_bc;
      FUN_146e2003a(local_38,&local_68,dVar3);
      param_2[10] = local_58;
      *(undefined4 *)(param_2 + 8) = (undefined4)local_68;
      *(undefined4 *)((longlong)param_2 + 0x44) = local_68._4_4_;
      *(undefined4 *)(param_2 + 9) = uStack_60;
      *(undefined4 *)((longlong)param_2 + 0x4c) = uStack_5c;
      FUN_146e2025c(local_38,&local_68,dVar3);
      param_2[0xb] = local_68 * 57.2957763671875;
      param_2[0xc] = (double)CONCAT44(uStack_5c,uStack_60) * 57.2957763671875;
      param_2[0xd] = local_58 * 57.2957763671875;
      local_e0 = 1;
      local_e8 = &local_68;
      local_68 = dVar3;
      uVar1 = FUN_140b262c0(local_38);
      *(undefined1 *)(param_2 + 0xe) = uVar1;
      FUN_1448635f4(local_50);
      uVar4 = 1;
      goto LAB_140202626;
    }
  }
  uVar4 = 0;
LAB_140202626:
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140202650 FUN_140202650 body=670 status=ok
// SIG undefined FUN_140202650(void)

undefined8 FUN_140202650(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 **local_80;
  undefined1 local_69;
  undefined8 *local_68;
  uint *local_60;
  undefined8 **local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_1[2] & 1) != 0) && (param_1[1] != 0)) {
    uVar2 = *param_1;
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14020267d;
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar4;
      }
      else {
        lVar7 = 0;
      }
      lVar5 = DAT_14c997cc0;
      if (DAT_14c997cc0 == 0) {
        plVar4 = (longlong *)FUN_145a62958();
        lVar5 = plVar4[0x22];
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 1000))(plVar4);
          lVar5 = plVar4[0x22];
        }
      }
      cVar3 = *(char *)(lVar5 + 0x75);
      if (*(char *)(lVar7 + 0x31) != '\0') {
        cVar3 = *(char *)(lVar7 + 0x31);
      }
      if ((cVar3 != '\x03') && (*(longlong *)(param_1 + 0x4e) != 0)) {
        puVar1 = param_1 + 0x4e;
        local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffffffffff00);
        local_88 = &local_69;
        local_69 = 1;
        local_98 = local_f8;
        puVar8 = &DAT_14c846480;
        puVar9 = local_98;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        local_58 = (undefined8 **)FUN_1400d78f6;
        uStack_90 = (undefined8 ***)param_1;
        local_80 = &local_68;
        local_50 = (undefined8 **)&local_98;
        FUN_1448e6002(puVar1,&local_58);
        *param_2 = local_d8;
        param_2[1] = uStack_d0;
        param_2[2] = local_c8;
        param_2[4] = local_f8[0];
        param_2[5] = local_f8[1];
        *(undefined4 *)(param_2 + 6) = local_e8;
        *(undefined4 *)((longlong)param_2 + 0x34) = uStack_e4;
        *(undefined4 *)(param_2 + 7) = uStack_e0;
        *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_dc;
        local_98 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_90 = (undefined8 ***)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_88 = (undefined1 *)DAT_14c8464f0;
        local_58 = (undefined8 **)&LAB_143620340;
        local_68 = &local_98;
        local_60 = param_1;
        local_50 = &local_68;
        FUN_1448e6002(puVar1,&local_58);
        param_2[10] = local_88;
        param_2[8] = local_98;
        param_2[9] = uStack_90;
        local_98 = (undefined8 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_90 = (undefined8 ***)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_88 = (undefined1 *)DAT_14c8464f0;
        local_58 = (undefined8 **)&LAB_1436203a6;
        local_68 = &local_98;
        local_50 = &local_68;
        FUN_1448e6002(puVar1,&local_58);
        param_2[0xb] = (double)local_98 * 57.2957763671875;
        param_2[0xc] = (double)uStack_90 * 57.2957763671875;
        param_2[0xd] = (double)local_88 * 57.2957763671875;
        local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffffffffff00);
        local_98 = (undefined8 *)&LAB_143622136;
        uStack_90 = &local_58;
        local_58 = &local_68;
        FUN_1448e6002(puVar1,&local_98);
        *(byte *)(param_2 + 0xe) = (byte)local_68 ^ 1;
        uVar6 = 1;
        goto LAB_14020267d;
      }
    }
  }
  uVar6 = 0;
LAB_14020267d:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402028f0 FUN_1402028f0 body=343 status=ok
// SIG undefined FUN_1402028f0(void)

longlong FUN_1402028f0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_140204258();
    local_38 = 0;
    uVar3 = (**(code **)(*(longlong *)(param_2 + 0x2b8) + 0x18))(param_2 + 0x2b8);
    if (uVar3 != 0) {
      lVar4 = FUN_14496b220(*(undefined8 *)(param_1 + 0x70));
      if (lVar4 != 0) {
        iVar5 = *(int *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x18) = iVar5 + 1U;
        if (*(uint *)(lVar4 + 0x1c) < iVar5 + 1U) {
          FUN_140f0493c((longlong *)(lVar4 + 0x10),iVar5);
        }
        *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar5 * 8) = uVar3;
      }
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
        uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        lVar4 = param_1 + 0x48;
        if (*(longlong *)(param_1 + 0x50) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x50);
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x58) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        if (iVar5 != -1) {
          lVar4 = 0;
          do {
            lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0xa0;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0xa0) == uVar3) {
              if (lVar1 == 0) goto LAB_140202a34;
              lVar4 = lVar1 + 0x10;
              *param_3 = *(undefined4 *)(param_1 + 8);
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x90);
          } while (iVar5 != -1);
          goto LAB_140202a11;
        }
      }
    }
  }
LAB_140202a34:
  lVar4 = 0;
LAB_140202a11:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 140202a48 FUN_140202a48 body=180 status=ok
// SIG undefined FUN_140202a48(void)

void FUN_140202a48(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140202030(&local_40);
  param_1[8] = local_30;
  *(undefined4 *)(param_1 + 6) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_3c;
  *(undefined4 *)(param_1 + 7) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_34;
  FUN_1448052ee(param_2 + 0x20,&local_40);
  param_1[0xb] = local_30;
  param_1[9] = CONCAT44(uStack_3c,local_40);
  param_1[10] = CONCAT44(uStack_34,uStack_38);
  param_1[2] = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *param_1 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = uVar4;
  param_1[5] = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfc | *(byte *)(param_2 + 0x70) & 1 | 2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140202afe FUN_140202afe body=1077 status=ok
// SIG undefined FUN_140202afe(void)

uint * FUN_140202afe(longlong *param_1,uint *param_2,undefined8 *param_3,char *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar7) {
      FUN_1447711aa(param_1,uVar7);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar10 = iVar15 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar11 = iVar15 + 1;
    iVar19 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar19 = iVar15;
    }
    if (iVar19 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar10 = iVar15;
        }
        else {
          uVar16 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar16) {
              uVar14 = uVar16;
            }
          }
          else {
            uVar14 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar14 << 2,0);
          iVar10 = (int)(uVar12 >> 2);
          iVar11 = -0x20;
          if ((int)uVar16 <= iVar10) {
            iVar11 = iVar10 << 5;
          }
          iVar10 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar8,iVar10);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar10 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar10 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar8;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar10 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar17 = (longlong)(int)uVar7;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar15 & 0x1f;
    puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar19 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    uVar7 = *(uint *)(param_1 + 6);
    lVar17 = (longlong)(int)uVar7;
    iVar15 = *(int *)(*param_1 + 4 + lVar17 * 0x20);
    *(int *)(param_1 + 6) = iVar15;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x20) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  uVar16 = uVar7 + 0x1f;
  if (-1 < (int)uVar7) {
    uVar16 = uVar7;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)uVar16 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar7 & 0x1f);
  lVar21 = *param_1;
  lVar17 = lVar17 * 0x20;
  puVar2 = (uint *)(lVar21 + lVar17);
  puVar4 = (undefined8 *)param_3[1];
  uVar12 = *(ulonglong *)*param_3;
  *(ulonglong *)(lVar21 + lVar17) = uVar12;
  *(undefined8 *)(lVar21 + 8 + lVar17) = *puVar4;
  lVar5 = puVar4[1];
  *(longlong *)(lVar21 + 0x10 + lVar17) = lVar5;
  if (lVar5 == 0) {
    uVar16 = (uint)(uVar12 >> 0x20);
  }
  else {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    uVar12 = (ulonglong)*puVar2;
    uVar16 = puVar2[1];
  }
  puVar2[6] = 0xffffffff;
  uVar14 = uVar16 >> 0xd ^ (int)uVar12 - uVar16;
  uVar20 = uVar14 << 8 ^ (-0x61c88647 - uVar16) - uVar14;
  uVar22 = uVar20 >> 0xd ^ (uVar16 - uVar14) - uVar20;
  uVar23 = uVar22 >> 0xc ^ (uVar14 - uVar20) - uVar22;
  uVar14 = uVar23 << 0x10 ^ (uVar20 - uVar22) - uVar23;
  uVar20 = uVar14 >> 5 ^ (uVar22 - uVar23) - uVar14;
  uVar22 = uVar20 >> 3 ^ (uVar23 - uVar14) - uVar20;
  uVar14 = uVar22 << 10 ^ (uVar14 - uVar20) - uVar22;
  uVar14 = uVar14 >> 0xf ^ uVar20 - (uVar22 + uVar14);
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar20 = *(uint *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (uVar20 != 0xffffffff) {
      lVar17 = *param_1;
      do {
        lVar21 = (longlong)(int)uVar20 * 0x20;
        puVar3 = (uint *)(lVar17 + lVar21);
        if ((*(int *)(lVar17 + lVar21) == (int)uVar12) && (*(uint *)(lVar17 + 4 + lVar21) == uVar16)
           ) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar18 = plVar8 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*plVar8)();
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
            }
          }
          uVar16 = *puVar2;
          uVar22 = puVar2[1];
          uVar23 = puVar2[2];
          uVar6 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar16;
          puVar3[1] = uVar22;
          puVar3[2] = uVar23;
          puVar3[3] = uVar6;
          FUN_14098f724(param_1,uVar7);
          cVar13 = '\x01';
          goto LAB_140202cbe;
        }
        uVar20 = puVar3[6];
      } while (uVar20 != 0xffffffff);
    }
  }
  cVar13 = '\0';
  uVar20 = uVar7;
LAB_140202cbe:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar13;
  }
  if (cVar13 == '\0') {
    uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar7 < 4) {
      iVar15 = 1;
    }
    else {
      uVar12 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar15 = 1 << ((byte)lVar17 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar15 <= (int)param_1[9])) {
      uVar14 = (int)param_1[9] - 1U & uVar14;
      puVar2[7] = uVar14;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      puVar2[6] = *(uint *)((longlong)plVar8 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
           uVar20;
    }
    else {
      *(int *)(param_1 + 9) = iVar15;
      FUN_140204a76(param_1);
    }
  }
  *param_2 = uVar20;
  return param_2;
}



// FUNCTION 140202f34 FUN_140202f34 body=4898 status=ok
// SIG undefined FUN_140202f34(void)

void FUN_140202f34(ulonglong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  code **ppcVar4;
  ulonglong uVar5;
  code **ppcVar6;
  longlong lVar7;
  code *pcVar8;
  code *pcVar9;
  undefined2 *puVar10;
  code **ppcVar11;
  code **ppcVar12;
  code **ppcVar13;
  undefined4 uVar14;
  code **ppcVar15;
  code **ppcVar16;
  uint uVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  byte bVar24;
  code **ppcVar22;
  code **ppcVar23;
  int iVar25;
  undefined *puVar26;
  longlong *plVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_408 [32];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  code *local_3d0;
  wchar_t *local_3c8;
  code *local_3c0;
  undefined1 *local_3b8;
  code **local_3b0;
  code *local_3a8;
  code *local_3a0;
  ulonglong local_398;
  code **local_390;
  code **local_388;
  longlong *local_380;
  code *local_378;
  undefined8 uStack_370;
  undefined2 *local_368;
  int local_360;
  undefined2 *local_358;
  int local_350;
  code *local_348;
  code *local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if ((*(byte *)(param_1 + 0xd5) & 8) == 0) {
    plVar27 = (longlong *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*(int *)(param_1 + 0x10c) != 0) {
      FUN_1403ab89a(plVar27);
    }
    uVar5 = *(ulonglong *)(param_1 + 0x40);
    if (uVar5 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      if (*(int *)(param_1 + 0xfc) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        FUN_140710002(param_1 + 0xf0);
      }
    }
    else {
      FUN_140202f34(uVar5);
      if (uVar5 != param_1) {
        iVar29 = *(int *)(uVar5 + 0xf8);
        _Src = *(void **)(uVar5 + 0xf0);
        *(int *)(param_1 + 0xf8) = iVar29;
        if (iVar29 == 0 && *(int *)(param_1 + 0xfc) == 0) {
          *(undefined4 *)(param_1 + 0xfc) = 0;
        }
        else {
          FUN_14171463c((undefined8 *)(param_1 + 0xf0));
          if (iVar29 != 0) {
            memcpy(*(void **)(param_1 + 0xf0),_Src,(longlong)iVar29 << 4);
          }
        }
      }
      uVar14 = *(undefined4 *)(param_1 + 0xf8);
    }
    *(undefined4 *)(param_1 + 0xcc) = uVar14;
    local_378 = (code *)0x0;
    uStack_370 = 0;
    if (param_1 == 0) {
      uStack_370._0_4_ = 0;
    }
    else {
      for (lVar20 = *(longlong *)(param_1 + 0x50); local_380 = plVar27, lVar20 != 0;
          lVar20 = *(longlong *)(lVar20 + 0x18)) {
        puVar26 = *(undefined **)(lVar20 + 8);
        if ((puVar26[0x18] & 1) != 0) {
          goto LAB_14020307e;
        }
      }
LAB_14020328e:
      plVar27 = local_380;
      for (lVar20 = *(longlong *)(param_1 + 0x48); lVar20 != 0;
          lVar20 = *(longlong *)(lVar20 + 0x28)) {
        if ((*(byte *)(*(longlong *)(lVar20 + 0x10) + 0xd8) & 1) != 0) {
          do {
            lVar7 = FUN_140010bca();
            if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
                ((*(byte *)(lVar20 + 0xb0) & 0x40) != 0)) && (*(longlong *)(lVar20 + 0x40) == 0)) {
              iVar29 = *(int *)(param_1 + 0x108);
              uVar17 = iVar29 + 1;
              *(uint *)(param_1 + 0x108) = uVar17;
              if (*(uint *)(param_1 + 0x10c) < uVar17) {
                FUN_1417144da(plVar27);
              }
              *(longlong *)(*plVar27 + (longlong)iVar29 * 8) = lVar20;
            }
            do {
              lVar20 = *(longlong *)(lVar20 + 0x28);
              if (lVar20 == 0) goto LAB_1402032b9;
            } while ((*(byte *)(*(longlong *)(lVar20 + 0x10) + 0xd8) & 1) == 0);
          } while( true );
        }
      }
LAB_1402032b9:
      pcVar8 = local_378;
      iVar29 = (int)uStack_370;
      if (1 < (int)uStack_370 && -1 < *(char *)(param_1 + 0xd4)) {
        uVar5 = uStack_370 & 0xffffffff;
        memset(local_338,0,0x2f0);
        local_348 = pcVar8;
        local_340 = pcVar8 + uVar5 * 8 + -8;
        fVar34 = logf((float)iVar29);
        local_338[0] = (int)(longlong)(fVar34 + fVar34);
        ppcVar6 = &local_348;
        do {
          ppcVar12 = (code **)*ppcVar6;
          ppcVar22 = (code **)ppcVar6[1];
          iVar29 = (int)((ulonglong)((longlong)ppcVar22 - (longlong)ppcVar12) >> 3);
          uVar5 = (ulonglong)(iVar29 + 1);
          local_398 = CONCAT44(local_398._4_4_,*(int *)(ppcVar6 + 2));
          local_390 = ppcVar6;
          if (*(int *)(ppcVar6 + 2) != 0) {
LAB_140203360:
            if (8 < (int)(uint)uVar5) {
              uVar17 = (uint)uVar5 >> 1;
              pcVar8 = ppcVar12[uVar17];
              ppcVar12[uVar17] = *ppcVar12;
              *ppcVar12 = pcVar8;
              ppcVar11 = ppcVar22 + 1;
              ppcVar15 = ppcVar12;
              local_388 = ppcVar22;
LAB_14020338a:
              while (ppcVar15 = ppcVar15 + 1, ppcVar15 <= ppcVar22) {
                pcVar8 = *ppcVar15;
                pcVar9 = *ppcVar12;
                if (*(int *)(pcVar9 + 0x44) != *(int *)(pcVar8 + 0x44)) goto LAB_1402033bf;
                if (pcVar8 == (code *)0x0) {
                  FUN_140056680(&local_358,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(pcVar8 + 0x20,&local_358);
                }
                if (pcVar9 == (code *)0x0) {
                  FUN_140056680(&local_368,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(pcVar9 + 0x20,&local_368);
                }
                puVar10 = local_358;
                if (local_350 == 0) {
                  puVar10 = &DAT_149dfb77a;
                }
                puVar18 = local_368;
                if (local_360 == 0) {
                  puVar18 = &DAT_149dfb77a;
                }
                lVar20 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar18 + lVar20);
                  uVar28 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar10 + lVar20);
                  uVar17 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14020344f;
                    }
                    iVar29 = uVar28 - uVar17;
                    goto LAB_140203482;
                  }
                  if (uVar2 == 0) break;
LAB_14020344f:
                  lVar20 = lVar20 + 2;
                }
                iVar29 = 0;
LAB_140203482:
                if (local_368 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_368);
                }
                if (local_358 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (iVar29 < 0) break;
              }
              goto LAB_1402034ae;
            }
            for (; ppcVar6 = local_390, ppcVar15 = ppcVar12, ppcVar11 = ppcVar12,
                ppcVar12 < ppcVar22; ppcVar22 = ppcVar22 + -1) {
              while (ppcVar11 = ppcVar11 + 1, ppcVar11 <= ppcVar22) {
                pcVar8 = *ppcVar11;
                pcVar9 = *ppcVar15;
                if (*(int *)(pcVar9 + 0x44) == *(int *)(pcVar8 + 0x44)) {
                  if (pcVar8 == (code *)0x0) {
                    FUN_140056680(&local_358,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(pcVar8 + 0x20,&local_358);
                  }
                  if (pcVar9 == (code *)0x0) {
                    FUN_140056680(&local_368,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(pcVar9 + 0x20,&local_368);
                  }
                  puVar10 = local_358;
                  if (local_350 == 0) {
                    puVar10 = &DAT_149dfb77a;
                  }
                  puVar18 = local_368;
                  if (local_360 == 0) {
                    puVar18 = &DAT_149dfb77a;
                  }
                  lVar20 = 0;
                  while( true ) {
                    uVar2 = *(ushort *)((longlong)puVar18 + lVar20);
                    uVar28 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar10 + lVar20);
                    uVar17 = (uint)uVar3;
                    if (uVar2 != uVar3) {
                      if ((uVar3 | uVar2) < 0x80) {
                        uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_140203d40;
                      }
                      bVar24 = (byte)(uVar28 - uVar17 >> 0x18);
                      goto LAB_140203d73;
                    }
                    if (uVar2 == 0) break;
LAB_140203d40:
                    lVar20 = lVar20 + 2;
                  }
                  bVar24 = 0;
LAB_140203d73:
                  if (local_368 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_368);
                  }
                  if (local_358 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  bVar33 = (bool)(bVar24 >> 7);
                }
                else {
                  bVar33 = *(int *)(pcVar9 + 0x44) < *(int *)(pcVar8 + 0x44);
                }
                if (bVar33 != false) {
                  ppcVar15 = ppcVar11;
                }
              }
              pcVar8 = *ppcVar15;
              *ppcVar15 = *ppcVar22;
              *ppcVar22 = pcVar8;
            }
            goto LAB_140203dcb;
          }
LAB_1402036ab:
          ppcVar6 = local_390;
          if ((int)uVar5 != 0) {
            uVar17 = (iVar29 - (iVar29 + -1 >> 0x1f)) + -1 >> 1;
            local_398 = uVar5;
            do {
              ppcVar6 = (code **)(ulonglong)uVar17;
              uVar28 = uVar17 * 2 + 1;
              local_388 = ppcVar6;
              if ((int)uVar28 < (int)uVar5) {
                do {
                  uVar30 = uVar17 * 2 + 2;
                  uVar17 = uVar28;
                  if ((int)uVar30 < (int)uVar5) {
                    pcVar8 = ppcVar12[(int)uVar28];
                    pcVar9 = ppcVar12[(int)uVar30];
                    if (*(int *)(pcVar9 + 0x44) == *(int *)(pcVar8 + 0x44)) {
                      if (pcVar8 == (code *)0x0) {
                        FUN_140056680(&local_358,&DAT_149e01fe8);
                      }
                      else {
                        FUN_1400021e4(pcVar8 + 0x20,&local_358);
                      }
                      if (pcVar9 == (code *)0x0) {
                        FUN_140056680(&local_368,&DAT_149e01fe8);
                      }
                      else {
                        FUN_1400021e4(pcVar9 + 0x20,&local_368);
                      }
                      puVar10 = local_358;
                      if (local_350 == 0) {
                        puVar10 = &DAT_149dfb77a;
                      }
                      puVar18 = local_368;
                      if (local_360 == 0) {
                        puVar18 = &DAT_149dfb77a;
                      }
                      lVar20 = 0;
                      while( true ) {
                        uVar2 = *(ushort *)((longlong)puVar18 + lVar20);
                        uVar21 = (uint)uVar2;
                        uVar3 = *(ushort *)((longlong)puVar10 + lVar20);
                        uVar17 = (uint)uVar3;
                        if (uVar2 != uVar3) {
                          if ((uVar3 | uVar2) < 0x80) {
                            uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                            uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3])
                            goto LAB_1402037c0;
                          }
                          bVar24 = (byte)(uVar21 - uVar17 >> 0x18);
                          goto LAB_1402037f3;
                        }
                        if (uVar2 == 0) break;
LAB_1402037c0:
                        lVar20 = lVar20 + 2;
                      }
                      bVar24 = 0;
LAB_1402037f3:
                      if (local_368 != (undefined2 *)0x0) {
                        FUN_1400020a8(local_368);
                      }
                      if (local_358 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      bVar33 = (bool)(bVar24 >> 7);
                      uVar5 = local_398;
                    }
                    else {
                      bVar33 = *(int *)(pcVar9 + 0x44) < *(int *)(pcVar8 + 0x44);
                    }
                    uVar17 = uVar30;
                    if (bVar33 != false) {
                      uVar17 = uVar28;
                    }
                  }
                  iVar29 = (int)ppcVar6;
                  pcVar9 = ppcVar12[(int)uVar17];
                  pcVar8 = ppcVar12[iVar29];
                  if (*(int *)(pcVar8 + 0x44) == *(int *)(pcVar9 + 0x44)) {
                    if (pcVar9 == (code *)0x0) {
                      FUN_140056680(&local_358,&DAT_149e01fe8);
                    }
                    else {
                      FUN_1400021e4(pcVar9 + 0x20,&local_358);
                    }
                    if (pcVar8 == (code *)0x0) {
                      FUN_140056680(&local_368,&DAT_149e01fe8);
                    }
                    else {
                      FUN_1400021e4(pcVar8 + 0x20,&local_368);
                    }
                    puVar10 = local_358;
                    if (local_350 == 0) {
                      puVar10 = &DAT_149dfb77a;
                    }
                    puVar18 = local_368;
                    if (local_360 == 0) {
                      puVar18 = &DAT_149dfb77a;
                    }
                    lVar20 = 0;
                    while( true ) {
                      uVar2 = *(ushort *)((longlong)puVar18 + lVar20);
                      uVar30 = (uint)uVar2;
                      uVar3 = *(ushort *)((longlong)puVar10 + lVar20);
                      uVar28 = (uint)uVar3;
                      if (uVar2 != uVar3) {
                        if ((uVar3 | uVar2) < 0x80) {
                          uVar30 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3])
                          goto LAB_1402038e9;
                        }
                        iVar31 = uVar30 - uVar28;
                        goto LAB_14020391c;
                      }
                      if (uVar2 == 0) break;
LAB_1402038e9:
                      lVar20 = lVar20 + 2;
                    }
                    iVar31 = 0;
LAB_14020391c:
                    if (local_368 != (undefined2 *)0x0) {
                      FUN_1400020a8(local_368);
                    }
                    if (local_358 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    uVar5 = local_398;
                    if (-1 < iVar31) break;
                    pcVar8 = ppcVar12[iVar29];
                    pcVar9 = ppcVar12[(int)uVar17];
                  }
                  else if (*(int *)(pcVar9 + 0x44) <= *(int *)(pcVar8 + 0x44)) break;
                  ppcVar12[iVar29] = pcVar9;
                  ppcVar12[(int)uVar17] = pcVar8;
                  uVar28 = uVar17 * 2 + 1;
                  ppcVar6 = (code **)(ulonglong)uVar17;
                } while ((int)uVar28 < (int)uVar5);
              }
              uVar17 = (int)local_388 - 1;
            } while ((int)local_388 != 0);
            ppcVar6 = local_390;
            if (1 < (int)uVar5) {
              uVar19 = uVar5 & 0xffffffff;
              pcVar8 = *ppcVar12;
              *ppcVar12 = ppcVar12[uVar19 - 1];
              ppcVar12[uVar19 - 1] = pcVar8;
              if ((int)uVar5 != 2) {
                do {
                  uVar19 = uVar19 - 1;
                  iVar29 = 0;
                  iVar32 = 1;
                  local_398 = uVar19;
                  iVar31 = 0;
                  do {
                    iVar29 = iVar29 + 2;
                    iVar25 = iVar32;
                    if ((longlong)iVar29 < (longlong)uVar19) {
                      pcVar8 = ppcVar12[iVar32];
                      pcVar9 = ppcVar12[iVar29];
                      if (*(int *)(pcVar9 + 0x44) == *(int *)(pcVar8 + 0x44)) {
                        if (pcVar8 == (code *)0x0) {
                          FUN_140056680(&local_358,&DAT_149e01fe8);
                        }
                        else {
                          FUN_1400021e4(pcVar8 + 0x20,&local_358);
                        }
                        if (pcVar9 == (code *)0x0) {
                          FUN_140056680(&local_368,&DAT_149e01fe8);
                        }
                        else {
                          FUN_1400021e4(pcVar9 + 0x20,&local_368);
                        }
                        puVar10 = local_358;
                        if (local_350 == 0) {
                          puVar10 = &DAT_149dfb77a;
                        }
                        puVar18 = local_368;
                        if (local_360 == 0) {
                          puVar18 = &DAT_149dfb77a;
                        }
                        lVar20 = 0;
                        while( true ) {
                          uVar2 = *(ushort *)((longlong)puVar18 + lVar20);
                          uVar28 = (uint)uVar2;
                          uVar3 = *(ushort *)((longlong)puVar10 + lVar20);
                          uVar17 = (uint)uVar3;
                          if (uVar2 != uVar3) {
                            if ((uVar3 | uVar2) < 0x80) {
                              uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                              uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3])
                              goto LAB_140203a8e;
                            }
                            bVar24 = (byte)(uVar28 - uVar17 >> 0x18);
                            goto LAB_140203ac1;
                          }
                          if (uVar2 == 0) break;
LAB_140203a8e:
                          lVar20 = lVar20 + 2;
                        }
                        bVar24 = 0;
LAB_140203ac1:
                        if (local_368 != (undefined2 *)0x0) {
                          FUN_1400020a8(local_368);
                        }
                        if (local_358 != (undefined2 *)0x0) {
                          FUN_1400020a8();
                        }
                        bVar33 = (bool)(bVar24 >> 7);
                        uVar19 = local_398;
                      }
                      else {
                        bVar33 = *(int *)(pcVar9 + 0x44) < *(int *)(pcVar8 + 0x44);
                      }
                      iVar25 = iVar29;
                      if (bVar33 != false) {
                        iVar25 = iVar32;
                      }
                    }
                    pcVar9 = ppcVar12[iVar25];
                    pcVar8 = ppcVar12[iVar31];
                    if (*(int *)(pcVar8 + 0x44) == *(int *)(pcVar9 + 0x44)) {
                      if (pcVar9 == (code *)0x0) {
                        FUN_140056680(&local_358,&DAT_149e01fe8);
                      }
                      else {
                        FUN_1400021e4(pcVar9 + 0x20,&local_358);
                      }
                      if (pcVar8 == (code *)0x0) {
                        FUN_140056680(&local_368,&DAT_149e01fe8);
                      }
                      else {
                        FUN_1400021e4(pcVar8 + 0x20,&local_368);
                      }
                      puVar10 = local_358;
                      if (local_350 == 0) {
                        puVar10 = &DAT_149dfb77a;
                      }
                      puVar18 = local_368;
                      if (local_360 == 0) {
                        puVar18 = &DAT_149dfb77a;
                      }
                      lVar20 = 0;
                      while( true ) {
                        uVar2 = *(ushort *)((longlong)puVar18 + lVar20);
                        uVar28 = (uint)uVar2;
                        uVar3 = *(ushort *)((longlong)puVar10 + lVar20);
                        uVar17 = (uint)uVar3;
                        if (uVar2 != uVar3) {
                          if ((uVar3 | uVar2) < 0x80) {
                            uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                            uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3])
                            goto LAB_140203bb7;
                          }
                          iVar29 = uVar28 - uVar17;
                          goto LAB_140203bea;
                        }
                        if (uVar2 == 0) break;
LAB_140203bb7:
                        lVar20 = lVar20 + 2;
                      }
                      iVar29 = 0;
LAB_140203bea:
                      if (local_368 != (undefined2 *)0x0) {
                        FUN_1400020a8(local_368);
                      }
                      if (local_358 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      uVar19 = local_398;
                      if (-1 < iVar29) break;
                      pcVar8 = ppcVar12[iVar31];
                      pcVar9 = ppcVar12[iVar25];
                    }
                    else if (*(int *)(pcVar9 + 0x44) <= *(int *)(pcVar8 + 0x44)) break;
                    ppcVar12[iVar31] = pcVar9;
                    ppcVar12[iVar25] = pcVar8;
                    iVar29 = iVar25 * 2;
                    iVar32 = iVar25 * 2 + 1;
                    iVar31 = iVar25;
                  } while ((longlong)iVar32 < (longlong)uVar19);
                  pcVar8 = *ppcVar12;
                  *ppcVar12 = ppcVar12[uVar19 - 1];
                  ppcVar12[uVar19 - 1] = pcVar8;
                  ppcVar6 = local_390;
                } while (2 < uVar19);
              }
            }
          }
LAB_140203dcb:
          ppcVar6 = ppcVar6 + -3;
        } while (&local_348 <= ppcVar6);
        plVar27 = local_380;
      }
    }
    iVar29 = *(int *)(param_1 + 0xf8) + (int)uStack_370;
    if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar29);
    }
    plVar1 = (longlong *)(param_1 + 0xf0);
    iVar31 = (int)uStack_370;
    if (*(int *)(param_1 + 0xfc) < iVar29) {
      FUN_140710002(plVar1);
      iVar31 = (int)uStack_370;
    }
    if (0 < iVar31) {
      lVar20 = 0;
      pcVar8 = local_378;
      do {
        *(undefined2 *)(*(longlong *)(pcVar8 + lVar20 * 8) + 0x40) = *(undefined2 *)(param_1 + 0xf8)
        ;
        if (0 < *(int *)(*(longlong *)(pcVar8 + lVar20 * 8) + 0x30)) {
          pcVar8 = pcVar8 + lVar20 * 8;
          iVar29 = 0;
          do {
            iVar31 = *(int *)(param_1 + 0xf8);
            *(uint *)(param_1 + 0xf8) = iVar31 + 1U;
            if (*(uint *)(param_1 + 0xfc) < iVar31 + 1U) {
              FUN_146273438(plVar1,iVar31);
            }
            lVar7 = *plVar1;
            *(longlong *)(lVar7 + (longlong)iVar31 * 0x10) = *(longlong *)pcVar8;
            *(int *)(lVar7 + 8 + (longlong)iVar31 * 0x10) = iVar29;
            iVar29 = iVar29 + 1;
            pcVar8 = local_378 + lVar20 * 8;
          } while (iVar29 < *(int *)(*(longlong *)pcVar8 + 0x30));
          pcVar8 = local_378;
          iVar31 = (int)uStack_370;
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar31);
    }
    uVar17 = *(uint *)(param_1 + 0x10c);
    if (uVar17 != *(uint *)(param_1 + 0x108)) {
      FUN_1403ab89a(plVar27);
      uVar17 = *(uint *)(param_1 + 0x108);
    }
    if (1 < (int)uVar17) {
      pcVar8 = (code *)*plVar27;
      memset(local_338,0,0x2f0);
      local_340 = pcVar8 + (ulonglong)uVar17 * 8 + -8;
      local_348 = pcVar8;
      fVar34 = logf((float)(int)uVar17);
      local_338[0] = (int)(longlong)(fVar34 + fVar34);
      ppcVar6 = &local_348;
      do {
        ppcVar12 = (code **)*ppcVar6;
        ppcVar22 = (code **)ppcVar6[1];
        iVar29 = (int)((ulonglong)((longlong)ppcVar22 - (longlong)ppcVar12) >> 3);
        local_398 = CONCAT44(local_398._4_4_,*(int *)(ppcVar6 + 2));
        ppcVar11 = ppcVar22;
        ppcVar15 = ppcVar12;
        if (*(int *)(ppcVar6 + 2) != 0) {
LAB_140204023:
          if (8 < (int)(iVar29 + 1U)) {
            uVar17 = iVar29 + 1U >> 1;
            pcVar8 = ppcVar12[uVar17];
            ppcVar12[uVar17] = *ppcVar12;
            *ppcVar12 = pcVar8;
            ppcVar13 = ppcVar22 + 1;
            ppcVar16 = ppcVar12;
            local_390 = ppcVar15;
            local_388 = ppcVar11;
            do {
              ppcVar11 = ppcVar16 + 1;
              ppcVar4 = ppcVar16 + 1;
              do {
                ppcVar16 = ppcVar4;
                ppcVar15 = ppcVar11;
                if (ppcVar22 < ppcVar16) break;
                uVar5 = *(ulonglong *)(*ppcVar12 + 0x18);
                if ((int)uVar5 == (int)*(undefined8 *)(*ppcVar16 + 0x18)) {
                  iVar29 = (int)(uVar5 >> 0x20) -
                           (int)((ulonglong)*(undefined8 *)(*ppcVar16 + 0x18) >> 0x20);
                }
                else {
                  iVar29 = FUN_14002c2bd(uVar5 & 0xffffffff);
                }
                ppcVar11 = ppcVar15 + 1;
                ppcVar4 = ppcVar16 + 1;
              } while (-1 < iVar29);
              ppcVar4 = ppcVar13 + -2;
              do {
                ppcVar23 = ppcVar13;
                ppcVar11 = ppcVar4;
                ppcVar13 = ppcVar23 + -1;
                if (ppcVar13 <= ppcVar12) break;
                uVar5 = *(ulonglong *)(*ppcVar13 + 0x18);
                if ((int)uVar5 == (int)*(undefined8 *)(*ppcVar12 + 0x18)) {
                  iVar29 = (int)(uVar5 >> 0x20) -
                           (int)((ulonglong)*(undefined8 *)(*ppcVar12 + 0x18) >> 0x20);
                }
                else {
                  iVar29 = FUN_14002c2bd(uVar5 & 0xffffffff);
                }
                ppcVar4 = ppcVar11 + -1;
              } while (-1 < iVar29);
              if (ppcVar13 < ppcVar16) goto LAB_1402040fb;
              pcVar8 = *ppcVar16;
              *ppcVar16 = *ppcVar13;
              *ppcVar13 = pcVar8;
            } while( true );
          }
          for (; ppcVar15 = ppcVar12, ppcVar11 = ppcVar12, ppcVar12 < ppcVar22;
              ppcVar22 = ppcVar22 + -1) {
            while (ppcVar13 = ppcVar15, ppcVar11 = ppcVar11 + 1, ppcVar11 <= ppcVar22) {
              uVar5 = *(ulonglong *)(*ppcVar13 + 0x18);
              if ((int)uVar5 == (int)*(undefined8 *)(*ppcVar11 + 0x18)) {
                iVar29 = (int)(uVar5 >> 0x20) -
                         (int)((ulonglong)*(undefined8 *)(*ppcVar11 + 0x18) >> 0x20);
              }
              else {
                iVar29 = FUN_14002c2bd(uVar5 & 0xffffffff);
              }
              ppcVar15 = ppcVar11;
              if (-1 < iVar29) {
                ppcVar15 = ppcVar13;
              }
            }
            pcVar8 = *ppcVar13;
            *ppcVar13 = *ppcVar22;
            *ppcVar22 = pcVar8;
          }
          goto LAB_140204218;
        }
LAB_140204237:
        FUN_146898697(ppcVar12);
LAB_140204218:
        ppcVar6 = ppcVar6 + -3;
      } while (&local_348 <= ppcVar6);
    }
    *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) | 8;
    if (local_378 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14020307e:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    local_3d8 = FUN_140342cba();
    local_3d0 = FUN_1468c7f1e;
    local_3e0 = 0;
    local_3e8 = 0x8001;
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  if (DAT_14c951a40 == 0) {
    bVar33 = puVar26 != (undefined *)0x0;
    if (puVar26 != &DAT_14c951a38 && bVar33) {
      do {
        puVar26 = *(undefined **)(puVar26 + 0x30);
        bVar33 = puVar26 != (undefined *)0x0;
        if (puVar26 == &DAT_14c951a38) break;
      } while (puVar26 != (undefined *)0x0);
    }
    if (bVar33) goto LAB_1402030e5;
  }
  else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c951a40) != 0) {
LAB_1402030e5:
    if ((*(byte *)(lVar20 + 0x38) & 0x20) != 0) {
      if (DAT_14c927740 == 0) {
        local_348 = FUN_1449e2820;
        local_3a0 = FUN_14081d0ea;
        local_3a8 = FUN_14081d0ea;
        local_3b0 = &local_348;
        local_3b8 = &LAB_146856450;
        local_3c0 = FUN_1427b121c;
        local_3c8 = L"Engine";
        local_3d0 = (code *)0x0;
        local_3d8 = CONCAT44(local_3d8._4_4_,0x10000021);
        local_3e0 = CONCAT44(local_3e0._4_4_,8);
        local_3e8 = CONCAT44(local_3e8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740);
      }
      if (((*(ulonglong *)(lVar20 + 0x10) & 1) == 0) ||
         (uVar5 = *(ulonglong *)(lVar20 + 0x10) & 0xfffffffffffffffe, uVar5 == 0)) {
LAB_14020317d:
        uVar5 = 0;
      }
      else {
        if (*(int *)(*(longlong *)(uVar5 + 0x10) + 0x38) < *(int *)(DAT_14c927740 + 0x38))
        goto LAB_14020317d;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) != DAT_14c927740 + 0x30) {
          uVar5 = 0;
        }
      }
      if (uVar5 == param_1) {
        lVar7 = (longlong)(int)uStack_370;
        uVar17 = (int)uStack_370 + 1;
        uStack_370 = CONCAT44(uStack_370._4_4_,uVar17);
        if (uStack_370._4_4_ < uVar17) {
          FUN_140001000(&local_378);
        }
        *(longlong *)(local_378 + lVar7 * 8) = lVar20;
      }
    }
  }
  do {
    lVar20 = *(longlong *)(lVar20 + 0x18);
    if (lVar20 == 0) goto LAB_14020328e;
    puVar26 = *(undefined **)(lVar20 + 8);
  } while ((puVar26[0x18] & 1) == 0);
  goto LAB_14020307e;
LAB_1402033bf:
  if (*(int *)(pcVar8 + 0x44) <= *(int *)(pcVar9 + 0x44)) goto LAB_14020338a;
LAB_1402034ae:
  do {
    while( true ) {
      ppcVar13 = ppcVar11;
      ppcVar11 = ppcVar13 + -1;
      if (ppcVar11 <= ppcVar12) goto LAB_1402035dd;
      pcVar8 = *ppcVar12;
      pcVar9 = ppcVar13[-1];
      if (*(int *)(pcVar9 + 0x44) != *(int *)(pcVar8 + 0x44)) break;
      if (pcVar8 == (code *)0x0) {
        FUN_140056680(&local_358,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(pcVar8 + 0x20,&local_358);
      }
      if (pcVar9 == (code *)0x0) {
        FUN_140056680(&local_368,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(pcVar9 + 0x20,&local_368);
      }
      puVar10 = local_358;
      if (local_350 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      puVar18 = local_368;
      if (local_360 == 0) {
        puVar18 = &DAT_149dfb77a;
      }
      lVar20 = 0;
      while( true ) {
        uVar2 = *(ushort *)((longlong)puVar18 + lVar20);
        uVar28 = (uint)uVar2;
        uVar3 = *(ushort *)((longlong)puVar10 + lVar20);
        uVar17 = (uint)uVar3;
        if (uVar2 != uVar3) {
          if ((uVar3 | uVar2) < 0x80) {
            uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_140203577;
          }
          iVar29 = uVar28 - uVar17;
          goto LAB_1402035aa;
        }
        if (uVar2 == 0) break;
LAB_140203577:
        lVar20 = lVar20 + 2;
      }
      iVar29 = 0;
LAB_1402035aa:
      if (local_368 != (undefined2 *)0x0) {
        FUN_1400020a8(local_368);
      }
      if (local_358 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar29 < 0) goto LAB_1402035dd;
    }
  } while (*(int *)(pcVar8 + 0x44) <= *(int *)(pcVar9 + 0x44));
LAB_1402035dd:
  if (ppcVar15 <= ppcVar11) {
    pcVar8 = *ppcVar15;
    *ppcVar15 = ppcVar13[-1];
    *ppcVar11 = pcVar8;
    goto LAB_14020338a;
  }
  pcVar8 = *ppcVar12;
  *ppcVar12 = ppcVar13[-1];
  *ppcVar11 = pcVar8;
  iVar31 = (int)local_398 + -1;
  local_398 = CONCAT44(local_398._4_4_,iVar31);
  ppcVar13 = ppcVar13 + -2;
  if ((longlong)ppcVar13 - (longlong)ppcVar12 < (longlong)local_388 - (longlong)ppcVar15) {
    if (ppcVar15 < ppcVar22) {
      *local_390 = (code *)ppcVar15;
      local_390[1] = (code *)ppcVar22;
      *(int *)(local_390 + 2) = iVar31;
      local_390 = local_390 + 3;
    }
    ppcVar6 = local_390;
    if (ppcVar11 <= ppcVar12 + 1) goto LAB_140203dcb;
  }
  else {
    ppcVar6 = local_390;
    if (ppcVar12 + 1 < ppcVar11) {
      *local_390 = (code *)ppcVar12;
      local_390[1] = (code *)ppcVar13;
      *(int *)(local_390 + 2) = iVar31;
      ppcVar6 = local_390 + 3;
    }
    ppcVar12 = ppcVar15;
    ppcVar13 = ppcVar22;
    if (ppcVar22 <= ppcVar15) goto LAB_140203dcb;
  }
  local_390 = ppcVar6;
  iVar29 = (int)((ulonglong)((longlong)ppcVar13 - (longlong)ppcVar12) >> 3);
  uVar5 = (ulonglong)(iVar29 + 1);
  ppcVar22 = ppcVar13;
  if (iVar31 == 0) goto LAB_1402036ab;
  goto LAB_140203360;
LAB_1402040fb:
  pcVar8 = *ppcVar12;
  *ppcVar12 = *ppcVar13;
  *ppcVar13 = pcVar8;
  iVar31 = (int)local_398 + -1;
  local_398 = CONCAT44(local_398._4_4_,iVar31);
  ppcVar23 = ppcVar23 + -2;
  if ((longlong)ppcVar11 - (longlong)local_390 < (longlong)local_388 - (longlong)ppcVar15) {
    if (ppcVar16 < ppcVar22) {
      *ppcVar6 = (code *)ppcVar16;
      ppcVar6[1] = (code *)ppcVar22;
      *(int *)(ppcVar6 + 2) = iVar31;
      ppcVar6 = ppcVar6 + 3;
    }
    ppcVar15 = ppcVar12;
    if (ppcVar13 <= ppcVar12 + 1) goto LAB_140204218;
  }
  else {
    if (ppcVar12 + 1 < ppcVar13) {
      *ppcVar6 = (code *)ppcVar12;
      ppcVar6[1] = (code *)ppcVar23;
      *(int *)(ppcVar6 + 2) = iVar31;
      ppcVar6 = ppcVar6 + 3;
    }
    ppcVar12 = ppcVar16;
    ppcVar23 = ppcVar22;
    ppcVar11 = ppcVar22;
    if (ppcVar22 <= ppcVar16) goto LAB_140204218;
  }
  iVar29 = (int)((ulonglong)((longlong)ppcVar11 - (longlong)ppcVar15) >> 3);
  ppcVar22 = ppcVar23;
  if (iVar31 == 0) goto LAB_140204237;
  goto LAB_140204023;
}



// FUNCTION 140204258 FUN_140204258 body=1591 status=ok
// SIG undefined FUN_140204258(void)

void FUN_140204258(longlong param_1)

{
  uint *puVar1;
  void *_Src;
  void *_Dst;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar22 = *(longlong **)(param_1 + 0x70);
  if (plVar22 != (longlong *)0x0) {
    plVar15 = (longlong *)(param_1 + 0x10);
    local_b0 = param_1 + 0x48;
    local_c0 = param_1 + 0x20;
    while( true ) {
      lVar2 = *(longlong *)plVar22[0x13];
      if (lVar2 != 0) {
        plVar22[0x14] = *(longlong *)(lVar2 + 8);
        lVar8 = plVar22[0x13];
        plVar22[0x13] = lVar2;
        *(undefined8 *)(lVar2 + 8) = 0;
        if (lVar8 != 0) {
          FUN_1400020a8();
        }
      }
      lVar2 = plVar22[0x14];
      plVar22[0x14] = 0;
      if (lVar2 == 0) break;
      if ((**(longlong **)(*(longlong *)(param_1 + 0x70) + 0x98) == 0) &&
         (*(int *)(param_1 + 8) < *(int *)(lVar2 + 8))) {
        uVar5 = *(uint *)(lVar2 + 0x18);
        uVar9 = (ulonglong)uVar5;
        *(int *)(param_1 + 8) = *(int *)(lVar2 + 8);
        iVar16 = 1;
        if (3 < uVar9) {
          uVar21 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
          lVar8 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar16 = 1 << ((byte)lVar8 & 0x1f);
        }
        iVar20 = *(int *)(param_1 + 0x58);
        if (((int)uVar5 < 1 || iVar16 <= iVar20) && (iVar20 <= iVar16)) {
          lVar8 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar8 = local_b0;
          }
          iVar16 = iVar20 + 3;
          if (-1 < iVar20) {
            iVar16 = iVar20;
          }
          if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44) < iVar16 >> 2) {
            local_68 = 0x100000000;
            uStack_60 = local_c0;
            local_58 = 0xffffffff;
            uStack_50 = 0;
            if (*(int *)(param_1 + 0x38) == 0) {
              iVar16 = 0;
            }
            else {
              FUN_1449c0562(&local_68);
              iVar16 = *(int *)(param_1 + 0x38);
            }
            uStack_70 = CONCAT44(uStack_4c,uStack_50);
            local_78 = local_58;
            uVar3 = local_78;
            local_88 = (undefined4)local_68;
            uStack_84 = local_68._4_4_;
            uStack_80 = (undefined4)uStack_60;
            uStack_7c = uStack_60._4_4_;
            local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            iVar20 = local_78._4_4_;
            local_90 = plVar15;
            if ((local_78._4_4_ != iVar16) || (local_78 = uVar3, uStack_60 != local_c0)) {
              do {
                local_78 = uVar3;
                *(undefined4 *)
                 (lVar8 + (longlong)*(int *)(*local_90 + 0x94 + (longlong)iVar20 * 0xa0) * 4) =
                     0xffffffff;
                local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
                FUN_1449c0562(&local_88);
                iVar20 = local_78._4_4_;
                uVar3 = local_78;
              } while (local_90 != plVar15 ||
                       (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != iVar16));
            }
          }
          else if (0 < iVar20) {
            lVar6 = 0;
            do {
              *(undefined4 *)(lVar8 + lVar6 * 4) = 0xffffffff;
              lVar6 = lVar6 + 1;
            } while (lVar6 < *(int *)(param_1 + 0x58));
          }
          FUN_1402048d8(plVar15);
        }
        else {
          FUN_1402048d8(plVar15);
          *(int *)(param_1 + 0x58) = iVar16;
          FUN_1456e569c(plVar15);
        }
        if (0 < (int)uVar5) {
          uVar21 = 0;
          local_98 = plVar15;
          do {
            uVar13 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + uVar21 * 8);
            lVar8 = *(longlong *)(lVar2 + 0x20);
            if (*(int *)(param_1 + 0x44) == 0) {
              iVar16 = *(int *)(param_1 + 0x18);
              *(int *)(param_1 + 0x18) = iVar16 + 1;
              if (*(int *)(param_1 + 0x1c) == iVar16) {
                local_b8 = uVar9;
                FUN_141431dd2(plVar15,iVar16);
                uVar9 = local_b8;
              }
              iVar20 = *(int *)(param_1 + 0x38);
              if (iVar20 == 0) {
                iVar4 = -1;
              }
              else {
                iVar4 = iVar20 + 0x1e;
                if (-1 < iVar20 + -1) {
                  iVar4 = iVar20 + -1;
                }
                iVar4 = iVar4 >> 5;
              }
              iVar11 = iVar20 + 1;
              iVar14 = iVar20 + 0x1f;
              if (-1 < iVar20) {
                iVar14 = iVar20;
              }
              if (iVar14 >> 5 == iVar4) {
                *(int *)(param_1 + 0x38) = iVar11;
              }
              else {
                if (*(int *)(param_1 + 0x3c) <= iVar20) {
                  local_b8 = uVar9;
                  local_a0 = uVar13;
                  if (iVar20 + 0x20U < 0xa0) {
                    iVar11 = 0x80;
                    iVar4 = iVar20;
                  }
                  else {
                    uVar5 = iVar20 + 0x20U >> 5;
                    local_a8 = (ulonglong)uVar5;
                    if (*(int *)(param_1 + 0x3c) + 0x1fU < 0xa0) {
                      uVar19 = 4;
                      if (4 < uVar5) {
                        uVar19 = uVar5;
                      }
                    }
                    else {
                      uVar19 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
                    }
                    uVar9 = FUN_144a3809e(uVar19 << 2,0);
                    iVar4 = (int)(uVar9 >> 2);
                    iVar11 = -0x20;
                    if ((int)local_a8 <= iVar4) {
                      iVar11 = iVar4 << 5;
                    }
                    iVar4 = *(int *)(param_1 + 0x38);
                  }
                  *(int *)(param_1 + 0x3c) = iVar11;
                  FUN_1446efbd8(local_c0,iVar4);
                  iVar11 = *(int *)(param_1 + 0x38) + 1;
                  uVar13 = local_a0;
                  uVar9 = local_b8;
                }
                iVar4 = iVar11 + 0x1f;
                if (-1 < iVar11) {
                  iVar4 = iVar11;
                }
                *(int *)(param_1 + 0x38) = iVar11;
                if (iVar11 % 0x20 != 0) {
                  lVar6 = *(longlong *)(param_1 + 0x30);
                  if (*(longlong *)(param_1 + 0x30) == 0) {
                    lVar6 = local_c0;
                  }
                  bVar10 = -(char)(iVar11 % 0x20);
                  *(uint *)(lVar6 + (longlong)(iVar4 >> 5) * 4) =
                       (uint)(*(int *)(lVar6 + (longlong)(iVar4 >> 5) * 4) << (bVar10 & 0x1f)) >>
                       (bVar10 & 0x1f);
                }
              }
              lVar6 = (longlong)iVar16;
              lVar12 = *(longlong *)(param_1 + 0x30);
              if (*(longlong *)(param_1 + 0x30) == 0) {
                lVar12 = local_c0;
              }
              bVar10 = (byte)iVar20 & 0x1f;
              puVar1 = (uint *)(lVar12 + (longlong)(iVar14 >> 5) * 4);
              *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
            }
            else {
              iVar16 = *(int *)(param_1 + 0x40);
              lVar6 = (longlong)iVar16;
              iVar20 = *(int *)(*(longlong *)(param_1 + 0x10) + 4 + lVar6 * 0xa0);
              *(int *)(param_1 + 0x40) = iVar20;
              iVar4 = *(int *)(param_1 + 0x44) + -1;
              *(int *)(param_1 + 0x44) = iVar4;
              if (iVar4 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar20 * 0xa0) =
                     0xffffffff;
              }
            }
            plVar15 = local_98;
            lVar12 = *(longlong *)(param_1 + 0x30);
            if (*(longlong *)(param_1 + 0x30) == 0) {
              lVar12 = local_c0;
            }
            iVar20 = iVar16 + 0x1f;
            if (-1 < iVar16) {
              iVar20 = iVar16;
            }
            puVar1 = (uint *)(lVar12 + (longlong)(iVar20 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
            _Src = (void *)(*(longlong *)(param_1 + 0x10) + lVar6 * 0xa0);
            puVar7 = (ulonglong *)(lVar6 * 0xa0 + *(longlong *)(param_1 + 0x10));
            *puVar7 = uVar13;
            puVar17 = (ulonglong *)(uVar21 * 0x80 + lVar8);
            puVar18 = puVar7 + 2;
            for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar18 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar18 = puVar18 + 1;
            }
            *(undefined4 *)(puVar7 + 0x12) = 0xffffffff;
            uVar5 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            uVar5 = uVar5 >> 0x10 ^ uVar5;
            uVar19 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
            if (1 < uVar19) {
              lVar8 = *(longlong *)(param_1 + 0x50);
              if (*(longlong *)(param_1 + 0x50) == 0) {
                lVar8 = local_b0;
              }
              iVar20 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & uVar5) * 4);
              if (iVar20 != -1) {
                do {
                  _Dst = (void *)(*local_98 + (longlong)iVar20 * 0xa0);
                  if (*(ulonglong *)(*local_98 + (longlong)iVar20 * 0xa0) == uVar13) {
                    memmove(_Dst,_Src,0x90);
                    FUN_1456e546a(plVar15,iVar16);
                    goto LAB_1402045a1;
                  }
                  iVar20 = *(int *)((longlong)_Dst + 0x90);
                } while (iVar20 != -1);
              }
            }
            iVar20 = 1;
            if (3 < uVar19) {
              uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
              lVar8 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              iVar20 = 1 << ((byte)lVar8 & 0x1f);
            }
            if (((int)uVar19 < 1) || (iVar20 <= *(int *)(param_1 + 0x58))) {
              uVar5 = *(int *)(param_1 + 0x58) - 1U & uVar5;
              *(uint *)((longlong)_Src + 0x94) = uVar5;
              lVar8 = *(longlong *)(param_1 + 0x50);
              if (*(longlong *)(param_1 + 0x50) == 0) {
                lVar8 = local_b0;
              }
              *(undefined4 *)((longlong)_Src + 0x90) =
                   *(undefined4 *)
                    (lVar8 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar5) * 4);
              lVar8 = *(longlong *)(param_1 + 0x50);
              if (*(longlong *)(param_1 + 0x50) == 0) {
                lVar8 = local_b0;
              }
              *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar5) * 4)
                   = iVar16;
            }
            else {
              *(int *)(param_1 + 0x58) = iVar20;
              FUN_1456e569c(local_98);
            }
LAB_1402045a1:
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar9);
        }
      }
      (**(code **)(*plVar22 + 0x10))(plVar22,lVar2);
      plVar22 = *(longlong **)(param_1 + 0x70);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140204890 FUN_140204890 body=71 status=ok
// SIG undefined FUN_140204890(void)

void FUN_140204890(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_2 + 8) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1402048d8 FUN_1402048d8 body=123 status=ok
// SIG undefined FUN_1402048d8(void)

void FUN_1402048d8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140de7f60(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140204954 FUN_140204954 body=22 status=ok
// SIG undefined FUN_140204954(void)

undefined8 FUN_140204954(undefined8 param_1)

{
  FUN_14020496a();
  return param_1;
}



// FUNCTION 14020496a FUN_14020496a body=267 status=ok
// SIG undefined FUN_14020496a(void)

undefined8 * FUN_14020496a(undefined8 *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  plVar4 = DAT_14c997f58;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c997f58 != (longlong *)0x0) && ((int)DAT_14c997f58[9] != 0)) {
    uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    plVar8 = DAT_14c997f58 + 7;
    if ((longlong *)DAT_14c997f58[8] != (longlong *)0x0) {
      plVar8 = (longlong *)DAT_14c997f58[8];
    }
    puVar5 = (ulonglong *)
             ((longlong)plVar8 +
             (longlong)(int)((int)DAT_14c997f58[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    do {
      uVar3 = *puVar5;
      lVar9 = (longlong)(int)uVar3;
      if (lVar9 == -1) goto LAB_140204993;
      puVar1 = (ulonglong *)(*DAT_14c997f58 + lVar9 * 0x18);
      puVar5 = puVar1 + 2;
    } while (*puVar1 != param_2);
    uVar2 = *(undefined8 *)(*DAT_14c997f58 + 8 + lVar9 * 0x18);
    local_40 = uVar2;
    local_38 = uVar2;
    uVar6 = FUN_1409ca440();
    if (uVar6 == param_2) {
      *param_1 = uVar2;
      goto LAB_14020499a;
    }
    FUN_146f01392(plVar4,(int)uVar3);
    FUN_146f0145c(DAT_14c997f58 + 10,&local_40);
  }
LAB_140204993:
  *param_1 = 0;
LAB_14020499a:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140204a76 FUN_140204a76 body=693 status=ok
// SIG undefined FUN_140204a76(void)

void FUN_140204a76(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar10 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar6 * 0x20;
        uVar3 = *(uint *)(lVar12 + 4 + lVar11);
        uVar15 = uVar3 >> 0xd ^ *(int *)(lVar12 + lVar11) - uVar3;
        uVar9 = uVar15 << 8 ^ (-0x61c88647 - uVar3) - uVar15;
        uVar3 = uVar9 >> 0xd ^ (uVar3 - uVar15) - uVar9;
        uVar15 = uVar3 >> 0xc ^ (uVar15 - uVar9) - uVar3;
        uVar16 = uVar15 << 0x10 ^ (uVar9 - uVar3) - uVar15;
        uVar3 = uVar16 >> 5 ^ (uVar3 - uVar15) - uVar16;
        uVar9 = uVar3 >> 3 ^ (uVar15 - uVar16) - uVar3;
        uVar15 = uVar9 << 10 ^ (uVar16 - uVar3) - uVar9;
        uVar14 = (longlong)(int)(uVar15 >> 0xf ^ uVar3 - (uVar9 + uVar15)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0x1c + lVar11) = iVar13;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_58[2];
        if ((longlong *)local_58[2] == (longlong *)0x0) {
          plVar7 = local_58;
        }
        iVar13 = (int)local_58[3];
        lVar12 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar6 = iVar13 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar2 - lVar12 == lVar11) goto LAB_140204ce4;
          }
          iVar4 = iVar4 + (int)lVar11 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar14 = uVar8 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar13);
    }
  }
LAB_140204ce4:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140204d2c FUN_140204d2c body=310 status=ok
// SIG undefined FUN_140204d2c(void)

longlong * FUN_140204d2c(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x10) << 2,(longlong)*(int *)(param_2 + 0x14) << 2
            );
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 0x10);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 0x10) = 0, *(int *)(param_2 + 0x14) != 0)) {
      FUN_146860242(param_2);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 0x10) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_140204e64(param_2,local_1c,*(undefined4 *)(param_2 + 0x14));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    lVar4 = *(longlong *)(param_2 + 8);
    if (*(longlong *)(param_2 + 8) == 0) {
      lVar4 = param_2;
    }
    (**(code **)(*param_1 + 0x170))(param_1,lVar4,(longlong)(int)uVar3 << 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140204e64 FUN_140204e64 body=103 status=ok
// SIG undefined FUN_140204e64(void)

void FUN_140204e64(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_140fae07c(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x14) = param_3;
  return;
}



// FUNCTION 140204ecc FUN_140204ecc body=140 status=ok
// SIG undefined FUN_140204ecc(void)

void FUN_140204ecc(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar2 = *(code **)(param_1 + 0x50);
  if (pcVar2 != (code *)0x0) {
    plVar4 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x60);
    }
    local_2c = param_2;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,&local_2c);
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x40);
  *(byte *)(param_1 + 0x40) = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    FUN_1447458da(param_1 + 0x40,0xffffffff);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140204f88 FUN_140204f88 body=433 status=ok
// SIG undefined FUN_140204f88(void)

void FUN_140204f88(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined1 *local_e0;
  undefined8 *local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  int local_58;
  int local_54;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar4 = (**(code **)(*param_1 + 0x2d0))();
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x300))(param_1);
  }
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  cVar4 = (**(code **)(*param_1 + 0x360))(param_1,&local_f8,param_3);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x2b8))(param_1,&local_58);
    if (((local_58 == 0) || (local_54 == 0)) || (local_58 == DAT_14c948000)) {
      FUN_14475b384(param_1,param_2,&local_f8,&DAT_14c9a1640);
    }
    else {
      FUN_1447a97f4(local_d0,&local_58);
      local_d8 = &local_a8;
      local_88 = 0;
      local_80 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_7c = 0xffffffff00000080;
      local_74 = 0;
      local_68 = 0;
      local_60 = 0;
      local_e0 = local_d0;
      FUN_140128eb8(&local_a8);
      FUN_14475b384(param_1,param_2,&local_f8,&local_a8);
      local_60 = 0;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      FUN_1402d9776(&local_a8);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020513a FUN_14020513a body=270 status=ok
// SIG undefined FUN_14020513a(void)

undefined8 FUN_14020513a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140205242;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140205242;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140205242:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1402051f0;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_1402051f0;
    }
  }
  uVar6 = 0;
LAB_1402051f0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140205262 FUN_140205262 body=61 status=ok
// SIG undefined FUN_140205262(void)

undefined4 FUN_140205262(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  if ((char)uVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1402052a0(param_1,param_2,uVar2);
  }
  return uVar1;
}



// FUNCTION 1402052a0 FUN_1402052a0 body=1232 status=ok
// SIG undefined FUN_1402052a0(void)

undefined8 FUN_1402052a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  char *_String;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_e8 [36];
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar9 = FUN_140205772();
  FUN_1402057ac(param_3,param_1,uVar9,0);
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_c0 = (undefined4 *)(lVar14 + 0xc7c);
  local_c4 = *local_c0;
  pbVar1 = (byte *)(lVar14 + 0xc80);
  bVar3 = *pbVar1;
  if ((bVar3 & 1) != 0) {
    *pbVar1 = 0;
    *local_c0 = 0;
  }
  lVar5 = DAT_14cb7f870;
  lVar14 = *(longlong *)(param_1 + 0x10);
  if (lVar14 == 0) {
    uVar9 = FUN_140490c9a();
    lVar14 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x10) = lVar14;
  }
  lVar10 = *(longlong *)(param_1 + 0x18);
  if (lVar10 == 0) {
    if ((lVar14 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto switchD_140205489_default;
    plVar4 = *(longlong **)(lVar14 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto switchD_140205489_default;
    }
    uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar10 = FUN_144aff482(uVar9,(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 0x18) = lVar10;
    if (lVar10 == 0) goto switchD_140205489_default;
  }
  if ((*(char *)(param_1 + 0x20) == '\0') || (*(char *)(lVar10 + 0x18) == '\0')) {
    if (*param_3 == 0) {
      puVar11 = &DAT_14c9a1308;
    }
    else {
      puVar11 = (undefined8 *)FUN_1446e60f4(*param_3,&DAT_14cb7ed50);
    }
    if (((byte *)*puVar11 == (byte *)0x0) || ((*(byte *)*puVar11 & 3) == 0)) {
      uVar7 = 0;
    }
    else {
      plVar4 = (longlong *)(lVar5 + 0x400);
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      FUN_140205d94(&local_98,puVar11,0);
      iVar8 = FUN_1448f0be4(plVar4,&local_98);
      uVar7 = (undefined2)iVar8;
      if (iVar8 == -1) {
        iVar8 = *(int *)(lVar5 + 0x408);
        uVar7 = (undefined2)iVar8;
        lVar14 = (longlong)iVar8;
        *(uint *)(lVar5 + 0x408) = iVar8 + 1U;
        if (*(uint *)(lVar5 + 0x40c) < iVar8 + 1U) {
          FUN_1459dea88(plVar4,iVar8);
        }
        lVar5 = *plVar4;
        puVar11 = (undefined8 *)(lVar5 + lVar14 * 0x18);
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined8 *)(lVar5 + 0x10 + lVar14 * 0x18) = 0;
        *(longlong *)(lVar5 + lVar14 * 0x18) = local_98;
        uVar9 = FUN_14477b664(local_90);
        uVar9 = FUN_14477b664(uVar9);
        *(undefined8 *)(lVar5 + 8 + lVar14 * 0x18) = uVar9;
        *(undefined8 *)(lVar5 + 0x10 + lVar14 * 0x18) = local_88;
      }
    }
    *(undefined2 *)(param_1 + 0x22) = uVar7;
    goto switchD_140205489_default;
  }
  switch(*(char *)(lVar10 + 0x18)) {
  case '\x01':
    uVar7 = FUN_14887f1ee(param_3,lVar5 + 0x3f0);
    *(undefined2 *)(param_1 + 0x22) = uVar7;
    break;
  case '\x02':
  case '\x03':
    if (*param_3 == 0) {
      puVar11 = &DAT_14c9a1308;
    }
    else {
      puVar11 = (undefined8 *)FUN_1446e60f4(*param_3,&DAT_14cb7ed68);
    }
    fVar16 = 0.0;
    if (((*(byte *)*puVar11 & 0x6b) == 1) &&
       (_String = *(char **)((byte *)*puVar11 + 8), _String != (char *)0x0)) {
      dVar15 = atof(_String);
      fVar16 = (float)dVar15;
    }
    lVar14 = *(longlong *)(lVar5 + 0x410);
    iVar8 = *(int *)(lVar5 + 0x418);
    uVar13 = (ulonglong)iVar8;
    if (uVar13 != 0) {
      lVar10 = uVar13 * 4;
      uVar12 = 0;
      do {
        fVar2 = *(float *)(lVar14 + uVar12 * 4);
        if ((fVar2 == fVar16) && (!NAN(fVar2) && !NAN(fVar16))) {
          if ((int)uVar12 != -1) goto LAB_140205533;
          break;
        }
        uVar12 = uVar12 + 1;
        lVar10 = lVar10 + -4;
      } while (lVar10 != 0);
    }
    *(uint *)(lVar5 + 0x418) = iVar8 + 1U;
    if (*(uint *)(lVar5 + 0x41c) < iVar8 + 1U) {
      FUN_14475e4ac((longlong *)(lVar5 + 0x410),iVar8);
      lVar14 = *(longlong *)(lVar5 + 0x410);
    }
    *(float *)(lVar14 + uVar13 * 4) = fVar16;
    goto LAB_140205535;
  case '\x04':
    FUN_144928b90(&local_98,0);
    if (*param_3 == 0) {
      puVar11 = &DAT_14c9a1308;
    }
    else {
      puVar11 = (undefined8 *)FUN_1446e60f4(*param_3,&DAT_14cb7ed58);
    }
    FUN_148834660(&local_98,param_2,puVar11);
    uVar7 = FUN_1488840a0(lVar5 + 0x420,&local_98);
    *(undefined2 *)(param_1 + 0x22) = uVar7;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    break;
  case '\x05':
    if (*param_3 == 0) {
      puVar11 = &DAT_14c9a1308;
    }
    else {
      puVar11 = (undefined8 *)FUN_1446e60f4(*param_3,&DAT_14cb7ed60);
    }
    if (((byte *)*puVar11 == (byte *)0x0) || ((*(byte *)*puVar11 & 3) == 0)) {
      uVar13 = 0;
    }
    else {
      local_98 = 0;
      uVar9 = FUN_140205d5a();
      FUN_1446e7478(puVar11,&local_98,uVar9,1);
      lVar14 = *(longlong *)(lVar5 + 0x430);
      iVar8 = *(int *)(lVar5 + 0x438);
      uVar13 = (ulonglong)iVar8;
      if (uVar13 != 0) {
        lVar10 = uVar13 * 8;
        uVar12 = 0;
        do {
          if (*(longlong *)(lVar14 + uVar12 * 8) == local_98) {
            if ((int)uVar12 != -1) goto LAB_140205533;
            break;
          }
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
      *(uint *)(lVar5 + 0x438) = iVar8 + 1U;
      if (*(uint *)(lVar5 + 0x43c) < iVar8 + 1U) {
        FUN_1456e5890((longlong *)(lVar5 + 0x430),iVar8);
        lVar14 = *(longlong *)(lVar5 + 0x430);
      }
      *(longlong *)(lVar14 + uVar13 * 8) = local_98;
    }
LAB_140205535:
    *(short *)(param_1 + 0x22) = (short)uVar13;
  }
switchD_140205489_default:
  if ((bVar3 & 1) != 0) {
    *local_c0 = local_c4;
    *pbVar1 = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
LAB_140205533:
  uVar13 = uVar12 & 0xffffffff;
  goto LAB_140205535;
}



// FUNCTION 140205772 FUN_140205772 body=57 status=ok
// SIG undefined FUN_140205772(void)

void FUN_140205772(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ca98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ca98 = FUN_140002ddd(FUN_1464d7c71,uVar1,L"DialogParameterMapping");
  }
  return;
}



// FUNCTION 1402057ac FUN_1402057ac body=1452 status=ok
// SIG undefined FUN_1402057ac(void)

void FUN_1402057ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined4 local_110;
  undefined8 local_108;
  wchar_t *local_100;
  undefined4 local_f8;
  code *local_f0;
  undefined1 *local_e8;
  undefined2 **local_e0;
  undefined1 local_c9;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  byte *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined **local_80;
  undefined8 local_78;
  longlong local_70;
  char local_60;
  undefined2 *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c9 = param_4;
  local_c0 = param_2;
  local_b8 = param_3;
  FUN_1446e6d0e(&local_80,param_3);
  local_98 = 0;
  uStack_90 = 0;
  lVar4 = (*(code *)local_80[4])(&local_80);
  if (lVar4 != 0) {
    if (DAT_14c948fa0 == 0) {
      local_58 = &DAT_1427db2a2;
      lVar14 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar14;
      FUN_1446f470e(local_50,L"ScriptStruct",1);
      local_e8 = &LAB_1468915ce;
      local_f0 = FUN_1427dc742;
      local_100 = L"Engine";
      local_f8 = 199;
      local_108 = 0x10;
      local_110 = 0x10000020;
      local_118 = (wchar_t *)CONCAT44(local_118._4_4_,8);
      local_e0 = &local_58;
      FUN_14574b4b2(lVar14);
      DAT_14c948fa0 = lVar14;
      uVar5 = FUN_1446f8646();
      lVar14 = DAT_14c948fa0;
      uVar7 = FUN_1449e2fb2();
      local_118 = L"ScriptStruct";
      FUN_14574b446(uVar7,lVar14,uVar5,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) == DAT_14c948fa0 + 0x30)) goto LAB_14020584c;
  }
  lVar4 = 0;
LAB_14020584c:
  uVar5 = (*(code *)local_80[3])();
  uVar13 = uStack_90;
  lVar14 = (longlong)(int)uStack_90;
  uVar2 = (int)uStack_90 + 1;
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar2);
  if (uStack_90._4_4_ < uVar2) {
    FUN_1446e6a46(&local_98,uVar13 & 0xffffffff);
  }
  *(longlong *)(local_98 + lVar14 * 0x18) = lVar4;
  *(undefined8 *)(local_98 + 8 + lVar14 * 0x18) = uVar5;
  *(undefined8 *)(local_98 + 0x10 + lVar14 * 0x18) = 0;
  local_a8 = (byte *)*param_1;
  plVar15 = &DAT_14c9a1288;
  if ((local_a8 != (byte *)0x0) && ((*local_a8 & 2) != 0)) {
    plVar15 = (longlong *)(*(longlong *)(local_a8 + 8) + 0x18);
  }
  uVar2 = *(uint *)(plVar15 + 6);
  if (uVar2 == 0) {
    uVar16 = 1;
    uVar13 = 0;
    uVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)plVar15[5];
    if ((uint *)plVar15[5] == (uint *)0x0) {
      puVar6 = (uint *)(plVar15 + 3);
    }
    uVar3 = *puVar6;
    if (uVar3 == 0) {
      iVar10 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar10 = uVar2 - 1;
      }
      uVar13 = 0;
      uVar16 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar16 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar13) goto LAB_140205a88;
        iVar10 = iVar10 + 0x20;
        uVar3 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar16 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar3 = (iVar10 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != uVar2) {
    uVar11 = 0xffffffff;
    local_c8 = (ulonglong)uVar2;
    local_b0 = param_1;
    do {
      lVar4 = (longlong)(int)uVar3 * 0x40 + *plVar15;
      if (DAT_14c947fe0 == 0) {
        lVar14 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar14);
        DAT_14c947fe0 = lVar14;
      }
      FUN_140045924(DAT_14c947fe0,local_50,lVar4,1);
      lVar14 = FUN_1446e7b4a(local_b8,local_50);
      if (lVar14 != 0) {
        local_110 = CONCAT31(local_110._1_3_,local_c9);
        local_118 = (wchar_t *)&local_98;
        FUN_1446e0fc6(lVar4 + 0x28,local_c0,lVar14,0xffffffff);
      }
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar6 = (uint *)plVar15[5];
      if ((uint *)plVar15[5] == (uint *)0x0) {
        puVar6 = (uint *)(plVar15 + 3);
      }
      uVar2 = *(uint *)(plVar15 + 6);
      iVar12 = (int)uVar13;
      lVar4 = (longlong)iVar12;
      uVar3 = puVar6[lVar4] & uVar11;
      if (uVar3 == 0) {
        iVar8 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar8 = uVar2 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar12 < iVar8) {
          lVar14 = 0;
          do {
            uVar3 = puVar6[lVar4 + lVar14 + 1];
            if (uVar3 != 0) {
              uVar13 = (ulonglong)(iVar12 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_140205a48;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar9 - lVar4 != lVar14);
          uVar11 = 0xffffffff;
          iVar12 = iVar9;
        }
        uVar13 = (ulonglong)(iVar12 + 1);
        uVar3 = uVar2;
      }
      else {
LAB_140205a48:
        uVar16 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar16 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar3 = (iVar10 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)local_c8);
    local_a8 = (byte *)*local_b0;
    param_1 = local_b0;
  }
LAB_140205a88:
  local_a0 = param_1[1];
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
  }
  FUN_1448f0aa4(local_b8,local_c0,&local_a8,0);
  if ((int)uStack_90 != 0) {
    uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + -1);
    FUN_1446e6054();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_149eacb10;
  if (local_60 == '\x01') {
    if ((((local_78._4_4_ != 0) && (-1 < (int)(uint)local_78)) &&
        ((int)(uint)local_78 < DAT_14c9647dc)) &&
       (((plVar15 = (longlong *)
                    ((ulonglong)(((uint)local_78 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_78 >> 0x10) * 8)),
         plVar15 != (longlong *)0x0 && ((int)plVar15[2] == local_78._4_4_)) &&
        (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
         (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)))))) {
      if (local_70 != 0) {
        if (*(code **)(*plVar15 + 0x2f0) == FUN_1401f99c8) {
          FUN_1401f99c8(plVar15,local_70,1);
        }
        else {
          (**(code **)(*plVar15 + 0x2f0))(plVar15,local_70,1);
        }
      }
      local_78 = 0;
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140205d5a FUN_140205d5a body=57 status=ok
// SIG undefined FUN_140205d5a(void)

void FUN_140205d5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56e78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56e78 = FUN_140002ddd(FUN_141847087,uVar1,L"DialogEnumValue");
  }
  return;
}



// FUNCTION 140205d94 FUN_140205d94 body=990 status=ok
// SIG undefined FUN_140205d94(void)

ulonglong * FUN_140205d94(ulonglong *param_1,undefined8 *param_2,char *param_3,ulonglong *param_4)

{
  ushort uVar1;
  byte *pbVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  size_t sVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_88 [32];
  char *local_68;
  uint5 uStack_60;
  undefined3 uStack_5b;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  lVar11 = DAT_14c9a1ab0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pbVar2 = (byte *)*param_2;
  if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 0x6b) != 1)) || (DAT_14c9a1ab0 == 0)) {
LAB_14020614b:
    *param_1 = *param_4;
    uVar9 = FUN_14477b664(param_4[1]);
    uVar8 = FUN_14477b664(uVar9);
    param_1[1] = uVar8;
    param_1[2] = param_4[2];
    goto LAB_140206009;
  }
  uVar1 = *(ushort *)(pbVar2 + 0x20);
  if ((short)uVar1 == 0x7fff) {
    pcVar12 = "Asset";
LAB_140205e33:
    local_68 = (char *)0x0;
    _uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,pcVar12,0);
    uVar5 = FUN_1448f0e18(lVar11,&local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (((*(byte *)*param_2 & 3) == 1) &&
       (pcVar12 = *(char **)((byte *)*param_2 + 8), pcVar12 != (char *)0x0)) {
      sVar7 = strlen(pcVar12);
      uVar6 = (uint)sVar7;
      if (uVar6 == 0) goto LAB_140206036;
      lVar11 = (longlong)(int)uVar6;
      pcVar13 = pcVar12 + lVar11 + -1;
      uVar10 = 0;
      if (pcVar13 < pcVar12) {
        lVar17 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar13 - 0x30U)) break;
          uVar10 = uVar10 + 1;
          pcVar13 = pcVar13 + -1;
        } while (pcVar12 <= pcVar13);
        lVar17 = 0;
        if ((((uVar10 != 0) && ((int)uVar10 < (int)uVar6)) && (lVar17 = 0, uVar10 < 0xb)) &&
           (lVar14 = -(ulonglong)uVar10, pcVar12[lVar14 + lVar11 + -1] == '_')) {
          if ((uVar10 == 1) || (pcVar12[lVar14 + lVar11] != '0')) {
            lVar16 = 0;
            do {
              lVar17 = (longlong)pcVar12[lVar14 + lVar11] + lVar16 * 10;
              lVar16 = lVar17 + -0x30;
              lVar14 = lVar14 + 1;
            } while (lVar14 != 0);
            if (lVar16 < 0x7fffffff) {
              uVar6 = ~uVar10 + uVar6;
              lVar17 = lVar17 + -0x2f;
              goto LAB_140205ee1;
            }
          }
          lVar17 = 0;
        }
LAB_140205ee1:
        if (uVar6 == 0) goto LAB_140206036;
      }
      uStack_60 = (uint5)uVar6;
      local_68 = pcVar12;
      uVar6 = FUN_14001a6c0(&local_68,1);
      uVar15 = lVar17 << 0x20;
      uVar8 = (ulonglong)uVar6;
    }
    else {
LAB_140206036:
      uVar8 = 0;
      uVar15 = 0;
    }
    local_68 = (char *)0x0;
    FUN_140076e46(uVar5,uVar8 | uVar15,&local_68);
    pcVar12 = local_68;
    pcVar13 = param_3;
    if (local_68 != (char *)0x0) {
      if ((*(uint *)(local_68 + 8) & 0x809f600) == 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c949388) &&
           (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
          FUN_1446f470e(&local_68,L"GbxHasStructType",1);
          DAT_14c949380 = FUN_141473ad5(local_68);
          _Init_thread_footer(&DAT_14c949388);
        }
        if ((((DAT_14c949380 == 0) || (*(int *)(pcVar12 + 0x38) < *(int *)(DAT_14c949380 + 0x38)))
            || (*(longlong *)
                 (*(longlong *)(pcVar12 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) !=
                DAT_14c949380 + 0x30)) ||
           (((plVar3 = *(longlong **)(pcVar12 + 0xb8), plVar3 == (longlong *)0x0 ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) ||
            (lVar11 = (**(code **)(*plVar3 + 0x110))(plVar3), lVar11 == 0)))) goto LAB_1402060c1;
      }
      else {
LAB_1402060c1:
        pcVar12 = param_3;
      }
      pcVar13 = pcVar12;
      if (((param_3 != (char *)0x0) && (pcVar13 = param_3, pcVar12 != (char *)0x0)) &&
         ((*(int *)(param_3 + 0x38) <= *(int *)(pcVar12 + 0x38) &&
          (*(char **)(*(longlong *)(pcVar12 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) ==
           param_3 + 0x30)))) {
        pcVar13 = pcVar12;
      }
    }
    *param_1 = uVar8 | uVar15;
    param_3 = pcVar13;
  }
  else {
    if (((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(DAT_14c9a1ab0 + 0xd0))) &&
       ((lVar17 = *(longlong *)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
        lVar17 != 0 && (pcVar12 = *(char **)(lVar17 + 0xb8), pcVar12 != (char *)0x0))))
    goto LAB_140205e33;
    if (param_3 == (char *)0x0) goto LAB_14020614b;
    FUN_1446ddc76(&local_68,*(undefined8 *)(pbVar2 + 8),1);
    FUN_14170fc78(param_3);
    *param_1 = (ulonglong)local_68;
  }
  uVar8 = FUN_14477b664(param_3);
  param_1[1] = uVar8;
  param_1[2] = 0;
LAB_140206009:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140206174 FUN_140206174 body=123 status=ok
// SIG undefined FUN_140206174(void)

void FUN_140206174(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x10) {
      uVar4 = puVar3[2];
      plVar5 = (longlong *)puVar3[3];
    }
    else {
      uVar4 = *puVar3;
      plVar5 = (longlong *)puVar3[1];
    }
    if (plVar5 == (longlong *)0x0) {
      FUN_1448f1142(uVar4);
      return;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_1448f1142(uVar4);
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402061eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1402061f0 FUN_1402061f0 body=268 status=ok
// SIG undefined FUN_1402061f0(void)

void FUN_1402061f0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)(param_1 + 0x18);
  local_48 = 0;
  do {
    if ((int)local_50[1] <= (int)local_48) break;
    lVar3 = *(longlong *)(*local_50 + (ulonglong)local_48 * 8);
    if (*(int *)(lVar3 + 0x10) == 0) {
      if (*(longlong *)(lVar3 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x20))
                  (*(longlong **)(lVar3 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar3 + 0x20) = 0;
      }
      plVar5 = local_50;
      lVar6 = (longlong)(int)local_48;
      FUN_1469453c8(*(longlong *)(*local_50 + lVar6 * 8) + 0x80,param_2);
      lVar3 = *plVar5;
      iVar2 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
        FUN_146952276((longlong *)(param_1 + 8),iVar2);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8) =
           *(undefined8 *)(lVar3 + lVar6 * 8);
      FUN_146945da0(&local_50);
    }
    uVar1 = local_48 + 1;
    bVar4 = -2 < (int)local_48;
    local_48 = uVar1;
  } while (bVar4);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402062fe FUN_1402062fe body=397 status=ok
// SIG undefined FUN_1402062fe(void)

int FUN_1402062fe(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
LAB_140206344:
      plVar9 = (longlong *)(lVar3 + (longlong)iVar4 * 0x40);
      if (plVar9 == param_3) {
        return iVar4;
      }
      lVar3 = param_3[4];
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      if (plVar9[4] == lVar3) {
        if (lVar3 != 0) {
          lVar2 = param_3[4];
          if ((lVar2 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar2);
            lVar3 = plVar9[4];
          }
          if (lVar3 == lVar2) {
            return iVar4;
          }
        }
        if (((((int)plVar9[2] == (int)param_3[2]) &&
             (*(char *)((longlong)plVar9 + 0x14) == *(char *)((longlong)param_3 + 0x14))) &&
            (*(char *)((longlong)plVar9 + 0x15) == *(char *)((longlong)param_3 + 0x15))) &&
           ((int)plVar9[3] == (int)param_3[3])) {
          iVar1 = (int)plVar9[1];
          if (iVar1 == (int)param_3[1]) {
            if (iVar1 < 2) {
              return iVar4;
            }
            lVar3 = 0;
            do {
              uVar5 = *(ushort *)(*plVar9 + lVar3);
              uVar6 = (ulonglong)uVar5;
              uVar7 = *(ushort *)(*param_3 + lVar3);
              if (uVar5 == uVar7) {
                if (uVar5 == 0) {
                  return iVar4;
                }
              }
              else {
                if (0x7f < (uVar7 | uVar5)) goto LAB_14020643a;
                uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                uVar8 = (ulonglong)uVar7;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar8]) goto LAB_14020643a;
              }
              lVar3 = lVar3 + 2;
            } while( true );
          }
          if ((int)param_3[1] + iVar1 == 1) {
            return iVar4;
          }
        }
      }
      goto LAB_140206446;
    }
  }
  return -1;
LAB_14020643a:
  if (uVar5 == uVar7) {
    return iVar4;
  }
LAB_140206446:
  lVar3 = *param_1;
  iVar4 = *(int *)(lVar3 + 0x38 + (longlong)iVar4 * 0x40);
  if (iVar4 == -1) {
    return -1;
  }
  goto LAB_140206344;
}



// FUNCTION 14020648b FUN_14020648b body=634 status=ok
// SIG undefined FUN_14020648b(void)

uint FUN_14020648b(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (uVar1 == 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar3 = uVar2 >> 0xd ^ -uVar2;
    uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
    uVar6 = uVar5 >> 0xd ^ (uVar2 - uVar3) - uVar5;
    uVar2 = uVar6 >> 0xc ^ (uVar3 - uVar5) - uVar6;
    uVar7 = uVar2 << 0x10 ^ (uVar5 - uVar6) - uVar2;
    uVar3 = uVar7 >> 5 ^ (uVar6 - uVar2) - uVar7;
    uVar5 = uVar3 >> 3 ^ (uVar2 - uVar7) - uVar3;
    uVar2 = uVar5 << 10 ^ (uVar7 - uVar3) - uVar5;
    uVar2 = uVar2 >> 0xf ^ uVar3 - (uVar5 + uVar2);
    iVar4 = uVar2 - *(byte *)(param_1 + 0x14);
    uVar5 = iVar4 * 0x100 ^ 0x9e3779b9 - uVar2;
    uVar3 = uVar5 >> 0xd ^ ((uint)*(byte *)(param_1 + 0x14) - iVar4) - uVar5;
    uVar2 = uVar3 >> 0xc ^ (iVar4 - uVar5) - uVar3;
    uVar6 = uVar2 << 0x10 ^ (uVar5 - uVar3) - uVar2;
    uVar5 = uVar6 >> 5 ^ (uVar3 - uVar2) - uVar6;
    uVar3 = uVar5 >> 3 ^ (uVar2 - uVar6) - uVar5;
    uVar2 = uVar3 << 10 ^ (uVar6 - uVar5) - uVar3;
    uVar5 = uVar2 >> 0xf ^ uVar5 - (uVar3 + uVar2);
    uVar2 = (uint)*(byte *)(param_1 + 0x15);
    uVar3 = uVar5 - uVar2;
    uVar5 = uVar3 * 0x100 ^ 0x9e3779b9 - uVar5;
  }
  else {
    uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
    uVar3 = uVar2 >> 0xd ^ -uVar2;
    uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
  }
  uVar2 = uVar5 >> 0xd ^ (uVar2 - uVar3) - uVar5;
  uVar3 = uVar2 >> 0xc ^ (uVar3 - uVar2) - uVar5;
  uVar5 = uVar3 << 0x10 ^ (uVar5 - uVar2) - uVar3;
  uVar6 = uVar5 >> 5 ^ (uVar2 - uVar3) - uVar5;
  uVar3 = uVar6 >> 3 ^ (uVar3 - uVar5) - uVar6;
  uVar5 = uVar3 << 10 ^ (uVar5 - uVar6) - uVar3;
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = uVar2 >> 0xd ^ (uVar5 >> 0xf ^ uVar6 - (uVar3 + uVar5)) - uVar2;
  uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
  uVar6 = uVar5 >> 0xd ^ (uVar2 - uVar3) - uVar5;
  uVar2 = uVar6 >> 0xc ^ (uVar3 - uVar5) - uVar6;
  uVar7 = uVar2 << 0x10 ^ (uVar5 - uVar6) - uVar2;
  uVar3 = uVar7 >> 5 ^ (uVar6 - uVar2) - uVar7;
  uVar5 = uVar3 >> 3 ^ (uVar2 - uVar7) - uVar3;
  uVar2 = uVar5 << 10 ^ (uVar7 - uVar3) - uVar5;
  return uVar2 >> 0xf ^ uVar3 - (uVar5 + uVar2);
}



// FUNCTION 140206706 FUN_140206706 body=273 status=ok
// SIG undefined FUN_140206706(void)

void FUN_140206706(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = 0;
  uVar2 = *param_3;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 == (longlong *)0x0) {
    param_1[1] = uVar2;
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) goto LAB_1402067a6;
    param_1[2] = 0;
LAB_140206787:
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1402067a6;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[1] = uVar2;
    plVar5 = (longlong *)param_1[2];
    if (plVar3 != plVar5) {
      param_1[2] = plVar3;
      if (plVar5 == (longlong *)0x0) goto LAB_1402067a6;
      goto LAB_140206787;
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1402067a6;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
    plVar5 = plVar3;
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_1402067a6:
  iVar4 = FUN_144b54a90(*param_2,*(undefined8 *)param_1[1],
                        *(undefined4 *)((undefined8 *)param_1[1] + 1),param_4,param_1);
  if (iVar4 != 0) {
    *param_1 = 0;
  }
  FUN_146279652(param_1);
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140206804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140206818 FUN_140206818 body=50 status=ok
// SIG undefined FUN_140206818(void)

void FUN_140206818(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar1 = (longlong *)0x0;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  FUN_14020684a(param_1);
  return;
}



// FUNCTION 14020684a FUN_14020684a body=305 status=ok
// SIG undefined FUN_14020684a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14020684a(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  if ((*(uint *)(param_1 + 8) >> 0x13 & 1) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10c68);
    iVar3 = DAT_14cb10c4c;
    iVar2 = DAT_14cb10c20;
    _DAT_14cb10c98 = 0;
    _DAT_14cb10ca0 = 0;
    _DAT_14cb10ca8 = 0;
    _DAT_14cb10cb0 = 0;
    iVar6 = DAT_14cb10c20;
    DAT_14cb10c90 = param_1;
    if (DAT_14cb10c20 != DAT_14cb10c4c) {
      uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      puVar5 = &DAT_14cb10c50;
      if (DAT_14cb10c58 != (undefined *)0x0) {
        puVar5 = DAT_14cb10c58;
      }
      for (iVar1 = *(int *)(puVar5 + ((longlong)(int)(uVar4 >> 0x10 ^ uVar4) &
                                     (longlong)DAT_14cb10c60 - 1U) * 4); iVar6 = DAT_14cb10c4c,
          iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x30 + DAT_14cb10c18 + 0x28)) {
        if (*(ulonglong *)(DAT_14cb10c18 + (longlong)iVar1 * 0x30) == param_1) {
          FUN_14019d2dc(&DAT_14cb10c18);
          iVar6 = DAT_14cb10c4c;
          break;
        }
      }
    }
    iVar1 = DAT_14cb10c20;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10c68);
    if ((iVar3 < iVar2) && (iVar1 == iVar6)) {
      FUN_140f93338(&DAT_14c9647b8,&DAT_14cb10c10);
      return;
    }
  }
  return;
}



// FUNCTION 14020697c FUN_14020697c body=59 status=ok
// SIG undefined FUN_14020697c(void)

bool FUN_14020697c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x108);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0xcbe) != '\0') {
      return true;
    }
    if (*(longlong *)(lVar1 + 0xf0) != 0) {
      iVar2 = FUN_143587a6a();
      return iVar2 != 1;
    }
  }
  return false;
}



// FUNCTION 1402069b8 FUN_1402069b8 body=281 status=ok
// SIG undefined FUN_1402069b8(void)

undefined8 FUN_1402069b8(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140206acb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140206acb;
    }
    FUN_1400841de(param_1 + 0x18,&local_38);
  }
  else {
LAB_140206acb:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140206a7d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140206a7d;
    }
  }
  uVar6 = 0;
LAB_140206a7d:
  if (local_38 != 0) {
    FUN_140113f3a(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140206ad2 FUN_140206ad2 body=44 status=ok
// SIG undefined FUN_140206ad2(void)

void FUN_140206ad2(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x61];
  *(undefined1 *)(param_1 + 0x61) = 1;
  (**(code **)(*param_1 + 0x340))();
  *(char *)(param_1 + 0x61) = (char)lVar1;
  return;
}



// FUNCTION 140206afe FUN_140206afe body=44 status=ok
// SIG undefined FUN_140206afe(void)

void FUN_140206afe(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x61];
  *(undefined1 *)(param_1 + 0x61) = 1;
  (**(code **)(*param_1 + 0x330))();
  *(char *)(param_1 + 0x61) = (char)lVar1;
  return;
}



// FUNCTION 140206b2a FUN_140206b2a body=555 status=ok
// SIG undefined FUN_140206b2a(void)

ulonglong FUN_140206b2a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  uVar5 = FUN_1447b4afa();
  uVar16 = (ulonglong)uVar5;
  iVar2 = *(int *)(param_1 + 0x3d0);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x3c8);
    if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x3b8);
    }
    uVar5 = *puVar7;
    if (uVar5 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar17 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar17 = uVar14;
      }
      iVar13 = 0;
      do {
        if (uVar17 == uVar14) goto LAB_140206cf6;
        iVar13 = iVar13 + 0x20;
        uVar5 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar14 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar17 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
  }
  if (iVar9 != iVar2) {
    uVar5 = 0xffffffff;
    iVar6 = iVar2;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x3a8) + 0x18 + (longlong)iVar9 * 0x28);
      if (lVar8 != 0) {
        uVar3 = *param_4;
        lVar8 = (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x10))(lVar8 + 0x28);
        if (((lVar8 == 0) || ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0)) || (DAT_14cad4be8 != '\0'))
        {
          bVar4 = 0;
        }
        else {
          bVar4 = FUN_14009cd08(param_2,lVar8,param_3,uVar3);
        }
        uVar16 = CONCAT71((int7)(uVar16 >> 8),(byte)uVar16 | bVar4);
        iVar6 = *(int *)(param_1 + 0x3d0);
      }
      uVar5 = uVar5 & ~(uint)uVar17;
      puVar7 = *(uint **)(param_1 + 0x3c8);
      if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x3b8);
      }
      iVar9 = (int)uVar14;
      lVar8 = (longlong)iVar9;
      uVar10 = puVar7[lVar8] & uVar5;
      if (uVar10 == 0) {
        iVar11 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar11 = iVar6 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar9 < iVar11) {
          lVar15 = 0;
          do {
            uVar10 = puVar7[lVar8 + lVar15 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar9 + (int)lVar15 + 1);
              uVar5 = 0xffffffff;
              goto LAB_140206cc4;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar12 - lVar8 != lVar15);
          uVar5 = 0xffffffff;
          iVar9 = iVar12;
        }
        uVar14 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar6;
      }
      else {
LAB_140206cc4:
        uVar17 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar17 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar9 = (iVar13 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar9) {
          iVar9 = iVar6;
        }
      }
    } while (iVar9 != iVar2);
  }
LAB_140206cf6:
  return uVar16 & 0xffffffffffffff01;
}



// FUNCTION 140206d5c FUN_140206d5c body=164 status=ok
// SIG undefined FUN_140206d5c(void)

bool FUN_140206d5c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 140206e00 FUN_140206e00 body=230 status=ok
// SIG undefined FUN_140206e00(void)

void FUN_140206e00(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  lVar3 = FUN_140206ee8(param_1 + 0x30);
  if (lVar3 == 0) {
    plVar4 = *(longlong **)(param_1 + 0x18);
    if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))();
    }
    FUN_1447a1fc0(plVar4);
    plVar4 = *(longlong **)(param_1 + 0x18);
    pcVar1 = *(code **)(*plVar4 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar5 = plVar4 + 3;
      if (plVar4[5] != 0) {
        plVar5 = (longlong *)(plVar4[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar5 = plVar4 + 2;
    }
    else {
      plVar5 = (longlong *)(*pcVar1)(plVar4);
    }
    iVar2 = (int)plVar5[1] + -1;
    if ((int)plVar5[1] == 0) {
      iVar2 = 0;
    }
    fVar6 = (float)iVar2 * 0.08;
  }
  else if ((*(char *)(lVar3 + 0x5c) != '\x01') || (fVar6 = *(float *)(lVar3 + 0x58), fVar6 <= 0.0))
  {
    fVar6 = *(float *)(lVar3 + 0x48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar6);
}



// FUNCTION 140206ee8 FUN_140206ee8 body=470 status=ok
// SIG undefined FUN_140206ee8(void)

longlong FUN_140206ee8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*param_2 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 == 0) {
      if (DAT_14cb25698 == 0) {
        uVar5 = FUN_140cd185c();
        DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar5,L"WwiseEventDef");
      }
      lVar6 = FUN_14477b664(DAT_14cb25698);
      *(longlong *)(param_1 + 0x18) = lVar6;
    }
    plVar1 = (longlong *)(param_1 + 0x10);
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 != 0) {
LAB_140206f19:
      if (lVar6 != 0) goto LAB_140206f22;
      if (DAT_14cb25698 == 0) {
        uVar5 = FUN_140cd185c();
        DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar5,L"WwiseEventDef");
      }
      lVar6 = FUN_14477b664(DAT_14cb25698);
      *(longlong *)(param_1 + 0x18) = lVar6;
      lVar7 = *(longlong *)(param_1 + 0x20);
      if (((lVar7 != 0) || (lVar7 = 0, lVar6 == 0)) || (*plVar1 == 0)) goto LAB_140206f22;
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_1402070b9:
        lVar7 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_1402070b9;
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(param_1 + 0x20) = lVar7;
      goto LAB_140206f22;
    }
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 != '\0') {
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar5,plVar1);
          *(longlong *)(param_1 + 0x20) = lVar7;
          if (lVar7 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x18);
            goto LAB_140206f19;
          }
          goto LAB_140206f48;
        }
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  else {
    lVar7 = FUN_1402070be(*param_2,param_1);
    if (lVar7 != 0) goto LAB_140206f22;
  }
LAB_140206f48:
  lVar7 = *(longlong *)(param_1 + 0x28);
LAB_140206f22:
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar1 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  return lVar7;
}



// FUNCTION 1402070be FUN_1402070be body=271 status=ok
// SIG undefined FUN_1402070be(void)

longlong FUN_1402070be(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == '\x01') {
    (**(code **)(*param_1 + 0x48))(param_1,&local_28,*(undefined8 *)(param_2 + 4));
    if ((local_28 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_28 + 0x50),local_28);
      goto LAB_14020710b;
    }
  }
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 == 0) {
    if (DAT_14cb25698 == 0) {
      uVar3 = FUN_140cd185c();
      DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar3,L"WwiseEventDef");
    }
    lVar4 = FUN_14477b664(DAT_14cb25698);
    *(longlong *)(param_2 + 0x18) = lVar4;
  }
  local_28 = *(longlong *)(param_2 + 0x20);
  if (((local_28 != 0) || (local_28 = 0, lVar4 == 0)) || (*(longlong *)(param_2 + 0x10) == 0))
  goto LAB_14020710b;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_1402071a3:
    local_28 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_1402071a3;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_28 = FUN_144aff482(uVar3,param_2 + 0x10);
  }
  *(longlong *)(param_2 + 0x20) = local_28;
LAB_14020710b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402071ce FUN_1402071ce body=58 status=ok
// SIG undefined FUN_1402071ce(void)

void FUN_1402071ce(longlong *param_1,longlong param_2)

{
  FUN_1448f1f76();
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402071f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x330))(param_1);
    return;
  }
  FUN_140455a80(param_2,param_1);
  return;
}



// FUNCTION 140207208 FUN_140207208 body=108 status=ok
// SIG undefined FUN_140207208(void)

void FUN_140207208(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_140207274(*(longlong *)(param_1 + 0x20),param_2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_140208018(param_1 + 0x28,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = param_2;
  if ((0 < *(int *)(param_1 + 0x18)) && (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x30))) {
    FUN_1400f6522(param_1);
    return;
  }
  return;
}



// FUNCTION 140207274 FUN_140207274 body=59 status=ok
// SIG undefined FUN_140207274(void)

void FUN_140207274(longlong param_1)

{
  char cVar1;
  
  FUN_140493586(param_1 + 8);
  cVar1 = FUN_1404e786a(param_1 + 8);
  if (cVar1 != '\0') {
    FUN_1404e7742(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 1402072af FUN_1402072af body=482 status=ok
// SIG undefined FUN_1402072af(void)

undefined8 FUN_1402072af(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
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
  if (param_1 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_40 = &local_20;
      local_20 = (code *)&LAB_14355090c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147b8e16d;
      local_50 = (code *)&LAB_140810a38;
      local_58 = L"Engine";
      local_60 = 0x800000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar2 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
           (lVar6 = lVar3,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          lVar6 = 0;
        }
      } while ((lVar6 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
      if (lVar6 != 0) {
        uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar6 + 0x240)) &
                0xffffffffffffff10;
        uVar5 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 4);
        goto LAB_140207337;
      }
    }
  }
  uVar5 = 0;
LAB_140207337:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140207492 FUN_140207492 body=2949 status=ok
// SIG undefined FUN_140207492(void)

void FUN_140207492(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 unaff_RBP;
  ulonglong uVar20;
  undefined8 *puVar21;
  LARGE_INTEGER *pLVar22;
  undefined8 *puVar23;
  LARGE_INTEGER *pLVar24;
  code *pcVar25;
  undefined8 *puVar26;
  undefined1 uVar27;
  int iVar28;
  LARGE_INTEGER LVar29;
  bool bVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined1 auStack_288 [32];
  LARGE_INTEGER *local_268;
  uint local_25c;
  longlong local_258;
  LARGE_INTEGER local_250;
  LARGE_INTEGER local_248;
  undefined4 local_240;
  code *local_1c8;
  longlong *local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  LARGE_INTEGER local_188 [16];
  longlong local_108;
  undefined8 local_100;
  code *local_f8;
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  LARGE_INTEGER local_b8 [2];
  longlong *local_a8;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar11 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar11 == 0) && (lVar11 = FUN_1448abda6(param_1), lVar11 == 0)) || (DAT_14caf6068 < 1)) ||
     (((DAT_14c7616fc & 1) == 0 || (lVar11 = FUN_14005c7aa(lVar11), lVar11 == 0)))) {
    LVar29.QuadPart = -1;
    uVar20 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    lVar11 = 0;
  }
  else {
    QueryPerformanceCounter(local_188);
    uVar20 = 0;
    LVar29 = local_188[0];
  }
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfb;
  lVar17 = *(longlong *)(param_1 + 0x5a8);
  if ((lVar17 == 0) || (puVar21 = *(undefined8 **)(lVar17 + 0x2f0), puVar21 == (undefined8 *)0x0))
  goto LAB_140207bd2;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30);
  *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(lVar12 + 0x14);
  *puVar21 = *(undefined8 *)(lVar12 + 0xc);
  uVar32 = 0;
  if ((*(byte *)(param_1 + 0x7cc) & 1) != 0) {
    uVar32 = *(undefined4 *)(param_1 + 0x7c4);
  }
  lVar12 = *(longlong *)(param_1 + 0xb0);
  local_250 = LVar29;
  if ((((lVar12 == 0) && (lVar12 = FUN_1448abda6(param_1), lVar12 == 0)) || (DAT_14caf6068 < 1)) ||
     ((DAT_14c7616fc & 1) == 0)) {
    lVar12 = 0;
  }
  else {
    lVar12 = FUN_14005c7aa(lVar12);
  }
  local_25c = (uint)uVar20;
  local_108 = 0;
  local_100 = 0x800000000;
  local_258 = lVar11;
  if (((*(byte *)(param_1 + 0x7cc) & 0x80) == 0) ||
     (lVar11 = *(longlong *)(param_1 + 0x8c0), lVar11 == 0)) {
    lVar11 = *(longlong *)(param_1 + 0x760);
    local_248 = *(LARGE_INTEGER *)(lVar11 + 0x40);
    local_268 = &local_248;
    local_240 = *(undefined4 *)(lVar11 + 0x48);
    FUN_140071796(puVar21,local_188,lVar17,*(undefined8 *)(lVar11 + 0x30));
    uVar27 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar11 + 0x760);
    plVar13 = *(longlong **)(lVar11 + 0x768);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      puVar26 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30) + 0x50);
      puVar23 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x50);
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar23 = *puVar26;
        puVar26 = puVar26 + 1;
        puVar23 = puVar23 + 1;
      }
      local_248 = *(LARGE_INTEGER *)(lVar4 + 0x40);
      local_268 = &local_248;
      local_240 = *(undefined4 *)(lVar4 + 0x48);
      FUN_140071796(puVar21,local_188,lVar17,*(undefined8 *)(lVar4 + 0x30));
      puVar21 = &DAT_14c846480;
      puVar26 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x50);
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar26 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar26 = puVar26 + 1;
      }
    }
    uVar27 = 1;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  lVar4 = local_108;
  if (local_108 == 0) {
    pLVar22 = local_188;
    pLVar24 = &local_248;
    for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pLVar24 = *pLVar22;
      pLVar22 = pLVar22 + 1;
      pLVar24 = pLVar24 + 1;
    }
  }
  local_108 = 0;
  uVar5 = (undefined4)local_100;
  uVar6 = local_100._4_4_;
  local_100 = 0x800000000;
  local_1c8 = (code *)0x0;
  local_1b8 = (longlong *)FUN_14001cc68(0xb0,8);
  LVar29 = local_250;
  lVar11 = local_258;
  *local_1b8 = (longlong)&PTR_LAB_14adbbed0;
  local_1b8[1] = lVar17;
  local_1b8[0x12] = 0;
  if (lVar4 == 0) {
    pLVar22 = &local_248;
    pLVar24 = (LARGE_INTEGER *)(local_1b8 + 2);
    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
      *pLVar24 = *pLVar22;
      pLVar22 = pLVar22 + 1;
      pLVar24 = pLVar24 + 1;
    }
  }
  local_1b8[0x12] = lVar4;
  *(undefined4 *)(local_1b8 + 0x13) = uVar5;
  *(undefined4 *)((longlong)local_1b8 + 0x9c) = uVar6;
  *(undefined1 *)(local_1b8 + 0x14) = uVar27;
  *(undefined4 *)((longlong)local_1b8 + 0xa4) = uVar32;
  local_1b8[0x15] = lVar12;
  if (local_1b8 == (longlong *)&DAT_fffffffffffffff8) {
    pcVar25 = (code *)0x0;
  }
  else {
    pcVar25 = FUN_143a0a17e;
    local_1c8 = FUN_143a0a17e;
  }
  uVar20 = (ulonglong)local_25c;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar30 = DAT_14cb3af10 == '\0';
    if (bVar30) {
      DAT_14cb3af10 = '\x01';
    }
    UNLOCK();
    if (!bVar30) {
      FUN_1447d2058(&DAT_14cb3af10);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cb3af08) {
      local_b8[0].QuadPart = (LONGLONG)local_1c8;
      local_a8 = local_1b8;
      local_1b8 = (longlong *)0x0;
      local_88 = local_198;
      uStack_84 = uStack_194;
      uStack_80 = uStack_190;
      uStack_7c = uStack_18c;
      if (local_1c8 != (code *)0x0) {
        local_1c8 = (code *)0x0;
      }
      local_78 = 0;
      FUN_1401a96bc(&DAT_14cb3af08,local_b8,L"NiagaraSetDynamicData",&DAT_14cb3ad04);
LAB_14020794b:
      (*(code *)(&PTR_LAB_14a3931f0)[local_78])();
      bVar30 = false;
    }
    else {
      if (DAT_14cb3af18 != 0) {
        local_b8[0].QuadPart = (LONGLONG)local_1c8;
        local_a8 = local_1b8;
        local_1b8 = (longlong *)0x0;
        local_88 = local_198;
        uStack_84 = uStack_194;
        uStack_80 = uStack_190;
        uStack_7c = uStack_18c;
        if (local_1c8 != (code *)0x0) {
          local_1c8 = (code *)0x0;
        }
        local_78 = 0;
        FUN_1401a98c8(&DAT_14cb3af08,local_b8,L"NiagaraSetDynamicData",&DAT_14cb3ad04);
        goto LAB_14020794b;
      }
      bVar30 = true;
    }
    LOCK();
    bVar31 = DAT_14cb3af10 == '\x01';
    if (bVar31) {
      DAT_14cb3af10 = '\0';
    }
    UNLOCK();
    if (!bVar31) {
      FUN_14008cdb0(&DAT_14cb3af10);
    }
    pcVar25 = local_1c8;
    if (bVar30) goto LAB_140207996;
  }
  else {
LAB_140207996:
    local_f8 = pcVar25;
    local_e8 = local_1b8;
    local_1b8 = (longlong *)0x0;
    local_d8 = local_1a8;
    uStack_d4 = uStack_1a4;
    uStack_d0 = uStack_1a0;
    uStack_cc = uStack_19c;
    local_c8 = local_198;
    uStack_c4 = uStack_194;
    uStack_c0 = uStack_190;
    uStack_bc = uStack_18c;
    if (pcVar25 != (code *)0x0) {
      local_1c8 = (code *)0x0;
    }
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar28 = *(int *)(lVar17 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar28 != 2) {
        if (iVar28 != 1) {
          uVar20 = (ulonglong)local_25c;
          lVar11 = local_258;
          goto joined_r0x000140207a6e;
        }
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar20 = (ulonglong)local_25c;
        lVar11 = local_258;
        if (DVar9 == DVar10) goto LAB_140207a12;
        goto LAB_140207a70;
      }
LAB_140207a12:
      pcVar25 = local_f8;
      plVar13 = local_e8;
      if (local_e8 == (longlong *)0x0) {
        plVar13 = (longlong *)&local_d8;
      }
      uVar14 = (**(code **)(*plVar13 + 8))(plVar13);
LAB_140207a22:
      (*pcVar25)(uVar14);
    }
    else {
joined_r0x000140207a6e:
      if (iVar28 == 0x10) goto LAB_140207a12;
LAB_140207a70:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 == '\x01') && (iVar28 = *(int *)(lVar17 + 0xc60), iVar28 != 2)) {
          if (iVar28 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (DVar9 == DVar10) goto LAB_140207fda;
          }
          goto LAB_140207aa1;
        }
LAB_140207fda:
        pcVar25 = local_f8;
        plVar13 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar13 = (longlong *)&local_d8;
        }
        uVar14 = (**(code **)(*plVar13 + 8))();
        goto LAB_140207a22;
      }
LAB_140207aa1:
      if (DAT_14ca9a43c == 0) {
        puVar21 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar16 = (uint *)*puVar21;
        if (puVar16 != (uint *)0x0) goto LAB_140207cd1;
        while( true ) {
          uVar8 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar8 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar8 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar17 + 0x310);
          *(undefined8 *)(lVar17 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar21 = puVar15;
          FUN_140217a48(puVar21);
          puVar16 = (uint *)*puVar21;
LAB_140207cd1:
          puVar26 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar18 = (uint *)(puVar26 + 0x1e);
          uVar8 = puVar16[0x12];
          if (puVar18 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar3 = *puVar16;
            *puVar16 = *puVar16 + uVar8 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar8) != 0xffffffff) break;
            puVar16 = (uint *)*puVar21;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar21 = puVar16;
            puVar26 = (undefined8 *)((longlong)puVar16 + 0x67U & 0xfffffffffffffff0);
            puVar18 = (uint *)(puVar26 + 0x1e);
            uVar8 = 0;
            if (puVar18 <= puVar16 + 0x4000) {
              uVar8 = 1;
              goto LAB_140207d51;
            }
          }
        }
        uVar8 = uVar8 + 1;
LAB_140207d51:
        *(uint **)(puVar16 + 0x10) = puVar18;
        puVar16[0x12] = uVar8;
        FUN_1447247dc(puVar26,0);
        *puVar26 = &PTR_FUN_14adbbec0;
        puVar26[0x16] = local_f8;
        puVar26[0x18] = local_e8;
        local_e8 = (longlong *)0x0;
        *(undefined4 *)(puVar26 + 0x1c) = local_c8;
        *(undefined4 *)((longlong)puVar26 + 0xe4) = uStack_c4;
        *(undefined4 *)(puVar26 + 0x1d) = uStack_c0;
        *(undefined4 *)((longlong)puVar26 + 0xec) = uStack_bc;
        *(undefined4 *)(puVar26 + 0x1a) = local_d8;
        *(undefined4 *)((longlong)puVar26 + 0xd4) = uStack_d4;
        *(undefined4 *)(puVar26 + 0x1b) = uStack_d0;
        *(undefined4 *)((longlong)puVar26 + 0xdc) = uStack_cc;
        if (local_f8 != (code *)0x0) {
          local_f8 = (code *)0x0;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar8 = DAT_14c7585c8 >> 10 & 3;
          iVar28 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
            iVar28 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar28 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
        }
        puVar26[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar26[9] = puVar26;
        puVar26[10] = puVar26;
        lVar17 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar17 == 0) {
          uVar7 = 1;
          if ((char)uVar19 != '\x06') {
            uVar7 = uVar19;
          }
          uVar19 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar17 + 0x30);
        }
        puVar26[0xf] = uVar14;
        puVar26[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar26 + 0x1c) = iVar28;
        if (puVar26 == (undefined8 *)0x0) {
          local_b8[0].s.LowPart._0_1_ = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
          local_b8[0].s.LowPart._0_1_ = 1;
          FUN_1447439e4(puVar26);
          LOCK();
          piVar2 = (int *)(puVar26 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      else {
        local_b8[0].QuadPart = 0;
        local_a8 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_a8 = (longlong)&PTR_LAB_14adbbea0;
        local_a8[2] = (longlong)local_f8;
        local_a8[4] = (longlong)local_e8;
        local_e8 = (longlong *)0x0;
        *(undefined4 *)(local_a8 + 8) = local_c8;
        *(undefined4 *)((longlong)local_a8 + 0x44) = uStack_c4;
        *(undefined4 *)(local_a8 + 9) = uStack_c0;
        *(undefined4 *)((longlong)local_a8 + 0x4c) = uStack_bc;
        *(undefined4 *)(local_a8 + 6) = local_d8;
        *(undefined4 *)((longlong)local_a8 + 0x34) = uStack_d4;
        *(undefined4 *)(local_a8 + 7) = uStack_d0;
        *(undefined4 *)((longlong)local_a8 + 0x3c) = uStack_cc;
        if (local_f8 != (code *)0x0) {
          local_f8 = (code *)0x0;
        }
        if (local_a8 != (longlong *)&DAT_fffffffffffffff0) {
          local_b8[0].QuadPart = (LONGLONG)FUN_143a09f3a;
        }
        local_268 = local_b8;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraSetDynamicData",&DAT_14cb3ad04);
        if ((code *)local_b8[0].QuadPart != (code *)0x0) {
          plVar13 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar13 = local_98;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
    }
    if (local_f8 != (code *)0x0) {
      plVar13 = (longlong *)&local_d8;
      if (local_e8 != (longlong *)0x0) {
        plVar13 = local_e8;
      }
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (local_1c8 != (code *)0x0) {
    plVar13 = local_1b8;
    if (local_1b8 == (longlong *)0x0) {
      plVar13 = (longlong *)&local_1a8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
LAB_140207bd2:
  if ((LVar29.QuadPart != -1) && (QueryPerformanceCounter(local_188), (char)uVar20 == '\0')) {
    LOCK();
    *(longlong *)(lVar11 + 0x20) =
         *(longlong *)(lVar11 + 0x20) + (local_188[0].QuadPart - (longlong)LVar29);
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140208018 FUN_140208018 body=93 status=ok
// SIG undefined FUN_140208018(void)

void FUN_140208018(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_140208076();
  return;
}



// FUNCTION 140208076 FUN_140208076 body=469 status=ok
// SIG undefined FUN_140208076(void)

void FUN_140208076(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1402081a6:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1402081e3:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402080e0;
LAB_1402080d5:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402080e0:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x00014020810d;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140208163:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402081e3;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1402081a6;
code_r0x00014020810d:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140208163;
    }
  }
  goto LAB_1402080d5;
}



// FUNCTION 14020824c FUN_14020824c body=38 status=ok
// SIG undefined FUN_14020824c(void)

undefined8 FUN_14020824c(undefined8 param_1,int param_2)

{
  FUN_140208272();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140208272 FUN_140208272 body=115 status=ok
// SIG undefined FUN_140208272(void)

void FUN_140208272(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aabd940;
  FUN_140064c53(param_1[0x10c],*(undefined4 *)(param_1 + 0x10d));
  if (param_1[0x10c] != 0) {
    FUN_1400020a8();
  }
  FUN_140064c7e(param_1 + 0x5a);
  FUN_1402082e5(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 1402082e5 FUN_1402082e5 body=162 status=ok
// SIG undefined FUN_1402082e5(void)

void FUN_1402082e5(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14aabdbb0;
    if (param_1[0xd] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0xb] != 0) {
      LOCK();
      puVar1 = (uint *)(param_1[0xb] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_LAB_14a3d46d0;
    if (param_1[5] != 0) {
      LOCK();
      puVar1 = (uint *)(param_1[5] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 14020838e FUN_14020838e body=907 status=ok
// SIG undefined FUN_14020838e(void)

void FUN_14020838e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1402087a0(&local_88,param_1);
  FUN_14020871a(param_2 + 0x40,&local_88);
  plVar7 = local_88;
  if (((ulonglong)local_88 & 1) == 0) {
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_88 + 2;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if (((int)*plVar9 == 0) && (local_88 != (longlong *)0x0)) {
        FUN_140958ed1(*local_88,(int)local_88[1]);
        if (*plVar7 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1402084ce;
      }
    }
  }
  else {
    plVar7 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)((ushort)local_88 & 0xfffffffc) * 2);
    LOCK();
    plVar9 = plVar7 + 0x18;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if (plVar7 != (longlong *)0x0 && (int)*plVar9 == 0) {
      FUN_14587a8e6(plVar7);
LAB_1402084ce:
      FUN_1400020a8(plVar7);
    }
  }
  puVar5 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar5 + 1;
  if ((int *)puVar5[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_8c,4);
    }
    else {
      FUN_14572512c(param_1,&local_8c);
    }
  }
  else {
    local_8c = *(int *)*puVar5;
    *puVar5 = (ulonglong)piVar1;
  }
  if (local_8c < 1) {
    *(undefined8 *)(param_2 + 0x48) = 0;
    plVar9 = *(longlong **)(param_2 + 0x50);
    if (plVar9 == (longlong *)0x0) goto LAB_140208460;
    *(undefined8 *)(param_2 + 0x50) = 0;
LAB_140208609:
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_140208460;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1470198e8(&local_a8);
    if ((longlong)(int)uStack_a0 == 0) {
      uVar10 = 0;
    }
    else {
      lVar2 = local_a8 + (longlong)(int)uStack_a0 * 0x18;
      lVar8 = local_a8;
      do {
        (**(code **)(*param_1 + 0x160))(param_1,lVar8);
        local_64 = 0;
        puVar5 = (ulonglong *)param_1[1];
        puVar3 = (undefined4 *)*puVar5 + 1;
        if ((undefined4 *)puVar5[1] < puVar3) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
          }
          else {
            FUN_14572512c(param_1,&local_64);
          }
        }
        else {
          local_64 = *(undefined4 *)*puVar5;
          *puVar5 = (ulonglong)puVar3;
        }
        FUN_147019a7e(lVar8 + 8,local_64);
        iVar4 = *(int *)(lVar8 + 0x10);
        if ((longlong)iVar4 != 0) {
          lVar6 = *(longlong *)(lVar8 + 8);
          lVar11 = 0;
          do {
            local_78 = 0;
            uStack_70 = 0;
            local_88 = (longlong *)0x0;
            uStack_80 = 0;
            FUN_14010d536(&local_88,param_1);
            puVar3 = (undefined4 *)(lVar6 + lVar11);
            *puVar3 = (undefined4)local_88;
            puVar3[1] = local_88._4_4_;
            puVar3[2] = (undefined4)uStack_80;
            puVar3[3] = uStack_80._4_4_;
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            lVar11 = lVar11 + 0x10;
          } while ((longlong)iVar4 * 0x10 != lVar11);
        }
        lVar8 = lVar8 + 0x18;
      } while (lVar8 != lVar2);
      uVar10 = (int)uStack_a0;
    }
    lVar2 = local_a8;
    plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_149e8ed60;
    plVar7[2] = lVar2;
    local_a8 = 0;
    *(undefined4 *)(plVar7 + 3) = uVar10;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_a0._4_4_;
    uStack_a0 = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    FUN_1401a56c2(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(param_2 + 0x48) = plVar7 + 2;
    plVar9 = *(longlong **)(param_2 + 0x50);
    if (plVar7 != plVar9) {
      *(longlong **)(param_2 + 0x50) = plVar7;
      if (plVar9 == (longlong *)0x0) goto LAB_140208460;
      goto LAB_140208609;
    }
    if (plVar7 == (longlong *)0x0) goto LAB_140208460;
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_140208460;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
    plVar9 = plVar7;
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_140208460:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020871a FUN_14020871a body=134 status=ok
// SIG undefined FUN_14020871a(void)

ulonglong * FUN_14020871a(ulonglong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar3 = (longlong *)*param_1;
  *param_1 = uVar2;
  if (((ulonglong)plVar3 & 1) == 0) {
    if (plVar3 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar1 = plVar3 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) {
      return param_1;
    }
    FUN_140958ed1(*plVar3,(int)plVar3[1]);
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar3 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)((uint)plVar3 & 0xfffc) * 2);
    LOCK();
    plVar1 = plVar3 + 0x18;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (plVar3 == (longlong *)0x0 || (int)*plVar1 != 0) {
      return param_1;
    }
    FUN_14587a8e6(plVar3);
  }
  FUN_1400020a8(plVar3);
  return param_1;
}



// FUNCTION 1402087a0 FUN_1402087a0 body=226 status=ok
// SIG undefined FUN_1402087a0(void)

ulonglong * FUN_1402087a0(ulonglong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (ulonglong *)*puVar2 + 1;
  if ((ulonglong *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_20,8);
    }
    else {
      thunk_FUN_146821949(param_2,&local_20);
    }
  }
  else {
    local_20 = *(ulonglong *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  uVar3 = (ulonglong)(*(uint *)(param_2[0x15] + 0xb0) & 0x3fff);
  *param_1 = ((ulonglong)((uint)(local_20 >> 0x10) & 0xffff0000) | local_20 << 0x20 |
             local_20 >> 0x3e) + uVar3 * 4 | 1;
  LOCK();
  *(int *)(*(longlong *)(&DAT_14c927ae8 + uVar3 * 8) + 0xc0) =
       *(int *)(*(longlong *)(&DAT_14c927ae8 + uVar3 * 8) + 0xc0) + 1;
  UNLOCK();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140208883 FUN_140208883 body=810 status=ok
// SIG undefined FUN_140208883(void)

longlong FUN_140208883(longlong param_1,longlong param_2,char param_3)

{
  wchar_t _Ch;
  short *psVar1;
  wchar_t *pwVar2;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128 [2];
  undefined1 local_118 [16];
  longlong *local_108;
  undefined4 local_100;
  undefined4 *local_f8;
  ulonglong uStack_f0;
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined4 local_c0;
  wchar_t *local_90 [3];
  char local_78;
  short *local_70;
  short *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  psVar1 = *(short **)(param_2 + 0x20);
  if (((*(short **)(param_2 + 0x10) <= psVar1) &&
      (psVar1 <= (short *)(*(longlong *)(param_2 + 0x18) + -2))) && (*psVar1 == 0x60)) {
    local_68 = psVar1 + 1;
    local_60 = 0;
    local_5c = (undefined4)
               ((ulonglong)((longlong)psVar1 - (longlong)*(short **)(param_2 + 0x10)) >> 1);
    local_58 = 1;
    local_70 = psVar1;
    FUN_1456e5a02(param_2 + 0x10,local_90);
    if (local_78 != '\0') {
      _Ch = *local_90[0];
      pwVar2 = wcschr(L"{`",_Ch);
      if (pwVar2 == (wchar_t *)0x0) {
        if (param_3 != '\0') {
          local_e8[0] = 0;
          local_e8[1] = 0;
          FUN_140002184(local_e8,_Ch);
          local_f8 = (undefined4 *)0x0;
          uStack_f0 = 0;
          FUN_140009b9a(&local_108,local_e8);
          local_d8._0_4_ = 4;
          FUN_14023423e(&local_c8,&local_108);
          uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
          FUN_140188694(&local_f8,0);
          *local_f8 = (undefined4)local_d8;
          local_f8[1] = local_d8._4_4_;
          local_f8[2] = uStack_d0;
          local_f8[3] = uStack_cc;
          if (local_c8 == (undefined **)0x0) {
            *(undefined8 *)(local_f8 + 4) = 0;
            local_f8[6] = 0;
          }
          else {
            FUN_14023423e(local_f8 + 4,&local_c8);
          }
          if (local_c8 != (undefined **)0x0) {
            (**(code **)(*local_c8 + 0x10))();
            local_c8 = (undefined **)0x0;
            local_c0 = 0;
          }
          if (local_108 != (longlong *)0x0) {
            (**(code **)(*local_108 + 0x10))();
          }
          local_d8 = L"InvalidEscapeCharacter";
          uStack_d0 = 0x16;
          FUN_1446e940c(local_12c,&local_d8);
          local_d8 = L"StringFormatter";
          uStack_d0 = 0xf;
          FUN_1446e940c(local_130,&local_d8);
          FUN_140208bae(local_128,local_130,local_12c,L"Invalid escape character \'{0}\'");
          FUN_14023409e(local_118,local_128,1);
          FUN_140188794(&local_108,local_118,&local_f8);
          local_d8 = (wchar_t *)local_108;
          if (local_108 != (longlong *)0x0) {
            (**(code **)(*local_108 + 8))(local_108);
          }
          uStack_d0 = local_100;
          FUN_14023423e(param_1,&local_d8);
          *(undefined1 *)(param_1 + 0x10) = 1;
          if (local_d8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_d8 + 0x10))();
          }
          if (local_108 != (longlong *)0x0) {
            (**(code **)(*local_108 + 0x10))(local_108);
          }
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          FUN_14007f2db(local_f8,uStack_f0 & 0xffffffff);
          if (local_f8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8[0] != 0) {
            FUN_1400020a8();
          }
          goto LAB_1402088d6;
        }
      }
      else {
        local_d8 = (wchar_t *)0x508941bb48ff0754;
        uStack_d0 = 0x9d5447ff;
        uStack_cc = 0xcac61362;
        local_c8 = &PTR_FUN_149e34c90;
        local_c0 = CONCAT22(local_c0._2_2_,_Ch);
        FUN_140079082(param_2,&local_70,&local_d8);
        FUN_1448f2150(&local_d8);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
LAB_1402088d6:
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140208bae FUN_140208bae body=110 status=ok
// SIG undefined FUN_140208bae(void)

undefined8 FUN_140208bae(undefined8 param_1,undefined8 param_2,undefined8 param_3,wchar_t *param_4)

{
  size_t sVar1;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_4;
  if (param_4 == (wchar_t *)0x0) {
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(param_4);
    local_28 = (int)sVar1;
  }
  FUN_140208c1e(param_1,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140208c1e FUN_140208c1e body=168 status=ok
// SIG undefined FUN_140208c1e(void)

undefined8 *
FUN_140208c1e(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4[2] == 0) {
    FUN_140e82300();
    plVar1 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  }
  else {
    lVar2 = FUN_140208cc8(FUN_1456e5a62);
    local_30 = *param_2;
    local_2c = *param_3;
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    FUN_140208d4c(*(undefined8 *)(lVar2 + 0x78),param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140208cc8 FUN_140208cc8 body=131 status=ok
// SIG undefined FUN_140208cc8(void)

undefined * FUN_140208cc8(code *param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844c70) {
    FUN_144b3d300(&DAT_14c844c70);
    if (DAT_14c844c70 == -1) {
      if (param_1 == (code *)0x0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = &DAT_14c844bf0;
        (*param_1)(&DAT_14c844bf0);
      }
      DAT_14c844c68 = puVar1;
      atexit(FUN_142761bc0);
      _Init_thread_footer(&DAT_14c844c70);
    }
  }
  return &DAT_14c844bf0;
}



// FUNCTION 140208d4c FUN_140208d4c body=1015 status=ok
// SIG undefined FUN_140208d4c(void)

longlong * FUN_140208d4c(longlong *param_1,longlong *param_2,undefined8 *param_3,int *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  PSRWLOCK pRVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_98 [32];
  int *local_78;
  longlong *plStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 10);
  EnterCriticalSection(lpCriticalSection);
  iVar10 = 0;
  uVar7 = 0;
  if (param_4[1] != -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
      FUN_1456aef72(&DAT_14c8450d0);
      DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
      atexit(FUN_142767c9e);
      _Init_thread_footer(&DAT_14c845168);
    }
    pRVar5 = DAT_14c845160;
    iVar2 = param_4[1];
    AcquireSRWLockShared(DAT_14c845160);
    uVar7 = *(uint *)(*(longlong *)((longlong)pRVar5[3].Ptr + (longlong)(iVar2 / 0x555) * 8) + 0xc +
                     (longlong)(iVar2 % 0x555) * 0x18);
    ReleaseSRWLockShared(pRVar5);
  }
  if (*param_4 != -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
      FUN_1456aef72(&DAT_14c8450d0);
      DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
      atexit(FUN_142767c9e);
      _Init_thread_footer(&DAT_14c845168);
    }
    pRVar5 = DAT_14c845160;
    iVar10 = *param_4;
    AcquireSRWLockShared(DAT_14c845160);
    iVar10 = *(int *)(*(longlong *)((longlong)pRVar5[3].Ptr + (longlong)(iVar10 / 0x555) * 8) + 0xc
                     + (longlong)(iVar10 % 0x555) * 0x18);
    ReleaseSRWLockShared(pRVar5);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = uVar7 >> 0xd ^ iVar10 - uVar7;
    uVar9 = uVar6 << 8 ^ (-0x61c88647 - uVar7) - uVar6;
    uVar11 = uVar9 >> 0xd ^ (uVar7 - uVar6) - uVar9;
    uVar12 = uVar11 >> 0xc ^ (uVar6 - uVar9) - uVar11;
    uVar7 = uVar12 << 0x10 ^ (uVar9 - uVar11) - uVar12;
    uVar6 = uVar7 >> 5 ^ (uVar11 - uVar12) - uVar7;
    uVar9 = uVar6 >> 3 ^ (uVar12 - uVar7) - uVar6;
    uVar7 = uVar9 << 10 ^ (uVar7 - uVar6) - uVar9;
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar14 +
                     (ulonglong)((int)param_1[9] - 1U & (uVar7 >> 0xf ^ uVar6 - (uVar9 + uVar7))) *
                     4);
    if (iVar10 != -1) {
      lVar3 = *param_1;
      do {
        lVar13 = (longlong)iVar10 * 0x20;
        lVar1 = lVar3 + lVar13;
        if ((*(int *)(lVar3 + lVar13) == *param_4) && (*(int *)(lVar3 + 4 + lVar13) == param_4[1]))
        {
          plVar14 = (longlong *)(lVar1 + 8);
          if ((plVar14 != (longlong *)0x0 && lVar1 != 0) &&
             (puVar8 = (undefined8 *)(**(code **)(*(longlong *)*plVar14 + 0x20))(),
             puVar8 != (undefined8 *)0x0)) {
            uVar7 = *(uint *)(puVar8 + 1);
            iVar10 = uVar7 - 1;
            if (uVar7 == 0) {
              iVar10 = 0;
            }
            if ((*(int *)(param_3 + 1) == iVar10) &&
               ((uVar7 < 2 ||
                (iVar10 = wcsncmp((wchar_t *)*param_3,(wchar_t *)*puVar8,(longlong)iVar10),
                iVar10 == 0)))) {
              plVar14 = (longlong *)*plVar14;
              *param_2 = (longlong)plVar14;
              if (plVar14 != (longlong *)0x0) {
                (**(code **)(*plVar14 + 8))();
              }
              *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x10);
              LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
            }
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 0x18);
      } while (iVar10 != -1);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  uVar4 = *(undefined8 *)param_4;
  FUN_14006620a(&local_78,*param_3,*(undefined4 *)(param_3 + 1));
  puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_149e19310;
  puVar8[2] = uVar4;
  puVar8[3] = local_78;
  puVar8[4] = plStack_70;
  puVar8[5] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    UNLOCK();
  }
  *param_2 = (longlong)puVar8;
  *(undefined4 *)(param_2 + 1) = 8;
  EnterCriticalSection(lpCriticalSection);
  local_78 = param_4;
  plStack_70 = param_2;
  FUN_1415bfba6(param_1,local_64);
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140209146 FUN_140209146 body=1093 status=ok
// SIG undefined FUN_140209146(void)

double * FUN_140209146(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined4 *puVar3;
  void *_Src;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 auStack_78 [32];
  void *local_58;
  double dStack_50;
  double local_48;
  void *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = FUN_14020958c(param_4);
  if ((lVar6 == 0) || (lVar10 = *(longlong *)(lVar6 + 0x1700), lVar10 == 0)) {
switchD_1402091c7_default:
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    goto LAB_14020917d;
  }
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    lVar6 = *(longlong *)(lVar6 + 0x1710);
    *(undefined2 *)(param_2 + 3) = 4;
    *(uint *)param_2 = (uint)(lVar6 != 0);
    goto LAB_1402091fb;
  case 1:
    bVar4 = FUN_1402096b0();
    *(undefined2 *)(param_2 + 3) = 4;
    goto LAB_1402091f9;
  case 2:
    bVar4 = *(byte *)(lVar10 + 0x975);
    goto LAB_14020925e;
  case 3:
    bVar4 = *(byte *)(lVar10 + 0x1d08);
LAB_14020925e:
    *(undefined2 *)(param_2 + 3) = 4;
LAB_1402091f9:
    *(uint *)param_2 = (uint)bVar4;
LAB_1402091fb:
    *(undefined1 *)(param_2 + 4) = 1;
    goto LAB_14020917d;
  case 4:
    dVar7 = *(double *)(lVar10 + 0x878);
    dVar1 = *(double *)(lVar10 + 0x880);
    dVar2 = *(double *)(lVar10 + 0x888);
    *(undefined2 *)(param_2 + 3) = 8;
    *param_2 = SQRT(dVar2 * dVar2 + dVar7 * dVar7 + dVar1 * dVar1);
    *(undefined1 *)(param_2 + 4) = 0x15;
    goto LAB_14020917d;
  case 5:
    fVar14 = *(float *)(lVar10 + 0x1ce4);
    break;
  case 6:
    fVar14 = *(float *)(&DAT_00001ce8 + lVar10);
    break;
  case 7:
    fVar14 = *(float *)(lVar10 + 0x1cec);
    break;
  case 8:
    fVar14 = *(float *)(lVar10 + 0x968);
    break;
  case 9:
    fVar14 = *(float *)(lVar10 + 0x96c);
    break;
  case 10:
    fVar14 = *(float *)(lVar10 + 0x1cd4);
    break;
  case 0xb:
    fVar14 = (float)SQRT(*(double *)(lVar10 + 0x1cb8) * *(double *)(lVar10 + 0x1cb8) +
                         *(double *)(lVar10 + 0x1cc0) * *(double *)(lVar10 + 0x1cc0));
    break;
  case 0xc:
    fVar14 = *(float *)(lVar10 + 0x1c00) * 57.295776;
    break;
  case 0xd:
    fVar14 = *(float *)(lVar10 + 0x1aa0);
    break;
  case 0xe:
    fVar14 = *(float *)(lVar10 + 0x1d28);
    break;
  case 0xf:
    dVar7 = *(double *)(lVar10 + 0x1b08);
    local_58 = *(void **)(lVar10 + 0x1af8);
    dStack_50 = *(double *)(lVar10 + 0x1b00);
    *(undefined2 *)(param_2 + 3) = 0x18;
    *param_2 = (double)local_58;
    param_2[1] = dStack_50;
    local_48 = dVar7;
    goto LAB_14020924a;
  case 0x10:
    *(undefined2 *)(param_2 + 3) = 0x18;
    dVar7 = *(double *)(lVar10 + 0x1ac0);
    *param_2 = *(double *)(lVar10 + 0x1ab8);
    param_2[1] = dVar7;
    dVar7 = *(double *)(lVar10 + 0x1ac8);
LAB_14020924a:
    param_2[2] = dVar7;
    *(undefined1 *)(param_2 + 4) = 4;
    goto LAB_14020917d;
  case 0x11:
    fVar14 = 1.0;
    if (*(char *)(lVar10 + 0x975) != '\0') {
      fVar14 = 1.0 - *(float *)(lVar10 + 0x1aec);
    }
    break;
  case 0x12:
    *(undefined2 *)(param_2 + 3) = 4;
    *(undefined4 *)param_2 = 0;
    goto LAB_1402091db;
  case 0x13:
    dVar7 = *(double *)(lVar6 + 0x1a00);
    dStack_50 = 0.0;
    local_48 = 0.0;
    uVar9 = FUN_14037df6e();
    lVar6 = FUN_14477b664(uVar9);
    lVar10 = FUN_14037df6e();
    uVar9 = FUN_14037df6e();
    FUN_1402d1bfa(&local_38,uVar9,dVar7);
    if (local_38 != (void *)0x0) {
      local_48 = 0.0;
    }
    local_58 = local_38;
    lVar11 = FUN_14037df6e();
    if (lVar10 == 0) {
LAB_14020942f:
      lVar11 = lVar10;
    }
    else if (lVar11 == 0) {
      lVar11 = 0;
    }
    else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
             lVar11 + 0x30)) goto LAB_14020942f;
    if (lVar6 != lVar11) {
      local_48 = 0.0;
    }
    uVar9 = FUN_14477b664(lVar11);
    dStack_50 = (double)FUN_14477b664(uVar9);
    if (dStack_50 != 0.0 && local_38 != (void *)0x0) {
      local_48 = dVar7;
    }
    *(undefined2 *)(param_2 + 3) = 0x18;
    FUN_148f01e36(param_2,&local_58);
    *(undefined1 *)(param_2 + 4) = 0x1d;
    goto LAB_14020917d;
  case 0x14:
    puVar3 = *(undefined4 **)(*(longlong *)(lVar6 + 0x1a00) + 8);
    puVar12 = &DAT_14c9485f0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar12 = puVar3;
    }
    local_58 = (void *)0x0;
    dStack_50 = 0.0;
    FUN_1400b2348(puVar12,&local_58,&DAT_14b9dd901);
    _Src = local_58;
    *(undefined2 *)(param_2 + 3) = 0x10;
    *param_2 = 0.0;
    lVar6 = (longlong)dStack_50._0_4_;
    *(int *)(param_2 + 1) = dStack_50._0_4_;
    if (lVar6 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,(ulonglong)dStack_50 & 0xffffffff,0);
      memcpy((void *)*param_2,_Src,lVar6 * 2);
    }
    *(undefined1 *)(param_2 + 4) = 8;
    if (local_58 != (void *)0x0) {
      FUN_1400020a8(local_58);
    }
    goto LAB_14020917d;
  case 0x15:
    if ((longlong)*(int *)(lVar10 + 0x1db0) < 1) {
      iVar5 = 0;
    }
    else {
      uVar8 = 0xffffffff;
      uVar13 = 0;
      do {
        if (*(float *)(*(longlong *)(lVar10 + 0x1da8) + uVar13 * 8) <= *(float *)(lVar10 + 0x1d24))
        {
          uVar8 = uVar13 & 0xffffffff;
        }
        uVar13 = uVar13 + 1;
      } while ((longlong)*(int *)(lVar10 + 0x1db0) != uVar13);
      iVar5 = (int)uVar8 + 1;
    }
    *(undefined2 *)(param_2 + 3) = 4;
    *(int *)param_2 = iVar5;
    *(undefined1 *)(param_2 + 4) = 2;
    goto LAB_14020917d;
  case 0x16:
    fVar14 = 0.0;
    if ((*(char *)(lVar10 + 0x1d08) == '\x01') && (*(char *)(lVar10 + 0x1d0a) == '\x01')) {
      fVar14 = *(float *)(lVar10 + 0x1d0c);
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
    }
    break;
  default:
    goto switchD_1402091c7_default;
  }
  *(undefined2 *)(param_2 + 3) = 4;
  *(float *)param_2 = fVar14;
LAB_1402091db:
  *(undefined1 *)(param_2 + 4) = 3;
LAB_14020917d:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14020958c FUN_14020958c body=61 status=ok
// SIG undefined FUN_14020958c(void)

longlong FUN_14020958c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_1402095ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1402095ca FUN_1402095ca body=228 status=ok
// SIG undefined FUN_1402095ca(void)

longlong FUN_1402095ca(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbcc38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_145aa9a46;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145998876;
    local_38 = &LAB_148c97f3d;
    local_40 = &LAB_14580c121;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2640;
    FUN_14081cfa3(L"/Script/OakGame",L"OakVehicle",&DAT_14cbbcc38,FUN_14660bf2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbcc38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402096b0 FUN_1402096b0 body=96 status=ok
// SIG undefined FUN_1402096b0(void)

undefined1 FUN_1402096b0(longlong *param_1)

{
  longlong lVar1;
  float extraout_XMM0_Da;
  
  lVar1 = (**(code **)(*param_1 + 0x6d8))();
  if (lVar1 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x1a6c) = 1;
  }
  else {
    FUN_14020975c(lVar1);
    if (extraout_XMM0_Da <= 1e-08) {
      *(undefined1 *)((longlong)param_1 + 0x1a6c) = 2;
    }
    else {
      if (*(longlong *)(lVar1 + 0x40) == 0) {
        return *(undefined1 *)((longlong)param_1 + 0x19a1);
      }
      *(undefined1 *)((longlong)param_1 + 0x1a6c) = 3;
    }
  }
  return 0;
}



// FUNCTION 140209710 FUN_140209710 body=29 status=ok
// SIG undefined FUN_140209710(void)

longlong FUN_140209710(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 0x58;
  }
  return lVar1;
}



// FUNCTION 14020975c FUN_14020975c body=72 status=ok
// SIG undefined FUN_14020975c(void)

float FUN_14020975c(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_1402097a4();
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    lVar1 = FUN_140280ec4(lVar1);
    fVar3 = *(float *)(lVar1 + 0x30) - *(float *)(lVar1 + 0x24);
    fVar2 = 0.0;
    if ((fVar3 != 0.0) || (NAN(fVar3))) {
      fVar2 = (*(float *)(lVar1 + 200) - *(float *)(lVar1 + 0x24)) / fVar3;
    }
  }
  return fVar2;
}



// FUNCTION 1402097a4 FUN_1402097a4 body=735 status=ok
// SIG undefined FUN_1402097a4(void)

uint * FUN_1402097a4(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong lStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0x168) == 0)) ||
     (*(char *)(*(longlong *)(lVar3 + 0x168) + 0x178) != '\x03')) {
    puVar4 = (uint *)(param_1 + 0x70);
    plVar5 = *(longlong **)(param_1 + 0x78);
    if (((((plVar5 != (longlong *)0x0) && (*(int *)(param_1 + 0x74) != 0)) &&
         ((uVar1 = *puVar4, -1 < (int)uVar1 &&
          (((int)uVar1 < DAT_14c9647dc &&
           (lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 != 0))))))
        && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x74))) &&
       ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar5 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar5 = plVar5 + 0xd9;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
      }
      cVar2 = FUN_14486eb0e(plVar5,puVar4);
      if (cVar2 != '\0') goto LAB_140209878;
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    if (((((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) &&
         (lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x3c20) + 0x18))(lVar3 + 0x3c20), lVar3 != 0))
        && ((*(longlong *)(param_1 + 0x50) != 0 && (*(longlong *)(lVar3 + 0x20) != 0)))) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x1a00), lVar3 != 0)) {
      local_58 = *(undefined8 *)(lVar3 + 0x1230);
      FUN_1446dcdd4(&local_50);
      if (DAT_14cb7d760 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_144837462(DAT_14cb7d760,&local_50);
      }
      if (lStack_38 != 0) {
        FUN_1400020a8();
      }
      if ((lVar3 != 0) && (plVar5 = *(longlong **)(param_1 + 0x48), plVar5 != (longlong *)0x0)) {
        uVar6 = FUN_1403c7982();
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
        if (plVar5 != (longlong *)0x0) {
          uVar6 = FUN_1403c7982();
          plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
          if ((plVar5 != plVar7) && (plVar7 != (longlong *)0x0)) {
            uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7);
            FUN_1403c7952(uVar6,&local_50,lVar3,0);
            *(undefined8 *)(param_1 + 0x80) = local_40;
            *(longlong *)(param_1 + 0x88) = lStack_38;
            *puVar4 = local_50;
            *(undefined4 *)(param_1 + 0x74) = uStack_4c;
            *(undefined4 *)(param_1 + 0x78) = uStack_48;
            *(undefined4 *)(param_1 + 0x7c) = uStack_44;
          }
        }
      }
    }
  }
LAB_140209878:
  plVar5 = *(longlong **)(param_1 + 0x78);
  if ((plVar5 != (longlong *)0x0) && (*(int *)(param_1 + 0x74) != 0)) {
    puVar8 = (uint *)(param_1 + 0x70);
    uVar1 = *puVar8;
    puVar4 = (uint *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1402098fe;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x74))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar5 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar5 = plVar5 + 0xd9;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))();
      }
      cVar2 = FUN_14486eb0e(plVar5,puVar8);
      puVar4 = (uint *)0x0;
      if (cVar2 != '\0') {
        puVar4 = puVar8;
      }
      goto LAB_1402098fe;
    }
  }
  puVar4 = (uint *)0x0;
LAB_1402098fe:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 140209a84 FUN_140209a84 body=51 status=ok
// SIG undefined FUN_140209a84(void)

longlong FUN_140209a84(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_140209ab8();
  lVar2 = FUN_140209b32(param_1);
  lVar3 = FUN_140209bae(param_1);
  return lVar3 + lVar2 + lVar1;
}



// FUNCTION 140209ab8 FUN_140209ab8 body=121 status=ok
// SIG undefined FUN_140209ab8(void)

longlong FUN_140209ab8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140209c2c(param_1 + 8);
  if ((longlong)(int)uStack_20 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = 0;
    lVar2 = 0;
    do {
      lVar2 = lVar2 + *(longlong *)(local_28 + lVar1);
      lVar1 = lVar1 + 8;
    } while ((longlong)(int)uStack_20 * 8 != lVar1);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140209b32 FUN_140209b32 body=123 status=ok
// SIG undefined FUN_140209b32(void)

longlong FUN_140209b32(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140209c2c(param_1 + 0x58);
  if ((longlong)(int)uStack_20 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = 0;
    lVar2 = 0;
    do {
      lVar2 = lVar2 + *(longlong *)(local_28 + lVar1);
      lVar1 = lVar1 + 8;
    } while ((longlong)(int)uStack_20 * 8 != lVar1);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140209bae FUN_140209bae body=124 status=ok
// SIG undefined FUN_140209bae(void)

longlong FUN_140209bae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140209c2c(param_1 + 0xa8);
  if ((longlong)(int)uStack_20 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = 0;
    lVar2 = 0;
    do {
      lVar2 = lVar2 + *(longlong *)(local_28 + lVar1);
      lVar1 = lVar1 + 8;
    } while ((longlong)(int)uStack_20 * 8 != lVar1);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140209c2c FUN_140209c2c body=507 status=ok
// SIG undefined FUN_140209c2c(void)

void FUN_140209c2c(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar6) {
    FUN_1448f21ac(param_2);
  }
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar10 = 1;
    uVar13 = 0;
    iVar8 = 0;
    iVar12 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 2);
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar8 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar8 = iVar6 + -1;
      }
      uVar13 = 0;
      uVar10 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar10 = uVar13;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar13) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar12 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar8) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 < iVar6) {
    uVar11 = 0xffffffff;
    do {
      lVar9 = *param_1;
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_14479d316(param_2,iVar6);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) =
           *(undefined8 *)(lVar9 + (longlong)iVar8 * 0x18 + 8);
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar8 = (int)uVar13;
      lVar9 = (longlong)iVar8;
      uVar2 = puVar5[lVar9] & uVar11;
      if (uVar2 == 0) {
        iVar3 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar3 = iVar6 + -1;
        }
        iVar3 = iVar3 >> 5;
        iVar4 = iVar3;
        if (iVar3 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar3 <= iVar8) {
          return;
        }
        lVar7 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar2 = puVar5[lVar9 + lVar7 + 1];
          if (uVar2 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar4 - lVar9 == lVar7) {
            return;
          }
        }
        uVar13 = (ulonglong)(iVar8 + (int)lVar7 + 1);
        uVar11 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar2 & uVar2);
      uVar1 = uVar10 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar6);
  }
  return;
}



// FUNCTION 140209e28 FUN_140209e28 body=1028 status=ok
// SIG undefined FUN_140209e28(void)

void FUN_140209e28(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *_Src;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_108 [44];
  int local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_88;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = *(longlong *)(param_1 + 0x48);
  local_88 = (undefined8 *)FUN_1405f939e();
  FUN_14020a61a(local_c0,&DAT_14cb246c8);
  LOCK();
  *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
  UNLOCK();
  lVar15 = param_1;
  local_c8 = local_b0;
  local_d0 = local_98;
  lVar13 = local_d8;
  plVar12 = local_b8;
  do {
    local_d8 = lVar15;
    if (plVar12 == local_a0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + -1;
      UNLOCK();
      if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
        local_d8 = lVar13;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    puVar5 = (uint *)plVar12[2];
    if ((((((puVar5[1] != 0) && (uVar2 = *puVar5, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
         && ((plVar11 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar11 != (longlong *)0x0 && (*(uint *)(plVar11 + 2) == puVar5[1])))) &&
        (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (*plVar11 != 0)))) &&
       ((((bVar1 = (byte)puVar5[6], bVar1 != 1 || ((char)puVar5[0x10] == '\0')) &&
         ((*(char *)(lVar4 + 0x1c8) != '\x01' || ((char)puVar5[0x10] == '\0')))) &&
        (((*(byte *)(lVar4 + 0x1c9) & bVar1) == 0 &&
         (((*(char *)(lVar4 + 0x1ca) != '\x01' || (((bVar1 | (byte)puVar5[0x20]) & 1) == 0)) &&
          (cVar7 = FUN_14020a27c(param_1,lVar4), cVar7 != '\0')))))))) {
      if ((puVar5[1] == 0) || (uVar2 = *puVar5, (int)uVar2 < 0)) {
LAB_14020a10a:
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          plVar11 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar11 == (longlong *)0x0) || (*(uint *)(plVar11 + 2) != puVar5[1])) ||
             ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_14020a10a;
          lVar13 = *plVar11;
        }
      }
      iVar3 = *(int *)(param_2 + 0x388);
      *(uint *)(param_2 + 0x388) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0x38c) < iVar3 + 1U) {
        FUN_14052e0a0(param_2,iVar3);
      }
      lVar15 = *(longlong *)(param_2 + 0x380);
      if (*(longlong *)(param_2 + 0x380) == 0) {
        lVar15 = param_2;
      }
      local_70 = 8;
      if (lVar13 == 0) {
        local_88._0_4_ = 0;
        iVar8 = 0;
        uVar2 = (uint)local_88;
      }
      else {
        uVar2 = *(uint *)(lVar13 + 0xc);
        local_88 = (undefined8 *)(ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar8 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar17) {
            local_dc = iVar14;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
            iVar14 = local_dc;
          }
          LOCK();
          iVar8 = *(int *)(lVar13 + 0x10);
          bVar17 = iVar8 == 0;
          if (bVar17) {
            *(int *)(lVar13 + 0x10) = iVar14;
            iVar8 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_88;
          if (bVar17) {
            iVar8 = iVar14;
          }
        }
      }
      local_88._0_4_ = uVar2;
      puVar16 = (undefined8 *)(lVar15 + (longlong)iVar3 * 0x38);
      local_88 = (undefined8 *)CONCAT44(iVar8,(uint)local_88);
      local_68 = 7;
      *(ushort *)(puVar16 + 3) = local_70;
      puVar10 = puVar16;
      _Src = &local_88;
      if (0x18 < local_70) {
        puVar10 = (undefined8 *)FUN_14001cc68(local_70,0);
        *puVar16 = puVar10;
        _Src = local_88;
      }
      param_1 = local_d8;
      if (DAT_14c9a8d90 == (code *)0x0) {
        memcpy(puVar10,_Src,(longlong)DAT_14c9a8cf0);
      }
      else {
        (*DAT_14c9a8d90)();
      }
      *(byte *)(puVar16 + 4) = local_68;
      puVar16[5] = 0;
      puVar16[6] = 0;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar6 != (code *)0x0) {
        puVar10 = &local_88;
        if (0x18 < local_70) {
          puVar10 = local_88;
        }
        (*pcVar6)(puVar10);
        param_1 = local_d8;
      }
      if (0x18 < local_70) {
        FUN_1400020a8(local_88);
      }
    }
    do {
      plVar12 = (longlong *)*plVar12;
      lVar15 = local_d8;
      lVar13 = local_d8;
      if (plVar12 == (longlong *)0x0) break;
      lVar9 = FUN_14020a22e(plVar12[2]);
      lVar15 = local_d8;
      lVar13 = local_d8;
    } while (lVar9 != *local_a8);
  } while( true );
}



// FUNCTION 14020a22e FUN_14020a22e body=77 status=ok
// SIG undefined FUN_14020a22e(void)

undefined8 FUN_14020a22e(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar3 = *plVar6, lVar3 == 0)))) {
    return 0;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(uint *)(lVar3 + 8) & 0x10) == 0) && (lVar5 = *(longlong *)(lVar3 + 0x20), lVar5 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = (code *)&LAB_14355090c;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_147b8e16d;
        pcStack_50 = (code *)&LAB_140810a38;
        pwStack_58 = L"Engine";
        uStack_60 = 0x800000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar5 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = FUN_1449e2820;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_1468c5283;
        pcStack_50 = FUN_142809da0;
        pwStack_58 = L"Engine";
        uStack_60 = 0x400000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar5 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
             (lVar7 = lVar3,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar5 + 0x30)) {
            lVar7 = 0;
          }
        } while ((lVar7 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
        if (lVar7 != 0) {
          uVar4 = *(undefined8 *)(lVar7 + 0xc0);
          goto LAB_1447211c7;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1447211c7:
  if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020a27c FUN_14020a27c body=924 status=ok
// SIG undefined FUN_14020a27c(void)

undefined8 FUN_14020a27c(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  double *pdVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  int *piVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_d8 [32];
  char local_b8 [16];
  longlong *local_a8;
  undefined4 local_90 [2];
  int local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  int local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((*(int *)(param_1 + 0x440) == 0) || (uVar3 = *(uint *)(param_1 + 0x43c), (int)uVar3 < 0))
       || (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x440))))) ||
     ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
LAB_14020a307:
    if ((*(char *)(param_2 + 0x179) != '\x01') || (*(longlong *)(param_1 + 0x418) != param_3)) {
      if (*(char *)(param_2 + 0x100) == '\x01') {
        lVar6 = *(longlong *)(param_3 + 0x1c8);
        if (lVar6 == 0) {
          pdVar4 = (double *)&DAT_14c8464e0;
          dVar12 = DAT_14c8464f0;
        }
        else {
          pdVar4 = (double *)(lVar6 + 0x260);
          dVar12 = *(double *)(lVar6 + 0x270);
        }
        dVar13 = *pdVar4 - *(double *)(param_1 + 0x420);
        dVar14 = pdVar4[1] - *(double *)(param_1 + 0x428);
        dVar12 = dVar12 - *(double *)(param_1 + 0x430);
        fVar11 = (float)(dVar12 * dVar12 + dVar14 * dVar14 + dVar13 * dVar13);
        if ((bool)*(char *)(param_2 + 0xf8) !=
            (*(float *)(param_1 + 0x438) <= fVar11 && fVar11 != *(float *)(param_1 + 0x438)))
        goto LAB_14020a38f;
      }
      if (*(char *)(param_2 + 0x148) == '\x01') {
        local_b8[0] = '\0';
        local_90[0] = 0;
        FUN_1456bb102(local_b8,param_3);
        piVar7 = &local_88;
        FUN_1447c3578(param_2 + 0x108,piVar7,local_b8);
        if (local_68 == 1) {
          bVar10 = local_88 != 0;
          uVar3 = 1;
        }
        else {
          piVar9 = &local_60;
          FUN_1400b56fe(piVar9,&local_88,1);
          bVar10 = local_60 != 0;
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_48) {
              piVar9 = (int *)CONCAT44(uStack_5c,local_60);
            }
            (*pcVar2)(piVar9);
          }
          if (0x18 < local_48) {
            FUN_1400020a8(CONCAT44(uStack_5c,local_60));
          }
          bVar10 = local_40 != 0 && bVar10;
          uVar3 = (uint)local_68;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_70) {
            piVar7 = (int *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar2)(piVar7);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
        }
        FUN_1448173f8(local_90);
        if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
          LOCK();
          piVar7 = (int *)((longlong)local_a8 + 0xc);
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            (**(code **)(*local_a8 + 0x10))();
          }
        }
        if ((bool)*(char *)(param_2 + 0x140) == bVar10) goto LAB_14020a38f;
      }
      if (*(char *)(param_2 + 0x160) != '\x01') {
LAB_14020a3d1:
        if (*(char *)(param_2 + 0x178) == '\x01') {
          if ((longlong)*(int *)(param_2 + 0x1b8) != 0) {
            plVar8 = *(longlong **)(param_2 + 0x1b0);
            lVar6 = (longlong)*(int *)(param_2 + 0x1b8) << 3;
            do {
              iVar1 = *(int *)(*plVar8 + 0x38);
              if ((iVar1 <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
                  *plVar8 + 0x30)) {
                if (plVar8 != (longlong *)0x0) goto LAB_14020a38f;
                break;
              }
              plVar8 = plVar8 + 1;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
        uVar5 = 1;
        goto LAB_14020a391;
      }
      if ((longlong)*(int *)(param_2 + 0x1a8) != 0) {
        plVar8 = *(longlong **)(param_2 + 0x1a0);
        lVar6 = (longlong)*(int *)(param_2 + 0x1a8) << 3;
        do {
          iVar1 = *(int *)(*plVar8 + 0x38);
          if ((iVar1 <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
              *plVar8 + 0x30)) {
            if (plVar8 == (longlong *)0x0) goto LAB_14020a38f;
            goto LAB_14020a3d1;
          }
          plVar8 = plVar8 + 1;
          uVar5 = 0;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
        goto LAB_14020a391;
      }
    }
  }
  else {
    if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar8;
    }
    else {
      lVar6 = 0;
    }
    if (lVar6 != param_3) goto LAB_14020a307;
  }
LAB_14020a38f:
  uVar5 = 0;
LAB_14020a391:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14020a61a FUN_14020a61a body=165 status=ok
// SIG undefined FUN_14020a61a(void)

undefined8 * FUN_14020a61a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = *param_3;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[1] = *param_2;
  param_1[2] = param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[3] = param_1;
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[3];
    lVar2 = FUN_14020a22e(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[1];
    param_1[1] = lVar2;
  }
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[6] = param_1;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[6];
    lVar2 = FUN_14020a22e(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[4];
    param_1[4] = lVar2;
  }
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 14020a6c0 FUN_14020a6c0 body=12 status=ok
// SIG undefined FUN_14020a6c0(void)

void FUN_14020a6c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_14020a6cc(param_1,1);
  return;
}



// FUNCTION 14020a6cc FUN_14020a6cc body=163 status=ok
// SIG undefined FUN_14020a6cc(void)

void FUN_14020a6cc(int *param_1,char param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = (longlong)*param_1;
  if (lVar2 == 0) {
    param_1[1] = param_1[2];
  }
  else {
    fVar1 = (float)param_1[1];
    fVar3 = (float)FUN_14020a770(DAT_14c9a3d60 + lVar2 * 0x88 + -0x88,lVar2 * 0x80,0);
    param_1[1] = (int)fVar3;
    if ((param_2 != '\0') && (1e-08 < ABS(fVar1 - fVar3))) {
      FUN_14020a86a(DAT_14c9a3d60 + lVar2 * 0x88 + -0x18,fVar1,fVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14020a770 FUN_14020a770 body=249 status=ok
// SIG undefined FUN_14020a770(void)

float FUN_14020a770(longlong param_1,float param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar2 = param_1;
  }
  fVar4 = 1.0;
  if ((longlong)*(int *)(param_1 + 0x68) == 0) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar5 = fVar4;
  }
  else {
    fVar5 = 1.0;
    lVar3 = 0;
    fVar4 = 0.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
    fVar6 = 0.0;
    do {
      if (*(byte *)(lVar2 + lVar3) < 5) {
        fVar1 = *(float *)(lVar2 + 4 + lVar3);
        switch(*(byte *)(lVar2 + lVar3)) {
        case 0:
          if (fVar1 <= 0.0) {
            fVar8 = fVar8 + fVar1;
          }
          else {
            fVar4 = fVar4 + fVar1;
          }
          break;
        case 1:
          fVar7 = fVar7 + fVar1;
          break;
        case 2:
          fVar6 = fVar6 + fVar1;
          break;
        case 3:
          fVar5 = fVar5 * fVar1;
          break;
        case 4:
          if (param_3 == '\0') {
            param_2 = fVar1;
          }
        }
      }
      lVar3 = lVar3 + 0xc;
    } while ((longlong)*(int *)(param_1 + 0x68) * 0xc != lVar3);
    fVar4 = fVar4 + 1.0;
  }
  return (fVar4 / (1.0 - fVar8)) * fVar5 * (fVar7 + param_2) + fVar6;
}



// FUNCTION 14020a86a FUN_14020a86a body=193 status=ok
// SIG undefined FUN_14020a86a(void)

void FUN_14020a86a(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_14020a90e;
      }
    }
    uVar5 = uVar8 - 1;
    bVar7 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14020a90e:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14020a92c FUN_14020a92c body=211 status=ok
// SIG undefined FUN_14020a92c(void)

undefined8 *
FUN_14020a92c(longlong param_1,undefined8 *param_2,char param_3,char param_4,undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != '\x01') {
    *param_2 = 0;
    goto LAB_14020a954;
  }
  if (param_4 == '\0') {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      piVar3 = (int *)(param_1 + 0x40);
LAB_14020a9a0:
      FUN_1402a453c(piVar3);
      iVar2 = *piVar3;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 == 0) {
      piVar3 = (int *)(param_1 + 0x4c);
      goto LAB_14020a9a0;
    }
  }
  lVar1 = DAT_14c9a3d60 + (longlong)iVar2 * 0x88;
  local_38 = 0;
  local_30 = 0;
  FUN_1456e5ea0(&local_38,param_5);
  FUN_140c67310(lVar1 + -0x18,param_2,&local_38);
  FUN_1449db362(&local_38);
LAB_14020a954:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020aa00 FUN_14020aa00 body=428 status=ok
// SIG undefined FUN_14020aa00(void)

longlong * FUN_14020aa00(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x30);
  if (plVar6 == (longlong *)0x0) {
LAB_14020aae0:
    *puVar5 = &PTR_LAB_14a1c8700;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9a0980;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14020aae0;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8700;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9a0980;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14020abac FUN_14020abac body=38 status=ok
// SIG undefined FUN_14020abac(void)

undefined8 FUN_14020abac(undefined8 param_1,int param_2)

{
  FUN_14020abd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14020abd2 FUN_14020abd2 body=469 status=ok
// SIG undefined FUN_14020abd2(void)

void FUN_14020abd2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  *param_1 = &PTR_LAB_14a915990;
  lVar7 = param_1[0x31];
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar7;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar9) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar9 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar9) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  if (param_1[0x30] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x30] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  lVar7 = 0x38;
  do {
    lVar8 = *(longlong *)((longlong)param_1 + lVar7 + 0x128);
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar8 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar8;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar9) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar9 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar9) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    lVar8 = lVar7 + -0x10;
    lVar7 = *(longlong *)((longlong)param_1 + lVar7 + 0x120);
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar7 = lVar8;
  } while (lVar8 != 0x18);
  if (param_1[0x27] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x27] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  return;
}



// FUNCTION 14020ada8 FUN_14020ada8 body=673 status=ok
// SIG undefined FUN_14020ada8(void)

void FUN_14020ada8(longlong param_1,undefined8 param_2,double *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  float local_120;
  double local_118;
  double local_110;
  double dStack_108;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e8 = 0.0;
  dStack_e0 = 0.0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = 0.0;
  iVar1 = *(int *)(param_1 + 0x4d90);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x4d88);
    fVar12 = 0.0;
    dVar4 = 0.0;
    lVar8 = 0;
    dVar5 = 0.0;
    dVar6 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    iVar9 = 0;
    fVar11 = 0.0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar8);
      local_fc = 0.0;
      local_128 = 0;
      local_120 = 0.0;
      local_118 = 1.0;
      local_110 = 0.0;
      dStack_108 = 0.0;
      if (lVar3 != 0) {
        cVar7 = FUN_14020b10a(lVar3,param_2,&local_128,&local_fc);
        if (cVar7 != '\0') {
          fVar14 = fVar14 + (float)local_128 * local_fc;
          fVar13 = fVar13 + local_128._4_4_ * local_fc;
          fVar12 = fVar12 + local_120 * local_fc;
          dVar10 = (double)local_fc;
          dVar6 = dVar6 + dVar10 * local_118;
          dVar5 = dVar5 + local_110 * dVar10;
          dVar4 = dVar4 + dStack_108 * dVar10;
          fVar11 = fVar11 + local_fc;
          iVar9 = iVar9 + 1;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
    local_f8 = CONCAT44(fVar13,fVar14);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,fVar12);
    local_e8 = dVar6;
    dStack_e0 = dVar5;
    local_d8 = dVar4;
    FUN_14020b04a(&local_f8,fVar11);
    if (iVar9 != 0) goto LAB_14020af8f;
  }
  local_e8 = 1.0;
  dStack_e0 = 0.0;
  local_d8 = 0.0;
LAB_14020af8f:
  param_3[2] = local_d8;
  *param_3 = local_e8;
  param_3[1] = dStack_e0;
  *param_4 = (undefined4)local_f8;
  *param_5 = local_f8._4_4_;
  *param_6 = (undefined4)uStack_f0;
  if ((local_d0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020b04a FUN_14020b04a body=191 status=ok
// SIG undefined FUN_14020b04a(void)

void FUN_14020b04a(float *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (0.0 < param_2) {
    *param_1 = *param_1 / param_2;
    param_1[1] = param_1[1] / param_2;
    param_1[2] = param_1[2] / param_2;
    dVar1 = 1.0 / (double)param_2;
    dVar2 = *(double *)(param_1 + 4) * dVar1;
    *(double *)(param_1 + 4) = dVar2;
    dVar3 = *(double *)(param_1 + 6) * dVar1;
    *(double *)(param_1 + 6) = dVar3;
    dVar1 = dVar1 * *(double *)(param_1 + 8);
    *(double *)(param_1 + 8) = dVar1;
    dVar4 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
    if (9.99999993922529e-09 < dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      *(double *)(param_1 + 4) = dVar2 * dVar4;
      *(double *)(param_1 + 6) = dVar3 * dVar4;
      *(double *)(param_1 + 8) = dVar1 * dVar4;
    }
  }
  return;
}



// FUNCTION 14020b10a FUN_14020b10a body=493 status=ok
// SIG undefined FUN_14020b10a(void)

void FUN_14020b10a(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined1 local_90 [16];
  double local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_64 = (*(byte *)(param_1 + 700) & 1) != 0;
  if ((bool)local_64) {
    local_68 = *(undefined4 *)(param_1 + 0x2b8);
    local_78 = *(undefined4 *)(param_1 + 0x2a8);
    uStack_74 = *(undefined4 *)(param_1 + 0x2ac);
    uStack_70 = *(undefined4 *)(param_1 + 0x2b0);
    uStack_6c = *(undefined4 *)(param_1 + 0x2b4);
    local_a8 = *(undefined8 *)(param_1 + 0x260);
    uStack_a0 = *(undefined8 *)(param_1 + 0x268);
    local_98 = *(double *)(param_1 + 0x270);
    local_90._4_4_ = DAT_14c8464e0._4_4_;
    local_90._0_4_ = (undefined4)DAT_14c8464e0;
    local_90._8_4_ = (undefined4)DAT_14c8464e8;
    local_90._12_4_ = DAT_14c8464e8._4_4_;
    local_80 = DAT_14c8464f0;
  }
  else {
    local_78 = *(undefined4 *)(param_1 + 0x2a8);
    uStack_74 = *(undefined4 *)(param_1 + 0x2ac);
    uStack_70 = *(undefined4 *)(param_1 + 0x2b0);
    uStack_6c = *(undefined4 *)(param_1 + 0x2b4);
    dVar2 = *(double *)(param_1 + 0x240);
    dVar3 = *(double *)(param_1 + 0x248);
    dVar4 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar5 = dVar2 * 0.0 - dVar3 * 1.0;
    dVar6 = dVar3 * 0.0 - dVar4 * 0.0;
    dVar7 = dVar4 * 1.0 - dVar2 * 0.0;
    dVar6 = dVar6 + dVar6;
    dVar7 = dVar7 + dVar7;
    dVar5 = dVar5 + dVar5;
    local_80 = dVar5 * dVar1 + 0.0 + (dVar7 * dVar2 - dVar6 * dVar3);
    dVar2 = (dVar4 * dVar6 - dVar2 * dVar5) + *(double *)(param_1 + 600) * dVar7 + 0.0;
    local_98 = DAT_14c8464f0;
    local_a8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_a0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_90._8_4_ = SUB84(dVar2,0);
    local_90._0_8_ = (dVar5 * dVar3 - dVar7 * dVar4) + dVar1 * dVar6 + 1.0;
    local_90._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_68 = 0;
  }
  FUN_14020b2f8();
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020b2f8 FUN_14020b2f8 body=462 status=ok
// SIG undefined FUN_14020b2f8(void)

undefined8 FUN_14020b2f8(double *param_1,double *param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
    dVar4 = param_1[2] - param_2[2];
    dVar1 = param_1[1] - param_2[1];
    dVar6 = *param_1 - *param_2;
    fVar3 = (float)SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar1 * dVar1);
    if (*(float *)(param_1 + 8) < fVar3) {
      *param_4 = 0.0;
      param_3[0] = 0.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      param_3[4] = 0.0;
      param_3[5] = 1.875;
      param_3[6] = 0.0;
      param_3[7] = 0.0;
      param_3[8] = 0.0;
      param_3[9] = 0.0;
      return 0;
    }
    dVar1 = param_2[2] - param_1[2];
    dVar2 = param_2[1] - param_1[1];
    dVar5 = *param_2 - *param_1;
    dVar6 = 1.0 / (double)*(float *)(param_1 + 8);
    dVar8 = dVar1 * dVar6;
    dVar4 = dVar2 * dVar6;
    dVar6 = dVar6 * dVar5;
    dVar6 = 1.0 - (dVar8 * dVar8 + dVar6 * dVar6 + dVar4 * dVar4);
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    fVar7 = (float)dVar6;
    dVar6 = 1.0 / (double)fVar3;
    *(double *)(param_3 + 4) = dVar6 * dVar5;
    *(double *)(param_3 + 6) = dVar2 * dVar6;
    *(double *)(param_3 + 8) = dVar1 * dVar6;
    *param_3 = *(float *)((longlong)param_1 + 0x34) * fVar7;
    param_3[1] = *(float *)(param_1 + 7) * fVar7;
    param_3[2] = fVar7 * *(float *)((longlong)param_1 + 0x3c);
    *param_4 = ((*(float *)(param_1 + 8) - fVar3) / *(float *)(param_1 + 8)) *
               *(float *)(param_1 + 6);
  }
  else {
    *param_4 = *(float *)(param_1 + 6);
    *(double *)(param_3 + 8) = param_1[5];
    dVar1 = param_1[4];
    *(double *)(param_3 + 4) = param_1[3];
    *(double *)(param_3 + 6) = dVar1;
    *param_3 = *(float *)((longlong)param_1 + 0x34);
    param_3[1] = *(float *)(param_1 + 7);
    param_3[2] = *(float *)((longlong)param_1 + 0x3c);
  }
  return 1;
}



// FUNCTION 14020b4c6 FUN_14020b4c6 body=63 status=ok
// SIG undefined FUN_14020b4c6(void)

int FUN_14020b4c6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  lVar4 = (longlong)iVar3;
  iVar1 = *(int *)(lVar2 + lVar4 * 8);
  if (iVar1 == *(int *)(lVar2 + 4 + lVar4 * 8)) {
    *(int *)(param_1 + 0x10) = iVar3;
    FUN_14020b572();
  }
  else {
    *(int *)(lVar2 + lVar4 * 8) = iVar1 + 1;
  }
  return iVar1;
}



// FUNCTION 14020b505 FUN_14020b505 body=108 status=ok
// SIG undefined FUN_14020b505(void)

void FUN_14020b505(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (plVar1[0x18] != 0) {
        FUN_1400020a8();
      }
      if ((0x50 < *(ushort *)((longlong)plVar1 + 0x62)) && (plVar1[2] != 0)) {
        FUN_1400020a8();
      }
      *(undefined2 *)((longlong)plVar1 + 0x62) = 0;
      plVar1[2] = 0;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14020b572 FUN_14020b572 body=59 status=ok
// SIG undefined FUN_14020b572(void)

void FUN_14020b572(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14020b724(param_1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_1400e056e(param_1,*(undefined4 *)(param_1 + 0x10),iVar1,8);
  return;
}



// FUNCTION 14020b5ae FUN_14020b5ae body=374 status=ok
// SIG undefined FUN_14020b5ae(void)

undefined8 * FUN_14020b5ae(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  param_1[2] = 0;
  param_1[3] = 0x200000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((longlong)param_1 + 0x72) = *(undefined2 *)((longlong)param_2 + 0x72);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  if (param_1 != param_2) {
    lVar8 = param_2[2];
    if (lVar8 == 0) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      lVar8 = param_2[2];
    }
    param_1[2] = lVar8;
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0x200000000;
  }
  puVar9 = param_2 + 4;
  if (*(ushort *)((longlong)param_2 + 0x72) < 0x51) {
    puVar10 = param_1 + 4;
    for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  else {
    param_1[4] = *puVar9;
    *puVar9 = 0;
  }
  *(undefined2 *)((longlong)param_2 + 0x72) = 0;
  param_1[0x1a] = 0;
  lVar8 = param_2[0x1a];
  if (lVar8 == 0) {
    memmove(param_1 + 0xf,param_2 + 0xf,0x54);
    lVar8 = param_2[0x1a];
  }
  param_1[0x1a] = lVar8;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_2[0x1b] = 0x700000000;
  uVar1 = param_2[0x1c];
  uVar2 = param_2[0x1d];
  uVar3 = param_2[0x1e];
  uVar4 = param_2[0x1f];
  uVar5 = param_2[0x20];
  uVar6 = param_2[0x21];
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x115);
  *(undefined8 *)((longlong)param_1 + 0x10d) = *(undefined8 *)((longlong)param_2 + 0x10d);
  *(undefined8 *)((longlong)param_1 + 0x115) = uVar7;
  param_1[0x20] = uVar5;
  param_1[0x21] = uVar6;
  param_1[0x1e] = uVar3;
  param_1[0x1f] = uVar4;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar2;
  return param_1;
}



// FUNCTION 14020b724 FUN_14020b724 body=326 status=ok
// SIG undefined FUN_14020b724(void)

ulonglong FUN_14020b724(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 < 2) {
    uVar3 = 1;
  }
  else {
    iVar5 = param_3 - param_2;
    if (((longlong)iVar5 & 0x1ffffffffffff800U) == 0) {
      if (iVar5 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar5 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar3 = (ulonglong)param_2;
    }
    else {
      uVar3 = (ulonglong)param_2 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar3 + 0xf;
          if (param_2 < 0xfff) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar6 = 0x32;
              if (0x32 < bVar2) {
                uVar6 = (ulonglong)bVar2;
              }
              uVar7 = 0x32 - (ulonglong)bVar2;
              do {
                uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14020b7d0;
                lVar1 = uVar6 + 1 + uVar7;
                uVar7 = uVar7 - 1;
              } while (lVar1 != 0x33);
            }
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
          }
        }
        else {
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
LAB_14020b7d0:
      uVar3 = uVar3 >> 3;
    }
  }
  return uVar3;
}



// FUNCTION 14020b86a FUN_14020b86a body=1287 status=ok
// SIG undefined FUN_14020b86a(void)

ulonglong FUN_14020b86a(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  
  if ((((*(char *)(param_1 + 0x118) == '\0') &&
       (*(int *)(param_1 + 0xe8) == *(int *)(param_2 + 0xe8))) &&
      (*(char *)(param_1 + 0x11a) == *(char *)(param_2 + 0x11a))) &&
     (*(short *)(param_1 + 0x70) == *(short *)(param_2 + 0x70))) {
    uVar2 = *(uint *)(param_1 + 0x18);
    if (uVar2 == *(uint *)(param_2 + 0x18)) {
      if (0 < (int)uVar2) {
        lVar23 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar23 = param_1;
        }
        lVar10 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar10 = param_2;
        }
        uVar16 = 0;
        do {
          if (*(longlong *)(lVar23 + uVar16 * 8) != *(longlong *)(lVar10 + uVar16 * 8)) {
            return 0;
          }
          uVar16 = uVar16 + 1;
        } while (uVar2 != uVar16);
      }
      plVar22 = (longlong *)(param_1 + 0x20);
      if (0x50 < *(ushort *)(param_1 + 0x72)) {
        plVar22 = (longlong *)*plVar22;
      }
      if (0 < (int)uVar2) {
        if (*(ushort *)(param_2 + 0x72) < 0x51) {
          lVar23 = param_2 + 0x20;
        }
        else {
          lVar23 = *(longlong *)(param_2 + 0x20);
        }
        lVar10 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar10 = param_1;
        }
        lVar11 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar11 = param_2;
        }
        uVar16 = 0;
        do {
          lVar20 = *(longlong *)(lVar10 + uVar16 * 8);
          lVar6 = *(longlong *)(lVar11 + uVar16 * 8);
          puVar1 = (ulonglong *)(lVar20 + 0x30);
          iVar15 = *(int *)(lVar20 + 0x38);
          lVar13 = (longlong)iVar15;
          uVar3 = *(uint *)(lVar20 + 8);
          if (lVar13 == 0) {
            iVar21 = *(int *)(lVar6 + 8);
            uVar4 = *(uint *)(lVar20 + 0x18);
          }
          else {
            iVar12 = *(int *)(lVar20 + 0x28);
            iVar17 = iVar12 + 0xe;
            if (-1 < iVar12 + 7) {
              iVar17 = iVar12 + 7;
            }
            iVar5 = *(int *)(lVar6 + 0x28);
            iVar8 = iVar5 + 0xe;
            if (-1 < iVar5 + 7) {
              iVar8 = iVar5 + 7;
            }
            uVar14 = *(ulonglong *)(lVar20 + 0x30);
            if ((uVar14 & 1) != 0) {
              uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)puVar1;
            }
            uVar4 = *(uint *)(lVar20 + 0x18);
            iVar21 = *(int *)(lVar6 + 8);
            lVar19 = 0;
            uVar9 = 0;
            do {
              uVar9 = uVar9 + *(ushort *)(uVar14 + 2 + lVar19);
              lVar19 = lVar19 + 0x18;
            } while (lVar13 * 0x18 != lVar19);
            uVar14 = *(ulonglong *)(lVar6 + 0x30);
            if ((uVar14 & 1) != 0) {
              uVar14 = ((longlong)uVar14 >> 0x18) + lVar6 + 0x30;
            }
            if ((longlong)*(int *)(lVar6 + 0x38) == 0) {
              uVar18 = 0;
            }
            else {
              lVar19 = 0;
              uVar18 = 0;
              do {
                uVar18 = uVar18 + *(ushort *)(uVar14 + 2 + lVar19);
                lVar19 = lVar19 + 0x18;
              } while ((longlong)*(int *)(lVar6 + 0x38) * 0x18 != lVar19);
            }
            if (uVar9 != uVar18) {
              return 0;
            }
            iVar12 = memcmp((void *)((ulonglong)((iVar17 >> 3) + (iVar12 + uVar4 + uVar3) * 8) +
                                    (longlong)plVar22),
                            (void *)((ulonglong)
                                     (uint)((iVar8 >> 3) +
                                           (*(int *)(lVar6 + 0x18) + iVar21 + iVar5) * 8) + lVar23),
                            (ulonglong)uVar9);
            if (iVar12 != 0) {
              return 0;
            }
          }
          if (0 < (int)uVar4) {
            uVar14 = 0;
            do {
              if (*(longlong *)((ulonglong)(uVar3 * 8) + (longlong)plVar22 + uVar14 * 8) !=
                  *(longlong *)((ulonglong)(uint)(iVar21 * 8) + lVar23 + uVar14 * 8)) {
                return 0;
              }
              uVar14 = uVar14 + 1;
            } while (uVar4 != uVar14);
          }
          iVar21 = iVar21 + *(int *)(lVar6 + 0x18);
          uVar9 = *(uint *)(lVar20 + 0x28);
          if (0 < (int)uVar9) {
            uVar14 = 0;
            do {
              if (*(longlong *)((ulonglong)((uVar4 + uVar3) * 8) + (longlong)plVar22 + uVar14 * 8)
                  != *(longlong *)((ulonglong)(uint)(iVar21 * 8) + lVar23 + uVar14 * 8)) {
                return 0;
              }
              uVar14 = uVar14 + 1;
            } while (uVar9 != uVar14);
          }
          if (0 < (int)uVar3) {
            uVar14 = 0;
            do {
              if (*(longlong *)((longlong)plVar22 + uVar14 * 8) !=
                  *(longlong *)(lVar23 + uVar14 * 8)) {
                return 0;
              }
              uVar14 = uVar14 + 1;
            } while (uVar3 != uVar14);
          }
          uVar14 = *puVar1;
          if ((uVar14 & 1) != 0) {
            uVar14 = (longlong)puVar1 + ((longlong)uVar14 >> 0x18);
          }
          iVar12 = 0;
          if (iVar15 != 0) {
            lVar20 = 0;
            iVar12 = 0;
            do {
              iVar12 = iVar12 + (uint)*(ushort *)(uVar14 + 2 + lVar20);
              lVar20 = lVar20 + 0x18;
            } while (lVar13 * 0x18 != lVar20);
          }
          iVar15 = uVar9 + 0xe;
          if (-1 < (int)(uVar9 + 7)) {
            iVar15 = uVar9 + 7;
          }
          uVar14 = *(ulonglong *)(lVar6 + 0x30);
          if ((uVar14 & 1) != 0) {
            uVar14 = ((longlong)uVar14 >> 0x18) + lVar6 + 0x30;
          }
          iVar17 = 0;
          if ((longlong)*(int *)(lVar6 + 0x38) != 0) {
            lVar20 = 0;
            iVar17 = 0;
            do {
              iVar17 = iVar17 + (uint)*(ushort *)(uVar14 + 2 + lVar20);
              lVar20 = lVar20 + 0x18;
            } while ((longlong)*(int *)(lVar6 + 0x38) * 0x18 != lVar20);
          }
          plVar22 = (longlong *)
                    ((longlong)plVar22 +
                    (ulonglong)
                    ((iVar15 >> 3) + (uVar9 + uVar4 + uVar3) * 8 + iVar12 + 7 & 0xfffffff8));
          iVar15 = *(int *)(lVar6 + 0x28);
          iVar12 = iVar15 + 0xe;
          if (-1 < iVar15 + 7) {
            iVar12 = iVar15 + 7;
          }
          lVar23 = lVar23 + (ulonglong)
                            ((iVar12 >> 3) + (iVar21 + iVar15) * 8 + iVar17 + 7U & 0xfffffff8);
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar2);
      }
      if (*(int *)(param_1 + 0xd8) == *(int *)(param_2 + 0xd8)) {
        lVar23 = param_2 + 0x78;
        if (*(longlong *)(param_2 + 0xd0) != 0) {
          lVar23 = *(longlong *)(param_2 + 0xd0);
        }
        lVar10 = param_1 + 0x78;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          lVar10 = *(longlong *)(param_1 + 0xd0);
        }
        cVar7 = FUN_14020bd71(lVar10,lVar23);
        if ((((cVar7 != '\0') && (*(char *)(param_1 + 0x119) == *(char *)(param_2 + 0x119))) &&
            ((*(longlong *)(param_1 + 0xe0) == *(longlong *)(param_2 + 0xe0) &&
             ((*(int *)(param_1 + 0xec) == *(int *)(param_2 + 0xec) &&
              (*(int *)(param_1 + 0xf0) == *(int *)(param_2 + 0xf0))))))) &&
           (*(int *)(param_1 + 0xf4) == *(int *)(param_2 + 0xf4))) {
          if (*(int *)(param_1 + 0xf0) == 0) {
            if (*(longlong *)(param_1 + 0xf8) == *(longlong *)(param_2 + 0xf8)) {
              return (ulonglong)
                     CONCAT31((int3)((uint)*(int *)(param_1 + 0x100) >> 8),
                              *(int *)(param_1 + 0x100) == *(int *)(param_2 + 0x100));
            }
          }
          else if ((*(int *)(param_1 + 0xf8) == *(int *)(param_2 + 0xf8)) &&
                  (*(int *)(param_1 + 0xfc) == *(int *)(param_2 + 0xfc))) {
            return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0xf8) >> 8),1);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14020bd71 FUN_14020bd71 body=53 status=ok
// SIG undefined FUN_14020bd71(void)

undefined8 FUN_14020bd71(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((((*(uint *)(param_2 + lVar1) ^ *(uint *)(param_1 + lVar1)) & 0x7fffffff) != 0) ||
         (*(longlong *)(param_1 + 4 + lVar1) != *(longlong *)(param_2 + 4 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 14020bda6 FUN_14020bda6 body=372 status=ok
// SIG undefined FUN_14020bda6(void)

void FUN_14020bda6(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 0x128;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14020be30;
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
LAB_14020be30:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x128)) {
    uVar7 = uVar5 / 0x128 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x128,8);
  return;
}



// FUNCTION 14020bf1c FUN_14020bf1c body=2209 status=ok
// SIG undefined FUN_14020bf1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14020bf1c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,longlong param_10,int param_11,ushort param_12)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  wchar_t *local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 **local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  longlong lStack_60;
  undefined *local_58;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_80 = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90e58) {
    FUN_144b3d300(&DAT_14ca90e58);
    if (DAT_14ca90e58 == -1) {
      uVar6 = FUN_144a8b47e();
      FUN_14600bb1a();
      local_b0 = &LAB_14712ac08;
      local_b8 = &LAB_14712ac0c;
      local_c0 = &LAB_147421f40;
      local_c8 = (undefined8 **)&LAB_147421f44;
      local_d0 = FUN_147421f5c;
      local_d8 = FUN_147421fb6;
      local_f0 = L"RasterizeToRectsVS";
      local_f8 = L"/Engine/Private/RenderGraphUtilities.usf";
      local_a8 = 0xe0;
      local_e0 = (char *)CONCAT44(local_e0._4_4_,2);
      uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
      local_a0 = uVar6;
      FUN_140db5666(&DAT_14ca90db0,0,&DAT_14ca90d48,L"FPixelShaderUtils::FRasterizeToRectsVS");
      _DAT_14ca90db0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f82b5);
      _Init_thread_footer(&DAT_14ca90e58);
    }
  }
  local_98 = param_2;
  FUN_1448e935e(param_2,&local_68,&DAT_14ca90db0,param_10 != 0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90e58) {
    FUN_144b3d300(&DAT_14ca90e58);
    if (DAT_14ca90e58 == -1) {
      uVar6 = FUN_144a8b47e();
      FUN_14600bb1a();
      local_b0 = &LAB_14712ac08;
      local_b8 = &LAB_14712ac0c;
      local_c0 = &LAB_147421f40;
      local_c8 = (undefined8 **)&LAB_147421f44;
      local_d0 = FUN_147421f5c;
      local_d8 = FUN_147421fb6;
      local_f0 = L"RasterizeToRectsVS";
      local_f8 = L"/Engine/Private/RenderGraphUtilities.usf";
      local_a8 = 0xe0;
      local_e0 = (char *)CONCAT44(local_e0._4_4_,2);
      uStack_e8 = uStack_e8 & 0xffffffff00000000;
      local_a0 = uVar6;
      FUN_140db5666(&DAT_14ca90db0,0,&DAT_14ca90d48,L"FPixelShaderUtils::FRasterizeToRectsVS");
      _DAT_14ca90db0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f82b5);
      _Init_thread_footer(&DAT_14ca90e58);
    }
  }
  local_90 = local_68;
  local_88 = lStack_60;
  iVar9 = (int)((ulonglong)param_6 >> 0x20);
  iVar3 = (int)param_6;
  *(float *)(param_5 + 2) = 1.0 / (float)iVar3;
  *(float *)((longlong)param_5 + 0x14) = 1.0 / (float)iVar9;
  *(float *)(param_5 + 3) = 1.0 / (float)(int)param_9;
  *(float *)((longlong)param_5 + 0x1c) = 1.0 / (float)(int)((ulonglong)param_9 >> 0x20);
  *(float *)(param_5 + 4) = 1.0 / (float)param_11;
  *param_5 = param_7;
  param_5[1] = param_10;
  *(undefined4 *)((longlong)param_5 + 0x24) = param_8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca06118) {
    FUN_144b3d300(&DAT_14ca06118);
    if (DAT_14ca06118 == -1) {
      FUN_1456e620e(&local_68);
      local_b0 = (undefined1 *)((ulonglong)local_b0 & 0xffffffffffffff00);
      local_c0 = (undefined1 *)((ulonglong)local_c0 & 0xffffffffffffff00);
      local_e0 = "Unknown";
      local_f0 = (wchar_t *)0x0;
      uStack_e8 = 0;
      local_f8 = L"FParameters";
      local_b8 = (undefined1 *)0x0;
      local_d0 = (code *)CONCAT44(local_d0._4_4_,0x50);
      local_d8 = (code *)CONCAT44(local_d8._4_4_,0x41);
      local_c8 = &local_68;
      FUN_140b49562(&DAT_14ca06098,0,1);
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd33f3);
      _Init_thread_footer(&DAT_14ca06118);
    }
  }
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca06098,param_5 + 6,&local_68);
  uVar8 = param_12 | 1;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca07a98) {
    FUN_144b3d300(&DAT_14ca07a98);
    if (DAT_14ca07a98 == -1) {
      FUN_1456e6490(&local_68);
      local_b0 = (undefined1 *)((ulonglong)local_b0 & 0xffffffffffffff00);
      local_c0 = (undefined1 *)((ulonglong)local_c0 & 0xffffffffffffff00);
      local_e0 = "Unknown";
      local_f0 = (wchar_t *)0x0;
      uStack_e8 = 0;
      local_f8 = L"FLumenCardCopyParameters";
      local_b8 = (undefined1 *)0x0;
      local_d0 = (code *)CONCAT44(local_d0._4_4_,0x180);
      local_d8 = (code *)CONCAT44(local_d8._4_4_,0x66);
      local_c8 = &local_68;
      FUN_140b49562(&DAT_14ca07a18,0,1);
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd5f72);
      _Init_thread_footer(&DAT_14ca07a98);
    }
  }
  bVar7 = (byte)param_12 >> 5 & 1;
  FUN_140069376(param_1);
  uVar6 = local_98;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  if ((param_12 & 4) == 0) {
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
       (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_12 & 2) != 0)))) {
      uVar8 = param_12 & 0xfff9 | 5;
    }
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar10 + 0x42;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x218);
      puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar10 + 0x42;
    }
    *puVar1 = (ulonglong)puVar5;
    local_68 = param_5;
    lStack_60 = DAT_14ca07a60;
    if (DAT_14ca07a60 != 0) {
      LOCK();
      *(int *)(DAT_14ca07a60 + 8) = *(int *)(DAT_14ca07a60 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14ca07a18;
    local_f8 = (wchar_t *)CONCAT71(local_f8._1_7_,2);
    FUN_140068f1a(puVar10,local_80,&local_68,uVar8);
    *puVar10 = &PTR_FUN_14a288a50;
    puVar10[0x37] = param_5;
    puVar10[0x38] = uVar6;
    puVar10[0x39] = local_90;
    puVar10[0x3a] = local_88;
    puVar10[0x3b] = CONCAT44(uStack_74,local_78);
    puVar10[0x3c] = CONCAT44(uStack_6c,uStack_70);
    *(int *)(puVar10 + 0x3d) = iVar3;
    *(int *)((longlong)puVar10 + 0x1ec) = iVar9;
    *(undefined8 *)((longlong)puVar10 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x204) = 0;
    puVar10[0x3e] = 0;
    puVar10[0x3f] = 0;
    *(byte *)((longlong)puVar10 + 0x20c) = bVar7;
    *(undefined1 *)((longlong)puVar10 + 0x20f) = local_49;
    *(undefined2 *)((longlong)puVar10 + 0x20d) = local_4b;
  }
  else {
    uVar4 = FUN_144a8b328(L"[Compiled Out]",uVar8);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar10 + 0x43;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x220);
      puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar10 + 0x43;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    local_68 = param_5;
    lStack_60 = DAT_14ca07a60;
    if (DAT_14ca07a60 != 0) {
      LOCK();
      *(int *)(DAT_14ca07a60 + 8) = *(int *)(DAT_14ca07a60 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14ca07a18;
    local_f8 = (wchar_t *)CONCAT71(local_f8._1_7_,2);
    FUN_140068f1a(puVar10,local_80,&local_68,uVar4);
    puVar10[0x37] = param_5;
    puVar10[0x38] = local_98;
    puVar10[0x39] = local_90;
    puVar10[0x3a] = local_88;
    puVar10[0x3b] = CONCAT44(uStack_74,local_78);
    puVar10[0x3c] = CONCAT44(uStack_6c,uStack_70);
    *(int *)(puVar10 + 0x3d) = iVar3;
    *(int *)((longlong)puVar10 + 0x1ec) = iVar9;
    *(undefined8 *)((longlong)puVar10 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x204) = 0;
    puVar10[0x3e] = 0;
    puVar10[0x3f] = 0;
    *(byte *)((longlong)puVar10 + 0x20c) = bVar7;
    *(undefined1 *)((longlong)puVar10 + 0x20f) = local_49;
    *(undefined2 *)((longlong)puVar10 + 0x20d) = local_4b;
    *puVar10 = &PTR_FUN_14a288a30;
    *(undefined4 *)(puVar10 + 0x42) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar10);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14020c7be FUN_14020c7be body=345 status=ok
// SIG undefined FUN_14020c7be(void)

void FUN_14020c7be(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0x40;
    if (0x40 < param_2) {
      uVar5 = (longlong)(int)param_2 * 0x38;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar1 = uVar5 + 0xf;
          if (uVar5 < 0x7ff1) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
          }
          else {
            if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
              bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar3) {
                uVar7 = (ulonglong)bVar3;
              }
              uVar9 = 0x32 - (ulonglong)bVar3;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14020c85b;
                lVar2 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
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
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
        }
      }
LAB_14020c85b:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar5 >> 3;
      iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
      iVar8 = 0x7fffffff;
      if ((int)param_2 <= iVar6) {
        iVar8 = iVar6;
      }
    }
  }
  if (iVar8 == *(int *)(param_1 + 0xe0c)) {
    return;
  }
  *(int *)(param_1 + 0xe0c) = iVar8;
  FUN_14020c918(param_1,*(undefined4 *)(param_1 + 0xe08));
  return;
}



// FUNCTION 14020c918 FUN_14020c918 body=140 status=ok
// SIG undefined FUN_14020c918(void)

void FUN_14020c918(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xe00);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xe00,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0xe00),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xe00,param_2,param_3,0x38);
  return;
}



// FUNCTION 14020c9a4 FUN_14020c9a4 body=81 status=ok
// SIG undefined FUN_14020c9a4(void)

undefined8 * FUN_14020c9a4(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f5fd00;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


