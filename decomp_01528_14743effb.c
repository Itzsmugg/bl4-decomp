// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14743effb FUN_14743effb body=131 status=ok
// SIG undefined FUN_14743effb(void)

uint FUN_14743effb(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = 0x10;
  uVar5 = 0;
  do {
    iVar1 = *(int *)(param_1 + -8 + lVar6);
    puVar4 = &DAT_149dfb77a;
    iVar3 = 0;
    if (iVar1 != 0) {
      puVar4 = *(undefined2 **)(param_1 + -0x10 + lVar6);
      iVar3 = iVar1 + -1;
    }
    uVar2 = FUN_144a49b4a(iVar3,puVar4);
    uVar5 = uVar5 ^ (uVar5 >> 2) + uVar5 * 0x40 + -0x61c88647 +
                    ((uVar2 >> 2) + 0x9e3779b9 + uVar2 * 0x40 + *(int *)(param_1 + lVar6) ^ uVar2);
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0xd0);
  return uVar5;
}



// FUNCTION 14743f07e FUN_14743f07e body=73 status=ok
// SIG undefined FUN_14743f07e(void)

longlong * FUN_14743f07e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 14743f0c8 FUN_14743f0c8 body=136 status=ok
// SIG undefined FUN_14743f0c8(void)

void FUN_14743f0c8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca9a5b0;
  if (DAT_14ca9a5e4 != 0) {
    *(int *)(DAT_14ca9a5b0 + (longlong)DAT_14ca9a5e0 * 0x30) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x30) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca9a5e4) {
    iVar4 = DAT_14ca9a5e0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x30) = iVar4;
  DAT_14ca9a5e4 = DAT_14ca9a5e4 + 1;
  puVar3 = &DAT_14ca9a5c0;
  if (DAT_14ca9a5d0 != (undefined4 *)0x0) {
    puVar3 = DAT_14ca9a5d0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca9a5e0 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14743f150 FUN_14743f150 body=232 status=ok
// SIG undefined FUN_14743f150(void)

undefined4 FUN_14743f150(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*param_1 + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar3 = *(ushort *)(*param_2 + lVar5);
        if (uVar6 != uVar3) break;
        if (uVar6 == 0) goto LAB_14743f1c1;
LAB_14743f188:
        lVar5 = lVar5 + 2;
      }
      if ((uVar3 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_14743f188;
      }
      if (uVar6 != uVar3) goto LAB_14743f1bc;
    }
LAB_14743f1c1:
    iVar1 = (int)param_1[3];
    if (iVar1 == (int)param_2[3]) {
      if (1 < iVar1) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(param_1[2] + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar3 = *(ushort *)(param_2[2] + lVar5);
          if (uVar6 != uVar3) break;
          if (uVar6 == 0) goto LAB_14743f22d;
LAB_14743f1f9:
          lVar5 = lVar5 + 2;
        }
        if ((uVar3 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar4 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_14743f1f9;
        }
        if (uVar6 != uVar3) goto LAB_14743f1bc;
      }
    }
    else if ((int)param_2[3] + iVar1 != 1) goto LAB_14743f1bc;
LAB_14743f22d:
    uVar2 = CONCAT31((int3)((uint)(int)param_1[4] >> 8),(int)param_1[4] == (int)param_2[4]);
  }
  else {
    if ((int)param_2[1] + iVar1 == 1) goto LAB_14743f1c1;
LAB_14743f1bc:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14743f238 FUN_14743f238 body=31 status=ok
// SIG undefined FUN_14743f238(void)

undefined8 FUN_14743f238(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743f26a FUN_14743f26a body=93 status=ok
// SIG undefined FUN_14743f26a(void)

void FUN_14743f26a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a395890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a395820;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14743f2c8 FUN_14743f2c8 body=93 status=ok
// SIG undefined FUN_14743f2c8(void)

void FUN_14743f2c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a395890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a395820;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14743f326 FUN_14743f326 body=126 status=ok
// SIG undefined FUN_14743f326(void)

void FUN_14743f326(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a395890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a395820;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014743f395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14743f3ae FUN_14743f3ae body=20 status=ok
// SIG undefined FUN_14743f3ae(void)

undefined8 FUN_14743f3ae(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14743f3c4 FUN_14743f3c4 body=326 status=ok
// SIG undefined FUN_14743f3c4(void)

void FUN_14743f3c4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14743f50c FUN_14743f50c body=164 status=ok
// SIG undefined FUN_14743f50c(void)

int FUN_14743f50c(longlong *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
        uStack_44 = param_3[1];
        uStack_40 = param_3[2];
        uStack_3c = param_3[3];
        cVar1 = FUN_14277ac86(lVar3 + (longlong)iVar4 * 0x20,&local_48);
        if (cVar1 != '\0') goto LAB_14743f533;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14743f533:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 14743f5b2 FUN_14743f5b2 body=203 status=ok
// SIG undefined FUN_14743f5b2(void)

int FUN_14743f5b2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14743f5fc:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14743f672;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14743f672;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14743f663;
    }
  }
  return -1;
LAB_14743f672:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14743f663:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14743f5fc;
}



// FUNCTION 14743f67e FUN_14743f67e body=110 status=ok
// SIG undefined FUN_14743f67e(void)

void FUN_14743f67e(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_1432357a6(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14743f830(param_1);
    return;
  }
  FUN_14743f6ec(param_1);
  FUN_1432357a6(param_1,param_2);
  return;
}



// FUNCTION 14743f6ec FUN_14743f6ec body=322 status=ok
// SIG undefined FUN_14743f6ec(void)

void FUN_14743f6ec(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14743f830 FUN_14743f830 body=476 status=ok
// SIG undefined FUN_14743f830(void)

void FUN_14743f830(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x48);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x48);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x44 + lVar7 * 0x48) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar7 * 0x48) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743fa0e FUN_14743fa0e body=323 status=ok
// SIG undefined FUN_14743fa0e(void)

undefined4 * FUN_14743fa0e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14743fb52(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar7 = puVar1[1];
  *local_40 = *puVar1;
  local_40[1] = uVar7;
  local_40[2] = puVar1[2];
  uVar7 = puVar1[4];
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x22);
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x26);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2a);
  uVar6 = *(undefined4 *)((longlong)puVar1 + 0x2e);
  local_40[3] = puVar1[3];
  local_40[4] = uVar7;
  *(undefined4 *)((longlong)local_40 + 0x22) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x26) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x2a) = uVar5;
  *(undefined4 *)((longlong)local_40 + 0x2e) = uVar6;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(local_40 + 7) = *puVar2;
  *(undefined4 *)((longlong)local_40 + 0x3c) = uVar3;
  *(undefined4 *)(local_40 + 8) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x44) = uVar5;
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = FUN_14743fc9e(local_40);
  cVar8 = FUN_14743fc40(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar8 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar10) {
      uVar11 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x4c) = uVar9;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
           *(undefined4 *)
            (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_14743fe84(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743fb52 FUN_14743fb52 body=238 status=ok
// SIG undefined FUN_14743fb52(void)

int * FUN_14743fb52(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406fba42(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 14743fc40 FUN_14743fc40 body=94 status=ok
// SIG undefined FUN_14743fc40(void)

undefined8 FUN_14743fc40(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_14743fd3e(), iVar1 != -1)) {
    memmove((void *)((longlong)iVar1 * 0x50 + *param_1),param_3,0x48);
    FUN_14743fdae(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 14743fc9e FUN_14743fc9e body=160 status=ok
// SIG undefined FUN_14743fc9e(void)

void FUN_14743fc9e(ulonglong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_144a78877(*(undefined4 *)((longlong)param_1 + 0x2c),(short)param_1[6]);
  uVar1 = FUN_144a78877((int)param_1[3],uVar1);
  uVar1 = FUN_144a78877((int)(param_1[2] >> 0x20) * 0x17 + (int)param_1[2],uVar1);
  uVar2 = ((uint)(param_1[1] >> 0x14) & 0xffff ^ (uint)(param_1[1] >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar1 = FUN_144a78877(uVar2 >> 0x10 ^ uVar2,uVar1);
  uVar2 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  FUN_144a78877(uVar2 >> 0x10 ^ uVar2,uVar1);
  return;
}



// FUNCTION 14743fd3e FUN_14743fd3e body=111 status=ok
// SIG undefined FUN_14743fd3e(void)

int FUN_14743fd3e(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_14743fe28(lVar1 + (longlong)iVar4 * 0x50,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14743fdae FUN_14743fdae body=122 status=ok
// SIG undefined FUN_14743fdae(void)

void FUN_14743fdae(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 14743fe28 FUN_14743fe28 body=92 status=ok
// SIG undefined FUN_14743fe28(void)

undefined4 FUN_14743fe28(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_1 == *param_2) &&
       ((int)param_2[5] == (int)param_1[5] &&
        *(undefined1 (*) [16])(param_2 + 3) == *(undefined1 (*) [16])(param_1 + 3))) &&
      (param_1[2] == param_2[2])) &&
     ((param_1[1] == param_2[1] &&
      (*(int *)((longlong)param_1 + 0x2c) == *(int *)((longlong)param_2 + 0x2c))))) {
    uVar1 = CONCAT31((int3)((uint)(int)param_1[6] >> 8),
                     (short)(int)param_2[6] == (short)(int)param_1[6]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14743fe84 FUN_14743fe84 body=445 status=ok
// SIG undefined FUN_14743fe84(void)

void FUN_14743fe84(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x50;
        iVar6 = FUN_14743fc9e(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x4c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147440042 FUN_147440042 body=306 status=ok
// SIG undefined FUN_147440042(void)

undefined4 * FUN_147440042(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147440176(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar6 = FUN_14744025c(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147440354(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147440176 FUN_147440176 body=229 status=ok
// SIG undefined FUN_147440176(void)

int * FUN_147440176(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14744025c FUN_14744025c body=134 status=ok
// SIG undefined FUN_14744025c(void)

undefined8 FUN_14744025c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1474402e2((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1474402e2 FUN_1474402e2 body=114 status=ok
// SIG undefined FUN_1474402e2(void)

void FUN_1474402e2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147440354 FUN_147440354 body=450 status=ok
// SIG undefined FUN_147440354(void)

void FUN_147440354(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147440518 FUN_147440518 body=306 status=ok
// SIG undefined FUN_147440518(void)

undefined4 * FUN_147440518(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147440176(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar6 = FUN_14744025c(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147440354(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744064c FUN_14744064c body=132 status=ok
// SIG undefined FUN_14744064c(void)

void FUN_14744064c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474406d2 FUN_1474406d2 body=48 status=ok
// SIG undefined FUN_1474406d2(void)

void FUN_1474406d2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147440702 FUN_147440702 body=48 status=ok
// SIG undefined FUN_147440702(void)

void FUN_147440702(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147440732 FUN_147440732 body=48 status=ok
// SIG undefined FUN_147440732(void)

void FUN_147440732(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147440762 FUN_147440762 body=43 status=ok
// SIG undefined FUN_147440762(void)

void FUN_147440762(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14744078e FUN_14744078e body=103 status=ok
// SIG undefined FUN_14744078e(void)

undefined8 FUN_14744078e(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar3;
}



// FUNCTION 1474407f5 FUN_1474407f5 body=14 status=ok
// SIG undefined FUN_1474407f5(void)

void FUN_1474407f5(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 147440804 FUN_147440804 body=147 status=ok
// SIG undefined FUN_147440804(void)

void FUN_147440804(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147440898 FUN_147440898 body=49 status=ok
// SIG undefined FUN_147440898(void)

undefined8 FUN_147440898(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x300,0x40);
  }
  return param_1;
}



// FUNCTION 1474408ca FUN_1474408ca body=32 status=ok
// SIG undefined FUN_1474408ca(void)

undefined8 FUN_1474408ca(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TMemoryHasherTemplate");
  return param_2;
}



// FUNCTION 1474408ee FUN_1474408ee body=154 status=ok
// SIG undefined FUN_1474408ee(void)

void FUN_1474408ee(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 7U & 0xfffffff8;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined8 *)(lVar2 + 8 + lVar4) = param_3;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x89;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined1 *)(lVar2 + 0x18 + lVar4) = 0x11;
  *(undefined1 *)(lVar2 + 0x19 + lVar4) = param_4;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 8;
  return;
}



// FUNCTION 1474409b8 FUN_1474409b8 body=179 status=ok
// SIG undefined FUN_1474409b8(void)

void FUN_1474409b8(longlong param_1,undefined8 param_2,wchar_t *param_3,int param_4)

{
  char cVar1;
  size_t sVar2;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_3;
  if (param_3 == (wchar_t *)0x0) {
    local_40 = 0;
  }
  else {
    sVar2 = wcslen(param_3);
    local_40 = (int)sVar2;
  }
  local_58 = (wchar_t *)(param_1 + 4);
  cVar1 = FUN_14743c4f0(param_2,&local_48,param_1,param_1 + 2);
  if ((param_4 == 1) && (cVar1 == '\0')) {
    local_58 = param_3;
    FUN_140033559(".\\Runtime/RenderCore/Private/ShaderParameters.cpp",0x1a,
                  L"Failure to bind non-optional %s %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
                  ,L"shader parameter");
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147440a6c FUN_147440a6c body=199 status=ok
// SIG undefined FUN_147440a6c(void)

void FUN_147440a6c(undefined2 *param_1,undefined8 param_2,wchar_t *param_3,int param_4)

{
  size_t sVar1;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  wchar_t *local_50;
  undefined4 local_48;
  undefined1 local_3a [2];
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_34;
  char local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_3;
  if (param_3 == (wchar_t *)0x0) {
    local_48 = 0;
  }
  else {
    sVar1 = wcslen(param_3);
    local_48 = (int)sVar1;
  }
  FUN_14743c486(param_2,local_3a);
  if (local_32 == '\x01') {
    *param_1 = local_38;
    *(undefined1 *)(param_1 + 1) = local_36;
    *(undefined1 *)((longlong)param_1 + 3) = local_34;
  }
  else if (param_4 == 1) {
    local_58 = param_3;
    FUN_140033559(".\\Runtime/RenderCore/Private/ShaderParameters.cpp",0x1a,
                  L"Failure to bind non-optional %s %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
                  ,L"shader resource parameter");
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147440b34 FUN_147440b34 body=97 status=ok
// SIG undefined FUN_147440b34(void)

void FUN_147440b34(undefined1 *param_1,undefined8 param_2,wchar_t *param_3)

{
  undefined1 uVar1;
  size_t sVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  if (param_3 == (wchar_t *)0x0) {
    local_20 = 0;
  }
  else {
    sVar2 = wcslen(param_3);
    local_20 = (int)sVar2;
  }
  uVar1 = FUN_14743c56c(param_2);
  *param_1 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147440b96 FUN_147440b96 body=187 status=ok
// SIG undefined FUN_147440b96(void)

void FUN_147440b96(undefined2 *param_1,undefined8 param_2,wchar_t *param_3,int param_4)

{
  size_t sVar1;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  wchar_t *local_50;
  undefined4 local_48;
  undefined2 local_3a [4];
  char local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_3;
  if (param_3 == (wchar_t *)0x0) {
    local_48 = 0;
  }
  else {
    sVar1 = wcslen(param_3);
    local_48 = (int)sVar1;
  }
  FUN_14743c486(param_2,local_3a);
  if (local_32 == '\x01') {
    *param_1 = local_3a[0];
  }
  else {
    *param_1 = 0xffff;
    if (param_4 == 1) {
      local_58 = param_3;
      FUN_140033559(".\\Runtime/RenderCore/Private/ShaderParameters.cpp",0x1a,
                    L"Failure to bind non-optional %s %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
                    ,L"shader resource parameter");
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147440c52 FUN_147440c52 body=899 status=ok
// SIG undefined FUN_147440c52(void)

void FUN_147440c52(ulonglong *param_1,longlong param_2,undefined4 param_3,longlong *param_4,
                  longlong param_5,char param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_158 [36];
  undefined4 local_134;
  longlong local_130;
  longlong local_128;
  int local_120;
  longlong local_118 [2];
  wchar_t *local_108;
  undefined4 local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined1 local_e4 [4];
  longlong local_e0;
  ulonglong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar11 = *(longlong *)(param_2 + 0xc0);
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_108 = L"_RootShaderParameters";
  local_100 = 0x15;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = param_4;
  local_68 = param_3;
  local_64 = FUN_14743c56c(param_4);
  if (local_64 != '\0') {
    FUN_140056680(&local_f8,L"_RootShaderParameters");
    plVar9 = local_f8;
    if ((int)plStack_f0 == 0) {
      plVar9 = (longlong *)&DAT_149dfb77a;
    }
    uVar7 = (ulonglong)((int)plStack_f0 - 1);
    if ((int)plStack_f0 == 0) {
      uVar7 = 0;
    }
    local_134 = param_3;
    local_130 = lVar11;
    uVar5 = FUN_144a49b4a(uVar7,plVar9);
    iVar6 = FUN_14743f5b2(param_4,uVar5,&local_f8);
    uVar7 = 0;
    if (iVar6 != -1) {
      uVar7 = (longlong)iVar6 * 0x20 + *param_4;
    }
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar1 = *(ushort *)(uVar7 + 0x10);
    uVar2 = *(ushort *)(uVar7 + 0x12);
    uVar3 = *(ushort *)(uVar7 + 0x14);
    iVar6 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
      FUN_147436cd0(param_1,iVar6);
    }
    uVar4 = *param_1;
    uVar8 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar8 = uVar4;
    }
    *(ulonglong *)(uVar8 + (longlong)iVar6 * 8) =
         (ulonglong)uVar2 << 0x10 | (ulonglong)uVar2 << 0x20 | (ulonglong)uVar1 |
         (ulonglong)uVar3 << 0x30;
    FUN_140056680(local_118,*(undefined8 *)(param_5 + 0x10));
    FUN_140056680(&local_128,L"_RootShaderParameters");
    local_f8 = &local_128;
    plStack_f0 = local_118;
    FUN_1411f1c38(&local_c8,local_e4,&local_f8,0);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    lVar11 = local_130;
    param_3 = local_134;
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(uVar7 + 0x17) = 1;
  }
  FUN_147440fd6(&local_e0,param_5,&DAT_149dfb77a,0);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_5 + 0x78);
  *(undefined2 *)((longlong)param_1 + 0x54) = 0xffff;
  local_f8 = (longlong *)0x0;
  plStack_f0 = (longlong *)0x0;
  FUN_147442a60(param_4,&local_f8);
  uVar7 = (ulonglong)plStack_f0 & 0xffffffff;
  if ((param_6 != '\0') && ((int)uStack_c0 - local_94 != (int)plStack_f0)) {
    FUN_140002266(local_118,
                  L"Shader %s, permutation %d has unbound parameters not represented in the parameter struct:"
                  ,*(undefined8 *)(lVar11 + 0x18),param_3);
    if ((longlong)(int)plStack_f0 != 0) {
      lVar11 = (longlong)(int)plStack_f0 << 4;
      plVar9 = local_f8;
      do {
        puVar10 = &DAT_149dfb77a;
        iVar6 = 0;
        if ((int)plVar9[1] != 0) {
          puVar10 = (undefined2 *)*plVar9;
          iVar6 = (int)plVar9[1] + -1;
        }
        uVar5 = FUN_144a49b4a(iVar6,puVar10);
        iVar6 = FUN_1457511aa(&local_c8,uVar5,plVar9);
        if (iVar6 == -1) {
          puVar10 = &DAT_149dfb77a;
          if ((int)plVar9[1] != 0) {
            puVar10 = (undefined2 *)*plVar9;
          }
          FUN_140002266(&local_128,L"\n  %s",puVar10);
          iVar6 = local_120 + -1;
          if (local_120 == 0) {
            iVar6 = 0;
          }
          FUN_1400020e8(local_118,local_128,iVar6);
          if (local_128 != 0) {
            FUN_1400020a8();
          }
        }
        plVar9 = plVar9 + 2;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
    uVar7 = (ulonglong)plStack_f0 & 0xffffffff;
  }
  FUN_1447a1747(local_f8,uVar7);
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_147441902(&local_e0);
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147440fd6 FUN_147440fd6 body=2346 status=ok
// SIG undefined FUN_147440fd6(void)

void FUN_147440fd6(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 ****ppppuVar13;
  ulonglong *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  char cVar19;
  undefined2 *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined1 auStack_178 [32];
  undefined8 ***local_158;
  undefined8 ***local_150;
  undefined8 ***local_148;
  undefined8 ***local_140;
  undefined8 ***local_138;
  uint local_130;
  byte local_11e;
  byte local_11d;
  uint local_11c;
  ulonglong local_118;
  longlong local_110;
  uint local_104;
  undefined8 local_100;
  longlong *local_f8;
  int local_f0;
  uint local_ec;
  undefined8 *local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  undefined8 ***local_c8;
  int local_c0;
  undefined8 ***local_b8;
  undefined8 ***pppuStack_b0;
  undefined2 *local_a0;
  int local_98;
  undefined8 ***local_90;
  int local_88;
  undefined8 ***local_80;
  undefined8 ***local_78;
  undefined1 local_70 [6];
  undefined4 local_6a;
  ushort local_66;
  char local_64;
  char local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_100 = param_3;
  local_f0 = param_4;
  if ((longlong)*(int *)(param_2 + 0x58) != 0) {
    puVar22 = *(undefined8 **)(param_2 + 0x50);
    puVar10 = puVar22 + (longlong)*(int *)(param_2 + 0x58) * 6;
    local_e8 = (undefined8 *)(param_1 + 0x68);
    plVar21 = (longlong *)(param_1 + 0x18);
    local_110 = param_1;
    local_f8 = plVar21;
    local_e0 = param_2;
    local_d8 = puVar10;
    do {
      bVar1 = *(byte *)(puVar22 + 3);
      FUN_140002266(&local_90,L"%s::%s",*(undefined8 *)(param_2 + 0x10),*puVar22);
      if (bVar1 < 0x18) {
        if ((0x18c00U >> (bVar1 & 0x1f) & 1) == 0) {
          if (bVar1 != 0x17) goto LAB_147441140;
          if (1 < *(int *)(param_1 + 0x70)) {
            local_158 = (undefined8 ***)&DAT_149dfb77a;
            if (local_88 != 0) {
              local_158 = local_90;
            }
            FUN_140033559(".\\Runtime/RenderCore/Private/ShaderParameterStruct.cpp",0x41,
                          L"Render target binding slots collision: %s & %s",*local_e8);
          }
          iVar6 = local_88 + -1;
          if (local_88 == 0) {
            iVar6 = 0;
          }
          FUN_1402980a2(local_e8,local_90,iVar6);
        }
      }
      else {
LAB_147441140:
        local_118 = (ulonglong)bVar1;
        FUN_140002266(&local_a0,L"%s%s",local_100,*puVar22);
        uVar16 = *(int *)((longlong)puVar22 + 0x14) + local_f0;
        cVar19 = (char)local_118;
        if (cVar19 == '\x15') {
          FUN_147440fd6(param_1,puVar22[5],local_100,uVar16 & 0xffff);
        }
        else {
          local_11c = *(uint *)((longlong)puVar22 + 0x24);
          if (cVar19 == '\x14' && local_11c != 0) {
            lVar7 = puVar22[5];
            iVar6 = *(int *)(lVar7 + 0x3c);
            uVar16 = uVar16 & 0xffff;
            uVar23 = 0;
            do {
              local_158 = (undefined8 ***)CONCAT44(local_158._4_4_,uVar23);
              FUN_140002266(&local_80,L"%s%s_%d_",local_100,*puVar22);
              ppppuVar13 = (undefined8 ****)&DAT_149dfb77a;
              if ((int)local_78 != 0) {
                ppppuVar13 = (undefined8 ****)local_80;
              }
              FUN_147440fd6(param_1,lVar7,ppppuVar13,uVar16);
              if ((undefined8 ****)local_80 != (undefined8 ****)0x0) {
                FUN_1400020a8();
              }
              uVar23 = uVar23 + 1;
              uVar16 = uVar16 + iVar6;
            } while (local_11c != uVar23);
          }
          else if (local_11c == 0 && cVar19 == '\x14') {
            FUN_140002266(&local_80,L"%s%s_",local_100,*puVar22);
            ppppuVar13 = (undefined8 ****)&DAT_149dfb77a;
            if ((int)local_78 != 0) {
              ppppuVar13 = (undefined8 ****)local_80;
            }
            FUN_147440fd6(param_1,puVar22[5],ppppuVar13,uVar16 & 0xffff);
            if ((undefined8 ****)local_80 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            local_11e = *(char *)(puVar22 + 3) - 2;
            local_104 = uVar16;
            if (((int)local_118 == 0x16) || ((int)local_118 == 0x13)) {
              FUN_14020fad6(&local_a0,*(undefined8 *)(puVar22[5] + 0x18));
            }
            else if ((local_11e < 3) && (*(char *)(param_1 + 0x7c) != '\0')) goto LAB_1474417f9;
            local_11d = (byte)((char)local_118 - 0x14U) < 0xf1 || local_11c == 0;
            local_ec = (int)local_118 << 0x18;
            local_d0 = (ulonglong)(local_104 & 0xffff) << 0x20;
            uVar23 = 1;
            uVar16 = local_104;
            do {
              local_b8 = (undefined8 ****)0x0;
              pppuStack_b0 = (undefined8 ****)0x0;
              if (local_11d == 0) {
                puVar20 = &DAT_149dfb77a;
                if (local_98 != 0) {
                  puVar20 = local_a0;
                }
                FUN_140002266(&local_80,L"%s_%d",puVar20,uVar23 - 1);
                if ((undefined8 ****)local_b8 != (undefined8 ****)0x0) {
                  FUN_1400020a8();
                }
                local_b8 = local_80;
                pppuStack_b0 = local_78;
                iVar6 = (int)local_78;
              }
              else {
                iVar6 = local_98 + -1;
                if (local_98 == 0) {
                  iVar6 = 0;
                }
                FUN_1402980a2(&local_b8,local_a0,iVar6);
                iVar6 = (int)pppuStack_b0;
              }
              ppppuVar13 = (undefined8 ****)local_b8;
              if (iVar6 == 0) {
                ppppuVar13 = (undefined8 ****)&DAT_149dfb77a;
              }
              iVar8 = iVar6 + -1;
              if (iVar6 == 0) {
                iVar8 = 0;
              }
              uVar5 = FUN_144a49b4a(iVar8,ppppuVar13);
              iVar6 = FUN_1457511aa(plVar21,uVar5,&local_b8);
              if (iVar6 != -1) {
                iVar6 = local_98 + -1;
                puVar20 = local_a0;
                if (local_98 == 0) {
                  iVar6 = 0;
                  puVar20 = &DAT_149dfb77a;
                }
                uVar5 = FUN_144a49b4a(iVar6,puVar20);
                iVar6 = FUN_1457511aa(plVar21,uVar5,&local_a0);
                if (iVar6 == -1) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = (longlong)iVar6 * 0x28 + *plVar21;
                }
                puVar10 = (undefined8 *)(lVar7 + 0x10);
                if (lVar7 == 0) {
                  puVar10 = (undefined8 *)0x0;
                }
                local_150 = (undefined8 ***)&DAT_149dfb77a;
                if (*(int *)(puVar10 + 1) != 0) {
                  local_150 = (undefined8 ***)*puVar10;
                }
                local_158 = (undefined8 ***)&DAT_149dfb77a;
                if ((int)pppuStack_b0 != 0) {
                  local_158 = local_b8;
                }
                ppppuVar13 = (undefined8 ****)&DAT_149dfb77a;
                if (local_88 != 0) {
                  ppppuVar13 = (undefined8 ****)local_90;
                }
                FUN_140033559(".\\Runtime/RenderCore/Private/ShaderParameterStruct.cpp",0xa1,
                              L"%s can\'t bind shader parameter %s, because it has already be bound by %s."
                              ,ppppuVar13);
              }
              local_c8 = local_b8;
              local_c0 = (int)pppuStack_b0 + -1;
              if ((int)pppuStack_b0 == 0) {
                local_c0 = 0;
              }
              FUN_14743c486(*(undefined8 *)(param_1 + 0x10),&local_6a,&local_c8);
              if (local_62 == '\x01') {
                local_78 = &local_90;
                local_80 = &local_b8;
                FUN_140ac5c08(plVar21,local_70,&local_80,0);
                uVar3 = local_6a;
                if (local_11e < 3) {
                  iVar6 = *(int *)((longlong)puVar22 + 0x1c) * *(int *)(puVar22 + 4);
                  uVar15 = (iVar6 * 4 + 0xfU & 0xfffffff0) * *(int *)((longlong)puVar22 + 0x24);
                  if (*(int *)((longlong)puVar22 + 0x24) == 0) {
                    uVar15 = iVar6 * 4;
                  }
                  uVar18 = (ulonglong)local_66;
                  if (uVar15 < local_66) {
                    local_138 = (undefined8 ***)&DAT_149dfb77a;
                    if (local_88 != 0) {
                      local_138 = local_90;
                    }
                    local_148 = (undefined8 ***)&DAT_149dfb77a;
                    if ((int)pppuStack_b0 != 0) {
                      local_148 = local_b8;
                    }
                    local_150 = *(undefined8 ****)(local_e0 + 0x10);
                    local_140 = (undefined8 ***)CONCAT44(local_140._4_4_,(uint)local_66);
                    local_158 = (undefined8 ***)
                                CONCAT44(local_158._4_4_,*(undefined4 *)(local_110 + 0x78));
                    local_130 = uVar15;
                    FUN_140033559(".\\Runtime/RenderCore/Private/ShaderParameterStruct.cpp",0xbb,
                                  L"The size required to bind shader %s\'s (Permutation Id %d) struct %s parameter %s is %i bytes, smaller than %s\'s %i bytes."
                                 );
                  }
                  puVar14 = *(ulonglong **)(local_110 + 8);
                  iVar6 = (int)puVar14[1];
                  *(uint *)(puVar14 + 1) = iVar6 + 1U;
                  if (*(uint *)((longlong)puVar14 + 0xc) < iVar6 + 1U) {
                    FUN_147436cd0(puVar14,iVar6);
                  }
                  uVar11 = *puVar14;
                  uVar12 = ((longlong)uVar11 >> 0x18) + (longlong)puVar14;
                  if ((uVar11 & 1) == 0) {
                    uVar12 = uVar11;
                  }
                  *(ulonglong *)(uVar12 + (longlong)iVar6 * 8) =
                       (ulonglong)uVar3 | (uVar18 << 0x30) + local_d0;
                  plVar21 = local_f8;
                  param_1 = local_110;
                }
                else {
                  iVar6 = (int)local_118;
                  if (iVar6 - 5U < 0xe) {
                    uVar4 = local_6a._2_2_;
                    if ((byte)(local_64 - 5U) < 3) {
                      lVar7 = *(longlong *)(param_1 + 8);
                      puVar14 = (ulonglong *)(lVar7 + 0x20);
                      iVar6 = *(int *)(lVar7 + 0x28);
                      lVar17 = (longlong)iVar6;
                      *(uint *)(lVar7 + 0x28) = iVar6 + 1U;
                      if (*(uint *)(lVar7 + 0x2c) < iVar6 + 1U) {
                        FUN_147435d26(puVar14,iVar6);
                      }
                      uVar18 = *puVar14;
                      uVar11 = ((longlong)uVar18 >> 0x18) + (longlong)puVar14;
                      if ((uVar18 & 1) == 0) {
                        uVar11 = uVar18;
                      }
                      *(short *)(uVar11 + lVar17 * 6) = (short)uVar16;
                      *(undefined2 *)(uVar11 + 2 + lVar17 * 6) = uVar4;
                      *(char *)(uVar11 + 4 + lVar17 * 6) = (char)local_118;
                      plVar21 = local_f8;
                    }
                    else {
                      if (local_66 != 1) {
                        local_140 = (undefined8 ***)&DAT_149dfb77a;
                        if (local_88 != 0) {
                          local_140 = local_90;
                        }
                        local_150 = (undefined8 ***)&DAT_149dfb77a;
                        if ((int)pppuStack_b0 != 0) {
                          local_150 = local_b8;
                        }
                        local_148 = (undefined8 ***)CONCAT44(local_148._4_4_,(uint)local_66);
                        local_158 = (undefined8 ***)
                                    CONCAT44(local_158._4_4_,*(undefined4 *)(param_1 + 0x78));
                        FUN_140033559(".\\Runtime/RenderCore/Private/ShaderParameterStruct.cpp",0xeb
                                      ,
                                      L"Error with shader %s\'s (Permutation Id %d) parameter %s is %i bytes, cpp name = %s.The shader compiler should give precisely which elements of an array did not get compiled out, for optimal automatic render graph pass dependency with ClearUnusedGraphResources()."
                                     );
                      }
                      lVar7 = *(longlong *)(param_1 + 8);
                      puVar14 = (ulonglong *)(lVar7 + 0x10);
                      iVar6 = *(int *)(lVar7 + 0x18);
                      *(uint *)(lVar7 + 0x18) = iVar6 + 1U;
                      if (*(uint *)(lVar7 + 0x1c) < iVar6 + 1U) {
                        FUN_147436484(puVar14,iVar6);
                      }
                      uVar18 = *puVar14;
                      uVar11 = ((longlong)uVar18 >> 0x18) + (longlong)puVar14;
                      if ((uVar18 & 1) == 0) {
                        uVar11 = uVar18;
                      }
                      *(uint *)(uVar11 + (longlong)iVar6 * 4) =
                           uVar16 & 0xffff | local_ec | (uVar3 >> 0x10 & 0xff) << 0x10;
                      plVar21 = local_f8;
                    }
                  }
                  else if ((iVar6 == 0x16) || (iVar6 == 0x13)) {
                    uVar15 = local_104 << 0x10;
                    lVar7 = *(longlong *)(param_1 + 8);
                    if ((char)local_118 == '\x16') {
                      puVar14 = (ulonglong *)(lVar7 + 0x40);
                      uVar18 = (ulonglong)*(int *)(lVar7 + 0x48);
                      uVar9 = *(int *)(lVar7 + 0x48) + 1;
                      *(uint *)(lVar7 + 0x48) = uVar9;
                      if (*(uint *)(lVar7 + 0x4c) < uVar9) {
LAB_1474418f2:
                        FUN_1474355da(puVar14,uVar18 & 0xffffffff);
                      }
                    }
                    else {
                      puVar14 = (ulonglong *)(lVar7 + 0x30);
                      uVar18 = (ulonglong)*(int *)(lVar7 + 0x38);
                      uVar9 = *(int *)(lVar7 + 0x38) + 1;
                      *(uint *)(lVar7 + 0x38) = uVar9;
                      if (*(uint *)(lVar7 + 0x3c) < uVar9) goto LAB_1474418f2;
                    }
                    uVar11 = *puVar14;
                    uVar12 = ((longlong)uVar11 >> 0x18) + (longlong)puVar14;
                    if ((uVar11 & 1) == 0) {
                      uVar12 = uVar11;
                    }
                    *(uint *)(uVar12 + uVar18 * 4) = uVar15 | uVar3 & 0xffff;
                    param_1 = local_110;
                  }
                }
              }
              if ((undefined8 ****)local_b8 != (undefined8 ****)0x0) {
                FUN_1400020a8();
              }
              bVar2 = local_11c <= uVar23;
              uVar16 = uVar16 + 8;
              uVar23 = uVar23 + 1;
            } while ((bVar2 | local_11d) != 1);
          }
        }
LAB_1474417f9:
        param_2 = local_e0;
        puVar10 = local_d8;
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
          param_2 = local_e0;
          puVar10 = local_d8;
        }
      }
      if ((undefined8 ****)local_90 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
      puVar22 = puVar22 + 6;
    } while (puVar22 != puVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147441902 FUN_147441902 body=60 status=ok
// SIG undefined FUN_147441902(void)

void FUN_147441902(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x18);
  return;
}



// FUNCTION 14744193e FUN_14744193e body=726 status=ok
// SIG undefined FUN_14744193e(void)

void FUN_14744193e(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_168 [44];
  undefined4 local_13c;
  longlong local_138;
  int local_130;
  undefined2 *local_128;
  int local_120;
  wchar_t *local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined2 **ppuStack_100;
  undefined1 local_f0 [6];
  undefined2 local_ea [4];
  char local_e2;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = *(longlong *)(param_2 + 0xc0);
  lVar1 = *(longlong *)(lVar6 + 0x88);
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_64 = 1;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = param_4;
  local_68 = param_3;
  FUN_147440fd6(&local_e0,lVar1,&DAT_149dfb77a,0);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar1 + 0x78);
  local_118 = L"_RootShaderParameters";
  local_110 = 0x15;
  FUN_14743c486(param_4,local_ea);
  if (local_e2 == '\x01') {
    local_13c = param_3;
    FUN_140056680(&local_128,L"_RootShaderParameters");
    FUN_140056680(&local_138,L"_RootShaderParameters");
    local_108 = &local_138;
    ppuStack_100 = &local_128;
    FUN_1411f1c38(&local_c8,local_f0,&local_108,0);
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if (local_128 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined2 *)(param_1 + 0x54) = local_ea[0];
    param_3 = local_13c;
  }
  local_108 = (longlong *)0x0;
  ppuStack_100 = (undefined2 **)0x0;
  FUN_147442a60(param_4,&local_108);
  iVar3 = (int)uStack_c0 - local_94;
  if ((int)uStack_c0 - local_94 != (int)ppuStack_100) {
    FUN_140002266(&local_128,
                  L"Shader %s, permutation %d has unbound parameters not represented in the parameter struct:"
                  ,*(undefined8 *)(lVar6 + 0x18),param_3);
    if ((longlong)(int)ppuStack_100 != 0) {
      lVar6 = (longlong)(int)ppuStack_100 << 4;
      plVar5 = local_108;
      do {
        puVar4 = &DAT_149dfb77a;
        iVar3 = 0;
        if ((int)plVar5[1] != 0) {
          puVar4 = (undefined2 *)*plVar5;
          iVar3 = (int)plVar5[1] + -1;
        }
        uVar2 = FUN_144a49b4a(iVar3,puVar4);
        iVar3 = FUN_1457511aa(&local_c8,uVar2,plVar5);
        if (iVar3 == -1) {
          puVar4 = &DAT_149dfb77a;
          if ((int)plVar5[1] != 0) {
            puVar4 = (undefined2 *)*plVar5;
          }
          FUN_140002266(&local_138,L"\n  %s",puVar4);
          iVar3 = local_130 + -1;
          if (local_130 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(&local_128,local_138,iVar3);
          if (local_138 != 0) {
            FUN_1400020a8();
          }
        }
        plVar5 = plVar5 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    puVar4 = local_128;
    if (local_120 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/RenderCore/Private/ShaderParameterStruct.cpp",0x18c,&DAT_149e0625e,
                  puVar4);
    if (local_128 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    iVar3 = (int)ppuStack_100;
  }
  FUN_1447a1747(local_108,iVar3);
  if (local_108 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_147441902(&local_e0);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147441c15 FUN_147441c15 body=217 status=ok
// SIG undefined FUN_147441c15(void)

void FUN_147441c15(undefined8 *param_1,longlong *param_2,ushort *param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  
  switch((char)param_3[2]) {
  case '\x05':
    uVar1 = *(undefined8 *)(*param_2 + (ulonglong)*param_3);
    uVar2 = param_3[1];
    break;
  case '\x06':
    uVar1 = *(undefined8 *)(*param_2 + (ulonglong)*param_3);
    uVar2 = param_3[1];
    goto LAB_147441c49;
  case '\a':
    uVar1 = *(undefined8 *)(*param_2 + (ulonglong)*param_3);
    uVar2 = param_3[1];
    goto LAB_147441c69;
  case '\b':
    uVar2 = param_3[1];
    *param_1 = *(undefined8 *)(*param_2 + (ulonglong)*param_3);
    *(ushort *)(param_1 + 1) = uVar2;
    *(undefined1 *)((longlong)param_1 + 10) = 3;
    return;
  case '\t':
    uVar2 = param_3[1];
    uVar1 = *(undefined8 *)(*(longlong *)(*param_2 + (ulonglong)*param_3) + 0x10);
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case '\f':
  case '\r':
  case '\x11':
    uVar2 = param_3[1];
    uVar1 = *(undefined8 *)(*(longlong *)(*param_2 + (ulonglong)*param_3) + 0x10);
LAB_147441c49:
    *param_1 = uVar1;
    *(ushort *)(param_1 + 1) = uVar2;
    *(undefined1 *)((longlong)param_1 + 10) = 1;
    return;
  case '\x0e':
  case '\x12':
    uVar2 = param_3[1];
    uVar1 = *(undefined8 *)(*(longlong *)(*param_2 + (ulonglong)*param_3) + 0x10);
LAB_147441c69:
    *param_1 = uVar1;
    *(ushort *)(param_1 + 1) = uVar2;
    *(undefined1 *)((longlong)param_1 + 10) = 2;
    return;
  }
  *param_1 = uVar1;
  *(ushort *)(param_1 + 1) = uVar2;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  return;
}



// FUNCTION 147441cee FUN_147441cee body=25 status=ok
// SIG undefined FUN_147441cee(void)

void FUN_147441cee(void)

{
  FUN_145a07be4();
  FUN_145c868b4(DAT_14ca85550);
  return;
}



// FUNCTION 147441d0c FUN_147441d0c body=49 status=ok
// SIG undefined FUN_147441d0c(void)

void FUN_147441d0c(void)

{
  char cVar1;
  
  cVar1 = FUN_1403963d0();
  if (cVar1 != '\0') {
    FUN_1432371a4(1);
  }
  cVar1 = FUN_140396325();
  if (cVar1 != '\0') {
    FUN_1432371a4(0);
    return;
  }
  return;
}



// FUNCTION 147441d3e FUN_147441d3e body=120 status=ok
// SIG undefined FUN_147441d3e(void)

void FUN_147441d3e(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_140411646(param_1,(ulonglong)uVar1);
  }
  memmove((void *)((longlong)*param_1 + 0x58),(void *)*param_1,(ulonglong)uVar1 * 0x58);
  param_1 = (undefined8 *)*param_1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1404114b2(param_1,param_2);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  return;
}



// FUNCTION 147441db6 FUN_147441db6 body=110 status=ok
// SIG undefined FUN_147441db6(void)

void FUN_147441db6(int *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1U;
  if ((uint)param_1[5] < iVar1 + 1U) {
    FUN_141790e16(param_1 + 2,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 2);
  lVar3 = (longlong)iVar1 * 0x208;
  FUN_14143db70(lVar2 + lVar3,param_2);
  *(undefined8 *)(lVar2 + 0x1f8 + lVar3) = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined1 *)(lVar2 + 0x200 + lVar3) = *(undefined1 *)(param_2 + 0x200);
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  return;
}



// FUNCTION 147441e24 FUN_147441e24 body=91 status=ok
// SIG undefined FUN_147441e24(void)

void FUN_147441e24(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140411646(param_1,iVar2);
  }
  FUN_1474444bc((longlong)iVar2 * 0x58 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147441e84 FUN_147441e84 body=118 status=ok
// SIG undefined FUN_147441e84(void)

void FUN_147441e84(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140411646(param_1,iVar1);
    }
    FUN_1474446ee((longlong)iVar1 * 0x58 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147444726(param_1,param_2,iVar1 - param_2);
    FUN_14179110e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147441efa FUN_147441efa body=155 status=ok
// SIG undefined FUN_147441efa(void)

bool FUN_147441efa(ushort param_1,ushort param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  bVar3 = true;
  if (param_1 != param_2) {
    uVar4 = (ulonglong)param_1;
    if (((*(byte *)(&DAT_14ca814c8 + uVar4 * 0xf) & 4) == 0) ||
       (uVar5 = (ulonglong)param_2, (*(byte *)(&DAT_14ca814c8 + uVar5 * 0xf) & 4) == 0)) {
      bVar3 = false;
    }
    else {
      lVar1 = *(longlong *)(&DAT_14ca814b0 + uVar5 * 0x3c);
      lVar2 = *(longlong *)(&DAT_14ca814b0 + uVar4 * 0x3c);
      bVar3 = ((lVar1 != DAT_14ca81490) != (lVar2 == DAT_14ca81490) &&
              (lVar1 != DAT_14ca838f8 && lVar2 != DAT_14ca838f8)) &&
              ((lVar1 != DAT_14ca80038) != (lVar2 == DAT_14ca80038) &&
              (int)(&DAT_14ca814b8)[uVar5 * 0xf] <= (int)(&DAT_14ca814b8)[uVar4 * 0xf]);
    }
  }
  return bVar3;
}



// FUNCTION 147441f96 FUN_147441f96 body=62 status=ok
// SIG undefined FUN_147441f96(void)

void * FUN_147441f96(void *param_1)

{
  memset(param_1,0,0x400);
  InitializeCriticalSection((LPCRITICAL_SECTION)((longlong)param_1 + 0x400));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)((longlong)param_1 + 0x400),4000);
  return param_1;
}



// FUNCTION 147441fd4 FUN_147441fd4 body=254 status=ok
// SIG undefined FUN_147441fd4(void)

void FUN_147441fd4(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_3 + 0xa0);
  if (uVar1 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
      }
    }
  }
  lVar4 = param_2[1];
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x400));
  uVar1 = *(uint *)(param_1 + 0x208 + (ulonglong)(uint)(iVar7 << 4));
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_1471499ca(param_2,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_2),
           *(void **)(param_1 + (ulonglong)(uint)(iVar7 << 4) + 0x200),(longlong)(int)uVar1 << 3);
  }
  lVar5 = (longlong)*(int *)(param_1 + 8 + (ulonglong)(uint)(iVar7 << 4));
  if (lVar5 != 0) {
    lVar3 = *(longlong *)(param_1 + (ulonglong)(uint)(iVar7 << 4));
    lVar6 = 0;
    do {
      *(longlong *)(*param_2 + (longlong)(*(int *)(lVar3 + lVar6) + (int)lVar4) * 8) = param_3;
      lVar6 = lVar6 + 4;
    } while (lVar5 * 4 != lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001474420a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x400));
  return;
}



// FUNCTION 1474420d2 FUN_1474420d2 body=149 status=ok
// SIG undefined FUN_1474420d2(void)

int FUN_1474420d2(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x54) * 0x10 + *(int *)(param_1 + 0x34) * 0x14 + 0x58;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x10 + lVar3;
    do {
      FUN_147442e72(local_40,lVar3,lVar3 + 8);
      iVar1 = FUN_1467fdf84(local_40);
      iVar2 = iVar2 + iVar1;
      FUN_1458cf622(local_40);
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147442168 FUN_147442168 body=249 status=ok
// SIG undefined FUN_147442168(void)

void FUN_147442168(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = param_2[2];
  FUN_144aa0c38(lVar6,param_1 + 0x10);
  FUN_1401d5472(lVar6,param_1 + 0x28);
  cVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((*(byte *)(lVar6 + 0x28) & 1) != 0) {
    FUN_147442276(param_1 + 0x48,*(undefined4 *)(param_1 + 0x30),1);
  }
  pcVar1 = (code *)param_2[6];
  if (pcVar1 != (code *)0x0) {
    local_2c = *(undefined4 *)(param_1 + 0x50);
    plVar4 = param_2 + 10;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[8];
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_2c);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,*(longlong *)(param_1 + 0x48) + lVar6,uVar5 & 0xffffffff);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x50));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147442276 FUN_147442276 body=134 status=ok
// SIG undefined FUN_147442276(void)

void FUN_147442276(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147444b56(param_1,iVar1);
    }
    FUN_147444e13((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_147444e26(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_147444e80(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1474422fe FUN_1474422fe body=177 status=ok
// SIG undefined FUN_1474422fe(void)

int FUN_1474422fe(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  uVar1 = *(uint *)(param_2 + 0xa0);
  if (uVar1 == 0) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x400));
  iVar2 = *(int *)(param_1 + 8 + (ulonglong)(uint)(iVar5 << 4));
  if ((longlong)iVar2 == 0) {
    lVar3 = param_1 + (ulonglong)(uint)(iVar5 << 4);
    plVar6 = (longlong *)(lVar3 + 0x200);
    iVar4 = *(int *)(lVar3 + 0x208);
    *(uint *)(lVar3 + 0x208) = iVar4 + 1U;
    if (*(uint *)(lVar3 + 0x20c) < iVar4 + 1U) {
      FUN_1471499ca(plVar6,iVar4);
    }
  }
  else {
    plVar6 = (longlong *)((ulonglong)(uint)(iVar5 << 4) + param_1);
    iVar4 = *(int *)(*plVar6 + -4 + (longlong)iVar2 * 4);
    *(int *)(plVar6 + 1) = iVar2 + -1;
    plVar6 = (longlong *)(param_1 + (ulonglong)(uint)(iVar5 << 4) + 0x200);
  }
  *(longlong *)(*plVar6 + (longlong)iVar4 * 8) = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x400));
  return iVar4;
}



// FUNCTION 1474423d4 FUN_1474423d4 body=50 status=ok
// SIG undefined FUN_1474423d4(void)

int FUN_1474423d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0x70;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    iVar1 = FUN_1474420d2();
    iVar1 = iVar1 + 0x70;
  }
  return iVar1 + *(int *)(param_1 + 0x58) * 8 + *(int *)(param_1 + 0x4c) * 4;
}



// FUNCTION 147442406 FUN_147442406 body=42 status=ok
// SIG undefined FUN_147442406(void)

void FUN_147442406(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147442438 FUN_147442438 body=96 status=ok
// SIG undefined FUN_147442438(void)

undefined8 FUN_147442438(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145cdfd0a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa0b68,1);
  return uVar3;
}



// FUNCTION 147442498 FUN_147442498 body=52 status=ok
// SIG undefined FUN_147442498(void)

void FUN_147442498(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1474424cc FUN_1474424cc body=42 status=ok
// SIG undefined FUN_1474424cc(void)

void FUN_1474424cc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1474424fe FUN_1474424fe body=96 status=ok
// SIG undefined FUN_1474424fe(void)

undefined8 FUN_1474424fe(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb8d9c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa0bf0,1);
  return uVar3;
}



// FUNCTION 14744255e FUN_14744255e body=52 status=ok
// SIG undefined FUN_14744255e(void)

void FUN_14744255e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147442592 FUN_147442592 body=42 status=ok
// SIG undefined FUN_147442592(void)

void FUN_147442592(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1474425c4 FUN_1474425c4 body=96 status=ok
// SIG undefined FUN_1474425c4(void)

undefined8 FUN_1474425c4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb7096();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa0c78,1);
  return uVar3;
}



// FUNCTION 147442624 FUN_147442624 body=52 status=ok
// SIG undefined FUN_147442624(void)

void FUN_147442624(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147442658 FUN_147442658 body=42 status=ok
// SIG undefined FUN_147442658(void)

void FUN_147442658(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147442686 FUN_147442686 body=96 status=ok
// SIG undefined FUN_147442686(void)

undefined8 FUN_147442686(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145d122e4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa0d00,1);
  return uVar3;
}



// FUNCTION 1474426e6 FUN_1474426e6 body=52 status=ok
// SIG undefined FUN_1474426e6(void)

void FUN_1474426e6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14744271a FUN_14744271a body=42 status=ok
// SIG undefined FUN_14744271a(void)

void FUN_14744271a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147442748 FUN_147442748 body=96 status=ok
// SIG undefined FUN_147442748(void)

undefined8 FUN_147442748(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a2316();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa0d88,1);
  return uVar3;
}



// FUNCTION 1474427a8 FUN_1474427a8 body=52 status=ok
// SIG undefined FUN_1474427a8(void)

void FUN_1474427a8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1474427dc FUN_1474427dc body=42 status=ok
// SIG undefined FUN_1474427dc(void)

void FUN_1474427dc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14744280a FUN_14744280a body=96 status=ok
// SIG undefined FUN_14744280a(void)

undefined8 FUN_14744280a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415ce670();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa0e10,1);
  return uVar3;
}



// FUNCTION 14744286a FUN_14744286a body=52 status=ok
// SIG undefined FUN_14744286a(void)

void FUN_14744286a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14744289e thunk_FUN_14323c24f body=5 status=ok
// SIG undefined thunk_FUN_14323c24f(void)

void thunk_FUN_14323c24f(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  int *piStack_78;
  undefined1 uStack_65;
  int iStack_64;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = (**(code **)(*param_2 + 8))();
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar8 + 0xc;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x70);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar8 + 0xc;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar8 = &PTR_FUN_14a399d78;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar8;
  *(undefined4 *)(puVar8 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar8 + 0x14) = param_3[1];
  *(undefined4 *)((longlong)puVar8 + 0x1c) = param_3[2];
  if (*(char *)(lVar5 + 0x18) == '\0') {
    puVar8[0xb] = param_2;
    uVar2 = DAT_14ca84e40;
    if (0xfffe < (int)DAT_14ca84e40) {
      uVar2 = 0xffff;
    }
    *(uint *)(puVar8 + 4) =
         (uVar2 & 0xfffe) - ((uVar2 & 0xfffe) + ((uVar2 & 0xffff) / 0x2e) * -0x2e & 0xffff);
    iVar3 = 4;
  }
  else {
    if (*(char *)(lVar5 + 0x18) == '\x01') {
      if ((*(uint *)(lVar5 + 0x68) & 0x10) != 0) {
        puVar8[10] = param_2;
        uVar9 = 4;
        iVar7 = 2;
        iVar3 = 2;
        goto LAB_14323c39c;
      }
      if ((*(uint *)(lVar5 + 0x68) >> 0x10 & 1) != 0) {
        uVar2 = *(uint *)(param_2[7] + 0x60);
        uVar4 = uVar2;
        if ((int)uVar2 < 0) {
          uVar4 = uVar2 + 3;
        }
        iVar7 = 0x1f;
        if ((int)uVar4 >> 2 != 0) {
          for (; (uint)((int)uVar4 >> 2) >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar3 = 0;
        if (6 < uVar2 + 3) {
          iVar3 = iVar7;
        }
        uVar9 = 1;
        switch(iVar3) {
        case 0:
          puVar8[9] = param_2;
          iVar7 = 0;
          break;
        case 1:
          puVar8[8] = param_2;
          iVar7 = 1;
          break;
        case 2:
          puVar8[7] = param_2;
          iVar7 = 2;
          break;
        case 3:
          puVar8[6] = param_2;
          iVar7 = 3;
        }
        iVar3 = 1;
        goto LAB_14323c39c;
      }
    }
    puVar8[5] = param_2;
    iVar3 = 0;
  }
  uVar9 = 1;
  iVar7 = 2;
LAB_14323c39c:
  uVar1 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_145d121c0();
  FUN_1448e935e(uVar1,auStack_58,&DAT_14caa04c0,iVar7 * 5 + iVar3);
  FUN_145d121c0();
  iVar3 = (int)((uint)param_3[1] / uVar9);
  iVar7 = iVar3 + 0x3f;
  iStack_64 = iVar3 + 0x7e;
  if (-1 < iVar7) {
    iStack_64 = iVar7;
  }
  iStack_64 = iStack_64 >> 6;
  uStack_60 = &DAT_100000001;
  iVar3 = 1;
  if (DAT_14ca84f24 < iStack_64) {
    iVar3 = iStack_64 + 0xfe;
    if (-1 < iStack_64 + 0x7f) {
      iVar3 = iStack_64 + 0x7f;
    }
    iVar3 = iVar3 >> 7;
    uStack_60 = (undefined1 *)CONCAT44(1,iVar3);
    iStack_64 = 0x80;
  }
  if (DAT_14ca84f28 < iVar3) {
    iVar7 = iVar3 + 0xfe;
    if (-1 < iVar3 + 0x7f) {
      iVar7 = iVar3 + 0x7f;
    }
    uStack_60 = (undefined1 *)CONCAT44(iVar7 >> 7,0x80);
  }
  piStack_78 = &iStack_64;
  FUN_1474428a3(param_1,&uStack_65,auStack_58,puVar8 + 2);
  if ((uStack_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474428a3 FUN_1474428a3 body=177 status=ok
// SIG undefined FUN_1474428a3(void)

void FUN_1474428a3(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145d122e4();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14caa0d00,param_4);
  local_78 = &DAT_14caa0d00;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14744511e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147442956 FUN_147442956 body=42 status=ok
// SIG undefined FUN_147442956(void)

void FUN_147442956(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1474429b0 FUN_1474429b0 body=39 status=ok
// SIG undefined FUN_1474429b0(void)

void FUN_1474429b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147443b72(uVar1,param_1);
  return;
}



// FUNCTION 1474429d8 FUN_1474429d8 body=59 status=ok
// SIG undefined FUN_1474429d8(void)

longlong FUN_1474429d8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined2 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147442a20 FUN_147442a20 body=21 status=ok
// SIG undefined FUN_147442a20(void)

undefined * FUN_147442a20(void)

{
  FUN_1412f7d22();
  return &DAT_14caa08f8;
}



// FUNCTION 147442a3a FUN_147442a3a body=38 status=ok
// SIG undefined FUN_147442a3a(void)

undefined8 FUN_147442a3a(undefined8 param_1,int param_2)

{
  FUN_14112e15a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147442a60 FUN_147442a60 body=373 status=ok
// SIG undefined FUN_147442a60(void)

void FUN_147442a60(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1408be27e(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      puVar5 = (undefined8 *)((longlong)iStack_64 * 0x20 + *local_80);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar4 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      *(undefined8 *)(lVar3 + lVar4) = 0;
      iVar2 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(lVar3 + 8 + lVar4) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147442bd6 FUN_147442bd6 body=132 status=ok
// SIG undefined FUN_147442bd6(void)

void FUN_147442bd6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147442c62 FUN_147442c62 body=52 status=ok
// SIG undefined FUN_147442c62(void)

void FUN_147442c62(longlong *param_1)

{
  FUN_147442c96();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147442c96 FUN_147442c96 body=319 status=ok
// SIG undefined FUN_147442c96(void)

void FUN_147442c96(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x80 + (longlong)iStack_4c * 0x110) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e3154e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147442dd6 FUN_147442dd6 body=107 status=ok
// SIG undefined FUN_147442dd6(void)

void FUN_147442dd6(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)param_1[1];
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x208 + *param_1),
            (void *)((longlong)(iVar1 - iVar3) * 0x208 + *param_1),(longlong)iVar3 * 0x208);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 147442e42 FUN_147442e42 body=48 status=ok
// SIG undefined FUN_147442e42(void)

void FUN_147442e42(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x208,8);
  }
  return;
}



// FUNCTION 147442e72 FUN_147442e72 body=141 status=ok
// SIG undefined FUN_147442e72(void)

longlong FUN_147442e72(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x100000000;
  FUN_1467aad6e(param_1,2);
  FUN_1467abb70(param_1,param_2);
  FUN_1467abb70(param_1,param_3);
  local_28 = &LAB_1467aad66;
  FUN_1467aac4a(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147442f00 FUN_147442f00 body=138 status=ok
// SIG undefined FUN_147442f00(void)

code * FUN_147442f00(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstByteAddressBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147442f8a;
}



// FUNCTION 147442f8a FUN_147442f8a body=138 status=ok
// SIG undefined FUN_147442f8a(void)

code * FUN_147442f8a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstStructuredBuffer4x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443014;
}



// FUNCTION 147443014 FUN_147443014 body=138 status=ok
// SIG undefined FUN_147443014(void)

code * FUN_147443014(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146320ee2;
}



// FUNCTION 14744309e FUN_14744309e body=138 status=ok
// SIG undefined FUN_14744309e(void)

code * FUN_14744309e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443128;
}



// FUNCTION 147443128 FUN_147443128 body=138 status=ok
// SIG undefined FUN_147443128(void)

code * FUN_147443128(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ce0214;
}



// FUNCTION 1474431b2 FUN_1474431b2 body=138 status=ok
// SIG undefined FUN_1474431b2(void)

code * FUN_1474431b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcByteAddressBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14744323c;
}



// FUNCTION 14744323c FUN_14744323c body=138 status=ok
// SIG undefined FUN_14744323c(void)

code * FUN_14744323c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcStructuredBuffer4x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb9014;
}



// FUNCTION 1474432c6 FUN_1474432c6 body=138 status=ok
// SIG undefined FUN_1474432c6(void)

code * FUN_1474432c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterByteAddressBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443350;
}



// FUNCTION 147443350 FUN_147443350 body=138 status=ok
// SIG undefined FUN_147443350(void)

code * FUN_147443350(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UploadStructuredBuffer4x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb730c;
}



// FUNCTION 1474433da FUN_1474433da body=138 status=ok
// SIG undefined FUN_1474433da(void)

code * FUN_1474433da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstByteAddressBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443464;
}



// FUNCTION 147443464 FUN_147443464 body=138 status=ok
// SIG undefined FUN_147443464(void)

code * FUN_147443464(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstStructuredBuffer1x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474434ee;
}



// FUNCTION 1474434ee FUN_1474434ee body=138 status=ok
// SIG undefined FUN_1474434ee(void)

code * FUN_1474434ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstStructuredBuffer2x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14632118e;
}



// FUNCTION 147443578 FUN_147443578 body=138 status=ok
// SIG undefined FUN_147443578(void)

code * FUN_147443578(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstStructuredBuffer8x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FUint8>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443602;
}



// FUNCTION 147443602 FUN_147443602 body=138 status=ok
// SIG undefined FUN_147443602(void)

code * FUN_147443602(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14744368c;
}



// FUNCTION 14744368c FUN_14744368c body=138 status=ok
// SIG undefined FUN_14744368c(void)

code * FUN_14744368c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Float4sPerLine";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d12874;
}



// FUNCTION 147443716 FUN_147443716 body=138 status=ok
// SIG undefined FUN_147443716(void)

code * FUN_147443716(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d127ea;
}



// FUNCTION 1474437a4 FUN_1474437a4 body=138 status=ok
// SIG undefined FUN_1474437a4(void)

code * FUN_1474437a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcByteAddressBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000010a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f77b04;
}



// FUNCTION 14744382e FUN_14744382e body=138 status=ok
// SIG undefined FUN_14744382e(void)

code * FUN_14744382e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcStructuredBuffer2x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000108;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14632129e;
}



// FUNCTION 1474438b8 FUN_1474438b8 body=138 status=ok
// SIG undefined FUN_1474438b8(void)

code * FUN_1474438b8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcStructuredBuffer8x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FUint8>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000106;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f77b8e;
}



// FUNCTION 147443946 FUN_147443946 body=138 status=ok
// SIG undefined FUN_147443946(void)

code * FUN_147443946(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterByteAddressBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146163bea;
}



// FUNCTION 1474439d0 FUN_1474439d0 body=138 status=ok
// SIG undefined FUN_1474439d0(void)

code * FUN_1474439d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UploadStructuredBuffer2x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000011b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463213ae;
}



// FUNCTION 147443a5a FUN_147443a5a body=138 status=ok
// SIG undefined FUN_147443a5a(void)

code * FUN_147443a5a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UploadByteAddressBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000118;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443ae4;
}



// FUNCTION 147443ae4 FUN_147443ae4 body=138 status=ok
// SIG undefined FUN_147443ae4(void)

code * FUN_147443ae4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumScatters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000117;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146163cfe;
}



// FUNCTION 147443b72 FUN_147443b72 body=181 status=ok
// SIG undefined FUN_147443b72(void)

longlong FUN_147443b72(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"NumUpdates",1);
  FUN_147440a6c(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"DescriptorIndices",1);
  FUN_147440a6c(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"DescriptorEntries",1);
  FUN_147440a6c(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"OutputData",1);
  return param_1;
}



// FUNCTION 147443c27 FUN_147443c27 body=43 status=ok
// SIG undefined FUN_147443c27(void)

void FUN_147443c27(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 147443c52 FUN_147443c52 body=47 status=ok
// SIG undefined FUN_147443c52(void)

void FUN_147443c52(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14152e1c8(param_1 + 8);
    FUN_14152e1c8(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 147443c82 FUN_147443c82 body=272 status=ok
// SIG undefined FUN_147443c82(void)

void FUN_147443c82(undefined8 param_1,ulonglong *param_2,ulonglong *param_3,undefined8 *param_4,
                  undefined2 *param_5)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar1 = (longlong)(int)param_3[1] + 1;
  puVar6 = (undefined8 *)*param_2;
  if ((longlong)(int)param_3[1] == 0) {
    puVar6 = (undefined8 *)((longlong)puVar6 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar6 + 2;
    puVar4 = puVar6;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x18);
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar6 + 2;
      puVar4 = puVar6;
    }
  }
  else {
    puVar8 = puVar6 + 2;
    if ((undefined8 *)param_2[1] < puVar8) {
      puVar4 = (undefined8 *)((longlong)puVar6 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar4 + lVar1 * 2;
      if ((undefined8 *)param_2[1] < puVar6) {
        FUN_140023dd8(param_2,(int)lVar1 * 0x10 | 8);
        puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar6 = puVar4 + lVar1 * 2;
      }
      *param_2 = (ulonglong)puVar6;
      puVar6 = puVar4;
      if (0 < (int)param_3[1]) {
        lVar5 = 0;
        lVar7 = 0;
        do {
          uVar3 = ((undefined8 *)(*param_3 + lVar5))[1];
          *(undefined8 *)((longlong)puVar4 + lVar5) = *(undefined8 *)(*param_3 + lVar5);
          ((undefined8 *)((longlong)puVar4 + lVar5))[1] = uVar3;
          lVar7 = lVar7 + 1;
          lVar5 = lVar5 + 0x10;
        } while (lVar7 < (int)param_3[1]);
        puVar6 = (undefined8 *)(lVar5 + (longlong)puVar4);
      }
      goto LAB_147443d68;
    }
    puVar4 = (undefined8 *)*param_3;
  }
  *param_2 = (ulonglong)puVar8;
LAB_147443d68:
  uVar2 = *param_5;
  *puVar6 = *param_4;
  *(undefined2 *)(puVar6 + 1) = uVar2;
  *(undefined1 *)((longlong)puVar6 + 10) = 4;
  *param_3 = (ulonglong)puVar4;
  *(int *)(param_3 + 1) = (int)lVar1;
  return;
}



// FUNCTION 147443d92 FUN_147443d92 body=99 status=ok
// SIG undefined FUN_147443d92(void)

undefined8 * FUN_147443d92(undefined8 *param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_14a399cd0;
  *param_1 = &PTR_FUN_14a399cd0;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      param_1[1] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)*param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)ppuVar1[1])(param_1,0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147443df6 FUN_147443df6 body=114 status=ok
// SIG undefined FUN_147443df6(void)

void FUN_147443df6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147443e68 FUN_147443e68 body=264 status=ok
// SIG undefined FUN_147443e68(void)

void FUN_147443e68(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    puVar3 = DAT_14ca9f280;
    if (DAT_14ca9f288 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14ca9f288 + -1;
    if (DAT_14ca9f288 == 0) {
      iVar1 = 0;
    }
    iVar1 = FUN_144a49b4a(iVar1,puVar3);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
LAB_147443ee9:
      plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x20);
      if (iVar1 == DAT_14ca9f288) {
        if (1 < DAT_14ca9f288) {
          lVar4 = 0;
          do {
            uVar6 = *(ushort *)(*plVar2 + lVar4);
            uVar7 = (ulonglong)uVar6;
            uVar5 = *(ushort *)((longlong)DAT_14ca9f280 + lVar4);
            if (uVar6 == uVar5) {
              if (uVar6 == 0) break;
            }
            else {
              if (0x7f < (uVar5 | uVar6)) goto LAB_147443f58;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar8 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar8]) goto LAB_147443f58;
            }
            lVar4 = lVar4 + 2;
          } while( true );
        }
        goto LAB_147443f5e;
      }
      if (iVar1 + DAT_14ca9f288 == 1) goto LAB_147443f5e;
      goto LAB_147443f4a;
    }
  }
  return;
LAB_147443f58:
  if (uVar6 == uVar5) {
LAB_147443f5e:
    FUN_147443f70(param_1);
    return;
  }
LAB_147443f4a:
  iVar1 = (int)plVar2[3];
  if (iVar1 == -1) {
    return;
  }
  goto LAB_147443ee9;
}



// FUNCTION 147443f70 FUN_147443f70 body=116 status=ok
// SIG undefined FUN_147443f70(void)

void FUN_147443f70(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar6 * 0x20);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x18);
  FUN_145a07de0(lVar3 + *param_1);
  FUN_147443df6(param_1,param_2);
  return;
}



// FUNCTION 147443fe4 FUN_147443fe4 body=48 status=ok
// SIG undefined FUN_147443fe4(void)

void FUN_147443fe4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 147444014 FUN_147444014 body=326 status=ok
// SIG undefined FUN_147444014(void)

void FUN_147444014(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar4 * 0x50) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14744415c FUN_14744415c body=322 status=ok
// SIG undefined FUN_14744415c(void)

void FUN_14744415c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474442a0 FUN_1474442a0 body=322 status=ok
// SIG undefined FUN_1474442a0(void)

void FUN_1474442a0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474443e4 FUN_1474443e4 body=216 status=ok
// SIG undefined FUN_1474443e4(void)

void FUN_1474443e4(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14ca9f2f8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14ca9f304 = DAT_14ca9f304 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14ca9f2f0 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14ca9f2f0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14ca9f304 = DAT_14ca9f304 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147444487;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14ca9f304 = DAT_14ca9f304 + -1;
LAB_147444487:
  FUN_14474d06a(&DAT_14ca9f2f0,0);
  return;
}



// FUNCTION 1474444bc FUN_1474444bc body=114 status=ok
// SIG undefined FUN_1474444bc(void)

void FUN_1474444bc(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    FUN_1404114b2(param_1,param_2);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
    param_1 = param_1 + 0xb;
    param_2 = param_2 + 0x58;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14744452e FUN_14744452e body=207 status=ok
// SIG undefined FUN_14744452e(void)

void FUN_14744452e(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14ca9f298;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14ca9f2a4 = DAT_14ca9f2a4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14ca9f290 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14ca9f290 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14ca9f2a4 = DAT_14ca9f2a4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1474445d0;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14ca9f2a4 = DAT_14ca9f2a4 + -1;
LAB_1474445d0:
  FUN_14474d06a(&DAT_14ca9f290,0);
  return;
}



// FUNCTION 1474445fe FUN_1474445fe body=93 status=ok
// SIG undefined FUN_1474445fe(void)

longlong FUN_1474445fe(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14744465c(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14744465c FUN_14744465c body=146 status=ok
// SIG undefined FUN_14744465c(void)

longlong * FUN_14744465c(longlong *param_1,longlong *param_2)

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



// FUNCTION 1474446ee FUN_1474446ee body=56 status=ok
// SIG undefined FUN_1474446ee(void)

void FUN_1474446ee(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x48);
    do {
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147444726 FUN_147444726 body=89 status=ok
// SIG undefined FUN_147444726(void)

void FUN_147444726(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x58 + *param_1);
  FUN_1415146de(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x58 + (longlong)_Dst),(longlong)iVar2 * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147444780 FUN_147444780 body=240 status=ok
// SIG undefined FUN_147444780(void)

void FUN_147444780(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14ca9f2b0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14ca9f2bc = DAT_14ca9f2bc + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14ca9f2a8 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14ca9f2a8 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3,param_4,param_5),
           cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14ca9f2bc = DAT_14ca9f2bc + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_14744483b;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14ca9f2bc = DAT_14ca9f2bc + -1;
LAB_14744483b:
  FUN_14474d06a(&DAT_14ca9f2a8,0);
  return;
}



// FUNCTION 147444870 FUN_147444870 body=195 status=ok
// SIG undefined FUN_147444870(void)

void FUN_147444870(undefined4 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14ca9f2e0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14ca9f2ec = DAT_14ca9f2ec + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14ca9f2d8 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14ca9f2d8 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14ca9f2ec = DAT_14ca9f2ec + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147444908;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14ca9f2ec = DAT_14ca9f2ec + -1;
LAB_147444908:
  FUN_14474d06a(&DAT_14ca9f2d8,0);
  return;
}



// FUNCTION 147444934 FUN_147444934 body=196 status=ok
// SIG undefined FUN_147444934(void)

void FUN_147444934(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14ca9f2c8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14ca9f2d4 = DAT_14ca9f2d4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14ca9f2c0 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14ca9f2c0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14ca9f2d4 = DAT_14ca9f2d4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1474449cd;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14ca9f2d4 = DAT_14ca9f2d4 + -1;
LAB_1474449cd:
  FUN_14474d06a(&DAT_14ca9f2c0,0);
  return;
}



// FUNCTION 1474449f8 FUN_1474449f8 body=122 status=ok
// SIG undefined FUN_1474449f8(void)

void FUN_1474449f8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 147444a72 FUN_147444a72 body=114 status=ok
// SIG undefined FUN_147444a72(void)

void FUN_147444a72(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147444ae4 FUN_147444ae4 body=114 status=ok
// SIG undefined FUN_147444ae4(void)

void FUN_147444ae4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147444b56 FUN_147444b56 body=132 status=ok
// SIG undefined FUN_147444b56(void)

void FUN_147444b56(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147444d3a FUN_147444d3a body=57 status=ok
// SIG undefined FUN_147444d3a(void)

void FUN_147444d3a(undefined8 *param_1,int param_2)

{
  FUN_147443c52(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147444db4(param_1,param_2);
  return;
}



// FUNCTION 147444d74 FUN_147444d74 body=64 status=ok
// SIG undefined FUN_147444d74(void)

longlong FUN_147444d74(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147444b56(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_147444e13(lVar2,1);
  return lVar2;
}



// FUNCTION 147444db4 FUN_147444db4 body=95 status=ok
// SIG undefined FUN_147444db4(void)

void FUN_147444db4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
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



// FUNCTION 147444e13 FUN_147444e13 body=19 status=ok
// SIG undefined FUN_147444e13(void)

void FUN_147444e13(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 147444e26 FUN_147444e26 body=89 status=ok
// SIG undefined FUN_147444e26(void)

void FUN_147444e26(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_147443c52(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147444e80 FUN_147444e80 body=62 status=ok
// SIG undefined FUN_147444e80(void)

void FUN_147444e80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147444ebe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147444ebe FUN_147444ebe body=93 status=ok
// SIG undefined FUN_147444ebe(void)

ulonglong FUN_147444ebe(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147444f28 FUN_147444f28 body=293 status=ok
// SIG undefined FUN_147444f28(void)

void FUN_147444f28(longlong param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x90) + param_3;
  lVar2 = *(longlong *)(param_1 + 0x98);
  lVar3 = *(longlong *)(lVar2 + 8);
  uVar4 = lVar1 - lVar3;
  if (uVar4 != 0 && lVar3 <= lVar1) {
    if (lVar1 == 0x7fffffffffffffff) {
      FUN_1400021e4(param_1 + 0xa0,&local_48);
      local_50 = local_48;
      if (local_40 == 0) {
        local_50 = &DAT_149dfb77a;
      }
      local_58 = 0x7fffffffffffffff;
      FUN_140033559("Runtime\\Core\\Public\\Serialization/MemoryWriter.h",0x31,
                    L"TMemoryWriter with IndexSize=%d does not support data larger than %d bytes. Archive name: %s."
                    ,8);
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar2 = *(longlong *)(param_1 + 0x98);
      lVar3 = *(longlong *)(lVar2 + 8);
    }
    *(ulonglong *)(lVar2 + 8) = lVar3 + uVar4;
    if ((ulonglong)(*(longlong *)(lVar2 + 0x10) - lVar3) < uVar4) {
      FUN_14112c458();
    }
  }
  if (param_3 != 0) {
    memcpy((void *)(**(longlong **)(param_1 + 0x98) + *(longlong *)(param_1 + 0x90)),param_2,param_3
          );
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14744504e FUN_14744504e body=57 status=ok
// SIG undefined FUN_14744504e(void)

undefined8 * FUN_14744504e(undefined8 *param_1,int param_2)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e25ce0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474450a4 FUN_1474450a4 body=42 status=ok
// SIG undefined FUN_1474450a4(void)

void FUN_1474450a4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1474450d2 FUN_1474450d2 body=42 status=ok
// SIG undefined FUN_1474450d2(void)

void FUN_1474450d2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147445100 FUN_147445100 body=29 status=ok
// SIG undefined FUN_147445100(void)

undefined8 FUN_147445100(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744511e FUN_14744511e body=384 status=ok
// SIG undefined FUN_14744511e(void)

void FUN_14744511e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14caa0d48;
  if (DAT_14caa0d48 != 0) {
    LOCK();
    *(int *)(DAT_14caa0d48 + 8) = *(int *)(DAT_14caa0d48 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14caa0d00;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a399d80;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474452a0 FUN_1474452a0 body=38 status=ok
// SIG undefined FUN_1474452a0(void)

undefined8 FUN_1474452a0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474452c6 FUN_1474452c6 body=163 status=ok
// SIG undefined FUN_1474452c6(void)

void FUN_1474452c6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14323e5d8();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14323e6c0(param_1,param_2);
  return;
}



// FUNCTION 147445369 FUN_147445369 body=374 status=ok
// SIG undefined FUN_147445369(void)

void FUN_147445369(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1474454df FUN_1474454df body=141 status=ok
// SIG undefined FUN_1474454df(void)

void FUN_1474454df(longlong *param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar3 = *param_2;
  uVar6 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
  if ((uVar3 & 1) == 0) {
    uVar6 = uVar3;
  }
  uVar3 = param_2[1];
  if ((longlong)(int)uVar3 != 0) {
    lVar7 = 0;
    do {
      uVar5 = (uint)*(byte *)(uVar6 + 3 + lVar7);
      if ((uVar5 < 0x12) && ((0x23040U >> (uVar5 & 0x1f) & 1) != 0)) {
        bVar1 = *(byte *)(uVar6 + 2 + lVar7);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1447477d8(param_1,iVar2);
        }
        lVar4 = *param_1;
        *(ushort *)(lVar4 + (longlong)iVar2 * 4) = (ushort)bVar1;
        *(undefined1 *)(lVar4 + 2 + (longlong)iVar2 * 4) = 0;
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)uVar3 * 4 != lVar7);
  }
  return;
}



// FUNCTION 14744556c FUN_14744556c body=133 status=ok
// SIG undefined FUN_14744556c(void)

void FUN_14744556c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (param_2 <= (int)uVar1) {
    uVar4 = 7;
    if (7 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (7 < *(uint *)(param_1 + 100)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0xc)) {
        uVar4 = uVar3 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 100) = (int)uVar4;
    FUN_144b1d4a0(param_1,param_2,uVar4,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1474455f2 FUN_1474455f2 body=56 status=ok
// SIG undefined FUN_1474455f2(void)

undefined8 * FUN_1474455f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a399e50;
  FUN_144725486();
  FUN_1463214be(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744562a FUN_14744562a body=38 status=ok
// SIG undefined FUN_14744562a(void)

undefined8 FUN_14744562a(undefined8 param_1,int param_2)

{
  FUN_1463214be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147445650 FUN_147445650 body=56 status=ok
// SIG undefined FUN_147445650(void)

undefined8 * FUN_147445650(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a399eb0;
  FUN_144725486();
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147445688 FUN_147445688 body=251 status=ok
// SIG undefined FUN_147445688(void)

void FUN_147445688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_d8 [32];
  longlong local_b8 [5];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_14054c6c4(local_b8);
  FUN_144a67f5c(local_b8 + 2,param_3);
  local_90 = *param_5;
  uStack_8c = param_5[1];
  uStack_88 = param_5[2];
  uStack_84 = param_5[3];
  local_80 = *(undefined8 *)(param_5 + 4);
  local_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  local_b8[4] = param_4;
  FUN_1447cd2ec(param_1,local_b8);
  if (local_b8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147445932 FUN_147445932 body=79 status=ok
// SIG undefined FUN_147445932(void)

void FUN_147445932(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) << 3;
    do {
      if (*plVar1 != 0) {
        (**(code **)(*param_3 + 0x88))(param_3,plVar1,param_2,0);
      }
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 147445982 FUN_147445982 body=53 status=ok
// SIG undefined FUN_147445982(void)

void FUN_147445982(longlong param_1,longlong *param_2)

{
  FUN_1409eda50(param_2,param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001474459b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 1474459b8 FUN_1474459b8 body=250 status=ok
// SIG undefined FUN_1474459b8(void)

void FUN_1474459b8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1457242e8(&local_38,iVar1,0);
    FUN_147449172(local_38,uVar4,iVar1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1409edbf4(param_1 + 8,0);
  }
  lVar3 = local_38;
  lVar5 = (longlong)local_30;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar6);
      if (lVar2 != 0) {
        FUN_1400337aa(lVar2);
        uVar4 = FUN_1447210f0(lVar2);
        FUN_1412f3774(uVar4,lVar2,0,1);
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147445ab4 FUN_147445ab4 body=357 status=ok
// SIG undefined FUN_147445ab4(void)

undefined8 * FUN_147445ab4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar1 == 0) {
    return (undefined8 *)0x0;
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  lVar1 = FUN_144b2abfe(lVar1);
  if (lVar1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x660);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    lVar1 = FUN_144b2abfe(lVar1);
    if (*(int *)(lVar1 + 8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x660);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      puVar2 = (undefined8 *)FUN_144b2abfe(lVar1);
      if (*(int *)(*(longlong *)*puVar2 + 0x10c) != 0) {
        puVar2 = (undefined8 *)FUN_14001cc68(0x8f0,0x10);
        FUN_1403305c2(puVar2,param_1,0);
        *puVar2 = &PTR_FUN_14a3a1bd0;
        puVar2[0x117] = 0;
        puVar2[0x118] = 0;
        puVar2[0x119] = 0;
        puVar2[0x11a] = 0;
        puVar2[0x11b] = 0;
        puVar2[0x11c] = 0x3ff0000000000000;
        puVar2[0x11d] = 0;
        *(undefined8 **)(param_1 + 0x718) = puVar2;
        return puVar2;
      }
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 147445c1a FUN_147445c1a body=30 status=ok
// SIG undefined FUN_147445c1a(void)

void FUN_147445c1a(longlong param_1)

{
  FUN_144807930();
  *(undefined8 *)(param_1 + 0x718) = 0;
  return;
}



// FUNCTION 147445c38 FUN_147445c38 body=495 status=ok
// SIG undefined FUN_147445c38(void)

undefined8 FUN_147445c38(longlong *param_1,float param_2,longlong *param_3,longlong param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_188 [32];
  double *local_168;
  double local_158;
  double local_150;
  double local_148;
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined4 local_9c;
  undefined4 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar1 = 0;
  memset(local_140,0,0x100);
  local_70 = 0xffffffff;
  local_13c = 0x3f800000;
  local_9c = 0xffffffff;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x3d0);
  }
  local_168 = &local_158;
  (**(code **)(*param_3 + 0x18))(param_3,param_1,uVar1,local_140);
  dVar3 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
  if (((dVar3 != 1.0) || (dVar6 = local_150, dVar7 = local_158, dVar2 = local_148, NAN(dVar3))) &&
     (dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0, dVar2 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar3)) {
    dVar7 = 1.0 / SQRT(dVar3);
    dVar2 = local_148 * dVar7;
    dVar6 = local_150 * dVar7;
    dVar7 = local_158 * dVar7;
  }
  dVar4 = (double)param_2;
  dVar5 = (double)*(float *)(param_1 + 0x81);
  dVar2 = dVar2 * dVar4 * dVar5;
  dVar3 = dVar6 * dVar4 * dVar5;
  dVar5 = dVar7 * dVar4 * dVar5;
  dVar6 = (double)*(float *)((longlong)param_1 + 0x41c);
  dVar7 = (double)-*(float *)((longlong)param_1 + 0x41c);
  if (dVar6 <= dVar5) {
    dVar5 = dVar6;
  }
  if (dVar5 <= dVar7) {
    dVar5 = dVar7;
  }
  if (dVar6 <= dVar3) {
    dVar3 = dVar6;
  }
  if (dVar3 <= dVar7) {
    dVar3 = dVar7;
  }
  if (dVar6 <= dVar2) {
    dVar2 = dVar6;
  }
  if (dVar2 <= dVar7) {
    dVar2 = dVar7;
  }
  param_1[0x7b] = (longlong)(dVar5 + (double)param_1[0x7b]);
  param_1[0x7c] = (longlong)(dVar3 + (double)param_1[0x7c]);
  param_1[0x7d] = (longlong)(dVar2 + (double)param_1[0x7d]);
  (**(code **)(*param_1 + 0x400))(param_1,1);
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 147445e28 FUN_147445e28 body=372 status=ok
// SIG undefined FUN_147445e28(void)

void FUN_147445e28(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (param_4 == 0 || param_3 == 0) {
    return;
  }
  lVar3 = FUN_1400b5618();
  iVar1 = *(int *)(lVar3 + 0x38);
  if (((iVar1 <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
      (*(longlong *)(*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
       lVar3 + 0x30)) && (lVar3 = param_1[0x74], lVar3 != 0)) {
    dVar4 = *(double *)(lVar3 + 0x170) - *(double *)(lVar3 + 0x170);
    dVar8 = *(double *)(param_4 + 0x168) - *(double *)(lVar3 + 0x168);
    dVar6 = *(double *)(param_4 + 0x160) - *(double *)(lVar3 + 0x160);
    lVar2 = param_1[0x39];
    dVar10 = dVar4 * dVar4 + dVar6 * dVar6 + dVar8 * dVar8;
    if (((dVar10 != 1.0) || (dVar5 = dVar4, dVar7 = dVar6, dVar9 = dVar8, NAN(dVar10))) &&
       (dVar5 = DAT_14c8464f0, dVar7 = DAT_14c8464e0, dVar9 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar10)) {
      dVar10 = 1.0 / SQRT(dVar10);
      dVar5 = dVar4 * dVar10;
      dVar7 = dVar6 * dVar10;
      dVar9 = dVar8 * dVar10;
    }
    dVar4 = *(double *)(lVar3 + 0x280);
    if (*(double *)(lVar3 + 0x288) <= *(double *)(lVar3 + 0x280)) {
      dVar4 = *(double *)(lVar3 + 0x288);
    }
    dVar8 = (double)((float)dVar4 * *(float *)(lVar3 + 0x644));
    dVar4 = *(double *)(lVar2 + 0x170);
    dVar6 = *(double *)(lVar2 + 0x168);
    param_1[0x75] = (longlong)(dVar7 * dVar8 + *(double *)(lVar2 + 0x160));
    param_1[0x76] = (longlong)(dVar9 * dVar8 + dVar6);
    param_1[0x77] = (longlong)(dVar5 * dVar8 + dVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000147445e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x400))(param_1,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
  return;
}



// FUNCTION 147445f9c FUN_147445f9c body=315 status=ok
// SIG undefined FUN_147445f9c(void)

void FUN_147445f9c(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x390) + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x390) + 0x660);
  }
  else if (lVar1 == 0) goto LAB_147445fdd;
  if (((DAT_14c950c29 & 1) != 0) && (lVar1 != 0)) {
    FUN_1456cec3c(lVar1);
  }
  FUN_144b2ab52(lVar1,local_60);
  lVar1 = *(longlong *)(param_1 + 0x390);
  dVar2 = *(double *)(lVar1 + 0x1c8);
  if (*(double *)(lVar1 + 0x1c8) <= *(double *)(lVar1 + 0x1d0)) {
    dVar2 = *(double *)(lVar1 + 0x1d0);
  }
  dVar2 = dVar2 * local_30 * 0.699999988079071;
  FUN_140d491fc(*(undefined8 *)(param_1 + 0x3a0),
                CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2),
                (float)(*(double *)(lVar1 + 0x1d8) * local_38),1);
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  FUN_141791564(&local_68);
  FUN_140e7a486(lVar1 + 0x599,param_1,local_68);
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  FUN_141791564(&local_70);
  FUN_1474460d8(lVar1 + 0x599,param_1,local_70);
LAB_147445fdd:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474460d8 FUN_1474460d8 body=137 status=ok
// SIG undefined FUN_1474460d8(void)

void FUN_1474460d8(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_140838726(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x599,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147446162 FUN_147446162 body=2657 status=ok
// SIG undefined FUN_147446162(void)

void FUN_147446162(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138 [2];
  undefined1 local_128 [16];
  undefined8 local_118;
  int local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar2 = param_1[0x72];
  if (((*(byte *)(lVar2 + 0x9c) & 1) != 0) && (*(longlong *)(lVar2 + 0x718) != 0)) {
    local_118 = 0;
    local_110 = 0;
    local_138[0] = 0;
    local_138[1] = 0;
    local_10c = 0xffffffff00000080;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_160 = 0;
    FUN_140d0a8da(param_1,local_138);
    local_158 = 0x100000000;
    local_148 = 0xffffffff;
    local_140 = 0;
    iVar8 = 0;
    local_150 = local_128;
    if (local_110 != 0) {
      FUN_1449c0562(&local_158);
      iVar8 = local_110;
    }
    local_170 = (double)local_148;
    uVar5 = local_170;
    local_168 = local_140;
    local_164 = local_13c;
    local_180 = (double)local_158;
    local_178 = local_150;
    local_170._4_4_ = (int)((ulonglong)local_148 >> 0x20);
    local_188 = local_138;
    if ((local_170._4_4_ != iVar8) || (local_150 != local_128)) {
      iVar6 = local_170._4_4_;
      local_170 = (double)uVar5;
      do {
        lVar3 = *(longlong *)(*local_188 + (longlong)iVar6 * 0x10);
        if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x1c8), lVar3 != 0)) {
          dVar9 = *(double *)(param_1[0x39] + 0x170);
          dVar11 = *(double *)(lVar3 + 0x160);
          dVar12 = *(double *)(lVar3 + 0x168);
          lVar7 = FUN_1400b5618();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30 &&
              (lVar7 = param_1[0x74], lVar7 != 0)))) {
            lVar4 = param_1[0x39];
            dVar10 = (*(double *)(lVar4 + 0x170) + *(double *)(lVar4 + 0x170)) -
                     (double)param_1[0x77];
            dVar16 = (*(double *)(lVar4 + 0x168) + *(double *)(lVar4 + 0x168)) -
                     (double)param_1[0x76];
            dVar14 = (*(double *)(lVar4 + 0x160) + *(double *)(lVar4 + 0x160)) -
                     (double)param_1[0x75];
            dVar18 = (double)param_1[0x77] - dVar10;
            dVar17 = (double)param_1[0x76] - dVar16;
            dVar15 = (double)param_1[0x75] - dVar14;
            dVar13 = dVar18 * dVar18 + dVar15 * dVar15 + dVar17 * dVar17;
            dVar9 = ((dVar9 - dVar10) * dVar18 +
                    (dVar11 - dVar14) * dVar15 + (dVar12 - dVar16) * dVar17) / dVar13;
            if (((dVar13 != 1.0) || (dVar12 = dVar15, dVar19 = dVar18, dVar11 = dVar17, NAN(dVar13))
                ) && (dVar12 = DAT_14c8464e0, dVar19 = DAT_14c8464f0, dVar11 = DAT_14c8464e8,
                     9.99999993922529e-09 <= dVar13)) {
              dVar11 = 1.0 / SQRT(dVar13);
              dVar12 = dVar15 * dVar11;
              dVar19 = dVar18 * dVar11;
              dVar11 = dVar17 * dVar11;
            }
            dVar13 = *(double *)(lVar3 + 0x280);
            uVar20 = SUB84(dVar13,0);
            uVar21 = (undefined4)((ulonglong)dVar13 >> 0x20);
            dVar1 = *(double *)(lVar3 + 0x288);
            if (dVar1 <= dVar13) {
              uVar20 = SUB84(dVar1,0);
              uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
            }
            fVar22 = (float)(double)CONCAT44(uVar21,uVar20) * *(float *)(lVar3 + 0x644);
            dVar13 = (double)fVar22;
            dVar10 = dVar10 - (dVar18 * dVar9 + dVar10 + dVar19 * dVar13);
            dVar16 = dVar16 - (dVar17 * dVar9 + dVar16 + dVar11 * dVar13);
            dVar14 = dVar14 - (dVar9 * dVar15 + dVar14 + dVar12 * dVar13);
            dVar9 = dVar10 * dVar10 + dVar14 * dVar14 + dVar16 * dVar16;
            if (((dVar9 != 1.0) || (dVar12 = dVar14, dVar17 = dVar10, dVar11 = dVar16, NAN(dVar9)))
               && (dVar12 = DAT_14c8464e0, dVar17 = DAT_14c8464f0, dVar11 = DAT_14c8464e8,
                  9.99999993922529e-09 <= dVar9)) {
              dVar9 = 1.0 / SQRT(dVar9);
              dVar12 = dVar9 * dVar14;
              dVar17 = dVar10 * dVar9;
              dVar11 = dVar16 * dVar9;
            }
            dVar9 = *(double *)(lVar7 + 0x280);
            uVar20 = SUB84(dVar9,0);
            uVar21 = (undefined4)((ulonglong)dVar9 >> 0x20);
            dVar13 = *(double *)(lVar7 + 0x288);
            if (dVar13 <= dVar9) {
              uVar20 = SUB84(dVar13,0);
              uVar21 = (undefined4)((ulonglong)dVar13 >> 0x20);
            }
            dVar9 = (double)(fVar22 + (float)(double)CONCAT44(uVar21,uVar20) *
                                      *(float *)(lVar7 + 0x644));
            dVar13 = (double)*(float *)((longlong)param_1 + 0x40c);
            dVar17 = -(dVar10 - (dVar17 + dVar17) * dVar9) * dVar13;
            dVar11 = -(dVar16 - (dVar11 + dVar11) * dVar9) * dVar13;
            dVar13 = -(dVar14 - (dVar12 + dVar12) * dVar9) * dVar13;
            dVar9 = (double)*(float *)(param_1 + 0x84);
            dVar12 = (double)-*(float *)(param_1 + 0x84);
            if (dVar9 <= dVar13) {
              dVar13 = dVar9;
            }
            if (dVar13 <= dVar12) {
              dVar13 = dVar12;
            }
            if (dVar9 <= dVar11) {
              dVar11 = dVar9;
            }
            if (dVar11 <= dVar12) {
              dVar11 = dVar12;
            }
            if (dVar9 <= dVar17) {
              dVar17 = dVar9;
            }
            if (dVar17 <= dVar12) {
              dVar17 = dVar12;
            }
            param_1[0x7b] = (longlong)(dVar13 + (double)param_1[0x7b]);
            param_1[0x7c] = (longlong)(dVar11 + (double)param_1[0x7c]);
            param_1[0x7d] = (longlong)(dVar17 + (double)param_1[0x7d]);
          }
        }
        local_170 = (double)CONCAT44(local_170._4_4_,(uint)local_170 & ~local_180._4_4_);
        FUN_1449c0562(&local_180);
        iVar6 = local_170._4_4_;
        uVar5 = local_170;
      } while (local_188 != local_138 || (local_178 != local_128 || local_170._4_4_ != iVar8));
    }
    local_170 = (double)uVar5;
    dVar9 = (double)param_1[0x80];
    dVar13 = (double)-*(float *)(param_1 + 0x82);
    dVar11 = (double)param_1[0x7e];
    dVar12 = (double)param_1[0x7f];
    dVar17 = dVar9 * dVar9 + dVar11 * dVar11 + dVar12 * dVar12;
    if (((dVar17 != 1.0) || (dVar10 = dVar9, dVar16 = dVar12, dVar14 = dVar11, NAN(dVar17))) &&
       (dVar10 = DAT_14c8464f0, dVar16 = DAT_14c8464e8, dVar14 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar17)) {
      dVar14 = 1.0 / SQRT(dVar17);
      dVar10 = dVar9 * dVar14;
      dVar16 = dVar12 * dVar14;
      dVar14 = dVar14 * dVar11;
    }
    dVar17 = dVar17 * (double)-*(float *)((longlong)param_1 + 0x414);
    dVar15 = (double)-*(float *)(param_1 + 0x83);
    dVar10 = (double)param_1[0x7a] * dVar15 +
             dVar9 * dVar13 + (double)param_1[0x7d] + dVar10 * dVar17;
    dVar16 = (double)param_1[0x79] * dVar15 +
             dVar12 * dVar13 + (double)param_1[0x7c] + dVar16 * dVar17;
    dVar13 = dVar15 * (double)param_1[0x78] +
             dVar13 * dVar11 + (double)param_1[0x7b] + dVar17 * dVar14;
    dVar14 = (double)*(float *)((longlong)param_1 + 0x424);
    dVar17 = (double)-*(float *)((longlong)param_1 + 0x424);
    if (dVar14 <= dVar13) {
      dVar13 = dVar14;
    }
    if (dVar13 <= dVar17) {
      dVar13 = dVar17;
    }
    if (dVar14 <= dVar16) {
      dVar16 = dVar14;
    }
    if (dVar16 <= dVar17) {
      dVar16 = dVar17;
    }
    if (dVar14 <= dVar10) {
      dVar10 = dVar14;
    }
    if (dVar10 <= dVar17) {
      dVar10 = dVar17;
    }
    dVar15 = (double)(float)param_2;
    dVar14 = dVar13 * dVar15 + (double)param_1[0x78];
    dVar17 = dVar16 * dVar15 + (double)param_1[0x79];
    dVar13 = dVar10 * dVar15 + (double)param_1[0x7a];
    param_1[0x7d] = (longlong)DAT_14c8464f0;
    dVar10 = DAT_14c8464e8;
    param_1[0x7b] = (longlong)DAT_14c8464e0;
    param_1[0x7c] = (longlong)dVar10;
    if (1000.0 <= dVar14) {
      dVar14 = 1000.0;
    }
    if (dVar14 <= -1000.0) {
      dVar14 = -1000.0;
    }
    param_1[0x78] = (longlong)dVar14;
    if (1000.0 <= dVar17) {
      dVar17 = 1000.0;
    }
    if (dVar17 <= -1000.0) {
      dVar17 = -1000.0;
    }
    param_1[0x79] = (longlong)dVar17;
    if (1000.0 <= dVar13) {
      dVar13 = 1000.0;
    }
    if (dVar13 <= -1000.0) {
      dVar13 = -1000.0;
    }
    param_1[0x7a] = (longlong)dVar13;
    dVar11 = dVar11 + dVar14 * dVar15;
    param_1[0x7e] = (longlong)dVar11;
    dVar12 = dVar12 + dVar17 * dVar15;
    param_1[0x7f] = (longlong)dVar12;
    dVar9 = dVar9 + dVar13 * dVar15;
    param_1[0x80] = (longlong)dVar9;
    dVar9 = SQRT(dVar9 * dVar9 + dVar11 * dVar11 + dVar12 * dVar12) / 100.0;
    if (1.0 <= dVar9) {
      dVar9 = 1.0;
    }
    local_170 = asin(dVar9);
    local_170 = -local_170;
    dVar9 = (double)param_1[0x7e];
    dVar11 = (double)param_1[0x7f];
    dVar12 = (double)param_1[0x80];
    local_180 = 0.0;
    local_188 = (longlong *)0.0;
    local_178 = (undefined1 *)1.0;
    if (9.999999747378752e-05 < dVar12 * dVar12 + dVar9 * dVar9 + dVar11 * dVar11) {
      dVar17 = dVar9 * 0.0 + dVar11 * -0.0;
      dVar11 = dVar11 - dVar12 * 0.0;
      dVar9 = dVar12 * 0.0 - dVar9;
      dVar12 = dVar17 * dVar17 + dVar11 * dVar11 + dVar9 * dVar9;
      if (((dVar12 != 1.0) ||
          (local_180 = dVar9, local_188 = (longlong *)dVar11, local_178 = (undefined1 *)dVar17,
          NAN(dVar12))) &&
         (local_180 = DAT_14c8464e8, local_188 = (longlong *)DAT_14c8464e0,
         local_178 = (undefined1 *)DAT_14c8464f0, 9.99999993922529e-09 <= dVar12)) {
        dVar12 = 1.0 / SQRT(dVar12);
        local_178 = (undefined1 *)(dVar17 * dVar12);
        local_180 = dVar9 * dVar12;
        local_188 = (longlong *)(dVar11 * dVar12);
      }
    }
    FUN_1432412c2(*(undefined8 *)(lVar2 + 0x718),param_1 + 0x7e);
    if (((double)param_1[0x80] * (double)param_1[0x80] +
         (double)param_1[0x7e] * (double)param_1[0x7e] +
         (double)param_1[0x7f] * (double)param_1[0x7f] < 9.99999883788405e-07) &&
       ((double)param_1[0x7a] * (double)param_1[0x7a] +
        (double)param_1[0x78] * (double)param_1[0x78] +
        (double)param_1[0x79] * (double)param_1[0x79] < 9.99999883788405e-07)) {
      (**(code **)(*param_1 + 0x400))(param_1,0);
    }
    local_f0 = 0;
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    FUN_140d0a7fc(local_138);
  }
  FUN_1448e423c(param_1,param_2);
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147446bc4 FUN_147446bc4 body=26 status=ok
// SIG undefined FUN_147446bc4(void)

void FUN_147446bc4(undefined8 param_1)

{
  thunk_FUN_1401b21c4();
  FUN_147445f9c(param_1);
  return;
}



// FUNCTION 147446bde FUN_147446bde body=26 status=ok
// SIG undefined FUN_147446bde(void)

void FUN_147446bde(undefined8 param_1)

{
  FUN_1401b2056();
  FUN_147445f9c(param_1);
  return;
}



// FUNCTION 147446bf8 FUN_147446bf8 body=1 status=ok
// SIG undefined FUN_147446bf8(void)

void FUN_147446bf8(void)

{
  return;
}



// FUNCTION 147446bfe FUN_147446bfe body=25 status=ok
// SIG undefined FUN_147446bfe(void)

undefined8 FUN_147446bfe(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 147446c18 FUN_147446c18 body=25 status=ok
// SIG undefined FUN_147446c18(void)

undefined8 FUN_147446c18(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 147446c52 FUN_147446c52 body=383 status=ok
// SIG undefined FUN_147446c52(void)

void FUN_147446c52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT71(uStack_2f,local_30);
  local_78 = local_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  local_98 = local_60;
  uStack_94 = uStack_5c;
  uStack_90 = uStack_58;
  uStack_8c = uStack_54;
  uVar1 = FUN_147446dd2(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147446dd2 FUN_147446dd2 body=403 status=ok
// SIG undefined FUN_147446dd2(void)

int FUN_147446dd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [28];
  char local_9c;
  longlong local_90;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  iVar6 = 0;
  if (lVar4 != 0) {
    local_c8 = FUN_145b2f56e();
    if ((local_c8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_c8);
    }
    FUN_147447622(local_c0,lVar4,&local_c8);
    iVar6 = 0;
    if (local_9c == '\0') {
      iVar6 = 0;
      do {
        lVar4 = local_90;
        if ((local_90 != 0) && ((*(uint *)(local_90 + 8) >> 0x1e & 1) == 0)) {
          local_d8 = 0;
          uStack_d0 = 0;
          FUN_1474476a4(local_90,param_2,&local_d8);
          lVar2 = local_d8;
          lVar7 = (longlong)(int)uStack_d0;
          if (lVar7 != 0) {
            lVar8 = 0;
            do {
              lVar5 = FUN_147447e50(lVar4,*(undefined8 *)(lVar2 + lVar8));
              iVar3 = 0;
              if ((lVar5 != 0) && (plVar1 = *(longlong **)(lVar5 + 8), plVar1 != (longlong *)0x0)) {
                iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_3);
              }
              iVar6 = iVar6 + iVar3;
              lVar8 = lVar8 + 8;
            } while (lVar7 * 8 != lVar8);
          }
          if (local_d8 != 0) {
            FUN_1400020a8(local_d8);
          }
        }
        FUN_1474477fe(local_c0);
      } while (local_9c == '\0');
    }
    if (local_68 == '\x01') {
      FUN_14024445c(local_b8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 147446f66 FUN_147446f66 body=482 status=ok
// SIG undefined FUN_147446f66(void)

void FUN_147446f66(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_78 [3];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = CONCAT71(uStack_2f,local_30);
  local_98 = local_40;
  uStack_94 = uStack_3c;
  uStack_90 = uStack_38;
  uStack_8c = uStack_34;
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  local_b8 = local_60;
  uStack_b4 = uStack_5c;
  uStack_b0 = uStack_58;
  uStack_ac = uStack_54;
  FUN_14744714a(local_20,local_28,&local_b8,plVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744714a FUN_14744714a body=394 status=ok
// SIG undefined FUN_14744714a(void)

void FUN_14744714a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [28];
  char local_9c;
  longlong local_90;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar3 != 0) {
    local_c8 = FUN_145b2f56e();
    if ((local_c8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_c8);
    }
    FUN_147447622(local_c0,lVar3,&local_c8);
    if (local_9c == '\0') {
      do {
        lVar3 = local_90;
        if ((local_90 != 0) && ((*(uint *)(local_90 + 8) >> 0x1e & 1) == 0)) {
          local_d8 = 0;
          uStack_d0 = 0;
          FUN_1474476a4(local_90,param_2,&local_d8);
          lVar2 = local_d8;
          lVar5 = (longlong)(int)uStack_d0;
          if (lVar5 != 0) {
            lVar6 = 0;
            do {
              lVar4 = FUN_147447e50(lVar3,*(undefined8 *)(lVar2 + lVar6));
              if ((lVar4 != 0) && (plVar1 = *(longlong **)(lVar4 + 8), plVar1 != (longlong *)0x0)) {
                (**(code **)(*plVar1 + 0x38))(plVar1,param_3,param_4);
              }
              lVar6 = lVar6 + 8;
            } while (lVar5 * 8 != lVar6);
          }
          if (local_d8 != 0) {
            FUN_1400020a8(local_d8);
          }
        }
        FUN_1474477fe(local_c0);
      } while (local_9c == '\0');
    }
    if (local_68 == '\x01') {
      FUN_14024445c(local_b8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474472d6 FUN_1474472d6 body=392 status=ok
// SIG undefined FUN_1474472d6(void)

void FUN_1474472d6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  uVar1 = FUN_147447460(local_20,local_28,&local_68,local_44);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147447460 FUN_147447460 body=445 status=ok
// SIG undefined FUN_147447460(void)

int FUN_147447460(undefined8 param_1,undefined8 param_2,undefined4 *param_3,float param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  double local_d0;
  undefined1 local_c0 [8];
  undefined1 local_b8 [28];
  char local_9c;
  longlong local_90;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  iVar7 = 0;
  if (lVar4 != 0) {
    local_d0 = (double)param_4;
    local_d8 = *(undefined8 *)(param_3 + 4);
    local_e8 = *param_3;
    uStack_e4 = param_3[1];
    uStack_e0 = param_3[2];
    uStack_dc = param_3[3];
    local_f0 = FUN_145b2f56e();
    if ((local_f0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_f0);
    }
    FUN_147447622(local_c0,lVar4,&local_f0);
    iVar7 = 0;
    if (local_9c == '\0') {
      iVar7 = 0;
      do {
        lVar4 = local_90;
        if ((local_90 != 0) && ((*(uint *)(local_90 + 8) >> 0x1e & 1) == 0)) {
          local_108 = 0;
          uStack_100 = 0;
          FUN_1474476a4(local_90,param_2,&local_108);
          lVar2 = local_108;
          lVar6 = (longlong)(int)uStack_100;
          if (lVar6 != 0) {
            lVar8 = 0;
            do {
              lVar5 = FUN_147447e50(lVar4,*(undefined8 *)(lVar2 + lVar8));
              iVar3 = 0;
              if ((lVar5 != 0) && (plVar1 = *(longlong **)(lVar5 + 8), plVar1 != (longlong *)0x0)) {
                iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1,&local_e8);
              }
              iVar7 = iVar7 + iVar3;
              lVar8 = lVar8 + 8;
            } while (lVar6 * 8 != lVar8);
          }
          if (local_108 != 0) {
            FUN_1400020a8(local_108);
          }
        }
        FUN_1474477fe(local_c0);
      } while (local_9c == '\0');
    }
    if (local_68 == '\x01') {
      FUN_14024445c(local_b8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 147447622 FUN_147447622 body=128 status=ok
// SIG undefined FUN_147447622(void)

undefined4 * FUN_147447622(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_1474477fe(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474476a4 FUN_1474476a4 body=344 status=ok
// SIG undefined FUN_1474476a4(void)

void FUN_1474476a4(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x3a0);
  lVar2 = param_1 + 0x3b0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x3c8) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x3c8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar2)) {
    do {
      plVar4 = *(longlong **)(*local_90 + (longlong)iStack_74 * 0x18);
      if ((plVar4 != (longlong *)0x0) &&
         (lVar5 = (**(code **)(*plVar4 + 0x2a0))(plVar4), lVar5 == param_2)) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_147449a5c(param_3,iVar3);
        }
        *(longlong **)(*param_3 + (longlong)iVar3 * 8) = plVar4;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474477fe FUN_1474477fe body=420 status=ok
// SIG undefined FUN_1474477fe(void)

void FUN_1474477fe(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar12 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar11 = (longlong)(int)param_1[8] + 1;
    do {
      lVar10 = lVar12;
      puVar4 = param_1 + 0xe;
      if (lVar11 < lVar12) {
        lVar10 = 0;
        puVar4 = param_1 + 4;
      }
      lVar10 = *(longlong *)(*(longlong *)puVar4 + lVar10 * -8 + lVar11 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar10 != 0) && (lVar7 = FUN_144a79cc8(lVar10), lVar7 != 0)) &&
         ((uVar1 = *param_1, (uVar1 & 1) == 0 || ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar1 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar10);
          if (cVar5 == '\0') goto LAB_1474478a8;
          uVar1 = *param_1;
        }
        if ((uVar1 & 4) != 0) {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar6 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar6 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar6 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (*(longlong *)(lVar7 + 0xc0) == 0) {
            pcVar9 = (char *)0x0;
          }
          else {
            pcVar9 = (char *)FUN_144a8afea();
          }
          if (pcVar3 == (char *)0x0) {
            bVar13 = true;
          }
          else {
            bVar13 = *pcVar3 == '\x02';
          }
          if ((bVar6 & ((pcVar9 == (char *)0x0 || pcVar3 == pcVar9) | bVar13)) != 1)
          goto LAB_1474478a8;
        }
        lVar8 = FUN_144a8afe2(lVar7);
        if (lVar8 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_147447998:
            *(longlong *)(param_1 + 0xc) = lVar10;
            param_1[8] = (uint)lVar11;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_147447998;
        }
      }
LAB_1474478a8:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10] + lVar12);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1474479a8 FUN_1474479a8 body=308 status=ok
// SIG undefined FUN_1474479a8(void)

void FUN_1474479a8(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  param_1[1] = 0;
  if (*param_1 == 0) {
    return;
  }
  uVar3 = FUN_1458e61e8();
  cVar1 = FUN_144a7ca96(param_1,uVar3);
  lVar6 = *param_1;
  if (cVar1 == '\0') {
    if (lVar6 == 0) {
      return;
    }
    uVar3 = FUN_141225fe0();
    bVar2 = FUN_144a7ca96(param_1,uVar3);
    lVar6 = *param_1;
    if ((lVar6 != 0 & bVar2) != 1) {
      return;
    }
    lVar7 = *(longlong *)(lVar6 + 0x58);
    if ((((lVar7 == 0) || (lVar4 = FUN_1446f8646(), lVar4 == 0)) ||
        (*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar6 + 0x58);
    }
    lVar4 = FUN_145a64d4c();
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38)) {
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30) {
      return;
    }
    *(undefined1 *)(param_1 + 2) = 0;
    lVar7 = *(longlong *)(lVar6 + 0x30);
    if (((lVar7 == 0) || (lVar4 = FUN_1446f8646(), lVar4 == 0)) ||
       ((*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
         lVar4 + 0x30)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar6 + 0x30);
    }
    uVar5 = FUN_1409ffe1d();
    lVar6 = FUN_147447adc(uVar5,uVar3);
    if (lVar6 == 0) goto LAB_1474479f1;
  }
  else {
    if (lVar6 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  if (DAT_14c950c29 != '\0') {
    FUN_1456cec3c(lVar6);
  }
LAB_1474479f1:
  param_1[1] = lVar6;
  return;
}



// FUNCTION 147447adc FUN_147447adc body=175 status=ok
// SIG undefined FUN_147447adc(void)

undefined8 FUN_147447adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147447b8c FUN_147447b8c body=5 status=ok
// SIG undefined FUN_147447b8c(void)

undefined8 FUN_147447b8c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 147447b92 FUN_147447b92 body=72 status=ok
// SIG undefined FUN_147447b92(void)

void FUN_147447b92(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x10);
    lVar3 = *(longlong *)(lVar1 + 0x110);
    if (lVar3 == 0) {
      FUN_140aa6c08(lVar1);
      lVar3 = *(longlong *)(lVar1 + 0x110);
      lVar2 = *(longlong *)(param_1 + 8);
    }
    *(undefined4 *)(lVar2 + 0x4a0) = *(undefined4 *)(lVar3 + 0x4a0);
  }
  return;
}



// FUNCTION 147447bde FUN_147447bde body=83 status=ok
// SIG undefined FUN_147447bde(void)

uint FUN_147447bde(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x1c0))();
  if (cVar1 == '\0') {
    uVar2 = *(uint *)(param_1[2] + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + 8) >> 0x19 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147447c3a FUN_147447c3a body=17 status=ok
// SIG undefined FUN_147447c3a(void)

float FUN_147447c3a(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x34c);
  if (*(float *)(param_1 + 0x34c) <= *(float *)(param_1 + 0x350)) {
    fVar1 = *(float *)(param_1 + 0x350);
  }
  return fVar1;
}



// FUNCTION 147447c4c FUN_147447c4c body=126 status=ok
// SIG undefined FUN_147447c4c(void)

float FUN_147447c4c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar5 [12];
  
  uVar1 = FUN_1401e2d36(param_1 + 0x388);
  uVar2 = -(uint)(*(float *)(param_1 + 0x378) == 0.0);
  auVar6._4_4_ = (int)((ulonglong)param_2 >> 0x20);
  auVar6._0_4_ = ~uVar2 & (uint)((float)param_2 / *(float *)(param_1 + 0x378));
  auVar6._8_4_ = in_XMM1_Dc;
  auVar6._12_4_ = in_XMM1_Dd;
  auVar6 = ZEXT416(uVar2 & 0x3f800000) | auVar6;
  auVar5 = auVar6._0_12_;
  if (1.0 <= auVar6._0_4_) {
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = 0x3f800000;
    auVar5 = auVar7._0_12_;
  }
  lVar4 = auVar5._0_8_;
  if (auVar5._0_4_ <= 0.0) {
    lVar4 = auVar5._4_8_ << 0x20;
  }
  fVar3 = (float)FUN_1448c9f94(uVar1,lVar4,0);
  return fVar3 * (*(float *)(param_1 + 900) - *(float *)(param_1 + 0x380)) +
         *(float *)(param_1 + 0x380);
}



// FUNCTION 147447cca FUN_147447cca body=51 status=ok
// SIG undefined FUN_147447cca(void)

float FUN_147447cca(longlong param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_2 + 4) * 0xbb38435 + 0x3619636b;
  fVar1 = *(float *)(param_1 + 0x374);
  *(uint *)(param_2 + 4) = uVar2;
  return ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) * fVar1;
}



// FUNCTION 147447cfe FUN_147447cfe body=46 status=ok
// SIG undefined FUN_147447cfe(void)

float FUN_147447cfe(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  
  if (param_3 < 1) {
    return param_2;
  }
  do {
    fVar1 = param_2 + 1.0;
    if (*(float *)(param_1 + 0x378) < fVar1) {
      return param_2;
    }
    param_3 = param_3 + -1;
    param_2 = fVar1;
  } while (param_3 != 0);
  return fVar1;
}



// FUNCTION 147447d2c FUN_147447d2c body=19 status=ok
// SIG undefined FUN_147447d2c(void)

undefined1 FUN_147447d2c(longlong param_1)

{
  if (*(char *)(param_1 + 0x370) == '\x01') {
    return *(undefined1 *)(param_1 + 0x371);
  }
  return 0;
}



// FUNCTION 147447d8c FUN_147447d8c body=162 status=ok
// SIG undefined FUN_147447d8c(void)

void FUN_147447d8c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  if (0 < iVar2) {
    uVar1 = *(ulonglong *)(param_1[2] + 0x660);
    if ((uVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar1);
    }
    uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    local_28 = uVar1;
    piVar4 = (int *)FUN_14744940c(param_3,uVar3 >> 0x10 ^ uVar3);
    *piVar4 = *piVar4 + iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147447e50 FUN_147447e50 body=274 status=ok
// SIG undefined FUN_147447e50(void)

undefined8 FUN_147447e50(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  local_20 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_14744998c((longlong *)(param_1 + 0x3a0),uVar2 >> 0x10 ^ uVar2,&local_20);
  if ((iVar3 == -1) ||
     (lVar1 = *(longlong *)(param_1 + 0x3a0) + (longlong)iVar3 * 0x18,
     puVar4 = (undefined8 *)(lVar1 + 8), puVar4 == (undefined8 *)0x0 || lVar1 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147447f64 FUN_147447f64 body=125 status=ok
// SIG undefined FUN_147447f64(void)

void FUN_147447f64(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_147449bc4(param_2);
  }
  local_20 = FUN_140f477b0();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_147449ae2(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147447fea FUN_147447fea body=1830 status=ok
// SIG undefined FUN_147447fea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147447fea(longlong *param_1,float param_2,longlong *param_3,longlong param_4,int *param_5)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStack_1e8 [32];
  int *local_1c8;
  float local_1c0;
  longlong local_1b8;
  int *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  int local_150;
  int local_148;
  float fStack_144;
  longlong lStack_140;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  longlong local_108;
  int *local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1c8 = param_5;
  FUN_1479eda9e();
  if ((param_2 != 0.0) || (NAN(param_2))) {
    lVar14 = param_3[1];
    if ((lVar14 == 0) ||
       (((lVar13 = FUN_1411311bc(), lVar13 == 0 ||
         (*(int *)(lVar14 + 0x38) < *(int *)(lVar13 + 0x38))) ||
        (lVar18 = param_3[1],
        lVar18 == 0 ||
        *(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
        lVar13 + 0x30)))) {
      lVar13 = FUN_1411311bc();
      lVar14 = *(longlong *)(lVar13 + 0x110);
    }
    else {
      lVar14 = FUN_1411311bc();
      if (((lVar14 == 0) || (*(int *)(lVar18 + 0x38) < *(int *)(lVar14 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
          lVar14 + 0x30)) {
        lVar13 = 0;
      }
      else {
        lVar13 = param_3[1];
      }
      lVar14 = *(longlong *)(lVar13 + 0x110);
    }
    if (lVar14 == 0) {
      FUN_140aa6c08(lVar13);
      lVar14 = *(longlong *)(lVar13 + 0x110);
    }
    cVar10 = (**(code **)(*param_3 + 0x10))(param_3,1);
    if (cVar10 == '\0') {
      cVar10 = (**(code **)(*param_3 + 0x10))(param_3,2);
      if (cVar10 != '\0') {
        fVar34 = *(float *)(param_3 + 3);
        if (*(float *)(param_3 + 3) <= *(float *)((longlong)param_3 + 0x1c)) {
          fVar34 = *(float *)((longlong)param_3 + 0x1c);
        }
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        plVar1 = param_3 + 5;
        local_1c8 = (int *)CONCAT71(local_1c8._1_7_,1);
        plVar17 = param_1;
        uVar11 = (**(code **)(*param_1 + 0xb88))(param_1,&local_158,plVar1);
        if (local_150 != 0) {
          auVar2 = *(undefined1 (*) [16])(param_1 + 0x50);
          auVar3 = *(undefined1 (*) [16])(param_1 + 0x52);
          dVar29 = ABS(auVar2._0_8_);
          auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
          auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar29);
          iVar12 = movmskpd(uVar11,auVar30);
          auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
          auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
          uVar16 = movmskpd((int)plVar17,auVar33);
          if ((uVar16 & 0x3fffffff) == 0 && iVar12 == 0) {
            uVar38 = (undefined4)DAT_14c846480;
            uVar39 = DAT_14c846480._4_4_;
            uVar40 = DAT_14c846480._8_4_;
            uVar41 = DAT_14c846480._12_4_;
            local_178 = DAT_14c8464d0;
            uStack_170 = uRam000000014c8464d8;
            uStack_180 = (double)CONCAT44(DAT_14c846498._4_4_,(undefined4)DAT_14c846498);
            local_198._8_4_ = SUB84(DAT_14c846490,0);
            local_198._0_8_ = DAT_14c846480._8_8_;
            local_198._12_4_ = (int)((ulonglong)DAT_14c846490 >> 0x20);
            uVar11 = (undefined4)DAT_14c8464c0;
            uVar35 = DAT_14c8464c0._4_4_;
            uVar36 = (undefined4)DAT_14c8464c8;
            uVar37 = DAT_14c8464c8._4_4_;
            dVar8 = DAT_14c846490;
            dVar7 = DAT_14c8464a0;
            dVar31 = DAT_14c8464a8;
            dVar29 = DAT_14c8464b0;
          }
          else {
            auVar33 = divpd(_DAT_149934d80,auVar2);
            auVar30 = divpd(ZEXT816(0x3ff0000000000000),auVar3);
            dVar29 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar29) & auVar33._0_8_);
            uVar11 = SUB84(dVar29,0);
            uVar35 = (undefined4)((ulonglong)dVar29 >> 0x20);
            dVar31 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar33._8_8_
                             );
            uVar36 = SUB84(dVar31,0);
            uVar37 = (undefined4)((ulonglong)dVar31 >> 0x20);
            local_178 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) &
                                auVar30._0_8_);
            dVar19 = (double)param_1[0x48];
            dVar5 = -dVar19;
            uVar38 = SUB84(dVar19,0);
            uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar6 = -(double)param_1[0x49];
            uVar40 = (undefined4)param_1[0x49];
            uVar41 = (undefined4)((ulonglong)dVar6 >> 0x20);
            dVar8 = (double)param_1[0x4a] * -1.0;
            uStack_180 = (double)param_1[0x4b] * 1.0;
            dVar29 = (double)param_1[0x4c] * dVar29;
            dVar31 = (double)param_1[0x4d] * dVar31;
            uStack_170 = 0;
            dVar20 = (double)param_1[0x4e] * local_178;
            dVar24 = dVar31 * dVar5 - dVar6 * dVar29;
            dVar22 = dVar20 * dVar6 - dVar8 * dVar31;
            dVar32 = dVar29 * dVar8 - dVar5 * dVar20;
            dVar22 = dVar22 + dVar22;
            dVar32 = dVar32 + dVar32;
            dVar24 = dVar24 + dVar24;
            local_198._8_4_ = SUB84(dVar8,0);
            local_198._0_8_ = dVar6;
            local_198._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            dVar7 = 0.0 - ((dVar24 * dVar6 - dVar32 * dVar8) + uStack_180 * dVar22 + dVar29);
            dVar31 = 0.0 - (dVar24 * dVar19 + dVar8 * dVar22 + uStack_180 * dVar32 + dVar31);
            dVar29 = 0.0 - (uStack_180 * dVar24 + dVar20 + (dVar32 * dVar5 - dVar22 * dVar6));
          }
          dVar5 = (double)param_3[5];
          dVar6 = (double)param_3[6];
          dVar32 = (double)param_3[7];
          local_168 = 0;
          uStack_160 = 0;
          local_1a8 = plVar1;
          local_1a0 = lVar14;
          local_188 = uStack_180;
          if (local_150 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(local_150);
          }
          FUN_14482f6fa(&local_168);
          lVar14 = local_158;
          if ((longlong)local_150 != 0) {
            dVar5 = (double)CONCAT44(uVar35,uVar11) * dVar5;
            dVar6 = (double)CONCAT44(uVar37,uVar36) * dVar6;
            dVar32 = local_178 * dVar32;
            dVar19 = dVar6 * (double)CONCAT44(uVar39,uVar38) - (double)local_198._0_8_ * dVar5;
            dVar22 = dVar32 * (double)CONCAT44(uVar41,uVar40) - (double)local_198._8_8_ * dVar6;
            dVar25 = dVar5 * dVar8 - (double)CONCAT44(uVar39,uVar38) * dVar32;
            dVar22 = dVar22 + dVar22;
            dVar25 = dVar25 + dVar25;
            dVar19 = dVar19 + dVar19;
            dVar26 = local_188 * dVar22;
            dVar28 = uStack_180 * dVar25;
            dVar20 = dVar22 * (double)local_198._0_8_;
            dVar23 = dVar25 * (double)local_198._8_8_;
            dVar24 = dVar19 * local_188;
            lVar13 = 0;
            do {
              lVar18 = param_1[0xe4];
              lVar15 = (longlong)*(int *)(lVar14 + lVar13) * 0x80;
              dVar4 = *(double *)(lVar18 + 0x70 + lVar15) -
                      (dVar29 + dVar24 + dVar32 +
                                (dVar25 * (double)CONCAT44(uVar39,uVar38) - dVar20));
              dVar27 = *(double *)(lVar18 + 0x68 + lVar15) -
                       (dVar31 + (dVar8 * dVar22 - (double)CONCAT44(uVar39,uVar38) * dVar19) +
                                 dVar28 + dVar6);
              dVar21 = *(double *)(lVar18 + 0x60 + lVar15) -
                       (dVar7 + (dVar19 * (double)CONCAT44(uVar41,uVar40) - dVar23) + dVar26 + dVar5
                       );
              uVar11 = FUN_147a91b68(param_3 + 2,
                                     (float)(SQRT(dVar4 * dVar4 + dVar21 * dVar21 + dVar27 * dVar27)
                                            * auVar2._0_8_));
              uVar9 = uStack_160;
              lVar18 = (longlong)(int)uStack_160;
              uVar16 = (int)uStack_160 + 1;
              uStack_160 = CONCAT44(uStack_160._4_4_,uVar16);
              if (uStack_160._4_4_ < uVar16) {
                FUN_14475e4ac(&local_168,uVar9 & 0xffffffff);
              }
              *(undefined4 *)(local_168 + lVar18 * 4) = uVar11;
              lVar13 = lVar13 + 4;
            } while ((longlong)local_150 * 4 != lVar13);
          }
          local_138 = local_1a8[2];
          local_1c8 = &local_148;
          local_148 = (int)*local_1a8;
          fStack_144 = *(float *)((longlong)local_1a8 + 4);
          lStack_140 = local_1a8[1];
          local_1b0 = param_5;
          local_1b8 = local_1a0;
          local_1c0 = fVar34;
          FUN_147445688(param_1 + 0x197,&local_158,&local_168,param_4);
          if (local_168 != 0) {
            FUN_1400020a8();
          }
        }
        if (local_158 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      iVar12 = (int)param_3[0x1b];
      if ((-1 < iVar12) && (iVar12 < (int)param_1[0xe5])) {
        local_110 = param_3[5];
        local_120 = param_3[3];
        lStack_118 = param_3[4];
        local_138 = param_3[0xb];
        uStack_130 = (undefined4)param_3[0xc];
        uStack_12c = *(undefined4 *)((longlong)param_3 + 100);
        local_128 = param_3[0xd];
        local_100 = param_5;
        local_148 = iVar12;
        fStack_144 = param_2;
        lStack_140 = param_4;
        local_108 = lVar14;
        FUN_1447cd2ec(param_1 + 0x195);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147448722 FUN_147448722 body=45 status=ok
// SIG undefined FUN_147448722(void)

longlong FUN_147448722(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140899b20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147448756 FUN_147448756 body=48 status=ok
// SIG undefined FUN_147448756(void)

longlong FUN_147448756(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140899b20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744878e FUN_14744878e body=48 status=ok
// SIG undefined FUN_14744878e(void)

longlong FUN_14744878e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140899b20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474487c6 FUN_1474487c6 body=48 status=ok
// SIG undefined FUN_1474487c6(void)

longlong FUN_1474487c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140899b20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474487fe FUN_1474487fe body=25 status=ok
// SIG undefined FUN_1474487fe(void)

undefined8 FUN_1474487fe(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 147448818 FUN_147448818 body=25 status=ok
// SIG undefined FUN_147448818(void)

undefined8 FUN_147448818(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 147448832 FUN_147448832 body=64 status=ok
// SIG undefined FUN_147448832(void)

void FUN_147448832(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (*(code *)*param_3)(param_3[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147448888 FUN_147448888 body=42 status=ok
// SIG undefined FUN_147448888(void)

undefined8 FUN_147448888(void)

{
  FUN_140033559(".\\Runtime/Foliage/Public/FoliageType.h",0x6e,L"Pure virtual not implemented (%s)",
                L"UFoliageType::GetSource");
  return 0;
}



// FUNCTION 1474488b2 FUN_1474488b2 body=72 status=ok
// SIG undefined FUN_1474488b2(void)

undefined8 FUN_1474488b2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4c0);
  if ((((lVar1 != 0) && (lVar2 = FUN_144a6c4d8(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x4c0);
  }
  return 0;
}



// FUNCTION 14744890e FUN_14744890e body=45 status=ok
// SIG undefined FUN_14744890e(void)

longlong FUN_14744890e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744893c FUN_14744893c body=48 status=ok
// SIG undefined FUN_14744893c(void)

longlong FUN_14744893c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744896c FUN_14744896c body=48 status=ok
// SIG undefined FUN_14744896c(void)

longlong FUN_14744896c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744899c FUN_14744899c body=48 status=ok
// SIG undefined FUN_14744899c(void)

longlong FUN_14744899c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474489cc FUN_1474489cc body=45 status=ok
// SIG undefined FUN_1474489cc(void)

longlong FUN_1474489cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474489fa FUN_1474489fa body=48 status=ok
// SIG undefined FUN_1474489fa(void)

longlong FUN_1474489fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147448a2a FUN_147448a2a body=48 status=ok
// SIG undefined FUN_147448a2a(void)

longlong FUN_147448a2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147448a5a FUN_147448a5a body=48 status=ok
// SIG undefined FUN_147448a5a(void)

longlong FUN_147448a5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147448b0e FUN_147448b0e body=59 status=ok
// SIG undefined FUN_147448b0e(void)

undefined8 FUN_147448b0e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147448bc0 FUN_147448bc0 body=61 status=ok
// SIG undefined FUN_147448bc0(void)

void FUN_147448bc0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 8) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 8) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x10);
  return;
}



// FUNCTION 147448c14 FUN_147448c14 body=76 status=ok
// SIG undefined FUN_147448c14(void)

undefined1 FUN_147448c14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_14115e0ba();
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147448c88 FUN_147448c88 body=59 status=ok
// SIG undefined FUN_147448c88(void)

undefined8 FUN_147448c88(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147448d2c FUN_147448d2c body=75 status=ok
// SIG undefined FUN_147448d2c(void)

void FUN_147448d2c(longlong param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined **)(param_1 + 8) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 8) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 147448d78 FUN_147448d78 body=38 status=ok
// SIG undefined FUN_147448d78(void)

undefined8 FUN_147448d78(undefined8 param_1,int param_2)

{
  FUN_140208272();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147448df0 FUN_147448df0 body=29 status=ok
// SIG undefined FUN_147448df0(void)

void FUN_147448df0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147448e0e FUN_147448e0e body=29 status=ok
// SIG undefined FUN_147448e0e(void)

undefined8 FUN_147448e0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147448f28 FUN_147448f28 body=54 status=ok
// SIG undefined FUN_147448f28(void)

undefined1 FUN_147448f28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147449026(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147448f86 FUN_147448f86 body=59 status=ok
// SIG undefined FUN_147448f86(void)

undefined8 FUN_147448f86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147449026 FUN_147449026 body=133 status=ok
// SIG undefined FUN_147449026(void)

longlong * FUN_147449026(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  *(char *)(param_1 + 2) = (char)param_2[2];
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
    }
  }
  param_1[3] = lVar2;
  return param_1;
}



// FUNCTION 1474490ac FUN_1474490ac body=33 status=ok
// SIG undefined FUN_1474490ac(void)

longlong FUN_1474490ac(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 1474490e0 FUN_1474490e0 body=57 status=ok
// SIG undefined FUN_1474490e0(void)

undefined8 * FUN_1474490e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3a20f0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744911a FUN_14744911a body=29 status=ok
// SIG undefined FUN_14744911a(void)

undefined8 FUN_14744911a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147449138 FUN_147449138 body=33 status=ok
// SIG undefined FUN_147449138(void)

longlong FUN_147449138(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 147449172 FUN_147449172 body=28 status=ok
// SIG undefined FUN_147449172(void)

void FUN_147449172(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return;
}



// FUNCTION 14744918e FUN_14744918e body=34 status=ok
// SIG undefined FUN_14744918e(void)

void FUN_14744918e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a3a22a0;
  return;
}



// FUNCTION 1474491b0 FUN_1474491b0 body=31 status=ok
// SIG undefined FUN_1474491b0(void)

undefined8 FUN_1474491b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474491ec FUN_1474491ec body=93 status=ok
// SIG undefined FUN_1474491ec(void)

void FUN_1474491ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3a2230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14744924a FUN_14744924a body=126 status=ok
// SIG undefined FUN_14744924a(void)

void FUN_14744924a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3a2230;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474492b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1474492d4 FUN_1474492d4 body=21 status=ok
// SIG undefined FUN_1474492d4(void)

undefined8 FUN_1474492d4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1474492ea FUN_1474492ea body=29 status=ok
// SIG undefined FUN_1474492ea(void)

undefined8 FUN_1474492ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147449320 FUN_147449320 body=93 status=ok
// SIG undefined FUN_147449320(void)

void FUN_147449320(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3a3430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14744937e FUN_14744937e body=126 status=ok
// SIG undefined FUN_14744937e(void)

void FUN_14744937e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3a3430;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474493ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14744940c FUN_14744940c body=180 status=ok
// SIG undefined FUN_14744940c(void)

longlong * FUN_14744940c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1474494a3;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1474494c2(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1474494a3:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1474494c2 FUN_1474494c2 body=277 status=ok
// SIG undefined FUN_1474494c2(void)

undefined4 * FUN_1474494c2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1474495d8(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_1474496be(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1474497b0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474495d8 FUN_1474495d8 body=230 status=ok
// SIG undefined FUN_1474495d8(void)

int * FUN_1474495d8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1474496be FUN_1474496be body=128 status=ok
// SIG undefined FUN_1474496be(void)

undefined8 FUN_1474496be(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14744973e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14744973e FUN_14744973e body=114 status=ok
// SIG undefined FUN_14744973e(void)

void FUN_14744973e(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}


