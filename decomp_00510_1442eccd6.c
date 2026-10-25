// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1442eccd6 FUN_1442eccd6 body=130 status=ok
// SIG undefined FUN_1442eccd6(void)

undefined4
FUN_1442eccd6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148eb44b2(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ecd6c FUN_1442ecd6c body=130 status=ok
// SIG undefined FUN_1442ecd6c(void)

undefined4
FUN_1442ecd6c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148eb4dbe(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ecdf0 FUN_1442ecdf0 body=160 status=ok
// SIG undefined FUN_1442ecdf0(void)

undefined4 FUN_1442ecdf0(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cbc9da8;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148eb5396(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ece92 FUN_1442ece92 body=130 status=ok
// SIG undefined FUN_1442ece92(void)

undefined4
FUN_1442ece92(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148eb5982(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ecf22 FUN_1442ecf22 body=30 status=ok
// SIG undefined FUN_1442ecf22(void)

void * FUN_1442ecf22(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1442ecf40 FUN_1442ecf40 body=122 status=ok
// SIG undefined FUN_1442ecf40(void)

void FUN_1442ecf40(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x238))(plVar2,&local_19);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_19);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ecfda FUN_1442ecfda body=68 status=ok
// SIG undefined FUN_1442ecfda(void)

undefined8 * FUN_1442ecfda(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc7a0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ed01e FUN_1442ed01e body=68 status=ok
// SIG undefined FUN_1442ed01e(void)

undefined8 * FUN_1442ed01e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc810;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ed062 FUN_1442ed062 body=68 status=ok
// SIG undefined FUN_1442ed062(void)

undefined8 * FUN_1442ed062(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc880;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ed0a6 FUN_1442ed0a6 body=1938 status=ok
// SIG undefined FUN_1442ed0a6(void)

longlong * FUN_1442ed0a6(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  void *_Src;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158 [2];
  longlong *local_148 [2];
  longlong *local_138 [2];
  longlong local_128;
  int local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int aiStack_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar10 = (longlong)*(int *)(*(longlong *)*param_1 + 0x418);
  if (lVar10 != 0) {
    plVar14 = *(longlong **)(*(longlong *)*param_1 + 0x410);
    local_180 = plVar14 + lVar10 * 3;
    lVar10 = param_1[1];
    local_190 = lVar10;
    local_188 = param_2;
    do {
      if ((longlong)(int)plVar14[2] != 0) {
        plVar18 = (longlong *)plVar14[1];
        plVar19 = plVar18 + (longlong)(int)plVar14[2] * 0xc;
        do {
          if ((((*(char *)((longlong)plVar18 + 0x5c) == '\x01') && (lVar15 = *plVar18, lVar15 != 0))
              && (*(longlong *)(lVar15 + 0x68) != 0)) && (*(int *)(lVar15 + 0x70) - 1U < 0xfffffffe)
             ) {
            FUN_144245a52(*(undefined8 *)*param_1,&local_108,plVar18,plVar14);
            FUN_1442454d4(*(undefined8 *)*param_1,&local_118,plVar18,plVar14);
            FUN_144245b52(*(undefined8 *)*param_1,&local_128,plVar18,plVar14);
            if (local_120 == *(int *)(lVar10 + 0x360)) {
              if (1 < local_120) {
                lVar15 = 0;
                while( true ) {
                  uVar12 = *(ushort *)(local_128 + lVar15);
                  uVar11 = (ulonglong)uVar12;
                  uVar16 = *(ushort *)(*(longlong *)(lVar10 + 0x358) + lVar15);
                  if (uVar12 != uVar16) break;
                  if (uVar12 == 0) goto LAB_1442ed234;
LAB_1442ed1eb:
                  lVar15 = lVar15 + 2;
                }
                if ((uVar16 | uVar12) < 0x80) {
                  uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  uVar17 = (ulonglong)uVar16;
                  uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                  if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar17]) goto LAB_1442ed1eb;
                }
                bVar5 = true;
                if (uVar12 != uVar16) goto LAB_1442ed783;
              }
LAB_1442ed234:
              bVar5 = true;
              if (1 < (int)local_100) {
                bVar2 = *(byte *)((longlong)plVar18 + 0x5e);
                lVar10 = FUN_140e6367b();
                if ((longlong)*(int *)(lVar10 + 0x48) != 0) {
                  lVar15 = 0;
                  do {
                    if (*(ulonglong *)(*(longlong *)(lVar10 + 0x40) + 8 + lVar15) ==
                        (ulonglong)bVar2) {
                      local_c8 = *(undefined8 *)(*(longlong *)(lVar10 + 0x40) + lVar15);
                      goto LAB_1442ed27a;
                    }
                    lVar15 = lVar15 + 0x10;
                  } while ((longlong)*(int *)(lVar10 + 0x48) * 0x10 != lVar15);
                }
                local_c8 = 0;
LAB_1442ed27a:
                FUN_1400021e4(&local_c8,&local_a0);
                puVar13 = local_a0;
                iVar4 = aiStack_98[0];
                uVar8 = aiStack_98[0] - 1;
                if (aiStack_98[0] == 0) {
                  uVar8 = 0;
                }
                if (0 < (int)uVar8) {
                  uVar11 = 0;
                  do {
                    local_a0[uVar11] =
                         (ushort)((ushort)local_a0[uVar11] - 0x41 < 0x1a) * 0x20 + local_a0[uVar11];
                    uVar11 = uVar11 + 1;
                  } while (uVar8 != uVar11);
                }
                iVar7 = aiStack_98[1];
                local_a0 = (undefined2 *)0x0;
                aiStack_98[0] = 0;
                aiStack_98[1] = 0;
                lVar10 = param_1[2];
                if (*(longlong *)(lVar10 + 0x148) == 0) {
                  *(undefined2 **)(lVar10 + 0x148) = puVar13;
                  *(int *)(lVar10 + 0x150) = iVar4;
                  *(int *)(lVar10 + 0x154) = iVar7;
                }
                else {
                  FUN_1400020a8();
                  *(undefined2 **)(lVar10 + 0x148) = puVar13;
                  *(int *)(lVar10 + 0x150) = iVar4;
                  *(int *)(lVar10 + 0x154) = iVar7;
                  if (local_a0 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                lVar15 = param_1[2];
                FUN_1400b22c2(&local_a0,"eitemcomparisonresult::");
                param_2 = local_188;
                lVar10 = local_190;
                iVar4 = aiStack_98[0] + -1;
                if (aiStack_98[0] == 0) {
                  iVar4 = 0;
                }
                puVar13 = &DAT_149dfb77a;
                if (aiStack_98[0] != 0) {
                  puVar13 = local_a0;
                }
                FUN_140c540b4(lVar15 + 0x148,puVar13,iVar4,1);
                if (local_a0 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                lVar15 = param_1[2];
                FUN_1400b22c2(&local_a0,"item_card_compare_");
                FUN_140e63652(lVar15 + 0x148,0,&local_a0);
                if (local_a0 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                *(int *)(param_1[2] + 0x170) = (int)plVar18[0xb];
                FUN_140390f7a(*plVar18 + 0x90,param_1[2] + 0x138);
                if (*(int *)(param_1[2] + 0x140) < 2) {
                  if ((*plVar14 != 0) && (*(char *)(*plVar14 + 0x18) == '\x06')) {
                    FUN_144245fa2(*(undefined8 *)*param_1,&local_a0,plVar18);
                    if (CONCAT44(uStack_114,local_118) != 0) {
                      FUN_1400020a8();
                    }
                    local_118 = (undefined4)local_a0;
                    uStack_114 = local_a0._4_4_;
                    uStack_110 = aiStack_98[0];
                    uStack_10c = aiStack_98[1];
                  }
                  FUN_140009b9a(local_148,&local_108);
                  FUN_140009b9a(local_158,&local_118);
                  local_c8 = 0;
                  uStack_c0 = 0;
                  local_b8 = 0;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  FUN_1446ddda2(&local_c8,"StatIconMissingSortText",0);
                  FUN_1410d1eba(local_178,&local_c8);
                  FUN_14023409e(&local_168,local_178,1);
                  local_a0 = (undefined2 *)CONCAT44(local_a0._4_4_,4);
                  FUN_14023423e(local_90,local_158);
                  local_80 = 4;
                  FUN_14023423e(local_70,local_148);
                  local_e8 = &local_a0;
                  local_e0 = local_60;
                  FUN_14010d304(&local_d8,&local_e8);
                  local_f8 = local_168;
                  local_f0 = local_160;
                  if (local_160 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_160 + 1) = (int)local_160[1] + 1;
                    UNLOCK();
                  }
                  FUN_14010c016(local_138,&local_f8,&local_d8);
                  FUN_14007f2db(local_d8,local_d0);
                  if (local_d8 != 0) {
                    FUN_1400020a8();
                  }
                  param_2 = local_188;
                  lVar10 = 0x30;
                  do {
                    if (*(longlong **)((longlong)&local_a0 + lVar10) != (longlong *)0x0) {
                      (**(code **)(**(longlong **)((longlong)&local_a0 + lVar10) + 0x10))();
                      *(undefined8 *)((longlong)&local_a0 + lVar10) = 0;
                      *(undefined4 *)(local_90 + lVar10 + -8) = 0;
                    }
                    plVar6 = local_160;
                    lVar10 = lVar10 + -0x20;
                  } while (lVar10 != -0x10);
                  if (local_160 != (longlong *)0x0) {
                    LOCK();
                    plVar9 = local_160 + 1;
                    *(int *)plVar9 = (int)*plVar9 + -1;
                    UNLOCK();
                    if ((int)*plVar9 == 0) {
                      (**(code **)*local_160)(local_160);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar6 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                      }
                    }
                  }
                  if (local_158[0] != (longlong *)0x0) {
                    (**(code **)(*local_158[0] + 0x10))();
                  }
                  if (local_148[0] != (longlong *)0x0) {
                    (**(code **)(*local_148[0] + 0x10))();
                  }
                  plVar6 = local_138[0];
                  plVar9 = local_138[0];
                  if (*(code **)(*local_138[0] + 0x50) != FUN_144828418) {
                    plVar9 = (longlong *)(**(code **)(*local_138[0] + 0x50))(local_138[0]);
                  }
                  FUN_1447a1fc0(plVar9);
                  pcVar3 = *(code **)(*plVar6 + 0x28);
                  if (pcVar3 == FUN_14482841c) {
                    plVar9 = (longlong *)(plVar6[5] + 8);
                    if (plVar6[5] == 0) {
                      plVar9 = plVar6 + 3;
                    }
                  }
                  else if (pcVar3 == (code *)&LAB_14010c34c) {
                    plVar9 = plVar6 + 2;
                  }
                  else {
                    plVar9 = (longlong *)(*pcVar3)(plVar6);
                  }
                  *param_2 = 0;
                  iVar4 = (int)plVar9[1];
                  _Src = (void *)*plVar9;
                  *(int *)(param_2 + 1) = iVar4;
                  if ((longlong)iVar4 == 0) {
                    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
                  }
                  else {
                    FUN_1446dd670(param_2,iVar4,0);
                    memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
                  }
                  lVar10 = local_190;
                  if (plVar6 != (longlong *)0x0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                  }
                  if (local_178[0] != (longlong *)0x0) {
                    (**(code **)(*local_178[0] + 0x10))();
                  }
                  if (local_b0 != 0) {
                    FUN_1400020a8();
                  }
                  bVar5 = false;
                }
                else {
                  *param_2 = local_108;
                  bVar5 = false;
                  local_108 = 0;
                  *(int *)(param_2 + 1) = (int)local_100;
                  *(undefined4 *)((longlong)param_2 + 0xc) = local_100._4_4_;
                  local_100 = 0;
                }
              }
            }
            else {
              bVar5 = true;
              if (*(int *)(lVar10 + 0x360) + local_120 == 1) goto LAB_1442ed234;
            }
LAB_1442ed783:
            if (local_128 != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_114,local_118) != 0) {
              FUN_1400020a8();
            }
            if (local_108 != 0) {
              FUN_1400020a8();
            }
            if (!bVar5) goto LAB_1442ed800;
          }
          plVar18 = plVar18 + 0xc;
        } while (plVar18 != plVar19);
      }
      plVar14 = plVar14 + 3;
    } while (plVar14 != local_180);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1442ed800:
  if ((local_60[0] ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1442ed83a FUN_1442ed83a body=831 status=ok
// SIG undefined FUN_1442ed83a(void)

void FUN_1442ed83a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  uint local_48;
  undefined4 local_44;
  void *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = (void *)0x0;
  local_48 = *(uint *)((undefined8 *)*param_1 + 1);
  lVar4 = (longlong)(int)local_48;
  pvVar3 = *(void **)*param_1;
  if (lVar4 == 0) {
    local_44 = 0;
    local_38 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar3,lVar4 * 2);
    pvVar3 = local_50;
    lVar4 = (longlong)(int)local_48;
    local_40 = (void *)0x0;
    local_38 = local_48;
    if (lVar4 != 0) {
      FUN_1446dd670(&local_40,local_48,0);
      memcpy(local_40,pvVar3,lVar4 * 2);
      goto LAB_1442ed8f9;
    }
  }
  local_40 = (void *)0x0;
  local_34 = 0;
LAB_1442ed8f9:
  pvVar3 = local_40;
  local_70 = (void *)0x0;
  lVar4 = (longlong)(int)local_38;
  local_68 = CONCAT44(local_68._4_4_,local_38);
  if (lVar4 == 0) {
    local_68 = (ulonglong)local_38;
  }
  else {
    FUN_1446dd670(&local_70,local_38,0);
    memcpy(local_70,pvVar3,lVar4 * 2);
  }
  lVar4 = FUN_148eb835c(param_2,&local_70);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (lVar4 == 0) {
    if (*(char *)param_1[1] == '\x01') {
      local_70 = (void *)0x0;
      uVar1 = *(uint *)((undefined8 *)*param_1 + 1);
      pvVar3 = *(void **)*param_1;
      local_68 = CONCAT44(local_68._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        local_68 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_70,uVar1,0);
        memcpy(local_70,pvVar3,(longlong)(int)uVar1 * 2);
      }
      local_60 = (void *)0x0;
      uVar1 = *(uint *)((undefined8 *)param_1[2] + 1);
      pvVar3 = *(void **)param_1[2];
      local_58 = CONCAT44(local_58._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        local_58 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_60,uVar1,0);
        memcpy(local_60,pvVar3,(longlong)(int)uVar1 * 2);
      }
      FUN_1442edb7a(param_2,&local_70,0);
    }
    else {
      local_70 = (void *)0x0;
      uVar1 = *(uint *)((undefined8 *)*param_1 + 1);
      pvVar3 = *(void **)*param_1;
      local_68 = CONCAT44(local_68._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        local_68 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_70,uVar1,0);
        memcpy(local_70,pvVar3,(longlong)(int)uVar1 * 2);
      }
      local_60 = (void *)0x0;
      uVar1 = *(uint *)((undefined8 *)param_1[2] + 1);
      pvVar3 = *(void **)param_1[2];
      local_58 = CONCAT44(local_58._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        local_58 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_60,uVar1,0);
        memcpy(local_60,pvVar3,(longlong)(int)uVar1 * 2);
      }
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_148eb8406(param_2,iVar2);
      }
      lVar4 = *param_2;
      lVar5 = (longlong)iVar2 * 0x20;
      *(undefined8 *)(lVar4 + lVar5) = 0;
      *(void **)(lVar4 + lVar5) = local_70;
      local_70 = (void *)0x0;
      *(undefined4 *)(lVar4 + 8 + lVar5) = (undefined4)local_68;
      *(undefined4 *)(lVar4 + 0xc + lVar5) = local_68._4_4_;
      local_68 = 0;
      *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0;
      *(void **)(lVar4 + 0x10 + lVar5) = local_60;
      local_60 = (void *)0x0;
      *(undefined4 *)(lVar4 + 0x18 + lVar5) = (undefined4)local_58;
      *(undefined4 *)(lVar4 + 0x1c + lVar5) = local_58._4_4_;
      local_58 = 0;
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442edb7a FUN_1442edb7a body=186 status=ok
// SIG undefined FUN_1442edb7a(void)

int FUN_1442edb7a(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148eb8406(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x20;
  memmove((void *)(*param_1 + lVar3 + 0x20),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_3) << 5);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(lVar2 + 0x18 + lVar3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(lVar2 + 0x1c + lVar3) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  return param_3;
}



// FUNCTION 1442edc34 FUN_1442edc34 body=164 status=ok
// SIG undefined FUN_1442edc34(void)

undefined4
FUN_1442edc34(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148eb8e68(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442edcda FUN_1442edcda body=130 status=ok
// SIG undefined FUN_1442edcda(void)

undefined4
FUN_1442edcda(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148eb87ce(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442edd8c FUN_1442edd8c body=12 status=ok
// SIG undefined FUN_1442edd8c(void)

void FUN_1442edd8c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442edd95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442edd98 FUN_1442edd98 body=29 status=ok
// SIG undefined FUN_1442edd98(void)

undefined8 FUN_1442edd98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442edde8 FUN_1442edde8 body=12 status=ok
// SIG undefined FUN_1442edde8(void)

void FUN_1442edde8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442eddf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442eddf4 FUN_1442eddf4 body=29 status=ok
// SIG undefined FUN_1442eddf4(void)

undefined8 FUN_1442eddf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ede12 FUN_1442ede12 body=144 status=ok
// SIG undefined FUN_1442ede12(void)

undefined4 FUN_1442ede12(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = DAT_14cb92cb8;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_48 = &local_40;
    local_40 = uVar2;
    local_38 = uVar1;
    lVar4 = FUN_148eb961c(param_1,lVar4,1,param_2);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442edea4 FUN_1442edea4 body=160 status=ok
// SIG undefined FUN_1442edea4(void)

undefined4 FUN_1442edea4(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cb92cb8;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148eb961c(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442edf46 FUN_1442edf46 body=68 status=ok
// SIG undefined FUN_1442edf46(void)

undefined8 * FUN_1442edf46(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9ccb00;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442edf8a FUN_1442edf8a body=130 status=ok
// SIG undefined FUN_1442edf8a(void)

undefined4
FUN_1442edf8a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148eb9fc2(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ee00e FUN_1442ee00e body=164 status=ok
// SIG undefined FUN_1442ee00e(void)

undefined4
FUN_1442ee00e(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148eba59a(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ee0f0 FUN_1442ee0f0 body=68 status=ok
// SIG undefined FUN_1442ee0f0(void)

undefined8 * FUN_1442ee0f0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9ccdb0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ee134 FUN_1442ee134 body=64 status=ok
// SIG undefined FUN_1442ee134(void)

undefined8 * FUN_1442ee134(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cce20;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ee188 FUN_1442ee188 body=110 status=ok
// SIG undefined FUN_1442ee188(void)

void FUN_1442ee188(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cce20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1442ee1f6 FUN_1442ee1f6 body=110 status=ok
// SIG undefined FUN_1442ee1f6(void)

void FUN_1442ee1f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cce20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1442ee264 FUN_1442ee264 body=148 status=ok
// SIG undefined FUN_1442ee264(void)

void FUN_1442ee264(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cce20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442ee2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442ee302 FUN_1442ee302 body=20 status=ok
// SIG undefined FUN_1442ee302(void)

undefined1 FUN_1442ee302(longlong param_1)

{
  FUN_1442ee316(param_1 + 0x18);
  return 1;
}



// FUNCTION 1442ee316 FUN_1442ee316 body=134 status=ok
// SIG undefined FUN_1442ee316(void)

void FUN_1442ee316(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *param_1;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    if (lVar4 != 0) {
      FUN_148eae082(lVar4,&DAT_14cbdfc90);
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
                    /* WARNING: Could not recover jumptable at 0x0001442ee37f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1442ee3c0 FUN_1442ee3c0 body=130 status=ok
// SIG undefined FUN_1442ee3c0(void)

undefined4
FUN_1442ee3c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148ebc3d0(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ee444 FUN_1442ee444 body=144 status=ok
// SIG undefined FUN_1442ee444(void)

undefined4 FUN_1442ee444(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = DAT_14cbc9d90;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_48 = &local_40;
    local_40 = uVar2;
    local_38 = uVar1;
    lVar4 = FUN_148ebc9a8(param_1,lVar4,1,param_2);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ee4d6 FUN_1442ee4d6 body=160 status=ok
// SIG undefined FUN_1442ee4d6(void)

undefined4 FUN_1442ee4d6(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cbc9d90;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148ebc9a8(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ee578 FUN_1442ee578 body=128 status=ok
// SIG undefined FUN_1442ee578(void)

bool FUN_1442ee578(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  uint uVar9;
  
  puVar4 = &DAT_149dfb77a;
  puVar8 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar8 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar4 = (undefined2 *)*param_2;
  }
  lVar7 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar4 + lVar7);
    uVar5 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar8 + lVar7);
    uVar9 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1442ee5b9;
      }
      iVar6 = uVar5 - uVar9;
      goto LAB_1442ee5e2;
    }
    if (uVar1 == 0) break;
LAB_1442ee5b9:
    lVar7 = lVar7 + 2;
  }
  iVar6 = 0;
LAB_1442ee5e2:
  bVar3 = 0 < iVar6;
  if (*(char *)*param_1 != '\0') {
    bVar3 = iVar6 < 0;
  }
  return bVar3;
}



// FUNCTION 1442ee5f8 FUN_1442ee5f8 body=398 status=ok
// SIG undefined FUN_1442ee5f8(void)

ulonglong FUN_1442ee5f8(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  switch(*(undefined4 *)(*(longlong *)*param_1 + 0x354)) {
  case 0:
  case 2:
    puVar8 = &DAT_149dfb77a;
    puVar9 = &DAT_149dfb77a;
    if (*(int *)(param_3 + 0x18) != 0) {
      puVar9 = *(undefined2 **)(param_3 + 0x10);
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      puVar8 = *(undefined2 **)(param_2 + 0x10);
    }
    cVar6 = *(char *)param_1[1];
    lVar7 = 0;
    do {
      uVar1 = *(ushort *)((longlong)puVar8 + lVar7);
      uVar3 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar9 + lVar7);
      uVar10 = (uint)uVar2;
      if (uVar1 == uVar2) {
        if (uVar1 == 0) goto LAB_1442ee73e;
      }
      else {
        if (0x7f < (uVar2 | uVar1)) goto LAB_1442ee687;
        uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_1442ee687;
      }
      lVar7 = lVar7 + 2;
    } while( true );
  case 1:
    uVar3 = *(uint *)(param_2 + 0x134);
    uVar5 = (ulonglong)uVar3;
    uVar10 = *(uint *)(param_3 + 0x134);
    if (*(char *)param_1[1] == '\x01') {
      return (ulonglong)CONCAT31((int3)(uVar3 >> 8),(int)uVar3 < (int)uVar10);
    }
    bVar12 = SBORROW4(uVar3,uVar10);
    iVar4 = uVar3 - uVar10;
    bVar11 = uVar3 == uVar10;
    break;
  case 3:
    uVar3 = *(uint *)(param_2 + 0x100);
    uVar10 = *(uint *)(param_3 + 0x100);
    if ((uVar3 & uVar10) == 0xffffffff) {
      puVar8 = &DAT_149dfb77a;
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(param_3 + 0x18) != 0) {
        puVar9 = *(undefined2 **)(param_3 + 0x10);
      }
      if (*(int *)(param_2 + 0x18) != 0) {
        puVar8 = *(undefined2 **)(param_2 + 0x10);
      }
      cVar6 = *(char *)param_1[1];
      lVar7 = 0;
      do {
        uVar1 = *(ushort *)((longlong)puVar8 + lVar7);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)puVar9 + lVar7);
        uVar10 = (uint)uVar2;
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_1442ee73e;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) goto LAB_1442ee687;
          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar5 = (ulonglong)uVar10;
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar5]) goto LAB_1442ee687;
        }
        lVar7 = lVar7 + 2;
      } while( true );
    }
    if (uVar3 != 0xffffffff) {
      if (*(char *)param_1[1] == '\x01') {
        bVar11 = (int)uVar3 < (int)uVar10;
      }
      else {
        bVar11 = (int)uVar10 <= (int)uVar3;
      }
      return (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar11 | uVar10 == 0xffffffff);
    }
  default:
    return 0;
  }
  goto LAB_1442ee74f;
LAB_1442ee687:
  uVar5 = (ulonglong)(uVar3 - uVar10);
  goto LAB_1442ee740;
LAB_1442ee73e:
  uVar5 = 0;
LAB_1442ee740:
  iVar4 = (int)uVar5;
  if (cVar6 == '\0') {
    bVar12 = false;
    bVar11 = iVar4 == 0;
LAB_1442ee74f:
    uVar5 = CONCAT71((int7)(uVar5 >> 8),!bVar11 && bVar12 == iVar4 < 0);
  }
  else {
    uVar5 = uVar5 >> 0x1f;
  }
  return uVar5;
}



// FUNCTION 1442ee7cc FUN_1442ee7cc body=12 status=ok
// SIG undefined FUN_1442ee7cc(void)

void FUN_1442ee7cc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442ee7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442ee7d8 FUN_1442ee7d8 body=29 status=ok
// SIG undefined FUN_1442ee7d8(void)

undefined8 FUN_1442ee7d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442ee7f5 FUN_1442ee7f5 body=24970 status=ok
// SIG undefined FUN_1442ee7f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442ee7f5(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  char **local_1a0;
  ulonglong *local_198;
  char *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  ram0x00014cbdd934 = 0;
  FUN_14052b5e0(&DAT_14cbdd930,"character",0);
  ram0x00014cbdd940 = 0;
  FUN_14052b5e0(&DAT_14cbdd93c,"profile",0);
  local_190 = "state_rem";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd948 = (ulonglong)uVar2;
  local_190 = "state_add";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd950 = (ulonglong)uVar2;
  local_190 = "state_remove_primary";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd958 = (ulonglong)uVar2;
  local_190 = "entry_sets";
  local_188._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd960 = (ulonglong)uVar2;
  local_190 = "entries";
  local_188._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd968 = (ulonglong)uVar2;
  local_190 = "menu_title";
  local_188._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd970 = (ulonglong)uVar2;
  local_190 = "actions";
  local_188._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd978 = (ulonglong)uVar2;
  local_190 = "loc_text";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd980 = (ulonglong)uVar2;
  local_190 = "desc_text";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd988 = (ulonglong)uVar2;
  local_190 = "style";
  local_188._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd990 = (ulonglong)uVar2;
  local_190 = "horizontal";
  local_188._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd998 = (ulonglong)uVar2;
  local_190 = "entry_set_default";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd9a0 = (ulonglong)uVar2;
  local_190 = "required_nexus_layer";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd9a8 = (ulonglong)uVar2;
  local_190 = "tooltip_key";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd9b0 = (ulonglong)uVar2;
  local_190 = "set_push";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd9b8 = (ulonglong)uVar2;
  local_190 = "exit_game";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd9c0 = (ulonglong)uVar2;
  local_190 = "back";
  local_188._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd9c8 = (ulonglong)uVar2;
  local_190 = "back_actions";
  local_188._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdd9d0 = (ulonglong)uVar2;
  _DAT_14cbdd9d8 = 0;
  uRam000000014cbdd9e0 = 0;
  _DAT_14cbdd9e8 = 0;
  DAT_14cbdd9f0 = 0;
  uRam000000014cbdd9f8 = 0;
  FUN_1446ddda2(&DAT_14cbdd9d8,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_1442df898);
  local_190 = "basic";
  local_188._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda00 = (ulonglong)uVar2;
  local_190 = "challenge";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda08 = (ulonglong)uVar2;
  local_190 = "online";
  local_188._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda10 = (ulonglong)uVar2;
  local_190 = "social";
  local_188._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda18 = (ulonglong)uVar2;
  local_190 = "alert";
  local_188._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda20 = (ulonglong)uVar2;
  local_190 = "photo_mode";
  local_188._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda28 = (ulonglong)uVar2;
  local_190 = "generic_task";
  local_188._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda30 = (ulonglong)uVar2;
  local_190 = "mission";
  local_188._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda38 = (ulonglong)uVar2;
  local_190 = "mail";
  local_188._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda40 = (ulonglong)uVar2;
  local_190 = "respawn";
  local_188._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda48 = (ulonglong)uVar2;
  local_190 = "tutorial";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda50 = (ulonglong)uVar2;
  local_190 = "special_notification";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda58 = (ulonglong)uVar2;
  local_190 = "generic_notification";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda60 = (ulonglong)uVar2;
  local_190 = "vault_card";
  local_188._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda68 = (ulonglong)uVar2;
  local_190 = "ONLINE_MESSAGE";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda70 = (ulonglong)uVar2;
  local_190 = "INGAME_MESSAGE";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda78 = (ulonglong)uVar2;
  local_190 = "NOTIFICATION_MESSAGE";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda80 = (ulonglong)uVar2;
  local_190 = "MENU_TUTORIAL_MESSAGE";
  local_188._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda88 = (ulonglong)uVar2;
  local_190 = "collectible";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda90 = (ulonglong)uVar2;
  local_190 = "num_rows_override";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdda98 = (ulonglong)uVar2;
  local_190 = "show_capacity_text";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddaa0 = (ulonglong)uVar2;
  local_190 = "num_columns_override";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddaa8 = (ulonglong)uVar2;
  local_190 = "sort_list_config";
  local_188._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddab0 = (ulonglong)uVar2;
  local_190 = "filter_list_config";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddab8 = (ulonglong)uVar2;
  local_190 = "default_sort_ident";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddac0 = (ulonglong)uVar2;
  local_190 = "enable_filter";
  local_188._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddac8 = (ulonglong)uVar2;
  local_190 = "enable_sort";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddad0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbddad8,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_1442df8a9);
  FUN_1400b22c2(&DAT_14cbddae8,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_1442df8ba);
  FUN_1400b22c2(&DAT_14cbddaf8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1442df8cb);
  FUN_1400b22c2(&DAT_14cbddb08,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1442df8dc);
  local_190 = "ITEM_CARD";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddb18 = (ulonglong)uVar2;
  local_190 = "ITEM_CARD_COMPARE";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddb20 = (ulonglong)uVar2;
  local_190 = "MENU_FULL_BACKPACK";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddb28 = (ulonglong)uVar2;
  local_190 = "MENU_POPUP_BACKPACK";
  local_188._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddb30 = (ulonglong)uVar2;
  local_190 = "MENU_PLAYER_STATS";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddb38 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbddb40,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1442df8ed);
  FUN_1400b22c2(&DAT_14cbddb50,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_1442df8fe);
  FUN_1400b22c2(&DAT_14cbddb60,"mark-dropdown");
  atexit((_func_5014 *)&LAB_1442df90f);
  FUN_1400b22c2(&DAT_14cbddb70,"item-dropdown");
  atexit((_func_5014 *)&LAB_1442df920);
  FUN_1400b22c2(&DAT_14cbddb80,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1442df931);
  local_190 = "AssetRegistry";
  local_188 = (undefined *)CONCAT35(local_188._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddb90 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_190,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_190,&DAT_14cbddb98);
  if (cVar1 == '\0') {
    _DAT_14cbddb98 = 0;
    uRam000000014cbddba0 = 0;
  }
  if (local_190 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_190 = "bone";
  local_188._0_5_ = 4;
  FUN_14001a6c0(&local_190,1);
  _DAT_14cbddba8 = 0x47efffffe0000000;
  _DAT_14cbddbb0 = 0x47efffffe0000000;
  _DAT_14cbddbb8 = 0x47efffffe0000000;
  _DAT_14cbddbc0 = 0x47efffffe0000000;
  _DAT_14cbddbc8 = 0x47efffffe0000000;
  _DAT_14cbddbd0 = 0x47efffffe0000000;
  _DAT_14cbddbd8 = 0x47efffffe0000000;
  _DAT_14cbddbe0 = 0x47efffffe0000000;
  _DAT_14cbddbec = 0;
  FUN_14052b5e0(&DAT_14cbddbe8,"PlayerAwareness",0);
  _DAT_14cbddbf8 = "PlayerAwareness";
  FUN_1400b22c2(&DAT_14cbddc00,"#echo_logs_region_unknown");
  atexit((_func_5014 *)&LAB_1442df942);
  iVar3 = DAT_14cbddc08 + -1;
  if (DAT_14cbddc08 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_190,iVar3,DAT_14cbddc00,1);
  _DAT_14cbddc10 = local_190;
  FUN_1400b22c2(&DAT_14cbddc18,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1442df953);
  FUN_1400b22c2(&DAT_14cbddc28,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_1442df964);
  FUN_1400b22c2(&DAT_14cbddc38,"Popup");
  atexit((_func_5014 *)&LAB_1442df975);
  FUN_1400b22c2(&DAT_14cbddc48,"Fullsize");
  atexit((_func_5014 *)&LAB_1442df986);
  FUN_1400b22c2(&DAT_14cbddc58,"EchoLogs");
  atexit((_func_5014 *)&LAB_1442df997);
  FUN_1400b22c2(&DAT_14cbddc68,"PlayerStats");
  atexit((_func_5014 *)&LAB_1442df9a8);
  FUN_1400b22c2(&DAT_14cbddc78,"RewardCenter");
  atexit((_func_5014 *)&LAB_1442df9b9);
  FUN_140056680(&DAT_14cbddc88,L"reset");
  atexit((_func_5014 *)&LAB_1442df9ca);
  local_190 = "add_on_activate";
  local_188._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddc98 = (ulonglong)uVar2;
  local_190 = "remove_on_deactivate";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddca0 = (ulonglong)uVar2;
  local_190 = "filter_selected";
  local_188._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddca8 = (ulonglong)uVar2;
  local_190 = "hide_messages_on_deactivate";
  local_188._0_5_ = 0x1b;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddcb0 = (ulonglong)uVar2;
  local_190 = "drop_action_supported";
  local_188._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddcb8 = (ulonglong)uVar2;
  local_190 = "equip_action_supported";
  local_188._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddcc0 = (ulonglong)uVar2;
  local_190 = "unequip_action_supported";
  local_188._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddcc8 = (ulonglong)uVar2;
  local_190 = "compare_action_supported";
  local_188._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddcd0 = (ulonglong)uVar2;
  local_190 = "mark_item_action_supported";
  local_188._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddcd8 = (ulonglong)uVar2;
  local_190 = "mark_multiple_items_supported";
  local_188._0_5_ = 0x1d;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddce0 = (ulonglong)uVar2;
  local_190 = "remote_inventory_action_supported";
  local_188._0_5_ = 0x21;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddce8 = (ulonglong)uVar2;
  local_190 = "unequip_message_ident";
  local_188._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddcf0 = (ulonglong)uVar2;
  local_190 = "equip_message_ident";
  local_188._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddcf8 = (ulonglong)uVar2;
  local_190 = "swap_message_ident";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd00 = (ulonglong)uVar2;
  local_190 = "drop_message_ident";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd08 = (ulonglong)uVar2;
  local_190 = "cant_equip_message_ident";
  local_188._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd10 = (ulonglong)uVar2;
  local_190 = "insufficient_space_error_ident";
  local_188._0_5_ = 0x1e;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd18 = (ulonglong)uVar2;
  local_190 = "multiple_item_deposit_ident";
  local_188._0_5_ = 0x1b;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd20 = (ulonglong)uVar2;
  local_190 = "deposit_message_ident";
  local_188._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd28 = (ulonglong)uVar2;
  local_190 = "incomplete_deposit_ident";
  local_188._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd30 = (ulonglong)uVar2;
  local_190 = "backpack_class_html";
  local_188._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd38 = (ulonglong)uVar2;
  local_190 = "standin_config";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd40 = (ulonglong)uVar2;
  local_190 = "player_standin_tag";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd48 = (ulonglong)uVar2;
  local_190 = "echo_bot_standin_tag";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd50 = (ulonglong)uVar2;
  local_190 = "sortable_numeric_stats";
  local_188._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd58 = (ulonglong)uVar2;
  local_190 = "escape_hold_supported";
  local_188._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd60 = (ulonglong)uVar2;
  local_190 = "max_visible_items";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbddd68 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbddd70,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_1442df9db);
  FUN_140056680(&DAT_14cbddd80,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_1442df9ec);
  FUN_140056680(&DAT_14cbddd90,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_1442df9fd);
  FUN_140056680(&DAT_14cbddda0,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_1442dfa0e);
  FUN_140056680(&DAT_14cbdddb0,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_1442dfa1f);
  FUN_140056680(&DAT_14cbdddc0,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_1442dfa30);
  FUN_140056680(&DAT_14cbdddd0,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_1442dfa41);
  FUN_140056680(&DAT_14cbddde0,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_1442dfa52);
  FUN_140056680(&DAT_14cbdddf0,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_1442dfa63);
  FUN_140056680(&DAT_14cbdde00,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_1442dfa74);
  FUN_140056680(&DAT_14cbdde10,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_1442dfa85);
  FUN_140056680(&DAT_14cbdde20,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_1442dfa96);
  FUN_140056680(&DAT_14cbdde30,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_1442dfaa7);
  FUN_140056680(&DAT_14cbdde40,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_1442dfab8);
  FUN_140056680(&DAT_14cbdde50,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_1442dfac9);
  FUN_140056680(&DAT_14cbdde60,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_1442dfada);
  FUN_140056680(&DAT_14cbdde70,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_1442dfaeb);
  FUN_140056680(&DAT_14cbdde80,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_1442dfafc);
  FUN_140056680(&DAT_14cbdde90,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_1442dfb0d);
  FUN_140056680(&DAT_14cbddea0,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_1442dfb1e);
  FUN_140056680(&DAT_14cbddeb0,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_1442dfb2f);
  FUN_140056680(&DAT_14cbddec0,L"SelectText");
  atexit((_func_5014 *)&LAB_1442dfb40);
  FUN_140056680(&DAT_14cbdded0,L"CompareHint");
  atexit((_func_5014 *)&LAB_1442dfb51);
  FUN_140056680(&DAT_14cbddee0,L"EquipHint");
  atexit((_func_5014 *)&LAB_1442dfb62);
  FUN_140056680(&DAT_14cbddef0,L"UnequipHint");
  atexit((_func_5014 *)&LAB_1442dfb73);
  FUN_140056680(&DAT_14cbddf00,L"DropHint");
  atexit((_func_5014 *)&LAB_1442dfb84);
  FUN_140056680(&DAT_14cbddf10,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_1442dfb95);
  FUN_140056680(&DAT_14cbddf20,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_1442dfba6);
  FUN_140056680(&DAT_14cbddf30,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_1442dfbb7);
  FUN_140056680(&DAT_14cbddf40,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_1442dfbc8);
  FUN_140056680(&DAT_14cbddf50,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_1442dfbd9);
  FUN_140056680(&DAT_14cbddf60,L"BackText");
  atexit((_func_5014 *)&LAB_1442dfbea);
  FUN_140056680(&DAT_14cbddf70,L"SellHint");
  atexit((_func_5014 *)&LAB_1442dfbfb);
  FUN_140056680(&DAT_14cbddf80,L"BuyHint");
  atexit((_func_5014 *)&LAB_1442dfc0c);
  FUN_140056680(&DAT_14cbddf90,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_1442dfc1d);
  FUN_140056680(&DAT_14cbddfa0,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_1442dfc2e);
  FUN_1400b22c2(&DAT_14cbddfb0,"trash");
  atexit((_func_5014 *)&LAB_1442dfc3f);
  FUN_1400b22c2(&DAT_14cbddfc0,"favorite");
  atexit((_func_5014 *)&LAB_1442dfc50);
  FUN_1400b22c2(&DAT_14cbddfd0,"bankdeposit");
  atexit((_func_5014 *)&LAB_1442dfc61);
  FUN_1400b22c2(&DAT_14cbddfe0,"taggroup1");
  atexit((_func_5014 *)&LAB_1442dfc72);
  FUN_1400b22c2(&DAT_14cbddff0,"taggroup2");
  atexit((_func_5014 *)&LAB_1442dfc83);
  FUN_1400b22c2(&DAT_14cbde000,"taggroup3");
  atexit((_func_5014 *)&LAB_1442dfc94);
  FUN_1400b22c2(&DAT_14cbde010,"taggroup4");
  atexit((_func_5014 *)&LAB_1442dfca5);
  local_190 = "trash";
  local_188._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde020 = (ulonglong)uVar2;
  local_190 = "favorite";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde028 = (ulonglong)uVar2;
  local_190 = "bankdeposit";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde030 = (ulonglong)uVar2;
  local_190 = "taggroup1";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde038 = (ulonglong)uVar2;
  local_190 = "taggroup2";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde040 = (ulonglong)uVar2;
  local_190 = "taggroup3";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde048 = (ulonglong)uVar2;
  local_190 = "taggroup4";
  local_188 = (undefined *)CONCAT35(local_188._5_3_,9);
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde050 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbde058,"OpenBackpack");
  atexit((_func_5014 *)&LAB_1442dfcb6);
  FUN_1400b22c2(&DAT_14cbde068,"CloseBackpack");
  atexit((_func_5014 *)&LAB_1442dfcc7);
  FUN_1400b22c2(&DAT_14cbde078,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_1442dfcd8);
  FUN_1400b22c2(&DAT_14cbde088,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_1442dfce9);
  FUN_1400b22c2(&DAT_14cbde098,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_1442dfcfa);
  FUN_1400b22c2(&DAT_14cbde0a8,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_1442dfd0b);
  FUN_1400b22c2(&DAT_14cbde0b8,"CompareStart");
  atexit((_func_5014 *)&LAB_1442dfd1c);
  FUN_1400b22c2(&DAT_14cbde0c8,"CompareStop");
  atexit((_func_5014 *)&LAB_1442dfd2d);
  FUN_1400b22c2(&DAT_14cbde0d8,"UnequipItem");
  atexit((_func_5014 *)&LAB_1442dfd3e);
  FUN_1400b22c2(&DAT_14cbde0e8,"EquipItem");
  atexit((_func_5014 *)&LAB_1442dfd4f);
  FUN_1400b22c2(&DAT_14cbde0f8,"DropItem");
  atexit((_func_5014 *)&LAB_1442dfd60);
  FUN_1400b22c2(&DAT_14cbde108,"MarkItem");
  atexit((_func_5014 *)&LAB_1442dfd71);
  FUN_1400b22c2(&DAT_14cbde118,"Error");
  atexit((_func_5014 *)&LAB_1442dfd82);
  FUN_1400b22c2(&DAT_14cbde128,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_1442dfd93);
  FUN_1400b22c2(&DAT_14cbde138,"ElementFocused");
  atexit((_func_5014 *)&LAB_1442dfda4);
  FUN_1400b22c2(&DAT_14cbde148,"ElementClicked");
  atexit((_func_5014 *)&LAB_1442dfdb5);
  FUN_1400b22c2(&DAT_14cbde158,"EscapeInput");
  atexit((_func_5014 *)&LAB_1442dfdc6);
  FUN_1400b22c2(&DAT_14cbde168,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_1442dfdd7);
  FUN_1400b22c2(&DAT_14cbde178,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_1442dfde8);
  FUN_1400b22c2(&DAT_14cbde188,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_1442dfdf9);
  FUN_1400b22c2(&DAT_14cbde198,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_1442dfe0a);
  FUN_1400b22c2(&DAT_14cbde1a8,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_1442dfe1b);
  FUN_1400b22c2(&DAT_14cbde1b8,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_1442dfe2c);
  FUN_1400b22c2(&DAT_14cbde1c8,"MarkItemBank");
  atexit((_func_5014 *)&LAB_1442dfe3d);
  FUN_1400b22c2(&DAT_14cbde1d8,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_1442dfe4e);
  FUN_1400b22c2(&DAT_14cbde1e8,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_1442dfe5f);
  FUN_1400b22c2(&DAT_14cbde1f8,"ClickPistol");
  atexit((_func_5014 *)&LAB_1442dfe70);
  FUN_1400b22c2(&DAT_14cbde208,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_1442dfe81);
  FUN_1400b22c2(&DAT_14cbde218,"ClickSMG");
  atexit((_func_5014 *)&LAB_1442dfe92);
  FUN_1400b22c2(&DAT_14cbde228,"ClickShotgun");
  atexit((_func_5014 *)&LAB_1442dfea3);
  FUN_1400b22c2(&DAT_14cbde238,"ClickSniper");
  atexit((_func_5014 *)&LAB_1442dfeb4);
  FUN_1400b22c2(&DAT_14cbde248,"ClickRepKit");
  atexit((_func_5014 *)&LAB_1442dfec5);
  FUN_1400b22c2(&DAT_14cbde258,"ClickGrenade");
  atexit((_func_5014 *)&LAB_1442dfed6);
  FUN_1400b22c2(&DAT_14cbde268,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_1442dfee7);
  FUN_1400b22c2(&DAT_14cbde278,"ClickClassMod");
  atexit((_func_5014 *)&LAB_1442dfef8);
  FUN_1400b22c2(&DAT_14cbde288,"ClickGadget");
  atexit((_func_5014 *)&LAB_1442dff09);
  FUN_1400b22c2(&DAT_14cbde298,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_1442dff1a);
  FUN_1400b22c2(&DAT_14cbde2a8,"ClickShield");
  atexit((_func_5014 *)&LAB_1442dff2b);
  FUN_1400b22c2(&DAT_14cbde2b8,"EquipPistol");
  atexit((_func_5014 *)&LAB_1442dff3c);
  FUN_1400b22c2(&DAT_14cbde2c8,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_1442dff4d);
  FUN_1400b22c2(&DAT_14cbde2d8,"EquipSMG");
  atexit((_func_5014 *)&LAB_1442dff5e);
  FUN_1400b22c2(&DAT_14cbde2e8,"EquipShotgun");
  atexit((_func_5014 *)&LAB_1442dff6f);
  FUN_1400b22c2(&DAT_14cbde2f8,"EquipSniper");
  atexit((_func_5014 *)&LAB_1442dff80);
  FUN_1400b22c2(&DAT_14cbde308,"EquipRepKit");
  atexit((_func_5014 *)&LAB_1442dff91);
  FUN_1400b22c2(&DAT_14cbde318,"EquipGrenade");
  atexit((_func_5014 *)&LAB_1442dffa2);
  FUN_1400b22c2(&DAT_14cbde328,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_1442dffb3);
  FUN_1400b22c2(&DAT_14cbde338,"EquipClassMod");
  atexit((_func_5014 *)&LAB_1442dffc4);
  FUN_1400b22c2(&DAT_14cbde348,"EquipGadget");
  atexit((_func_5014 *)&LAB_1442dffd5);
  FUN_1400b22c2(&DAT_14cbde358,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_1442dffe6);
  FUN_1400b22c2(&DAT_14cbde368,"EquipShield");
  atexit((_func_5014 *)&LAB_1442dfff7);
  FUN_1400b22c2(&DAT_14cbde378,"weapon");
  atexit((_func_5014 *)&LAB_1442e0008);
  FUN_1400b22c2(&DAT_14cbde388,"weapon_ps");
  atexit((_func_5014 *)&LAB_1442e0019);
  FUN_1400b22c2(&DAT_14cbde398,"weapon_ar");
  atexit((_func_5014 *)&LAB_1442e002a);
  FUN_1400b22c2(&DAT_14cbde3a8,"weapon_sg");
  atexit((_func_5014 *)&LAB_1442e003b);
  FUN_1400b22c2(&DAT_14cbde3b8,"weapon_sr");
  atexit((_func_5014 *)&LAB_1442e004c);
  FUN_1400b22c2(&DAT_14cbde3c8,"weapon_sm");
  atexit((_func_5014 *)&LAB_1442e005d);
  FUN_1400b22c2(&DAT_14cbde3d8,"grenade_gadget");
  atexit((_func_5014 *)&LAB_1442e006e);
  FUN_1400b22c2(&DAT_14cbde3e8,"shield");
  atexit((_func_5014 *)&LAB_1442e007f);
  FUN_1400b22c2(&DAT_14cbde3f8,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_1442e0090);
  FUN_1400b22c2(&DAT_14cbde408,"repair_kit");
  atexit((_func_5014 *)&LAB_1442e00a1);
  FUN_1400b22c2(&DAT_14cbde418,"classmod");
  atexit((_func_5014 *)&LAB_1442e00b2);
  FUN_1400b22c2(&DAT_14cbde428,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_1442e00c3);
  FUN_1400b22c2(&DAT_14cbde438,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_1442e00d4);
  FUN_1400b22c2(&DAT_14cbde448,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_1442e00e5);
  FUN_1400b22c2(&DAT_14cbde458,"classmod_paladin");
  atexit((_func_5014 *)&LAB_1442e00f6);
  FUN_1400b22c2(&DAT_14cbde468,"gadget");
  atexit((_func_5014 *)&LAB_1442e0107);
  FUN_1400b22c2(&DAT_14cbde478,"enhancement");
  atexit((_func_5014 *)&LAB_1442e0118);
  FUN_140056680(&DAT_14cbde488,L"recent");
  atexit((_func_5014 *)&LAB_1442e0129);
  FUN_140056680(&DAT_14cbde498,L"type");
  atexit((_func_5014 *)&LAB_1442e013a);
  FUN_140056680(&DAT_14cbde4a8,L"level");
  atexit((_func_5014 *)&LAB_1442e014b);
  FUN_140056680(&DAT_14cbde4b8,L"base_name");
  atexit((_func_5014 *)&LAB_1442e015c);
  FUN_140056680(&DAT_14cbde4c8,L"first_letter");
  atexit((_func_5014 *)&LAB_1442e016d);
  FUN_140056680(&DAT_14cbde4d8,L"value");
  atexit((_func_5014 *)&LAB_1442e017e);
  FUN_140056680(&DAT_14cbde4e8,L"rarity");
  atexit((_func_5014 *)&LAB_1442e018f);
  FUN_140056680(&DAT_14cbde4f8,L"manufacturer");
  atexit((_func_5014 *)&LAB_1442e01a0);
  _Src = DAT_14cbddc18;
  DAT_14cbde508 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbddc20;
  _DAT_14cbde510 = DAT_14cbddc20;
  if (lVar5 == 0) {
    _DAT_14cbde514 = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbde508,DAT_14cbddc20,0);
    memcpy(DAT_14cbde508,_Src,lVar5 * 2);
  }
  atexit((_func_5014 *)&LAB_1442e01b1);
  FUN_140056680(&DAT_14cbde518,L"healing");
  atexit((_func_5014 *)&LAB_1442e01c2);
  local_190 = "cancel";
  local_188._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde528 = (ulonglong)uVar2;
  local_190 = "partial";
  local_188._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde530 = (ulonglong)uVar2;
  local_190 = "all";
  local_188._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde538 = (ulonglong)uVar2;
  local_190 = "Cash";
  local_188._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde540 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbde548,L"UNSET",1);
  local_190 = "init";
  local_188._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde550 = (ulonglong)uVar2;
  local_190 = "update";
  local_188._0_5_ = 6;
  FUN_14001a6c0(&local_190,1);
  local_190 = "config_update";
  local_188._0_5_ = 0xd;
  FUN_14001a6c0(&local_190,1);
  local_190 = "deinit";
  local_188._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde558 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbde560,L"Party",1);
  FUN_1446f470e(&DAT_14cbde568,&DAT_149e063b2,1);
  local_190 = "state_remove_primary";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde570 = (ulonglong)uVar2;
  local_190 = "state_add_primary";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde578 = (ulonglong)uVar2;
  local_190 = "state_add";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde580 = (ulonglong)uVar2;
  local_190 = "state_rem";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde588 = (ulonglong)uVar2;
  local_190 = "set_menu_state";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde590 = (ulonglong)uVar2;
  local_190 = "set_active_options";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde598 = (ulonglong)uVar2;
  _DAT_14cbde5a8 = 0;
  _DAT_14cbde5b0 = FUN_1466512b0;
  _DAT_14cbde5b8 = "menu_echo_logs";
  _DAT_14cbde5a0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbde5a0;
  atexit((_func_5014 *)&LAB_1442e01d3);
  local_1a8 = 0;
  FUN_14153156c(&DAT_14cbde5c0,L"OakUI.EchoLogs.ClearPipsOnHover",&DAT_14c764094,
                L"Whether to clear pips on hover or click");
  atexit(FUN_1442e01df);
  FUN_1400b22c2(&DAT_14cbde5d0,"item-dropdown");
  atexit((_func_5014 *)&LAB_1442e0224);
  FUN_1400b22c2(&DAT_14cbde5e0,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1442e0235);
  FUN_1400b22c2(&DAT_14cbde5f0,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1442e0246);
  FUN_1400b22c2(&DAT_14cbde600,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_1442e0257);
  local_190 = "StandIn.Echo4";
  local_188._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde610 = (ulonglong)uVar2;
  local_190 = "Trick.StandIn.Echo4.Celebrate";
  local_188._0_5_ = 0x1d;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde618 = (ulonglong)uVar2;
  local_190 = "Trick.StandIn.Echo4.FullyUpgraded";
  local_188._0_5_ = 0x21;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde620 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbde628,"Upgraded");
  atexit((_func_5014 *)&LAB_1442e141e);
  FUN_1400b22c2(&DAT_14cbde638,"InsufficientPoints");
  atexit((_func_5014 *)&LAB_1442e142f);
  _DAT_14cbde648 = 0;
  uRam000000014cbde650 = 0;
  _DAT_14cbde658 = 0;
  DAT_14cbde660 = 0;
  uRam000000014cbde668 = 0;
  FUN_1446ddda2(&DAT_14cbde648,"EchoUpgrade_ProgressText",0);
  atexit((_func_5014 *)&LAB_1442e1440);
  local_190 = "ui_message_echo_completed";
  local_188._0_5_ = 0x19;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde670 = (ulonglong)uVar2;
  local_190 = "ui_message_echo_upgraded";
  local_188._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde678 = (ulonglong)uVar2;
  local_190 = "ui_message_echo_tokens";
  local_188._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde680 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbde688,"StartTutorial");
  atexit((_func_5014 *)&LAB_1442e1451);
  _DAT_14cbde6a0 = 0;
  _DAT_14cbde6a8 = FUN_1466517c0;
  _DAT_14cbde6b0 = "menu_echo_upgrade_class";
  _DAT_14cbde698 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbde698;
  atexit((_func_5014 *)&LAB_1442e1462);
  local_190 = "Use";
  local_188._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde6b8 = (ulonglong)uVar2;
  local_190 = "Sight";
  local_188._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde6c0 = (ulonglong)uVar2;
  local_190 = "TargetLock";
  local_188._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde6c8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbde6d0,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1442e16d1);
  FUN_140056680(&DAT_14cbde6e0,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1442e16e2);
  FUN_140056680(&DAT_14cbde6f0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1442e16f3);
  FUN_140056680(&DAT_14cbde700,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1442e1704);
  FUN_1446f470e(&DAT_14cbde710,L"LIMB_GORED",1);
  _DAT_14cbde718 = 0x4072c00000000000;
  _DAT_14cbde720 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbde728,L"body",1);
  FUN_1446f470e(&DAT_14cbde730,L"title_card",1);
  _DAT_14cbde740 = 0;
  _DAT_14cbde748 = FUN_14665191c;
  _DAT_14cbde750 = "menu_equip";
  _DAT_14cbde738 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbde738;
  atexit((_func_5014 *)&LAB_1442e1715);
  FUN_1400b22c2(&DAT_14cbde758,"item-dropdown");
  atexit((_func_5014 *)&LAB_1442e1721);
  local_190 = "backpack_displayed";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde768 = (ulonglong)uVar2;
  local_190 = "full_backpack_displayed";
  local_188._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde770 = (ulonglong)uVar2;
  local_190 = "remove_on_deactivate";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde778 = (ulonglong)uVar2;
  local_190 = "add_on_activate";
  local_188._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde780 = (ulonglong)uVar2;
  local_190 = "echo_bot_standin_tag";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde788 = (ulonglong)uVar2;
  local_190 = "player_standin_tag";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde790 = (ulonglong)uVar2;
  local_190 = "challenge_list_def";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde798 = (ulonglong)uVar2;
  local_190 = "exit_menu";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde7a0 = (ulonglong)uVar2;
  local_1a8 = 0;
  FUN_14153156c(&DAT_14cbde7a8,L"OakUI.EquipMenu.ShowEchoBotInPopupBackpack",&DAT_14c764095,
                L"Whether to show the EchoBot standin in the Popup Backpack");
  atexit(FUN_1442e1732);
  local_190 = "Backpack";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde7b8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbde7c0,L"firmware_tooltip");
  atexit((_func_5014 *)&LAB_1442e2b16);
  _DAT_14cbde7d8 = 0;
  _DAT_14cbde7e0 = FUN_146652072;
  _DAT_14cbde7e8 = "equipped_firmware_widget";
  _DAT_14cbde7d0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbde7d0;
  atexit((_func_5014 *)&LAB_1442e2b27);
  _DAT_14cbde7f8 = 0;
  _DAT_14cbde800 = FUN_146652396;
  _DAT_14cbde808 = "eula_screen";
  _DAT_14cbde7f0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbde7f0;
  atexit((_func_5014 *)&LAB_1442e2b33);
  FUN_140056680(&DAT_14cbde810,L"available");
  atexit((_func_5014 *)&LAB_1442e2b3f);
  FUN_140056680(&DAT_14cbde820,L"synced");
  atexit((_func_5014 *)&LAB_1442e2b50);
  FUN_140056680(&DAT_14cbde830,L"offline");
  atexit((_func_5014 *)&LAB_1442e2b61);
  FUN_140056680(&DAT_14cbde840,L"incompatible");
  atexit((_func_5014 *)&LAB_1442e2b72);
  FUN_140056680(&DAT_14cbde850,L"conflict");
  atexit((_func_5014 *)&LAB_1442e2b83);
  _DAT_14cbde860 = 0;
  uRam000000014cbde868 = 0;
  _DAT_14cbde870 = 0;
  DAT_14cbde878 = 0;
  uRam000000014cbde880 = 0;
  FUN_1446ddda2(&DAT_14cbde860,"MainMenuVersionText",0);
  atexit((_func_5014 *)&LAB_1442e2b94);
  _DAT_14cbde888 = 0;
  uRam000000014cbde890 = 0;
  _DAT_14cbde898 = 0;
  DAT_14cbde8a0 = 0;
  uRam000000014cbde8a8 = 0;
  FUN_1446ddda2(&DAT_14cbde888,"MainMenuVersionUpdateReadyText",0);
  atexit((_func_5014 *)&LAB_1442e2ba5);
  local_190 = "show_max_saves";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde8b0 = (ulonglong)uVar2;
  local_190 = "uvh_apply_db";
  local_188._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde8b8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbde8c0,L"Quality",1);
  FUN_1446f470e(&DAT_14cbde8c8,L"Performance");
  _DAT_14cbde8d0 = 0;
  uRam000000014cbde8d8 = 0;
  _DAT_14cbde8e0 = 0;
  DAT_14cbde8e8 = 0;
  uRam000000014cbde8f0 = 0;
  FUN_1446ddda2(&DAT_14cbde8d0,"Default",0);
  atexit((_func_5014 *)&LAB_1442e2bb6);
  local_190 = "Char_Placeholder";
  local_188._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde8f8 = (ulonglong)uVar2;
  local_190 = "cancel";
  local_188._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde900 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbde908,&DAT_149e06384,1);
  FUN_1446f470e(&DAT_14cbde910,&DAT_149e06338,1);
  FUN_1446f470e(&DAT_14cbde918,L"confirm");
  local_190 = "offline";
  local_188._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde920 = (ulonglong)uVar2;
  _DAT_14cbde928 = 0;
  uRam000000014cbde930 = 0;
  _DAT_14cbde938 = 0;
  DAT_14cbde940 = 0;
  uRam000000014cbde948 = 0;
  FUN_1446ddda2(&DAT_14cbde928,"offline",0);
  atexit((_func_5014 *)&LAB_1442e2bc7);
  _DAT_14cbde950 = 0;
  uRam000000014cbde958 = 0;
  _DAT_14cbde960 = 0;
  DAT_14cbde968 = 0;
  uRam000000014cbde970 = 0;
  FUN_1446ddda2(&DAT_14cbde950,"local_only",0);
  atexit((_func_5014 *)&LAB_1442e2bd8);
  local_190 = "lan";
  local_188._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbde978 = (ulonglong)uVar2;
  _DAT_14cbde980 = 0;
  uRam000000014cbde988 = 0;
  _DAT_14cbde990 = 0;
  DAT_14cbde998 = 0;
  uRam000000014cbde9a0 = 0;
  FUN_1446ddda2(&DAT_14cbde980,&DAT_14b842e21,0);
  atexit((_func_5014 *)&LAB_1442e2be9);
  local_190 = "online_public";
  local_188._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde9a8 = (ulonglong)uVar2;
  _DAT_14cbde9b0 = 0;
  uRam000000014cbde9b8 = 0;
  _DAT_14cbde9c0 = 0;
  DAT_14cbde9c8 = 0;
  uRam000000014cbde9d0 = 0;
  FUN_1446ddda2(&DAT_14cbde9b0,"online_public",0);
  atexit((_func_5014 *)&LAB_1442e2bfa);
  local_190 = "online_friends";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbde9d8 = (ulonglong)uVar2;
  _DAT_14cbde9e0 = 0;
  uRam000000014cbde9e8 = 0;
  _DAT_14cbde9f0 = 0;
  DAT_14cbde9f8 = 0;
  uRam000000014cbdea00 = 0;
  FUN_1446ddda2(&DAT_14cbde9e0,"online_friends",0);
  atexit((_func_5014 *)&LAB_1442e2c0b);
  local_190 = "online_invite";
  local_188._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdea08 = (ulonglong)uVar2;
  _DAT_14cbdea10 = 0;
  uRam000000014cbdea18 = 0;
  _DAT_14cbdea20 = 0;
  DAT_14cbdea28 = 0;
  uRam000000014cbdea30 = 0;
  FUN_1446ddda2(&DAT_14cbdea10,"online_invite",0);
  atexit((_func_5014 *)&LAB_1442e2c1c);
  _DAT_14cbdea40 = 0;
  _DAT_14cbdea48 = FUN_146652664;
  _DAT_14cbdea50 = "menu_game_settings";
  _DAT_14cbdea38 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdea38;
  atexit((_func_5014 *)&LAB_1442e2c2d);
  local_190 = "difficulty_dropdown";
  local_188._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdea58 = (ulonglong)uVar2;
  local_190 = "vaulthunterdifficulty_dropdown";
  local_188._0_5_ = 0x1e;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdea60 = (ulonglong)uVar2;
  local_190 = "NetworkModeIdent";
  local_188._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdea68 = (ulonglong)uVar2;
  local_190 = "groupprivacy_values";
  local_188._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdea70 = (ulonglong)uVar2;
  local_190 = "CrossplayToggleIdent";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdea78 = (ulonglong)uVar2;
  local_190 = "truemode_toggle";
  local_188._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdea80 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdea88,L"tooltip_difficulty");
  atexit((_func_5014 *)&LAB_1442e2c39);
  FUN_140056680(&DAT_14cbdea98,L"tooltip_vault_hunter_level");
  atexit((_func_5014 *)&LAB_1442e2c4a);
  FUN_140056680(&DAT_14cbdeaa8,L"tooltip_group_privacy");
  atexit((_func_5014 *)&LAB_1442e2c5b);
  FUN_140056680(&DAT_14cbdeab8,L"tooltip_crossplay");
  atexit((_func_5014 *)&LAB_1442e2c6c);
  FUN_140056680(&DAT_14cbdeac8,L"tooltip_true_mode");
  atexit((_func_5014 *)&LAB_1442e2c7d);
  _DAT_14cbdead8 = 0;
  uRam000000014cbdeae0 = 0;
  _DAT_14cbdeae8 = 0;
  DAT_14cbdeaf0 = 0;
  uRam000000014cbdeaf8 = 0;
  FUN_1446ddda2(&DAT_14cbdead8,"GameSettings_VaultHunterModeOff");
  atexit((_func_5014 *)&LAB_1442e2c8e);
  local_190 = "is_frontend";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdeb00 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdeb08,"ElementClicked");
  atexit((_func_5014 *)&LAB_1442e2c9f);
  _DAT_14cbdeb20 = 0;
  _DAT_14cbdeb28 = FUN_1466528c6;
  _DAT_14cbdeb30 = "hint_bar_class";
  _DAT_14cbdeb18 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdeb18;
  atexit((_func_5014 *)&LAB_1442e2cb0);
  _DAT_14cbdeb40 = 0;
  _DAT_14cbdeb48 = FUN_146652ac6;
  _DAT_14cbdeb50 = "inventory_class";
  _DAT_14cbdeb38 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdeb38;
  atexit((_func_5014 *)&LAB_1442e2cbc);
  _DAT_14cbdeb60 = 0;
  _DAT_14cbdeb68 = FUN_146652b1c;
  _DAT_14cbdeb70 = "inventory_ammo";
  _DAT_14cbdeb58 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdeb58;
  atexit((_func_5014 *)&LAB_1442e2cc8);
  FUN_140056680(&DAT_14cbdeb78,L"incomplete");
  atexit((_func_5014 *)&LAB_1442e2cd4);
  FUN_140056680(&DAT_14cbdeb88,L"eridium_reward");
  atexit((_func_5014 *)&LAB_1442e2ce5);
  FUN_140056680(&DAT_14cbdeb98,L"rank_complete");
  atexit((_func_5014 *)&LAB_1442e2cf6);
  FUN_140056680(&DAT_14cbdeba8,L"challenge_complete");
  atexit((_func_5014 *)&LAB_1442e2d07);
  _DAT_14cbdebbc = 0;
  _DAT_14cbdebc0 = 0;
  FUN_14052b5e0(&DAT_14cbdebb8,"MENU_CUSTOMIZATION_CHARACTER",0);
  _DAT_14cbdebc8 = "MENU_CUSTOMIZATION_CHARACTER";
  _DAT_14cbdebd4 = 0;
  _DAT_14cbdebd8 = 0;
  FUN_14052b5e0(&DAT_14cbdebd0,"MENU_CUSTOMIZATION_ECHO",0);
  _DAT_14cbdebe0 = "MENU_CUSTOMIZATION_ECHO";
  _DAT_14cbdebec = 0;
  _DAT_14cbdebf0 = 0;
  FUN_14052b5e0(&DAT_14cbdebe8,"MENU_CUSTOMIZATION_VEHICLE",0);
  _DAT_14cbdebf8 = "MENU_CUSTOMIZATION_VEHICLE";
  _DAT_14cbdec04 = 0;
  _DAT_14cbdec08 = 0;
  FUN_14052b5e0(&DAT_14cbdec00,"MENU_CUSTOMIZATION_WEAPON",0);
  _DAT_14cbdec10 = "MENU_CUSTOMIZATION_WEAPON";
  _DAT_14cbdec1c = 0;
  _DAT_14cbdec20 = 0;
  FUN_14052b5e0(&DAT_14cbdec18,&DAT_14b417908);
  _DAT_14cbdec28 = &DAT_14b417908;
  _DAT_14cbdec34 = 0;
  _DAT_14cbdec38 = 0;
  FUN_14052b5e0(&DAT_14cbdec30,"detailed_list");
  _DAT_14cbdec40 = "detailed_list";
  _DAT_14cbdec4c = 0;
  _DAT_14cbdec50 = 0;
  FUN_14052b5e0(&DAT_14cbdec48,&DAT_14b81bdf4);
  _DAT_14cbdec58 = &DAT_14b81bdf4;
  _DAT_14cbdec64 = 0;
  _DAT_14cbdec68 = 0;
  FUN_14052b5e0(&DAT_14cbdec60,"backpack");
  _DAT_14cbdec70 = "backpack";
  _DAT_14cbdec80 = 0;
  _DAT_14cbdec88 = FUN_145f9a6b8;
  _DAT_14cbdec90 = "item_inspect";
  _DAT_14cbdec78 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdec78;
  atexit((_func_5014 *)&LAB_1442e2d18);
  local_190 = "standin_config";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdec98 = (ulonglong)uVar2;
  local_190 = "OakUI_ItemInspect";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdeca0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdeca8,"weapon");
  atexit((_func_5014 *)&LAB_1442e2d24);
  FUN_1400b22c2(&DAT_14cbdecb8,"gadget");
  atexit((_func_5014 *)&LAB_1442e2d35);
  FUN_1400b22c2(&DAT_14cbdecc8,"shield");
  atexit((_func_5014 *)&LAB_1442e2d46);
  FUN_1400b22c2(&DAT_14cbdecd8,"repair_kit");
  atexit((_func_5014 *)&LAB_1442e2d57);
  FUN_1400b22c2(&DAT_14cbdece8,"heavy weapon");
  atexit((_func_5014 *)&LAB_1442e2d68);
  FUN_1400b22c2(&DAT_14cbdecf8,"enhancement");
  atexit((_func_5014 *)&LAB_1442e2d79);
  FUN_1400b22c2(&DAT_14cbded08,"customization");
  atexit((_func_5014 *)&LAB_1442e2d8a);
  FUN_1400b22c2(&DAT_14cbded18,"legendary");
  atexit((_func_5014 *)&LAB_1442e2d9b);
  FUN_1400b22c2(&DAT_14cbded28,"InspectNewItem");
  atexit((_func_5014 *)&LAB_1442e2dac);
  FUN_1400b22c2(&DAT_14cbded38,"InspectElementVeryWeak");
  atexit((_func_5014 *)&LAB_1442e2dbd);
  FUN_1400b22c2(&DAT_14cbded48,"InspectElementWeak");
  atexit((_func_5014 *)&LAB_1442e2dce);
  FUN_1400b22c2(&DAT_14cbded58,"InspectElementNormal");
  atexit((_func_5014 *)&LAB_1442e2ddf);
  FUN_1400b22c2(&DAT_14cbded68,"InspectElementStrong");
  atexit((_func_5014 *)&LAB_1442e2df0);
  FUN_1400b22c2(&DAT_14cbded78,"InspectElementVeryStrong");
  atexit((_func_5014 *)&LAB_1442e2e01);
  local_190 = "audio_calibration";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbded88 = (ulonglong)uVar2;
  local_190 = "brightness_calibration";
  local_188._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbded90 = (ulonglong)uVar2;
  local_190 = "brightness_calibration_ftc";
  local_188._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbded98 = (ulonglong)uVar2;
  local_190 = "safe_area_calibration";
  local_188._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdeda0 = (ulonglong)uVar2;
  local_190 = "options_accessibility";
  local_188._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdeda8 = (ulonglong)uVar2;
  _DAT_14cbdedb8 = 0;
  _DAT_14cbdedc0 = FUN_146652c9e;
  _DAT_14cbdedc8 = "keybind_helper";
  _DAT_14cbdedb0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdedb0;
  atexit((_func_5014 *)&LAB_1442e469c);
  local_190 = "UpscalingMethod";
  local_188._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdedd0 = (ulonglong)uVar2;
  local_190 = "FrameGeneration";
  local_188._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdedd8 = (ulonglong)uVar2;
  local_190 = "Upscaling";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdede0 = (ulonglong)uVar2;
  local_190 = "AntiAliasingMethod";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdede8 = (ulonglong)uVar2;
  local_190 = "WindowsTextureLODGroups";
  local_188._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdedf0 = (ulonglong)uVar2;
  local_190 = "Textures";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdedf8 = (ulonglong)uVar2;
  local_190 = "UI.State.TITLE_SCREEN";
  local_188._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdee00 = (ulonglong)uVar2;
  _DAT_14cbdee10 = 0;
  _DAT_14cbdee18 = FUN_146652d22;
  _DAT_14cbdee20 = "legal_splash";
  _DAT_14cbdee08 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdee08;
  atexit((_func_5014 *)&LAB_1442e46a8);
  _DAT_14cbdee28 = 0;
  uRam000000014cbdee30 = 0;
  _DAT_14cbdee38 = 0;
  DAT_14cbdee40 = 0;
  uRam000000014cbdee48 = 0;
  FUN_1446ddda2(&DAT_14cbdee28,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_1442e46b9);
  _DAT_14cbdee50 = 0;
  uRam000000014cbdee58 = 0;
  _DAT_14cbdee60 = 0;
  DAT_14cbdee68 = 0;
  uRam000000014cbdee70 = 0;
  FUN_1446ddda2(&DAT_14cbdee50,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_1442e46ca);
  _DAT_14cbdee78 = 0;
  uRam000000014cbdee80 = 0;
  _DAT_14cbdee88 = 0;
  DAT_14cbdee90 = 0;
  uRam000000014cbdee98 = 0;
  FUN_1446ddda2(&DAT_14cbdee78,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442e46db);
  _DAT_14cbdeea0 = 0;
  uRam000000014cbdeea8 = 0;
  _DAT_14cbdeeb0 = 0;
  DAT_14cbdeeb8 = 0;
  uRam000000014cbdeec0 = 0;
  FUN_1446ddda2(&DAT_14cbdeea0,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442e46ec);
  _DAT_14cbdeec8 = 0;
  uRam000000014cbdeed0 = 0;
  _DAT_14cbdeed8 = 0;
  DAT_14cbdeee0 = 0;
  uRam000000014cbdeee8 = 0;
  FUN_1446ddda2(&DAT_14cbdeec8,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442e46fd);
  _DAT_14cbdeef0 = 0;
  uRam000000014cbdeef8 = 0;
  _DAT_14cbdef00 = 0;
  DAT_14cbdef08 = 0;
  uRam000000014cbdef10 = 0;
  FUN_1446ddda2(&DAT_14cbdeef0,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1442e470e);
  FUN_140056680(&DAT_14cbdef18,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1442e471f);
  _DAT_14cbdef30 = 0;
  _DAT_14cbdef38 = FUN_146652e4e;
  _DAT_14cbdef40 = "menu_load_character";
  _DAT_14cbdef28 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdef28;
  atexit((_func_5014 *)&LAB_1442e4730);
  local_190 = "select_character";
  local_188._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdef48 = (ulonglong)uVar2;
  local_190 = "new_character";
  local_188._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdef50 = (ulonglong)uVar2;
  local_190 = "escape";
  local_188._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdef58 = (ulonglong)uVar2;
  local_190 = "is_late_join";
  local_188._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdef60 = (ulonglong)uVar2;
  local_190 = "is_ingame";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdef68 = (ulonglong)uVar2;
  local_190 = "is_lineup";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdef70 = (ulonglong)uVar2;
  local_190 = "is_character_select";
  local_188._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdef78 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdef80,L"character_select");
  atexit((_func_5014 *)&LAB_1442e473c);
  local_190 = "delete_character";
  local_188._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdef90 = (ulonglong)uVar2;
  local_190 = "shift_interact";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdef98 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbdefa0,L"Join",1);
  FUN_1446f470e(&DAT_14cbdefa8,L"Invite",1);
  FUN_1446f470e(&DAT_14cbdefb0,L"ViewProfile",1);
  FUN_1446f470e(&DAT_14cbdefb8,L"AddFriend",1);
  FUN_1446f470e(&DAT_14cbdefc0,L"Mute",1);
  FUN_1446f470e(&DAT_14cbdefc8,L"Unmute",1);
  FUN_1446f470e(&DAT_14cbdefd0,L"Promote",1);
  FUN_1446f470e(&DAT_14cbdefd8,L"Kick",1);
  FUN_1446f470e(&DAT_14cbdefe0,L"AddShiftFriend",1);
  FUN_1446f470e(&DAT_14cbdefe8,L"RemoveShiftFriend",1);
  FUN_1446f470e(&DAT_14cbdeff0,L"AddFavorite",1);
  FUN_1446f470e(&DAT_14cbdeff8,L"RemoveFavorite",1);
  FUN_1446f470e(&DAT_14cbdf000,L"BlockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbdf008,L"UnblockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbdf010,L"ReportShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbdf018,L"InviteFriend",1);
  FUN_1446f470e(&DAT_14cbdf020,L"InviteRecentFriends",1);
  FUN_1446f470e(&DAT_14cbdf028,L"JoinRecentFriendsHost",1);
  FUN_1446f470e(&DAT_14cbdf030,L"ViewProfiles",1);
  FUN_1446f470e(&DAT_14cbdf038,L"TeleportToPlayer",1);
  FUN_1446f470e(&DAT_14cbdf040,L"Cancel");
  _DAT_14cbdf048 = 0;
  uRam000000014cbdf050 = 0;
  _DAT_14cbdf058 = 0;
  DAT_14cbdf060 = 0;
  uRam000000014cbdf068 = 0;
  FUN_1446ddda2(&DAT_14cbdf048,"Dialog_Join");
  atexit((_func_5014 *)&LAB_1442e8fcb);
  _DAT_14cbdf070 = 0;
  uRam000000014cbdf078 = 0;
  _DAT_14cbdf080 = 0;
  DAT_14cbdf088 = 0;
  uRam000000014cbdf090 = 0;
  FUN_1446ddda2(&DAT_14cbdf070,"Dialog_Invite");
  atexit((_func_5014 *)&LAB_1442e8fdc);
  _DAT_14cbdf098 = 0;
  uRam000000014cbdf0a0 = 0;
  _DAT_14cbdf0a8 = 0;
  DAT_14cbdf0b0 = 0;
  uRam000000014cbdf0b8 = 0;
  FUN_1446ddda2(&DAT_14cbdf098,"Dialog_ViewProfile");
  atexit((_func_5014 *)&LAB_1442e8fed);
  _DAT_14cbdf0c0 = 0;
  uRam000000014cbdf0c8 = 0;
  _DAT_14cbdf0d0 = 0;
  DAT_14cbdf0d8 = 0;
  uRam000000014cbdf0e0 = 0;
  FUN_1446ddda2(&DAT_14cbdf0c0,"Dialog_AddFriend");
  atexit((_func_5014 *)&LAB_1442e8ffe);
  _DAT_14cbdf0e8 = 0;
  uRam000000014cbdf0f0 = 0;
  _DAT_14cbdf0f8 = 0;
  DAT_14cbdf100 = 0;
  uRam000000014cbdf108 = 0;
  FUN_1446ddda2(&DAT_14cbdf0e8,"Dialog_Mute");
  atexit((_func_5014 *)&LAB_1442e900f);
  _DAT_14cbdf110 = 0;
  uRam000000014cbdf118 = 0;
  _DAT_14cbdf120 = 0;
  DAT_14cbdf128 = 0;
  uRam000000014cbdf130 = 0;
  FUN_1446ddda2(&DAT_14cbdf110,"Dialog_Unmute");
  atexit((_func_5014 *)&LAB_1442e9020);
  _DAT_14cbdf138 = 0;
  uRam000000014cbdf140 = 0;
  _DAT_14cbdf148 = 0;
  DAT_14cbdf150 = 0;
  uRam000000014cbdf158 = 0;
  FUN_1446ddda2(&DAT_14cbdf138,"Dialog_Promote");
  atexit((_func_5014 *)&LAB_1442e9031);
  _DAT_14cbdf160 = 0;
  uRam000000014cbdf168 = 0;
  _DAT_14cbdf170 = 0;
  DAT_14cbdf178 = 0;
  uRam000000014cbdf180 = 0;
  FUN_1446ddda2(&DAT_14cbdf160,"Dialog_Kick");
  atexit((_func_5014 *)&LAB_1442e9042);
  _DAT_14cbdf188 = 0;
  uRam000000014cbdf190 = 0;
  _DAT_14cbdf198 = 0;
  DAT_14cbdf1a0 = 0;
  uRam000000014cbdf1a8 = 0;
  FUN_1446ddda2(&DAT_14cbdf188,"Dialog_AddShiftFriend");
  atexit((_func_5014 *)&LAB_1442e9053);
  _DAT_14cbdf1b0 = 0;
  uRam000000014cbdf1b8 = 0;
  _DAT_14cbdf1c0 = 0;
  DAT_14cbdf1c8 = 0;
  uRam000000014cbdf1d0 = 0;
  FUN_1446ddda2(&DAT_14cbdf1b0,"Dialog_RemoveShiftFriend");
  atexit((_func_5014 *)&LAB_1442e9064);
  _DAT_14cbdf1d8 = 0;
  uRam000000014cbdf1e0 = 0;
  _DAT_14cbdf1e8 = 0;
  DAT_14cbdf1f0 = 0;
  uRam000000014cbdf1f8 = 0;
  FUN_1446ddda2(&DAT_14cbdf1d8,"Dialog_AddFavorite",0);
  atexit((_func_5014 *)&LAB_1442e9075);
  _DAT_14cbdf200 = 0;
  uRam000000014cbdf208 = 0;
  _DAT_14cbdf210 = 0;
  DAT_14cbdf218 = 0;
  uRam000000014cbdf220 = 0;
  FUN_1446ddda2(&DAT_14cbdf200,"Dialog_RemoveFavorite",0);
  atexit((_func_5014 *)&LAB_1442e9086);
  _DAT_14cbdf228 = 0;
  uRam000000014cbdf230 = 0;
  _DAT_14cbdf238 = 0;
  DAT_14cbdf240 = 0;
  uRam000000014cbdf248 = 0;
  FUN_1446ddda2(&DAT_14cbdf228,"Dialog_BlockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_1442e9097);
  _DAT_14cbdf250 = 0;
  uRam000000014cbdf258 = 0;
  _DAT_14cbdf260 = 0;
  DAT_14cbdf268 = 0;
  uRam000000014cbdf270 = 0;
  FUN_1446ddda2(&DAT_14cbdf250,"Dialog_UnblockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_1442e90a8);
  _DAT_14cbdf278 = 0;
  uRam000000014cbdf280 = 0;
  _DAT_14cbdf288 = 0;
  DAT_14cbdf290 = 0;
  uRam000000014cbdf298 = 0;
  FUN_1446ddda2(&DAT_14cbdf278,"Dialog_ReportShiftPlayer",0);
  atexit((_func_5014 *)&LAB_1442e90b9);
  _DAT_14cbdf2a0 = 0;
  uRam000000014cbdf2a8 = 0;
  _DAT_14cbdf2b0 = 0;
  DAT_14cbdf2b8 = 0;
  uRam000000014cbdf2c0 = 0;
  FUN_1446ddda2(&DAT_14cbdf2a0,"Dialog_InviteFriend",0);
  atexit((_func_5014 *)&LAB_1442e90ca);
  _DAT_14cbdf2c8 = 0;
  uRam000000014cbdf2d0 = 0;
  _DAT_14cbdf2d8 = 0;
  DAT_14cbdf2e0 = 0;
  uRam000000014cbdf2e8 = 0;
  FUN_1446ddda2(&DAT_14cbdf2c8,"Dialog_InviteRecentFriends",0);
  atexit((_func_5014 *)&LAB_1442e90db);
  _DAT_14cbdf2f0 = 0;
  uRam000000014cbdf2f8 = 0;
  _DAT_14cbdf300 = 0;
  DAT_14cbdf308 = 0;
  uRam000000014cbdf310 = 0;
  FUN_1446ddda2(&DAT_14cbdf2f0,"Dialog_JoinRecentFriendsHost",0);
  atexit((_func_5014 *)&LAB_1442e90ec);
  _DAT_14cbdf318 = 0;
  uRam000000014cbdf320 = 0;
  _DAT_14cbdf328 = 0;
  DAT_14cbdf330 = 0;
  uRam000000014cbdf338 = 0;
  FUN_1446ddda2(&DAT_14cbdf318,"Dialog_ViewProfiles",0);
  atexit((_func_5014 *)&LAB_1442e90fd);
  _DAT_14cbdf340 = 0;
  uRam000000014cbdf348 = 0;
  _DAT_14cbdf350 = 0;
  DAT_14cbdf358 = 0;
  uRam000000014cbdf360 = 0;
  FUN_1446ddda2(&DAT_14cbdf340,"Dialog_TeleportToPlayer",0);
  atexit((_func_5014 *)&LAB_1442e910e);
  _DAT_14cbdf368 = 0;
  uRam000000014cbdf370 = 0;
  _DAT_14cbdf378 = 0;
  DAT_14cbdf380 = 0;
  uRam000000014cbdf388 = 0;
  FUN_1446ddda2(&DAT_14cbdf368,"Dialog_Cancel",0);
  atexit((_func_5014 *)&LAB_1442e911f);
  FUN_1400b22c2(&DAT_14cbdf390,"GoOnlineText");
  atexit((_func_5014 *)&LAB_1442e9130);
  FUN_1400b22c2(&DAT_14cbdf3a0,"GoingOnlineTextOnePeriod");
  atexit((_func_5014 *)&LAB_1442e9141);
  FUN_1400b22c2(&DAT_14cbdf3b0,"GoingOnlineTextTwoPeriods");
  atexit((_func_5014 *)&LAB_1442e9152);
  FUN_1400b22c2(&DAT_14cbdf3c0,"GoingOnlineTextThreePeriods");
  atexit((_func_5014 *)&LAB_1442e9163);
  local_190 = "header";
  local_188._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf3d0 = (ulonglong)uVar2;
  local_190 = "party";
  local_188._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf3d8 = (ulonglong)uVar2;
  local_190 = "friends";
  local_188._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf3e0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdf3e8,L"ExpandList");
  atexit((_func_5014 *)&LAB_1442e9174);
  FUN_140056680(&DAT_14cbdf3f8,&DAT_14b9c81c0);
  atexit((_func_5014 *)&LAB_1442e9185);
  FUN_140056680(&DAT_14cbdf408,L"blocked");
  atexit((_func_5014 *)&LAB_1442e9196);
  FUN_140056680(&DAT_14cbdf418,L"ListExpanded");
  atexit((_func_5014 *)&LAB_1442e91a7);
  FUN_140056680(&DAT_14cbdf428,L"ListCollapsed");
  atexit((_func_5014 *)&LAB_1442e91b8);
  FUN_1400b22c2(&DAT_14cbdf438,"action_ui_lobby_primary_shortcut");
  atexit((_func_5014 *)&LAB_1442e91c9);
  FUN_1400b22c2(&DAT_14cbdf448,"action_ui_lobby_secondary_shortcut");
  atexit((_func_5014 *)&LAB_1442e91da);
  FUN_1400b22c2(&DAT_14cbdf458,"action_ui_lobby_escape");
  atexit((_func_5014 *)&LAB_1442e91eb);
  local_190 = "expanded";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf468 = (ulonglong)uVar2;
  local_190 = "dropdown";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf470 = (ulonglong)uVar2;
  _DAT_14cbdf478 = 0;
  uRam000000014cbdf480 = 0;
  _DAT_14cbdf488 = 0;
  DAT_14cbdf490 = 0;
  uRam000000014cbdf498 = 0;
  FUN_1446ddda2(&DAT_14cbdf478,"PartyTitle",0);
  atexit((_func_5014 *)&LAB_1442e91fc);
  _DAT_14cbdf4a0 = 0;
  uRam000000014cbdf4a8 = 0;
  _DAT_14cbdf4b0 = 0;
  DAT_14cbdf4b8 = 0;
  uRam000000014cbdf4c0 = 0;
  FUN_1446ddda2(&DAT_14cbdf4a0,"PartyCount",0);
  atexit((_func_5014 *)&LAB_1442e920d);
  _DAT_14cbdf4c8 = 0;
  uRam000000014cbdf4d0 = 0;
  _DAT_14cbdf4d8 = 0;
  DAT_14cbdf4e0 = 0;
  uRam000000014cbdf4e8 = 0;
  FUN_1446ddda2(&DAT_14cbdf4c8,"FriendsCount",0);
  atexit((_func_5014 *)&LAB_1442e921e);
  _DAT_14cbdf4f0 = 0;
  uRam000000014cbdf4f8 = 0;
  _DAT_14cbdf500 = 0;
  DAT_14cbdf508 = 0;
  uRam000000014cbdf510 = 0;
  FUN_1446ddda2(&DAT_14cbdf4f0,"Friends",0);
  atexit((_func_5014 *)&LAB_1442e922f);
  _DAT_14cbdf518 = 0;
  uRam000000014cbdf520 = 0;
  _DAT_14cbdf528 = 0;
  DAT_14cbdf530 = 0;
  uRam000000014cbdf538 = 0;
  FUN_1446ddda2(&DAT_14cbdf518,"MaxPlayerCountHelperText",0);
  atexit((_func_5014 *)&LAB_1442e9240);
  _DAT_14cbdf540 = 0;
  uRam000000014cbdf548 = 0;
  _DAT_14cbdf550 = 0;
  DAT_14cbdf558 = 0;
  uRam000000014cbdf560 = 0;
  FUN_1446ddda2(&DAT_14cbdf540,"DifficultyTooltipText",0);
  atexit((_func_5014 *)&LAB_1442e9251);
  local_190 = "simple_config";
  local_188 = (undefined *)CONCAT35(local_188._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdf568 = (ulonglong)uVar2;
  local_190 = &DAT_14cbdefa0;
  local_188 = &DAT_14cbdf048;
  local_180 = &DAT_14cbdefa8;
  local_178 = &DAT_14cbdf070;
  local_170 = &DAT_14cbdefb0;
  local_168 = &DAT_14cbdf098;
  local_160 = &DAT_14cbdefb8;
  local_158 = &DAT_14cbdf0c0;
  local_150 = &DAT_14cbdefc0;
  local_148 = &DAT_14cbdf0e8;
  local_140 = &DAT_14cbdefc8;
  local_138 = &DAT_14cbdf110;
  local_130 = &DAT_14cbdefd0;
  local_128 = &DAT_14cbdf138;
  local_120 = &DAT_14cbdefd8;
  local_118 = &DAT_14cbdf160;
  local_110 = &DAT_14cbdefe0;
  local_108 = &DAT_14cbdf188;
  local_100 = &DAT_14cbdefe8;
  local_f8 = &DAT_14cbdf1b0;
  local_f0 = &DAT_14cbdeff0;
  local_e8 = &DAT_14cbdf1d8;
  local_e0 = &DAT_14cbdeff8;
  local_d8 = &DAT_14cbdf200;
  local_d0 = &DAT_14cbdf000;
  local_c8 = &DAT_14cbdf228;
  local_c0 = &DAT_14cbdf008;
  local_b8 = &DAT_14cbdf250;
  local_b0 = &DAT_14cbdf010;
  local_a8 = &DAT_14cbdf278;
  local_a0 = &DAT_14cbdf018;
  local_98 = &DAT_14cbdf2a0;
  local_90 = &DAT_14cbdf020;
  local_88 = &DAT_14cbdf2c8;
  local_80 = &DAT_14cbdf038;
  local_78 = &DAT_14cbdf340;
  local_70 = &DAT_14cbdf040;
  local_68 = &DAT_14cbdf368;
  local_198 = local_60;
  local_1a0 = &local_190;
  FUN_14165a4f2();
  atexit(FUN_1442e9262);
  _DAT_14cbdf5c8 = 0;
  _DAT_14cbdf5d0 = FUN_146652f0c;
  _DAT_14cbdf5d8 = "lobby_info";
  _DAT_14cbdf5c0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdf5c0;
  atexit((_func_5014 *)&LAB_1442e928b);
  _DAT_14cbdf640 = 0;
  _DAT_14cbdf648 = FUN_146653558;
  _DAT_14cbdf650 = "menu_lost_loot_backpack";
  _DAT_14cbdf638 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdf638;
  atexit((_func_5014 *)&LAB_1442e92c6);
  _DAT_14cbdf660 = 0;
  _DAT_14cbdf668 = FUN_1466535b0;
  _DAT_14cbdf670 = "menu_lost_loot_misc";
  _DAT_14cbdf658 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdf658;
  atexit((_func_5014 *)&LAB_1442e92d2);
  FUN_1400b22c2(&DAT_14cbdf678,"TakeItem");
  atexit((_func_5014 *)&LAB_1442e92de);
  FUN_1400b22c2(&DAT_14cbdf688,"TrashItem");
  atexit((_func_5014 *)&LAB_1442e92ef);
  FUN_1400b22c2(&DAT_14cbdf698,"item-dropdown");
  atexit((_func_5014 *)&LAB_1442e9300);
  FUN_1400b22c2(&DAT_14cbdf6a8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1442e9311);
  FUN_1400b22c2(&DAT_14cbdf6b8,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1442e9322);
  local_190 = "item_removed_message_ident";
  local_188._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdf6c8 = (ulonglong)uVar2;
  local_190 = "item_retrieved_message_ident";
  local_188._0_5_ = 0x1c;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdf6d0 = (ulonglong)uVar2;
  local_190 = "full_backpack_message_ident";
  local_188._0_5_ = 0x1b;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdf6d8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdf6e0,L"action_ui_lost_loot_trash_item");
  atexit((_func_5014 *)&LAB_1442e9333);
  FUN_140056680(&DAT_14cbdf6f0,L"action_ui_lost_loot_trash_all");
  atexit((_func_5014 *)&LAB_1442e9344);
  FUN_140056680(&DAT_14cbdf700,L"action_ui_lost_loot_take_all");
  atexit((_func_5014 *)&LAB_1442e9355);
  FUN_140056680(&DAT_14cbdf710,L"TrashLostLootItem");
  atexit((_func_5014 *)&LAB_1442e9366);
  FUN_140056680(&DAT_14cbdf720,L"TrashAllLostLoot");
  atexit((_func_5014 *)&LAB_1442e9377);
  FUN_140056680(&DAT_14cbdf730,L"TakeAllLostLoot");
  atexit((_func_5014 *)&LAB_1442e9388);
  FUN_1400b22c2(&DAT_14cbdf740,"autoregion");
  atexit((_func_5014 *)&LAB_1442ea777);
  _DAT_14cbdf758 = 0;
  _DAT_14cbdf760 = FUN_1466535f2;
  _DAT_14cbdf768 = "matchmaking_indicator";
  _DAT_14cbdf750 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdf750;
  atexit((_func_5014 *)&LAB_1442ea788);
  local_190 = "menu";
  local_188._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdf770 = (ulonglong)uVar2;
  local_190 = "hide";
  local_188._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdf778 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdf780,"multiple_activities");
  atexit((_func_5014 *)&LAB_1442ea794);
  FUN_1400b22c2(&DAT_14cbdf790,"confirming");
  atexit((_func_5014 *)&LAB_1442ea7a5);
  FUN_1400b22c2(&DAT_14cbdf7a0,"confirming_no_time");
  atexit((_func_5014 *)&LAB_1442ea7b6);
  FUN_1400b22c2(&DAT_14cbdf7b0,"confirmed");
  atexit((_func_5014 *)&LAB_1442ea7c7);
  FUN_1400b22c2(&DAT_14cbdf7c0,"cancelling");
  atexit((_func_5014 *)&LAB_1442ea7d8);
  FUN_1400b22c2(&DAT_14cbdf7d0,"Event_HideTooltip");
  atexit((_func_5014 *)&LAB_1442ea7e9);
  _DAT_14cbdf7e0 = 0;
  uRam000000014cbdf7e8 = 0;
  _DAT_14cbdf7f0 = 0;
  DAT_14cbdf7f8 = 0;
  uRam000000014cbdf800 = 0;
  FUN_1446ddda2(&DAT_14cbdf7e0,"MatchmakingActivitiesText",0);
  atexit((_func_5014 *)&LAB_1442ea7fa);
  _DAT_14cbdf808 = 0;
  uRam000000014cbdf810 = 0;
  _DAT_14cbdf818 = 0;
  DAT_14cbdf820 = 0;
  uRam000000014cbdf828 = 0;
  FUN_1446ddda2(&DAT_14cbdf808,"SearchingPlayersText",0);
  atexit((_func_5014 *)&LAB_1442ea80b);
  _DAT_14cbdf830 = 0;
  uRam000000014cbdf838 = 0;
  _DAT_14cbdf840 = 0;
  DAT_14cbdf848 = 0;
  uRam000000014cbdf850 = 0;
  FUN_1446ddda2(&DAT_14cbdf830,"ConfirmingPlayersText",0);
  atexit((_func_5014 *)&LAB_1442ea81c);
  _DAT_14cbdf858 = 0;
  uRam000000014cbdf860 = 0;
  _DAT_14cbdf868 = 0;
  DAT_14cbdf870 = 0;
  uRam000000014cbdf878 = 0;
  FUN_1446ddda2(&DAT_14cbdf858,"StartingActivityText",0);
  atexit((_func_5014 *)&LAB_1442ea82d);
  _DAT_14cbdf880 = 0;
  uRam000000014cbdf888 = 0;
  _DAT_14cbdf890 = 0;
  DAT_14cbdf898 = 0;
  uRam000000014cbdf8a0 = 0;
  FUN_1446ddda2(&DAT_14cbdf880,"StartingActivityNameText",0);
  atexit((_func_5014 *)&LAB_1442ea83e);
  _DAT_14cbdf8a8 = 0;
  uRam000000014cbdf8b0 = 0;
  _DAT_14cbdf8b8 = 0;
  DAT_14cbdf8c0 = 0;
  uRam000000014cbdf8c8 = 0;
  FUN_1446ddda2(&DAT_14cbdf8a8,"CancellingMatchmakingText",0);
  atexit((_func_5014 *)&LAB_1442ea84f);
  _DAT_14cbdf8d8 = 0;
  _DAT_14cbdf8e0 = FUN_1466537a4;
  _DAT_14cbdf8e8 = "menu_matchmaking";
  _DAT_14cbdf8d0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdf8d0;
  atexit((_func_5014 *)&LAB_1442ea860);
  local_190 = "region_dropdown";
  local_188._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf8f0 = (ulonglong)uVar2;
  local_190 = "vaulthunterlevel_dropdown";
  local_188._0_5_ = 0x19;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf8f8 = (ulonglong)uVar2;
  local_190 = "action_ui_matchmaking_clear_queue";
  local_188._0_5_ = 0x21;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf900 = (ulonglong)uVar2;
  _DAT_14cbdf908 = 0;
  uRam000000014cbdf910 = 0;
  _DAT_14cbdf918 = 0;
  DAT_14cbdf920 = 0;
  uRam000000014cbdf928 = 0;
  FUN_1446ddda2(&DAT_14cbdf908,"GameSettings_VaultHunterModeOff",0);
  atexit((_func_5014 *)&LAB_1442ea86c);
  _DAT_14cbdf930 = 0;
  uRam000000014cbdf938 = 0;
  _DAT_14cbdf940 = 0;
  DAT_14cbdf948 = 0;
  uRam000000014cbdf950 = 0;
  FUN_1446ddda2(&DAT_14cbdf930,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_1442ea87d);
  _DAT_14cbdf958 = 0;
  uRam000000014cbdf960 = 0;
  _DAT_14cbdf968 = 0;
  DAT_14cbdf970 = 0;
  uRam000000014cbdf978 = 0;
  FUN_1446ddda2(&DAT_14cbdf958,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_1442ea88e);
  _DAT_14cbdf988 = 0;
  _DAT_14cbdf990 = FUN_1466539b6;
  _DAT_14cbdf998 = "menu_matchmaking_settings";
  _DAT_14cbdf980 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdf980;
  atexit((_func_5014 *)&LAB_1442ea89f);
  local_190 = "vaulthunterdifficulty_dropdown";
  local_188._0_5_ = 0x1e;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf9a0 = (ulonglong)uVar2;
  local_190 = "matchmakingregion_dropdown";
  local_188._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf9a8 = (ulonglong)uVar2;
  local_190 = "groupprivacy_values";
  local_188._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdf9b0 = (ulonglong)uVar2;
  local_190 = "CrossplayToggleIdent";
  local_188._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdf9b8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdf9c0,L"tooltip_vault_hunter_level");
  atexit((_func_5014 *)&LAB_1442ea8ab);
  FUN_140056680(&DAT_14cbdf9d0,L"tooltip_matchmaking_region");
  atexit((_func_5014 *)&LAB_1442ea8bc);
  FUN_140056680(&DAT_14cbdf9e0,L"tooltip_crossplay");
  atexit((_func_5014 *)&LAB_1442ea8cd);
  _DAT_14cbdf9f0 = 0;
  uRam000000014cbdf9f8 = 0;
  _DAT_14cbdfa00 = 0;
  DAT_14cbdfa08 = 0;
  uRam000000014cbdfa10 = 0;
  FUN_1446ddda2(&DAT_14cbdf9f0,"GameSettings_VaultHunterModeOff");
  atexit((_func_5014 *)&LAB_1442ea8de);
  local_190 = "is_frontend";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfa18 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbdfa20,"ElementClicked");
  atexit((_func_5014 *)&LAB_1442ea8ef);
  _DAT_14cbdfa38 = 0;
  _DAT_14cbdfa40 = FUN_146653c08;
  _DAT_14cbdfa48 = "mayhem";
  _DAT_14cbdfa30 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdfa30;
  atexit((_func_5014 *)&LAB_1442ea900);
  _DAT_14cbdfa54 = 0;
  _DAT_14cbdfa58 = 0;
  FUN_14052b5e0(&DAT_14cbdfa50,"Missions",0);
  _DAT_14cbdfa60 = 0;
  _DAT_14cbdfa64 = 0;
  FUN_14052b5e0(&DAT_14cbdfa5c,"Timer",0);
  _DAT_14cbdfa6c = 0;
  _DAT_14cbdfa70 = 0;
  FUN_14052b5e0(&DAT_14cbdfa68,"Percent",0);
  FUN_1400b22c2(&DAT_14cbdfa78,"Event_ResetPoints");
  atexit((_func_5014 *)&LAB_1442ea90c);
  _DAT_14cbdfa90 = 0;
  _DAT_14cbdfa98 = FUN_146653c4a;
  _DAT_14cbdfaa0 = "menu_header_class";
  _DAT_14cbdfa88 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdfa88;
  atexit((_func_5014 *)&LAB_1442ea91d);
  local_190 = "continue";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfaa8 = (ulonglong)uVar2;
  local_190 = "load_character";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfab0 = (ulonglong)uVar2;
  local_190 = "new_game";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfab8 = (ulonglong)uVar2;
  local_190 = "select_play_ozone";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfac0 = (ulonglong)uVar2;
  local_190 = "options";
  local_188._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfac8 = (ulonglong)uVar2;
  local_190 = "quit";
  local_188._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfad0 = (ulonglong)uVar2;
  local_190 = "debug";
  local_188._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfad8 = (ulonglong)uVar2;
  local_190 = "render_mode";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfae0 = (ulonglong)uVar2;
  local_190 = "open_matchmaking_menu";
  local_188._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfae8 = (ulonglong)uVar2;
  local_190 = s_open_lan_menu_14b8b17c3;
  local_188._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfaf0 = (ulonglong)uVar2;
  local_190 = "nexus";
  local_188._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfaf8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbdfb00,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cbdfb08,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cbdfb10,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cbdfb18,L"TimeOfDayForecastEvents");
  local_190 = "Standard";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfb20 = (ulonglong)uVar2;
  local_190 = "PrologueSkip";
  local_188._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfb28 = (ulonglong)uVar2;
  local_190 = "UltimateVaultHunterSkip";
  local_188._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfb30 = (ulonglong)uVar2;
  local_190 = "SkipToDLC_Cowbell";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfb38 = (ulonglong)uVar2;
  local_190 = "SkipToDLC_Harmonica";
  local_188._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfb40 = (ulonglong)uVar2;
  _DAT_14cbdfb48 = 0;
  uRam000000014cbdfb50 = 0;
  _DAT_14cbdfb58 = 0;
  DAT_14cbdfb60 = 0;
  uRam000000014cbdfb68 = 0;
  FUN_1446ddda2(&DAT_14cbdfb48,"PauseMenuVersionText",0);
  atexit((_func_5014 *)&LAB_1442ea929);
  _DAT_14cbdfb70 = 0;
  uRam000000014cbdfb78 = 0;
  _DAT_14cbdfb80 = 0;
  DAT_14cbdfb88 = 0;
  uRam000000014cbdfb90 = 0;
  FUN_1446ddda2(&DAT_14cbdfb70,"PauseMenuVersionUpdateAvailableText",0);
  atexit((_func_5014 *)&LAB_1442ea93a);
  _DAT_14cbdfb98 = 0;
  uRam000000014cbdfba0 = 0;
  _DAT_14cbdfba8 = 0;
  DAT_14cbdfbb0 = 0;
  uRam000000014cbdfbb8 = 0;
  FUN_1446ddda2(&DAT_14cbdfb98,"PauseMenuVersionDebugText",0);
  atexit((_func_5014 *)&LAB_1442ea94b);
  _DAT_14cbdfbc0 = 0;
  uRam000000014cbdfbc8 = 0;
  _DAT_14cbdfbd0 = 0;
  DAT_14cbdfbd8 = 0;
  uRam000000014cbdfbe0 = 0;
  FUN_1446ddda2(&DAT_14cbdfbc0,"PauseMenuCrossSaveSyncTimeText",0);
  atexit((_func_5014 *)&LAB_1442ea95c);
  local_190 = "open_photomode";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfbe8 = (ulonglong)uVar2;
  local_190 = "splitscreen_leave";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfbf0 = (ulonglong)uVar2;
  local_190 = "abandon_mission_replay";
  local_188._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfbf8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbdfc00,L"tooltip_photomode");
  atexit((_func_5014 *)&LAB_1442ea96d);
  FUN_140056680(&DAT_14cbdfc10,L"tooltip_photomode_disabled_split");
  atexit((_func_5014 *)&LAB_1442ea97e);
  FUN_140056680(&DAT_14cbdfc20,L"tooltip_photomode_disabled_downed");
  atexit((_func_5014 *)&LAB_1442ea98f);
  FUN_140056680(&DAT_14cbdfc30,L"tooltip_photomode_disabled_cinematic");
  atexit((_func_5014 *)&LAB_1442ea9a0);
  FUN_140056680(&DAT_14cbdfc40,L"tooltip_photomode_disabled_no_character");
  atexit((_func_5014 *)&LAB_1442ea9b1);
  _DAT_14cbdfc58 = 0;
  _DAT_14cbdfc60 = FUN_145c2940c;
  _DAT_14cbdfc68 = "menu_pause";
  _DAT_14cbdfc50 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdfc50;
  atexit((_func_5014 *)&LAB_1442ea9c2);
  _DAT_14cbdfc78 = 0;
  _DAT_14cbdfc80 = FUN_14665411a;
  _DAT_14cbdfc88 = "menu_title_picker";
  _DAT_14cbdfc70 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdfc70;
  atexit((_func_5014 *)&LAB_1442eb9b6);
  local_190 = "playoak2";
  local_188._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfc90 = (ulonglong)uVar2;
  local_190 = s_playozone_14b9c8ee3;
  local_188 = (undefined *)CONCAT35(local_188._5_3_,9);
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfc98 = (ulonglong)uVar2;
  _DAT_14cbdfca8 = 0;
  _DAT_14cbdfcb0 = FUN_146654168;
  _DAT_14cbdfcb8 = "mission_accept";
  _DAT_14cbdfca0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdfca0;
  atexit((_func_5014 *)&LAB_1442eb9c2);
  FUN_1400b22c2(&DAT_14cbdfcc0,"AcceptText");
  atexit((_func_5014 *)&LAB_1442eb9ce);
  FUN_1400b22c2(&DAT_14cbdfcd0,"AcceptedText");
  atexit((_func_5014 *)&LAB_1442eb9df);
  FUN_1400b22c2(&DAT_14cbdfce0,"TrackText");
  atexit((_func_5014 *)&LAB_1442eb9f0);
  FUN_1400b22c2(&DAT_14cbdfcf0,"TrackingText");
  atexit((_func_5014 *)&LAB_1442eba01);
  FUN_1400b22c2(&DAT_14cbdfd00,"AcceptTrackText");
  atexit((_func_5014 *)&LAB_1442eba12);
  FUN_1400b22c2(&DAT_14cbdfd10,"AcceptedTrackingText");
  atexit((_func_5014 *)&LAB_1442eba23);
  FUN_1400b22c2(&DAT_14cbdfd20,"ContractText");
  atexit((_func_5014 *)&LAB_1442eba34);
  FUN_1400b22c2(&DAT_14cbdfd30,"StartText");
  atexit((_func_5014 *)&LAB_1442eba45);
  FUN_1400b22c2(&DAT_14cbdfd40,"MissionAccepted");
  atexit((_func_5014 *)&LAB_1442eba56);
  FUN_1400b22c2(&DAT_14cbdfd50,"MissionAcceptedAndTracked");
  atexit((_func_5014 *)&LAB_1442eba67);
  FUN_1400b22c2(&DAT_14cbdfd60,"MissionTracked");
  atexit((_func_5014 *)&LAB_1442eba78);
  FUN_1400b22c2(&DAT_14cbdfd70,"boolean");
  atexit((_func_5014 *)&LAB_1442ebdc0);
  FUN_1408226d0(&DAT_14cb889e0,&local_190,1);
  uVar2 = (int)local_188 - 1;
  if ((int)local_188 == 0) {
    uVar2 = 0;
  }
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      *(ushort *)(local_190 + uVar4 * 2) =
           (ushort)(*(ushort *)(local_190 + uVar4 * 2) - 0x41 < 0x1a) * 0x20 +
           *(ushort *)(local_190 + uVar4 * 2);
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  DAT_14cbdfd80 = local_190;
  atexit((_func_5014 *)&LAB_1442ebdd1);
  FUN_1400b22c2(&DAT_14cbdfd88,"timer");
  atexit((_func_5014 *)&LAB_1442ebde2);
  FUN_1400b22c2(&DAT_14cbdfd98,"percent");
  atexit((_func_5014 *)&LAB_1442ebdf3);
  _DAT_14cbdfdb0 = 0;
  _DAT_14cbdfdb8 = FUN_14665440a;
  _DAT_14cbdfdc0 = "missionlog";
  _DAT_14cbdfda8 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdfda8;
  atexit((_func_5014 *)&LAB_1442ebe04);
  FUN_1400b22c2(&DAT_14cbdfdc8,"TrackMission");
  atexit((_func_5014 *)&LAB_1442ebe10);
  FUN_1400b22c2(&DAT_14cbdfdd8,"ElementClicked");
  atexit((_func_5014 *)&LAB_1442ebe21);
  FUN_1400b22c2(&DAT_14cbdfde8,"EscapeInput");
  atexit((_func_5014 *)&LAB_1442ebe32);
  local_190 = "contracts";
  local_188._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfdf8 = (ulonglong)uVar2;
  local_190 = "sub_entries";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfe60 = (ulonglong)uVar2;
  local_190 = "remove_tag";
  local_188._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfe68 = (ulonglong)uVar2;
  _DAT_14cbdfe78 = 0;
  _DAT_14cbdfe80 = FUN_1466559f0;
  _DAT_14cbdfe88 = "navigationbar";
  _DAT_14cbdfe70 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbdfe70;
  atexit((_func_5014 *)&LAB_1442ec4a8);
  local_190 = "entry_ident";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfe90 = (ulonglong)uVar2;
  local_190 = "subentry_ident";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfe98 = (ulonglong)uVar2;
  local_190 = "time_to_nav_action";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfea0 = (ulonglong)uVar2;
  local_190 = "wrap_around";
  local_188._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_190,1);
  _DAT_14cbdfea8 = (ulonglong)uVar2;
  local_190 = "menu_tab_left";
  local_188._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfeb0 = (ulonglong)uVar2;
  local_190 = "menu_tab_right";
  local_188._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfeb8 = (ulonglong)uVar2;
  local_190 = "menu_trigger_left";
  local_188._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfec0 = (ulonglong)uVar2;
  local_190 = "menu_trigger_right";
  local_188._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfec8 = (ulonglong)uVar2;
  local_190 = "state_remove_on_navigation";
  local_188._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfed0 = (ulonglong)uVar2;
  local_190 = "set_bank_menu_state";
  local_188 = (undefined *)CONCAT35(local_188._5_3_,0x13);
  uVar2 = FUN_14001a6c0(&local_190,1);
  DAT_14cbdfed8 = (ulonglong)uVar2;
  if ((local_60[0] ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442f4ae0 FUN_1442f4ae0 body=344 status=ok
// SIG undefined FUN_1442f4ae0(void)

void FUN_1442f4ae0(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  
  lVar5 = FUN_140391552();
  if ((((lVar5 == 0) || (*(int *)(param_1 + 0x34) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
    return;
  }
  plVar10 = (longlong *)
            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar10[2] != *(int *)(param_1 + 0x34)) {
    return;
  }
  if ((*(uint *)(plVar10 + 1) & 0x10200000) != 0) {
    return;
  }
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar10;
  }
  else {
    lVar6 = 0;
  }
  iVar4 = FUN_1415267f2(lVar6 + 0x3c0);
  lVar6 = FUN_1415b95c4(param_1);
  if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x48), lVar6 != 0)) {
    lVar7 = FUN_140b6d0be();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         == lVar7 + 0x30 && (cVar2 = FUN_143f37826(lVar6), cVar2 != '\0')))) {
      bVar3 = FUN_14127c006(lVar6);
      bVar3 = bVar3 ^ 1;
      goto LAB_1442f4bbb;
    }
  }
  bVar3 = 0;
LAB_1442f4bbb:
  puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  if ((iVar4 == -1) && (bVar3 == 0)) {
    uVar9 = *(undefined8 *)(param_1 + 0x2f0);
    uVar11 = *(undefined8 *)(param_1 + 0x2f8);
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x1c) = param_2;
    ppuVar12 = &PTR_FUN_14b9d0230;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x2f0);
    uVar11 = *(undefined8 *)(param_1 + 0x2f8);
    *(undefined1 *)(puVar8 + 3) = 1;
    *(undefined1 *)((longlong)puVar8 + 0x19) = param_2;
    ppuVar12 = &PTR_FUN_14b9d0220;
  }
  *puVar8 = ppuVar12;
  puVar8[1] = uVar9;
  puVar8[2] = uVar11;
  FUN_14039144e(lVar5,puVar8);
  return;
}



// FUNCTION 1442f4c38 FUN_1442f4c38 body=75 status=ok
// SIG undefined FUN_1442f4c38(void)

void FUN_1442f4c38(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xb4) == '\x01')) {
    FUN_145a61fdc((char)param_1,lVar1 + 0x170,param_2);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 1442f4c84 FUN_1442f4c84 body=402 status=ok
// SIG undefined FUN_1442f4c84(void)

void FUN_1442f4c84(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cbe0250) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_3;
    }
    FUN_1446f470e(&local_20,puVar4,1);
    *(longlong *)(param_1 + 0x2f0) = local_20;
    if (local_20 == DAT_14cbe01f8) {
      puVar5 = &DAT_14cbe0210;
    }
    else if (local_20 == DAT_14cbe0200) {
      puVar5 = &DAT_14cbe0220;
    }
    else {
      if (local_20 != DAT_14cbe0208) goto LAB_1442f4d7d;
      puVar5 = &DAT_14cbe0230;
    }
    FUN_140de1078(param_1,puVar5,0,0);
  }
  else {
    if (lVar1 == DAT_14cbe0258) {
      iVar3 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(&local_20,iVar3,*param_3,1);
      FUN_1466566d8(param_1,&local_20);
      goto LAB_1442f4df9;
    }
    if (lVar1 != DAT_14cbe0268) goto LAB_1442f4df9;
    if (*(int *)(param_3 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_3;
    }
    FUN_1446f470e(&local_20,puVar4,1);
    *(longlong *)(param_1 + 0x2f8) = local_20;
    if (local_20 != DAT_14cbdffc8) {
      if (*(longlong *)(param_1 + 0x288) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x288) + 0xb3) = 0;
        FUN_145b0564c(param_1);
      }
      goto LAB_1442f4df9;
    }
    *(longlong *)(param_1 + 0x2f0) = DAT_14cbe0200;
  }
LAB_1442f4d7d:
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xb4) = 1;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
LAB_1442f4df9:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f4e92 FUN_1442f4e92 body=1112 status=ok
// SIG undefined FUN_1442f4e92(void)

void FUN_1442f4e92(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  void *_Src;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = *(longlong *)(param_1 + 0x288);
  if (lVar8 == 0) goto LAB_1442f50ca;
  plVar6 = (longlong *)FUN_140a68038(1);
  if (plVar6 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_58);
    if (local_58 != (longlong *)0x0) {
      if (1 < *(int *)(lVar8 + 0x220)) {
        puVar1 = (uint *)(param_1 + 0x30);
        cVar5 = FUN_14664eae2(puVar1,0);
        if (cVar5 == '\0') {
          if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442f52be:
            uVar9 = 0;
          }
          else {
            uVar4 = *puVar1;
            uVar9 = 0;
            if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
              puVar10 = (undefined8 *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
              if ((puVar10 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x34) ||
                  ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1442f52be;
              uVar9 = *puVar10;
            }
          }
          lVar7 = FUN_14101baae(uVar9);
          if (lVar7 != 0) {
            uStack_98 = 0;
            uStack_94 = 0;
            iStack_90 = 0;
            uStack_8c = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            uStack_9c = 0;
            local_88 = local_88 & 0xffffffffffffff00;
            if (&uStack_98 != (undefined4 *)(lVar8 + 0x218)) {
              iStack_90 = *(int *)(lVar8 + 0x220);
              lVar7 = (longlong)iStack_90;
              _Src = *(void **)(lVar8 + 0x218);
              if (lVar7 != 0) {
                FUN_1446dd670(&uStack_98,iStack_90,0);
                memcpy((void *)CONCAT44(uStack_94,uStack_98),_Src,lVar7 * 2);
              }
            }
            plVar6 = local_58;
            local_68 = (undefined8 *)0x0;
            uStack_60 = 0;
            if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442f52d3:
              uVar9 = 0;
            }
            else {
              uVar4 = *puVar1;
              uVar9 = 0;
              if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
                puVar10 = (undefined8 *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                if ((puVar10 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x34) ||
                    ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1442f52d3;
                uVar9 = *puVar10;
              }
            }
            lVar8 = FUN_14101baae(uVar9);
            (**(code **)(*plVar6 + 0x60))(plVar6,*(undefined4 *)(lVar8 + 0xe0),&local_a8,&local_68);
            if ((int)uStack_60 == 0) {
LAB_1442f527a:
              if (local_68 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_68 != (undefined8 *)0x0) {
              (**(code **)*local_68)(local_68,0);
              FUN_1446efa72(&local_68,0,0,0x10);
              uStack_60 = uStack_60 & 0xffffffff00000000;
              goto LAB_1442f527a;
            }
            FUN_148ebd73c(L"ShowStoreUI",*(undefined8 *)(param_1 + 0x288));
            if (CONCAT44(uStack_94,uStack_98) != 0) {
              FUN_1400020a8();
            }
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            goto LAB_1442f50a3;
          }
        }
      }
      if (1 < *(int *)(lVar8 + 0x208)) {
        local_a8 = local_a8 & 0xffffff0000000000;
        uStack_a0 = 0xffffffff;
        puVar1 = (uint *)(param_1 + 0x30);
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        iStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        cVar5 = FUN_14664eae2(puVar1,0);
        uVar11 = 0xffffffff;
        if (cVar5 == '\0') {
          if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442f52c5:
            uVar9 = 0;
          }
          else {
            uVar4 = *puVar1;
            uVar9 = 0;
            if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
              puVar10 = (undefined8 *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
              if ((puVar10 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x34) ||
                  ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1442f52c5;
              uVar9 = *puVar10;
            }
          }
          lVar7 = FUN_14101baae(uVar9);
          if (lVar7 != 0) {
            if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442f52cc:
              uVar9 = 0;
            }
            else {
              uVar4 = *puVar1;
              uVar9 = 0;
              if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
                puVar10 = (undefined8 *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                if ((puVar10 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x34) ||
                    ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1442f52cc;
                uVar9 = *puVar10;
              }
            }
            lVar7 = FUN_14101baae(uVar9);
            uVar11 = *(undefined4 *)(lVar7 + 0xe0);
          }
        }
        local_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        uStack_a0 = uVar11;
        (**(code **)(*local_58 + 0x38))(local_58,lVar8 + 0x200,&local_a8,&local_68);
        if ((int)uStack_60 == 0) {
LAB_1442f506e:
          if (local_68 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_68 != (undefined8 *)0x0) {
          (**(code **)*local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          uStack_60 = uStack_60 & 0xffffffff00000000;
          goto LAB_1442f506e;
        }
        FUN_148ebd73c(L"ShowWebURL",*(undefined8 *)(param_1 + 0x288));
        FUN_148a3c424(&local_a8);
      }
    }
  }
LAB_1442f50a3:
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_1442f50ca:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f532a FUN_1442f532a body=203 status=ok
// SIG undefined FUN_1442f532a(void)

void FUN_1442f532a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (plVar3 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar3 != (longlong *)0x0)) &&
       ((((int)plVar3[2] == iVar2 && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0))
       )) {
      iVar2 = FUN_1415267f2(*plVar3 + 0x3c0);
      if (iVar2 != -1) {
        FUN_148ebdf3e(param_1,iVar2);
        return;
      }
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 == 0) {
        return;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x30);
    if (((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
       ((plVar3 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar3 != (longlong *)0x0 &&
        ((((int)plVar3[2] == iVar2 && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)
         ))))) {
      FUN_148ebdf9a();
      return;
    }
  }
  return;
}



// FUNCTION 1442f562e FUN_1442f562e body=393 status=ok
// SIG undefined FUN_1442f562e(void)

void FUN_1442f562e(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146149dcc();
  if (*(char *)(param_1 + 0x340) == '\x01') {
    if (*(longlong *)(param_1 + 0x288) != 0) {
      iVar4 = *(int *)(param_1 + 800);
      if (iVar4 == -1) {
        iVar4 = *(int *)(param_1 + 0x2f8);
      }
      local_38 = (char *)CONCAT44(local_38._4_4_,iVar4);
      if ((-1 < iVar4) && (iVar4 < *(int *)(*(longlong *)(param_1 + 0x288) + 200))) {
        if (*(int *)(param_1 + 0x2d8) == 0) {
          local_48 = 0;
        }
        else {
          local_48 = *(undefined4 *)
                      (*(longlong *)(param_1 + 0x2d0) +
                      (longlong)(*(int *)(param_1 + 0x2d8) + -1) * 4);
        }
        FUN_145e1502a(param_1,&local_48,&local_38);
      }
    }
    lVar3 = FUN_140391552(param_1);
    if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x348) == 0)) {
      local_38 = &LAB_148ebf650;
      local_30 = 0;
      FUN_148ed5102(&local_48,param_1,&local_38);
      local_38 = "ChangeFirstTimeCalibrationNavBar";
      local_30 = 0x20;
      local_2c = 0;
      uVar2 = FUN_14001a6c0(&local_38,1);
      FUN_140391af6(lVar3,&local_38,uVar2,&local_48);
      *(char **)(param_1 + 0x348) = local_38;
      if (local_40 != 0) {
        puVar1 = (undefined8 *)CONCAT44(uStack_44,local_48);
        if (puVar1 == (undefined8 *)0x0) goto LAB_1442f569f;
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (CONCAT44(uStack_44,local_48) != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1442f569f:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f59d4 FUN_1442f59d4 body=3453 status=ok
// SIG undefined FUN_1442f59d4(void)

void FUN_1442f59d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  char *pcVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_128 [32];
  longlong local_108;
  char *local_100;
  longlong local_f8;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong *local_78;
  char *local_70;
  int local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14588cd9e();
  if (*(longlong *)(param_1 + 0x2b4) == 0) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar15 = DAT_14caa8580;
    local_70 = "UI.State.MENU_PHOTOMODE";
    local_68 = 0x17;
    local_64 = local_64 & 0xffffff00;
    uVar10 = FUN_14001a6c0(&local_70,1);
    FUN_1400702d4(lVar15,&local_70,uVar10,0);
    *(char **)(param_1 + 0x2b4) = local_70;
  }
  if (*(longlong *)(param_1 + 700) == 0) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar15 = DAT_14caa8580;
    local_70 = "UI.State.MENU_PHOTOMODE_NOUI";
    local_68 = 0x1c;
    local_64 = local_64 & 0xffffff00;
    uVar10 = FUN_14001a6c0(&local_70,1);
    FUN_1400702d4(lVar15,&local_70,uVar10,0);
    *(char **)(param_1 + 700) = local_70;
  }
  lVar15 = *(longlong *)(param_1 + 0x288);
  if (((((lVar15 == 0) || (*(int *)(param_1 + 0x34) == 0)) ||
       (uVar3 = *(uint *)(param_1 + 0x30), (int)uVar3 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar3 ||
       (puVar14 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       puVar14 == (undefined8 *)0x0)))) ||
     ((*(int *)(puVar14 + 2) != *(int *)(param_1 + 0x34) ||
      ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) goto LAB_1442f66bc;
  if ((*(uint *)(puVar14 + 1) & 0x10200000) == 0) {
    plVar13 = (longlong *)*puVar14;
  }
  else {
    plVar13 = (longlong *)0x0;
  }
  uVar12 = (**(code **)(*plVar13 + 0x180))();
  FUN_1404d1e78(&local_80,uVar12);
  plVar13 = local_78;
  local_108 = lVar15;
  if (((local_80 != 0) && (local_78 != (longlong *)0x0)) && (0 < (int)local_78[1])) {
    iVar11 = (int)local_78[1];
    do {
      lVar17 = 0;
      if (iVar11 == 0) goto LAB_1442f5bd8;
      LOCK();
      iVar6 = (int)local_78[1];
      bVar19 = iVar11 == iVar6;
      if (bVar19) {
        *(int *)(local_78 + 1) = iVar11 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
      UNLOCK();
    } while (!bVar19);
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    lVar17 = local_80;
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
LAB_1442f5bd8:
    if ((longlong)*(int *)(lVar15 + 0xe0) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(longlong *)(lVar15 + 0xd8);
      lVar16 = (longlong)*(int *)(lVar15 + 0xe0) * 0x58;
      do {
        pvVar4 = DAT_14cbe0e80;
        local_70 = (char *)0x0;
        lVar15 = (longlong)DAT_14cbe0e88;
        local_68 = DAT_14cbe0e88;
        if (lVar15 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,DAT_14cbe0e88,0);
          memcpy(local_70,pvVar4,lVar15 * 2);
        }
        cVar8 = FUN_1402ca054(*(undefined8 *)(lVar18 + 0x10),local_70);
        if (local_70 != (char *)0x0) {
          FUN_1400020a8();
        }
        lVar15 = local_108;
        if (cVar8 != '\0') goto LAB_1442f5cac;
        lVar18 = lVar18 + 0x58;
        lVar16 = lVar16 + -0x58;
      } while (lVar16 != 0);
      lVar18 = 0;
    }
LAB_1442f5cac:
    *(float *)(lVar18 + 4) = *(float *)(lVar17 + 500) * 24.0;
  }
  lVar18 = DAT_14cb0d2b0;
  lVar17 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar17 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar17 = *(longlong *)(lVar18 + 0x2c8);
    if (lVar17 != 0) goto LAB_1442f5cdb;
  }
  else {
LAB_1442f5cdb:
    local_f8 = lVar17;
    FUN_141277db8(lVar17,&local_88,DAT_14cbe0fb0);
    uVar7 = FUN_1402ca054(local_88,L"Disabled");
    local_100 = (char *)CONCAT71(local_100._1_7_,uVar7);
    if ((longlong)*(int *)(lVar15 + 200) != 0) {
      puVar14 = *(undefined8 **)(local_108 + 0xc0);
      lVar15 = (longlong)*(int *)(lVar15 + 200) * 0x38;
      do {
        pvVar4 = DAT_14cbe0e00;
        local_70 = (char *)0x0;
        lVar17 = (longlong)DAT_14cbe0e08;
        local_68 = DAT_14cbe0e08;
        if (lVar17 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,DAT_14cbe0e08,0);
          memcpy(local_70,pvVar4,lVar17 * 2);
        }
        cVar8 = FUN_1402ca054(*puVar14,local_70);
        if (local_70 != (char *)0x0) {
          FUN_1400020a8();
        }
        if (cVar8 != '\0') {
          if (puVar14 != (undefined8 *)0x0) {
            if ((char)local_100 == '\0') {
              uVar7 = *(undefined1 *)(puVar14 + 1);
            }
            else {
              uVar7 = 0;
            }
            *(undefined1 *)(puVar14 + 1) = uVar7;
            *(char *)(puVar14 + 6) = (char)local_100;
            pvVar4 = DAT_14cbe0e00;
            local_98 = (void *)0x0;
            lVar15 = (longlong)DAT_14cbe0e08;
            local_90 = DAT_14cbe0e08;
            if (lVar15 == 0) {
              local_8c = 0;
            }
            else {
              FUN_1446dd670(&local_98,DAT_14cbe0e08,0);
              memcpy(local_98,pvVar4,lVar15 * 2);
            }
            FUN_148ebf814(param_1,&local_98);
          }
          break;
        }
        puVar14 = puVar14 + 7;
        lVar15 = lVar15 + -0x38;
      } while (lVar15 != 0);
    }
    local_100 = *(char **)(local_f8 + 0x150);
    if (local_100 == (char *)0x0) {
      FUN_147a64082(*(undefined8 *)(local_f8 + 0x148),&local_70);
      local_100 = local_70;
      *(char **)(local_f8 + 0x150) = local_70;
    }
    if ((longlong)*(int *)(local_108 + 0xe0) != 0) {
      lVar15 = *(longlong *)(local_108 + 0xd8);
      lVar17 = (longlong)*(int *)(local_108 + 0xe0) * 0x58;
      do {
        pvVar4 = DAT_14cbe0e10;
        local_70 = (char *)0x0;
        lVar18 = (longlong)DAT_14cbe0e18;
        local_68 = DAT_14cbe0e18;
        if (lVar18 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,DAT_14cbe0e18,0);
          memcpy(local_70,pvVar4,lVar18 * 2);
        }
        cVar8 = FUN_1402ca054(*(undefined8 *)(lVar15 + 0x10),local_70);
        if (local_70 != (char *)0x0) {
          FUN_1400020a8();
        }
        pcVar5 = local_100;
        if (cVar8 != '\0') {
          if (lVar15 != 0) {
            cVar8 = FUN_1402ca054(local_100,L"performance",0xb);
            uVar10 = 0;
            if (cVar8 == '\0') {
              uVar10 = *(undefined4 *)(lVar15 + 8);
            }
            *(undefined4 *)(lVar15 + 8) = uVar10;
            uVar7 = FUN_1402ca054(pcVar5,L"performance",0xb);
            *(undefined1 *)(lVar15 + 0x50) = uVar7;
            uVar7 = FUN_1402ca054(pcVar5,L"performance");
            *(undefined1 *)(lVar15 + 0x51) = uVar7;
            pvVar4 = DAT_14cbe0e10;
            uVar10 = *(undefined4 *)(lVar15 + 8);
            local_a8 = (void *)0x0;
            lVar15 = (longlong)DAT_14cbe0e18;
            local_a0 = DAT_14cbe0e18;
            if (lVar15 == 0) {
              local_9c = 0;
            }
            else {
              FUN_1446dd670(&local_a8,DAT_14cbe0e18,0);
              memcpy(local_a8,pvVar4,lVar15 * 2);
            }
            FUN_1442f6752(param_1,&local_a8,uVar10);
          }
          break;
        }
        lVar15 = lVar15 + 0x58;
        lVar17 = lVar17 + -0x58;
      } while (lVar17 != 0);
      if ((longlong)*(int *)(local_108 + 0xe0) != 0) {
        lVar15 = *(longlong *)(local_108 + 0xd8);
        lVar17 = (longlong)*(int *)(local_108 + 0xe0) * 0x58;
        do {
          pvVar4 = DAT_14cbe0e20;
          local_70 = (char *)0x0;
          lVar18 = (longlong)DAT_14cbe0e28;
          local_68 = DAT_14cbe0e28;
          if (lVar18 == 0) {
            local_64 = 0;
          }
          else {
            FUN_1446dd670(&local_70,DAT_14cbe0e28,0);
            memcpy(local_70,pvVar4,lVar18 * 2);
          }
          cVar8 = FUN_1402ca054(*(undefined8 *)(lVar15 + 0x10),local_70);
          if (local_70 != (char *)0x0) {
            FUN_1400020a8();
          }
          pcVar5 = local_100;
          if (cVar8 != '\0') {
            if (lVar15 != 0) {
              cVar8 = FUN_1402ca054(local_100,L"performance",0xb);
              uVar10 = 0;
              if (cVar8 == '\0') {
                uVar10 = *(undefined4 *)(lVar15 + 8);
              }
              *(undefined4 *)(lVar15 + 8) = uVar10;
              uVar7 = FUN_1402ca054(pcVar5,L"performance",0xb);
              *(undefined1 *)(lVar15 + 0x50) = uVar7;
              uVar7 = FUN_1402ca054(pcVar5,L"performance",0xb);
              *(undefined1 *)(lVar15 + 0x51) = uVar7;
              pvVar4 = DAT_14cbe0e20;
              uVar10 = *(undefined4 *)(lVar15 + 8);
              local_b8 = (void *)0x0;
              lVar15 = (longlong)DAT_14cbe0e28;
              local_b0 = DAT_14cbe0e28;
              if (lVar15 == 0) {
                local_ac = 0;
              }
              else {
                FUN_1446dd670(&local_b8,DAT_14cbe0e28,0);
                memcpy(local_b8,pvVar4,lVar15 * 2);
              }
              FUN_1442f6752(param_1,&local_b8,uVar10);
            }
            break;
          }
          lVar15 = lVar15 + 0x58;
          lVar17 = lVar17 + -0x58;
        } while (lVar17 != 0);
      }
    }
    FUN_141277db8(local_f8,&local_c0);
    if ((longlong)*(int *)(local_108 + 0xe0) != 0) {
      lVar15 = *(longlong *)(local_108 + 0xd8);
      lVar17 = (longlong)*(int *)(local_108 + 0xe0) * 0x58;
      do {
        pvVar4 = DAT_14cbe0f90;
        local_70 = (char *)0x0;
        lVar18 = (longlong)DAT_14cbe0f98;
        local_68 = DAT_14cbe0f98;
        if (lVar18 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,DAT_14cbe0f98,0);
          memcpy(local_70,pvVar4,lVar18 * 2);
        }
        cVar8 = FUN_1402ca054(*(undefined8 *)(lVar15 + 0x10),local_70);
        if (local_70 != (char *)0x0) {
          FUN_1400020a8();
        }
        if (cVar8 != '\0') {
          if (lVar15 != 0) {
            cVar8 = FUN_1402ca054(local_c0,&DAT_149e3aba4,3);
            uVar10 = 0;
            if (cVar8 == '\0') {
              uVar10 = *(undefined4 *)(lVar15 + 8);
            }
            *(undefined4 *)(lVar15 + 8) = uVar10;
            uVar7 = FUN_1402ca054(local_c0,&DAT_149e3aba4,3);
            *(undefined1 *)(lVar15 + 0x50) = uVar7;
            uVar7 = FUN_1402ca054(local_c0,&DAT_149e3aba4);
            *(undefined1 *)(lVar15 + 0x51) = uVar7;
            pvVar4 = DAT_14cbe0f90;
            uVar10 = *(undefined4 *)(lVar15 + 8);
            local_d0 = (void *)0x0;
            lVar15 = (longlong)DAT_14cbe0f98;
            local_c8 = DAT_14cbe0f98;
            if (lVar15 == 0) {
              local_c4 = 0;
            }
            else {
              FUN_1446dd670(&local_d0,DAT_14cbe0f98,0);
              memcpy(local_d0,pvVar4,lVar15 * 2);
            }
            FUN_1442f6752(param_1,&local_d0,uVar10);
          }
          break;
        }
        lVar15 = lVar15 + 0x58;
        lVar17 = lVar17 + -0x58;
      } while (lVar17 != 0);
      if ((longlong)*(int *)(local_108 + 0xe0) != 0) {
        lVar15 = *(longlong *)(local_108 + 0xd8);
        lVar17 = (longlong)*(int *)(local_108 + 0xe0) * 0x58;
        do {
          pvVar4 = DAT_14cbe0f40;
          local_70 = (char *)0x0;
          lVar18 = (longlong)DAT_14cbe0f48;
          local_68 = DAT_14cbe0f48;
          if (lVar18 == 0) {
            local_64 = 0;
          }
          else {
            FUN_1446dd670(&local_70,DAT_14cbe0f48,0);
            memcpy(local_70,pvVar4,lVar18 * 2);
          }
          cVar8 = FUN_1402ca054(*(undefined8 *)(lVar15 + 0x10),local_70);
          if (local_70 != (char *)0x0) {
            FUN_1400020a8();
          }
          if (cVar8 != '\0') {
            if (lVar15 != 0) {
              cVar8 = FUN_1402ca054(local_c0,&DAT_149e3aba4,3);
              uVar10 = 0;
              if (cVar8 == '\0') {
                uVar10 = *(undefined4 *)(lVar15 + 8);
              }
              *(undefined4 *)(lVar15 + 8) = uVar10;
              uVar7 = FUN_1402ca054(local_c0,&DAT_149e3aba4,3);
              *(undefined1 *)(lVar15 + 0x50) = uVar7;
              uVar7 = FUN_1402ca054(local_c0,&DAT_149e3aba4);
              *(undefined1 *)(lVar15 + 0x51) = uVar7;
              pvVar4 = DAT_14cbe0f40;
              uVar10 = *(undefined4 *)(lVar15 + 8);
              local_e0 = (void *)0x0;
              lVar15 = (longlong)DAT_14cbe0f48;
              local_d8 = DAT_14cbe0f48;
              if (lVar15 == 0) {
                local_d4 = 0;
              }
              else {
                FUN_1446dd670(&local_e0,DAT_14cbe0f48,0);
                memcpy(local_e0,pvVar4,lVar15 * 2);
              }
              FUN_1442f6752(param_1,&local_e0,uVar10);
            }
            break;
          }
          lVar15 = lVar15 + 0x58;
          lVar17 = lVar17 + -0x58;
        } while (lVar17 != 0);
      }
    }
    if ((longlong)*(int *)(local_108 + 0xf8) != 0) {
      cVar8 = *(char *)(local_f8 + 0x10c);
      puVar14 = *(undefined8 **)(local_108 + 0xf0);
      lVar15 = (longlong)*(int *)(local_108 + 0xf8) * 0x50;
      do {
        pvVar4 = DAT_14cbe0f50;
        local_70 = (char *)0x0;
        lVar17 = (longlong)DAT_14cbe0f58;
        local_68 = DAT_14cbe0f58;
        if (lVar17 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,DAT_14cbe0f58,0);
          memcpy(local_70,pvVar4,lVar17 * 2);
        }
        cVar9 = FUN_1402ca054(*puVar14,local_70);
        if (local_70 != (char *)0x0) {
          FUN_1400020a8();
        }
        if (cVar9 != '\0') {
          if (puVar14 != (undefined8 *)0x0) {
            if (cVar8 == '\0') {
              uVar10 = *(undefined4 *)(puVar14 + 1);
            }
            else {
              *(undefined4 *)(puVar14 + 1) = 0;
              uVar10 = 0;
            }
            *(char *)(puVar14 + 9) = cVar8;
            *(char *)((longlong)puVar14 + 0x49) = cVar8;
            pvVar4 = DAT_14cbe0f50;
            local_f0 = (void *)0x0;
            lVar15 = (longlong)DAT_14cbe0f58;
            local_e8 = DAT_14cbe0f58;
            if (lVar15 == 0) {
              local_e4 = 0;
            }
            else {
              FUN_1446dd670(&local_f0,DAT_14cbe0f58,0);
              memcpy(local_f0,pvVar4,lVar15 * 2);
            }
            FUN_148ec0072(param_1,&local_f0,uVar10);
          }
          break;
        }
        puVar14 = puVar14 + 10;
        lVar15 = lVar15 + -0x50;
      } while (lVar15 != 0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_78 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
LAB_1442f66bc:
  *(undefined1 *)(param_1 + 0x2c4) = 1;
  FUN_148ec0b7a(param_1);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f6752 FUN_1442f6752 body=3964 status=ok
// SIG undefined FUN_1442f6752(void)

void FUN_1442f6752(longlong param_1,longlong *param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  undefined4 uVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  float fVar19;
  undefined1 auStack_e8 [36];
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  int local_b0;
  undefined4 uStack_ac;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) goto LAB_1442f6ef7;
  local_c0 = param_1;
  if (*(int *)(lVar3 + 0xe0) < 1) {
    lVar14 = 0;
  }
  else {
    lVar16 = 0;
    lVar14 = 0;
    do {
      FUN_1400021e4(*(longlong *)(lVar3 + 0xd8) + lVar16 * 0x58 + 0x10,&local_b8);
      if (local_b0 == (int)param_2[1]) {
        bVar17 = true;
        if (1 < local_b0) {
          lVar11 = 0;
          while( true ) {
            uVar13 = *(ushort *)(local_b8 + lVar11);
            uVar5 = (uint)uVar13;
            uVar8 = *(ushort *)(*param_2 + lVar11);
            uVar12 = (uint)uVar8;
            if (uVar13 != uVar8) {
              if ((uVar8 | uVar13) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar13];
                uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar8];
                if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar8]) goto LAB_1442f6806;
              }
              iVar6 = uVar5 - uVar12;
              goto LAB_1442f6841;
            }
            if (uVar13 == 0) break;
LAB_1442f6806:
            lVar11 = lVar11 + 2;
          }
          iVar6 = 0;
LAB_1442f6841:
          bVar17 = iVar6 == 0;
        }
      }
      else {
        bVar17 = (int)param_2[1] + local_b0 == 1;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (bVar17) {
        lVar14 = lVar16 * 0x58 + *(longlong *)(lVar3 + 0xd8);
        local_c4 = (undefined4)lVar16;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(lVar3 + 0xe0));
  }
  lVar16 = local_c0;
  FUN_1448d5e3c(&local_b8,local_c0 + 0x208);
  puVar4 = *(uint **)(local_b8 + 0x660);
  AcquireSRWLockShared((PSRWLOCK)(puVar4 + 4));
  plVar7 = (longlong *)CONCAT44(uStack_ac,local_b0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
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
  uVar15 = local_c4;
  if (((((puVar4[1] != 0) && (uVar5 = *puVar4, -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && (*(uint *)(plVar7 + 2) == puVar4[1])))) &&
     (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
      ((lVar11 = *plVar7, lVar11 != 0 && (lVar14 != 0)))))) {
    fVar19 = (param_3 - *(float *)(lVar14 + 0x28)) /
             (*(float *)(lVar14 + 0x2c) - *(float *)(lVar14 + 0x28));
    if (1.0 <= fVar19) {
      fVar19 = 1.0;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    *(float *)(lVar14 + 8) = fVar19 * 100.0;
    iVar6 = (int)param_2[1];
    local_80 = lVar16;
    if (DAT_14cbe0de8 == iVar6) {
      if (1 < DAT_14cbe0de8) {
        lVar14 = 0;
        while( true ) {
          uVar13 = *(ushort *)(DAT_14cbe0de0 + lVar14);
          uVar10 = (ulonglong)uVar13;
          uVar8 = *(ushort *)(*param_2 + lVar14);
          if (uVar13 != uVar8) break;
          if (uVar13 == 0) goto LAB_1442f6e32;
LAB_1442f69c5:
          lVar14 = lVar14 + 2;
        }
        if ((uVar8 | uVar13) < 0x80) {
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9]) goto LAB_1442f69c5;
        }
        if (uVar13 != uVar8) goto LAB_1442f69f2;
      }
LAB_1442f6e32:
      plVar7 = *(longlong **)(lVar11 + 0x460);
      if ((plVar7 != (longlong *)0x0) && ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0)) {
        (**(code **)(*plVar7 + 0x5d8))(plVar7,param_3);
      }
    }
    else {
      if (DAT_14cbe0de8 + iVar6 == 1) goto LAB_1442f6e32;
LAB_1442f69f2:
      if (DAT_14cbe0df8 == iVar6) {
        if (1 < iVar6) {
          lVar14 = 0;
          while( true ) {
            uVar13 = *(ushort *)(DAT_14cbe0df0 + lVar14);
            uVar10 = (ulonglong)uVar13;
            uVar8 = *(ushort *)(*param_2 + lVar14);
            if (uVar13 != uVar8) break;
            if (uVar13 == 0) goto joined_r0x0001442f6e67;
LAB_1442f6a36:
            lVar14 = lVar14 + 2;
          }
          if ((uVar8 | uVar13) < 0x80) {
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar9 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9]) goto LAB_1442f6a36;
          }
          if (uVar13 != uVar8) goto LAB_1442f6a63;
        }
joined_r0x0001442f6e67:
        for (; 180.0 < param_3; param_3 = param_3 + -360.0) {
        }
        for (; param_3 < -180.0; param_3 = param_3 + 360.0) {
        }
        if (179.9 <= param_3) {
          param_3 = 179.9;
        }
        if (param_3 <= -179.9) {
          param_3 = -179.9;
        }
        *(float *)(lVar11 + 0x800) = param_3;
      }
      else {
        if (DAT_14cbe0df8 + iVar6 == 1) goto joined_r0x0001442f6e67;
LAB_1442f6a63:
        if (DAT_14cbe0e18 == iVar6) {
          if (1 < iVar6) {
            lVar14 = 0;
            while( true ) {
              uVar13 = *(ushort *)(DAT_14cbe0e10 + lVar14);
              uVar10 = (ulonglong)uVar13;
              uVar8 = *(ushort *)(*param_2 + lVar14);
              if (uVar13 != uVar8) break;
              if (uVar13 == 0) goto LAB_1442f6f45;
LAB_1442f6aa7:
              lVar14 = lVar14 + 2;
            }
            if ((uVar8 | uVar13) < 0x80) {
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              uVar9 = (ulonglong)uVar8;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9]) goto LAB_1442f6aa7;
            }
            if (uVar13 != uVar8) goto LAB_1442f6ad4;
          }
LAB_1442f6f45:
          lVar14 = *(longlong *)(lVar11 + 0x460);
          if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
            *(float *)(lVar14 + 0xc7c) = param_3;
          }
        }
        else {
          if (DAT_14cbe0e18 + iVar6 == 1) goto LAB_1442f6f45;
LAB_1442f6ad4:
          if (DAT_14cbe0e28 == iVar6) {
            if (1 < iVar6) {
              lVar14 = 0;
              while( true ) {
                uVar13 = *(ushort *)(DAT_14cbe0e20 + lVar14);
                uVar10 = (ulonglong)uVar13;
                uVar8 = *(ushort *)(*param_2 + lVar14);
                if (uVar13 != uVar8) break;
                if (uVar13 == 0) goto LAB_1442f6f7a;
LAB_1442f6b18:
                lVar14 = lVar14 + 2;
              }
              if ((uVar8 | uVar13) < 0x80) {
                uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                uVar9 = (ulonglong)uVar8;
                uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9]) goto LAB_1442f6b18;
              }
              lVar16 = local_c0;
              if (uVar13 != uVar8) goto LAB_1442f6b4f;
            }
LAB_1442f6f7a:
            lVar14 = *(longlong *)(lVar11 + 0x460);
            local_80 = lVar16;
            if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
              *(float *)(lVar14 + 0xce0) = param_3;
              FUN_140c89136();
            }
          }
          else {
            if (DAT_14cbe0e28 + iVar6 == 1) goto LAB_1442f6f7a;
LAB_1442f6b4f:
            if (DAT_14cbe0e38 == iVar6) {
              if (1 < iVar6) {
                lVar14 = 0;
                while( true ) {
                  uVar13 = *(ushort *)(DAT_14cbe0e30 + lVar14);
                  uVar10 = (ulonglong)uVar13;
                  uVar8 = *(ushort *)(*param_2 + lVar14);
                  if (uVar13 != uVar8) break;
                  if (uVar13 == 0) goto LAB_1442f6fb4;
LAB_1442f6b93:
                  lVar14 = lVar14 + 2;
                }
                if ((uVar8 | uVar13) < 0x80) {
                  uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                  uVar9 = (ulonglong)uVar8;
                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9]) goto LAB_1442f6b93;
                }
                lVar16 = local_c0;
                if (uVar13 != uVar8) goto LAB_1442f6bca;
              }
LAB_1442f6fb4:
              lVar14 = *(longlong *)(lVar11 + 0x460);
              local_80 = lVar16;
              if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                *(float *)(lVar14 + 0x7ec) = param_3;
              }
            }
            else {
              if (DAT_14cbe0e38 + iVar6 == 1) goto LAB_1442f6fb4;
LAB_1442f6bca:
              if (DAT_14cbe0e48 == iVar6) {
                if (1 < iVar6) {
                  lVar14 = 0;
                  while( true ) {
                    uVar13 = *(ushort *)(DAT_14cbe0e40 + lVar14);
                    uVar10 = (ulonglong)uVar13;
                    uVar8 = *(ushort *)(*param_2 + lVar14);
                    if (uVar13 != uVar8) break;
                    if (uVar13 == 0) goto LAB_1442f6fe9;
LAB_1442f6c0e:
                    lVar14 = lVar14 + 2;
                  }
                  if ((uVar8 | uVar13) < 0x80) {
                    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                    uVar9 = (ulonglong)uVar8;
                    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                    lVar16 = local_c0;
                    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9]) goto LAB_1442f6c0e;
                  }
                  lVar16 = local_c0;
                  if (uVar13 != uVar8) goto LAB_1442f6c4f;
                }
LAB_1442f6fe9:
                lVar14 = *(longlong *)(lVar11 + 0x460);
                local_80 = lVar16;
                if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                  dVar18 = (double)(param_3 / 100.0);
                  *(double *)(lVar14 + 0x3f0) = dVar18;
                  *(double *)(lVar14 + 0x3f8) = dVar18;
                  *(double *)(lVar14 + 0x400) = dVar18;
                  *(undefined8 *)(lVar14 + 0x408) = 0x3ff0000000000000;
                }
              }
              else {
                if (DAT_14cbe0e48 + iVar6 == 1) goto LAB_1442f6fe9;
LAB_1442f6c4f:
                local_80 = local_c0;
                if (DAT_14cbe0e58 == iVar6) {
                  if (1 < iVar6) {
                    lVar14 = 0;
                    while( true ) {
                      uVar13 = *(ushort *)(DAT_14cbe0e50 + lVar14);
                      uVar10 = (ulonglong)uVar13;
                      uVar8 = *(ushort *)(*param_2 + lVar14);
                      if (uVar13 != uVar8) break;
                      if (uVar13 == 0) goto LAB_1442f704e;
LAB_1442f6c93:
                      lVar14 = lVar14 + 2;
                    }
                    if ((uVar8 | uVar13) < 0x80) {
                      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                      uVar9 = (ulonglong)uVar8;
                      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9]) goto LAB_1442f6c93;
                    }
                    if (uVar13 != uVar8) goto LAB_1442f6cc0;
                  }
LAB_1442f704e:
                  lVar14 = *(longlong *)(lVar11 + 0x460);
                  if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                    dVar18 = (double)(param_3 / 100.0);
                    *(double *)(lVar14 + 0x3d0) = dVar18;
                    *(double *)(lVar14 + 0x3d8) = dVar18;
                    *(double *)(lVar14 + 0x3e0) = dVar18;
                    *(undefined8 *)(lVar14 + 1000) = 0x3ff0000000000000;
                  }
                }
                else {
                  if (DAT_14cbe0e58 + iVar6 == 1) goto LAB_1442f704e;
LAB_1442f6cc0:
                  if (DAT_14cbe0e68 == iVar6) {
                    if (1 < iVar6) {
                      lVar14 = 0;
                      while( true ) {
                        uVar13 = *(ushort *)(DAT_14cbe0e60 + lVar14);
                        uVar10 = (ulonglong)uVar13;
                        uVar8 = *(ushort *)(*param_2 + lVar14);
                        if (uVar13 != uVar8) break;
                        if (uVar13 == 0) goto LAB_1442f70bd;
LAB_1442f6d04:
                        lVar14 = lVar14 + 2;
                      }
                      if ((uVar8 | uVar13) < 0x80) {
                        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                        uVar9 = (ulonglong)uVar8;
                        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                        if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9]) goto LAB_1442f6d04;
                      }
                      if (uVar13 != uVar8) goto LAB_1442f6d31;
                    }
LAB_1442f70bd:
                    lVar14 = *(longlong *)(lVar11 + 0x460);
                    if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                      dVar18 = (double)(param_3 / 100.0);
                      *(double *)(lVar14 + 0x3b0) = dVar18;
                      *(double *)(lVar14 + 0x3b8) = dVar18;
                      *(double *)(lVar14 + 0x3c0) = dVar18;
                      *(undefined8 *)(lVar14 + 0x3c8) = 0x3ff0000000000000;
                    }
                  }
                  else {
                    if (DAT_14cbe0e68 + iVar6 == 1) goto LAB_1442f70bd;
LAB_1442f6d31:
                    if (DAT_14cbe0e78 == iVar6) {
                      if (1 < iVar6) {
                        lVar14 = 0;
                        while( true ) {
                          uVar13 = *(ushort *)(DAT_14cbe0e70 + lVar14);
                          uVar10 = (ulonglong)uVar13;
                          uVar8 = *(ushort *)(*param_2 + lVar14);
                          if (uVar13 != uVar8) break;
                          if (uVar13 == 0) goto LAB_1442f712c;
LAB_1442f6d75:
                          lVar14 = lVar14 + 2;
                        }
                        if ((uVar8 | uVar13) < 0x80) {
                          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                          uVar9 = (ulonglong)uVar8;
                          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                          goto LAB_1442f6d75;
                        }
                        if (uVar13 != uVar8) goto LAB_1442f6da2;
                      }
LAB_1442f712c:
                      lVar14 = *(longlong *)(lVar11 + 0x460);
                      if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                        dVar18 = (double)(param_3 / 100.0);
                        *(double *)(lVar14 + 0x410) = dVar18;
                        *(double *)(lVar14 + 0x418) = dVar18;
                        *(double *)(lVar14 + 0x420) = dVar18;
                        *(undefined8 *)(lVar14 + 0x428) = 0x3ff0000000000000;
                      }
                    }
                    else {
                      if (DAT_14cbe0e78 + iVar6 == 1) goto LAB_1442f712c;
LAB_1442f6da2:
                      if (DAT_14cbe0e88 == iVar6) {
                        if (1 < iVar6) {
                          lVar14 = 0;
                          while( true ) {
                            uVar13 = *(ushort *)(DAT_14cbe0e80 + lVar14);
                            uVar10 = (ulonglong)uVar13;
                            uVar8 = *(ushort *)(*param_2 + lVar14);
                            if (uVar13 != uVar8) break;
                            if (uVar13 == 0) goto LAB_1442f6e0b;
LAB_1442f6dde:
                            lVar14 = lVar14 + 2;
                          }
                          if ((uVar8 | uVar13) < 0x80) {
                            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                            uVar9 = (ulonglong)uVar8;
                            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                            if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                            goto LAB_1442f6dde;
                          }
                          if (uVar13 != uVar8) goto LAB_1442f7198;
                        }
LAB_1442f6e0b:
                        FUN_148b7476e(lVar11,param_3);
                        local_80 = local_c0;
                        uVar15 = local_c4;
                      }
                      else {
                        if (DAT_14cbe0e88 + iVar6 == 1) goto LAB_1442f6e0b;
LAB_1442f7198:
                        if (DAT_14cbe0f68 == iVar6) {
                          if (1 < iVar6) {
                            lVar14 = 0;
                            while( true ) {
                              uVar13 = *(ushort *)(DAT_14cbe0f60 + lVar14);
                              uVar10 = (ulonglong)uVar13;
                              uVar8 = *(ushort *)(*param_2 + lVar14);
                              if (uVar13 != uVar8) break;
                              if (uVar13 == 0) goto LAB_1442f7205;
LAB_1442f71d0:
                              lVar14 = lVar14 + 2;
                            }
                            if ((uVar8 | uVar13) < 0x80) {
                              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                              uVar9 = (ulonglong)uVar8;
                              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                              if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                              goto LAB_1442f71d0;
                            }
                            if (uVar13 != uVar8) goto LAB_1442f7249;
                          }
LAB_1442f7205:
                          lVar14 = *(longlong *)(lVar11 + 0x460);
                          if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                            *(float *)(lVar11 + 0x5c0) = param_3 / 100.0;
                            *(float *)(lVar14 + 0x998) = param_3 / 100.0;
                          }
                        }
                        else {
                          if (DAT_14cbe0f68 + iVar6 == 1) goto LAB_1442f7205;
LAB_1442f7249:
                          if (DAT_14cbe0f78 == iVar6) {
                            if (1 < iVar6) {
                              lVar14 = 0;
                              while( true ) {
                                uVar13 = *(ushort *)(DAT_14cbe0f70 + lVar14);
                                uVar10 = (ulonglong)uVar13;
                                uVar8 = *(ushort *)(*param_2 + lVar14);
                                if (uVar13 != uVar8) break;
                                if (uVar13 == 0) goto LAB_1442f72b9;
LAB_1442f7281:
                                lVar14 = lVar14 + 2;
                              }
                              if ((uVar8 | uVar13) < 0x80) {
                                uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                                uVar9 = (ulonglong)uVar8;
                                uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                                if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                                goto LAB_1442f7281;
                              }
                              if (uVar13 != uVar8) goto LAB_1442f72f5;
                            }
LAB_1442f72b9:
                            lVar14 = *(longlong *)(lVar11 + 0x460);
                            if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                              *(float *)(lVar14 + 0x918) = param_3 / 100.0;
                            }
                          }
                          else {
                            if (DAT_14cbe0f78 + iVar6 == 1) goto LAB_1442f72b9;
LAB_1442f72f5:
                            if (DAT_14cbe0f68 == iVar6) {
                              if (1 < iVar6) {
                                lVar14 = 0;
                                while( true ) {
                                  uVar13 = *(ushort *)(DAT_14cbe0f60 + lVar14);
                                  uVar10 = (ulonglong)uVar13;
                                  uVar8 = *(ushort *)(*param_2 + lVar14);
                                  if (uVar13 != uVar8) break;
                                  if (uVar13 == 0) goto LAB_1442f7205;
LAB_1442f732e:
                                  lVar14 = lVar14 + 2;
                                }
                                if ((uVar8 | uVar13) < 0x80) {
                                  uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                                  uVar9 = (ulonglong)uVar8;
                                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                                  if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                                  goto LAB_1442f732e;
                                }
                                if (uVar13 != uVar8) goto LAB_1442f736a;
                              }
                              goto LAB_1442f7205;
                            }
                            if (DAT_14cbe0f68 + iVar6 == 1) goto LAB_1442f7205;
LAB_1442f736a:
                            if (DAT_14cbe0f48 == iVar6) {
                              if (1 < iVar6) {
                                lVar14 = 0;
                                while( true ) {
                                  uVar13 = *(ushort *)(DAT_14cbe0f40 + lVar14);
                                  uVar10 = (ulonglong)uVar13;
                                  uVar8 = *(ushort *)(*param_2 + lVar14);
                                  if (uVar13 != uVar8) break;
                                  if (uVar13 == 0) goto LAB_1442f744d;
LAB_1442f73ae:
                                  lVar14 = lVar14 + 2;
                                }
                                if ((uVar8 | uVar13) < 0x80) {
                                  uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                                  uVar9 = (ulonglong)uVar8;
                                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                                  if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                                  goto LAB_1442f73ae;
                                }
                                if (uVar13 != uVar8) goto LAB_1442f73d8;
                              }
LAB_1442f744d:
                              lVar14 = *(longlong *)(lVar11 + 0x460);
                              if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                                *(float *)(lVar14 + 0x928) = param_3 / 100.0;
                              }
                            }
                            else {
                              if (DAT_14cbe0f48 + iVar6 == 1) goto LAB_1442f744d;
LAB_1442f73d8:
                              if (DAT_14cbe0f78 == iVar6) {
                                if (1 < iVar6) {
                                  lVar14 = 0;
                                  while( true ) {
                                    uVar13 = *(ushort *)(DAT_14cbe0f70 + lVar14);
                                    uVar10 = (ulonglong)uVar13;
                                    uVar8 = *(ushort *)(*param_2 + lVar14);
                                    if (uVar13 != uVar8) break;
                                    if (uVar13 == 0) goto LAB_1442f72b9;
LAB_1442f7416:
                                    lVar14 = lVar14 + 2;
                                  }
                                  if ((uVar8 | uVar13) < 0x80) {
                                    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                                    uVar9 = (ulonglong)uVar8;
                                    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                                    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                                    goto LAB_1442f7416;
                                  }
                                  if (uVar13 != uVar8) goto LAB_1442f7494;
                                }
                                goto LAB_1442f72b9;
                              }
                              if (DAT_14cbe0f78 + iVar6 == 1) goto LAB_1442f72b9;
LAB_1442f7494:
                              if (DAT_14cbe0f88 == iVar6) {
                                if (1 < iVar6) {
                                  lVar14 = 0;
                                  while( true ) {
                                    uVar13 = *(ushort *)(DAT_14cbe0f80 + lVar14);
                                    uVar10 = (ulonglong)uVar13;
                                    uVar8 = *(ushort *)(*param_2 + lVar14);
                                    if (uVar13 != uVar8) break;
                                    if (uVar13 == 0) goto LAB_1442f7607;
LAB_1442f74d8:
                                    lVar14 = lVar14 + 2;
                                  }
                                  if ((uVar8 | uVar13) < 0x80) {
                                    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                                    uVar9 = (ulonglong)uVar8;
                                    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                                    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                                    goto LAB_1442f74d8;
                                  }
                                  if (uVar13 != uVar8) goto LAB_1442f7505;
                                }
LAB_1442f7607:
                                if (param_3 <= 0.01) {
                                  param_3 = 0.01;
                                }
                                lVar14 = *(longlong *)(lVar11 + 0x460);
                                if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                                  *(float *)(lVar14 + 0x674) = param_3;
                                }
                              }
                              else {
                                if (DAT_14cbe0f88 + iVar6 == 1) goto LAB_1442f7607;
LAB_1442f7505:
                                if (DAT_14cbe0f98 == iVar6) {
                                  if (1 < iVar6) {
                                    lVar14 = 0;
                                    while( true ) {
                                      uVar13 = *(ushort *)(DAT_14cbe0f90 + lVar14);
                                      uVar10 = (ulonglong)uVar13;
                                      uVar8 = *(ushort *)(*param_2 + lVar14);
                                      if (uVar13 != uVar8) break;
                                      if (uVar13 == 0) goto LAB_1442f765c;
LAB_1442f7549:
                                      lVar14 = lVar14 + 2;
                                    }
                                    if ((uVar8 | uVar13) < 0x80) {
                                      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                                      uVar9 = (ulonglong)uVar8;
                                      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                                      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                                      goto LAB_1442f7549;
                                    }
                                    if (uVar13 != uVar8) goto LAB_1442f7576;
                                  }
LAB_1442f765c:
                                  lVar14 = *(longlong *)(lVar11 + 0x460);
                                  if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                                    *(float *)(lVar14 + 0x66c) = param_3;
                                  }
                                }
                                else {
                                  if (DAT_14cbe0f98 + iVar6 == 1) goto LAB_1442f765c;
LAB_1442f7576:
                                  if (DAT_14cbe0fa8 == iVar6) {
                                    if (1 < iVar6) {
                                      lVar14 = 0;
                                      while( true ) {
                                        uVar13 = *(ushort *)(DAT_14cbe0fa0 + lVar14);
                                        uVar10 = (ulonglong)uVar13;
                                        uVar8 = *(ushort *)(*param_2 + lVar14);
                                        if (uVar13 != uVar8) {
                                          if ((uVar8 | uVar13) < 0x80) {
                                            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                                            uVar9 = (ulonglong)uVar8;
                                            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                                            if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar9])
                                            goto LAB_1442f75ce;
                                          }
                                          bVar17 = uVar13 == uVar8;
                                          goto LAB_1442f7695;
                                        }
                                        if (uVar13 == 0) break;
LAB_1442f75ce:
                                        lVar14 = lVar14 + 2;
                                      }
                                    }
LAB_1442f76a5:
                                    lVar14 = *(longlong *)(lVar11 + 0x460);
                                    if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0))
                                    {
                                      *(float *)(lVar14 + 0x870) = param_3;
                                    }
                                  }
                                  else {
                                    bVar17 = DAT_14cbe0fa8 + iVar6 == 1;
LAB_1442f7695:
                                    if (bVar17) goto LAB_1442f76a5;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_98 = 0;
    local_88 = &PTR_LAB_14b9d3010;
    local_a8 = FUN_144304414;
    local_78 = lVar3;
    local_70 = uVar15;
    FUN_1403911de(local_80);
  }
  ReleaseSRWLockShared((PSRWLOCK)(puVar4 + 4));
LAB_1442f6ef7:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442f76d0 FUN_1442f76d0 body=47 status=ok
// SIG undefined FUN_1442f76d0(void)

void FUN_1442f76d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14126888e();
  if (lVar1 != 0) {
    lVar1 = FUN_1401ca7f2(lVar1);
    if (lVar1 != 0) {
      FUN_144000cde(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1442f7700 FUN_1442f7700 body=721 status=ok
// SIG undefined FUN_1442f7700(void)

void FUN_1442f7700(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459249be();
  FUN_1448d5e3c(&local_40,param_1 + 0x41);
  puVar5 = *(uint **)(local_40 + 0x660);
  AcquireSRWLockShared((PSRWLOCK)(puVar5 + 4));
  plVar10 = (longlong *)CONCAT44(uStack_34,local_38);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  uVar3 = puVar5[1];
  if (uVar3 == 0) goto LAB_1442f78a5;
  uVar4 = *puVar5;
  if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) {
LAB_1442f77f9:
    if (*(int *)((longlong)param_1 + 0x34) == 0) goto LAB_1442f78a5;
    uVar3 = *(uint *)(param_1 + 6);
    lVar11 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      if ((lVar11 != 0) &&
         ((*(int *)(lVar11 + 0x10) == *(int *)((longlong)param_1 + 0x34) &&
          ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
        puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        lVar11 = param_1[6];
        *puVar8 = &PTR_FUN_14b9d08e0;
        local_40 = "FOakUIEvent_PhotoMode_ClosePhotoMode";
        local_38 = 0x24;
        uStack_34 = uStack_34 & 0xffffff00;
        uVar7 = FUN_14001a6c0(&local_40,1);
        FUN_14039176c(puVar8,lVar11,uVar7,1);
        *puVar8 = &PTR_FUN_14b9d08e0;
        FUN_140391314(param_1,puVar8);
      }
      goto LAB_1442f78a5;
    }
  }
  else {
    plVar10 = (longlong *)
              ((ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((plVar10 == (longlong *)0x0) ||
       ((*(uint *)(plVar10 + 2) != uVar3 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) {
      lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if (((lVar11 == 0) || (*(uint *)(lVar11 + 0x10) != uVar3)) ||
         ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) goto LAB_1442f77f9;
    }
    else if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar10;
      goto LAB_1442f78b7;
    }
LAB_1442f78a5:
    lVar11 = 0;
  }
LAB_1442f78b7:
  ReleaseSRWLockShared((PSRWLOCK)(puVar5 + 4));
  if (((*(int *)((longlong)param_1 + 0x34) == 0) || (uVar3 = *(uint *)(param_1 + 6), (int)uVar3 < 0)
      ) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1442f79ab;
  lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != *(int *)((longlong)param_1 + 0x34))) ||
     ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_1442f79ab;
  FUN_1442f79d2(param_1,CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
  if (lVar11 != 0) {
    FUN_143ffe560(lVar11,1);
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_1442f79ce:
    lVar11 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 6);
    lVar11 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)((longlong)param_1 + 0x34) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_1442f79ce;
      lVar11 = *plVar10;
    }
  }
  cVar6 = FUN_140426394(lVar11 + 0x3c0,param_1 + 0x2e);
  if (cVar6 != '\0') {
    (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
    *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
  }
LAB_1442f79ab:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f79d2 FUN_1442f79d2 body=470 status=ok
// SIG undefined FUN_1442f79d2(void)

void FUN_1442f79d2(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  lVar2 = DAT_14cb0d2b0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar7 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar7 = *(longlong *)(lVar2 + 0x2c8);
    if (lVar7 == 0) goto LAB_1442f7a45;
  }
  if ((((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x34))) &&
      ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
      uVar4 = *puVar5;
    }
    else {
      uVar4 = 0;
    }
    plVar3 = (longlong *)FUN_1407f492e(uVar4);
    if (plVar3 != (longlong *)0x0) {
      if (param_2 == '\0') {
        FUN_140002266(local_48,L"GbxCoreStat.ShowStats %hhu",0);
        (**(code **)(*plVar3 + 0xd40))(plVar3,local_38,local_48,1);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
        uVar6 = 0;
      }
      else {
        FUN_140002266(local_48,L"GbxCoreStat.ShowStats %hhu",*(undefined1 *)(lVar7 + 0x16c));
        (**(code **)(*plVar3 + 0xd40))(plVar3,local_38,local_48,1);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
        uVar6 = *(undefined1 *)(lVar7 + 0x16c);
      }
      FUN_140002266(local_48,L"GbxCoreStat.ShowStatsEditor %hhu",uVar6);
      (**(code **)(*plVar3 + 0xd40))(plVar3,local_58,local_48,1);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1442f7a45:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442f7baa FUN_1442f7baa body=2818 status=ok
// SIG undefined FUN_1442f7baa(void)

void FUN_1442f7baa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ushort *puVar4;
  void *_Src;
  char *pcVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  size_t sVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint uVar16;
  PSRWLOCK SRWLock;
  longlong lVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_2b8 [40];
  longlong local_290;
  char *local_288;
  longlong local_280;
  PSRWLOCK local_278;
  uint *local_270;
  undefined1 local_268 [16];
  code *local_258;
  undefined8 local_248;
  undefined **local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  undefined1 *local_208;
  char local_200;
  longlong local_1f8 [32];
  undefined1 local_f8 [128];
  undefined1 *local_78;
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  cVar6 = FUN_141304ab2();
  if ((cVar6 != '\0') && ((*(byte *)(param_1 + 0x8c) & 0x80) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_2b8);
  }
  lVar21 = *(longlong *)(param_1 + 0x288);
  if (lVar21 == 0) goto LAB_1442f85c2;
  FUN_1448d5e3c(&local_218,param_1 + 0x208);
  puVar20 = (uint *)local_218[0xcc];
  SRWLock = (PSRWLOCK)(puVar20 + 4);
  AcquireSRWLockShared(SRWLock);
  plVar14 = local_210;
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_210 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (((((puVar20[1] == 0) || (uVar16 = *puVar20, (int)uVar16 < 0)) ||
       (DAT_14c9647dc <= (int)uVar16)) ||
      ((lVar17 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar17 == 0 ||
       (*(uint *)(lVar17 + 0x10) != puVar20[1])))) || ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)) {
    if (((((*(byte *)(param_1 + 0x8c) & 0x80) != 0) && (*(int *)(param_1 + 0x34) != 0)) &&
        ((uVar16 = *(uint *)(param_1 + 0x30), -1 < (int)uVar16 &&
         ((((int)uVar16 < DAT_14c9647dc &&
           (lVar17 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar17 != 0))
          && (*(int *)(lVar17 + 0x10) == *(int *)(param_1 + 0x34))))))) &&
       ((*(uint *)(lVar17 + 8) & 0x10200000) == 0)) {
      puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar18 = *(undefined8 *)(param_1 + 0x30);
      *puVar10 = &PTR_FUN_14b9d08e0;
      local_218 = (longlong *)0x14b9d08f8;
      local_210 = (longlong *)CONCAT35(local_210._5_3_,0x24);
      uVar8 = FUN_14001a6c0(&local_218,1);
      FUN_14039176c(puVar10,uVar18,uVar8,1);
      *puVar10 = &PTR_FUN_14b9d08e0;
      FUN_140391314(param_1,puVar10);
    }
  }
  else {
    bVar22 = true;
    if (((*(int *)(param_1 + 0x34) != 0) && (uVar16 = *(uint *)(param_1 + 0x30), -1 < (int)uVar16))
       && ((((int)uVar16 < DAT_14c9647dc &&
            ((puVar10 = (undefined8 *)
                        ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
             puVar10 != (undefined8 *)0x0 && (*(int *)(puVar10 + 2) == *(int *)(param_1 + 0x34)))))
           && ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
        plVar14 = (longlong *)*puVar10;
      }
      else {
        plVar14 = (longlong *)0x0;
      }
      lVar17 = (**(code **)(*plVar14 + 0x180))();
      if ((lVar17 != 0) && (*(longlong *)(lVar17 + 0x178) != 0)) {
        bVar22 = *(int *)(*(longlong *)(lVar17 + 0x178) + 0x3b0) == 1;
      }
    }
    *(bool *)(param_1 + 0x2c5) = bVar22;
    local_288 = (char *)(lVar21 + 0x174);
    iVar9 = *(int *)(lVar21 + 0x178);
    local_278 = SRWLock;
    local_270 = puVar20;
    if ((bool)*(char *)(lVar21 + 0x174) == bVar22) {
      if (iVar9 == 0) {
        iVar9 = 0;
        goto LAB_1442f7e2a;
      }
    }
    else {
LAB_1442f7e2a:
      *(bool *)(lVar21 + 0x174) = bVar22;
      *(int *)(lVar21 + 0x178) = iVar9 + 1;
      if ((((*(int *)(param_1 + 0x34) != 0) &&
           (uVar16 = *(uint *)(param_1 + 0x30), -1 < (int)uVar16)) && ((int)uVar16 < DAT_14c9647dc))
         && (((plVar14 = (longlong *)
                         ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
              plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0x34))) &&
             ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
          lVar17 = *plVar14;
        }
        else {
          lVar17 = 0;
        }
        local_218 = local_1f8;
        local_200 = '\0';
        local_208 = local_f8;
        local_210 = local_218;
        pwVar11 = (wchar_t *)FUN_140c7f682(param_1,L"Event_SetCanPause",&local_218);
        local_78 = (undefined1 *)0x0;
        if (pwVar11 == (wchar_t *)0x0) {
          local_70 = (undefined1 *)0x0;
          local_68 = 0;
        }
        else {
          local_290 = lVar17;
          sVar12 = wcslen(pwVar11);
          local_68 = FUN_14475aa65(0,pwVar11,sVar12 & 0xffffffff);
          uVar16 = local_68 + 1;
          local_70 = (undefined1 *)0x0;
          if (0x80 < uVar16) {
            FUN_1446efa72(&local_78,0,uVar16,1);
            local_70 = local_78;
          }
          if (local_70 == (undefined1 *)0x0) {
            local_70 = local_f8;
          }
          FUN_14475a98a(local_70,uVar16,pwVar11,(int)sVar12 + 1);
          lVar17 = local_290;
        }
        FUN_140755a72(lVar17,local_70);
        puVar20 = local_270;
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_200 == '\x01') {
          FUN_1400020a8();
        }
      }
      uVar16 = puVar20[1];
      if (uVar16 == 0) {
LAB_1442f861b:
        lVar17 = 0;
      }
      else {
        uVar3 = *puVar20;
        lVar17 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             ((*(uint *)(plVar14 + 2) != uVar16 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
          goto LAB_1442f861b;
          lVar17 = *plVar14;
        }
      }
      lVar17 = *(longlong *)(lVar17 + 0x458);
      if ((lVar17 == 0) || ((*(uint *)(lVar17 + 8) >> 0x1e & 1) != 0)) {
        if (bVar22 == false) goto LAB_1442f8069;
      }
      else if (bVar22 != (bool)*(char *)(lVar17 + 0x110)) {
LAB_1442f8069:
        if (uVar16 == 0) {
LAB_1442f8633:
          lVar17 = 0;
        }
        else {
          uVar3 = *puVar20;
          lVar17 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            plVar14 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((plVar14 == (longlong *)0x0) ||
               ((*(uint *)(plVar14 + 2) != uVar16 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
            goto LAB_1442f8633;
            lVar17 = *plVar14;
          }
        }
        if ((*(longlong *)(lVar17 + 0x458) != 0) &&
           ((*(uint *)(*(longlong *)(lVar17 + 0x458) + 8) >> 0x1e & 1) == 0)) {
          FUN_148b7683a();
        }
      }
    }
    if (*(char *)(param_1 + 0x2c5) == '\x01') {
      if (puVar20[1] == 0) {
LAB_1442f8622:
        lVar17 = 0;
      }
      else {
        uVar16 = *puVar20;
        lVar17 = 0;
        if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             ((*(uint *)(plVar14 + 2) != puVar20[1] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))
             )) goto LAB_1442f8622;
          lVar17 = *plVar14;
        }
      }
      bVar7 = *(byte *)(lVar17 + 0x5c9) ^ 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)(param_1 + 0x2c5) = bVar7;
    iVar9 = *(int *)(lVar21 + 0xe0);
    local_290 = lVar21;
    if ((longlong)iVar9 != 0) {
      local_280 = *(longlong *)(lVar21 + 0xd8);
      puVar15 = (undefined4 *)(local_280 + 4);
      lVar21 = 0;
      do {
        _Src = DAT_14cbe0e80;
        local_218 = (longlong *)0x0;
        lVar17 = (longlong)(int)DAT_14cbe0e88;
        local_210 = (longlong *)CONCAT44(local_210._4_4_,DAT_14cbe0e88);
        if (lVar17 == 0) {
          local_210 = (longlong *)(ulonglong)DAT_14cbe0e88;
        }
        else {
          FUN_1446dd670(&local_218,DAT_14cbe0e88,0);
          memcpy(local_218,_Src,lVar17 * 2);
        }
        cVar6 = FUN_1402ca054(*(undefined8 *)(puVar15 + 3),local_218);
        if (local_218 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (cVar6 != '\0') {
          local_280 = local_280 - lVar21;
          if ((local_280 != 0) &&
             (bVar7 = *(byte *)(param_1 + 0x2c5), bVar7 != *(byte *)(param_1 + 0x2c6))) {
            *(byte *)(param_1 + 0x2c6) = bVar7;
            *(byte *)((longlong)puVar15 + 0x4d) = bVar7 ^ 1;
            *(byte *)(puVar15 + 0x13) = *(byte *)(param_1 + 0x2c5) ^ 1;
            uVar8 = *puVar15;
            FUN_1400021e4(local_280 + 0x10,local_268);
            FUN_1442f6752(param_1,local_268,uVar8);
            if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442f863a:
              uVar18 = 0;
            }
            else {
              uVar16 = *(uint *)(param_1 + 0x30);
              uVar18 = 0;
              if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                puVar10 = (undefined8 *)
                          ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
                if ((puVar10 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x34) ||
                    ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1442f863a;
                uVar18 = *puVar10;
              }
            }
            local_218 = local_1f8;
            local_200 = '\0';
            local_208 = local_f8;
            local_210 = local_218;
            pwVar11 = (wchar_t *)FUN_140c7f682(param_1,L"Event_RefreshGroup",&local_218);
            local_78 = (undefined1 *)0x0;
            if (pwVar11 == (wchar_t *)0x0) {
              local_70 = (undefined1 *)0x0;
              local_68 = 0;
            }
            else {
              sVar12 = wcslen(pwVar11);
              local_68 = FUN_14475aa65(0,pwVar11,sVar12 & 0xffffffff);
              uVar16 = local_68 + 1;
              puVar19 = (undefined1 *)0x0;
              if (0x80 < uVar16) {
                FUN_1446efa72(&local_78,0,uVar16,1);
                puVar19 = local_78;
              }
              local_70 = puVar19;
              if (puVar19 == (undefined1 *)0x0) {
                local_70 = local_f8;
              }
              FUN_14475a98a(local_70,uVar16,pwVar11,(int)sVar12 + 1);
            }
            FUN_1412a486e(uVar18,local_70);
            if (local_78 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            if (local_200 == '\x01') {
              FUN_1400020a8(local_218);
            }
          }
          break;
        }
        lVar21 = lVar21 + -0x58;
        puVar15 = puVar15 + 0x16;
      } while ((longlong)iVar9 * -0x58 - lVar21 != 0);
    }
    puVar20 = local_270;
    SRWLock = local_278;
    pcVar5 = local_288;
    lVar21 = local_290;
    if (local_270[1] == 0) {
      uVar18 = 0;
    }
    else {
      uVar16 = *local_270;
      uVar18 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar10 + 2) != local_270[1] || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))
           )) {
          uVar18 = 0;
        }
        else {
          uVar18 = *puVar10;
        }
      }
    }
    if ((*(char *)(param_1 + 0x2c4) == '\x01') && (cVar6 = FUN_140ae0922(uVar18), cVar6 == '\0')) {
      if (((*pcVar5 == '\x01') &&
          ((((*(int *)(param_1 + 0x34) != 0 &&
             (uVar16 = *(uint *)(param_1 + 0x30), -1 < (int)uVar16)) &&
            ((int)uVar16 < DAT_14c9647dc)) &&
           ((puVar10 = (undefined8 *)
                       ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
            puVar10 != (undefined8 *)0x0 && (*(int *)(puVar10 + 2) == *(int *)(param_1 + 0x34)))))))
         && ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
          plVar14 = (longlong *)*puVar10;
        }
        else {
          plVar14 = (longlong *)0x0;
        }
        lVar17 = (**(code **)(*plVar14 + 0x180))();
        if (lVar17 != 0) {
          if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442f8691:
            uVar13 = 0;
          }
          else {
            uVar16 = *(uint *)(param_1 + 0x30);
            uVar13 = 0;
            if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
              puVar10 = (undefined8 *)
                        ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
              if ((puVar10 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x34) ||
                  ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1442f8691;
              uVar13 = *puVar10;
            }
          }
          local_228 = FUN_1407f492e(uVar13);
          local_248 = 0;
          local_238 = &PTR_LAB_14b9d2dc0;
          local_258 = FUN_144303b4c;
          local_230 = lVar17;
          local_220 = uVar18;
          FUN_1403911de(param_1);
        }
      }
      *(undefined1 *)(param_1 + 0x2c4) = 0;
    }
    if ((*pcVar5 == '\0') && (cVar6 = FUN_140ae0922(uVar18), cVar6 != '\0')) {
      FUN_1463cd9b8(uVar18,0);
    }
  }
  if (*(uint *)(lVar21 + 0xac) != puVar20[2]) {
    *(uint *)(lVar21 + 0xac) = puVar20[2];
    puVar4 = *(ushort **)(lVar21 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar21 + 0x78) & 0x3f));
    }
  }
  ReleaseSRWLockShared(SRWLock);
LAB_1442f85c2:
  if ((local_60 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f86d2 FUN_1442f86d2 body=158 status=ok
// SIG undefined FUN_1442f86d2(void)

void FUN_1442f86d2(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9d08e0;
  local_38 = "FOakUIEvent_PhotoMode_ClosePhotoMode";
  local_30 = 0x24;
  local_2c = 0;
  uVar2 = FUN_14001a6c0(&local_38,1);
  FUN_14039176c(puVar3,uVar1,uVar2,1);
  *puVar3 = &PTR_FUN_14b9d08e0;
  FUN_140391314(param_1,puVar3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f8772 FUN_1442f8772 body=605 status=ok
// SIG undefined FUN_1442f8772(void)

void FUN_1442f8772(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar2 = FUN_1407f4df8();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
        (*(int *)(param_1 + 0x34) != 0)) &&
       ((uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 != (undefined8 *)0x0) &&
         ((*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x34) &&
          ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
          uVar4 = *puVar5;
        }
        else {
          uVar4 = 0;
        }
        lVar2 = FUN_14101baae(uVar4);
        if (lVar2 != 0) {
          lVar2 = FUN_1401ca7f2(lVar2);
          if (lVar2 != 0) {
            lVar3 = FUN_145ac5b3e(lVar2);
            uVar4 = FUN_148b588f4(lVar3 + 0x178);
            local_40 = (code *)&LAB_148ec0e94;
            local_38 = 0;
            uVar4 = FUN_148ec0d9e(param_2,uVar4,param_1,&local_40);
            *(undefined8 *)(param_1 + 0x2c8) = uVar4;
            lVar3 = FUN_145ac5b3e(lVar2);
            uVar4 = FUN_148b588f4(lVar3 + 0x1c8);
            local_40 = FUN_148ec0b7a;
            local_38 = 0;
            uVar4 = FUN_148ec0d9e(param_2,uVar4,param_1,&local_40);
            *(undefined8 *)(param_1 + 0x2d0) = uVar4;
            lVar3 = FUN_145ac5b3e(lVar2);
            uVar4 = FUN_148b588f4(lVar3 + 0x1f0);
            local_40 = FUN_1442f89d0;
            local_38 = 0;
            uVar4 = FUN_148ec0d9e(param_2,uVar4,param_1,&local_40);
            *(undefined8 *)(param_1 + 0x2d8) = uVar4;
            lVar3 = FUN_145ac5b3e(lVar2);
            uVar4 = FUN_148b588f4(lVar3 + 0x240);
            local_40 = FUN_148ec0e9c;
            local_38 = 0;
            uVar4 = FUN_148ec0d9e(param_2,uVar4,param_1,&local_40);
            *(undefined8 *)(param_1 + 0x2e0) = uVar4;
            lVar3 = FUN_145ac5b3e(lVar2);
            uVar4 = FUN_148b588f4(lVar3 + 0x268);
            local_40 = FUN_148ec0efa;
            local_38 = 0;
            uVar4 = FUN_148ec0d9e(param_2,uVar4,param_1,&local_40);
            *(undefined8 *)(param_1 + 0x2e8) = uVar4;
            lVar2 = FUN_145ac5b3e(lVar2);
            uVar4 = FUN_148b588f4(lVar2 + 0x290);
            local_40 = FUN_148ec104a;
            local_38 = 0;
            uVar4 = FUN_148ec0f54(param_2,uVar4,param_1,&local_40);
            *(undefined8 *)(param_1 + 0x2f0) = uVar4;
          }
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



// FUNCTION 1442f89d0 FUN_1442f89d0 body=779 status=ok
// SIG undefined FUN_1442f89d0(void)

void FUN_1442f89d0(longlong param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  char cVar3;
  wchar_t *_Str;
  size_t sVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_238 [32];
  void *local_218;
  uint local_210;
  undefined4 local_20c;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  char local_1f0;
  undefined1 local_1e8 [256];
  undefined1 local_e8 [128];
  undefined1 *local_68;
  undefined1 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar9 = *(longlong *)(param_1 + 0x288);
  if (lVar9 != 0) {
    if ((longlong)*(int *)(lVar9 + 0xe0) != 0) {
      lVar10 = *(longlong *)(lVar9 + 0xd8);
      lVar9 = (longlong)*(int *)(lVar9 + 0xe0) * 0x58;
      do {
        pvVar2 = DAT_14cbe0df0;
        local_208 = (undefined1 *)0x0;
        lVar6 = (longlong)(int)DAT_14cbe0df8;
        local_200 = (undefined1 *)CONCAT44(local_200._4_4_,DAT_14cbe0df8);
        if (lVar6 == 0) {
          local_200 = (undefined1 *)(ulonglong)DAT_14cbe0df8;
        }
        else {
          FUN_1446dd670(&local_208,DAT_14cbe0df8,0);
          memcpy(local_208,pvVar2,lVar6 * 2);
        }
        cVar3 = FUN_1402ca054(*(undefined8 *)(lVar10 + 0x10),local_208);
        if (local_208 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        pvVar2 = DAT_14cbe0df0;
        if (cVar3 != '\0') {
          if (lVar10 != 0) {
            uVar1 = *(undefined4 *)(lVar10 + 4);
            local_218 = (void *)0x0;
            lVar9 = (longlong)(int)DAT_14cbe0df8;
            local_210 = DAT_14cbe0df8;
            if (lVar9 == 0) {
              local_20c = 0;
            }
            else {
              FUN_1446dd670(&local_218,DAT_14cbe0df8,0);
              memcpy(local_218,pvVar2,lVar9 * 2);
            }
            FUN_1442f6752(param_1,&local_218,uVar1);
          }
          break;
        }
        lVar10 = lVar10 + 0x58;
        lVar9 = lVar9 + -0x58;
      } while (lVar9 != 0);
    }
    if ((((*(int *)(param_1 + 0x34) != 0) && (uVar7 = *(uint *)(param_1 + 0x30), -1 < (int)uVar7))
        && ((int)uVar7 < DAT_14c9647dc)) &&
       (((puVar5 = (undefined8 *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
         puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x34))) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        uVar8 = *puVar5;
      }
      else {
        uVar8 = 0;
      }
      local_208 = local_1e8;
      local_1f0 = '\0';
      local_1f8 = local_e8;
      local_200 = local_208;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"Event_RefreshGroup",&local_208);
      local_68 = (undefined1 *)0x0;
      if (_Str == (wchar_t *)0x0) {
        local_60 = (undefined1 *)0x0;
        local_58 = 0;
      }
      else {
        sVar4 = wcslen(_Str);
        local_58 = FUN_14475aa65(0,_Str,sVar4 & 0xffffffff);
        uVar7 = local_58 + 1;
        local_60 = (undefined1 *)0x0;
        if (0x80 < uVar7) {
          FUN_1446efa72(&local_68,0,uVar7,1);
          local_60 = local_68;
        }
        if (local_60 == (undefined1 *)0x0) {
          local_60 = local_e8;
        }
        FUN_14475a98a(local_60,uVar7,_Str,(int)sVar4 + 1);
      }
      FUN_1412a486e(uVar8,local_60);
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_1f0 == '\x01') {
        FUN_1400020a8(local_208);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f8cdc FUN_1442f8cdc body=248 status=ok
// SIG undefined FUN_1442f8cdc(void)

void FUN_1442f8cdc(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0xc0))();
  if (param_2 != 0) {
    lVar1 = FUN_14119cfbe();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (param_1[0x59] != 0) {
        FUN_140b4b2ee(param_2,*(undefined4 *)(param_1[0x59] + 8));
      }
      if (param_1[0x5a] != 0) {
        FUN_140b4b2ee(param_2,*(undefined4 *)(param_1[0x5a] + 8));
      }
      if (param_1[0x5b] != 0) {
        FUN_140b4b2ee(param_2,*(undefined4 *)(param_1[0x5b] + 8));
      }
      if (param_1[0x5c] != 0) {
        FUN_140b4b2ee(param_2,*(undefined4 *)(param_1[0x5c] + 8));
      }
      if (param_1[0x5d] != 0) {
        FUN_140b4b2ee(param_2,*(undefined4 *)(param_1[0x5d] + 8));
      }
      if (param_1[0x5e] != 0) {
        FUN_140b4b2ee(param_2,*(undefined4 *)(param_1[0x5e] + 8));
      }
      param_1[0x5d] = 0;
      param_1[0x5e] = 0;
      param_1[0x5b] = 0;
      param_1[0x5c] = 0;
      param_1[0x59] = 0;
      param_1[0x5a] = 0;
    }
  }
  FUN_14586a994(param_1,param_2);
  return;
}



// FUNCTION 1442f8de0 FUN_1442f8de0 body=290 status=ok
// SIG undefined FUN_1442f8de0(void)

void FUN_1442f8de0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    lVar4 = *(longlong *)(local_38 + 0x490);
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x38));
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (*(int *)(lVar3 + 0xac) != *(int *)(lVar4 + 0x30)) {
      *(int *)(lVar3 + 0xac) = *(int *)(lVar4 + 0x30);
      if (*(int *)(lVar3 + 0xc0) != *(int *)(lVar4 + 0x10)) {
        FUN_1458b95ee(lVar3 + 0xb0,lVar4);
        *(undefined4 *)(lVar3 + 0xc0) = *(undefined4 *)(lVar4 + 0x10);
      }
      if (*(int *)(lVar3 + 0xd8) != *(int *)(lVar4 + 0x28)) {
        FUN_1458b95ee(lVar3 + 200,lVar4 + 0x18);
        *(undefined4 *)(lVar3 + 0xd8) = *(undefined4 *)(lVar4 + 0x28);
      }
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x38));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f9846 FUN_1442f9846 body=443 status=ok
// SIG undefined FUN_1442f9846(void)

void FUN_1442f9846(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  ushort uVar14;
  ulonglong uVar15;
  
  if (((*(byte *)(param_1 + 0x8c) & 0x80) == 0) ||
     (lVar8 = *(longlong *)(param_1 + 0x288), lVar8 == 0)) {
    return;
  }
  bVar3 = FUN_14431d2e4(lVar8);
  bVar4 = FUN_148e829b8(param_1);
  if ((bVar4 | bVar3) != 1) {
    return;
  }
  puVar2 = *(ushort **)(lVar8 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar8 + 0x78) & 0x3f));
  }
  *(byte *)(lVar8 + 0x331) = *(byte *)(lVar8 + 0x331) | 2;
  if (*(int *)(lVar8 + 0x418) == 0) {
    return;
  }
  plVar6 = (longlong *)FUN_148e87c72(param_1);
  lVar7 = *plVar6;
  SRWLock = (PSRWLOCK)(lVar7 + 0x88);
  AcquireSRWLockShared(SRWLock);
  cVar1 = *(char *)(lVar7 + 0x60);
  ReleaseSRWLockShared(SRWLock);
  if (cVar1 != '\x01') {
    return;
  }
  plVar6 = (longlong *)FUN_148e87c72(param_1);
  lVar7 = *plVar6;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x88));
  *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
  if (*(char *)(lVar7 + 0x60) == '\0') {
    if (*(int *)(lVar7 + 100) != 0) goto LAB_1442f9923;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar7 + 100) + 1;
  }
  *(undefined1 *)(lVar7 + 0x60) = 0;
  *(int *)(lVar7 + 100) = iVar5;
LAB_1442f9923:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x88));
  if ((longlong)*(int *)(lVar8 + 0x418) == 0) {
LAB_1442f99d0:
    puVar9 = &DAT_14cbe1a40;
LAB_1442f99d7:
    FUN_140de1078(param_1,puVar9,0,0);
    return;
  }
  lVar7 = *(longlong *)(lVar8 + 0x410);
  lVar8 = (longlong)*(int *)(lVar8 + 0x418) * 0x430 + lVar7;
LAB_1442f9962:
  puVar13 = &DAT_149dfb77a;
  if (*(int *)(lVar7 + 0x128) != 0) {
    puVar13 = *(undefined2 **)(lVar7 + 0x120);
  }
  lVar12 = 0;
  do {
    uVar14 = *(ushort *)((longlong)puVar13 + lVar12);
    uVar15 = (ulonglong)uVar14;
    uVar10 = *(ushort *)((longlong)L"legendary" + lVar12);
    if (uVar14 == uVar10) {
      if (uVar14 == 0) goto LAB_1442f99c2;
    }
    else {
      if (0x7f < (uVar10 | uVar14)) break;
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      uVar11 = (ulonglong)uVar10;
      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar11]) break;
    }
    lVar12 = lVar12 + 2;
  } while( true );
  if (uVar14 == uVar10) {
LAB_1442f99c2:
    if (lVar7 != 0) {
      puVar9 = &DAT_14cbe1a50;
      goto LAB_1442f99d7;
    }
    goto LAB_1442f99d0;
  }
  lVar7 = lVar7 + 0x430;
  if (lVar7 == lVar8) goto LAB_1442f99d0;
  goto LAB_1442f9962;
}



// FUNCTION 1442f9a0e FUN_1442f9a0e body=246 status=ok
// SIG undefined FUN_1442f9a0e(void)

void FUN_1442f9a0e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x288) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xd8) == '\x01')) {
    if ((*(int *)(param_1 + 0x34) != 0) &&
       ((uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 != (longlong *)0x0) &&
         ((((int)plVar4[2] == *(int *)(param_1 + 0x34) &&
           ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)))) {
        lVar2 = FUN_140391a3c();
        if (lVar2 != 0) {
          puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar3 = &PTR_FUN_14b9d11f0;
          *(undefined1 *)(puVar3 + 1) = 0;
          FUN_14039144e(lVar2,puVar3);
        }
      }
    }
    FUN_1400b22c2(local_28,"CycleRapSheetCharacter");
    FUN_140afad18(param_1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f9b06 FUN_1442f9b06 body=246 status=ok
// SIG undefined FUN_1442f9b06(void)

void FUN_1442f9b06(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x288) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xd8) == '\x01')) {
    if ((*(int *)(param_1 + 0x34) != 0) &&
       ((uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 != (longlong *)0x0) &&
         ((((int)plVar4[2] == *(int *)(param_1 + 0x34) &&
           ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)))) {
        lVar2 = FUN_140391a3c();
        if (lVar2 != 0) {
          puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar3 = &PTR_FUN_14b9d11f0;
          *(undefined1 *)(puVar3 + 1) = 1;
          FUN_14039144e(lVar2,puVar3);
        }
      }
    }
    FUN_1400b22c2(local_28,"CycleRapSheetCharacter");
    FUN_140afad18(param_1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442f9bfe FUN_1442f9bfe body=1878 status=ok
// SIG undefined FUN_1442f9bfe(void)

void FUN_1442f9bfe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  PSRWLOCK SRWLock;
  undefined2 *puVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  int local_120;
  int local_11c;
  longlong local_118;
  longlong local_110;
  PSRWLOCK local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined2 *local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar7 = *(longlong *)(param_1 + 0x288);
  if ((lVar7 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_1442f9f69;
  puVar17 = (undefined4 *)(param_1 + 0x208);
  FUN_1448d5e3c(&local_88,puVar17);
  plVar8 = *(longlong **)(local_88 + 0x470);
  SRWLock = (PSRWLOCK)(plVar8 + 0x13);
  AcquireSRWLockShared(SRWLock);
  plVar15 = uStack_80;
  if (uStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_80)(uStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (*(int *)(param_1 + 0x2b4) != (int)plVar8[0x12]) {
    *(int *)(param_1 + 0x2b4) = (int)plVar8[0x12];
    if (*(int *)(param_1 + 0x338) != (int)plVar8[5]) {
      *(longlong *)(param_1 + 0x330) = plVar8[4];
      uVar11 = *(undefined4 *)((longlong)plVar8 + 0x14);
      lVar10 = plVar8[3];
      uVar12 = *(undefined4 *)((longlong)plVar8 + 0x1c);
      *(int *)(param_1 + 800) = (int)plVar8[2];
      *(undefined4 *)(param_1 + 0x324) = uVar11;
      *(int *)(param_1 + 0x328) = (int)lVar10;
      *(undefined4 *)(param_1 + 0x32c) = uVar12;
      *(int *)(param_1 + 0x338) = (int)plVar8[5];
    }
    if (*(int *)(lVar7 + 0xc4) != *(int *)((longlong)plVar8 + 0x6c)) {
      *(char *)(lVar7 + 0xc0) = (char)plVar8[0xd];
      *(undefined4 *)(lVar7 + 0xc4) = *(undefined4 *)((longlong)plVar8 + 0x6c);
    }
    if (*(longlong *)(param_1 + 0x2f0) != *plVar8) {
      FUN_148ec387e(param_1,plVar8);
    }
    cVar3 = (char)plVar8[6];
    if (*(char *)(param_1 + 0x310) != cVar3) {
      *(char *)(param_1 + 0x310) = cVar3;
      *(int *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + 1;
      *(char *)(lVar7 + 0x2a0) = cVar3;
      local_88 = 0;
      uStack_80 = (longlong *)0x0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(&local_88,"RequiresDLCBanner",0);
      FUN_1410d1eba(local_c8,&local_88);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      local_e8 = (longlong *)plVar8[0x10];
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 8))();
      }
      local_e0 = (undefined4)plVar8[0x11];
      FUN_14023409e(&local_f8,local_c8,1);
      local_88 = CONCAT44(local_88._4_4_,4);
      FUN_14023423e(&local_78,&local_e8);
      local_a0 = &uStack_68;
      local_a8 = &local_88;
      FUN_14010d304(&local_98);
      local_b8 = local_f8;
      local_b0 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_d8,&local_b8,&local_98);
      FUN_14007f2db(local_98,uStack_90 & 0xffffffff);
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_f0 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)local_f0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_f0 + 0x10))(local_f0);
          }
        }
      }
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      FUN_140008f88(lVar7 + 0x2a8,local_d8);
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      puVar9 = *(ushort **)(lVar7 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
      }
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
    }
    iVar20 = *(int *)(param_1 + 0x304);
    iVar19 = (int)plVar8[8];
    if (iVar20 != iVar19) {
      lVar10 = plVar8[7];
      *(longlong *)(param_1 + 0x2fc) = lVar10;
      *(int *)(param_1 + 0x304) = (int)plVar8[8];
      cVar3 = *(char *)(lVar7 + 0xd8);
      *(bool *)(lVar7 + 0xd8) = lVar10 != 0;
      if ((lVar10 != 0) && (cVar3 == '\0')) {
        local_128 = puVar17;
        FUN_1400b22c2(&local_88,"TransitionToRapSheet");
        FUN_140afad18(param_1,&local_88);
        puVar17 = local_128;
        if (local_88 != 0) {
          FUN_1400020a8();
          puVar17 = local_128;
        }
      }
      FUN_148ec3a32(param_1,param_1 + 0x2fc);
      if (*(char *)(lVar7 + 0xd8) == '\0') {
        *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
        FUN_148ec3f8e(param_1,0xffffffff);
      }
      FUN_148ec40da(param_1);
      puVar9 = *(ushort **)(lVar7 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
      }
    }
    if ((*(int *)(param_1 + 0x2e8) == 0) || (*(int *)(param_1 + 0x2e8) != (int)plVar8[0xb])) {
      *(int *)(param_1 + 0x2e8) = (int)plVar8[0xb];
      local_128 = puVar17;
      local_120 = iVar19;
      local_11c = iVar20;
      local_108 = SRWLock;
      FUN_148ed7852(param_1 + 0x2d8,plVar8 + 9);
      local_110 = lVar7 + 0x290;
      iVar20 = *(int *)(lVar7 + 0x29c);
      FUN_148c8fffd(*(undefined8 *)(lVar7 + 0x290),*(undefined4 *)(lVar7 + 0x298));
      *(undefined4 *)(lVar7 + 0x298) = 0;
      if ((iVar20 < 0) && (*(int *)(lVar7 + 0x29c) != 0)) {
        FUN_148ed7954(local_110);
      }
      if ((longlong)*(int *)(param_1 + 0x2e0) != 0) {
        puVar21 = *(undefined8 **)(param_1 + 0x2d8);
        local_100 = puVar21 + (longlong)*(int *)(param_1 + 0x2e0) * 7;
        local_118 = lVar7 + 0x2c8;
        do {
          plVar15 = (longlong *)FUN_148ec4140(local_110);
          *(undefined8 *)((longlong)plVar15 + 0x14) = *puVar21;
          FUN_1400021e4((longlong)plVar15 + 0x14,&local_88);
          lVar10 = local_88;
          iVar20 = (int)uStack_80;
          uVar14 = (int)uStack_80 - 1;
          if ((int)uStack_80 == 0) {
            uVar14 = 0;
          }
          if (0 < (int)uVar14) {
            uVar16 = 0;
            do {
              uVar4 = *(ushort *)(local_88 + uVar16 * 2);
              *(ushort *)(local_88 + uVar16 * 2) = (ushort)(uVar4 - 0x41 < 0x1a) * 0x20 + uVar4;
              uVar16 = uVar16 + 1;
            } while (uVar14 != uVar16);
          }
          uVar11 = uStack_80._4_4_;
          local_88 = 0;
          uStack_80 = (longlong *)0x0;
          if (*plVar15 == 0) {
            *plVar15 = lVar10;
            *(int *)(plVar15 + 1) = iVar20;
            *(undefined4 *)((longlong)plVar15 + 0xc) = uVar11;
          }
          else {
            FUN_1400020a8();
            *plVar15 = lVar10;
            *(int *)(plVar15 + 1) = iVar20;
            *(undefined4 *)((longlong)plVar15 + 0xc) = uVar11;
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          if (*(char *)((longlong)puVar21 + 0xc) == '\x01') {
            FUN_1400021e4((longlong)puVar21 + 0x1c,&local_98);
            puVar13 = local_98;
            uVar14 = (int)uStack_90 - 1;
            if ((int)uStack_90 == 0) {
              uVar14 = 0;
            }
            if (0 < (int)uVar14) {
              uVar16 = 0;
              do {
                local_98[uVar16] =
                     (ushort)((ushort)local_98[uVar16] - 0x41 < 0x1a) * 0x20 + local_98[uVar16];
                uVar16 = uVar16 + 1;
              } while (uVar14 != uVar16);
            }
            puVar18 = local_98;
            if ((int)uStack_90 == 0) {
              puVar18 = &DAT_149dfb77a;
            }
            local_98 = (undefined2 *)0x0;
            uStack_90 = 0;
            FUN_140002266(&local_88,L"profile.dlc.%s",puVar18);
            FUN_140d07d58(local_118,plVar15,&local_88);
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            if (puVar13 != (undefined2 *)0x0) {
              FUN_1400020a8(puVar13);
            }
            if (local_98 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_140714e1e(local_118,plVar15,*local_128);
          }
          puVar21 = puVar21 + 7;
        } while (puVar21 != local_100);
      }
      FUN_148ec40da(param_1);
      puVar9 = *(ushort **)(lVar7 + 0x80);
      SRWLock = local_108;
      iVar20 = local_11c;
      iVar19 = local_120;
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
      }
    }
    iVar5 = *(int *)(param_1 + 0x30c);
    iVar6 = *(int *)((longlong)plVar8 + 0x7c);
    if (iVar5 != iVar6) {
      *(char *)(param_1 + 0x308) = (char)plVar8[0xf];
      *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)((longlong)plVar8 + 0x7c);
    }
    if (*(int *)(lVar7 + 0xd4) == *(int *)((longlong)plVar8 + 0x74)) {
      if ((iVar20 == iVar19) && (iVar5 == iVar6)) goto LAB_1442f9f60;
    }
    else {
      *(char *)(lVar7 + 0xd0) = (char)plVar8[0xe];
      *(undefined4 *)(lVar7 + 0xd4) = *(undefined4 *)((longlong)plVar8 + 0x74);
    }
    FUN_148ec3828(param_1);
  }
LAB_1442f9f60:
  ReleaseSRWLockShared(SRWLock);
LAB_1442f9f69:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442fa399 FUN_1442fa399 body=49 status=ok
// SIG undefined FUN_1442fa399(void)

void FUN_1442fa399(void)

{
  FUN_1447a1747(DAT_14cbe1f40,DAT_14cbe1f48);
  if (DAT_14cbe1f40 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1442fa6a0 FUN_1442fa6a0 body=658 status=ok
// SIG undefined FUN_1442fa6a0(void)

void FUN_1442fa6a0(longlong *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x188))();
  FUN_145eea7ba(param_1);
  FUN_1459249be(param_1);
  FUN_14129c41e(param_1);
  iVar2 = (int)param_1[0x6a];
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar5 = 0;
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    puVar11 = (uint *)param_1[0x69];
    if ((uint *)param_1[0x69] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x67);
    }
    uVar6 = *puVar11;
    if (uVar6 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar5 = 0;
      uVar13 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar13 = uVar5;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar5) goto LAB_1442fa8dd;
        iVar10 = iVar10 + 0x20;
        uVar6 = puVar11[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar5 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar6 & uVar6);
    uVar13 = uVar15 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar9 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
  }
  if (iVar9 != iVar2) {
    iVar12 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar12 = iVar2 + -1;
    }
    iVar12 = iVar12 >> 5;
    uVar6 = 0xffffffff;
    do {
      if (0 < *(int *)(param_1[0x65] + 0x10 + (longlong)iVar9 * 0x20)) {
        QueryPerformanceCounter(&local_58);
        dVar3 = (double)local_58.QuadPart * DAT_14c83f420;
        dVar1 = (double)param_1[0x5f];
        puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        *puVar4 = &PTR_FUN_14b9d13c8;
        FUN_1447a97f4(puVar4 + 4,&DAT_14cb790d0);
        puVar4[9] = (dVar3 + 16777216.0) - dVar1;
        FUN_140391314(param_1,puVar4);
        FUN_1462436a0(param_1 + 0x65);
        break;
      }
      uVar6 = uVar6 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[0x69];
      if ((uint *)param_1[0x69] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x67);
      }
      iVar9 = (int)uVar5;
      lVar16 = (longlong)iVar9;
      uVar8 = puVar11[lVar16] & uVar6;
      if (uVar8 == 0) {
        iVar14 = iVar12;
        if (iVar12 < iVar9) {
          iVar14 = iVar9;
        }
        if (iVar12 <= iVar9) break;
        lVar7 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar8 = puVar11[lVar16 + lVar7 + 1];
          if (uVar8 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar14 - lVar16 == lVar7) goto LAB_1442fa8dd;
        }
        uVar5 = (ulonglong)(iVar9 + (int)lVar7 + 1);
        uVar6 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar13 = uVar15 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar9 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar2);
  }
LAB_1442fa8dd:
  if (param_1[0x51] != 0) {
    *(undefined1 *)(param_1[0x51] + 0x2f0) = 0;
  }
  FUN_146658454(param_1);
  FUN_1462144e0(param_1);
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442faa3e FUN_1442faa3e body=424 status=ok
// SIG undefined FUN_1442faa3e(void)

void FUN_1442faa3e(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98 [2];
  longlong *local_88 [2];
  undefined8 local_78;
  longlong *local_70;
  undefined4 *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48 [4];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = FUN_148ec747a(*(longlong *)*param_1 + 0x198);
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_1413a454c(local_98,param_2,0);
  FUN_14023409e(&local_b8,param_3,1);
  local_48[0] = 4;
  FUN_14023423e(local_38,local_98);
  local_68 = local_48;
  local_60 = &local_28;
  FUN_14010d304(&local_58);
  local_78 = local_b8;
  local_70 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_88,&local_78,&local_58);
  FUN_14007f2db(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  FUN_140008f88(uVar4,local_88);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  plVar1 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442fabe8 FUN_1442fabe8 body=569 status=ok
// SIG undefined FUN_1442fabe8(void)

void FUN_1442fabe8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  PSRWLOCK SRWLock;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  undefined1 uVar11;
  longlong *plVar12;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x8c) & 0x80) == 0) goto LAB_1442fac0e;
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (lVar7 != 0) {
    FUN_1448d5e3c(&local_50,param_1 + 0x208);
    plVar3 = local_48;
    plVar12 = (longlong *)(local_50 + 0x2d0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x288) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x288) + 0x219) != '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = 0 < *(int *)(param_1 + 0x310);
    }
    *(bool *)(lVar7 + 0x21a) = bVar8;
    FUN_1448d5e3c(&local_50,param_1 + 0x208);
    cVar9 = FUN_148e1d882(lVar7,local_50 + 0x40);
    if (cVar9 == '\0') {
      iVar5 = *(int *)(lVar7 + 0xac);
      iVar6 = *(int *)(*plVar12 + 0x228);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      if (iVar5 == iVar6) goto LAB_1442fac43;
    }
    else if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    uVar4 = *(undefined4 *)(lVar7 + 0x208);
    lVar10 = *plVar12;
    SRWLock = (PSRWLOCK)(lVar10 + 0x230);
    AcquireSRWLockShared(SRWLock);
    iVar5 = *(int *)(lVar10 + 0x210);
    ReleaseSRWLockShared(SRWLock);
    iVar6 = *(int *)(param_1 + 0x2ec);
    *(undefined4 *)(param_1 + 0x2e8) = uVar4;
    *(int *)(param_1 + 0x2ec) = iVar5;
    if (((0 < iVar5) && (iVar6 < iVar5)) && (*(char *)(param_1 + 0x2f0) == '\x01')) {
      FUN_1457d7894(param_1,&DAT_14cbe2498);
    }
    FUN_148e1d732(lVar7,plVar12);
    lVar10 = FUN_14479d2ce(param_1 + 0x30);
    cVar9 = FUN_140426394(lVar10 + 0x3c0,&DAT_14cbd9380);
    uVar11 = 1;
    if (cVar9 == '\0') {
      uVar11 = *(undefined1 *)(lVar7 + 0x21c);
    }
    *(undefined1 *)(lVar7 + 0x21b) = uVar11;
    lVar7 = *(longlong *)(param_1 + 0x288);
    if (lVar7 != 0) {
      FUN_148ec6fa4(param_1,lVar7 + 0x118);
      *(undefined1 *)(lVar7 + 0x21d) = 0;
    }
    FUN_148ec8092(param_1);
  }
LAB_1442fac43:
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  FUN_148ec8146(param_1);
LAB_1442fac0e:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442faebe FUN_1442faebe body=162 status=ok
// SIG undefined FUN_1442faebe(void)

undefined8 * FUN_1442faebe(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x300);
  memset(_Dst,0,0x300);
  FUN_140e8cffc(_Dst);
  *(ushort *)(_Dst + 0x53) = (ushort)*(undefined4 *)(_Dst + 0x53) & 0xff80 | 0x40;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  *(byte *)((longlong)_Dst + 0x8e) = *(byte *)((longlong)_Dst + 0x8e) & 0xfb;
  *_Dst = &PTR_FUN_14b9d1c00;
  _Dst[0x5a] = 0;
  *(undefined4 *)(_Dst + 0x5b) = 0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0x2e4) = 0;
  _Dst[0x5e] = 0;
  *(undefined4 *)(_Dst + 0x5f) = 0;
  return _Dst;
}



// FUNCTION 1442faf6c FUN_1442faf6c body=162 status=ok
// SIG undefined FUN_1442faf6c(void)

undefined8 * FUN_1442faf6c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x300);
  memset(_Dst,0,0x300);
  FUN_140e8cffc(_Dst);
  *(ushort *)(_Dst + 0x53) = (ushort)*(undefined4 *)(_Dst + 0x53) & 0xff80 | 0x40;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  *(byte *)((longlong)_Dst + 0x8e) = *(byte *)((longlong)_Dst + 0x8e) & 0xfb;
  *_Dst = &PTR_FUN_14b9d1c00;
  _Dst[0x5a] = 0;
  *(undefined4 *)(_Dst + 0x5b) = 0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0x2e4) = 0;
  _Dst[0x5e] = 0;
  *(undefined4 *)(_Dst + 0x5f) = 0;
  return _Dst;
}



// FUNCTION 1442fb0b8 FUN_1442fb0b8 body=1329 status=ok
// SIG undefined FUN_1442fb0b8(void)

void FUN_1442fb0b8(longlong param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  longlong local_70;
  undefined1 local_64 [4];
  undefined8 *local_60;
  longlong *local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1407cbc56();
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar5 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe26b8);
  }
  if (*plVar5 == 0) {
    puVar6 = &DAT_14c9a12e0;
  }
  else {
    puVar6 = (undefined4 *)FUN_140625092(*plVar5,&DAT_14c9a12e0);
  }
  lVar3 = param_1 + 0x2b0;
  if (DAT_14c947fe0 == 0) {
    lVar7 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar7);
    DAT_14c947fe0 = lVar7;
  }
  FUN_140045924(DAT_14c947fe0,local_78,puVar6,1);
  FUN_1401533ba(&local_70,local_78,1);
  local_60 = &DAT_14cbe26d8;
  local_58 = &local_70;
  FUN_144309ac0(lVar3,local_64);
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar5 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe26c0);
  }
  if (*plVar5 == 0) {
    puVar6 = &DAT_14c9a12e0;
  }
  else {
    puVar6 = (undefined4 *)FUN_140625092(*plVar5,&DAT_14c9a12e0);
  }
  if (DAT_14c947fe0 == 0) {
    lVar7 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar7);
    DAT_14c947fe0 = lVar7;
  }
  FUN_140045924(DAT_14c947fe0,local_78,puVar6,1);
  FUN_1401533ba(&local_70,local_78,1);
  local_60 = &DAT_14cbe26e8;
  local_58 = &local_70;
  FUN_144309ac0(lVar3,local_64);
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar5 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe26c8);
  }
  if (*plVar5 == 0) {
    puVar6 = &DAT_14c9a12e0;
  }
  else {
    puVar6 = (undefined4 *)FUN_140625092(*plVar5,&DAT_14c9a12e0);
  }
  if (DAT_14c947fe0 == 0) {
    lVar7 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar7);
    DAT_14c947fe0 = lVar7;
  }
  FUN_140045924(DAT_14c947fe0,local_78,puVar6,1);
  FUN_1401533ba(&local_70,local_78,1);
  local_60 = &DAT_14cbe26f8;
  local_58 = &local_70;
  FUN_144309ac0(lVar3,local_64);
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x104) = 0x14;
    if (*(longlong *)(param_1 + 0x160) == 0) {
      plVar5 = &DAT_14c9a1308;
    }
    else {
      plVar5 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe26d0);
    }
    if (*plVar5 == 0) {
      puVar6 = &DAT_14c9a12e0;
    }
    else {
      puVar6 = (undefined4 *)FUN_140625092(*plVar5,&DAT_14c9a12e0);
    }
    if (DAT_14c947fe0 == 0) {
      lVar7 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar7);
      DAT_14c947fe0 = lVar7;
    }
    FUN_140045924(DAT_14c947fe0,&local_70,puVar6,1);
    FUN_1446dcdd4(&local_60,&local_70);
    if (DAT_14cbc8c48 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_144837462(DAT_14cbc8c48,&local_60);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (lVar7 != 0) {
      FUN_1448d5e3c(&local_60,param_1 + 0x208);
      lVar8 = local_60[0x32];
      SRWLock = (PSRWLOCK)(lVar8 + 0x20);
      AcquireSRWLockExclusive(SRWLock);
      plVar5 = local_58;
      piVar1 = (int *)(lVar8 + 0x1c);
      *piVar1 = *piVar1 + 1;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_58 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      pvVar4 = DAT_14cbe26d8;
      local_88 = (void *)0x0;
      lVar8 = (longlong)DAT_14cbe26e0;
      local_80 = DAT_14cbe26e0;
      if (lVar8 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,DAT_14cbe26e0,0);
        memcpy(local_88,pvVar4,lVar8 * 2);
      }
      FUN_1442fb5ea(lVar3,lVar7 + 0x18,&local_88);
      pvVar4 = DAT_14cbe26e8;
      local_98 = (void *)0x0;
      lVar8 = (longlong)DAT_14cbe26f0;
      local_90 = DAT_14cbe26f0;
      if (lVar8 == 0) {
        local_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,DAT_14cbe26f0,0);
        memcpy(local_98,pvVar4,lVar8 * 2);
      }
      FUN_1442fb5ea(lVar3,lVar7 + 0x80,&local_98);
      pvVar4 = DAT_14cbe26f8;
      local_a8 = (void *)0x0;
      lVar8 = (longlong)DAT_14cbe2700;
      local_a0 = DAT_14cbe2700;
      if (lVar8 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,DAT_14cbe2700,0);
        memcpy(local_a8,pvVar4,lVar8 * 2);
      }
      FUN_1442fb5ea(lVar3,lVar7 + 0xe8,&local_a8);
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442fb5ea FUN_1442fb5ea body=1983 status=ok
// SIG undefined FUN_1442fb5ea(void)

void FUN_1442fb5ea(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_178 [40];
  undefined **local_150 [22];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1408f3f9e(local_150);
  local_150[0] = &PTR_FUN_14b8cbc60;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_88 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_80 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_78 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_70 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_68 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_58 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_48 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  local_38 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_30 = 0;
  iVar3 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(&local_98,*param_3,iVar3);
  plVar2 = local_88;
  plVar1 = *(longlong **)(param_2 + 8);
  if (local_88 != plVar1) {
    local_88 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_78;
  local_80 = *(undefined4 *)(param_2 + 0x10);
  plVar1 = *(longlong **)(param_2 + 0x18);
  if (local_78 != plVar1) {
    local_78 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_68;
  local_70 = *(undefined4 *)(param_2 + 0x20);
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (local_68 != plVar1) {
    local_68 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_58;
  local_60 = *(undefined4 *)(param_2 + 0x30);
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (local_58 != plVar1) {
    local_58 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_48;
  local_50 = *(undefined4 *)(param_2 + 0x40);
  plVar1 = *(longlong **)(param_2 + 0x48);
  if (local_48 != plVar1) {
    local_48 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_38;
  local_40 = *(undefined4 *)(param_2 + 0x50);
  plVar1 = *(longlong **)(param_2 + 0x58);
  if (local_38 != plVar1) {
    local_38 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_30 = *(undefined4 *)(param_2 + 0x60);
  iVar3 = *(int *)(param_1 + 0x290);
  *(uint *)(param_1 + 0x290) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x294) < iVar3 + 1U) {
    FUN_144302e62((longlong *)(param_1 + 0x288),iVar3);
  }
  FUN_1440880aa((longlong)iVar3 * 0x128 + *(longlong *)(param_1 + 0x288),local_150);
  FUN_144086c5a(local_150);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442fbdaa FUN_1442fbdaa body=895 status=ok
// SIG undefined FUN_1442fbdaa(void)

void FUN_1442fbdaa(longlong param_1)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14588cd9e();
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar9 = *(uint *)(param_1 + 0x30);
    uVar6 = 0;
    if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_1442fbe23;
    puVar10 = (undefined8 *)
              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
    if ((puVar10 != (undefined8 *)0x0) &&
       ((*(int *)(puVar10 + 2) == *(int *)(param_1 + 0x34) &&
        ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar10;
      goto LAB_1442fbe23;
    }
  }
  uVar6 = 0;
LAB_1442fbe23:
  lVar5 = FUN_1407f492e(uVar6);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_80 = &local_50;
      local_50 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1459f2e4c;
      local_88 = &LAB_148c39de3;
      local_90 = &LAB_1457a9eb2;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (*(longlong *)(param_1 + 0x288) != 0)) {
      local_68 = *(longlong *)(param_1 + 0x288);
      uVar6 = FUN_1447210f0(lVar5);
      local_60 = (longlong *)FUN_145838d74(uVar6);
      if ((local_60 != (longlong *)0x0) && ((longlong)*(int *)(local_68 + 0x290) != 0)) {
        lVar5 = *(longlong *)(local_68 + 0x288);
        local_58 = (longlong)*(int *)(local_68 + 0x290) * 0x128 + lVar5;
        plVar12 = (longlong *)(param_1 + 0x2b0);
        do {
          puVar10 = (undefined8 *)(lVar5 + 0xb8);
          iVar4 = *(int *)(lVar5 + 0xc0);
          iVar3 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar3 = 0;
          }
          if (iVar3 < 1) {
            uVar11 = 0;
            iVar4 = FUN_14430a03e(plVar12,0,puVar10);
            if (iVar4 != -1) goto LAB_1442fbfe5;
          }
          else {
            puVar13 = &DAT_149dfb77a;
            if (iVar4 != 0) {
              puVar13 = (undefined2 *)*puVar10;
            }
            lVar7 = 0;
            uVar11 = 0;
            do {
              uVar9 = ((uint)(ushort)puVar13[lVar7] +
                      (uint)(0x19 < (ushort)puVar13[lVar7] - 0x61) * 0x20) - 0x20;
              uVar14 = (uint)(uVar11 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar9) & 0xff) * 4);
              uVar11 = (ulonglong)
                       (uVar14 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar9 >> 8 & 0xff) * 4
                                ));
              lVar7 = lVar7 + 1;
            } while (iVar3 != (int)lVar7);
            iVar4 = FUN_14430a03e(plVar12,uVar11,puVar10);
            if (iVar4 != -1) {
              lVar7 = 0;
              uVar11 = 0;
              do {
                uVar9 = ((uint)(ushort)puVar13[lVar7] +
                        (uint)(0x19 < (ushort)puVar13[lVar7] - 0x61) * 0x20) - 0x20;
                uVar14 = (uint)(uVar11 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar9) & 0xff) * 4);
                uVar11 = (ulonglong)
                         (uVar14 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar14 & 0xff ^ uVar9 >> 8 & 0xff) * 4));
                lVar7 = lVar7 + 1;
              } while (iVar3 != (int)lVar7);
LAB_1442fbfe5:
              iVar4 = FUN_14430a03e(plVar12,uVar11,puVar10);
              if (iVar4 == -1) {
                lVar7 = 0;
              }
              else {
                lVar7 = (longlong)iVar4 * 0x28 + *plVar12;
              }
              plVar8 = (longlong *)(**(code **)(*local_60 + 8))(local_60,lVar7 + 0x10);
              if (plVar8 != (longlong *)0x0) {
                bVar2 = (**(code **)(*plVar8 + 0xd8))(plVar8);
                *(byte *)(lVar5 + 0xb0) = bVar2 ^ 1;
              }
            }
          }
          lVar5 = lVar5 + 0x128;
        } while (lVar5 != local_58);
      }
      puVar1 = *(ushort **)(local_68 + 0x80);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(local_68 + 0x78) & 0x3f));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442fc12a FUN_1442fc12a body=163 status=ok
// SIG undefined FUN_1442fc12a(void)

void FUN_1442fc12a(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1459249be();
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9c13a0;
  local_38 = "ClearStructureredInteractable";
  local_30 = 0x1d;
  local_2c = 0;
  uVar2 = FUN_14001a6c0(&local_38,1);
  FUN_14039176c(puVar3,uVar1,uVar2,1);
  *puVar3 = &PTR_FUN_14b9c13a0;
  FUN_140391314(param_1,puVar3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442fc1ce FUN_1442fc1ce body=2725 status=ok
// SIG undefined FUN_1442fc1ce(void)

void FUN_1442fc1ce(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  code *pcVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  PSRWLOCK SRWLock;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  PSRWLOCK local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) goto LAB_1442fcc0d;
  FUN_1448d5e3c(&local_88);
  puVar4 = *(undefined4 **)(local_88 + 400);
  SRWLock = (PSRWLOCK)(puVar4 + 8);
  AcquireSRWLockShared(SRWLock);
  plVar21 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_80 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if (*(int *)(lVar3 + 0x2a8) != puVar4[7]) {
    *(undefined4 *)(lVar3 + 0x2a8) = puVar4[7];
    *(undefined4 *)(lVar3 + 0x100) = *puVar4;
    iVar7 = 1;
    if (1 < (int)puVar4[2]) {
      iVar7 = puVar4[2];
    }
    *(int *)(lVar3 + 0xf8) = iVar7;
    *(int *)(lVar3 + 0xfc) = iVar7 + -1;
    plVar21 = (longlong *)(param_1 + 0x2b0);
    uVar17 = 0;
    iVar7 = DAT_14cbe2710 + -1;
    if (DAT_14cbe2710 == 0) {
      iVar7 = 0;
    }
    local_c0 = SRWLock;
    if (iVar7 < 1) {
      iVar7 = FUN_14430a03e(plVar21,0,&DAT_14cbe2708);
      if (iVar7 != -1) goto LAB_1442fc39d;
LAB_1442fc3da:
      FUN_144309cae(plVar21,&local_88);
      plVar18 = plStack_80;
      *plStack_80 = 0;
      iVar7 = DAT_14cbe2710;
      puVar10 = DAT_14cbe2708;
      lVar9 = (longlong)DAT_14cbe2710;
      *(int *)(plStack_80 + 1) = DAT_14cbe2710;
      if (lVar9 == 0) {
        *(undefined4 *)((longlong)plStack_80 + 0xc) = 0;
        puVar10 = (undefined2 *)0x0;
        iVar7 = 0;
      }
      else {
        FUN_1446dd670(plStack_80,iVar7,0);
        memcpy((void *)*plVar18,puVar10,lVar9 * 2);
        iVar7 = (int)plVar18[1];
        puVar10 = (undefined2 *)*plVar18;
      }
      *(undefined4 *)(plVar18 + 3) = puVar4[6];
      plVar18[2] = *(longlong *)(puVar4 + 4);
      *(undefined4 *)(plVar18 + 4) = 0xffffffff;
      local_b8 = CONCAT44(local_b8._4_4_,(undefined4)local_88);
      uVar17 = 0;
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      if (0 < iVar8) {
        if (iVar7 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        lVar9 = 0;
        uVar17 = 0;
        do {
          uVar19 = ((uint)(0x19 < (ushort)puVar10[lVar9] - 0x61) * 0x20 +
                   (uint)(ushort)puVar10[lVar9]) - 0x20;
          uVar17 = uVar17 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar17 ^ uVar19) & 0xff) * 4);
          uVar17 = uVar17 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar19 >> 8 & 0xff) * 4);
          lVar9 = lVar9 + 1;
        } while (iVar8 != (int)lVar9);
      }
      cVar6 = FUN_144309f66(plVar21,uVar17,plVar18,&local_b8);
      if (cVar6 == '\0') {
        uVar19 = *(int *)(param_1 + 0x2b8) - *(int *)(param_1 + 0x2e4);
        iVar7 = 1;
        if (3 < uVar19) {
          uVar11 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
          lVar9 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((int)uVar19 < 1) || (iVar7 <= *(int *)(param_1 + 0x2f8))) {
          uVar17 = *(int *)(param_1 + 0x2f8) - 1U & uVar17;
          *(uint *)((longlong)plVar18 + 0x24) = uVar17;
          lVar9 = *(longlong *)(param_1 + 0x2f0);
          if (*(longlong *)(param_1 + 0x2f0) == 0) {
            lVar9 = param_1 + 0x2e8;
          }
          *(undefined4 *)(plVar18 + 4) =
               *(undefined4 *)
                (lVar9 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U & (longlong)(int)uVar17) * 4);
          lVar9 = *(longlong *)(param_1 + 0x2f0);
          if (*(longlong *)(param_1 + 0x2f0) == 0) {
            lVar9 = param_1 + 0x2e8;
          }
          *(undefined4 *)
           (lVar9 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U & (longlong)(int)uVar17) * 4) =
               (undefined4)local_b8;
        }
        else {
          *(int *)(param_1 + 0x2f8) = iVar7;
          FUN_14430a0f8(plVar21);
        }
      }
      lVar9 = *(longlong *)(param_1 + 0x288);
      if (lVar9 != 0) {
        local_c8 = (longlong *)(lVar9 + 0x298);
        iVar7 = *(int *)(lVar9 + 0x2a4);
        FUN_144087ed3(*(undefined8 *)(lVar9 + 0x298));
        *(undefined4 *)(lVar9 + 0x2a0) = 0;
        if ((iVar7 < 0) && (*(int *)(lVar9 + 0x2a4) != 0)) {
          FUN_14430ab8c(local_c8);
        }
        uVar11 = 0;
        iVar7 = DAT_14cbe2710 + -1;
        if (DAT_14cbe2710 == 0) {
          iVar7 = 0;
        }
        if (0 < iVar7) {
          puVar10 = DAT_14cbe2708;
          if (DAT_14cbe2710 == 0) {
            puVar10 = &DAT_149dfb77a;
          }
          lVar20 = 0;
          uVar11 = 0;
          do {
            uVar17 = ((uint)(0x19 < (ushort)puVar10[lVar20] - 0x61) * 0x20 +
                     (uint)(ushort)puVar10[lVar20]) - 0x20;
            uVar19 = (uint)(uVar11 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar17) & 0xff) * 4);
            uVar11 = (ulonglong)
                     (uVar19 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar17 >> 8 & 0xff) * 4)
                     );
            lVar20 = lVar20 + 1;
          } while (iVar7 != (int)lVar20);
        }
        iVar7 = FUN_14430a03e(plVar21,uVar11,&DAT_14cbe2708);
        if (iVar7 == -1) {
          lVar20 = 0;
        }
        else {
          lVar20 = (longlong)iVar7 * 0x28 + *plVar21;
        }
        local_98 = *(undefined4 *)(lVar20 + 0x18);
        local_a0 = *(undefined8 *)(lVar20 + 0x10);
        FUN_1448075d0(&local_88);
        if (DAT_14cbcdc38 == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = FUN_144837462(DAT_14cbcdc38,&local_88);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if ((lVar20 != 0) && ((longlong)*(int *)(lVar20 + 0x50) != 0)) {
          plVar21 = *(longlong **)(lVar20 + 0x48);
          lVar20 = (longlong)*(int *)(lVar20 + 0x50) * 0x18;
          do {
            lVar12 = plVar21[1];
            if (lVar12 == 0) {
              FUN_14117f018();
              lVar12 = FUN_14477b664();
              plVar21[1] = lVar12;
            }
            lVar14 = plVar21[2];
            if (lVar14 == 0) {
              if ((lVar12 != 0) && (*plVar21 != 0)) {
                plVar18 = *(longlong **)(lVar12 + 0xb8);
                if ((plVar18 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar18 + 0x108))(), cVar6 == '\0')) {
                  plVar21[2] = 0;
                }
                else {
                  uVar13 = (**(code **)(*plVar18 + 0x110))(plVar18);
                  lVar14 = FUN_144aff482(uVar13,plVar21);
                  plVar21[2] = lVar14;
                  if (lVar14 != 0) {
                    lVar12 = plVar21[1];
                    goto LAB_1442fc792;
                  }
                }
              }
            }
            else {
LAB_1442fc792:
              if (lVar12 == 0) {
                FUN_14117f018();
                lVar12 = FUN_14477b664();
                plVar21[1] = lVar12;
                lVar14 = plVar21[2];
                if (lVar14 == 0) {
                  if (lVar12 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = 0;
                    if (*plVar21 != 0) {
                      plVar18 = *(longlong **)(lVar12 + 0xb8);
                      if ((plVar18 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar18 + 0x108))(), cVar6 == '\0')) {
                        lVar14 = 0;
                      }
                      else {
                        uVar13 = (**(code **)(*plVar18 + 0x110))(plVar18);
                        lVar14 = FUN_144aff482(uVar13,plVar21);
                      }
                      plVar21[2] = lVar14;
                    }
                  }
                }
              }
              local_b0 = 0;
              local_b8 = *(longlong *)(lVar14 + 0x50);
              local_a8 = 0;
              uVar13 = FUN_14477b664(*(undefined8 *)(lVar14 + 0x58));
              local_b0 = FUN_14477b664(uVar13);
              local_a8 = *(longlong *)(lVar14 + 0x60);
              if (local_b0 == 0) {
                uVar13 = FUN_1465f8c9c();
                local_b0 = FUN_14477b664(uVar13);
              }
              if (((local_a8 == 0) && (local_a8 = 0, local_b0 != 0)) && (local_b8 != 0)) {
                plVar18 = *(longlong **)(local_b0 + 0xb8);
                if ((plVar18 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
                  local_a8 = 0;
                }
                else {
                  uVar13 = (**(code **)(*plVar18 + 0x110))(plVar18);
                  local_a8 = FUN_144aff482(uVar13,&local_b8);
                }
              }
              lVar12 = local_a8;
              local_88 = 0;
              plStack_80 = (longlong *)0x0;
              local_78 = 0;
              uVar13 = FUN_1465f8c9c();
              plStack_80 = (longlong *)FUN_14477b664(uVar13);
              lVar14 = FUN_1465f8c9c();
              uVar13 = FUN_1465f8c9c();
              FUN_1402d1bfa(&local_90,uVar13,lVar12);
              if (local_88 != local_90) {
                local_78 = 0;
              }
              local_88 = local_90;
              lVar15 = FUN_1465f8c9c();
              if (lVar14 == 0) {
LAB_1442fc948:
                lVar15 = lVar14;
              }
              else if (lVar15 == 0) {
                lVar15 = 0;
              }
              else if ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar14 + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
                       lVar15 + 0x30)) goto LAB_1442fc948;
              if (plStack_80 != (longlong *)lVar15) {
                local_78 = 0;
              }
              FUN_14477b664(lVar15);
              plStack_80 = (longlong *)FUN_14477b664();
              if (((plStack_80 == (longlong *)0x0) || (local_88 == 0)) &&
                 (lVar12 = local_78, plStack_80 == (longlong *)0x0)) {
                FUN_1465f8c9c();
                plStack_80 = (longlong *)FUN_14477b664();
                lVar12 = local_78;
              }
              local_78 = lVar12;
              if (local_78 == 0) {
                local_78 = 0;
                if (((plStack_80 != (longlong *)0x0) && (local_88 != 0)) &&
                   ((plVar18 = (longlong *)plStack_80[0x17], plVar18 != (longlong *)0x0 &&
                    (cVar6 = (**(code **)(*plVar18 + 0x108))(), cVar6 != '\0')))) {
                  uVar13 = (**(code **)(*plVar18 + 0x110))(plVar18);
                  local_78 = FUN_144aff482(uVar13,&local_88);
                  if (local_78 != 0) goto LAB_1442fc99b;
                }
              }
              else {
LAB_1442fc99b:
                iVar7 = *(int *)(lVar9 + 0x2a0);
                *(uint *)(lVar9 + 0x2a0) = iVar7 + 1U;
                if (*(uint *)(lVar9 + 0x2a4) < iVar7 + 1U) {
                  FUN_14430abbc(local_c8,iVar7);
                }
                lVar12 = *local_c8;
                puVar2 = (undefined8 *)(lVar12 + (longlong)iVar7 * 0x10);
                *puVar2 = 0;
                puVar2[1] = 0;
                if (plStack_80 == (longlong *)0x0) {
                  uVar13 = FUN_1465f8c9c();
                  plStack_80 = (longlong *)FUN_14477b664(uVar13);
                }
                lVar14 = local_78;
                if (local_78 == 0) {
                  if (plStack_80 == (longlong *)0x0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = 0;
                    if (local_88 != 0) {
                      plVar18 = (longlong *)plStack_80[0x17];
                      if ((plVar18 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar6 == '\0')) {
                        lVar14 = 0;
                        local_78 = lVar14;
                      }
                      else {
                        uVar13 = (**(code **)(*plVar18 + 0x110))(plVar18);
                        lVar14 = FUN_144aff482(uVar13,&local_88);
                        local_78 = lVar14;
                      }
                    }
                  }
                }
                plVar18 = *(longlong **)(lVar14 + 0x18);
                if (*(code **)(*plVar18 + 0x50) != FUN_144828418) {
                  plVar18 = (longlong *)(**(code **)(*plVar18 + 0x50))();
                }
                FUN_1447a1fc0(plVar18);
                plVar18 = *(longlong **)(lVar14 + 0x18);
                pcVar5 = *(code **)(*plVar18 + 0x28);
                if (pcVar5 == FUN_14482841c) {
                  plVar16 = plVar18 + 3;
                  if (plVar18[5] != 0) {
                    plVar16 = (longlong *)(plVar18[5] + 8);
                  }
                }
                else if (pcVar5 == (code *)&LAB_14010c34c) {
                  plVar16 = plVar18 + 2;
                }
                else {
                  plVar16 = (longlong *)(*pcVar5)();
                }
                plVar18 = (longlong *)(lVar12 + (longlong)iVar7 * 0x10);
                if (plVar18 != plVar16) {
                  iVar7 = (int)plVar16[1];
                  _Src = (void *)*plVar16;
                  *(int *)(plVar18 + 1) = iVar7;
                  if (iVar7 == 0 && *(int *)((longlong)plVar18 + 0xc) == 0) {
                    *(undefined4 *)((longlong)plVar18 + 0xc) = 0;
                  }
                  else {
                    FUN_1446dd670(plVar18,iVar7);
                    if (iVar7 != 0) {
                      memcpy((void *)*plVar18,_Src,(longlong)iVar7 * 2);
                    }
                  }
                }
              }
            }
            plVar21 = plVar21 + 3;
            lVar20 = lVar20 + -0x18;
          } while (lVar20 != 0);
        }
      }
    }
    else {
      puVar10 = DAT_14cbe2708;
      if (DAT_14cbe2710 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      lVar9 = 0;
      uVar11 = 0;
      do {
        uVar17 = ((uint)(0x19 < (ushort)puVar10[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar10[lVar9]
                 ) - 0x20;
        uVar19 = (uint)(uVar11 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar17) & 0xff) * 4);
        uVar11 = (ulonglong)
                 (uVar19 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar17 >> 8 & 0xff) * 4));
        lVar9 = lVar9 + 1;
      } while (iVar7 != (int)lVar9);
      iVar8 = FUN_14430a03e(plVar21,uVar11,&DAT_14cbe2708);
      if (iVar8 == -1) goto LAB_1442fc3da;
      lVar9 = 0;
      uVar17 = 0;
      do {
        uVar19 = ((uint)(ushort)puVar10[lVar9] + (uint)(0x19 < (ushort)puVar10[lVar9] - 0x61) * 0x20
                 ) - 0x20;
        uVar17 = uVar17 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar17 ^ uVar19) & 0xff) * 4)
        ;
        uVar17 = uVar17 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar19 >> 8 & 0xff) * 4);
        lVar9 = lVar9 + 1;
      } while (iVar7 != (int)lVar9);
LAB_1442fc39d:
      iVar7 = FUN_14430a03e(plVar21,uVar17,&DAT_14cbe2708);
      if (iVar7 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (longlong)iVar7 * 0x28 + *plVar21;
      }
      if ((*(int *)(lVar9 + 0x10) != puVar4[4]) || (*(int *)(lVar9 + 0x18) != puVar4[6]))
      goto LAB_1442fc3da;
    }
    FUN_1442fcc74(param_1,*(undefined4 *)(lVar3 + 0xb0));
    SRWLock = local_c0;
  }
  ReleaseSRWLockShared(SRWLock);
LAB_1442fcc0d:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442fcc74 FUN_1442fcc74 body=2600 status=ok
// SIG undefined FUN_1442fcc74(void)

void FUN_1442fcc74(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  code *pcVar4;
  void *pvVar5;
  ushort *puVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_1a8 [40];
  longlong *local_180;
  undefined4 local_178;
  undefined1 local_170 [176];
  undefined1 local_c0;
  void *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_98;
  longlong *local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar3 = *(undefined1 **)(param_1 + 0x288);
  if (((int)param_2 < 0 || puVar3 == (undefined1 *)0x0) ||
     (*(int *)(puVar3 + 0x290) <= (int)param_2)) goto LAB_1442fd423;
  *(uint *)(puVar3 + 0xb0) = param_2;
  FUN_1440880aa(local_170,(ulonglong)param_2 * 0x128 + *(longlong *)(puVar3 + 0x288));
  iVar8 = local_b0;
  pvVar5 = local_b8;
  plVar1 = (longlong *)(puVar3 + 0xb8);
  if (puVar3 != local_170) {
    lVar10 = (longlong)local_b0;
    *(int *)(puVar3 + 0xc0) = local_b0;
    if (local_b0 == 0 && *(int *)(puVar3 + 0xc4) == 0) {
      *(undefined4 *)(puVar3 + 0xc4) = 0;
    }
    else {
      FUN_1446dd670(plVar1,local_b0);
      if (iVar8 != 0) {
        memcpy((void *)*plVar1,pvVar5,lVar10 * 2);
      }
    }
  }
  plVar7 = local_a8;
  if (*(code **)(*local_a8 + 0x50) != FUN_144828418) {
    plVar7 = (longlong *)(**(code **)(*local_a8 + 0x50))();
  }
  FUN_1447a1fc0(plVar7);
  pcVar4 = *(code **)(*local_a8 + 0x28);
  if (pcVar4 == FUN_14482841c) {
    plVar7 = local_a8 + 3;
    if (local_a8[5] != 0) {
      plVar7 = (longlong *)(local_a8[5] + 8);
    }
  }
  else if (pcVar4 == (code *)&LAB_14010c34c) {
    plVar7 = local_a8 + 2;
  }
  else {
    plVar7 = (longlong *)(*pcVar4)(local_a8);
  }
  plVar2 = (longlong *)(puVar3 + 200);
  if (plVar2 != plVar7) {
    iVar8 = (int)plVar7[1];
    pvVar5 = (void *)*plVar7;
    *(int *)(puVar3 + 0xd0) = iVar8;
    if (iVar8 == 0 && *(int *)(puVar3 + 0xd4) == 0) {
      *(undefined4 *)(puVar3 + 0xd4) = 0;
    }
    else {
      FUN_1446dd670(plVar2,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*plVar2,pvVar5,(longlong)iVar8 * 2);
      }
    }
  }
  plVar7 = local_98;
  if (*(code **)(*local_98 + 0x50) != FUN_144828418) {
    plVar7 = (longlong *)(**(code **)(*local_98 + 0x50))();
  }
  FUN_1447a1fc0(plVar7);
  pcVar4 = *(code **)(*local_98 + 0x28);
  if (pcVar4 == FUN_14482841c) {
    plVar7 = local_98 + 3;
    if (local_98[5] != 0) {
      plVar7 = (longlong *)(local_98[5] + 8);
    }
  }
  else if (pcVar4 == (code *)&LAB_14010c34c) {
    plVar7 = local_98 + 2;
  }
  else {
    plVar7 = (longlong *)(*pcVar4)(local_98);
  }
  plVar2 = (longlong *)(puVar3 + 0xd8);
  if (plVar2 != plVar7) {
    iVar8 = (int)plVar7[1];
    pvVar5 = (void *)*plVar7;
    *(int *)(puVar3 + 0xe0) = iVar8;
    if (iVar8 == 0 && *(int *)(puVar3 + 0xe4) == 0) {
      *(undefined4 *)(puVar3 + 0xe4) = 0;
    }
    else {
      FUN_1446dd670(plVar2,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*plVar2,pvVar5,(longlong)iVar8 * 2);
      }
    }
  }
  plVar7 = *(longlong **)(puVar3 + 0x130);
  if (plVar7 != local_88) {
    *(longlong **)(puVar3 + 0x130) = local_88;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  *(undefined4 *)(puVar3 + 0x138) = local_80;
  plVar7 = *(longlong **)(puVar3 + 0x140);
  if (plVar7 != local_78) {
    *(longlong **)(puVar3 + 0x140) = local_78;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  *(undefined4 *)(puVar3 + 0x148) = local_70;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_180 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_178 = 0;
  FUN_140008f88(puVar3 + 0x150,&local_180);
  if (local_180 != (longlong *)0x0) {
    (**(code **)(*local_180 + 0x10))();
  }
  plVar7 = *(longlong **)(puVar3 + 0x120);
  if (plVar7 != local_68) {
    *(longlong **)(puVar3 + 0x120) = local_68;
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 8))();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  *(undefined4 *)(puVar3 + 0x128) = local_60;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_180 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_178 = 0;
  FUN_140008f88(puVar3 + 0x170,&local_180);
  if (local_180 != (longlong *)0x0) {
    (**(code **)(*local_180 + 0x10))();
  }
  plVar7 = *(longlong **)(puVar3 + 0x1c8);
  if (plVar7 != local_88) {
    *(longlong **)(puVar3 + 0x1c8) = local_88;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  *(undefined4 *)(puVar3 + 0x1d0) = local_80;
  plVar7 = *(longlong **)(puVar3 + 0x1d8);
  if (plVar7 != local_78) {
    *(longlong **)(puVar3 + 0x1d8) = local_78;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  *(undefined4 *)(puVar3 + 0x1e0) = local_70;
  plVar7 = *(longlong **)(puVar3 + 0x1e8);
  if (plVar7 != local_58) {
    *(longlong **)(puVar3 + 0x1e8) = local_58;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  *(undefined4 *)(puVar3 + 0x1f0) = local_50;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_180 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_178 = 0;
  FUN_140008f88(puVar3 + 0x1b8,&local_180);
  if (local_180 != (longlong *)0x0) {
    (**(code **)(*local_180 + 0x10))();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_180 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_178 = 0;
  FUN_140008f88(puVar3 + 0x208,&local_180);
  if (local_180 != (longlong *)0x0) {
    (**(code **)(*local_180 + 0x10))();
  }
  puVar3[0x10a] = local_c0;
  if (local_b0 == DAT_14cbe26f0) {
    bVar16 = true;
    if (1 < local_b0) {
      lVar10 = 0;
      while( true ) {
        uVar11 = *(ushort *)((longlong)local_b8 + lVar10);
        uVar9 = (uint)uVar11;
        uVar13 = *(ushort *)(DAT_14cbe26e8 + lVar10);
        uVar15 = (uint)uVar13;
        if (uVar11 != uVar13) {
          if ((uVar13 | uVar11) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar11];
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar13];
            if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_1442fd2a1;
          }
          iVar8 = uVar9 - uVar15;
          goto LAB_1442fd2d1;
        }
        if (uVar11 == 0) break;
LAB_1442fd2a1:
        lVar10 = lVar10 + 2;
      }
      iVar8 = 0;
LAB_1442fd2d1:
      bVar16 = iVar8 == 0;
    }
  }
  else {
    bVar16 = DAT_14cbe26f0 + local_b0 == 1;
  }
  puVar3[0x108] = bVar16;
  if (local_b0 == DAT_14cbe2700) {
    bVar16 = true;
    if (1 < local_b0) {
      lVar10 = 0;
      while( true ) {
        uVar11 = *(ushort *)((longlong)local_b8 + lVar10);
        uVar9 = (uint)uVar11;
        uVar13 = *(ushort *)(DAT_14cbe26f8 + lVar10);
        uVar15 = (uint)uVar13;
        if (uVar11 != uVar13) {
          if ((uVar13 | uVar11) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar11];
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar13];
            if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_1442fd31c;
          }
          iVar8 = uVar9 - uVar15;
          goto LAB_1442fd34e;
        }
        if (uVar11 == 0) break;
LAB_1442fd31c:
        lVar10 = lVar10 + 2;
      }
      iVar8 = 0;
LAB_1442fd34e:
      bVar16 = iVar8 == 0;
    }
  }
  else {
    bVar16 = DAT_14cbe2700 + local_b0 == 1;
  }
  puVar3[0x109] = bVar16;
  FUN_140de1078(param_1,&DAT_14cbe2748,0,0);
  iVar8 = *(int *)(puVar3 + 0xc0);
  if (iVar8 == DAT_14cbe26f0) {
    if (1 < iVar8) {
      lVar10 = 0;
      while( true ) {
        uVar11 = *(ushort *)(*plVar1 + lVar10);
        uVar12 = (ulonglong)uVar11;
        uVar13 = *(ushort *)(DAT_14cbe26e8 + lVar10);
        if (uVar11 != uVar13) break;
        if (uVar11 == 0) goto LAB_1442fd3e4;
LAB_1442fd3af:
        lVar10 = lVar10 + 2;
      }
      if ((uVar13 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar14 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_1442fd3af;
      }
      if (uVar11 != uVar13) goto LAB_1442fd3f4;
    }
LAB_1442fd3e4:
    FUN_1442fd69e(param_1,*(undefined4 *)(puVar3 + 0xfc));
  }
  else if (DAT_14cbe26f0 + iVar8 == 1) goto LAB_1442fd3e4;
LAB_1442fd3f4:
  FUN_1442fe0bc(param_1);
  puVar6 = *(ushort **)(puVar3 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (puVar3[0x78] & 0x3f));
  }
  FUN_144086c5a(local_170);
LAB_1442fd423:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442fd69e FUN_1442fd69e body=2589 status=ok
// SIG undefined FUN_1442fd69e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442fd69e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ushort *puVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ushort uVar15;
  ulonglong uVar16;
  ushort uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *plStack_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  int local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar9 = *(longlong *)(param_1 + 0x288);
  if (lVar9 != 0) {
    iVar19 = *(int *)(lVar9 + 0xc0);
    if (iVar19 == DAT_14cbe26f0) {
      if (1 < iVar19) {
        lVar14 = 0;
        while( true ) {
          uVar15 = *(ushort *)(*(longlong *)(lVar9 + 0xb8) + lVar14);
          uVar16 = (ulonglong)uVar15;
          uVar17 = *(ushort *)(DAT_14cbe26e8 + lVar14);
          if (uVar15 != uVar17) break;
          if (uVar15 == 0) goto LAB_1442fd75c;
LAB_1442fd720:
          lVar14 = lVar14 + 2;
        }
        if ((uVar17 | uVar15) < 0x80) {
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          uVar18 = (ulonglong)uVar17;
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
          if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar18]) goto LAB_1442fd720;
        }
        if (uVar15 != uVar17) goto LAB_1442fdfbd;
      }
    }
    else if (DAT_14cbe26f0 + iVar19 != 1) goto LAB_1442fdfbd;
LAB_1442fd75c:
    iVar19 = param_2 + 1;
    if (*(int *)(lVar9 + 0x100) <= param_2 + 1) {
      iVar19 = *(int *)(lVar9 + 0x100);
    }
    iVar8 = 1;
    if (1 < iVar19) {
      iVar8 = iVar19;
    }
    *(int *)(lVar9 + 0xf8) = iVar8;
    *(int *)(lVar9 + 0xfc) = iVar8 + -1;
    lVar14 = *(longlong *)(param_1 + 0x288);
    if (lVar14 != 0) {
      local_128 = param_1;
      local_120 = lVar9;
      if (*(int *)(lVar14 + 0x104) != *(int *)(lVar14 + 600)) {
        plVar3 = (longlong *)(lVar14 + 0x250);
        iVar19 = *(int *)(lVar14 + 0x25c);
        FUN_14110cecd(*(undefined8 *)(lVar14 + 0x250));
        *(undefined4 *)(lVar14 + 600) = 0;
        if ((iVar19 < 0) && (*(int *)(lVar14 + 0x25c) != 0)) {
          FUN_148eda8c2(plVar3,0);
        }
        FUN_1400b22c2(&local_88,"Takedown");
        if ((longlong *)(lVar14 + 0x260) == &local_88) {
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar14 + 0x260) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar14 + 0x260) = local_88;
          local_88 = 0;
          *(undefined4 *)(lVar14 + 0x268) = (undefined4)uStack_80;
          *(undefined4 *)(lVar14 + 0x26c) = uStack_80._4_4_;
        }
        *(undefined1 *)(lVar14 + 0x273) = 1;
        if (0 < *(int *)(lVar14 + 0x104)) {
          iVar19 = 0;
          do {
            local_d8 = (longlong *)0x0;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = 0;
              *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
              DAT_14c844840[2] = -1;
              DAT_14c844840[3] = 0;
              DAT_14c844840[4] = 0;
              DAT_14c844840[5] = 0;
              if (DAT_14c844840 != (longlong *)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
            local_d0 = DAT_14c844840;
            if (DAT_14c844840 != (longlong *)0x0) {
              (**(code **)(*DAT_14c844840 + 8))();
            }
            local_c8 = DAT_14c844848;
            local_c0 = 0;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cbe2788) && (FUN_144b3d300(&DAT_14cbe2788), DAT_14cbe2788 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
                 (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
                DAT_14c844840[1] = 0;
                *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
                DAT_14c844840[2] = -1;
                DAT_14c844840[3] = 0;
                DAT_14c844840[4] = 0;
                DAT_14c844840[5] = 0;
                if (DAT_14c844840 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                  UNLOCK();
                }
                DAT_14c844848 = 0;
                atexit(FUN_142760bef);
                _Init_thread_footer(&DAT_14c844850);
              }
              DAT_14cbe2778 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                (**(code **)(*DAT_14c844840 + 8))();
              }
              _DAT_14cbe2780 = DAT_14c844848;
              atexit((_func_5014 *)&LAB_1442ffafa);
              _Init_thread_footer(&DAT_14cbe2788);
            }
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            FUN_1446ddda2(&local_88,"ChallengesRankFormat",0);
            FUN_140ac6c96(&local_88,&DAT_14cbe2778);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            iVar19 = iVar19 + 1;
            local_108 = 0;
            plStack_100 = (longlong *)0x0;
            FUN_1413a454c(local_f8,iVar19,0,&local_108);
            FUN_14023409e(&local_118,&DAT_14cbe2778,1);
            local_88 = CONCAT44(local_88._4_4_,4);
            FUN_14023423e(&local_78,local_f8);
            local_a0 = &uStack_68;
            local_a8 = &local_88;
            FUN_14010d304(&local_98,&local_a8);
            local_b8 = local_118;
            local_b0 = local_110;
            if (local_110 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_110 + 1) = (int)local_110[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_e8,&local_b8);
            FUN_14007f2db(local_98,uStack_90 & 0xffffffff);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
            }
            plVar10 = local_110;
            if (local_110 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_110 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_110)(local_110);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
            if (local_f8[0] != (longlong *)0x0) {
              (**(code **)(*local_f8[0] + 0x10))();
            }
            if ((local_c0 == 0) || (cVar7 = FUN_144722c14(&local_d0,local_e8), cVar7 == '\0')) {
              FUN_140008f88(&local_d0,local_e8);
              local_c0 = local_c0 + 1;
            }
            if (local_e8[0] != (longlong *)0x0) {
              (**(code **)(*local_e8[0] + 0x10))();
            }
            plVar10 = plStack_100;
            if (plStack_100 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_100 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_100)(plStack_100);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
            iVar8 = *(int *)(lVar14 + 600);
            *(uint *)(lVar14 + 600) = iVar8 + 1U;
            if (*(uint *)(lVar14 + 0x25c) < iVar8 + 1U) {
              FUN_14148d176(plVar3,iVar8);
            }
            puVar4 = (undefined8 *)(*plVar3 + (longlong)iVar8 * 0x20);
            *puVar4 = local_d8;
            FUN_140dd90de(puVar4 + 1,&local_d0);
            if (local_d0 != (longlong *)0x0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          } while (iVar19 < *(int *)(lVar14 + 0x104));
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
      local_d8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_d0 = (longlong *)CONCAT44(local_d0._4_4_,DAT_14c844848);
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(&local_88,"MayhemLevelText",0);
      FUN_140ac6c96(&local_88,&local_d8);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      iVar19 = *(int *)(lVar14 + 0xf8);
      local_98 = 0;
      uStack_90 = 0;
      lVar12 = 0xf;
      lVar9 = 0x1000000000;
      iVar11 = 0x10;
      iVar8 = iVar19;
      do {
        lVar9 = lVar9 + -0x100000000;
        *(undefined2 *)((longlong)&local_88 + lVar12 * 2) =
             *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar8 % 10) * 2);
        uVar13 = iVar8 + 9;
        lVar12 = lVar12 + -1;
        iVar11 = iVar11 + -1;
        iVar8 = iVar8 / 10;
      } while (0x12 < uVar13);
      if (iVar19 < 0) {
        iVar11 = (int)lVar12;
        lVar9 = (longlong)iVar11;
        *(undefined2 *)((longlong)&local_88 + lVar9 * 2) = 0x2d;
      }
      else {
        lVar9 = lVar9 >> 0x20;
      }
      FUN_1400020e8(&local_98,(longlong)&local_88 + lVar9 * 2,0x10 - iVar11);
      FUN_1400b22c2(&local_b8,&DAT_149dfc0cb);
      plVar3 = local_d8;
      plVar10 = local_d8;
      if (*(code **)(*local_d8 + 0x50) != FUN_144828418) {
        plVar10 = (longlong *)(**(code **)(*local_d8 + 0x50))(local_d8);
      }
      FUN_1447a1fc0(plVar10);
      pcVar5 = *(code **)(*plVar3 + 0x28);
      if (pcVar5 == FUN_14482841c) {
        plVar10 = (longlong *)(plVar3[5] + 8);
        if (plVar3[5] == 0) {
          plVar10 = plVar3 + 3;
        }
      }
      else if (pcVar5 == (code *)&LAB_14010c34c) {
        plVar10 = plVar3 + 2;
      }
      else {
        plVar10 = (longlong *)(*pcVar5)(plVar3);
      }
      FUN_1407ec8fc(&local_a8,plVar10,&local_b8);
      FUN_1401c7f3e(&local_88,&local_a8,&local_98);
      param_1 = local_128;
      if ((longlong *)(lVar14 + 0xe8) == &local_88) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar14 + 0xe8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar14 + 0xe8) = local_88;
        local_88 = 0;
        *(undefined4 *)(lVar14 + 0xf0) = (undefined4)uStack_80;
        *(undefined4 *)(lVar14 + 0xf4) = uStack_80._4_4_;
        uStack_80 = 0;
      }
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(lVar14 + 0x24c) = *(undefined4 *)(lVar14 + 0xfc);
      *(undefined4 *)(lVar14 + 0x248) = *(undefined4 *)(lVar14 + 0xfc);
      lVar9 = local_120;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar9 = local_120;
      }
    }
    FUN_1442fe0bc(param_1);
    puVar6 = *(ushort **)(lVar9 + 0x80);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar9 + 0x78) & 0x3f));
    }
  }
LAB_1442fdfbd:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442fe0bc FUN_1442fe0bc body=2926 status=ok
// SIG undefined FUN_1442fe0bc(void)

void FUN_1442fe0bc(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar16;
  ushort uVar17;
  int iVar18;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code ***local_150;
  undefined1 *local_148;
  code *local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128 [2];
  code ***local_118;
  longlong lStack_110;
  longlong local_108;
  undefined8 local_f8;
  longlong *local_f0;
  code ***local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  code ***local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  ulonglong local_b0;
  undefined8 auStack_a8 [2];
  code *local_98;
  undefined8 local_88;
  undefined **local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar12 = *(longlong *)(param_1 + 0x288);
  if (lVar12 == 0) goto LAB_1442fe9a8;
  local_118 = (code ***)0x0;
  lStack_110 = 0;
  local_108 = 0;
  iVar4 = *(int *)(lVar12 + 0xc0);
  if (iVar4 == DAT_14cbe26f0) {
    if (1 < iVar4) {
      lVar13 = 0;
      while( true ) {
        uVar15 = *(ushort *)(*(longlong *)(lVar12 + 0xb8) + lVar13);
        uVar14 = (ulonglong)uVar15;
        uVar17 = *(ushort *)(DAT_14cbe26e8 + lVar13);
        if (uVar15 != uVar17) break;
        if (uVar15 == 0) goto LAB_1442fe216;
LAB_1442fe160:
        lVar13 = lVar13 + 2;
      }
      if ((uVar17 | uVar15) < 0x80) {
        uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        uVar16 = (ulonglong)uVar17;
        uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1442fe160;
      }
      if (uVar15 != uVar17) goto LAB_1442fe18f;
    }
LAB_1442fe216:
    iVar4 = *(int *)(lVar12 + 0xf8);
    local_d8 = 0;
    uStack_d0 = 0;
    lVar10 = 0xf;
    lVar13 = 0x1000000000;
    iVar8 = 0x10;
    iVar18 = iVar4;
    do {
      lVar13 = lVar13 + -0x100000000;
      *(undefined2 *)((longlong)&local_c8 + lVar10 * 2) =
           *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar18 % 10) * 2);
      uVar11 = iVar18 + 9;
      lVar10 = lVar10 + -1;
      iVar8 = iVar8 + -1;
      iVar18 = iVar18 / 10;
    } while (0x12 < uVar11);
    if (iVar4 < 0) {
      iVar8 = (int)lVar10;
      lVar13 = (longlong)iVar8;
      *(undefined2 *)((longlong)&local_c8 + lVar13 * 2) = 0x2d;
    }
    else {
      lVar13 = lVar13 >> 0x20;
    }
    FUN_1400020e8(&local_d8,(longlong)&local_c8 + lVar13 * 2,0x10 - iVar8);
    FUN_1407ec8fc(&local_c8,&DAT_14cbe2718,&local_d8);
    iVar4 = (int)uStack_c0 + -1;
    if ((int)uStack_c0 == 0) {
      iVar4 = 0;
    }
    FUN_1446f82e2(&local_e8,iVar4,local_c8,1);
    local_118 = local_e8;
    lStack_110 = 0;
    local_108 = 0;
    if ((code ****)local_c8 != (code ****)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (lStack_110 == 0) goto LAB_1442fea19;
  }
  else {
    if (DAT_14cbe26f0 + iVar4 == 1) goto LAB_1442fe216;
LAB_1442fe18f:
    if (iVar4 == DAT_14cbe2700) {
      if (1 < iVar4) {
        lVar13 = 0;
        while( true ) {
          uVar15 = *(ushort *)(*(longlong *)(lVar12 + 0xb8) + lVar13);
          uVar14 = (ulonglong)uVar15;
          uVar17 = *(ushort *)(DAT_14cbe26f8 + lVar13);
          if (uVar15 != uVar17) break;
          if (uVar15 == 0) goto LAB_1442fe9dc;
LAB_1442fe1d6:
          lVar13 = lVar13 + 2;
        }
        if ((uVar17 | uVar15) < 0x80) {
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          uVar16 = (ulonglong)uVar17;
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1442fe1d6;
        }
        if (uVar15 != uVar17) goto LAB_1442fe9a8;
      }
    }
    else if (DAT_14cbe2700 + iVar4 != 1) goto LAB_1442fe9a8;
LAB_1442fe9dc:
    iVar4 = DAT_14cbe2730 + -1;
    if (DAT_14cbe2730 == 0) {
      iVar4 = 0;
    }
    FUN_1446f82e2(&local_c8,iVar4,DAT_14cbe2728,1);
    local_118 = local_c8;
    lStack_110 = 0;
    local_108 = 0;
LAB_1442fea19:
    uVar5 = FUN_1465f8f8a();
    lStack_110 = FUN_14477b664(uVar5);
  }
  if (local_108 == 0) {
    if ((((lStack_110 == 0) || ((code ****)local_118 == (code ****)0x0)) ||
        (plVar6 = *(longlong **)(lStack_110 + 0xb8), plVar6 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar3 == '\0')) goto LAB_1442fe9a8;
    uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
    local_108 = FUN_144aff482(uVar5,&local_118);
    if (local_108 == 0) goto LAB_1442fe9a8;
  }
  lVar13 = local_108;
  if (lStack_110 == 0) {
    uVar5 = FUN_1465f8f8a();
    lStack_110 = FUN_14477b664(uVar5);
    lVar13 = local_108;
    if (((local_108 == 0) && (lVar13 = 0, lStack_110 != 0)) &&
       ((code ****)local_118 != (code ****)0x0)) {
      plVar6 = *(longlong **)(lStack_110 + 0xb8);
      if ((plVar6 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar3 == '\0')) {
        lVar13 = 0;
        local_108 = lVar13;
      }
      else {
        uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar13 = FUN_144aff482(uVar5,&local_118);
        local_108 = lVar13;
      }
    }
  }
  plVar6 = *(longlong **)(lVar13 + 0x28);
  if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  plVar6 = *(longlong **)(lVar13 + 0x28);
  pcVar2 = *(code **)(*plVar6 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar7 = plVar6 + 3;
    if (plVar6[5] != 0) {
      plVar7 = (longlong *)(plVar6[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar7 = plVar6 + 2;
  }
  else {
    plVar7 = (longlong *)(*pcVar2)(plVar6);
  }
  if (1 < (int)plVar7[1]) {
    plVar6 = *(longlong **)(lVar13 + 0x28);
    plVar7 = *(longlong **)(lVar12 + 0x130);
    if (plVar7 != plVar6) {
      *(longlong **)(lVar12 + 0x130) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    *(undefined4 *)(lVar12 + 0x138) = *(undefined4 *)(lVar13 + 0x30);
    plVar6 = *(longlong **)(lVar13 + 0x28);
    plVar7 = *(longlong **)(lVar12 + 0x1c8);
    if (plVar7 != plVar6) {
      *(longlong **)(lVar12 + 0x1c8) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    *(undefined4 *)(lVar12 + 0x1d0) = *(undefined4 *)(lVar13 + 0x30);
  }
  plVar6 = *(longlong **)(lVar13 + 0x38);
  if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  plVar6 = *(longlong **)(lVar13 + 0x38);
  pcVar2 = *(code **)(*plVar6 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar7 = plVar6 + 3;
    if (plVar6[5] != 0) {
      plVar7 = (longlong *)(plVar6[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar7 = plVar6 + 2;
  }
  else {
    plVar7 = (longlong *)(*pcVar2)(plVar6);
  }
  if (1 < (int)plVar7[1]) {
    plVar6 = *(longlong **)(lVar13 + 0x38);
    plVar7 = *(longlong **)(lVar12 + 0x140);
    if (plVar7 != plVar6) {
      *(longlong **)(lVar12 + 0x140) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    *(undefined4 *)(lVar12 + 0x148) = *(undefined4 *)(lVar13 + 0x40);
    plVar6 = *(longlong **)(lVar13 + 0x38);
    plVar7 = *(longlong **)(lVar12 + 0x1d8);
    if (plVar7 != plVar6) {
      *(longlong **)(lVar12 + 0x1d8) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    *(undefined4 *)(lVar12 + 0x1e0) = *(undefined4 *)(lVar13 + 0x40);
  }
  plVar6 = *(longlong **)(lVar13 + 0x18);
  if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  plVar6 = *(longlong **)(lVar13 + 0x18);
  pcVar2 = *(code **)(*plVar6 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar7 = plVar6 + 3;
    if (plVar6[5] != 0) {
      plVar7 = (longlong *)(plVar6[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar7 = plVar6 + 2;
  }
  else {
    plVar7 = (longlong *)(*pcVar2)(plVar6);
  }
  if (1 < (int)plVar7[1]) {
    plVar6 = *(longlong **)(lVar13 + 0x18);
    plVar7 = *(longlong **)(lVar12 + 0x120);
    if (plVar7 != plVar6) {
      *(longlong **)(lVar12 + 0x120) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    *(undefined4 *)(lVar12 + 0x128) = *(undefined4 *)(lVar13 + 0x20);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1442feb0e:
    uVar5 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x30);
    uVar5 = 0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1442feb0e;
      uVar5 = *puVar9;
    }
  }
  lVar10 = FUN_1407f492e(uVar5);
  if (lVar10 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_150 = (code ***)&local_c8;
      local_c8 = (code ***)FUN_141030f22;
      local_140 = FUN_14081d0ea;
      local_148 = &LAB_1459f2e4c;
      local_158 = &LAB_148c39de3;
      local_160 = &LAB_1457a9eb2;
      local_168 = &DAT_149e063b2;
      local_170 = 0;
      local_178 = 0x10000004;
      local_180 = 0x10;
      local_188 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      local_88 = 0;
      local_78 = &PTR_LAB_14b9d3d50;
      local_98 = FUN_14430a86e;
      local_70 = lVar10;
      local_68 = lVar13;
      local_60 = lVar12;
      FUN_1403911de(param_1);
    }
  }
  iVar4 = *(int *)(lVar12 + 0xc0);
  if (iVar4 == DAT_14cbe26f0) {
    if (1 < iVar4) {
      lVar13 = 0;
      while( true ) {
        uVar15 = *(ushort *)(*(longlong *)(lVar12 + 0xb8) + lVar13);
        uVar14 = (ulonglong)uVar15;
        uVar17 = *(ushort *)(DAT_14cbe26e8 + lVar13);
        if (uVar15 != uVar17) break;
        if (uVar15 == 0) goto LAB_1442fe72a;
LAB_1442fe673:
        lVar13 = lVar13 + 2;
      }
      if ((uVar17 | uVar15) < 0x80) {
        uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        uVar16 = (ulonglong)uVar17;
        uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1442fe673;
      }
      if (uVar15 != uVar17) goto LAB_1442fe7ce;
    }
LAB_1442fe72a:
    if (*(char *)(lVar12 + 0x10a) == '\x01') {
      local_c8 = (code ***)0x0;
      uStack_c0 = 0;
      local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
      local_b0 = 0;
      auStack_a8[0] = 0;
      FUN_1446ddda2(&local_c8,"TakedownMayhemModeRequirement",0);
      FUN_140ac6c96(&local_c8,lVar12 + 0x170);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      local_c8 = (code ***)0x0;
      uStack_c0 = 0;
      local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
      local_b0 = 0;
      auStack_a8[0] = 0;
      FUN_1446ddda2(&local_c8,"TakedownMayhemModeRequirement",0);
      FUN_140ac6c96(&local_c8);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      iVar4 = *(int *)(lVar12 + 0xc0);
    }
  }
  else if (DAT_14cbe26f0 + iVar4 == 1) goto LAB_1442fe72a;
LAB_1442fe7ce:
  if (iVar4 == DAT_14cbe2700) {
    if (1 < iVar4) {
      lVar13 = 0;
      while( true ) {
        uVar15 = *(ushort *)(*(longlong *)(lVar12 + 0xb8) + lVar13);
        uVar14 = (ulonglong)uVar15;
        uVar17 = *(ushort *)(DAT_14cbe26f8 + lVar13);
        if (uVar15 != uVar17) break;
        if (uVar15 == 0) goto LAB_1442fe846;
LAB_1442fe809:
        lVar13 = lVar13 + 2;
      }
      if ((uVar17 | uVar15) < 0x80) {
        uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        uVar16 = (ulonglong)uVar17;
        uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1442fe809;
      }
      if (uVar15 != uVar17) goto LAB_1442fe9a8;
    }
  }
  else if (DAT_14cbe2700 + iVar4 != 1) goto LAB_1442fe9a8;
LAB_1442fe846:
  if (*(char *)(lVar12 + 0x10a) == '\x01') {
    lVar12 = lVar12 + 0x208;
    local_c8 = (code ***)0x0;
    uStack_c0 = 0;
    local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
    local_b0 = 0;
    auStack_a8[0] = 0;
    FUN_1446ddda2(&local_c8,"TakedownHardcoreModeRequirement",0);
    FUN_140ac6c96(&local_c8,lVar12);
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_138,lVar12,1);
    local_e0 = auStack_a8;
    local_c8 = (code ***)((ulonglong)local_c8 & 0xffffffff00000000);
    local_b8 = (longlong *)0x0;
    local_b0 = local_b0 & 0xffffffff00000000;
    uStack_c0 = 5;
    local_e8 = (code ***)&local_c8;
    FUN_14010d304(&local_d8);
    local_f8 = local_138;
    local_f0 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_130 + 1) = (int)local_130[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_128,&local_f8,&local_d8);
    FUN_14007f2db(local_d8,uStack_d0 & 0xffffffff);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_130 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_130 + 0x10))(local_130);
        }
      }
    }
    FUN_140008f88(lVar12,local_128);
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
  }
LAB_1442fe9a8:
  if ((local_50 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442fec2c FUN_1442fec2c body=329 status=ok
// SIG undefined FUN_1442fec2c(void)

void FUN_1442fec2c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3ca0;
  puVar1[2] = FUN_1442fed76;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"LaunchClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3cc0;
  puVar1[2] = FUN_1442fcc74;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"ChangeToPage",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3cc0;
  puVar1[2] = FUN_1442ff356;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"ChangeMayhemLevel",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3ca0;
  puVar1[2] = &LAB_1442ff3ea;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PrevPage",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3ca0;
  puVar1[2] = &LAB_1442ff424;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"NextPage",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3cc0;
  puVar1[2] = FUN_1442fd69e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnStepperValueChanged",puVar1);
  return;
}



// FUNCTION 1442fed76 FUN_1442fed76 body=1503 status=ok
// SIG undefined FUN_1442fed76(void)

void FUN_1442fed76(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar13 = *(longlong *)(param_1 + 0x288);
  if ((lVar13 == 0) || (*(char *)(lVar13 + 0x10a) != '\0')) goto LAB_1442ff219;
  plVar10 = (longlong *)(param_1 + 0x2b0);
  plVar1 = (longlong *)(lVar13 + 0xb8);
  iVar3 = *(int *)(lVar13 + 0xc0);
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    iVar12 = 0;
    do {
      iVar12 = iVar12 + 1;
    } while (iVar7 != iVar12);
  }
  iVar7 = FUN_14430a03e(plVar10);
  if (iVar7 == -1) goto LAB_1442ff219;
  if (iVar3 == DAT_14cbe26e0) {
    if (1 < iVar3) {
      lVar8 = 0;
      while( true ) {
        uVar14 = *(ushort *)(*plVar1 + lVar8);
        uVar9 = (ulonglong)uVar14;
        uVar15 = *(ushort *)(DAT_14cbe26d8 + lVar8);
        if (uVar14 != uVar15) break;
        if (uVar14 == 0) goto LAB_1442fefc3;
LAB_1442fee9d:
        lVar8 = lVar8 + 2;
      }
      if ((uVar15 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar16 = (ulonglong)uVar15;
        uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar16]) goto LAB_1442fee9d;
      }
      if (uVar14 != uVar15) goto LAB_1442feecd;
    }
LAB_1442fefc3:
    puVar5 = (undefined8 *)FUN_14001cc68(0x50);
    iVar3 = *(int *)(lVar13 + 0xc0);
    uVar9 = 0;
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    if (0 < iVar7) {
      if (iVar3 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*plVar1;
      }
      lVar13 = 0;
      uVar9 = 0;
      do {
        uVar11 = ((uint)(0x19 < (ushort)puVar6[lVar13] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar13]
                 ) - 0x20;
        uVar17 = (uint)(uVar9 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar11) & 0xff) * 4);
        uVar9 = (ulonglong)
                (uVar17 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
        lVar13 = lVar13 + 1;
      } while (iVar7 != (int)lVar13);
    }
    iVar3 = FUN_14430a03e(plVar10,uVar9,plVar1);
    uVar19 = 0;
LAB_1442ff11b:
    if (iVar3 == -1) {
      lVar13 = 0;
    }
    else {
      lVar13 = (longlong)iVar3 * 0x28 + *plVar10;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar5 = &PTR_FUN_14b9d1d70;
    local_58 = "StartTakedown";
    local_50 = 0xd;
    local_4c = 0;
    uVar4 = FUN_14001a6c0(&local_58,1);
    FUN_14039176c(puVar5,uVar2,uVar4,1);
    uVar18 = 0;
LAB_1442ff17d:
    *puVar5 = &PTR_FUN_14b9d1d70;
    puVar5[7] = *(undefined8 *)(lVar13 + 0x10);
    *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)((longlong)puVar5 + 0x44) = uVar19;
    *(undefined1 *)(puVar5 + 9) = uVar18;
    FUN_140391314(param_1,puVar5);
  }
  else {
    if (DAT_14cbe26e0 + iVar3 == 1) goto LAB_1442fefc3;
LAB_1442feecd:
    if (iVar3 == DAT_14cbe26f0) {
      if (1 < iVar3) {
        lVar8 = 0;
        while( true ) {
          uVar14 = *(ushort *)(*plVar1 + lVar8);
          uVar9 = (ulonglong)uVar14;
          uVar15 = *(ushort *)(DAT_14cbe26e8 + lVar8);
          if (uVar14 != uVar15) break;
          if (uVar14 == 0) goto LAB_1442ff075;
LAB_1442fef10:
          lVar8 = lVar8 + 2;
        }
        if ((uVar15 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar16 = (ulonglong)uVar15;
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar16]) goto LAB_1442fef10;
        }
        if (uVar14 != uVar15) goto LAB_1442fef40;
      }
LAB_1442ff075:
      puVar5 = (undefined8 *)FUN_14001cc68(0x50);
      iVar3 = *(int *)(lVar13 + 0xc0);
      uVar9 = 0;
      iVar7 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      if (0 < iVar7) {
        if (iVar3 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        else {
          puVar6 = (undefined2 *)*plVar1;
        }
        lVar8 = 0;
        uVar9 = 0;
        do {
          uVar11 = ((uint)(0x19 < (ushort)puVar6[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar8]
                   ) - 0x20;
          uVar17 = (uint)(uVar9 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar11) & 0xff) * 4);
          uVar9 = (ulonglong)
                  (uVar17 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
          lVar8 = lVar8 + 1;
        } while (iVar7 != (int)lVar8);
      }
      uVar19 = *(undefined4 *)(lVar13 + 0xf8);
      iVar3 = FUN_14430a03e(plVar10,uVar9,plVar1);
      goto LAB_1442ff11b;
    }
    if (DAT_14cbe26f0 + iVar3 == 1) goto LAB_1442ff075;
LAB_1442fef40:
    if (iVar3 == DAT_14cbe2700) {
      if (1 < iVar3) {
        lVar13 = 0;
        while( true ) {
          uVar14 = *(ushort *)(*plVar1 + lVar13);
          uVar9 = (ulonglong)uVar14;
          uVar15 = *(ushort *)(DAT_14cbe26f8 + lVar13);
          if (uVar14 != uVar15) break;
          if (uVar14 == 0) goto LAB_1442ff24c;
LAB_1442fef83:
          lVar13 = lVar13 + 2;
        }
        if ((uVar15 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar16 = (ulonglong)uVar15;
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar16]) goto LAB_1442fef83;
        }
        if (uVar14 != uVar15) goto LAB_1442ff1aa;
      }
LAB_1442ff24c:
      puVar5 = (undefined8 *)FUN_14001cc68(0x50);
      uVar9 = 0;
      iVar3 = DAT_14cbe2710 + -1;
      if (DAT_14cbe2710 == 0) {
        iVar3 = 0;
      }
      if (0 < iVar3) {
        puVar6 = DAT_14cbe2708;
        if (DAT_14cbe2710 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        lVar13 = 0;
        uVar9 = 0;
        do {
          uVar11 = ((uint)(ushort)puVar6[lVar13] +
                   (uint)(0x19 < (ushort)puVar6[lVar13] - 0x61) * 0x20) - 0x20;
          uVar17 = (uint)(uVar9 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar11) & 0xff) * 4);
          uVar9 = (ulonglong)
                  (uVar17 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
          lVar13 = lVar13 + 1;
        } while (iVar3 != (int)lVar13);
      }
      iVar3 = FUN_14430a03e(plVar10,uVar9,&DAT_14cbe2708);
      uVar19 = 0;
      if (iVar3 == -1) {
        lVar13 = 0;
      }
      else {
        lVar13 = (longlong)iVar3 * 0x28 + *plVar10;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar5 = &PTR_FUN_14b9d1d70;
      local_58 = "StartTakedown";
      local_50 = 0xd;
      local_4c = 0;
      uVar4 = FUN_14001a6c0(&local_58,1);
      uVar18 = 1;
      FUN_14039176c(puVar5,uVar2,uVar4,1);
      goto LAB_1442ff17d;
    }
    if (DAT_14cbe2700 + iVar3 == 1) goto LAB_1442ff24c;
  }
LAB_1442ff1aa:
  FUN_140de1078(param_1,&DAT_14cbe2738,0,0);
  if ((((*(int *)(param_1 + 0x34) != 0) && (uVar11 = *(uint *)(param_1 + 0x30), -1 < (int)uVar11))
      && ((int)uVar11 < DAT_14c9647dc)) &&
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x34))) &&
      (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))))) {
    FUN_140c125e6(*plVar10 + 0x3c0,&DAT_14cbd9678);
  }
LAB_1442ff219:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442ff356 FUN_1442ff356 body=148 status=ok
// SIG undefined FUN_1442ff356(void)

void FUN_1442ff356(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    return;
  }
  iVar1 = *(int *)(lVar2 + 0xc0);
  if (iVar1 == DAT_14cbe26f0) {
    if (1 < iVar1) {
      lVar7 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*(longlong *)(lVar2 + 0xb8) + lVar7);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(DAT_14cbe26e8 + lVar7);
        if (uVar3 != uVar5) break;
        if (uVar3 == 0) goto LAB_1442ff3dc;
LAB_1442ff3a9:
        lVar7 = lVar7 + 2;
      }
      if ((uVar5 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1442ff3a9;
      }
      if (uVar3 != uVar5) {
        return;
      }
    }
  }
  else if (DAT_14cbe26f0 + iVar1 != 1) {
    return;
  }
LAB_1442ff3dc:
  FUN_1442fd69e(param_1,param_2 + *(int *)(lVar2 + 0xfc));
  return;
}



// FUNCTION 1442ff45a FUN_1442ff45a body=433 status=ok
// SIG undefined FUN_1442ff45a(void)

void FUN_1442ff45a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_1442fed76;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1442ff60c(param_1,param_2,&DAT_14cb92c20,param_1);
      local_38 = (code *)&LAB_1442ff9ee;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1442ff60c(param_1,param_2,&DAT_14cb92b90,param_1);
      local_38 = (code *)&LAB_1442ff3ea;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1442ff60c(param_1,param_2,&DAT_14cb92ba0,param_1);
      local_38 = (code *)&LAB_1442ff424;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1442ff60c(param_1,param_2,&DAT_14cb92ba8,param_1);
      local_38 = FUN_1442ffa4a;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1442ff60c(param_1,param_2,&DAT_14cb92bc8,param_1);
      local_38 = FUN_1442ffa76;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1442ff60c(param_1,param_2,&DAT_14cb92bc0,param_1);
      local_38 = FUN_1442ffaa2;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1442ff60c(param_1,param_2,&DAT_14cb92bb8,param_1);
      local_38 = FUN_1442fface;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1442ff60c(param_1,param_2,&DAT_14cb92bb0,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442ff60c FUN_1442ff60c body=993 status=ok
// SIG undefined FUN_1442ff60c(void)

void FUN_1442ff60c(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  code **local_68;
  int local_5c;
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = *(undefined4 *)(param_5 + 1);
  uVar4 = *param_5;
  local_58 = (code *)*param_3;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar7 = DAT_14c762760 + 1;
    *(int *)(puVar9 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar7;
    *puVar9 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
    uVar3 = *(uint *)(lVar8 + 0xc);
    *(uint *)(puVar9 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        local_5c = iVar13;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
        iVar13 = local_5c;
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar8 + 0x10) = iVar13;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar7 = iVar13;
      }
    }
    *(int *)((longlong)puVar9 + 0x14) = iVar7;
    *(undefined1 *)(puVar9 + 3) = 1;
    *puVar9 = &PTR_FUN_14b47b0e0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined1 *)(puVar9 + 6) = 0;
    plVar10 = (longlong *)FUN_14063ee94(puVar9 + 4);
    if ((int)plVar10[1] != 4) {
      FUN_1446efa72(plVar10,0,4,0x10);
      *(undefined4 *)(plVar10 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar10;
    plVar10 = *(longlong **)(param_4 + 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_1442ff81f:
      *puVar5 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b9d3ce0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = uVar4;
      *(undefined4 *)(puVar5 + 6) = uVar11;
    }
    else {
      iVar7 = (int)plVar10[1];
      do {
        if (iVar7 == 0) goto LAB_1442ff81f;
        LOCK();
        iVar13 = (int)plVar10[1];
        bVar14 = iVar7 == iVar13;
        if (bVar14) {
          *(int *)(plVar10 + 1) = iVar7 + 1;
          iVar13 = iVar7;
        }
        iVar7 = iVar13;
        UNLOCK();
      } while (!bVar14);
      uVar6 = *(undefined8 *)(param_4 + 8);
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b9d3ce0;
      puVar5[3] = uVar6;
      puVar5[4] = plVar10;
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar11;
      puVar5[5] = uVar4;
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    iVar7 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar7 + 1U) {
      FUN_141053524((longlong *)(param_2 + 0x198),iVar7);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar7 * 8) = puVar9;
    uVar11 = *(undefined4 *)(puVar9 + 1);
  }
  plVar10 = (longlong *)(param_1 + 0x138);
  iVar7 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar7 + 1U) {
    FUN_1447808da(plVar10,iVar7);
  }
  *(undefined4 *)(*plVar10 + (longlong)iVar7 * 4) = uVar11;
  local_58 = (code *)*param_3;
  lVar8 = FUN_14063edce(&DAT_14cb91658,&local_58);
  if (lVar8 != 0) {
    local_58 = FUN_140ed4b7e;
    local_50 = 0;
    local_68 = &local_58;
    lVar8 = FUN_14063efbe(param_2,lVar8,1,param_1);
    uVar11 = *(undefined4 *)(lVar8 + 8);
    iVar7 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar7 + 1U) {
      FUN_1447808da(plVar10,iVar7);
    }
    *(undefined4 *)(*plVar10 + (longlong)iVar7 * 4) = uVar11;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442ffa4a FUN_1442ffa4a body=44 status=ok
// SIG undefined FUN_1442ffa4a(void)

void FUN_1442ffa4a(undefined8 param_1)

{
  FUN_1442ff356(param_1,1);
  FUN_140de1078(param_1,&DAT_14cbe2768,0,0);
  return;
}



// FUNCTION 1442ffa76 FUN_1442ffa76 body=44 status=ok
// SIG undefined FUN_1442ffa76(void)

void FUN_1442ffa76(undefined8 param_1)

{
  FUN_1442ff356(param_1,0xffffffff);
  FUN_140de1078(param_1,&DAT_14cbe2758,0,0);
  return;
}



// FUNCTION 1442ffaa2 FUN_1442ffaa2 body=44 status=ok
// SIG undefined FUN_1442ffaa2(void)

void FUN_1442ffaa2(undefined8 param_1)

{
  FUN_1442ff356(param_1,10);
  FUN_140de1078(param_1,&DAT_14cbe2768,0,0);
  return;
}



// FUNCTION 1442fface FUN_1442fface body=44 status=ok
// SIG undefined FUN_1442fface(void)

void FUN_1442fface(undefined8 param_1)

{
  FUN_1442ff356(param_1,&DAT_fffffff6);
  FUN_140de1078(param_1,&DAT_14cbe2758,0,0);
  return;
}



// FUNCTION 1442ffd14 FUN_1442ffd14 body=1655 status=ok
// SIG undefined FUN_1442ffd14(void)

void FUN_1442ffd14(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_228 [32];
  longlong **local_208;
  longlong **local_200;
  code *local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  longlong *local_1d8 [2];
  undefined1 local_1c8 [16];
  longlong *local_1b8 [2];
  longlong *local_1a8 [2];
  undefined8 local_198;
  longlong *plStack_190;
  longlong *local_188 [2];
  undefined8 local_178;
  longlong *plStack_170;
  longlong *local_160 [2];
  undefined1 local_150 [8];
  undefined1 local_148 [16];
  undefined1 local_138 [32];
  longlong local_118;
  uint local_110;
  uint local_10c;
  undefined8 *local_108;
  int local_100;
  undefined8 local_e8;
  undefined1 local_dc;
  undefined1 local_da;
  undefined8 *local_88;
  ulonglong uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar9 = (longlong *)FUN_148ec9e18();
  lVar3 = *plVar9;
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0xa28));
  if ((((*(int *)(lVar3 + 0x9f8) != 0) || (*(char *)(lVar3 + 0x9c0) != '\x01')) ||
      ((*(int *)(lVar3 + 0x304) == -1 &&
       ((*(int *)(lVar3 + 0x308) == 0 && ((*(byte *)(lVar3 + 0x14f) & 0x20) == 0)))))) ||
     ((*(int *)(lVar3 + 0x574) == -1 &&
      ((*(int *)(lVar3 + 0x578) == 0 && ((*(byte *)(lVar3 + 0x3bf) & 0x20) == 0)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_228);
  }
  FUN_145be44b4(local_150);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"FirmwareTransferTitle",0);
  FUN_1410d1eba(&local_1f8,&local_88);
  FUN_140008f88(local_148,&local_1f8);
  if (local_1f8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_1f8 + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_178 = 0;
  plStack_170 = (longlong *)0x0;
  FUN_1456e1928(local_160,*(undefined8 *)(lVar3 + 0x8f0),0);
  local_198 = 0;
  plStack_190 = (longlong *)0x0;
  FUN_1456e1928(local_188,*(undefined8 *)(lVar3 + 0x8a0),0);
  FUN_140009b9a(local_1a8,lVar3 + 0xb0);
  FUN_140009b9a(local_1b8,lVar3 + 0xd0);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"FirmwareConfirmationBody",0);
  FUN_1410d1eba(local_1d8,&local_88);
  FUN_14023409e(local_1c8,local_1d8,1);
  local_208 = local_188;
  local_200 = local_160;
  FUN_148ecbedc(&local_1f8,local_1c8,local_1b8,local_1a8);
  FUN_140008f88(local_138,&local_1f8);
  if (local_1f8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_1f8 + 0x10))();
  }
  if (local_1d8[0] != (longlong *)0x0) {
    (**(code **)(*local_1d8[0] + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_1b8[0] != (longlong *)0x0) {
    (**(code **)(*local_1b8[0] + 0x10))();
  }
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))();
  }
  if (local_188[0] != (longlong *)0x0) {
    (**(code **)(*local_188[0] + 0x10))();
  }
  plVar9 = plStack_190;
  if (plStack_190 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_190 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_190)(plStack_190);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_160[0] != (longlong *)0x0) {
    (**(code **)(*local_160[0] + 0x10))();
  }
  plVar9 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_170 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"ContinueText",0);
  FUN_1410d1eba(&local_1f8,&local_88);
  uVar5 = local_110;
  local_1e8 = DAT_14cbe2958;
  local_1e0 = 1;
  lVar11 = (longlong)(int)local_110;
  local_110 = local_110 + 1;
  if (local_10c < local_110) {
    FUN_145da4fc8(&local_118,uVar5);
  }
  lVar4 = local_118;
  lVar11 = lVar11 * 0x20;
  FUN_14023423e(lVar11 + local_118,&local_1f8);
  *(undefined1 *)(lVar4 + 0x18 + lVar11) = local_1e0;
  *(undefined8 *)(lVar4 + 0x10 + lVar11) = local_1e8;
  if (local_1f8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_1f8 + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"CancelText",0);
  FUN_1410d1eba(&local_1f8,&local_88);
  uVar5 = local_110;
  local_1e8 = DAT_14cbe2950;
  local_1e0 = 1;
  lVar11 = (longlong)(int)local_110;
  local_110 = local_110 + 1;
  if (local_10c < local_110) {
    FUN_145da4fc8(&local_118,uVar5);
  }
  lVar11 = lVar11 * 0x20;
  FUN_14023423e(local_118 + lVar11,&local_1f8);
  *(undefined1 *)(local_118 + 0x18 + lVar11) = local_1e0;
  *(undefined8 *)(local_118 + 0x10 + lVar11) = local_1e8;
  if (local_1f8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_1f8 + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_1f8 = FUN_1443005b8;
  local_1f0 = 0;
  FUN_148ecbfde(&local_88,param_1);
  puVar6 = local_88;
  local_88 = (undefined8 *)0x0;
  uVar7 = (int)uStack_80;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if (local_100 == 0) {
LAB_1443001e6:
    if (local_108 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_108 != (undefined8 *)0x0) {
    (**(code **)*local_108)(local_108,0);
    FUN_1446efa72(&local_108,0,0,0x10);
    local_100 = 0;
    goto LAB_1443001e6;
  }
  local_108 = puVar6;
  local_100 = uVar7;
  if ((int)uStack_80 == 0) {
LAB_144300249:
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    uStack_80 = uStack_80 & 0xffffffff00000000;
    goto LAB_144300249;
  }
  local_e8 = DAT_14cbe2958;
  local_da = 1;
  local_dc = 1;
  uVar10 = FUN_14001cc68(0x100,0x10);
  FUN_148e875c4(uVar10,param_1 + 0x30,local_150);
  FUN_140391314(param_1,uVar10);
  FUN_1459ddea2(local_150);
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0xa28));
  plVar9 = (longlong *)FUN_148ec9e18(param_1);
  lVar3 = *plVar9;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa28));
  *(int *)(lVar3 + 0xa20) = *(int *)(lVar3 + 0xa20) + 1;
  if (*(int *)(lVar3 + 0x9f8) == 3) {
    if (*(int *)(lVar3 + 0x9fc) != 0) goto LAB_1443002f7;
    iVar8 = 1;
  }
  else {
    iVar8 = *(int *)(lVar3 + 0x9fc) + 1;
  }
  *(undefined4 *)(lVar3 + 0x9f8) = 3;
  *(int *)(lVar3 + 0x9fc) = iVar8;
LAB_1443002f7:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa28));
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443003b2 FUN_1443003b2 body=517 status=ok
// SIG undefined FUN_1443003b2(void)

void FUN_1443003b2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  byte bVar7;
  PSRWLOCK pRVar8;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = (longlong *)FUN_148ec9e18();
  lVar2 = *plVar5;
  pRVar8 = (PSRWLOCK)(lVar2 + 0xa28);
  AcquireSRWLockShared(pRVar8);
  iVar1 = *(int *)(lVar2 + 0x9f0);
  ReleaseSRWLockShared(pRVar8);
  plVar5 = (longlong *)FUN_148ec9e18(param_1);
  lVar2 = *plVar5;
  pRVar8 = (PSRWLOCK)(lVar2 + 0xa28);
  AcquireSRWLockShared(pRVar8);
  if (iVar1 == 0) {
    bVar7 = 1;
    if ((*(int *)(lVar2 + 0x304) == -1) && (*(int *)(lVar2 + 0x308) == 0)) {
      bVar7 = (*(byte *)(lVar2 + 0x14f) & 0x20) >> 5;
    }
    ReleaseSRWLockShared(pRVar8);
    plVar5 = (longlong *)FUN_148ec9e18(param_1);
    lVar2 = *plVar5;
    pRVar8 = (PSRWLOCK)(lVar2 + 0xa28);
    AcquireSRWLockExclusive(pRVar8);
    *(int *)(lVar2 + 0xa20) = *(int *)(lVar2 + 0xa20) + 1;
    FUN_148e1e4a6(lVar2);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x9f0);
    ReleaseSRWLockShared(pRVar8);
    if (iVar1 != 1) goto LAB_14430042a;
    plVar5 = (longlong *)FUN_148ec9e18(param_1);
    lVar2 = *plVar5;
    AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xa28));
    bVar7 = 1;
    if ((*(int *)(lVar2 + 0x574) == -1) && (*(int *)(lVar2 + 0x578) == 0)) {
      bVar7 = (*(byte *)(lVar2 + 0x3bf) & 0x20) >> 5;
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xa28));
    plVar5 = (longlong *)FUN_148ec9e18(param_1);
    lVar2 = *plVar5;
    pRVar8 = (PSRWLOCK)(lVar2 + 0xa28);
    AcquireSRWLockExclusive(pRVar8);
    *(int *)(lVar2 + 0xa20) = *(int *)(lVar2 + 0xa20) + 1;
    FUN_148e1e636(lVar2);
  }
  ReleaseSRWLockExclusive(pRVar8);
  if (bVar7 != 0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar6 = &PTR_FUN_14b9c7210;
    local_48 = "SetVisible";
    local_40 = 10;
    local_3c = 0;
    uVar4 = FUN_14001a6c0(&local_48,1);
    FUN_14039176c(puVar6,uVar3,uVar4,1);
    *puVar6 = &PTR_FUN_14b9c7210;
    *(undefined1 *)(puVar6 + 7) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
    FUN_140391314(param_1,puVar6);
    FUN_140de1078(param_1,&DAT_14cbe2920,0,0);
  }
LAB_14430042a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443005b8 FUN_1443005b8 body=663 status=ok
// SIG undefined FUN_1443005b8(void)

void FUN_1443005b8(longlong param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  lVar4 = DAT_14cbe2958;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_2;
  plVar7 = (longlong *)FUN_148ec9e18();
  lVar2 = *plVar7;
  SRWLock = (PSRWLOCK)(lVar2 + 0xa28);
  if (lVar1 == lVar4) {
    AcquireSRWLockShared(SRWLock);
    if (*(char *)(lVar2 + 0x9c0) == '\x01') {
      puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9d2020;
      local_58 = "SetFirmwareTransferOutputAsItem";
      local_50 = 0x1f;
      local_4c = 0;
      uVar5 = FUN_14001a6c0(&local_58,1);
      FUN_14039176c(puVar8,uVar3,uVar5,1);
      *puVar8 = &PTR_FUN_14b9d2020;
      FUN_140391314(param_1,puVar8);
      puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9c7210;
      local_58 = "SetVisible";
      local_50 = 10;
      local_4c = 0;
      uVar5 = FUN_14001a6c0(&local_58,1);
      FUN_14039176c(puVar8,uVar3,uVar5,1);
      *puVar8 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
      FUN_140391314(param_1,puVar8);
      puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9c7210;
      local_58 = "SetVisible";
      local_50 = 10;
      local_4c = 0;
      uVar5 = FUN_14001a6c0(&local_58,1);
      FUN_14039176c(puVar8,uVar3,uVar5,1);
      *puVar8 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 1;
      FUN_140391314(param_1,puVar8);
      puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *puVar8 = &PTR_FUN_14b9d20a0;
      local_58 = "ExecuteTransfer";
      local_50 = 0xf;
      local_4c = 0;
      uVar5 = FUN_14001a6c0(&local_58,1);
      FUN_14039176c(puVar8,uVar3,uVar5,1);
      *puVar8 = &PTR_FUN_14b9d20a0;
      FUN_140391314(param_1,puVar8);
      FUN_140de1078(param_1,&DAT_14cbe2940,0,0);
    }
    ReleaseSRWLockShared(SRWLock);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  AcquireSRWLockExclusive(SRWLock);
  *(int *)(lVar2 + 0xa20) = *(int *)(lVar2 + 0xa20) + 1;
  if (*(int *)(lVar2 + 0x9f8) == 0) {
    if (*(int *)(lVar2 + 0x9fc) != 0) goto LAB_14430082a;
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(lVar2 + 0x9fc) + 1;
  }
  *(undefined4 *)(lVar2 + 0x9f8) = 0;
  *(int *)(lVar2 + 0x9fc) = iVar6;
LAB_14430082a:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014430084e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144300862 FUN_144300862 body=552 status=ok
// SIG undefined FUN_144300862(void)

/* WARNING: Removing unreachable block (ram,0x000144300984) */
/* WARNING: Removing unreachable block (ram,0x000144300a2f) */
/* WARNING: Removing unreachable block (ram,0x000144300993) */
/* WARNING: Removing unreachable block (ram,0x000144300a3e) */

void FUN_144300862(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x2b0);
  iVar2 = *(int *)(param_1 + 700);
  FUN_145a5bc9c(*(undefined8 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b8));
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 700) != 0)) {
    FUN_148e23c9e(plVar1,0);
  }
  if ((((*(int *)(param_1 + 0x67c) != -1) || (*(int *)(param_1 + 0x680) != 0)) ||
      ((*(byte *)(param_1 + 0x4c7) & 0x20) != 0)) && ((*(byte *)(param_1 + 0x4c5) & 4) == 0)) {
    FUN_146637162(&local_40,&DAT_14cbe1270,&DAT_14cbe1380);
    iVar2 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 700) < iVar2 + 1U) {
      FUN_146638242(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    lVar5 = (longlong)iVar2 * 0x20;
    *(undefined8 *)(lVar3 + lVar5) = 0;
    *(undefined8 *)(lVar3 + lVar5) = local_40;
    *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_38;
    *(undefined4 *)(lVar3 + 0xc + lVar5) = local_38._4_4_;
    *(undefined8 *)(lVar3 + 0x10 + lVar5) = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar5) = local_30;
    *(undefined4 *)(lVar3 + 0x18 + lVar5) = (undefined4)local_28;
    *(undefined4 *)(lVar3 + 0x1c + lVar5) = local_28._4_4_;
    local_28 = 0;
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
  }
  FUN_146637162(&local_40,&DAT_14cbe12b0,&DAT_14cbe1420);
  iVar2 = *(int *)(param_1 + 0x2b8);
  *(uint *)(param_1 + 0x2b8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 700) < iVar2 + 1U) {
    FUN_146638242(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar5 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = local_40;
  *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_38;
  *(undefined4 *)(lVar3 + 0xc + lVar5) = local_38._4_4_;
  *(undefined8 *)(lVar3 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar5) = local_30;
  *(undefined4 *)(lVar3 + 0x18 + lVar5) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0x1c + lVar5) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  puVar4 = *(ushort **)(param_1 + 0x80);
  if (puVar4 != (ushort *)0x0) {
    *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144300b48 FUN_144300b48 body=1600 status=ok
// SIG undefined FUN_144300b48(void)

void FUN_144300b48(longlong param_1)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  void *_Src;
  undefined8 uVar5;
  ushort *puVar6;
  wchar_t *_Str1;
  wchar_t *pwVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong *plVar13;
  wchar_t **ppwVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  byte bVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  int *piVar23;
  bool bVar24;
  undefined1 auStack_a8 [32];
  wchar_t **local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  PSRWLOCK local_60;
  wchar_t *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x650) != '\x01')) goto LAB_144300b7d;
  if (*(char *)(lVar4 + 0x678) == '\0') {
    plVar13 = (longlong *)FUN_1418fe2e4(param_1);
    lVar16 = *plVar13;
    AcquireSRWLockShared((PSRWLOCK)(lVar16 + 0x130));
    ReleaseSRWLockShared((PSRWLOCK)(lVar16 + 0x130));
    if (*(longlong *)(lVar16 + 0x50) != 0) {
      FUN_1400021e4(*(longlong *)(lVar16 + 0x50) + 0x3c,&local_58);
      iVar9 = local_50;
      _Str1 = local_58;
      uVar10 = local_50 - 1;
      if (local_50 == 0) {
        uVar10 = 0;
      }
      if (0 < (int)uVar10) {
        uVar19 = 0;
        do {
          local_58[uVar19] =
               (ushort)((ushort)local_58[uVar19] - 0x41 < 0x1a) * 0x20 + local_58[uVar19];
          uVar19 = uVar19 + 1;
        } while (uVar10 != uVar19);
      }
      FUN_1400b22c2(&local_58,"weapon");
      pwVar7 = local_58;
      if (iVar9 == local_50) {
        bVar24 = true;
        if (1 < iVar9) {
          iVar9 = wcscmp(_Str1,local_58);
          bVar24 = iVar9 == 0;
        }
      }
      else {
        bVar24 = local_50 + iVar9 == 1;
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar7);
      }
      if (_Str1 != (wchar_t *)0x0) {
        FUN_1400020a8(_Str1);
      }
      if (bVar24) {
        local_80 = lVar16;
        local_70 = param_1;
        plVar13 = (longlong *)FUN_148ed0fd8(param_1);
        lVar16 = *plVar13;
        local_60 = (PSRWLOCK)(lVar16 + 0x1478);
        AcquireSRWLockShared(local_60);
        local_58 = L"equip_slot_dropdown";
        local_50 = 0x13;
        local_4c = local_4c & 0xffffff00;
        uVar10 = FUN_14001a6c0(&local_58,1);
        *(ulonglong *)(lVar4 + 0x668) = (ulonglong)uVar10;
        local_78 = lVar4 + 0x6c0;
        iVar9 = *(int *)(lVar4 + 0x6cc);
        FUN_140d47191(*(undefined8 *)(lVar4 + 0x6c0),*(undefined4 *)(lVar4 + 0x6c8));
        *(undefined4 *)(lVar4 + 0x6c8) = 0;
        if ((iVar9 < 4) && (*(int *)(lVar4 + 0x6cc) != 4)) {
          FUN_148e6b6d0(local_78,4);
        }
        iVar9 = *(int *)(lVar16 + 0x1450);
        if (0 < (longlong)iVar9) {
          local_80 = local_80 + 0x50;
          uVar19 = 0;
          do {
            lVar15 = lVar16 + uVar19 * 0x68;
            FUN_1400b22c2(&local_58,"weapon");
            iVar11 = *(int *)(lVar16 + 0x38 + uVar19 * 0x68);
            if (iVar11 == local_50) {
              bVar24 = true;
              if (1 < iVar11) {
                lVar21 = 0;
                while( true ) {
                  uVar2 = *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar21);
                  uVar10 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)local_58 + lVar21);
                  uVar22 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar22 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_144300dbc;
                    }
                    iVar11 = uVar10 - uVar22;
                    goto LAB_144300dfe;
                  }
                  if (uVar2 == 0) break;
LAB_144300dbc:
                  lVar21 = lVar21 + 2;
                }
                iVar11 = 0;
LAB_144300dfe:
                bVar24 = iVar11 == 0;
              }
            }
            else {
              bVar24 = local_50 + iVar11 == 1;
            }
            if (local_58 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (bVar24) {
              ppwVar14 = (wchar_t **)FUN_1410d1d12(local_78);
              FUN_140002266(&local_58,L"equip%d",uVar19 & 0xffffffff);
              local_88 = ppwVar14;
              if (ppwVar14 == &local_58) {
                if (local_58 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*ppwVar14 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                *ppwVar14 = local_58;
                local_58 = (wchar_t *)0x0;
                *(int *)(ppwVar14 + 1) = local_50;
                *(uint *)((longlong)ppwVar14 + 0xc) = local_4c;
              }
              FUN_1402980a2(local_88 + 4,*ppwVar14);
              bVar1 = *(byte *)(ppwVar14 + 0x11);
              *(byte *)(ppwVar14 + 0x11) = bVar1 | 4;
              bVar18 = (*(int *)(lVar15 + 0x58) != -1) << 6;
              *(byte *)(ppwVar14 + 0x11) = bVar1 & 0xbf | 4 | bVar18;
              *(byte *)(ppwVar14 + 0x11) = bVar1 & 0xa6 | 4 | bVar18 | *(char *)(lVar15 + 0x50) << 4
              ;
              plVar13 = (longlong *)FUN_148ed0f5e(local_70);
              lVar21 = *plVar13;
              AcquireSRWLockShared((PSRWLOCK)(lVar21 + 0x1c0));
              if ((longlong)*(int *)(lVar21 + 0x88) != 0) {
                piVar23 = (int *)(*(longlong *)(lVar21 + 0x80) + 0x1e0);
                lVar20 = 0;
                do {
                  if (piVar23[-0x76] == *(int *)(lVar15 + 0x58)) {
                    lVar20 = *(longlong *)(lVar21 + 0x80) - lVar20;
                    if (lVar20 != 0) {
                      local_68 = lVar20;
                      cVar8 = FUN_140991644(lVar20 + 0x218,local_80);
                      *(byte *)(ppwVar14 + 0x11) = *(byte *)(ppwVar14 + 0x11) & 0xf7 | cVar8 << 3;
                      lVar15 = FUN_148e1aa3e(lVar21 + 0x50,local_80);
                      if (lVar15 != 0) {
                        *(byte *)(ppwVar14 + 0x11) =
                             *(byte *)(ppwVar14 + 0x11) | *(char *)(lVar15 + 0x400) << 3;
                      }
                      local_88 = local_88 + 6;
                      if ((wchar_t **)(local_68 + 0x1d8) != local_88) {
                        iVar11 = *piVar23;
                        _Src = *(void **)(piVar23 + -2);
                        *(int *)(ppwVar14 + 7) = iVar11;
                        if (iVar11 == 0 && *(int *)((longlong)ppwVar14 + 0x3c) == 0) {
                          *(undefined4 *)((longlong)ppwVar14 + 0x3c) = 0;
                        }
                        else {
                          FUN_1446dd670(local_88,iVar11);
                          if (iVar11 != 0) {
                            memcpy(*local_88,_Src,(longlong)iVar11 * 2);
                          }
                        }
                      }
                      *(byte *)(ppwVar14 + 0x11) = *(byte *)(ppwVar14 + 0x11) & 0xfd;
                    }
                    break;
                  }
                  piVar23 = piVar23 + 0x10c;
                  lVar20 = lVar20 + -0x430;
                } while ((longlong)*(int *)(lVar21 + 0x88) * -0x430 - lVar20 != 0);
              }
              ReleaseSRWLockShared((PSRWLOCK)(lVar21 + 0x1c0));
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != (longlong)iVar9);
        }
        ReleaseSRWLockShared(local_60);
        *(undefined1 *)(lVar4 + 0x678) = 1;
        puVar6 = *(ushort **)(lVar4 + 0x80);
        param_1 = local_70;
        if (puVar6 != (ushort *)0x0) {
          *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
        }
        goto LAB_144301175;
      }
    }
    plVar13 = (longlong *)FUN_1418fe2e4(param_1);
    lVar16 = *plVar13;
    SRWLock = (PSRWLOCK)(lVar16 + 0x130);
    AcquireSRWLockShared(SRWLock);
    plVar13 = (longlong *)FUN_148ed0f5e(param_1);
    lVar15 = *plVar13;
    SRWLock_00 = (PSRWLOCK)(lVar15 + 0x1c0);
    AcquireSRWLockShared(SRWLock_00);
    lVar16 = FUN_148e1aa3e(lVar15 + 0x50,lVar16 + 0x50);
    if (lVar16 != 0) {
      puVar17 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *puVar17 = &PTR_FUN_14b9c6e90;
      local_58 = L"EquipItem";
      local_50 = 9;
      local_4c = local_4c & 0xffffff00;
      uVar12 = FUN_14001a6c0(&local_58,1);
      FUN_14039176c(puVar17,uVar5,uVar12,1);
      *puVar17 = &PTR_FUN_14b9c6e90;
      *(undefined1 *)(puVar17 + 7) = 0xff;
      *(undefined4 *)((longlong)puVar17 + 0x3c) = *(undefined4 *)(lVar16 + 8);
      puVar17[8] = 0;
      FUN_140391314(param_1,puVar17);
      FUN_1457d7894(param_1,&DAT_14cbe2b48);
      FUN_148ee4356(&local_58,lVar16 + 0x50);
      FUN_140de1078(param_1,&local_58,0,0);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    ReleaseSRWLockShared(SRWLock_00);
    ReleaseSRWLockShared(SRWLock);
  }
LAB_144301175:
  FUN_148ed052a(param_1,*(undefined1 *)(lVar4 + 0x678));
LAB_144300b7d:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430118a FUN_14430118a body=103 status=ok
// SIG undefined FUN_14430118a(void)

void FUN_14430118a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x661) != '\0') {
      return;
    }
    iVar1 = *(int *)(lVar2 + 0xf0);
    if (1 < iVar1) {
      if (*(int *)(lVar2 + 0x654) != (iVar1 + *(int *)(lVar2 + 0x654) + -1) % iVar1) {
        FUN_148ed091a(param_1);
      }
    }
  }
  FUN_140de1078(param_1,&DAT_14cbe2aa8,0,0);
  return;
}



// FUNCTION 1443011f2 FUN_1443011f2 body=101 status=ok
// SIG undefined FUN_1443011f2(void)

void FUN_1443011f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x661) != '\0') {
      return;
    }
    if (1 < *(int *)(lVar1 + 0xf0)) {
      if (*(int *)(lVar1 + 0x654) != (*(int *)(lVar1 + 0x654) + 1) % *(int *)(lVar1 + 0xf0)) {
        FUN_148ed091a(param_1);
      }
    }
  }
  FUN_140de1078(param_1,&DAT_14cbe2a98,0,0);
  return;
}



// FUNCTION 14430125e FUN_14430125e body=1448 status=ok
// SIG undefined FUN_14430125e(void)

void FUN_14430125e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ushort *puVar3;
  void *_Src;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  PSRWLOCK SRWLock;
  bool bVar14;
  undefined1 auStack_ed8 [32];
  PSRWLOCK local_eb8;
  undefined1 local_eb0 [1584];
  undefined1 local_880 [88];
  undefined1 local_828 [32];
  undefined1 local_808 [72];
  int local_7c0;
  longlong *local_7b8;
  undefined1 auStack_750 [216];
  undefined1 local_678 [44];
  int local_64c;
  int local_648;
  undefined1 local_5c0 [104];
  undefined1 local_558 [472];
  undefined1 local_380 [224];
  char local_2a0;
  int local_29c;
  undefined1 local_210 [456];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_ed8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    if ((local_48 ^ (ulonglong)auStack_ed8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar7 = (longlong *)FUN_1418fe2e4();
  lVar11 = *plVar7;
  AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x130));
  if (*(int *)(lVar2 + 0x664) == *(int *)(lVar11 + 0x128)) goto LAB_1443012b8;
  *(int *)(lVar2 + 0x664) = *(int *)(lVar11 + 0x128);
  if (*(int *)(lVar2 + 0x130) != *(int *)(lVar11 + 0x48)) {
    FUN_14623dbb4(param_1);
  }
  FUN_1457e3a18(lVar2 + 0xe8,lVar11);
  puVar3 = *(ushort **)(lVar2 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
  uVar1 = *(uint *)(lVar2 + 0x654);
  if ((ulonglong)uVar1 == 0xffffffff) {
    lVar12 = *(longlong *)(lVar2 + 0xe8);
    *(int *)(lVar2 + 0xf8) = *(int *)(lVar2 + 0xf8) + 2;
    if ((longlong)*(int *)(lVar2 + 0xf0) != 0) {
      lVar13 = (longlong)*(int *)(lVar2 + 0xf0) << 8;
      iVar9 = 0;
      do {
        *(int *)(lVar2 + 0x654) = iVar9;
        if (*(char *)(lVar12 + 0x30) != '\0') goto LAB_144301385;
        lVar12 = lVar12 + 0x100;
        iVar9 = iVar9 + 1;
        lVar13 = lVar13 + -0x100;
      } while (lVar13 != 0);
    }
  }
  else if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0xf0))) {
    *(int *)(lVar2 + 0xf8) = *(int *)(lVar2 + 0xf8) + 1;
    lVar12 = (ulonglong)uVar1 * 0x100 + *(longlong *)(lVar2 + 0xe8);
LAB_144301385:
    FUN_14596e30e(lVar2 + 0x210,lVar12);
  }
  if (*(char *)(lVar2 + 0x650) == '\x02') {
    lVar12 = *(longlong *)(param_1 + 0x288);
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x65c);
      uVar10 = (ulonglong)uVar1;
      if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar12 + 0x300))) &&
         (lVar13 = *(longlong *)(lVar12 + 0x2f8), *(char *)(lVar13 + 0x50 + uVar10 * 0x208) == '\0')
         ) goto LAB_1443015b5;
    }
LAB_144301455:
    bVar14 = false;
  }
  else {
    if (*(char *)(lVar2 + 0x650) != '\x01') goto LAB_144301455;
    uVar1 = *(uint *)(lVar2 + 0x65c);
    lVar12 = *(longlong *)(param_1 + 0x288);
    if (((int)uVar1 < 0 || lVar12 == 0) ||
       (uVar10 = (ulonglong)uVar1, *(int *)(lVar12 + 0x2e8) <= (int)uVar1)) goto LAB_144301455;
    lVar13 = *(longlong *)(lVar12 + 0x2e0);
LAB_1443015b5:
    bVar14 = (ulonglong)*(uint *)(lVar13 + 0x48 + uVar10 * 0x208) <= *(ulonglong *)(lVar12 + 0x2a8);
  }
  *(bool *)(lVar2 + 0x660) = bVar14;
  lVar12 = *(longlong *)(param_1 + 0x288);
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0x650) != '\0')) {
    iVar9 = *(int *)(lVar12 + 0x65c);
    lVar13 = 0x2e0;
    if (*(char *)(lVar12 + 0x650) == '\x02') {
      lVar13 = 0x2f8;
    }
    if ((-1 < (longlong)iVar9) && (iVar9 < *(int *)(lVar12 + 8 + lVar13))) {
      plVar7 = (longlong *)FUN_1418fe2e4(param_1);
      lVar4 = *plVar7;
      local_eb8 = (PSRWLOCK)(lVar4 + 0x130);
      AcquireSRWLockShared(local_eb8);
      FUN_148e23fda(local_880,(longlong)iVar9 * 0x208 + *(longlong *)(lVar12 + lVar13));
      FUN_1407b25f0(auStack_750,lVar4 + 0x50);
      if (*(char *)(lVar12 + 0x650) == '\x02') {
        FUN_1456e051c(local_678);
        plVar7 = local_7b8;
        if (*(code **)(*local_7b8 + 0x50) != FUN_144828418) {
          plVar7 = (longlong *)(**(code **)(*local_7b8 + 0x50))();
        }
        SRWLock = local_eb8;
        FUN_1447a1fc0(plVar7);
        pcVar5 = *(code **)(*local_7b8 + 0x28);
        if (pcVar5 == FUN_14482841c) {
          plVar7 = local_7b8 + 3;
          if (local_7b8[5] != 0) {
            plVar7 = (longlong *)(local_7b8[5] + 8);
          }
        }
        else if (pcVar5 == (code *)&LAB_14010c34c) {
          plVar7 = local_7b8 + 2;
        }
        else {
          plVar7 = (longlong *)(*pcVar5)(local_7b8);
        }
        FUN_1449a0272(local_5c0,plVar7);
        FUN_1449a0272(local_558,local_808);
        if (local_648 == 0 || local_7c0 != local_64c) {
          local_64c = local_7c0;
          local_648 = local_648 + 1;
        }
        FUN_1449a0272(local_210,local_828);
        if (local_29c == 0 || local_2a0 == '\0') {
          local_2a0 = '\x01';
          local_29c = local_29c + 1;
        }
        FUN_148e238b0(local_380,local_828);
        FUN_148ed0650(local_eb0,local_678);
        FUN_145abb798(local_678);
      }
      else {
        FUN_144301c32(local_eb0,local_880);
        SRWLock = local_eb8;
      }
      FUN_1401e0130(lVar12 + 1000);
      FUN_141352d9a(lVar12 + 1000,local_eb0);
      *(byte *)(lVar12 + 0x487) = *(byte *)(lVar12 + 0x487) & 0xfd;
      *(byte *)(lVar12 + 0x488) = *(byte *)(lVar12 + 0x488) & 0xfe;
      FUN_1413511f6(lVar12 + 0x310,local_828);
      FUN_145abb798(local_eb0);
      FUN_148c56e0e(local_880);
      ReleaseSRWLockShared(SRWLock);
    }
  }
  puVar8 = (undefined8 *)(lVar2 + 0x490);
  if (puVar8 != (undefined8 *)(lVar11 + 0x30)) {
    iVar9 = *(int *)(lVar11 + 0x38);
    _Src = *(void **)(lVar11 + 0x30);
    *(int *)(lVar2 + 0x498) = iVar9;
    if (iVar9 == 0 && *(int *)(lVar2 + 0x49c) == 0) {
      *(undefined4 *)(lVar2 + 0x49c) = 0;
    }
    else {
      FUN_1446dd670(puVar8,iVar9);
      if (iVar9 != 0) {
        memcpy((void *)*puVar8,_Src,(longlong)iVar9 * 2);
      }
    }
  }
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1443015d3:
    lVar11 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar11 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x34) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1443015d3;
      lVar11 = *plVar7;
    }
  }
  cVar6 = FUN_140426394(lVar11 + 0x3c0,&DAT_14cbd9508);
  if ((cVar6 != '\0') && (*(int *)(lVar2 + 0x130) == 2)) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[1] = 0;
    puVar8[3] = 0;
    *puVar8 = &PTR_FUN_14b9d43b0;
    FUN_140391314(param_1,puVar8);
    FUN_14623dbb4(param_1);
  }
LAB_1443012b8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_ed8);
}



// FUNCTION 144301824 FUN_144301824 body=959 status=ok
// SIG undefined FUN_144301824(void)

void FUN_144301824(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  wchar_t *_Str;
  size_t sVar8;
  uint uVar9;
  undefined1 auStack_848 [32];
  undefined1 *local_828;
  undefined1 *local_820;
  undefined1 *local_818;
  char local_810;
  undefined1 local_808 [256];
  undefined1 local_708 [128];
  undefined1 *local_688;
  undefined1 *local_680;
  int local_678;
  undefined1 local_670 [1584];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_848;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (((((lVar2 != 0) && (*(char *)(lVar2 + 0x660) == '\x01')) &&
       (*(char *)(lVar2 + 0x241) == '\x01')) &&
      ((*(char *)(lVar2 + 0x661) == '\0' && (*(char *)(lVar2 + 0x663) == '\0')))) &&
     (*(char *)(lVar2 + 0x240) == '\x01')) {
    if (*(char *)(lVar2 + 0x650) == '\x02') {
      uVar9 = *(uint *)(lVar2 + 0x65c);
      if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar2 + 0x300))) {
        lVar3 = *(longlong *)(lVar2 + 0x2f8);
        FUN_144301c32(local_670,lVar3 + (ulonglong)uVar9 * 0x208);
        FUN_1401e0130(lVar2 + 1000);
        FUN_141352d9a(lVar2 + 1000,local_670);
        FUN_1413511f6(lVar2 + 0x310,lVar3 + (ulonglong)uVar9 * 0x208 + 0x58);
        *(undefined1 *)(lVar2 + 0x661) = 1;
        puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar1 = *(undefined4 *)(lVar2 + 0x65c);
        puVar6[1] = 0;
        *(undefined4 *)(puVar6 + 2) = 0;
        puVar6[3] = 0;
        *puVar6 = &PTR_FUN_14b9d27f0;
        FUN_1457e3dd4(puVar6 + 4,lVar2 + 0x248);
        *(undefined4 *)(puVar6 + 7) = uVar1;
        FUN_140391314(param_1,puVar6);
        uVar7 = FUN_14001cc68(0x40,0x10);
        FUN_148e83686(uVar7,*(undefined8 *)(param_1 + 0x30),0,0);
        FUN_140391314(param_1,uVar7);
        if (((*(int *)(param_1 + 0x34) != 0) &&
            (((uVar9 = *(uint *)(param_1 + 0x30), -1 < (int)uVar9 && ((int)uVar9 < DAT_14c9647dc))
             && (puVar6 = (undefined8 *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                puVar6 != (undefined8 *)0x0)))) &&
           ((*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x34) &&
            ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
            uVar7 = *puVar6;
          }
          else {
            uVar7 = 0;
          }
          local_828 = local_808;
          local_810 = '\0';
          local_818 = local_708;
          local_820 = local_828;
          _Str = (wchar_t *)FUN_140c7f682(param_1,L"OpenCelebrationWindow",&local_828);
          local_688 = (undefined1 *)0x0;
          if (_Str == (wchar_t *)0x0) {
            local_680 = (undefined1 *)0x0;
            local_678 = 0;
          }
          else {
            sVar8 = wcslen(_Str);
            local_678 = FUN_14475aa65(0,_Str,sVar8 & 0xffffffff);
            uVar9 = local_678 + 1;
            local_680 = (undefined1 *)0x0;
            if (0x80 < uVar9) {
              FUN_1446efa72(&local_688,0,uVar9,1);
              local_680 = local_688;
            }
            if (local_680 == (undefined1 *)0x0) {
              local_680 = local_708;
            }
            FUN_14475a98a(local_680,uVar9,_Str,(int)sVar8 + 1);
          }
          FUN_1412a486e(uVar7,local_680);
          if (local_688 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_810 == '\x01') {
            FUN_1400020a8(local_828);
          }
        }
        FUN_140de1078(param_1,&DAT_14cbe2a68,0,0);
        FUN_145abb798(local_670);
      }
    }
    else if (*(char *)(lVar2 + 0x650) == '\x01') {
      cVar4 = FUN_148ed1052(param_1);
      if (cVar4 != '\0') {
        FUN_140de1078(param_1,&DAT_14cbe15d8,0,0);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_848);
      }
      iVar5 = FUN_148ed10f8(param_1);
      if ((iVar5 == 1) && (*(char *)(lVar2 + 0x662) == '\x01')) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_848);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_848);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_848) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144301c32 FUN_144301c32 body=1076 status=ok
// SIG undefined FUN_144301c32(void)

undefined8 FUN_144301c32(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_6c8 [40];
  undefined8 local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  longlong *local_688;
  ulonglong uStack_680;
  undefined1 local_678 [44];
  int local_64c;
  int local_648;
  undefined1 local_5c0 [104];
  undefined1 local_558 [472];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  int local_2a8;
  char local_2a0;
  int local_29c;
  undefined1 local_210 [152];
  undefined1 local_178 [304];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  FUN_1456e051c(local_678);
  plVar7 = *(longlong **)(param_2 + 200);
  if (*(code **)(*plVar7 + 0x50) != FUN_144828418) {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))();
  }
  FUN_1447a1fc0(plVar7);
  plVar7 = *(longlong **)(param_2 + 200);
  pcVar1 = *(code **)(*plVar7 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar8 = plVar7 + 3;
    if (plVar7[5] != 0) {
      plVar8 = (longlong *)(plVar7[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar8 = plVar7 + 2;
  }
  else {
    plVar8 = (longlong *)(*pcVar1)(plVar7);
  }
  FUN_1449a0272(local_5c0,plVar8);
  FUN_1449a0272(local_558,param_2 + 0x78);
  if (local_648 == 0 || *(int *)(param_2 + 0xc0) != local_64c) {
    local_648 = local_648 + 1;
    local_64c = *(int *)(param_2 + 0xc0);
  }
  FUN_1449a0272(local_210,param_2 + 0x58);
  if (local_29c == 0 || local_2a0 == '\0') {
    local_2a0 = '\x01';
    local_29c = local_29c + 1;
  }
  FUN_148e238b0(&local_380,param_2 + 0x58);
  local_688 = (longlong *)CONCAT71(local_688._1_7_,5);
  lVar5 = FUN_148ed6bca(local_178,5);
  *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  lVar5 = FUN_146208712(lVar5);
  plVar7 = *(longlong **)(param_2 + 0xe8);
  if (*(code **)(*plVar7 + 0x50) != FUN_144828418) {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))();
  }
  FUN_1447a1fc0(plVar7);
  plVar7 = *(longlong **)(param_2 + 0xe8);
  pcVar1 = *(code **)(*plVar7 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar8 = plVar7 + 3;
    if (plVar7[5] != 0) {
      plVar8 = (longlong *)(plVar7[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar8 = plVar7 + 2;
  }
  else {
    plVar8 = (longlong *)(*pcVar1)(plVar7);
  }
  FUN_1449a0272(lVar5 + 0x38,plVar8);
  local_688 = (longlong *)CONCAT71(local_688._1_7_,9);
  lVar6 = FUN_148ed6bca(local_178,9);
  *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
  lVar6 = FUN_146208712(lVar6);
  plVar7 = *(longlong **)(param_2 + 0xd8);
  if (*(code **)(*plVar7 + 0x50) != FUN_144828418) {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))();
  }
  FUN_1447a1fc0(plVar7);
  pcVar1 = *(code **)(**(longlong **)(param_2 + 0xd8) + 0x28);
  if ((pcVar1 != FUN_14482841c) && (pcVar1 != (code *)&LAB_14010c34c)) {
    (*pcVar1)(*(longlong **)(param_2 + 0xd8));
  }
  FUN_1449a0272(lVar6 + 8);
  if (*(longlong *)(param_2 + 0x130) != 0) {
    if ((longlong)*(int *)(param_2 + 0x148) != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x140) + lVar6) == 0) goto LAB_144301fd9;
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(param_2 + 0x148) * 8 != lVar6);
    }
    local_6a0 = param_1;
    FUN_140baca80(local_678,param_2 + 0x130);
    local_688 = (longlong *)0x0;
    uStack_680 = 0;
    cVar4 = FUN_140bb182a(param_2 + 0x130,&local_688,0);
    if (cVar4 != '\0') {
      if ((longlong)(int)uStack_680 != 0) {
        plVar7 = local_688 + (longlong)(int)uStack_680 * 3;
        plVar8 = local_688;
        do {
          if (((*plVar8 != 0) && (*(char *)(*plVar8 + 0x18) == '\x05')) &&
             (lVar6 = plVar8[2], (longlong)(int)lVar6 != 0)) {
            lVar2 = plVar8[1];
            lVar9 = 0;
            do {
              lVar3 = *(longlong *)(lVar2 + lVar9);
              if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x98) != 0)) {
                *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                FUN_140390f7a(*(longlong *)(lVar2 + lVar9) + 0x90,lVar5 + 0x20);
              }
              lVar9 = lVar9 + 0x60;
            } while ((longlong)(int)lVar6 * 0x60 != lVar9);
          }
          plVar8 = plVar8 + 3;
        } while (plVar8 != plVar7);
      }
    }
    FUN_1400b22c2(&local_698,&DAT_149e02088);
    local_2a8 = local_2a8 + 1;
    if (CONCAT44(uStack_37c,local_380) != 0) {
      FUN_1400020a8();
    }
    local_380 = local_698;
    uStack_37c = uStack_694;
    uStack_378 = uStack_690;
    uStack_374 = uStack_68c;
    FUN_140bb299f(local_688,uStack_680 & 0xffffffff);
    param_1 = local_6a0;
    if (local_688 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144301fd9:
  FUN_148ed0650(param_1,local_678);
  FUN_145abb798(local_678);
  if ((local_48 ^ (ulonglong)auStack_6c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144302068 FUN_144302068 body=956 status=ok
// SIG undefined FUN_144302068(void)

void FUN_144302068(longlong param_1,uint param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined3 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = param_4;
  plVar6 = (longlong *)FUN_140f9a2c8();
  lVar3 = *plVar6;
  SRWLock = (PSRWLOCK)(lVar3 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  FUN_1400021e4(lVar3 + 0x54,&local_58);
  if (local_50 == *(int *)(param_3 + 1)) {
    if ((1 < local_50) && (iVar5 = wcscmp(local_58,(wchar_t *)*param_3), iVar5 != 0)) {
LAB_1443020ea:
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,4,0x10);
      local_60 = 4;
      plVar6 = *(longlong **)(param_1 + 0x10);
      if (plVar6 == (longlong *)0x0) {
LAB_14430212c:
        *local_68 = &PTR_LAB_14b40e8d0;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_68[2] = lVar8;
        *local_68 = &PTR_FUN_14b9d42a0;
        local_68[3] = 0;
        local_68[4] = 0;
        *(uint *)(local_68 + 5) = param_2;
        local_68[6] = param_1;
        *(undefined1 *)(local_68 + 7) = 1;
        *(undefined4 *)((longlong)local_68 + 0x39) = local_40;
        *(uint *)((longlong)local_68 + 0x3c) = CONCAT31(uStack_3c,local_40._3_1_);
      }
      else {
        iVar5 = (int)plVar6[1];
        do {
          if (iVar5 == 0) goto LAB_14430212c;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar10);
        uVar7 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *local_68 = &PTR_LAB_14b40e8d0;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_68[2] = lVar8;
        *local_68 = &PTR_FUN_14b9d42a0;
        local_68[3] = uVar7;
        local_68[4] = plVar6;
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        *(uint *)(local_68 + 5) = param_2;
        local_68[6] = param_1;
        *(undefined1 *)(local_68 + 7) = 1;
        *(undefined4 *)((longlong)local_68 + 0x39) = local_40;
        *(uint *)((longlong)local_68 + 0x3c) = CONCAT31(uStack_3c,local_40._3_1_);
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
      uVar7 = FUN_14001cc68(0x68,0x10);
      if (*(int *)(param_3 + 1) == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)*param_3;
      }
      FUN_1446f470e(&local_40,puVar9,1);
      local_78 = &local_68;
      FUN_1457d882c(uVar7,param_1 + 0x30,param_1 + 0x18,&local_40);
      FUN_140391314(param_1,uVar7);
      if (local_60 != 0) {
        if (local_68 == (undefined8 *)0x0) goto LAB_1443023ba;
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        local_60 = 0;
      }
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1443023ba;
    }
  }
  else if (*(int *)(param_3 + 1) + local_50 != 1) goto LAB_1443020ea;
  FUN_148ed1a3a(param_1,&local_68,param_2);
  uVar7 = FUN_14001cc68(0x50,0x10);
  local_78 = (undefined8 **)CONCAT71(local_78._1_7_,1);
  FUN_148ec91ce(uVar7,param_1 + 0x30,&local_48,&local_68);
  FUN_140391314(param_1,uVar7);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (((lVar3 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar3 + 0x300))) {
    FUN_148ec967a(param_1,*(longlong *)(lVar3 + 0x2f8) + (ulonglong)param_2 * 0x208 + 0x28);
  }
LAB_1443023ba:
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144302426 FUN_144302426 body=1447 status=ok
// SIG undefined FUN_144302426(void)

void FUN_144302426(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  PSRWLOCK SRWLock;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined2 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined8 *local_220;
  undefined1 *local_218;
  code *local_210;
  undefined4 local_204;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  wchar_t *local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  char local_118;
  undefined8 local_108;
  undefined8 local_100;
  longlong lStack_f8;
  undefined8 local_f0;
  undefined8 local_e8 [12];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (*(int *)(param_1 + 0x34) == 0) goto LAB_144302784;
  puVar1 = (uint *)(param_1 + 0x30);
  uVar2 = *puVar1;
  if (((((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) ||
      (lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar12 == 0)) ||
     ((*(int *)(lVar12 + 0x10) != *(int *)(param_1 + 0x34) ||
      ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)))) goto LAB_144302784;
  local_204 = param_2;
  plVar7 = (longlong *)FUN_140f9a2c8(param_1);
  lVar12 = *plVar7;
  SRWLock = (PSRWLOCK)(lVar12 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  FUN_1400021e4(lVar12 + 0x54,&local_1e8);
  iVar3 = *(int *)(param_1 + 0x2f8);
  if (local_1e0 == iVar3) {
    if ((local_1e0 < 2) || (iVar5 = wcscmp(local_1e8,*(wchar_t **)(param_1 + 0x2f0)), iVar5 == 0))
    goto LAB_144302512;
LAB_144302581:
    puVar9 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    if (iVar3 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x2f0);
    }
    FUN_1446f470e(&local_108,puVar10,1);
    *puVar9 = &PTR_FUN_14b9cd3a0;
    local_1d8 = (code *)0x14b9cd3b8;
    uStack_1d0 = 0xd;
    uVar8 = 0;
    uStack_1cc = uStack_1cc & 0xffffff00;
    uVar6 = FUN_14001a6c0(&local_1d8,1);
    FUN_14039176c(puVar9,*(undefined8 *)(param_1 + 0x30),uVar6,1);
    *puVar9 = &PTR_FUN_14b9cd3a0;
    puVar9[7] = DAT_14cbe0120;
    puVar9[8] = *(undefined8 *)(param_1 + 0x18);
    puVar9[9] = local_108;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    FUN_140391314(param_1,puVar9);
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar2 = *puVar1;
      uVar8 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar9 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar9 == (undefined8 *)0x0) ||
           ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) {
          uVar8 = 0;
        }
        else {
          uVar8 = *puVar9;
        }
      }
    }
    lVar12 = FUN_1407f492e(uVar8);
    if (lVar12 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_1d8 = FUN_141030f22;
        local_210 = FUN_14081d0ea;
        local_218 = &LAB_1459f2e4c;
        local_228 = &LAB_148c39de3;
        local_230 = &LAB_1457a9eb2;
        local_238 = &DAT_149e063b2;
        local_240 = 0;
        local_248 = 0x10000004;
        local_250 = 0x10;
        local_258 = (undefined8 *)CONCAT44(local_258._4_4_,0x3de0);
        local_220 = &local_1d8;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        FUN_140a9b590(lVar12 + 0x3910,&local_200,1);
        if (local_1f8 == 0) {
          uVar8 = FUN_14037df6e();
          local_1f8 = FUN_14477b664(uVar8);
        }
        if (local_1f0 == 0) {
          if ((((local_1f8 != 0) && (local_200 != 0)) &&
              (plVar7 = *(longlong **)(local_1f8 + 0xb8), plVar7 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 != '\0')) {
            uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
            local_1f0 = FUN_144aff482(uVar8,&local_200);
            if (local_1f0 != 0) goto LAB_1443027ba;
          }
        }
        else {
LAB_1443027ba:
          local_100 = 0;
          lStack_f8 = 0;
          local_f0 = 0;
          puVar9 = &DAT_14c846480;
          puVar11 = local_e8;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          local_78 = 0;
          local_70 = 0;
          uStack_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_108 = *(undefined8 *)(param_1 + 0x348);
          lVar12 = local_1f0;
          if (local_1f8 == 0) {
            uVar8 = FUN_14037df6e();
            local_1f8 = FUN_14477b664(uVar8);
            lVar12 = local_1f0;
            if (((local_1f0 == 0) && (lVar12 = 0, local_1f8 != 0)) && (local_200 != 0)) {
              plVar7 = *(longlong **)(local_1f8 + 0xb8);
              if ((plVar7 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
                lVar12 = 0;
                local_1f0 = lVar12;
              }
              else {
                uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
                lVar12 = FUN_144aff482(uVar8,&local_200);
                local_1f0 = lVar12;
              }
            }
          }
          lStack_f8 = lVar12;
          FUN_148ed1a3a(param_1,&local_1d8,local_204);
          local_88 = (undefined4)local_1d8;
          uStack_84 = local_1d8._4_4_;
          uStack_80 = uStack_1d0;
          uStack_7c = uStack_1cc;
          uVar8 = FUN_14001cc68(0x110,0x10);
          FUN_145a14a00(&local_1d8,&local_108);
          local_118 = '\x01';
          local_258 = &local_1d8;
          FUN_141350326(uVar8,puVar1,*(undefined8 *)(param_1 + 0x348),1);
          FUN_140391314(param_1,uVar8);
          if (local_118 == '\x01') {
            FUN_145a1457c(&local_1d8);
          }
          FUN_145a1457c(&local_108);
        }
      }
    }
  }
  else {
    if (local_1e0 + iVar3 != 1) goto LAB_144302581;
LAB_144302512:
    FUN_148ed1a3a(param_1,&local_1d8,local_204);
    uVar8 = FUN_14001cc68(0x50,0x10);
    local_258 = (undefined8 *)CONCAT71(local_258._1_7_,1);
    FUN_148ec91ce(uVar8,puVar1,param_1 + 0x348,&local_1d8);
    FUN_140391314(param_1,uVar8);
    if (local_1d8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_1e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(SRWLock);
LAB_144302784:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443029d0 FUN_1443029d0 body=29 status=ok
// SIG undefined FUN_1443029d0(void)

undefined8 FUN_1443029d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443029ee FUN_1443029ee body=95 status=ok
// SIG undefined FUN_1443029ee(void)

ulonglong * FUN_1443029ee(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "RefreshDLCEntitlements";
  local_18 = 0x16;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144302a4e FUN_144302a4e body=29 status=ok
// SIG undefined FUN_144302a4e(void)

undefined8 FUN_144302a4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144302a6c FUN_144302a6c body=95 status=ok
// SIG undefined FUN_144302a6c(void)

ulonglong * FUN_144302a6c(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_PhotoMode_ClosePhotoMode";
  local_18 = 0x24;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144302acc FUN_144302acc body=29 status=ok
// SIG undefined FUN_144302acc(void)

undefined8 FUN_144302acc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144302aea FUN_144302aea body=95 status=ok
// SIG undefined FUN_144302aea(void)

ulonglong * FUN_144302aea(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_Skills_MenuActivate";
  local_18 = 0x1f;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144302b4a FUN_144302b4a body=29 status=ok
// SIG undefined FUN_144302b4a(void)

undefined8 FUN_144302b4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144302b68 FUN_144302b68 body=95 status=ok
// SIG undefined FUN_144302b68(void)

ulonglong * FUN_144302b68(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FOakUIEvent_Specializations_MenuActivate";
  local_18 = 0x28;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144302bc8 FUN_144302bc8 body=598 status=ok
// SIG undefined FUN_144302bc8(void)

undefined8 * FUN_144302bc8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  *param_1 = &PTR_FUN_14b9d1c00;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x56;
  puVar2 = (uint *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x5b);
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar5 = 0;
  }
  else {
    puVar9 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar14 = *puVar9;
    if (uVar14 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar13 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar13 == uVar15) goto LAB_144302d60;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar1 + (longlong)iVar5 * 0x28) != 0) {
        FUN_1400020a8();
        iVar4 = *(int *)(param_1 + 0x5b);
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar9 = (uint *)param_1[0x5a];
      if ((uint *)param_1[0x5a] == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar5 = (int)uVar15;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = puVar9[lVar12 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar12 == lVar10) goto LAB_144302d60;
        }
        uVar15 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar3 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_144302d60:
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (*(int *)((longlong)param_1 + 700) != 0) {
    FUN_140549ad6(plVar1,0);
  }
  param_1[0x5c] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2dc)) {
    *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144302e1e FUN_144302e1e body=68 status=ok
// SIG undefined FUN_144302e1e(void)

void FUN_144302e1e(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_1440872ec(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 144302e62 FUN_144302e62 body=362 status=ok
// SIG undefined FUN_144302e62(void)

void FUN_144302e62(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144302ef7;
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
LAB_144302ef7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x128)) {
    uVar7 = uVar5 / 0x128 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x128,8);
  return;
}



// FUNCTION 144302fcc FUN_144302fcc body=95 status=ok
// SIG undefined FUN_144302fcc(void)

ulonglong * FUN_144302fcc(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "StartTakedown";
  local_18 = 0xd;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430302c FUN_14430302c body=29 status=ok
// SIG undefined FUN_14430302c(void)

undefined8 FUN_14430302c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430304a FUN_14430304a body=29 status=ok
// SIG undefined FUN_14430304a(void)

undefined8 FUN_14430304a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144303068 FUN_144303068 body=95 status=ok
// SIG undefined FUN_144303068(void)

ulonglong * FUN_144303068(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "MenuTutorial_ClearAll";
  local_18 = 0x15;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443030c8 FUN_1443030c8 body=30 status=ok
// SIG undefined FUN_1443030c8(void)

void * FUN_1443030c8(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1443030e6 FUN_1443030e6 body=122 status=ok
// SIG undefined FUN_1443030e6(void)

void FUN_1443030e6(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x238))(plVar2,&local_19);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_19);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430316e FUN_14430316e body=64 status=ok
// SIG undefined FUN_14430316e(void)

undefined8 * FUN_14430316e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d2830;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443031b2 FUN_1443031b2 body=81 status=ok
// SIG undefined FUN_1443031b2(void)

undefined8 FUN_1443031b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 144303208 FUN_144303208 body=89 status=ok
// SIG undefined FUN_144303208(void)

bool FUN_144303208(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_144303253;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_144303253:
  return lVar6 == param_2;
}



// FUNCTION 14430327e FUN_14430327e body=118 status=ok
// SIG undefined FUN_14430327e(void)

void FUN_14430327e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d2830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1443032f4 FUN_1443032f4 body=118 status=ok
// SIG undefined FUN_1443032f4(void)

void FUN_1443032f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d2830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14430336a FUN_14430336a body=156 status=ok
// SIG undefined FUN_14430336a(void)

void FUN_14430336a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d2830;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443033f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144303410 FUN_144303410 body=46 status=ok
// SIG undefined FUN_144303410(void)

undefined8 FUN_144303410(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_14430343e(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14430343e FUN_14430343e body=112 status=ok
// SIG undefined FUN_14430343e(void)

void FUN_14430343e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  
  param_1 = (longlong *)*param_1;
  lVar1 = param_1[0x51];
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xb1) = 0;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  cVar3 = FUN_1402ca054(*param_2,&DAT_149e06384,3);
  if ((cVar3 == '\0') && ((*(byte *)(param_1 + 0x53) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001443034a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x130))(param_1);
    return;
  }
  return;
}



// FUNCTION 1443034ae FUN_1443034ae body=68 status=ok
// SIG undefined FUN_1443034ae(void)

undefined8 * FUN_1443034ae(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d28a0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443034f8 FUN_1443034f8 body=68 status=ok
// SIG undefined FUN_1443034f8(void)

undefined8 * FUN_1443034f8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d2a10;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430356c FUN_14430356c body=337 status=ok
// SIG undefined FUN_14430356c(void)

void FUN_14430356c(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_144303650;
    }
  }
  local_60 = (undefined1 *)0x0;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
LAB_144303650:
  FUN_148ed4abe(param_2,local_58,param_1 + 2,param_1 + 4);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443036be FUN_1443036be body=386 status=ok
// SIG undefined FUN_1443036be(void)

void FUN_1443036be(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  longlong *plVar3;
  wchar_t *_Str;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  longlong *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = param_1 + 4;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1443037cc;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_f0 = plVar3;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
  plVar3 = local_f0;
LAB_1443037cc:
  local_108 = param_1 + 6;
  local_100 = param_1 + 8;
  FUN_148ed502c(param_2,local_58,param_1 + 2,plVar3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144303842 FUN_144303842 body=64 status=ok
// SIG undefined FUN_144303842(void)

undefined8 * FUN_144303842(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d2c70;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144303886 FUN_144303886 body=81 status=ok
// SIG undefined FUN_144303886(void)

undefined8 FUN_144303886(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 1443038dc FUN_1443038dc body=89 status=ok
// SIG undefined FUN_1443038dc(void)

bool FUN_1443038dc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_144303927;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_144303927:
  return lVar6 == param_2;
}



// FUNCTION 144303952 FUN_144303952 body=118 status=ok
// SIG undefined FUN_144303952(void)

void FUN_144303952(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d2c70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1443039c8 FUN_1443039c8 body=118 status=ok
// SIG undefined FUN_1443039c8(void)

void FUN_1443039c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d2c70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144303a3e FUN_144303a3e body=156 status=ok
// SIG undefined FUN_144303a3e(void)

void FUN_144303a3e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d2c70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144303aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144303ae4 FUN_144303ae4 body=46 status=ok
// SIG undefined FUN_144303ae4(void)

undefined8 FUN_144303ae4(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_144303b12(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144303b12 FUN_144303b12 body=58 status=ok
// SIG undefined FUN_144303b12(void)

void FUN_144303b12(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *param_1;
  cVar2 = FUN_1402ca054(*param_2,&DAT_149e06384,3);
  if (cVar2 != '\0') {
    FUN_14614c256();
    return;
  }
  FUN_145effa9a(uVar1,0);
  return;
}



// FUNCTION 144303b4c FUN_144303b4c body=432 status=ok
// SIG undefined FUN_144303b4c(void)

void FUN_144303b4c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  lVar1 = *(longlong *)(*param_1 + 0x1f0);
  if (lVar1 == 0) {
    puVar5 = (undefined8 *)(*param_1 + 0x458);
  }
  else {
    puVar5 = (undefined8 *)(lVar1 + 0xf0);
  }
  uVar2 = *puVar5;
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,3,0x10);
  local_90 = 3;
  *local_98 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_98[2] = lVar6;
  *local_98 = &PTR_FUN_14b9d2de0;
  local_98[3] = lVar1;
  local_98[4] = lVar3;
  local_78 = 0;
  local_70 = 0;
  FUN_14487d8d8(&local_78,&local_98);
  local_38 = 1;
  local_a8 = local_80;
  local_80[0] = 0;
  local_7c = 0xbf800000;
  FUN_1406f4044(uVar2,&local_88,&local_78,0x3e99999a);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
  if (local_90 != 0) {
    if (local_98 == (undefined8 *)0x0) goto LAB_144303cac;
    (**(code **)*local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144303cac:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144303d30 FUN_144303d30 body=29 status=ok
// SIG undefined FUN_144303d30(void)

undefined8 FUN_144303d30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144303d4e FUN_144303d4e body=29 status=ok
// SIG undefined FUN_144303d4e(void)

undefined8 FUN_144303d4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144303d80 FUN_144303d80 body=93 status=ok
// SIG undefined FUN_144303d80(void)

void FUN_144303d80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d2de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144303dde FUN_144303dde body=93 status=ok
// SIG undefined FUN_144303dde(void)

void FUN_144303dde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d2de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144303e3c FUN_144303e3c body=126 status=ok
// SIG undefined FUN_144303e3c(void)

void FUN_144303e3c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d2de0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144303eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144303eba FUN_144303eba body=49 status=ok
// SIG undefined FUN_144303eba(void)

void FUN_144303eba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x6b8))();
  if (lVar1 != *(longlong *)(param_1 + 0x20)) {
    return;
  }
  FUN_1463cd9b8(*(undefined8 *)(param_1 + 0x18),1);
  return;
}



// FUNCTION 144303eec FUN_144303eec body=48 status=ok
// SIG undefined FUN_144303eec(void)

undefined8 FUN_144303eec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x6b8))();
  if (lVar1 == *(longlong *)(param_1 + 0x20)) {
    FUN_1463cd9b8(*(undefined8 *)(param_1 + 0x18),1);
  }
  return 1;
}



// FUNCTION 144303f34 FUN_144303f34 body=335 status=ok
// SIG undefined FUN_144303f34(void)

void FUN_144303f34(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0xd0) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xd0),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144303ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443040b6 FUN_1443040b6 body=29 status=ok
// SIG undefined FUN_1443040b6(void)

undefined8 FUN_1443040b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443040d4 FUN_1443040d4 body=335 status=ok
// SIG undefined FUN_1443040d4(void)

void FUN_1443040d4(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0xe8) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xe8),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144304190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144304256 FUN_144304256 body=29 status=ok
// SIG undefined FUN_144304256(void)

undefined8 FUN_144304256(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144304274 FUN_144304274 body=335 status=ok
// SIG undefined FUN_144304274(void)

void FUN_144304274(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0x100) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x100),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144304330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443043f6 FUN_1443043f6 body=29 status=ok
// SIG undefined FUN_1443043f6(void)

undefined8 FUN_1443043f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144304414 FUN_144304414 body=335 status=ok
// SIG undefined FUN_144304414(void)

void FUN_144304414(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0xe8) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xe8),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443044d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144304596 FUN_144304596 body=29 status=ok
// SIG undefined FUN_144304596(void)

undefined8 FUN_144304596(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443045b4 FUN_1443045b4 body=335 status=ok
// SIG undefined FUN_1443045b4(void)

void FUN_1443045b4(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0xd0) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xd0),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144304670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144304736 FUN_144304736 body=29 status=ok
// SIG undefined FUN_144304736(void)

undefined8 FUN_144304736(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144304754 FUN_144304754 body=335 status=ok
// SIG undefined FUN_144304754(void)

void FUN_144304754(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0xd0) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xd0),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144304810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443048d6 FUN_1443048d6 body=29 status=ok
// SIG undefined FUN_1443048d6(void)

undefined8 FUN_1443048d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443048f4 FUN_1443048f4 body=335 status=ok
// SIG undefined FUN_1443048f4(void)

void FUN_1443048f4(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0xd0) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xd0),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443049b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144304a76 FUN_144304a76 body=29 status=ok
// SIG undefined FUN_144304a76(void)

undefined8 FUN_144304a76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144304a94 FUN_144304a94 body=335 status=ok
// SIG undefined FUN_144304a94(void)

void FUN_144304a94(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0xd0) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xd0),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144304b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144304c16 FUN_144304c16 body=29 status=ok
// SIG undefined FUN_144304c16(void)

undefined8 FUN_144304c16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144304c34 FUN_144304c34 body=335 status=ok
// SIG undefined FUN_144304c34(void)

void FUN_144304c34(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0xd0) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xd0),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144304cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144304db6 FUN_144304db6 body=29 status=ok
// SIG undefined FUN_144304db6(void)

undefined8 FUN_144304db6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144304dd4 FUN_144304dd4 body=335 status=ok
// SIG undefined FUN_144304dd4(void)

void FUN_144304dd4(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0xd0) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xd0),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144304e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144304f56 FUN_144304f56 body=29 status=ok
// SIG undefined FUN_144304f56(void)

undefined8 FUN_144304f56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144304f74 FUN_144304f74 body=695 status=ok
// SIG undefined FUN_144304f74(void)

void FUN_144304f74(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar8 + 0x68);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = *param_1;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) {
      return;
    }
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar10 = iVar7 == iVar6;
    if (bVar10) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar10);
  if ((((*(longlong *)(lVar8 + 0x60) != 0) &&
       ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
      (*(longlong *)(param_1[1] + 0xd0) != 0)) && (*(int *)(lVar4 + 0x34) != 0)) {
    uVar2 = *(uint *)(lVar4 + 0x30);
    bVar10 = false;
    if (((int)uVar2 < 0) || (bVar10 = false, DAT_14c9647dc <= (int)uVar2)) goto LAB_144305018;
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       (((int)plVar9[2] == *(int *)(lVar4 + 0x34) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))
    {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xd0),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        bVar10 = true;
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
        goto LAB_144305018;
      }
    }
  }
  bVar10 = false;
LAB_144305018:
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (((bVar10) && (lVar8 = param_1[1], lVar8 != 0)) &&
     (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if (((((*(longlong *)(lVar8 + 0x60) != 0) &&
          ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
         ((*(longlong *)(param_1[1] + 0x110) != 0 &&
          ((*(int *)(lVar4 + 0x34) != 0 && (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2))))))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar4 + 0x34))) &&
        ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x290))(plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x110));
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443050f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14430525e FUN_14430525e body=29 status=ok
// SIG undefined FUN_14430525e(void)

undefined8 FUN_14430525e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430527c FUN_14430527c body=695 status=ok
// SIG undefined FUN_14430527c(void)

void FUN_14430527c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar8 + 0x68);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = *param_1;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) {
      return;
    }
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar10 = iVar7 == iVar6;
    if (bVar10) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar10);
  if ((((*(longlong *)(lVar8 + 0x60) != 0) &&
       ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
      (*(longlong *)(param_1[1] + 0xd0) != 0)) && (*(int *)(lVar4 + 0x34) != 0)) {
    uVar2 = *(uint *)(lVar4 + 0x30);
    bVar10 = false;
    if (((int)uVar2 < 0) || (bVar10 = false, DAT_14c9647dc <= (int)uVar2)) goto LAB_144305320;
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       (((int)plVar9[2] == *(int *)(lVar4 + 0x34) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))
    {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0xd0),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        bVar10 = true;
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
        goto LAB_144305320;
      }
    }
  }
  bVar10 = false;
LAB_144305320:
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (((bVar10) && (lVar8 = param_1[1], lVar8 != 0)) &&
     (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if (((((*(longlong *)(lVar8 + 0x60) != 0) &&
          ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
         ((*(longlong *)(param_1[1] + 0x150) != 0 &&
          ((*(int *)(lVar4 + 0x34) != 0 && (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2))))))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar4 + 0x34))) &&
        ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x290))(plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x150));
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443053fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144305566 FUN_144305566 body=29 status=ok
// SIG undefined FUN_144305566(void)

undefined8 FUN_144305566(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144305584 FUN_144305584 body=335 status=ok
// SIG undefined FUN_144305584(void)

void FUN_144305584(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0x100) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x100),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144305640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144305706 FUN_144305706 body=29 status=ok
// SIG undefined FUN_144305706(void)

undefined8 FUN_144305706(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144305724 FUN_144305724 body=695 status=ok
// SIG undefined FUN_144305724(void)

void FUN_144305724(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar8 + 0x68);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = *param_1;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) {
      return;
    }
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar10 = iVar7 == iVar6;
    if (bVar10) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar10);
  if ((((*(longlong *)(lVar8 + 0x60) != 0) &&
       ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
      (*(longlong *)(param_1[1] + 0x100) != 0)) && (*(int *)(lVar4 + 0x34) != 0)) {
    uVar2 = *(uint *)(lVar4 + 0x30);
    bVar10 = false;
    if (((int)uVar2 < 0) || (bVar10 = false, DAT_14c9647dc <= (int)uVar2)) goto LAB_1443057c8;
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       (((int)plVar9[2] == *(int *)(lVar4 + 0x34) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))
    {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x100),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        bVar10 = true;
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
        goto LAB_1443057c8;
      }
    }
  }
  bVar10 = false;
LAB_1443057c8:
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (((bVar10) && (lVar8 = param_1[1], lVar8 != 0)) &&
     (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if (((((*(longlong *)(lVar8 + 0x60) != 0) &&
          ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
         ((*(longlong *)(param_1[1] + 0x128) != 0 &&
          ((*(int *)(lVar4 + 0x34) != 0 && (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2))))))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar4 + 0x34))) &&
        ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x290))(plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x128));
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443058a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144305a0e FUN_144305a0e body=29 status=ok
// SIG undefined FUN_144305a0e(void)

undefined8 FUN_144305a0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144305a2c FUN_144305a2c body=695 status=ok
// SIG undefined FUN_144305a2c(void)

void FUN_144305a2c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar8 + 0x68);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = *param_1;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) {
      return;
    }
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar10 = iVar7 == iVar6;
    if (bVar10) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar10);
  if ((((*(longlong *)(lVar8 + 0x60) != 0) &&
       ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
      (*(longlong *)(param_1[1] + 0x100) != 0)) && (*(int *)(lVar4 + 0x34) != 0)) {
    uVar2 = *(uint *)(lVar4 + 0x30);
    bVar10 = false;
    if (((int)uVar2 < 0) || (bVar10 = false, DAT_14c9647dc <= (int)uVar2)) goto LAB_144305ad0;
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       (((int)plVar9[2] == *(int *)(lVar4 + 0x34) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))
    {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x100),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        bVar10 = true;
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
        goto LAB_144305ad0;
      }
    }
  }
  bVar10 = false;
LAB_144305ad0:
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (((bVar10) && (lVar8 = param_1[1], lVar8 != 0)) &&
     (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if (((((*(longlong *)(lVar8 + 0x60) != 0) &&
          ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
         ((*(longlong *)(param_1[1] + 0x140) != 0 &&
          ((*(int *)(lVar4 + 0x34) != 0 && (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2))))))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar4 + 0x34))) &&
        ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x290))(plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x140));
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144305baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144305d16 FUN_144305d16 body=29 status=ok
// SIG undefined FUN_144305d16(void)

undefined8 FUN_144305d16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144305d34 FUN_144305d34 body=695 status=ok
// SIG undefined FUN_144305d34(void)

void FUN_144305d34(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar8 + 0x68);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = *param_1;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) {
      return;
    }
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar10 = iVar7 == iVar6;
    if (bVar10) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar10);
  if ((((*(longlong *)(lVar8 + 0x60) != 0) &&
       ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
      (*(longlong *)(param_1[1] + 0x100) != 0)) && (*(int *)(lVar4 + 0x34) != 0)) {
    uVar2 = *(uint *)(lVar4 + 0x30);
    bVar10 = false;
    if (((int)uVar2 < 0) || (bVar10 = false, DAT_14c9647dc <= (int)uVar2)) goto LAB_144305dd8;
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       (((int)plVar9[2] == *(int *)(lVar4 + 0x34) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))
    {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x100),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        bVar10 = true;
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
        goto LAB_144305dd8;
      }
    }
  }
  bVar10 = false;
LAB_144305dd8:
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (((bVar10) && (lVar8 = param_1[1], lVar8 != 0)) &&
     (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if (((((*(longlong *)(lVar8 + 0x60) != 0) &&
          ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
         ((*(longlong *)(param_1[1] + 0x168) != 0 &&
          ((*(int *)(lVar4 + 0x34) != 0 && (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2))))))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar4 + 0x34))) &&
        ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x290))(plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x168));
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144305eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14430601e FUN_14430601e body=29 status=ok
// SIG undefined FUN_14430601e(void)

undefined8 FUN_14430601e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430603c FUN_14430603c body=335 status=ok
// SIG undefined FUN_14430603c(void)

void FUN_14430603c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar8 = param_1[1];
  if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x68), plVar3 != (longlong *)0x0)) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    if ((((((*(longlong *)(lVar8 + 0x60) != 0) &&
           ((*(byte *)(*(longlong *)(lVar8 + 0x60) + 0x8c) & 0x80) != 0)) &&
          (*(longlong *)(param_1[1] + 0x100) != 0)) &&
         ((iVar7 = *(int *)(lVar4 + 0x34), iVar7 != 0 &&
          (uVar2 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar2)))) &&
        (((int)uVar2 < DAT_14c9647dc &&
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x40) + 0x238) + 8);
      }
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x210))(),
         plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x2a0))
                  (plVar9,param_1[1],*(undefined8 *)(param_1[1] + 0x100),(longlong)(int)param_1[2]);
        puVar5 = *(ushort **)(param_1[1] + 0x90);
        if (puVar5 != (ushort *)0x0) {
          *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(param_1[1] + 0x88) & 0x3f));
        }
      }
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443060f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443061be FUN_1443061be body=29 status=ok
// SIG undefined FUN_1443061be(void)

undefined8 FUN_1443061be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443061dc FUN_1443061dc body=130 status=ok
// SIG undefined FUN_1443061dc(void)

undefined4
FUN_1443061dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148ed727a(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144306260 FUN_144306260 body=124 status=ok
// SIG undefined FUN_144306260(void)

undefined8 * FUN_144306260(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  plVar1 = (longlong *)param_2[5];
  param_1[5] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 1443062dc FUN_1443062dc body=78 status=ok
// SIG undefined FUN_1443062dc(void)

undefined8 * FUN_1443062dc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d33b0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430632e FUN_14430632e body=81 status=ok
// SIG undefined FUN_14430632e(void)

undefined8 FUN_14430632e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 144306384 FUN_144306384 body=89 status=ok
// SIG undefined FUN_144306384(void)

bool FUN_144306384(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1443063cf;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1443063cf:
  return lVar6 == param_2;
}



// FUNCTION 1443063fa FUN_1443063fa body=185 status=ok
// SIG undefined FUN_1443063fa(void)

void FUN_1443063fa(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b40e8d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9d33b0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_140c19d4e(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 3);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 1443064b4 FUN_1443064b4 body=185 status=ok
// SIG undefined FUN_1443064b4(void)

void FUN_1443064b4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b40e8d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9d33b0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_140c19d4e(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 3);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 14430656e FUN_14430656e body=224 status=ok
// SIG undefined FUN_14430656e(void)

void FUN_14430656e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong lVar3;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b40e8d0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b9d33b0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)lVar3;
  p_Var2->ContentionCount = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_140c19d4e(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 << 3);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014430663c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144306666 FUN_144306666 body=60 status=ok
// SIG undefined FUN_144306666(void)

undefined8 FUN_144306666(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x670))(param_2,param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1443066c0 FUN_1443066c0 body=2198 status=ok
// SIG undefined FUN_1443066c0(void)

/* WARNING: Removing unreachable block (ram,0x000144306ae4) */

void FUN_1443066c0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ushort *puVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *_Src;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  undefined1 local_119;
  longlong local_118;
  longlong local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  void *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  code *local_b8 [2];
  undefined8 *local_a8;
  ulonglong local_78 [2];
  longlong *local_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x34) == 0) {
LAB_144306bf0:
    lVar15 = 0;
  }
  else {
    uVar8 = *(uint *)(lVar2 + 0x30);
    lVar15 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(lVar2 + 0x34) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))
         ) goto LAB_144306bf0;
      lVar15 = *plVar9;
    }
  }
  if (((((*(int *)(lVar15 + 0x5a4) != 0) && (uVar8 = *(uint *)(lVar15 + 0x5a0), -1 < (int)uVar8)) &&
       ((int)uVar8 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(lVar15 + 0x5a4))))) &&
     (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar15 = *plVar9, lVar15 != 0)))) {
    if (DAT_14cae9568 == 0) {
      local_140 = local_b8;
      local_b8[0] = FUN_1417de738;
      local_130 = (code *)&LAB_145893408;
      local_138 = &LAB_1458cbbd2;
      local_148 = &LAB_147ba21f1;
      local_150 = &LAB_1463e9233;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x1000000c;
      local_170 = 8;
      local_178 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if (((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) &&
       (lVar18 = *(longlong *)(lVar15 + 0x30), lVar18 != 0)) {
      if (DAT_14cbadd90 == 0) {
        local_140 = local_b8;
        local_b8[0] = FUN_141030f22;
        local_130 = FUN_14081d0ea;
        local_138 = &LAB_1459f2e4c;
        local_148 = &LAB_148c39de3;
        local_150 = &LAB_1457a9eb2;
        local_158 = L"Game";
        local_160 = 0;
        local_168 = 0x10000004;
        local_170 = 0x10;
        local_178 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        lVar18 = *(longlong *)(lVar15 + 0x30);
        if (lVar18 == 0) goto LAB_1443067ba;
      }
      if ((((DAT_14cbadd90 != 0) && (lVar15 = *(longlong *)(lVar18 + 0x10), lVar15 != 0)) &&
          (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar15 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
          == DAT_14cbadd90 + 0x30)) {
        lVar15 = param_1[3];
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = (undefined4 *)0x0;
        uStack_d0 = 0;
        iVar7 = *(int *)(lVar15 + 0x20c);
        if (0 < iVar7) {
          uStack_d0 = 1;
          FUN_1446f48e2(&local_d8,0);
          *local_d8 = 0;
          iVar7 = *(int *)(lVar15 + 0x20c);
        }
        uVar6 = uStack_d0;
        if ((iVar7 == 0) ||
           ((*(char *)(lVar15 + 0x1dc) == '\x01' &&
            (*(int *)(lVar15 + 0x204) < *(int *)(lVar15 + 0x210))))) {
          lVar12 = (longlong)(int)uStack_d0;
          uVar8 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar8);
          if (uStack_d0._4_4_ < uVar8) {
            FUN_1446f48e2(&local_d8,uVar6 & 0xffffffff);
          }
          local_d8[lVar12] = 1;
        }
        local_119 = (int)uStack_d0 == 0;
        lVar12 = (longlong)*(int *)(param_1[4] + 0xb0);
        local_118 = lVar15;
        if (lVar12 != 0) {
          lVar15 = *(longlong *)(param_1[4] + 0xa8);
          lVar17 = 0;
          local_110 = lVar18;
          do {
            if (*(longlong *)(lVar15 + lVar17) != 0) {
              local_78[0] = local_78[0] & 0xffffffffffffff00;
              local_50 = 0;
              FUN_1456bb102(local_78,*(undefined8 *)(lVar18 + 0xa08));
              _Src = local_d8;
              plVar9 = *(longlong **)(lVar15 + lVar17);
              local_108 = local_119;
              local_100 = (void *)0x0;
              lVar18 = (longlong)(int)uStack_d0;
              local_f8 = CONCAT44(local_f8._4_4_,(int)uStack_d0);
              if (lVar18 == 0) {
                local_f8 = uStack_d0 & 0xffffffff;
              }
              else {
                FUN_144a06ca8(&local_100,uStack_d0 & 0xffffffff,0);
                memcpy(local_100,_Src,lVar18 << 2);
              }
              local_b8[0] = (code *)0x0;
              local_a8 = (undefined8 *)0x0;
              local_f0 = lVar2;
              local_a8 = (undefined8 *)FUN_14001cc68(0x28,8);
              *local_a8 = &PTR_FUN_14b9d35c0;
              *(undefined1 *)(local_a8 + 1) = local_108;
              local_a8[2] = local_100;
              local_100 = (void *)0x0;
              *(undefined4 *)(local_a8 + 3) = (undefined4)local_f8;
              *(undefined4 *)((longlong)local_a8 + 0x1c) = local_f8._4_4_;
              local_f8 = 0;
              local_a8[4] = local_f0;
              if (local_a8 + 1 != (undefined8 *)0x0) {
                local_b8[0] = FUN_144307030;
              }
              (**(code **)(*plVar9 + 0x10))(plVar9,&local_e8,local_78,local_b8);
              uVar6 = uStack_c0;
              lVar18 = (longlong)(int)uStack_c0;
              uVar8 = (int)uStack_c0 + 1;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar8);
              if (uStack_c0._4_4_ < uVar8) {
                FUN_1447a1bd6(&local_c8,uVar6 & 0xffffffff);
              }
              lVar18 = lVar18 * 0x10;
              *(undefined8 *)(local_c8 + lVar18) = 0;
              *(undefined8 *)(local_c8 + lVar18) = local_e8;
              *(undefined4 *)(local_c8 + 8 + lVar18) = (undefined4)local_e0;
              *(undefined4 *)(local_c8 + 0xc + lVar18) = local_e0._4_4_;
              local_e0 = 0;
              local_e8 = 0;
              if (local_100 != (void *)0x0) {
                FUN_1400020a8();
              }
              lVar18 = DAT_14c9a3da0;
              if ((longlong)local_50 != 0) {
                lVar14 = (longlong)local_50 + -1;
                lVar13 = lVar14 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
                if (*(longlong *)(lVar18 + lVar13) != 0) {
                  FUN_1400020a8();
                }
                lVar18 = DAT_14c9a3da0;
                iVar7 = (int)lVar14;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
                }
                *(undefined4 *)(lVar18 + lVar13) = 0xffffffff;
                iVar11 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar11 = DAT_14c9a3dd0;
                }
                *(int *)(lVar18 + 4 + lVar13) = iVar11;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar10 = DAT_14c9a3dc0;
                if (DAT_14c9a3dc0 == (undefined *)0x0) {
                  puVar10 = &DAT_14c9a3db0;
                }
                iVar11 = iVar7 + 0x1f;
                if (-1 < iVar7) {
                  iVar11 = iVar7;
                }
                bVar4 = (byte)lVar14 & 0x1f;
                DAT_14c9a3dd0 = iVar7;
                *(uint *)(puVar10 + (longlong)(iVar11 >> 5) * 4) =
                     *(uint *)(puVar10 + (longlong)(iVar11 >> 5) * 4) &
                     (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
                local_50 = 0;
              }
              lVar18 = local_110;
              if (((char)local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_68 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_68 + 0x10))();
                  lVar18 = local_110;
                }
              }
            }
            lVar17 = lVar17 + 0x18;
          } while (lVar12 * 0x18 != lVar17);
        }
        lVar2 = local_c8;
        lVar15 = (longlong)(int)uStack_c0;
        if (lVar15 == 0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = 0;
            *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
            DAT_14c844840[2] = -1;
            DAT_14c844840[3] = 0;
            DAT_14c844840[4] = 0;
            DAT_14c844840[5] = 0;
            if (DAT_14c844840 != (longlong *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          lVar2 = local_118;
          plVar5 = DAT_14c844840;
          plVar9 = *(longlong **)(local_118 + 0x288);
          if (plVar9 != DAT_14c844840) {
            *(longlong **)(local_118 + 0x288) = DAT_14c844840;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          *(undefined4 *)(lVar2 + 0x290) = DAT_14c844848;
        }
        else {
          local_78[0] = 0;
          local_78[1] = 0;
          iVar7 = 1;
          lVar18 = 0;
          do {
            if ((char)iVar7 == '\0') {
              FUN_1400020e8(local_78,L"[newline]",9);
            }
            iVar11 = *(int *)(lVar2 + 8 + lVar18);
            iVar7 = 0;
            iVar16 = iVar11 + -1;
            if (iVar11 == 0) {
              iVar16 = iVar7;
            }
            FUN_1400020e8(local_78,*(undefined8 *)(lVar2 + lVar18),iVar16);
            lVar18 = lVar18 + 0x10;
          } while (lVar15 * 0x10 != lVar18);
          FUN_140009b9a(&local_108,local_78);
          FUN_140008f88(local_118 + 0x288,&local_108);
          if ((longlong *)CONCAT71(uStack_107,local_108) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT71(uStack_107,local_108) + 0x10))();
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
        puVar3 = *(ushort **)(param_1[3] + 0x80);
        if (puVar3 != (ushort *)0x0) {
          *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1[3] + 0x78) & 0x3f));
        }
        if (local_d8 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1443067ba:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144306f58 FUN_144306f58 body=95 status=ok
// SIG undefined FUN_144306f58(void)

undefined8 * FUN_144306f58(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b9d35a0;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 144306fbe FUN_144306fbe body=29 status=ok
// SIG undefined FUN_144306fbe(void)

void FUN_144306fbe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144306fdc FUN_144306fdc body=83 status=ok
// SIG undefined FUN_144306fdc(void)

undefined8 * FUN_144306fdc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9d35a0;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144307030 FUN_144307030 body=638 status=ok
// SIG undefined FUN_144307030(void)

void ** FUN_144307030(void **param_1,char *param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *param_4;
  iVar6 = *param_3;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  if ((iVar6 != -1) && (*param_2 == '\0')) {
    if ((longlong)*(int *)(param_2 + 0x10) != 0) {
      lVar5 = 0;
      do {
        if (*(int *)(*(longlong *)(param_2 + 8) + lVar5) == iVar6) goto LAB_14430708a;
        lVar5 = lVar5 + 4;
      } while ((longlong)*(int *)(param_2 + 0x10) * 4 != lVar5);
    }
    if (iVar1 != 1) {
      *param_1 = (void *)0x0;
      param_1[1] = (void *)0x0;
      goto LAB_1443070d7;
    }
  }
LAB_14430708a:
  *param_1 = (void *)0x0;
  iVar2 = *(int *)(param_5 + 1);
  pvVar4 = (void *)*param_5;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy(*param_1,pvVar4,(longlong)iVar2 * 2);
  }
LAB_1443070d7:
  if (1 < iVar1 && 0 < iVar6) {
    FUN_140056680(&local_48,L"skill_");
    FUN_140f9b5a6(uVar3,&local_58);
    iVar1 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_48,local_58,iVar1);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar1 = *(int *)(param_1 + 1);
    if ((longlong)iVar1 < 2) {
      local_58 = (void *)0x0;
      pvVar4 = *param_1;
      uStack_50 = CONCAT44(uStack_50._4_4_,iVar1);
      if (iVar1 == 0) {
        uStack_50 = 0;
      }
      else {
        FUN_1446dd670(&local_58,iVar1,0);
        memcpy(local_58,pvVar4,(longlong)iVar1 * 2);
      }
    }
    else {
      local_58 = (void *)0x0;
      uStack_50 = 0;
      FUN_1400020e8(&local_58,&DAT_149e2b508,1);
      iVar6 = 0;
      iVar1 = local_40 + -1;
      if (local_40 == 0) {
        iVar1 = iVar6;
      }
      FUN_1400020e8(&local_58,local_48,iVar1);
      FUN_1400020e8(&local_58,&DAT_149e2b50c,1);
      iVar1 = *(int *)(param_1 + 1) + -1;
      if (*(int *)(param_1 + 1) == 0) {
        iVar1 = iVar6;
      }
      FUN_1400020e8(&local_58,*param_1,iVar1);
      FUN_1400020e8(&local_58,&DAT_14b9cf002,2);
      iVar1 = local_40 + -1;
      if (local_40 == 0) {
        iVar1 = iVar6;
      }
      FUN_1400020e8(&local_58,local_48,iVar1);
      FUN_1400020e8(&local_58,&DAT_149e2b50c,1);
    }
    if (&local_58 == param_1) {
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_58;
      local_58 = (void *)0x0;
      *(int *)(param_1 + 1) = (int)uStack_50;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443072b0 FUN_1443072b0 body=159 status=ok
// SIG undefined FUN_1443072b0(void)

undefined8 * FUN_1443072b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b9d35c0;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 8);
  puVar2[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(puVar2 + 2,iVar1,0);
    memcpy((void *)puVar2[2],_Src,(longlong)iVar1 << 2);
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 144307356 FUN_144307356 body=29 status=ok
// SIG undefined FUN_144307356(void)

void FUN_144307356(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144307374 FUN_144307374 body=57 status=ok
// SIG undefined FUN_144307374(void)

undefined8 * FUN_144307374(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d35c0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443073ae FUN_1443073ae body=64 status=ok
// SIG undefined FUN_1443073ae(void)

undefined8 * FUN_1443073ae(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d35f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443073f2 FUN_1443073f2 body=81 status=ok
// SIG undefined FUN_1443073f2(void)

undefined8 FUN_1443073f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 144307448 FUN_144307448 body=89 status=ok
// SIG undefined FUN_144307448(void)

bool FUN_144307448(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_144307493;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_144307493:
  return lVar6 == param_2;
}



// FUNCTION 1443074be FUN_1443074be body=118 status=ok
// SIG undefined FUN_1443074be(void)

void FUN_1443074be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d35f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144307534 FUN_144307534 body=118 status=ok
// SIG undefined FUN_144307534(void)

void FUN_144307534(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d35f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1443075aa FUN_1443075aa body=156 status=ok
// SIG undefined FUN_1443075aa(void)

void FUN_1443075aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d35f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144307636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144307650 FUN_144307650 body=46 status=ok
// SIG undefined FUN_144307650(void)

undefined8 FUN_144307650(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_14430767e(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14430767e FUN_14430767e body=628 status=ok
// SIG undefined FUN_14430767e(void)

void FUN_14430767e(longlong *param_1,undefined8 *param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  plVar7 = (longlong *)FUN_140f9a2c8(lVar1);
  lVar2 = *plVar7;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  if (*(char *)(lVar2 + 8) == '\0') {
    if (*(int *)(lVar2 + 0xc) == 0) {
      iVar5 = 1;
      goto LAB_1443076ce;
    }
  }
  else {
    iVar5 = *(int *)(lVar2 + 0xc) + 1;
LAB_1443076ce:
    *(undefined1 *)(lVar2 + 8) = 0;
    *(int *)(lVar2 + 0xc) = iVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  cVar4 = FUN_1402ca054(*param_2,&DAT_149e01eac,1);
  if (cVar4 != '\0') {
    plVar7 = (longlong *)FUN_140f9a2c8(lVar1);
    lVar1 = *plVar7;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
    *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
    if (*(int *)(lVar1 + 0x60) == -1) {
      if (*(int *)(lVar1 + 100) != 0) goto LAB_144307837;
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(lVar1 + 100) + 1;
    }
    *(undefined4 *)(lVar1 + 0x60) = 0xffffffff;
    *(int *)(lVar1 + 100) = iVar5;
LAB_144307837:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  FUN_14129c41e(lVar1,&DAT_14cbd9370,1);
  puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  *puVar8 = &PTR_FUN_14b9c13a0;
  local_48 = "ClearStructureredInteractable";
  local_40 = 0x1d;
  local_3c = 0;
  iVar5 = 1;
  uVar6 = FUN_14001a6c0(&local_48,1);
  FUN_14039176c(puVar8,uVar3,uVar6,1);
  *puVar8 = &PTR_FUN_14b9c13a0;
  FUN_140391314(lVar1,puVar8);
  cVar4 = FUN_1402ca054(*param_2,&DAT_149e0209e,1);
  if (*(char *)(lVar1 + 0x2d8) == cVar4) {
    if (*(int *)(lVar1 + 0x2dc) == 0) goto LAB_1443077e9;
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x2dc) + 1;
LAB_1443077e9:
    *(char *)(lVar1 + 0x2d8) = cVar4;
    *(int *)(lVar1 + 0x2dc) = iVar5;
  }
  plVar7 = (longlong *)FUN_140f9a2c8(lVar1);
  lVar2 = *plVar7;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    if (*(int *)(lVar2 + 0x14) != 0) goto LAB_144307862;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar2 + 0x14) + 1;
  }
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(int *)(lVar2 + 0x14) = iVar5;
LAB_144307862:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  plVar7 = (longlong *)FUN_140f9a2c8(lVar1);
  lVar2 = *plVar7;
  SRWLock = (PSRWLOCK)(lVar2 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar2 + 0x60) == -1) {
    cVar4 = FUN_1402ca054(*param_2,L"Cancel",6);
    ReleaseSRWLockShared(SRWLock);
    if (cVar4 == '\0') {
      FUN_146234902(lVar1);
    }
  }
  else {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14430790a FUN_14430790a body=64 status=ok
// SIG undefined FUN_14430790a(void)

undefined8 * FUN_14430790a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3660;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14430794e FUN_14430794e body=81 status=ok
// SIG undefined FUN_14430794e(void)

undefined8 FUN_14430794e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 1443079a4 FUN_1443079a4 body=89 status=ok
// SIG undefined FUN_1443079a4(void)

bool FUN_1443079a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1443079ef;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1443079ef:
  return lVar6 == param_2;
}



// FUNCTION 144307a1a FUN_144307a1a body=118 status=ok
// SIG undefined FUN_144307a1a(void)

void FUN_144307a1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144307a90 FUN_144307a90 body=118 status=ok
// SIG undefined FUN_144307a90(void)

void FUN_144307a90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144307b06 FUN_144307b06 body=156 status=ok
// SIG undefined FUN_144307b06(void)

void FUN_144307b06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3660;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144307b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144307bac FUN_144307bac body=46 status=ok
// SIG undefined FUN_144307bac(void)

undefined8 FUN_144307bac(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_144307bda(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144307bda FUN_144307bda body=120 status=ok
// SIG undefined FUN_144307bda(void)

void FUN_144307bda(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *param_1;
  cVar2 = FUN_1402ca054(*param_2,&DAT_149e01eac,1);
  if (cVar2 != '\0') {
    return;
  }
  iVar3 = 1;
  cVar2 = FUN_1402ca054(*param_2,&DAT_149e0209e,1);
  if (*(char *)(lVar1 + 0x2e8) == cVar2) {
    if (*(int *)(lVar1 + 0x2ec) != 0) goto LAB_144307c44;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x2ec) + 1;
  }
  *(char *)(lVar1 + 0x2e8) = cVar2;
  *(int *)(lVar1 + 0x2ec) = iVar3;
LAB_144307c44:
  FUN_146234902(lVar1);
  return;
}



// FUNCTION 144307c52 FUN_144307c52 body=78 status=ok
// SIG undefined FUN_144307c52(void)

undefined8 * FUN_144307c52(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d36d0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144307ca4 FUN_144307ca4 body=81 status=ok
// SIG undefined FUN_144307ca4(void)

undefined8 FUN_144307ca4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 144307cfa FUN_144307cfa body=89 status=ok
// SIG undefined FUN_144307cfa(void)

bool FUN_144307cfa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_144307d45;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_144307d45:
  return lVar6 == param_2;
}



// FUNCTION 144307d70 FUN_144307d70 body=185 status=ok
// SIG undefined FUN_144307d70(void)

void FUN_144307d70(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b40e8d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9d36d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_140c19d4e(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 3);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 144307e2a FUN_144307e2a body=185 status=ok
// SIG undefined FUN_144307e2a(void)

void FUN_144307e2a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b40e8d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9d36d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_140c19d4e(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 3);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 144307ee4 FUN_144307ee4 body=224 status=ok
// SIG undefined FUN_144307ee4(void)

void FUN_144307ee4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong lVar3;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b40e8d0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b9d36d0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)lVar3;
  p_Var2->ContentionCount = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_140c19d4e(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 << 3);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144307fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144307fdc FUN_144307fdc body=60 status=ok
// SIG undefined FUN_144307fdc(void)

undefined8 FUN_144307fdc(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x670))(param_2,param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144308030 FUN_144308030 body=130 status=ok
// SIG undefined FUN_144308030(void)

undefined4
FUN_144308030(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148ed8dd4(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443080b4 FUN_1443080b4 body=164 status=ok
// SIG undefined FUN_1443080b4(void)

undefined4
FUN_1443080b4(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_148ed93ac(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14430815a FUN_14430815a body=2221 status=ok
// SIG undefined FUN_14430815a(void)

/* WARNING: Removing unreachable block (ram,0x000144308591) */

void FUN_14430815a(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ushort *puVar3;
  byte bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined *puVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  undefined1 local_111;
  longlong local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  void *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  code *local_b8 [2];
  undefined8 *local_a8;
  ulonglong local_78 [2];
  longlong *local_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x34) == 0) {
LAB_144308341:
    lVar11 = 0;
  }
  else {
    uVar7 = *(uint *)(lVar2 + 0x30);
    lVar11 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(lVar2 + 0x34) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))
         ) goto LAB_144308341;
      lVar11 = *plVar8;
    }
  }
  if (((((*(int *)(lVar11 + 0x5a4) == 0) || (uVar7 = *(uint *)(lVar11 + 0x5a0), (int)uVar7 < 0)) ||
       (DAT_14c9647dc <= (int)uVar7)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(lVar11 + 0x5a4))))) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar11 = *plVar8, lVar11 == 0))))
  goto LAB_144308254;
  if (DAT_14cae9568 == 0) {
    local_130 = local_b8;
    local_b8[0] = FUN_1417de738;
    local_120 = (code *)&LAB_145893408;
    local_128 = &LAB_1458cbbd2;
    local_138 = &LAB_147ba21f1;
    local_140 = &LAB_1463e9233;
    local_148 = L"Engine";
    local_150 = 0;
    local_158 = 0x1000000c;
    local_160 = 8;
    local_168 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
  }
  if (((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30)) ||
     (lVar19 = *(longlong *)(lVar11 + 0x30), lVar19 == 0)) goto LAB_144308254;
  if (DAT_14cbadd90 == 0) {
    local_130 = local_b8;
    local_b8[0] = FUN_141030f22;
    local_120 = FUN_14081d0ea;
    local_128 = &LAB_1459f2e4c;
    local_138 = &LAB_148c39de3;
    local_140 = &LAB_1457a9eb2;
    local_148 = L"Game";
    local_150 = 0;
    local_158 = 0x10000004;
    local_160 = 0x10;
    local_168 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    lVar19 = *(longlong *)(lVar11 + 0x30);
    if (lVar19 == 0) goto LAB_144308254;
  }
  if ((((DAT_14cbadd90 == 0) || (lVar11 = *(longlong *)(lVar19 + 0x10), lVar11 == 0)) ||
      (*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cbadd90 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
      DAT_14cbadd90 + 0x30)) goto LAB_144308254;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  if (*(int *)(param_1[3] + 0x18) < 1) {
    uStack_d0._0_4_ = 0;
    if (*(int *)(param_1[3] + 0x18) == 0) {
      uStack_d0 = 1;
      FUN_1446f48e2(&local_d8,0);
      puVar12 = local_d8;
      goto LAB_14430836a;
    }
  }
  else {
    uStack_d0 = 1;
    FUN_1446f48e2(&local_d8,0);
    *local_d8 = 0;
    if (*(int *)(param_1[3] + 0x18) < *(int *)(param_1[3] + 0x1c)) {
      lVar11 = (longlong)(int)uStack_d0;
      uVar7 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar7);
      if (uStack_d0._4_4_ < uVar7) {
        FUN_1446f48e2(&local_d8);
      }
      puVar12 = local_d8 + lVar11;
LAB_14430836a:
      *puVar12 = 1;
    }
  }
  local_111 = (int)uStack_d0 == 0;
  lVar11 = (longlong)*(int *)(param_1[4] + 0xb0);
  if (lVar11 != 0) {
    lVar17 = *(longlong *)(param_1[4] + 0xa8);
    lVar18 = 0;
    local_110 = lVar19;
    do {
      if (*(longlong *)(lVar17 + lVar18) != 0) {
        local_78[0] = local_78[0] & 0xffffffffffffff00;
        local_50 = 0;
        FUN_1456bb102(local_78,*(undefined8 *)(lVar19 + 0xa08));
        puVar12 = local_d8;
        plVar8 = *(longlong **)(lVar17 + lVar18);
        local_108 = local_111;
        local_100 = (void *)0x0;
        lVar19 = (longlong)(int)uStack_d0;
        local_f8 = CONCAT44(local_f8._4_4_,(int)uStack_d0);
        if (lVar19 == 0) {
          local_f8 = uStack_d0 & 0xffffffff;
        }
        else {
          FUN_144a06ca8(&local_100,uStack_d0 & 0xffffffff,0);
          memcpy(local_100,puVar12,lVar19 << 2);
        }
        local_b8[0] = (code *)0x0;
        local_a8 = (undefined8 *)0x0;
        local_f0 = lVar2;
        local_a8 = (undefined8 *)FUN_14001cc68(0x28,8);
        *local_a8 = &PTR_FUN_14b9d3930;
        *(undefined1 *)(local_a8 + 1) = local_108;
        local_a8[2] = local_100;
        local_100 = (void *)0x0;
        *(undefined4 *)(local_a8 + 3) = (undefined4)local_f8;
        *(undefined4 *)((longlong)local_a8 + 0x1c) = local_f8._4_4_;
        local_f8 = 0;
        local_a8[4] = local_f0;
        if (local_a8 + 1 != (undefined8 *)0x0) {
          local_b8[0] = FUN_144308ae0;
        }
        (**(code **)(*plVar8 + 0x10))(plVar8,&local_e8,local_78,local_b8);
        uVar6 = uStack_c0;
        lVar19 = (longlong)(int)uStack_c0;
        uVar7 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
        if (uStack_c0._4_4_ < uVar7) {
          FUN_1447a1bd6(&local_c8,uVar6 & 0xffffffff);
        }
        lVar19 = lVar19 * 0x10;
        *(undefined8 *)(local_c8 + lVar19) = 0;
        *(undefined8 *)(local_c8 + lVar19) = local_e8;
        *(undefined4 *)(local_c8 + 8 + lVar19) = (undefined4)local_e0;
        *(undefined4 *)(local_c8 + 0xc + lVar19) = local_e0._4_4_;
        local_e0 = 0;
        local_e8 = 0;
        if (local_100 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar19 = DAT_14c9a3da0;
        if ((longlong)local_50 != 0) {
          lVar16 = (longlong)local_50 + -1;
          lVar14 = lVar16 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
          if (*(longlong *)(lVar19 + lVar14) != 0) {
            FUN_1400020a8();
          }
          lVar19 = DAT_14c9a3da0;
          iVar15 = (int)lVar16;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar15;
          }
          *(undefined4 *)(lVar19 + lVar14) = 0xffffffff;
          iVar10 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar10 = DAT_14c9a3dd0;
          }
          *(int *)(lVar19 + 4 + lVar14) = iVar10;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar9 = DAT_14c9a3dc0;
          if (DAT_14c9a3dc0 == (undefined *)0x0) {
            puVar9 = &DAT_14c9a3db0;
          }
          iVar10 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar10 = iVar15;
          }
          bVar4 = (byte)lVar16 & 0x1f;
          DAT_14c9a3dd0 = iVar15;
          *(uint *)(puVar9 + (longlong)(iVar10 >> 5) * 4) =
               *(uint *)(puVar9 + (longlong)(iVar10 >> 5) * 4) &
               (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          local_50 = 0;
        }
        lVar19 = local_110;
        if (((char)local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))();
            lVar19 = local_110;
          }
        }
      }
      lVar18 = lVar18 + 0x18;
    } while (lVar11 * 0x18 != lVar18);
  }
  lVar11 = local_c8;
  lVar19 = (longlong)(int)uStack_c0;
  if (lVar19 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    plVar5 = DAT_14c844840;
    lVar11 = param_1[3];
    plVar8 = *(longlong **)(lVar11 + 0x90);
    if (plVar8 != DAT_14c844840) {
      *(longlong **)(lVar11 + 0x90) = DAT_14c844840;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    *(undefined4 *)(lVar11 + 0x98) = DAT_14c844848;
  }
  else {
    local_78[0] = 0;
    local_78[1] = 0;
    iVar15 = 1;
    lVar17 = 0;
    do {
      if ((char)iVar15 == '\0') {
        FUN_1400020e8(local_78,L"[newline]",9);
      }
      iVar10 = *(int *)(lVar11 + 8 + lVar17);
      iVar15 = 0;
      iVar13 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar13 = iVar15;
      }
      FUN_1400020e8(local_78,*(undefined8 *)(lVar11 + lVar17),iVar13);
      lVar17 = lVar17 + 0x10;
    } while (lVar19 * 0x10 != lVar17);
    FUN_140009b9a(&local_108,local_78);
    FUN_140008f88(param_1[3] + 0x90,&local_108);
    if ((longlong *)CONCAT71(uStack_107,local_108) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT71(uStack_107,local_108) + 0x10))();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x288);
  if ((lVar2 != 0) && (puVar3 = *(ushort **)(lVar2 + 0x80), puVar3 != (ushort *)0x0)) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
  if (local_d8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_144308254:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144308a08 FUN_144308a08 body=95 status=ok
// SIG undefined FUN_144308a08(void)

undefined8 * FUN_144308a08(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14b9d3910;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 144308a6e FUN_144308a6e body=29 status=ok
// SIG undefined FUN_144308a6e(void)

void FUN_144308a6e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144308a8c FUN_144308a8c body=83 status=ok
// SIG undefined FUN_144308a8c(void)

undefined8 * FUN_144308a8c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9d3910;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144308ae0 FUN_144308ae0 body=315 status=ok
// SIG undefined FUN_144308ae0(void)

undefined8 *
FUN_144308ae0(undefined8 *param_1,char *param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = *param_4;
  iVar1 = *param_3;
  if ((iVar1 != -1) && (*param_2 == '\0')) {
    if ((longlong)*(int *)(param_2 + 0x10) != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(*(longlong *)(param_2 + 8) + lVar3) == iVar1) goto LAB_144308b34;
        lVar3 = lVar3 + 4;
      } while ((longlong)*(int *)(param_2 + 0x10) * 4 != lVar3);
    }
    if (iVar4 != 1) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_144308b81;
    }
  }
LAB_144308b34:
  *param_1 = 0;
  iVar2 = *(int *)(param_5 + 1);
  _Src = (void *)*param_5;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
LAB_144308b81:
  if (1 < iVar4 && 0 < iVar1) {
    FUN_140056680(&local_40,L"[spec]");
    iVar4 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(&local_40,*param_1,iVar4);
    FUN_1400020e8(&local_40,L"[/spec]",7);
    iVar4 = local_38 + -1;
    if (local_38 == 0) {
      iVar4 = 0;
    }
    FUN_1402980a2(param_1,local_40,iVar4);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144308c1c FUN_144308c1c body=159 status=ok
// SIG undefined FUN_144308c1c(void)

undefined8 * FUN_144308c1c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b9d3930;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 8);
  puVar2[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(puVar2 + 2,iVar1,0);
    memcpy((void *)puVar2[2],_Src,(longlong)iVar1 << 2);
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 144308cc2 FUN_144308cc2 body=29 status=ok
// SIG undefined FUN_144308cc2(void)

void FUN_144308cc2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144308ce0 FUN_144308ce0 body=57 status=ok
// SIG undefined FUN_144308ce0(void)

undefined8 * FUN_144308ce0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d3930;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144308d1a FUN_144308d1a body=64 status=ok
// SIG undefined FUN_144308d1a(void)

undefined8 * FUN_144308d1a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3970;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144308d5e FUN_144308d5e body=81 status=ok
// SIG undefined FUN_144308d5e(void)

undefined8 FUN_144308d5e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 144308db4 FUN_144308db4 body=89 status=ok
// SIG undefined FUN_144308db4(void)

bool FUN_144308db4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_144308dff;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_144308dff:
  return lVar6 == param_2;
}



// FUNCTION 144308e2a FUN_144308e2a body=118 status=ok
// SIG undefined FUN_144308e2a(void)

void FUN_144308e2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144308ea0 FUN_144308ea0 body=118 status=ok
// SIG undefined FUN_144308ea0(void)

void FUN_144308ea0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144308f16 FUN_144308f16 body=156 status=ok
// SIG undefined FUN_144308f16(void)

void FUN_144308f16(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3970;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144308fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144308fbc FUN_144308fbc body=46 status=ok
// SIG undefined FUN_144308fbc(void)

undefined8 FUN_144308fbc(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_144308fea(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144308fea FUN_144308fea body=628 status=ok
// SIG undefined FUN_144308fea(void)

void FUN_144308fea(longlong *param_1,undefined8 *param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  plVar7 = (longlong *)FUN_140f9a2c8(lVar1);
  lVar2 = *plVar7;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  if (*(char *)(lVar2 + 8) == '\0') {
    if (*(int *)(lVar2 + 0xc) == 0) {
      iVar5 = 1;
      goto LAB_14430903a;
    }
  }
  else {
    iVar5 = *(int *)(lVar2 + 0xc) + 1;
LAB_14430903a:
    *(undefined1 *)(lVar2 + 8) = 0;
    *(int *)(lVar2 + 0xc) = iVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  cVar4 = FUN_1402ca054(*param_2,&DAT_149e01eac,1);
  if (cVar4 != '\0') {
    plVar7 = (longlong *)FUN_140f9a2c8(lVar1);
    lVar1 = *plVar7;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
    *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
    if (*(int *)(lVar1 + 0x60) == -1) {
      if (*(int *)(lVar1 + 100) != 0) goto LAB_1443091a3;
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(lVar1 + 100) + 1;
    }
    *(undefined4 *)(lVar1 + 0x60) = 0xffffffff;
    *(int *)(lVar1 + 100) = iVar5;
LAB_1443091a3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  FUN_14129c41e(lVar1,&DAT_14cbd9380,1);
  puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  *puVar8 = &PTR_FUN_14b9c13a0;
  local_48 = "ClearStructureredInteractable";
  local_40 = 0x1d;
  local_3c = 0;
  iVar5 = 1;
  uVar6 = FUN_14001a6c0(&local_48,1);
  FUN_14039176c(puVar8,uVar3,uVar6,1);
  *puVar8 = &PTR_FUN_14b9c13a0;
  FUN_140391314(lVar1,puVar8);
  cVar4 = FUN_1402ca054(*param_2,&DAT_149e0209e,1);
  if (*(char *)(lVar1 + 0x2d0) == cVar4) {
    if (*(int *)(lVar1 + 0x2d4) == 0) goto LAB_144309155;
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x2d4) + 1;
LAB_144309155:
    *(char *)(lVar1 + 0x2d0) = cVar4;
    *(int *)(lVar1 + 0x2d4) = iVar5;
  }
  plVar7 = (longlong *)FUN_140f9a2c8(lVar1);
  lVar2 = *plVar7;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    if (*(int *)(lVar2 + 0x14) != 0) goto LAB_1443091ce;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar2 + 0x14) + 1;
  }
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(int *)(lVar2 + 0x14) = iVar5;
LAB_1443091ce:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  plVar7 = (longlong *)FUN_140f9a2c8(lVar1);
  lVar2 = *plVar7;
  SRWLock = (PSRWLOCK)(lVar2 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(lVar2 + 0x60) == -1) {
    cVar4 = FUN_1402ca054(*param_2,L"Cancel",6);
    ReleaseSRWLockShared(SRWLock);
    if (cVar4 == '\0') {
      FUN_148ec84ec(lVar1);
    }
  }
  else {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144309276 FUN_144309276 body=64 status=ok
// SIG undefined FUN_144309276(void)

undefined8 * FUN_144309276(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d39e0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443092ba FUN_1443092ba body=81 status=ok
// SIG undefined FUN_1443092ba(void)

undefined8 FUN_1443092ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 144309310 FUN_144309310 body=89 status=ok
// SIG undefined FUN_144309310(void)

bool FUN_144309310(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14430935b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14430935b:
  return lVar6 == param_2;
}



// FUNCTION 144309386 FUN_144309386 body=118 status=ok
// SIG undefined FUN_144309386(void)

void FUN_144309386(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d39e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1443093fc FUN_1443093fc body=118 status=ok
// SIG undefined FUN_1443093fc(void)

void FUN_1443093fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d39e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 144309472 FUN_144309472 body=156 status=ok
// SIG undefined FUN_144309472(void)

void FUN_144309472(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d39e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443094fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144309518 FUN_144309518 body=46 status=ok
// SIG undefined FUN_144309518(void)

undefined8 FUN_144309518(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_144309546(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144309546 FUN_144309546 body=203 status=ok
// SIG undefined FUN_144309546(void)

void FUN_144309546(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  iVar3 = 1;
  cVar2 = FUN_1402ca054(*param_2,&DAT_149e0209e,1);
  if (*(char *)(lVar1 + 0x2d8) == cVar2) {
    if (*(int *)(lVar1 + 0x2dc) == 0) goto LAB_144309589;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x2dc) + 1;
LAB_144309589:
    *(char *)(lVar1 + 0x2d8) = cVar2;
    *(int *)(lVar1 + 0x2dc) = iVar3;
  }
  if ((cVar2 != '\0') || (cVar2 = FUN_1402ca054(*param_2,&DAT_149e25dfc,1), cVar2 != '\0')) {
    FUN_148ec85f8(lVar1,(int)param_1[1]);
  }
  plVar4 = (longlong *)FUN_140f9a2c8(lVar1);
  lVar1 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    if (*(int *)(lVar1 + 0x14) != 0) goto LAB_1443095eb;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x14) + 1;
  }
  *(undefined1 *)(lVar1 + 0x10) = 0;
  *(int *)(lVar1 + 0x14) = iVar3;
LAB_1443095eb:
                    /* WARNING: Could not recover jumptable at 0x0001443095f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  return;
}



// FUNCTION 144309612 FUN_144309612 body=64 status=ok
// SIG undefined FUN_144309612(void)

undefined8 * FUN_144309612(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3a50;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144309656 FUN_144309656 body=81 status=ok
// SIG undefined FUN_144309656(void)

undefined8 FUN_144309656(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 1443096ac FUN_1443096ac body=89 status=ok
// SIG undefined FUN_1443096ac(void)

bool FUN_1443096ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1443096f7;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1443096f7:
  return lVar6 == param_2;
}



// FUNCTION 144309722 FUN_144309722 body=118 status=ok
// SIG undefined FUN_144309722(void)

void FUN_144309722(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3a50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144309798 FUN_144309798 body=118 status=ok
// SIG undefined FUN_144309798(void)

void FUN_144309798(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3a50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14430980e FUN_14430980e body=156 status=ok
// SIG undefined FUN_14430980e(void)

void FUN_14430980e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d3a50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014430989a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443098b4 FUN_1443098b4 body=46 status=ok
// SIG undefined FUN_1443098b4(void)

undefined8 FUN_1443098b4(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1443098e2(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1443098e2 FUN_1443098e2 body=120 status=ok
// SIG undefined FUN_1443098e2(void)

void FUN_1443098e2(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *param_1;
  cVar2 = FUN_1402ca054(*param_2,&DAT_149e01eac,1);
  if (cVar2 != '\0') {
    return;
  }
  iVar3 = 1;
  cVar2 = FUN_1402ca054(*param_2,&DAT_149e0209e,1);
  if (*(char *)(lVar1 + 0x2e0) == cVar2) {
    if (*(int *)(lVar1 + 0x2e4) != 0) goto LAB_14430994c;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x2e4) + 1;
  }
  *(char *)(lVar1 + 0x2e0) = cVar2;
  *(int *)(lVar1 + 0x2e4) = iVar3;
LAB_14430994c:
  FUN_148ec84ec(lVar1);
  return;
}



// FUNCTION 14430995a FUN_14430995a body=134 status=ok
// SIG undefined FUN_14430995a(void)

undefined4 FUN_14430995a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_38 = DAT_14cbd9738;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148ed9abc(param_1,lVar4,param_2);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443099e2 FUN_1443099e2 body=68 status=ok
// SIG undefined FUN_1443099e2(void)

undefined8 * FUN_1443099e2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3ba0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144309a26 FUN_144309a26 body=68 status=ok
// SIG undefined FUN_144309a26(void)

undefined8 * FUN_144309a26(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9d3c10;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


