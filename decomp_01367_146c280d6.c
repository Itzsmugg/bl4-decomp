// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146c280d6 FUN_146c280d6 body=1087 status=ok
// SIG undefined FUN_146c280d6(void)

void FUN_146c280d6(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b0;
  undefined4 *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = 0;
  uStack_c0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  lVar9 = *(longlong *)(param_2 + 0xc0);
  local_128 = param_1;
  local_120 = param_2;
  if (lVar9 != 0) {
    iVar6 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar6 != 0) {
      FUN_14481578e(&local_c8);
    }
    if ((longlong)*(int *)(lVar9 + 0x20) != 0) {
      plVar13 = *(longlong **)(lVar9 + 0x18);
      plVar10 = plVar13 + *(int *)(lVar9 + 0x20);
      iVar6 = 0;
      do {
        local_d0 = *plVar13;
        if ((local_d0 != 0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          uVar3 = (uint)((ulonglong)local_d0 >> 0x10);
          uVar7 = (uint)local_d0 & 0xffff;
          plVar5 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar5 = param_3 + 7;
          }
          iVar8 = *(int *)((longlong)plVar5 +
                          (ulonglong)
                          ((int)param_3[9] - 1U &
                          (int)((ulonglong)local_d0 >> 0x20) + ((uint)local_d0 << 0x10 | uVar7) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
          if (iVar8 != -1) {
            do {
              if (*(longlong *)(*param_3 + (longlong)iVar8 * 0x18) == local_d0) {
                local_d4 = (int)uStack_c0;
                local_b0 = &local_d0;
                local_a8 = &local_d4;
                FUN_1410952c6(&local_98,local_9c,&local_b0,0);
                uVar2 = uStack_c0;
                lVar9 = (longlong)(int)uStack_c0;
                uVar3 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar3);
                if (uStack_c0._4_4_ < uVar3) {
                  FUN_1446f48e2(&local_c8,uVar2 & 0xffffffff);
                }
                *(int *)(local_c8 + lVar9 * 4) = iVar6;
                break;
              }
              iVar8 = *(int *)(*param_3 + (longlong)iVar8 * 0x18 + 0x10);
            } while (iVar8 != -1);
          }
        }
        iVar6 = iVar6 + 1;
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar10);
    }
  }
  lVar9 = local_120;
  lVar11 = local_128;
  local_e8 = local_c8;
  local_e0 = (int)uStack_c0;
  FUN_146c28517(*(undefined8 *)(local_128 + 0x18),local_128 + 0xc0,*(undefined8 *)(local_120 + 0xc0)
               );
  local_f8 = local_c8;
  local_f0 = (int)uStack_c0;
  FUN_146c28606(*(undefined8 *)(lVar11 + 0x18),(longlong *)(lVar11 + 200),
                *(undefined8 *)(lVar9 + 200));
  local_108 = local_c8;
  local_100 = (int)uStack_c0;
  FUN_146c28702(*(undefined8 *)(lVar11 + 0x18),lVar11 + 0xd0,*(undefined8 *)(lVar9 + 0xd0));
  local_118 = local_c8;
  local_110 = (int)uStack_c0;
  FUN_146c28810(*(undefined8 *)(lVar11 + 0x18),lVar11 + 0xd8,*(undefined8 *)(lVar9 + 0xd8));
  lVar9 = *(longlong *)(lVar9 + 0xc0);
  if (((lVar9 != 0) && (lVar11 = *(longlong *)(lVar11 + 200), lVar11 != 0)) &&
     ((longlong)*(int *)(lVar11 + 0x20) != 0)) {
    piVar4 = *(int **)(lVar11 + 0x18);
    piVar1 = piVar4 + *(int *)(lVar11 + 0x20);
    do {
      iVar6 = *piVar4;
      if (((longlong)iVar6 < 0) || (*(int *)(lVar9 + 0x20) <= iVar6)) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + (longlong)iVar6 * 8);
      }
      iVar6 = -1;
      if ((int)uStack_90 != local_64) {
        uVar3 = (uint)((ulonglong)lVar11 >> 0x10);
        uVar7 = (uint)lVar11 & 0xffff;
        puVar12 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar12 = local_60;
        }
        iVar8 = *(int *)(puVar12 +
                        (ulonglong)
                        (local_50 - 1U &
                        (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar7) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
        while (iVar8 != -1) {
          plVar13 = (longlong *)(local_98 + (longlong)iVar8 * 0x14);
          if (*plVar13 == lVar11) {
            if (plVar13 + 1 != (longlong *)0x0 && plVar13 != (longlong *)0x0) {
              iVar6 = (int)plVar13[1];
            }
            break;
          }
          iVar8 = *(int *)((longlong)plVar13 + 0xc);
        }
      }
      *piVar4 = iVar6;
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_98);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c28517 FUN_146c28517 body=239 status=ok
// SIG undefined FUN_146c28517(void)

void FUN_146c28517(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if ((param_3 == 0) || ((int)param_4[1] == 0)) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000146c2855d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_149f3ab40;
    puVar4[2] = param_1;
    puVar4[3] = 0;
    puVar4[4] = 0;
    FUN_146bfef8e(puVar4 + 3,0);
    puVar1 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar4 = (undefined8 *)*param_2;
    }
    FUN_146bfef8e(puVar4 + 3);
    lVar3 = param_4[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_4;
      lVar5 = 0;
      do {
        *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar5 * 2) =
             *(undefined8 *)(*(longlong *)(param_3 + 0x18) + (longlong)*(int *)(lVar2 + lVar5) * 8);
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
    }
  }
  return;
}



// FUNCTION 146c28606 FUN_146c28606 body=252 status=ok
// SIG undefined FUN_146c28606(void)

void FUN_146c28606(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if ((param_3 == 0) || ((int)param_4[1] == 0)) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000146c286f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_149f3ac10;
    puVar4[2] = param_1;
    puVar4[3] = 0;
    puVar4[4] = 0;
    FUN_144a127d2(puVar4 + 3,0,1);
    puVar1 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar4 = (undefined8 *)*param_2;
    }
    FUN_144a127d2(puVar4 + 3,(int)param_4[1],1);
    lVar3 = param_4[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_4;
      lVar5 = 0;
      do {
        *(undefined4 *)(*(longlong *)(*param_2 + 0x18) + lVar5) =
             *(undefined4 *)(*(longlong *)(param_3 + 0x18) + (longlong)*(int *)(lVar2 + lVar5) * 4);
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
    }
  }
  return;
}



// FUNCTION 146c28702 FUN_146c28702 body=270 status=ok
// SIG undefined FUN_146c28702(void)

void FUN_146c28702(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_3 == 0) || ((int)param_4[1] == 0)) {
    puVar5 = (undefined8 *)*param_2;
    if (puVar5 != (undefined8 *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000146c28800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)(puVar5,1);
      return;
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_149f3adb0;
    puVar3[2] = param_1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    FUN_1407a57f6(puVar3 + 3,0,1);
    puVar5 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_1407a57f6(puVar3 + 3,(int)param_4[1]);
    lVar2 = param_4[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_4;
      lVar6 = 0;
      lVar7 = 0;
      do {
        puVar5 = (undefined8 *)
                 ((longlong)*(int *)(lVar1 + lVar6) * 0x60 + *(longlong *)(param_3 + 0x18));
        puVar3 = (undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar7);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar3 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
        }
        lVar7 = lVar7 + 0x60;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)lVar2 * 4 != lVar6);
    }
  }
  return;
}



// FUNCTION 146c28810 FUN_146c28810 body=258 status=ok
// SIG undefined FUN_146c28810(void)

void FUN_146c28810(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if ((param_3 == 0) || ((int)param_4[1] == 0)) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000146c28902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_149f3ace0;
    puVar5[2] = param_1;
    puVar5[3] = 0;
    puVar5[4] = 0;
    FUN_140330574(puVar5 + 3,0,1);
    puVar1 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar5;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar5 = (undefined8 *)*param_2;
    }
    FUN_140330574(puVar5 + 3,(int)param_4[1],1);
    lVar4 = param_4[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_4;
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)
                 (*(longlong *)(param_3 + 0x18) + (longlong)*(int *)(lVar2 + lVar6) * 0x10);
        uVar3 = puVar1[1];
        puVar5 = (undefined8 *)(*(longlong *)(*param_2 + 0x18) + lVar6 * 4);
        *puVar5 = *puVar1;
        puVar5[1] = uVar3;
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)lVar4 * 4 != lVar6);
    }
  }
  return;
}



// FUNCTION 146c28912 FUN_146c28912 body=244 status=ok
// SIG undefined FUN_146c28912(void)

void FUN_146c28912(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  byte param_5,byte param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  
  if (param_3 != 0 || (param_6 | param_5) != 0) {
    bVar3 = param_3 != 0 | (param_6 | param_5) ^ 1;
  }
  else {
    bVar3 = *param_2 != 0;
  }
  if (((byte)(bVar3 ^ 1 | param_5) == 1) &&
     (puVar1 = (undefined8 *)*param_2, puVar1 != (undefined8 *)0x0)) {
    *param_2 = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (bVar3 != 0) {
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_3 + 0x20);
    }
    if (*param_2 == 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_149f3ab40;
      puVar2[2] = param_1;
      puVar2[3] = 0;
      puVar2[4] = 0;
      FUN_146bfef8e(puVar2 + 3,0);
      puVar1 = (undefined8 *)*param_2;
      *param_2 = (longlong)puVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        puVar2 = (undefined8 *)*param_2;
      }
      FUN_146bfef22(puVar2 + 3,param_4,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 146c28a06 FUN_146c28a06 body=247 status=ok
// SIG undefined FUN_146c28a06(void)

void FUN_146c28a06(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  byte param_5,byte param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  
  if (param_3 != 0 || (param_6 | param_5) != 0) {
    bVar3 = param_3 != 0 | (param_6 | param_5) ^ 1;
  }
  else {
    bVar3 = *param_2 != 0;
  }
  if (((byte)(bVar3 ^ 1 | param_5) == 1) &&
     (puVar1 = (undefined8 *)*param_2, puVar1 != (undefined8 *)0x0)) {
    *param_2 = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (bVar3 != 0) {
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_3 + 0x20);
    }
    if (*param_2 == 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_149f3ac10;
      puVar2[2] = param_1;
      puVar2[3] = 0;
      puVar2[4] = 0;
      FUN_144a127d2(puVar2 + 3,0,1);
      puVar1 = (undefined8 *)*param_2;
      *param_2 = (longlong)puVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        puVar2 = (undefined8 *)*param_2;
      }
      FUN_1448156a8(puVar2 + 3,param_4,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 146c28afd FUN_146c28afd body=242 status=ok
// SIG undefined FUN_146c28afd(void)

void FUN_146c28afd(undefined8 param_1,longlong *param_2,longlong param_3,byte param_4,byte param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  
  if (param_3 != 0 || (param_5 | param_4) != 0) {
    bVar4 = param_3 != 0 | (param_5 | param_4) ^ 1;
  }
  else {
    bVar4 = *param_2 != 0;
  }
  if (((byte)(bVar4 ^ 1 | param_4) == 1) &&
     (puVar1 = (undefined8 *)*param_2, puVar1 != (undefined8 *)0x0)) {
    *param_2 = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (bVar4 != 0) {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_3 + 0x20);
    }
    if (*param_2 == 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_149f3adb0;
      puVar2[2] = param_1;
      puVar2[3] = 0;
      puVar2[4] = 0;
      FUN_1407a57f6(puVar2 + 3,0,1);
      puVar1 = (undefined8 *)*param_2;
      *param_2 = (longlong)puVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        puVar2 = (undefined8 *)*param_2;
      }
      FUN_146bff40c(puVar2 + 3,&DAT_14c846480,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 146c28bef FUN_146c28bef body=247 status=ok
// SIG undefined FUN_146c28bef(void)

void FUN_146c28bef(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  byte param_5,byte param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  
  if (param_3 != 0 || (param_6 | param_5) != 0) {
    bVar3 = param_3 != 0 | (param_6 | param_5) ^ 1;
  }
  else {
    bVar3 = *param_2 != 0;
  }
  if (((byte)(bVar3 ^ 1 | param_5) == 1) &&
     (puVar1 = (undefined8 *)*param_2, puVar1 != (undefined8 *)0x0)) {
    *param_2 = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (bVar3 != 0) {
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_3 + 0x20);
    }
    if (*param_2 == 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_149f3ace0;
      puVar2[2] = param_1;
      puVar2[3] = 0;
      puVar2[4] = 0;
      FUN_140330574(puVar2 + 3,0,1);
      puVar1 = (undefined8 *)*param_2;
      *param_2 = (longlong)puVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        puVar2 = (undefined8 *)*param_2;
      }
      FUN_146bff226(puVar2 + 3,param_4,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 146c28ce6 FUN_146c28ce6 body=156 status=ok
// SIG undefined FUN_146c28ce6(void)

void FUN_146c28ce6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 200);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 200) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000146c28d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146c28d82 FUN_146c28d82 body=717 status=ok
// SIG undefined FUN_146c28d82(void)

char FUN_146c28d82(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined1 auStack_d8 [47];
  char local_a9;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar10 = FUN_146c27d3e(param_2);
  if ((cVar10 != '\0') && (lVar3 = *(longlong *)(param_2 + 0xc0), lVar3 != 0)) {
    lVar14 = *(longlong *)(param_1 + 0xc0);
    local_a9 = cVar10;
    if (lVar14 == 0) {
      FUN_146c26078(param_1);
      lVar14 = *(longlong *)(param_1 + 0xc0);
    }
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_a8 = *(undefined8 *)(lVar14 + 0x18);
    local_a0 = *(undefined4 *)(lVar14 + 0x20);
    FUN_140ce09a0();
    iVar11 = *(int *)(lVar3 + 0x20);
    if (0 < iVar11) {
      lVar14 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + 0x18);
        if ((int)uStack_90 != local_64) {
          lVar5 = *(longlong *)(lVar4 + lVar14 * 8);
          uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
          uVar17 = (uint)lVar5 & 0xffff;
          puVar13 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar13 = local_60;
          }
          for (iVar2 = *(int *)(puVar13 +
                               (ulonglong)
                               (local_50 - 1U &
                               (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar17) +
                               (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar17 >> 4)) * 4); iVar2 != -1;
              iVar2 = *(int *)((longlong)iVar2 * 0x10 + local_98 + 8)) {
            if (*(longlong *)(local_98 + (longlong)iVar2 * 0x10) == lVar5) goto LAB_146c28f42;
          }
        }
        lVar5 = *(longlong *)(param_1 + 0xc0);
        iVar11 = *(int *)(lVar5 + 0x20);
        *(uint *)(lVar5 + 0x20) = iVar11 + 1U;
        if (*(uint *)(lVar5 + 0x24) < iVar11 + 1U) {
          FUN_1446f84a2((longlong *)(lVar5 + 0x18),iVar11);
        }
        *(undefined8 *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar11 * 8) =
             *(undefined8 *)(lVar4 + lVar14 * 8);
        lVar4 = *(longlong *)(param_1 + 200);
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 200) + 0x18);
        iVar11 = *(int *)(lVar4 + 0x20);
        *(uint *)(lVar4 + 0x20) = iVar11 + 1U;
        if (*(uint *)(lVar4 + 0x24) < iVar11 + 1U) {
          FUN_1446f48e2((longlong *)(lVar4 + 0x18),iVar11);
        }
        *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar11 * 4) =
             *(undefined4 *)(lVar5 + lVar14 * 4);
        lVar4 = *(longlong *)(param_1 + 0xd0);
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x18);
        iVar11 = *(int *)(lVar4 + 0x20);
        *(uint *)(lVar4 + 0x20) = iVar11 + 1U;
        if (*(uint *)(lVar4 + 0x24) < iVar11 + 1U) {
          FUN_144a2c682((longlong *)(lVar4 + 0x18),iVar11);
        }
        puVar15 = (undefined8 *)(lVar14 * 0x60 + lVar5);
        puVar16 = (undefined8 *)((longlong)iVar11 * 0x60 + *(longlong *)(lVar4 + 0x18));
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar16 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        lVar4 = *(longlong *)(param_1 + 0xd8);
        puVar18 = (undefined4 *)
                  (lVar14 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 0xd8) + 0x18));
        iVar11 = *(int *)(lVar4 + 0x20);
        *(uint *)(lVar4 + 0x20) = iVar11 + 1U;
        if (*(uint *)(lVar4 + 0x24) < iVar11 + 1U) {
          FUN_1449e2712((longlong *)(lVar4 + 0x18),iVar11);
        }
        uVar7 = puVar18[1];
        uVar8 = puVar18[2];
        uVar9 = puVar18[3];
        puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar11 * 0x10);
        *puVar1 = *puVar18;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        iVar11 = *(int *)(lVar3 + 0x20);
LAB_146c28f42:
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar11);
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(&local_98);
    cVar10 = local_a9;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return cVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c29050 FUN_146c29050 body=243 status=ok
// SIG undefined FUN_146c29050(void)

void FUN_146c29050(longlong *param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x60) + (ulonglong)(param_3 >> 9) * 8) +
           (ulonglong)(param_3 & 0x1ff) * 4);
  lVar4 = param_1[3];
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x48) + (ulonglong)(param_3 >> 5 & 0x3fffff8));
  local_44 = *(undefined4 *)(lVar6 + (ulonglong)(param_3 & 0xff) * 8);
  local_48 = *(undefined4 *)(lVar6 + 4 + (ulonglong)(param_3 & 0xff) * 8);
  puVar7 = &local_44;
  bVar5 = true;
  do {
    bVar8 = bVar5;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_14475e4ac(param_1 + 2,iVar2);
    }
    *(undefined4 *)(param_1[2] + (longlong)iVar2 * 4) = *puVar7;
    puVar7 = &local_48;
    bVar5 = false;
  } while (bVar8);
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_146c57436(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(uint *)(lVar3 + lVar6 * 0xc) = param_3;
  *(int *)(lVar3 + 4 + lVar6 * 0xc) = (int)lVar4;
  *(undefined4 *)(lVar3 + 8 + lVar6 * 0xc) = uVar1;
  return;
}



// FUNCTION 146c29144 FUN_146c29144 body=165 status=ok
// SIG undefined FUN_146c29144(void)

void FUN_146c29144(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = param_3 * 3 + 2;
  lVar5 = *(longlong *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar7 = param_3 * 3 + 1;
  uVar2 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar3 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
           (ulonglong)(param_3 * 3 & 0x1ff) * 4);
  iVar4 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
    FUN_146c574ca((longlong *)(param_1 + 0x20),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = (longlong)iVar4 * 0x10;
  *(int *)(lVar5 + lVar6) = param_3;
  *(undefined4 *)(lVar5 + 4 + lVar6) = uVar3;
  *(undefined4 *)(lVar5 + 8 + lVar6) = uVar2;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = uVar1;
  return;
}



// FUNCTION 146c291ea FUN_146c291ea body=249 status=ok
// SIG undefined FUN_146c291ea(void)

void FUN_146c291ea(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 *puVar6;
  bool bVar7;
  longlong lVar8;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x60) + (ulonglong)(param_3 >> 9) * 8) +
           (ulonglong)(param_3 & 0x1ff) * 4);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x48) + (ulonglong)(param_3 >> 5 & 0x3fffff8));
  local_44 = *(undefined4 *)(lVar8 + (ulonglong)(param_3 & 0xff) * 8);
  local_48 = *(undefined4 *)(lVar8 + 4 + (ulonglong)(param_3 & 0xff) * 8);
  puVar6 = &local_44;
  bVar5 = true;
  do {
    bVar7 = bVar5;
    iVar3 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
      FUN_14475e4ac((longlong *)(param_1 + 0x40),iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 4) = *puVar6;
    puVar6 = &local_48;
    bVar5 = false;
  } while (bVar7);
  iVar3 = *(int *)(param_1 + 0x38);
  lVar8 = (longlong)iVar3;
  *(uint *)(param_1 + 0x38) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
    FUN_146c57436((longlong *)(param_1 + 0x30),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  *(uint *)(lVar4 + lVar8 * 0xc) = param_3;
  *(undefined4 *)(lVar4 + 4 + lVar8 * 0xc) = uVar2;
  *(undefined4 *)(lVar4 + 8 + lVar8 * 0xc) = uVar1;
  return;
}



// FUNCTION 146c292e4 FUN_146c292e4 body=165 status=ok
// SIG undefined FUN_146c292e4(void)

void FUN_146c292e4(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = param_3 * 3 + 2;
  lVar5 = *(longlong *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar7 = param_3 * 3 + 1;
  uVar2 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar3 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
           (ulonglong)(param_3 * 3 & 0x1ff) * 4);
  iVar4 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar4 + 1U) {
    FUN_146c574ca((longlong *)(param_1 + 0x50),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x50);
  lVar6 = (longlong)iVar4 * 0x10;
  *(int *)(lVar5 + lVar6) = param_3;
  *(undefined4 *)(lVar5 + 4 + lVar6) = uVar3;
  *(undefined4 *)(lVar5 + 8 + lVar6) = uVar2;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = uVar1;
  return;
}



// FUNCTION 146c2938a FUN_146c2938a body=47 status=ok
// SIG undefined FUN_146c2938a(void)

void FUN_146c2938a(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_146c293ba(param_2,param_1,param_1 + 0x10,param_1 + 0x20);
    return;
  }
  FUN_146c293ba(param_2,param_1 + 0x30,param_1 + 0x40,param_1 + 0x50);
  return;
}



// FUNCTION 146c293ba FUN_146c293ba body=266 status=ok
// SIG undefined FUN_146c293ba(void)

void FUN_146c293ba(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar9 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + lVar9);
      if ((((int)uVar1 < 0) ||
          (*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc) <= (int)uVar1)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 9) * 8
                                        ) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
        FUN_146c294c4(param_1,uVar1,(longlong)*(int *)(lVar2 + 4 + lVar9) * 4 + *param_3,1);
      }
      else {
        lVar5 = (longlong)*(int *)(lVar2 + 4 + lVar9);
        lVar3 = *param_3;
        uVar6 = (ulonglong)((uVar1 & 0xff) << 3);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar1 >> 8) * 8) + uVar6) =
             *(undefined4 *)(lVar3 + lVar5 * 4);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar1 >> 8) * 8) + 4 + uVar6) =
             *(undefined4 *)(lVar3 + 4 + lVar5 * 4);
      }
      lVar9 = lVar9 + 0xc;
    } while ((longlong)(int)lVar4 * 0xc != lVar9);
  }
  FUN_146c2cfb6(param_1 + 8);
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    puVar8 = (undefined4 *)*param_4;
    puVar7 = puVar8 + (longlong)*(int *)(param_4 + 1) * 4;
    do {
      FUN_146c01486(param_1,*puVar8,puVar8 + 1,1);
      puVar8 = puVar8 + 4;
    } while (puVar8 != puVar7);
  }
  return;
}



// FUNCTION 146c294c4 FUN_146c294c4 body=232 status=ok
// SIG undefined FUN_146c294c4(void)

undefined8 FUN_146c294c4(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((((int)param_2 < 0) ||
      (*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc) <= (int)param_2)) ||
     (uVar3 = 0x1f,
     0xfffd < (ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                                 (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    if (param_4 == '\0') {
      cVar2 = FUN_146c0943e(param_1 + 8,param_2);
    }
    else {
      cVar2 = FUN_146c09394();
    }
    uVar3 = 0x20;
    if (cVar2 != '\0') {
      iVar5 = param_2 * 2 + 1;
      lVar6 = 4;
      do {
        FUN_146bfd34a(param_1 + 0x40,param_3 + lVar6,iVar5);
        lVar6 = lVar6 + -4;
        iVar5 = iVar5 + -1;
      } while (lVar6 != -4);
      iVar5 = *(int *)(param_1 + 0x58);
      iVar1 = *(int *)(param_1 + 0x5c);
      FUN_146bedf4e(param_1 + 0x58,&DAT_149f3b198,param_2);
      uVar3 = 0;
      for (uVar4 = iVar5 * 0x200 + iVar1; uVar4 < param_2; uVar4 = uVar4 + 1) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar4 >> 9) * 8) +
         (ulonglong)(uVar4 & 0x1ff) * 4) = 0xffffffff;
      }
    }
  }
  return uVar3;
}



// FUNCTION 146c295ac FUN_146c295ac body=259 status=ok
// SIG undefined FUN_146c295ac(void)

void FUN_146c295ac(longlong *param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  undefined4 auStack_4c [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x60) + (ulonglong)(param_3 >> 9) * 8) +
           (ulonglong)(param_3 & 0x1ff) * 4);
  lVar3 = param_1[3];
  lVar6 = *(longlong *)(param_2 + 0x48);
  lVar4 = 0;
  do {
    uVar5 = param_3 * 3 + (int)lVar4;
    auStack_4c[lVar4] =
         *(undefined4 *)
          (*(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  lVar6 = 0;
  do {
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_14475e4ac(param_1 + 2,iVar2);
    }
    *(undefined4 *)(param_1[2] + (longlong)iVar2 * 4) = auStack_4c[lVar6];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_146c57550(param_1,iVar2);
  }
  lVar4 = *param_1;
  *(uint *)(lVar4 + lVar6 * 0xc) = param_3;
  *(int *)(lVar4 + 4 + lVar6 * 0xc) = (int)lVar3;
  *(undefined4 *)(lVar4 + 8 + lVar6 * 0xc) = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c296b0 FUN_146c296b0 body=165 status=ok
// SIG undefined FUN_146c296b0(void)

void FUN_146c296b0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = param_3 * 3 + 2;
  lVar5 = *(longlong *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar7 = param_3 * 3 + 1;
  uVar2 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar3 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
           (ulonglong)(param_3 * 3 & 0x1ff) * 4);
  iVar4 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
    FUN_146c575e4((longlong *)(param_1 + 0x20),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = (longlong)iVar4 * 0x10;
  *(int *)(lVar5 + lVar6) = param_3;
  *(undefined4 *)(lVar5 + 4 + lVar6) = uVar3;
  *(undefined4 *)(lVar5 + 8 + lVar6) = uVar2;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = uVar1;
  return;
}



// FUNCTION 146c29756 FUN_146c29756 body=265 status=ok
// SIG undefined FUN_146c29756(void)

void FUN_146c29756(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  undefined4 auStack_4c [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x60) + (ulonglong)(param_3 >> 9) * 8) +
           (ulonglong)(param_3 & 0x1ff) * 4);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  lVar6 = *(longlong *)(param_2 + 0x48);
  lVar4 = 0;
  do {
    uVar5 = param_3 * 3 + (int)lVar4;
    auStack_4c[lVar4] =
         *(undefined4 *)
          (*(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  lVar6 = 0;
  do {
    iVar3 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
      FUN_14475e4ac((longlong *)(param_1 + 0x40),iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 4) = auStack_4c[lVar6];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  iVar3 = *(int *)(param_1 + 0x38);
  lVar6 = (longlong)iVar3;
  *(uint *)(param_1 + 0x38) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
    FUN_146c57550((longlong *)(param_1 + 0x30),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  *(uint *)(lVar4 + lVar6 * 0xc) = param_3;
  *(undefined4 *)(lVar4 + 4 + lVar6 * 0xc) = uVar2;
  *(undefined4 *)(lVar4 + 8 + lVar6 * 0xc) = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c29860 FUN_146c29860 body=165 status=ok
// SIG undefined FUN_146c29860(void)

void FUN_146c29860(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = param_3 * 3 + 2;
  lVar5 = *(longlong *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar7 = param_3 * 3 + 1;
  uVar2 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar3 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
           (ulonglong)(param_3 * 3 & 0x1ff) * 4);
  iVar4 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar4 + 1U) {
    FUN_146c575e4((longlong *)(param_1 + 0x50),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x50);
  lVar6 = (longlong)iVar4 * 0x10;
  *(int *)(lVar5 + lVar6) = param_3;
  *(undefined4 *)(lVar5 + 4 + lVar6) = uVar3;
  *(undefined4 *)(lVar5 + 8 + lVar6) = uVar2;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = uVar1;
  return;
}



// FUNCTION 146c29906 FUN_146c29906 body=47 status=ok
// SIG undefined FUN_146c29906(void)

void FUN_146c29906(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_146c29936(param_2,param_1,param_1 + 0x10,param_1 + 0x20);
    return;
  }
  FUN_146c29936(param_2,param_1 + 0x30,param_1 + 0x40,param_1 + 0x50);
  return;
}



// FUNCTION 146c29936 FUN_146c29936 body=256 status=ok
// SIG undefined FUN_146c29936(void)

void FUN_146c29936(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar9 = (uint *)*param_2;
    puVar1 = puVar9 + (longlong)*(int *)(param_2 + 1) * 3;
    do {
      uVar2 = *puVar9;
      if ((((int)uVar2 < 0) ||
          (*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc) <= (int)uVar2)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8
                                        ) + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
        FUN_146c29a36(param_1,uVar2,(longlong)(int)puVar9[1] * 4 + *param_3);
      }
      else {
        uVar3 = puVar9[1];
        lVar4 = *param_3;
        lVar5 = 0;
        do {
          uVar8 = uVar2 * 3 + (int)lVar5;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar8 >> 9) * 8) +
           (ulonglong)(uVar8 & 0x1ff) * 4) =
               *(undefined4 *)((longlong)(int)uVar3 * 4 + lVar4 + lVar5 * 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
      }
      puVar9 = puVar9 + 3;
    } while (puVar9 != puVar1);
  }
  FUN_146c2cfb6(param_1 + 8);
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    puVar7 = (undefined4 *)*param_4;
    puVar6 = puVar7 + (longlong)*(int *)(param_4 + 1) * 4;
    do {
      FUN_146c01580(param_1,*puVar7,puVar7 + 1,1);
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar6);
  }
  return;
}



// FUNCTION 146c29a36 FUN_146c29a36 body=211 status=ok
// SIG undefined FUN_146c29a36(void)

void FUN_146c29a36(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((((int)param_2 < 0) ||
      (*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc) <= (int)param_2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8)
                                  + (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    cVar3 = FUN_146c09394(param_1 + 8,param_2);
    if (cVar3 != '\0') {
      param_3 = param_3 + 8;
      lVar5 = 0;
      do {
        FUN_146bfd34a(param_1 + 0x40,param_3,param_2 * 3 + 2 + (int)lVar5);
        lVar5 = lVar5 + -1;
        param_3 = param_3 + -4;
      } while (lVar5 != -3);
      iVar1 = *(int *)(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x5c);
      FUN_146bedf4e(param_1 + 0x58,&DAT_149f3b198,param_2);
      for (uVar4 = iVar1 * 0x200 + iVar2; uVar4 < param_2; uVar4 = uVar4 + 1) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar4 >> 9) * 8) +
         (ulonglong)(uVar4 & 0x1ff) * 4) = 0xffffffff;
      }
    }
  }
  return;
}



// FUNCTION 146c29b0a FUN_146c29b0a body=245 status=ok
// SIG undefined FUN_146c29b0a(void)

void FUN_146c29b0a(longlong *param_1,longlong param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58 [6];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x60) + (ulonglong)(param_3 >> 9) * 8) +
           (ulonglong)(param_3 & 0x1ff) * 4);
  lVar5 = param_1[3];
  puVar1 = (undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x48) + (ulonglong)(param_3 >> 4 & 0x3fffff8)) +
           (ulonglong)((param_3 & 0x7f) << 4));
  local_58[0] = *puVar1;
  local_58[1] = puVar1[1];
  local_58[2] = puVar1[2];
  local_58[3] = puVar1[3];
  lVar6 = 0;
  do {
    iVar3 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
      FUN_14475e4ac(param_1 + 2,iVar3);
    }
    *(undefined4 *)(param_1[2] + (longlong)iVar3 * 4) = local_58[lVar6];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_146c5766a(param_1,iVar3);
  }
  lVar4 = *param_1;
  *(uint *)(lVar4 + lVar6 * 0xc) = param_3;
  *(int *)(lVar4 + 4 + lVar6 * 0xc) = (int)lVar5;
  *(undefined4 *)(lVar4 + 8 + lVar6 * 0xc) = uVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c29c00 FUN_146c29c00 body=165 status=ok
// SIG undefined FUN_146c29c00(void)

void FUN_146c29c00(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = param_3 * 3 + 2;
  lVar5 = *(longlong *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar7 = param_3 * 3 + 1;
  uVar2 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar3 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
           (ulonglong)(param_3 * 3 & 0x1ff) * 4);
  iVar4 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
    FUN_146c576fe((longlong *)(param_1 + 0x20),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = (longlong)iVar4 * 0x10;
  *(int *)(lVar5 + lVar6) = param_3;
  *(undefined4 *)(lVar5 + 4 + lVar6) = uVar3;
  *(undefined4 *)(lVar5 + 8 + lVar6) = uVar2;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = uVar1;
  return;
}



// FUNCTION 146c29ca6 FUN_146c29ca6 body=251 status=ok
// SIG undefined FUN_146c29ca6(void)

void FUN_146c29ca6(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58 [6];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x60) + (ulonglong)(param_3 >> 9) * 8) +
           (ulonglong)(param_3 & 0x1ff) * 4);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  puVar1 = (undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x48) + (ulonglong)(param_3 >> 4 & 0x3fffff8)) +
           (ulonglong)((param_3 & 0x7f) << 4));
  local_58[0] = *puVar1;
  local_58[1] = puVar1[1];
  local_58[2] = puVar1[2];
  local_58[3] = puVar1[3];
  lVar6 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar4 + 1U) {
      FUN_14475e4ac((longlong *)(param_1 + 0x40),iVar4);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar4 * 4) = local_58[lVar6];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  iVar4 = *(int *)(param_1 + 0x38);
  lVar6 = (longlong)iVar4;
  *(uint *)(param_1 + 0x38) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
    FUN_146c5766a((longlong *)(param_1 + 0x30),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  *(uint *)(lVar5 + lVar6 * 0xc) = param_3;
  *(undefined4 *)(lVar5 + 4 + lVar6 * 0xc) = uVar3;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0xc) = uVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c29da2 FUN_146c29da2 body=165 status=ok
// SIG undefined FUN_146c29da2(void)

void FUN_146c29da2(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = param_3 * 3 + 2;
  lVar5 = *(longlong *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar7 = param_3 * 3 + 1;
  uVar2 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  uVar3 = *(undefined4 *)
           (*(longlong *)(lVar5 + (ulonglong)((uint)(param_3 * 3) >> 9) * 8) +
           (ulonglong)(param_3 * 3 & 0x1ff) * 4);
  iVar4 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar4 + 1U) {
    FUN_146c576fe((longlong *)(param_1 + 0x50),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x50);
  lVar6 = (longlong)iVar4 * 0x10;
  *(int *)(lVar5 + lVar6) = param_3;
  *(undefined4 *)(lVar5 + 4 + lVar6) = uVar3;
  *(undefined4 *)(lVar5 + 8 + lVar6) = uVar2;
  *(undefined4 *)(lVar5 + 0xc + lVar6) = uVar1;
  return;
}



// FUNCTION 146c29e48 FUN_146c29e48 body=47 status=ok
// SIG undefined FUN_146c29e48(void)

void FUN_146c29e48(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_146c29e78(param_2,param_1,param_1 + 0x10,param_1 + 0x20);
    return;
  }
  FUN_146c29e78(param_2,param_1 + 0x30,param_1 + 0x40,param_1 + 0x50);
  return;
}



// FUNCTION 146c29e78 FUN_146c29e78 body=257 status=ok
// SIG undefined FUN_146c29e78(void)

void FUN_146c29e78(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint *puVar8;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar8 = (uint *)*param_2;
    puVar1 = puVar8 + (longlong)*(int *)(param_2 + 1) * 3;
    do {
      uVar2 = *puVar8;
      if ((((int)uVar2 < 0) ||
          (*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc) <= (int)uVar2)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8
                                        ) + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
        FUN_146c29f7a(param_1);
      }
      else {
        uVar3 = puVar8[1];
        lVar4 = *param_3;
        lVar7 = 0;
        do {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar2 >> 7 & 0x7fffff) * 8) +
            (ulonglong)((uVar2 & 0x7f) << 4) + lVar7 * 4) =
               *(undefined4 *)((longlong)(int)uVar3 * 4 + lVar4 + lVar7 * 4);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 4);
      }
      puVar8 = puVar8 + 3;
    } while (puVar8 != puVar1);
  }
  FUN_146c2cfb6(param_1 + 8);
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    puVar6 = (undefined4 *)*param_4;
    puVar5 = puVar6 + (longlong)*(int *)(param_4 + 1) * 4;
    do {
      FUN_146c2a048(param_1,*puVar6,puVar6 + 1,1);
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar5);
  }
  return;
}



// FUNCTION 146c29f7a FUN_146c29f7a body=206 status=ok
// SIG undefined FUN_146c29f7a(void)

void FUN_146c29f7a(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if ((((int)param_2 < 0) ||
      (*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc) <= (int)param_2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8)
                                  + (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    cVar2 = FUN_146c09394(param_1 + 8,param_2);
    if (cVar2 != '\0') {
      iVar4 = param_2 * 4 + 3;
      lVar5 = 0xc;
      do {
        FUN_146bfd34a(param_1 + 0x40,param_3 + lVar5,iVar4);
        lVar5 = lVar5 + -4;
        iVar4 = iVar4 + -1;
      } while (lVar5 != -4);
      iVar4 = *(int *)(param_1 + 0x58);
      iVar1 = *(int *)(param_1 + 0x5c);
      FUN_146bedf4e(param_1 + 0x58,&DAT_149f3b198,param_2);
      for (uVar3 = iVar4 * 0x200 + iVar1; uVar3 < param_2; uVar3 = uVar3 + 1) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar3 >> 9) * 8) +
         (ulonglong)(uVar3 & 0x1ff) * 4) = 0xffffffff;
      }
    }
  }
  return;
}



// FUNCTION 146c2a048 FUN_146c2a048 body=250 status=ok
// SIG undefined FUN_146c2a048(void)

undefined8 FUN_146c2a048(longlong param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar1 = *param_3;
  uVar5 = 1;
  if ((((((-1 < (int)uVar1) &&
         (uVar6 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc), (int)uVar1 < (int)uVar6))
        && (lVar4 = *(longlong *)(param_1 + 0x10),
           (ushort)(*(short *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                              (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
       ((uVar2 = param_3[1], uVar2 < uVar6 && -1 < (int)uVar2 &&
        ((ushort)(*(short *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                            (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)))) &&
      ((uVar3 = param_3[2], uVar3 < uVar6 && -1 < (int)uVar3 &&
       (((ushort)(*(short *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                            (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe &&
        (uVar5 = 0x17, uVar1 != uVar2)))))) && (uVar2 != uVar3 && uVar1 != uVar3)) {
    FUN_146c33062();
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 146c2a142 FUN_146c2a142 body=105 status=ok
// SIG undefined FUN_146c2a142(void)

void FUN_146c2a142(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    FUN_146c43c78(lVar1);
    FUN_1400020a8(lVar1);
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
    return;
  }
  return;
}



// FUNCTION 146c2a1ac FUN_146c2a1ac body=289 status=ok
// SIG undefined FUN_146c2a1ac(void)

void FUN_146c2a1ac(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined4 local_85;
  undefined1 local_81;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_146c03e30(param_2,&local_c0);
  local_50 = local_a0;
  uStack_4c = uStack_9c;
  uStack_48 = uStack_98;
  uStack_44 = uStack_94;
  local_60 = local_b0;
  uStack_5c = uStack_ac;
  uStack_58 = uStack_a8;
  uStack_54 = uStack_a4;
  local_70 = local_c0;
  uStack_6c = uStack_bc;
  uStack_68 = uStack_b8;
  uStack_64 = uStack_b4;
  local_7c = local_85;
  local_78 = local_81;
  iVar2 = (int)param_1[1];
  lVar4 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_146c57784(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar4 * 0x48) = param_3;
  puVar1 = (undefined4 *)(lVar3 + 4 + lVar4 * 0x48);
  *puVar1 = uStack_74;
  puVar1[1] = local_70;
  puVar1[2] = uStack_6c;
  puVar1[3] = uStack_68;
  puVar1 = (undefined4 *)(lVar3 + 0x14 + lVar4 * 0x48);
  *puVar1 = uStack_64;
  puVar1[1] = local_60;
  puVar1[2] = uStack_5c;
  puVar1[3] = uStack_58;
  puVar1 = (undefined4 *)(lVar3 + 0x24 + lVar4 * 0x48);
  *puVar1 = uStack_54;
  puVar1[1] = local_50;
  puVar1[2] = uStack_4c;
  puVar1[3] = uStack_48;
  *(undefined4 *)(lVar3 + 0x34 + lVar4 * 0x48) = uStack_44;
  *(undefined8 *)(lVar3 + 0x38 + lVar4 * 0x48) = local_90;
  *(undefined1 *)(lVar3 + 0x40 + lVar4 * 0x48) = local_88;
  *(undefined1 *)(lVar3 + 0x41 + lVar4 * 0x48) = local_87;
  *(undefined1 *)(lVar3 + 0x42 + lVar4 * 0x48) = local_86;
  *(undefined4 *)(lVar3 + 0x43 + lVar4 * 0x48) = local_7c;
  *(undefined1 *)(lVar3 + 0x47 + lVar4 * 0x48) = local_78;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2a2ce FUN_146c2a2ce body=230 status=ok
// SIG undefined FUN_146c2a2ce(void)

void FUN_146c2a2ce(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  lVar10 = (ulonglong)((param_3 & 0x1ff) << 2) * 3;
  uVar1 = *(undefined4 *)(lVar8 + lVar10);
  uVar2 = *(undefined4 *)(lVar8 + 4 + lVar10);
  uVar3 = *(undefined4 *)(lVar8 + 8 + lVar10);
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(param_3 >> 9) * 8);
  uVar4 = *(undefined4 *)(lVar8 + lVar10);
  uVar5 = *(undefined4 *)(lVar8 + 4 + lVar10);
  uVar6 = *(undefined4 *)(lVar8 + 8 + lVar10);
  uVar9 = FUN_146bc96d4(param_2,param_3);
  iVar7 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar7 + 1U) {
    FUN_146c57818((longlong *)(param_1 + 0x10),iVar7);
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar10 = (longlong)iVar7 * 0x20;
  *(uint *)(lVar8 + lVar10) = param_3;
  *(undefined4 *)(lVar8 + 4 + lVar10) = uVar1;
  *(undefined4 *)(lVar8 + 8 + lVar10) = uVar2;
  *(undefined4 *)(lVar8 + 0xc + lVar10) = uVar3;
  *(undefined4 *)(lVar8 + 0x10 + lVar10) = uVar4;
  *(undefined4 *)(lVar8 + 0x14 + lVar10) = uVar5;
  *(undefined4 *)(lVar8 + 0x18 + lVar10) = uVar6;
  *(undefined4 *)(lVar8 + 0x1c + lVar10) = uVar9;
  return;
}



// FUNCTION 146c2a3b4 FUN_146c2a3b4 body=296 status=ok
// SIG undefined FUN_146c2a3b4(void)

void FUN_146c2a3b4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined4 local_8d;
  undefined1 local_89;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_146c03e30(param_2,&local_c8);
  local_58 = local_a8;
  uStack_54 = uStack_a4;
  uStack_50 = uStack_a0;
  uStack_4c = uStack_9c;
  local_68 = local_b8;
  uStack_64 = uStack_b4;
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  local_78 = local_c8;
  uStack_74 = uStack_c4;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
  local_84 = local_8d;
  local_80 = local_89;
  iVar2 = *(int *)(param_1 + 0x28);
  lVar4 = (longlong)iVar2;
  *(uint *)(param_1 + 0x28) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
    FUN_146c57784((longlong *)(param_1 + 0x20),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar3 + lVar4 * 0x48) = param_3;
  puVar1 = (undefined4 *)(lVar3 + 4 + lVar4 * 0x48);
  *puVar1 = uStack_7c;
  puVar1[1] = local_78;
  puVar1[2] = uStack_74;
  puVar1[3] = uStack_70;
  puVar1 = (undefined4 *)(lVar3 + 0x14 + lVar4 * 0x48);
  *puVar1 = uStack_6c;
  puVar1[1] = local_68;
  puVar1[2] = uStack_64;
  puVar1[3] = uStack_60;
  puVar1 = (undefined4 *)(lVar3 + 0x24 + lVar4 * 0x48);
  *puVar1 = uStack_5c;
  puVar1[1] = local_58;
  puVar1[2] = uStack_54;
  puVar1[3] = uStack_50;
  *(undefined4 *)(lVar3 + 0x34 + lVar4 * 0x48) = uStack_4c;
  *(undefined8 *)(lVar3 + 0x38 + lVar4 * 0x48) = local_98;
  *(undefined1 *)(lVar3 + 0x40 + lVar4 * 0x48) = local_90;
  *(undefined1 *)(lVar3 + 0x41 + lVar4 * 0x48) = local_8f;
  *(undefined1 *)(lVar3 + 0x42 + lVar4 * 0x48) = local_8e;
  *(undefined4 *)(lVar3 + 0x43 + lVar4 * 0x48) = local_84;
  *(undefined1 *)(lVar3 + 0x47 + lVar4 * 0x48) = local_80;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2a4de FUN_146c2a4de body=230 status=ok
// SIG undefined FUN_146c2a4de(void)

void FUN_146c2a4de(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  lVar10 = (ulonglong)((param_3 & 0x1ff) << 2) * 3;
  uVar1 = *(undefined4 *)(lVar8 + lVar10);
  uVar2 = *(undefined4 *)(lVar8 + 4 + lVar10);
  uVar3 = *(undefined4 *)(lVar8 + 8 + lVar10);
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x180) + (ulonglong)(param_3 >> 9) * 8);
  uVar4 = *(undefined4 *)(lVar8 + lVar10);
  uVar5 = *(undefined4 *)(lVar8 + 4 + lVar10);
  uVar6 = *(undefined4 *)(lVar8 + 8 + lVar10);
  uVar9 = FUN_146bc96d4(param_2,param_3);
  iVar7 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar7 + 1U) {
    FUN_146c57818((longlong *)(param_1 + 0x30),iVar7);
  }
  lVar8 = *(longlong *)(param_1 + 0x30);
  lVar10 = (longlong)iVar7 * 0x20;
  *(uint *)(lVar8 + lVar10) = param_3;
  *(undefined4 *)(lVar8 + 4 + lVar10) = uVar1;
  *(undefined4 *)(lVar8 + 8 + lVar10) = uVar2;
  *(undefined4 *)(lVar8 + 0xc + lVar10) = uVar3;
  *(undefined4 *)(lVar8 + 0x10 + lVar10) = uVar4;
  *(undefined4 *)(lVar8 + 0x14 + lVar10) = uVar5;
  *(undefined4 *)(lVar8 + 0x18 + lVar10) = uVar6;
  *(undefined4 *)(lVar8 + 0x1c + lVar10) = uVar9;
  return;
}



// FUNCTION 146c2a5c4 FUN_146c2a5c4 body=93 status=ok
// SIG undefined FUN_146c2a5c4(void)

undefined1 FUN_146c2a5c4(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((char)param_3 == '\0') {
    lVar3 = param_1 + 0x30;
    lVar2 = param_1 + 0x20;
    lVar1 = param_1 + 0x10;
  }
  else {
    lVar3 = param_1 + 0x10;
    lVar1 = param_1 + 0x30;
    lVar2 = param_1;
  }
  FUN_146c2a622(param_2,lVar1,lVar2,lVar3);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_146c2a870(*(longlong *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x208),param_3);
  }
  return 1;
}



// FUNCTION 146c2a622 FUN_146c2a622 body=589 status=ok
// SIG undefined FUN_146c2a622(void)

void FUN_146c2a622(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  lVar9 = param_2[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar4 = *param_2;
    lVar12 = 0;
    do {
      FUN_146c0b65a(param_1,*(undefined4 *)(lVar4 + lVar12),1,0);
      lVar12 = lVar12 + 0x20;
    } while ((longlong)(int)lVar9 * 0x20 != lVar12);
  }
  (**(code **)(*param_1 + 8))(param_1);
  lVar9 = param_3[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar4 = *param_3;
    lVar12 = 0;
    do {
      uVar3 = *(uint *)(lVar4 + lVar12);
      if (((int)uVar3 < 0) ||
         ((int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24) <= (int)uVar3)) {
LAB_146c2a752:
        FUN_146c091bc(param_1,uVar3,lVar4 + 8 + lVar12,1);
      }
      else {
        uVar11 = (ulonglong)(uVar3 & 0x1ff);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[5] + (ulonglong)(uVar3 >> 9) * 8) +
                                        uVar11 * 2) - 1U)) goto LAB_146c2a752;
        cVar10 = FUN_146bfed03(lVar4 + 8 + lVar12);
        if (cVar10 != '\0') {
          lVar1 = lVar4 + 0x42 + lVar12;
          lVar5 = *(longlong *)(param_1[2] + (ulonglong)(uVar3 >> 9) * 8);
          *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18) = *(undefined8 *)(lVar1 + -0x2a);
          uVar6 = *(undefined4 *)(lVar1 + -0x36);
          uVar7 = *(undefined4 *)(lVar1 + -0x32);
          uVar8 = *(undefined4 *)(lVar1 + -0x2e);
          puVar2 = (undefined4 *)(lVar5 + uVar11 * 0x18);
          *puVar2 = *(undefined4 *)(lVar1 + -0x3a);
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          if ((char)param_1[0x42] == '\x01') {
            LOCK();
            *(int *)((longlong)param_1 + 0x214) = *(int *)((longlong)param_1 + 0x214) + 1;
            UNLOCK();
          }
        }
        if ((*(char *)(lVar4 + 0x40 + lVar12) == '\x01') && ((char)param_1[0xe] == '\x01')) {
          lVar1 = *(longlong *)(param_1[0xc] + (ulonglong)(*(uint *)(lVar4 + lVar12) >> 9) * 8);
          uVar11 = (ulonglong)(*(uint *)(lVar4 + lVar12) & 0x1ff);
          *(undefined4 *)(lVar1 + 8 + uVar11 * 0xc) = *(undefined4 *)(lVar4 + 0x28 + lVar12);
          *(undefined8 *)(lVar1 + uVar11 * 0xc) = *(undefined8 *)(lVar4 + 0x20 + lVar12);
        }
        if ((*(char *)(lVar4 + 0x41 + lVar12) == '\x01') && ((char)param_1[0x12] == '\x01')) {
          lVar1 = *(longlong *)(param_1[0x10] + (ulonglong)(*(uint *)(lVar4 + lVar12) >> 9) * 8);
          uVar11 = (ulonglong)(*(uint *)(lVar4 + lVar12) & 0x1ff);
          *(undefined4 *)(lVar1 + 8 + uVar11 * 0xc) = *(undefined4 *)(lVar4 + 0x34 + lVar12);
          *(undefined8 *)(lVar1 + uVar11 * 0xc) = *(undefined8 *)(lVar4 + 0x2c + lVar12);
        }
        if ((*(char *)(lVar4 + 0x42 + lVar12) == '\x01') && ((char)param_1[0x16] == '\x01')) {
          *(undefined8 *)
           (*(longlong *)(param_1[0x14] + (ulonglong)(*(uint *)(lVar4 + lVar12) >> 9) * 8) +
           (ulonglong)(*(uint *)(lVar4 + lVar12) & 0x1ff) * 8) =
               *(undefined8 *)(lVar4 + 0x38 + lVar12);
        }
      }
      lVar12 = lVar12 + 0x48;
    } while ((longlong)(int)lVar9 * 0x48 != lVar12);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar9 = param_4[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar4 = *param_4;
    lVar12 = 0;
    do {
      FUN_146c09656(param_1,*(undefined4 *)(lVar4 + lVar12),lVar4 + 4 + lVar12,
                    *(undefined4 *)(lVar4 + 0x1c + lVar12),1);
      lVar12 = lVar12 + 0x20;
    } while ((longlong)(int)lVar9 * 0x20 != lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x000146c2a7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



// FUNCTION 146c2a870 FUN_146c2a870 body=431 status=ok
// SIG undefined FUN_146c2a870(void)

void FUN_146c2a870(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = (**(code **)(*param_2 + 0xa0))(param_2);
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)*(uint *)(param_1 + 1)) {
    uVar3 = uVar2;
  }
  if (0 < (int)uVar3) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      if ((longlong)uVar5 < (longlong)(int)param_2[5]) {
        uVar4 = *(undefined8 *)(param_2[4] + uVar5 * 8);
      }
      else {
        uVar4 = 0;
      }
      FUN_146c2938a(*param_1 + lVar6,uVar4,param_3);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while (uVar3 != uVar5);
  }
  uVar2 = (**(code **)(*param_2 + 0xb0))(param_2);
  uVar3 = *(uint *)(param_1 + 3);
  if ((int)uVar2 < (int)*(uint *)(param_1 + 3)) {
    uVar3 = uVar2;
  }
  if (0 < (int)uVar3) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      if ((longlong)uVar5 < (longlong)(int)param_2[7]) {
        uVar4 = *(undefined8 *)(param_2[6] + uVar5 * 8);
      }
      else {
        uVar4 = 0;
      }
      FUN_146c29906(param_1[2] + lVar6,uVar4,param_3);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while (uVar3 != uVar5);
  }
  lVar6 = param_2[2];
  if (0 < (longlong)(int)lVar6) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(param_1[0x1b] + lVar7 * 8);
      (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(param_2[1] + lVar7 * 8),param_3);
      lVar7 = lVar7 + 1;
    } while ((int)lVar6 != lVar7);
  }
  uVar3 = (**(code **)(*param_2 + 0xd0))(param_2);
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      plVar1 = *(longlong **)(param_1[0x19] + uVar5 * 8);
      (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(param_2[10] + uVar5 * 8),param_3);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  if ((char)param_1[0x10] != '\0') {
    FUN_146c29e48(param_1 + 4,param_2[8],param_3);
  }
  if ((char)param_1[0x16] == '\x01') {
    (**(code **)(param_1[0x11] + 0x28))(param_1 + 0x11,param_2[9],param_3);
  }
  uVar3 = (**(code **)(*param_2 + 0xc0))(param_2);
  if (0 < (int)uVar3) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      (**(code **)(*(longlong *)(param_1[0x17] + lVar6) + 0x28))
                (param_1[0x17] + lVar6,*(undefined8 *)(param_2[0xc] + uVar5 * 8),param_3);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 146c2aa20 FUN_146c2aa20 body=2622 status=ok
// SIG undefined FUN_146c2aa20(void)

void FUN_146c2aa20(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *_Dst;
  byte bVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *_Dst_00;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _Dst = (void *)FUN_14001cc68(0xe8);
  memset(_Dst,0,0xe8);
  param_1[1] = (longlong)_Dst;
  uVar4 = (**(code **)(*(longlong *)*param_1 + 0xa0))();
  FUN_146c2b460(param_1[1],uVar4);
  local_5c = (**(code **)(*(longlong *)*param_1 + 0xb0))();
  FUN_146c2b4dc(param_1[1] + 0x10,local_5c);
  if ((int)param_1[3] < (int)uVar4) {
    FUN_146c2b558(param_1 + 2,uVar4);
  }
  local_58 = param_1;
  if (0 < (int)uVar4) {
    uVar15 = 0;
    do {
      if ((longlong)uVar15 < (longlong)*(int *)(*param_1 + 0x28)) {
        lVar19 = *(longlong *)(*(longlong *)(*param_1 + 0x20) + uVar15 * 8);
      }
      else {
        lVar19 = 0;
      }
      piVar20 = (int *)(uVar15 * 0x48 + param_1[2]);
      iVar7 = *(int *)(lVar19 + 0xc);
      iVar5 = *(int *)(lVar19 + 8) * 0x200;
      iVar14 = iVar5 + iVar7;
      *piVar20 = iVar14;
      piVar1 = piVar20 + 2;
      piVar20[8] = iVar14;
      uVar21 = iVar5 + iVar7 + 0x1f;
      if (0x1f < uVar21) {
        uVar6 = uVar21 >> 5;
        if (piVar20[9] + 0x1fU >> 5 < uVar6) {
          FUN_14499171c(piVar1,0,uVar6,4);
          piVar20[9] = uVar21 & 0xffffffe0;
        }
        piVar10 = *(int **)(piVar20 + 6);
        if (*(int **)(piVar20 + 6) == (int *)0x0) {
          piVar10 = piVar1;
        }
        if (uVar21 < 0x120) {
          uVar6 = uVar21 >> 3 & 0x3c;
        }
        else {
          uVar6 = uVar6 << 2;
        }
        memset(piVar10,0,(ulonglong)uVar6);
        iVar7 = piVar20[8];
        iVar5 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar5 = iVar7;
        }
        if (iVar7 % 0x20 != 0) {
          piVar10 = *(int **)(piVar20 + 6);
          if (*(int **)(piVar20 + 6) == (int *)0x0) {
            piVar10 = piVar1;
          }
          bVar8 = -(char)(iVar7 % 0x20);
          piVar10[iVar5 >> 5] = (uint)(piVar10[iVar5 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
        }
      }
      piVar20[0x10] = *piVar20;
      uVar21 = *piVar20 + 0x1f;
      if (0x1f < uVar21) {
        piVar10 = piVar20 + 10;
        uVar6 = uVar21 >> 5;
        if (piVar20[0x11] + 0x1fU >> 5 < uVar6) {
          FUN_14499171c(piVar10,0,uVar6,4);
          piVar20[0x11] = uVar21 & 0xffffffe0;
        }
        piVar11 = *(int **)(piVar20 + 0xe);
        if (*(int **)(piVar20 + 0xe) == (int *)0x0) {
          piVar11 = piVar10;
        }
        if (uVar21 < 0x120) {
          uVar6 = uVar21 >> 3 & 0x3c;
        }
        else {
          uVar6 = uVar6 << 2;
        }
        memset(piVar11,0,(ulonglong)uVar6);
        iVar7 = piVar20[0x10];
        iVar5 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar5 = iVar7;
        }
        param_1 = local_58;
        if (iVar7 % 0x20 != 0) {
          if (*(int **)(piVar20 + 0xe) != (int *)0x0) {
            piVar10 = *(int **)(piVar20 + 0xe);
          }
          bVar8 = -(char)(iVar7 % 0x20);
          piVar10[iVar5 >> 5] = (uint)(piVar10[iVar5 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
        }
      }
      uVar6 = *(int *)(lVar19 + 8) * 0x200 + *(int *)(lVar19 + 0xc);
      uVar21 = 0;
      if ((uVar6 != 0) &&
         (uVar21 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar19 + 0x10) - 1U))) {
        uVar9 = 1;
        uVar17 = 1;
        if (1 < (int)uVar6) {
          uVar9 = uVar6;
        }
        do {
          uVar21 = uVar9;
          if (uVar9 == uVar17) break;
          uVar16 = uVar17 >> 9;
          uVar18 = uVar17 & 0x1ff;
          uVar21 = uVar17;
          uVar17 = uVar17 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar19 + 0x10))[uVar16] +
                                             (ulonglong)uVar18 * 2) - 1U));
      }
LAB_146c2abff:
      if (uVar21 != uVar6) {
        piVar10 = *(int **)(piVar20 + 6);
        if (*(int **)(piVar20 + 6) == (int *)0x0) {
          piVar10 = piVar1;
        }
        uVar9 = uVar21 + 0x1f;
        if (-1 < (int)uVar21) {
          uVar9 = uVar21;
        }
        piVar10[(int)uVar9 >> 5] = piVar10[(int)uVar9 >> 5] | 1 << ((byte)uVar21 & 0x1f);
        uVar9 = uVar21 + 1;
        if ((int)(uVar21 + 1) < (int)uVar6) {
          uVar9 = uVar6;
        }
        uVar17 = uVar21;
        do {
          uVar21 = uVar9;
          if (uVar9 - 1 == uVar17) break;
          uVar21 = uVar17 + 1;
          uVar17 = uVar21;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar19 + 0x10) +
                                               (ulonglong)(uVar21 >> 9) * 8) +
                                             (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
        goto LAB_146c2abff;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar4);
  }
  uVar4 = local_5c;
  if ((int)param_1[5] < (int)local_5c) {
    FUN_146c2b558(param_1 + 4,local_5c);
  }
  if (0 < (int)uVar4) {
    uVar15 = 0;
    do {
      if ((longlong)uVar15 < (longlong)*(int *)(*param_1 + 0x38)) {
        lVar19 = *(longlong *)(*(longlong *)(*param_1 + 0x30) + uVar15 * 8);
      }
      else {
        lVar19 = 0;
      }
      piVar20 = (int *)(uVar15 * 0x48 + param_1[4]);
      iVar7 = *(int *)(lVar19 + 0xc);
      iVar5 = *(int *)(lVar19 + 8) * 0x200;
      iVar14 = iVar5 + iVar7;
      *piVar20 = iVar14;
      piVar1 = piVar20 + 2;
      piVar20[8] = iVar14;
      uVar21 = iVar5 + iVar7 + 0x1f;
      if (0x1f < uVar21) {
        uVar6 = uVar21 >> 5;
        if (piVar20[9] + 0x1fU >> 5 < uVar6) {
          FUN_14499171c(piVar1,0,uVar6,4);
          piVar20[9] = uVar21 & 0xffffffe0;
        }
        piVar10 = *(int **)(piVar20 + 6);
        if (*(int **)(piVar20 + 6) == (int *)0x0) {
          piVar10 = piVar1;
        }
        if (uVar21 < 0x120) {
          uVar6 = uVar21 >> 3 & 0x3c;
        }
        else {
          uVar6 = uVar6 << 2;
        }
        memset(piVar10,0,(ulonglong)uVar6);
        iVar7 = piVar20[8];
        iVar5 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar5 = iVar7;
        }
        if (iVar7 % 0x20 != 0) {
          piVar10 = *(int **)(piVar20 + 6);
          if (*(int **)(piVar20 + 6) == (int *)0x0) {
            piVar10 = piVar1;
          }
          bVar8 = -(char)(iVar7 % 0x20);
          piVar10[iVar5 >> 5] = (uint)(piVar10[iVar5 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
        }
      }
      piVar20[0x10] = *piVar20;
      uVar21 = *piVar20 + 0x1f;
      if (0x1f < uVar21) {
        piVar10 = piVar20 + 10;
        uVar6 = uVar21 >> 5;
        if (piVar20[0x11] + 0x1fU >> 5 < uVar6) {
          FUN_14499171c(piVar10,0,uVar6,4);
          piVar20[0x11] = uVar21 & 0xffffffe0;
        }
        piVar11 = *(int **)(piVar20 + 0xe);
        if (*(int **)(piVar20 + 0xe) == (int *)0x0) {
          piVar11 = piVar10;
        }
        if (uVar21 < 0x120) {
          uVar6 = uVar21 >> 3 & 0x3c;
        }
        else {
          uVar6 = uVar6 << 2;
        }
        memset(piVar11,0,(ulonglong)uVar6);
        iVar7 = piVar20[0x10];
        iVar5 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar5 = iVar7;
        }
        param_1 = local_58;
        if (iVar7 % 0x20 != 0) {
          if (*(int **)(piVar20 + 0xe) != (int *)0x0) {
            piVar10 = *(int **)(piVar20 + 0xe);
          }
          bVar8 = -(char)(iVar7 % 0x20);
          piVar10[iVar5 >> 5] = (uint)(piVar10[iVar5 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
        }
      }
      uVar6 = *(int *)(lVar19 + 8) * 0x200 + *(int *)(lVar19 + 0xc);
      uVar21 = 0;
      if ((uVar6 != 0) &&
         (uVar21 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar19 + 0x10) - 1U))) {
        uVar9 = 1;
        uVar17 = 1;
        if (1 < (int)uVar6) {
          uVar9 = uVar6;
        }
        do {
          uVar21 = uVar9;
          if (uVar9 == uVar17) break;
          uVar16 = uVar17 >> 9;
          uVar18 = uVar17 & 0x1ff;
          uVar21 = uVar17;
          uVar17 = uVar17 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar19 + 0x10))[uVar16] +
                                             (ulonglong)uVar18 * 2) - 1U));
      }
LAB_146c2aec5:
      if (uVar21 != uVar6) {
        piVar10 = *(int **)(piVar20 + 6);
        if (*(int **)(piVar20 + 6) == (int *)0x0) {
          piVar10 = piVar1;
        }
        uVar9 = uVar21 + 0x1f;
        if (-1 < (int)uVar21) {
          uVar9 = uVar21;
        }
        piVar10[(int)uVar9 >> 5] = piVar10[(int)uVar9 >> 5] | 1 << ((byte)uVar21 & 0x1f);
        uVar9 = uVar21 + 1;
        if ((int)(uVar21 + 1) < (int)uVar6) {
          uVar9 = uVar6;
        }
        uVar17 = uVar21;
        do {
          uVar21 = uVar9;
          if (uVar9 - 1 == uVar17) break;
          uVar21 = uVar17 + 1;
          uVar17 = uVar21;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar19 + 0x10) +
                                               (ulonglong)(uVar21 >> 9) * 8) +
                                             (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
        goto LAB_146c2aec5;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar4);
  }
  if (*(longlong *)(*param_1 + 0x40) != 0) {
    lVar19 = param_1[1];
    if (*(char *)(lVar19 + 0x80) == '\x01') {
      FUN_146c440e6((undefined8 *)(lVar19 + 0x20));
    }
    *(undefined8 *)(lVar19 + 0x70) = 0;
    *(undefined8 *)(lVar19 + 0x78) = 0;
    *(undefined8 *)(lVar19 + 0x60) = 0;
    *(undefined8 *)(lVar19 + 0x68) = 0;
    *(undefined8 *)(lVar19 + 0x50) = 0;
    *(undefined8 *)(lVar19 + 0x58) = 0;
    *(undefined8 *)(lVar19 + 0x40) = 0;
    *(undefined8 *)(lVar19 + 0x48) = 0;
    *(undefined8 *)(lVar19 + 0x30) = 0;
    *(undefined8 *)(lVar19 + 0x38) = 0;
    *(undefined8 *)(lVar19 + 0x20) = 0;
    *(undefined8 *)(lVar19 + 0x28) = 0;
    *(undefined1 *)(lVar19 + 0x80) = 1;
    lVar19 = *(longlong *)(*param_1 + 0x40);
    iVar7 = *(int *)(lVar19 + 0xc);
    iVar5 = *(int *)(lVar19 + 8) * 0x200;
    iVar14 = iVar5 + iVar7;
    *(int *)(param_1 + 6) = iVar14;
    plVar12 = param_1 + 7;
    *(int *)(param_1 + 10) = iVar14;
    uVar4 = iVar5 + iVar7 + 0x1f;
    if (0x1f < uVar4) {
      uVar21 = uVar4 >> 5;
      if (*(int *)((longlong)param_1 + 0x54) + 0x1fU >> 5 < uVar21) {
        FUN_14499171c(plVar12,0,uVar21,4);
        *(uint *)((longlong)param_1 + 0x54) = uVar4 & 0xffffffe0;
      }
      plVar13 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      if (uVar4 < 0x120) {
        uVar21 = uVar4 >> 3 & 0x3c;
      }
      else {
        uVar21 = uVar21 << 2;
      }
      memset(plVar13,0,(ulonglong)uVar21);
      iVar7 = (int)param_1[10];
      iVar5 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar7 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[9];
        if ((longlong *)param_1[9] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar8 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    *(int *)(param_1 + 0xe) = (int)param_1[6];
    uVar4 = (int)param_1[6] + 0x1f;
    if (0x1f < uVar4) {
      plVar13 = param_1 + 0xb;
      uVar21 = uVar4 >> 5;
      if (*(int *)((longlong)param_1 + 0x74) + 0x1fU >> 5 < uVar21) {
        FUN_14499171c(plVar13,0,uVar21,4);
        *(uint *)((longlong)param_1 + 0x74) = uVar4 & 0xffffffe0;
      }
      _Dst_00 = (longlong *)param_1[0xd];
      if ((longlong *)param_1[0xd] == (longlong *)0x0) {
        _Dst_00 = plVar13;
      }
      if (uVar4 < 0x120) {
        uVar21 = uVar4 >> 3 & 0x3c;
      }
      else {
        uVar21 = uVar21 << 2;
      }
      memset(_Dst_00,0,(ulonglong)uVar21);
      iVar7 = (int)param_1[0xe];
      iVar5 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar5 = iVar7;
      }
      if (iVar7 % 0x20 != 0) {
        if ((longlong *)param_1[0xd] != (longlong *)0x0) {
          plVar13 = (longlong *)param_1[0xd];
        }
        bVar8 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    uVar21 = *(int *)(lVar19 + 8) * 0x200 + *(int *)(lVar19 + 0xc);
    uVar4 = 0;
    if ((uVar21 != 0) &&
       (uVar4 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar19 + 0x10) - 1U))) {
      uVar6 = 1;
      uVar9 = 1;
      if (1 < (int)uVar21) {
        uVar6 = uVar21;
      }
      do {
        uVar4 = uVar6;
        if (uVar6 == uVar9) break;
        uVar17 = uVar9 >> 9;
        uVar16 = uVar9 & 0x1ff;
        uVar4 = uVar9;
        uVar9 = uVar9 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar19 + 0x10))[uVar17] +
                                           (ulonglong)uVar16 * 2) - 1U));
    }
LAB_146c2b199:
    if (uVar4 != uVar21) {
      plVar13 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      uVar6 = uVar4 + 0x1f;
      if (-1 < (int)uVar4) {
        uVar6 = uVar4;
      }
      puVar2 = (uint *)((longlong)plVar13 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
      uVar6 = uVar4 + 1;
      if ((int)(uVar4 + 1) < (int)uVar21) {
        uVar6 = uVar21;
      }
      uVar9 = uVar4;
      do {
        uVar4 = uVar6;
        if (uVar6 - 1 == uVar9) break;
        uVar4 = uVar9 + 1;
        uVar9 = uVar4;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar19 + 0x10) +
                                             (ulonglong)(uVar4 >> 9) * 8) +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
      goto LAB_146c2b199;
    }
  }
  plVar12 = (longlong *)*param_1;
  if (plVar12[9] != 0) {
    FUN_146c2b5d4(param_1[1] + 0x88);
    plVar12 = (longlong *)*param_1;
  }
  iVar7 = (**(code **)(*plVar12 + 0xc0))();
  if (0 < iVar7) {
    FUN_146c2b626(param_1[1] + 0xb8,iVar7);
  }
  uVar4 = (**(code **)(*(longlong *)*param_1 + 0xd0))();
  if (0 < (int)uVar4) {
    uVar15 = 0;
    do {
      lVar19 = param_1[1];
      plVar12 = *(longlong **)(*(longlong *)(*param_1 + 0x50) + uVar15 * 8);
      (**(code **)(*plVar12 + 0x78))(plVar12,&local_50);
      iVar7 = *(int *)(lVar19 + 0xd0);
      *(uint *)(lVar19 + 0xd0) = iVar7 + 1U;
      if (*(uint *)(lVar19 + 0xd4) < iVar7 + 1U) {
        FUN_146c57fb2((longlong *)(lVar19 + 200),iVar7);
      }
      *(undefined8 *)(*(longlong *)(lVar19 + 200) + (longlong)iVar7 * 8) = local_50;
      uVar15 = uVar15 + 1;
    } while (uVar4 != uVar15);
  }
  iVar7 = *(int *)(*param_1 + 0x10);
  if (0 < (longlong)iVar7) {
    lVar19 = 0;
    do {
      lVar3 = param_1[1];
      plVar12 = *(longlong **)(*(longlong *)(*param_1 + 8) + lVar19 * 8);
      (**(code **)(*plVar12 + 0x78))(plVar12,&local_50);
      iVar5 = *(int *)(lVar3 + 0xe0);
      *(uint *)(lVar3 + 0xe0) = iVar5 + 1U;
      if (*(uint *)(lVar3 + 0xe4) < iVar5 + 1U) {
        FUN_146c57fb2((longlong *)(lVar3 + 0xd8),iVar5);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0xd8) + (longlong)iVar5 * 8) = local_50;
      lVar19 = lVar19 + 1;
    } while (iVar7 != lVar19);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c2b460 FUN_146c2b460 body=122 status=ok
// SIG undefined FUN_146c2b460(void)

void FUN_146c2b460(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c578b4(param_1,iVar1);
    }
    FUN_146c5789d((longlong)iVar1 * 0x60 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146c57948(param_1,param_2,iVar1 - param_2);
    FUN_146c579ae(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c2b4dc FUN_146c2b4dc body=122 status=ok
// SIG undefined FUN_146c2b4dc(void)

void FUN_146c2b4dc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c57a72(param_1,iVar1);
    }
    FUN_146c57a5c((longlong)iVar1 * 0x60 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146c57b06(param_1,param_2,iVar1 - param_2);
    FUN_146c57b6c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c2b558 FUN_146c2b558 body=122 status=ok
// SIG undefined FUN_146c2b558(void)

void FUN_146c2b558(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c57c48(param_1,iVar1);
    }
    FUN_146c57c1a((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146c57cdc(param_1,param_2,iVar1 - param_2);
    FUN_146c57d3e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c2b5d4 FUN_146c2b5d4 body=81 status=ok
// SIG undefined FUN_146c2b5d4(void)

undefined8 * FUN_146c2b5d4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    *param_1 = &PTR_FUN_149f3baa0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = &PTR_FUN_149f3baa0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 146c2b626 FUN_146c2b626 body=111 status=ok
// SIG undefined FUN_146c2b626(void)

void FUN_146c2b626(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c57e0e(param_1,iVar1);
    }
    FUN_146c57dec((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_146c57ea2(param_1,param_2,iVar1 - param_2);
  FUN_146c57f04(param_1);
  return;
}



// FUNCTION 146c2b696 FUN_146c2b696 body=1099 status=ok
// SIG undefined FUN_146c2b696(void)

void FUN_146c2b696(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar6 = (**(code **)(*(longlong *)*param_1 + 0xa0))();
  iVar2 = (int)param_2;
  if (0 < (int)uVar6) {
    uVar12 = iVar2 * 3 + 2;
    uVar8 = iVar2 * 3 + 1;
    lVar14 = 0;
    lVar13 = 0;
    uVar11 = 0;
    do {
      if ((longlong)uVar11 < (longlong)*(int *)(*param_1 + 0x28)) {
        lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x20) + uVar11 * 8);
      }
      else {
        lVar10 = 0;
      }
      lVar5 = *(longlong *)(lVar10 + 0x78);
      iVar1 = *(int *)(*(longlong *)(lVar5 + (ulonglong)((uint)(iVar2 * 3) >> 9) * 8) +
                      (ulonglong)(iVar2 * 3 & 0x1ff) * 4);
      if (-1 < iVar1) {
        lVar9 = *(longlong *)param_1[1] + lVar14;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(lVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                 (ulonglong)(uVar12 & 0x1ff) * 4);
        uVar4 = *(undefined4 *)
                 (*(longlong *)(lVar5 + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4);
        FUN_146c2bae2(iVar1,param_1[2] + lVar13,lVar10,lVar9);
        FUN_146c2bae2(uVar4,param_1[2] + lVar13,lVar10,lVar9);
        FUN_146c2bae2(uVar3,param_1[2] + lVar13,lVar10,lVar9);
        FUN_146c29144(lVar9,lVar10,param_2);
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x48;
      lVar14 = lVar14 + 0x60;
    } while (uVar6 != uVar11);
  }
  uVar6 = (**(code **)(*(longlong *)*param_1 + 0xb0))();
  if (0 < (int)uVar6) {
    uVar12 = iVar2 * 3 + 2;
    uVar8 = iVar2 * 3 + 1;
    lVar14 = 0;
    lVar13 = 0;
    uVar11 = 0;
    do {
      if ((longlong)uVar11 < (longlong)*(int *)(*param_1 + 0x38)) {
        lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x30) + uVar11 * 8);
      }
      else {
        lVar10 = 0;
      }
      lVar5 = *(longlong *)(lVar10 + 0x78);
      iVar1 = *(int *)(*(longlong *)(lVar5 + (ulonglong)((uint)(iVar2 * 3) >> 9) * 8) +
                      (ulonglong)(iVar2 * 3 & 0x1ff) * 4);
      if (-1 < iVar1) {
        lVar9 = *(longlong *)(param_1[1] + 0x10) + lVar14;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(lVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                 (ulonglong)(uVar12 & 0x1ff) * 4);
        uVar4 = *(undefined4 *)
                 (*(longlong *)(lVar5 + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4);
        FUN_146c2bb60(iVar1,param_1[4] + lVar13,lVar10,lVar9);
        FUN_146c2bb60(uVar4,param_1[4] + lVar13,lVar10,lVar9);
        FUN_146c2bb60(uVar3,param_1[4] + lVar13,lVar10,lVar9);
        FUN_146c296b0(lVar9,lVar10,param_2);
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x48;
      lVar14 = lVar14 + 0x60;
    } while (uVar6 != uVar11);
  }
  plVar7 = (longlong *)*param_1;
  lVar13 = param_1[1];
  if (*(char *)(lVar13 + 0x80) != '\0') {
    lVar14 = plVar7[8];
    uVar6 = iVar2 * 3;
    lVar10 = *(longlong *)(lVar14 + 0x78);
    iVar2 = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar6 >> 9) * 8) +
                    (ulonglong)(uVar6 & 0x1ff) * 4);
    if (-1 < iVar2) {
      lVar13 = lVar13 + 0x20;
      uVar3 = *(undefined4 *)
               (*(longlong *)(lVar10 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
               (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
      uVar4 = *(undefined4 *)
               (*(longlong *)(lVar10 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
               (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
      plVar7 = param_1 + 6;
      FUN_146c2bbde(iVar2,plVar7,lVar14,lVar13);
      FUN_146c2bbde(uVar4,plVar7,lVar14,lVar13);
      FUN_146c2bbde(uVar3,plVar7,lVar14,lVar13);
      FUN_146c29c00(lVar13,lVar14,param_2 & 0xffffffff);
      plVar7 = (longlong *)*param_1;
      lVar13 = param_1[1];
    }
  }
  if (*(char *)(lVar13 + 0xb0) == '\x01') {
    (**(code **)(*(longlong *)(lVar13 + 0x88) + 8))(lVar13 + 0x88,plVar7[9],param_2 & 0xffffffff);
    plVar7 = (longlong *)*param_1;
  }
  uVar6 = (**(code **)(*plVar7 + 0xc0))();
  if (0 < (int)uVar6) {
    lVar13 = 0;
    uVar11 = 0;
    do {
      (**(code **)(*(longlong *)(*(longlong *)(param_1[1] + 0xb8) + lVar13) + 8))
                (*(longlong *)(param_1[1] + 0xb8) + lVar13,
                 *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + uVar11 * 8),param_2 & 0xffffffff);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x28;
    } while (uVar6 != uVar11);
  }
  plVar7 = (longlong *)*param_1;
  lVar13 = plVar7[2];
  if (0 < (longlong)(int)lVar13) {
    lVar14 = 0;
    do {
      plVar7 = *(longlong **)(*(longlong *)(param_1[1] + 0xd8) + lVar14 * 8);
      (**(code **)(*plVar7 + 8))
                (plVar7,*(undefined8 *)(*(longlong *)(*param_1 + 8) + lVar14 * 8),
                 param_2 & 0xffffffff);
      lVar14 = lVar14 + 1;
    } while ((int)lVar13 != lVar14);
    plVar7 = (longlong *)*param_1;
  }
  uVar6 = (**(code **)(*plVar7 + 0xd0))();
  if (0 < (int)uVar6) {
    uVar11 = 0;
    do {
      plVar7 = *(longlong **)(*(longlong *)(param_1[1] + 200) + uVar11 * 8);
      (**(code **)(*plVar7 + 8))
                (plVar7,*(undefined8 *)(*(longlong *)(*param_1 + 0x50) + uVar11 * 8),
                 param_2 & 0xffffffff);
      uVar11 = uVar11 + 1;
    } while (uVar6 != uVar11);
  }
  return;
}



// FUNCTION 146c2bae2 FUN_146c2bae2 body=125 status=ok
// SIG undefined FUN_146c2bae2(void)

void FUN_146c2bae2(uint param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar4;
  uint uVar3;
  
  if ((int)param_1 < *param_2) {
    uVar4 = 1 << ((byte)param_1 & 0x1f);
    piVar1 = *(int **)(param_2 + 0xe);
    if (*(int **)(param_2 + 0xe) == (int *)0x0) {
      piVar1 = param_2 + 10;
    }
    uVar3 = param_1 + 0x1f;
    if (-1 < (int)param_1) {
      uVar3 = param_1;
    }
    iVar2 = (int)uVar3 >> 5;
    if (((uint)piVar1[iVar2] >> (param_1 & 0x1f) & 1) == 0) {
      piVar1 = param_2 + 2;
      if (*(int **)(param_2 + 6) != (int *)0x0) {
        piVar1 = *(int **)(param_2 + 6);
      }
      if ((piVar1[iVar2] & uVar4) != 0) {
        FUN_146c29050(param_4,param_3,param_1);
        piVar1 = param_2 + 10;
        if (*(int **)(param_2 + 0xe) != (int *)0x0) {
          piVar1 = *(int **)(param_2 + 0xe);
        }
        piVar1[iVar2] = piVar1[iVar2] | uVar4;
      }
    }
  }
  return;
}



// FUNCTION 146c2bb60 FUN_146c2bb60 body=125 status=ok
// SIG undefined FUN_146c2bb60(void)

void FUN_146c2bb60(uint param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar4;
  uint uVar3;
  
  if ((int)param_1 < *param_2) {
    uVar4 = 1 << ((byte)param_1 & 0x1f);
    piVar1 = *(int **)(param_2 + 0xe);
    if (*(int **)(param_2 + 0xe) == (int *)0x0) {
      piVar1 = param_2 + 10;
    }
    uVar3 = param_1 + 0x1f;
    if (-1 < (int)param_1) {
      uVar3 = param_1;
    }
    iVar2 = (int)uVar3 >> 5;
    if (((uint)piVar1[iVar2] >> (param_1 & 0x1f) & 1) == 0) {
      piVar1 = param_2 + 2;
      if (*(int **)(param_2 + 6) != (int *)0x0) {
        piVar1 = *(int **)(param_2 + 6);
      }
      if ((piVar1[iVar2] & uVar4) != 0) {
        FUN_146c295ac(param_4,param_3,param_1);
        piVar1 = param_2 + 10;
        if (*(int **)(param_2 + 0xe) != (int *)0x0) {
          piVar1 = *(int **)(param_2 + 0xe);
        }
        piVar1[iVar2] = piVar1[iVar2] | uVar4;
      }
    }
  }
  return;
}



// FUNCTION 146c2bbde FUN_146c2bbde body=125 status=ok
// SIG undefined FUN_146c2bbde(void)

void FUN_146c2bbde(uint param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar4;
  uint uVar3;
  
  if ((int)param_1 < *param_2) {
    uVar4 = 1 << ((byte)param_1 & 0x1f);
    piVar1 = *(int **)(param_2 + 0xe);
    if (*(int **)(param_2 + 0xe) == (int *)0x0) {
      piVar1 = param_2 + 10;
    }
    uVar3 = param_1 + 0x1f;
    if (-1 < (int)param_1) {
      uVar3 = param_1;
    }
    iVar2 = (int)uVar3 >> 5;
    if (((uint)piVar1[iVar2] >> (param_1 & 0x1f) & 1) == 0) {
      piVar1 = param_2 + 2;
      if (*(int **)(param_2 + 6) != (int *)0x0) {
        piVar1 = *(int **)(param_2 + 6);
      }
      if ((piVar1[iVar2] & uVar4) != 0) {
        FUN_146c29b0a(param_4,param_3,param_1);
        piVar1 = param_2 + 10;
        if (*(int **)(param_2 + 0xe) != (int *)0x0) {
          piVar1 = *(int **)(param_2 + 0xe);
        }
        piVar1[iVar2] = piVar1[iVar2] | uVar4;
      }
    }
  }
  return;
}



// FUNCTION 146c2bc5c FUN_146c2bc5c body=146 status=ok
// SIG undefined FUN_146c2bc5c(void)

void FUN_146c2bc5c(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar3 = (longlong *)*param_1;
  lVar1 = plVar3[2];
  if (0 < (longlong)(int)lVar1) {
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1[1] + 0xd8) + lVar4 * 8);
      (**(code **)(*plVar3 + 0x10))
                (plVar3,*(undefined8 *)(*(longlong *)(*param_1 + 8) + lVar4 * 8),param_2);
      lVar4 = lVar4 + 1;
    } while ((int)lVar1 != lVar4);
    plVar3 = (longlong *)*param_1;
  }
  uVar2 = (**(code **)(*plVar3 + 0xd0))();
  if (0 < (int)uVar2) {
    uVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1[1] + 200) + uVar5 * 8);
      (**(code **)(*plVar3 + 0x10))
                (plVar3,*(undefined8 *)(*(longlong *)(*param_1 + 0x50) + uVar5 * 8),param_2);
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  return;
}



// FUNCTION 146c2bcee FUN_146c2bcee body=1657 status=ok
// SIG undefined FUN_146c2bcee(void)

void FUN_146c2bcee(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 local_f8 [40];
  undefined8 *local_d0;
  int *local_c8;
  longlong *local_c0;
  int *local_b8;
  int *local_b0;
  undefined1 local_a8 [4];
  uint local_a4 [3];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_f8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_d0 = param_2;
  uVar4 = (**(code **)(*(longlong *)*param_1 + 0xa0))();
  local_c0 = param_1;
  if (0 < (int)uVar4) {
    local_b8 = (int *)(ulonglong)uVar4;
    piVar7 = (int *)0x0;
    do {
      puVar13 = local_d0;
      if ((longlong)piVar7 < (longlong)*(int *)(*local_c0 + 0x28)) {
        lVar9 = *(longlong *)(*(longlong *)(*local_c0 + 0x20) + (longlong)piVar7 * 8);
      }
      else {
        lVar9 = 0;
      }
      lVar12 = (longlong)piVar7 * 0x60 + *(longlong *)local_c0[1];
      local_c8 = piVar7;
      FUN_1402226aa(&local_98);
      if ((longlong)*(int *)(puVar13 + 1) != 0) {
        piVar11 = (int *)*local_d0;
        piVar7 = piVar11 + *(int *)(puVar13 + 1);
        local_b0 = piVar7;
        do {
          iVar1 = *piVar11;
          uVar3 = iVar1 * 3;
          lVar14 = *(longlong *)(lVar9 + 0x78);
          uVar4 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 4);
          if (-1 < (int)uVar4) {
            local_a4[0] = uVar4;
            local_a4[1] = *(undefined4 *)
                           (*(longlong *)(lVar14 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                           (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
            local_a4[2] = *(undefined4 *)
                           (*(longlong *)(lVar14 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                           (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
            lVar14 = 0;
            do {
              if ((int)uStack_90 != local_64) {
                puVar5 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar5 = local_60;
                }
                for (iVar2 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & local_a4[lVar14]) * 4);
                    iVar2 != -1; iVar2 = *(int *)(local_98 + (longlong)iVar2 * 0xc + 4)) {
                  if (*(uint *)(local_98 + (longlong)iVar2 * 0xc) == local_a4[lVar14])
                  goto LAB_146c2bed1;
                }
              }
              FUN_146c291ea(lVar12,lVar9);
              FUN_1447cbafe(&local_98,local_a8,local_a4 + lVar14,0);
LAB_146c2bed1:
              lVar14 = lVar14 + 1;
            } while (lVar14 != 3);
            FUN_146c292e4(lVar12,lVar9,iVar1);
            piVar7 = local_b0;
          }
          piVar11 = piVar11 + 1;
        } while (piVar11 != piVar7);
      }
      piVar7 = (int *)((longlong)local_c8 + 1);
    } while (piVar7 != local_b8);
  }
  plVar8 = local_c0;
  uVar4 = (**(code **)(*(longlong *)*local_c0 + 0xb0))();
  if (0 < (int)uVar4) {
    local_b8 = (int *)(ulonglong)uVar4;
    piVar7 = (int *)0x0;
    do {
      puVar13 = local_d0;
      if ((longlong)piVar7 < (longlong)*(int *)(*plVar8 + 0x38)) {
        lVar9 = *(longlong *)(*(longlong *)(*plVar8 + 0x30) + (longlong)piVar7 * 8);
      }
      else {
        lVar9 = 0;
      }
      lVar12 = (longlong)piVar7 * 0x60 + *(longlong *)(plVar8[1] + 0x10);
      local_c8 = piVar7;
      FUN_1402226aa(&local_98);
      if ((longlong)*(int *)(puVar13 + 1) != 0) {
        piVar11 = (int *)*local_d0;
        piVar7 = piVar11 + *(int *)(puVar13 + 1);
        local_b0 = piVar7;
        do {
          iVar1 = *piVar11;
          uVar3 = iVar1 * 3;
          lVar14 = *(longlong *)(lVar9 + 0x78);
          uVar4 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 4);
          if (-1 < (int)uVar4) {
            local_a4[0] = uVar4;
            local_a4[1] = *(undefined4 *)
                           (*(longlong *)(lVar14 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                           (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
            local_a4[2] = *(undefined4 *)
                           (*(longlong *)(lVar14 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                           (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
            lVar14 = 0;
            do {
              if ((int)uStack_90 != local_64) {
                puVar5 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar5 = local_60;
                }
                for (iVar2 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & local_a4[lVar14]) * 4);
                    iVar2 != -1; iVar2 = *(int *)(local_98 + (longlong)iVar2 * 0xc + 4)) {
                  if (*(uint *)(local_98 + (longlong)iVar2 * 0xc) == local_a4[lVar14])
                  goto LAB_146c2c07f;
                }
              }
              FUN_146c29756(lVar12,lVar9);
              FUN_1447cbafe(&local_98,local_a8,local_a4 + lVar14,0);
LAB_146c2c07f:
              lVar14 = lVar14 + 1;
            } while (lVar14 != 3);
            FUN_146c29860(lVar12,lVar9,iVar1);
            piVar7 = local_b0;
          }
          piVar11 = piVar11 + 1;
        } while (piVar11 != piVar7);
      }
      piVar7 = (int *)((longlong)local_c8 + 1);
      plVar8 = local_c0;
    } while (piVar7 != local_b8);
  }
  puVar13 = local_d0;
  lVar9 = plVar8[1];
  if (*(char *)(lVar9 + 0x80) != '\0') {
    lVar12 = *(longlong *)(*local_c0 + 0x40);
    FUN_1402226aa(&local_98);
    if ((longlong)*(int *)(puVar13 + 1) != 0) {
      lVar9 = lVar9 + 0x20;
      piVar11 = (int *)*puVar13;
      piVar7 = piVar11 + *(int *)(puVar13 + 1);
      local_c8 = piVar7;
      do {
        iVar1 = *piVar11;
        uVar3 = iVar1 * 3;
        lVar14 = *(longlong *)(lVar12 + 0x78);
        uVar4 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8) +
                         (ulonglong)(uVar3 & 0x1ff) * 4);
        if (-1 < (int)uVar4) {
          local_a4[0] = uVar4;
          local_a4[1] = *(undefined4 *)
                         (*(longlong *)(lVar14 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                         (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
          local_a4[2] = *(undefined4 *)
                         (*(longlong *)(lVar14 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                         (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
          lVar14 = 0;
          do {
            if ((int)uStack_90 != local_64) {
              puVar5 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar5 = local_60;
              }
              for (iVar2 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & local_a4[lVar14]) * 4);
                  iVar2 != -1; iVar2 = *(int *)(local_98 + (longlong)iVar2 * 0xc + 4)) {
                if (*(uint *)(local_98 + (longlong)iVar2 * 0xc) == local_a4[lVar14])
                goto LAB_146c2c1ff;
              }
            }
            FUN_146c29ca6(lVar9,lVar12);
            FUN_1447cbafe(&local_98,local_a8,local_a4 + lVar14,0);
LAB_146c2c1ff:
            lVar14 = lVar14 + 1;
          } while (lVar14 != 3);
          FUN_146c29da2(lVar9,lVar12,iVar1);
          piVar7 = local_c8;
          puVar13 = local_d0;
        }
        piVar11 = piVar11 + 1;
      } while (piVar11 != piVar7);
    }
  }
  plVar8 = local_c0;
  lVar9 = local_c0[1];
  if (*(char *)(lVar9 + 0xb0) == '\x01') {
    (**(code **)(*(longlong *)(lVar9 + 0x88) + 0x18))
              (lVar9 + 0x88,*(undefined8 *)(*local_c0 + 0x48),puVar13);
  }
  uVar4 = (**(code **)(*(longlong *)*plVar8 + 0xc0))();
  if (0 < (int)uVar4) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      (**(code **)(*(longlong *)(*(longlong *)(plVar8[1] + 0xb8) + lVar9) + 0x18))
                (*(longlong *)(plVar8[1] + 0xb8) + lVar9,
                 *(undefined8 *)(*(longlong *)(*plVar8 + 0x60) + uVar10 * 8),puVar13);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x28;
    } while (uVar4 != uVar10);
  }
  plVar6 = (longlong *)*plVar8;
  lVar9 = plVar6[2];
  if (0 < (longlong)(int)lVar9) {
    lVar12 = 0;
    do {
      plVar6 = *(longlong **)(*(longlong *)(plVar8[1] + 0xd8) + lVar12 * 8);
      (**(code **)(*plVar6 + 0x18))
                (plVar6,*(undefined8 *)(*(longlong *)(*plVar8 + 8) + lVar12 * 8),puVar13);
      lVar12 = lVar12 + 1;
    } while ((int)lVar9 != lVar12);
    plVar6 = (longlong *)*plVar8;
  }
  uVar4 = (**(code **)(*plVar6 + 0xd0))();
  if (0 < (int)uVar4) {
    uVar10 = 0;
    do {
      plVar6 = *(longlong **)(*(longlong *)(plVar8[1] + 200) + uVar10 * 8);
      (**(code **)(*plVar6 + 0x18))
                (plVar6,*(undefined8 *)(*(longlong *)(*plVar8 + 0x50) + uVar10 * 8),puVar13);
      uVar10 = uVar10 + 1;
    } while (uVar4 != uVar10);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)local_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2c368 FUN_146c2c368 body=165 status=ok
// SIG undefined FUN_146c2c368(void)

longlong * FUN_146c2c368(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_1[6] = 0;
  param_1[7] = 0x8000000000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000;
  *param_1 = param_2;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_14001cc68(0x78,0x10);
    plVar2[9] = 0;
    plVar2[10] = 0x8000000000;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0x8000000000;
    *plVar2 = lVar1;
    param_1[1] = (longlong)plVar2;
  }
  return param_1;
}



// FUNCTION 146c2c40e FUN_146c2c40e body=117 status=ok
// SIG undefined FUN_146c2c40e(void)

void FUN_146c2c40e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_146c2c484(lVar1);
    FUN_1400020a8(lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c2c484 FUN_146c2c484 body=100 status=ok
// SIG undefined FUN_146c2c484(void)

void FUN_146c2c484(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_146c43c3a(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_146c43c3a(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c2c4e8 FUN_146c2c4e8 body=1138 status=ok
// SIG undefined FUN_146c2c4e8(void)

void FUN_146c2c4e8(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[8] = 0;
  param_1[2] = (longlong)puVar5;
  iVar4 = *(int *)(*param_1 + 0x24);
  iVar7 = *(int *)(*param_1 + 0x20) * 0x200;
  iVar10 = iVar7 + iVar4;
  *(int *)(param_1 + 0xc) = iVar10;
  plVar1 = param_1 + 0xd;
  *(int *)(param_1 + 0x10) = iVar10;
  uVar11 = iVar7 + iVar4 + 0x1f;
  if (0x1f < uVar11) {
    uVar12 = uVar11 >> 5;
    if (*(int *)((longlong)param_1 + 0x84) + 0x1fU >> 5 < uVar12) {
      FUN_14499171c(plVar1,0,uVar12,4);
      *(uint *)((longlong)param_1 + 0x84) = uVar11 & 0xffffffe0;
    }
    plVar8 = (longlong *)param_1[0xf];
    if ((longlong *)param_1[0xf] == (longlong *)0x0) {
      plVar8 = plVar1;
    }
    if (uVar11 < 0x120) {
      uVar12 = uVar11 >> 3 & 0x3c;
    }
    else {
      uVar12 = uVar12 << 2;
    }
    memset(plVar8,0,(ulonglong)uVar12);
    iVar4 = (int)param_1[0x10];
    iVar7 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar4 % 0x20 != 0) {
      plVar8 = (longlong *)param_1[0xf];
      if ((longlong *)param_1[0xf] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      bVar6 = -(char)(iVar4 % 0x20);
      *(uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
  }
  *(int *)(param_1 + 0x14) = (int)param_1[0xc];
  uVar11 = (int)param_1[0xc] + 0x1f;
  if (0x1f < uVar11) {
    plVar8 = param_1 + 0x11;
    uVar12 = uVar11 >> 5;
    if (*(int *)((longlong)param_1 + 0xa4) + 0x1fU >> 5 < uVar12) {
      FUN_14499171c(plVar8,0,uVar12,4);
      *(uint *)((longlong)param_1 + 0xa4) = uVar11 & 0xffffffe0;
    }
    plVar9 = (longlong *)param_1[0x13];
    if ((longlong *)param_1[0x13] == (longlong *)0x0) {
      plVar9 = plVar8;
    }
    if (uVar11 < 0x120) {
      uVar12 = uVar11 >> 3 & 0x3c;
    }
    else {
      uVar12 = uVar12 << 2;
    }
    memset(plVar9,0,(ulonglong)uVar12);
    iVar4 = (int)param_1[0x14];
    iVar7 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar4 % 0x20 != 0) {
      if ((longlong *)param_1[0x13] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[0x13];
      }
      bVar6 = -(char)(iVar4 % 0x20);
      *(uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
  }
  iVar4 = (int)param_1[0xc];
  if (0 < iVar4) {
    uVar11 = 0;
    do {
      lVar3 = *param_1;
      if (((int)uVar11 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar11 >> 9) * 8) +
                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        plVar8 = (longlong *)param_1[0xf];
        if ((longlong *)param_1[0xf] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        puVar2 = (uint *)((longlong)plVar8 + (ulonglong)(uVar11 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar11 & 0x1f);
        iVar4 = (int)param_1[0xc];
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar4);
  }
  iVar4 = *(int *)(*param_1 + 0x144);
  iVar7 = *(int *)(*param_1 + 0x140) * 0x200;
  iVar10 = iVar7 + iVar4;
  *(int *)(param_1 + 3) = iVar10;
  plVar1 = param_1 + 4;
  *(int *)(param_1 + 7) = iVar10;
  uVar11 = iVar7 + iVar4 + 0x1f;
  if (0x1f < uVar11) {
    uVar12 = uVar11 >> 5;
    if (*(int *)((longlong)param_1 + 0x3c) + 0x1fU >> 5 < uVar12) {
      FUN_14499171c(plVar1,0,uVar12,4);
      *(uint *)((longlong)param_1 + 0x3c) = uVar11 & 0xffffffe0;
    }
    plVar8 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar8 = plVar1;
    }
    if (uVar11 < 0x120) {
      uVar12 = uVar11 >> 3 & 0x3c;
    }
    else {
      uVar12 = uVar12 << 2;
    }
    memset(plVar8,0,(ulonglong)uVar12);
    iVar4 = (int)param_1[7];
    iVar7 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar4 % 0x20 != 0) {
      plVar8 = (longlong *)param_1[6];
      if ((longlong *)param_1[6] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      bVar6 = -(char)(iVar4 % 0x20);
      *(uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
  }
  *(int *)(param_1 + 0xb) = (int)param_1[3];
  uVar11 = (int)param_1[3] + 0x1f;
  if (0x1f < uVar11) {
    plVar8 = param_1 + 8;
    uVar12 = uVar11 >> 5;
    if (*(int *)((longlong)param_1 + 0x5c) + 0x1fU >> 5 < uVar12) {
      FUN_14499171c(plVar8,0,uVar12,4);
      *(uint *)((longlong)param_1 + 0x5c) = uVar11 & 0xffffffe0;
    }
    plVar9 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar9 = plVar8;
    }
    if (uVar11 < 0x120) {
      uVar12 = uVar11 >> 3 & 0x3c;
    }
    else {
      uVar12 = uVar12 << 2;
    }
    memset(plVar9,0,(ulonglong)uVar12);
    iVar4 = (int)param_1[0xb];
    iVar7 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar4 % 0x20 != 0) {
      if ((longlong *)param_1[10] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[10];
      }
      bVar6 = -(char)(iVar4 % 0x20);
      *(uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
    }
  }
  iVar4 = (int)param_1[3];
  if (0 < iVar4) {
    uVar11 = 0;
    do {
      lVar3 = *param_1;
      if (((int)uVar11 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar11 >> 9) * 8) +
                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        plVar8 = (longlong *)param_1[6];
        if ((longlong *)param_1[6] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        puVar2 = (uint *)((longlong)plVar8 + (ulonglong)(uVar11 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar11 & 0x1f);
        iVar4 = (int)param_1[3];
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar4);
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_146c2aa20();
  return;
}



// FUNCTION 146c2c95a FUN_146c2c95a body=164 status=ok
// SIG undefined FUN_146c2c95a(void)

void FUN_146c2c95a(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((int)param_2 < *(int *)(param_1 + 0xc)) {
    uVar4 = 1 << ((byte)param_2 & 0x1f);
    puVar2 = (undefined8 *)param_1[0x13];
    if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
      puVar2 = param_1 + 0x11;
    }
    uVar3 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    lVar5 = (longlong)((int)uVar3 >> 5);
    if ((*(uint *)((longlong)puVar2 + lVar5 * 4) >> (param_2 & 0x1f) & 1) == 0) {
      puVar2 = param_1 + 0xd;
      if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)param_1[0xf];
      }
      if ((*(uint *)((longlong)puVar2 + lVar5 * 4) & uVar4) != 0) {
        FUN_146c2a1ac(param_1[2],*param_1,param_2);
        puVar2 = param_1 + 0x11;
        if ((undefined8 *)param_1[0x13] != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)param_1[0x13];
        }
        puVar1 = (uint *)((longlong)puVar2 + lVar5 * 4);
        *puVar1 = *puVar1 | uVar4;
        if (param_1[1] != 0) {
          FUN_146c2bc5c(param_1[1],param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146c2c9fe FUN_146c2c9fe body=248 status=ok
// SIG undefined FUN_146c2c9fe(void)

void FUN_146c2c9fe(longlong *param_1,uint param_2,char param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  
  if ((int)param_2 < (int)param_1[3]) {
    uVar9 = 1 << ((byte)param_2 & 0x1f);
    plVar5 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar5 = param_1 + 8;
    }
    uVar6 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar6 = param_2;
    }
    lVar8 = (longlong)((int)uVar6 >> 5);
    if ((*(uint *)((longlong)plVar5 + lVar8 * 4) >> (param_2 & 0x1f) & 1) == 0) {
      plVar5 = param_1 + 4;
      if ((longlong *)param_1[6] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[6];
      }
      if ((*(uint *)((longlong)plVar5 + lVar8 * 4) & uVar9) != 0) {
        if (param_3 != '\0') {
          lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
          uVar7 = (ulonglong)(param_2 & 0x1ff);
          uVar2 = *(undefined4 *)(lVar4 + 4 + uVar7 * 0xc);
          uVar3 = *(undefined4 *)(lVar4 + 8 + uVar7 * 0xc);
          FUN_146c2c95a(param_1,*(undefined4 *)(lVar4 + uVar7 * 0xc));
          FUN_146c2c95a(param_1,uVar2);
          FUN_146c2c95a(param_1,uVar3);
        }
        FUN_146c2a2ce(param_1[2],*param_1,param_2);
        plVar5 = param_1 + 8;
        if ((longlong *)param_1[10] != (longlong *)0x0) {
          plVar5 = (longlong *)param_1[10];
        }
        puVar1 = (uint *)((longlong)plVar5 + lVar8 * 4);
        *puVar1 = *puVar1 | uVar9;
        if (param_1[1] != 0) {
          FUN_146c2b696(param_1[1],param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146c2caf6 FUN_146c2caf6 body=857 status=ok
// SIG undefined FUN_146c2caf6(void)

longlong * FUN_146c2caf6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 local_108 [36];
  uint local_e4;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_108;
  uVar8 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  lVar2 = *param_1;
  uVar10 = *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144);
  if ((uVar10 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x148) - 1U))) {
    uVar8 = 1;
    uVar7 = 1;
    if (1 < (int)uVar10) {
      uVar8 = (ulonglong)uVar10;
    }
    do {
      uVar5 = uVar7;
      if ((uint)uVar8 == uVar5) goto LAB_146c2cb94;
      uVar7 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x148))[uVar5 >> 9] +
                                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    uVar8 = (ulonglong)uVar5;
  }
LAB_146c2cb94:
  local_e0 = param_2;
  if ((uint)uVar8 != uVar10) {
    plVar9 = param_1 + 4;
    plVar11 = param_1 + 8;
    local_e4 = uVar10;
    local_d8 = plVar11;
    local_d0 = plVar9;
    do {
      uVar7 = (uint)uVar8;
      if ((int)uVar7 < (int)param_1[3]) {
        plVar6 = (longlong *)param_1[6];
        if ((longlong *)param_1[6] == (longlong *)0x0) {
          plVar6 = plVar9;
        }
        uVar5 = uVar7 + 0x1f;
        if (-1 < (int)uVar7) {
          uVar5 = uVar7;
        }
        if ((*(uint *)((longlong)plVar6 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar7 & 0x1f) & 1) ==
            0) goto LAB_146c2ccd6;
        plVar6 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar6 = plVar11;
        }
        if ((*(uint *)((longlong)plVar6 + (longlong)((int)uVar5 >> 5) * 4) &
            1 << ((byte)uVar8 & 0x1f)) != 0) goto LAB_146c2ccd6;
      }
      else {
LAB_146c2ccd6:
        lVar12 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (uVar8 >> 9) * 8);
        local_b0 = *(undefined4 *)(lVar12 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        local_b8 = *(undefined8 *)(lVar12 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        lVar12 = 0;
        do {
          uVar10 = *(uint *)((longlong)&local_b8 + lVar12 * 4);
          if ((int)uStack_90 != local_64) {
            puVar4 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar4 = local_60;
            }
            for (iVar1 = *(int *)(puVar4 + (ulonglong)(local_50 - 1U & uVar10) * 4); iVar1 != -1;
                iVar1 = *(int *)(local_98 + (longlong)iVar1 * 0xc + 4)) {
              if (*(uint *)(local_98 + (longlong)iVar1 * 0xc) == uVar10) goto LAB_146c2cd81;
            }
          }
          FUN_146c2a3b4(param_1[2],*param_1);
          FUN_1447cbafe(&local_98,local_bc,(longlong)&local_b8 + lVar12 * 4,0);
LAB_146c2cd81:
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        FUN_146c2a4de(param_1[2],*param_1,uVar8);
        uVar3 = uStack_a0;
        lVar12 = (longlong)(int)uStack_a0;
        uVar10 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
        if (uStack_a0._4_4_ < uVar10) {
          FUN_1446f48e2(&local_a8,uVar3 & 0xffffffff);
        }
        *(uint *)(local_a8 + lVar12 * 4) = uVar7;
        plVar9 = local_d0;
        plVar11 = local_d8;
        uVar10 = local_e4;
      }
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar10) {
        uVar5 = uVar10;
      }
      do {
        if (uVar5 - 1 == (int)uVar8) {
          uVar8 = (ulonglong)uVar5;
          break;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x148) +
                                             (ulonglong)(uVar7 >> 9) * 8) +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar8 != uVar10);
  }
  lVar2 = param_1[2];
  if (param_1[1] != 0) {
    FUN_146c2bcee(param_1[1],&local_a8);
    local_c8 = *(undefined8 *)(param_1[1] + 8);
    FUN_146c2ce50(lVar2);
  }
  plVar9 = local_e0;
  *local_e0 = lVar2;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)local_108) == DAT_14c707940) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2ce50 FUN_146c2ce50 body=92 status=ok
// SIG undefined FUN_146c2ce50(void)

void FUN_146c2ce50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0x40);
  if (plVar2 != param_2) {
    lVar1 = *plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (lVar1 == 0) {
      return;
    }
    FUN_146c43c78(lVar1);
    FUN_1400020a8(lVar1);
  }
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return;
  }
  FUN_146c43c78(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 146c2ceac FUN_146c2ceac body=147 status=ok
// SIG undefined FUN_146c2ceac(void)

void FUN_146c2ceac(longlong param_1,longlong *param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_3 ^ 1) * 0x20;
  uVar1 = *(uint *)(param_1 + 0x18 + uVar5);
  iVar3 = (int)param_2[1] + uVar1;
  if (-1 < iVar3) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      FUN_14481578e(param_2);
    }
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + (uVar5 | 0x10));
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_2,iVar3);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar2 + lVar4);
        lVar4 = lVar4 + 0x20;
      } while ((ulonglong)uVar1 << 5 != lVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 146c2cf40 FUN_146c2cf40 body=118 status=ok
// SIG undefined FUN_146c2cf40(void)

void FUN_146c2cf40(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  puVar1 = param_1 + 1;
  FUN_146bfd51c(puVar1,1,0);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    _Dst = (void *)FUN_14001cc68(0x800);
    memset(_Dst,0,0x800);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_14582f07c(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 146c2cfb6 FUN_146c2cfb6 body=160 status=ok
// SIG undefined FUN_146c2cfb6(void)

void FUN_146c2cfb6(int *param_1)

{
  int iVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1411b3fe4(param_1 + 6);
  param_1[0xc] = 0;
  iVar1 = *param_1 * 0x200 + param_1[1];
  local_2c = 0;
  if (0 < iVar1) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 2) + (ulonglong)(local_2c >> 9) * 8) +
                             (ulonglong)(local_2c & 0x1ff) * 2) - 1U) < 0xfffe) {
        param_1[0xc] = param_1[0xc] + 1;
      }
      else {
        FUN_146bee31c(param_1 + 6,&local_2c);
      }
      local_2c = local_2c + 1;
    } while ((int)local_2c < iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c2d058 FUN_146c2d058 body=76 status=ok
// SIG undefined FUN_146c2d058(void)

undefined8 * FUN_146c2d058(undefined8 *param_1)

{
  FUN_141224904(param_1 + 1);
  FUN_141040b84(param_1 + 4);
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14582f01a(param_1 + 8);
  FUN_141040b84(param_1 + 0xb);
  FUN_141040b84(param_1 + 0xe);
  *param_1 = 0;
  return param_1;
}



// FUNCTION 146c2d0a4 FUN_146c2d0a4 body=110 status=ok
// SIG undefined FUN_146c2d0a4(void)

int FUN_146c2d0a4(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_146c08aba(param_1 + 8);
  iVar2 = iVar1 * 2 + 1;
  lVar3 = 4;
  do {
    FUN_146bfd34a(param_1 + 0x40,param_2 + lVar3,iVar2);
    lVar3 = lVar3 + -4;
    iVar2 = iVar2 + -1;
  } while (lVar3 != -4);
  FUN_146bedf4e(param_1 + 0x58,&DAT_149f3b198,iVar1);
  return iVar1;
}



// FUNCTION 146c2d112 FUN_146c2d112 body=150 status=ok
// SIG undefined FUN_146c2d112(void)

int FUN_146c2d112(longlong param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0;
  iVar1 = FUN_146c08aba(param_1 + 8);
  iVar2 = 1;
  do {
    FUN_146bfd34a(param_1 + 0x40,&local_3c,iVar1 * 2 + iVar2);
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  FUN_146bedf4e(param_1 + 0x58,&DAT_149f3b198,iVar1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2d1aa FUN_146c2d1aa body=749 status=ok
// SIG undefined FUN_146c2d1aa(void)

void FUN_146c2d1aa(longlong *param_1,uint param_2,uint *param_3,byte param_4,char param_5)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_88;
  if (*param_1 != 0) {
    local_54[0] = 0xffffffff;
    local_54[1] = 0xffffffff;
    local_54[2] = 0xffffffff;
    uVar11 = param_2 * 3 + 3;
    uVar12 = (int)param_1[0xe] * 0x200 + *(int *)((longlong)param_1 + 0x74);
    if (uVar12 < uVar11) {
      FUN_1411b328a(param_1 + 0xe,uVar11);
      uVar4 = uVar12;
      do {
        *(undefined4 *)
         (*(longlong *)(param_1[0xf] + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
         ) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar11);
    }
    uVar4 = param_2 * 3;
    if ((uVar11 <= uVar12 & param_4) == 0) {
      uVar6 = (ulonglong)(uVar4 + 2 & 0x1ff);
      uVar8 = (ulonglong)(uVar4 + 1 >> 9);
      uVar7 = (ulonglong)(uVar4 + 1 & 0x1ff);
      uVar9 = (ulonglong)(uVar4 >> 9);
      uVar5 = (ulonglong)(uVar4 & 0x1ff);
      lVar10 = *(longlong *)(param_1[0xf] + (ulonglong)(uVar4 + 2 >> 9) * 8);
      bVar13 = false;
    }
    else {
      lVar3 = param_1[0xf];
      lVar10 = *(longlong *)(lVar3 + (ulonglong)(uVar4 + 2 >> 9) * 8);
      uVar6 = (ulonglong)(uVar4 + 2 & 0x1ff);
      uVar8 = (ulonglong)(uVar4 + 1 >> 9);
      uVar7 = (ulonglong)(uVar4 + 1 & 0x1ff);
      uVar9 = (ulonglong)(uVar4 >> 9);
      uVar5 = (ulonglong)(uVar4 & 0x1ff);
      local_54[0] = *(int *)(*(longlong *)(lVar3 + uVar9 * 8) + uVar5 * 4);
      local_54[1] = *(undefined4 *)(*(longlong *)(lVar3 + uVar8 * 8) + uVar7 * 4);
      local_54[2] = *(undefined4 *)(lVar10 + uVar6 * 4);
      bVar13 = local_54[0] != -1;
    }
    *(uint *)(lVar10 + uVar6 * 4) = param_3[2];
    *(uint *)(*(longlong *)(param_1[0xf] + uVar8 * 8) + uVar7 * 4) = param_3[1];
    uVar11 = *param_3;
    *(uint *)(*(longlong *)(param_1[0xf] + uVar9 * 8) + uVar5 * 4) = uVar11;
    if (param_4 != 0) {
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(param_3[1] >> 9) * 8) +
                        (ulonglong)(param_3[1] & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(param_3[2] >> 9) * 8) +
                        (ulonglong)(param_3[2] & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      if (bVar13) {
        lVar10 = 0;
        do {
          uVar11 = local_54[lVar10];
          FUN_146c09a68(param_1 + 1,uVar11,1);
          if (param_5 != '\0') {
            if (*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar11 >> 9) * 8) +
                          (ulonglong)(uVar11 & 0x1ff) * 2) == 1) {
              FUN_146c09a68(param_1 + 1,uVar11,1);
              *(undefined4 *)
               (*(longlong *)(param_1[0xc] + (ulonglong)(uVar11 >> 9) * 8) +
               (ulonglong)(uVar11 & 0x1ff) * 4) = 0xffffffff;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
      }
    }
    if (((*param_3 != 0xffffffff) || (param_3[1] != 0xffffffff)) || (param_3[2] != 0xffffffff)) {
      lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
      local_58 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
      local_60 = *(undefined8 *)(lVar10 + (ulonglong)(param_2 & 0x1ff) * 0xc);
      lVar10 = 0;
      do {
        uVar11 = param_3[lVar10];
        lVar3 = param_1[0xb];
        iVar2 = *(int *)((longlong)param_1 + 0x5c);
        FUN_146bedf4e(param_1 + 0xb,(longlong)&local_60 + lVar10 * 4,uVar11);
        for (uVar12 = (int)lVar3 * 0x200 + iVar2; uVar12 < uVar11; uVar12 = uVar12 + 1) {
          *(undefined4 *)
           (*(longlong *)(param_1[0xc] + (ulonglong)(uVar12 >> 9) * 8) +
           (ulonglong)(uVar12 & 0x1ff) * 4) = 0xffffffff;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
    }
  }
  if ((local_48 ^ (ulonglong)local_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2d498 FUN_146c2d498 body=247 status=ok
// SIG undefined FUN_146c2d498(void)

void FUN_146c2d498(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar2 = param_2 * 3;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar2 >> 9) * 8) +
              (ulonglong)(uVar2 & 0x1ff) * 4) != -1) {
    iVar6 = 0;
    do {
      uVar5 = (ulonglong)(uVar2 + iVar6 >> 9);
      uVar4 = (ulonglong)(uVar2 + iVar6 & 0x1ff);
      FUN_146c09a68(param_1 + 8,
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5 * 8) + uVar4 * 4),1);
      lVar3 = *(longlong *)(param_1 + 0x78);
      if (param_3 != '\0') {
        uVar1 = *(uint *)(*(longlong *)(lVar3 + uVar5 * 8) + uVar4 * 4);
        if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                      (ulonglong)(uVar1 & 0x1ff) * 2) == 1) {
          FUN_146c09a68(param_1 + 8,uVar1,1);
          uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5 * 8) + uVar4 * 4);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
           (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
          lVar3 = *(longlong *)(param_1 + 0x78);
        }
      }
      *(undefined4 *)(*(longlong *)(lVar3 + uVar5 * 8) + uVar4 * 4) = 0xffffffff;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 3);
  }
  return;
}



// FUNCTION 146c2d590 FUN_146c2d590 body=234 status=ok
// SIG undefined FUN_146c2d590(void)

ulonglong FUN_146c2d590(undefined8 *param_1,uint param_2,uint param_3)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 **local_48;
  undefined8 *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == param_3) {
    uVar1 = 0;
  }
  else {
    uVar2 = (ulonglong)(param_2 >> 9);
    uVar3 = (ulonglong)(param_2 & 0x1ff);
    bVar4 = *(int *)(*(longlong *)(param_1[0xc] + uVar2 * 8) + uVar3 * 4) ==
            *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(param_3 >> 9) * 8) +
                    (ulonglong)(param_3 & 0x1ff) * 4);
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar4);
    local_40 = param_1;
    local_38 = param_2;
    local_34 = param_3;
    if (bVar4) {
      local_48 = &local_40;
      local_50 = &LAB_146c586c8;
      FUN_146c03fd0(*param_1);
      if (*(short *)(*(longlong *)(param_1[2] + uVar2 * 8) + uVar3 * 2) == 1) {
        FUN_146c09a68(param_1 + 1,param_2,1);
        *(undefined4 *)(*(longlong *)(param_1[0xc] + uVar2 * 8) + uVar3 * 4) = 0xffffffff;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2d67c FUN_146c2d67c body=448 status=ok
// SIG undefined FUN_146c2d67c(void)

uint FUN_146c2d67c(longlong param_1,uint param_2,undefined4 param_3,undefined8 *param_4)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined1 auStack_98 [36];
  uint local_74;
  int *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(param_2 >> 5 & 0x3fffff8));
  uVar4 = (ulonglong)((param_2 & 0xff) << 3);
  local_50 = *(undefined4 *)(lVar3 + uVar4);
  local_4c = *(undefined4 *)(lVar3 + 4 + uVar4);
  local_54 = param_3;
  local_74 = FUN_146c2d0a4(param_1);
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    piVar9 = (int *)*param_4;
    local_70 = piVar9 + *(int *)(param_4 + 1);
    local_60 = param_1 + 8;
    local_68 = (ulonglong)(local_74 >> 9);
    uVar6 = local_74 & 0x1ff;
    do {
      iVar2 = *piVar9;
      iVar5 = 0;
      do {
        uVar7 = iVar2 * 3 + iVar5;
        uVar4 = (ulonglong)(uVar7 >> 9);
        uVar8 = (ulonglong)(uVar7 & 0x1ff);
        if (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar4 * 8) + uVar8 * 4) ==
            param_2) {
          FUN_146c09a68(local_60,param_2,1);
          psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + local_68 * 8) +
                            (ulonglong)uVar6 * 2);
          *psVar1 = *psVar1 + 1;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar4 * 8) + uVar8 * 4) = local_74
          ;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 3);
      piVar9 = piVar9 + 1;
    } while (piVar9 != local_70);
  }
  iVar2 = *(int *)(param_1 + 0x58);
  iVar5 = *(int *)(param_1 + 0x5c);
  FUN_146bedf4e(param_1 + 0x58,&local_54,local_74);
  for (uVar6 = iVar2 * 0x200 + iVar5; uVar6 < local_74; uVar6 = uVar6 + 1) {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar6 & 0x1ff) * 4) = 0xffffffff;
  }
  if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                (ulonglong)(param_2 & 0x1ff) * 2) == 1) {
    FUN_146c09a68(param_1 + 8,param_2,1);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(param_2 >> 9) * 8) +
     (ulonglong)(param_2 & 0x1ff) * 4) = 0xffffffff;
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return local_74;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2d83e FUN_146c2d83e body=1961 status=ok
// SIG undefined FUN_146c2d83e(void)

void FUN_146c2d83e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  byte local_1a9;
  ulonglong local_1a8;
  uint local_19c;
  longlong *local_198;
  uint local_18c;
  undefined4 *local_188;
  ulonglong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 uStack_150;
  uint local_144;
  undefined8 local_140;
  undefined4 **local_138;
  longlong *local_130;
  uint *local_128;
  uint local_11c;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 *local_108;
  ulonglong uStack_100;
  undefined4 *local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  undefined8 uStack_d0;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_e8[2] = 0;
  uStack_d0 = 0;
  local_1b8 = local_e8;
  local_e8[0] = 0;
  local_e8[1] = 0;
  uVar16 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c8[2] = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_f8 = (undefined4 *)0x0;
  uStack_f0 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_198 = param_3;
  FUN_146c13054(*param_1,param_2,local_c8,local_e8 + 2);
  FUN_1402226aa();
  local_178 = (longlong)(int)uStack_d0;
  local_11c = 0;
  if (0 < local_178) {
    lVar14 = 0;
    do {
      uVar3 = *(uint *)(local_e8[2] + lVar14 * 4);
      local_1a8 = (ulonglong)uVar3;
      uVar7 = (uint)uVar16;
      if (0 < (int)uVar3) {
        local_1a9 = *(byte *)(local_e8[0] + lVar14);
        bVar17 = (longlong)uStack_f0 < 0;
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        uVar3 = uVar7;
        local_170 = lVar14;
        if (bVar17) {
          FUN_14481578e(&local_f8,0);
          uVar3 = local_11c;
        }
        local_19c = (int)local_1a8 + uVar7;
        if ((int)uVar3 < (int)local_19c) {
          lVar14 = (longlong)(int)uVar3;
          iVar15 = ((int)local_1a8 + uVar7) - uVar3;
          do {
            uVar1 = uStack_f0;
            uVar3 = *(uint *)(local_c8[0] + lVar14 * 4);
            uVar12 = uVar3 * 3 + 2;
            uVar13 = uVar3 * 3 + 1;
            lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
            uVar11 = (ulonglong)(uVar3 & 0x1ff);
            lVar10 = param_1[0xf];
            local_140 = (longlong *)
                        CONCAT44(*(undefined4 *)
                                  (*(longlong *)(lVar10 + (ulonglong)(uVar13 >> 9) * 8) +
                                  (ulonglong)(uVar13 & 0x1ff) * 4),
                                 *(undefined4 *)
                                  (*(longlong *)(lVar10 + (ulonglong)(uVar3 * 3 >> 9) * 8) +
                                  (ulonglong)(uVar3 * 3 & 0x1ff) * 4));
            local_138 = (undefined4 **)
                        CONCAT44(local_138._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)(lVar10 + (ulonglong)(uVar12 >> 9) * 8) +
                                  (ulonglong)(uVar12 & 0x1ff) * 4));
            iVar8 = (int)param_2;
            if (*(int *)(lVar9 + uVar11 * 0xc) == iVar8) {
              lVar10 = 0;
            }
            else {
              lVar10 = 1;
              if (*(int *)(lVar9 + 4 + uVar11 * 0xc) != iVar8) {
                lVar10 = (ulonglong)(*(int *)(lVar9 + 8 + uVar11 * 0xc) == iVar8) * 3 + -1;
              }
            }
            lVar9 = (longlong)(int)uStack_f0;
            uVar3 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar3);
            if (uStack_f0._4_4_ < uVar3) {
              FUN_1446f48e2(&local_f8,uVar1 & 0xffffffff);
            }
            local_f8[lVar9] = *(undefined4 *)((longlong)&local_140 + lVar10 * 4);
            lVar14 = lVar14 + 1;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        local_138 = &local_f8;
        local_130 = local_c8;
        local_128 = &local_11c;
        bVar17 = (longlong)uStack_100 < 0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        local_140 = param_1;
        if (bVar17) {
          FUN_14481578e(&local_108,0);
        }
        FUN_144a1a59e(&local_108,local_1a8,1);
        bVar17 = (longlong)uStack_110 < 0;
        uStack_110 = uStack_110 & 0xffffffff00000000;
        if (bVar17) {
          FUN_14481578e(&local_118,0);
        }
        puVar6 = local_f8;
        uVar1 = uStack_110;
        *local_108 = 0;
        lVar14 = (longlong)(int)uStack_110;
        uVar3 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
        if (uStack_110._4_4_ < uVar3) {
          FUN_1446f48e2(&local_118,uVar1 & 0xffffffff);
        }
        *(undefined4 *)(local_118 + lVar14 * 4) = *puVar6;
        if ((int)(local_11c + 1) < (int)local_19c) {
          local_18c = ((int)local_1a8 + uVar7) - 1;
          iVar15 = 0;
          uVar3 = local_11c;
          local_180 = uVar16;
          do {
            uVar7 = uVar3 + 1;
            cVar2 = FUN_146c2dfe8(&local_140,uVar3,uVar7);
            uVar1 = uStack_110;
            if (cVar2 == '\0') {
              iVar8 = uVar3 - local_11c;
              lVar14 = (longlong)(int)uStack_110;
              uVar12 = (int)uStack_110 + 1;
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar12);
              puVar6 = local_f8;
              if (uStack_110._4_4_ < uVar12) {
                local_188 = local_f8;
                FUN_1446f48e2(&local_118,uVar1 & 0xffffffff);
                puVar6 = local_188;
              }
              *(undefined4 *)(local_118 + lVar14 * 4) = puVar6[iVar8 + 1];
              iVar15 = iVar15 + 1;
              uVar16 = local_180;
            }
            iVar8 = (int)uVar16;
            local_108[(longlong)(int)(uVar3 - local_11c) + 1] = iVar15;
            uVar3 = uVar7;
          } while (local_18c != uVar7);
          if ((local_1a9 & 0 < iVar15) == 0) goto LAB_146c2dc69;
          cVar2 = FUN_146c2dfe8(&local_140,local_11c,(int)local_1a8 + local_11c + -1);
          if (cVar2 == '\0') goto LAB_146c2dc69;
          if (0 < (longlong)(int)uStack_100) {
            iVar15 = local_108[(int)uStack_100 + -1];
            uVar16 = (longlong)(int)uStack_100 + 1;
            do {
              if (local_108[uVar16 - 2] != iVar15) break;
              local_108[uVar16 - 2] = 0;
              uVar16 = uVar16 - 1;
            } while (1 < uVar16);
          }
          iVar15 = (int)uStack_110 + -1;
          uStack_110 = CONCAT44(uStack_110._4_4_,iVar15);
        }
        else {
LAB_146c2dc69:
          iVar8 = (int)uVar16;
          iVar15 = (int)uStack_110;
        }
        if (0 < iVar15) {
          local_1a8 = (ulonglong)(uint)((int)local_1a8 + iVar8);
          uVar16 = 0;
          do {
            local_144 = *(uint *)(local_118 + uVar16 * 4);
            if (-1 < (int)local_144) {
              if ((int)uStack_b0 != local_84) {
                puVar5 = local_78;
                if (local_78 == (undefined1 *)0x0) {
                  puVar5 = local_80;
                }
                iVar15 = *(int *)(puVar5 + (ulonglong)(local_70 + 0x7fffffffU & local_144) * 4);
                if (iVar15 != -1) {
LAB_146c2dce7:
                  if (*(uint *)(local_c8[2] + (longlong)iVar15 * 0xc) != local_144)
                  goto code_r0x000146c2dcf3;
                  local_158 = 0;
                  uStack_150 = 0;
                  lVar14 = (longlong)(int)local_11c;
                  if ((int)local_11c < (int)local_19c) {
                    iVar15 = (int)local_1a8 - local_11c;
                    do {
                      lVar9 = local_c8[0];
                      uVar1 = uStack_150;
                      if (uVar16 == (uint)local_108[lVar14 - (int)local_11c]) {
                        lVar10 = (longlong)(int)uStack_150;
                        uVar3 = (int)uStack_150 + 1;
                        uStack_150 = CONCAT44(uStack_150._4_4_,uVar3);
                        if (uStack_150._4_4_ < uVar3) {
                          FUN_1446f48e2(&local_158,uVar1 & 0xffffffff);
                        }
                        *(undefined4 *)(local_158 + lVar10 * 4) =
                             *(undefined4 *)(lVar9 + lVar14 * 4);
                      }
                      lVar14 = lVar14 + 1;
                      iVar15 = iVar15 + -1;
                    } while (iVar15 != 0);
                  }
                  else {
                    uStack_150._0_4_ = 0;
                  }
                  local_168 = local_158;
                  local_160 = (int)uStack_150;
                  uVar4 = FUN_146c2d67c(param_1,local_144,
                                        *(undefined4 *)
                                         (*(longlong *)
                                           (param_1[0xc] + (ulonglong)(local_144 >> 9) * 8) +
                                         (ulonglong)(local_144 & 0x1ff) * 4),&local_168);
                  if (local_198 != (longlong *)0x0) {
                    iVar15 = (int)local_198[1];
                    *(uint *)(local_198 + 1) = iVar15 + 1U;
                    if (*(uint *)((longlong)local_198 + 0xc) < iVar15 + 1U) {
                      FUN_1446f48e2(local_198,iVar15);
                    }
                    *(undefined4 *)(*local_198 + (longlong)iVar15 * 4) = uVar4;
                  }
                  if (local_158 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
LAB_146c2dcff:
              FUN_1447cbafe(local_c8 + 2,&local_158,&local_144,0);
              iVar15 = (int)uStack_110;
            }
            uVar16 = uVar16 + 1;
          } while ((longlong)uVar16 < (longlong)iVar15);
        }
        local_11c = local_19c;
        lVar14 = local_170;
        uVar7 = local_19c;
      }
      lVar14 = lVar14 + 1;
      uVar16 = (ulonglong)uVar7;
    } while (lVar14 != local_178);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_108 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_c8 + 2);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146c2dcf3:
  iVar15 = *(int *)(local_c8[2] + (longlong)iVar15 * 0xc + 4);
  if (iVar15 == -1) goto LAB_146c2dcff;
  goto LAB_146c2dce7;
}



// FUNCTION 146c2dfe8 FUN_146c2dfe8 body=110 status=ok
// SIG undefined FUN_146c2dfe8(void)

ulonglong FUN_146c2dfe8(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(int *)(*(longlong *)param_1[1] + (longlong)(param_2 - *(int *)param_1[3]) * 4) ==
      *(int *)(*(longlong *)param_1[1] + (longlong)(param_3 - *(int *)param_1[3]) * 4)) {
    puVar1 = (undefined8 *)*param_1;
    iVar2 = FUN_146c08e54(*puVar1,*(undefined4 *)(*(longlong *)param_1[2] + (longlong)param_2 * 4),
                          *(undefined4 *)(*(longlong *)param_1[2] + (longlong)param_3 * 4));
    if (-1 < iVar2) {
      uVar3 = FUN_146c1a770(puVar1,iVar2,0);
      return uVar3 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 146c2e056 FUN_146c2e056 body=782 status=ok
// SIG undefined FUN_146c2e056(void)

ulonglong FUN_146c2e056(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_258 [36];
  uint local_234 [3];
  longlong local_228;
  ulonglong uStack_220;
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_258;
  local_228 = 0;
  uStack_220 = 0;
  local_234[0] = 0xffffffff;
  local_234[1] = 0xffffffff;
  local_234[2] = 0xffffffff;
  local_150 = *param_1;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,param_2);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = param_2;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar2 = local_120 * 3;
    lVar5 = param_1[0xf];
    iVar1 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < iVar1) {
      local_234[1] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      local_234[0] = iVar1;
      local_234[2] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                      (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      lVar5 = 0;
      do {
        if (*(int *)(*(longlong *)
                      (param_1[0xc] + (ulonglong)(*(uint *)((longlong)local_234 + lVar5) >> 9) * 8)
                    + (ulonglong)(*(uint *)((longlong)local_234 + lVar5) & 0x1ff) * 4) == param_2) {
          FUN_1449e3bb0(&local_228,(longlong)local_234 + lVar5);
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar4 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar4 = local_198;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar4 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar4 = local_f8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  uVar3 = uStack_220;
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)local_258) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2e366 FUN_146c2e366 body=318 status=ok
// SIG undefined FUN_146c2e366(void)

undefined4 FUN_146c2e366(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_1 + 0xb8;
  iVar5 = 0;
  FUN_146be983e(&local_60,lVar4,param_2,0);
  if ((((local_60 != lVar4) || (local_58 != param_2)) || ((int)local_48 != -1)) ||
     (iVar6 = 0, local_48._4_4_ != -1)) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(local_40 >> 9) * 8) +
                   0xc + (ulonglong)((local_40 & 0x1ff) << 4)) == -1) {
        iVar6 = iVar6 + 1;
      }
      else {
        bVar1 = FUN_146c1a770(param_1,local_40,0);
        iVar5 = iVar5 + (uint)bVar1;
      }
      if (local_50 == 0) {
        local_54 = 0xffffffff;
        local_48 = 0xffffffffffffffff;
        local_48._4_4_ = -1;
        local_48._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_60);
      }
    } while (((local_60 != lVar4) || (local_58 != param_2)) ||
            (((int)local_48 != -1 || (local_48._4_4_ != -1))));
    iVar5 = iVar5 * 2;
  }
  iVar2 = FUN_146c2e056(param_1,param_2);
  if (iVar2 == 1 && iVar5 + iVar6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT31((int3)((uint)(iVar2 * 2) >> 8),iVar5 + iVar6 != iVar2 * 2);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2e4a6 FUN_146c2e4a6 body=196 status=ok
// SIG undefined FUN_146c2e4a6(void)

ulonglong FUN_146c2e4a6(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48 [3];
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  FUN_146c03f0e(lVar1,&local_3c,param_2);
  if (local_3c == param_3) {
    puVar2 = local_48 + 2;
  }
  else if (local_38 == param_3) {
    puVar2 = local_48 + 1;
  }
  else {
    if (local_34 != param_3) {
      uVar3 = 0;
      goto LAB_146c2e4f0;
    }
    puVar2 = local_48;
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + (ulonglong)(param_2 >> 9) * 8);
  uVar3 = (ulonglong)(param_2 & 0x1ff);
  local_48[2] = *(undefined4 *)(lVar1 + uVar3 * 0xc);
  local_48[1] = *(undefined4 *)(lVar1 + 4 + uVar3 * 0xc);
  local_48[0] = *(undefined4 *)(lVar1 + 8 + uVar3 * 0xc);
  uVar3 = FUN_146c1a770(param_1,*puVar2,0);
  uVar3 = uVar3 ^ 1;
LAB_146c2e4f0:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2e56c FUN_146c2e56c body=758 status=ok
// SIG undefined FUN_146c2e56c(void)

void FUN_146c2e56c(longlong *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_248 [36];
  uint local_224 [3];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_248;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  local_150 = *param_1;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,param_2);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = param_2;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar2 = local_120 * 3;
    lVar4 = param_1[0xf];
    uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      local_224[0] = uVar1;
      local_224[1] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      local_224[2] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                      (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      lVar4 = 0;
      do {
        if (*(int *)(*(longlong *)
                      (param_1[0xc] + (ulonglong)(*(uint *)((longlong)local_224 + lVar4) >> 9) * 8)
                    + (ulonglong)(*(uint *)((longlong)local_224 + lVar4) & 0x1ff) * 4) == param_2) {
          FUN_1449e3bb0(param_3,(longlong)local_224 + lVar4);
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0xc);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar3 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar3 = local_198;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar3 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar3 = local_f8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)local_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2e864 FUN_146c2e864 body=189 status=ok
// SIG undefined FUN_146c2e864(void)

uint FUN_146c2e864(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = param_2 * 3 + 2;
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar1 = param_2 * 3 + 1;
  local_1c[0] = *(uint *)(*(longlong *)(lVar2 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                         (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  local_1c[1] = *(undefined4 *)
                 (*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                 (ulonglong)(uVar1 & 0x1ff) * 4);
  local_1c[2] = *(undefined4 *)
                 (*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                 (ulonglong)(uVar3 & 0x1ff) * 4);
  lVar2 = 0;
  do {
    uVar1 = local_1c[lVar2];
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
                (ulonglong)(uVar1 & 0x1ff) * 4) == param_3) goto LAB_146c2e905;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  uVar1 = 0xffffffff;
LAB_146c2e905:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2e922 FUN_146c2e922 body=976 status=ok
// SIG undefined FUN_146c2e922(void)

undefined8 FUN_146c2e922(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  uint local_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *param_1;
  uVar16 = 0;
  uVar14 = *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4);
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x1d8) - 1U))) {
    uVar16 = 1;
    uVar17 = 1;
    if (1 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
    }
    do {
      uVar15 = uVar17;
      if ((uint)uVar16 == uVar15) goto LAB_146c2e977;
      uVar17 = uVar15 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x1d8))[uVar15 >> 9] +
                                         (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
    uVar16 = (ulonglong)uVar15;
  }
LAB_146c2e977:
  if ((uint)uVar16 != uVar14) {
    local_70 = *(longlong *)(lVar5 + 0x1c0);
    do {
      lVar13 = *(longlong *)(local_70 + (uVar16 >> 9) * 8);
      uVar17 = (uint)uVar16 & 0x1ff;
      uVar9 = *(ulonglong *)(lVar13 + 8 + (ulonglong)(uVar17 << 4));
      local_68 = param_1;
      if (uVar9 >> 0x20 != 0xffffffff) {
        uVar8 = (int)uVar9 * 3;
        lVar6 = param_1[0xf];
        uVar15 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar8 >> 9) * 8) +
                          (ulonglong)(uVar8 & 0x1ff) * 4);
        uVar7 = (int)(uVar9 >> 0x20) * 3;
        uVar1 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        if ((int)(uVar1 | uVar15) < 0) {
          uVar9 = (ulonglong)(uVar1 ^ uVar15);
          if ((int)(uVar1 ^ uVar15) < 0) {
LAB_146c2ecec:
            uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
            goto LAB_146c2e97e;
          }
        }
        else {
          uVar10 = *(undefined8 *)(lVar13 + (ulonglong)(uVar17 << 4));
          local_60[5] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
          local_60[4] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
          local_60[3] = uVar15;
          lVar13 = param_1[0xc];
          iVar2 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(local_60[5] >> 9) * 8) +
                          (ulonglong)(local_60[5] & 0x1ff) * 4);
          iVar3 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(local_60[4] >> 9) * 8) +
                          (ulonglong)(local_60[4] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar15 >> 9) * 8) +
                          (ulonglong)(uVar15 & 0x1ff) * 4);
          iVar12 = (int)uVar10;
          if (iVar4 == iVar12) {
            lVar19 = 0;
          }
          else {
            lVar19 = 1;
            if (iVar3 != iVar12) {
              lVar19 = (ulonglong)(iVar2 == iVar12) * 3 + -1;
            }
          }
          iVar18 = (int)((ulonglong)uVar10 >> 0x20);
          if (iVar4 == iVar18) {
            lVar11 = 0;
          }
          else {
            lVar11 = 1;
            if (iVar3 != iVar18) {
              lVar11 = (ulonglong)(iVar2 == iVar18) * 3 + -1;
            }
          }
          local_60[2] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          local_60[1] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          local_60[0] = uVar1;
          iVar2 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(local_60[2] >> 9) * 8) +
                          (ulonglong)(local_60[2] & 0x1ff) * 4);
          iVar3 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(local_60[1] >> 9) * 8) +
                          (ulonglong)(local_60[1] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 4);
          if (iVar4 == iVar12) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
            if (iVar3 != iVar12) {
              uVar9 = (ulonglong)(iVar2 == iVar12) * 3 - 1;
            }
          }
          if (iVar4 == iVar18) {
            lVar13 = 0;
          }
          else {
            lVar13 = 1;
            if (iVar3 != iVar18) {
              lVar13 = (ulonglong)(iVar2 == iVar18) * 3 + -1;
            }
          }
          if (local_60[lVar19 + 3] == local_60[uVar9]) {
            if (local_60[lVar11 + 3] != local_60[lVar13]) goto LAB_146c2ecec;
          }
          else {
            uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
            if ((local_60[lVar11 + 3] != local_60[uVar9]) ||
               (local_60[lVar19 + 3] != local_60[lVar13])) goto LAB_146c2e97e;
          }
        }
      }
      uVar17 = (uint)uVar16 + 1;
      if ((int)uVar17 < (int)uVar14) {
        uVar17 = uVar14;
      }
      do {
        if (uVar17 - 1 == (int)uVar16) {
          uVar16 = (ulonglong)uVar17;
          break;
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar5 + 0x1d8) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar16 != uVar14);
  }
  uVar10 = 0;
LAB_146c2e97e:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 146c2ecf4 FUN_146c2ecf4 body=2713 status=ok
// SIG undefined FUN_146c2ecf4(void)

void FUN_146c2ecf4(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong unaff_RBX;
  undefined4 uVar11;
  ulonglong uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auStack_108 [47];
  char local_d9;
  longlong *local_d8;
  longlong *local_d0;
  uint local_c4;
  undefined1 local_c0 [8];
  longlong local_b8 [2];
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  undefined1 local_90 [8];
  longlong local_88 [2];
  undefined1 local_78 [24];
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d9 = param_4;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  bVar6 = *(byte *)(param_2 + 5);
  if ((bVar6 & 1) != 0) {
    iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar7 < 0x38) {
      FUN_146c15b76(param_1 + 1,param_2,0,0);
      FUN_146c5818c(param_1 + 8,param_2);
      FUN_146c45ad4(param_1 + 0xb,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
    }
    bVar6 = *(byte *)(param_2 + 5);
  }
  cVar3 = local_d9;
  local_58 = 0;
  uStack_50 = 0xffffffff00000000;
  if (((param_3 == (longlong *)0x0) || ((bVar6 & 1) != 0)) || ((int)param_3[1] == 0)) {
    FUN_146c15b76(param_1 + 1,param_2,0,CONCAT71((int7)(unaff_RBX >> 8),local_d9) & 0xffffffff);
    if (cVar3 == '\0') {
      FUN_146c44560(param_1 + 8,param_2);
      FUN_146c41ff8(param_1 + 0xb,param_2);
    }
    else {
      FUN_146c4431c();
      FUN_146c44e9c(param_1 + 0xb,param_2);
    }
  }
  else {
    iVar7 = (int)param_1[7];
    local_d8 = param_2;
    local_d0 = param_3;
    FUN_141224904(local_90);
    FUN_141040b84(local_78);
    local_60 = 0;
    FUN_1411b3fe4(local_78);
    FUN_146c41884(local_90,iVar7);
    local_60 = iVar7;
    FUN_14582f01a(local_a8);
    FUN_146bfd442(local_a8,iVar7 * 2);
    FUN_141040b84(local_c0);
    FUN_1411b328a(local_c0,iVar7);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    uStack_50 = 0;
    FUN_1448156a8(&local_58,&DAT_149f3b198,
                  (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc));
    param_3 = local_d0;
    plVar4 = local_d8;
    cVar3 = local_d9;
    uVar19 = 0;
    uVar9 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
    if ((uVar9 != 0) && (uVar19 = 0, 0xfffd < (ushort)(**(short **)param_1[2] - 1U))) {
      uVar8 = 1;
      uVar10 = 1;
      if (1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      do {
        uVar14 = (uint)uVar8;
        uVar19 = uVar10;
        if (uVar10 == uVar14) break;
        uVar23 = uVar8 >> 9;
        uVar8 = (ulonglong)(uVar14 + 1);
        uVar19 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar23] +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    }
    if (uVar19 != uVar9) {
      uVar10 = 0;
      do {
        *(undefined2 *)
         (*(longlong *)(local_88[0] + (ulonglong)(uVar10 >> 9) * 8) +
         (ulonglong)(uVar10 & 0x1ff) * 2) =
             *(undefined2 *)
              (*(longlong *)(param_1[2] + (ulonglong)(uVar19 >> 9) * 8) +
              (ulonglong)(uVar19 & 0x1ff) * 2);
        unaff_RBX = (ulonglong)((uVar10 & 0xff) * 2);
        uVar8 = 0;
        bVar5 = true;
        do {
          bVar13 = bVar5;
          *(undefined4 *)
           (*(longlong *)(local_a0[0] + (ulonglong)(uVar10 >> 8) * 8) + (uVar8 | unaff_RBX) * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1[9] + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
                (uVar8 | uVar19 * 2 & 0x1fe) * 4);
          uVar8 = 1;
          bVar5 = false;
        } while (bVar13);
        lVar18 = (longlong)
                 *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar19 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 4);
        if (lVar18 < 0) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = *(undefined4 *)(*local_d0 + lVar18 * 4);
        }
        *(undefined4 *)
         (*(longlong *)(local_b8[0] + (ulonglong)(uVar10 >> 9) * 8) +
         (ulonglong)(uVar10 & 0x1ff) * 4) = uVar11;
        *(uint *)(local_58 + (longlong)(int)uVar19 * 4) = uVar10;
        uVar10 = uVar10 + 1;
        uVar14 = uVar19 + 1;
        if ((int)(uVar19 + 1) < (int)uVar9) {
          uVar14 = uVar9;
        }
        do {
          uVar21 = uVar14;
          if (uVar14 - 1 == uVar19) break;
          uVar19 = uVar19 + 1;
          uVar21 = uVar19;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (param_1[2] + (ulonglong)(uVar19 >> 9) * 8) +
                                             (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
        uVar19 = uVar21;
        local_c4 = uVar9;
      } while (uVar19 != uVar9);
    }
    FUN_146c15b76(local_90,local_d8,1,CONCAT71((int7)(unaff_RBX >> 8),local_d9) & 0xffffffff);
    if (cVar3 == '\0') {
      FUN_146c44560(local_a8,plVar4);
      FUN_146c41ff8(local_c0,plVar4);
    }
    else {
      FUN_146c4431c();
      FUN_146c44e9c(local_c0,plVar4);
    }
    FUN_141082b5c(local_b8,0);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1457ed392(local_a0,0);
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14117c64e(local_90);
    param_2 = local_d8;
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) ||
     (((param_3 == (longlong *)0x0 || ((int)param_3[3] == 0)) && (iStack_4c == -1)))) {
    if (local_d9 == '\0') {
      FUN_146c41ff8(param_1 + 0xe,param_2);
    }
    else {
      FUN_146c44e9c(param_1 + 0xe,param_2);
    }
    goto LAB_146c2ee76;
  }
  local_d8 = param_2;
  FUN_141040b84(local_90);
  FUN_1411b328a(local_90);
  if (param_3 == (longlong *)0x0) {
LAB_146c2eef7:
    lVar18 = *param_1;
    uVar9 = *(int *)(lVar18 + 0x140) * 0x200 + *(int *)(lVar18 + 0x144);
    uVar19 = 0;
    if ((uVar9 != 0) &&
       (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar18 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar14 = 1;
      if (1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      do {
        uVar21 = uVar14;
        uVar19 = uVar10;
        if (uVar10 == uVar21) break;
        uVar14 = uVar21 + 1;
        uVar19 = uVar21;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar18 + 0x148))[uVar21 >> 9] +
                                           (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
    }
joined_r0x000146c2ef2b:
    uVar10 = uVar19;
    if (uVar10 != uVar9) {
      uVar23 = (ulonglong)(uVar10 * 3 >> 9);
      lVar2 = param_1[0xf];
      uVar8 = (ulonglong)(uVar10 * 3 & 0x1ff);
      lVar15 = (longlong)*(int *)(*(longlong *)(lVar2 + uVar23 * 8) + uVar8 * 4);
      uVar17 = 0xffffffff;
      uVar11 = 0xffffffff;
      if (lVar15 != -1) {
        uVar11 = *(undefined4 *)(local_58 + lVar15 * 4);
      }
      uVar19 = uVar10 * 3 + 1;
      uVar12 = (ulonglong)(uVar19 >> 9);
      uVar20 = (ulonglong)(uVar19 & 0x1ff);
      uVar19 = uVar10 * 3 + 2;
      uVar22 = (ulonglong)(uVar19 >> 9);
      uVar16 = (ulonglong)(uVar19 & 0x1ff);
      iVar7 = *(int *)(*(longlong *)(lVar2 + uVar12 * 8) + uVar20 * 4);
      iVar1 = *(int *)(*(longlong *)(lVar2 + uVar22 * 8) + uVar16 * 4);
      *(undefined4 *)(*(longlong *)(local_88[0] + uVar23 * 8) + uVar8 * 4) = uVar11;
      if (iVar7 != -1) {
        uVar17 = *(undefined4 *)(local_58 + (longlong)iVar7 * 4);
      }
      *(undefined4 *)(*(longlong *)(local_88[0] + uVar12 * 8) + uVar20 * 4) = uVar17;
      if (iVar1 == -1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)(local_58 + (longlong)iVar1 * 4);
      }
      *(undefined4 *)(*(longlong *)(local_88[0] + uVar22 * 8) + uVar16 * 4) = uVar11;
      uVar14 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar9) {
        uVar14 = uVar9;
      }
      do {
        uVar19 = uVar14;
        if (uVar14 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar19 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar18 + 0x148) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      goto joined_r0x000146c2ef2b;
    }
  }
  else if (((int)param_3[3] == 0) || (iStack_4c == -1)) {
    if ((int)param_3[3] == 0) goto LAB_146c2eef7;
    lVar18 = *param_1;
    uVar9 = *(int *)(lVar18 + 0x140) * 0x200 + *(int *)(lVar18 + 0x144);
    uVar19 = 0;
    if ((uVar9 != 0) &&
       (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar18 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar14 = 1;
      if (1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      do {
        uVar21 = uVar14;
        uVar19 = uVar10;
        if (uVar10 == uVar21) break;
        uVar14 = uVar21 + 1;
        uVar19 = uVar21;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar18 + 0x148))[uVar21 >> 9] +
                                           (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
    }
joined_r0x000146c2f5b0:
    uVar10 = uVar19;
    if (uVar10 != uVar9) {
      iVar7 = *(int *)(param_3[2] + (longlong)(int)uVar10 * 4);
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)((uint)(iVar7 * 3) >> 9) * 8) +
       (ulonglong)(iVar7 * 3 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(param_1[0xf] + (ulonglong)(uVar10 * 3 >> 9) * 8) +
            (ulonglong)(uVar10 * 3 & 0x1ff) * 4);
      uVar14 = uVar10 * 3 + 1;
      uVar19 = iVar7 * 3 + 1;
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4)
           = *(undefined4 *)
              (*(longlong *)(param_1[0xf] + (ulonglong)(uVar14 >> 9) * 8) +
              (ulonglong)(uVar14 & 0x1ff) * 4);
      uVar14 = uVar10 * 3 + 2;
      uVar19 = iVar7 * 3 + 2;
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4)
           = *(undefined4 *)
              (*(longlong *)(param_1[0xf] + (ulonglong)(uVar14 >> 9) * 8) +
              (ulonglong)(uVar14 & 0x1ff) * 4);
      uVar14 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar9) {
        uVar14 = uVar9;
      }
      do {
        uVar19 = uVar14;
        if (uVar14 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar19 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar18 + 0x148) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      goto joined_r0x000146c2f5b0;
    }
  }
  else {
    lVar18 = *param_1;
    uVar9 = *(int *)(lVar18 + 0x140) * 0x200 + *(int *)(lVar18 + 0x144);
    uVar19 = 0;
    if ((uVar9 != 0) &&
       (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar18 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar14 = 1;
      if (1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      do {
        uVar21 = uVar14;
        uVar19 = uVar10;
        if (uVar10 == uVar21) break;
        uVar14 = uVar21 + 1;
        uVar19 = uVar21;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar18 + 0x148))[uVar21 >> 9] +
                                           (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
    }
joined_r0x000146c2f0b7:
    uVar10 = uVar19;
    if (uVar10 != uVar9) {
      lVar2 = param_1[0xf];
      lVar15 = (longlong)
               *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar10 * 3 >> 9) * 8) +
                       (ulonglong)(uVar10 * 3 & 0x1ff) * 4);
      uVar17 = 0xffffffff;
      uVar11 = 0xffffffff;
      if (lVar15 != -1) {
        uVar11 = *(undefined4 *)(local_58 + lVar15 * 4);
      }
      uVar19 = *(int *)(param_3[2] + (longlong)(int)uVar10 * 4) * 3;
      uVar14 = uVar10 * 3 + 1;
      uVar21 = uVar10 * 3 + 2;
      iVar7 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
      iVar1 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar21 >> 9) * 8) +
                      (ulonglong)(uVar21 & 0x1ff) * 4);
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4)
           = uVar11;
      if (iVar7 != -1) {
        uVar17 = *(undefined4 *)(local_58 + (longlong)iVar7 * 4);
      }
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar19 + 1 >> 9) * 8) +
       (ulonglong)(uVar19 + 1 & 0x1ff) * 4) = uVar17;
      if (iVar1 == -1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)(local_58 + (longlong)iVar1 * 4);
      }
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar19 + 2 >> 9) * 8) +
       (ulonglong)(uVar19 + 2 & 0x1ff) * 4) = uVar11;
      uVar14 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar9) {
        uVar14 = uVar9;
      }
      do {
        uVar19 = uVar14;
        if (uVar14 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar19 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar18 + 0x148) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      goto joined_r0x000146c2f0b7;
    }
  }
  if (local_d9 == '\0') {
    FUN_146c41ff8(local_90,local_d8);
  }
  else {
    FUN_146c44e9c(local_90,local_d8);
  }
  FUN_141082b5c(local_88,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
LAB_146c2ee76:
  if ((iStack_4c != -1) && (local_58 != 0)) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c2f7ac FUN_146c2f7ac body=168 status=ok
// SIG undefined FUN_146c2f7ac(void)

void FUN_146c2f7ac(longlong param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    lVar1 = *(longlong *)(param_1 + 0x48);
    *(float *)(*(longlong *)(lVar1 + (ulonglong)((param_2 & 0x7fffffff) >> 8) * 8) +
              (uVar4 | param_2 * 2 & 0x1fe) * 4) =
         (float)((double)*(float *)(*(longlong *)
                                     (lVar1 + (ulonglong)((param_4 & 0x7fffffff) >> 8) * 8) +
                                   (uVar4 | param_4 * 2 & 0x1fe) * 4) * param_5 +
                (double)*(float *)(*(longlong *)
                                    (lVar1 + (ulonglong)((param_3 & 0x7fffffff) >> 8) * 8) +
                                  (uVar4 | param_3 * 2 & 0x1fe) * 4) * (1.0 - param_5));
    uVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



// FUNCTION 146c2f854 FUN_146c2f854 body=111 status=ok
// SIG undefined FUN_146c2f854(void)

void FUN_146c2f854(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  FUN_146c09a68(lVar1 + 8,param_2,1);
  uVar2 = param_2 >> 9 & 0x7fffff;
  uVar3 = (ulonglong)((uint)param_2 & 0x1ff);
  if (*(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + uVar2 * 8) + uVar3 * 2) == 1) {
    FUN_146c09a68(lVar1 + 8,param_2 & 0xffffffff,1);
    *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x60) + uVar2 * 8) + uVar3 * 4) = 0xffffffff
    ;
  }
  return;
}



// FUNCTION 146c2f8c4 FUN_146c2f8c4 body=210 status=ok
// SIG undefined FUN_146c2f8c4(void)

void FUN_146c2f8c4(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  double *param_6)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    lVar1 = *(longlong *)(param_1 + 0x48);
    *(float *)(*(longlong *)(lVar1 + (ulonglong)((param_2 & 0x7fffffff) >> 8) * 8) +
              (uVar4 | param_2 * 2 & 0x1fe) * 4) =
         (float)((double)*(float *)(*(longlong *)
                                     (lVar1 + (ulonglong)((param_5 & 0x7fffffff) >> 8) * 8) +
                                   (uVar4 | param_5 * 2 & 0x1fe) * 4) * param_6[2] +
                (double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_3 >> 8) * 8) +
                                  (uVar4 | (param_3 & 0xff) * 2) * 4) * *param_6 +
                (double)*(float *)(*(longlong *)
                                    (lVar1 + (ulonglong)((param_4 & 0x7fffffff) >> 8) * 8) +
                                  (uVar4 | param_4 * 2 & 0x1fe) * 4) * param_6[1]);
    uVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



// FUNCTION 146c2f996 FUN_146c2f996 body=76 status=ok
// SIG undefined FUN_146c2f996(void)

undefined8 * FUN_146c2f996(undefined8 *param_1)

{
  FUN_141224904(param_1 + 1);
  FUN_141040b84(param_1 + 4);
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14582f01a(param_1 + 8);
  FUN_141040b84(param_1 + 0xb);
  FUN_141040b84(param_1 + 0xe);
  *param_1 = 0;
  return param_1;
}



// FUNCTION 146c2f9e2 FUN_146c2f9e2 body=115 status=ok
// SIG undefined FUN_146c2f9e2(void)

int FUN_146c2f9e2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_146c08aba(param_1 + 8);
  param_2 = param_2 + 8;
  lVar2 = 0;
  do {
    FUN_146bfd34a(param_1 + 0x40,param_2,iVar1 * 3 + 2 + (int)lVar2);
    lVar2 = lVar2 + -1;
    param_2 = param_2 + -4;
  } while (lVar2 != -3);
  FUN_146bedf4e(param_1 + 0x58,&DAT_149f3b198,iVar1);
  return iVar1;
}



// FUNCTION 146c2fa56 FUN_146c2fa56 body=146 status=ok
// SIG undefined FUN_146c2fa56(void)

int FUN_146c2fa56(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  iVar1 = FUN_146c08aba(param_1 + 8);
  iVar2 = 2;
  do {
    FUN_146bfd34a(param_1 + 0x40,&local_3c,iVar1 * 3 + iVar2);
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  FUN_146bedf4e(param_1 + 0x58,&DAT_149f3b198,iVar1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2faea FUN_146c2faea body=749 status=ok
// SIG undefined FUN_146c2faea(void)

void FUN_146c2faea(longlong *param_1,uint param_2,uint *param_3,byte param_4,char param_5)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_88;
  if (*param_1 != 0) {
    local_54[0] = 0xffffffff;
    local_54[1] = 0xffffffff;
    local_54[2] = 0xffffffff;
    uVar11 = param_2 * 3 + 3;
    uVar12 = (int)param_1[0xe] * 0x200 + *(int *)((longlong)param_1 + 0x74);
    if (uVar12 < uVar11) {
      FUN_1411b328a(param_1 + 0xe,uVar11);
      uVar4 = uVar12;
      do {
        *(undefined4 *)
         (*(longlong *)(param_1[0xf] + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
         ) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar11);
    }
    uVar4 = param_2 * 3;
    if ((uVar11 <= uVar12 & param_4) == 0) {
      uVar6 = (ulonglong)(uVar4 + 2 & 0x1ff);
      uVar8 = (ulonglong)(uVar4 + 1 >> 9);
      uVar7 = (ulonglong)(uVar4 + 1 & 0x1ff);
      uVar9 = (ulonglong)(uVar4 >> 9);
      uVar5 = (ulonglong)(uVar4 & 0x1ff);
      lVar10 = *(longlong *)(param_1[0xf] + (ulonglong)(uVar4 + 2 >> 9) * 8);
      bVar13 = false;
    }
    else {
      lVar3 = param_1[0xf];
      lVar10 = *(longlong *)(lVar3 + (ulonglong)(uVar4 + 2 >> 9) * 8);
      uVar6 = (ulonglong)(uVar4 + 2 & 0x1ff);
      uVar8 = (ulonglong)(uVar4 + 1 >> 9);
      uVar7 = (ulonglong)(uVar4 + 1 & 0x1ff);
      uVar9 = (ulonglong)(uVar4 >> 9);
      uVar5 = (ulonglong)(uVar4 & 0x1ff);
      local_54[0] = *(int *)(*(longlong *)(lVar3 + uVar9 * 8) + uVar5 * 4);
      local_54[1] = *(undefined4 *)(*(longlong *)(lVar3 + uVar8 * 8) + uVar7 * 4);
      local_54[2] = *(undefined4 *)(lVar10 + uVar6 * 4);
      bVar13 = local_54[0] != -1;
    }
    *(uint *)(lVar10 + uVar6 * 4) = param_3[2];
    *(uint *)(*(longlong *)(param_1[0xf] + uVar8 * 8) + uVar7 * 4) = param_3[1];
    uVar11 = *param_3;
    *(uint *)(*(longlong *)(param_1[0xf] + uVar9 * 8) + uVar5 * 4) = uVar11;
    if (param_4 != 0) {
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(param_3[1] >> 9) * 8) +
                        (ulonglong)(param_3[1] & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(param_3[2] >> 9) * 8) +
                        (ulonglong)(param_3[2] & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      if (bVar13) {
        lVar10 = 0;
        do {
          uVar11 = local_54[lVar10];
          FUN_146c09a68(param_1 + 1,uVar11,1);
          if (param_5 != '\0') {
            if (*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar11 >> 9) * 8) +
                          (ulonglong)(uVar11 & 0x1ff) * 2) == 1) {
              FUN_146c09a68(param_1 + 1,uVar11,1);
              *(undefined4 *)
               (*(longlong *)(param_1[0xc] + (ulonglong)(uVar11 >> 9) * 8) +
               (ulonglong)(uVar11 & 0x1ff) * 4) = 0xffffffff;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
      }
    }
    if (((*param_3 != 0xffffffff) || (param_3[1] != 0xffffffff)) || (param_3[2] != 0xffffffff)) {
      lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
      local_58 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
      local_60 = *(undefined8 *)(lVar10 + (ulonglong)(param_2 & 0x1ff) * 0xc);
      lVar10 = 0;
      do {
        uVar11 = param_3[lVar10];
        lVar3 = param_1[0xb];
        iVar2 = *(int *)((longlong)param_1 + 0x5c);
        FUN_146bedf4e(param_1 + 0xb,(longlong)&local_60 + lVar10 * 4,uVar11);
        for (uVar12 = (int)lVar3 * 0x200 + iVar2; uVar12 < uVar11; uVar12 = uVar12 + 1) {
          *(undefined4 *)
           (*(longlong *)(param_1[0xc] + (ulonglong)(uVar12 >> 9) * 8) +
           (ulonglong)(uVar12 & 0x1ff) * 4) = 0xffffffff;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
    }
  }
  if ((local_48 ^ (ulonglong)local_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2fdd8 FUN_146c2fdd8 body=247 status=ok
// SIG undefined FUN_146c2fdd8(void)

void FUN_146c2fdd8(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar2 = param_2 * 3;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar2 >> 9) * 8) +
              (ulonglong)(uVar2 & 0x1ff) * 4) != -1) {
    iVar6 = 0;
    do {
      uVar5 = (ulonglong)(uVar2 + iVar6 >> 9);
      uVar4 = (ulonglong)(uVar2 + iVar6 & 0x1ff);
      FUN_146c09a68(param_1 + 8,
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5 * 8) + uVar4 * 4),1);
      lVar3 = *(longlong *)(param_1 + 0x78);
      if (param_3 != '\0') {
        uVar1 = *(uint *)(*(longlong *)(lVar3 + uVar5 * 8) + uVar4 * 4);
        if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                      (ulonglong)(uVar1 & 0x1ff) * 2) == 1) {
          FUN_146c09a68(param_1 + 8,uVar1,1);
          uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5 * 8) + uVar4 * 4);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
           (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
          lVar3 = *(longlong *)(param_1 + 0x78);
        }
      }
      *(undefined4 *)(*(longlong *)(lVar3 + uVar5 * 8) + uVar4 * 4) = 0xffffffff;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 3);
  }
  return;
}



// FUNCTION 146c2fed0 FUN_146c2fed0 body=1506 status=ok
// SIG undefined FUN_146c2fed0(void)

void FUN_146c2fed0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_158 [32];
  longlong *local_138;
  char local_129;
  ulonglong local_128;
  ulonglong local_120;
  uint local_114;
  undefined8 *local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  int local_cc;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  longlong local_a8 [3];
  undefined8 uStack_90;
  int *local_88;
  ulonglong uStack_80;
  int local_6c;
  undefined4 local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_146c19dca();
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_a8[2] = 0;
  uStack_90 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_c8[2] = 0;
  uStack_b0 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  lVar10 = *param_1;
  uVar15 = 0;
  uVar14 = *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24);
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x28) - 1U))) {
    uVar15 = 1;
    uVar17 = 1;
    if (1 < (int)uVar14) {
      uVar15 = (ulonglong)uVar14;
    }
    do {
      uVar11 = uVar17;
      if ((uint)uVar15 == uVar11) goto LAB_146c2ff5f;
      uVar17 = uVar11 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x28))[uVar11 >> 9] +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
    uVar15 = (ulonglong)uVar11;
  }
LAB_146c2ff5f:
  if ((uint)uVar15 != uVar14) {
    local_f0 = param_1 + 0xe;
    local_e0 = param_1 + 0xb;
    local_114 = uVar14;
    local_110 = param_2;
    local_100 = lVar10;
    do {
      local_cc = (int)uVar15;
      local_138 = local_c8;
      local_f8 = uVar15;
      FUN_146c13054(*param_1,uVar15,local_a8,local_c8 + 2);
      if (0 < (int)uStack_b0) {
        lVar10 = 0;
        uVar15 = 0;
        iVar13 = (int)uStack_b0;
        do {
          local_128 = (ulonglong)*(int *)(local_c8[2] + lVar10 * 4);
          if (0 < (longlong)local_128) {
            local_129 = *(char *)(local_c8[0] + lVar10);
            bVar18 = (longlong)uStack_80 < 0;
            uStack_80 = uStack_80 & 0xffffffff00000000;
            local_e8 = lVar10;
            if (bVar18) {
              FUN_14481578e(&local_88,0);
            }
            bVar18 = (longlong)uStack_90 < 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            if (bVar18) {
              FUN_14481578e(local_a8 + 2,0);
            }
            iVar16 = 0;
            iVar13 = (int)local_128;
            FUN_144a8c360(&local_88,local_128 & 0xffffffff,0);
            puVar5 = local_110;
            local_120 = uVar15;
            local_108 = uVar15;
            if (iVar13 != 1) {
              local_d8 = (ulonglong)((int)local_128 - 1);
              uVar12 = 0;
              iVar16 = 0;
              do {
                lVar10 = local_a8[0] + uVar15 * 4 + 4;
                local_68 = *(undefined4 *)(lVar10 + -4 + uVar12 * 4);
                local_64 = *(uint *)(lVar10 + uVar12 * 4);
                local_6c = local_cc;
                bVar7 = (*(code *)*puVar5)(puVar5[1],&local_6c,&local_68,&local_64);
                iVar16 = iVar16 + (uint)(bVar7 ^ 1);
                local_88[uVar12 + 1] = iVar16;
                uVar12 = uVar12 + 1;
              } while (local_d8 != uVar12);
            }
            iVar13 = iVar16 + 1;
            iVar4 = (int)local_108;
            if (local_129 != '\0') {
              if (*local_88 != local_88[(int)uStack_80 + -1]) {
                local_64 = *(uint *)(local_a8[0] + -4 +
                                    (ulonglong)(uint)((int)local_128 + iVar4) * 4);
                local_68 = *(undefined4 *)(local_a8[0] + local_120 * 4);
                local_6c = local_cc;
                cVar8 = (*(code *)*local_110)(local_110[1],&local_6c,&local_68,&local_64);
                if (cVar8 != '\0') {
                  iVar2 = local_88[(int)local_128 - 1];
                  iVar3 = *local_88;
                  uVar15 = local_128;
                  do {
                    uVar14 = (int)uVar15 - 1;
                    uVar15 = (ulonglong)uVar14;
                    iVar13 = iVar16;
                    if (local_88[uVar15] != iVar2) break;
                    local_88[uVar15] = iVar3;
                  } while (0 < (int)uVar14);
                }
              }
            }
            if (0 < iVar13) {
              do {
                uVar9 = FUN_146c2fa56(param_1,param_3);
                uVar15 = uStack_90;
                lVar10 = (longlong)(int)uStack_90;
                uVar14 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar14);
                if (uStack_90._4_4_ < uVar14) {
                  FUN_1446f48e2(local_a8 + 2,uVar15 & 0xffffffff);
                }
                *(undefined4 *)(local_a8[2] + lVar10 * 4) = uVar9;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            plVar6 = local_f0;
            uVar15 = 0;
            do {
              uVar14 = *(uint *)(uVar15 * 4 + local_a8[0] + local_120 * 4);
              lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar14 >> 9) * 8)
              ;
              uVar12 = (ulonglong)(uVar14 & 0x1ff);
              iVar13 = 0;
              if ((*(int *)(lVar10 + uVar12 * 0xc) != local_cc) &&
                 (iVar13 = 1, *(int *)(lVar10 + uVar12 * 0xc + 4) != local_cc)) {
                iVar13 = (uint)(*(int *)(lVar10 + 8 + uVar12 * 0xc) == local_cc) * 3 + -1;
              }
              uVar17 = uVar14 * 3 + iVar13;
              local_64 = *(uint *)(local_a8[2] + (longlong)local_88[uVar15] * 4);
              lVar10 = param_1[0xe];
              iVar13 = *(int *)((longlong)param_1 + 0x74);
              FUN_146bedf4e(plVar6,&local_64,uVar17);
              for (uVar14 = (int)lVar10 * 0x200 + iVar13; uVar14 < uVar17; uVar14 = uVar14 + 1) {
                *(undefined4 *)
                 (*(longlong *)(param_1[0xf] + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4) = 0xffffffff;
              }
              psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(local_64 >> 9) * 8) +
                                (ulonglong)(local_64 & 0x1ff) * 2);
              *psVar1 = *psVar1 + 1;
              FUN_146bedf4e(local_e0,&local_cc,local_64);
              uVar15 = uVar15 + 1;
            } while (uVar15 != local_128);
            uVar15 = (ulonglong)(uint)(iVar4 + (int)local_128);
            lVar10 = local_e8;
            iVar13 = (int)uStack_b0;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar13);
      }
      uVar14 = (int)local_f8 + 1;
      if ((int)uVar14 < (int)local_114) {
        uVar14 = local_114;
      }
      uVar15 = local_f8;
      do {
        if (uVar14 - 1 == (int)uVar15) {
          uVar15 = (ulonglong)uVar14;
          break;
        }
        uVar17 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_100 + 0x28) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar15 != local_114);
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c304b4 FUN_146c304b4 body=720 status=ok
// SIG undefined FUN_146c304b4(void)

void FUN_146c304b4(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  uint local_8c;
  undefined8 *local_88;
  ulonglong local_80;
  uint local_74 [4];
  uint local_64;
  uint *local_60;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  uVar9 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar12 = 0;
  if ((uVar9 != 0) &&
     (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar5 = 1;
    uVar10 = 1;
    if (1 < (int)uVar9) {
      uVar5 = uVar9;
    }
    do {
      uVar12 = uVar5;
      if (uVar5 == uVar10) break;
      uVar7 = uVar10 >> 9;
      uVar11 = uVar10 & 0x1ff;
      uVar12 = uVar10;
      uVar10 = uVar10 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar7] +
                                         (ulonglong)uVar11 * 2) - 1U));
  }
  local_88 = param_3;
  if (uVar12 != uVar9) {
    local_8c = uVar9;
    do {
      uVar5 = uVar12 * 3 + 2;
      lVar8 = param_1[0xf];
      uVar10 = uVar12 * 3 + 1;
      local_74[0] = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar12 * 3 >> 9) * 8) +
                             (ulonglong)(uVar12 * 3 & 0x1ff) * 4);
      local_74[1] = *(undefined4 *)
                     (*(longlong *)(lVar8 + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
      local_74[2] = *(undefined4 *)
                     (*(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
      if (-1 < (int)local_74[0]) {
        lVar8 = 0;
        uVar2 = 0;
        do {
          while( true ) {
            local_80 = uVar2;
            uVar9 = local_74[lVar8];
            if ((ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar9 >> 9) * 8) +
                                   (ulonglong)(uVar9 & 0x1ff) * 2) + 1U) < 4) {
              local_60 = (uint *)CONCAT44(local_60._4_4_,uVar9);
              local_54[0] = uVar12;
              cVar3 = (*(code *)*param_2)(param_2[1],&local_60,local_54);
              if (cVar3 != '\0') {
                local_74[3] = uVar9;
                local_64 = uVar12;
                local_60 = local_54;
                (*(code *)*local_88)(local_88[1],local_74 + 3,&local_64,&local_60);
                lVar6 = 0;
                do {
                  uVar5 = uVar9 * 3 + (int)lVar6;
                  *(uint *)(*(longlong *)(param_1[9] + (ulonglong)(uVar5 >> 9) * 8) +
                           (ulonglong)(uVar5 & 0x1ff) * 4) = local_54[lVar6];
                  lVar6 = lVar6 + 1;
                } while (lVar6 != 3);
              }
            }
            local_60 = (uint *)CONCAT44(local_60._4_4_,uVar9);
            local_54[0] = uVar12;
            cVar3 = (*(code *)*param_2)(param_2[1],&local_60,local_54);
            if (cVar3 != '\0') break;
            lVar8 = lVar8 + 1;
            uVar2 = local_80;
            if (lVar8 == 3) {
              uVar9 = local_8c;
              if ((local_80 & 1) == 0) goto LAB_146c30683;
              goto LAB_146c3071b;
            }
          }
          local_74[3] = uVar9;
          local_64 = uVar12;
          local_60 = local_54;
          (*(code *)*local_88)(local_88[1],local_74 + 3,&local_64,&local_60);
          uVar4 = FUN_146c2f9e2(param_1,local_54);
          local_74[lVar8] = (uint)uVar4;
          lVar8 = lVar8 + 1;
          uVar2 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        } while (lVar8 != 3);
LAB_146c3071b:
        uVar9 = local_8c;
        local_98 = 1;
        FUN_146c2faea(param_1,uVar12,local_74,1);
      }
LAB_146c30683:
      uVar5 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar9) {
        uVar5 = uVar9;
      }
      do {
        uVar10 = uVar5;
        if (uVar5 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
        uVar10 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar12 >> 9) * 8) +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      uVar12 = uVar10;
    } while (uVar12 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c30786 FUN_146c30786 body=234 status=ok
// SIG undefined FUN_146c30786(void)

ulonglong FUN_146c30786(undefined8 *param_1,uint param_2,uint param_3)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 **local_48;
  undefined8 *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == param_3) {
    uVar1 = 0;
  }
  else {
    uVar2 = (ulonglong)(param_2 >> 9);
    uVar3 = (ulonglong)(param_2 & 0x1ff);
    bVar4 = *(int *)(*(longlong *)(param_1[0xc] + uVar2 * 8) + uVar3 * 4) ==
            *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(param_3 >> 9) * 8) +
                    (ulonglong)(param_3 & 0x1ff) * 4);
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar4);
    local_40 = param_1;
    local_38 = param_2;
    local_34 = param_3;
    if (bVar4) {
      local_48 = &local_40;
      local_50 = &LAB_146c58856;
      FUN_146c03fd0(*param_1);
      if (*(short *)(*(longlong *)(param_1[2] + uVar2 * 8) + uVar3 * 2) == 1) {
        FUN_146c09a68(param_1 + 1,param_2,1);
        *(undefined4 *)(*(longlong *)(param_1[0xc] + uVar2 * 8) + uVar3 * 4) = 0xffffffff;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c30872 FUN_146c30872 body=454 status=ok
// SIG undefined FUN_146c30872(void)

uint FUN_146c30872(longlong param_1,uint param_2,undefined4 param_3,undefined8 *param_4)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 auStack_98 [36];
  uint local_74;
  int *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar4 = 0;
  do {
    uVar6 = param_2 * 3 + (int)lVar4;
    local_54[lVar4] =
         *(undefined4 *)
          (*(longlong *)(lVar3 + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  local_58 = param_3;
  local_74 = FUN_146c2f9e2(param_1,local_54);
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    piVar10 = (int *)*param_4;
    local_70 = piVar10 + *(int *)(param_4 + 1);
    local_60 = param_1 + 8;
    local_68 = (ulonglong)(local_74 >> 9);
    uVar6 = local_74 & 0x1ff;
    do {
      iVar2 = *piVar10;
      iVar5 = 0;
      do {
        uVar8 = iVar2 * 3 + iVar5;
        uVar7 = (ulonglong)(uVar8 >> 9);
        uVar9 = (ulonglong)(uVar8 & 0x1ff);
        if (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar7 * 8) + uVar9 * 4) ==
            param_2) {
          FUN_146c09a68(local_60,param_2,1);
          psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + local_68 * 8) +
                            (ulonglong)uVar6 * 2);
          *psVar1 = *psVar1 + 1;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar7 * 8) + uVar9 * 4) = local_74
          ;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 3);
      piVar10 = piVar10 + 1;
    } while (piVar10 != local_70);
  }
  iVar2 = *(int *)(param_1 + 0x58);
  iVar5 = *(int *)(param_1 + 0x5c);
  FUN_146bedf4e(param_1 + 0x58,&local_58,local_74);
  for (uVar6 = iVar2 * 0x200 + iVar5; uVar6 < local_74; uVar6 = uVar6 + 1) {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar6 & 0x1ff) * 4) = 0xffffffff;
  }
  if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                (ulonglong)(param_2 & 0x1ff) * 2) == 1) {
    FUN_146c09a68(param_1 + 8,param_2,1);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(param_2 >> 9) * 8) +
     (ulonglong)(param_2 & 0x1ff) * 4) = 0xffffffff;
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return local_74;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c30a3a FUN_146c30a3a body=1961 status=ok
// SIG undefined FUN_146c30a3a(void)

void FUN_146c30a3a(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  byte local_1a9;
  ulonglong local_1a8;
  uint local_19c;
  longlong *local_198;
  uint local_18c;
  undefined4 *local_188;
  ulonglong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 uStack_150;
  uint local_144;
  undefined8 local_140;
  undefined4 **local_138;
  longlong *local_130;
  uint *local_128;
  uint local_11c;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 *local_108;
  ulonglong uStack_100;
  undefined4 *local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  undefined8 uStack_d0;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_e8[2] = 0;
  uStack_d0 = 0;
  local_1b8 = local_e8;
  local_e8[0] = 0;
  local_e8[1] = 0;
  uVar16 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c8[2] = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_f8 = (undefined4 *)0x0;
  uStack_f0 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_198 = param_3;
  FUN_146c13054(*param_1,param_2,local_c8,local_e8 + 2);
  FUN_1402226aa();
  local_178 = (longlong)(int)uStack_d0;
  local_11c = 0;
  if (0 < local_178) {
    lVar14 = 0;
    do {
      uVar3 = *(uint *)(local_e8[2] + lVar14 * 4);
      local_1a8 = (ulonglong)uVar3;
      uVar7 = (uint)uVar16;
      if (0 < (int)uVar3) {
        local_1a9 = *(byte *)(local_e8[0] + lVar14);
        bVar17 = (longlong)uStack_f0 < 0;
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        uVar3 = uVar7;
        local_170 = lVar14;
        if (bVar17) {
          FUN_14481578e(&local_f8,0);
          uVar3 = local_11c;
        }
        local_19c = (int)local_1a8 + uVar7;
        if ((int)uVar3 < (int)local_19c) {
          lVar14 = (longlong)(int)uVar3;
          iVar15 = ((int)local_1a8 + uVar7) - uVar3;
          do {
            uVar1 = uStack_f0;
            uVar3 = *(uint *)(local_c8[0] + lVar14 * 4);
            uVar12 = uVar3 * 3 + 2;
            uVar13 = uVar3 * 3 + 1;
            lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
            uVar11 = (ulonglong)(uVar3 & 0x1ff);
            lVar10 = param_1[0xf];
            local_140 = (longlong *)
                        CONCAT44(*(undefined4 *)
                                  (*(longlong *)(lVar10 + (ulonglong)(uVar13 >> 9) * 8) +
                                  (ulonglong)(uVar13 & 0x1ff) * 4),
                                 *(undefined4 *)
                                  (*(longlong *)(lVar10 + (ulonglong)(uVar3 * 3 >> 9) * 8) +
                                  (ulonglong)(uVar3 * 3 & 0x1ff) * 4));
            local_138 = (undefined4 **)
                        CONCAT44(local_138._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)(lVar10 + (ulonglong)(uVar12 >> 9) * 8) +
                                  (ulonglong)(uVar12 & 0x1ff) * 4));
            iVar8 = (int)param_2;
            if (*(int *)(lVar9 + uVar11 * 0xc) == iVar8) {
              lVar10 = 0;
            }
            else {
              lVar10 = 1;
              if (*(int *)(lVar9 + 4 + uVar11 * 0xc) != iVar8) {
                lVar10 = (ulonglong)(*(int *)(lVar9 + 8 + uVar11 * 0xc) == iVar8) * 3 + -1;
              }
            }
            lVar9 = (longlong)(int)uStack_f0;
            uVar3 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar3);
            if (uStack_f0._4_4_ < uVar3) {
              FUN_1446f48e2(&local_f8,uVar1 & 0xffffffff);
            }
            local_f8[lVar9] = *(undefined4 *)((longlong)&local_140 + lVar10 * 4);
            lVar14 = lVar14 + 1;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        local_138 = &local_f8;
        local_130 = local_c8;
        local_128 = &local_11c;
        bVar17 = (longlong)uStack_100 < 0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        local_140 = param_1;
        if (bVar17) {
          FUN_14481578e(&local_108,0);
        }
        FUN_144a1a59e(&local_108,local_1a8,1);
        bVar17 = (longlong)uStack_110 < 0;
        uStack_110 = uStack_110 & 0xffffffff00000000;
        if (bVar17) {
          FUN_14481578e(&local_118,0);
        }
        puVar6 = local_f8;
        uVar1 = uStack_110;
        *local_108 = 0;
        lVar14 = (longlong)(int)uStack_110;
        uVar3 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
        if (uStack_110._4_4_ < uVar3) {
          FUN_1446f48e2(&local_118,uVar1 & 0xffffffff);
        }
        *(undefined4 *)(local_118 + lVar14 * 4) = *puVar6;
        if ((int)(local_11c + 1) < (int)local_19c) {
          local_18c = ((int)local_1a8 + uVar7) - 1;
          iVar15 = 0;
          uVar3 = local_11c;
          local_180 = uVar16;
          do {
            uVar7 = uVar3 + 1;
            cVar2 = FUN_146c311e4(&local_140,uVar3,uVar7);
            uVar1 = uStack_110;
            if (cVar2 == '\0') {
              iVar8 = uVar3 - local_11c;
              lVar14 = (longlong)(int)uStack_110;
              uVar12 = (int)uStack_110 + 1;
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar12);
              puVar6 = local_f8;
              if (uStack_110._4_4_ < uVar12) {
                local_188 = local_f8;
                FUN_1446f48e2(&local_118,uVar1 & 0xffffffff);
                puVar6 = local_188;
              }
              *(undefined4 *)(local_118 + lVar14 * 4) = puVar6[iVar8 + 1];
              iVar15 = iVar15 + 1;
              uVar16 = local_180;
            }
            iVar8 = (int)uVar16;
            local_108[(longlong)(int)(uVar3 - local_11c) + 1] = iVar15;
            uVar3 = uVar7;
          } while (local_18c != uVar7);
          if ((local_1a9 & 0 < iVar15) == 0) goto LAB_146c30e65;
          cVar2 = FUN_146c311e4(&local_140,local_11c,(int)local_1a8 + local_11c + -1);
          if (cVar2 == '\0') goto LAB_146c30e65;
          if (0 < (longlong)(int)uStack_100) {
            iVar15 = local_108[(int)uStack_100 + -1];
            uVar16 = (longlong)(int)uStack_100 + 1;
            do {
              if (local_108[uVar16 - 2] != iVar15) break;
              local_108[uVar16 - 2] = 0;
              uVar16 = uVar16 - 1;
            } while (1 < uVar16);
          }
          iVar15 = (int)uStack_110 + -1;
          uStack_110 = CONCAT44(uStack_110._4_4_,iVar15);
        }
        else {
LAB_146c30e65:
          iVar8 = (int)uVar16;
          iVar15 = (int)uStack_110;
        }
        if (0 < iVar15) {
          local_1a8 = (ulonglong)(uint)((int)local_1a8 + iVar8);
          uVar16 = 0;
          do {
            local_144 = *(uint *)(local_118 + uVar16 * 4);
            if (-1 < (int)local_144) {
              if ((int)uStack_b0 != local_84) {
                puVar5 = local_78;
                if (local_78 == (undefined1 *)0x0) {
                  puVar5 = local_80;
                }
                iVar15 = *(int *)(puVar5 + (ulonglong)(local_70 + 0x7fffffffU & local_144) * 4);
                if (iVar15 != -1) {
LAB_146c30ee3:
                  if (*(uint *)(local_c8[2] + (longlong)iVar15 * 0xc) != local_144)
                  goto code_r0x000146c30eef;
                  local_158 = 0;
                  uStack_150 = 0;
                  lVar14 = (longlong)(int)local_11c;
                  if ((int)local_11c < (int)local_19c) {
                    iVar15 = (int)local_1a8 - local_11c;
                    do {
                      lVar9 = local_c8[0];
                      uVar1 = uStack_150;
                      if (uVar16 == (uint)local_108[lVar14 - (int)local_11c]) {
                        lVar10 = (longlong)(int)uStack_150;
                        uVar3 = (int)uStack_150 + 1;
                        uStack_150 = CONCAT44(uStack_150._4_4_,uVar3);
                        if (uStack_150._4_4_ < uVar3) {
                          FUN_1446f48e2(&local_158,uVar1 & 0xffffffff);
                        }
                        *(undefined4 *)(local_158 + lVar10 * 4) =
                             *(undefined4 *)(lVar9 + lVar14 * 4);
                      }
                      lVar14 = lVar14 + 1;
                      iVar15 = iVar15 + -1;
                    } while (iVar15 != 0);
                  }
                  else {
                    uStack_150._0_4_ = 0;
                  }
                  local_168 = local_158;
                  local_160 = (int)uStack_150;
                  uVar4 = FUN_146c30872(param_1,local_144,
                                        *(undefined4 *)
                                         (*(longlong *)
                                           (param_1[0xc] + (ulonglong)(local_144 >> 9) * 8) +
                                         (ulonglong)(local_144 & 0x1ff) * 4),&local_168);
                  if (local_198 != (longlong *)0x0) {
                    iVar15 = (int)local_198[1];
                    *(uint *)(local_198 + 1) = iVar15 + 1U;
                    if (*(uint *)((longlong)local_198 + 0xc) < iVar15 + 1U) {
                      FUN_1446f48e2(local_198,iVar15);
                    }
                    *(undefined4 *)(*local_198 + (longlong)iVar15 * 4) = uVar4;
                  }
                  if (local_158 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
LAB_146c30efb:
              FUN_1447cbafe(local_c8 + 2,&local_158,&local_144,0);
              iVar15 = (int)uStack_110;
            }
            uVar16 = uVar16 + 1;
          } while ((longlong)uVar16 < (longlong)iVar15);
        }
        local_11c = local_19c;
        lVar14 = local_170;
        uVar7 = local_19c;
      }
      lVar14 = lVar14 + 1;
      uVar16 = (ulonglong)uVar7;
    } while (lVar14 != local_178);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_108 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_c8 + 2);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146c30eef:
  iVar15 = *(int *)(local_c8[2] + (longlong)iVar15 * 0xc + 4);
  if (iVar15 == -1) goto LAB_146c30efb;
  goto LAB_146c30ee3;
}



// FUNCTION 146c311e4 FUN_146c311e4 body=110 status=ok
// SIG undefined FUN_146c311e4(void)

ulonglong FUN_146c311e4(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(int *)(*(longlong *)param_1[1] + (longlong)(param_2 - *(int *)param_1[3]) * 4) ==
      *(int *)(*(longlong *)param_1[1] + (longlong)(param_3 - *(int *)param_1[3]) * 4)) {
    puVar1 = (undefined8 *)*param_1;
    iVar2 = FUN_146c08e54(*puVar1,*(undefined4 *)(*(longlong *)param_1[2] + (longlong)param_2 * 4),
                          *(undefined4 *)(*(longlong *)param_1[2] + (longlong)param_3 * 4));
    if (-1 < iVar2) {
      uVar3 = FUN_146c1aaf4(puVar1,iVar2,0);
      return uVar3 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 146c31252 FUN_146c31252 body=782 status=ok
// SIG undefined FUN_146c31252(void)

ulonglong FUN_146c31252(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_258 [36];
  uint local_234 [3];
  longlong local_228;
  ulonglong uStack_220;
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_258;
  local_228 = 0;
  uStack_220 = 0;
  local_234[0] = 0xffffffff;
  local_234[1] = 0xffffffff;
  local_234[2] = 0xffffffff;
  local_150 = *param_1;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,param_2);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = param_2;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar2 = local_120 * 3;
    lVar5 = param_1[0xf];
    iVar1 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < iVar1) {
      local_234[1] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      local_234[0] = iVar1;
      local_234[2] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                      (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      lVar5 = 0;
      do {
        if (*(int *)(*(longlong *)
                      (param_1[0xc] + (ulonglong)(*(uint *)((longlong)local_234 + lVar5) >> 9) * 8)
                    + (ulonglong)(*(uint *)((longlong)local_234 + lVar5) & 0x1ff) * 4) == param_2) {
          FUN_1449e3bb0(&local_228,(longlong)local_234 + lVar5);
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar4 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar4 = local_198;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar4 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar4 = local_f8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  uVar3 = uStack_220;
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)local_258) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c31562 FUN_146c31562 body=318 status=ok
// SIG undefined FUN_146c31562(void)

undefined4 FUN_146c31562(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_1 + 0xb8;
  iVar5 = 0;
  FUN_146be983e(&local_60,lVar4,param_2,0);
  if ((((local_60 != lVar4) || (local_58 != param_2)) || ((int)local_48 != -1)) ||
     (iVar6 = 0, local_48._4_4_ != -1)) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(local_40 >> 9) * 8) +
                   0xc + (ulonglong)((local_40 & 0x1ff) << 4)) == -1) {
        iVar6 = iVar6 + 1;
      }
      else {
        bVar1 = FUN_146c1aaf4(param_1,local_40,0);
        iVar5 = iVar5 + (uint)bVar1;
      }
      if (local_50 == 0) {
        local_54 = 0xffffffff;
        local_48 = 0xffffffffffffffff;
        local_48._4_4_ = -1;
        local_48._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_60);
      }
    } while (((local_60 != lVar4) || (local_58 != param_2)) ||
            (((int)local_48 != -1 || (local_48._4_4_ != -1))));
    iVar5 = iVar5 * 2;
  }
  iVar2 = FUN_146c31252(param_1,param_2);
  if (iVar2 == 1 && iVar5 + iVar6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT31((int3)((uint)(iVar2 * 2) >> 8),iVar5 + iVar6 != iVar2 * 2);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c316a2 FUN_146c316a2 body=196 status=ok
// SIG undefined FUN_146c316a2(void)

ulonglong FUN_146c316a2(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48 [3];
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  FUN_146c03f0e(lVar1,&local_3c,param_2);
  if (local_3c == param_3) {
    puVar2 = local_48 + 2;
  }
  else if (local_38 == param_3) {
    puVar2 = local_48 + 1;
  }
  else {
    if (local_34 != param_3) {
      uVar3 = 0;
      goto LAB_146c316ec;
    }
    puVar2 = local_48;
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + (ulonglong)(param_2 >> 9) * 8);
  uVar3 = (ulonglong)(param_2 & 0x1ff);
  local_48[2] = *(undefined4 *)(lVar1 + uVar3 * 0xc);
  local_48[1] = *(undefined4 *)(lVar1 + 4 + uVar3 * 0xc);
  local_48[0] = *(undefined4 *)(lVar1 + 8 + uVar3 * 0xc);
  uVar3 = FUN_146c1aaf4(param_1,*puVar2,0);
  uVar3 = uVar3 ^ 1;
LAB_146c316ec:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c31768 FUN_146c31768 body=758 status=ok
// SIG undefined FUN_146c31768(void)

void FUN_146c31768(longlong *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_248 [36];
  uint local_224 [3];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_248;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  local_150 = *param_1;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,param_2);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = param_2;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar2 = local_120 * 3;
    lVar4 = param_1[0xf];
    uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      local_224[0] = uVar1;
      local_224[1] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      local_224[2] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                      (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      lVar4 = 0;
      do {
        if (*(int *)(*(longlong *)
                      (param_1[0xc] + (ulonglong)(*(uint *)((longlong)local_224 + lVar4) >> 9) * 8)
                    + (ulonglong)(*(uint *)((longlong)local_224 + lVar4) & 0x1ff) * 4) == param_2) {
          FUN_1449e3bb0(param_3,(longlong)local_224 + lVar4);
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0xc);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar3 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar3 = local_198;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar3 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar3 = local_f8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)local_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c31a60 FUN_146c31a60 body=766 status=ok
// SIG undefined FUN_146c31a60(void)

void FUN_146c31a60(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  code **ppcVar5;
  longlong *plVar6;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc))) {
    if ((ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      iStack_210 = *(undefined4 *)
                    (*(longlong *)(param_1[0xc] + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
      local_150 = *param_1;
      local_168 = 0;
      local_158 = &PTR_LAB_149f3aae0;
      _uStack_148 = CONCAT44(uStack_144,iStack_210);
      local_178 = FUN_146be9588;
      local_218 = (code *)(local_150 + 0xb8);
      FUN_146be94ac(local_d8,&local_218,&local_178);
      local_128 = 0xffffffffffffffff;
      local_118[0] = 0;
      local_108 = (longlong *)0x0;
      local_178 = local_98;
      uStack_170 = uStack_90;
      iStack_160 = iStack_80;
      iStack_15c = iStack_7c;
      local_158 = (undefined **)local_78;
      local_140 = local_60;
      uStack_13c = uStack_5c;
      iStack_138 = iStack_58;
      iStack_134 = iStack_54;
      local_130 = local_50;
      FUN_146be971a(local_118,local_d8);
      local_11c = 0;
      FUN_146bfd1f0(&local_178);
      local_1c8 = 0xffffffffffffffff;
      local_1b8[0] = 0;
      local_1a8 = (longlong *)0x0;
      local_218 = (code *)CONCAT44(uStack_6c,local_70);
      iStack_210 = iStack_68;
      uStack_20c = uStack_64;
      local_208 = local_60;
      uStack_204 = uStack_5c;
      iStack_200 = iStack_58;
      iStack_1fc = iStack_54;
      local_1f8 = local_50;
      local_1f0 = local_70;
      uStack_1ec = uStack_6c;
      iStack_1e8 = iStack_68;
      uStack_1e4 = uStack_64;
      local_1e0 = local_60;
      uStack_1dc = uStack_5c;
      iStack_1d8 = iStack_58;
      iStack_1d4 = iStack_54;
      local_1d0 = local_50;
      FUN_146be971a(local_1b8,local_d8);
      local_1bc = 0;
      ppcVar5 = (code **)&local_218;
      while ((((FUN_146bfd1f0(ppcVar5), iVar4 = local_120, local_178 != local_218 ||
               ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)) ||
             (iStack_15c != iStack_1fc))) {
        uVar3 = local_120 * 3;
        lVar2 = param_1[0xf];
        ppcVar5 = &local_178;
        if (((*(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4) == param_2) ||
            (*(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                      (ulonglong)(uVar3 + 1 & 0x1ff) * 4) == param_2)) ||
           (*(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                     (ulonglong)(uVar3 + 2 & 0x1ff) * 4) == param_2)) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_3,iVar1);
          }
          *(int *)(*param_3 + (longlong)iVar1 * 4) = iVar4;
        }
      }
      if (local_1b8[0] != 0) {
        plVar6 = local_1a8;
        if (local_1a8 == (longlong *)0x0) {
          plVar6 = local_198;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (local_118[0] != 0) {
        plVar6 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar6 = local_f8;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (local_d8[0] != 0) {
        if (local_c8 == (longlong *)0x0) {
          local_c8 = local_b8;
        }
        (**(code **)(*local_c8 + 0x10))();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c31d60 FUN_146c31d60 body=189 status=ok
// SIG undefined FUN_146c31d60(void)

uint FUN_146c31d60(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = param_2 * 3 + 2;
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar1 = param_2 * 3 + 1;
  local_1c[0] = *(uint *)(*(longlong *)(lVar2 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                         (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  local_1c[1] = *(undefined4 *)
                 (*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                 (ulonglong)(uVar1 & 0x1ff) * 4);
  local_1c[2] = *(undefined4 *)
                 (*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                 (ulonglong)(uVar3 & 0x1ff) * 4);
  lVar2 = 0;
  do {
    uVar1 = local_1c[lVar2];
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
                (ulonglong)(uVar1 & 0x1ff) * 4) == param_3) goto LAB_146c31e01;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  uVar1 = 0xffffffff;
LAB_146c31e01:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c31e1e FUN_146c31e1e body=976 status=ok
// SIG undefined FUN_146c31e1e(void)

undefined8 FUN_146c31e1e(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  uint local_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *param_1;
  uVar16 = 0;
  uVar14 = *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4);
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x1d8) - 1U))) {
    uVar16 = 1;
    uVar17 = 1;
    if (1 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
    }
    do {
      uVar15 = uVar17;
      if ((uint)uVar16 == uVar15) goto LAB_146c31e73;
      uVar17 = uVar15 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x1d8))[uVar15 >> 9] +
                                         (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
    uVar16 = (ulonglong)uVar15;
  }
LAB_146c31e73:
  if ((uint)uVar16 != uVar14) {
    local_70 = *(longlong *)(lVar5 + 0x1c0);
    do {
      lVar13 = *(longlong *)(local_70 + (uVar16 >> 9) * 8);
      uVar17 = (uint)uVar16 & 0x1ff;
      uVar9 = *(ulonglong *)(lVar13 + 8 + (ulonglong)(uVar17 << 4));
      local_68 = param_1;
      if (uVar9 >> 0x20 != 0xffffffff) {
        uVar8 = (int)uVar9 * 3;
        lVar6 = param_1[0xf];
        uVar15 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar8 >> 9) * 8) +
                          (ulonglong)(uVar8 & 0x1ff) * 4);
        uVar7 = (int)(uVar9 >> 0x20) * 3;
        uVar1 = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        if ((int)(uVar1 | uVar15) < 0) {
          uVar9 = (ulonglong)(uVar1 ^ uVar15);
          if ((int)(uVar1 ^ uVar15) < 0) {
LAB_146c321e8:
            uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
            goto LAB_146c31e7a;
          }
        }
        else {
          uVar10 = *(undefined8 *)(lVar13 + (ulonglong)(uVar17 << 4));
          local_60[5] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
          local_60[4] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
          local_60[3] = uVar15;
          lVar13 = param_1[0xc];
          iVar2 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(local_60[5] >> 9) * 8) +
                          (ulonglong)(local_60[5] & 0x1ff) * 4);
          iVar3 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(local_60[4] >> 9) * 8) +
                          (ulonglong)(local_60[4] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar15 >> 9) * 8) +
                          (ulonglong)(uVar15 & 0x1ff) * 4);
          iVar12 = (int)uVar10;
          if (iVar4 == iVar12) {
            lVar19 = 0;
          }
          else {
            lVar19 = 1;
            if (iVar3 != iVar12) {
              lVar19 = (ulonglong)(iVar2 == iVar12) * 3 + -1;
            }
          }
          iVar18 = (int)((ulonglong)uVar10 >> 0x20);
          if (iVar4 == iVar18) {
            lVar11 = 0;
          }
          else {
            lVar11 = 1;
            if (iVar3 != iVar18) {
              lVar11 = (ulonglong)(iVar2 == iVar18) * 3 + -1;
            }
          }
          local_60[2] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          local_60[1] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          local_60[0] = uVar1;
          iVar2 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(local_60[2] >> 9) * 8) +
                          (ulonglong)(local_60[2] & 0x1ff) * 4);
          iVar3 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(local_60[1] >> 9) * 8) +
                          (ulonglong)(local_60[1] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 4);
          if (iVar4 == iVar12) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
            if (iVar3 != iVar12) {
              uVar9 = (ulonglong)(iVar2 == iVar12) * 3 - 1;
            }
          }
          if (iVar4 == iVar18) {
            lVar13 = 0;
          }
          else {
            lVar13 = 1;
            if (iVar3 != iVar18) {
              lVar13 = (ulonglong)(iVar2 == iVar18) * 3 + -1;
            }
          }
          if (local_60[lVar19 + 3] == local_60[uVar9]) {
            if (local_60[lVar11 + 3] != local_60[lVar13]) goto LAB_146c321e8;
          }
          else {
            uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
            if ((local_60[lVar11 + 3] != local_60[uVar9]) ||
               (local_60[lVar19 + 3] != local_60[lVar13])) goto LAB_146c31e7a;
          }
        }
      }
      uVar17 = (uint)uVar16 + 1;
      if ((int)uVar17 < (int)uVar14) {
        uVar17 = uVar14;
      }
      do {
        if (uVar17 - 1 == (int)uVar16) {
          uVar16 = (ulonglong)uVar17;
          break;
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar5 + 0x1d8) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar16 != uVar14);
  }
  uVar10 = 0;
LAB_146c31e7a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 146c321f0 FUN_146c321f0 body=2629 status=ok
// SIG undefined FUN_146c321f0(void)

void FUN_146c321f0(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong unaff_RBX;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [39];
  char local_d1;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_c0 [8];
  ulonglong local_b8 [2];
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  undefined1 local_90 [8];
  longlong local_88 [2];
  undefined1 local_78 [24];
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d1 = param_4;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  bVar4 = *(byte *)(param_2 + 5);
  if ((bVar4 & 1) != 0) {
    iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar7 < 0x38) {
      FUN_146c15b76(param_1 + 1,param_2,0,0);
      FUN_146c5818c(param_1 + 8,param_2);
      FUN_146c45ad4(param_1 + 0xb,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
    }
    bVar4 = *(byte *)(param_2 + 5);
  }
  cVar2 = local_d1;
  local_58 = 0;
  uStack_50 = 0xffffffff00000000;
  if (((param_3 == (longlong *)0x0) || ((bVar4 & 1) != 0)) || ((int)param_3[1] == 0)) {
    FUN_146c15b76(param_1 + 1,param_2,0,CONCAT71((int7)(unaff_RBX >> 8),local_d1) & 0xffffffff);
    if (cVar2 == '\0') {
      FUN_146c44560(param_1 + 8,param_2);
      FUN_146c41ff8(param_1 + 0xb,param_2);
    }
    else {
      FUN_146c4431c();
      FUN_146c44e9c(param_1 + 0xb,param_2);
    }
  }
  else {
    iVar7 = (int)param_1[7];
    local_d0 = param_2;
    local_c8 = param_3;
    FUN_141224904(local_90);
    FUN_141040b84(local_78);
    local_60 = 0;
    FUN_1411b3fe4(local_78);
    FUN_146c41884(local_90,iVar7);
    local_60 = iVar7;
    FUN_14582f01a(local_a8);
    FUN_146bfd442(local_a8,iVar7 * 3);
    FUN_141040b84(local_c0);
    FUN_1411b328a(local_c0,iVar7);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    uStack_50 = 0;
    FUN_1448156a8(&local_58,&DAT_149f3b198,
                  (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc));
    param_3 = local_c8;
    plVar3 = local_d0;
    cVar2 = local_d1;
    uVar6 = 0;
    uVar5 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
    if ((uVar5 != 0) && (uVar6 = 0, 0xfffd < (ushort)(**(short **)param_1[2] - 1U))) {
      uVar13 = 1;
      uVar19 = 1;
      if (1 < (int)uVar5) {
        uVar19 = uVar5;
      }
      do {
        uVar11 = (uint)uVar13;
        uVar6 = uVar19;
        if (uVar19 == uVar11) break;
        uVar22 = uVar13 >> 9;
        uVar13 = (ulonglong)(uVar11 + 1);
        uVar6 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar22] +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
    }
    if (uVar6 != uVar5) {
      iVar7 = 0;
      uVar19 = 0;
      do {
        *(undefined2 *)
         (*(longlong *)(local_88[0] + (ulonglong)(uVar19 >> 9) * 8) +
         (ulonglong)(uVar19 & 0x1ff) * 2) =
             *(undefined2 *)
              (*(longlong *)(param_1[2] + (ulonglong)(uVar6 >> 9) * 8) +
              (ulonglong)(uVar6 & 0x1ff) * 2);
        iVar9 = 0;
        do {
          uVar11 = uVar6 * 3 + iVar9;
          *(undefined4 *)
           (*(longlong *)(local_a0[0] + (ulonglong)((uint)(iVar7 + iVar9) >> 9) * 8) +
           (ulonglong)(iVar7 + iVar9 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1[9] + (ulonglong)(uVar11 >> 9) * 8) +
                (ulonglong)(uVar11 & 0x1ff) * 4);
          iVar9 = iVar9 + 1;
        } while (iVar9 != 3);
        lVar12 = (longlong)
                 *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar6 >> 9) * 8) +
                         (ulonglong)(uVar6 & 0x1ff) * 4);
        if (lVar12 < 0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(undefined4 *)(*local_c8 + lVar12 * 4);
        }
        *(undefined4 *)
         (*(longlong *)(local_b8[0] + (ulonglong)(uVar19 >> 9) * 8) +
         (ulonglong)(uVar19 & 0x1ff) * 4) = uVar8;
        *(uint *)(local_58 + (longlong)(int)uVar6 * 4) = uVar19;
        uVar19 = uVar19 + 1;
        uVar11 = uVar6 + 1;
        if ((int)(uVar6 + 1) < (int)uVar5) {
          uVar11 = uVar5;
        }
        unaff_RBX = local_b8[0];
        do {
          uVar17 = uVar11;
          if (uVar11 - 1 == uVar6) break;
          uVar6 = uVar6 + 1;
          unaff_RBX = (ulonglong)(uVar6 & 0x1ff);
          uVar17 = uVar6;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (param_1[2] + (ulonglong)(uVar6 >> 9) * 8) +
                                             unaff_RBX * 2) - 1U));
        uVar6 = uVar17;
        iVar7 = iVar7 + 3;
      } while (uVar6 != uVar5);
    }
    FUN_146c15b76(local_90,local_d0,1,CONCAT71((int7)(unaff_RBX >> 8),local_d1) & 0xffffffff);
    if (cVar2 == '\0') {
      FUN_146c44560(local_a8,plVar3);
      FUN_146c41ff8(local_c0,plVar3);
    }
    else {
      FUN_146c4431c();
      FUN_146c44e9c(local_c0,plVar3);
    }
    FUN_141082b5c(local_b8,0);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1457ed392(local_a0,0);
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14117c64e(local_90);
    param_2 = local_d0;
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) ||
     (((param_3 == (longlong *)0x0 || ((int)param_3[3] == 0)) && (iStack_4c == -1)))) {
    if (local_d1 == '\0') {
      FUN_146c41ff8(param_1 + 0xe,param_2);
    }
    else {
      FUN_146c44e9c(param_1 + 0xe,param_2);
    }
    goto LAB_146c32372;
  }
  local_d0 = param_2;
  FUN_141040b84(local_90);
  FUN_1411b328a(local_90);
  if (param_3 == (longlong *)0x0) {
LAB_146c323f3:
    lVar12 = *param_1;
    uVar5 = *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144);
    uVar6 = 0;
    if ((uVar5 != 0) &&
       (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x148) - 1U))) {
      uVar19 = 1;
      uVar11 = 1;
      if (1 < (int)uVar5) {
        uVar19 = uVar5;
      }
      do {
        uVar6 = uVar19;
        if (uVar19 == uVar11) break;
        uVar17 = uVar11 >> 9;
        uVar18 = uVar11 & 0x1ff;
        uVar6 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x148))[uVar17] +
                                           (ulonglong)uVar18 * 2) - 1U));
    }
LAB_146c32425:
    if (uVar6 != uVar5) {
      uVar22 = (ulonglong)(uVar6 * 3 >> 9);
      lVar1 = param_1[0xf];
      uVar13 = (ulonglong)(uVar6 * 3 & 0x1ff);
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar1 + uVar22 * 8) + uVar13 * 4);
      uVar16 = 0xffffffff;
      uVar8 = 0xffffffff;
      if (lVar14 != -1) {
        uVar8 = *(undefined4 *)(local_58 + lVar14 * 4);
      }
      uVar19 = uVar6 * 3 + 1;
      uVar10 = (ulonglong)(uVar19 >> 9);
      uVar20 = (ulonglong)(uVar19 & 0x1ff);
      uVar19 = uVar6 * 3 + 2;
      uVar21 = (ulonglong)(uVar19 >> 9);
      uVar15 = (ulonglong)(uVar19 & 0x1ff);
      iVar7 = *(int *)(*(longlong *)(lVar1 + uVar10 * 8) + uVar20 * 4);
      iVar9 = *(int *)(*(longlong *)(lVar1 + uVar21 * 8) + uVar15 * 4);
      *(undefined4 *)(*(longlong *)(local_88[0] + uVar22 * 8) + uVar13 * 4) = uVar8;
      if (iVar7 != -1) {
        uVar16 = *(undefined4 *)(local_58 + (longlong)iVar7 * 4);
      }
      *(undefined4 *)(*(longlong *)(local_88[0] + uVar10 * 8) + uVar20 * 4) = uVar16;
      if (iVar9 == -1) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)(local_58 + (longlong)iVar9 * 4);
      }
      *(undefined4 *)(*(longlong *)(local_88[0] + uVar21 * 8) + uVar15 * 4) = uVar8;
      uVar19 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar5) {
        uVar19 = uVar5;
      }
      uVar11 = uVar6;
      do {
        uVar6 = uVar19;
        if (uVar19 - 1 == uVar11) break;
        uVar6 = uVar11 + 1;
        uVar11 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar12 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      goto LAB_146c32425;
    }
  }
  else if (((int)param_3[3] == 0) || (iStack_4c == -1)) {
    if ((int)param_3[3] == 0) goto LAB_146c323f3;
    lVar12 = *param_1;
    uVar5 = *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144);
    uVar6 = 0;
    if ((uVar5 != 0) &&
       (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x148) - 1U))) {
      uVar19 = 1;
      uVar11 = 1;
      if (1 < (int)uVar5) {
        uVar19 = uVar5;
      }
      do {
        uVar17 = uVar11;
        uVar6 = uVar19;
        if (uVar19 == uVar17) break;
        uVar11 = uVar17 + 1;
        uVar6 = uVar17;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x148))[uVar17 >> 9] +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
    }
joined_r0x000146c32911:
    uVar19 = uVar6;
    if (uVar19 != uVar5) {
      iVar7 = *(int *)(param_3[2] + (longlong)(int)uVar19 * 4);
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)((uint)(iVar7 * 3) >> 9) * 8) +
       (ulonglong)(iVar7 * 3 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(param_1[0xf] + (ulonglong)(uVar19 * 3 >> 9) * 8) +
            (ulonglong)(uVar19 * 3 & 0x1ff) * 4);
      uVar11 = uVar19 * 3 + 1;
      uVar6 = iVar7 * 3 + 1;
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
            (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar11 = uVar19 * 3 + 2;
      uVar6 = iVar7 * 3 + 2;
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
            (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar11 = uVar19 + 1;
      if ((int)(uVar19 + 1) < (int)uVar5) {
        uVar11 = uVar5;
      }
      do {
        uVar6 = uVar11;
        if (uVar11 - 1 == uVar19) break;
        uVar19 = uVar19 + 1;
        uVar6 = uVar19;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar12 + 0x148) +
                                             (ulonglong)(uVar19 >> 9) * 8) +
                                           (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
      goto joined_r0x000146c32911;
    }
  }
  else {
    lVar12 = *param_1;
    uVar5 = *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144);
    uVar6 = 0;
    if ((uVar5 != 0) &&
       (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x148) - 1U))) {
      uVar19 = 1;
      uVar11 = 1;
      if (1 < (int)uVar5) {
        uVar19 = uVar5;
      }
      do {
        uVar17 = uVar11;
        uVar6 = uVar19;
        if (uVar19 == uVar17) break;
        uVar11 = uVar17 + 1;
        uVar6 = uVar17;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x148))[uVar17 >> 9] +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
    }
joined_r0x000146c326a3:
    uVar19 = uVar6;
    if (uVar19 != uVar5) {
      lVar1 = param_1[0xf];
      lVar14 = (longlong)
               *(int *)(*(longlong *)(lVar1 + (ulonglong)(uVar19 * 3 >> 9) * 8) +
                       (ulonglong)(uVar19 * 3 & 0x1ff) * 4);
      uVar16 = 0xffffffff;
      uVar8 = 0xffffffff;
      if (lVar14 != -1) {
        uVar8 = *(undefined4 *)(local_58 + lVar14 * 4);
      }
      uVar6 = *(int *)(param_3[2] + (longlong)(int)uVar19 * 4) * 3;
      uVar11 = uVar19 * 3 + 1;
      uVar17 = uVar19 * 3 + 2;
      iVar7 = *(int *)(*(longlong *)(lVar1 + (ulonglong)(uVar11 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 4);
      iVar9 = *(int *)(*(longlong *)(lVar1 + (ulonglong)(uVar17 >> 9) * 8) +
                      (ulonglong)(uVar17 & 0x1ff) * 4);
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4) =
           uVar8;
      if (iVar7 != -1) {
        uVar16 = *(undefined4 *)(local_58 + (longlong)iVar7 * 4);
      }
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar6 + 1 >> 9) * 8) +
       (ulonglong)(uVar6 + 1 & 0x1ff) * 4) = uVar16;
      if (iVar9 == -1) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)(local_58 + (longlong)iVar9 * 4);
      }
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar6 + 2 >> 9) * 8) +
       (ulonglong)(uVar6 + 2 & 0x1ff) * 4) = uVar8;
      uVar11 = uVar19 + 1;
      if ((int)(uVar19 + 1) < (int)uVar5) {
        uVar11 = uVar5;
      }
      do {
        uVar6 = uVar11;
        if (uVar11 - 1 == uVar19) break;
        uVar19 = uVar19 + 1;
        uVar6 = uVar19;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar12 + 0x148) +
                                             (ulonglong)(uVar19 >> 9) * 8) +
                                           (ulonglong)(uVar19 & 0x1ff) * 2) - 1U));
      goto joined_r0x000146c326a3;
    }
  }
  if (local_d1 == '\0') {
    FUN_146c41ff8(local_90,local_d0);
  }
  else {
    FUN_146c44e9c(local_90,local_d0);
  }
  FUN_141082b5c(local_88,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
LAB_146c32372:
  if ((iStack_4c != -1) && (local_58 != 0)) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c32c54 FUN_146c32c54 body=145 status=ok
// SIG undefined FUN_146c32c54(void)

void FUN_146c32c54(longlong param_1,int param_2,int param_3,int param_4,double param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    uVar1 = param_3 * 3 + iVar5;
    lVar4 = *(longlong *)(param_1 + 0x48);
    uVar2 = param_4 * 3 + iVar5;
    uVar3 = param_2 * 3 + iVar5;
    *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4)
         = (float)((double)*(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                                     (ulonglong)(uVar2 & 0x1ff) * 4) * param_5 +
                  (double)*(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                                    (ulonglong)(uVar1 & 0x1ff) * 4) * (1.0 - param_5));
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  return;
}



// FUNCTION 146c32ce6 FUN_146c32ce6 body=111 status=ok
// SIG undefined FUN_146c32ce6(void)

void FUN_146c32ce6(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  FUN_146c09a68(lVar1 + 8,param_2,1);
  uVar2 = param_2 >> 9 & 0x7fffff;
  uVar3 = (ulonglong)((uint)param_2 & 0x1ff);
  if (*(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + uVar2 * 8) + uVar3 * 2) == 1) {
    FUN_146c09a68(lVar1 + 8,param_2 & 0xffffffff,1);
    *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x60) + uVar2 * 8) + uVar3 * 4) = 0xffffffff
    ;
  }
  return;
}



// FUNCTION 146c32d56 FUN_146c32d56 body=190 status=ok
// SIG undefined FUN_146c32d56(void)

void FUN_146c32d56(longlong param_1,int param_2,int param_3,int param_4,int param_5,double *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    uVar1 = param_3 * 3 + iVar6;
    lVar5 = *(longlong *)(param_1 + 0x48);
    uVar2 = param_4 * 3 + iVar6;
    uVar3 = param_5 * 3 + iVar6;
    uVar4 = param_2 * 3 + iVar6;
    *(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4)
         = (float)((double)*(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8) +
                                     (ulonglong)(uVar3 & 0x1ff) * 4) * param_6[2] +
                  (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8) +
                                    (ulonglong)(uVar1 & 0x1ff) * 4) * *param_6 +
                  (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 4) * param_6[1]);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 3);
  return;
}



// FUNCTION 146c32e14 FUN_146c32e14 body=77 status=ok
// SIG undefined FUN_146c32e14(void)

undefined8 * FUN_146c32e14(undefined8 *param_1,undefined8 param_2)

{
  FUN_141224904(param_1 + 1);
  FUN_141040b84(param_1 + 4);
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14582f01a(param_1 + 8);
  FUN_141040b84(param_1 + 0xb);
  FUN_141040b84(param_1 + 0xe);
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 146c32e62 FUN_146c32e62 body=251 status=ok
// SIG undefined FUN_146c32e62(void)

void FUN_146c32e62(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146c2cf40(param_1 + 8);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  FUN_141224904(&local_58);
  FUN_141040b84(&uStack_40);
  local_28 = local_28 & 0xffffffff00000000;
  FUN_146c40eae(param_1 + 1,&local_58);
  FUN_146c40f34(param_1 + 4,&uStack_40);
  *(undefined4 *)(param_1 + 7) = (undefined4)local_28;
  FUN_14117c64e(&local_58);
  FUN_1411b3fe4(param_1 + 0xb);
  FUN_1411b328a(param_1 + 0xe,(*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144)) * 3)
  ;
  lVar1 = param_1[0x10];
  if ((longlong)(int)lVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1[0xf] + (longlong)(int)uVar2 * 8) + lVar3 * 4) =
             0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)(int)lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c32f5e FUN_146c32f5e body=110 status=ok
// SIG undefined FUN_146c32f5e(void)

int FUN_146c32f5e(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_146c08aba(param_1 + 8);
  iVar2 = iVar1 * 4 + 3;
  lVar3 = 0xc;
  do {
    FUN_146bfd34a(param_1 + 0x40,param_2 + lVar3,iVar2);
    lVar3 = lVar3 + -4;
    iVar2 = iVar2 + -1;
  } while (lVar3 != -4);
  FUN_146bedf4e(param_1 + 0x58,&DAT_149f3b198,iVar1);
  return iVar1;
}



// FUNCTION 146c32fcc FUN_146c32fcc body=149 status=ok
// SIG undefined FUN_146c32fcc(void)

int FUN_146c32fcc(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  iVar1 = FUN_146c08aba(param_1 + 8);
  iVar2 = 3;
  do {
    FUN_146bfd34a(param_1 + 0x40,&local_3c,iVar1 * 4 + iVar2);
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  FUN_146bedf4e(param_1 + 0x58,&DAT_149f3b198,iVar1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c33062 FUN_146c33062 body=749 status=ok
// SIG undefined FUN_146c33062(void)

void FUN_146c33062(longlong *param_1,uint param_2,uint *param_3,byte param_4,char param_5)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_88;
  if (*param_1 != 0) {
    local_54[0] = 0xffffffff;
    local_54[1] = 0xffffffff;
    local_54[2] = 0xffffffff;
    uVar11 = param_2 * 3 + 3;
    uVar12 = (int)param_1[0xe] * 0x200 + *(int *)((longlong)param_1 + 0x74);
    if (uVar12 < uVar11) {
      FUN_1411b328a(param_1 + 0xe,uVar11);
      uVar4 = uVar12;
      do {
        *(undefined4 *)
         (*(longlong *)(param_1[0xf] + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
         ) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar11);
    }
    uVar4 = param_2 * 3;
    if ((uVar11 <= uVar12 & param_4) == 0) {
      uVar6 = (ulonglong)(uVar4 + 2 & 0x1ff);
      uVar8 = (ulonglong)(uVar4 + 1 >> 9);
      uVar7 = (ulonglong)(uVar4 + 1 & 0x1ff);
      uVar9 = (ulonglong)(uVar4 >> 9);
      uVar5 = (ulonglong)(uVar4 & 0x1ff);
      lVar10 = *(longlong *)(param_1[0xf] + (ulonglong)(uVar4 + 2 >> 9) * 8);
      bVar13 = false;
    }
    else {
      lVar3 = param_1[0xf];
      lVar10 = *(longlong *)(lVar3 + (ulonglong)(uVar4 + 2 >> 9) * 8);
      uVar6 = (ulonglong)(uVar4 + 2 & 0x1ff);
      uVar8 = (ulonglong)(uVar4 + 1 >> 9);
      uVar7 = (ulonglong)(uVar4 + 1 & 0x1ff);
      uVar9 = (ulonglong)(uVar4 >> 9);
      uVar5 = (ulonglong)(uVar4 & 0x1ff);
      local_54[0] = *(int *)(*(longlong *)(lVar3 + uVar9 * 8) + uVar5 * 4);
      local_54[1] = *(undefined4 *)(*(longlong *)(lVar3 + uVar8 * 8) + uVar7 * 4);
      local_54[2] = *(undefined4 *)(lVar10 + uVar6 * 4);
      bVar13 = local_54[0] != -1;
    }
    *(uint *)(lVar10 + uVar6 * 4) = param_3[2];
    *(uint *)(*(longlong *)(param_1[0xf] + uVar8 * 8) + uVar7 * 4) = param_3[1];
    uVar11 = *param_3;
    *(uint *)(*(longlong *)(param_1[0xf] + uVar9 * 8) + uVar5 * 4) = uVar11;
    if (param_4 != 0) {
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(param_3[1] >> 9) * 8) +
                        (ulonglong)(param_3[1] & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(param_3[2] >> 9) * 8) +
                        (ulonglong)(param_3[2] & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      if (bVar13) {
        lVar10 = 0;
        do {
          uVar11 = local_54[lVar10];
          FUN_146c09a68(param_1 + 1,uVar11,1);
          if (param_5 != '\0') {
            if (*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar11 >> 9) * 8) +
                          (ulonglong)(uVar11 & 0x1ff) * 2) == 1) {
              FUN_146c09a68(param_1 + 1,uVar11,1);
              *(undefined4 *)
               (*(longlong *)(param_1[0xc] + (ulonglong)(uVar11 >> 9) * 8) +
               (ulonglong)(uVar11 & 0x1ff) * 4) = 0xffffffff;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
      }
    }
    if (((*param_3 != 0xffffffff) || (param_3[1] != 0xffffffff)) || (param_3[2] != 0xffffffff)) {
      lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
      local_58 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
      local_60 = *(undefined8 *)(lVar10 + (ulonglong)(param_2 & 0x1ff) * 0xc);
      lVar10 = 0;
      do {
        uVar11 = param_3[lVar10];
        lVar3 = param_1[0xb];
        iVar2 = *(int *)((longlong)param_1 + 0x5c);
        FUN_146bedf4e(param_1 + 0xb,(longlong)&local_60 + lVar10 * 4,uVar11);
        for (uVar12 = (int)lVar3 * 0x200 + iVar2; uVar12 < uVar11; uVar12 = uVar12 + 1) {
          *(undefined4 *)
           (*(longlong *)(param_1[0xc] + (ulonglong)(uVar12 >> 9) * 8) +
           (ulonglong)(uVar12 & 0x1ff) * 4) = 0xffffffff;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
    }
  }
  if ((local_48 ^ (ulonglong)local_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c33350 FUN_146c33350 body=268 status=ok
// SIG undefined FUN_146c33350(void)

void FUN_146c33350(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = param_2 * 3;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar2 >> 9) * 8) +
              (ulonglong)(uVar2 & 0x1ff) * 4) != -1) {
    iVar7 = 0;
    do {
      uVar3 = uVar2 + iVar7 >> 9;
      uVar5 = (ulonglong)(uVar3 * 8);
      uVar6 = uVar2 + iVar7 & 0x1ff;
      FUN_146c09a68(param_1 + 8,
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5) + (ulonglong)(uVar6 << 2)
                     ),1);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5);
      uVar1 = *(uint *)(lVar4 + (ulonglong)(uVar6 << 2));
      if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 2) == 1) {
        FUN_146c09a68(param_1 + 8,uVar1,1);
        uVar5 = (ulonglong)(uVar3 << 3);
        uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5) +
                         (ulonglong)uVar6 * 4);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
         (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5);
      }
      *(undefined4 *)(lVar4 + (ulonglong)uVar6 * 4) = 0xffffffff;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 3);
  }
  return;
}



// FUNCTION 146c3345c FUN_146c3345c body=1506 status=ok
// SIG undefined FUN_146c3345c(void)

void FUN_146c3345c(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_158 [32];
  longlong *local_138;
  char local_129;
  ulonglong local_128;
  ulonglong local_120;
  uint local_114;
  undefined8 *local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  int local_cc;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  longlong local_a8 [3];
  undefined8 uStack_90;
  int *local_88;
  ulonglong uStack_80;
  int local_6c;
  undefined4 local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_146c32e62();
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_a8[2] = 0;
  uStack_90 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_c8[2] = 0;
  uStack_b0 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  lVar10 = *param_1;
  uVar15 = 0;
  uVar14 = *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24);
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x28) - 1U))) {
    uVar15 = 1;
    uVar17 = 1;
    if (1 < (int)uVar14) {
      uVar15 = (ulonglong)uVar14;
    }
    do {
      uVar11 = uVar17;
      if ((uint)uVar15 == uVar11) goto LAB_146c334eb;
      uVar17 = uVar11 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x28))[uVar11 >> 9] +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
    uVar15 = (ulonglong)uVar11;
  }
LAB_146c334eb:
  if ((uint)uVar15 != uVar14) {
    local_f0 = param_1 + 0xe;
    local_e0 = param_1 + 0xb;
    local_114 = uVar14;
    local_110 = param_2;
    local_100 = lVar10;
    do {
      local_cc = (int)uVar15;
      local_138 = local_c8;
      local_f8 = uVar15;
      FUN_146c13054(*param_1,uVar15,local_a8,local_c8 + 2);
      if (0 < (int)uStack_b0) {
        lVar10 = 0;
        uVar15 = 0;
        iVar13 = (int)uStack_b0;
        do {
          local_128 = (ulonglong)*(int *)(local_c8[2] + lVar10 * 4);
          if (0 < (longlong)local_128) {
            local_129 = *(char *)(local_c8[0] + lVar10);
            bVar18 = (longlong)uStack_80 < 0;
            uStack_80 = uStack_80 & 0xffffffff00000000;
            local_e8 = lVar10;
            if (bVar18) {
              FUN_14481578e(&local_88,0);
            }
            bVar18 = (longlong)uStack_90 < 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            if (bVar18) {
              FUN_14481578e(local_a8 + 2,0);
            }
            iVar16 = 0;
            iVar13 = (int)local_128;
            FUN_144a8c360(&local_88,local_128 & 0xffffffff,0);
            puVar5 = local_110;
            local_120 = uVar15;
            local_108 = uVar15;
            if (iVar13 != 1) {
              local_d8 = (ulonglong)((int)local_128 - 1);
              uVar12 = 0;
              iVar16 = 0;
              do {
                lVar10 = local_a8[0] + uVar15 * 4 + 4;
                local_68 = *(undefined4 *)(lVar10 + -4 + uVar12 * 4);
                local_64 = *(uint *)(lVar10 + uVar12 * 4);
                local_6c = local_cc;
                bVar7 = (*(code *)*puVar5)(puVar5[1],&local_6c,&local_68,&local_64);
                iVar16 = iVar16 + (uint)(bVar7 ^ 1);
                local_88[uVar12 + 1] = iVar16;
                uVar12 = uVar12 + 1;
              } while (local_d8 != uVar12);
            }
            iVar13 = iVar16 + 1;
            iVar4 = (int)local_108;
            if (local_129 != '\0') {
              if (*local_88 != local_88[(int)uStack_80 + -1]) {
                local_64 = *(uint *)(local_a8[0] + -4 +
                                    (ulonglong)(uint)((int)local_128 + iVar4) * 4);
                local_68 = *(undefined4 *)(local_a8[0] + local_120 * 4);
                local_6c = local_cc;
                cVar8 = (*(code *)*local_110)(local_110[1],&local_6c,&local_68,&local_64);
                if (cVar8 != '\0') {
                  iVar2 = local_88[(int)local_128 - 1];
                  iVar3 = *local_88;
                  uVar15 = local_128;
                  do {
                    uVar14 = (int)uVar15 - 1;
                    uVar15 = (ulonglong)uVar14;
                    iVar13 = iVar16;
                    if (local_88[uVar15] != iVar2) break;
                    local_88[uVar15] = iVar3;
                  } while (0 < (int)uVar14);
                }
              }
            }
            if (0 < iVar13) {
              do {
                uVar9 = FUN_146c32fcc(param_1,param_3);
                uVar15 = uStack_90;
                lVar10 = (longlong)(int)uStack_90;
                uVar14 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar14);
                if (uStack_90._4_4_ < uVar14) {
                  FUN_1446f48e2(local_a8 + 2,uVar15 & 0xffffffff);
                }
                *(undefined4 *)(local_a8[2] + lVar10 * 4) = uVar9;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            plVar6 = local_f0;
            uVar15 = 0;
            do {
              uVar14 = *(uint *)(uVar15 * 4 + local_a8[0] + local_120 * 4);
              lVar10 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar14 >> 9) * 8)
              ;
              uVar12 = (ulonglong)(uVar14 & 0x1ff);
              iVar13 = 0;
              if ((*(int *)(lVar10 + uVar12 * 0xc) != local_cc) &&
                 (iVar13 = 1, *(int *)(lVar10 + uVar12 * 0xc + 4) != local_cc)) {
                iVar13 = (uint)(*(int *)(lVar10 + 8 + uVar12 * 0xc) == local_cc) * 3 + -1;
              }
              uVar17 = uVar14 * 3 + iVar13;
              local_64 = *(uint *)(local_a8[2] + (longlong)local_88[uVar15] * 4);
              lVar10 = param_1[0xe];
              iVar13 = *(int *)((longlong)param_1 + 0x74);
              FUN_146bedf4e(plVar6,&local_64,uVar17);
              for (uVar14 = (int)lVar10 * 0x200 + iVar13; uVar14 < uVar17; uVar14 = uVar14 + 1) {
                *(undefined4 *)
                 (*(longlong *)(param_1[0xf] + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4) = 0xffffffff;
              }
              psVar1 = (short *)(*(longlong *)(param_1[2] + (ulonglong)(local_64 >> 9) * 8) +
                                (ulonglong)(local_64 & 0x1ff) * 2);
              *psVar1 = *psVar1 + 1;
              FUN_146bedf4e(local_e0,&local_cc,local_64);
              uVar15 = uVar15 + 1;
            } while (uVar15 != local_128);
            uVar15 = (ulonglong)(uint)(iVar4 + (int)local_128);
            lVar10 = local_e8;
            iVar13 = (int)uStack_b0;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar13);
      }
      uVar14 = (int)local_f8 + 1;
      if ((int)uVar14 < (int)local_114) {
        uVar14 = local_114;
      }
      uVar15 = local_f8;
      do {
        if (uVar14 - 1 == (int)uVar15) {
          uVar15 = (ulonglong)uVar14;
          break;
        }
        uVar17 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_100 + 0x28) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar15 != local_114);
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c33a40 FUN_146c33a40 body=722 status=ok
// SIG undefined FUN_146c33a40(void)

void FUN_146c33a40(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  uint local_8c;
  undefined8 *local_88;
  ulonglong local_80;
  uint local_74 [4];
  uint local_64;
  uint *local_60;
  uint local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  uVar9 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar12 = 0;
  if ((uVar9 != 0) &&
     (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar5 = 1;
    uVar10 = 1;
    if (1 < (int)uVar9) {
      uVar5 = uVar9;
    }
    do {
      uVar12 = uVar5;
      if (uVar5 == uVar10) break;
      uVar6 = uVar10 >> 9;
      uVar11 = uVar10 & 0x1ff;
      uVar12 = uVar10;
      uVar10 = uVar10 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar6] +
                                         (ulonglong)uVar11 * 2) - 1U));
  }
  local_88 = param_3;
  if (uVar12 != uVar9) {
    local_8c = uVar9;
    do {
      uVar5 = uVar12 * 3 + 2;
      lVar8 = param_1[0xf];
      uVar10 = uVar12 * 3 + 1;
      local_74[0] = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar12 * 3 >> 9) * 8) +
                             (ulonglong)(uVar12 * 3 & 0x1ff) * 4);
      local_74[1] = *(undefined4 *)
                     (*(longlong *)(lVar8 + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
      local_74[2] = *(undefined4 *)
                     (*(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
      if (-1 < (int)local_74[0]) {
        lVar8 = 0;
        uVar2 = 0;
        do {
          while( true ) {
            local_80 = uVar2;
            uVar9 = local_74[lVar8];
            if ((ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar9 >> 9) * 8) +
                                   (ulonglong)(uVar9 & 0x1ff) * 2) + 1U) < 4) {
              local_60 = (uint *)CONCAT44(local_60._4_4_,uVar9);
              local_58[0] = uVar12;
              cVar3 = (*(code *)*param_2)(param_2[1],&local_60,local_58);
              if (cVar3 != '\0') {
                local_74[3] = uVar9;
                local_64 = uVar12;
                local_60 = local_58;
                (*(code *)*local_88)(local_88[1],local_74 + 3,&local_64,&local_60);
                lVar7 = 0;
                do {
                  *(uint *)(*(longlong *)(param_1[9] + (ulonglong)(uVar9 >> 7 & 0x7fffff) * 8) +
                            (ulonglong)((uVar9 & 0x7f) << 4) + lVar7 * 4) = local_58[lVar7];
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 4);
              }
            }
            local_60 = (uint *)CONCAT44(local_60._4_4_,uVar9);
            local_58[0] = uVar12;
            cVar3 = (*(code *)*param_2)(param_2[1],&local_60,local_58);
            if (cVar3 != '\0') break;
            lVar8 = lVar8 + 1;
            uVar2 = local_80;
            if (lVar8 == 3) {
              uVar9 = local_8c;
              if ((local_80 & 1) == 0) goto LAB_146c33c11;
              goto LAB_146c33ca9;
            }
          }
          local_74[3] = uVar9;
          local_64 = uVar12;
          local_60 = local_58;
          (*(code *)*local_88)(local_88[1],local_74 + 3,&local_64,&local_60);
          uVar4 = FUN_146c32f5e(param_1,local_58);
          local_74[lVar8] = (uint)uVar4;
          lVar8 = lVar8 + 1;
          uVar2 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        } while (lVar8 != 3);
LAB_146c33ca9:
        uVar9 = local_8c;
        local_98 = 1;
        FUN_146c33062(param_1,uVar12,local_74,1);
      }
LAB_146c33c11:
      uVar5 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar9) {
        uVar5 = uVar9;
      }
      do {
        uVar10 = uVar5;
        if (uVar5 - 1 == uVar12) break;
        uVar12 = uVar12 + 1;
        uVar10 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar12 >> 9) * 8) +
                                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      uVar12 = uVar10;
    } while (uVar12 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c33d14 FUN_146c33d14 body=445 status=ok
// SIG undefined FUN_146c33d14(void)

void FUN_146c33d14(longlong param_1,uint param_2,undefined4 param_3,undefined8 *param_4)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 auStack_a8 [44];
  uint local_7c;
  int *local_78;
  ulonglong local_70;
  longlong local_68;
  undefined4 local_5c;
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(param_2 >> 4 & 0x3fffff8));
  lVar4 = 0;
  do {
    local_58[lVar4] = *(undefined4 *)((ulonglong)((param_2 & 0x7f) << 4) + lVar3 + lVar4 * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  local_5c = param_3;
  local_7c = FUN_146c32f5e(param_1,local_58);
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    piVar10 = (int *)*param_4;
    local_78 = piVar10 + *(int *)(param_4 + 1);
    local_68 = param_1 + 8;
    local_70 = (ulonglong)(local_7c >> 9);
    uVar6 = local_7c & 0x1ff;
    do {
      iVar2 = *piVar10;
      iVar5 = 0;
      do {
        uVar8 = iVar2 * 3 + iVar5;
        uVar7 = (ulonglong)(uVar8 >> 9);
        uVar9 = (ulonglong)(uVar8 & 0x1ff);
        if (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar7 * 8) + uVar9 * 4) ==
            param_2) {
          FUN_146c09a68(local_68,param_2,1);
          psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + local_70 * 8) +
                            (ulonglong)uVar6 * 2);
          *psVar1 = *psVar1 + 1;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar7 * 8) + uVar9 * 4) = local_7c
          ;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 3);
      piVar10 = piVar10 + 1;
    } while (piVar10 != local_78);
  }
  iVar2 = *(int *)(param_1 + 0x58);
  iVar5 = *(int *)(param_1 + 0x5c);
  FUN_146bedf4e(param_1 + 0x58,&local_5c,local_7c);
  for (uVar6 = iVar2 * 0x200 + iVar5; uVar6 < local_7c; uVar6 = uVar6 + 1) {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar6 & 0x1ff) * 4) = 0xffffffff;
  }
  if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                (ulonglong)(param_2 & 0x1ff) * 2) == 1) {
    FUN_146c09a68(param_1 + 8,param_2,1);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(param_2 >> 9) * 8) +
     (ulonglong)(param_2 & 0x1ff) * 4) = 0xffffffff;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c33ed2 FUN_146c33ed2 body=1891 status=ok
// SIG undefined FUN_146c33ed2(void)

void FUN_146c33ed2(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  byte local_199;
  ulonglong local_198;
  uint local_190;
  uint local_18c;
  ulonglong local_188;
  undefined4 *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 uStack_150;
  uint local_144;
  undefined8 local_140;
  undefined4 **local_138;
  longlong *local_130;
  uint *local_128;
  uint local_11c;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 *local_108;
  ulonglong uStack_100;
  undefined4 *local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  undefined8 uStack_d0;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_e8[2] = 0;
  uStack_d0 = 0;
  local_1a8 = local_e8;
  local_e8[0] = 0;
  local_e8[1] = 0;
  uVar11 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c8[2] = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_f8 = (undefined4 *)0x0;
  uStack_f0 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  FUN_146c13054(*param_1,param_2,local_c8,local_e8 + 2);
  FUN_1402226aa();
  local_178 = (longlong)(int)uStack_d0;
  local_11c = 0;
  if (0 < local_178) {
    lVar10 = 0;
    do {
      uVar3 = *(uint *)(local_e8[2] + lVar10 * 4);
      local_198 = (ulonglong)uVar3;
      uVar8 = (uint)uVar11;
      if (0 < (int)uVar3) {
        local_199 = *(byte *)(local_e8[0] + lVar10);
        bVar15 = (longlong)uStack_f0 < 0;
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        uVar3 = uVar8;
        local_170 = lVar10;
        if (bVar15) {
          FUN_14481578e(&local_f8,0);
          uVar3 = local_11c;
        }
        local_190 = (int)local_198 + uVar8;
        if ((int)uVar3 < (int)local_190) {
          lVar10 = (longlong)(int)uVar3;
          iVar6 = ((int)local_198 + uVar8) - uVar3;
          do {
            uVar1 = uStack_f0;
            uVar3 = *(uint *)(local_c8[0] + lVar10 * 4);
            uVar8 = uVar3 * 3 + 2;
            uVar9 = uVar3 * 3 + 1;
            lVar12 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
            uVar7 = (ulonglong)(uVar3 & 0x1ff);
            lVar13 = param_1[0xf];
            local_140 = (longlong *)
                        CONCAT44(*(undefined4 *)
                                  (*(longlong *)(lVar13 + (ulonglong)(uVar9 >> 9) * 8) +
                                  (ulonglong)(uVar9 & 0x1ff) * 4),
                                 *(undefined4 *)
                                  (*(longlong *)(lVar13 + (ulonglong)(uVar3 * 3 >> 9) * 8) +
                                  (ulonglong)(uVar3 * 3 & 0x1ff) * 4));
            local_138 = (undefined4 **)
                        CONCAT44(local_138._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)(lVar13 + (ulonglong)(uVar8 >> 9) * 8) +
                                  (ulonglong)(uVar8 & 0x1ff) * 4));
            iVar14 = (int)param_2;
            if (*(int *)(lVar12 + uVar7 * 0xc) == iVar14) {
              lVar13 = 0;
            }
            else {
              lVar13 = 1;
              if (*(int *)(lVar12 + 4 + uVar7 * 0xc) != iVar14) {
                lVar13 = (ulonglong)(*(int *)(lVar12 + 8 + uVar7 * 0xc) == iVar14) * 3 + -1;
              }
            }
            lVar12 = (longlong)(int)uStack_f0;
            uVar3 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar3);
            if (uStack_f0._4_4_ < uVar3) {
              FUN_1446f48e2(&local_f8,uVar1 & 0xffffffff);
            }
            local_f8[lVar12] = *(undefined4 *)((longlong)&local_140 + lVar13 * 4);
            lVar10 = lVar10 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_138 = &local_f8;
        local_130 = local_c8;
        local_128 = &local_11c;
        bVar15 = (longlong)uStack_100 < 0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        local_140 = param_1;
        if (bVar15) {
          FUN_14481578e(&local_108,0);
        }
        local_188 = uVar11;
        FUN_144a1a59e(&local_108,local_198,1);
        bVar15 = (longlong)uStack_110 < 0;
        uStack_110 = uStack_110 & 0xffffffff00000000;
        if (bVar15) {
          FUN_14481578e(&local_118,0);
        }
        puVar5 = local_f8;
        uVar11 = uStack_110;
        *local_108 = 0;
        lVar10 = (longlong)(int)uStack_110;
        uVar3 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
        if (uStack_110._4_4_ < uVar3) {
          FUN_1446f48e2(&local_118,uVar11 & 0xffffffff);
        }
        *(undefined4 *)(local_118 + lVar10 * 4) = *puVar5;
        if ((int)(local_11c + 1) < (int)local_190) {
          local_18c = ((int)local_198 + (int)local_188) - 1;
          iVar6 = 0;
          uVar3 = local_11c;
          do {
            uVar8 = uVar3 + 1;
            cVar2 = FUN_146c34636(&local_140,uVar3,uVar8);
            uVar11 = uStack_110;
            if (cVar2 == '\0') {
              iVar14 = uVar3 - local_11c;
              lVar10 = (longlong)(int)uStack_110;
              uVar9 = (int)uStack_110 + 1;
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar9);
              puVar5 = local_f8;
              if (uStack_110._4_4_ < uVar9) {
                local_180 = local_f8;
                FUN_1446f48e2(&local_118,uVar11 & 0xffffffff);
                puVar5 = local_180;
              }
              *(undefined4 *)(local_118 + lVar10 * 4) = puVar5[iVar14 + 1];
              iVar6 = iVar6 + 1;
            }
            local_108[(longlong)(int)(uVar3 - local_11c) + 1] = iVar6;
            uVar3 = uVar8;
          } while (local_18c != uVar8);
          if ((local_199 & 0 < iVar6) == 0) goto LAB_146c3430c;
          cVar2 = FUN_146c34636(&local_140,local_11c,(int)local_198 + local_11c + -1);
          if (cVar2 == '\0') goto LAB_146c3430c;
          if (0 < (longlong)(int)uStack_100) {
            iVar6 = local_108[(int)uStack_100 + -1];
            uVar11 = (longlong)(int)uStack_100 + 1;
            do {
              if (local_108[uVar11 - 2] != iVar6) break;
              local_108[uVar11 - 2] = 0;
              uVar11 = uVar11 - 1;
            } while (1 < uVar11);
          }
          iVar6 = (int)uStack_110 + -1;
          uStack_110 = CONCAT44(uStack_110._4_4_,iVar6);
        }
        else {
LAB_146c3430c:
          iVar6 = (int)uStack_110;
        }
        if (0 < iVar6) {
          local_198 = (ulonglong)(uint)((int)local_198 + (int)local_188);
          uVar11 = 0;
          do {
            local_144 = *(uint *)(local_118 + uVar11 * 4);
            if (-1 < (int)local_144) {
              if ((int)uStack_b0 != local_84) {
                puVar4 = local_78;
                if (local_78 == (undefined1 *)0x0) {
                  puVar4 = local_80;
                }
                iVar6 = *(int *)(puVar4 + (ulonglong)(local_70 + 0x7fffffffU & local_144) * 4);
                if (iVar6 != -1) {
LAB_146c3438c:
                  if (*(uint *)(local_c8[2] + (longlong)iVar6 * 0xc) != local_144)
                  goto code_r0x000146c34398;
                  local_158 = 0;
                  uStack_150 = 0;
                  lVar10 = (longlong)(int)local_11c;
                  if ((int)local_11c < (int)local_190) {
                    iVar6 = (int)local_198 - local_11c;
                    do {
                      lVar12 = local_c8[0];
                      uVar1 = uStack_150;
                      if (uVar11 == (uint)local_108[lVar10 - (int)local_11c]) {
                        lVar13 = (longlong)(int)uStack_150;
                        uVar3 = (int)uStack_150 + 1;
                        uStack_150 = CONCAT44(uStack_150._4_4_,uVar3);
                        if (uStack_150._4_4_ < uVar3) {
                          FUN_1446f48e2(&local_158,uVar1 & 0xffffffff);
                        }
                        *(undefined4 *)(local_158 + lVar13 * 4) =
                             *(undefined4 *)(lVar12 + lVar10 * 4);
                      }
                      lVar10 = lVar10 + 1;
                      iVar6 = iVar6 + -1;
                    } while (iVar6 != 0);
                  }
                  else {
                    uStack_150._0_4_ = 0;
                  }
                  local_168 = local_158;
                  local_160 = (int)uStack_150;
                  FUN_146c33d14(param_1,local_144,
                                *(undefined4 *)
                                 (*(longlong *)(param_1[0xc] + (ulonglong)(local_144 >> 9) * 8) +
                                 (ulonglong)(local_144 & 0x1ff) * 4),&local_168);
                  if (local_158 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
LAB_146c343a4:
              FUN_1447cbafe(local_c8 + 2,&local_158,&local_144,0);
              iVar6 = (int)uStack_110;
            }
            uVar11 = uVar11 + 1;
          } while ((longlong)uVar11 < (longlong)iVar6);
        }
        local_11c = local_190;
        lVar10 = local_170;
        uVar8 = local_190;
      }
      lVar10 = lVar10 + 1;
      uVar11 = (ulonglong)uVar8;
    } while (lVar10 != local_178);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_108 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_c8 + 2);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146c34398:
  iVar6 = *(int *)(local_c8[2] + (longlong)iVar6 * 0xc + 4);
  if (iVar6 == -1) goto LAB_146c343a4;
  goto LAB_146c3438c;
}



// FUNCTION 146c34636 FUN_146c34636 body=110 status=ok
// SIG undefined FUN_146c34636(void)

ulonglong FUN_146c34636(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(int *)(*(longlong *)param_1[1] + (longlong)(param_2 - *(int *)param_1[3]) * 4) ==
      *(int *)(*(longlong *)param_1[1] + (longlong)(param_3 - *(int *)param_1[3]) * 4)) {
    puVar1 = (undefined8 *)*param_1;
    iVar2 = FUN_146c08e54(*puVar1,*(undefined4 *)(*(longlong *)param_1[2] + (longlong)param_2 * 4),
                          *(undefined4 *)(*(longlong *)param_1[2] + (longlong)param_3 * 4));
    if (-1 < iVar2) {
      uVar3 = FUN_146c1ae78(puVar1,iVar2,0);
      return uVar3 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 146c346a4 FUN_146c346a4 body=782 status=ok
// SIG undefined FUN_146c346a4(void)

ulonglong FUN_146c346a4(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_258 [36];
  uint local_234 [3];
  longlong local_228;
  ulonglong uStack_220;
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_258;
  local_228 = 0;
  uStack_220 = 0;
  local_234[0] = 0xffffffff;
  local_234[1] = 0xffffffff;
  local_234[2] = 0xffffffff;
  local_150 = *param_1;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,param_2);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = param_2;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar2 = local_120 * 3;
    lVar5 = param_1[0xf];
    iVar1 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < iVar1) {
      local_234[1] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      local_234[0] = iVar1;
      local_234[2] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                      (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      lVar5 = 0;
      do {
        if (*(int *)(*(longlong *)
                      (param_1[0xc] + (ulonglong)(*(uint *)((longlong)local_234 + lVar5) >> 9) * 8)
                    + (ulonglong)(*(uint *)((longlong)local_234 + lVar5) & 0x1ff) * 4) == param_2) {
          FUN_1449e3bb0(&local_228,(longlong)local_234 + lVar5);
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar4 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar4 = local_198;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar4 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar4 = local_f8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  uVar3 = uStack_220;
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)local_258) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c349b4 FUN_146c349b4 body=758 status=ok
// SIG undefined FUN_146c349b4(void)

void FUN_146c349b4(longlong *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_248 [36];
  uint local_224 [3];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_248;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  local_150 = *param_1;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,param_2);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = param_2;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar2 = local_120 * 3;
    lVar4 = param_1[0xf];
    uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      local_224[0] = uVar1;
      local_224[1] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      local_224[2] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                      (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      lVar4 = 0;
      do {
        if (*(int *)(*(longlong *)
                      (param_1[0xc] + (ulonglong)(*(uint *)((longlong)local_224 + lVar4) >> 9) * 8)
                    + (ulonglong)(*(uint *)((longlong)local_224 + lVar4) & 0x1ff) * 4) == param_2) {
          FUN_1449e3bb0(param_3,(longlong)local_224 + lVar4);
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0xc);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar3 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar3 = local_198;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar3 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar3 = local_f8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)local_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c34cac FUN_146c34cac body=766 status=ok
// SIG undefined FUN_146c34cac(void)

void FUN_146c34cac(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  code **ppcVar5;
  longlong *plVar6;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc))) {
    if ((ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      iStack_210 = *(undefined4 *)
                    (*(longlong *)(param_1[0xc] + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
      local_150 = *param_1;
      local_168 = 0;
      local_158 = &PTR_LAB_149f3aae0;
      _uStack_148 = CONCAT44(uStack_144,iStack_210);
      local_178 = FUN_146be9588;
      local_218 = (code *)(local_150 + 0xb8);
      FUN_146be94ac(local_d8,&local_218,&local_178);
      local_128 = 0xffffffffffffffff;
      local_118[0] = 0;
      local_108 = (longlong *)0x0;
      local_178 = local_98;
      uStack_170 = uStack_90;
      iStack_160 = iStack_80;
      iStack_15c = iStack_7c;
      local_158 = (undefined **)local_78;
      local_140 = local_60;
      uStack_13c = uStack_5c;
      iStack_138 = iStack_58;
      iStack_134 = iStack_54;
      local_130 = local_50;
      FUN_146be971a(local_118,local_d8);
      local_11c = 0;
      FUN_146bfd1f0(&local_178);
      local_1c8 = 0xffffffffffffffff;
      local_1b8[0] = 0;
      local_1a8 = (longlong *)0x0;
      local_218 = (code *)CONCAT44(uStack_6c,local_70);
      iStack_210 = iStack_68;
      uStack_20c = uStack_64;
      local_208 = local_60;
      uStack_204 = uStack_5c;
      iStack_200 = iStack_58;
      iStack_1fc = iStack_54;
      local_1f8 = local_50;
      local_1f0 = local_70;
      uStack_1ec = uStack_6c;
      iStack_1e8 = iStack_68;
      uStack_1e4 = uStack_64;
      local_1e0 = local_60;
      uStack_1dc = uStack_5c;
      iStack_1d8 = iStack_58;
      iStack_1d4 = iStack_54;
      local_1d0 = local_50;
      FUN_146be971a(local_1b8,local_d8);
      local_1bc = 0;
      ppcVar5 = (code **)&local_218;
      while ((((FUN_146bfd1f0(ppcVar5), iVar4 = local_120, local_178 != local_218 ||
               ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)) ||
             (iStack_15c != iStack_1fc))) {
        uVar3 = local_120 * 3;
        lVar2 = param_1[0xf];
        ppcVar5 = &local_178;
        if (((*(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4) == param_2) ||
            (*(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                      (ulonglong)(uVar3 + 1 & 0x1ff) * 4) == param_2)) ||
           (*(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                     (ulonglong)(uVar3 + 2 & 0x1ff) * 4) == param_2)) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_3,iVar1);
          }
          *(int *)(*param_3 + (longlong)iVar1 * 4) = iVar4;
        }
      }
      if (local_1b8[0] != 0) {
        plVar6 = local_1a8;
        if (local_1a8 == (longlong *)0x0) {
          plVar6 = local_198;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (local_118[0] != 0) {
        plVar6 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar6 = local_f8;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (local_d8[0] != 0) {
        if (local_c8 == (longlong *)0x0) {
          local_c8 = local_b8;
        }
        (**(code **)(*local_c8 + 0x10))();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c34fac FUN_146c34fac body=189 status=ok
// SIG undefined FUN_146c34fac(void)

uint FUN_146c34fac(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = param_2 * 3 + 2;
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar1 = param_2 * 3 + 1;
  local_1c[0] = *(uint *)(*(longlong *)(lVar2 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                         (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  local_1c[1] = *(undefined4 *)
                 (*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                 (ulonglong)(uVar1 & 0x1ff) * 4);
  local_1c[2] = *(undefined4 *)
                 (*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                 (ulonglong)(uVar3 & 0x1ff) * 4);
  lVar2 = 0;
  do {
    uVar1 = local_1c[lVar2];
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
                (ulonglong)(uVar1 & 0x1ff) * 4) == param_3) goto LAB_146c3504d;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  uVar1 = 0xffffffff;
LAB_146c3504d:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3506a FUN_146c3506a body=156 status=ok
// SIG undefined FUN_146c3506a(void)

void FUN_146c3506a(longlong param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x48);
    *(float *)(*(longlong *)(lVar1 + (ulonglong)(param_2 >> 7 & 0x7fffff) * 8) +
               (ulonglong)((param_2 & 0x7f) << 4) + lVar2 * 4) =
         (float)((double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_4 >> 7 & 0x7fffff) * 8)
                                    + (ulonglong)((param_4 & 0x7f) << 4) + lVar2 * 4) * param_5 +
                (double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_3 >> 7 & 0x7fffff) * 8) +
                                   (ulonglong)((param_3 & 0x7f) << 4) + lVar2 * 4) * (1.0 - param_5)
                );
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return;
}



// FUNCTION 146c35106 FUN_146c35106 body=111 status=ok
// SIG undefined FUN_146c35106(void)

void FUN_146c35106(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  FUN_146c09a68(lVar1 + 8,param_2,1);
  uVar2 = param_2 >> 9 & 0x7fffff;
  uVar3 = (ulonglong)((uint)param_2 & 0x1ff);
  if (*(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + uVar2 * 8) + uVar3 * 2) == 1) {
    FUN_146c09a68(lVar1 + 8,param_2 & 0xffffffff,1);
    *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x60) + uVar2 * 8) + uVar3 * 4) = 0xffffffff
    ;
  }
  return;
}



// FUNCTION 146c35176 FUN_146c35176 body=205 status=ok
// SIG undefined FUN_146c35176(void)

void FUN_146c35176(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  double *param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x48);
    *(float *)(*(longlong *)(lVar1 + (ulonglong)(param_2 >> 7 & 0x7fffff) * 8) +
               (ulonglong)((param_2 & 0x7f) << 4) + lVar2 * 4) =
         (float)((double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_5 >> 7 & 0x7fffff) * 8)
                                    + (ulonglong)((param_5 & 0x7f) << 4) + lVar2 * 4) * param_6[2] +
                (double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_3 >> 7 & 0x7fffff) * 8) +
                                   (ulonglong)((param_3 & 0x7f) << 4) + lVar2 * 4) * *param_6 +
                (double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_4 >> 7 & 0x7fffff) * 8) +
                                   (ulonglong)((param_4 & 0x7f) << 4) + lVar2 * 4) * param_6[1]);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return;
}



// FUNCTION 146c35244 FUN_146c35244 body=258 status=ok
// SIG undefined FUN_146c35244(void)

void FUN_146c35244(longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(*(longlong *)
                     (*(longlong *)(param_1 + 0x78) + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                   (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  uVar2 = (ulonglong)(uVar1 >> 5 & 0x3fffff8);
  uVar3 = (ulonglong)((uVar1 & 0xff) << 3);
  *param_3 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar2) + uVar3);
  param_3[1] = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar2) + 4 + uVar3);
  uVar1 = param_2 * 3 + 1;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 >> 9) * 8) +
                   (ulonglong)(uVar1 & 0x1ff) * 4);
  uVar3 = (ulonglong)(uVar1 >> 5 & 0x3fffff8);
  uVar2 = (ulonglong)((uVar1 & 0xff) << 3);
  *param_4 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar3) + uVar2);
  param_4[1] = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar3) + 4 + uVar2);
  uVar1 = param_2 * 3 + 2;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 >> 9) * 8) +
                   (ulonglong)(uVar1 & 0x1ff) * 4);
  uVar2 = (ulonglong)(uVar1 >> 5 & 0x3fffff8);
  uVar3 = (ulonglong)((uVar1 & 0xff) << 3);
  *param_5 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar2) + uVar3);
  param_5[1] = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar2) + 4 + uVar3);
  return;
}



// FUNCTION 146c35346 FUN_146c35346 body=1027 status=ok
// SIG undefined FUN_146c35346(void)

ulonglong FUN_146c35346(longlong *param_1,uint param_2,undefined8 *param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte bVar8;
  undefined7 uVar9;
  int iVar10;
  undefined1 auStack_2b8 [36];
  int local_294;
  ulonglong local_290;
  ulonglong local_288;
  undefined4 local_27c;
  undefined4 local_278;
  uint local_274;
  undefined4 local_270;
  uint local_26c;
  undefined8 local_268;
  uint uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  int iStack_250;
  int iStack_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  int iStack_228;
  int iStack_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_20c;
  longlong local_208 [2];
  longlong *local_1f8;
  longlong local_1e8 [4];
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  int iStack_1b0;
  int iStack_1ac;
  undefined **local_1a8;
  longlong local_1a0;
  uint uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  int iStack_188;
  int iStack_184;
  undefined8 local_180;
  undefined8 local_178;
  uint local_170;
  undefined4 local_16c;
  longlong local_168 [2];
  longlong *local_158;
  longlong local_148 [4];
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  code *local_e8;
  undefined8 uStack_e0;
  int iStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined8 local_a0;
  undefined1 local_98 [64];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (((int)param_2 < 0) ||
     (local_1a0 = *param_1,
     *(int *)(local_1a0 + 0x20) * 0x200 + *(int *)(local_1a0 + 0x24) <= (int)param_2)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(local_1a0 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_58 = 0;
      local_50 = 0x1000000000;
      local_1b8 = 0;
      local_1a8 = &PTR_LAB_149f3aae0;
      _uStack_198 = CONCAT44(uStack_194,param_2);
      local_1c8 = FUN_146be9588;
      local_268 = (code *)(local_1a0 + 0xb8);
      uStack_260 = param_2;
      FUN_146be94ac(local_128,&local_268,&local_1c8);
      local_178 = 0xffffffffffffffff;
      local_168[0] = 0;
      local_158 = (longlong *)0x0;
      local_1c8 = local_e8;
      uStack_1c0 = uStack_e0;
      iStack_1b0 = iStack_d0;
      iStack_1ac = iStack_cc;
      local_1a8 = (undefined **)local_c8;
      local_190 = local_b0;
      uStack_18c = uStack_ac;
      iStack_188 = iStack_a8;
      iStack_184 = iStack_a4;
      local_180 = local_a0;
      FUN_146be971a(local_168,local_128);
      local_16c = 0;
      FUN_146bfd1f0(&local_1c8);
      local_218 = 0xffffffffffffffff;
      uVar6 = 0;
      local_208[0] = 0;
      local_1f8 = (longlong *)0x0;
      local_268 = (code *)CONCAT44(uStack_bc,local_c0);
      uStack_260 = iStack_b8;
      uStack_25c = uStack_b4;
      local_258 = local_b0;
      uStack_254 = uStack_ac;
      iStack_250 = iStack_a8;
      iStack_24c = iStack_a4;
      local_248 = local_a0;
      local_240 = local_c0;
      uStack_23c = uStack_bc;
      iStack_238 = iStack_b8;
      uStack_234 = uStack_b4;
      local_230 = local_b0;
      uStack_22c = uStack_ac;
      iStack_228 = iStack_a8;
      iStack_224 = iStack_a4;
      local_220 = local_a0;
      FUN_146be971a(local_208,local_128);
      local_20c = 0;
      FUN_146bfd1f0(&local_268);
      while ((((iVar10 = (int)uVar6, local_1c8 != local_268 || ((int)uStack_1c0 != uStack_260)) ||
              (iStack_1b0 != iStack_250)) || (iStack_1ac != iStack_24c))) {
        local_288 = (ulonglong)local_170;
        uVar3 = local_170 * 3;
        if (-1 < *(int *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar3 >> 9) * 8) +
                         (ulonglong)(uVar3 & 0x1ff) * 4)) {
          local_290 = (ulonglong)(iVar10 + 1);
          iVar10 = 0;
          do {
            uVar1 = *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar3 + iVar10 >> 9) * 8) +
                             (ulonglong)(uVar3 + iVar10 & 0x1ff) * 4);
            local_274 = uVar1;
            if (*(uint *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 4) == param_2) {
              if (param_4 != '\0') {
                local_294 = (int)local_50;
                iVar5 = FUN_146c58ad4(local_98,&local_274);
                if (iVar5 != local_294) goto LAB_146c355ef;
              }
              lVar2 = *(longlong *)(param_1[9] + (ulonglong)(uVar1 >> 5 & 0x3fffff8));
              uVar6 = (ulonglong)((uVar1 & 0xff) << 3);
              local_27c = *(undefined4 *)(lVar2 + uVar6);
              local_278 = *(undefined4 *)(lVar2 + 4 + uVar6);
              local_270 = (undefined4)local_288;
              local_26c = uVar1;
              cVar4 = (*(code *)*param_3)(param_3[1],&local_270,&local_26c,&local_27c);
              if (cVar4 == '\0') {
                uVar9 = (undefined7)((ulonglong)param_3 >> 8);
                bVar8 = 1;
                iVar10 = (int)local_290;
                goto LAB_146c3569b;
              }
            }
LAB_146c355ef:
            iVar10 = iVar10 + 1;
            uVar6 = local_290;
          } while (iVar10 != 3);
        }
        FUN_146bfd1f0(&local_1c8);
      }
      bVar8 = 0;
      uVar9 = 0;
LAB_146c3569b:
      if (local_208[0] != 0) {
        plVar7 = local_1f8;
        if (local_1f8 == (longlong *)0x0) {
          plVar7 = local_1e8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_168[0] != 0) {
        plVar7 = local_158;
        if (local_158 == (longlong *)0x0) {
          plVar7 = local_148;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_128[0] != 0) {
        if (local_118 == (longlong *)0x0) {
          local_118 = local_108;
        }
        (**(code **)(*local_118 + 0x10))();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar6 = CONCAT71(uVar9,bVar8 | 0 < iVar10) & 0xffffffff;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146c3574a FUN_146c3574a body=258 status=ok
// SIG undefined FUN_146c3574a(void)

void FUN_146c3574a(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = param_2 * 3;
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4);
  lVar4 = 0;
  do {
    uVar2 = iVar1 * 3 + (int)lVar4;
    *(undefined4 *)(param_3 + lVar4 * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar2 >> 9) * 8) +
          (ulonglong)(uVar2 & 0x1ff) * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                  (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
  lVar4 = 0;
  do {
    uVar2 = iVar1 * 3 + (int)lVar4;
    *(undefined4 *)(param_4 + lVar4 * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar2 >> 9) * 8) +
          (ulonglong)(uVar2 & 0x1ff) * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                  (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
  lVar4 = 0;
  do {
    uVar3 = iVar1 * 3 + (int)lVar4;
    *(undefined4 *)(param_5 + lVar4 * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar3 >> 9) * 8) +
          (ulonglong)(uVar3 & 0x1ff) * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  return;
}



// FUNCTION 146c3584c FUN_146c3584c body=1030 status=ok
// SIG undefined FUN_146c3584c(void)

ulonglong FUN_146c3584c(longlong *param_1,uint param_2,undefined8 *param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  undefined7 uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_2b8 [36];
  int local_294;
  ulonglong local_290;
  ulonglong local_288;
  uint local_280 [4];
  undefined4 local_270;
  uint local_26c;
  undefined8 local_268;
  uint uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  int iStack_250;
  int iStack_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  int iStack_228;
  int iStack_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_20c;
  longlong local_208 [2];
  longlong *local_1f8;
  longlong local_1e8 [4];
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  int iStack_1b0;
  int iStack_1ac;
  undefined **local_1a8;
  longlong local_1a0;
  uint uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  int iStack_188;
  int iStack_184;
  undefined8 local_180;
  undefined8 local_178;
  uint local_170;
  undefined4 local_16c;
  longlong local_168 [2];
  longlong *local_158;
  longlong local_148 [4];
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  code *local_e8;
  undefined8 uStack_e0;
  int iStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined8 local_a0;
  undefined1 local_98 [64];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (((int)param_2 < 0) ||
     (local_1a0 = *param_1,
     *(int *)(local_1a0 + 0x20) * 0x200 + *(int *)(local_1a0 + 0x24) <= (int)param_2)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(local_1a0 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_58 = 0;
      local_50 = 0x1000000000;
      local_1b8 = 0;
      local_1a8 = &PTR_LAB_149f3aae0;
      _uStack_198 = CONCAT44(uStack_194,param_2);
      local_1c8 = FUN_146be9588;
      local_268 = (code *)(local_1a0 + 0xb8);
      uStack_260 = param_2;
      FUN_146be94ac(local_128,&local_268,&local_1c8);
      local_178 = 0xffffffffffffffff;
      local_168[0] = 0;
      local_158 = (longlong *)0x0;
      local_1c8 = local_e8;
      uStack_1c0 = uStack_e0;
      iStack_1b0 = iStack_d0;
      iStack_1ac = iStack_cc;
      local_1a8 = (undefined **)local_c8;
      local_190 = local_b0;
      uStack_18c = uStack_ac;
      iStack_188 = iStack_a8;
      iStack_184 = iStack_a4;
      local_180 = local_a0;
      FUN_146be971a(local_168,local_128);
      local_16c = 0;
      FUN_146bfd1f0(&local_1c8);
      local_218 = 0xffffffffffffffff;
      uVar6 = 0;
      local_208[0] = 0;
      local_1f8 = (longlong *)0x0;
      local_268 = (code *)CONCAT44(uStack_bc,local_c0);
      uStack_260 = iStack_b8;
      uStack_25c = uStack_b4;
      local_258 = local_b0;
      uStack_254 = uStack_ac;
      iStack_250 = iStack_a8;
      iStack_24c = iStack_a4;
      local_248 = local_a0;
      local_240 = local_c0;
      uStack_23c = uStack_bc;
      iStack_238 = iStack_b8;
      uStack_234 = uStack_b4;
      local_230 = local_b0;
      uStack_22c = uStack_ac;
      iStack_228 = iStack_a8;
      iStack_224 = iStack_a4;
      local_220 = local_a0;
      FUN_146be971a(local_208,local_128);
      local_20c = 0;
      FUN_146bfd1f0(&local_268);
      while ((((iVar12 = (int)uVar6, local_1c8 != local_268 || ((int)uStack_1c0 != uStack_260)) ||
              (iStack_1b0 != iStack_250)) || (iStack_1ac != iStack_24c))) {
        local_288 = (ulonglong)local_170;
        uVar3 = local_170 * 3;
        if (-1 < *(int *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar3 >> 9) * 8) +
                         (ulonglong)(uVar3 & 0x1ff) * 4)) {
          local_290 = (ulonglong)(iVar12 + 1);
          iVar12 = 0;
          do {
            uVar1 = *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(iVar12 + uVar3 >> 9) * 8) +
                             (ulonglong)(iVar12 + uVar3 & 0x1ff) * 4);
            local_280[3] = uVar1;
            if (*(uint *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 4) == param_2) {
              if (param_4 != '\0') {
                local_294 = (int)local_50;
                iVar5 = FUN_146c58ad4(local_98);
                if (iVar5 != local_294) goto LAB_146c35af8;
              }
              lVar2 = param_1[9];
              lVar8 = 0;
              do {
                uVar11 = uVar1 * 3 + (int)lVar8;
                local_280[lVar8] =
                     *(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                              (ulonglong)(uVar11 & 0x1ff) * 4);
                lVar8 = lVar8 + 1;
              } while (lVar8 != 3);
              local_270 = (undefined4)local_288;
              local_26c = uVar1;
              cVar4 = (*(code *)*param_3)(param_3[1],&local_270,&local_26c,local_280);
              if (cVar4 == '\0') {
                uVar10 = (undefined7)((ulonglong)param_3 >> 8);
                bVar9 = 1;
                iVar12 = (int)local_290;
                goto LAB_146c35ba4;
              }
            }
LAB_146c35af8:
            iVar12 = iVar12 + 1;
            uVar6 = local_290;
          } while (iVar12 != 3);
        }
        FUN_146bfd1f0(&local_1c8);
      }
      bVar9 = 0;
      uVar10 = 0;
LAB_146c35ba4:
      if (local_208[0] != 0) {
        plVar7 = local_1f8;
        if (local_1f8 == (longlong *)0x0) {
          plVar7 = local_1e8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_168[0] != 0) {
        plVar7 = local_158;
        if (local_158 == (longlong *)0x0) {
          plVar7 = local_148;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_128[0] != 0) {
        if (local_118 == (longlong *)0x0) {
          local_118 = local_108;
        }
        (**(code **)(*local_118 + 0x10))();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar6 = CONCAT71(uVar10,bVar9 | 0 < iVar12) & 0xffffffff;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146c35c54 FUN_146c35c54 body=267 status=ok
// SIG undefined FUN_146c35c54(void)

void FUN_146c35c54(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = param_2 * 3;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar2 >> 9) * 8) +
                   (ulonglong)(uVar2 & 0x1ff) * 4);
  lVar3 = 0;
  do {
    *(undefined4 *)(param_3 + lVar3 * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar1 >> 7 & 0x7fffff) * 8) +
           (ulonglong)((uVar1 & 0x7f) << 4) + lVar3 * 4);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                   (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
  lVar3 = 0;
  do {
    *(undefined4 *)(param_4 + lVar3 * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar1 >> 7 & 0x7fffff) * 8) +
           (ulonglong)((uVar1 & 0x7f) << 4) + lVar3 * 4);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                   (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
  lVar3 = 0;
  do {
    *(undefined4 *)(param_5 + lVar3 * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar1 >> 7 & 0x7fffff) * 8) +
           (ulonglong)((uVar1 & 0x7f) << 4) + lVar3 * 4);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  return;
}



// FUNCTION 146c35d5f FUN_146c35d5f body=419 status=ok
// SIG undefined FUN_146c35d5f(void)

longlong FUN_146c35d5f(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [40];
  undefined8 local_110 [13];
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
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
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_146c35f03();
  puVar9 = local_110;
  for (lVar7 = 0xc; puVar9 = puVar9 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *param_3;
    param_3 = param_3 + 1;
  }
  local_a8 = (code *)0x0;
  local_98 = (longlong *)FUN_14001cc68(0x80,0x10);
  *local_98 = (longlong)&PTR_FUN_149f3c250;
  local_98[2] = param_2;
  puVar9 = local_110;
  puVar10 = local_98 + 3;
  for (lVar7 = 0xd; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if (local_98 + 2 != (undefined8 *)0x0) {
    local_a8 = FUN_142973ea4;
  }
  local_68 = *(longlong *)(param_1 + 0x200);
  uStack_60 = *(undefined8 *)(param_1 + 0x208);
  local_58 = *(longlong **)(param_1 + 0x210);
  uStack_50 = *(undefined8 *)(param_1 + 0x218);
  local_48 = *(undefined8 *)(param_1 + 0x220);
  uStack_40 = *(undefined8 *)(param_1 + 0x228);
  local_38 = *(undefined8 *)(param_1 + 0x230);
  uStack_30 = *(undefined8 *)(param_1 + 0x238);
  uVar5 = local_38;
  uVar6 = uStack_30;
  uVar3 = local_48;
  uVar4 = uStack_40;
  uVar2 = uStack_50;
  uVar1 = uStack_60;
  *(ulonglong *)(param_1 + 0x230) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0x238) = CONCAT44(uStack_6c,uStack_70);
  *(ulonglong *)(param_1 + 0x220) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(param_1 + 0x228) = CONCAT44(uStack_7c,uStack_80);
  *(longlong **)(param_1 + 0x210) = local_98;
  *(ulonglong *)(param_1 + 0x218) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(param_1 + 0x200) = local_a8;
  *(ulonglong *)(param_1 + 0x208) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = (code *)local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  if (local_68 != 0) {
    plVar8 = local_98;
    if (local_58 == (longlong *)0x0) {
      plVar8 = (longlong *)&local_88;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c35f03 FUN_146c35f03 body=359 status=ok
// SIG undefined FUN_146c35f03(void)

void FUN_146c35f03(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[4] = &PTR_LAB_149f3c270;
  param_1[5] = param_2;
  *param_1 = &LAB_14297405e;
  param_1[10] = 0;
  param_1[0xc] = &PTR_LAB_149f3c290;
  param_1[0xd] = param_2;
  param_1[8] = &LAB_1429740e8;
  param_1[0x12] = 0;
  param_1[0x14] = &PTR_LAB_149f3c2b0;
  param_1[0x15] = param_2;
  param_1[0x10] = &LAB_14297416a;
  param_1[0x1a] = 0;
  param_1[0x1c] = &PTR_LAB_149f3c2d0;
  param_1[0x1d] = param_2;
  param_1[0x18] = &LAB_1429741c6;
  param_1[0x22] = 0;
  param_1[0x24] = &PTR_LAB_149f3c2f0;
  param_1[0x25] = param_2;
  param_1[0x20] = &LAB_14297421c;
  param_1[0x2a] = 0;
  param_1[0x2c] = &PTR_LAB_149f3c310;
  param_1[0x2d] = param_2;
  param_1[0x28] = &LAB_14297426e;
  param_1[0x32] = 0;
  param_1[0x34] = &PTR_LAB_149f3c330;
  param_1[0x35] = param_2;
  param_1[0x30] = &LAB_1429742be;
  param_1[0x3a] = 0;
  param_1[0x3c] = &PTR_LAB_149f3c350;
  param_1[0x3d] = param_2;
  param_1[0x38] = &LAB_142974316;
  param_1[0x42] = 0;
  param_1[0x44] = &PTR_LAB_149f3c370;
  param_1[0x45] = param_2;
  param_1[0x40] = &LAB_142974394;
  return;
}



// FUNCTION 146c3606a FUN_146c3606a body=695 status=ok
// SIG undefined FUN_146c3606a(void)

ulonglong FUN_146c3606a(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 unaff_RBX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = *(char *)(param_1 + 0xb0);
  if (cVar1 == '\x01') {
    if (0 < *(int *)(param_2 + 0x38)) {
      FUN_146c19cce(param_2);
    }
    uVar6 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    uVar8 = 0;
    if ((uVar6 != 0) &&
       (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar9 = 1;
      uVar4 = 1;
      if (1 < (int)uVar6) {
        uVar9 = uVar6;
      }
      do {
        uVar8 = uVar9;
        if (uVar9 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar7 = uVar4 & 0x1ff;
        uVar8 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
    if (uVar8 != uVar6) {
      do {
        puVar3 = &DAT_14c84635c;
        if (*(char *)(param_1 + 0xb0) == '\x01') {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar8 & 0x1ff) << 3) +
                   *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar8 >> 9) * 8));
        }
        local_68 = *puVar3;
        FUN_146c294c4(param_2,uVar8,&local_68,1);
        uVar9 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar6) {
          uVar9 = uVar6;
        }
        do {
          uVar4 = uVar9;
          if (uVar9 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar4 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        uVar8 = uVar4;
      } while (uVar8 != uVar6);
    }
    FUN_146c2cfb6(param_2 + 8);
    uVar6 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar8 = 0;
    if ((uVar6 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar9 = 1;
      uVar4 = 1;
      if (1 < (int)uVar6) {
        uVar9 = uVar6;
      }
      do {
        uVar8 = uVar9;
        if (uVar9 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar7 = uVar4 & 0x1ff;
        uVar8 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
    if (uVar8 != uVar6) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
        uStack_60 = CONCAT44(uStack_60._4_4_,
                             *(undefined4 *)(lVar2 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc));
        local_68 = *(undefined8 *)(lVar2 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
        FUN_146c01486(param_2,uVar8,&local_68,1);
        uVar9 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar6) {
          uVar9 = uVar6;
        }
        do {
          uVar4 = uVar9;
          if (uVar9 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar4 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        uVar8 = uVar4;
      } while (uVar8 != uVar6);
    }
    if (param_3 != '\0') {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      FUN_146c18b92(param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}



// FUNCTION 146c36322 FUN_146c36322 body=699 status=ok
// SIG undefined FUN_146c36322(void)

ulonglong FUN_146c36322(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 unaff_RBX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = *(char *)(param_1 + 0x70);
  if (cVar1 == '\x01') {
    if (0 < *(int *)(param_2 + 0x38)) {
      FUN_146c19dca(param_2);
    }
    uVar6 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    uVar8 = 0;
    if ((uVar6 != 0) &&
       (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar9 = 1;
      uVar4 = 1;
      if (1 < (int)uVar6) {
        uVar9 = uVar6;
      }
      do {
        uVar8 = uVar9;
        if (uVar9 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar7 = uVar4 & 0x1ff;
        uVar8 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
    if (uVar8 != uVar6) {
      do {
        local_68 = DAT_14c846370;
        uVar3 = DAT_14c846378;
        if (*(char *)(param_1 + 0x70) != '\0') {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar8 >> 9) * 8);
          local_68 = *(undefined8 *)(lVar2 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
          uVar3 = *(undefined4 *)(lVar2 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
        FUN_146c29a36(param_2,uVar8,&local_68);
        uVar9 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar6) {
          uVar9 = uVar6;
        }
        do {
          uVar4 = uVar9;
          if (uVar9 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar4 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        uVar8 = uVar4;
      } while (uVar8 != uVar6);
    }
    FUN_146c2cfb6(param_2 + 8);
    uVar6 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar8 = 0;
    if ((uVar6 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar9 = 1;
      uVar4 = 1;
      if (1 < (int)uVar6) {
        uVar9 = uVar6;
      }
      do {
        uVar8 = uVar9;
        if (uVar9 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar7 = uVar4 & 0x1ff;
        uVar8 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
    if (uVar8 != uVar6) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
        uStack_60 = CONCAT44(uStack_60._4_4_,
                             *(undefined4 *)(lVar2 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc));
        local_68 = *(undefined8 *)(lVar2 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
        FUN_146c01580(param_2,uVar8,&local_68,1);
        uVar9 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar6) {
          uVar9 = uVar6;
        }
        do {
          uVar4 = uVar9;
          if (uVar9 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar4 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        uVar8 = uVar4;
      } while (uVar8 != uVar6);
    }
    if (param_3 != '\0') {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      FUN_146c18f54(param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}



// FUNCTION 146c365de FUN_146c365de body=1010 status=ok
// SIG undefined FUN_146c365de(void)

undefined8 FUN_146c365de(longlong param_1,int param_2,longlong *param_3,char param_4)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong *unaff_RBP;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [40];
  undefined4 *local_d0;
  undefined4 local_c8;
  uint local_bc;
  uint *local_b8;
  undefined4 **local_b0;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = *(longlong *)(param_1 + 0x208);
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0xc0) == 0)) {
    uVar3 = 0;
  }
  else {
    iVar8 = *(int *)(*(longlong *)(lVar7 + 0xc0) + 0x20);
    lVar11 = (longlong)iVar8;
    lVar7 = *(longlong *)(lVar7 + 200);
    if (0 < lVar11) {
      lVar12 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar7 + 0x18) + lVar12 * 4) == param_2) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_3,iVar1);
          }
          *(int *)(*param_3 + (longlong)iVar1 * 4) = (int)lVar12;
        }
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
    }
    uVar3 = 1;
    if (param_4 != '\0') {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      if (0 < iVar8) {
        lVar12 = 0;
LAB_146c366c2:
        local_bc = *(uint *)(*(longlong *)(lVar7 + 0x18) + lVar12 * 4);
        if ((int)uStack_90 != local_64) {
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_60;
          }
          iVar8 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & local_bc) * 4);
          for (iVar1 = iVar8; iVar1 != -1;
              iVar1 = *(int *)((longlong)iVar1 * 0x20 + local_98 + 0x18)) {
            if (*(uint *)(local_98 + (longlong)iVar1 * 0x20) == local_bc) goto LAB_146c36782;
          }
        }
        local_d0 = (undefined4 *)0x0;
        local_c8 = 1;
        FUN_144a06ca8(&local_d0,1,0);
        *local_d0 = (int)lVar12;
        local_b8 = &local_bc;
        local_b0 = &local_d0;
        FUN_146c58b4c(&local_98,local_9c,&local_b8,0);
        if (local_d0 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_146c367c4;
      }
LAB_146c367d0:
      puVar4 = (uint *)FUN_14001cc68(0x10,0x10);
      puVar4[0] = 0;
      puVar4[1] = 0;
      lVar7 = param_3[1];
      local_b8 = puVar4;
      if ((longlong)(int)lVar7 != 0) {
        lVar11 = *param_3;
        lVar12 = 0;
        do {
          uVar10 = *(uint *)(lVar11 + lVar12);
          unaff_RBP = (longlong *)(ulonglong)uVar10;
          puVar5 = (uint *)FUN_14001cc68(0x10,0x10);
          puVar5[0] = 0;
          puVar5[1] = 0;
          puVar5[2] = uVar10;
          if (puVar5 != (uint *)0x0) {
            *(uint **)local_b8 = puVar5;
            local_b8 = puVar5;
          }
          lVar12 = lVar12 + 4;
        } while ((longlong)(int)lVar7 * 4 != lVar12);
      }
      puVar5 = puVar4;
      if (*(longlong *)puVar4 != 0) {
LAB_146c36848:
        puVar2 = *(uint **)puVar5;
        puVar4 = puVar5;
        if (puVar2 != (uint *)0x0) {
          unaff_RBP = (longlong *)(ulonglong)puVar2[2];
          puVar2[2] = 0;
          puVar4 = puVar2;
          if (puVar5 != (uint *)0x0) {
            FUN_1400020a8(puVar5);
          }
        }
        if ((int)uStack_90 != local_64) {
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_60;
          }
          uVar10 = (uint)unaff_RBP;
          iVar8 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & uVar10) * 4);
          for (iVar1 = iVar8; iVar1 != -1;
              iVar1 = *(int *)((longlong)iVar1 * 0x20 + local_98 + 0x18)) {
            if (*(uint *)(local_98 + (longlong)iVar1 * 0x20) == uVar10) goto LAB_146c368ce;
          }
        }
        goto LAB_146c36877;
      }
joined_r0x000146c36991:
      while (puVar4 != (uint *)0x0) {
        puVar5 = *(uint **)puVar4;
        FUN_1400020a8(puVar4);
        puVar4 = puVar5;
      }
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14083ed90(&local_98);
      uVar3 = 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
  while (iVar8 = *(int *)(lVar9 + 0x18), iVar8 != -1) {
LAB_146c36782:
    lVar9 = local_98 + (longlong)iVar8 * 0x20;
    if (*(uint *)(local_98 + (longlong)iVar8 * 0x20) == local_bc) goto LAB_146c3679d;
  }
  lVar9 = 0;
LAB_146c3679d:
  unaff_RBP = (longlong *)(lVar9 + 8);
  iVar8 = *(int *)(lVar9 + 0x10);
  *(uint *)(lVar9 + 0x10) = iVar8 + 1U;
  if (*(uint *)(lVar9 + 0x14) < iVar8 + 1U) {
    FUN_1446f48e2(unaff_RBP,iVar8);
  }
  *(int *)(*unaff_RBP + (longlong)iVar8 * 4) = (int)lVar12;
LAB_146c367c4:
  lVar12 = lVar12 + 1;
  if (lVar12 == lVar11) goto LAB_146c367d0;
  goto LAB_146c366c2;
  while (iVar8 = *(int *)(lVar7 + 0x18), iVar8 != -1) {
LAB_146c368ce:
    lVar7 = local_98 + (longlong)iVar8 * 0x20;
    if (*(uint *)(local_98 + (longlong)iVar8 * 0x20) == uVar10) goto LAB_146c368e8;
  }
  lVar7 = 0;
LAB_146c368e8:
  iVar8 = *(int *)(lVar7 + 0x10);
  if ((longlong)iVar8 != 0) {
    lVar7 = *(longlong *)(lVar7 + 8);
    lVar11 = 0;
    do {
      uVar10 = *(uint *)(lVar7 + lVar11);
      puVar5 = (uint *)FUN_14001cc68(0x10,0x10);
      puVar5[0] = 0;
      puVar5[1] = 0;
      puVar5[2] = uVar10;
      if (puVar5 != (uint *)0x0) {
        *(uint **)local_b8 = puVar5;
        local_b8 = puVar5;
      }
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_3,iVar1);
      }
      *(uint *)(*param_3 + (longlong)iVar1 * 4) = uVar10;
      lVar11 = lVar11 + 4;
    } while ((longlong)iVar8 * 4 != lVar11);
  }
LAB_146c36877:
  puVar5 = puVar4;
  if (*(longlong *)puVar4 == 0) goto joined_r0x000146c36991;
  goto LAB_146c36848;
}



// FUNCTION 146c369d2 FUN_146c369d2 body=95 status=ok
// SIG undefined FUN_146c369d2(void)

void FUN_146c369d2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x208);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  uVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1);
  FUN_146c36a32(param_1 + 0x2a0,uVar2);
  uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1);
  FUN_146c36a32(param_1 + 0x2b0,uVar2);
  return;
}



// FUNCTION 146c36a32 FUN_146c36a32 body=121 status=ok
// SIG undefined FUN_146c36a32(void)

void FUN_146c36a32(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c58d7e(param_1,iVar1);
    }
    FUN_146c58d1a((longlong)iVar1 * 0xa8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146c58e12(param_1,param_2,iVar1 - param_2);
    FUN_146c58e74(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c36aac FUN_146c36aac body=867 status=ok
// SIG undefined FUN_146c36aac(void)

void FUN_146c36aac(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 0x19) {
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        uVar8 = *(uint *)(*param_2 + uVar9 * 4);
        if ((-1 < (int)uVar8) &&
           ((int)uVar8 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
          uVar7 = (ulonglong)(uVar8 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar8 >> 9) * 8) +
                                 uVar7 * 2) - 1U) < 0xfffe) {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
            uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(lVar3 + 8 + uVar7 * 0xc));
            local_98 = *(longlong *)(lVar3 + uVar7 * 0xc);
            FUN_1449e3bb0(param_3,&local_98);
            FUN_1449e3bb0(param_3,(longlong)&local_98 + 4);
            FUN_1449e3bb0(param_3,&uStack_90);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar9);
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_1400bac10(&local_98,uVar1 * 3);
    uVar8 = (uVar1 * 3 | 1) + 0xe;
    iVar5 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 1 << ((byte)iVar5 & 0x1f);
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144a56d22();
    }
    uVar9 = 0;
    do {
      uVar8 = *(uint *)(*param_2 + uVar9 * 4);
      if ((-1 < (int)uVar8) &&
         ((int)uVar8 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
        uVar7 = (ulonglong)(uVar8 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar8 >> 9) * 8) +
                               uVar7 * 2) - 1U) < 0xfffe) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
          local_d8 = *(undefined4 *)(lVar3 + 8 + uVar7 * 0xc);
          local_e0 = *(longlong **)(lVar3 + uVar7 * 0xc);
          FUN_1447cbafe(&local_98,&local_b8,&local_e0,0);
          FUN_1447cbafe(&local_98,&local_b8,(longlong)&local_e0 + 4);
          FUN_1447cbafe(&local_98,&local_b8,&local_d8);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
    iVar5 = (int)uStack_90 - local_64;
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
      FUN_14481578e(param_3);
    }
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    uStack_b0 = local_88;
    if (local_70 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar5 = local_70;
    }
    uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
    local_c8 = local_a8;
    uVar4 = local_c8;
    local_d8 = (undefined4)local_b8;
    uStack_d4 = local_b8._4_4_;
    uStack_d0 = (undefined4)uStack_b0;
    uStack_cc = uStack_b0._4_4_;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = &local_98;
    if ((local_c8._4_4_ != iVar5) || (uStack_b0 != local_88)) {
      iVar6 = local_c8._4_4_;
      local_c8 = uVar4;
      do {
        uVar2 = *(undefined4 *)(*local_e0 + (longlong)iVar6 * 0xc);
        iVar6 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
          FUN_1446f48e2(param_3,iVar6);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar6 * 4) = uVar2;
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~uStack_d4);
        FUN_1449c0562(&local_d8);
        iVar6 = local_c8._4_4_;
        uVar4 = local_c8;
      } while (local_e0 != &local_98 ||
               ((undefined1 *)CONCAT44(uStack_cc,uStack_d0) != local_88 || local_c8._4_4_ != iVar5))
      ;
    }
    local_c8 = uVar4;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c36e11 FUN_146c36e11 body=282 status=ok
// SIG undefined FUN_146c36e11(void)

void FUN_146c36e11(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  code *local_60;
  undefined8 **local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (int)param_2[1];
  uVar2 = iVar4 * 6;
  if (4 < iVar4) {
    uVar2 = iVar4 * 4;
  }
  local_50 = param_1;
  if ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_1400bac10(param_3,uVar2);
    iVar4 = 0x1f;
    if (uVar2 + 0xf != 0) {
      for (; uVar2 + 0xf >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar4 = 1 << ((byte)iVar4 & 0x1f);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    if ((*(int *)(param_3 + 0x48) == 0) || (*(int *)(param_3 + 0x48) < iVar4)) {
      *(int *)(param_3 + 0x48) = iVar4;
      FUN_144a56d22(param_3);
    }
  }
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      local_60 = FUN_142974410;
      local_70 = &local_50;
      local_68 = param_3;
      local_58 = &local_70;
      FUN_146bd7d34(local_50 + 0xb8,*(undefined4 *)(lVar1 + lVar5),&local_60);
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c36f2d FUN_146c36f2d body=252 status=ok
// SIG undefined FUN_146c36f2d(void)

undefined8 * FUN_146c36f2d(undefined8 *param_1,longlong param_2,ulonglong param_3,int param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [28];
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = (uint)param_3;
  if ((-1 < (int)uVar5) &&
     ((int)uVar5 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
    uVar2 = param_3 >> 9 & 0x7fffff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar2 * 8) +
                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar2 = (ulonglong)(uint)((int)uVar2 << 3);
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x130) + uVar2);
      lVar4 = (ulonglong)((uVar5 & 0x1ff) << 2) * 3;
      local_10 = *(undefined4 *)(lVar3 + 8 + lVar4);
      local_18 = *(undefined8 *)(lVar3 + lVar4);
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar2);
      local_20 = *(undefined4 *)(lVar3 + 8 + lVar4);
      local_28 = *(undefined8 *)(lVar3 + lVar4);
      lVar3 = -1;
      do {
        if (*(int *)((longlong)&local_18 + lVar3 * 4 + 4) == param_4) {
          lVar4 = 2;
          if (lVar3 != -1) {
            lVar4 = lVar3;
          }
          uVar1 = *(undefined4 *)((longlong)&local_28 + lVar3 * 4 + 4);
          *(undefined4 *)param_1 = *(undefined4 *)((longlong)&local_28 + lVar4 * 4);
          *(undefined4 *)((longlong)param_1 + 4) = uVar1;
          goto LAB_146c36fec;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 2);
    }
  }
  *param_1 = 0xffffffffffffffff;
LAB_146c36fec:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_48);
}



// FUNCTION 146c3702a FUN_146c3702a body=267 status=ok
// SIG undefined FUN_146c3702a(void)

int FUN_146c3702a(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  iVar2 = -1;
  uVar3 = (uint)param_2;
  if (-1 < (int)uVar3) {
    uVar7 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    if ((((int)uVar3 < (int)uVar7) && (uVar5 = (uint)param_3, uVar5 < uVar7)) && (-1 < (int)uVar5))
    {
      uVar8 = param_2 >> 9 & 0x7fffff;
      uVar4 = (ulonglong)(uVar3 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar8 * 8) + uVar4 * 2)
                  - 1U) < 0xfffe) {
        uVar10 = param_3 >> 9 & 0x7fffff;
        uVar6 = (ulonglong)(uVar5 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar10 * 8) +
                               uVar6 * 2) - 1U) < 0xfffe) {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar8 * 8);
          local_10 = *(undefined4 *)(lVar1 + 8 + uVar4 * 0xc);
          local_18 = *(undefined8 *)(lVar1 + uVar4 * 0xc);
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar10 * 8);
          lVar9 = 0;
          do {
            iVar2 = *(int *)((longlong)&local_18 + lVar9 * 4);
            if (((*(int *)(lVar1 + uVar6 * 0xc) == iVar2) ||
                (*(int *)(lVar1 + 4 + uVar6 * 0xc) == iVar2)) ||
               (*(int *)(lVar1 + 8 + uVar6 * 0xc) == iVar2)) goto LAB_146c3711a;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
          iVar2 = -1;
        }
      }
    }
  }
LAB_146c3711a:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c37136 FUN_146c37136 body=751 status=ok
// SIG undefined FUN_146c37136(void)

bool FUN_146c37136(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_a8 [40];
  uint local_80;
  uint local_7c;
  longlong local_78;
  longlong *local_70;
  uint local_64 [3];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
    bVar6 = false;
    if (((int)param_3 < 0) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8
                                      ) + (ulonglong)(param_2 & 0x1ff) * 2) - 1U)))
    goto LAB_146c37210;
    if ((int)param_3 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4)) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(param_3 >> 9) * 8) +
                             (ulonglong)(param_3 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_3 >> 9) * 8);
        uVar8 = (ulonglong)((param_3 & 0x1ff) << 4);
        local_7c = *(uint *)(lVar10 + 8 + uVar8);
        local_80 = *(uint *)(lVar10 + 0xc + uVar8);
        if (*(ulonglong *)(lVar10 + 8 + uVar8) < 0xffffffff00000000) {
          puVar12 = &local_80;
          puVar9 = &local_7c;
          local_70 = param_4;
          bVar6 = true;
LAB_146c3724a:
          plVar15 = param_5;
          if (bVar6) {
            plVar15 = param_4;
          }
          uVar1 = *puVar9;
          iVar2 = (int)plVar15[1];
          *(uint *)(plVar15 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar15 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(plVar15,iVar2);
            param_4 = local_70;
          }
          *(uint *)(*plVar15 + (longlong)iVar2 * 4) = uVar1;
          uVar3 = *puVar12;
          uVar7 = uVar3;
LAB_146c3728b:
          uVar14 = uVar1;
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar14 >> 9) * 8);
          local_50 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
          local_58 = *(undefined8 *)(lVar10 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
          local_64[0] = 0xffffffff;
          local_64[1] = 0xffffffff;
          local_64[2] = 0xffffffff;
          lVar10 = *(longlong *)(param_1 + 0x1c0);
          lVar11 = 0;
          do {
            uVar1 = *(uint *)((longlong)&local_58 + lVar11 * 4);
            uVar4 = *(undefined8 *)
                     (*(longlong *)(lVar10 + (ulonglong)(uVar1 >> 9) * 8) + 8 +
                     (ulonglong)((uVar1 & 0x1ff) << 4));
            uVar13 = (uint)uVar4;
            uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
            if (uVar14 != uVar13) {
              uVar1 = uVar13;
            }
            local_64[lVar11] = uVar1;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 3);
          lVar10 = 0;
          do {
            uVar1 = local_64[lVar10];
            if ((-1 < (int)uVar1 && uVar1 != uVar7) &&
               ((int)uVar1 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
              uVar8 = (ulonglong)(uVar1 & 0x1ff);
              if ((ushort)(*(short *)(*(longlong *)
                                       (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar1 >> 9) * 8
                                       ) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
                lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar1 >> 9) * 8)
                ;
                if (((*(uint *)(lVar11 + uVar8 * 0xc) == param_2) ||
                    (*(uint *)(lVar11 + 4 + uVar8 * 0xc) == param_2)) ||
                   (*(uint *)(lVar11 + 8 + uVar8 * 0xc) == param_2)) goto LAB_146c373b9;
              }
            }
            lVar10 = lVar10 + 1;
            if (lVar10 == 3) goto LAB_146c3739e;
          } while( true );
        }
      }
    }
  }
LAB_146c3720e:
  bVar6 = false;
LAB_146c37210:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146c373b9:
  if (*(uint *)((longlong)&local_58 + lVar10 * 4) == param_3) goto LAB_146c3739e;
  if (uVar1 == uVar3) goto LAB_146c3720e;
  lVar10 = (longlong)(int)plVar15[1];
  uVar7 = (int)plVar15[1] + 1;
  *(uint *)(plVar15 + 1) = uVar7;
  if (*(uint *)((longlong)plVar15 + 0xc) < uVar7) {
    local_78 = lVar10;
    FUN_1446f48e2(plVar15,lVar10);
    lVar10 = local_78;
    param_4 = local_70;
  }
  *(uint *)(*plVar15 + lVar10 * 4) = uVar1;
  uVar7 = uVar14;
  goto LAB_146c3728b;
LAB_146c3739e:
  puVar9 = &local_80;
  puVar12 = &local_7c;
  bVar5 = !bVar6;
  bVar6 = false;
  if (bVar5) goto LAB_146c37407;
  goto LAB_146c3724a;
LAB_146c37407:
  if (0 < (int)param_4[1]) {
    bVar6 = 0 < (int)param_5[1];
    goto LAB_146c37210;
  }
  goto LAB_146c3720e;
}



// FUNCTION 146c37426 FUN_146c37426 body=804 status=ok
// SIG undefined FUN_146c37426(void)

bool FUN_146c37426(longlong param_1,uint param_2,uint param_3,ulonglong param_4,longlong *param_5,
                  longlong *param_6)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_a8 [44];
  uint local_7c;
  uint local_78;
  uint local_74;
  longlong local_70;
  uint local_64 [3];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
    bVar4 = false;
    if (((int)param_3 < 0) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8
                                      ) + (ulonglong)(param_2 & 0x1ff) * 2) - 1U)))
    goto LAB_146c37723;
    uVar8 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
    if ((int)param_3 < (int)uVar8) {
      uVar13 = (uint)param_4;
      bVar4 = false;
      if ((uVar8 <= uVar13) || (bVar4 = false, (int)uVar13 < 0)) goto LAB_146c37723;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x1d8) +
                                        (ulonglong)(param_3 >> 9) * 8) +
                                      (ulonglong)(param_3 & 0x1ff) * 2) - 1U)) goto LAB_146c37723;
      uVar6 = param_4 >> 9 & 0x7fffff;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar6 * 8) +
                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar6 * 8);
        uVar6 = (ulonglong)((uVar13 & 0x1ff) << 4);
        local_78 = *(uint *)(lVar9 + 8 + uVar6);
        local_7c = *(uint *)(lVar9 + 0xc + uVar6);
        if (-1 < *(longlong *)(lVar9 + 8 + uVar6)) {
          puVar12 = &local_7c;
          puVar7 = &local_78;
          local_74 = uVar13;
          bVar4 = true;
LAB_146c3754e:
          plVar14 = param_6;
          if (bVar4) {
            plVar14 = param_5;
          }
          uVar8 = *puVar7;
          iVar1 = (int)plVar14[1];
          *(uint *)(plVar14 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)plVar14 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(plVar14,iVar1);
          }
          *(uint *)(*plVar14 + (longlong)iVar1 * 4) = uVar8;
          uVar13 = *puVar12;
          uVar5 = uVar13;
LAB_146c37590:
          uVar11 = uVar8;
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar11 >> 9) * 8);
          local_50 = *(undefined4 *)(lVar9 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
          local_58 = *(undefined8 *)(lVar9 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
          local_64[0] = 0xffffffff;
          local_64[1] = 0xffffffff;
          local_64[2] = 0xffffffff;
          lVar9 = *(longlong *)(param_1 + 0x1c0);
          lVar10 = 0;
          do {
            uVar8 = *(uint *)((longlong)&local_58 + lVar10 * 4);
            uVar6 = *(ulonglong *)
                     (*(longlong *)(lVar9 + (ulonglong)(uVar8 >> 9) * 8) + 8 +
                     (ulonglong)((uVar8 & 0x1ff) << 4));
            uVar2 = uVar6 >> 0x20;
            if (uVar11 != (uint)uVar6) {
              uVar2 = uVar6;
            }
            local_64[lVar10] = (uint)uVar2;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 3);
          lVar9 = 0;
          do {
            uVar8 = local_64[lVar9];
            if ((-1 < (int)uVar8 && uVar8 != uVar5) &&
               ((int)uVar8 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
              uVar6 = (ulonglong)(uVar8 & 0x1ff);
              if ((ushort)(*(short *)(*(longlong *)
                                       (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar8 >> 9) * 8
                                       ) + (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe) {
                lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar8 >> 9) * 8)
                ;
                if (((*(uint *)(lVar10 + uVar6 * 0xc) == param_2) ||
                    (*(uint *)(lVar10 + 4 + uVar6 * 0xc) == param_2)) ||
                   (*(uint *)(lVar10 + 8 + uVar6 * 0xc) == param_2)) goto LAB_146c376b8;
              }
            }
            lVar9 = lVar9 + 1;
            if (lVar9 == 3) goto LAB_146c3769c;
          } while( true );
        }
      }
    }
  }
LAB_146c37721:
  bVar4 = false;
LAB_146c37723:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146c376b8:
  uVar5 = *(uint *)((longlong)&local_58 + lVar9 * 4);
  if ((uVar5 == param_3) || (uVar5 == local_74)) goto LAB_146c3769c;
  if (uVar8 == uVar13) goto LAB_146c37721;
  lVar9 = (longlong)(int)plVar14[1];
  uVar5 = (int)plVar14[1] + 1;
  *(uint *)(plVar14 + 1) = uVar5;
  if (*(uint *)((longlong)plVar14 + 0xc) < uVar5) {
    local_70 = lVar9;
    FUN_1446f48e2(plVar14,lVar9);
    lVar9 = local_70;
  }
  *(uint *)(*plVar14 + lVar9 * 4) = uVar8;
  uVar5 = uVar11;
  goto LAB_146c37590;
LAB_146c3769c:
  puVar7 = &local_7c;
  puVar12 = &local_78;
  bVar3 = !bVar4;
  bVar4 = false;
  if (bVar3) goto LAB_146c37702;
  goto LAB_146c3754e;
LAB_146c37702:
  if (0 < (int)param_5[1]) {
    bVar4 = 0 < (int)param_6[1];
    goto LAB_146c37723;
  }
  goto LAB_146c37721;
}



// FUNCTION 146c3774c FUN_146c3774c body=376 status=ok
// SIG undefined FUN_146c3774c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146c3774c(longlong *param_1,longlong param_2,char param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar11;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  ulonglong uVar10;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 0x70) == '\0') {
    local_28 = DAT_14c846384;
    local_30 = _DAT_14c84637c;
    FUN_146c01e94(param_2);
  }
  if (param_3 == '\0') {
    fVar11 = 1.0;
  }
  else {
    fVar11 = -1.0;
  }
  uVar5 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  if ((int)*(uint *)(param_1 + 2) < (int)uVar5) {
    uVar5 = *(uint *)(param_1 + 2);
  }
  if (0 < (int)uVar5) {
    lVar6 = 0x10;
    uVar7 = 0;
    do {
      lVar3 = *param_1;
      if ((longlong)uVar7 < (longlong)(*(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
        uVar8 = uVar7 >> 9 & 0x7fffff;
        uVar9 = (uint)uVar7 & 0x1ff;
        uVar10 = (ulonglong)uVar9;
        if ((((1 < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar8 * 8) +
                                      (ulonglong)uVar9 * 2) + 1U)) &&
             ((longlong)uVar7 <
              (longlong)(*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)))) &&
            ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + uVar8 * 8) +
                                uVar10 * 2) - 1U) < 0xfffe)) &&
           (*(char *)(param_2 + 0x70) == '\x01')) {
          lVar3 = param_1[1];
          dVar1 = *(double *)(lVar3 + -8 + lVar6);
          dVar2 = *(double *)(lVar3 + lVar6);
          lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x60) + uVar8 * 8);
          *(float *)(lVar4 + uVar10 * 0xc) = (float)*(double *)(lVar3 + -0x10 + lVar6) * fVar11;
          *(float *)(lVar4 + 4 + uVar10 * 0xc) = (float)dVar1 * fVar11;
          *(float *)(lVar4 + 8 + uVar10 * 0xc) = (float)dVar2 * fVar11;
        }
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar5 != uVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c378c6 FUN_146c378c6 body=392 status=ok
// SIG undefined FUN_146c378c6(void)

void FUN_146c378c6(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  undefined1 auStack_48 [36];
  float local_24 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    fVar8 = 1.0;
  }
  else {
    fVar8 = -1.0;
  }
  uVar1 = *(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc);
  uVar3 = 0;
  if ((uVar1 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x10) - 1U))) {
    uVar7 = 1;
    uVar2 = 1;
    if (1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    do {
      uVar4 = uVar7;
      uVar3 = uVar2;
      if (uVar2 == uVar4) break;
      uVar7 = uVar4 + 1;
      uVar3 = uVar4;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x10))[uVar4 >> 9] +
                                         (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
  }
  do {
    if (uVar3 == uVar1) {
      if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar6 = *(longlong *)(param_1 + 8);
    lVar5 = (longlong)(int)uVar3;
    local_24[0] = (float)*(double *)(lVar6 + lVar5 * 0x18) * fVar8;
    local_24[1] = (float)*(double *)(lVar6 + 8 + lVar5 * 0x18) * fVar8;
    local_24[2] = (float)*(double *)(lVar6 + 0x10 + lVar5 * 0x18) * fVar8;
    lVar6 = 0;
    do {
      uVar7 = uVar3 * 3 + (int)lVar6;
      *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + (ulonglong)(uVar7 >> 9) * 8) +
                (ulonglong)(uVar7 & 0x1ff) * 4) = local_24[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    uVar7 = uVar3 + 1;
    if ((int)(uVar3 + 1) < (int)uVar1) {
      uVar7 = uVar1;
    }
    uVar2 = uVar3;
    do {
      uVar3 = uVar7;
      if (uVar7 - 1 == uVar2) break;
      uVar3 = uVar2 + 1;
      uVar2 = uVar3;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x10) +
                                           (ulonglong)(uVar3 >> 9) * 8) +
                                         (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 146c37e28 FUN_146c37e28 body=1161 status=ok
// SIG undefined FUN_146c37e28(void)

void FUN_146c37e28(longlong *param_1,char param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  double local_c0;
  undefined1 local_b8 [24];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == '\x01' && param_3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_e8);
  }
  uVar15 = *(int *)(*param_1 + 0x20) * 0x200 + *(int *)(*param_1 + 0x24);
  plVar1 = param_1 + 1;
  if ((int)param_1[2] < (int)uVar15) {
    FUN_140b463b8(plVar1,uVar15,1);
  }
  if (0 < (int)uVar15) {
    lVar10 = 0;
    do {
      uVar6 = DAT_14c8464e8;
      uVar5 = DAT_14c8464e0;
      lVar3 = *plVar1;
      *(undefined8 *)(lVar3 + 0x10 + lVar10) = DAT_14c8464f0;
      puVar2 = (undefined8 *)(lVar3 + lVar10);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      lVar10 = lVar10 + 0x18;
    } while ((ulonglong)uVar15 * 0x18 != lVar10);
  }
  lVar10 = *param_1;
  uVar16 = *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144);
  uVar15 = 0;
  if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x148) - 1U))) {
    uVar11 = 1;
    uVar8 = 1;
    if (1 < (int)uVar16) {
      uVar8 = uVar16;
    }
    do {
      uVar9 = (uint)uVar11;
      uVar15 = uVar8;
      if (uVar8 == uVar9) break;
      uVar4 = uVar11 >> 9;
      uVar11 = (ulonglong)(uVar9 + 1);
      uVar15 = uVar9;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x148))[uVar4] +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  }
  if (uVar15 != uVar16) {
    do {
      local_c8 = local_b8;
      FUN_146c1477c(*param_1,uVar15,&local_a0,&local_c0);
      dVar19 = local_c0;
      dVar17 = DAT_14c846520;
      dVar18 = DAT_14c846518;
      dVar20 = DAT_14c846510;
      if (param_3 != '\0') {
        FUN_146c1544a(*param_1,&local_88,uVar15);
        dVar17 = local_78;
        dVar18 = local_80;
        dVar20 = local_88;
      }
      if (param_2 != '\0') {
        dVar20 = dVar20 * dVar19;
        dVar18 = dVar18 * dVar19;
        dVar17 = dVar17 * dVar19;
      }
      lVar3 = param_1[1];
      lVar7 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar15 >> 9) * 8);
      uVar11 = (ulonglong)(uVar15 & 0x1ff);
      lVar13 = (longlong)*(int *)(lVar7 + uVar11 * 0xc);
      lVar14 = (longlong)*(int *)(lVar7 + 4 + uVar11 * 0xc);
      lVar7 = (longlong)*(int *)(lVar7 + 8 + uVar11 * 0xc);
      *(double *)(lVar3 + lVar13 * 0x18) = dVar20 * local_a0 + *(double *)(lVar3 + lVar13 * 0x18);
      *(double *)(lVar3 + 8 + lVar13 * 0x18) =
           dVar20 * local_98 + *(double *)(lVar3 + 8 + lVar13 * 0x18);
      *(double *)(lVar3 + 0x10 + lVar13 * 0x18) =
           dVar20 * local_90 + *(double *)(lVar3 + 0x10 + lVar13 * 0x18);
      lVar3 = param_1[1];
      *(double *)(lVar3 + lVar14 * 0x18) = dVar18 * local_a0 + *(double *)(lVar3 + lVar14 * 0x18);
      *(double *)(lVar3 + 8 + lVar14 * 0x18) =
           dVar18 * local_98 + *(double *)(lVar3 + 8 + lVar14 * 0x18);
      *(double *)(lVar3 + 0x10 + lVar14 * 0x18) =
           dVar18 * local_90 + *(double *)(lVar3 + 0x10 + lVar14 * 0x18);
      lVar3 = param_1[1];
      *(double *)(lVar3 + lVar7 * 0x18) = dVar17 * local_a0 + *(double *)(lVar3 + lVar7 * 0x18);
      *(double *)(lVar3 + 8 + lVar7 * 0x18) =
           local_98 * dVar17 + *(double *)(lVar3 + 8 + lVar7 * 0x18);
      *(double *)(lVar3 + 0x10 + lVar7 * 0x18) =
           local_90 * dVar17 + *(double *)(lVar3 + 0x10 + lVar7 * 0x18);
      uVar8 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar16) {
        uVar8 = uVar16;
      }
      do {
        uVar9 = uVar8;
        if (uVar8 - 1 == uVar15) break;
        uVar15 = uVar15 + 1;
        uVar9 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar10 + 0x148) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      uVar15 = uVar9;
    } while (uVar15 != uVar16);
    lVar10 = *param_1;
  }
  uVar16 = *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24);
  uVar15 = 0;
  if ((uVar16 != 0) &&
     (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x28) - 1U))) {
    uVar8 = 1;
    uVar9 = 1;
    if (1 < (int)uVar16) {
      uVar8 = uVar16;
    }
    do {
      uVar12 = uVar9;
      uVar15 = uVar8;
      if (uVar8 == uVar12) break;
      uVar9 = uVar12 + 1;
      uVar15 = uVar12;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x28))[uVar12 >> 9] +
                                         (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
  }
  do {
    uVar8 = uVar15;
    if (uVar8 == uVar16) {
      if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar3 = *plVar1;
    lVar7 = (longlong)(int)uVar8;
    dVar19 = *(double *)(lVar3 + lVar7 * 0x18);
    dVar17 = *(double *)(lVar3 + 8 + lVar7 * 0x18);
    dVar18 = *(double *)(lVar3 + 0x10 + lVar7 * 0x18);
    dVar21 = SQRT(dVar18 * dVar18 + dVar19 * dVar19 + dVar17 * dVar17);
    dVar20 = 1.0 / dVar21;
    if (0.0 < dVar21) {
      dVar19 = dVar19 * dVar20;
      dVar17 = dVar17 * dVar20;
    }
    else {
      dVar19 = 0.0;
      dVar17 = 0.0;
    }
    *(double *)(lVar3 + lVar7 * 0x18) = dVar19;
    *(double *)(lVar3 + 8 + lVar7 * 0x18) = dVar17;
    *(ulonglong *)(lVar3 + 0x10 + lVar7 * 0x18) =
         -(ulonglong)(0.0 < dVar21) & (ulonglong)(dVar18 * dVar20);
    uVar9 = uVar8 + 1;
    if ((int)(uVar8 + 1) < (int)uVar16) {
      uVar9 = uVar16;
    }
    do {
      uVar15 = uVar9;
      if (uVar9 - 1 == uVar8) break;
      uVar8 = uVar8 + 1;
      uVar15 = uVar8;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar10 + 0x28) +
                                           (ulonglong)(uVar8 >> 9) * 8) +
                                         (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 146c382de FUN_146c382de body=121 status=ok
// SIG undefined FUN_146c382de(void)

double * FUN_146c382de(double *param_1,undefined8 param_2,undefined8 param_3,double param_4,
                      char param_5,char param_6)

{
  double dVar1;
  
  param_1[2] = DAT_14c846520;
  dVar1 = DAT_14c846518;
  *param_1 = DAT_14c846510;
  param_1[1] = dVar1;
  if (param_6 != '\0') {
    FUN_146c1544a(param_2,param_1);
  }
  if (param_5 != '\0') {
    *param_1 = *param_1 * param_4;
    param_1[1] = param_1[1] * param_4;
    param_1[2] = param_4 * param_1[2];
  }
  return param_1;
}



// FUNCTION 146c38358 FUN_146c38358 body=163 status=ok
// SIG undefined FUN_146c38358(void)

void FUN_146c38358(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  longlong *local_40;
  code *local_38;
  longlong **local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  if ((int)param_1[2] < iVar1) {
    FUN_140b463b8(param_1 + 1,iVar1,1);
  }
  local_30 = &local_40;
  local_48 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_38 = FUN_1429744a4;
  local_50 = 0;
  local_40 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c383fc FUN_146c383fc body=1146 status=ok
// SIG undefined FUN_146c383fc(void)

void FUN_146c383fc(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  char local_c5;
  int local_c4 [3];
  double local_b8 [4];
  double local_98;
  undefined1 local_90 [24];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c5 = param_4;
  if (param_3 == '\x01' && param_4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
  }
  uVar17 = *(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc);
  plVar1 = param_1 + 1;
  if ((int)param_1[2] < (int)uVar17) {
    FUN_140b463b8(plVar1,uVar17,1);
  }
  if (0 < (int)uVar17) {
    lVar10 = 0;
    do {
      uVar8 = DAT_14c8464e8;
      uVar7 = DAT_14c8464e0;
      lVar15 = *plVar1;
      *(undefined8 *)(lVar15 + 0x10 + lVar10) = DAT_14c8464f0;
      puVar2 = (undefined8 *)(lVar15 + lVar10);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      lVar10 = lVar10 + 0x18;
    } while ((ulonglong)uVar17 * 0x18 != lVar10);
  }
  lVar10 = *param_1;
  uVar16 = *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144);
  uVar17 = 0;
  if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x148) - 1U))) {
    uVar12 = 1;
    uVar9 = 1;
    if (1 < (int)uVar16) {
      uVar9 = uVar16;
    }
    do {
      uVar13 = (uint)uVar12;
      uVar17 = uVar9;
      if (uVar9 == uVar13) break;
      uVar6 = uVar12 >> 9;
      uVar12 = (ulonglong)(uVar13 + 1);
      uVar17 = uVar13;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x148))[uVar6] +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
  }
joined_r0x000146c384da:
  uVar9 = uVar17;
  if (uVar9 != uVar16) {
    local_d8 = local_90;
    FUN_146c1477c(*param_1,uVar9,&local_78,&local_98);
    dVar18 = local_98;
    local_b8[0] = DAT_14c846510;
    local_b8[1] = DAT_14c846518;
    local_b8[2] = DAT_14c846520;
    if (local_c5 != '\0') {
      FUN_146c1544a(*param_1,local_b8,uVar9);
    }
    if (param_3 != '\0') {
      local_b8[0] = local_b8[0] * dVar18;
      local_b8[1] = local_b8[1] * dVar18;
      local_b8[2] = dVar18 * local_b8[2];
    }
    uVar17 = uVar9 * 3 + 2;
    lVar15 = *(longlong *)(param_2 + 0x78);
    uVar13 = uVar9 * 3 + 1;
    local_c4[0] = *(int *)(*(longlong *)(lVar15 + (ulonglong)(uVar9 * 3 >> 9) * 8) +
                          (ulonglong)(uVar9 * 3 & 0x1ff) * 4);
    local_c4[1] = *(undefined4 *)
                   (*(longlong *)(lVar15 + (ulonglong)(uVar13 >> 9) * 8) +
                   (ulonglong)(uVar13 & 0x1ff) * 4);
    local_c4[2] = *(undefined4 *)
                   (*(longlong *)(lVar15 + (ulonglong)(uVar17 >> 9) * 8) +
                   (ulonglong)(uVar17 & 0x1ff) * 4);
    lVar15 = 0;
    do {
      lVar11 = (longlong)local_c4[lVar15];
      if (lVar11 != -1) {
        dVar18 = local_b8[lVar15];
        lVar4 = *plVar1;
        *(double *)(lVar4 + lVar11 * 0x18) = dVar18 * local_78 + *(double *)(lVar4 + lVar11 * 0x18);
        *(double *)(lVar4 + 8 + lVar11 * 0x18) =
             local_70 * dVar18 + *(double *)(lVar4 + 8 + lVar11 * 0x18);
        *(double *)(lVar4 + 0x10 + lVar11 * 0x18) =
             local_68 * dVar18 + *(double *)(lVar4 + 0x10 + lVar11 * 0x18);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 3);
    uVar13 = uVar9 + 1;
    if ((int)(uVar9 + 1) < (int)uVar16) {
      uVar13 = uVar16;
    }
    do {
      uVar17 = uVar13;
      if (uVar13 - 1 == uVar9) break;
      uVar9 = uVar9 + 1;
      uVar17 = uVar9;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar10 + 0x148) +
                                           (ulonglong)(uVar9 >> 9) * 8) +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
    goto joined_r0x000146c384da;
  }
  uVar16 = *(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc);
  uVar17 = 0;
  if ((uVar16 != 0) &&
     (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x10) - 1U))) {
    uVar9 = 1;
    uVar13 = 1;
    if (1 < (int)uVar16) {
      uVar9 = uVar16;
    }
    do {
      uVar14 = uVar13;
      uVar17 = uVar9;
      if (uVar9 == uVar14) break;
      uVar13 = uVar14 + 1;
      uVar17 = uVar14;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x10))[uVar14 >> 9] +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
  }
  do {
    uVar9 = uVar17;
    if (uVar9 == uVar16) {
      if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar10 = *plVar1;
    lVar15 = (longlong)(int)uVar9;
    dVar18 = *(double *)(lVar10 + lVar15 * 0x18);
    dVar19 = *(double *)(lVar10 + 8 + lVar15 * 0x18);
    dVar3 = *(double *)(lVar10 + 0x10 + lVar15 * 0x18);
    dVar20 = SQRT(dVar3 * dVar3 + dVar18 * dVar18 + dVar19 * dVar19);
    dVar5 = 1.0 / dVar20;
    if (0.0 < dVar20) {
      dVar18 = dVar18 * dVar5;
      dVar19 = dVar19 * dVar5;
    }
    else {
      dVar18 = 0.0;
      dVar19 = 0.0;
    }
    *(double *)(lVar10 + lVar15 * 0x18) = dVar18;
    *(double *)(lVar10 + 8 + lVar15 * 0x18) = dVar19;
    *(ulonglong *)(lVar10 + 0x10 + lVar15 * 0x18) =
         -(ulonglong)(0.0 < dVar20) & (ulonglong)(dVar3 * dVar5);
    uVar13 = uVar9 + 1;
    if ((int)(uVar9 + 1) < (int)uVar16) {
      uVar13 = uVar16;
    }
    do {
      uVar17 = uVar13;
      if (uVar13 - 1 == uVar9) break;
      uVar9 = uVar9 + 1;
      uVar17 = uVar9;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x10) +
                                           (ulonglong)(uVar9 >> 9) * 8) +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 146c38c5e FUN_146c38c5e body=113 status=ok
// SIG undefined FUN_146c38c5e(void)

void FUN_146c38c5e(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  uStack_28 = 0;
  local_38 = param_1;
  FUN_146c37e28(&local_38,1,1);
  FUN_146c3774c(&local_38,param_1,param_2);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c38cd0 FUN_146c38cd0 body=661 status=ok
// SIG undefined FUN_146c38cd0(void)

void FUN_146c38cd0(longlong param_1,int param_2,double param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double *local_98;
  longlong local_88 [3];
  double local_70;
  code *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar8 = 500;
  if (param_2 < 500) {
    iVar8 = param_2;
  }
  local_70 = 1.0;
  if (param_3 <= 1.0) {
    local_70 = param_3;
  }
  local_70 = (double)(~-(ulonglong)(param_3 < 0.0) & (ulonglong)local_70);
  if ((0 < param_2) && (0.0 < local_70)) {
    iVar9 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_14051b394(local_88,iVar9,1);
    iVar14 = 0;
    do {
      local_98 = (double *)DAT_14c8464f0;
      local_a8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_a0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      FUN_1447a8a24(local_88,&local_a8,iVar9);
      local_98 = &local_70;
      local_58 = 0;
      local_50 = 0;
      local_68 = FUN_142974546;
      local_b8 = &local_58;
      local_c0 = 0;
      local_a8 = param_1;
      uStack_a0 = local_88;
      local_60 = &local_a8;
      FUN_1401f8d10(L"ParallelFor Task",iVar9,1,&local_68);
      uVar4 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = 0;
        if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U)) {
          uVar5 = 1;
          uVar6 = 1;
          if (1 < (int)uVar4) {
            uVar5 = uVar4;
          }
          do {
            uVar7 = uVar5;
            if (uVar5 == uVar6) break;
            uVar12 = uVar6 >> 9;
            uVar13 = uVar6 & 0x1ff;
            uVar7 = uVar6;
            uVar6 = uVar6 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar12] +
                                               (ulonglong)uVar13 * 2) - 1U));
        }
      }
LAB_146c38f15:
      if (uVar7 != uVar4) {
        if (*(char *)(param_1 + 0x70) == '\x01') {
          lVar10 = (longlong)(int)uVar7;
          dVar1 = *(double *)(local_88[0] + 8 + lVar10 * 0x18);
          dVar2 = *(double *)(local_88[0] + 0x10 + lVar10 * 0x18);
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar7 >> 9) * 8);
          uVar11 = (ulonglong)(uVar7 & 0x1ff);
          *(float *)(lVar3 + uVar11 * 0xc) = (float)*(double *)(local_88[0] + lVar10 * 0x18);
          *(float *)(lVar3 + 4 + uVar11 * 0xc) = (float)dVar1;
          *(float *)(lVar3 + 8 + uVar11 * 0xc) = (float)dVar2;
        }
        uVar5 = uVar7 + 1;
        if ((int)(uVar7 + 1) < (int)uVar4) {
          uVar5 = uVar4;
        }
        uVar6 = uVar7;
        do {
          uVar7 = uVar5;
          if (uVar5 - 1 == uVar6) break;
          uVar7 = uVar6 + 1;
          uVar6 = uVar7;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar7 >> 9) * 8) +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        goto LAB_146c38f15;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar8);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c38f66 FUN_146c38f66 body=258 status=ok
// SIG undefined FUN_146c38f66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146c38f66(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong *local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined1 local_42;
  undefined1 local_41;
  code *local_40;
  undefined8 **local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_42 = param_3;
  local_41 = param_4;
  if (*(char *)(param_1 + 0x70) == '\0') {
    local_70 = CONCAT44(local_70._4_4_,DAT_14c846384);
    local_78 = _DAT_14c84637c;
    FUN_146c01e94(param_1);
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_146c36aac(param_1,param_2);
  local_38 = &local_78;
  local_68 = &local_42;
  local_60 = &local_41;
  local_88 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = FUN_142974848;
  local_90 = 0;
  local_78 = &local_58;
  local_70 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",uStack_50 & 0xffffffff,1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3906a FUN_146c3906a body=144 status=ok
// SIG undefined FUN_146c3906a(void)

undefined8 FUN_146c3906a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x208);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 0x38) < 1)) ||
     (lVar1 = **(longlong **)(lVar1 + 0x30), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    local_30 = 0;
    uStack_28 = 0;
    local_38 = param_1;
    FUN_146c383fc(&local_38,lVar1);
    FUN_146c378c6(&local_38,lVar1,param_2);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar2 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c390fc FUN_146c390fc body=507 status=ok
// SIG undefined FUN_146c390fc(void)

undefined4 FUN_146c390fc(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_e8 [46];
  undefined1 local_ba;
  undefined1 local_b9;
  longlong local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8 [3];
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x208);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x38) < 1)) {
    uVar7 = 0;
  }
  else {
    lVar2 = **(longlong **)(lVar2 + 0x30);
    uVar7 = 0;
    if (lVar2 != 0) {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      lVar6 = param_2[1];
      local_ba = param_3;
      local_b9 = param_4;
      local_b8 = param_1;
      if ((longlong)(int)lVar6 != 0) {
        lVar3 = *param_2;
        lVar8 = 0;
        do {
          uVar5 = *(int *)(lVar3 + lVar8) * 3;
          lVar4 = *(longlong *)(lVar2 + 0x78);
          iVar1 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar5 >> 9) * 8) +
                          (ulonglong)(uVar5 & 0x1ff) * 4);
          if (-1 < iVar1) {
            local_a8[0] = *(undefined4 *)
                           (*(longlong *)(lVar4 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                           (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
            uStack_ac = *(undefined4 *)
                         (*(longlong *)(lVar4 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                         (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
            local_b0 = iVar1;
            FUN_1447cbafe(&local_98,local_9c,&local_b0,0);
            FUN_1447cbafe(&local_98,local_9c,&uStack_ac,0);
            FUN_1447cbafe(&local_98,local_9c,local_a8,0);
          }
          lVar8 = lVar8 + 4;
        } while ((longlong)(int)lVar6 * 4 != lVar8);
      }
      FUN_140619b9c(&local_98,&local_b0);
      uVar7 = FUN_146c392f8(local_b8,&local_b0,local_ba,local_b9);
      if (CONCAT44(uStack_ac,local_b0) != 0) {
        FUN_1400020a8();
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c392f8 FUN_146c392f8 body=219 status=ok
// SIG undefined FUN_146c392f8(void)

undefined8 FUN_146c392f8(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  longlong local_38;
  undefined1 local_2a;
  undefined1 local_29;
  code *local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x208);
  local_2a = param_3;
  local_29 = param_4;
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x38) < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (**(longlong **)(lVar1 + 0x30) != 0) {
      local_58 = &local_38;
      local_20 = &local_60;
      local_48 = &local_2a;
      local_40 = &local_29;
      local_68 = &local_18;
      local_18 = 0;
      local_10 = 0;
      local_28 = FUN_1429748f0;
      local_70 = 0;
      local_60 = param_2;
      local_50 = param_1;
      local_38 = **(longlong **)(lVar1 + 0x30);
      FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_2 + 8),1);
      uVar2 = 1;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c393d4 FUN_146c393d4 body=330 status=ok
// SIG undefined FUN_146c393d4(void)

ulonglong *
FUN_146c393d4(ulonglong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  code *local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined4 local_38;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = &local_31;
  local_31 = param_5;
  local_88 = &local_32;
  local_78 = &local_38;
  local_70 = &local_58;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  local_60 = &local_90;
  local_68 = FUN_1429749f8;
  local_90 = param_2;
  local_38 = param_3;
  local_32 = param_4;
  FUN_146c03fd0(param_2,param_3);
  dVar3 = (double)CONCAT44(uStack_54,local_58);
  dVar4 = (double)CONCAT44(uStack_4c,uStack_50);
  dVar2 = SQRT(local_48 * local_48 + dVar3 * dVar3 + dVar4 * dVar4);
  dVar5 = 0.0;
  dVar6 = 1.0 / dVar2;
  if (0.0 < dVar2) {
    dVar1 = local_48 * dVar6;
    dVar5 = dVar4 * dVar6;
  }
  else {
    dVar1 = 0.0;
  }
  *param_1 = -(ulonglong)(0.0 < dVar2) & (ulonglong)(dVar3 * dVar6);
  param_1[1] = (ulonglong)dVar5;
  param_1[2] = (ulonglong)dVar1;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c39520 FUN_146c39520 body=334 status=ok
// SIG undefined FUN_146c39520(void)

ulonglong *
FUN_146c39520(ulonglong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 *local_78;
  double *local_70;
  code *local_68;
  undefined8 *local_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined4 local_38;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = &local_31;
  local_31 = param_6;
  local_88 = &local_32;
  local_32 = param_5;
  local_78 = &local_38;
  local_70 = &local_58;
  local_58 = 0.0;
  dStack_50 = 0.0;
  local_48 = 0.0;
  local_60 = &local_98;
  local_68 = FUN_142974b7c;
  local_98 = param_4;
  local_90 = param_2;
  local_38 = param_3;
  FUN_146c03fd0(param_2,param_3);
  dVar2 = SQRT(local_48 * local_48 + local_58 * local_58 + dStack_50 * dStack_50);
  dVar3 = 0.0;
  dVar4 = 1.0 / dVar2;
  if (0.0 < dVar2) {
    dVar1 = local_48 * dVar4;
    dVar3 = dStack_50 * dVar4;
  }
  else {
    dVar1 = 0.0;
  }
  *param_1 = -(ulonglong)(0.0 < dVar2) & (ulonglong)(local_58 * dVar4);
  param_1[1] = (ulonglong)dVar3;
  param_1[2] = (ulonglong)dVar1;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c39670 FUN_146c39670 body=414 status=ok
// SIG undefined FUN_146c39670(void)

double * FUN_146c39670(double *param_1,undefined8 param_2,longlong param_3,uint param_4,
                      undefined1 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint *local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined4 *local_80;
  int *local_78;
  code *local_70;
  undefined8 **local_68;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  longlong local_38;
  uint local_30;
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = &local_29;
  local_29 = param_6;
  local_90 = &local_2a;
  local_2a = param_5;
  local_a0 = &local_30;
  local_a8 = &local_38;
  local_80 = &local_58;
  local_48 = DAT_14c8464f0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  local_78 = &local_5c;
  local_5c = 0;
  local_68 = &local_a8;
  local_70 = FUN_142974d1c;
  local_98 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  FUN_146c03fd0(param_2,*(undefined4 *)
                         (*(longlong *)
                           (*(longlong *)(param_3 + 0x60) + (ulonglong)(param_4 >> 9) * 8) +
                         (ulonglong)(param_4 & 0x1ff) * 4));
  if (local_5c < 1) {
    param_1[2] = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  }
  else {
    dVar1 = (double)CONCAT44(uStack_54,local_58);
    dVar2 = (double)CONCAT44(uStack_4c,uStack_50);
    dVar6 = SQRT(local_48 * local_48 + dVar1 * dVar1 + dVar2 * dVar2);
    if (dVar6 <= 0.0) {
      *param_1 = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
    else {
      dVar6 = 1.0 / dVar6;
      *param_1 = dVar1 * dVar6;
      param_1[1] = dVar2 * dVar6;
      param_1[2] = local_48 * dVar6;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c39810 FUN_146c39810 body=837 status=ok
// SIG undefined FUN_146c39810(void)

void FUN_146c39810(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  float local_70;
  longlong local_68 [3];
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  local_68[2] = lVar1;
  if (param_2 != '\0') {
    local_50 = 0;
    uStack_48 = 0;
    bVar4 = true;
    if (*(char *)(lVar1 + 0x70) != '\0') goto LAB_146c3986d;
  }
  uStack_48 = 0;
  local_50 = 0;
  FUN_146c37e28(local_68 + 2,1,1);
  bVar4 = false;
LAB_146c3986d:
  FUN_146c19dca(param_1);
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a127d2(local_68,*(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24),1);
  uVar8 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar11 = 0;
  if ((uVar8 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    uVar12 = 1;
    uVar6 = 1;
    if (1 < (int)uVar8) {
      uVar12 = uVar8;
    }
    do {
      uVar11 = uVar12;
      if (uVar12 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar9 = uVar6 & 0x1ff;
      uVar11 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar7] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  if (uVar11 != uVar8) {
    do {
      lVar10 = (longlong)(int)uVar11;
      if (bVar4) {
        if (*(char *)(lVar1 + 0x70) == '\0') {
          local_70 = DAT_14c846378;
          local_78 = DAT_14c846370;
        }
        else {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x60) + (ulonglong)(uVar11 >> 9) * 8);
          local_70 = *(float *)(lVar2 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
          local_78 = *(undefined8 *)(lVar2 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
        }
      }
      else {
        local_70 = (float)*(double *)(local_50 + 0x10 + lVar10 * 0x18);
        local_78 = CONCAT44((float)*(double *)(local_50 + 8 + lVar10 * 0x18),
                            (float)*(double *)(local_50 + lVar10 * 0x18));
      }
      uVar5 = FUN_146c2f9e2(param_1,&local_78);
      *(undefined4 *)(local_68[0] + lVar10 * 4) = uVar5;
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar8) {
        uVar12 = uVar8;
      }
      do {
        uVar6 = uVar12;
        if (uVar12 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar6 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x28) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar6;
    } while (uVar11 != uVar8);
  }
  uVar8 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar11 = 0;
  if ((uVar8 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar12 = 1;
    uVar6 = 1;
    if (1 < (int)uVar8) {
      uVar12 = uVar8;
    }
    do {
      uVar11 = uVar12;
      if (uVar12 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar9 = uVar6 & 0x1ff;
      uVar11 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar7] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  if (uVar11 != uVar8) {
    do {
      lVar10 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
      uVar3 = *(undefined8 *)(lVar10 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      local_78._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      local_78 = CONCAT44(*(undefined4 *)(local_68[0] + (longlong)local_78._4_4_ * 4),
                          *(undefined4 *)(local_68[0] + (longlong)(int)uVar3 * 4));
      local_70 = *(float *)(local_68[0] +
                           (longlong)*(int *)(lVar10 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc) * 4);
      FUN_146c01580(param_1,uVar11,&local_78,1);
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar8) {
        uVar12 = uVar8;
      }
      do {
        uVar6 = uVar12;
        if (uVar12 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar6 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar6;
    } while (uVar11 != uVar8);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c39b56 FUN_146c39b56 body=505 status=ok
// SIG undefined FUN_146c39b56(void)

void FUN_146c39b56(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_98 [44];
  float local_6c;
  float local_68;
  float local_64;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  FUN_146c19dca();
  uVar9 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar6 = 0;
  if ((uVar9 != 0) &&
     (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar4 = 1;
    if (1 < (int)uVar9) {
      uVar7 = uVar9;
    }
    do {
      uVar6 = uVar7;
      if (uVar7 == uVar4) break;
      uVar5 = uVar4 >> 9;
      uVar8 = uVar4 & 0x1ff;
      uVar6 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar5] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar6 != uVar9) {
    do {
      FUN_146c13dec(lVar1,&local_60,uVar6);
      local_64 = (float)local_50;
      local_68 = (float)local_58;
      local_6c = (float)local_60;
      fVar2 = (float)FUN_146c2f9e2(param_1,&local_6c);
      local_64 = (float)local_50;
      local_68 = (float)local_58;
      local_6c = (float)local_60;
      uVar3 = FUN_146c2f9e2(param_1,&local_6c);
      local_64 = (float)local_50;
      local_68 = (float)local_58;
      local_6c = (float)local_60;
      local_64 = (float)FUN_146c2f9e2(param_1,&local_6c);
      local_6c = fVar2;
      local_68 = (float)uVar3;
      FUN_146c01580(param_1,uVar6,&local_6c,1);
      uVar7 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar9) {
        uVar7 = uVar9;
      }
      do {
        uVar4 = uVar7;
        if (uVar7 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar4 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      uVar6 = uVar4;
    } while (uVar6 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c39d50 FUN_146c39d50 body=87 status=ok
// SIG undefined FUN_146c39d50(void)

void FUN_146c39d50(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_142974f32;
  local_20 = param_1;
  FUN_146c2fed0(param_2,&local_18,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c39da8 FUN_146c39da8 body=59 status=ok
// SIG undefined FUN_146c39da8(void)

void FUN_146c39da8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x208);
  if (lVar1 == 0) {
    FUN_14582ed12();
    lVar1 = *(longlong *)(param_1 + 0x208);
  }
  if (*(int *)(lVar1 + 0x38) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(lVar1 + 0x30);
  }
  FUN_146c39b56(uVar2);
  return;
}



// FUNCTION 146c39de4 FUN_146c39de4 body=1175 status=ok
// SIG undefined FUN_146c39de4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146c39de4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  longlong *local_190;
  undefined1 *local_188;
  undefined8 **local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  double local_168;
  undefined4 local_160;
  int local_15c;
  longlong local_158 [3];
  undefined8 *local_140;
  longlong local_138;
  ulonglong uStack_130;
  undefined8 local_120;
  int *local_118;
  undefined1 local_10c [4];
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar8 = *param_1;
  local_108 = *param_2;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_100 = CONCAT44(uStack_100._4_4_,(int)param_2[1]);
  local_190 = param_1;
  FUN_146bc855c(&local_b8,&local_108);
  local_138 = 0;
  uStack_130 = 0;
  local_198 = lVar8;
  FUN_146c36aac(lVar8,param_2,&local_138);
  uVar4 = uStack_130;
  uVar2 = (uint)uStack_130;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_140 = &local_b8;
  if ((longlong)(int)(uint)uStack_130 == 0) {
    local_158[0] = 0;
    local_158[1] = 0;
    FUN_144a1a59e(local_158,0,1);
  }
  else {
    if ((int)(uint)uStack_130 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)(uint)uStack_130);
    }
    FUN_140ab2830(&local_108,uStack_130 & 0xffffffff);
    iVar6 = 1;
    if (3 < uVar2) {
      uVar5 = (uVar2 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_c0 == 0) || (local_c0 < iVar6)) {
      local_c0 = iVar6;
      FUN_140264164();
    }
    local_158[0] = 0;
    local_158[1] = 0;
    FUN_144a1a59e(local_158,uVar4 & 0xffffffff,1);
    local_15c = 0;
    do {
      local_160 = *(undefined4 *)(local_138 + (longlong)local_15c * 4);
      local_180 = &local_140;
      local_188 = &LAB_142974f64;
      local_1a0 = 1;
      local_1a8 = 1;
      FUN_146c39520(&local_178,local_198,local_160,&local_188);
      local_120 = (undefined4 *)
                  CONCAT44((float)(double)CONCAT44(uStack_16c,local_170),(float)local_178);
      local_118 = (int *)CONCAT44(local_118._4_4_,(float)local_168);
      uVar7 = FUN_146c2f9e2(local_190,&local_120);
      *(undefined4 *)(local_158[0] + (longlong)local_15c * 4) = uVar7;
      local_120 = &local_160;
      local_118 = &local_15c;
      FUN_140263e2a(&local_108,local_10c,&local_120,0);
      local_15c = local_15c + 1;
    } while (local_15c < (int)uVar2);
  }
  if ((longlong)(int)param_2[1] != 0) {
    puVar10 = (uint *)*param_2;
    puVar1 = puVar10 + (int)param_2[1];
    do {
      uVar2 = *puVar10;
      lVar8 = *(longlong *)(*(longlong *)(local_198 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
      uVar5 = *(uint *)(lVar8 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
      uVar3 = *(undefined8 *)(lVar8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
      if ((int)uStack_100 == local_d4) {
        local_178 = (double)CONCAT44(*(undefined4 *)(local_158[0] + (longlong)_DAT_00000004 * 4),
                                     *(undefined4 *)(local_158[0] + (longlong)_DAT_00000004 * 4));
      }
      else {
        puVar9 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar9 = local_d0;
        }
        uVar12 = local_c0 - 1;
        uVar11 = (uint)uVar3;
        iVar6 = *(int *)(puVar9 + (ulonglong)(uVar12 & uVar11) * 4);
        piVar13 = (int *)&DAT_00000004;
        if (iVar6 != -1) {
          do {
            lVar8 = local_108 + (longlong)iVar6 * 0x10;
            if (*(uint *)(local_108 + (longlong)iVar6 * 0x10) == uVar11) goto LAB_146c3a149;
            iVar6 = *(int *)(lVar8 + 8);
          } while (iVar6 != -1);
          lVar8 = 0;
LAB_146c3a149:
          piVar13 = (int *)(lVar8 + 4);
        }
        local_178._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
        iVar6 = *(int *)(puVar9 + (ulonglong)(local_178._4_4_ & uVar12) * 4);
        while (iVar6 != -1) {
          lVar8 = local_108 + (longlong)iVar6 * 0x10;
          if (*(uint *)(local_108 + (longlong)iVar6 * 0x10) == local_178._4_4_) goto LAB_146c3a18d;
          iVar6 = *(int *)(lVar8 + 8);
        }
        lVar8 = 0;
LAB_146c3a18d:
        local_178 = (double)CONCAT44(*(undefined4 *)
                                      (local_158[0] + (longlong)*(int *)(lVar8 + 4) * 4),
                                     *(undefined4 *)(local_158[0] + (longlong)*piVar13 * 4));
        iVar6 = *(int *)(puVar9 + (ulonglong)(uVar12 & uVar5) * 4);
        while (iVar6 != -1) {
          lVar8 = local_108 + (longlong)iVar6 * 0x10;
          if (*(uint *)(local_108 + (longlong)iVar6 * 0x10) == uVar5) goto LAB_146c3a0c5;
          iVar6 = *(int *)(lVar8 + 8);
        }
      }
      lVar8 = 0;
LAB_146c3a0c5:
      local_170 = *(undefined4 *)(local_158[0] + (longlong)*(int *)(lVar8 + 4) * 4);
      FUN_146c01580(local_190,uVar2,&local_178,1);
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_108);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c3a27e FUN_146c3a27e body=160 status=ok
// SIG undefined FUN_146c3a27e(void)

void FUN_146c3a27e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  if ((((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x208), lVar3 != 0)) &&
      (0 < *(int *)(lVar3 + 0x38))) &&
     (lVar3 = **(longlong **)(lVar3 + 0x30), param_1[1] = lVar3, lVar3 != 0)) {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x208) + 0x38);
    if (((0 < (int)uVar1) && (uVar1 != 1)) &&
       ((plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 0x30), *plVar2 != 0 &&
        ((2 < uVar1 && plVar2[1] != 0 && (plVar2[2] != 0)))))) {
      param_1[2] = plVar2[1];
      if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x38) < 3) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x30) + 0x10);
      }
      param_1[3] = lVar3;
    }
  }
  return;
}



// FUNCTION 146c3a31e FUN_146c3a31e body=705 status=ok
// SIG undefined FUN_146c3a31e(void)

ulonglong FUN_146c3a31e(longlong *param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 unaff_RDI;
  ulonglong uVar10;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_a8 [32];
  float local_88 [6];
  ulonglong local_70;
  undefined7 uVar11;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  if ((lVar1 == 0) || (param_1[2] == 0)) {
LAB_146c3a563:
    uVar10 = 0;
  }
  else {
    uVar11 = (undefined7)((ulonglong)unaff_RDI >> 8);
    uVar10 = CONCAT71(uVar11,param_1[3] != 0);
    if ((param_2 & param_1[3] != 0) == 1) {
      uVar9 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
      uVar14 = 0;
      if ((uVar9 != 0) &&
         (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
        uVar15 = 1;
        uVar8 = 1;
        if (1 < (int)uVar9) {
          uVar15 = uVar9;
        }
        do {
          uVar14 = uVar15;
          if (uVar15 == uVar8) break;
          uVar7 = uVar8 >> 9;
          uVar12 = uVar8 & 0x1ff;
          uVar14 = uVar8;
          uVar8 = uVar8 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar7] +
                                             (ulonglong)uVar12 * 2) - 1U));
      }
      uVar10 = CONCAT71(uVar11,1);
joined_r0x000146c3a3ab:
      uVar15 = uVar14;
      if (uVar15 != uVar9) {
        uVar14 = uVar15 * 3;
        iVar4 = 0;
        bVar17 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1[2] + 0x78) + (ulonglong)(uVar14 >> 9) * 8) +
                         (ulonglong)(uVar14 & 0x1ff) * 4) < 0;
        uVar10 = CONCAT71((int7)(uVar10 >> 8),!bVar17);
        if (bVar17) goto LAB_146c3a563;
        bVar17 = true;
        do {
          bVar16 = bVar17;
          lVar2 = param_1[2];
          uVar6 = (ulonglong)(iVar4 + uVar14 >> 9);
          uVar5 = (ulonglong)(iVar4 + uVar14 & 0x1ff);
          iVar4 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + uVar6 * 8) + uVar5 * 4);
          lVar13 = 0;
          do {
            uVar8 = iVar4 * 3 + (int)lVar13;
            local_88[lVar13 + 3] =
                 *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar8 >> 9) * 8)
                           + (ulonglong)(uVar8 & 0x1ff) * 4);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 3);
          lVar2 = param_1[3];
          iVar4 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + uVar6 * 8) + uVar5 * 4);
          lVar13 = 0;
          do {
            uVar8 = iVar4 * 3 + (int)lVar13;
            local_88[lVar13] =
                 *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar8 >> 9) * 8)
                           + (ulonglong)(uVar8 & 0x1ff) * 4);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 3);
          if (((((ABS(local_88[3]) <= 0.0001) && (ABS(local_88[4]) <= 0.0001)) &&
               (ABS(local_88[5]) <= 0.0001)) ||
              ((cVar3 = FUN_144afe7b6(local_88 + 3), cVar3 != '\0' ||
               (((ABS(local_88[0]) <= 0.0001 && (ABS(local_88[1]) <= 0.0001)) &&
                (ABS(local_88[2]) <= 0.0001)))))) ||
             (cVar3 = FUN_144afe7b6(local_88), cVar3 != '\0')) goto LAB_146c3a563;
          iVar4 = 1;
          bVar17 = false;
        } while (bVar16);
        uVar8 = uVar15 + 1;
        if ((int)(uVar15 + 1) < (int)uVar9) {
          uVar8 = uVar9;
        }
        do {
          uVar14 = uVar8;
          if (uVar8 - 1 == uVar15) break;
          uVar15 = uVar15 + 1;
          uVar14 = uVar15;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x148) +
                                               (ulonglong)(uVar15 >> 9) * 8) +
                                             (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
        goto joined_r0x000146c3a3ab;
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 146c3a5e0 FUN_146c3a5e0 body=232 status=ok
// SIG undefined FUN_146c3a5e0(void)

void FUN_146c3a5e0(longlong param_1,int param_2,int param_3,undefined8 param_4,longlong param_5,
                  longlong param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar5 = param_2 * 3;
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4)) {
      uVar3 = (ulonglong)(uVar5 + param_3 >> 9);
      uVar6 = (ulonglong)(uVar5 + param_3 & 0x1ff);
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + uVar3 * 8) + uVar6 * 4);
      lVar4 = 0;
      do {
        uVar5 = iVar1 * 3 + (int)lVar4;
        *(undefined4 *)(param_5 + lVar4 * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar5 >> 9) * 8) +
              (ulonglong)(uVar5 & 0x1ff) * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      lVar2 = *(longlong *)(param_1 + 0x18);
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + uVar3 * 8) + uVar6 * 4);
      lVar4 = 0;
      do {
        uVar5 = iVar1 * 3 + (int)lVar4;
        *(undefined4 *)(param_6 + lVar4 * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar5 >> 9) * 8) +
              (ulonglong)(uVar5 & 0x1ff) * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      return;
    }
  }
  FUN_146bb4800(param_4);
  return;
}



// FUNCTION 146c3a6c8 FUN_146c3a6c8 body=248 status=ok
// SIG undefined FUN_146c3a6c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146c3a6c8(longlong param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar3 = _DAT_14c84637c;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar6 = param_2 * 3;
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4)) {
      uVar7 = (ulonglong)(uVar6 + param_3 >> 9);
      uVar4 = (ulonglong)(uVar6 + param_3 & 0x1ff);
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + uVar7 * 8) + uVar4 * 4);
      lVar5 = 0;
      do {
        uVar6 = iVar1 * 3 + (int)lVar5;
        *(undefined4 *)((longlong)param_4 + lVar5 * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar6 >> 9) * 8) +
              (ulonglong)(uVar6 & 0x1ff) * 4);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      lVar2 = *(longlong *)(param_1 + 0x18);
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + uVar7 * 8) + uVar4 * 4);
      lVar5 = 0;
      do {
        uVar6 = iVar1 * 3 + (int)lVar5;
        *(undefined4 *)((longlong)param_5 + lVar5 * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar6 >> 9) * 8) +
              (ulonglong)(uVar6 & 0x1ff) * 4);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      return;
    }
  }
  *(undefined4 *)(param_4 + 1) = DAT_14c846384;
  *param_4 = uVar3;
  uVar3 = DAT_14c846370;
  *(undefined4 *)(param_5 + 1) = DAT_14c846378;
  *param_5 = uVar3;
  return;
}



// FUNCTION 146c3a7c0 FUN_146c3a7c0 body=165 status=ok
// SIG undefined FUN_146c3a7c0(void)

void FUN_146c3a7c0(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x10) < (int)param_2) {
    FUN_146bca1c8((longlong *)(param_1 + 8),(ulonglong)param_2,1);
  }
  if (*(int *)(param_1 + 0x20) < (int)param_2) {
    FUN_146bca1c8((longlong *)(param_1 + 0x18),param_2,1);
  }
  if (param_3 == '\x01' && 0 < (int)param_2) {
    lVar3 = 0;
    do {
      uVar2 = DAT_14c846330;
      lVar1 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(lVar1 + 8 + lVar3) = DAT_14c846338;
      *(undefined8 *)(lVar1 + lVar3) = uVar2;
      uVar2 = DAT_14c846330;
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(undefined4 *)(lVar1 + 8 + lVar3) = DAT_14c846338;
      *(undefined8 *)(lVar1 + lVar3) = uVar2;
      lVar3 = lVar3 + 0xc;
    } while ((ulonglong)param_2 * 0xc != lVar3);
  }
  return;
}



// FUNCTION 146c3a866 FUN_146c3a866 body=15 status=ok
// SIG undefined FUN_146c3a866(void)

void FUN_146c3a866(longlong *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined1 auStack_b8 [40];
  undefined4 uStack_90;
  undefined8 *puStack_88;
  longlong *plStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  longlong **pplStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  ulonglong uStack_30;
  
  if (*param_4 == '\x01') {
    FUN_146c3a876();
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  uStack_60 = param_2;
  uStack_58 = param_3;
  FUN_146c3a7c0(param_1,iVar1 * 3,0);
  pplStack_48 = &plStack_78;
  puStack_88 = &uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_50 = &LAB_146c5928a;
  uStack_90 = 0;
  plStack_78 = param_1;
  puStack_70 = &uStack_58;
  puStack_68 = &uStack_60;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if ((uStack_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3a876 FUN_146c3a876 body=1904 status=ok
// SIG undefined FUN_146c3a876(void)

void FUN_146c3a876(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  undefined8 **ppuVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_1e8 [40];
  undefined4 local_1c0;
  void **local_1b8;
  ulonglong local_1a8;
  int local_19c;
  longlong *local_198;
  ulonglong local_190;
  undefined8 local_188;
  int local_180;
  void *local_178;
  ulonglong uStack_170;
  longlong local_168 [7];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 *local_118;
  longlong **local_110;
  void *local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 **local_b8;
  int local_b0;
  _RTL_CRITICAL_SECTION local_a0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_130 = 0xbfefae147ae147ae;
  iVar15 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  local_1a8 = param_4;
  local_128 = param_2;
  local_120 = param_3;
  FUN_146c3a7c0(param_1,iVar15 * 3,1);
  local_168[4] = 0;
  local_168[5] = 0;
  FUN_14051b394(local_168 + 4,iVar15,1);
  plVar17 = local_168 + 2;
  local_168[2] = 0;
  local_168[3] = 0;
  FUN_14051b394(plVar17,iVar15,1);
  local_168[0] = 0;
  local_168[1] = 0;
  FUN_14051b394(local_168,iVar15,1);
  local_178 = (void *)0x0;
  uStack_170 = 0;
  InitializeCriticalSection(&local_a0);
  SetCriticalSectionSpinCount(&local_a0,4000);
  plStack_f0 = &local_120;
  local_108 = (void *)0x0;
  uStack_100._0_4_ = 0;
  local_118 = &LAB_146c59872;
  local_1c0 = 0;
  local_1b8 = &local_108;
  local_110 = &local_f8;
  local_f8 = param_1;
  local_e8 = local_168 + 4;
  local_e0 = plVar17;
  local_d8 = local_168;
  local_d0 = &local_a0;
  local_c8 = &local_178;
  FUN_1401f8d10(L"ParallelFor Task",iVar15,1,&local_118);
  local_e8 = &local_120;
  local_e0 = &local_128;
  local_d8 = local_168 + 4;
  local_c8._0_4_ = (undefined4)local_1a8;
  local_c8._4_4_ = (int)(local_1a8 >> 0x20);
  local_c0 = &local_130;
  local_108 = (void *)0x0;
  uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
  local_118 = &LAB_146c59b0e;
  local_1c0 = 0;
  local_1b8 = &local_108;
  local_110 = &local_f8;
  local_f8 = param_1;
  plStack_f0 = local_168;
  local_d0 = (LPCRITICAL_SECTION)plVar17;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(*param_1 + 0x20) * 0x200 + *(int *)(*param_1 + 0x24),1,
                &local_118);
  pvVar7 = local_178;
  ppvVar1 = (void **)(param_1 + 5);
  if (ppvVar1 != &local_178) {
    iVar15 = (uint)uStack_170;
    lVar16 = (longlong)(int)(uint)uStack_170;
    *(uint *)(param_1 + 6) = (uint)uStack_170;
    if ((uint)uStack_170 == 0 && *(int *)((longlong)param_1 + 0x34) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      FUN_144a06ca8(ppvVar1,uStack_170 & 0xffffffff);
      if (iVar15 != 0) {
        memcpy(*ppvVar1,pvVar7,lVar16 << 2);
      }
    }
  }
  if ((int)(uint)uStack_170 < 1) goto LAB_146c3aac1;
  local_d8 = (longlong *)0x0;
  local_d0._0_4_ = 0;
  local_f8 = (longlong *)0x0;
  plStack_f0 = (longlong *)0x0;
  local_d0._4_4_ = 0x80;
  local_c8._0_4_ = 0xffffffff;
  local_c8._4_4_ = 0;
  local_b8 = (undefined8 **)0x0;
  local_b0 = 0;
  local_108 = local_178;
  uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_170);
  FUN_146bc855c(&local_f8,&local_108);
  local_108 = (void *)0x0;
  uStack_100 = 0;
  plVar17 = param_1;
  if (0 < (int)(uint)uStack_170) {
LAB_146c3abb7:
    local_198 = plVar17;
    bVar25 = -1 < (longlong)uStack_100;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    uVar8 = (uint)uStack_170;
    if (bVar25) {
LAB_146c3abd0:
      local_190 = (ulonglong)uVar8;
      uVar13 = 0;
      plVar17 = param_1;
LAB_146c3abd9:
      param_1 = local_198;
      uVar8 = *(uint *)((longlong)local_178 + uVar13 * 4);
      lVar16 = *plVar17;
      lVar24 = *(longlong *)(*(longlong *)(lVar16 + 0x180) + (ulonglong)(uVar8 >> 9) * 8);
      uVar12 = (ulonglong)(uVar8 & 0x1ff);
      local_110 = (longlong **)CONCAT44(local_110._4_4_,*(undefined4 *)(lVar24 + 8 + uVar12 * 0xc));
      local_118 = *(undefined1 **)(lVar24 + uVar12 * 0xc);
      local_19c = uVar8 * 3;
      ppuVar21 = local_b8;
      if (local_b8 == (undefined8 **)0x0) {
        ppuVar21 = &local_c0;
      }
      lVar24 = 0;
      do {
        uVar9 = *(uint *)((longlong)&local_118 + lVar24 * 4);
        lVar19 = *(longlong *)(*(longlong *)(lVar16 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8);
        uVar18 = (ulonglong)((uVar9 & 0x1ff) << 4);
        uVar9 = *(uint *)(lVar19 + 8 + uVar18);
        if (uVar9 == uVar8) {
          uVar9 = *(uint *)(lVar19 + 0xc + uVar18);
        }
        local_1a8 = uVar13;
        if ((int)plStack_f0 != local_c8._4_4_) {
          for (iVar15 = *(int *)((longlong)ppuVar21 + (ulonglong)(uVar9 & local_b0 - 1U) * 4);
              iVar15 != -1; iVar15 = *(int *)((longlong)local_f8 + (longlong)iVar15 * 0xc + 4)) {
            if (*(uint *)((longlong)local_f8 + (longlong)iVar15 * 0xc) == uVar9) goto LAB_146c3aca0;
          }
        }
        if (uVar9 != 0xffffffff) {
          iVar15 = *(int *)(lVar19 + uVar18);
          iVar2 = ((int *)(lVar19 + uVar18))[1];
          lVar24 = *(longlong *)(*(longlong *)(lVar16 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
          local_180 = *(int *)(lVar24 + 8 + uVar12 * 0xc);
          uVar6 = *(undefined8 *)(lVar24 + uVar12 * 0xc);
          local_188 = uVar6;
          uVar6 = local_188;
          iVar14 = 0;
          iVar22 = 0;
          local_188._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
          if (((int)uVar6 != iVar15) && (iVar22 = 1, local_188._4_4_ != iVar15)) {
            iVar22 = (uint)(local_180 == iVar15) * 3 + -1;
          }
          if (((int)uVar6 != iVar2) && (iVar14 = 1, local_188._4_4_ != iVar2)) {
            iVar14 = (uint)(local_180 == iVar2) * 3 + -1;
          }
          lVar24 = 0;
          goto LAB_146c3ada2;
        }
LAB_146c3aca0:
        lVar24 = lVar24 + 1;
      } while (lVar24 != 3);
      lVar16 = (longlong)(int)(uint)uStack_100;
      uVar9 = (uint)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar9);
      if (uStack_100._4_4_ < uVar9) {
        FUN_1446f48e2(&local_108);
      }
      *(uint *)((longlong)local_108 + lVar16 * 4) = uVar8;
      param_1 = local_198;
      goto LAB_146c3ad14;
    }
    FUN_14481578e(&local_108,0);
    uVar8 = (uint)uStack_170;
    if (0 < (int)(uint)uStack_170) goto LAB_146c3abd0;
    goto LAB_146c3af3b;
  }
LAB_146c3afb8:
  local_b0 = 0;
  if (local_b8 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_f8);
LAB_146c3aac1:
  DeleteCriticalSection(&local_a0);
  if (local_178 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168[2] != 0) {
    FUN_1400020a8();
  }
  if (local_168[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (lVar24 = lVar11, lVar11 != 3) {
LAB_146c3ada2:
    lVar11 = lVar24 + 1;
    lVar19 = 0;
    if (lVar24 != 2) {
      lVar19 = lVar11;
    }
    iVar3 = *(int *)((longlong)&local_188 + lVar19 * 4);
    iVar23 = *(int *)((longlong)&local_188 + lVar24 * 4);
    if (((iVar23 == iVar15) || (bVar25 = iVar3 == iVar15, iVar3 = iVar23, bVar25)) &&
       (iVar3 == iVar2)) {
      iVar23 = (int)lVar24 + -1;
      if (lVar24 == 0) {
        iVar23 = 2;
      }
      goto LAB_146c3adef;
    }
  }
  iVar23 = -1;
LAB_146c3adef:
  lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
  uVar13 = (ulonglong)(uVar9 & 0x1ff);
  iVar3 = *(int *)(lVar16 + uVar13 * 0xc);
  iVar4 = *(int *)(lVar16 + 4 + uVar13 * 0xc);
  iVar5 = *(int *)(lVar16 + 8 + uVar13 * 0xc);
  iVar20 = 0;
  iVar10 = 0;
  if ((iVar3 != iVar15) && (iVar10 = 1, iVar4 != iVar15)) {
    iVar10 = (uint)(iVar5 == iVar15) * 3 + -1;
  }
  if ((iVar3 != iVar2) && (iVar20 = 1, iVar4 != iVar2)) {
    iVar20 = (uint)(iVar5 == iVar2) * 3 + -1;
  }
  lVar16 = local_198[1];
  lVar24 = (longlong)(int)(iVar10 + uVar9 * 3) * 0xc;
  lVar19 = (longlong)(iVar22 + local_19c) * 0xc;
  *(undefined4 *)(lVar16 + 8 + lVar19) = *(undefined4 *)(lVar16 + 8 + lVar24);
  *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)(lVar16 + lVar24);
  lVar16 = local_198[3];
  *(undefined4 *)(lVar16 + 8 + lVar19) = *(undefined4 *)(lVar16 + 8 + lVar24);
  *(undefined8 *)(lVar16 + lVar19) = *(undefined8 *)(lVar16 + lVar24);
  lVar16 = local_198[1];
  lVar24 = (longlong)(int)(iVar20 + uVar9 * 3) * 0xc;
  lVar11 = (longlong)(iVar14 + local_19c) * 0xc;
  *(undefined4 *)(lVar16 + 8 + lVar11) = *(undefined4 *)(lVar16 + 8 + lVar24);
  *(undefined8 *)(lVar16 + lVar11) = *(undefined8 *)(lVar16 + lVar24);
  lVar16 = local_198[3];
  *(undefined4 *)(lVar16 + 8 + lVar11) = *(undefined4 *)(lVar16 + 8 + lVar24);
  *(undefined8 *)(lVar16 + lVar11) = *(undefined8 *)(lVar16 + lVar24);
  lVar16 = local_198[1];
  lVar24 = (longlong)(iVar23 + local_19c) * 0xc;
  *(undefined4 *)(lVar16 + 8 + lVar24) = *(undefined4 *)(lVar16 + 8 + lVar19);
  *(undefined8 *)(lVar16 + lVar24) = *(undefined8 *)(lVar16 + lVar19);
  lVar16 = local_198[3];
  *(undefined8 *)(lVar16 + lVar24) = *(undefined8 *)(lVar16 + lVar19);
  *(undefined4 *)(lVar16 + 8 + lVar24) = *(undefined4 *)(lVar16 + 8 + lVar19);
  local_188 = uVar6;
  FUN_144a7cc9e(&local_f8);
LAB_146c3ad14:
  uVar13 = local_1a8 + 1;
  plVar17 = param_1;
  if (uVar13 == local_190) goto LAB_146c3af37;
  goto LAB_146c3abd9;
LAB_146c3af37:
LAB_146c3af3b:
  uVar13 = uStack_170;
  pvVar7 = local_178;
  if ((uint)uStack_100 == (uint)uStack_170) {
    bVar25 = -1 < (longlong)uStack_170;
    uStack_170 = uStack_170 & 0xffffffff00000000;
    if (bVar25) goto LAB_146c3afa6;
    FUN_14481578e(&local_178,0);
  }
  else {
    local_178 = local_108;
    uStack_170 = uStack_100;
    local_108 = pvVar7;
    uStack_100 = uVar13;
  }
  plVar17 = local_198;
  if ((int)(uint)uStack_170 < 1) goto LAB_146c3afa6;
  goto LAB_146c3abb7;
LAB_146c3afa6:
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_146c3afb8;
}



// FUNCTION 146c3afe8 FUN_146c3afe8 body=199 status=ok
// SIG undefined FUN_146c3afe8(void)

void FUN_146c3afe8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong **local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  local_60 = param_2;
  local_58 = param_3;
  FUN_146c3a7c0(param_1,iVar1 * 3,0);
  local_48 = &local_78;
  local_88 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_146c5928a;
  local_90 = 0;
  local_78 = param_1;
  local_70 = &local_58;
  local_68 = &local_60;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3b0b0 FUN_146c3b0b0 body=659 status=ok
// SIG undefined FUN_146c3b0b0(void)

undefined8 FUN_146c3b0b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong **)(param_2 + 0x208) == (longlong *)0x0) ||
     (iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xb0))(), iVar2 != 3)) {
    uVar4 = 0;
    goto LAB_146c3b115;
  }
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x208) + 0x38);
  if (iVar2 < 2) {
    lVar7 = 0;
LAB_146c3b13f:
    local_80 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x30);
    lVar7 = *(longlong *)(lVar11 + 8);
    if (iVar2 == 2) goto LAB_146c3b13f;
    local_80 = *(longlong *)(lVar11 + 0x10);
  }
  plVar9 = (longlong *)(param_1 + 8);
  bVar1 = true;
  do {
    bVar8 = bVar1;
    local_50 = &local_68;
    local_58 = &LAB_146c5917a;
    local_68 = param_2;
    local_60 = plVar9;
    FUN_146c2fed0(lVar7,&local_58,0);
    uVar3 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U)) {
        uVar5 = 1;
        uVar10 = 1;
        if (1 < (int)uVar3) {
          uVar5 = uVar3;
        }
        do {
          uVar6 = uVar5;
          if (uVar5 == uVar10) break;
          uVar12 = uVar10 >> 9;
          uVar14 = uVar10 & 0x1ff;
          uVar6 = uVar10;
          uVar10 = uVar10 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar12] +
                                             (ulonglong)uVar14 * 2) - 1U));
      }
    }
LAB_146c3b31e:
    if (uVar6 != uVar3) {
      uVar5 = uVar6 * 3;
      uVar10 = uVar6 * 3 + 2;
      lVar11 = *(longlong *)(lVar7 + 0x78);
      uVar12 = uVar6 * 3 + 1;
      local_68 = CONCAT44(*(undefined4 *)
                           (*(longlong *)(lVar11 + (ulonglong)(uVar12 >> 9) * 8) +
                           (ulonglong)(uVar12 & 0x1ff) * 4),
                          *(undefined4 *)
                           (*(longlong *)(lVar11 + (ulonglong)(uVar5 >> 9) * 8) +
                           (ulonglong)(uVar5 & 0x1ff) * 4));
      local_60 = (longlong *)
                 CONCAT44(local_60._4_4_,
                          *(undefined4 *)
                           (*(longlong *)(lVar11 + (ulonglong)(uVar10 >> 9) * 8) +
                           (ulonglong)(uVar10 & 0x1ff) * 4));
      lVar11 = 0;
      do {
        lVar13 = lVar11 * 0xc + *plVar9;
        local_70 = *(undefined4 *)(lVar13 + 8 + (longlong)(int)uVar5 * 0xc);
        local_78 = *(undefined8 *)(lVar13 + (longlong)(int)uVar5 * 0xc);
        iVar2 = *(int *)((longlong)&local_68 + lVar11 * 4);
        lVar13 = 0;
        do {
          uVar10 = iVar2 * 3 + (int)lVar13;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x48) + (ulonglong)(uVar10 >> 9) * 8) +
           (ulonglong)(uVar10 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_78 + lVar13 * 4);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 3);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      uVar5 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar3) {
        uVar5 = uVar3;
      }
      uVar10 = uVar6;
      do {
        uVar6 = uVar5;
        if (uVar5 - 1 == uVar10) break;
        uVar6 = uVar10 + 1;
        uVar10 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      goto LAB_146c3b31e;
    }
    uVar4 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    lVar7 = local_80;
    plVar9 = (longlong *)(param_1 + 0x18);
    bVar1 = false;
  } while (bVar8);
LAB_146c3b115:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146c3b344 FUN_146c3b344 body=202 status=ok
// SIG undefined FUN_146c3b344(void)

undefined4 FUN_146c3b344(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [38];
  undefined2 local_52;
  longlong local_50 [8];
  
  local_50[7] = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x208);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x28) < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(longlong **)(lVar1 + 0x20);
    }
    if ((0 < *(int *)(lVar1 + 0x38)) && (**(longlong **)(lVar1 + 0x30) != 0 && lVar3 != 0)) {
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_52 = 0x101;
      local_50[0] = param_1;
      FUN_146c3a876(local_50);
      (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb8))(*(longlong **)(param_1 + 0x208),3);
      uVar2 = FUN_146c3b0b0(local_50,param_1);
      FUN_145bfa8f2(local_50);
      goto LAB_146c3b394;
    }
  }
  uVar2 = 0;
LAB_146c3b394:
  if ((local_50[7] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3b410 FUN_146c3b410 body=161 status=ok
// SIG undefined FUN_146c3b410(void)

void FUN_146c3b410(longlong param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x10) < (int)param_2) {
    FUN_14051b394((longlong *)(param_1 + 8),(ulonglong)param_2,1);
  }
  if (*(int *)(param_1 + 0x20) < (int)param_2) {
    FUN_14051b394((longlong *)(param_1 + 0x18),param_2,1);
  }
  if (param_3 == '\x01' && 0 < (int)param_2) {
    lVar5 = 0;
    do {
      uVar4 = DAT_14c8464e8;
      uVar3 = DAT_14c8464e0;
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar2 + 0x10 + lVar5) = DAT_14c8464f0;
      puVar1 = (undefined8 *)(lVar2 + lVar5);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      uVar4 = DAT_14c8464e8;
      uVar3 = DAT_14c8464e0;
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(undefined8 *)(lVar2 + 0x10 + lVar5) = DAT_14c8464f0;
      puVar1 = (undefined8 *)(lVar2 + lVar5);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      lVar5 = lVar5 + 0x18;
    } while ((ulonglong)param_2 * 0x18 != lVar5);
  }
  return;
}



// FUNCTION 146c3b4b2 FUN_146c3b4b2 body=662 status=ok
// SIG undefined FUN_146c3b4b2(void)

undefined8 FUN_146c3b4b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  float local_a8 [3];
  undefined1 local_9c [12];
  undefined1 local_90 [24];
  float local_78 [3];
  undefined1 local_6c [12];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_2 + 0x208);
  if ((lVar4 != 0) && (uVar14 = *(uint *)(lVar4 + 0x38), 0 < (int)uVar14)) {
    uVar10 = 0;
    if ((uVar14 == 1) || (plVar5 = *(longlong **)(lVar4 + 0x30), *plVar5 == 0)) goto LAB_146c3b6d1;
    lVar4 = plVar5[1];
    if (2 < uVar14 && lVar4 != 0) {
      lVar6 = plVar5[2];
      uVar10 = 0;
      if (lVar6 != 0) {
        FUN_146c3b410(param_1,(*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) * 3,0)
        ;
        uVar12 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
        uVar14 = 0;
        if ((uVar12 != 0) &&
           (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
          uVar15 = 1;
          uVar13 = 1;
          if (1 < (int)uVar12) {
            uVar15 = uVar12;
          }
          do {
            uVar14 = uVar15;
            if (uVar15 == uVar13) break;
            uVar8 = uVar13 >> 9;
            uVar11 = uVar13 & 0x1ff;
            uVar14 = uVar13;
            uVar13 = uVar13 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar8] +
                                               (ulonglong)uVar11 * 2) - 1U));
        }
        uVar10 = 1;
LAB_146c3b58b:
        if (uVar14 != uVar12) {
          uVar15 = uVar14 * 3;
          if ((-1 < *(int *)(*(longlong *)
                              (*(longlong *)(lVar4 + 0x78) + (ulonglong)(uVar15 >> 9) * 8) +
                            (ulonglong)(uVar15 & 0x1ff) * 4)) &&
             (-1 < *(int *)(*(longlong *)
                             (*(longlong *)(lVar6 + 0x78) + (ulonglong)(uVar15 >> 9) * 8) +
                           (ulonglong)(uVar15 & 0x1ff) * 4))) {
            local_b8 = local_60;
            FUN_146c3574a(lVar4,uVar14,local_78,local_6c);
            local_b8 = local_90;
            FUN_146c3574a(lVar6,uVar14,local_a8,local_9c);
            lVar1 = (longlong)(int)uVar15 * 0x18 + 0x10;
            lVar7 = 0;
            do {
              fVar2 = *(float *)((longlong)local_78 + lVar7 + 8);
              fVar3 = *(float *)((longlong)local_78 + lVar7 + 4);
              lVar9 = *(longlong *)(param_1 + 8) + lVar1;
              *(double *)(lVar9 + -0x10 + lVar7 * 2) =
                   (double)*(float *)((longlong)local_78 + lVar7);
              *(double *)(lVar9 + -8 + lVar7 * 2) = (double)fVar3;
              *(double *)(lVar9 + lVar7 * 2) = (double)fVar2;
              fVar2 = *(float *)((longlong)local_a8 + lVar7 + 8);
              fVar3 = *(float *)((longlong)local_a8 + lVar7 + 4);
              lVar9 = *(longlong *)(param_1 + 0x18) + lVar1;
              *(double *)(lVar9 + -0x10 + lVar7 * 2) =
                   (double)*(float *)((longlong)local_a8 + lVar7);
              *(double *)(lVar9 + -8 + lVar7 * 2) = (double)fVar3;
              *(double *)(lVar9 + lVar7 * 2) = (double)fVar2;
              lVar7 = lVar7 + 0xc;
            } while (lVar7 != 0x24);
          }
          uVar15 = uVar14 + 1;
          if ((int)(uVar14 + 1) < (int)uVar12) {
            uVar15 = uVar12;
          }
          uVar13 = uVar14;
          do {
            uVar14 = uVar15;
            if (uVar15 - 1 == uVar13) break;
            uVar14 = uVar13 + 1;
            uVar13 = uVar14;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_2 + 0x148) +
                                                 (ulonglong)(uVar14 >> 9) * 8) +
                                               (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
          goto LAB_146c3b58b;
        }
      }
      goto LAB_146c3b6d1;
    }
  }
  uVar10 = 0;
LAB_146c3b6d1:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 146c3b74a FUN_146c3b74a body=15 status=ok
// SIG undefined FUN_146c3b74a(void)

void FUN_146c3b74a(longlong *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined1 auStack_b8 [40];
  undefined4 uStack_90;
  undefined8 *puStack_88;
  longlong *plStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  longlong **pplStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  ulonglong uStack_30;
  
  if (*param_4 == '\x01') {
    FUN_146c3b75a();
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  uStack_60 = param_2;
  uStack_58 = param_3;
  FUN_146c3b410(param_1,iVar1 * 3,0);
  pplStack_48 = &plStack_78;
  puStack_88 = &uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_50 = &LAB_146c5b2c4;
  uStack_90 = 0;
  plStack_78 = param_1;
  puStack_70 = &uStack_58;
  puStack_68 = &uStack_60;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if ((uStack_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3b75a FUN_146c3b75a body=1912 status=ok
// SIG undefined FUN_146c3b75a(void)

void FUN_146c3b75a(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  void **ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  undefined8 **ppuVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 auStack_1e8 [40];
  undefined4 local_1c0;
  void **local_1b8;
  ulonglong local_1a8;
  int local_19c;
  longlong *local_198;
  ulonglong local_190;
  undefined8 local_188;
  int local_180;
  void *local_178;
  ulonglong uStack_170;
  longlong local_168 [7];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 *local_118;
  longlong **local_110;
  void *local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 **local_b8;
  int local_b0;
  _RTL_CRITICAL_SECTION local_a0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_130 = 0xbfefae147ae147ae;
  iVar21 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  local_1a8 = param_4;
  local_128 = param_2;
  local_120 = param_3;
  FUN_146c3b410(param_1,iVar21 * 3,1);
  local_168[4] = 0;
  local_168[5] = 0;
  FUN_14051b394(local_168 + 4,iVar21,1);
  plVar23 = local_168 + 2;
  local_168[2] = 0;
  local_168[3] = 0;
  FUN_14051b394(plVar23,iVar21,1);
  local_168[0] = 0;
  local_168[1] = 0;
  FUN_14051b394(local_168,iVar21,1);
  local_178 = (void *)0x0;
  uStack_170 = 0;
  InitializeCriticalSection(&local_a0);
  SetCriticalSectionSpinCount(&local_a0,4000);
  plStack_f0 = &local_120;
  local_108 = (void *)0x0;
  uStack_100._0_4_ = 0;
  local_118 = &LAB_146c5b8a8;
  local_1c0 = 0;
  local_1b8 = &local_108;
  local_110 = &local_f8;
  local_f8 = param_1;
  local_e8 = local_168 + 4;
  local_e0 = plVar23;
  local_d8 = local_168;
  local_d0 = &local_a0;
  local_c8 = &local_178;
  FUN_1401f8d10(L"ParallelFor Task",iVar21,1,&local_118);
  local_e8 = &local_120;
  local_e0 = &local_128;
  local_d8 = local_168 + 4;
  local_c8._0_4_ = (undefined4)local_1a8;
  local_c8._4_4_ = (int)(local_1a8 >> 0x20);
  local_c0 = &local_130;
  local_108 = (void *)0x0;
  uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
  local_118 = &LAB_146c5bb44;
  local_1c0 = 0;
  local_1b8 = &local_108;
  local_110 = &local_f8;
  local_f8 = param_1;
  plStack_f0 = local_168;
  local_d0 = (LPCRITICAL_SECTION)plVar23;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(*param_1 + 0x20) * 0x200 + *(int *)(*param_1 + 0x24),1,
                &local_118);
  pvVar13 = local_178;
  ppvVar1 = (void **)(param_1 + 5);
  if (ppvVar1 != &local_178) {
    iVar21 = (uint)uStack_170;
    lVar22 = (longlong)(int)(uint)uStack_170;
    *(uint *)(param_1 + 6) = (uint)uStack_170;
    if ((uint)uStack_170 == 0 && *(int *)((longlong)param_1 + 0x34) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      FUN_144a06ca8(ppvVar1,uStack_170 & 0xffffffff);
      if (iVar21 != 0) {
        memcpy(*ppvVar1,pvVar13,lVar22 << 2);
      }
    }
  }
  if ((int)(uint)uStack_170 < 1) goto LAB_146c3b9a5;
  local_d8 = (longlong *)0x0;
  local_d0._0_4_ = 0;
  local_f8 = (longlong *)0x0;
  plStack_f0 = (longlong *)0x0;
  local_d0._4_4_ = 0x80;
  local_c8._0_4_ = 0xffffffff;
  local_c8._4_4_ = 0;
  local_b8 = (undefined8 **)0x0;
  local_b0 = 0;
  local_108 = local_178;
  uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_170);
  FUN_146bc855c(&local_f8,&local_108);
  local_108 = (void *)0x0;
  uStack_100 = 0;
  plVar23 = param_1;
  if (0 < (int)(uint)uStack_170) {
LAB_146c3ba9b:
    local_198 = plVar23;
    bVar31 = -1 < (longlong)uStack_100;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    uVar14 = (uint)uStack_170;
    if (bVar31) {
LAB_146c3bab4:
      local_190 = (ulonglong)uVar14;
      uVar19 = 0;
      plVar23 = param_1;
LAB_146c3babd:
      param_1 = local_198;
      uVar14 = *(uint *)((longlong)local_178 + uVar19 * 4);
      lVar22 = *plVar23;
      lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0x180) + (ulonglong)(uVar14 >> 9) * 8);
      uVar18 = (ulonglong)(uVar14 & 0x1ff);
      local_110 = (longlong **)CONCAT44(local_110._4_4_,*(undefined4 *)(lVar30 + 8 + uVar18 * 0xc));
      local_118 = *(undefined1 **)(lVar30 + uVar18 * 0xc);
      local_19c = uVar14 * 3;
      ppuVar27 = local_b8;
      if (local_b8 == (undefined8 **)0x0) {
        ppuVar27 = &local_c0;
      }
      lVar30 = 0;
      do {
        uVar15 = *(uint *)((longlong)&local_118 + lVar30 * 4);
        lVar25 = *(longlong *)(*(longlong *)(lVar22 + 0x1c0) + (ulonglong)(uVar15 >> 9) * 8);
        uVar24 = (ulonglong)((uVar15 & 0x1ff) << 4);
        uVar15 = *(uint *)(lVar25 + 8 + uVar24);
        if (uVar15 == uVar14) {
          uVar15 = *(uint *)(lVar25 + 0xc + uVar24);
        }
        local_1a8 = uVar19;
        if ((int)plStack_f0 != local_c8._4_4_) {
          for (iVar21 = *(int *)((longlong)ppuVar27 + (ulonglong)(uVar15 & local_b0 - 1U) * 4);
              iVar21 != -1; iVar21 = *(int *)((longlong)local_f8 + (longlong)iVar21 * 0xc + 4)) {
            if (*(uint *)((longlong)local_f8 + (longlong)iVar21 * 0xc) == uVar15)
            goto LAB_146c3bb84;
          }
        }
        if (uVar15 != 0xffffffff) {
          iVar21 = *(int *)(lVar25 + uVar24);
          iVar4 = ((int *)(lVar25 + uVar24))[1];
          lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0x130) + (ulonglong)(uVar14 >> 9) * 8);
          local_180 = *(int *)(lVar30 + 8 + uVar18 * 0xc);
          uVar8 = *(undefined8 *)(lVar30 + uVar18 * 0xc);
          local_188 = uVar8;
          uVar8 = local_188;
          iVar20 = 0;
          iVar28 = 0;
          local_188._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
          if (((int)uVar8 != iVar21) && (iVar28 = 1, local_188._4_4_ != iVar21)) {
            iVar28 = (uint)(local_180 == iVar21) * 3 + -1;
          }
          if (((int)uVar8 != iVar4) && (iVar20 = 1, local_188._4_4_ != iVar4)) {
            iVar20 = (uint)(local_180 == iVar4) * 3 + -1;
          }
          lVar30 = 0;
          goto LAB_146c3bc86;
        }
LAB_146c3bb84:
        lVar30 = lVar30 + 1;
      } while (lVar30 != 3);
      lVar22 = (longlong)(int)(uint)uStack_100;
      uVar15 = (uint)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar15);
      if (uStack_100._4_4_ < uVar15) {
        FUN_1446f48e2(&local_108);
      }
      *(uint *)((longlong)local_108 + lVar22 * 4) = uVar14;
      param_1 = local_198;
      goto LAB_146c3bbf8;
    }
    FUN_14481578e(&local_108,0);
    uVar14 = (uint)uStack_170;
    if (0 < (int)(uint)uStack_170) goto LAB_146c3bab4;
    goto LAB_146c3be27;
  }
LAB_146c3bea4:
  local_b0 = 0;
  if (local_b8 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_f8);
LAB_146c3b9a5:
  DeleteCriticalSection(&local_a0);
  if (local_178 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168[2] != 0) {
    FUN_1400020a8();
  }
  if (local_168[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (lVar30 = lVar17, lVar17 != 3) {
LAB_146c3bc86:
    lVar17 = lVar30 + 1;
    lVar25 = 0;
    if (lVar30 != 2) {
      lVar25 = lVar17;
    }
    iVar5 = *(int *)((longlong)&local_188 + lVar25 * 4);
    iVar29 = *(int *)((longlong)&local_188 + lVar30 * 4);
    if (((iVar29 == iVar21) || (bVar31 = iVar5 == iVar21, iVar5 = iVar29, bVar31)) &&
       (iVar5 == iVar4)) {
      iVar29 = (int)lVar30 + -1;
      if (lVar30 == 0) {
        iVar29 = 2;
      }
      goto LAB_146c3bcd3;
    }
  }
  iVar29 = -1;
LAB_146c3bcd3:
  lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x130) + (ulonglong)(uVar15 >> 9) * 8);
  uVar19 = (ulonglong)(uVar15 & 0x1ff);
  iVar5 = *(int *)(lVar22 + uVar19 * 0xc);
  iVar6 = *(int *)(lVar22 + 4 + uVar19 * 0xc);
  iVar7 = *(int *)(lVar22 + 8 + uVar19 * 0xc);
  iVar26 = 0;
  iVar16 = 0;
  if ((iVar5 != iVar21) && (iVar16 = 1, iVar6 != iVar21)) {
    iVar16 = (uint)(iVar7 == iVar21) * 3 + -1;
  }
  if ((iVar5 != iVar4) && (iVar26 = 1, iVar6 != iVar4)) {
    iVar26 = (uint)(iVar7 == iVar4) * 3 + -1;
  }
  lVar22 = local_198[1];
  lVar30 = (longlong)(int)(iVar16 + uVar15 * 3) * 0x18;
  lVar25 = (longlong)(iVar28 + local_19c) * 0x18;
  *(undefined8 *)(lVar22 + 0x10 + lVar25) = *(undefined8 *)(lVar22 + 0x10 + lVar30);
  uVar12 = ((undefined8 *)(lVar22 + lVar30))[1];
  *(undefined8 *)(lVar22 + lVar25) = *(undefined8 *)(lVar22 + lVar30);
  ((undefined8 *)(lVar22 + lVar25))[1] = uVar12;
  lVar22 = local_198[3];
  *(undefined8 *)(lVar22 + 0x10 + lVar25) = *(undefined8 *)(lVar22 + 0x10 + lVar30);
  uVar12 = ((undefined8 *)(lVar22 + lVar30))[1];
  *(undefined8 *)(lVar22 + lVar25) = *(undefined8 *)(lVar22 + lVar30);
  ((undefined8 *)(lVar22 + lVar25))[1] = uVar12;
  lVar22 = local_198[1];
  lVar30 = (longlong)(int)(iVar26 + uVar15 * 3) * 0x18;
  lVar17 = (longlong)(iVar20 + local_19c) * 0x18;
  *(undefined8 *)(lVar22 + 0x10 + lVar17) = *(undefined8 *)(lVar22 + 0x10 + lVar30);
  uVar12 = ((undefined8 *)(lVar22 + lVar30))[1];
  *(undefined8 *)(lVar22 + lVar17) = *(undefined8 *)(lVar22 + lVar30);
  ((undefined8 *)(lVar22 + lVar17))[1] = uVar12;
  lVar22 = local_198[3];
  *(undefined8 *)(lVar22 + 0x10 + lVar17) = *(undefined8 *)(lVar22 + 0x10 + lVar30);
  uVar12 = ((undefined8 *)(lVar22 + lVar30))[1];
  *(undefined8 *)(lVar22 + lVar17) = *(undefined8 *)(lVar22 + lVar30);
  ((undefined8 *)(lVar22 + lVar17))[1] = uVar12;
  lVar22 = local_198[1];
  lVar30 = (longlong)(iVar29 + local_19c) * 0x18;
  *(undefined8 *)(lVar22 + 0x10 + lVar30) = *(undefined8 *)(lVar22 + 0x10 + lVar25);
  uVar12 = ((undefined8 *)(lVar22 + lVar25))[1];
  *(undefined8 *)(lVar22 + lVar30) = *(undefined8 *)(lVar22 + lVar25);
  ((undefined8 *)(lVar22 + lVar30))[1] = uVar12;
  lVar22 = local_198[3];
  puVar2 = (undefined4 *)(lVar22 + lVar25);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar3 = (undefined4 *)(lVar22 + lVar30);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  *(undefined8 *)(lVar22 + 0x10 + lVar30) = *(undefined8 *)(lVar22 + 0x10 + lVar25);
  local_188 = uVar8;
  FUN_144a7cc9e(&local_f8);
LAB_146c3bbf8:
  uVar19 = local_1a8 + 1;
  plVar23 = param_1;
  if (uVar19 == local_190) goto LAB_146c3be23;
  goto LAB_146c3babd;
LAB_146c3be23:
LAB_146c3be27:
  uVar19 = uStack_170;
  pvVar13 = local_178;
  if ((uint)uStack_100 == (uint)uStack_170) {
    bVar31 = -1 < (longlong)uStack_170;
    uStack_170 = uStack_170 & 0xffffffff00000000;
    if (bVar31) goto LAB_146c3be92;
    FUN_14481578e(&local_178,0);
  }
  else {
    local_178 = local_108;
    uStack_170 = uStack_100;
    local_108 = pvVar13;
    uStack_100 = uVar19;
  }
  plVar23 = local_198;
  if ((int)(uint)uStack_170 < 1) goto LAB_146c3be92;
  goto LAB_146c3ba9b;
LAB_146c3be92:
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_146c3bea4;
}



// FUNCTION 146c3bed4 FUN_146c3bed4 body=199 status=ok
// SIG undefined FUN_146c3bed4(void)

void FUN_146c3bed4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  longlong *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong **local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  local_60 = param_2;
  local_58 = param_3;
  FUN_146c3b410(param_1,iVar1 * 3,0);
  local_48 = &local_78;
  local_88 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_146c5b2c4;
  local_90 = 0;
  local_78 = param_1;
  local_70 = &local_58;
  local_68 = &local_60;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3bf9c FUN_146c3bf9c body=602 status=ok
// SIG undefined FUN_146c3bf9c(void)

void FUN_146c3bf9c(longlong param_1,int param_2,double *param_3,double *param_4,double *param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar6 = DAT_14c8463a8;
  dVar9 = DAT_14c8463a0;
  if (-1 < param_2) {
    uVar2 = param_2 * 3;
    if ((int)(uVar2 + 2) < *(int *)(param_1 + 0x10)) {
      lVar1 = *(longlong *)(param_1 + 8);
      lVar3 = (ulonglong)(uVar2 + 2) * 0x18;
      lVar5 = (ulonglong)uVar2 * 0x18 + 0x18;
      lVar4 = (ulonglong)uVar2 * 0x18;
      dVar9 = *param_3;
      dVar6 = param_3[1];
      dVar10 = param_3[2];
      dVar7 = *(double *)(lVar1 + 0x10 + lVar3) * dVar10 +
              *(double *)(lVar1 + 0x10 + lVar4) * dVar9 + *(double *)(lVar1 + 0x10 + lVar5) * dVar6;
      dVar8 = *(double *)(lVar1 + 8 + lVar3) * dVar10 +
              *(double *)(lVar1 + 8 + lVar4) * dVar9 + *(double *)(lVar1 + 8 + lVar5) * dVar6;
      dVar6 = dVar10 * *(double *)(lVar1 + lVar3) +
              dVar9 * *(double *)(lVar1 + lVar4) + dVar6 * *(double *)(lVar1 + lVar5);
      dVar10 = SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8);
      dVar9 = 1.0 / dVar10;
      if (0.0 < dVar10) {
        dVar6 = dVar6 * dVar9;
        dVar8 = dVar8 * dVar9;
      }
      else {
        dVar6 = 0.0;
        dVar8 = 0.0;
      }
      *param_4 = dVar6;
      param_4[1] = dVar8;
      param_4[2] = (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar7 * dVar9));
      lVar1 = *(longlong *)(param_1 + 0x18);
      dVar9 = *param_3;
      dVar6 = param_3[1];
      dVar10 = param_3[2];
      dVar7 = *(double *)(lVar1 + 0x10 + lVar3) * dVar10 +
              *(double *)(lVar1 + 0x10 + lVar4) * dVar9 + *(double *)(lVar1 + 0x10 + lVar5) * dVar6;
      dVar8 = *(double *)(lVar1 + 8 + lVar3) * dVar10 +
              *(double *)(lVar1 + 8 + lVar4) * dVar9 + *(double *)(lVar1 + 8 + lVar5) * dVar6;
      dVar6 = dVar10 * *(double *)(lVar1 + lVar3) +
              dVar9 * *(double *)(lVar1 + lVar4) + dVar6 * *(double *)(lVar1 + lVar5);
      dVar9 = SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8);
      if (0.0 < dVar9) {
        dVar9 = 1.0 / dVar9;
        *param_5 = dVar6 * dVar9;
        param_5[1] = dVar8 * dVar9;
        param_5[2] = dVar7 * dVar9;
        return;
      }
      *param_5 = 0.0;
      param_5[1] = 0.0;
      param_5[2] = 0.0;
      return;
    }
  }
  param_4[2] = DAT_14c8463b0;
  *param_4 = dVar9;
  param_4[1] = dVar6;
  dVar6 = DAT_14c846390;
  dVar9 = DAT_14c846388;
  param_5[2] = DAT_14c846398;
  *param_5 = dVar9;
  param_5[1] = dVar6;
  return;
}



// FUNCTION 146c3c1f6 FUN_146c3c1f6 body=687 status=ok
// SIG undefined FUN_146c3c1f6(void)

undefined8 FUN_146c3c1f6(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_a8 [40];
  longlong local_80;
  float local_74 [3];
  undefined8 local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong **)(param_2 + 0x208) == (longlong *)0x0) ||
     (iVar2 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xb0))(), iVar2 != 3)) {
    uVar4 = 0;
    goto LAB_146c3c25b;
  }
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x208) + 0x38);
  if (iVar2 < 2) {
    lVar6 = 0;
LAB_146c3c285:
    local_80 = 0;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x30);
    lVar6 = *(longlong *)(lVar10 + 8);
    if (iVar2 == 2) goto LAB_146c3c285;
    local_80 = *(longlong *)(lVar10 + 0x10);
  }
  plVar8 = (longlong *)(param_1 + 8);
  bVar1 = true;
  do {
    bVar7 = bVar1;
    local_50 = &local_68;
    local_58 = &LAB_146c5b1b4;
    local_68 = param_2;
    local_60 = plVar8;
    FUN_146c2fed0(lVar6,&local_58,0);
    uVar3 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U)) {
        uVar15 = 1;
        uVar9 = 1;
        if (1 < (int)uVar3) {
          uVar15 = uVar3;
        }
        do {
          uVar5 = uVar15;
          if (uVar15 == uVar9) break;
          uVar11 = uVar9 >> 9;
          uVar13 = uVar9 & 0x1ff;
          uVar5 = uVar9;
          uVar9 = uVar9 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar11] +
                                             (ulonglong)uVar13 * 2) - 1U));
      }
    }
LAB_146c3c480:
    if (uVar5 != uVar3) {
      uVar15 = uVar5 * 3;
      uVar9 = uVar5 * 3 + 2;
      lVar10 = *(longlong *)(lVar6 + 0x78);
      uVar11 = uVar5 * 3 + 1;
      lVar14 = (longlong)(int)uVar15;
      local_68 = CONCAT44(*(undefined4 *)
                           (*(longlong *)(lVar10 + (ulonglong)(uVar11 >> 9) * 8) +
                           (ulonglong)(uVar11 & 0x1ff) * 4),
                          *(undefined4 *)
                           (*(longlong *)(lVar10 + (ulonglong)(uVar15 >> 9) * 8) +
                           (ulonglong)(uVar15 & 0x1ff) * 4));
      local_60 = (longlong *)
                 CONCAT44(local_60._4_4_,
                          *(undefined4 *)
                           (*(longlong *)(lVar10 + (ulonglong)(uVar9 >> 9) * 8) +
                           (ulonglong)(uVar9 & 0x1ff) * 4));
      lVar10 = 0;
      do {
        lVar12 = lVar10 * 0x18 + *plVar8;
        local_74[0] = (float)*(double *)(lVar12 + lVar14 * 0x18);
        local_74[1] = (float)*(double *)(lVar12 + 8 + lVar14 * 0x18);
        local_74[2] = (float)*(double *)(lVar12 + 0x10 + lVar14 * 0x18);
        iVar2 = *(int *)((longlong)&local_68 + lVar10 * 4);
        lVar12 = 0;
        do {
          uVar15 = iVar2 * 3 + (int)lVar12;
          *(float *)(*(longlong *)(*(longlong *)(lVar6 + 0x48) + (ulonglong)(uVar15 >> 9) * 8) +
                    (ulonglong)(uVar15 & 0x1ff) * 4) = local_74[lVar12];
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      uVar15 = uVar5 + 1;
      if ((int)(uVar5 + 1) < (int)uVar3) {
        uVar15 = uVar3;
      }
      uVar9 = uVar5;
      do {
        uVar5 = uVar15;
        if (uVar15 - 1 == uVar9) break;
        uVar5 = uVar9 + 1;
        uVar9 = uVar5;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar5 >> 9) * 8) +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
      goto LAB_146c3c480;
    }
    uVar4 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    lVar6 = local_80;
    plVar8 = (longlong *)(param_1 + 0x18);
    bVar1 = false;
  } while (bVar7);
LAB_146c3c25b:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146c3c4a6 FUN_146c3c4a6 body=62 status=ok
// SIG undefined FUN_146c3c4a6(void)

void FUN_146c3c4a6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c3c4e4 FUN_146c3c4e4 body=132 status=ok
// SIG undefined FUN_146c3c4e4(void)

void FUN_146c3c4e4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  longlong local_38;
  undefined8 local_30;
  code *local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = &local_38;
  local_48 = &local_18;
  local_18 = 0;
  local_10 = 0;
  local_28 = FUN_142975302;
  local_50 = 0;
  local_38 = param_1;
  local_30 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3c569 FUN_146c3c569 body=822 status=ok
// SIG undefined FUN_146c3c569(void)

void FUN_146c3c569(code *param_1,double *param_2,ulonglong param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  code **local_d8;
  char local_c1;
  longlong local_c0;
  undefined8 local_b8;
  float local_b0;
  code *local_a8;
  ulonglong local_a0;
  double *local_98;
  char *local_90;
  undefined1 *local_88;
  float *local_80;
  float local_78 [3];
  char local_6a;
  undefined1 local_69;
  code *local_68;
  code **local_60;
  code *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_69 = param_1[0x70];
  if (param_5 == '\0') {
    dVar7 = *param_2;
    dVar8 = param_2[1];
    local_6a = true;
    if ((ABS(dVar7 - dVar8) <= 9.999999747378752e-05) &&
       (ABS(dVar7 - param_2[2]) <= 9.999999747378752e-05)) {
      local_6a = 9.999999747378752e-05 < ABS(dVar8 - param_2[2]);
    }
  }
  else {
    dVar7 = *param_2;
    dVar8 = param_2[1];
    local_6a = false;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  local_78[0] = (float)dVar7;
  local_78[1] = (float)dVar8;
  local_78[2] = (float)param_2[2];
  if ((bool)local_6a != false) {
    lVar4 = 0;
    do {
      if (1e-08 < ABS(local_78[lVar4])) {
        local_78[lVar4] = 1.0 / local_78[lVar4];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
  }
  local_90 = &local_6a;
  local_88 = &local_69;
  local_80 = local_78;
  local_d8 = &local_58;
  local_58 = (code *)0x0;
  local_50 = (code **)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = FUN_1429753ec;
  local_e0 = 0;
  local_c1 = param_4;
  local_a8 = param_1;
  local_a0 = param_3;
  local_98 = param_2;
  local_60 = &local_a8;
  FUN_1401f8d10(L"ParallelFor Task",iVar1 * 0x200 + iVar2,1,&local_68);
  if ((local_6a == '\x01') && (*(longlong **)(param_1 + 0x208) != (longlong *)0x0)) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
    if (0 < (int)uVar3) {
      uVar5 = 3;
      if (uVar3 < 3) {
        uVar5 = (ulonglong)uVar3;
      }
      uVar6 = 0;
      do {
        local_b0 = (float)param_2[2];
        local_b8 = (code *)CONCAT44((float)param_2[1],(float)*param_2);
        if (uVar6 == 0) {
          local_b0 = local_78[2];
          local_b8 = (code *)CONCAT44(local_78[1],local_78[0]);
        }
        if ((longlong)uVar6 < (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
          local_c0 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + uVar6 * 8)
          ;
        }
        else {
          local_c0 = 0;
        }
        local_68 = (code *)&local_c0;
        local_60 = (code **)&local_b8;
        local_a8 = (code *)0x0;
        local_a0 = local_a0 & 0xffffffff00000000;
        local_58 = FUN_1429755c8;
        local_e0 = 0;
        local_d8 = &local_a8;
        local_50 = &local_68;
        FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_c0 + 8) * 0x200 + *(int *)(local_c0 + 0xc),
                      1,&local_58);
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
  }
  if ((local_c1 != '\0') && (*param_2 * param_2[1] * param_2[2] < 0.0)) {
    FUN_146c0aee0(param_1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3c8a0 FUN_146c3c8a0 body=391 status=ok
// SIG undefined FUN_146c3c8a0(void)

void FUN_146c3c8a0(code *param_1,code **param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  code **local_98;
  longlong local_90;
  code *local_88;
  code **local_80;
  undefined1 *local_78;
  undefined1 local_69;
  code *local_68;
  code **local_60;
  code *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_69 = param_1[0x70];
  local_78 = &local_69;
  local_60 = &local_88;
  local_98 = &local_58;
  local_58 = (code *)0x0;
  local_50 = (code **)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = FUN_14297573c;
  local_a0 = 0;
  local_88 = param_1;
  local_80 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
  if (*(longlong **)(param_1 + 0x208) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (lVar2 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
          local_90 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + lVar2 * 8)
          ;
        }
        else {
          local_90 = 0;
        }
        local_88 = (code *)0x0;
        local_80 = (code **)((ulonglong)local_80 & 0xffffffff00000000);
        local_58 = FUN_1429758fc;
        local_50 = &local_68;
        local_98 = &local_88;
        local_a0 = 0;
        local_68 = (code *)&local_90;
        local_60 = param_2;
        FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_90 + 8) * 0x200 + *(int *)(local_90 + 0xc),
                      1,&local_58);
        lVar2 = lVar2 + 1;
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
      } while (lVar2 < iVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3ca28 FUN_146c3ca28 body=391 status=ok
// SIG undefined FUN_146c3ca28(void)

void FUN_146c3ca28(code *param_1,code **param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  code **local_98;
  longlong local_90;
  code *local_88;
  code **local_80;
  undefined1 *local_78;
  undefined1 local_69;
  code *local_68;
  code **local_60;
  code *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_69 = param_1[0x70];
  local_78 = &local_69;
  local_60 = &local_88;
  local_98 = &local_58;
  local_58 = (code *)0x0;
  local_50 = (code **)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = FUN_142975a44;
  local_a0 = 0;
  local_88 = param_1;
  local_80 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
  if (*(longlong **)(param_1 + 0x208) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (lVar2 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
          local_90 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + lVar2 * 8)
          ;
        }
        else {
          local_90 = 0;
        }
        local_88 = (code *)0x0;
        local_80 = (code **)((ulonglong)local_80 & 0xffffffff00000000);
        local_58 = FUN_142975c1a;
        local_50 = &local_68;
        local_98 = &local_88;
        local_a0 = 0;
        local_68 = (code *)&local_90;
        local_60 = param_2;
        FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_90 + 8) * 0x200 + *(int *)(local_90 + 0xc),
                      1,&local_58);
        lVar2 = lVar2 + 1;
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
      } while (lVar2 < iVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3cbb0 FUN_146c3cbb0 body=408 status=ok
// SIG undefined FUN_146c3cbb0(void)

void FUN_146c3cbb0(code *param_1,code **param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  code **local_a8;
  longlong local_98;
  code *local_90;
  code **local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 local_69;
  code *local_68;
  code **local_60;
  code *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_69 = param_1[0x70];
  local_78 = &local_69;
  local_60 = &local_90;
  local_a8 = &local_58;
  local_58 = (code *)0x0;
  local_50 = (code **)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = FUN_142975d62;
  local_b0 = 0;
  local_90 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
  if (*(longlong **)(param_1 + 0x208) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (lVar2 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
          local_98 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + lVar2 * 8)
          ;
        }
        else {
          local_98 = 0;
        }
        local_90 = (code *)0x0;
        local_88 = (code **)((ulonglong)local_88 & 0xffffffff00000000);
        local_58 = FUN_142975f4c;
        local_50 = &local_68;
        local_a8 = &local_90;
        local_b0 = 0;
        local_68 = (code *)&local_98;
        local_60 = param_2;
        FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_98 + 8) * 0x200 + *(int *)(local_98 + 0xc),
                      1,&local_58);
        lVar2 = lVar2 + 1;
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
      } while (lVar2 < iVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3cd49 FUN_146c3cd49 body=603 status=ok
// SIG undefined FUN_146c3cd49(void)

void FUN_146c3cd49(code *param_1,code **param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  code **local_a8;
  longlong local_98;
  longlong local_90;
  code *local_88;
  code **local_80;
  undefined1 *local_78;
  undefined1 local_69;
  code *local_68;
  code **local_60;
  code *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_69 = param_1[0x70];
  local_78 = &local_69;
  local_a8 = &local_58;
  local_58 = (code *)0x0;
  local_50 = (code **)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = FUN_1429760a0;
  local_b0 = 0;
  local_88 = param_1;
  local_80 = param_2;
  local_60 = &local_88;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1,
                &local_68);
  lVar4 = *(longlong *)(param_1 + 0x208);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x38))) {
    local_90 = **(longlong **)(lVar4 + 0x30);
    if (local_90 != 0) {
      local_68 = (code *)&local_90;
      local_88 = (code *)0x0;
      local_80 = (code **)((ulonglong)local_80 & 0xffffffff00000000);
      local_58 = FUN_1429762a2;
      local_b0 = 0;
      local_a8 = &local_88;
      local_60 = param_2;
      local_50 = &local_68;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_90 + 8) * 0x200 + *(int *)(local_90 + 0xc),1)
      ;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x208) + 0x38);
      if (((((0 < (int)uVar1) && (uVar1 != 1)) &&
           (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x30), *plVar2 != 0)) &&
          ((2 < uVar1 && (plVar2[1] != 0)))) && (plVar2[2] != 0)) {
        lVar4 = 1;
        bVar5 = false;
        do {
          if (lVar4 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
            local_98 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + lVar4 * 8);
          }
          else {
            local_98 = 0;
          }
          local_68 = (code *)&local_98;
          local_88 = (code *)0x0;
          local_80 = (code **)((ulonglong)local_80 & 0xffffffff00000000);
          local_58 = FUN_1429763f0;
          local_b0 = 0;
          local_a8 = &local_88;
          local_60 = param_2;
          local_50 = &local_68;
          FUN_1401f8d10(L"ParallelFor Task",
                        *(int *)(local_98 + 8) * 0x200 + *(int *)(local_98 + 0xc),1,&local_58);
          lVar4 = 2;
          bVar3 = !bVar5;
          bVar5 = true;
        } while (bVar3);
      }
    }
  }
  if ((param_3 != '\0') && ((double)param_2[7] * (double)param_2[8] * (double)param_2[9] < 0.0)) {
    FUN_146c0aee0(param_1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3cfa5 FUN_146c3cfa5 body=603 status=ok
// SIG undefined FUN_146c3cfa5(void)

void FUN_146c3cfa5(code *param_1,code **param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  code **local_a8;
  longlong local_98;
  longlong local_90;
  code *local_88;
  code **local_80;
  undefined1 *local_78;
  undefined1 local_69;
  code *local_68;
  code **local_60;
  code *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_69 = param_1[0x70];
  local_78 = &local_69;
  local_a8 = &local_58;
  local_58 = (code *)0x0;
  local_50 = (code **)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = FUN_1429765ae;
  local_b0 = 0;
  local_88 = param_1;
  local_80 = param_2;
  local_60 = &local_88;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1,
                &local_68);
  lVar4 = *(longlong *)(param_1 + 0x208);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x38))) {
    local_90 = **(longlong **)(lVar4 + 0x30);
    if (local_90 != 0) {
      local_68 = (code *)&local_90;
      local_88 = (code *)0x0;
      local_80 = (code **)((ulonglong)local_80 & 0xffffffff00000000);
      local_58 = FUN_142976750;
      local_b0 = 0;
      local_a8 = &local_88;
      local_60 = param_2;
      local_50 = &local_68;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_90 + 8) * 0x200 + *(int *)(local_90 + 0xc),1)
      ;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x208) + 0x38);
      if (((((0 < (int)uVar1) && (uVar1 != 1)) &&
           (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x30), *plVar2 != 0)) &&
          ((2 < uVar1 && (plVar2[1] != 0)))) && (plVar2[2] != 0)) {
        lVar4 = 1;
        bVar5 = false;
        do {
          if (lVar4 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
            local_98 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + lVar4 * 8);
          }
          else {
            local_98 = 0;
          }
          local_68 = (code *)&local_98;
          local_88 = (code *)0x0;
          local_80 = (code **)((ulonglong)local_80 & 0xffffffff00000000);
          local_58 = FUN_14297689e;
          local_b0 = 0;
          local_a8 = &local_88;
          local_60 = param_2;
          local_50 = &local_68;
          FUN_1401f8d10(L"ParallelFor Task",
                        *(int *)(local_98 + 8) * 0x200 + *(int *)(local_98 + 0xc),1,&local_58);
          lVar4 = 2;
          bVar3 = !bVar5;
          bVar5 = true;
        } while (bVar3);
      }
    }
  }
  if ((param_3 != '\0') && ((double)param_2[7] * (double)param_2[8] * (double)param_2[9] < 0.0)) {
    FUN_146c0aee0(param_1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3d201 FUN_146c3d201 body=33 status=ok
// SIG undefined FUN_146c3d201(void)

void FUN_146c3d201(undefined8 param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x40) * *(double *)(param_2 + 0x48);
  if (0.0 <= dVar1) {
    return;
  }
  FUN_146c0aee0(dVar1,0);
  return;
}



// FUNCTION 146c3d222 FUN_146c3d222 body=307 status=ok
// SIG undefined FUN_146c3d222(void)

void FUN_146c3d222(code *param_1,ulonglong param_2,code **param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  code **local_88;
  longlong local_78;
  code *local_70;
  ulonglong local_68;
  undefined1 *local_60;
  code **local_58;
  undefined1 local_49;
  code *local_48;
  code **local_40;
  code *local_38;
  code **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_49 = param_1[0x70];
  local_60 = &local_49;
  local_88 = &local_38;
  local_38 = (code *)0x0;
  local_30 = (code **)((ulonglong)local_30 & 0xffffffff00000000);
  local_48 = FUN_142976a4c;
  local_90 = 0;
  local_70 = param_1;
  local_68 = param_2;
  local_58 = param_3;
  local_40 = &local_70;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1,
                &local_48);
  lVar1 = *(longlong *)(param_1 + 0x208);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x38))) {
    local_78 = **(longlong **)(lVar1 + 0x30);
    if (local_78 != 0) {
      local_48 = (code *)&local_78;
      local_70 = (code *)0x0;
      local_68 = local_68 & 0xffffffff00000000;
      local_38 = FUN_142976c44;
      local_90 = 0;
      local_88 = &local_70;
      local_40 = param_3;
      local_30 = &local_48;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_78 + 8) * 0x200 + *(int *)(local_78 + 0xc),1)
      ;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3d356 FUN_146c3d356 body=94 status=ok
// SIG undefined FUN_146c3d356(void)

void FUN_146c3d356(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = (longlong)iVar1;
  if (lVar4 == 0) {
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x30);
  }
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(param_3 >> 9) * 8) +
           (ulonglong)(param_3 & 0x1ff) * 4);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1406b704c((longlong *)(param_1 + 8),iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  *(uint *)(lVar3 + lVar4 * 8) = param_3;
  *(undefined4 *)(lVar3 + 4 + lVar4 * 8) = uVar2;
  return;
}



// FUNCTION 146c3d3b4 FUN_146c3d3b4 body=216 status=ok
// SIG undefined FUN_146c3d3b4(void)

void FUN_146c3d3b4(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar6 = (int)param_3[1];
  iVar7 = *(int *)(param_1 + 0x20) + iVar6;
  if (-1 < iVar7) {
    plVar1 = (longlong *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x24) < iVar7) {
      FUN_146b9c00c(plVar1);
      iVar6 = (int)param_3[1];
    }
    if (iVar6 != 0) {
      lVar4 = *param_3;
      lVar8 = 0;
      do {
        uVar2 = *(uint *)(lVar4 + lVar8);
        uVar3 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
                 (ulonglong)(uVar2 & 0x1ff) * 4);
        iVar7 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar7 + 1U) {
          FUN_1406b704c(plVar1,iVar7);
        }
        lVar5 = *plVar1;
        *(uint *)(lVar5 + (longlong)iVar7 * 8) = uVar2;
        *(undefined4 *)(lVar5 + 4 + (longlong)iVar7 * 8) = uVar3;
        lVar8 = lVar8 + 4;
      } while ((longlong)iVar6 << 2 != lVar8);
    }
    *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 146c3d48e FUN_146c3d48e body=145 status=ok
// SIG undefined FUN_146c3d48e(void)

undefined8 FUN_146c3d48e(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (ulonglong)(param_3 ^ 1) * 0x10;
  lVar3 = (longlong)*(int *)(param_1 + 0x10 + lVar4);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 8 + lVar4);
    lVar5 = 0;
    do {
      uVar1 = *(uint *)(lVar4 + lVar5);
      if ((-1 < (int)uVar1) &&
         (lVar2 = *(longlong *)(param_2 + 0x10),
         (int)uVar1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
           (ulonglong)(uVar1 & 0x1ff) * 4) = *(undefined4 *)(lVar4 + 4 + lVar5);
        }
      }
      lVar5 = lVar5 + 8;
    } while (lVar3 * 8 != lVar5);
  }
  *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_1 + ((ulonglong)param_3 ^ 0x29));
  return 1;
}



// FUNCTION 146c3d520 FUN_146c3d520 body=28 status=ok
// SIG undefined FUN_146c3d520(void)

undefined8 * FUN_146c3d520(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146c3d53c();
  return param_1;
}



// FUNCTION 146c3d53c FUN_146c3d53c body=78 status=ok
// SIG undefined FUN_146c3d53c(void)

void FUN_146c3d53c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  *param_1 = 0;
  param_1[1] = param_2;
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (lVar1 != 0) {
    cVar3 = FUN_146bce360(lVar1,DAT_14c9920c0);
    if (cVar3 != '\0') {
      uVar2 = FUN_146c3d58a(lVar1,DAT_14c9920c0);
      *param_1 = uVar2;
    }
  }
  return;
}



// FUNCTION 146c3d58a FUN_146c3d58a body=146 status=ok
// SIG undefined FUN_146c3d58a(void)

longlong FUN_146c3d58a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x120);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x128) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar2 * 0x18);
        if (*plVar3 == param_2) goto LAB_146c3d59a;
        iVar2 = (int)plVar3[2];
      } while (iVar2 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_146c3d59a:
  return plVar3[1];
}



// FUNCTION 146c3d61c FUN_146c3d61c body=15 status=ok
// SIG undefined FUN_146c3d61c(void)

undefined8 FUN_146c3d61c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x30));
  }
  return 0;
}



// FUNCTION 146c3d62c FUN_146c3d62c body=32 status=ok
// SIG undefined FUN_146c3d62c(void)

ulonglong FUN_146c3d62c(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_2 & 0xffffffff;
  if (*param_1 != 0) {
    uVar1 = (ulonglong)
            *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + (param_2 >> 9 & 0x7fffff) * 8)
                     + (ulonglong)((uint)param_2 & 0x1ff) * 4);
  }
  return uVar1;
}



// FUNCTION 146c3d64c FUN_146c3d64c body=243 status=ok
// SIG undefined FUN_146c3d64c(void)

ulonglong FUN_146c3d64c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_2 + 0x208);
  bVar5 = lVar1 != 0 &&
          *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24) <= *(int *)(param_1 + 1);
  if (bVar5) {
    cVar3 = FUN_146bce360(lVar1,DAT_14c9920c0);
    if (cVar3 != '\0') {
      FUN_146c3d890(lVar1,DAT_14c9920c0);
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_149f3bae0;
    puVar4[2] = param_2;
    FUN_141040b84(puVar4 + 3);
    *(undefined1 *)(puVar4 + 6) = 0;
    uVar2 = DAT_14c9920c0;
    puVar4[1] = DAT_14c9920c0;
    FUN_146c18272(*(undefined8 *)(param_2 + 0x208),uVar2,puVar4);
    local_38 = *param_1;
    local_30 = *(undefined4 *)(param_1 + 1);
    FUN_146c3d740(puVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c3d740 FUN_146c3d740 body=273 status=ok
// SIG undefined FUN_146c3d740(void)

void FUN_146c3d740(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_1411b328a(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar5 = 0;
  if ((uVar2 != 0) && (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar3 = 1;
    uVar4 = 1;
    if (1 < (int)uVar2) {
      uVar3 = uVar2;
    }
    do {
      uVar5 = uVar3;
      if (uVar3 == uVar4) break;
      uVar6 = uVar4 >> 9;
      uVar7 = uVar4 & 0x1ff;
      uVar5 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar6] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  do {
    if (uVar5 == uVar2) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
     (ulonglong)(uVar5 & 0x1ff) * 4) = *(undefined4 *)(*param_2 + (longlong)(int)uVar5 * 4);
    uVar3 = uVar5 + 1;
    if ((int)(uVar5 + 1) < (int)uVar2) {
      uVar3 = uVar2;
    }
    uVar4 = uVar5;
    do {
      uVar5 = uVar3;
      if (uVar3 - 1 == uVar4) break;
      uVar5 = uVar4 + 1;
      uVar4 = uVar5;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar1 + 0x28) +
                                           (ulonglong)(uVar5 >> 9) * 8) +
                                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 146c3d852 FUN_146c3d852 body=62 status=ok
// SIG undefined FUN_146c3d852(void)

void FUN_146c3d852(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x208);
  if (lVar1 != 0) {
    cVar2 = FUN_146bce360(lVar1,DAT_14c9920c0);
    if (cVar2 != '\0') {
      FUN_146c3d890(lVar1,DAT_14c9920c0);
      return;
    }
  }
  return;
}



// FUNCTION 146c3d890 FUN_146c3d890 body=261 status=ok
// SIG undefined FUN_146c3d890(void)

void FUN_146c3d890(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    lVar2 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x120);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x128) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xe0);
      iVar6 = iVar4;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x18) == param_2) goto LAB_146c3d952;
        iVar6 = *(int *)(lVar2 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  goto LAB_146c3d932;
  while (iVar4 = (int)plVar5[2], iVar4 != -1) {
LAB_146c3d952:
    plVar5 = (longlong *)(lVar2 + (longlong)iVar4 * 0x18);
    if (*plVar5 == param_2) goto LAB_146c3d96c;
  }
  plVar5 = (longlong *)0x0;
LAB_146c3d96c:
  local_28 = plVar5[1];
  local_20 = &local_28;
  FUN_146c4dcb2(param_1 + 8);
  FUN_146c4597e((longlong *)(param_1 + 0xe0),param_2);
LAB_146c3d932:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c3d996 FUN_146c3d996 body=4638 status=ok
// SIG undefined FUN_146c3d996(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_146c3d996(longlong param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Src;
  char cVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int **ppiVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  bool bVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auStack_468 [32];
  longlong *local_448;
  undefined1 **local_440;
  int ****local_438;
  undefined8 uStack_430;
  longlong *local_428;
  int local_418;
  undefined1 local_410 [24];
  int ****local_3f8;
  undefined8 local_3f0;
  longlong *local_3e8;
  undefined1 *local_3e0;
  int *****local_3d8;
  undefined1 *local_3d0;
  int ****local_3c8;
  uint local_3bc;
  longlong local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8;
  ulonglong uStack_3a0;
  void *local_398;
  undefined8 uStack_390;
  longlong local_388;
  longlong lStack_380;
  undefined8 local_378;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  int ****local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2ac [4];
  undefined8 local_2a8;
  int local_2a0;
  int local_29c;
  int **local_298;
  undefined8 local_290;
  undefined8 *puStack_288;
  uint local_280;
  int iStack_27c;
  undefined8 uStack_278;
  longlong local_270;
  longlong *local_268;
  longlong local_260;
  longlong local_258 [3];
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230;
  int **local_228;
  undefined8 *local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong local_208 [2];
  int **local_1f8;
  int *local_1e8 [4];
  int *local_1c8;
  int local_1c0;
  int local_1bc;
  longlong *local_1b8;
  longlong local_1a8 [4];
  int ****local_188;
  int *local_178;
  undefined8 uStack_170;
  undefined8 local_168 [2];
  undefined8 local_158;
  int local_150;
  undefined8 local_14c;
  int local_144;
  undefined1 local_140 [8];
  undefined1 *local_138;
  int local_130;
  undefined1 *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined **local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  longlong local_e8;
  undefined4 local_e0;
  _RTL_CRITICAL_SECTION local_d8;
  double local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  dVar1 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x20);
  *(double *)(param_1 + 0x50) = dVar1 * dVar1;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_128 = (undefined1 *)CONCAT44(local_128._4_4_,0xffffffff);
  FUN_1448156a8(&local_2d8,&local_128,
                *(int *)(*(longlong *)(param_1 + 8) + 0x1d0) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x1d4));
  lVar20 = *(longlong *)(param_1 + 8);
  local_118 = 0;
  local_108 = &PTR_LAB_149f36400;
  local_100 = (undefined4)lVar20;
  uStack_fc = (undefined4)((ulonglong)lVar20 >> 0x20);
  local_128 = &LAB_146be5292;
  FUN_146be50a2(lVar20 + 0x1d0,&local_228,&local_128);
  FUN_146be4fdc(&local_228,&local_128);
  local_1c0 = *local_1e8[0] * 0x200 + local_1e8[0][1];
  local_178 = local_1e8[0];
  uStack_170 = CONCAT44(local_1c0,local_1c0);
  local_1c8 = local_1e8[0];
  local_1bc = local_1c0;
  FUN_146be5300(&local_298,&local_1c8,&local_178,&local_228);
  if ((int)uStack_120 != (uint)local_290) {
    iVar10 = (int)uStack_120;
    do {
      FUN_146c13ee2(*(undefined8 *)(param_1 + 8),&local_178,iVar10,0x3fe0000000000000);
      uVar23 = uStack_2c0;
      iVar16 = (int)uStack_2c0;
      uVar21 = (int)uStack_2c0 + 1;
      uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar21);
      if (uStack_2c0._4_4_ < uVar21) {
        FUN_1403e3958(&local_2c8,uVar23 & 0xffffffff);
      }
      *(undefined8 *)(local_2c8 + 0x10 + (longlong)iVar16 * 0x18) = local_168[0];
      puVar9 = (undefined8 *)(local_2c8 + (longlong)iVar16 * 0x18);
      *puVar9 = local_178;
      puVar9[1] = uStack_170;
      *(int *)(local_2d8 + (longlong)iVar10 * 4) = iVar16;
      FUN_146be53a8(&local_128);
      iVar10 = (int)uStack_120;
    } while ((int)uStack_120 != (uint)local_290);
  }
  if (uStack_278 != (undefined **)0x0) {
    plVar13 = local_268;
    if (local_268 == (longlong *)0x0) {
      plVar13 = local_258;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_108 != (undefined **)0x0) {
    plVar13 = (longlong *)CONCAT44(uStack_f4,local_f8);
    if ((longlong *)CONCAT44(uStack_f4,local_f8) == (longlong *)0x0) {
      plVar13 = &local_e8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_228 != (int **)0x0) {
    if (local_218 == (longlong *)0x0) {
      local_218 = local_208;
    }
    (**(code **)(*local_218 + 0x10))();
  }
  *(int *)(param_1 + 0x28) = (int)uStack_2c0;
  iVar10 = 0x100;
  if ((int)uStack_2c0 < 0x2711) {
    iVar10 = (uint)(1000 < (int)uStack_2c0) * 0x40 + 0x40;
  }
  iVar16 = 0x200;
  if ((int)uStack_2c0 < 0x186a1) {
    iVar16 = iVar10;
  }
  FUN_145c688c4(*(undefined8 *)(param_1 + 8),&local_308,1);
  dVar26 = (double)(-(ulonglong)(0.0 <= local_2e0 - local_2f8) & (ulonglong)(local_2e0 - local_2f8))
  ;
  dVar28 = (double)(-(ulonglong)(0.0 <= local_2e8 - local_300) & (ulonglong)(local_2e8 - local_300))
  ;
  uVar23 = -(ulonglong)(dVar26 <= dVar28);
  dVar26 = (double)(~uVar23 & (ulonglong)dVar26 | uVar23 & (ulonglong)dVar28);
  dVar28 = (double)(-(ulonglong)(0.0 <= local_2f0 - local_308) & (ulonglong)(local_2f0 - local_308))
  ;
  uVar23 = -(ulonglong)(dVar26 <= dVar28);
  dVar28 = (double)(uVar23 & (ulonglong)dVar28 | ~uVar23 & (ulonglong)dVar26) / (double)iVar16;
  dVar26 = 1e-08;
  if (1e-08 <= dVar28) {
    dVar26 = dVar28;
  }
  local_108 = (undefined **)0x0;
  local_100 = 0;
  local_128 = (undefined1 *)0x0;
  uStack_120 = 0;
  uStack_fc = 0x80;
  local_f8 = 0xffffffff;
  uStack_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  InitializeCriticalSection(&local_d8);
  SetCriticalSectionSpinCount(&local_d8,4000);
  local_a8 = 0xffffffff;
  local_398 = (void *)0x0;
  uStack_390 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_b0 = dVar26;
  FUN_14481578e(&local_3a8,0x400);
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_298 = (int **)0x0;
  FUN_146c3ebb6(&local_3b8,&local_298,
                *(int *)(*(longlong *)(param_1 + 8) + 0x1d0) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x1d4));
  local_158 = 0;
  local_150 = 0;
  local_178 = (int *)0x0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = (undefined1 *)0x0;
  local_130 = 0;
  local_270 = *(longlong *)(param_1 + 8);
  puStack_288 = (undefined8 *)0x0;
  uStack_278 = &PTR_LAB_149f36400;
  local_298 = (int **)&LAB_146be5292;
  FUN_146be50a2(local_270 + 0x1d0,&local_1c8,&local_298);
  FUN_146be4fdc(&local_1c8,&local_298);
  iVar10 = *(int *)local_188 * 0x200 + *(int *)((longlong)local_188 + 4);
  local_438 = local_188;
  uStack_430 = (double)CONCAT44(iVar10,iVar10);
  iVar10 = *(int *)local_188 * 0x200 + *(int *)((longlong)local_188 + 4);
  local_328 = local_188;
  uStack_320 = CONCAT44(iVar10,iVar10);
  FUN_146be5300(&local_228,&local_328,&local_438,&local_1c8);
  if ((uint)local_290 != (uint)local_220) {
    uVar23 = -(ulonglong)(0.0 < dVar2);
    dVar1 = (double)(~uVar23 & (ulonglong)(dVar1 + dVar1) | (ulonglong)dVar2 & uVar23);
    uVar23 = -(ulonglong)(dVar26 <= dVar1);
    do {
      lVar20 = (longlong)*(int *)(local_2d8 + (longlong)(int)(uint)local_290 * 4);
      puVar9 = (undefined8 *)(local_2c8 + lVar20 * 0x18);
      local_438 = (int ****)*puVar9;
      uStack_430 = (double)puVar9[1];
      local_428 = *(longlong **)(local_2c8 + 0x10 + lVar20 * 0x18);
      bVar22 = (longlong)uStack_3a0 < 0;
      uStack_3a0 = uStack_3a0 & 0xffffffff00000000;
      local_3bc = (uint)local_290;
      if (bVar22) {
        FUN_14481578e(&local_3a8,0);
      }
      local_3d0 = &LAB_146c5d3ca;
      local_3f8 = (int ****)&local_438;
      local_3f0 = (uint *)&local_2c8;
      local_3e8 = &local_2d8;
      local_3e0 = &LAB_142976dde;
      local_440 = &local_3d0;
      local_448 = &local_3a8;
      local_3d8 = &local_3f8;
      local_3c8 = (int ****)&local_2a8;
      FUN_146c3ec28(&local_128,local_3f8,~uVar23 & (ulonglong)dVar1 | (ulonglong)dVar26 & uVar23,
                    &local_3e0);
      auVar24._0_8_ = (double)local_428 / local_b0;
      auVar24._8_8_ = 0;
      auVar24 = roundsd(auVar24,auVar24,9);
      local_2a0 = (int)auVar24._0_8_;
      auVar27._0_8_ = uStack_430 / local_b0;
      auVar27._8_8_ = 0;
      auVar27 = roundsd(auVar27,auVar27,9);
      auVar25._0_8_ = (double)local_438 / local_b0;
      auVar25._8_8_ = 0;
      auVar24 = roundsd(auVar25,auVar25,9);
      local_2a8 = (int ****)CONCAT44((int)auVar27._0_8_,(int)auVar24._0_8_);
      local_3f0 = &local_3bc;
      local_3f8 = (int ****)&local_2a8;
      FUN_146be634e(&local_128,local_2ac,&local_3f8,0);
      iVar10 = (int)uStack_3a0;
      uVar17 = uStack_3a0 & 0xffffffff;
      if (uVar17 != 0) {
        lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        uVar14 = *(ulonglong *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                    (ulonglong)(local_3bc >> 9) * 8) + (ulonglong)((local_3bc & 0x1ff) << 4));
        lVar6 = *(longlong *)(lVar20 + (uVar14 >> 9 & 0x7fffff) * 8);
        puVar9 = (undefined8 *)(lVar6 + (uVar14 & 0x1ff) * 0x18);
        local_328 = (int ****)*puVar9;
        uStack_320 = puVar9[1];
        local_318 = *(undefined8 *)(lVar6 + 0x10 + (uVar14 & 0x1ff) * 0x18);
        lVar20 = *(longlong *)(lVar20 + (uVar14 >> 0x29) * 8);
        uVar14 = uVar14 >> 0x20 & 0x1ff;
        local_338 = *(undefined8 *)(lVar20 + 0x10 + uVar14 * 0x18);
        puVar9 = (undefined8 *)(lVar20 + uVar14 * 0x18);
        local_348 = *puVar9;
        uStack_340 = puVar9[1];
        bVar22 = (longlong)uStack_390 < 0;
        uStack_390 = uStack_390 & 0xffffffff00000000;
        if (bVar22) {
          FUN_14481578e(&local_398,0);
        }
        if (0 < iVar10) {
          uVar14 = 0;
          do {
            lVar7 = local_3a8;
            uVar21 = *(uint *)(local_3a8 + uVar14 * 4);
            local_3f8 = (int ****)CONCAT44(local_3f8._4_4_,uVar21);
            lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
            uVar15 = *(ulonglong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                        (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)((uVar21 & 0x1ff) << 4));
            lVar6 = *(longlong *)(lVar20 + (uVar15 >> 9 & 0x7fffff) * 8);
            local_358 = *(undefined8 *)(lVar6 + 0x10 + (uVar15 & 0x1ff) * 0x18);
            puVar9 = (undefined8 *)(lVar6 + (uVar15 & 0x1ff) * 0x18);
            local_368 = *puVar9;
            uStack_360 = puVar9[1];
            lVar20 = *(longlong *)(lVar20 + (uVar15 >> 0x29) * 8);
            uVar15 = uVar15 >> 0x20 & 0x1ff;
            local_378 = *(undefined8 *)(lVar20 + 0x10 + uVar15 * 0x18);
            plVar13 = (longlong *)(lVar20 + uVar15 * 0x18);
            local_388 = *plVar13;
            lStack_380 = plVar13[1];
            local_448 = &local_388;
            cVar8 = FUN_146c3ef10(param_1,&local_328,&local_348,&local_368);
            if (cVar8 != '\0') {
              lVar20 = (longlong)(int)uStack_390;
              uVar21 = (int)uStack_390 + 1;
              uStack_390 = CONCAT44(uStack_390._4_4_,uVar21);
              if (uStack_390._4_4_ < uVar21) {
                FUN_1446f48e2(&local_398);
              }
              lVar6 = local_3b8;
              *(undefined4 *)((longlong)local_398 + lVar20 * 4) =
                   *(undefined4 *)(lVar7 + uVar14 * 4);
              lVar20 = (longlong)(int)local_3f8;
              plVar13 = *(longlong **)(local_3b8 + lVar20 * 8);
              if (plVar13 == (longlong *)0x0) {
                puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
                *puVar9 = 0;
                puVar9[1] = 0;
                *(undefined8 **)(lVar6 + lVar20 * 8) = puVar9;
                FUN_1447cbafe(&local_178,&local_2a8,&local_3f8,0);
                plVar13 = *(longlong **)(local_3b8 + (longlong)(int)local_3f8 * 8);
              }
              lVar20 = plVar13[1];
              uVar21 = (int)lVar20 + 1;
              *(uint *)(plVar13 + 1) = uVar21;
              if (*(uint *)((longlong)plVar13 + 0xc) < uVar21) {
                FUN_1446f48e2(plVar13);
              }
              *(uint *)(*plVar13 + (longlong)(int)lVar20 * 4) = local_3bc;
            }
            uVar14 = uVar14 + 1;
          } while (uVar17 != uVar14);
        }
        uVar17 = uStack_390;
        iVar10 = (int)uStack_390;
        lVar20 = (longlong)(int)uStack_390;
        if (0 < lVar20) {
          puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          _Src = local_398;
          *puVar9 = 0;
          *(int *)(puVar9 + 1) = iVar10;
          FUN_144a06ca8(puVar9,uVar17 & 0xffffffff,0);
          memcpy((void *)*puVar9,_Src,lVar20 << 2);
          *(undefined8 **)(local_3b8 + (longlong)(int)local_3bc * 8) = puVar9;
          FUN_1447cbafe(&local_178,&local_3f8,&local_3bc,0);
        }
      }
      FUN_146be53a8(&local_298);
    } while ((uint)local_290 != (uint)local_220);
  }
  if (local_208[0] != 0) {
    ppiVar12 = local_1f8;
    if (local_1f8 == (int **)0x0) {
      ppiVar12 = local_1e8;
    }
    (**(code **)(*ppiVar12 + 4))();
  }
  if (uStack_278 != (undefined **)0x0) {
    plVar13 = local_268;
    if (local_268 == (longlong *)0x0) {
      plVar13 = local_258;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_1c8 != (int *)0x0) {
    plVar13 = local_1b8;
    if (local_1b8 == (longlong *)0x0) {
      plVar13 = local_1a8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  FUN_146c3f08a(&local_438);
  iVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x1d0);
  iVar16 = *(int *)(*(longlong *)(param_1 + 8) + 0x1d4);
  FUN_146bd223a(&uStack_430);
  local_298 = (int **)CONCAT44(local_298._4_4_,0xffffffff);
  FUN_1448156a8(local_410,&local_298,iVar10 * 0x200 + iVar16);
  local_418 = 0;
  local_228 = (int **)&DAT_100000000;
  local_220 = local_168;
  local_218._0_4_ = 0xffffffff;
  local_218._4_4_ = 0;
  local_210 = 0;
  iVar10 = 0;
  if (local_150 != 0) {
    FUN_1449c0562(&local_228);
    iVar10 = local_150;
  }
  local_280 = (uint)local_218;
  iStack_27c = local_218._4_4_;
  uStack_278 = (undefined **)CONCAT44(local_20c,local_210);
  local_290 = local_228;
  puStack_288 = local_220;
  local_298 = &local_178;
  if ((local_218._4_4_ != iVar10) || (local_220 != local_168)) {
    do {
      iVar16 = (*local_298)[(longlong)iStack_27c * 3];
      puVar9 = *(undefined8 **)(local_3b8 + (longlong)iVar16 * 8);
      iVar11 = *(int *)(puVar9 + 1);
      if (*(char *)(param_1 + 0x18) == '\x01') {
        if (((iVar11 == 1) &&
            (puVar9 = *(undefined8 **)(local_3b8 + (longlong)*(int *)*puVar9 * 8),
            *(int *)(puVar9 + 1) == 1)) && (*(int *)*puVar9 == iVar16)) {
          iVar11 = 1;
          goto LAB_146c3e668;
        }
      }
      else {
LAB_146c3e668:
        FUN_146b9cbf0(&local_438,(longlong)iVar16,(float)iVar11);
      }
      local_280 = local_280 & ~local_290._4_4_;
      FUN_1449c0562(&local_290);
    } while (local_298 != &local_178 || (puStack_288 != local_168 || iStack_27c != iVar10));
  }
  do {
    do {
      do {
        if (local_418 < 1) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          local_270 = *(longlong *)(param_1 + 8);
          puStack_288 = (undefined8 *)0x0;
          uStack_278 = &PTR_LAB_149f36400;
          local_298 = (int **)&LAB_146be5292;
          FUN_146be50a2(local_270 + 0x1d0,&local_1c8);
          FUN_146be4fdc(&local_1c8,&local_298);
          local_2a0 = *(int *)local_188 * 0x200 + *(int *)((longlong)local_188 + 4);
          local_3f8 = local_188;
          local_3f0 = (uint *)CONCAT44(local_2a0,local_2a0);
          local_2a8 = local_188;
          local_29c = local_2a0;
          FUN_146be5300(&local_228,&local_2a8,&local_3f8,&local_1c8);
          if ((uint)local_290 != (uint)local_220) {
            do {
              *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
              FUN_146be53a8(&local_298);
            } while ((uint)local_290 != (uint)local_220);
          }
          if (local_208[0] != 0) {
            if (local_1f8 == (int **)0x0) {
              local_1f8 = local_1e8;
            }
            (**(code **)(*local_1f8 + 4))();
          }
          if (uStack_278 != (undefined **)0x0) {
            if (local_268 == (longlong *)0x0) {
              local_268 = local_258;
            }
            (**(code **)(*local_268 + 0x10))();
          }
          if (local_1c8 != (int *)0x0) {
            if (local_1b8 == (longlong *)0x0) {
              local_1b8 = local_1a8;
            }
            (**(code **)(*local_1b8 + 0x10))();
          }
          FUN_146b9cd14(&local_438);
          local_130 = 0;
          if (local_138 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_178);
          if (local_3b8 != 0) {
            FUN_1400020a8();
          }
          if (local_3a8 != 0) {
            FUN_1400020a8();
          }
          if (local_398 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_146be6294(&local_128);
          if (local_2d8 != 0) {
            FUN_1400020a8();
          }
          if (local_2c8 != 0) {
            FUN_1400020a8();
          }
          if ((local_a0 ^ (ulonglong)auStack_468) == DAT_14c707940) {
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        uVar21 = *(uint *)(*local_428 + 0xc);
        uVar23 = (ulonglong)uVar21;
        FUN_146bd26ea(&local_438,1);
        local_1c8 = (int *)CONCAT44(local_1c8._4_4_,uVar21);
      } while (((int)uVar21 < 0) ||
              (lVar20 = *(longlong *)(param_1 + 8),
              *(int *)(lVar20 + 0x1d0) * 0x200 + *(int *)(lVar20 + 0x1d4) <= (int)uVar21));
    } while ((0xfffd < (ushort)(*(short *)(*(longlong *)
                                            (*(longlong *)(lVar20 + 0x1d8) +
                                            (ulonglong)(uVar21 >> 9) * 8) +
                                          (ulonglong)(uVar21 & 0x1ff) * 2) - 1U)) ||
            ((plVar13 = *(longlong **)(local_3b8 + uVar23 * 8), plVar13 == (longlong *)0x0 ||
             ((int)uStack_170 == local_144))));
    puVar18 = local_138;
    if (local_138 == (undefined1 *)0x0) {
      puVar18 = local_140;
    }
    for (iVar10 = *(int *)(puVar18 + (ulonglong)(local_130 + 0x7fffffffU & uVar21) * 4);
        iVar10 != -1; iVar10 = local_178[(longlong)iVar10 * 3 + 1]) {
      if (local_178[(longlong)iVar10 * 3] == uVar21) {
        if (*(int *)(*(longlong *)(*(longlong *)(lVar20 + 0x1c0) + (ulonglong)(uVar21 >> 9) * 8) +
                     0xc + (ulonglong)((uVar21 & 0x1ff) << 4)) == -1) {
          iVar10 = (int)plVar13[1];
          if (0 < iVar10) {
            bVar22 = false;
            uVar21 = 0;
            do {
              lVar20 = (longlong)(int)uVar21;
              uVar3 = *(uint *)(*plVar13 + lVar20 * 4);
              uVar23 = (ulonglong)uVar3;
              if ((-1 < (int)uVar3) &&
                 (plVar4 = *(longlong **)(param_1 + 8),
                 (int)uVar3 < (int)plVar4[0x3a] * 0x200 + *(int *)((longlong)plVar4 + 0x1d4))) {
                if (((ushort)(*(short *)(*(longlong *)(plVar4[0x3b] + (ulonglong)(uVar3 >> 9) * 8) +
                                        (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) &&
                   (*(int *)(*(longlong *)(plVar4[0x38] + (ulonglong)(uVar3 >> 9) * 8) + 0xc +
                            (ulonglong)((uVar3 & 0x1ff) << 4)) == -1)) {
                  plVar5 = *(longlong **)(param_1 + 0x48);
                  if (plVar5 == (longlong *)0x0) {
LAB_146c3e1d8:
                    local_280 = 0xffffffff;
                    iStack_27c = -1;
                    uStack_278 = (undefined **)0xffffffffffffffff;
                    local_290 = (int **)0xffffffffffffffff;
                    puStack_288 = (undefined8 *)0xffffffffffffffff;
                    local_260 = 0;
                    local_258[0] = 0x400000000;
                    local_240 = 0;
                    local_238 = 0x400000000;
                    local_230 = 0;
                    local_448 = (longlong *)CONCAT71(local_448._1_7_,1);
                    iVar10 = (**(code **)(*plVar4 + 0x88))
                                       (plVar4,(ulonglong)local_1c8 & 0xffffffff,uVar3,&local_298);
                    if (iVar10 == 0) {
                      plVar4 = *(longlong **)(local_3b8 + uVar23 * 8);
                      if (plVar4 != (longlong *)0x0) {
                        if (*plVar4 != 0) {
                          FUN_1400020a8();
                        }
                        FUN_1400020a8(plVar4);
                      }
                      *(undefined8 *)(local_3b8 + uVar23 * 8) = 0;
                      FUN_144a7cc9e(&local_178,uVar3);
                      bVar22 = true;
                      if (*(char *)(param_1 + 0x30) == '\x01') {
                        FUN_146c3f0da(param_1 + 0x34,*(undefined8 *)(param_1 + 8),
                                      (ulonglong)local_290 & 0xffffffff);
                        FUN_146c3f0da(param_1 + 0x34,*(undefined8 *)(param_1 + 8),local_290._4_4_);
                      }
                    }
                    else {
                      iVar10 = (int)plVar13[1];
                      if (~uVar21 + iVar10 != 0) {
                        memmove((void *)(*plVar13 + lVar20 * 4),(void *)(*plVar13 + lVar20 * 4 + 4),
                                (longlong)(int)(~uVar21 + iVar10) << 2);
                        iVar10 = (int)plVar13[1];
                      }
                      *(int *)(plVar13 + 1) = iVar10 + -1;
                      FUN_14479f406(plVar13);
                      uVar21 = uVar21 - 1;
                      local_228 = &local_1c8;
                      FUN_144a9d2f8(*(undefined8 *)(local_3b8 + uVar23 * 8),&local_228);
                    }
                    if (local_240 != 0) {
                      FUN_1400020a8();
                    }
                    if (local_260 != 0) {
                      FUN_1400020a8();
                    }
                    iVar10 = (int)plVar13[1];
                  }
                  else if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
                    plVar19 = plVar5 + 7;
                    if ((longlong *)plVar5[8] != (longlong *)0x0) {
                      plVar19 = (longlong *)plVar5[8];
                    }
                    iVar16 = *(int *)((longlong)plVar19 +
                                     (ulonglong)((int)plVar5[9] - 1U & (uint)local_1c8) * 4);
                    if (iVar16 != -1) {
                      do {
                        if (*(uint *)(*plVar5 + (longlong)iVar16 * 0xc) == (uint)local_1c8)
                        goto LAB_146c3e1d8;
                        iVar16 = *(int *)(*plVar5 + (longlong)iVar16 * 0xc + 4);
                      } while (iVar16 != -1);
                    }
                    iVar16 = *(int *)((longlong)plVar19 +
                                     (ulonglong)((int)plVar5[9] + 0x7fffffffU & uVar3) * 4);
                    if (iVar16 != -1) {
                      do {
                        if (*(uint *)(*plVar5 + (longlong)iVar16 * 0xc) == uVar3)
                        goto LAB_146c3e1d8;
                        iVar16 = *(int *)(*plVar5 + (longlong)iVar16 * 0xc + 4);
                      } while (iVar16 != -1);
                    }
                  }
                }
              }
              uVar21 = uVar21 + 1;
            } while (((int)uVar21 < iVar10) && (!bVar22));
            uVar23 = (ulonglong)local_1c8 & 0xffffffff;
          }
          lVar20 = (longlong)(int)uVar23;
          plVar13 = *(longlong **)(local_3b8 + lVar20 * 8);
          if (plVar13 != (longlong *)0x0) {
            if (*plVar13 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(plVar13);
            uVar23 = (ulonglong)local_1c8 & 0xffffffff;
            lVar20 = (longlong)(int)(uint)local_1c8;
          }
          *(undefined8 *)(local_3b8 + lVar20 * 8) = 0;
          FUN_144a7cc9e(&local_178,uVar23);
        }
        break;
      }
    }
  } while( true );
}



// FUNCTION 146c3ebb6 FUN_146c3ebb6 body=113 status=ok
// SIG undefined FUN_146c3ebb6(void)

void FUN_146c3ebb6(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_146c5d2e4(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_146c5d344(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  }
  return;
}



// FUNCTION 146c3ec28 FUN_146c3ec28 body=743 status=ok
// SIG undefined FUN_146c3ec28(void)

void FUN_146c3ec28(longlong *param_1,double *param_2,double param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  longlong local_90;
  undefined8 *local_88;
  int local_7c;
  int local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = param_4;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    dVar13 = (double)param_1[0xf];
    auVar18._0_8_ = (param_2[2] - DAT_14c846520 * param_3) / dVar13;
    auVar18._8_8_ = 0;
    auVar18 = roundsd(auVar18,auVar18,9);
    auVar14._0_8_ = (DAT_14c846520 * param_3 + param_2[2]) / dVar13;
    auVar14._8_8_ = 0;
    auVar14 = roundsd(auVar14,auVar14,9);
    local_98 = (int)auVar14._0_8_;
    if ((int)auVar18._0_8_ <= local_98) {
      auVar19._0_8_ = (param_2[1] - DAT_14c846518 * param_3) / dVar13;
      auVar19._8_8_ = 0;
      auVar14 = roundsd(auVar19,auVar19,9);
      local_a0 = (int)auVar14._0_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (*param_2 - DAT_14c846510 * param_3) / dVar13;
      auVar14 = roundsd(ZEXT816(0),auVar17,9);
      local_94 = (int)auVar14._0_8_;
      auVar16._0_8_ = (DAT_14c846510 * param_3 + *param_2) / dVar13;
      auVar16._8_8_ = 0;
      auVar17 = roundsd(auVar16,auVar16,9);
      auVar15._0_8_ = (DAT_14c846518 * param_3 + param_2[1]) / dVar13;
      auVar15._8_8_ = 0;
      auVar14 = roundsd(ZEXT816(0),auVar15,9);
      local_9c = (int)auVar14._0_8_;
      iVar9 = (int)auVar18._0_8_;
      do {
        iVar6 = local_a0;
        if (local_a0 <= local_9c) {
          do {
            iVar10 = local_94;
            if (local_94 <= (int)auVar17._0_8_) {
LAB_146c3edb2:
              local_7c = iVar10;
              local_78 = iVar6;
              local_74 = iVar9;
              if ((int)param_1[9] != 0) {
                iVar2 = FUN_1448eb174(&local_7c,0xc,0);
                plVar4 = (longlong *)param_1[8];
                if ((longlong *)param_1[8] == (longlong *)0x0) {
                  plVar4 = param_1 + 7;
                }
                iVar2 = *(int *)((longlong)plVar4 +
                                ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
                if (iVar2 != -1) {
                  lVar5 = *param_1;
                  do {
                    lVar7 = (longlong)iVar2;
                    iVar8 = *(int *)(lVar5 + 0x10 + lVar7 * 0x18);
                    if (((*(int *)(lVar5 + lVar7 * 0x18) == local_7c) &&
                        (lVar7 = lVar5 + lVar7 * 0x18, *(int *)(lVar7 + 4) == local_78)) &&
                       (*(int *)(lVar7 + 8) == local_74)) goto LAB_146c3ee86;
                    iVar2 = iVar8;
                  } while (iVar8 != -1);
                }
              }
              goto LAB_146c3ee33;
            }
LAB_146c3eda5:
            bVar12 = iVar6 != local_9c;
            iVar6 = iVar6 + 1;
          } while (bVar12);
        }
        bVar12 = iVar9 != local_98;
        iVar9 = iVar9 + 1;
      } while (bVar12);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c3ee86:
  while( true ) {
    puVar11 = (undefined4 *)(lVar5 + (longlong)iVar2 * 0x18 + 0xc);
    cVar1 = (*(code *)*param_6)(param_6[1],puVar11);
    if ((cVar1 == '\0') &&
       (dVar13 = (double)(*(code *)*local_88)(local_88[1],puVar11), dVar13 < param_3 * param_3)) {
      lVar5 = (longlong)(int)param_5[1];
      uVar3 = (int)param_5[1] + 1;
      *(uint *)(param_5 + 1) = uVar3;
      if (*(uint *)((longlong)param_5 + 0xc) < uVar3) {
        local_90 = lVar5;
        FUN_1446f48e2(param_5,lVar5);
        lVar5 = local_90;
      }
      *(undefined4 *)(*param_5 + lVar5 * 4) = *puVar11;
    }
    if (iVar8 == -1) break;
    lVar5 = *param_1;
    iVar2 = iVar8;
    while( true ) {
      lVar7 = (longlong)iVar2;
      iVar8 = *(int *)(lVar5 + 0x10 + lVar7 * 0x18);
      if (((*(int *)(lVar5 + lVar7 * 0x18) == local_7c) &&
          (lVar7 = lVar5 + lVar7 * 0x18, *(int *)(lVar7 + 4) == local_78)) &&
         (*(int *)(lVar7 + 8) == local_74)) break;
      iVar2 = iVar8;
      if (iVar8 == -1) goto LAB_146c3ee33;
    }
  }
LAB_146c3ee33:
  bVar12 = iVar10 == (int)auVar17._0_8_;
  iVar10 = iVar10 + 1;
  if (bVar12) goto LAB_146c3eda5;
  goto LAB_146c3edb2;
}



// FUNCTION 146c3ef10 FUN_146c3ef10 body=378 status=ok
// SIG undefined FUN_146c3ef10(void)

bool FUN_146c3ef10(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  dVar5 = *param_4 - *param_2;
  dVar3 = param_4[1] - param_2[1];
  dVar4 = param_4[2] - param_2[2];
  dVar1 = *(double *)(param_1 + 0x50);
  if (dVar1 <= dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3) {
    uVar8 = SUB84(param_5[1],0);
    uVar9 = (undefined4)((ulonglong)param_5[1] >> 0x20);
    uVar6 = SUB84(param_5[2],0);
    uVar7 = (undefined4)((ulonglong)param_5[2] >> 0x20);
  }
  else {
    dVar5 = *param_5 - *param_3;
    dVar3 = param_5[1];
    uVar8 = SUB84(dVar3,0);
    uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar4 = param_5[2];
    uVar6 = SUB84(dVar4,0);
    uVar7 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if ((dVar4 - param_3[2]) * (dVar4 - param_3[2]) +
        dVar5 * dVar5 + (dVar3 - param_3[1]) * (dVar3 - param_3[1]) < dVar1) {
      return true;
    }
  }
  dVar3 = *param_5 - *param_2;
  dVar5 = (double)CONCAT44(uVar9,uVar8) - param_2[1];
  dVar4 = (double)CONCAT44(uVar7,uVar6) - param_2[2];
  if (dVar1 <= dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5) {
    bVar2 = false;
  }
  else {
    dVar3 = *param_4 - *param_3;
    dVar4 = param_4[1] - param_3[1];
    dVar5 = param_4[2] - param_3[2];
    bVar2 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4 < dVar1;
  }
  return bVar2;
}



// FUNCTION 146c3f08a FUN_146c3f08a body=80 status=ok
// SIG undefined FUN_146c3f08a(void)

undefined1 * FUN_146c3f08a(undefined1 *param_1)

{
  *param_1 = 0;
  FUN_146bd2140(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_146bd223a(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_14481578e(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 146c3f0da FUN_146c3f0da body=279 status=ok
// SIG undefined FUN_146c3f0da(void)

void FUN_146c3f0da(undefined4 *param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x208);
  if (((-1 < (int)param_3 && plVar1 != (longlong *)0x0) &&
      ((int)param_3 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_2 + 0x28) + (ulonglong)(param_3 >> 9) * 8) +
                         (ulonglong)(param_3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if ((longlong)uVar4 < (longlong)(int)plVar1[5]) {
          uVar3 = *(undefined8 *)(plVar1[4] + uVar4 * 8);
        }
        else {
          uVar3 = 0;
        }
        FUN_146c3f1f2(param_3,uVar3,*param_1);
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
    uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if ((longlong)uVar4 < (longlong)(int)plVar1[7]) {
          uVar3 = *(undefined8 *)(plVar1[6] + uVar4 * 8);
        }
        else {
          uVar3 = 0;
        }
        FUN_146c3f734(param_3,uVar3,param_1[(ulonglong)(uVar4 != 0) + 2]);
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
    if (plVar1[8] != 0) {
      FUN_146c3fdcc(param_3,plVar1[8],param_1[1]);
      return;
    }
  }
  return;
}



// FUNCTION 146c3f1f2 FUN_146c3f1f2 body=1344 status=ok
// SIG undefined FUN_146c3f1f2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146c3f1f2(uint param_1,longlong *param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  code **ppcVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_2d8 [36];
  uint local_2b4;
  longlong *local_2b0;
  longlong *local_2a8;
  code *local_2a0;
  longlong local_298;
  ulonglong local_290;
  longlong local_288;
  ulonglong local_280;
  uint auStack_278 [4];
  longlong local_268 [3];
  ulonglong uStack_250;
  code *local_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1ec;
  longlong local_1e8 [2];
  longlong *local_1d8;
  longlong local_1c8 [4];
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_188;
  longlong local_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  undefined4 local_14c;
  longlong local_148 [2];
  longlong *local_138;
  longlong local_128 [4];
  longlong local_108 [2];
  longlong *local_f8;
  longlong local_e8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar3 = *param_2;
  if (((lVar3 != 0) && ((int)param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(param_1 >> 9) * 8)
                         + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_268[2] = 0;
    uStack_250 = 0;
    local_2b4 = param_1;
    FUN_146c2e56c(param_2,param_1,local_268 + 2);
    lVar11 = (longlong)(int)uStack_250;
    local_268[0] = 0;
    local_268[1] = 0;
    FUN_144a8c360(local_268,uStack_250 & 0xffffffff,1);
    if (0 < lVar11) {
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      local_2a0 = (code *)(lVar3 + 0xb8);
      local_2b0 = local_1c8;
      local_2a8 = local_128;
      lVar12 = 1;
      lVar7 = 0;
      do {
        if (*(int *)(local_268[0] + lVar7 * 4) == 1) {
          lVar14 = lVar7 + 1;
        }
        else {
          lVar14 = lVar7 + 1;
          if (lVar14 < lVar11) {
            uVar1 = *(uint *)(local_268[2] + lVar7 * 4);
            local_280 = (ulonglong)uVar1;
            uVar15 = (ulonglong)((uVar1 & 0x7fffffff) >> 8);
            uVar17 = (ulonglong)(uVar1 * 2 & 0x1fe);
            lVar7 = uVar17 + 1;
            lVar16 = lVar12;
LAB_146c3f373:
            if ((*(int *)(local_268[0] + lVar16 * 4) != 1) &&
               (uVar1 = *(uint *)(local_268[2] + lVar16 * 4),
               lVar4 = *(longlong *)(param_2[9] + uVar15 * 8),
               lVar5 = *(longlong *)(param_2[9] + (ulonglong)(uVar1 >> 5 & 0x3fffff8)),
               uVar13 = (ulonglong)((uVar1 & 0xff) << 3),
               fVar18 = *(float *)(lVar5 + uVar13) - *(float *)(lVar4 + uVar17 * 4),
               fVar19 = *(float *)(lVar5 + 4 + uVar13) - *(float *)(lVar4 + lVar7 * 4),
               fVar19 * fVar19 + fVar18 * fVar18 <= param_3)) {
              *(undefined4 *)(local_268[0] + lVar16 * 4) = 1;
              local_198 = 0;
              local_188 = &PTR_LAB_149f3aae0;
              uStack_178 = local_2b4;
              local_1a8 = FUN_146be9588;
              local_248 = local_2a0;
              uStack_240 = CONCAT44(uStack_240._4_4_,local_2b4);
              local_298 = lVar7;
              local_290 = uVar15;
              local_288 = lVar14;
              local_180 = lVar3;
              FUN_146be94ac(local_108,&local_248,&local_1a8);
              local_158 = 0xffffffffffffffff;
              local_148[0] = 0;
              local_138 = (longlong *)0x0;
              local_188 = (undefined **)local_a8;
              local_198 = local_b8;
              uStack_190 = uStack_b0;
              local_1a8 = local_c8;
              uStack_1a0 = uStack_c0;
              uStack_178 = uStack_98;
              uStack_174 = uStack_94;
              local_170 = local_90;
              uStack_16c = uStack_8c;
              uStack_168 = uStack_88;
              uStack_164 = uStack_84;
              local_160 = local_80;
              FUN_146be971a(local_148,local_108);
              local_14c = 0;
              FUN_146bfd1f0(&local_1a8);
              local_1f8 = 0xffffffffffffffff;
              local_1e8[0] = 0;
              local_1d8 = (longlong *)0x0;
              local_228 = local_80;
              local_248 = (code *)CONCAT44(uStack_9c,local_a0);
              uStack_240 = CONCAT44(uStack_94,uStack_98);
              uStack_230 = CONCAT44(uStack_84,uStack_88);
              local_220 = local_a0;
              uStack_21c = uStack_9c;
              uStack_218 = uStack_98;
              uStack_214 = uStack_94;
              local_210 = local_90;
              uStack_20c = uStack_8c;
              uStack_208 = uStack_88;
              uStack_204 = uStack_84;
              local_200 = local_80;
              FUN_146be971a(local_1e8,local_108);
              local_1ec = 0;
              ppcVar9 = &local_248;
LAB_146c3f58b:
              FUN_146bfd1f0(ppcVar9);
              if (local_1a8 == local_248) {
                if ((int)uStack_1a0 == (int)uStack_240) {
                  if ((int)uStack_190 == (int)uStack_230) {
                    if (uStack_190._4_4_ == uStack_230._4_4_) goto LAB_146c3f689;
                  }
                }
              }
              uVar6 = local_150 * 3;
              lVar7 = param_2[0xf];
              iVar2 = *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8) +
                              (ulonglong)(uVar6 & 0x1ff) * 4);
              ppcVar9 = &local_1a8;
              if (-1 < iVar2) {
                auStack_278[1] = iVar2;
                auStack_278[2] =
                     *(undefined4 *)
                      (*(longlong *)(lVar7 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                      (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
                auStack_278[3] =
                     *(undefined4 *)
                      (*(longlong *)(lVar7 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                      (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
                lVar7 = 0;
                bVar8 = false;
                do {
                  lVar7 = lVar7 + 1;
                  while (auStack_278[lVar7] != uVar1) {
                    lVar7 = lVar7 + 1;
                    if (lVar7 == 4) {
                      if (!bVar8) goto LAB_146c3f58b;
                      goto LAB_146c3f671;
                    }
                  }
                  auStack_278[lVar7] = (uint)local_280;
                  bVar8 = true;
                } while (lVar7 != 3);
LAB_146c3f671:
                FUN_146c01486(param_2,local_150,auStack_278 + 1,
                              CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
              }
              goto LAB_146c3f58b;
            }
            goto LAB_146c3f3d7;
          }
        }
LAB_146c3f331:
        lVar7 = lVar14;
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar11);
    }
    if (local_268[0] != 0) {
      FUN_1400020a8();
    }
    if (local_268[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c3f689:
  if (local_1e8[0] != 0) {
    plVar10 = local_1d8;
    if (local_1d8 == (longlong *)0x0) {
      plVar10 = local_2b0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_148[0] != 0) {
    plVar10 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar10 = local_2a8;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  lVar14 = local_288;
  uVar15 = local_290;
  lVar7 = local_298;
  if (local_108[0] != 0) {
    plVar10 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar10 = local_e8;
    }
    (**(code **)(*plVar10 + 0x10))();
    lVar14 = local_288;
    uVar15 = local_290;
    lVar7 = local_298;
  }
LAB_146c3f3d7:
  lVar16 = lVar16 + 1;
  if (lVar16 == lVar11) goto LAB_146c3f331;
  goto LAB_146c3f373;
}



// FUNCTION 146c3f734 FUN_146c3f734 body=1686 status=ok
// SIG undefined FUN_146c3f734(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146c3f734(uint param_1,longlong *param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_318 [36];
  uint local_2f4;
  longlong *local_2f0;
  longlong *local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  ulonglong local_2d0;
  int aiStack_2c8 [4];
  longlong local_2b8 [3];
  ulonglong uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_23c;
  longlong local_238 [2];
  longlong *local_228;
  longlong local_218 [4];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  longlong local_1d0;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  int local_1a0;
  undefined4 local_19c;
  longlong local_198 [2];
  longlong *local_188;
  longlong local_178 [4];
  longlong local_158 [2];
  longlong *local_148;
  longlong local_138 [4];
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar4 = *param_2;
  if (((lVar4 != 0) && ((int)param_1 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(param_1 >> 9) * 8)
                         + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_2b8[2] = 0;
    uStack_2a0 = 0;
    FUN_146c31768(param_2,param_1,local_2b8 + 2);
    lVar11 = (longlong)(int)uStack_2a0;
    local_2b8[0] = 0;
    local_2b8[1] = 0;
    FUN_144a8c360(local_2b8,uStack_2a0 & 0xffffffff,1);
    if (0 < lVar11) {
      local_2e0 = lVar4 + 0xb8;
      local_2f0 = local_218;
      local_2e8 = local_178;
      lVar14 = 1;
      lVar13 = 0;
      local_2f4 = param_1;
      do {
        if (*(int *)(local_2b8[0] + lVar13 * 4) == 1) {
          lVar6 = lVar13 + 1;
        }
        else {
          lVar6 = lVar13 + 1;
          if (lVar6 < lVar11) {
            uVar1 = *(uint *)(local_2b8[2] + lVar13 * 4);
            local_2d0 = (ulonglong)uVar1;
            lVar13 = lVar14;
LAB_146c3f90c:
            if (*(int *)(local_2b8[0] + lVar13 * 4) != 1) {
              iVar2 = *(int *)(local_2b8[2] + lVar13 * 4);
              lVar5 = param_2[9];
              lVar10 = 0;
              do {
                uVar12 = uVar1 * 3 + (int)lVar10;
                *(undefined4 *)((longlong)&local_1f8 + lVar10 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                      (ulonglong)(uVar12 & 0x1ff) * 4);
                lVar10 = lVar10 + 1;
              } while (lVar10 != 3);
              lVar10 = 0;
              do {
                uVar12 = iVar2 * 3 + (int)lVar10;
                *(undefined4 *)((longlong)&local_298 + lVar10 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                      (ulonglong)(uVar12 & 0x1ff) * 4);
                lVar10 = lVar10 + 1;
              } while (lVar10 != 3);
              fVar17 = (float)uStack_1f0 * (float)uStack_1f0 +
                       (float)local_1f8 * (float)local_1f8 + local_1f8._4_4_ * local_1f8._4_4_;
              fVar15 = (float)local_1f8;
              fVar16 = local_1f8._4_4_;
              fVar18 = (float)uStack_1f0;
              if (1e-08 < fVar17) {
                fVar18 = 1.0 / SQRT(fVar17);
                fVar15 = (float)local_1f8 * fVar18;
                fVar16 = local_1f8._4_4_ * fVar18;
                fVar18 = (float)uStack_1f0 * fVar18;
              }
              fVar19 = (float)uStack_290 * (float)uStack_290 +
                       (float)local_298 * (float)local_298 + local_298._4_4_ * local_298._4_4_;
              if (fVar19 <= 1e-08) {
                if (fVar17 <= 1e-08) goto LAB_146c3fa92;
              }
              else if ((1e-08 < fVar17) &&
                      (fVar17 = 1.0 / SQRT(fVar19),
                      ABS(1.0 - (fVar15 * (float)local_298 * fVar17 +
                                 fVar16 * local_298._4_4_ * fVar17 +
                                fVar18 * (float)uStack_290 * fVar17)) <= param_3)) {
LAB_146c3fa92:
                *(undefined4 *)(local_2b8[0] + lVar13 * 4) = 1;
                local_1e8 = 0;
                local_1d8 = &PTR_LAB_149f3aae0;
                local_1f8 = FUN_146be9588;
                local_298 = local_2e0;
                uStack_290 = CONCAT44(uStack_290._4_4_,param_1);
                local_2d8 = lVar6;
                local_1d0 = lVar4;
                uStack_1c8 = param_1;
                FUN_146be94ac(local_158,&local_298,&local_1f8);
                local_1a8 = 0xffffffffffffffff;
                local_198[0] = 0;
                local_188 = (longlong *)0x0;
                local_1d8 = (undefined **)local_f8;
                local_1e8 = local_108;
                uStack_1e0 = uStack_100;
                local_1f8 = (code *)local_118;
                uStack_1f0 = uStack_110;
                uStack_1c8 = uStack_e8;
                uStack_1c4 = uStack_e4;
                local_1c0 = local_e0;
                uStack_1bc = uStack_dc;
                uStack_1b8 = uStack_d8;
                uStack_1b4 = uStack_d4;
                local_1b0 = local_d0;
                FUN_146be971a(local_198,local_158);
                local_19c = 0;
                FUN_146bfd1f0(&local_1f8);
                local_248 = 0xffffffffffffffff;
                local_238[0] = 0;
                local_228 = (longlong *)0x0;
                local_278 = local_d0;
                local_298 = CONCAT44(uStack_ec,local_f0);
                uStack_290 = CONCAT44(uStack_e4,uStack_e8);
                uStack_280 = CONCAT44(uStack_d4,uStack_d8);
                local_270 = local_f0;
                uStack_26c = uStack_ec;
                uStack_268 = uStack_e8;
                uStack_264 = uStack_e4;
                local_260 = local_e0;
                uStack_25c = uStack_dc;
                uStack_258 = uStack_d8;
                uStack_254 = uStack_d4;
                local_250 = local_d0;
                FUN_146be971a(local_238);
                local_23c = 0;
                puVar8 = &local_298;
LAB_146c3fc2d:
                FUN_146bfd1f0(puVar8);
                if (local_1f8 == (code *)local_298) {
                  if ((float)uStack_1f0 == (float)uStack_290) {
                    if ((int)uStack_1e0 == (int)uStack_280) {
                      if (uStack_1e0._4_4_ == uStack_280._4_4_) goto LAB_146c3fd2a;
                    }
                  }
                }
                uVar12 = local_1a0 * 3;
                lVar6 = param_2[0xf];
                iVar3 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar12 >> 9) * 8) +
                                (ulonglong)(uVar12 & 0x1ff) * 4);
                puVar8 = &local_1f8;
                if (-1 < iVar3) {
                  aiStack_2c8[1] = iVar3;
                  aiStack_2c8[2] =
                       *(undefined4 *)
                        (*(longlong *)(lVar6 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                        (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
                  aiStack_2c8[3] =
                       *(undefined4 *)
                        (*(longlong *)(lVar6 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                        (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
                  lVar6 = 0;
                  bVar7 = false;
                  do {
                    lVar6 = lVar6 + 1;
                    while (aiStack_2c8[lVar6] != iVar2) {
                      lVar6 = lVar6 + 1;
                      if (lVar6 == 4) {
                        if (!bVar7) goto LAB_146c3fc2d;
                        goto LAB_146c3fd12;
                      }
                    }
                    aiStack_2c8[lVar6] = (int)local_2d0;
                    bVar7 = true;
                  } while (lVar6 != 3);
LAB_146c3fd12:
                  FUN_146c01580(param_2,local_1a0,aiStack_2c8 + 1,
                                CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1));
                }
                goto LAB_146c3fc2d;
              }
            }
            goto LAB_146c3f918;
          }
        }
LAB_146c3f8df:
        lVar13 = lVar6;
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar11);
    }
    if (local_2b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_2b8[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c3fd2a:
  if (local_238[0] != 0) {
    plVar9 = local_228;
    if (local_228 == (longlong *)0x0) {
      plVar9 = local_2f0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  param_1 = local_2f4;
  if (local_198[0] != 0) {
    plVar9 = local_188;
    if (local_188 == (longlong *)0x0) {
      plVar9 = local_2e8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  lVar6 = local_2d8;
  if (local_158[0] != 0) {
    plVar9 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar9 = local_138;
    }
    (**(code **)(*plVar9 + 0x10))();
    lVar6 = local_2d8;
  }
LAB_146c3f918:
  lVar13 = lVar13 + 1;
  if (lVar13 == lVar11) goto LAB_146c3f8df;
  goto LAB_146c3f90c;
}



// FUNCTION 146c3fdcc FUN_146c3fdcc body=1407 status=ok
// SIG undefined FUN_146c3fdcc(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146c3fdcc(uint param_1,longlong *param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  code **ppcVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_2d8 [40];
  longlong *local_2b0;
  longlong *local_2a8;
  code *local_2a0;
  ulonglong local_298;
  longlong local_290;
  longlong local_288;
  ulonglong local_280;
  uint auStack_278 [4];
  longlong local_268 [3];
  ulonglong uStack_250;
  code *local_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1ec;
  longlong local_1e8 [2];
  longlong *local_1d8;
  longlong local_1c8 [4];
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_188;
  longlong local_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  undefined4 local_14c;
  longlong local_148 [2];
  longlong *local_138;
  longlong local_128 [4];
  longlong local_108 [2];
  longlong *local_f8;
  longlong local_e8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar3 = *param_2;
  if (((-1 < (int)param_1 && lVar3 != 0) &&
      ((int)param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(param_1 >> 9) * 8)
                         + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_268[2] = 0;
    uStack_250 = 0;
    FUN_146c349b4(param_2,param_1,local_268 + 2);
    lVar10 = (longlong)(int)uStack_250;
    local_268[0] = 0;
    local_268[1] = 0;
    FUN_144a8c360(local_268,uStack_250 & 0xffffffff,1);
    if (0 < lVar10) {
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      local_2a0 = (code *)(lVar3 + 0xb8);
      local_2b0 = local_1c8;
      local_2a8 = local_128;
      lVar13 = 1;
      lVar16 = 0;
      do {
        if (*(int *)(local_268[0] + lVar16 * 4) == 1) {
          lVar14 = lVar16 + 1;
        }
        else {
          lVar14 = lVar16 + 1;
          if (lVar14 < lVar10) {
            uVar1 = *(uint *)(local_268[2] + lVar16 * 4);
            local_280 = (ulonglong)uVar1;
            uVar15 = (ulonglong)(uVar1 >> 7 & 0x7fffff);
            uVar11 = (ulonglong)((uVar1 & 0x7f) << 4);
            lVar16 = lVar13;
LAB_146c3ff54:
            if (*(int *)(local_268[0] + lVar16 * 4) != 1) {
              uVar1 = *(uint *)(local_268[2] + lVar16 * 4);
              lVar4 = *(longlong *)(param_2[9] + uVar15 * 8);
              lVar5 = *(longlong *)(param_2[9] + (ulonglong)(uVar1 >> 4 & 0x3fffff8));
              uVar12 = (ulonglong)((uVar1 & 0x7f) << 4);
              fVar18 = *(float *)(lVar4 + 0xc + uVar11) - *(float *)(lVar5 + 0xc + uVar12);
              fVar17 = *(float *)(lVar4 + 8 + uVar11) - *(float *)(lVar5 + 8 + uVar12);
              fVar19 = *(float *)(lVar4 + 4 + uVar11) - *(float *)(lVar5 + 4 + uVar12);
              fVar20 = *(float *)(lVar4 + uVar11) - *(float *)(lVar5 + uVar12);
              if (fVar18 * fVar18 + fVar17 * fVar17 + fVar20 * fVar20 + fVar19 * fVar19 <= param_3)
              {
                *(undefined4 *)(local_268[0] + lVar16 * 4) = 1;
                local_198 = 0;
                local_188 = &PTR_LAB_149f3aae0;
                local_1a8 = FUN_146be9588;
                local_248 = local_2a0;
                uStack_240 = CONCAT44(uStack_240._4_4_,param_1);
                local_298 = uVar15;
                local_290 = lVar14;
                local_288 = lVar13;
                local_180 = lVar3;
                uStack_178 = param_1;
                FUN_146be94ac(local_108,&local_248,&local_1a8);
                local_158 = 0xffffffffffffffff;
                local_148[0] = 0;
                local_138 = (longlong *)0x0;
                local_188 = (undefined **)local_a8;
                local_198 = local_b8;
                uStack_190 = uStack_b0;
                local_1a8 = local_c8;
                uStack_1a0 = uStack_c0;
                uStack_178 = uStack_98;
                uStack_174 = uStack_94;
                local_170 = local_90;
                uStack_16c = uStack_8c;
                uStack_168 = uStack_88;
                uStack_164 = uStack_84;
                local_160 = local_80;
                FUN_146be971a(local_148,local_108);
                local_14c = 0;
                FUN_146bfd1f0(&local_1a8);
                local_1f8 = 0xffffffffffffffff;
                local_1e8[0] = 0;
                local_1d8 = (longlong *)0x0;
                local_228 = local_80;
                local_248 = (code *)CONCAT44(uStack_9c,local_a0);
                uStack_240 = CONCAT44(uStack_94,uStack_98);
                uStack_230 = CONCAT44(uStack_84,uStack_88);
                local_220 = local_a0;
                uStack_21c = uStack_9c;
                uStack_218 = uStack_98;
                uStack_214 = uStack_94;
                local_210 = local_90;
                uStack_20c = uStack_8c;
                uStack_208 = uStack_88;
                uStack_204 = uStack_84;
                local_200 = local_80;
                FUN_146be971a(local_1e8,local_108);
                local_1ec = 0;
                ppcVar8 = &local_248;
LAB_146c401a4:
                FUN_146bfd1f0(ppcVar8);
                if (local_1a8 == local_248) {
                  if ((int)uStack_1a0 == (int)uStack_240) {
                    if ((int)uStack_190 == (int)uStack_230) {
                      if (uStack_190._4_4_ == uStack_230._4_4_) goto LAB_146c402a2;
                    }
                  }
                }
                uVar6 = local_150 * 3;
                lVar13 = param_2[0xf];
                iVar2 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar6 >> 9) * 8) +
                                (ulonglong)(uVar6 & 0x1ff) * 4);
                ppcVar8 = &local_1a8;
                if (-1 < iVar2) {
                  auStack_278[1] = iVar2;
                  auStack_278[2] =
                       *(undefined4 *)
                        (*(longlong *)(lVar13 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
                  auStack_278[3] =
                       *(undefined4 *)
                        (*(longlong *)(lVar13 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                        (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
                  lVar13 = 0;
                  bVar7 = false;
                  do {
                    lVar13 = lVar13 + 1;
                    while (auStack_278[lVar13] != uVar1) {
                      lVar13 = lVar13 + 1;
                      if (lVar13 == 4) {
                        if (!bVar7) goto LAB_146c401a4;
                        goto LAB_146c4028a;
                      }
                    }
                    auStack_278[lVar13] = (uint)local_280;
                    bVar7 = true;
                  } while (lVar13 != 3);
LAB_146c4028a:
                  FUN_146c2a048(param_2,local_150,auStack_278 + 1,
                                CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
                }
                goto LAB_146c401a4;
              }
            }
            goto LAB_146c3ffe8;
          }
        }
LAB_146c3ff14:
        lVar16 = lVar14;
        lVar13 = lVar13 + 1;
      } while (lVar16 != lVar10);
    }
    if (local_268[0] != 0) {
      FUN_1400020a8();
    }
    if (local_268[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c402a2:
  if (local_1e8[0] != 0) {
    plVar9 = local_1d8;
    if (local_1d8 == (longlong *)0x0) {
      plVar9 = local_2b0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_148[0] != 0) {
    plVar9 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar9 = local_2a8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  lVar13 = local_288;
  lVar14 = local_290;
  uVar15 = local_298;
  if (local_108[0] != 0) {
    plVar9 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar9 = local_e8;
    }
    (**(code **)(*plVar9 + 0x10))();
    lVar13 = local_288;
    lVar14 = local_290;
    uVar15 = local_298;
  }
LAB_146c3ffe8:
  lVar16 = lVar16 + 1;
  if (lVar16 == lVar10) goto LAB_146c3ff14;
  goto LAB_146c3ff54;
}



// FUNCTION 146c4034c FUN_146c4034c body=201 status=ok
// SIG undefined FUN_146c4034c(void)

void FUN_146c4034c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  uVar4 = 0;
  if ((uVar5 != 0) &&
     (uVar4 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
    uVar2 = 1;
    uVar3 = 1;
    if (1 < (int)uVar5) {
      uVar2 = uVar5;
    }
    do {
      uVar4 = uVar2;
      if (uVar2 == uVar3) break;
      uVar1 = uVar3 >> 9;
      uVar6 = uVar3 & 0x1ff;
      uVar4 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar1] +
                                         (ulonglong)uVar6 * 2) - 1U));
  }
  do {
    if (uVar4 == uVar5) {
      return;
    }
    FUN_146c3f0da(param_1,param_2,uVar4);
    uVar2 = uVar4 + 1;
    if ((int)(uVar4 + 1) < (int)uVar5) {
      uVar2 = uVar5;
    }
    uVar3 = uVar4;
    do {
      uVar4 = uVar2;
      if (uVar2 - 1 == uVar3) break;
      uVar4 = uVar3 + 1;
      uVar3 = uVar4;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x28) +
                                           (ulonglong)(uVar4 >> 9) * 8) +
                                         (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 146c40416 FUN_146c40416 body=57 status=ok
// SIG undefined FUN_146c40416(void)

undefined8 * FUN_146c40416(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3ab40;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c40450 FUN_146c40450 body=43 status=ok
// SIG undefined FUN_146c40450(void)

longlong * FUN_146c40450(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,param_3);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  return plVar1;
}



// FUNCTION 146c40490 FUN_146c40490 body=57 status=ok
// SIG undefined FUN_146c40490(void)

undefined8 * FUN_146c40490(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3ac10;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c404ca FUN_146c404ca body=57 status=ok
// SIG undefined FUN_146c404ca(void)

undefined8 * FUN_146c404ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3ace0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c40504 FUN_146c40504 body=57 status=ok
// SIG undefined FUN_146c40504(void)

undefined8 * FUN_146c40504(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3adb0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c40558 FUN_146c40558 body=24 status=ok
// SIG undefined FUN_146c40558(void)

void FUN_146c40558(longlong *param_1)

{
  (**(code **)(*param_1 + 0x70))();
  return;
}



// FUNCTION 146c40570 FUN_146c40570 body=38 status=ok
// SIG undefined FUN_146c40570(void)

void FUN_146c40570(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return;
}



// FUNCTION 146c40596 FUN_146c40596 body=77 status=ok
// SIG undefined FUN_146c40596(void)

void FUN_146c40596(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined8 local_20;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_9;
  local_9 = 0;
  local_20 = param_4;
  (**(code **)(*param_1 + 0xa8))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c405e4 FUN_146c405e4 body=80 status=ok
// SIG undefined FUN_146c405e4(void)

void FUN_146c405e4(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined8 local_20;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_9;
  local_9 = 0;
  local_20 = in_stack_00000028;
  (**(code **)(*param_1 + 0xa8))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c40636 FUN_146c40636 body=120 status=ok
// SIG undefined FUN_146c40636(void)

void FUN_146c40636(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = DAT_14c846520 * 0.3333333333333333;
  local_18 = DAT_14c846518 * 0.3333333333333333;
  local_20 = DAT_14c846510 * 0.3333333333333333;
  (**(code **)(*param_1 + 0xb8))(local_20,local_10,&local_20,param_3);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c406b8 FUN_146c406b8 body=202 status=ok
// SIG undefined FUN_146c406b8(void)

undefined8 * FUN_146c406b8(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_3;
  local_58[0] = (longlong *)0x0;
  if (local_68[0] != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[8] = param_1;
  FUN_146c40784(param_2,local_68);
  if (local_68[0] != 0) {
    plVar1 = local_58[0];
    if (local_58[0] == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c40784 FUN_146c40784 body=290 status=ok
// SIG undefined FUN_146c40784(void)

longlong * FUN_146c40784(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c40908 FUN_146c40908 body=29 status=ok
// SIG undefined FUN_146c40908(void)

undefined8 FUN_146c40908(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c40926 FUN_146c40926 body=103 status=ok
// SIG undefined FUN_146c40926(void)

void FUN_146c40926(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_146c4098e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c4098e FUN_146c4098e body=95 status=ok
// SIG undefined FUN_146c4098e(void)

void FUN_146c4098e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146c409ee FUN_146c409ee body=103 status=ok
// SIG undefined FUN_146c409ee(void)

void FUN_146c409ee(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_146c40a56(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c40a56 FUN_146c40a56 body=95 status=ok
// SIG undefined FUN_146c40a56(void)

void FUN_146c40a56(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146c40ab6 FUN_146c40ab6 body=156 status=ok
// SIG undefined FUN_146c40ab6(void)

longlong * FUN_146c40ab6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  if (-1 < (int)*(uint *)(param_2 + 1)) {
    if (uVar2 != 0) {
      FUN_141067bec(param_1,uVar2);
      uVar3 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x3000,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar3 * 8),0x3000);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_141040c48(param_1,iVar1);
        }
        *(void **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 146c40b54 FUN_146c40b54 body=156 status=ok
// SIG undefined FUN_146c40b54(void)

longlong * FUN_146c40b54(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  if (-1 < (int)*(uint *)(param_2 + 1)) {
    if (uVar2 != 0) {
      FUN_14117c6fe(param_1,uVar2);
      uVar3 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x400,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar3 * 8),0x400);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_141224966(param_1,iVar1);
        }
        *(void **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 146c40bf2 FUN_146c40bf2 body=156 status=ok
// SIG undefined FUN_146c40bf2(void)

longlong * FUN_146c40bf2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  if (-1 < (int)*(uint *)(param_2 + 1)) {
    if (uVar2 != 0) {
      FUN_141082bc6(param_1,uVar2);
      uVar3 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x800,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar3 * 8),0x800);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1411b3bbe(param_1,iVar1);
        }
        *(void **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 146c40c90 FUN_146c40c90 body=156 status=ok
// SIG undefined FUN_146c40c90(void)

longlong * FUN_146c40c90(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  if (-1 < (int)*(uint *)(param_2 + 1)) {
    if (uVar2 != 0) {
      FUN_141082a7e(param_1,uVar2);
      uVar3 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar3 * 8),0x1800);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1411b3d20(param_1,iVar1);
        }
        *(void **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 146c40d2e FUN_146c40d2e body=156 status=ok
// SIG undefined FUN_146c40d2e(void)

longlong * FUN_146c40d2e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  if (-1 < (int)*(uint *)(param_2 + 1)) {
    if (uVar2 != 0) {
      FUN_141082c8e(param_1,uVar2);
      uVar3 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x2000,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar3 * 8),0x2000);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1411b3e82(param_1,iVar1);
        }
        *(void **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 146c40dcc FUN_146c40dcc body=148 status=ok
// SIG undefined FUN_146c40dcc(void)

undefined8 * FUN_146c40dcc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_146c40e60(param_1 + 1,param_2 + 1);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x400);
  memset(_Dst,0,0x400);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_141224966(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c40e60 FUN_146c40e60 body=77 status=ok
// SIG undefined FUN_146c40e60(void)

longlong * FUN_146c40e60(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_14117c696(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146c40eae FUN_146c40eae body=134 status=ok
// SIG undefined FUN_146c40eae(void)

undefined4 * FUN_146c40eae(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  FUN_146c40e60(param_1 + 2,param_2 + 1);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x400);
  memset(_Dst,0,0x400);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_141224966(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c40f34 FUN_146c40f34 body=134 status=ok
// SIG undefined FUN_146c40f34(void)

undefined4 * FUN_146c40f34(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  FUN_14582f228(param_1 + 2,param_2 + 1);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x800);
  memset(_Dst,0,0x800);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_1411b3bbe(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c40fba FUN_146c40fba body=170 status=ok
// SIG undefined FUN_146c40fba(void)

longlong * FUN_146c40fba(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = (ulonglong)uVar1;
    FUN_14117c696(param_1,uVar3);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar1) {
      FUN_14117c6fe(param_1,uVar1);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x400,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar4 * 8),0x400);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_141224966(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 146c41066 FUN_146c41066 body=170 status=ok
// SIG undefined FUN_146c41066(void)

longlong * FUN_146c41066(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = (ulonglong)uVar1;
    FUN_141082a16(param_1,uVar3);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar1) {
      FUN_141082a7e(param_1,uVar1);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar4 * 8),0x1800);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3d20(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 146c41112 FUN_146c41112 body=170 status=ok
// SIG undefined FUN_146c41112(void)

longlong * FUN_146c41112(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = (ulonglong)uVar1;
    FUN_141082c26(param_1,uVar3);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar1) {
      FUN_141082c8e(param_1,uVar1);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x2000,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar4 * 8),0x2000);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1411b3e82(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 146c411be FUN_146c411be body=63 status=ok
// SIG undefined FUN_146c411be(void)

void FUN_146c411be(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c411fe(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146c411fe FUN_146c411fe body=97 status=ok
// SIG undefined FUN_146c411fe(void)

ulonglong FUN_146c411fe(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146c41260 FUN_146c41260 body=367 status=ok
// SIG undefined FUN_146c41260(void)

undefined8 *
FUN_146c41260(undefined8 param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = *param_4;
  local_98 = (longlong *)0x0;
  if (local_a8 != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)*plVar5)(plVar5,&local_98);
  }
  param_2[2] = 0;
  param_2[4] = 0;
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 1) = param_3;
  local_68 = param_2[2];
  local_60 = param_2[3];
  local_58 = (longlong *)param_2[4];
  local_50 = param_2[5];
  local_48 = param_2[6];
  uStack_40 = param_2[7];
  local_38 = param_2[8];
  uStack_30 = param_2[9];
  uVar3 = local_38;
  uVar4 = uStack_30;
  uVar1 = local_48;
  uVar2 = uStack_40;
  *(undefined4 *)(param_2 + 8) = local_78;
  *(undefined4 *)((longlong)param_2 + 0x44) = uStack_74;
  *(undefined4 *)(param_2 + 9) = uStack_70;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uStack_6c;
  *(undefined4 *)(param_2 + 6) = local_88;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_84;
  *(undefined4 *)(param_2 + 7) = uStack_80;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_7c;
  param_2[4] = local_98;
  param_2[5] = uStack_90;
  param_2[2] = local_a8;
  param_2[3] = uStack_a0;
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_a8 = local_68;
  uStack_a0 = local_60;
  local_98 = local_58;
  uStack_90 = local_50;
  local_48 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (local_68 != 0) {
    plVar5 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar5 = (longlong *)&local_88;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*param_4 != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c4143a FUN_146c4143a body=29 status=ok
// SIG undefined FUN_146c4143a(void)

undefined8 FUN_146c4143a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c41458 FUN_146c41458 body=147 status=ok
// SIG undefined FUN_146c41458(void)

undefined8 FUN_146c41458(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[0] = *param_4;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  local_78 = local_68;
  FUN_146c414ec(param_2,param_1,param_3,0);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c414ec FUN_146c414ec body=82 status=ok
// SIG undefined FUN_146c414ec(void)

longlong FUN_146c414ec(longlong param_1)

{
  longlong *plVar1;
  longlong *in_stack_00000028;
  
  FUN_146be983e();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_146c4153e(param_1 + 0x30,in_stack_00000028);
  if (*in_stack_00000028 != 0) {
    plVar1 = in_stack_00000028 + 4;
    if ((longlong *)in_stack_00000028[2] != (longlong *)0x0) {
      plVar1 = (longlong *)in_stack_00000028[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return param_1;
}



// FUNCTION 146c4153e FUN_146c4153e body=290 status=ok
// SIG undefined FUN_146c4153e(void)

longlong * FUN_146c4153e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c41662 FUN_146c41662 body=147 status=ok
// SIG undefined FUN_146c41662(void)

undefined8 FUN_146c41662(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[0] = *param_4;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  local_78 = local_68;
  FUN_146c414ec(param_2,param_1,param_3,1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c416f6 FUN_146c416f6 body=150 status=ok
// SIG undefined FUN_146c416f6(void)

void FUN_146c416f6(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x400);
      memset(_Dst,0,0x400);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_141224966(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar3 = 0;
  }
  *(undefined2 *)
   (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) + (ulonglong)uVar3 * 2) =
       *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146c4178c FUN_146c4178c body=86 status=ok
// SIG undefined FUN_146c4178c(void)

longlong FUN_146c4178c(int *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  if (uVar1 != param_2) {
    if (param_2 <= uVar1) goto LAB_146c417a9;
    FUN_146c0a96a(param_1,param_2);
  }
  FUN_146c417e2(param_1,param_3);
LAB_146c417a9:
  return (ulonglong)((param_2 & 0x1ff) * 0xc) +
         *(longlong *)(*(longlong *)(param_1 + 2) + (ulonglong)(param_2 >> 9) * 8);
}



// FUNCTION 146c417e2 FUN_146c417e2 body=161 status=ok
// SIG undefined FUN_146c417e2(void)

void FUN_146c417e2(int *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  undefined8 uVar5;
  
  iVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0x200) {
    iVar1 = param_1[4];
    if (iVar3 == iVar1 + -1) {
      uVar5 = 0;
      _Dst = (void *)FUN_14001cc68(0x1800,0x10);
      memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar5 >> 8),0xff),0x1800);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_1411b3d20(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar3 = *param_1;
    }
    iVar3 = iVar3 + 1;
    *param_1 = iVar3;
    param_1[1] = 0;
    uVar4 = 0;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 8);
  *(undefined4 *)(lVar2 + 8 + (ulonglong)uVar4 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + (ulonglong)uVar4 * 0xc) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}


