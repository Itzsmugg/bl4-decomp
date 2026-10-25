// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14851e9f6 FUN_14851e9f6 body=650 status=ok
// SIG undefined FUN_14851e9f6(void)

void FUN_14851e9f6(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_148 [32];
  longlong local_128 [3];
  undefined1 local_110 [160];
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  FUN_148544d7f(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_148544db4(param_3);
  }
  lVar2 = (longlong)(int)param_1[1];
  local_128[0] = 0;
  local_128[1] = 0;
  FUN_144a1a59e(local_128,(int)param_1[1],1);
  if (lVar2 < 1) {
    FUN_140bfc200(param_2,(int)param_3[1],1);
  }
  else {
    lVar8 = 0;
    do {
      FUN_1482fde4a(local_110,lVar8 * 0xb0 + *param_1);
      iVar1 = (int)param_3[1];
      if (0 < (longlong)iVar1) {
        puVar3 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar3 = local_110;
        }
        lVar4 = 0;
        do {
          if (local_68 == *(int *)(*param_3 + 0xa8 + lVar4 * 0xb0)) {
            if (0 < local_68) {
              lVar5 = lVar4 * 0xb0 + *param_3;
              lVar6 = *(longlong *)(lVar5 + 0xa0);
              if (lVar6 != 0) {
                lVar5 = lVar6;
              }
              lVar6 = 1;
              lVar7 = 0x48;
              do {
                dVar10 = ABS(*(double *)(puVar3 + lVar7) - *(double *)(lVar5 + lVar7));
                dVar11 = ABS(*(double *)(puVar3 + lVar7 + -8) - *(double *)(lVar5 + -8 + lVar7));
                dVar9 = ABS(*(double *)(puVar3 + lVar7 + -0x10) - *(double *)(lVar5 + -0x10 + lVar7)
                           );
                if (dVar9 <= dVar11) {
                  dVar9 = dVar11;
                }
                if (dVar9 <= dVar10) {
                  dVar9 = dVar10;
                }
                if (local_68 <= lVar6) break;
                lVar6 = lVar6 + 1;
                lVar7 = lVar7 + 0x50;
              } while (dVar9 < 0.01);
              if (0.01 <= dVar9) goto LAB_14851eb5c;
            }
            *(int *)(local_128[0] + lVar8 * 4) = (int)lVar4;
            goto LAB_14851ebaa;
          }
LAB_14851eb5c:
          lVar4 = lVar4 + 1;
        } while (lVar4 != iVar1);
      }
      *(int *)(local_128[0] + lVar8 * 4) = iVar1;
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_148544de4(param_3,iVar1);
      }
      FUN_1482fde4a((longlong)iVar1 * 0xb0 + *param_3,local_110);
LAB_14851ebaa:
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar2);
    FUN_140bfc200(param_2,(int)param_3[1],1);
    lVar8 = 0;
    do {
      lVar4 = *param_2;
      lVar6 = (longlong)*(int *)(local_128[0] + lVar8 * 4) * 0x10;
      iVar1 = *(int *)(lVar4 + 8 + lVar6);
      *(uint *)(lVar4 + 8 + lVar6) = iVar1 + 1U;
      if (*(uint *)(lVar4 + 0xc + lVar6) < iVar1 + 1U) {
        FUN_1446f48e2((longlong *)(lVar4 + lVar6),iVar1);
      }
      *(int *)(*(longlong *)(lVar4 + lVar6) + (longlong)iVar1 * 4) = (int)lVar8;
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851ec82 FUN_14851ec82 body=449 status=ok
// SIG undefined FUN_14851ec82(void)

void FUN_14851ec82(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
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
  plVar1 = (longlong *)(param_1 + 0x18);
  *param_2 = 0;
  param_2[1] = 0;
  lVar9 = param_1 + 0x28;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar9;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x40);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar9)) {
    do {
      lVar3 = *(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x20);
      plVar7 = *(longlong **)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      *param_2 = *param_2 + 1;
      iVar5 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x10))();
      param_2[1] = param_2[1] + (longlong)iVar5;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar9 || iStack_74 != iVar6));
  }
  param_2[2] = 0;
  param_2[3] = 0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar7 = *(longlong **)(param_1 + 8);
    plVar1 = plVar7 + *(int *)(param_1 + 0x10);
    do {
      lVar9 = (longlong)*(int *)(*plVar7 + 0x10);
      if (lVar9 != 0) {
        lVar3 = *(longlong *)(*plVar7 + 8);
        lVar8 = 0;
        do {
          param_2[2] = param_2[2] + 1;
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + lVar8) + 0xd8);
          if (plVar4 != (longlong *)0x0) {
            iVar6 = (**(code **)(*plVar4 + 0x10))();
            param_2[3] = param_2[3] + (longlong)iVar6;
          }
          lVar8 = lVar8 + 8;
        } while (lVar9 * 8 != lVar8);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851ee44 FUN_14851ee44 body=277 status=ok
// SIG undefined FUN_14851ee44(void)

void FUN_14851ee44(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  code *local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  double *local_60;
  code *local_58;
  longlong *local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0.0;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    local_70 = param_1;
    local_68 = param_2;
    if (param_3 == '\0') {
      local_60 = &local_48;
      local_80 = FUN_143ba343c;
      local_78 = &local_70;
      FUN_146c879a2(*(undefined8 *)(param_1 + 0x80),param_2);
    }
    else {
      local_60 = &local_48;
      local_58 = FUN_143ba33e0;
      local_50 = &local_70;
      FUN_146c87faa(*(undefined8 *)(param_1 + 0x80),param_2);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x78);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x70);
      lVar5 = 0;
      do {
        dVar4 = local_48;
        plVar3 = *(longlong **)(lVar2 + 0x10 + lVar5);
        local_48 = (double)(**(code **)(*plVar3 + 0x20))
                                     (plVar3,param_2,*(longlong *)(lVar2 + 8 + lVar5) + 0x20);
        local_48 = dVar4 + local_48;
        lVar5 = lVar5 + 0x48;
      } while ((longlong)iVar1 * 0x48 != lVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48);
  }
  return;
}



// FUNCTION 14851ef5a FUN_14851ef5a body=273 status=ok
// SIG undefined FUN_14851ef5a(void)

undefined8 FUN_14851ef5a(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
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
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  longlong local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_40;
  local_38 = FUN_143ba3654;
  local_48 = &local_58;
  local_50 = &LAB_143ba3628;
  local_68 = 0x7fefffffffffffff;
  local_58 = param_1;
  local_40 = param_1;
  uVar16 = FUN_146c87396(*(undefined8 *)(param_1 + 0x80));
  if (-1 < (int)uVar16) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    uVar17 = (ulonglong)uVar16;
    plVar3 = *(longlong **)(lVar2 + 0x10 + uVar17 * 0x48);
    cVar15 = (**(code **)(*plVar3 + 0x28))
                       (plVar3,param_2,*(longlong *)(lVar2 + 8 + uVar17 * 0x48) + 0x20,param_3);
    if (cVar15 != '\0') {
      puVar1 = (undefined8 *)(lVar2 + uVar17 * 0x48);
      *(undefined8 *)(param_3 + 0xe) = *(undefined8 *)*puVar1;
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)puVar1[1];
      param_3[0x12] = *(undefined4 *)(puVar1[1] + 0xc);
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      uVar9 = param_2[6];
      uVar10 = param_2[7];
      uVar11 = param_2[8];
      uVar12 = param_2[9];
      uVar13 = param_2[10];
      uVar14 = param_2[0xb];
      *param_3 = *param_2;
      param_3[1] = uVar4;
      param_3[2] = uVar5;
      param_3[3] = uVar6;
      param_3[4] = uVar7;
      param_3[5] = uVar8;
      param_3[6] = uVar9;
      param_3[7] = uVar10;
      param_3[8] = uVar11;
      param_3[9] = uVar12;
      param_3[10] = uVar13;
      param_3[0xb] = uVar14;
      FUN_148543dfa(param_3 + 0x1c,puVar1[1] + 0x20);
      uVar18 = 1;
      goto LAB_14851effa;
    }
  }
  uVar18 = 0;
LAB_14851effa:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851f06c FUN_14851f06c body=234 status=ok
// SIG undefined FUN_14851f06c(void)

longlong FUN_14851f06c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar3 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar3 = param_1;
  }
  lVar1 = (longlong)*(int *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x10;
    lVar4 = 0;
    do {
      dVar7 = *(double *)(lVar3 + 0x38 + lVar4);
      dVar6 = *(double *)(lVar3 + 0x40 + lVar4);
      dVar8 = dVar7 - dVar6;
      uVar5 = -(ulonglong)(-dVar8 <= dVar8);
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      if (1e-08 < (double)(~uVar5 & (ulonglong)-dVar8 | (ulonglong)dVar8 & uVar5)) {
        return lVar2;
      }
      dVar8 = *(double *)(lVar3 + 0x48 + lVar4);
      dVar7 = dVar7 - dVar8;
      uVar5 = -(ulonglong)(-dVar7 <= dVar7);
      if (1e-08 < (double)(~uVar5 & (ulonglong)-dVar7 | (ulonglong)dVar7 & uVar5)) {
        return lVar2;
      }
      dVar6 = dVar6 - dVar8;
      uVar5 = -(ulonglong)(-dVar6 <= dVar6);
      if (1e-08 < (double)(~uVar5 & (ulonglong)-dVar6 | (ulonglong)dVar6 & uVar5)) {
        return lVar2;
      }
      lVar4 = lVar4 + 0x50;
    } while (lVar1 * 0x50 != lVar4);
  }
  return 0;
}



// FUNCTION 14851f156 FUN_14851f156 body=406 status=ok
// SIG undefined FUN_14851f156(void)

void FUN_14851f156(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  code *local_88;
  longlong **local_80;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x78);
    if ((longlong)iVar3 != 0) {
      lVar19 = *(longlong *)(param_1 + 0x70);
      lVar21 = 0;
      do {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_146bf26b8(param_2,iVar4);
        }
        puVar1 = (undefined4 *)(lVar19 + 0x18 + lVar21);
        lVar17 = *param_2;
        lVar18 = (longlong)iVar4 * 0x30;
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        uVar10 = puVar1[4];
        uVar11 = puVar1[5];
        uVar12 = puVar1[6];
        uVar13 = puVar1[7];
        uVar14 = puVar1[9];
        uVar15 = puVar1[10];
        uVar16 = puVar1[0xb];
        puVar2 = (undefined4 *)(lVar17 + 0x20 + lVar18);
        *puVar2 = puVar1[8];
        puVar2[1] = uVar14;
        puVar2[2] = uVar15;
        puVar2[3] = uVar16;
        puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        puVar1[2] = uVar12;
        puVar1[3] = uVar13;
        puVar1 = (undefined4 *)(lVar17 + lVar18);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        lVar21 = lVar21 + 0x48;
      } while ((longlong)iVar3 * 0x48 != lVar21);
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar22 = *(longlong **)(param_1 + 8);
    local_98 = plVar22 + *(int *)(param_1 + 0x10);
    do {
      lVar19 = (longlong)*(int *)(*plVar22 + 0x10);
      if (lVar19 != 0) {
        plVar20 = *(longlong **)(*plVar22 + 8);
        lVar19 = lVar19 << 3;
        do {
          plVar5 = *(longlong **)(*plVar20 + 0xd8);
          if (plVar5 != (longlong *)0x0) {
            local_80 = &local_90;
            local_88 = FUN_143ba3766;
            local_90 = plVar20;
            (**(code **)(*plVar5 + 0x18))(plVar5,&local_78,&local_88);
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_146bf26b8(param_2,iVar3);
            }
            lVar21 = *param_2;
            lVar17 = (longlong)iVar3 * 0x30;
            puVar1 = (undefined4 *)(lVar21 + 0x20 + lVar17);
            *puVar1 = local_58;
            puVar1[1] = uStack_54;
            puVar1[2] = uStack_50;
            puVar1[3] = uStack_4c;
            puVar1 = (undefined4 *)(lVar21 + 0x10 + lVar17);
            *puVar1 = local_68;
            puVar1[1] = uStack_64;
            puVar1[2] = uStack_60;
            puVar1[3] = uStack_5c;
            puVar1 = (undefined4 *)(lVar21 + lVar17);
            *puVar1 = local_78;
            puVar1[1] = uStack_74;
            puVar1[2] = uStack_70;
            puVar1[3] = uStack_6c;
          }
          plVar20 = plVar20 + 1;
          lVar19 = lVar19 + -8;
        } while (lVar19 != 0);
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14851f3aa FUN_14851f3aa body=117 status=ok
// SIG undefined FUN_14851f3aa(void)

void FUN_14851f3aa(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar5 = *(longlong **)(param_1 + 8);
    plVar1 = plVar5 + *(int *)(param_1 + 0x10);
    do {
      lVar7 = (longlong)*(int *)(*plVar5 + 0x10);
      if (lVar7 != 0) {
        lVar2 = *(longlong *)(*plVar5 + 8);
        lVar6 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar6);
          plVar4 = *(longlong **)(lVar3 + 0xd8);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x40))(plVar4,param_2,lVar3 + 0x20);
          }
          lVar6 = lVar6 + 8;
        } while (lVar7 * 8 != lVar6);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 14851f420 FUN_14851f420 body=279 status=ok
// SIG undefined FUN_14851f420(void)

void FUN_14851f420(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [40];
  int local_90;
  undefined8 *local_88;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  local_78 = CONCAT44(local_78._4_4_,uVar1);
  cVar3 = (*(code *)*param_2)(param_2[1],&local_78);
  lVar2 = DAT_14cb4d778;
  if (cVar3 != '\0') {
    local_90 = 1;
    if (param_5 == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar5 = 0;
      }
      else {
        bVar4 = FUN_144a61b4f();
        uVar5 = (ulonglong)(bVar4 ^ 1);
      }
      local_90 = (*(int *)(lVar2 + uVar5 * 4) == 0) + 1;
    }
    local_88 = &local_50;
    local_50 = 0;
    local_48 = 0;
    local_60 = FUN_143ba3858;
    local_78 = param_1;
    local_70 = param_3;
    local_68 = param_4;
    local_58 = &local_78;
    FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851f538 FUN_14851f538 body=180 status=ok
// SIG undefined FUN_14851f538(void)

void FUN_14851f538(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar6 = *(longlong **)(param_1 + 8);
    plVar1 = plVar6 + *(int *)(param_1 + 0x10);
    do {
      lVar3 = *plVar6;
      if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x10), (longlong)iVar2 != 0)) {
        lVar3 = *(longlong *)(lVar3 + 8);
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar5);
          if (lVar4 != 0) {
            local_58 = *plVar6;
            local_50 = lVar4;
            (*(code *)*param_2)(param_2[1],&local_58,&local_50);
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar2 * 8 != lVar5);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851f5ee FUN_14851f5ee body=182 status=ok
// SIG undefined FUN_14851f5ee(void)

undefined8 * FUN_14851f5ee(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  memset(param_1 + 0xb,0,0xa0);
  param_1[0x1f] = 0x101010101010101;
  *(undefined2 *)(param_1 + 0x20) = 0x101;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  FUN_140056680(param_1 + 0x24,L"SceneCapturePhotoSet");
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[0x1f] = 0x101010101010101;
  *(undefined1 **)((longlong)param_1 + 0x3c) = &DAT_200000002;
  *(undefined1 **)((longlong)param_1 + 0x44) = &DAT_200000002;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 2;
  *(undefined2 *)(param_1 + 0x20) = 1;
  return param_1;
}



// FUNCTION 14851f6a4 FUN_14851f6a4 body=80 status=ok
// SIG undefined FUN_14851f6a4(void)

void FUN_14851f6a4(void)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14851f6f6();
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14851f6f6 FUN_14851f6f6 body=312 status=ok
// SIG undefined FUN_14851f6f6(void)

void FUN_14851f6f6(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  
  if (*param_1 == param_2) {
    iVar1 = (int)param_1[2];
    if (iVar1 == *(int *)(param_3 + 1)) {
      if (iVar1 != 0) {
        iVar1 = memcmp((void *)param_1[1],(void *)*param_3,(longlong)iVar1 << 3);
        if (iVar1 != 0) goto LAB_14851f75e;
      }
      iVar1 = (int)param_1[4];
      if (iVar1 == *(int *)(param_4 + 1)) {
        if (iVar1 == 0) goto LAB_14851f807;
        iVar1 = memcmp((void *)param_1[3],(void *)*param_4,(longlong)iVar1 << 3);
        if (iVar1 == 0) goto LAB_14851f807;
      }
    }
  }
LAB_14851f75e:
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 2;
  }
  if ((int)param_1[6] != 0) {
    *(undefined4 *)(param_1 + 6) = 2;
  }
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 2;
  }
  if ((int)param_1[7] != 0) {
    *(undefined4 *)(param_1 + 7) = 2;
  }
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
  }
  if ((int)param_1[8] != 0) {
    *(undefined4 *)(param_1 + 8) = 2;
  }
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 2;
  }
  if ((int)param_1[9] != 0) {
    *(undefined4 *)(param_1 + 9) = 2;
  }
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 2;
  }
  if ((int)param_1[10] != 0) {
    *(undefined4 *)(param_1 + 10) = 2;
  }
  FUN_14851f82e(param_1);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(int *)((longlong)param_1 + 0x114) != 0) {
    FUN_148549680(param_1 + 0x21);
  }
LAB_14851f807:
  *param_1 = param_2;
  FUN_1457246e8(param_1 + 1,param_3);
  FUN_14851f8ae(param_1 + 3,param_4);
  return;
}



// FUNCTION 14851f82e FUN_14851f82e body=127 status=ok
// SIG undefined FUN_14851f82e(void)

void FUN_14851f82e(longlong param_1)

{
  FUN_1485208d2(param_1 + 0x58);
  FUN_148520906(param_1 + 0x68);
  FUN_148520906(param_1 + 0x78);
  FUN_148520906(param_1 + 0x88);
  FUN_1485208d2(param_1 + 0x98);
  FUN_1485208d2(param_1 + 0xa8);
  FUN_1485208d2(param_1 + 0xb8);
  FUN_148520906(param_1 + 200);
  FUN_1485208d2(param_1 + 0xd8);
  FUN_148520906(param_1 + 0xe8);
  return;
}



// FUNCTION 14851f8ae FUN_14851f8ae body=88 status=ok
// SIG undefined FUN_14851f8ae(void)

undefined8 * FUN_14851f8ae(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478c7106(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14851f906 FUN_14851f906 body=212 status=ok
// SIG undefined FUN_14851f906(void)

void FUN_14851f906(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x110) == *(int *)(param_2 + 1)) {
    cVar1 = FUN_1485496b0(*(undefined8 *)(param_1 + 0x108),*param_2);
    if (cVar1 != '\0') {
      return;
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 2;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 2;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 2;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 2;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 2;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 2;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 2;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 2;
  }
  FUN_14851f82e(param_1);
  FUN_14851f9da((undefined8 *)(param_1 + 0x108),param_2);
  return;
}



// FUNCTION 14851f9da FUN_14851f9da body=89 status=ok
// SIG undefined FUN_14851f9da(void)

undefined8 * FUN_14851f9da(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1484d4416(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x50);
      }
    }
  }
  return param_1;
}



// FUNCTION 14851fa34 FUN_14851fa34 body=185 status=ok
// SIG undefined FUN_14851fa34(void)

void FUN_14851fa34(longlong param_1,int param_2)

{
  if (param_2 < 0x20) {
    switch(param_2) {
    case 1:
      FUN_1485208d2(param_1 + 0x58);
      return;
    case 2:
      FUN_148520906(param_1 + 0x68);
      return;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      FUN_148520906(param_1 + 0x88);
      return;
    case 8:
      FUN_148520906(param_1 + 0x78);
      return;
    default:
      if (param_2 == 0x10) {
        FUN_1485208d2(param_1 + 0xb8);
        return;
      }
    }
  }
  else if (param_2 < 0x80) {
    if (param_2 == 0x20) {
      FUN_1485208d2(param_1 + 0xa8);
      return;
    }
    if (param_2 == 0x40) {
      FUN_148520906(param_1 + 0xe8);
      return;
    }
  }
  else {
    if (param_2 == 0x80) {
      FUN_1485208d2(param_1 + 0x98);
      return;
    }
    if (param_2 == 0x100) {
      FUN_148520906(param_1 + 200);
      return;
    }
    if (param_2 == 0x200) {
      FUN_1485208d2(param_1 + 0xd8);
      return;
    }
  }
  return;
}



// FUNCTION 14851faee FUN_14851faee body=178 status=ok
// SIG undefined FUN_14851faee(void)

void FUN_14851faee(longlong param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_1 + 0xf8);
  if (param_3 < 0x20) {
    if (param_3 < 8) {
      if (param_3 == 2) {
        puVar1 = (undefined1 *)(param_1 + 0xf9);
      }
      else if (param_3 == 4) {
        puVar1 = (undefined1 *)(param_1 + 0xfb);
      }
    }
    else if (param_3 == 8) {
      puVar1 = (undefined1 *)(param_1 + 0xfa);
    }
    else if (param_3 == 0x10) {
      puVar1 = (undefined1 *)(param_1 + 0xfe);
    }
  }
  else if (param_3 < 0x80) {
    if (param_3 == 0x20) {
      puVar1 = (undefined1 *)(param_1 + 0xfd);
    }
    else if (param_3 == 0x40) {
      puVar1 = (undefined1 *)(param_1 + 0x101);
    }
  }
  else if (param_3 == 0x80) {
    puVar1 = (undefined1 *)(param_1 + 0xfc);
  }
  else if (param_3 == 0x100) {
    puVar1 = (undefined1 *)(param_1 + 0xff);
  }
  else if (param_3 == 0x200) {
    puVar1 = (undefined1 *)(param_1 + 0x100);
  }
  *param_2 = *puVar1;
  return;
}



// FUNCTION 14851fba0 FUN_14851fba0 body=131 status=ok
// SIG undefined FUN_14851fba0(void)

undefined4 FUN_14851fba0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  if (param_2 < 0x20) {
    if (param_2 < 8) {
      if (param_2 == 2) {
        puVar1 = (undefined4 *)(param_1 + 0x30);
      }
      else if (param_2 == 4) {
        puVar1 = (undefined4 *)(param_1 + 0x38);
      }
    }
    else if (param_2 == 8) {
      puVar1 = (undefined4 *)(param_1 + 0x34);
    }
    else if (param_2 == 0x10) {
      puVar1 = (undefined4 *)(param_1 + 0x44);
    }
  }
  else if (param_2 < 0x80) {
    if (param_2 == 0x20) {
      puVar1 = (undefined4 *)(param_1 + 0x40);
    }
    else if (param_2 == 0x40) {
      puVar1 = (undefined4 *)(param_1 + 0x50);
    }
  }
  else if (param_2 == 0x80) {
    puVar1 = (undefined4 *)(param_1 + 0x3c);
  }
  else if (param_2 == 0x100) {
    puVar1 = (undefined4 *)(param_1 + 0x48);
  }
  else if (param_2 == 0x200) {
    puVar1 = (undefined4 *)(param_1 + 0x4c);
  }
  return *puVar1;
}



// FUNCTION 14851fc24 FUN_14851fc24 body=156 status=ok
// SIG undefined FUN_14851fc24(void)

undefined8 * FUN_14851fc24(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x12] = 0x8000000080;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_144939946(param_1 + 0x18);
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  *(undefined1 *)(param_1 + 0x18e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc74) = 0xffffffff;
  FUN_140056680(param_1 + 399,L"WorldRenderCapture");
  return param_1;
}



// FUNCTION 14851fcc0 FUN_14851fcc0 body=85 status=ok
// SIG undefined FUN_14851fcc0(void)

void FUN_14851fcc0(longlong param_1)

{
  FUN_148523186();
  if (*(longlong *)(param_1 + 0xc78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_144ab5a64(param_1 + 8);
  return;
}



// FUNCTION 14851fd16 FUN_14851fd16 body=17 status=ok
// SIG undefined FUN_14851fd16(void)

undefined8 * FUN_14851fd16(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14851fd28 FUN_14851fd28 body=229 status=ok
// SIG undefined FUN_14851fd28(void)

void FUN_14851fd28(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (0x1f < param_3) {
    if (param_3 < 0x80) {
      if (param_3 != 0x20) {
        if (param_3 != 0x40) goto switchD_14851fd48_caseD_3;
        uVar3 = *(undefined4 *)(param_1 + 0x3c);
        goto LAB_14851fdf7;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
    }
    else {
      if (param_3 == 0x80) {
        uVar3 = *(undefined4 *)(param_1 + 0x18);
        uVar1 = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)((longlong)param_2 + 4) = uVar3;
        *(undefined4 *)(param_2 + 1) = uVar1;
        goto LAB_14851fe05;
      }
      if (param_3 == 0x100) {
        uVar3 = *(undefined4 *)(param_1 + 0x40);
        goto LAB_14851fdf7;
      }
      if (param_3 != 0x200) goto switchD_14851fd48_caseD_3;
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      uVar2 = *(undefined8 *)(param_1 + 0x44);
    }
    goto LAB_14851fdce;
  }
  switch(param_3) {
  case 1:
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    goto LAB_14851fdce;
  case 2:
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
switchD_14851fd48_caseD_3:
    *param_2 = 0;
    param_2[1] = 0;
    return;
  case 4:
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    break;
  case 8:
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    break;
  default:
    if (param_3 != 0x10) goto switchD_14851fd48_caseD_3;
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = *(undefined8 *)(param_1 + 0x24);
LAB_14851fdce:
    *param_2 = uVar2;
    goto LAB_14851fe00;
  }
LAB_14851fdf7:
  *(undefined4 *)param_2 = uVar3;
  *(undefined4 *)((longlong)param_2 + 4) = uVar3;
LAB_14851fe00:
  *(undefined4 *)(param_2 + 1) = uVar3;
LAB_14851fe05:
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
  return;
}



// FUNCTION 14851fe0e FUN_14851fe0e body=2471 status=ok
// SIG undefined FUN_14851fe0e(void)

bool FUN_14851fe0e(longlong param_1,double *param_2,double *param_3,float param_4,
                  undefined8 *param_5,int *param_6,double *param_7)

{
  undefined4 *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_db8 [32];
  double *local_d98;
  float local_d84;
  double *local_d80;
  double local_d78;
  double local_d70;
  double local_d68;
  double local_d60;
  double local_d58;
  double local_d50;
  double local_d48;
  ulonglong local_d40;
  double local_d38;
  double local_d30;
  undefined4 local_d28;
  undefined4 uStack_d24;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  double local_d18;
  double local_d08;
  double dStack_d00;
  double local_cf8;
  double local_cf0;
  double local_ce8;
  double local_ce0;
  double local_cd8;
  double local_cd0;
  double local_cc8;
  double local_cb8;
  double dStack_cb0;
  double local_ca8;
  double local_ca0;
  undefined1 local_c98 [1584];
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_db8;
  *param_6 = -1;
  *param_7 = 0.0;
  param_7[1] = 0.0;
  iVar5 = *(int *)(param_1 + 0x110);
  local_d80 = param_2;
  if (0 < (longlong)iVar5) {
    lVar12 = 0;
    lVar11 = 0;
    lVar13 = 0;
    local_d70 = 1.0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x108);
      local_d98 = *(double **)(lVar6 + 0x48 + lVar12);
      FUN_1485207b6(local_c98,lVar6 + lVar12,(int)*(undefined8 *)(lVar6 + 0x40 + lVar12),
                    (int)*(undefined8 *)(lVar6 + 0x38 + lVar12));
      dVar16 = *(double *)(lVar6 + 0x20 + lVar12);
      dVar3 = *(double *)(lVar6 + 0x28 + lVar12);
      dVar15 = dVar3 + dVar3;
      dVar17 = dVar16 + dVar16;
      dVar4 = *(double *)(lVar6 + 0x30 + lVar12);
      dVar18 = *(double *)(lVar6 + 0x18 + lVar12);
      local_cc8 = dVar15 * dVar18 - dVar17 * dVar4;
      local_ce0 = dVar15 * dVar4 + dVar17 * dVar18;
      local_cf8 = 1.0 - (dVar16 * dVar17 + dVar3 * dVar15);
      local_cd8 = dVar4 * (dVar18 + dVar18);
      dVar19 = (dVar18 + dVar18) * dVar18;
      local_cd0 = 1.0 - (dVar16 * dVar17 + dVar19);
      local_ce8 = dVar15 * dVar16 - local_cd8;
      dStack_d00 = dVar15 * dVar18 + dVar17 * dVar4;
      local_cd8 = dVar15 * dVar16 + local_cd8;
      local_cf0 = 1.0 - (dVar19 + dVar3 * dVar15);
      local_d08 = dVar17 * dVar18 - dVar15 * dVar4;
      local_d18 = *(double *)(lVar6 + 0x10 + lVar12);
      puVar1 = (undefined4 *)(lVar6 + lVar12);
      local_d28 = *puVar1;
      uStack_d24 = puVar1[1];
      uStack_d20 = puVar1[2];
      uStack_d1c = puVar1[3];
      local_cb8 = 0.0;
      dStack_cb0 = 0.0;
      local_ca8 = 0.0;
      local_ca0 = 1.0;
      FUN_146bfbbda(&local_cb8,&local_d08);
      dVar18 = local_cb8 * (local_ca8 + local_ca8) + (dStack_cb0 + dStack_cb0) * local_ca0;
      dVar16 = (local_ca8 + local_ca8) * dStack_cb0 - (local_cb8 + local_cb8) * local_ca0;
      dVar3 = 1.0 - (local_cb8 * (local_cb8 + local_cb8) + dStack_cb0 * (dStack_cb0 + dStack_cb0));
      dVar4 = param_3[2] * dVar3 + *param_3 * dVar18 + param_3[1] * dVar16;
      if ((dVar4 <= -0.1) && (dVar4 <= local_d70)) {
        local_cf0 = local_cb8;
        local_ce8 = dStack_cb0;
        local_ce0 = local_ca8;
        local_cd8 = local_ca0;
        dVar15 = *(double *)(lVar6 + 0x38 + lVar12);
        local_d08 = dVar18 * dVar15 + (double)CONCAT44(uStack_d24,local_d28);
        dStack_d00 = dVar16 * dVar15 + (double)CONCAT44(uStack_d1c,uStack_d20);
        local_cf8 = dVar3 * dVar15 + local_d18;
        dVar16 = *(double *)(lVar6 + 0x38 + lVar12);
        dVar3 = tan(*(double *)(lVar6 + 0x40 + lVar12) * 0.5 * 0.017453292519943295);
        local_ca8 = local_d18;
        local_cb8 = (double)CONCAT44(uStack_d24,local_d28);
        dStack_cb0 = (double)CONCAT44(uStack_d1c,uStack_d20);
        local_d30 = local_d80[2] - local_d18;
        local_d38 = local_d80[1] - dStack_cb0;
        dVar18 = *local_d80 - local_cb8;
        dVar15 = SQRT(local_d30 * local_d30 + dVar18 * dVar18 + local_d38 * local_d38);
        dVar19 = 1.0 / dVar15;
        if (0.0 < dVar15) {
          local_d30 = local_d30 * dVar19;
          local_d38 = local_d38 * dVar19;
        }
        else {
          local_d38 = 0.0;
          local_d30 = 0.0;
        }
        local_d40 = -(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar18 * dVar19);
        local_d98 = &local_d58;
        cVar10 = FUN_14848488c(&local_d08,&local_cb8,&local_d40,2);
        if (cVar10 != '\0') {
          local_d78 = dVar16 * dVar3;
          local_d60 = local_d50 - dStack_d00;
          local_d68 = local_cf0;
          dVar16 = local_ce8 + local_ce8;
          dVar3 = local_ce0 + local_ce0;
          dVar18 = ((dVar3 * local_cf0 - dVar16 * local_cd8) * (local_d48 - local_cf8) +
                   (1.0 - (local_ce8 * dVar16 + local_ce0 * dVar3)) * (local_d58 - local_d08) +
                   (dVar3 * local_cd8 + dVar16 * local_cf0) * local_d60) / local_d78;
          uVar14 = -(ulonglong)(-dVar18 <= dVar18);
          local_d84 = param_4;
          if ((((double)(~uVar14 & (ulonglong)-dVar18 | uVar14 & (ulonglong)dVar18) < 1.0) &&
              (dVar16 = ((local_d48 - local_cf8) *
                         (local_ce8 * dVar3 + local_cd8 * (local_cf0 + local_cf0)) +
                        (local_d58 - local_d08) * (dVar16 * local_cf0 - dVar3 * local_cd8) +
                        local_d60 *
                        (1.0 - (local_ce0 * dVar3 + (local_cf0 + local_cf0) * local_cf0))) /
                        local_d78, uVar14 = -(ulonglong)(-dVar16 <= dVar16),
              (double)(~uVar14 & (ulonglong)-dVar16 | uVar14 & (ulonglong)dVar16) < 1.0)) &&
             (cVar10 = (*(code *)*param_5)(param_5[1],local_d80,&local_cb8), cVar10 != '\0')) {
            dVar3 = dVar18 * 0.5 + 0.5;
            dVar15 = 1.0 - (dVar16 * 0.5 + 0.5);
            if (param_4 <= 0.0) {
LAB_148520760:
              *param_7 = dVar3 * (double)*(int *)(lVar6 + 0x48 + lVar12);
              param_7[1] = dVar15 * (double)*(int *)(lVar6 + 0x4c + lVar12);
              *param_6 = (int)lVar13;
              local_d70 = dVar4;
            }
            else {
              lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar11);
              dVar19 = 1.0;
              if (dVar3 <= 1.0) {
                dVar19 = dVar3;
              }
              dVar17 = 1.0;
              if (dVar15 <= 1.0) {
                dVar17 = dVar15;
              }
              fVar2 = *(float *)((longlong)
                                 (int)((double)*(int *)(lVar7 + 0x54) *
                                      (double)(~-(ulonglong)(dVar15 < 0.0) & (ulonglong)dVar17)) *
                                 (longlong)*(int *)(lVar7 + 0x50) * 4 + *(longlong *)(lVar7 + 0x58)
                                + (longlong)
                                  (int)((double)*(int *)(lVar7 + 0x50) *
                                       (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar19)) * 4
                                );
              if (0.0 < fVar2) {
                dVar17 = (double)fVar2;
                dVar19 = 1.0 / (dVar17 * dStack_610 + dVar16 * dStack_630 + dVar18 * dStack_650 +
                               dStack_5f0);
                dVar8 = local_ca8 -
                        dVar19 * (dVar17 * local_618 + dVar16 * local_638 + dVar18 * local_658 +
                                 local_5f8);
                dVar9 = dStack_cb0 -
                        (dStack_620 * dVar17 + dStack_640 * dVar16 + dStack_660 * dVar18 +
                        dStack_600) * dVar19;
                dVar16 = local_cb8 -
                         (local_628 * dVar17 + local_648 * dVar16 + local_668 * dVar18 + local_608)
                         * dVar19;
                if (ABS((float)SQRT(dVar8 * dVar8 + dVar16 * dVar16 + dVar9 * dVar9) -
                        (float)SQRT((local_ca8 - local_d80[2]) * (local_ca8 - local_d80[2]) +
                                    (local_cb8 - *local_d80) * (local_cb8 - *local_d80) +
                                    (dStack_cb0 - local_d80[1]) * (dStack_cb0 - local_d80[1]))) <
                    param_4) goto LAB_148520760;
              }
            }
          }
        }
      }
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x10;
      lVar12 = lVar12 + 0x50;
    } while (iVar5 != lVar13);
  }
  if ((local_f0 ^ (ulonglong)auStack_db8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *param_6 != -1;
}



// FUNCTION 1485207b6 FUN_1485207b6 body=282 status=ok
// SIG undefined FUN_1485207b6(void)

undefined8
FUN_1485207b6(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_588 [32];
  undefined8 local_568;
  undefined8 *local_560;
  undefined8 *local_558;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_51c;
  undefined4 local_514;
  longlong local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4cc;
  undefined4 local_4c4;
  longlong local_4b8;
  undefined4 local_4b0;
  undefined1 local_4a8 [1160];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_588;
  local_558 = &local_4f8;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4cc = 0xffffffff00000080;
  local_4c4 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_560 = &local_548;
  local_528 = 0;
  local_520 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_51c = 0xffffffff00000080;
  local_514 = 0;
  local_508 = 0;
  local_500 = 0;
  local_568 = param_4;
  FUN_14852358e(local_4a8,param_2,&stack0x00000028,param_3);
  local_500 = 0;
  if (local_508 != 0) {
    FUN_1400020a8();
  }
  FUN_144ab5a64(&local_548);
  local_4b0 = 0;
  if (local_4b8 != 0) {
    FUN_1400020a8();
  }
  FUN_144ab5a64(&local_4f8);
  FUN_144896358(param_1,local_4a8);
  FUN_144891d70(local_4a8);
  if ((local_20 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485208d2 FUN_1485208d2 body=51 status=ok
// SIG undefined FUN_1485208d2(void)

void FUN_1485208d2(undefined8 *param_1)

{
  FUN_148549ca8(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_148549cf2(param_1);
  return;
}



// FUNCTION 148520906 FUN_148520906 body=51 status=ok
// SIG undefined FUN_148520906(void)

void FUN_148520906(undefined8 *param_1)

{
  FUN_148549d22(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_148549d6c(param_1);
  return;
}



// FUNCTION 148520939 FUN_148520939 body=2880 status=ok
// SIG undefined FUN_148520939(void)

longlong *
FUN_148520939(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,double param_6,undefined8 param_7,char param_8,char param_9,
             char param_10,char param_11,char param_12)

{
  undefined4 *puVar1;
  double dVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_e08 [32];
  undefined4 local_de8;
  undefined4 uStack_de4;
  undefined4 uStack_de0;
  undefined4 uStack_ddc;
  double local_dd8;
  double local_dd0;
  double local_dc8;
  double local_dc0;
  double local_db8;
  double dStack_db0;
  double local_da8;
  undefined4 *local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  double local_d78;
  double local_d70;
  double dStack_d68;
  double local_d60;
  double local_d58;
  undefined8 local_d50;
  double local_d48;
  undefined8 local_d40;
  undefined8 local_d30;
  undefined8 local_d28;
  undefined8 local_d20;
  double local_d00;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_e08;
  if (*(int *)(param_4 + 8) == 0 && *(int *)(param_3 + 8) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_e08);
  }
  local_d98 = (undefined4 *)0x0;
  uStack_d90 = 0;
  if (param_8 != '\0') {
    local_d78 = (double)DAT_14c8463b0;
    local_d88._0_4_ = (undefined4)DAT_14c8463a0;
    local_d88._4_4_ = DAT_14c8463a0._4_4_;
    uStack_d80._0_4_ = (undefined4)DAT_14c8463a8;
    uStack_d80._4_4_ = DAT_14c8463a8._4_4_;
    uStack_d90._0_4_ = 1;
    uStack_d90._4_4_ = 0;
    FUN_1403e3958(&local_d98,0);
    iVar6 = (uint)uStack_d90;
    *(double *)(local_d98 + 4) = local_d78;
    *local_d98 = (undefined4)local_d88;
    local_d98[1] = local_d88._4_4_;
    local_d98[2] = (undefined4)uStack_d80;
    local_d98[3] = uStack_d80._4_4_;
    uVar9 = DAT_14c8463b0 ^ 0x8000000000000000;
    uVar4 = CONCAT44(DAT_14c8463a8._4_4_,(undefined4)DAT_14c8463a8);
    uVar3 = CONCAT44(DAT_14c8463a0._4_4_,(undefined4)DAT_14c8463a0);
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,iVar6);
    }
    uVar7 = (uint)uStack_d90;
    *(ulonglong *)(local_d98 + lVar14 * 6) = uVar3 ^ 0x8000000000000000;
    *(ulonglong *)(local_d98 + lVar14 * 6 + 2) = uVar4 ^ 0x8000000000000000;
    *(ulonglong *)(local_d98 + lVar14 * 6 + 4) = uVar9;
    local_d78 = (double)DAT_14c846398;
    local_d88._0_4_ = (undefined4)DAT_14c846388;
    local_d88._4_4_ = DAT_14c846388._4_4_;
    uStack_d80._0_4_ = (undefined4)DAT_14c846390;
    uStack_d80._4_4_ = DAT_14c846390._4_4_;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    uVar13 = (uint)uStack_d90;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
      uVar13 = (uint)uStack_d90;
    }
    *(double *)(local_d98 + lVar14 * 6 + 4) = local_d78;
    puVar1 = local_d98 + lVar14 * 6;
    *puVar1 = (undefined4)local_d88;
    puVar1[1] = local_d88._4_4_;
    puVar1[2] = (undefined4)uStack_d80;
    puVar1[3] = uStack_d80._4_4_;
    uVar9 = DAT_14c846398 ^ 0x8000000000000000;
    uVar4 = CONCAT44(DAT_14c846390._4_4_,(undefined4)DAT_14c846390);
    uVar3 = CONCAT44(DAT_14c846388._4_4_,(undefined4)DAT_14c846388);
    uStack_d90._0_4_ = uVar13 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar13);
    }
    uVar7 = (uint)uStack_d90;
    lVar14 = (longlong)(int)uVar13;
    *(ulonglong *)(local_d98 + lVar14 * 6) = uVar3 ^ 0x8000000000000000;
    *(ulonglong *)(local_d98 + lVar14 * 6 + 2) = uVar4 ^ 0x8000000000000000;
    *(ulonglong *)(local_d98 + lVar14 * 6 + 4) = uVar9;
    local_d78 = DAT_14c8463c8;
    local_d88 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_d80 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    uVar13 = (uint)uStack_d90;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
      uVar13 = (uint)uStack_d90;
    }
    *(double *)(local_d98 + lVar14 * 6 + 4) = local_d78;
    puVar1 = local_d98 + lVar14 * 6;
    *puVar1 = (undefined4)local_d88;
    puVar1[1] = local_d88._4_4_;
    puVar1[2] = (undefined4)uStack_d80;
    puVar1[3] = uStack_d80._4_4_;
    dVar2 = -DAT_14c8463c8;
    uVar3 = CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    uVar9 = CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_d90 = CONCAT44(uStack_d90._4_4_,uVar13 + 1);
    if (uStack_d90._4_4_ < uVar13 + 1) {
      FUN_1403e3958(&local_d98,uVar13);
    }
    lVar14 = (longlong)(int)uVar13;
    *(ulonglong *)(local_d98 + lVar14 * 6) = uVar9 ^ 0x8000000000000000;
    *(ulonglong *)(local_d98 + lVar14 * 6 + 2) = uVar3 ^ 0x8000000000000000;
    *(double *)(local_d98 + lVar14 * 6 + 4) = dVar2;
  }
  if (param_9 != '\0') {
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uVar7 = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < uVar7) {
      uVar9 = uStack_d90 & 0xffffffff;
      uStack_d90._0_4_ = uVar7;
      FUN_1403e3958(&local_d98,uVar9);
      uVar7 = (uint)uStack_d90;
    }
    uStack_d90._0_4_ = uVar7;
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0x3fe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0x3fe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0xbfe279a74590331d;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0xbfe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0x3fe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0xbfe279a74590331d;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0x3fe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0xbfe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0xbfe279a74590331d;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0xbfe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0xbfe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0xbfe279a74590331d;
  }
  if (param_10 != '\0') {
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uVar7 = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < uVar7) {
      uVar9 = uStack_d90 & 0xffffffff;
      uStack_d90._0_4_ = uVar7;
      FUN_1403e3958(&local_d98,uVar9);
      uVar7 = (uint)uStack_d90;
    }
    uStack_d90._0_4_ = uVar7;
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0x3fe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0x3fe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0x3fe279a74590331d;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0xbfe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0x3fe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0x3fe279a74590331d;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0x3fe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0xbfe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0x3fe279a74590331d;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0xbfe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0xbfe279a74590331d;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0x3fe279a74590331d;
  }
  if (param_11 != '\0') {
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uVar7 = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < uVar7) {
      uVar9 = uStack_d90 & 0xffffffff;
      uStack_d90._0_4_ = uVar7;
      FUN_1403e3958(&local_d98,uVar9);
      uVar7 = (uint)uStack_d90;
    }
    uStack_d90._0_4_ = uVar7;
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0xbfe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0xbfe6a09e667f3bcc;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0x3fe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0xbfe6a09e667f3bcc;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0xbfe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0xbfe6a09e667f3bcc;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0x3fe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0xbfe6a09e667f3bcc;
  }
  if (param_12 != '\0') {
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uVar7 = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < uVar7) {
      uVar9 = uStack_d90 & 0xffffffff;
      uStack_d90._0_4_ = uVar7;
      FUN_1403e3958(&local_d98,uVar9);
      uVar7 = (uint)uStack_d90;
    }
    uStack_d90._0_4_ = uVar7;
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0x3fe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0x3fe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0xbfe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0x3fe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    uVar7 = (uint)uStack_d90;
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0x3fe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0xbfe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0;
    lVar14 = (longlong)(int)(uint)uStack_d90;
    uStack_d90._0_4_ = (uint)uStack_d90 + 1;
    if (uStack_d90._4_4_ < (uint)uStack_d90) {
      FUN_1403e3958(&local_d98,uVar7);
    }
    *(undefined8 *)(local_d98 + lVar14 * 6) = 0xbfe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 2) = 0xbfe6a09e667f3bcc;
    *(undefined8 *)(local_d98 + lVar14 * 6 + 4) = 0;
  }
  FUN_14851fc24(&local_d88);
  FUN_143b9d73c(&local_d88,param_3,param_4);
  if (local_d78._0_4_ == local_d50._4_4_) {
    uVar18 = 0;
    uVar19 = 0;
    dVar2 = 1000.0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
  }
  else {
    fVar15 = tanf((float)param_6 * 0.017453292 * 0.5);
    dVar2 = (double)((float)(local_d00 * 1.25) / fVar15);
    uVar22 = (undefined4)local_d30;
    uVar23 = (undefined4)((ulonglong)local_d30 >> 0x20);
    uVar20 = (undefined4)local_d28;
    uVar21 = (undefined4)((ulonglong)local_d28 >> 0x20);
    uVar18 = (undefined4)local_d20;
    uVar19 = (undefined4)((ulonglong)local_d20 >> 0x20);
  }
  FUN_14851fcc0(&local_d88);
  *param_1 = 0;
  param_1[1] = 0;
  lVar14 = (longlong)(int)(uint)uStack_d90;
  if (0 < lVar14) {
    lVar12 = 0;
    do {
      local_db8 = *(double *)((longlong)local_d98 + lVar12);
      dStack_db0 = ((double *)((longlong)local_d98 + lVar12))[1];
      local_da8 = *(double *)((longlong)local_d98 + lVar12 + 0x10);
      dVar16 = local_da8 * local_da8 + local_db8 * local_db8 + dStack_db0 * dStack_db0;
      if (9.99999993922529e-09 < dVar16) {
        dVar16 = 1.0 / SQRT(dVar16);
        local_db8 = local_db8 * dVar16;
        dStack_db0 = dStack_db0 * dVar16;
        local_da8 = local_da8 * dVar16;
      }
      local_d78 = (double)DAT_14c8464f0;
      local_d88 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_d80 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_d70 = 0.0;
      dStack_d68 = 0.0;
      local_d60 = 0.0;
      local_d58 = 1.0;
      local_d50 = param_7;
      local_d48 = param_6;
      local_d40 = param_5;
      FUN_1482ae234(&local_d88,0,&local_db8);
      dVar16 = dStack_d68 + dStack_d68;
      dVar17 = local_d60 + local_d60;
      local_dc8 = dVar16 * local_d70 + local_d58 * dVar17;
      local_dc0 = local_d70 * dVar17 - dVar16 * local_d58;
      local_dd0 = 1.0 - (dVar17 * local_d60 + dStack_d68 * dVar16);
      local_dd8 = DAT_14c8463c8;
      local_de8 = (undefined4)DAT_14c8463b8;
      uStack_de4 = DAT_14c8463b8._4_4_;
      uStack_de0 = (undefined4)DAT_14c8463c0;
      uStack_ddc = DAT_14c8463c0._4_4_;
      FUN_1482ae2be(&local_d88,2,&local_de8,&local_dd0);
      dVar16 = dStack_d68 + dStack_d68;
      dVar17 = local_d60 + local_d60;
      local_d88 = (double)CONCAT44(uVar23,uVar22) -
                  (1.0 - (dVar17 * local_d60 + dStack_d68 * dVar16)) * dVar2;
      uStack_d80 = (double)CONCAT44(uVar21,uVar20) -
                   (dVar16 * local_d70 + local_d58 * dVar17) * dVar2;
      local_d78 = (double)CONCAT44(uVar19,uVar18) -
                  (local_d70 * dVar17 - dVar16 * local_d58) * dVar2;
      lVar5 = param_1[1];
      uVar7 = (int)lVar5 + 1;
      *(uint *)(param_1 + 1) = uVar7;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar7) {
        FUN_148549d9c(param_1);
      }
      puVar10 = &local_d88;
      puVar11 = (undefined8 *)((longlong)(int)lVar5 * 0x50 + *param_1);
      for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      lVar12 = lVar12 + 0x18;
    } while (lVar14 * 0x18 != lVar12);
  }
  if (local_d98 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_e08) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852147a FUN_14852147a body=30 status=ok
// SIG undefined FUN_14852147a(void)

void FUN_14852147a(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  return;
}



// FUNCTION 1485214a6 FUN_1485214a6 body=65 status=ok
// SIG undefined FUN_1485214a6(void)

undefined8 FUN_1485214a6(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 2);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485214d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x4e8))(plVar2);
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1485214f2 FUN_1485214f2 body=33 status=ok
// SIG undefined FUN_1485214f2(void)

undefined8 FUN_1485214f2(longlong param_1,undefined8 param_2)

{
  FUN_146c72bca(param_2,param_1 + 0x18,param_1 + 0x48);
  return param_2;
}



// FUNCTION 148521514 FUN_148521514 body=451 status=ok
// SIG undefined FUN_148521514(void)

undefined4 FUN_148521514(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 auStack_c8 [32];
  double *local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined4 local_6c;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar5 = (**(code **)(*param_1 + 8))();
  if (cVar5 == '\0') {
    uVar6 = 0;
  }
  else {
    if ((char)param_1[0x38] == '\x01') {
      (**(code **)(*param_1 + 0x38))(param_1,0);
    }
    FUN_1485216d8(param_1 + 9,&local_60,param_2);
    local_a8 = &local_88;
    uVar6 = FUN_146bfeafa(param_1 + 0x14,&local_60,&local_68,&local_6c);
    if ((char)uVar6 != '\0') {
      dVar7 = (double)FUN_14479d2ce(param_1 + 2);
      param_3[8] = dVar7;
      param_3[7] = *(double *)((longlong)dVar7 + 0xa8);
      *(undefined4 *)((longlong)param_3 + 0x4c) = local_6c;
      *(undefined4 *)(param_3 + 10) = 0;
      param_3[0xd] = local_78;
      param_3[0xb] = local_88;
      param_3[0xc] = dStack_80;
      param_3[0xe] = local_68 * local_48 + local_60;
      param_3[0xf] = local_40 * local_68 + local_58;
      param_3[0x10] = local_38 * local_68 + local_50;
      FUN_146bcb256(param_1 + 9,&local_a0,param_3 + 0xe);
      param_3[0x13] = local_90;
      param_3[0x11] = local_a0;
      param_3[0x12] = dStack_98;
      dVar7 = *param_2;
      dVar1 = param_2[1];
      dVar2 = param_2[2];
      dVar3 = param_2[3];
      dVar4 = param_2[5];
      param_3[4] = param_2[4];
      param_3[5] = dVar4;
      param_3[2] = dVar2;
      param_3[3] = dVar3;
      *param_3 = dVar7;
      param_3[1] = dVar1;
      param_3[6] = (param_3[0x13] - param_2[2]) * param_2[5] +
                   (param_3[0x11] - *param_2) * param_2[3] +
                   (param_3[0x12] - param_2[1]) * param_2[4];
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485216d8 FUN_1485216d8 body=330 status=ok
// SIG undefined FUN_1485216d8(void)

undefined8 * FUN_1485216d8(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146ba22f0(param_1,&local_58);
  FUN_146c5d1a4(param_1,&local_70,param_3 + 0x18);
  dVar2 = SQRT(local_60 * local_60 + local_70 * local_70 + local_68 * local_68);
  dVar1 = 1.0 / dVar2;
  if (0.0 < dVar2) {
    local_60 = local_60 * dVar1;
    local_68 = local_68 * dVar1;
  }
  else {
    local_60 = 0.0;
    local_68 = 0.0;
  }
  dVar2 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)(local_70 * dVar1));
  param_2[2] = local_48;
  *param_2 = local_58;
  param_2[1] = uStack_50;
  param_2[3] = dVar2;
  param_2[4] = local_68;
  param_2[5] = local_60;
  dVar1 = local_60 * local_60 + dVar2 * dVar2 + local_68 * local_68;
  if (9.99999993922529e-09 < dVar1) {
    dVar1 = 1.0 / SQRT(dVar1);
    param_2[3] = dVar2 * dVar1;
    param_2[4] = local_68 * dVar1;
    param_2[5] = local_60 * dVar1;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148521824 FUN_148521824 body=350 status=ok
// SIG undefined FUN_148521824(void)

ulonglong FUN_148521824(longlong param_1,int param_2,uint param_3,char param_4,undefined8 *param_5,
                       undefined8 *param_6,undefined4 *param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 unaff_RBX;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_2 == 0) && (-1 < (int)param_3)) && ((int)param_3 < *(int *)(param_1 + 0xb8))) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar8 = *(longlong *)(param_1 + 0xb0);
    uVar9 = (ulonglong)param_3;
    lVar10 = (longlong)*(int *)(lVar8 + uVar9 * 0xc);
    lVar11 = (longlong)*(int *)(lVar8 + 4 + uVar9 * 0xc);
    lVar8 = (longlong)*(int *)(lVar8 + 8 + uVar9 * 0xc);
    param_5[2] = *(undefined8 *)(lVar3 + 0x10 + lVar10 * 0x18);
    puVar1 = (undefined8 *)(lVar3 + lVar10 * 0x18);
    uVar7 = puVar1[1];
    *param_5 = *puVar1;
    param_5[1] = uVar7;
    lVar3 = *(longlong *)(param_1 + 0xa0);
    param_6[2] = *(undefined8 *)(lVar3 + 0x10 + lVar11 * 0x18);
    puVar1 = (undefined8 *)(lVar3 + lVar11 * 0x18);
    uVar7 = puVar1[1];
    *param_6 = *puVar1;
    param_6[1] = uVar7;
    lVar3 = *(longlong *)(param_1 + 0xa0);
    *(undefined8 *)(param_7 + 4) = *(undefined8 *)(lVar3 + 0x10 + lVar8 * 0x18);
    puVar2 = (undefined4 *)(lVar3 + lVar8 * 0x18);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *param_7 = *puVar2;
    param_7[1] = uVar4;
    param_7[2] = uVar5;
    param_7[3] = uVar6;
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (param_4 != '\0') {
      param_1 = param_1 + 0x48;
      FUN_146bcb256(param_1,&local_50,param_5);
      param_5[2] = local_40;
      *(undefined4 *)param_5 = local_50;
      *(undefined4 *)((longlong)param_5 + 4) = uStack_4c;
      *(undefined4 *)(param_5 + 1) = uStack_48;
      *(undefined4 *)((longlong)param_5 + 0xc) = uStack_44;
      FUN_146bcb256(param_1,&local_50,param_6);
      param_6[2] = local_40;
      *(undefined4 *)param_6 = local_50;
      *(undefined4 *)((longlong)param_6 + 4) = uStack_4c;
      *(undefined4 *)(param_6 + 1) = uStack_48;
      *(undefined4 *)((longlong)param_6 + 0xc) = uStack_44;
      FUN_146bcb256(param_1,&local_50,param_7);
      *(undefined8 *)(param_7 + 4) = local_40;
      *param_7 = local_50;
      param_7[1] = uStack_4c;
      param_7[2] = uStack_48;
      param_7[3] = uStack_44;
    }
  }
  else {
    uVar9 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148521984 FUN_148521984 body=569 status=ok
// SIG undefined FUN_148521984(void)

void FUN_148521984(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
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
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 uVar20;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  undefined2 local_299;
  undefined1 local_297;
  undefined1 local_296;
  undefined4 local_295;
  undefined1 local_291;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_146bfe9ee(param_1 + 0x14,0);
  cVar15 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar15 == '\0') goto LAB_148521ada;
  plVar1 = param_1 + 2;
  lVar16 = FUN_14479d2ce(plVar1);
  uVar2 = *(undefined4 *)(lVar16 + 0x244);
  uVar3 = *(undefined4 *)(lVar16 + 0x248);
  uVar4 = *(undefined4 *)(lVar16 + 0x24c);
  uVar5 = *(undefined4 *)(lVar16 + 0x250);
  uVar6 = *(undefined4 *)(lVar16 + 0x254);
  uVar7 = *(undefined4 *)(lVar16 + 600);
  uVar8 = *(undefined4 *)(lVar16 + 0x25c);
  uVar9 = *(undefined4 *)(lVar16 + 0x260);
  uVar10 = *(undefined4 *)(lVar16 + 0x264);
  uVar11 = *(undefined4 *)(lVar16 + 0x268);
  uVar12 = *(undefined4 *)(lVar16 + 0x26c);
  lVar18 = *(longlong *)(lVar16 + 0x270);
  lVar13 = *(longlong *)(lVar16 + 0x280);
  lVar14 = *(longlong *)(lVar16 + 0x288);
  lVar19 = *(longlong *)(lVar16 + 0x290);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar16 + 0x240);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 10) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0xb) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  *(undefined4 *)((longlong)param_1 + 100) = uVar8;
  *(undefined4 *)(param_1 + 0xd) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar10;
  *(undefined4 *)(param_1 + 0xe) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar12;
  param_1[0xf] = lVar18;
  param_1[0x10] = lVar13;
  param_1[0x11] = lVar14;
  param_1[0x12] = lVar19;
  plVar17 = (longlong *)FUN_14479d2ce(plVar1);
  (**(code **)(*plVar17 + 0x528))(plVar17,&local_290,&DAT_14c846480);
  param_1[3] = (longlong)(local_290 - local_278);
  param_1[4] = (longlong)(local_288 - local_270);
  param_1[5] = (longlong)(local_280 - local_268);
  param_1[6] = (longlong)(local_290 + local_278);
  param_1[7] = (longlong)(local_288 + local_270);
  param_1[8] = (longlong)(local_280 + local_268);
  uVar20 = 1;
  if (param_2 == '\0') {
    lVar18 = FUN_14479d2ce(plVar1);
    lVar18 = *(longlong *)(lVar18 + 0xa8);
    if (lVar18 != 0) {
      lVar19 = FUN_140fe7df8();
      if ((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
        uVar20 = 0;
        local_296 = 0;
        local_291 = 1;
        local_295 = 0;
        local_2a8 = 0;
        FUN_1411b354a(&local_290,0,0,0);
        FUN_1484cfa92(lVar18,&local_290,&local_296);
        local_299 = 1;
        local_297 = 0;
        FUN_146bfe132(param_1 + 0x14,&local_290);
        FUN_141082778(&local_290);
        goto LAB_148521ad3;
      }
    }
    uVar20 = 0;
  }
LAB_148521ad3:
  *(undefined1 *)(param_1 + 0x38) = uVar20;
LAB_148521ada:
  if ((local_70 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148521bbe FUN_148521bbe body=109 status=ok
// SIG undefined FUN_148521bbe(void)

void FUN_148521bbe(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  
  cVar10 = (**(code **)(*param_1 + 8))();
  if (cVar10 != '\0') {
    lVar11 = FUN_14479d2ce(param_1 + 2);
    lVar3 = *(longlong *)(lVar11 + 0x248);
    lVar4 = *(longlong *)(lVar11 + 0x250);
    lVar5 = *(longlong *)(lVar11 + 600);
    lVar6 = *(longlong *)(lVar11 + 0x260);
    lVar7 = *(longlong *)(lVar11 + 0x268);
    lVar1 = *(longlong *)(lVar11 + 0x270);
    lVar8 = *(longlong *)(lVar11 + 0x280);
    lVar9 = *(longlong *)(lVar11 + 0x288);
    lVar2 = *(longlong *)(lVar11 + 0x290);
    param_1[9] = *(longlong *)(lVar11 + 0x240);
    param_1[10] = lVar3;
    param_1[0xb] = lVar4;
    param_1[0xc] = lVar5;
    param_1[0xd] = lVar6;
    param_1[0xe] = lVar7;
    param_1[0xf] = lVar1;
    param_1[0x10] = lVar8;
    param_1[0x11] = lVar9;
    param_1[0x12] = lVar2;
  }
  return;
}



// FUNCTION 148521c2c FUN_148521c2c body=30 status=ok
// SIG undefined FUN_148521c2c(void)

void FUN_148521c2c(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x170) = 1;
  return;
}



// FUNCTION 148521c58 FUN_148521c58 body=65 status=ok
// SIG undefined FUN_148521c58(void)

undefined8 FUN_148521c58(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 2);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148521c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x4e8))(plVar2);
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 148521ca4 FUN_148521ca4 body=33 status=ok
// SIG undefined FUN_148521ca4(void)

undefined8 FUN_148521ca4(longlong param_1,undefined8 param_2)

{
  FUN_146c72bca(param_2,param_1 + 0x18,param_1 + 0x48);
  return param_2;
}



// FUNCTION 148521cc6 FUN_148521cc6 body=541 status=ok
// SIG undefined FUN_148521cc6(void)

undefined4 FUN_148521cc6(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  double dVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  double *local_118;
  double *local_110;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined4 local_e4;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined1 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar5 = (**(code **)(*param_1 + 8))();
  if (cVar5 == '\0') {
    uVar6 = 0;
  }
  else {
    if ((char)param_1[0x2e] == '\x01') {
      (**(code **)(*param_1 + 0x38))(param_1,0);
    }
    FUN_1485216d8(param_1 + 9,&local_d8,param_2);
    local_110 = &local_a8;
    local_a8 = 1.79769313486232e+308;
    local_98 = 0.0;
    local_88 = (longlong *)0x0;
    local_58 = 0;
    local_118 = &local_100;
    uVar6 = FUN_146bddf02(param_1 + 0x14,&local_d8,&local_e0,&local_e4);
    if (local_98 != 0.0) {
      plVar8 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar8 = local_78;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((char)uVar6 != '\0') {
      dVar7 = (double)FUN_14479d2ce(param_1 + 2);
      param_3[8] = dVar7;
      param_3[7] = *(double *)((longlong)dVar7 + 0xa8);
      *(undefined4 *)((longlong)param_3 + 0x4c) = local_e4;
      *(undefined4 *)(param_3 + 10) = 0;
      param_3[0xd] = local_f0;
      param_3[0xb] = local_100;
      param_3[0xc] = dStack_f8;
      param_3[0xe] = local_e0 * local_c0 + local_d8;
      param_3[0xf] = local_b8 * local_e0 + local_d0;
      param_3[0x10] = local_b0 * local_e0 + local_c8;
      FUN_146bcb256(param_1 + 9,&local_a8,param_3 + 0xe);
      param_3[0x13] = local_98;
      param_3[0x11] = local_a8;
      param_3[0x12] = dStack_a0;
      dVar7 = *param_2;
      dVar1 = param_2[1];
      dVar2 = param_2[2];
      dVar3 = param_2[3];
      dVar4 = param_2[5];
      param_3[4] = param_2[4];
      param_3[5] = dVar4;
      param_3[2] = dVar2;
      param_3[3] = dVar3;
      *param_3 = dVar7;
      param_3[1] = dVar1;
      param_3[6] = (param_3[0x13] - param_2[2]) * param_2[5] +
                   (param_3[0x11] - *param_2) * param_2[3] +
                   (param_3[0x12] - param_2[1]) * param_2[4];
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148521ee4 FUN_148521ee4 body=204 status=ok
// SIG undefined FUN_148521ee4(void)

ulonglong FUN_148521ee4(longlong param_1,int param_2,undefined4 param_3,undefined1 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  longlong local_40;
  undefined1 *local_38;
  code *local_30;
  undefined4 **local_28;
  undefined1 local_19;
  undefined4 local_18;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_19 = 0;
  local_18 = param_3;
  local_11 = param_4;
  if (param_2 == 0) {
    plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      local_68 = &local_18;
      local_28 = &local_68;
      local_60 = param_5;
      local_58 = param_6;
      local_50 = param_7;
      local_48 = &local_11;
      local_38 = &local_19;
      local_30 = FUN_143ba3cf4;
      local_40 = param_1;
      uVar2 = (**(code **)(*plVar1 + 0xa90))(plVar1);
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),local_19);
      goto LAB_148521f10;
    }
  }
  uVar3 = 0;
LAB_148521f10:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148521fb2 FUN_148521fb2 body=261 status=ok
// SIG undefined FUN_148521fb2(void)

void FUN_148521fb2(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  char cVar16;
  longlong *plVar17;
  undefined1 auStack_78 [40];
  code *local_50;
  longlong **local_48;
  longlong *local_40;
  code *local_38;
  longlong **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar16 = (**(code **)(*param_1 + 8))();
  if (cVar16 != '\0') {
    plVar17 = (longlong *)FUN_14479d2ce(param_1 + 2);
    if (plVar17 != (longlong *)0x0) {
      uVar3 = *(undefined4 *)((longlong)plVar17 + 0x244);
      lVar11 = plVar17[0x49];
      uVar4 = *(undefined4 *)((longlong)plVar17 + 0x24c);
      lVar12 = plVar17[0x4a];
      uVar5 = *(undefined4 *)((longlong)plVar17 + 0x254);
      lVar13 = plVar17[0x4b];
      uVar6 = *(undefined4 *)((longlong)plVar17 + 0x25c);
      lVar14 = plVar17[0x4c];
      uVar7 = *(undefined4 *)((longlong)plVar17 + 0x264);
      lVar15 = plVar17[0x4d];
      uVar8 = *(undefined4 *)((longlong)plVar17 + 0x26c);
      lVar1 = plVar17[0x4e];
      lVar9 = plVar17[0x50];
      lVar10 = plVar17[0x51];
      lVar2 = plVar17[0x52];
      *(int *)(param_1 + 9) = (int)plVar17[0x48];
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
      *(int *)(param_1 + 10) = (int)lVar11;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
      *(int *)(param_1 + 0xb) = (int)lVar12;
      *(undefined4 *)((longlong)param_1 + 0x5c) = uVar5;
      *(int *)(param_1 + 0xc) = (int)lVar13;
      *(undefined4 *)((longlong)param_1 + 100) = uVar6;
      *(int *)(param_1 + 0xd) = (int)lVar14;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uVar7;
      *(int *)(param_1 + 0xe) = (int)lVar15;
      *(undefined4 *)((longlong)param_1 + 0x74) = uVar8;
      param_1[0xf] = lVar1;
      param_1[0x10] = lVar9;
      param_1[0x11] = lVar10;
      param_1[0x12] = lVar2;
      local_38 = FUN_143ba3eb2;
      local_40 = param_1;
      local_30 = &local_40;
      (**(code **)(*plVar17 + 0xa90))(plVar17);
      if (param_2 == '\0') {
        local_50 = FUN_143ba3f12;
        local_48 = &local_40;
        local_40 = param_1;
        (**(code **)(*plVar17 + 0xa90))(plVar17);
      }
      *(bool *)(param_1 + 0x2e) = param_2 != '\0';
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485220b8 FUN_1485220b8 body=109 status=ok
// SIG undefined FUN_1485220b8(void)

void FUN_1485220b8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  
  cVar10 = (**(code **)(*param_1 + 8))();
  if (cVar10 != '\0') {
    lVar11 = FUN_14479d2ce(param_1 + 2);
    lVar3 = *(longlong *)(lVar11 + 0x248);
    lVar4 = *(longlong *)(lVar11 + 0x250);
    lVar5 = *(longlong *)(lVar11 + 600);
    lVar6 = *(longlong *)(lVar11 + 0x260);
    lVar7 = *(longlong *)(lVar11 + 0x268);
    lVar1 = *(longlong *)(lVar11 + 0x270);
    lVar8 = *(longlong *)(lVar11 + 0x280);
    lVar9 = *(longlong *)(lVar11 + 0x288);
    lVar2 = *(longlong *)(lVar11 + 0x290);
    param_1[9] = *(longlong *)(lVar11 + 0x240);
    param_1[10] = lVar3;
    param_1[0xb] = lVar4;
    param_1[0xc] = lVar5;
    param_1[0xd] = lVar6;
    param_1[0xe] = lVar7;
    param_1[0xf] = lVar1;
    param_1[0x10] = lVar8;
    param_1[0x11] = lVar9;
    param_1[0x12] = lVar2;
  }
  return;
}



// FUNCTION 148522126 FUN_148522126 body=152 status=ok
// SIG undefined FUN_148522126(void)

undefined8 * FUN_148522126(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af15f10;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  FUN_1458481c0(param_1 + 0x16);
  param_1[0x16] = 0x40f86a0000000000;
  *(undefined4 *)(param_1 + 0x18) = 7;
  return param_1;
}



// FUNCTION 1485221be FUN_1485221be body=109 status=ok
// SIG undefined FUN_1485221be(void)

void FUN_1485221be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af15f10;
  FUN_145820e5c(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_148543e76(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_148544002(param_1 + 2);
  return;
}



// FUNCTION 14852222c FUN_14852222c body=1110 status=ok
// SIG undefined FUN_14852222c(void)

ulonglong FUN_14852222c(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong *puVar10;
  int iVar11;
  undefined8 unaff_RBP;
  undefined7 uVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  ulonglong *local_98;
  longlong **local_90;
  longlong *local_68;
  longlong *plStack_60;
  ulonglong local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  lVar7 = DAT_14cb4d8d0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar12 = (undefined7)((ulonglong)unaff_RBP >> 8);
  local_50 = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar6 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    iVar9 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar9 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      iVar11 = iVar9;
      do {
        if (*(ulonglong *)(lVar6 + (longlong)iVar11 * 0x18) == param_2) goto LAB_14852230c;
        iVar11 = *(int *)(lVar6 + (longlong)iVar11 * 0x18 + 0x10);
      } while (iVar11 != -1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar3 ^ 1);
  }
  local_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  if (*(char *)(lVar7 + uVar5) == '\x01') {
    if (param_2 == 0) {
LAB_148522462:
      uVar5 = 0;
      goto LAB_148522464;
    }
    lVar7 = FUN_1405babea();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) != lVar7 + 0x30)) goto LAB_148522407;
    iVar9 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar9 + 1;
    *(int *)param_3 = iVar9;
    plVar8 = (longlong *)FUN_14001cc68(0x1e0);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14af17b20;
    plVar13 = plVar8 + 2;
    memset(plVar13,0,0x1d0);
    FUN_148549e30(plVar13);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    uVar5 = local_50;
    if (local_50 == 0) {
LAB_1485225b5:
      uVar5 = 0;
    }
    else {
      lVar7 = FUN_1405babea();
LAB_148522599:
      if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) != lVar7 + 0x30)) goto LAB_1485225b5;
    }
    (**(code **)(plVar8[2] + 0x48))(plVar13,uVar5);
    plVar1 = plStack_60;
    local_68 = plVar13;
    if (plVar8 == (longlong *)0x0) {
      if (plStack_60 != (longlong *)0x0) {
        plStack_60 = (longlong *)0x0;
LAB_1485225ec:
        LOCK();
        plVar13 = plVar1 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
        if (plVar8 != (longlong *)0x0) goto LAB_148522618;
      }
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (plVar8 == plStack_60) {
        LOCK();
        plVar13 = plVar8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      else {
        bVar14 = plStack_60 != (longlong *)0x0;
        plStack_60 = plVar8;
        if (bVar14) goto LAB_1485225ec;
      }
LAB_148522618:
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    if (param_2 == 0) goto LAB_148522462;
LAB_148522407:
    lVar7 = FUN_1411674f6();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) == lVar7 + 0x30)) {
      iVar9 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = iVar9 + 1;
      *(int *)param_3 = iVar9;
      plVar8 = (longlong *)FUN_14001cc68(400);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_14af17b90;
      plVar13 = plVar8 + 2;
      memset(plVar13,0,0x180);
      FUN_148549f66(plVar13);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      uVar5 = local_50;
      if (local_50 != 0) {
        lVar7 = FUN_1411674f6();
        goto LAB_148522599;
      }
      goto LAB_1485225b5;
    }
  }
  uVar5 = CONCAT71(uVar12,local_68 != (longlong *)0x0);
  if (local_68 != (longlong *)0x0) {
    local_98 = &local_50;
    local_90 = (longlong **)param_3;
    FUN_14854a09c((longlong *)(param_1 + 0x10),local_44,&local_98);
    local_90 = &local_68;
    local_98 = param_3;
    FUN_14854a596(param_1 + 0x60,local_44,&local_98);
    (**(code **)(*local_68 + 0x38))(local_68,1);
    (**(code **)(*local_68 + 0x20))(local_68,&local_98);
    FUN_146c86256(param_1 + 0xb0,(int)*param_3,&local_98);
  }
  plVar13 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_60 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
LAB_148522464:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
  while (iVar9 = (int)puVar10[2], iVar9 != -1) {
LAB_14852230c:
    puVar10 = (ulonglong *)(lVar6 + (longlong)iVar9 * 0x18);
    if (*puVar10 == param_2) goto LAB_148522491;
  }
  puVar10 = (ulonglong *)0x0;
LAB_148522491:
  *(int *)param_3 = (int)puVar10[1];
  uVar5 = CONCAT71(uVar12,1);
  goto LAB_148522464;
}



// FUNCTION 148522684 FUN_148522684 body=234 status=ok
// SIG undefined FUN_148522684(void)

void FUN_148522684(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong *puVar5;
  int iVar6;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[10];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[0xb] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar1 = param_1[2];
      iVar6 = iVar4;
      do {
        if (*(ulonglong *)(lVar1 + (longlong)iVar6 * 0x18) == param_2) goto LAB_148522736;
        iVar6 = *(int *)(lVar1 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  goto LAB_148522714;
  while (iVar4 = (int)puVar5[2], iVar4 != -1) {
LAB_148522736:
    puVar5 = (ulonglong *)(lVar1 + (longlong)iVar4 * 0x18);
    if (*puVar5 == param_2) goto LAB_148522751;
  }
  puVar5 = (ulonglong *)0x0;
LAB_148522751:
  local_1c = (undefined4)puVar5[1];
  FUN_14854aa82();
  (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
LAB_148522714:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148522770 FUN_148522770 body=135 status=ok
// SIG undefined FUN_148522770(void)

void FUN_148522770(longlong param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar1 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xa0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x60);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x20) == *param_2) {
          FUN_146c86e00(param_1 + 0xb0);
          FUN_14854ab5e((longlong *)(param_1 + 0x60),param_2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1485227f8 FUN_1485227f8 body=729 status=ok
// SIG undefined FUN_1485227f8(void)

ulonglong FUN_1485227f8(longlong param_1,undefined8 param_2,undefined8 *param_3,uint *param_4,
                       undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  longlong *local_58;
  code *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_3[2] = DAT_14c8464f0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *param_3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_3[1] = uVar4;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0x3ff0000000000000;
  param_3[6] = 0x47efffffe0000000;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0xffffffffffffffff;
  param_3[10] = 0;
  param_3[0xd] = DAT_14c8464f0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_3[0xb] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_3[0xc] = uVar4;
  param_3[0x10] = DAT_14c8464f0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_3[0xe] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_3[0xf] = uVar4;
  param_3[0x13] = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_3 + 0x11) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_3 + 0x8c) = uVar5;
  *(undefined4 *)(param_3 + 0x12) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0x94) = uVar7;
  local_48 = &local_108;
  uStack_100 = (undefined1 *)&param_5;
  local_f0 = &param_6;
  local_50 = FUN_143ba3fd6;
  local_58 = &local_68;
  local_60 = FUN_143ba3f5a;
  local_118 = 0x7fefffffffffffff;
  local_108 = param_1;
  local_f8 = param_2;
  local_68 = param_1;
  uVar8 = FUN_146c87396(param_1 + 0xb0,param_2);
  if (-1 < (int)uVar8) {
    if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
      lVar11 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar11 = *(longlong *)(param_1 + 0xa0);
      }
      iVar10 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0xa8) + 0x7fffffffU & uVar8) * 4);
      if (iVar10 != -1) {
        do {
          lVar11 = *(longlong *)(param_1 + 0x60) + (longlong)iVar10 * 0x20;
          if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar10 * 0x20) == uVar8)
          goto LAB_148522957;
          iVar10 = *(int *)(lVar11 + 0x18);
        } while (iVar10 != -1);
      }
    }
    lVar11 = 0;
LAB_148522957:
    plVar2 = *(longlong **)(lVar11 + 8);
    plVar3 = *(longlong **)(lVar11 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_f8 = DAT_14c8464f0;
    local_108 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_100 = (undefined1 *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_f0 = (undefined8 *)0x0;
    uStack_e8 = 0;
    local_e0 = 0x3ff0000000000000;
    local_d8 = 0x47efffffe0000000;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0xffffffffffffffff;
    local_b8 = 0;
    local_b0 = (undefined4)DAT_14c8464e0;
    uStack_ac = DAT_14c8464e0._4_4_;
    uStack_a8 = (undefined4)DAT_14c8464e8;
    uStack_a4 = DAT_14c8464e8._4_4_;
    local_a0 = DAT_14c8464f0;
    local_98 = (undefined4)DAT_14c8464e0;
    uStack_94 = DAT_14c8464e0._4_4_;
    uStack_90 = (undefined4)DAT_14c8464e8;
    uStack_8c = DAT_14c8464e8._4_4_;
    local_88 = DAT_14c8464f0;
    local_70 = DAT_14c8464f0;
    local_80 = (undefined4)DAT_14c8464e0;
    uStack_7c = DAT_14c8464e0._4_4_;
    uStack_78 = (undefined4)DAT_14c8464e8;
    uStack_74 = DAT_14c8464e8._4_4_;
    uVar9 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2,&local_108,param_6);
    if ((char)uVar9 != '\0') {
      memcpy(param_3,&local_108,0xa0);
      *param_4 = uVar8;
      uVar12 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      if (plVar3 == (longlong *)0x0) goto LAB_148522aa4;
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) goto LAB_148522aa4;
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_148522aa4;
LAB_148522a95:
      (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar12 = (ulonglong)uVar9;
      goto LAB_148522aa4;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) goto LAB_148522a95;
      }
    }
  }
  uVar12 = 0;
LAB_148522aa4:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 148522ad2 FUN_148522ad2 body=191 status=ok
// SIG undefined FUN_148522ad2(void)

undefined8
FUN_148522ad2(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar3 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 0x20) == param_2) {
          if ((undefined8 *)(lVar1 + 8) == (undefined8 *)0x0 || lVar1 == 0) {
            return 0;
          }
          plVar2 = *(longlong **)(lVar1 + 8);
          uVar4 = (**(code **)(*plVar2 + 0x30))
                            (plVar2,param_3,param_4,
                             CONCAT71((int7)((ulonglong)lVar3 >> 8),param_5) & 0xffffffff,param_6,
                             param_7,param_8);
          return uVar4;
        }
        iVar5 = *(int *)(lVar1 + 0x18);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 148522b92 FUN_148522b92 body=342 status=ok
// SIG undefined FUN_148522b92(void)

ulonglong FUN_148522b92(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar7 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x18);
        if (*puVar2 == param_2) {
          if (puVar2 + 1 == (ulonglong *)0x0 || puVar2 == (ulonglong *)0x0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x94)) goto LAB_148522c3f;
          uVar5 = (uint)puVar2[1];
          lVar7 = param_1 + 0x98;
          if (*(longlong *)(param_1 + 0xa0) != 0) {
            lVar7 = *(longlong *)(param_1 + 0xa0);
          }
          iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & uVar5) * 4);
          if (iVar6 == -1) goto LAB_148522c3f;
          goto LAB_148522cb9;
        }
        iVar6 = (int)puVar2[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
  while (iVar6 = *(int *)(lVar7 + 0x18), iVar6 != -1) {
LAB_148522cb9:
    lVar7 = *(longlong *)(param_1 + 0x60) + (longlong)iVar6 * 0x20;
    if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar6 * 0x20) == uVar5)
    goto LAB_148522c41;
  }
LAB_148522c3f:
  lVar7 = 0;
LAB_148522c41:
  plVar3 = *(longlong **)(lVar7 + 8);
  plVar4 = *(longlong **)(lVar7 + 0x10);
  if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148522ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*plVar3 + 8))();
    return uVar8;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  uVar5 = (**(code **)(*plVar3 + 8))();
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return (ulonglong)uVar5;
}



// FUNCTION 148522ce8 FUN_148522ce8 body=418 status=ok
// SIG undefined FUN_148522ce8(void)

bool FUN_148522ce8(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar7 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x18);
        if (*puVar6 == param_2) goto LAB_148522d13;
        iVar5 = (int)puVar6[2];
      } while (iVar5 != -1);
    }
  }
  puVar6 = (ulonglong *)0x0;
LAB_148522d13:
  puVar8 = puVar6 + 1;
  if (puVar6 == (ulonglong *)0x0) {
    puVar8 = (ulonglong *)0x0;
  }
  if (puVar8 != (ulonglong *)0x0) {
    if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
      lVar7 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xa0);
      }
      iVar5 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & (uint)*puVar8) * 4);
      if (iVar5 != -1) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 0x20;
          if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 0x20) == (uint)*puVar8)
          goto LAB_148522d34;
          iVar5 = *(int *)(lVar7 + 0x18);
        } while (iVar5 != -1);
      }
    }
    lVar7 = 0;
LAB_148522d34:
    plVar2 = *(longlong **)(lVar7 + 8);
    plVar3 = *(longlong **)(lVar7 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x40))(plVar2);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_60);
    FUN_146c87142(param_1 + 0xb0,(uint)*puVar8,local_60,0xffffffff);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8 != (ulonglong *)0x0;
}



// FUNCTION 148522e8c FUN_148522e8c body=421 status=ok
// SIG undefined FUN_148522e8c(void)

bool FUN_148522e8c(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar7 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x18);
        if (*puVar6 == param_2) goto LAB_148522eb7;
        iVar5 = (int)puVar6[2];
      } while (iVar5 != -1);
    }
  }
  puVar6 = (ulonglong *)0x0;
LAB_148522eb7:
  puVar8 = puVar6 + 1;
  if (puVar6 == (ulonglong *)0x0) {
    puVar8 = (ulonglong *)0x0;
  }
  if (puVar8 != (ulonglong *)0x0) {
    if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
      lVar7 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xa0);
      }
      iVar5 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & (uint)*puVar8) * 4);
      if (iVar5 != -1) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 0x20;
          if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 0x20) == (uint)*puVar8)
          goto LAB_148522ed8;
          iVar5 = *(int *)(lVar7 + 0x18);
        } while (iVar5 != -1);
      }
    }
    lVar7 = 0;
LAB_148522ed8:
    plVar2 = *(longlong **)(lVar7 + 8);
    plVar3 = *(longlong **)(lVar7 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,param_3);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_60);
    FUN_146c87142(param_1 + 0xb0,(uint)*puVar8,local_60,0xffffffff);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8 != (ulonglong *)0x0;
}



// FUNCTION 148523032 FUN_148523032 body=116 status=ok
// SIG undefined FUN_148523032(void)

longlong FUN_148523032(longlong param_1,int param_2)

{
  if (param_2 < 0x20) {
    if (param_2 < 8) {
      if (param_2 == 2) {
        return param_1 + 1;
      }
      if (param_2 == 4) {
        return param_1 + 2;
      }
    }
    else {
      if (param_2 == 8) {
        return param_1 + 3;
      }
      if (param_2 == 0x10) {
        return param_1 + 4;
      }
    }
  }
  else if (param_2 < 0x80) {
    if (param_2 == 0x20) {
      return param_1 + 5;
    }
    if (param_2 == 0x40) {
      return param_1 + 7;
    }
  }
  else {
    if (param_2 == 0x80) {
      return param_1 + 6;
    }
    if (param_2 == 0x100) {
      param_1 = param_1 + 8;
    }
    else if (param_2 == 0x200) {
      return param_1 + 9;
    }
  }
  return param_1;
}



// FUNCTION 1485230a6 FUN_1485230a6 body=206 status=ok
// SIG undefined FUN_1485230a6(void)

undefined1 FUN_1485230a6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_19;
  local_19 = 1;
  local_38 = param_1;
  local_30 = param_2;
  FUN_143ba4194(&local_38,1);
  FUN_143ba4194(&local_38,2);
  FUN_143ba4194(&local_38,8);
  FUN_143ba4194(&local_38,4);
  FUN_143ba4194(&local_38,0x80);
  FUN_143ba4194(&local_38,0x20);
  FUN_143ba4194(&local_38,0x10);
  FUN_143ba4194(&local_38,0x100);
  FUN_143ba4194(&local_38,0x200);
  FUN_143ba4194(&local_38,0x40);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148523176 FUN_148523176 body=16 status=ok
// SIG undefined FUN_148523176(void)

byte FUN_148523176(void)

{
  byte bVar1;
  
  bVar1 = FUN_1485230a6();
  return bVar1 ^ 1;
}



// FUNCTION 148523186 FUN_148523186 body=230 status=ok
// SIG undefined FUN_148523186(void)

void FUN_148523186(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14852326c FUN_14852326c body=68 status=ok
// SIG undefined FUN_14852326c(void)

void FUN_14852326c(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14854ac56();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1447a08a2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1485232b0 FUN_1485232b0 body=422 status=ok
// SIG undefined FUN_1485232b0(void)

undefined8 FUN_1485232b0(longlong param_1,byte param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if ((*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0x90)) ||
     (*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0x94))) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_14482b126(lVar4,0x40000000);
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_14482b126(lVar4,0x40000000);
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
  }
  lVar4 = (ulonglong)(param_2 ^ 1) * 8 + 0x98;
  lVar3 = *(longlong *)(param_1 + 0x98 + (ulonglong)(param_2 ^ 1) * 8);
  if (lVar3 == 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x90);
    *(ulonglong *)(param_1 + 0xb0) = uVar2;
    lVar3 = FUN_1407635e4(DAT_14c951640);
    *(longlong *)(param_1 + lVar4) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_1447f71cc(lVar3,0x40000000);
    lVar3 = *(longlong *)(param_1 + lVar4);
    *(undefined8 *)(lVar3 + 0x148) = 0;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    if (param_2 == 0) {
      uVar5 = 0x400ccccd;
    }
    else {
      uVar5 = 0x3f800000;
    }
    *(undefined4 *)(*(longlong *)(param_1 + lVar4) + 0x138) = uVar5;
    FUN_14143747c(*(undefined8 *)(param_1 + lVar4),uVar2 & 0xffffffff,uVar2 >> 0x20,10,0);
    lVar3 = *(longlong *)(param_1 + lVar4);
  }
  FUN_140768b6e(lVar3,1);
  FUN_143b9e679();
  return *(undefined8 *)(param_1 + lVar4);
}



// FUNCTION 148523456 FUN_148523456 body=312 status=ok
// SIG undefined FUN_148523456(void)

longlong FUN_148523456(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0x90)) &&
     (*(int *)(param_1 + 0xb4) == *(int *)(param_1 + 0x94))) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      return *(longlong *)(param_1 + 0xa8);
    }
  }
  else if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_14482b126(lVar3,0x40000000);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x90);
  *(ulonglong *)(param_1 + 0xb0) = uVar2;
  lVar3 = FUN_1407635e4(DAT_14c951640);
  *(longlong *)(param_1 + 0xa8) = lVar3;
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_1447f71cc(lVar3,0x40000000);
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x15b) = 9;
    lVar3 = *(longlong *)(param_1 + 0xa8);
    *(undefined4 *)(lVar3 + 0x148) = 0;
    *(undefined4 *)(lVar3 + 0x14c) = 0;
    *(undefined4 *)(lVar3 + 0x150) = 0;
    *(undefined4 *)(lVar3 + 0x154) = 0x3f800000;
    FUN_141646166(*(undefined8 *)(param_1 + 0xa8),uVar2 & 0xffffffff,uVar2 >> 0x20);
    FUN_140768b6e(*(undefined8 *)(param_1 + 0xa8),1);
    FUN_143b9e679();
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  return lVar3;
}



// FUNCTION 14852358e FUN_14852358e body=1398 status=ok
// SIG undefined FUN_14852358e(void)

undefined8 *
FUN_14852358e(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,double param_4,
             double param_5,undefined8 *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_1b8 [40];
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar4 = *param_3;
  dVar1 = *(double *)(param_2 + 6);
  dVar2 = *(double *)(param_2 + 8);
  dVar7 = *(double *)(param_2 + 10);
  dVar9 = dVar7 + dVar7;
  dVar3 = dVar2 + dVar2;
  dVar5 = *(double *)(param_2 + 0xc);
  local_110 = dVar9 * dVar1 - dVar3 * dVar5;
  local_128 = dVar9 * dVar5 + dVar3 * dVar1;
  local_140 = 1.0 - (dVar2 * dVar3 + dVar7 * dVar9);
  local_120 = dVar5 * (dVar1 + dVar1);
  dVar6 = (dVar1 + dVar1) * dVar1;
  local_118 = 1.0 - (dVar2 * dVar3 + dVar6);
  local_130 = dVar9 * dVar2 - local_120;
  local_148 = dVar9 * dVar1 + dVar3 * dVar5;
  local_120 = dVar9 * dVar2 + local_120;
  local_138 = 1.0 - (dVar6 + dVar7 * dVar9);
  local_150 = dVar3 * dVar1 - dVar9 * dVar5;
  local_158 = *(undefined8 *)(param_2 + 4);
  local_168 = *param_2;
  uStack_164 = param_2[1];
  uStack_160 = param_2[2];
  uStack_15c = param_2[3];
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_f8 = 0.0;
  local_f0 = 1.0;
  FUN_146bfbbda(&local_108);
  dVar9 = local_f0 * local_f0 +
          local_f8 * local_f8 + local_108 * local_108 + dStack_100 * dStack_100;
  dVar2 = 0.0;
  dVar7 = 0.0;
  dVar5 = 0.0;
  dVar1 = 0.0;
  if (0.0 < dVar9) {
    dVar9 = 1.0 / dVar9;
    dVar1 = local_f0 * dVar9;
    dVar5 = -local_f8 * dVar9;
    dVar7 = -dStack_100 * dVar9;
    dVar2 = -local_108 * dVar9;
  }
  local_170 = DAT_14c8464e0;
  local_178 = DAT_14c8464e8;
  local_180 = DAT_14c8464f0;
  dVar3 = (double)((float)param_4 * 0.017453292 * 0.5);
  dVar9 = tan(dVar3);
  dVar3 = tan(dVar3);
  FUN_144b137c8(param_1);
  param_1[0x24] = 0;
  param_1[0x25] = uVar4;
  param_1[0x51] = 0;
  param_1[0x52] = uVar4;
  if ((*(int *)((longlong)param_6 + 0x34) < *(int *)(param_6 + 1)) && (param_1 + 0x70 != param_6)) {
    FUN_1472df374(param_1 + 0x70,param_6);
  }
  local_190 = 1.0 / dVar3;
  local_188 = 1.0 / dVar9;
  dVar8 = dVar2 * (dVar2 + dVar2);
  dVar3 = dVar7 + dVar7;
  dVar6 = dVar5 + dVar5;
  dVar9 = (dVar2 + dVar2) * dVar1;
  FUN_144899d7a(param_1 + 0x66,param_7);
  *param_1 = CONCAT44(uStack_164,local_168);
  param_1[1] = CONCAT44(uStack_15c,uStack_160);
  param_1[2] = local_158;
  param_1[4] = 1.0 - (dVar5 * dVar6 + dVar7 * dVar3);
  param_1[5] = dVar2 * dVar3 + dVar6 * dVar1;
  param_1[6] = dVar2 * dVar6 - dVar3 * dVar1;
  param_1[7] = 0;
  param_1[8] = dVar2 * dVar3 - dVar6 * dVar1;
  param_1[9] = 1.0 - (dVar8 + dVar5 * dVar6);
  param_1[10] = dVar7 * dVar6 + dVar9;
  param_1[0xb] = 0;
  param_1[0xc] = dVar3 * dVar1 + dVar2 * dVar6;
  param_1[0xd] = dVar7 * dVar6 - dVar9;
  param_1[0xe] = 1.0 - (dVar8 + dVar7 * dVar3);
  param_1[0xf] = 0;
  param_1[0x10] = local_170;
  param_1[0x11] = local_178;
  param_1[0x12] = local_180;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = local_190;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = local_188;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0x3ff0000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = (double)(float)param_5;
  param_1[0x23] = 0;
  if ((local_e0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148523b05 FUN_148523b05 body=71 status=ok
// SIG undefined FUN_148523b05(void)

void FUN_148523b05(uint *param_1,byte param_2)

{
  *param_1 = *param_1 & 0xffffffef | (uint)param_2 << 4;
  FUN_145c28cde(param_1);
  *param_1 = *param_1 & 0xffeffffc;
  param_1[4] = param_1[4] & 0xdffdff7f;
  param_1[2] = param_1[2] & 0xfbfffd76;
  param_1[1] = param_1[1] & 0xff7fde3f;
  param_1[3] = param_1[3] & 0xffff7ffa;
  return;
}



// FUNCTION 148523b4c FUN_148523b4c body=171 status=ok
// SIG undefined FUN_148523b4c(void)

undefined8 FUN_148523b4c(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = "BaseColor";
  if (param_2 < 0x20) {
    if (param_2 < 8) {
      if (param_2 == 2) {
        pcVar1 = "Roughness";
      }
      else if (param_2 == 4) {
        pcVar1 = "Metallic";
      }
    }
    else if (param_2 == 8) {
      pcVar1 = "Specular";
    }
    else if (param_2 == 0x10) {
      pcVar1 = "PreTonemapHDRColor";
    }
  }
  else if (param_2 < 0x100) {
    if (param_2 == 0x20) {
      pcVar1 = "WorldNormal";
    }
    else if (param_2 == 0x40) {
      pcVar1 = "DeviceDepth";
    }
  }
  else if (param_2 == 0x100) {
    pcVar1 = "Opacity";
  }
  else if (param_2 == 0x200) {
    pcVar1 = "SubsurfaceColor";
  }
  FUN_1446ddc76(param_1,pcVar1,1);
  return param_1;
}



// FUNCTION 148523bf8 FUN_148523bf8 body=226 status=ok
// SIG undefined FUN_148523bf8(void)

void FUN_148523bf8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  int local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0xc74);
  if (*(int *)(param_1 + 0xc74) < 0) {
    iVar3 = DAT_14cb4d7ac;
    DAT_14cb4d7ac = DAT_14cb4d7ac + 1;
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  FUN_140056680(local_40,puVar1);
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 0xc80);
  lVar2 = (longlong)local_48;
  _Src = *(void **)(param_1 + 0xc78);
  if (lVar2 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar2 * 2);
  }
  local_58 = iVar3;
  FUN_1484c2572(param_2,0,&local_50,local_40);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148523cdc FUN_148523cdc body=286 status=ok
// SIG undefined FUN_148523cdc(void)

void FUN_148523cdc(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_143203394(local_78,0 < DAT_14cb4d7a8,L"RenderCaptureFromPosition",0);
  DAT_14cb4d7a8 = DAT_14cb4d7a8 + -1;
  if (param_2 == 0x40) {
    local_98 = param_6;
    FUN_143b9fa4a(param_1,param_3,param_4,(int)param_5);
  }
  else if (param_2 == 0x80) {
    local_90 = param_7;
    local_98 = param_6;
    FUN_143b9eb2c(param_1,param_3,param_4,(int)param_5);
  }
  else {
    FUN_148523b4c(local_80,param_2);
    local_88 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    FUN_143b9f462(param_1,local_80,param_3,param_4);
  }
  FUN_140460f52(local_78);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148523dfc FUN_148523dfc body=479 status=ok
// SIG undefined FUN_148523dfc(void)

void FUN_148523dfc(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8 [12];
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar3 = (longlong *)FUN_14001cc68(400,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af17c50;
  FUN_14852689e(plVar3 + 2,param_2,param_5);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0x88);
    if (plVar6 == (longlong *)0x0) goto LAB_148523f2d;
    *(undefined8 *)(param_1 + 0x88) = 0;
LAB_148523ea3:
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
    if (plVar3 == (longlong *)0x0) goto LAB_148523f2d;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x80) = plVar3 + 2;
    plVar6 = *(longlong **)(param_1 + 0x88);
    if (plVar3 == plVar6) {
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x88) = plVar3;
      if (plVar6 != (longlong *)0x0) goto LAB_148523ea3;
    }
  }
  LOCK();
  plVar6 = plVar3 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_148523f2d:
  local_88[0] = *param_6;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar3 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_6[2];
    }
    (**(code **)*plVar3)(plVar3,local_78);
  }
  puVar5 = local_e8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_f8 = local_88;
  FUN_148523fdc(param_1,param_2,local_e8,param_4);
  if (*param_6 != 0) {
    plVar3 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148523fdc FUN_148523fdc body=826 status=ok
// SIG undefined FUN_148523fdc(void)

void FUN_148523fdc(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong local_138 [2];
  longlong *local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [2];
  longlong *local_68 [2];
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *(undefined8 *)(param_1 + 0x98) = param_2;
  plVar6 = param_3;
  plVar8 = (longlong *)(param_1 + 0x200);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar8 = *plVar6;
    plVar6 = plVar6 + 1;
    plVar8 = plVar8 + 1;
  }
  FUN_1485327aa(param_1 + 0xa0,param_5);
  lVar4 = *(longlong *)(param_1 + 0x80);
  local_78[0] = *(longlong *)(param_1 + 0xa0);
  local_68[0] = (longlong *)0x0;
  if (local_78[0] != 0) {
    puVar5 = (undefined8 *)(param_1 + 0xc0);
    if (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0xb0);
    }
    (**(code **)*puVar5)(puVar5,local_68);
  }
  FUN_1485327aa(lVar4 + 0x70,local_78);
  if (local_78[0] != 0) {
    plVar6 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar6 = local_58;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  local_138[0] = *(longlong *)(lVar4 + 0x10);
  local_138[1] = *(undefined8 *)(lVar4 + 0x18);
  local_128 = *(longlong **)(lVar4 + 0x20);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  local_118 = *(longlong *)(lVar4 + 0x30);
  uStack_110 = *(undefined8 *)(lVar4 + 0x38);
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  uVar2 = *(undefined8 *)(lVar4 + 0x48);
  *(ulonglong *)(lVar4 + 0x40) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar4 + 0x48) = CONCAT44(uStack_7c,uStack_80);
  *(undefined ***)(lVar4 + 0x30) = &PTR_LAB_14af181e0;
  *(longlong *)(lVar4 + 0x38) = param_1;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(ulonglong *)(lVar4 + 0x28) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar4 + 0x10) = FUN_143ba5f2e;
  *(undefined8 *)(lVar4 + 0x18) = uStack_b0;
  uStack_120._0_4_ = (undefined4)uVar3;
  uStack_120._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_108._0_4_ = (undefined4)uVar1;
  local_108._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_100._0_4_ = (undefined4)uVar2;
  uStack_100._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_88 = (undefined4)local_108;
  uStack_84 = local_108._4_4_;
  uStack_80 = (undefined4)uStack_100;
  uStack_7c = uStack_100._4_4_;
  local_98 = local_118;
  uStack_90 = uStack_110;
  local_a8 = local_128;
  uStack_a0 = (undefined4)uStack_120;
  uStack_9c = uStack_120._4_4_;
  local_b8 = local_138[0];
  uStack_b0 = local_138[1];
  uStack_120 = uVar3;
  local_108 = uVar1;
  uStack_100 = uVar2;
  if (local_138[0] != 0) {
    plVar6 = local_a8;
    if (local_128 == (longlong *)0x0) {
      plVar6 = &local_98;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  lVar4 = *(longlong *)(param_1 + 0x700);
  if (lVar4 == 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = (longlong *)0x0;
    FUN_1411371f6(local_138);
    uVar3 = FUN_14586a0bc();
    local_148 = local_138;
    lVar4 = FUN_141137228(param_4,uVar3,&DAT_14c8464e0,&local_b8);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(param_1 + 0x700) = lVar4;
    lVar4 = FUN_1484e2af0(lVar4);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(param_1 + 0x708) = lVar4;
    FUN_14092e51e(*(undefined8 *)(param_1 + 0x700),lVar4);
    FUN_140b506a4(*(undefined8 *)(param_1 + 0x708));
    if (local_f8 != 0) {
      if (local_e8 == (longlong *)0x0) {
        local_e8 = local_d8;
      }
      (**(code **)(*local_e8 + 0x10))();
    }
    lVar4 = *(longlong *)(param_1 + 0x700);
  }
  plVar6 = local_138;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar6 = *param_3;
    param_3 = param_3 + 1;
    plVar6 = plVar6 + 1;
  }
  local_148 = (longlong *)((ulonglong)local_148 & 0xffffffffffffff00);
  FUN_1413d4c10(lVar4,local_138,0,0);
  FUN_1484e2c2a(*(undefined8 *)(param_1 + 0x708));
  FUN_14068ded2(param_1 + 0x710,0);
  if (*param_5 != 0) {
    plVar6 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148524318 FUN_148524318 body=1183 status=ok
// SIG undefined FUN_148524318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_148524318(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  undefined1 local_14f [7];
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar5 = param_2[3];
  dVar6 = param_2[4];
  dVar7 = *(double *)(param_1 + 0x200);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x240);
  dVar10 = *(double *)(param_1 + 0x210) * -1.0;
  dVar11 = *(double *)(param_1 + 0x218) * 1.0;
  dVar13 = -dVar7;
  dVar3 = -*(double *)(param_1 + 0x208);
  dVar14 = dVar6 * dVar13 - dVar5 * dVar3;
  dVar17 = param_2[5] * dVar3 - dVar6 * dVar10;
  dVar18 = dVar5 * dVar10 - param_2[5] * dVar13;
  dVar17 = dVar17 + dVar17;
  dVar18 = dVar18 + dVar18;
  dVar14 = dVar14 + dVar14;
  auVar16 = divpd(_DAT_149934d80,auVar2);
  local_118 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar16._0_8_);
  dStack_110 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar16._8_8_);
  dVar20 = *param_2 - *(double *)(param_1 + 0x220);
  dVar21 = param_2[1] - *(double *)(param_1 + 0x228);
  dVar12 = param_2[2] - *(double *)(param_1 + 0x230);
  local_108 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x250))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0x250)));
  dVar15 = dVar21 * dVar13 - dVar3 * dVar20;
  dVar4 = dVar12 * dVar3 - dVar10 * dVar21;
  dVar19 = dVar20 * dVar10 - dVar12 * dVar13;
  dVar4 = dVar4 + dVar4;
  dVar19 = dVar19 + dVar19;
  dVar15 = dVar15 + dVar15;
  local_100 = ((dVar14 * dVar3 - dVar18 * dVar10) + dVar11 * dVar17 + dVar5) * local_118;
  local_f8 = (dVar7 * dVar14 + dVar10 * dVar17 + dVar11 * dVar18 + dVar6) * dStack_110;
  local_118 = ((dVar15 * dVar3 - dVar19 * dVar10) + dVar11 * dVar4 + dVar20) * local_118;
  dStack_110 = (dVar7 * dVar15 + dVar10 * dVar4 + dVar11 * dVar19 + dVar21) * dStack_110;
  dVar10 = (dVar14 * dVar11 + param_2[5] + (dVar18 * dVar13 - dVar17 * dVar3)) * local_108;
  local_108 = (dVar15 * dVar11 + dVar12 + (dVar19 * dVar13 - dVar4 * dVar3)) * local_108;
  dVar11 = dVar10 * dVar10 + local_100 * local_100 + local_f8 * local_f8;
  if (9.99999993922529e-09 < dVar11) {
    dVar11 = 1.0 / SQRT(dVar11);
    local_100 = local_100 * dVar11;
    local_f8 = local_f8 * dVar11;
    dVar10 = dVar10 * dVar11;
    dVar11 = dVar10 * dVar10 + local_100 * local_100 + local_f8 * local_f8;
  }
  dVar11 = SQRT(dVar11);
  dVar13 = 1.0 / dVar11;
  if (0.0 < dVar11) {
    local_100 = local_100 * dVar13;
    local_f8 = local_f8 * dVar13;
  }
  else {
    local_100 = 0.0;
    local_f8 = 0.0;
  }
  local_f0 = -(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar10 * dVar13);
  lVar1 = param_1 + 0x2a0;
  FUN_1402226aa(lVar1);
  FUN_1402226aa(param_1 + 0x2f0);
  FUN_1402226aa(param_1 + 0x340);
  FUN_1485247b8(param_1,local_14f,*(undefined1 *)(param_1 + 0x7bc));
  local_160 = local_148;
  local_168 = local_130;
  local_158 = 0;
  uVar9 = FUN_148524926(*(undefined8 *)(param_1 + 0x80),local_14f,&local_118,lVar1);
  cVar8 = FUN_14852525a(param_1 + 0x390,lVar1);
  if (cVar8 != '\0') {
    FUN_1402226aa(lVar1);
    FUN_1402226aa(param_1 + 0x2f0);
    FUN_1402226aa(param_1 + 0x340);
  }
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485247b8 FUN_1485247b8 body=366 status=ok
// SIG undefined FUN_1485247b8(void)

char * FUN_1485247b8(longlong param_1,char *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char cVar9;
  
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  lVar3 = *(longlong *)(param_1 + 0x78);
  cVar1 = *(char *)(lVar3 + 0xaa);
  *param_2 = cVar1;
  cVar9 = '\x01';
  if ((*(char *)(lVar3 + 0xa9) == '\0') && (*(char *)(lVar3 + 0xab) == '\0')) {
    cVar9 = *(char *)(lVar3 + 0xac);
  }
  param_2[1] = cVar9;
  cVar2 = *(char *)(lVar3 + 0xa8);
  param_2[2] = cVar2;
  param_2[3] = *(char *)(lVar3 + 0xad);
  if (((*(int *)(param_1 + 1000) != *(int *)(param_1 + 0x414)) ||
      (*(int *)(param_1 + 0x438) != *(int *)(param_1 + 0x464))) ||
     (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4))) {
    pcVar4 = *(code **)(param_1 + 0x180);
    plVar8 = (longlong *)(param_1 + 0x1a0);
    if (*(longlong **)(param_1 + 400) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 400);
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    cVar5 = (*pcVar4)(uVar7);
    if (cVar5 == '\0') {
      pcVar4 = *(code **)(param_1 + 0x1c0);
      plVar8 = (longlong *)(param_1 + 0x1e0);
      if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x1d0);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      cVar5 = (*pcVar4)(uVar7);
      if (cVar5 == '\0') goto LAB_1485248f1;
    }
    if (cVar1 == '\0') {
      bVar6 = false;
    }
    else {
      bVar6 = *(int *)(param_1 + 0x3c4) < *(int *)(param_1 + 0x398);
    }
    *param_2 = bVar6;
    if (cVar9 == '\0') {
      bVar6 = false;
    }
    else {
      bVar6 = *(int *)(param_1 + 0x464) < *(int *)(param_1 + 0x438);
    }
    param_2[1] = bVar6;
    if (cVar2 == '\0') {
      bVar6 = false;
    }
    else {
      bVar6 = *(int *)(param_1 + 0x414) < *(int *)(param_1 + 1000);
    }
    param_2[2] = bVar6;
  }
LAB_1485248f1:
  if (param_3 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x78);
    param_2[4] = *(char *)(lVar3 + 0xb0);
    param_2[5] = *(char *)(lVar3 + 0xb1);
    param_2[6] = *(char *)(lVar3 + 0xb2);
  }
  return param_2;
}



// FUNCTION 148524926 FUN_148524926 body=2355 status=ok
// SIG undefined FUN_148524926(void)

/* WARNING: Removing unreachable block (ram,0x000148524cf6) */
/* WARNING: Removing unreachable block (ram,0x000148524d05) */
/* WARNING: Removing unreachable block (ram,0x000148524d09) */

ulonglong FUN_148524926(longlong param_1,byte *param_2,double *param_3,longlong param_4,
                       double *param_5,undefined4 *param_6,undefined4 *param_7)

{
  byte bVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  char cVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  longlong *plVar22;
  undefined ***pppuVar23;
  undefined7 uVar25;
  ulonglong uVar24;
  byte bVar26;
  bool bVar27;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  undefined8 *local_380;
  undefined4 *local_378;
  undefined4 *local_370;
  longlong local_368;
  undefined8 *local_360;
  double local_358;
  double dStack_350;
  double local_348;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  double local_328;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  double local_308;
  undefined4 local_2fc;
  double local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_298 [80];
  undefined1 auStack_248 [80];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  longlong *plStack_1d0;
  double *local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1a8 [80];
  undefined1 auStack_158 [80];
  undefined8 local_108 [2];
  code *local_f8;
  undefined8 uStack_f0;
  undefined ***local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  longlong *plStack_d0;
  double *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  pcVar2 = *(code **)(param_1 + 0x70);
  plVar22 = (longlong *)(param_1 + 0x90);
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    plVar22 = *(longlong **)(param_1 + 0x80);
  }
  local_368 = param_4;
  uVar21 = (**(code **)(*plVar22 + 8))();
  plVar22 = (longlong *)(*pcVar2)(uVar21);
  local_360 = (undefined8 *)FUN_1485328ce(param_1);
  dVar5 = DAT_14c8464f0;
  uVar13 = DAT_14c8464e8._4_4_;
  uVar12 = (undefined4)DAT_14c8464e8;
  uVar11 = DAT_14c8464e0._4_4_;
  uVar20 = (undefined4)DAT_14c8464e0;
  local_108[0] = 0x7fefffffffffffff;
  local_f8 = (code *)0x0;
  local_e8 = (undefined ***)0x0;
  local_b8 = 0;
  if (plVar22 == (longlong *)0x0) {
    local_2f8 = -1.0;
    local_2fc = 0xffffffff;
LAB_148524a2d:
    uVar10 = DAT_14c8463c0._4_4_;
    uVar9 = (undefined4)DAT_14c8463c0;
    uVar8 = DAT_14c8463b8._4_4_;
    uVar7 = (undefined4)DAT_14c8463b8;
    dVar4 = (double)CONCAT44(uVar11,uVar20);
    dVar6 = (double)CONCAT44(uVar13,uVar12);
    *(undefined8 *)(param_6 + 4) = DAT_14c8463c8;
    *param_6 = uVar7;
    param_6[1] = uVar8;
    param_6[2] = uVar9;
    param_6[3] = uVar10;
    bVar26 = 0;
  }
  else {
    if (param_2[3] == 0) {
      local_1c8 = local_c8;
      uStack_1c0 = uStack_c0;
      uVar16 = uStack_1c0;
      local_1d8 = local_d8;
      plStack_1d0 = plStack_d0;
      local_1e8 = 0;
      uStack_1e0 = uStack_e0;
      uVar15 = uStack_1e0;
      local_1f8 = 0;
      uStack_1f0 = uStack_f0;
      uVar21 = uStack_1f0;
      local_c8 = param_3;
      local_d8 = &PTR_LAB_14af18240;
      plStack_d0 = plVar22;
      local_e8 = (undefined ***)0x0;
      local_f8 = FUN_143ba64d6;
      uStack_1f0._0_4_ = (undefined4)uStack_f0;
      uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
      uStack_1e0._0_4_ = (undefined4)uStack_e0;
      uStack_1e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
      uStack_1c0._0_4_ = (undefined4)uStack_c0;
      uStack_1c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
      uStack_2b0 = (undefined4)uStack_1c0;
      uStack_2ac = uStack_1c0._4_4_;
      local_2d8 = 0;
      uStack_2d0 = (undefined4)uStack_1e0;
      uStack_2cc = uStack_1e0._4_4_;
      local_2e8 = 0;
      uStack_2e0 = (undefined4)uStack_1f0;
      uStack_2dc = uStack_1f0._4_4_;
      uStack_1f0 = uVar21;
      uStack_1e0 = uVar15;
      uStack_1c0 = uVar16;
    }
    local_e8 = (undefined ***)0x0;
    local_2f8 = -1.0;
    local_2fc = 0xffffffff;
    local_388 = local_108;
    cVar18 = (**(code **)(*plVar22 + 0x38))(plVar22,param_3);
    if (cVar18 == '\0') goto LAB_148524a2d;
    dVar5 = param_3[5] * local_2f8 + param_3[2];
    dVar6 = param_3[4] * local_2f8 + param_3[1];
    dVar4 = local_2f8 * param_3[3] + *param_3;
    FUN_146c13dec(*(undefined8 *)(param_1 + 0x58),&local_1f8,local_2fc);
    *(undefined8 *)(param_6 + 4) = local_1e8;
    *param_6 = (undefined4)local_1f8;
    param_6[1] = local_1f8._4_4_;
    param_6[2] = (undefined4)uStack_1f0;
    param_6[3] = uStack_1f0._4_4_;
    bVar26 = 1;
  }
  bVar1 = *param_2;
  FUN_1458d302c(&local_1f8);
  local_308 = DAT_14c8464f0;
  local_318 = (undefined4)DAT_14c8464e0;
  uStack_314 = DAT_14c8464e0._4_4_;
  uStack_310 = (undefined4)DAT_14c8464e8;
  uStack_30c = DAT_14c8464e8._4_4_;
  local_31c = 0;
  if ((param_2[2] == 0) && ((param_2[1] != 1 || (param_2[4] != 1)))) {
    uVar24 = 0;
  }
  else {
    local_370 = &local_31c;
    local_378 = &local_318;
    local_388 = local_360;
    local_380 = &local_1f8;
    uVar19 = FUN_148532ade(param_1,param_2,param_3,plVar22);
    uVar24 = (ulonglong)uVar19;
  }
  FUN_1458d302c(&local_2e8);
  local_328 = DAT_14c8464f0;
  local_338 = (undefined4)DAT_14c8464e0;
  uStack_334 = DAT_14c8464e0._4_4_;
  uStack_330 = (undefined4)DAT_14c8464e8;
  uStack_32c = DAT_14c8464e8._4_4_;
  local_33c = 0;
  if ((param_2[1] == 0) && ((*param_2 != 1 || (param_2[4] != 1)))) {
    bVar17 = 0;
  }
  else {
    local_370 = &local_33c;
    local_378 = &local_338;
    local_388 = local_360;
    local_380 = &local_2e8;
    bVar17 = FUN_148533518(param_1,param_2,param_3,plVar22);
  }
  if ((bVar26 & bVar1) == 0) {
    if (((char)uVar24 != '\0') && (bVar17 != 0)) {
      dVar3 = (local_308 - param_3[2]) * param_3[5] +
              ((double)CONCAT44(uStack_314,local_318) - *param_3) * param_3[3] +
              ((double)CONCAT44(uStack_30c,uStack_310) - param_3[1]) * param_3[4];
      if (0.0 <= dVar3) {
        local_348 = param_3[2] + param_3[5] * dVar3;
        dStack_350 = param_3[1] + param_3[4] * dVar3;
        local_358 = *param_3 + param_3[3] * dVar3;
      }
      else {
        local_348 = param_3[2];
        local_358 = *param_3;
        dStack_350 = param_3[1];
      }
      local_2f0 = 0x3fe8000000000000;
      pcVar2 = *(code **)(param_1 + 0x10);
      plVar22 = (longlong *)(param_1 + 0x30);
      if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        plVar22 = *(longlong **)(param_1 + 0x20);
      }
      uVar21 = (**(code **)(*plVar22 + 8))();
      uVar19 = (*pcVar2)(uVar21,&local_318,&local_358,&local_2f0);
      uVar24 = (ulonglong)uVar19;
      bVar17 = (byte)uVar19 ^ 1;
    }
  }
  else {
    if ((char)uVar24 != '\0') {
      dVar3 = (local_308 - param_3[2]) * param_3[5] +
              ((double)CONCAT44(uStack_314,local_318) - *param_3) * param_3[3] +
              ((double)CONCAT44(uStack_30c,uStack_310) - param_3[1]) * param_3[4];
      if (0.0 <= dVar3) {
        local_348 = param_3[2] + param_3[5] * dVar3;
        dStack_350 = param_3[1] + param_3[4] * dVar3;
        local_358 = *param_3 + param_3[3] * dVar3;
      }
      else {
        local_348 = param_3[2];
        local_358 = *param_3;
        dStack_350 = param_3[1];
      }
      local_2f0 = 0x3fd0000000000000;
      pcVar2 = *(code **)(param_1 + 0x10);
      plVar22 = (longlong *)(param_1 + 0x30);
      if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        plVar22 = *(longlong **)(param_1 + 0x20);
      }
      uVar21 = (**(code **)(*plVar22 + 8))();
      uVar19 = (*pcVar2)(uVar21,&local_318,&local_358,&local_2f0);
      uVar24 = (ulonglong)uVar19;
      bVar17 = bVar17 & ((byte)uVar19 ^ 1);
    }
    bVar27 = bVar17 != 0;
    bVar17 = 0;
    if (bVar27) {
      dVar3 = (local_328 - param_3[2]) * param_3[5] +
              ((double)CONCAT44(uStack_334,local_338) - *param_3) * param_3[3] +
              ((double)CONCAT44(uStack_32c,uStack_330) - param_3[1]) * param_3[4];
      if (0.0 <= dVar3) {
        local_348 = param_3[2] + param_3[5] * dVar3;
        dStack_350 = param_3[1] + param_3[4] * dVar3;
        local_358 = *param_3 + param_3[3] * dVar3;
      }
      else {
        local_348 = param_3[2];
        local_358 = *param_3;
        dStack_350 = param_3[1];
      }
      local_2f0 = 0x3fc999999999999a;
      pcVar2 = *(code **)(param_1 + 0x10);
      plVar22 = (longlong *)(param_1 + 0x30);
      if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        plVar22 = *(longlong **)(param_1 + 0x20);
      }
      uVar21 = (**(code **)(*plVar22 + 8))();
      bVar17 = (*pcVar2)(uVar21,&local_338,&local_358,&local_2f0);
    }
  }
  lVar14 = local_368;
  if ((char)uVar24 == '\0') {
    if (bVar17 == 0) {
      if ((bVar26 & bVar1) == 0) {
        uVar24 = 0;
      }
      else {
        uVar20 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x50))
                           (*(longlong **)(param_1 + 0x60),local_2fc);
        local_358 = (double)CONCAT44(local_358._4_4_,uVar20);
        FUN_144984904(local_368,&local_2f0,&local_358,0);
        *param_5 = dVar4;
        param_5[1] = dVar6;
        param_5[2] = dVar5;
        uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
      }
      goto LAB_148525081;
    }
    FUN_145c3f772(local_368,&local_2e8);
    FUN_145c3f772(lVar14 + 0x50,local_298);
    FUN_145c3f772(lVar14 + 0xa0,auStack_248);
    *(undefined4 *)param_5 = local_338;
    *(undefined4 *)((longlong)param_5 + 4) = uStack_334;
    *(undefined4 *)(param_5 + 1) = uStack_330;
    *(undefined4 *)((longlong)param_5 + 0xc) = uStack_32c;
    param_5[2] = local_328;
    uVar25 = (undefined7)((ulonglong)(lVar14 + 0xa0) >> 8);
    uVar20 = local_33c;
  }
  else {
    FUN_145c3f772(local_368,&local_1f8);
    FUN_145c3f772(lVar14 + 0x50,local_1a8);
    FUN_145c3f772(lVar14 + 0xa0,auStack_158);
    *(undefined4 *)param_5 = local_318;
    *(undefined4 *)((longlong)param_5 + 4) = uStack_314;
    *(undefined4 *)(param_5 + 1) = uStack_310;
    *(undefined4 *)((longlong)param_5 + 0xc) = uStack_30c;
    param_5[2] = local_308;
    uVar25 = (undefined7)((ulonglong)(lVar14 + 0xa0) >> 8);
    uVar20 = local_31c;
  }
  uVar24 = CONCAT71(uVar25,1);
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = uVar20;
  }
LAB_148525081:
  FUN_1456c3cc8(&local_2e8);
  FUN_1456c3cc8(&local_1f8);
  if (local_f8 != (code *)0x0) {
    pppuVar23 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar23 = &local_d8;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  if ((local_a0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24 & 0xffffffff;
}



// FUNCTION 14852525a FUN_14852525a body=76 status=ok
// SIG undefined FUN_14852525a(void)

undefined8 FUN_14852525a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1484e701c(param_1 + 0x50,param_2 + 0x50);
  if (cVar1 != '\0') {
    cVar1 = FUN_1484e701c(param_1 + 0xa0,param_2 + 0xa0);
    if (cVar1 != '\0') {
      uVar2 = FUN_1484e701c(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1485252a6 FUN_1485252a6 body=1477 status=ok
// SIG undefined FUN_1485252a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1485252a6(longlong param_1,double *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar21;
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined4 *local_340;
  undefined8 local_338;
  undefined1 local_32f [7];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  ulonglong local_2d0;
  undefined1 local_2c0 [80];
  undefined1 local_270 [80];
  undefined1 local_220 [80];
  undefined1 local_1d0 [240];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  dVar7 = param_2[3];
  dVar8 = param_2[4];
  dVar9 = *(double *)(param_1 + 0x200);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x240);
  dVar15 = *(double *)(param_1 + 0x210) * -1.0;
  dVar17 = *(double *)(param_1 + 0x218) * 1.0;
  dVar4 = -dVar9;
  dVar5 = -*(double *)(param_1 + 0x208);
  dVar18 = dVar8 * dVar4 - dVar7 * dVar5;
  dVar21 = param_2[5] * dVar5 - dVar8 * dVar15;
  dVar22 = dVar7 * dVar15 - param_2[5] * dVar4;
  dVar21 = dVar21 + dVar21;
  dVar22 = dVar22 + dVar22;
  dVar18 = dVar18 + dVar18;
  auVar20 = divpd(_DAT_149934d80,auVar2);
  local_2f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar20._0_8_);
  dStack_2f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar20._8_8_);
  dVar24 = *param_2 - *(double *)(param_1 + 0x220);
  dVar25 = param_2[1] - *(double *)(param_1 + 0x228);
  dVar16 = param_2[2] - *(double *)(param_1 + 0x230);
  local_2e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x250))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0x250)));
  dVar19 = dVar25 * dVar4 - dVar5 * dVar24;
  dVar6 = dVar16 * dVar5 - dVar15 * dVar25;
  dVar23 = dVar24 * dVar15 - dVar16 * dVar4;
  dVar6 = dVar6 + dVar6;
  dVar23 = dVar23 + dVar23;
  dVar19 = dVar19 + dVar19;
  local_2e0 = ((dVar18 * dVar5 - dVar22 * dVar15) + dVar17 * dVar21 + dVar7) * local_2f8;
  local_2d8 = (dVar9 * dVar18 + dVar15 * dVar21 + dVar17 * dVar22 + dVar8) * dStack_2f0;
  local_2f8 = ((dVar19 * dVar5 - dVar23 * dVar15) + dVar17 * dVar6 + dVar24) * local_2f8;
  dStack_2f0 = (dVar9 * dVar19 + dVar15 * dVar6 + dVar17 * dVar23 + dVar25) * dStack_2f0;
  dVar18 = (dVar18 * dVar17 + param_2[5] + (dVar22 * dVar4 - dVar21 * dVar5)) * local_2e8;
  local_2e8 = (dVar19 * dVar17 + dVar16 + (dVar23 * dVar4 - dVar6 * dVar5)) * local_2e8;
  dVar15 = dVar18 * dVar18 + local_2e0 * local_2e0 + local_2d8 * local_2d8;
  if (9.99999993922529e-09 < dVar15) {
    dVar15 = 1.0 / SQRT(dVar15);
    local_2e0 = local_2e0 * dVar15;
    local_2d8 = local_2d8 * dVar15;
    dVar18 = dVar18 * dVar15;
    dVar15 = dVar18 * dVar18 + local_2e0 * local_2e0 + local_2d8 * local_2d8;
  }
  dVar15 = SQRT(dVar15);
  dVar17 = 1.0 / dVar15;
  if (0.0 < dVar15) {
    local_2e0 = local_2e0 * dVar17;
    local_2d8 = local_2d8 * dVar17;
  }
  else {
    local_2e0 = 0.0;
    local_2d8 = 0.0;
  }
  local_2d0 = -(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar18 * dVar17);
  lVar1 = param_1 + 0x390;
  FUN_14852586c(local_1d0,lVar1);
  FUN_1458d302c(local_2c0);
  FUN_1485247b8(param_1,local_32f,*(undefined1 *)(param_1 + 0x7bc));
  local_340 = &local_328;
  local_348 = &local_310;
  local_338 = 0;
  cVar10 = FUN_148524926(*(undefined8 *)(param_1 + 0x80),local_32f,&local_2f8,local_2c0);
  if (cVar10 != '\0') {
    param_3[2] = local_300;
    *param_3 = local_310;
    param_3[1] = uStack_308;
    *(undefined8 *)(param_4 + 4) = local_318;
    *param_4 = local_328;
    param_4[1] = uStack_324;
    param_4[2] = uStack_320;
    param_4[3] = uStack_31c;
  }
  pcVar3 = *(code **)(param_1 + 0x180);
  plVar14 = (longlong *)(param_1 + 0x1a0);
  if (*(longlong **)(param_1 + 400) != (longlong *)0x0) {
    plVar14 = *(longlong **)(param_1 + 400);
  }
  uVar13 = (**(code **)(*plVar14 + 8))();
  cVar10 = (*pcVar3)(uVar13);
  pcVar3 = *(code **)(param_1 + 0x1c0);
  plVar14 = (longlong *)(param_1 + 0x1e0);
  if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
    plVar14 = *(longlong **)(param_1 + 0x1d0);
  }
  uVar13 = (**(code **)(*plVar14 + 8))();
  cVar11 = (*pcVar3)(uVar13);
  if (cVar10 == '\0') {
    if (cVar11 == '\0') {
      FUN_145c3f772(lVar1,local_2c0);
      FUN_145c3f772(param_1 + 0x3e0,local_270);
      FUN_145c3f772(param_1 + 0x430,local_220);
    }
    else {
      FUN_148525c42();
    }
  }
  else if (cVar11 == '\0') {
    FUN_1468b3f6e(param_1 + 0x3e0,local_270);
    FUN_1468b3f6e(param_1 + 0x430,local_220);
    FUN_1468b3f6e(lVar1,local_2c0);
  }
  else {
    FUN_14852592c(lVar1,local_2c0);
  }
  uVar12 = FUN_148544206(lVar1,local_1d0);
  if ((char)uVar12 == '\0') {
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
    FUN_1447f69b6(param_1 + 0x48);
  }
  FUN_1456c3cc8(local_2c0);
  FUN_1456c3cc8(local_1d0);
  if ((local_e0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar12 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852586c FUN_14852586c body=192 status=ok
// SIG undefined FUN_14852586c(void)

undefined8 * FUN_14852586c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145c3f772();
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_145c3f772(param_1 + 10,param_2 + 0x50);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_145c3f772(param_1 + 0x14,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14852592c FUN_14852592c body=788 status=ok
// SIG undefined FUN_14852592c(void)

void FUN_14852592c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 10;
  plVar2 = param_2 + 0xc;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = plVar2;
  if ((int)param_2[0xf] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar4 = (int)param_2[0xf];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = plVar1;
  if ((iStack_5c != iVar4) || (uStack_68 != plVar2)) {
    do {
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(*local_98 + (longlong)iStack_7c * 0xc));
      iVar3 = FUN_144a7cc9e(param_1 + 0x50);
      if (iVar3 == 0) {
        FUN_1447cbafe(param_1 + 0x50,local_4c,&local_70,0);
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar2 || iStack_7c != iVar4));
  }
  plVar1 = param_2 + 0x14;
  plVar2 = param_2 + 0x16;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = plVar2;
  if ((int)param_2[0x19] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar4 = (int)param_2[0x19];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = plVar1;
  if ((iStack_5c != iVar4) || (uStack_68 != plVar2)) {
    do {
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(*local_98 + (longlong)iStack_7c * 0xc));
      iVar3 = FUN_144a7cc9e(param_1 + 0xa0);
      if (iVar3 == 0) {
        FUN_1447cbafe(param_1 + 0xa0,local_4c,&local_70,0);
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar2 || iStack_7c != iVar4));
  }
  plVar1 = param_2 + 2;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar4 = (int)param_2[5];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = param_2;
  if ((iStack_5c != iVar4) || (uStack_68 != plVar1)) {
    do {
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(*local_98 + (longlong)iStack_7c * 0xc));
      iVar3 = FUN_144a7cc9e(param_1);
      if (iVar3 == 0) {
        FUN_1447cbafe(param_1,local_4c,&local_70,0);
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != param_2 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar1 || iStack_7c != iVar4));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148525c42 FUN_148525c42 body=262 status=ok
// SIG undefined FUN_148525c42(void)

void FUN_148525c42(longlong param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146286f4e(param_1 + 0x50,local_78,param_2 + 0x50);
  FUN_145be27ca(param_1 + 0x50,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_78);
  FUN_146286f4e(param_1 + 0xa0,local_78,param_2 + 0xa0);
  FUN_145be27ca(param_1 + 0xa0,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_78);
  FUN_146286f4e(param_1,local_78,param_2);
  FUN_145be27ca(param_1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148525d4a FUN_148525d4a body=263 status=ok
// SIG undefined FUN_148525d4a(void)

undefined8 FUN_148525d4a(longlong param_1,int param_2,double *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  lVar2 = (*(longlong **)(param_1 + 8))[1];
  puVar3 = *(uint **)(lVar2 + 8 + (longlong)param_2 * 0x40);
  uVar1 = *puVar3;
  lVar4 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
  lVar5 = *(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8);
  uVar9 = (ulonglong)uVar1 & 0x1ff;
  uVar1 = puVar3[(longlong)*(int *)(lVar2 + 0x10 + (longlong)param_2 * 0x40) + -1];
  lVar2 = *(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8);
  uVar7 = (ulonglong)uVar1 & 0x1ff;
  dVar10 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18) - *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  dVar11 = *(double *)(lVar2 + 8 + uVar7 * 0x18) - *(double *)(lVar5 + 8 + uVar9 * 0x18);
  dVar12 = *(double *)(lVar2 + uVar7 * 0x18) - *(double *)(lVar5 + uVar9 * 0x18);
  *param_3 = dVar12;
  param_3[1] = dVar11;
  param_3[2] = dVar10;
  dVar8 = DAT_14c8463b0;
  dVar6 = DAT_14c8463a8;
  dVar14 = DAT_14c8463a0;
  dVar13 = dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11;
  if (dVar13 <= 1e-06) {
    param_3[2] = DAT_14c8463b0;
    *param_3 = dVar14;
    param_3[1] = dVar6;
  }
  else {
    dVar14 = 1.0 / SQRT(dVar13);
    *param_3 = dVar12 * dVar14;
    param_3[1] = dVar11 * dVar14;
    param_3[2] = dVar10 * dVar14;
    dVar8 = (double)(uVar7 * 3);
  }
  return CONCAT71((int7)((ulonglong)dVar8 >> 8),1e-06 < dVar13);
}



// FUNCTION 148525e52 FUN_148525e52 body=182 status=ok
// SIG undefined FUN_148525e52(void)

double FUN_148525e52(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar3 = *(longlong *)param_1[1];
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x38))();
  dVar10 = 0.0;
  if (1 < (longlong)(int)plVar6[1]) {
    lVar7 = 1;
    do {
      uVar1 = *(uint *)(*plVar6 + -4 + lVar7 * 4);
      uVar2 = *(uint *)(*plVar6 + lVar7 * 4);
      uVar8 = (ulonglong)uVar1 & 0x1ff;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
      uVar9 = (ulonglong)uVar2 & 0x1ff;
      dVar11 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18) - *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
      dVar12 = *(double *)(lVar4 + uVar8 * 0x18) - *(double *)(lVar5 + uVar9 * 0x18);
      dVar13 = *(double *)(lVar4 + 8 + uVar8 * 0x18) - *(double *)(lVar5 + 8 + uVar9 * 0x18);
      dVar10 = dVar10 + SQRT(dVar11 * dVar11 + dVar12 * dVar12 + dVar13 * dVar13);
      lVar7 = lVar7 + 1;
    } while ((int)plVar6[1] != lVar7);
  }
  return dVar10;
}



// FUNCTION 148525f08 FUN_148525f08 body=620 status=ok
// SIG undefined FUN_148525f08(void)

double * FUN_148525f08(longlong *param_1,double *param_2,undefined4 param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  double dVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar5 = *(longlong *)param_1[1];
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,param_3);
  uVar2 = *(uint *)(puVar10 + 1);
  if ((ulonglong)uVar2 == 2) {
    uVar2 = *(uint *)*puVar10;
    uVar3 = ((uint *)*puVar10)[1];
    lVar5 = *(longlong *)(lVar5 + 0x10);
    lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8);
    uVar12 = (ulonglong)uVar2 & 0x1ff;
    lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
    uVar11 = (ulonglong)uVar3 & 0x1ff;
    dVar17 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18) + *(double *)(lVar5 + 0x10 + uVar11 * 0x18);
    dVar20 = *(double *)(lVar6 + 8 + uVar12 * 0x18) + *(double *)(lVar5 + 8 + uVar11 * 0x18);
    dVar15 = *(double *)(lVar6 + uVar12 * 0x18) + *(double *)(lVar5 + uVar11 * 0x18);
  }
  else {
    dVar15 = (double)FUN_148525e52(param_1,param_3);
    puVar7 = (uint *)*puVar10;
    uVar3 = *puVar7;
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if (1 < (int)uVar2) {
      uVar12 = 1;
      uVar11 = (ulonglong)uVar3;
      dVar16 = 0.0;
      do {
        lVar6 = *(longlong *)(lVar5 + (uVar11 >> 9) * 8);
        uVar13 = (ulonglong)((uint)uVar11 & 0x1ff);
        uVar4 = puVar7[uVar12];
        uVar11 = (ulonglong)uVar4;
        lVar8 = *(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8);
        uVar14 = (ulonglong)(uVar4 & 0x1ff);
        dVar1 = *(double *)(lVar8 + uVar14 * 0x18);
        dVar20 = *(double *)(lVar8 + 8 + uVar14 * 0x18);
        dVar17 = *(double *)(lVar8 + 0x10 + uVar14 * 0x18);
        dVar18 = *(double *)(lVar6 + uVar13 * 0x18) - dVar1;
        dVar19 = *(double *)(lVar6 + 8 + uVar13 * 0x18) - dVar20;
        dVar9 = *(double *)(lVar6 + 0x10 + uVar13 * 0x18) - dVar17;
        dVar19 = SQRT(dVar9 * dVar9 + dVar18 * dVar18 + dVar19 * dVar19) + dVar16;
        if (dVar15 * 0.5 < dVar19) {
          dVar15 = (dVar15 * 0.5 - dVar16) / (dVar19 - dVar16);
          lVar5 = *(longlong *)(lVar5 + (ulonglong)(puVar7[uVar12 - 1] >> 9) * 8);
          uVar11 = (ulonglong)(puVar7[uVar12 - 1] & 0x1ff);
          dVar16 = 1.0 - dVar15;
          dVar17 = *(double *)(lVar5 + 0x10 + uVar11 * 0x18) * dVar16 + dVar17 * dVar15;
          dVar20 = *(double *)(lVar5 + 8 + uVar11 * 0x18) * dVar16 + dVar20 * dVar15;
          dVar15 = dVar16 * *(double *)(lVar5 + uVar11 * 0x18) + dVar1 * dVar15;
          goto LAB_148525fbc;
        }
        uVar12 = uVar12 + 1;
        dVar16 = dVar19;
      } while (uVar2 != uVar12);
    }
    lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
    uVar12 = (ulonglong)uVar3 & 0x1ff;
    lVar5 = *(longlong *)(lVar5 + (ulonglong)(puVar7[(longlong)(int)uVar2 + -1] >> 9) * 8);
    uVar11 = (ulonglong)puVar7[(longlong)(int)uVar2 + -1] & 0x1ff;
    dVar17 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18) + *(double *)(lVar5 + 0x10 + uVar11 * 0x18);
    dVar20 = *(double *)(lVar6 + 8 + uVar12 * 0x18) + *(double *)(lVar5 + 8 + uVar11 * 0x18);
    dVar15 = *(double *)(lVar6 + uVar12 * 0x18) + *(double *)(lVar5 + uVar11 * 0x18);
  }
  dVar17 = dVar17 * 0.5;
  dVar20 = dVar20 * 0.5;
  dVar15 = dVar15 * 0.5;
LAB_148525fbc:
  *param_2 = dVar15;
  param_2[1] = dVar20;
  param_2[2] = dVar17;
  return param_2;
}



// FUNCTION 148526174 FUN_148526174 body=1214 status=ok
// SIG undefined FUN_148526174(void)

double * FUN_148526174(longlong param_1,double *param_2,longlong param_3,double *param_4)

{
  longlong *plVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined8 local_110;
  double dStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  dVar10 = DAT_14c8464f0;
  dVar8 = DAT_14c8464e8;
  dVar9 = DAT_14c8464e0;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = **(longlong **)(param_1 + 8);
  iVar16 = *(int *)(param_3 + 0xa8) - *(int *)(param_3 + 0xd4);
  if (param_4 == (double *)0x0) {
    local_c8 = DAT_14c8464f0;
    local_d8 = DAT_14c8464e0;
    dStack_d0 = DAT_14c8464e8;
    dStack_c0 = 0.0;
    local_b8 = 0.0;
    uStack_b0 = 0.0;
    local_a8 = 1.0;
  }
  else {
    local_a8 = param_4[6];
    local_d8 = *param_4;
    dStack_d0 = param_4[1];
    local_c8 = param_4[2];
    dStack_c0 = param_4[3];
    local_b8 = param_4[4];
    uStack_b0 = param_4[5];
  }
  if (iVar16 == 1) {
    iVar16 = FUN_1482ae192(param_3);
    uVar3 = **(uint **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x18 +
                       (longlong)iVar16 * 0x40);
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) + 8 +
              (ulonglong)((uVar3 & 0x1ff) << 4));
    uVar17 = uVar15 >> 0x20;
    if ((int)uVar15 < (int)(uVar15 >> 0x20)) {
      uVar17 = uVar15;
    }
    if (uVar15 >> 0x20 == 0xffffffff) {
      uVar17 = uVar15;
    }
    FUN_146c13dec(lVar4,&local_118,uVar17 & 0xffffffff);
    if (0.1 < SQRT(dStack_108 * dStack_108 +
                   (double)local_118 * (double)local_118 + local_110 * local_110)) {
      FUN_1482ae234(&local_d8,2,&local_118);
    }
    cVar12 = FUN_148525d4a(param_1,iVar16,&local_a0);
    if (cVar12 != '\0') {
      local_f0 = dStack_c0 * (uStack_b0 + uStack_b0) + local_a8 * (local_b8 + local_b8);
      uStack_e8 = (uStack_b0 + uStack_b0) * local_b8 - (dStack_c0 + dStack_c0) * local_a8;
      local_e0 = 1.0 - ((local_b8 + local_b8) * local_b8 + dStack_c0 * (dStack_c0 + dStack_c0));
      FUN_1482ae2be(&local_d8,0,&local_a0);
    }
    FUN_148525f08(param_1,&local_f0,iVar16);
    local_c8 = local_e0;
    local_d8 = local_f0;
    dStack_d0 = uStack_e8;
    param_2[6] = local_a8;
    *(undefined4 *)(param_2 + 4) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_2 + 0x24) = local_b8._4_4_;
    *(undefined4 *)(param_2 + 5) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_b0._4_4_;
    param_2[2] = local_e0;
    param_2[3] = dStack_c0;
    *(undefined4 *)param_2 = (undefined4)local_f0;
    *(undefined4 *)((longlong)param_2 + 4) = local_f0._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_e8;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_e8._4_4_;
  }
  else {
    plVar1 = (longlong *)(param_3 + 0xa0);
    dVar2 = (double)(param_3 + 0xb0);
    local_a0 = 2.12199579096527e-314;
    local_90 = 0xffffffff;
    uStack_88 = 0;
    dStack_98 = dVar2;
    if (*(int *)(param_3 + 200) == 0) {
      iVar18 = 0;
    }
    else {
      FUN_1449c0562(&local_a0);
      iVar18 = *(int *)(param_3 + 200);
    }
    uStack_f8 = CONCAT44(uStack_84,uStack_88);
    local_100 = local_90;
    uVar11 = local_100;
    local_110 = local_a0;
    dStack_108 = dStack_98;
    local_100._4_4_ = (int)((ulonglong)local_90 >> 0x20);
    iVar13 = local_100._4_4_;
    local_118 = plVar1;
    if ((local_100._4_4_ != iVar18) || (local_100 = uVar11, dStack_98 != dVar2)) {
      do {
        local_100 = uVar11;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        lVar14 = (longlong)*(int *)(*local_118 + (longlong)iVar13 * 0xc) * 0x40;
        puVar6 = *(uint **)(lVar5 + 8 + lVar14);
        uVar3 = *puVar6;
        uVar17 = (ulonglong)uVar3 & 0x1ff;
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
        uVar3 = puVar6[(longlong)*(int *)(lVar5 + 0x10 + lVar14) + -1];
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
        uVar15 = (ulonglong)uVar3 & 0x1ff;
        dVar10 = dVar10 + (*(double *)(lVar7 + 0x10 + uVar17 * 0x18) +
                          *(double *)(lVar5 + 0x10 + uVar15 * 0x18)) * 0.5;
        dVar8 = dVar8 + (*(double *)(lVar7 + 8 + uVar17 * 0x18) +
                        *(double *)(lVar5 + 8 + uVar15 * 0x18)) * 0.5;
        local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~local_110._4_4_);
        dVar9 = dVar9 + (*(double *)(lVar7 + uVar17 * 0x18) + *(double *)(lVar5 + uVar15 * 0x18)) *
                        0.5;
        FUN_1449c0562(&local_110);
        iVar13 = local_100._4_4_;
        uVar11 = local_100;
      } while (local_118 != plVar1 || (dStack_108 != dVar2 || local_100._4_4_ != iVar18));
    }
    dVar2 = 1.0 / (double)iVar16;
    *param_2 = dVar9 * dVar2;
    param_2[1] = dVar8 * dVar2;
    param_2[2] = dVar2 * dVar10;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 1.0;
  }
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148526634 FUN_148526634 body=611 status=ok
// SIG undefined FUN_148526634(void)

undefined8 *
FUN_148526634(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = **(longlong **)(param_1 + 8);
  local_b0 = param_1;
  if (((*(int *)(param_3 + 0x58) == *(int *)(param_3 + 0x84)) &&
      (*(int *)(param_3 + 0xa8) == *(int *)(param_3 + 0xd4))) &&
     (*(int *)(param_3 + 8) == *(int *)(param_3 + 0x34))) {
    FUN_145c688c4(local_b8,param_2,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
  }
  *param_2 = 0x7fefffffffffffff;
  param_2[1] = 0x7fefffffffffffff;
  param_2[2] = 0x7fefffffffffffff;
  param_2[3] = 0xffefffffffffffff;
  param_2[4] = 0xffefffffffffffff;
  param_2[5] = 0xffefffffffffffff;
  plVar1 = (longlong *)(param_3 + 0xa0);
  local_c0 = param_3 + 0xb0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = local_c0;
  if (*(int *)(param_3 + 200) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_3 + 200);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar9) || (uStack_60 != local_c0)) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(local_b0 + 8) + 8);
      lVar6 = (longlong)*(int *)(*local_90 + (longlong)iStack_74 * 0xc) * 0x40;
      lVar8 = (longlong)*(int *)(lVar4 + 0x10 + lVar6);
      if (lVar8 != 0) {
        lVar4 = *(longlong *)(lVar4 + 8 + lVar6);
        lVar6 = 0;
        do {
          uVar3 = *(uint *)(lVar4 + lVar6);
          lVar5 = *(longlong *)(*(longlong *)(local_b8 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
          uVar7 = (ulonglong)(uVar3 & 0x1ff);
          local_98 = *(undefined8 *)(lVar5 + 0x10 + uVar7 * 0x18);
          puVar2 = (undefined4 *)(lVar5 + uVar7 * 0x18);
          local_a8 = *puVar2;
          uStack_a4 = puVar2[1];
          uStack_a0 = puVar2[2];
          uStack_9c = puVar2[3];
          (*(code *)*param_4)(&local_68,param_4[1]);
          FUN_146ba5262(param_2,&local_68);
          lVar6 = lVar6 + 4;
        } while (lVar8 * 4 != lVar6);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != local_c0 || iStack_74 != iVar9)
            );
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852689e FUN_14852689e body=107 status=ok
// SIG undefined FUN_14852689e(void)

undefined8 * FUN_14852689e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_146014160();
  *param_1 = &PTR_FUN_14af16220;
  param_1[0xb] = param_2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = &PTR_FUN_14af17c70;
  puVar2[1] = param_3;
  puVar1 = (undefined8 *)param_1[0xc];
  param_1[0xc] = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined2 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 14852690a FUN_14852690a body=1390 status=ok
// SIG undefined FUN_14852690a(void)

void FUN_14852690a(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  double *pdVar2;
  undefined4 *puVar3;
  uint uVar4;
  double dVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_188 [32];
  uint local_168;
  undefined1 local_160;
  int local_14c;
  longlong local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  double local_118;
  double dStack_110;
  double local_108;
  longlong *local_100;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [12];
  undefined4 uStack_bc;
  double local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_d8 = (undefined4)param_3[2];
  uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_d0 = (undefined4)param_3[3];
  uStack_cc = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar4 = *(uint *)(param_3 + 4);
  plVar13 = (longlong *)(param_2 + 0xa0);
  lVar1 = param_2 + 0xb0;
  stack0xffffffffffffff40 = (double)lVar1;
  local_c8._0_8_ = 0x100000000;
  local_b8 = 2.12199579047121e-314;
  uStack_b0 = 0;
  if (*(int *)(param_2 + 200) == 0) {
    local_14c = 0;
  }
  else {
    FUN_1449c0562(local_c8);
    local_14c = *(int *)(param_2 + 200);
  }
  uStack_e0 = CONCAT44(uStack_ac,uStack_b0);
  local_e8 = local_b8;
  dVar5 = local_e8;
  local_f8 = local_c8._0_4_;
  uStack_f4 = local_c8._4_4_;
  uStack_f0 = local_c8._8_4_;
  uStack_ec = uStack_bc;
  local_e8._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
  iVar12 = local_e8._4_4_;
  local_148 = lVar1;
  local_140 = plVar13;
  local_100 = plVar13;
  if ((local_e8._4_4_ != local_14c) || (local_e8 = dVar5, local_c8._8_8_ != lVar1)) {
    do {
      local_e8 = dVar5;
      plVar13 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))
                          (*(longlong **)(param_1 + 0x60),
                           *(undefined4 *)(*local_100 + (longlong)iVar12 * 0xc));
      lVar11 = plVar13[1];
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) +
               (ulonglong)(*(uint *)*plVar13 >> 9) * 8);
      uVar15 = (ulonglong)(*(uint *)*plVar13 & 0x1ff);
      local_108 = *(double *)(lVar1 + 0x10 + uVar15 * 0x18);
      pdVar2 = (double *)(lVar1 + uVar15 * 0x18);
      local_118 = *pdVar2;
      dStack_110 = pdVar2[1];
      if (*(char *)(param_4 + 0x4c) == '\x01') {
        dVar16 = local_118 * (double)param_3[0x20];
        dVar17 = dStack_110 * (double)param_3[0x21];
        dVar7 = local_108 * (double)param_3[0x22];
        dVar8 = (double)param_3[0x18];
        dVar9 = (double)param_3[0x19];
        dVar10 = (double)param_3[0x1a];
        dVar5 = (double)param_3[0x1b];
        dVar18 = dVar17 * dVar8 - dVar16 * dVar9;
        dVar19 = dVar7 * dVar9 - dVar17 * dVar10;
        dVar20 = dVar16 * dVar10 - dVar8 * dVar7;
        dVar19 = dVar19 + dVar19;
        dVar20 = dVar20 + dVar20;
        dVar18 = dVar18 + dVar18;
        dVar17 = (dVar10 * dVar19 - dVar8 * dVar18) + (double)param_3[0x1b] * dVar20 + dVar17 +
                 (double)param_3[0x1d];
        local_b8 = dVar18 * dVar5 + dVar7 + (dVar20 * dVar8 - dVar19 * dVar9) +
                   (double)param_3[0x1e];
        local_c8._8_4_ = SUB84(dVar17,0);
        local_c8._0_8_ =
             (dVar18 * dVar9 - dVar20 * dVar10) + dVar5 * dVar19 + dVar16 + (double)param_3[0x1c];
        uStack_bc = (int)((ulonglong)dVar17 >> 0x20);
        local_168 = local_168 & 0xffffff00;
        (**(code **)(*param_3 + 0x10))(param_3,local_c8,&local_d8,&DAT_41200000);
      }
      if (1 < (int)lVar11) {
        uVar15 = 0;
        do {
          uVar6 = *(uint *)(*plVar13 + 4 + uVar15 * 4);
          uVar15 = uVar15 + 1;
          lVar1 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) +
                   (ulonglong)(uVar6 >> 9) * 8);
          uVar14 = (ulonglong)(uVar6 & 0x1ff);
          local_b8 = *(double *)(lVar1 + 0x10 + uVar14 * 0x18);
          _local_c8 = *(undefined1 (*) [16])(lVar1 + uVar14 * 0x18);
          local_160 = 0;
          local_168 = uVar4;
          FUN_1484122ca(param_3,&local_118,local_c8,&local_d8);
          local_108 = local_b8;
          local_118 = (double)local_c8._0_8_;
          dStack_110 = stack0xffffffffffffff40;
        } while ((int)lVar11 - 1 != uVar15);
      }
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) +
               (ulonglong)(*(uint *)*plVar13 >> 9) * 8);
      uVar15 = (ulonglong)(*(uint *)*plVar13 & 0x1ff);
      local_128 = *(undefined8 *)(lVar1 + 0x10 + uVar15 * 0x18);
      puVar3 = (undefined4 *)(lVar1 + uVar15 * 0x18);
      local_138 = *puVar3;
      uStack_134 = puVar3[1];
      uStack_130 = puVar3[2];
      uStack_12c = puVar3[3];
      local_160 = 0;
      local_168 = uVar4;
      FUN_1484122ca(param_3,&local_118,&local_138,&local_d8);
      if (*(char *)(param_4 + 0x4c) != '\0') {
        dVar16 = local_118 * (double)param_3[0x20];
        dVar17 = dStack_110 * (double)param_3[0x21];
        dVar7 = local_108 * (double)param_3[0x22];
        dVar8 = (double)param_3[0x18];
        dVar9 = (double)param_3[0x19];
        dVar10 = (double)param_3[0x1a];
        dVar5 = (double)param_3[0x1b];
        dVar18 = dVar17 * dVar8 - dVar16 * dVar9;
        dVar19 = dVar7 * dVar9 - dVar17 * dVar10;
        dVar20 = dVar16 * dVar10 - dVar8 * dVar7;
        dVar19 = dVar19 + dVar19;
        dVar20 = dVar20 + dVar20;
        dVar18 = dVar18 + dVar18;
        dVar17 = (dVar10 * dVar19 - dVar8 * dVar18) + (double)param_3[0x1b] * dVar20 + dVar17 +
                 (double)param_3[0x1d];
        local_b8 = dVar18 * dVar5 + dVar7 + (dVar20 * dVar8 - dVar19 * dVar9) +
                   (double)param_3[0x1e];
        local_c8._8_4_ = SUB84(dVar17,0);
        local_c8._0_8_ =
             (dVar18 * dVar9 - dVar20 * dVar10) + dVar5 * dVar19 + dVar16 + (double)param_3[0x1c];
        uStack_bc = (int)((ulonglong)dVar17 >> 0x20);
        local_168 = local_168 & 0xffffff00;
        (**(code **)(*param_3 + 0x10))(param_3,local_c8,&local_d8,uVar4);
      }
      local_e8 = (double)CONCAT44(local_e8._4_4_,(uint)local_e8 & ~uStack_f4);
      FUN_1449c0562(&local_f8);
      iVar12 = local_e8._4_4_;
      dVar5 = local_e8;
    } while (local_100 != local_140 ||
             (CONCAT44(uStack_ec,uStack_f0) != local_148 || local_e8._4_4_ != local_14c));
  }
  if ((local_a0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148526e7a FUN_148526e7a body=388 status=ok
// SIG undefined FUN_148526e7a(void)

void FUN_148526e7a(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_78 [16];
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *(undefined1 *)((longlong)param_1 + 0x3c);
  dVar6 = *param_2 * (double)param_1[0x20];
  dVar7 = param_2[1] * (double)param_1[0x21];
  dVar5 = param_2[2] * (double)param_1[0x22];
  dVar2 = (double)param_1[0x18];
  dVar3 = (double)param_1[0x19];
  dVar4 = (double)param_1[0x1a];
  dVar1 = (double)param_1[0x1b];
  dVar8 = dVar7 * dVar2 - dVar6 * dVar3;
  dVar9 = dVar5 * dVar3 - dVar7 * dVar4;
  dVar10 = dVar6 * dVar4 - dVar2 * dVar5;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar7 = (dVar4 * dVar9 - dVar2 * dVar8) + (double)param_1[0x1b] * dVar10 + dVar7 +
          (double)param_1[0x1d];
  local_68 = dVar8 * dVar1 + dVar5 + (dVar10 * dVar2 - dVar9 * dVar3) + (double)param_1[0x1e];
  local_78._8_4_ = SUB84(dVar7,0);
  local_78._0_8_ = (dVar8 * dVar3 - dVar10 * dVar4) + dVar1 * dVar9 + dVar6 + (double)param_1[0x1c];
  local_78._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  (**(code **)(*param_1 + 0x10))
            (dVar5,local_78,(longlong)param_1 + 0x24,*(undefined4 *)((longlong)param_1 + 0x34));
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148527000 FUN_148527000 body=729 status=ok
// SIG undefined FUN_148527000(void)

void FUN_148527000(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  ulonglong local_a0;
  double dVar2;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = *(undefined1 *)((longlong)param_1 + 0x3c);
  local_e8 = (undefined4)param_1[4];
  dVar4 = *param_3 * (double)param_1[0x20];
  dVar5 = param_3[1] * (double)param_1[0x21];
  dVar3 = param_3[2] * (double)param_1[0x22];
  dVar1 = (double)param_1[0x1b];
  dVar2 = (double)param_1[0x1b];
  dVar9 = (double)param_1[0x18];
  dVar10 = (double)param_1[0x19];
  dVar11 = (double)param_1[0x1a];
  dVar6 = dVar5 * dVar9 - dVar4 * dVar10;
  dVar7 = dVar3 * dVar10 - dVar5 * dVar11;
  dVar8 = dVar4 * dVar11 - dVar3 * dVar9;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  dVar5 = (dVar11 * dVar7 - dVar9 * dVar6) + dVar2 * dVar8 + dVar5 + (double)param_1[0x1d];
  local_b8._8_4_ = SUB84(dVar5,0);
  local_b8._0_8_ = (dVar6 * dVar10 - dVar8 * dVar11) + dVar1 * dVar7 + dVar4 + (double)param_1[0x1c]
  ;
  local_b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_a8 = dVar6 * dVar1 + dVar3 + (dVar8 * dVar9 - dVar7 * dVar10) + (double)param_1[0x1e];
  dVar7 = *param_2 * (double)param_1[0x20];
  dVar8 = param_2[1] * (double)param_1[0x21];
  dVar5 = param_2[2] * (double)param_1[0x22];
  dVar3 = dVar8 * dVar9 - dVar10 * dVar7;
  dVar6 = dVar5 * dVar10 - dVar11 * dVar8;
  dVar4 = dVar7 * dVar11 - dVar9 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar4 = dVar4 + dVar4;
  dVar3 = dVar3 + dVar3;
  dVar2 = (dVar11 * dVar6 - dVar9 * dVar3) + dVar2 * dVar4 + dVar8 + (double)param_1[0x1d];
  local_d8._8_4_ = SUB84(dVar2,0);
  local_d8._0_8_ = (dVar3 * dVar10 - dVar4 * dVar11) + dVar1 * dVar6 + dVar7 + (double)param_1[0x1c]
  ;
  local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_c8 = dVar3 * dVar1 + dVar5 + (dVar4 * dVar9 - dVar6 * dVar10) + (double)param_1[0x1e];
  (**(code **)(*param_1 + 8))(local_e8,local_d8,local_b8,param_1 + 2);
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485272da FUN_1485272da body=85 status=ok
// SIG undefined FUN_1485272da(void)

void FUN_1485272da(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145b11fbc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00014852732c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x3c8))(param_2,param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 148527330 FUN_148527330 body=85 status=ok
// SIG undefined FUN_148527330(void)

void FUN_148527330(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145b11fbc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148527382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x3d0))(param_2,param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 148527386 FUN_148527386 body=32 status=ok
// SIG undefined FUN_148527386(void)

undefined8 FUN_148527386(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGeometrySelectionDeltaChange");
  return param_2;
}



// FUNCTION 1485273a6 FUN_1485273a6 body=80 status=ok
// SIG undefined FUN_1485273a6(void)

undefined8 FUN_1485273a6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145b11fbc();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001485273ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 1485273f6 FUN_1485273f6 body=84 status=ok
// SIG undefined FUN_1485273f6(void)

void FUN_1485273f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_1483840c0(param_2,1,param_1 + 0x18,param_3);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_1483840c0(param_2,0,param_1 + 0x28,param_3);
    return;
  }
  return;
}



// FUNCTION 14852744a FUN_14852744a body=84 status=ok
// SIG undefined FUN_14852744a(void)

void FUN_14852744a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_1483840c0(param_2,1,param_1 + 0x28,param_3);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_1483840c0(param_2,0,param_1 + 0x18,param_3);
    return;
  }
  return;
}



// FUNCTION 14852749e FUN_14852749e body=85 status=ok
// SIG undefined FUN_14852749e(void)

void FUN_14852749e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145b11fbc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001485274f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x3c8))(param_2,param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 1485274f4 FUN_1485274f4 body=85 status=ok
// SIG undefined FUN_1485274f4(void)

void FUN_1485274f4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145b11fbc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148527546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x3d0))(param_2,param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 14852754a FUN_14852754a body=32 status=ok
// SIG undefined FUN_14852754a(void)

undefined8 FUN_14852754a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGeometrySelectionReplaceChange");
  return param_2;
}



// FUNCTION 14852756a FUN_14852756a body=80 status=ok
// SIG undefined FUN_14852756a(void)

undefined8 FUN_14852756a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145b11fbc();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001485275b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 1485275de FUN_1485275de body=96 status=ok
// SIG undefined FUN_1485275de(void)

void FUN_1485275de(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  lVar1 = FUN_1484ec096(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x140) = lVar1;
  return;
}



// FUNCTION 14852763e FUN_14852763e body=103 status=ok
// SIG undefined FUN_14852763e(void)

void FUN_14852763e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
    FUN_14854bb62(param_1 + 0x70,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8) = *param_2;
  *param_2 = 0;
  FUN_1485276a6(param_1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148527699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 1485276a6 FUN_1485276a6 body=308 status=ok
// SIG undefined FUN_1485276a6(void)

void FUN_1485276a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1 + 0xf0;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_148528ba8(lVar3,&local_48);
  if ((longlong)(int)uStack_40 != 0) {
    puVar6 = local_48 + (longlong)(int)uStack_40 * 2;
    puVar5 = local_48;
    do {
      local_58 = *puVar5;
      plVar4 = (longlong *)puVar5[1];
      if (plVar4 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        FUN_14852796c(param_1,&local_58,1);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_50 = plVar4;
        FUN_14852796c(param_1,&local_58,1);
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
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6);
  }
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    FUN_14854bc8e(lVar3);
    FUN_14854bdd2(lVar3);
  }
  FUN_145cedc08(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485277dc FUN_1485277dc body=398 status=ok
// SIG undefined FUN_1485277dc(void)

void FUN_1485277dc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x310))();
  FUN_1448a8284(param_1 + 5);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_1[0x28] != 0) {
    FUN_148528a66(param_1);
    FUN_1484e0e5e(param_1[0x28]);
    param_1[0x28] = 0;
  }
  if ((longlong)(int)param_1[0x11] != 0) {
    puVar6 = (undefined8 *)param_1[0x10];
    puVar5 = puVar6 + (longlong)(int)param_1[0x11] * 2;
    do {
      local_40 = *puVar6;
      plVar4 = (longlong *)puVar6[1];
      if (plVar4 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
        FUN_14852796c(param_1,&local_40,0);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_38 = plVar4;
        FUN_14852796c(param_1,&local_40,0);
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
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar5);
  }
  FUN_1485276a6(param_1);
  iVar3 = *(int *)((longlong)param_1 + 0x8c);
  FUN_145cedc08(param_1[0x10],(int)param_1[0x11]);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x8c) != 0)) {
    FUN_14854bc2e(param_1 + 0x10,0);
  }
  if ((int)param_1[0x13] != *(int *)((longlong)param_1 + 0xc4)) {
    FUN_14854bc8e(param_1 + 0x12);
    FUN_14854bdd2(param_1 + 0x12);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_148527a16(param_1);
  return;
}



// FUNCTION 14852796c FUN_14852796c body=170 status=ok
// SIG undefined FUN_14852796c(void)

void FUN_14852796c(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  cVar4 = (**(code **)(**(longlong **)(*param_2 + 0x20) + 0x10))();
  if ((cVar4 != '\0') && (param_3 == '\0')) {
    cVar4 = (**(code **)(**(longlong **)(*param_2 + 0x20) + 0x18))();
    if (cVar4 != '\0') goto LAB_1485279a2;
  }
  FUN_14854c32a(param_1 + 0xf0,*param_2);
  lVar5 = *param_2;
  if (*(longlong *)(lVar5 + 0x88) != 0) {
    FUN_14480f766(*(longlong *)(lVar5 + 0x20) + 8);
    lVar5 = *param_2;
  }
  (**(code **)(**(longlong **)(lVar5 + 0x20) + 8))();
LAB_1485279a2:
  plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001485279cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148527a16 FUN_148527a16 body=283 status=ok
// SIG undefined FUN_148527a16(void)

void FUN_148527a16(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x154);
  FUN_145cedaf8(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  *(undefined4 *)(param_1 + 0x150) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x154) != 0)) {
    FUN_14854c5ee(param_1 + 0x148);
  }
  iVar1 = *(int *)(param_1 + 0x494);
  FUN_145cedaf8(*(undefined8 *)(param_1 + 0x488),*(undefined4 *)(param_1 + 0x490));
  *(undefined4 *)(param_1 + 0x490) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x494) != 0)) {
    FUN_14854c5ee(param_1 + 0x488);
  }
  FUN_14852b84e(param_1 + 0x148,*(undefined4 *)(param_1 + 0x88));
  FUN_14852b84e(param_1 + 0x488,*(undefined4 *)(param_1 + 0x88));
  local_38 = param_1 + 0x398;
  local_30 = 3;
  FUN_14852ae68(param_1,&local_38);
  local_38 = param_1 + 0x2c0;
  local_30 = 3;
  FUN_14852ae68(param_1,&local_38);
  *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) | 7;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_148527c54(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148527b3c FUN_148527b3c body=278 status=ok
// SIG undefined FUN_148527b3c(void)

void FUN_148527b3c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong unaff_RBP;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[0xb] != param_2) {
    *(int *)(param_1 + 0xb) = param_2;
    if ((longlong)(int)param_1[0x11] != 0) {
      plVar7 = (longlong *)param_1[0x10];
      plVar8 = plVar7 + (longlong)(int)param_1[0x11] * 2;
      do {
        lVar3 = *plVar7;
        plVar4 = (longlong *)plVar7[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        lVar6 = param_1[0xb];
        *(int *)(lVar3 + 0x28) = (int)lVar6;
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),(int)lVar6 != 1 && *(int *)(lVar3 + 0x2c) == 2);
        uVar5 = *(undefined8 *)(lVar3 + 0x80);
        local_4c = (**(code **)(*param_1 + 0x2e0))(param_1);
        local_48 = (**(code **)(*param_1 + 0x2c8))(param_1);
        local_44 = 1;
        FUN_148383582(uVar5,&local_4c,unaff_RBP & 0xffffffff);
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
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar8);
    }
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 5;
    FUN_148527c54(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148527c54 FUN_148527c54 body=182 status=ok
// SIG undefined FUN_148527c54(void)

void FUN_148527c54(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147e3ce0c(param_1 + 0x160);
  FUN_147e3ce0c(param_1 + 0x1b8);
  FUN_147e3ce0c(param_1 + 0x210);
  FUN_14852adfa(param_1 + 0x260);
  FUN_14852adfa(param_1 + 0x290);
  *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) | 4;
  local_30 = param_1 + 0x308;
  local_28 = 3;
  FUN_14852ae68(param_1,&local_30);
  local_30 = param_1 + 0x350;
  local_28 = 3;
  FUN_14852ae68(param_1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148527d0c FUN_148527d0c body=442 status=ok
// SIG undefined FUN_148527d0c(void)

void FUN_148527d0c(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[0xb] != param_2) {
    plVar2 = (longlong *)param_1[0xd];
    local_58 = L"ChangeElementType";
    local_50 = 0x11;
    FUN_1446e940c(local_5c,&local_58);
    local_58 = L"UGeometrySelectionManager";
    local_50 = 0x19;
    FUN_1446e940c(local_60,&local_58);
    FUN_140208bae(&local_58,local_60,local_5c,L"Selection Type");
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    cVar3 = (**(code **)(*param_1 + 0x370))(param_1);
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0x2f8))(param_1,0);
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = &PTR_LAB_14af17d40;
    *(int *)(puVar4 + 1) = (int)param_1[0xb];
    *(int *)((longlong)puVar4 + 0xc) = param_2;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x5c);
    *(undefined4 *)((longlong)puVar4 + 0x14) = uVar1;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    plVar2 = (longlong *)param_1[0xd];
    local_58 = L"ChangeElementType";
    local_50 = 0x11;
    FUN_1446e940c(local_5c,&local_58);
    local_58 = L"UGeometrySelectionManager";
    local_50 = 0x19;
    FUN_1446e940c(local_60,&local_58);
    FUN_140208bae(&local_58,local_60,local_5c,L"Selection Type");
    local_68 = puVar4;
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1,&local_68,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    FUN_148527b3c(param_1,param_2);
    (**(code **)(*(longlong *)param_1[0xd] + 0x20))();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148527ec8 FUN_148527ec8 body=289 status=ok
// SIG undefined FUN_148527ec8(void)

void FUN_148527ec8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong unaff_RBP;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x5c) != param_2) {
    *(int *)((longlong)param_1 + 0x5c) = param_2;
    if ((longlong)(int)param_1[0x11] != 0) {
      plVar7 = (longlong *)param_1[0x10];
      plVar8 = plVar7 + (longlong)(int)param_1[0x11] * 2;
      do {
        lVar3 = *plVar7;
        plVar4 = (longlong *)plVar7[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        iVar6 = (**(code **)(*param_1 + 0x2e0))(param_1);
        *(int *)(lVar3 + 0x2c) = iVar6;
        if (iVar6 == 2) {
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(int *)(lVar3 + 0x28) != 1);
        }
        else {
          unaff_RBP = 0;
        }
        uVar5 = *(undefined8 *)(lVar3 + 0x80);
        local_4c = (**(code **)(*param_1 + 0x2e0))(param_1);
        local_48 = (**(code **)(*param_1 + 0x2c8))(param_1);
        local_44 = 1;
        FUN_148383582(uVar5,&local_4c,unaff_RBP & 0xffffffff);
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
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar8);
    }
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 7;
    FUN_148527c54(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148527fea FUN_148527fea body=442 status=ok
// SIG undefined FUN_148527fea(void)

void FUN_148527fea(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)((longlong)param_1 + 0x5c) != param_2) {
    plVar1 = (longlong *)param_1[0xd];
    local_58 = L"ChangeSelectionMode";
    local_50 = 0x13;
    FUN_1446e940c(local_5c,&local_58);
    local_58 = L"UGeometrySelectionManager";
    local_50 = 0x19;
    FUN_1446e940c(local_60,&local_58);
    FUN_140208bae(&local_58,local_60,local_5c,L"Selection Mode");
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    cVar3 = (**(code **)(*param_1 + 0x370))(param_1);
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0x2f8))(param_1,0);
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = &PTR_LAB_14af17d40;
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)((longlong)param_1 + 0x5c);
    *(int *)((longlong)puVar4 + 0x14) = param_2;
    lVar2 = param_1[0xb];
    *(int *)((longlong)puVar4 + 0xc) = (int)lVar2;
    *(int *)(puVar4 + 1) = (int)lVar2;
    plVar1 = (longlong *)param_1[0xd];
    local_58 = L"ChangeSelectionMode";
    local_50 = 0x13;
    FUN_1446e940c(local_5c,&local_58);
    local_58 = L"UGeometrySelectionManager";
    local_50 = 0x19;
    FUN_1446e940c(local_60,&local_58);
    FUN_140208bae(&local_58,local_60,local_5c,L"Selection Mode");
    local_68 = puVar4;
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1,&local_68,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    FUN_148527ec8(param_1,param_2);
    (**(code **)(*(longlong *)param_1[0xd] + 0x20))();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485281a6 FUN_1485281a6 body=202 status=ok
// SIG undefined FUN_1485281a6(void)

void FUN_1485281a6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [48];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_145de6de6(local_88,param_1 + 0x2c0);
      local_58 = *(undefined4 *)(param_1 + 0x2f0);
      uStack_54 = *(undefined4 *)(param_1 + 0x2f4);
      uStack_50 = *(undefined4 *)(param_1 + 0x2f8);
      uStack_4c = *(undefined4 *)(param_1 + 0x2fc);
      local_48 = *(longlong *)(param_1 + 0x300);
      if ((local_48 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_148528272(param_1,*(longlong *)(param_1 + 0x488) + lVar1,local_88);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (lVar2 < *(int *)(param_1 + 0x88));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148528272 FUN_148528272 body=328 status=ok
// SIG undefined FUN_148528272(void)

void FUN_148528272(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  code *local_70;
  longlong *local_68;
  code *local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(param_1[0x28] + 0x28) == 0)) {
    FUN_1484e0ce2(param_1[0x28],lVar2,&DAT_14c846480);
  }
  iVar1 = (int)param_1[0xb];
  if (iVar1 == 1) {
    local_68 = &local_50;
    local_70 = FUN_143ba489c;
    local_78 = 0xffffffff;
    local_50 = param_2;
    local_48 = param_3;
    FUN_1484e2fd0(param_1[0x28],param_3,*(undefined4 *)(param_2 + 0x28));
  }
  else if ((iVar1 == 4) || (iVar1 == 2)) {
    local_40 = FUN_143ba44d2;
    local_78 = 1;
    local_50 = param_2;
    local_48 = param_3;
    local_38 = &local_50;
    FUN_1484e2e98(param_1[0x28],param_3 + 0x10,*(undefined4 *)(param_2 + 0x18));
    local_60 = FUN_143ba4650;
    local_78 = 1;
    local_58 = &local_50;
    local_50 = param_2;
    local_48 = param_3;
    FUN_1484e2b86(param_1[0x28],param_3 + 0x20,*(undefined4 *)(param_2 + 8));
  }
  lVar2 = 0x30;
  do {
    if (*(longlong *)(param_3 + -0x10 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485283bc FUN_1485283bc body=1704 status=ok
// SIG undefined FUN_1485283bc(void)

void FUN_1485283bc(longlong *param_1,int param_2,int param_3,byte param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  void *_Dst;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_168 [32];
  wchar_t **local_148;
  longlong *local_140;
  longlong *local_130;
  byte local_121;
  undefined4 local_120;
  int local_11c;
  void *local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_130 = param_1;
  if ((*(int *)((longlong)param_1 + 0x5c) == param_3) && ((int)param_1[0xb] == param_2))
  goto LAB_148528403;
  local_11c = param_3;
  local_121 = (**(code **)(*param_1 + 0x370))();
  local_121 = local_121 & param_4;
  local_d8 = 0;
  uStack_d0 = 0;
  if ((local_121 == 1) && ((longlong)(int)local_130[0x11] != 0)) {
    plVar12 = (longlong *)local_130[0x10];
    plVar14 = plVar12 + (longlong)(int)local_130[0x11] * 2;
    do {
      uVar9 = uStack_d0;
      lVar13 = *plVar12;
      plVar3 = (longlong *)plVar12[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar15 = (longlong)(int)uStack_d0;
      uVar10 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar10);
      if (uStack_d0._4_4_ < uVar10) {
        FUN_1484d792c(&local_d8,uVar9 & 0xffffffff);
      }
      puVar11 = (undefined8 *)(lVar15 * 0x58 + local_d8);
      *puVar11 = *(undefined8 *)(lVar13 + 0x28);
      puVar11[5] = 0;
      *(undefined4 *)(puVar11 + 6) = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *(undefined8 *)((longlong)puVar11 + 0x34) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar11 + 0x3c) = 0;
      puVar11[9] = 0;
      *(undefined4 *)(puVar11 + 10) = 0;
      FUN_147371fc4(puVar11 + 1,lVar13 + 0x30);
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
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar14);
  }
  (**(code **)(*local_130 + 0x2f8))(local_130,0);
  iVar8 = local_11c;
  if ((local_11c == 0) && (local_130[0x28] != 0)) {
    FUN_148528a66();
  }
  if ((param_2 == 4) || (param_2 == 2)) {
    local_120 = 0;
    if ((iVar8 != 0) && ((int)local_130[0xb] == 1)) goto LAB_148528a54;
  }
  else if ((param_2 == 1) &&
          ((((int)local_130[0xb] == 2 || ((int)local_130[0xb] == 4)) && (iVar8 != 0)))) {
LAB_148528a54:
    plVar12 = local_130;
    FUN_148528a66(local_130);
    local_120 = (undefined4)CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
  }
  else {
    local_120 = 0;
  }
  plVar12 = (longlong *)local_130[0xd];
  local_b8 = L"ChangeElementMethod";
  local_b0._0_4_ = 0x13;
  FUN_1446e940c(&local_108,&local_b8);
  local_b8 = L"UGeometrySelectionManager";
  local_b0 = CONCAT44(local_b0._4_4_,0x19);
  FUN_1446e940c(&local_c8,&local_b8);
  FUN_140208bae(&local_b8,&local_c8,&local_108,L"Change Selection Method");
  (**(code **)(*plVar12 + 0x18))(plVar12,&local_b8);
  if (local_b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_b8 + 0x10))();
  }
  puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  plVar14 = local_130;
  *puVar11 = &PTR_LAB_14af17d40;
  *(int *)(puVar11 + 1) = (int)local_130[0xb];
  *(int *)((longlong)puVar11 + 0xc) = param_2;
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)((longlong)local_130 + 0x5c);
  *(int *)((longlong)puVar11 + 0x14) = iVar8;
  plVar12 = (longlong *)local_130[0xd];
  local_b8 = L"ChangeElementMethod";
  local_b0._0_4_ = 0x13;
  FUN_1446e940c(&local_108,&local_b8);
  local_b8 = L"UGeometrySelectionManager";
  local_b0 = CONCAT44(local_b0._4_4_,0x19);
  FUN_1446e940c(&local_c8,&local_b8);
  FUN_140208bae(&local_b8,&local_c8,&local_108,L"Change Selection Method");
  local_e0 = puVar11;
  (**(code **)(*plVar12 + 0x28))(plVar12,plVar14,&local_e0,&local_b8);
  if (local_b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_b8 + 0x10))();
  }
  plVar12 = local_130;
  FUN_148527b3c(local_130,param_2);
  FUN_148527ec8(plVar12,iVar8);
  if ((char)local_120 != '\0') {
    FUN_1485281a6(local_130);
  }
  if (((local_121 != 0) && (0 < (int)local_130[0x11])) && ((int)local_130[0x11] == (int)uStack_d0))
  {
    lVar13 = 8;
    lVar16 = 0;
    lVar15 = 0;
    do {
      puVar4 = *(undefined4 **)(local_130[0x10] + -8 + lVar13);
      plVar12 = *(longlong **)(local_130[0x10] + lVar13);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_b8 = *(wchar_t **)(puVar4 + 10);
      local_90 = 0;
      local_88 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_84 = 0xffffffff00000080;
      local_7c = 0;
      local_70 = 0;
      local_68 = 0;
      FUN_147371fc4(&local_b0,puVar4 + 0xc);
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,2);
      local_140 = &local_108;
      local_148 = &local_c8;
      (**(code **)(**(longlong **)(puVar4 + 8) + 0x50))
                (*(longlong **)(puVar4 + 8),local_d8 + lVar16,
                 CONCAT71((int7)((ulonglong)local_148 >> 8),1),*(undefined8 *)(puVar4 + 0x20));
      if ((int)uStack_f0 != 0 || (int)uStack_100 != 0) {
        _Dst = (void *)FUN_14001cc68(0xd0);
        memset(_Dst,0,0xd0);
        FUN_14854c0d8(_Dst);
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        *(undefined4 *)((longlong)_Dst + 0x10) = *puVar4;
        *(undefined4 *)((longlong)_Dst + 0x14) = uVar5;
        *(undefined4 *)((longlong)_Dst + 0x18) = uVar6;
        *(undefined4 *)((longlong)_Dst + 0x1c) = uVar7;
        *(undefined8 *)((longlong)_Dst + 0x78) = *(undefined8 *)(puVar4 + 10);
        FUN_147371fc4((longlong)_Dst + 0x80,puVar4 + 0xc);
        plVar3 = local_130;
        *(wchar_t **)((longlong)_Dst + 0x20) = local_b8;
        FUN_147371fc4((longlong)_Dst + 0x28,&local_b0);
        plVar14 = (longlong *)plVar3[0xd];
        local_c8 = L"ConvertSelection";
        local_c0 = 0x10;
        FUN_1446e940c(local_10c,&local_c8);
        local_c8 = L"UGeometrySelectionManager";
        local_c0 = 0x19;
        FUN_1446e940c(local_110,&local_c8);
        FUN_140208bae(&local_c8,local_110,local_10c,L"Convert Selection");
        local_118 = _Dst;
        (**(code **)(*plVar14 + 0x28))(plVar14,plVar3,&local_118,&local_c8);
        if (local_c8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_c8 + 0x10))();
        }
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      local_68 = 0;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_140345f8a(&local_b0);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar12 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0x58;
      lVar13 = lVar13 + 0x10;
    } while (lVar15 < (int)local_130[0x11]);
  }
  plVar12 = local_130;
  (**(code **)(*(longlong *)local_130[0xd] + 0x20))();
  FUN_1447f69b6(plVar12 + 5);
  FUN_1458dc1c8(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
LAB_148528403:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148528a66 FUN_148528a66 body=67 status=ok
// SIG undefined FUN_148528a66(void)

void FUN_148528a66(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1484e12b0(*(longlong *)(param_1 + 0x140),1);
    FUN_1484e14b8(*(undefined8 *)(param_1 + 0x140),1);
    FUN_1484e16c4(*(undefined8 *)(param_1 + 0x140),1);
    return;
  }
  return;
}



// FUNCTION 148528ab6 FUN_148528ab6 body=129 status=ok
// SIG undefined FUN_148528ab6(void)

undefined8 FUN_148528ab6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x80);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x88) * 2;
    do {
      lVar5 = *plVar7;
      plVar6 = (longlong *)plVar7[1];
      if (plVar6 == (longlong *)0x0) {
        if (*(int *)(lVar5 + 0x38) != *(int *)(lVar5 + 100)) {
          return 1;
        }
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        iVar3 = *(int *)(lVar5 + 0x38);
        iVar4 = *(int *)(lVar5 + 100);
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
        if (iVar3 != iVar4) {
          return 1;
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
  }
  return 0;
}



// FUNCTION 148528b38 FUN_148528b38 body=111 status=ok
// SIG undefined FUN_148528b38(void)

void FUN_148528b38(longlong *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x2e0))();
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  *param_2 = uVar2;
  *param_3 = uVar3;
  lVar1 = param_1[0x11];
  *param_4 = (int)lVar1;
  if ((int)lVar1 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = *(int *)(*(longlong *)param_1[0x10] + 0x38) ==
            *(int *)(*(longlong *)param_1[0x10] + 100);
  }
  *param_5 = bVar4;
  return;
}



// FUNCTION 148528ba8 FUN_148528ba8 body=322 status=ok
// SIG undefined FUN_148528ba8(void)

void FUN_148528ba8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14854bbe8(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar4 = iStack_5c;
      lVar2 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14854c2a4(param_2,iVar1);
      }
      lVar2 = lVar2 + (longlong)iVar4 * 0x28;
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = *(longlong *)(lVar2 + 0x18);
      *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148528cec FUN_148528cec body=332 status=ok
// SIG undefined FUN_148528cec(void)

void FUN_148528cec(longlong *param_1,undefined4 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int *piVar5;
  undefined1 auStack_e8 [40];
  int local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_3 = 0;
  *(undefined8 *)(param_3 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0x3ff0000000000000;
  param_3[0x28] = 0;
  *(undefined8 *)(param_3 + 0x2c) = 0;
  *(undefined8 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x3c) = 0;
  if ((int)param_1[0x11] != 0) {
    local_a8 = *param_2;
    uStack_a4 = param_2[1];
    uStack_a0 = param_2[2];
    uStack_9c = param_2[3];
    local_98 = param_2[4];
    uStack_94 = param_2[5];
    uStack_90 = param_2[6];
    uStack_8c = param_2[7];
    local_88 = param_2[8];
    uStack_84 = param_2[9];
    uStack_80 = param_2[10];
    uStack_7c = param_2[0xb];
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1[0xc] + 0x68) + 0x378))();
    (**(code **)(*plVar4 + 0x18))(plVar4,local_78);
    lVar1 = *(longlong *)param_1[0x10];
    uVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
    local_b0 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_ac = 1;
    local_b4 = uVar3;
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x58))
                      (*(longlong **)(lVar1 + 0x20),&local_a8,&local_b4,param_3);
    if (cVar2 != '\0') {
      *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)param_1[0x10];
      if (**(int **)param_1[0x10] == 1) {
        piVar5 = *(int **)param_1[0x10] + 2;
      }
      else {
        piVar5 = local_c0;
        local_c0[0] = 0;
        local_c0[1] = 0;
      }
      *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)piVar5;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148528e3a FUN_148528e3a body=693 status=ok
// SIG undefined FUN_148528e3a(void)

void FUN_148528e3a(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_9c [4];
  wchar_t *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_74 [4];
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar8 = (**(code **)(*param_1 + 0x370))();
  if (cVar8 != '\0') {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x300))(param_1);
    }
    plVar11 = (longlong *)param_1[0xd];
    local_98 = L"ClearSelection";
    uStack_90._0_4_ = 0xe;
    FUN_1446e940c(&local_70,&local_98);
    local_98 = L"UGeometrySelectionManager";
    uStack_90 = CONCAT44(uStack_90._4_4_,0x19);
    FUN_1446e940c(local_74,&local_98);
    FUN_140208bae(&local_98,local_74,&local_70,L"Clear Selection");
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_98);
    if (local_98 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_98 + 0x10))();
    }
    if ((longlong)(int)param_1[0x11] != 0) {
      plVar11 = (longlong *)param_1[0x10];
      plVar10 = plVar11 + (longlong)(int)param_1[0x11] * 2;
      do {
        puVar2 = (undefined4 *)*plVar11;
        plVar3 = (longlong *)plVar11[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_88 = 0;
        uStack_80 = 0;
        local_98 = (wchar_t *)0x0;
        uStack_90 = 0;
        FUN_148383594(*(undefined8 *)(puVar2 + 0x20),&local_98);
        if ((int)uStack_80 != 0 || (int)uStack_90 != 0) {
          puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
          *puVar9 = &PTR_LAB_14af17e60;
          puVar9[1] = &PTR_FUN_14af17eb0;
          *(undefined4 *)(puVar9 + 2) = 1;
          *(undefined8 *)((longlong)puVar9 + 0x24) = 0;
          *(undefined8 *)((longlong)puVar9 + 0x2c) = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          *(undefined8 *)((longlong)puVar9 + 0x14) = 0;
          *(undefined8 *)((longlong)puVar9 + 0x1c) = 0;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *(undefined4 *)(puVar9 + 2) = *puVar2;
          *(undefined4 *)((longlong)puVar9 + 0x14) = uVar5;
          *(undefined4 *)(puVar9 + 3) = uVar6;
          *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar7;
          FUN_1485290f0(puVar9 + 4,&local_98);
          plVar4 = (longlong *)param_1[0xd];
          local_70 = L"ClearSelection";
          local_68 = 0xe;
          FUN_1446e940c(local_74,&local_70);
          local_70 = L"UGeometrySelectionManager";
          local_68 = 0x19;
          FUN_1446e940c(local_9c,&local_70);
          FUN_140208bae(&local_70,local_9c,local_74,L"Clear Selection");
          local_a8 = puVar9;
          (**(code **)(*plVar4 + 0x28))(plVar4,param_1,&local_a8,&local_70);
          if (local_70 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_70 + 0x10))();
          }
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar10);
    }
    (**(code **)(*(longlong *)param_1[0xd] + 0x20))();
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 5;
    FUN_1447f69b6(param_1 + 5);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485290f0 FUN_1485290f0 body=111 status=ok
// SIG undefined FUN_1485290f0(void)

longlong * FUN_1485290f0(longlong *param_1,longlong *param_2)

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
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 148529160 FUN_148529160 body=625 status=ok
// SIG undefined FUN_148529160(void)

void FUN_148529160(longlong *param_1,undefined4 *param_2,int *param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined8 *local_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  wchar_t *local_d8;
  undefined4 local_d0;
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
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_4[1] = '\0';
  if ((int)param_1[0x11] != 0) {
    puVar1 = *(undefined4 **)param_1[0x10];
    local_c8 = *param_2;
    uStack_c4 = param_2[1];
    uStack_c0 = param_2[2];
    uStack_bc = param_2[3];
    local_b8 = param_2[4];
    uStack_b4 = param_2[5];
    uStack_b0 = param_2[6];
    uStack_ac = param_2[7];
    local_a8 = param_2[8];
    uStack_a4 = param_2[9];
    uStack_a0 = param_2[10];
    uStack_9c = param_2[0xb];
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1[0xc] + 0x68) + 0x378))();
    (**(code **)(*plVar5 + 0x18))(plVar5,local_98);
    local_f8 = param_4;
    (**(code **)(**(longlong **)(puVar1 + 8) + 0x60))
              (*(longlong **)(puVar1 + 8),&local_c8,*(undefined8 *)(puVar1 + 0x20),param_3);
    if (param_4[1] == '\x01') {
      puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *puVar6 = &PTR_LAB_14af17e60;
      puVar6[1] = &PTR_FUN_14af17eb0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar6 + 2) = *puVar1;
      *(undefined4 *)((longlong)puVar6 + 0x14) = uVar2;
      *(undefined4 *)(puVar6 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar4;
      FUN_1400e9262(puVar6 + 4,param_4 + 8);
      FUN_1400e9262(puVar6 + 6,param_4 + 0x18);
      plVar5 = (longlong *)param_1[0xd];
      local_d8 = L"UpdateSelectionViaRaycast";
      local_d0 = 0x19;
      FUN_1446e940c(local_dc,&local_d8);
      local_d8 = L"UGeometrySelectionManager";
      local_d0 = 0x19;
      FUN_1446e940c(local_e0,&local_d8);
      FUN_140208bae(&local_d8,local_e0,local_dc,L"Change Selection");
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_d8);
      if (local_d8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_d8 + 0x10))();
      }
      plVar5 = (longlong *)param_1[0xd];
      local_d8 = L"UpdateSelectionViaRaycast";
      local_d0 = 0x19;
      FUN_1446e940c(local_dc,&local_d8);
      local_d8 = L"UGeometrySelectionManager";
      local_d0 = 0x19;
      FUN_1446e940c(local_e0,&local_d8);
      FUN_140208bae(&local_d8,local_e0,local_dc,L"Change Selection");
      local_e8 = puVar6;
      (**(code **)(*plVar5 + 0x28))(plVar5,param_1,&local_e8,&local_d8);
      if (local_d8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_d8 + 0x10))();
      }
      (**(code **)(*(longlong *)param_1[0xd] + 0x20))();
      *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 5;
      FUN_1447f69b6(param_1 + 5);
    }
    else if ((*param_4 == '\x01') && (*param_3 == 2)) {
      (**(code **)(*param_1 + 0x2f8))(param_1,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485293d2 FUN_1485293d2 body=723 status=ok
// SIG undefined FUN_1485293d2(void)

void FUN_1485293d2(longlong *param_1,longlong param_2,int *param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_2e8 [32];
  char *local_2c8;
  undefined8 *local_2b8;
  undefined1 local_2b0 [4];
  undefined1 local_2ac [4];
  wchar_t *local_2a8;
  undefined4 local_2a0;
  undefined1 local_298 [192];
  longlong local_1d8;
  undefined8 local_1c8;
  undefined1 local_1b8 [256];
  longlong local_b8;
  undefined8 local_a8;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  param_4[1] = '\0';
  if ((int)param_1[0x11] != 0) {
    puVar1 = *(undefined4 **)param_1[0x10];
    local_1d8 = 0;
    local_1c8 = 0x600000000;
    local_b8 = 0;
    local_a8 = 0x800000000;
    FUN_144715ac6(local_298);
    FUN_144715c36(local_1b8,param_2 + 0xe0);
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1[0xc] + 0x68) + 0x378))();
    (**(code **)(*plVar5 + 0x18))(plVar5,local_98);
    local_2c8 = param_4;
    (**(code **)(**(longlong **)(puVar1 + 8) + 0x70))
              (*(longlong **)(puVar1 + 8),local_298,*(undefined8 *)(puVar1 + 0x20),param_3);
    if (param_4[1] == '\x01') {
      puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *puVar6 = &PTR_LAB_14af17e60;
      puVar6[1] = &PTR_FUN_14af17eb0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar6 + 2) = *puVar1;
      *(undefined4 *)((longlong)puVar6 + 0x14) = uVar2;
      *(undefined4 *)(puVar6 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar4;
      FUN_1400e9262(puVar6 + 4,param_4 + 8);
      FUN_1400e9262(puVar6 + 6,param_4 + 0x18);
      plVar5 = (longlong *)param_1[0xd];
      local_2a8 = L"UpdateSelectionViaConvex";
      local_2a0 = 0x18;
      FUN_1446e940c(local_2ac,&local_2a8);
      local_2a8 = L"UGeometrySelectionManager";
      local_2a0 = 0x19;
      FUN_1446e940c(local_2b0,&local_2a8);
      FUN_140208bae(&local_2a8,local_2b0,local_2ac,L"Change Selection");
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_2a8);
      if (local_2a8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_2a8 + 0x10))();
      }
      plVar5 = (longlong *)param_1[0xd];
      local_2a8 = L"UpdateSelectionViaConvex";
      local_2a0 = 0x18;
      FUN_1446e940c(local_2ac,&local_2a8);
      local_2a8 = L"UGeometrySelectionManager";
      local_2a0 = 0x19;
      FUN_1446e940c(local_2b0,&local_2a8);
      FUN_140208bae(&local_2a8,local_2b0,local_2ac,L"Change Selection");
      local_2b8 = puVar6;
      (**(code **)(*plVar5 + 0x28))(plVar5,param_1,&local_2b8,&local_2a8);
      if (local_2a8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_2a8 + 0x10))();
      }
      (**(code **)(*(longlong *)param_1[0xd] + 0x20))();
      *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 5;
      FUN_1447f69b6(param_1 + 5);
    }
    else if ((*param_4 == '\x01') && (*param_3 == 2)) {
      (**(code **)(*param_1 + 0x2f8))(param_1,0);
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485296be FUN_1485296be body=596 status=ok
// SIG undefined FUN_1485296be(void)

undefined4 FUN_1485296be(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = (**(code **)(*param_1 + 0x330))();
  if ((char)uVar3 != '\0') {
    plVar1 = (longlong *)param_1[0xd];
    local_78 = L"ChangeSelection";
    uStack_70._0_4_ = 0xf;
    FUN_1446e940c(local_4c,&local_78);
    local_78 = L"UGeometrySelectionManager";
    uStack_70 = CONCAT44(uStack_70._4_4_,0x19);
    FUN_1446e940c(local_50,&local_78);
    FUN_140208bae(&local_78,local_50,local_4c,L"Change Selection");
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_78);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x7c) = 1;
    lVar2 = *(longlong *)param_1[0x10];
    *(undefined4 *)((longlong)param_1 + 0x3e4) = param_2;
    *(undefined1 *)(param_1 + 0x90) = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    FUN_1485290f0(param_1 + 0x88,&local_78);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (param_3 == '\0') {
      param_1[0x7d] = *(longlong *)(lVar2 + 0x28);
      FUN_147371fc4(param_1 + 0x7e,lVar2 + 0x30);
      local_68 = 0;
      uStack_60 = 0;
      local_78 = (wchar_t *)0x0;
      uStack_70 = 0;
      FUN_1485290f0(param_1 + 0x8c,&local_78);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_148383594(*(undefined8 *)(lVar2 + 0x80),param_1 + 0x88);
      *(undefined1 *)(param_1 + 0x90) = 1;
      param_1[0x7d] = *(longlong *)(lVar2 + 0x28);
      FUN_147371fc4(param_1 + 0x7e,lVar2 + 0x30);
      local_68 = 0;
      uStack_60 = 0;
      local_78 = (wchar_t *)0x0;
      uStack_70 = 0;
      FUN_1485290f0(param_1 + 0x8c,&local_78);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (((int)param_1[0x89] != 0) || ((int)param_1[0x8b] != 0)) {
        *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 5;
        FUN_1447f69b6(param_1 + 5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148529914 FUN_148529914 body=395 status=ok
// SIG undefined FUN_148529914(void)

void FUN_148529914(longlong param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8;
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
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x3e0) == '\x01') {
    lVar3 = **(longlong **)(param_1 + 0x80);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = param_2[4];
    uStack_a4 = param_2[5];
    uStack_a0 = param_2[6];
    uStack_9c = param_2[7];
    local_98 = param_2[8];
    uStack_94 = param_2[9];
    uStack_90 = param_2[10];
    uStack_8c = param_2[0xb];
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x60) + 0x68) + 0x378))();
    (**(code **)(*plVar4 + 0x18))(plVar4,local_88);
    plVar4 = *(longlong **)(lVar3 + 0x20);
    local_c8 = param_3;
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_b8,*(undefined8 *)(lVar3 + 0x80),param_1 + 0x3e4);
    if (*(char *)(param_3 + 1) == '\x01') {
      *(undefined1 *)(param_1 + 0x480) = 1;
      uVar1 = *(uint *)(param_3 + 0x20);
      if ((longlong)(int)uVar1 != 0) {
        iVar2 = *(int *)(param_1 + 0x478);
        *(uint *)(param_1 + 0x478) = iVar2 + uVar1;
        if ((uint)(*(int *)(param_1 + 0x47c) - iVar2) < uVar1) {
          FUN_14479d316((longlong *)(param_1 + 0x470),iVar2);
        }
        memcpy((void *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x470)),
               *(void **)(param_3 + 0x18),(longlong)(int)uVar1 << 3);
      }
      uVar1 = *(uint *)(param_3 + 0x10);
      if ((longlong)(int)uVar1 != 0) {
        iVar2 = *(int *)(param_1 + 0x468);
        *(uint *)(param_1 + 0x468) = iVar2 + uVar1;
        if ((uint)(*(int *)(param_1 + 0x46c) - iVar2) < uVar1) {
          FUN_14479d316((longlong *)(param_1 + 0x460),iVar2);
        }
        memcpy((void *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x460)),
               *(void **)(param_3 + 8),(longlong)(int)uVar1 << 3);
      }
      *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) | 5;
      FUN_1447f69b6(param_1 + 0x28);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148529aa0 FUN_148529aa0 body=620 status=ok
// SIG undefined FUN_148529aa0(void)

void FUN_148529aa0(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x3e0) == '\x01') {
    if (*(char *)(param_1 + 0x480) == '\x01') {
      puVar1 = (undefined4 *)**(longlong **)(param_1 + 0x80);
      if ((*(int *)(param_1 + 0x448) != 0) || (*(int *)(param_1 + 0x458) != 0)) {
        puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        *puVar6 = &PTR_LAB_14af17e60;
        puVar6[1] = &PTR_FUN_14af17eb0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar6 + 2) = *puVar1;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
        *(undefined4 *)(puVar6 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
        FUN_1485290f0(puVar6 + 4,param_1 + 0x440);
        plVar2 = *(longlong **)(param_1 + 0x68);
        local_50 = L"ChangeSelection";
        local_48 = 0xf;
        FUN_1446e940c(local_54,&local_50);
        local_50 = L"UGeometrySelectionManager";
        local_48 = 0x19;
        FUN_1446e940c(local_58,&local_50);
        FUN_140208bae(&local_50,local_58,local_54,L"Change Selection");
        local_60 = puVar6;
        (**(code **)(*plVar2 + 0x28))(plVar2,param_1,&local_60,&local_50);
        if (local_50 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_50 + 0x10))();
        }
      }
      if ((*(int *)(param_1 + 0x468) != 0) || (*(int *)(param_1 + 0x478) != 0)) {
        puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        *puVar6 = &PTR_LAB_14af17e60;
        puVar6[1] = &PTR_FUN_14af17eb0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar6 + 2) = *puVar1;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
        *(undefined4 *)(puVar6 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
        FUN_1485290f0(puVar6 + 4,param_1 + 0x460);
        plVar2 = *(longlong **)(param_1 + 0x68);
        local_50 = L"ChangeSelection";
        local_48 = 0xf;
        FUN_1446e940c(local_54,&local_50);
        local_50 = L"UGeometrySelectionManager";
        local_48 = 0x19;
        FUN_1446e940c(local_58,&local_50);
        FUN_140208bae(&local_50,local_58,local_54,L"Change Selection");
        local_68 = puVar6;
        (**(code **)(*plVar2 + 0x28))(plVar2,param_1,&local_68,&local_50);
        if (local_50 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_50 + 0x10))();
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))();
    *(undefined1 *)(param_1 + 0x3e0) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148529d0e FUN_148529d0e body=760 status=ok
// SIG undefined FUN_148529d0e(void)

ulonglong FUN_148529d0e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  void *_Dst;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_128 [32];
  wchar_t **local_108;
  longlong *local_100;
  void *local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x80);
    plVar11 = plVar10 + (longlong)*(int *)(param_1 + 0x88) * 2;
    do {
      puVar3 = (undefined4 *)*plVar10;
      plVar4 = (longlong *)plVar10[1];
      if (plVar4 == (longlong *)0x0) {
        cVar8 = FUN_14852a008(puVar3 + 2,param_2);
        if (cVar8 != '\0') {
LAB_148529df5:
          local_b8 = *(undefined8 *)(puVar3 + 10);
          local_90 = 0;
          local_88 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_84 = 0xffffffff00000080;
          local_7c = 0;
          local_70 = 0;
          local_68 = 0;
          FUN_147371fc4(&local_b0,puVar3 + 0xc);
          local_100 = &local_e8;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_108 = &local_c8;
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,2);
          (**(code **)(**(longlong **)(puVar3 + 8) + 0x50))
                    (*(longlong **)(puVar3 + 8),param_3,1,*(undefined8 *)(puVar3 + 0x20));
          if ((int)uStack_d0 != 0 || (int)uStack_e0 != 0) {
            _Dst = (void *)FUN_14001cc68(0xd0);
            memset(_Dst,0,0xd0);
            FUN_14854c0d8(_Dst);
            uVar5 = puVar3[1];
            uVar6 = puVar3[2];
            uVar7 = puVar3[3];
            *(undefined4 *)((longlong)_Dst + 0x10) = *puVar3;
            *(undefined4 *)((longlong)_Dst + 0x14) = uVar5;
            *(undefined4 *)((longlong)_Dst + 0x18) = uVar6;
            *(undefined4 *)((longlong)_Dst + 0x1c) = uVar7;
            *(undefined8 *)((longlong)_Dst + 0x78) = *(undefined8 *)(puVar3 + 10);
            FUN_147371fc4((longlong)_Dst + 0x80,puVar3 + 0xc);
            *(undefined8 *)((longlong)_Dst + 0x20) = local_b8;
            FUN_147371fc4((longlong)_Dst + 0x28,&local_b0);
            plVar10 = *(longlong **)(param_1 + 0x68);
            local_c8 = L"NewSelection";
            local_c0 = 0xc;
            FUN_1446e940c(local_ec,&local_c8);
            local_c8 = L"UGeometrySelectionManager";
            local_c0 = 0x19;
            FUN_1446e940c(local_f0,&local_c8);
            FUN_140208bae(&local_c8,local_f0,local_ec,L"New Selection");
            local_f8 = _Dst;
            (**(code **)(*plVar10 + 0x28))(plVar10,param_1,&local_f8,&local_c8);
            if (local_c8 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_c8 + 0x10))();
            }
            *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) | 5;
            param_1 = param_1 + 0x28;
            FUN_1447f69b6(param_1);
          }
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          local_68 = 0;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          FUN_140345f8a(&local_b0);
          uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar4 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
          goto LAB_148529dbd;
        }
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        cVar8 = FUN_14852a008(puVar3 + 2,param_2);
        if (cVar8 != '\0') goto LAB_148529df5;
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
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar11);
  }
  uVar9 = 0;
LAB_148529dbd:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14852a008 FUN_14852a008 body=118 status=ok
// SIG undefined FUN_14852a008(void)

ulonglong FUN_14852a008(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852a080 FUN_14852a080 body=331 status=ok
// SIG undefined FUN_14852a080(void)

void FUN_14852a080(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  FUN_14852a1cc();
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x80);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x88) * 2;
    do {
      lVar4 = *plVar7;
      plVar5 = (longlong *)plVar7[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      iVar3 = *(int *)(param_1 + 0x4a8);
      *(uint *)(param_1 + 0x4a8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x4ac) < iVar3 + 1U) {
        FUN_1409d3082(param_1 + 0x4a0,iVar3);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar3 * 8) =
           *(undefined8 *)(lVar4 + 8);
      iVar3 = *(int *)(param_1 + 0x4b8);
      *(uint *)(param_1 + 0x4b8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x4bc) < iVar3 + 1U) {
        FUN_1484d792c((longlong *)(param_1 + 0x4b0),iVar3);
      }
      puVar6 = (undefined8 *)((longlong)iVar3 * 0x58 + *(longlong *)(param_1 + 0x4b0));
      *puVar6 = *(undefined8 *)(lVar4 + 0x28);
      puVar6[5] = 0;
      *(undefined4 *)(puVar6 + 6) = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x34) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
      puVar6[9] = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      FUN_147371fc4(puVar6 + 1,lVar4 + 0x30);
      if (plVar5 != (longlong *)0x0) {
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
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
  }
  return;
}



// FUNCTION 14852a1cc FUN_14852a1cc body=89 status=ok
// SIG undefined FUN_14852a1cc(void)

void FUN_14852a1cc(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_147bf1112(param_1,0);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_1458dc1c8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_14854445c(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 14852a226 FUN_14852a226 body=1103 status=ok
// SIG undefined FUN_14852a226(void)

ulonglong FUN_14852a226(longlong *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  char cVar9;
  byte bVar10;
  longlong *plVar11;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong *plVar14;
  wchar_t **ppwVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined1 auStack_158 [32];
  wchar_t **local_138;
  longlong *local_130;
  void *local_120;
  undefined4 local_114;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  void *local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar14 = (longlong *)param_1[0xd];
  local_b8 = L"RestoreSelection";
  local_b0._0_4_ = 0x10;
  FUN_1446e940c(&local_e8,&local_b8);
  local_b8 = L"UGeometrySelectionManager";
  local_b0 = CONCAT44(local_b0._4_4_,0x19);
  FUN_1446e940c(&local_c8,&local_b8);
  FUN_140208bae(&local_b8,&local_c8,&local_e8,L"Restore Selection");
  (**(code **)(*plVar14 + 0x18))(plVar14,&local_b8);
  if (local_b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_b8 + 0x10))();
  }
  uVar13 = (undefined7)((ulonglong)plVar14 >> 8);
  if ((int)param_1[0x95] < 1) {
    uVar12 = CONCAT71(uVar13,1);
  }
  else {
    local_110 = param_1 + 5;
    uVar12 = CONCAT71(uVar13,1);
    lVar17 = 0;
    do {
      cVar9 = FUN_144729dda(param_1[0x94] + lVar17 * 8);
      if (cVar9 == '\0') {
        uVar12 = 0;
      }
      else {
        local_114 = (undefined4)uVar12;
        local_100 = lVar17;
        if ((longlong)(int)param_1[0x11] == 0) {
          uVar16 = 0;
        }
        else {
          local_108 = lVar17 * 0x58 + param_1[0x96];
          plVar14 = (longlong *)param_1[0x10];
          plVar11 = plVar14 + (longlong)(int)param_1[0x11] * 2;
          uVar16 = 0;
          do {
            puVar2 = (undefined4 *)*plVar14;
            plVar3 = (longlong *)plVar14[1];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            bVar10 = FUN_1401246e4(param_1[0x94] + lVar17 * 8);
            if (bVar10 != 0) {
              local_b8 = *(wchar_t **)(puVar2 + 10);
              ppwVar15 = (wchar_t **)(puVar2 + 0xc);
              local_90 = 0;
              local_88 = 0;
              local_b0 = 0;
              uStack_a8 = 0;
              local_84 = 0xffffffff00000080;
              local_7c = 0;
              local_70 = 0;
              local_68 = 0;
              FUN_147371fc4(&local_b0,ppwVar15);
              local_d8 = 0;
              uStack_d0 = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,2);
              local_130 = &local_e8;
              local_138 = &local_c8;
              (**(code **)(**(longlong **)(puVar2 + 8) + 0x50))
                        (*(longlong **)(puVar2 + 8),local_108,1,*(undefined8 *)(puVar2 + 0x20));
              if ((int)uStack_d0 != 0 || (int)uStack_e0 != 0) {
                local_120 = (void *)FUN_14001cc68(0xd0);
                memset(local_120,0,0xd0);
                FUN_14854c0d8(local_120);
                pvVar8 = local_120;
                uVar5 = puVar2[1];
                uVar6 = puVar2[2];
                uVar7 = puVar2[3];
                *(undefined4 *)((longlong)local_120 + 0x10) = *puVar2;
                *(undefined4 *)((longlong)local_120 + 0x14) = uVar5;
                *(undefined4 *)((longlong)local_120 + 0x18) = uVar6;
                *(undefined4 *)((longlong)local_120 + 0x1c) = uVar7;
                *(undefined8 *)((longlong)local_120 + 0x78) = *(undefined8 *)(puVar2 + 10);
                FUN_147371fc4((longlong)local_120 + 0x80,ppwVar15);
                *(wchar_t **)((longlong)pvVar8 + 0x20) = local_b8;
                FUN_147371fc4((longlong)pvVar8 + 0x28,&local_b0);
                plVar4 = (longlong *)param_1[0xd];
                local_c8 = L"RestoreSelection";
                local_c0 = 0x10;
                ppwVar15 = &local_c8;
                FUN_1446e940c(local_ec,ppwVar15);
                local_c8 = L"UGeometrySelectionManager";
                local_c0 = 0x19;
                FUN_1446e940c(local_f0,ppwVar15);
                FUN_140208bae(ppwVar15,local_f0,local_ec,L"Restore Selection");
                local_f8 = local_120;
                (**(code **)(*plVar4 + 0x28))(plVar4,param_1,&local_f8,ppwVar15);
                if (local_c8 != (wchar_t *)0x0) {
                  (**(code **)(*(longlong *)local_c8 + 0x10))();
                }
                *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 5;
                FUN_1447f69b6(local_110);
              }
              if (local_d8 != 0) {
                FUN_1400020a8();
              }
              if (local_e8 != 0) {
                FUN_1400020a8();
              }
              local_68 = 0;
              if (local_70 != 0) {
                FUN_1400020a8();
              }
              FUN_140345f8a(&local_b0);
              uVar16 = CONCAT71((int7)((ulonglong)ppwVar15 >> 8),1);
            }
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar3 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            plVar14 = plVar14 + 2;
          } while ((bVar10 | plVar14 == plVar11) != 1);
        }
        uVar12 = CONCAT71((int7)((ulonglong)uVar16 >> 8),(byte)uVar16 & (byte)local_114) &
                 0xffffffff;
        lVar17 = local_100;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x95]);
  }
  (**(code **)(*(longlong *)param_1[0xd] + 0x20))();
  (**(code **)(*param_1 + 0x310))(param_1);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffff01;
}



// FUNCTION 14852a682 FUN_14852a682 body=79 status=ok
// SIG undefined FUN_14852a682(void)

void FUN_14852a682(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_147bf1112(param_1,0);
  }
  FUN_1458dc1c8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_14854445c(param_1 + 0x10);
  return;
}



// FUNCTION 14852a6de FUN_14852a6de body=1682 status=ok
// SIG undefined FUN_14852a6de(void)

ulonglong FUN_14852a6de(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d4 [4];
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  ulonglong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong *local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined4 local_160;
  undefined8 local_15c;
  int local_154;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  undefined1 local_138 [24];
  undefined8 local_120;
  undefined1 local_118 [64];
  longlong local_d8;
  undefined4 local_d0;
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
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar12 = 0;
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0x80);
    local_c8 = *param_2;
    uStack_c4 = param_2[1];
    uStack_c0 = param_2[2];
    uStack_bc = param_2[3];
    local_b8 = param_2[4];
    uStack_b4 = param_2[5];
    uStack_b0 = param_2[6];
    uStack_ac = param_2[7];
    local_a8 = param_2[8];
    uStack_a4 = param_2[9];
    uStack_a0 = param_2[10];
    uStack_9c = param_2[0xb];
    plVar7 = (longlong *)
             (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x60) + 0x68) + 0x378))();
    (**(code **)(*plVar7 + 0x18))(plVar7,local_98);
    FUN_14852ad72(local_138,*(undefined8 *)(lVar3 + 0x80));
    (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x68))
              (*(longlong **)(lVar3 + 0x20),&local_c8,local_138);
    cVar4 = FUN_148383c2e(&local_120,param_1 + 0x158);
    if (cVar4 == '\0') {
      *(undefined8 *)(param_1 + 0x158) = local_120;
      plVar7 = (longlong *)(param_1 + 0x160);
      FUN_1484d24e8(plVar7,local_118);
      *(undefined8 *)(param_1 + 0x1b0) = local_120;
      lVar8 = param_1 + 0x1b8;
      FUN_1484d24e8(lVar8,local_118);
      *(undefined8 *)(param_1 + 0x208) = local_120;
      lVar2 = param_1 + 0x210;
      FUN_1484d24e8(lVar2,local_118);
      local_1e8 = lVar8;
      FUN_147e3ce0c(lVar8);
      FUN_147e3ce0c(lVar2);
      if (*(int *)(param_1 + 0x5c) == 1) {
        uVar12 = param_1 + 0x170;
        local_1d0 = (longlong *)&DAT_100000000;
        local_1c0 = 0xffffffff;
        local_1b8 = local_1b8 & 0xffffffff00000000;
        iVar11 = 0;
        local_1c8 = uVar12;
        if (*(int *)(param_1 + 0x188) != 0) {
          FUN_1449c0562(&local_1d0);
          iVar11 = *(int *)(param_1 + 0x188);
        }
        local_170 = local_1c0;
        lVar8 = local_170;
        local_168 = local_1b8;
        uStack_180 = local_1d0;
        local_178 = local_1c8;
        local_170._4_4_ = (int)((ulonglong)local_1c0 >> 0x20);
        local_188 = plVar7;
        if ((local_170._4_4_ != iVar11) || (local_1c8 != uVar12)) {
          local_1e0 = lVar3 + 0x68;
          iVar5 = local_170._4_4_;
          local_170 = lVar8;
          do {
            local_1d0 = *(longlong **)(*local_188 + (longlong)iVar5 * 0x10);
            lVar8 = lVar2;
            if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
              lVar10 = *(longlong *)(lVar3 + 0x70);
              if (*(longlong *)(lVar3 + 0x70) == 0) {
                lVar10 = local_1e0;
              }
              iVar5 = *(int *)(lVar10 + (ulonglong)
                                        (*(int *)(lVar3 + 0x78) - 1U &
                                        (int)local_1d0 + (int)((ulonglong)local_1d0 >> 0x20) * 0x17)
                                        * 4);
              if (iVar5 != -1) {
                do {
                  lVar8 = local_1e8;
                  if (*(longlong **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar5 * 0x10) ==
                      local_1d0) break;
                  iVar5 = *(int *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar3 + 0x30) + 8);
                  lVar8 = lVar2;
                } while (iVar5 != -1);
              }
            }
            FUN_1403458a2(lVar8,&local_1a8,&local_1d0,0);
            local_170 = CONCAT44(local_170._4_4_,(uint)local_170 & ~uStack_180._4_4_);
            FUN_1449c0562(&uStack_180);
            iVar5 = local_170._4_4_;
            lVar8 = local_170;
          } while (local_188 != plVar7 || (local_178 != uVar12 || local_170._4_4_ != iVar11));
        }
      }
      else {
        lVar8 = local_170;
        if (*(int *)(param_1 + 0x5c) == 2) {
          local_168 = 0;
          iVar11 = 0;
          local_160 = 0;
          local_188 = (longlong *)0x0;
          uStack_180 = (longlong *)0x0;
          local_15c = 0xffffffff00000080;
          local_154 = 0;
          local_148 = (undefined1 *)0x0;
          local_140 = 0;
          plVar1 = (longlong *)(lVar3 + 0x30);
          lVar8 = lVar3 + 0x40;
          local_1a8 = 0x100000000;
          local_198._0_4_ = 0xffffffff;
          local_198._4_4_ = 0;
          local_190 = 0;
          local_1a0 = lVar8;
          if (*(int *)(lVar3 + 0x58) != 0) {
            FUN_1449c0562(&local_1a8);
            iVar11 = *(int *)(lVar3 + 0x58);
          }
          local_1b8._0_4_ = (uint)local_198;
          local_1b8._4_4_ = local_198._4_4_;
          local_1b0 = local_190;
          local_1ac = local_18c;
          local_1c8 = local_1a8;
          local_1c0 = local_1a0;
          local_1d0 = plVar1;
          if ((local_198._4_4_ != iVar11) || (local_1a0 != lVar8)) {
            do {
              uVar12 = *(ulonglong *)(*local_1d0 + (longlong)local_1b8._4_4_ * 0x10);
              local_1a8 = uVar12 >> 0x20 | uVar12 << 0x20;
              FUN_140db0a94(&local_188,local_1d4,&local_1a8,0);
              local_1b8._0_4_ = (uint)local_1b8 & ~local_1c8._4_4_;
              FUN_1449c0562(&local_1c8);
            } while (local_1d0 != plVar1 || (local_1c0 != lVar8 || local_1b8._4_4_ != iVar11));
          }
          lVar3 = param_1 + 0x170;
          local_1a8 = 0x100000000;
          local_198 = 0xffffffff;
          local_190 = 0;
          iVar11 = 0;
          local_1a0 = lVar3;
          if (*(int *)(param_1 + 0x188) != 0) {
            FUN_1449c0562(&local_1a8);
            iVar11 = *(int *)(param_1 + 0x188);
          }
          local_1b8 = local_198;
          uVar12 = local_1b8;
          local_1b0 = local_190;
          local_1ac = local_18c;
          local_1c8 = local_1a8;
          local_1c0 = local_1a0;
          local_1b8._4_4_ = (int)(local_198 >> 0x20);
          local_1d0 = plVar7;
          if ((local_1b8._4_4_ != iVar11) || (local_1a0 != lVar3)) {
            iVar5 = local_1b8._4_4_;
            local_1b8 = uVar12;
            do {
              local_1a8 = *(ulonglong *)(*local_1d0 + (longlong)iVar5 * 0x10);
              lVar8 = lVar2;
              if ((int)uStack_180 != local_154) {
                puVar9 = local_148;
                if (local_148 == (undefined1 *)0x0) {
                  puVar9 = local_150;
                }
                uVar6 = (uint)(local_1a8 >> 0x20);
                iVar5 = *(int *)(puVar9 + (ulonglong)(local_140 - 1U & uVar6) * 4);
                while ((lVar8 = lVar2, iVar5 != -1 &&
                       (lVar8 = local_1e8,
                       *(uint *)((longlong)local_188 + (longlong)iVar5 * 0xc) != uVar6))) {
                  iVar5 = *(int *)((longlong)local_188 + (longlong)iVar5 * 0xc + 4);
                }
              }
              FUN_1403458a2(lVar8,local_1d4,&local_1a8,0);
              local_1b8 = CONCAT44(local_1b8._4_4_,(uint)local_1b8 & ~local_1c8._4_4_);
              FUN_1449c0562(&local_1c8);
              iVar5 = local_1b8._4_4_;
              uVar12 = local_1b8;
            } while (local_1d0 != plVar7 || (local_1c0 != lVar3 || local_1b8._4_4_ != iVar11));
          }
          local_1b8 = uVar12;
          local_140 = 0;
          if (local_148 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1401bc218(&local_188);
          lVar8 = local_170;
        }
      }
      local_170 = lVar8;
      FUN_14852adfa(param_1 + 0x260);
      FUN_14852adfa(param_1 + 0x290);
      *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) | 4;
      local_188 = (longlong *)(param_1 + 0x308);
      uStack_180._0_4_ = 3;
      FUN_14852ae68(param_1,&local_188);
      local_188 = (longlong *)(param_1 + 0x350);
      uStack_180 = (longlong *)CONCAT44(uStack_180._4_4_,3);
      FUN_14852ae68(param_1,&local_188);
    }
    uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                      *(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194));
    local_d0 = 0;
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    FUN_140345f8a(local_118);
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852ad72 FUN_14852ad72 body=135 status=ok
// SIG undefined FUN_14852ad72(void)

undefined8 * FUN_14852ad72(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0x400000002;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = &DAT_100000004;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  puVar1 = (undefined4 *)*param_2;
  *(undefined4 *)(param_1 + 3) = *puVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = puVar1[1];
  FUN_14838356c(param_1,param_1 + 3,param_2 + 1,*(undefined1 *)((longlong)param_2 + 0x14));
  return param_1;
}



// FUNCTION 14852adfa FUN_14852adfa body=109 status=ok
// SIG undefined FUN_14852adfa(void)

void FUN_14852adfa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_146bee700(param_1,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14854448c(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_1447a8aa0(param_1 + 0x20,0);
  return;
}



// FUNCTION 14852ae68 FUN_14852ae68 body=93 status=ok
// SIG undefined FUN_14852ae68(void)

void FUN_14852ae68(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1484e1924(*(longlong *)(param_1 + 0x140),*param_2 + 0x10,1);
    FUN_1484e1ad4(*(undefined8 *)(param_1 + 0x140),*param_2,1);
    FUN_1484e1c88(*(undefined8 *)(param_1 + 0x140),*param_2 + 0x20,1);
    return;
  }
  return;
}



// FUNCTION 14852aecc FUN_14852aecc body=237 status=ok
// SIG undefined FUN_14852aecc(void)

bool FUN_14852aecc(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *param_2 = 1.79769313486232e+308;
  param_2[1] = 1.79769313486232e+308;
  param_2[2] = 1.79769313486232e+308;
  param_2[3] = -1.79769313486232e+308;
  param_2[4] = -1.79769313486232e+308;
  param_2[5] = -1.79769313486232e+308;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x80);
    plVar5 = plVar6 + (longlong)*(int *)(param_1 + 0x88) * 2;
    do {
      lVar3 = *plVar6;
      plVar4 = (longlong *)plVar6[1];
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x90))
                  (*(longlong **)(lVar3 + 0x20),lVar3 + 0x28,param_2,1);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x90))
                  (*(longlong **)(lVar3 + 0x20),lVar3 + 0x28,param_2,1);
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
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar5);
    if ((*param_2 < param_2[3] || *param_2 == param_2[3]) &&
       (param_2[1] < param_2[4] || param_2[1] == param_2[4])) {
      return param_2[2] < param_2[5] || param_2[2] == param_2[5];
    }
  }
  return false;
}



// FUNCTION 14852afba FUN_14852afba body=198 status=ok
// SIG undefined FUN_14852afba(void)

void FUN_14852afba(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  
  param_2[2] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar5;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0x3ff0000000000000;
  cVar6 = (**(code **)(*param_1 + 0x370))();
  if (cVar6 != '\0') {
    lVar3 = *(longlong *)param_1[0x10];
    plVar4 = (longlong *)((longlong *)param_1[0x10])[1];
    if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014852b07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x80))
                (*(longlong **)(lVar3 + 0x20),lVar3 + 0x28,param_2,1);
      return;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x80))
              (*(longlong **)(lVar3 + 0x20),lVar3 + 0x28,param_2,1);
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
                    /* WARNING: Could not recover jumptable at 0x00014852b053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14852b080 FUN_14852b080 body=192 status=ok
// SIG undefined FUN_14852b080(void)

void FUN_14852b080(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  
  param_2[2] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar5;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0x3ff0000000000000;
  cVar6 = (**(code **)(*param_1 + 0x370))();
  if (cVar6 != '\0') {
    lVar3 = *(longlong *)param_1[0x10];
    plVar4 = (longlong *)((longlong *)param_1[0x10])[1];
    if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014852b13d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x88))
                (*(longlong **)(lVar3 + 0x20),lVar3 + 0x28,param_2);
      return;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x88))
              (*(longlong **)(lVar3 + 0x20),lVar3 + 0x28,param_2);
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
                    /* WARNING: Could not recover jumptable at 0x00014852b116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14852b140 FUN_14852b140 body=182 status=ok
// SIG undefined FUN_14852b140(void)

ulonglong FUN_14852b140(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  longlong *plVar7;
  longlong *plVar8;
  
  cVar5 = (**(code **)(*param_1 + 0x370))();
  if ((cVar5 == '\0') || ((longlong)(int)param_1[0x11] == 0)) {
    uVar6 = 0;
  }
  else {
    plVar8 = (longlong *)param_1[0x10];
    plVar7 = plVar8 + (longlong)(int)param_1[0x11] * 2;
    do {
      lVar3 = *plVar8;
      plVar4 = (longlong *)plVar8[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      cVar5 = FUN_14852a008(lVar3 + 8,param_2);
      if (cVar5 != '\0') {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(int *)(lVar3 + 0x38) == *(int *)(lVar3 + 100))
        ;
      }
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
      if (cVar5 != '\0') {
        uVar6 = unaff_RBP & 0xffffffff;
        break;
      }
      plVar8 = plVar8 + 2;
      uVar6 = 0;
    } while (plVar8 != plVar7);
  }
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 14852b1f6 FUN_14852b1f6 body=220 status=ok
// SIG undefined FUN_14852b1f6(void)

ulonglong FUN_14852b1f6(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_41;
  
  cVar5 = (**(code **)(*param_1 + 0x370))();
  if ((cVar5 == '\0') || ((longlong)(int)param_1[0x11] == 0)) {
    uVar6 = 0;
  }
  else {
    plVar7 = (longlong *)param_1[0x10];
    plVar8 = plVar7 + (longlong)(int)param_1[0x11] * 2;
    do {
      lVar3 = *plVar7;
      plVar4 = (longlong *)plVar7[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      uVar6 = FUN_14852a008(lVar3 + 8,param_2);
      cVar5 = (char)uVar6;
      if (cVar5 != '\0') {
        *param_3 = *(undefined8 *)(lVar3 + 0x28);
        FUN_147371fc4(param_3 + 1,lVar3 + 0x30);
        uVar6 = (ulonglong)*(uint *)(lVar3 + 0x38);
        local_41 = *(uint *)(lVar3 + 0x38) != *(uint *)(lVar3 + 100);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          uVar6 = (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (cVar5 != '\0') {
        uVar6 = CONCAT71((int7)(uVar6 >> 8),local_41);
        break;
      }
      plVar7 = plVar7 + 2;
      uVar6 = 0;
    } while (plVar7 != plVar8);
  }
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 14852b2d2 FUN_14852b2d2 body=314 status=ok
// SIG undefined FUN_14852b2d2(void)

undefined8 FUN_14852b2d2(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  
  cVar3 = (**(code **)(*param_1 + 0x3a8))();
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*param_1 + 0x370))(param_1), cVar3 != '\0')) {
    if ((longlong)(int)param_1[0x11] != 0) {
      plVar8 = (longlong *)param_1[0x10];
      plVar7 = plVar8 + (longlong)(int)param_1[0x11] * 2;
      bVar6 = false;
      do {
        lVar10 = *plVar8;
        plVar2 = (longlong *)plVar8[1];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        plVar5 = *(longlong **)(lVar10 + 0x20);
        lVar10 = lVar10 + 0x28;
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0xb0))(plVar5,lVar10);
        if (plVar5 == (longlong *)0x0) {
          iVar9 = (int)param_1[9];
          uVar4 = iVar9 + 1;
          *(uint *)(param_1 + 9) = uVar4;
        }
        else {
          (**(code **)(*plVar5 + 0x10))(plVar5,lVar10);
          iVar9 = (int)param_1[9];
          uVar4 = iVar9 + 1;
          *(uint *)(param_1 + 9) = uVar4;
          bVar6 = true;
        }
        if (*(uint *)((longlong)param_1 + 0x4c) < uVar4) {
          FUN_14854c538(param_1 + 8,iVar9);
        }
        *(longlong **)(param_1[8] + (longlong)iVar9 * 8) = plVar5;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar2 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar7);
      if (bVar6) {
        return 1;
      }
    }
    if (*(int *)((longlong)param_1 + 0x4c) < 0) {
      *(undefined4 *)(param_1 + 9) = 0;
      FUN_14854c5be(param_1 + 8);
    }
    else {
      *(undefined4 *)(param_1 + 9) = 0;
    }
  }
  return 0;
}



// FUNCTION 14852b40c FUN_14852b40c body=156 status=ok
// SIG undefined FUN_14852b40c(void)

void FUN_14852b40c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*param_1 + 0x3a8))();
  if (cVar2 != '\0') {
    iVar3 = (int)param_1[0x11];
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(param_1[8] + lVar4 * 8);
        if (plVar1 != (longlong *)0x0) {
          local_38 = *param_2;
          local_30 = param_2[1];
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_38);
          iVar3 = (int)param_1[0x11];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852b4aa FUN_14852b4aa body=347 status=ok
// SIG undefined FUN_14852b4aa(void)

void FUN_14852b4aa(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_1 + 0x3a8))();
  if (cVar2 != '\0') {
    plVar1 = (longlong *)param_1[0xd];
    local_40 = L"EndTransformation";
    local_38 = 0x11;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometrySelectionManager";
    local_38 = 0x19;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"Transform Selection");
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
    iVar3 = (int)param_1[0x11];
    if (0 < iVar3) {
      lVar5 = 0;
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(param_1[8] + lVar4 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1,param_1[0xd]);
          plVar1 = *(longlong **)(*(longlong *)(param_1[0x10] + lVar5) + 0x20);
          (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(param_1[8] + lVar4 * 8));
          iVar3 = (int)param_1[0x11];
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar4 < iVar3);
    }
    if (*(int *)((longlong)param_1 + 0x4c) < 0) {
      *(undefined4 *)(param_1 + 9) = 0;
      FUN_14854c5be(param_1 + 8);
    }
    else {
      *(undefined4 *)(param_1 + 9) = 0;
    }
    (**(code **)(*(longlong *)param_1[0xd] + 0x20))();
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852b606 FUN_14852b606 body=290 status=ok
// SIG undefined FUN_14852b606(void)

void FUN_14852b606(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  int local_40;
  int local_3c;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 8))(param_2,&local_40);
    iVar3 = (int)param_1[0x11];
    if (0 < iVar3) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        piVar1 = *(int **)(param_1[0x10] + lVar4);
        if ((*piVar1 == local_40) && (piVar1[1] == local_3c)) {
          cVar2 = FUN_1401246e4(piVar1 + 2,local_38);
          if (cVar2 != '\0') {
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            (**(code **)(*param_2 + 0x10))
                      (param_2,*(undefined8 *)(*(longlong *)(param_1[0x10] + lVar4) + 0x80),
                       &local_68);
            if ((int)uStack_50 != 0 || (int)uStack_60 != 0) {
              *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 5;
              FUN_1447f69b6(param_1 + 5);
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            break;
          }
          iVar3 = (int)param_1[0x11];
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar5 < iVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852b72a FUN_14852b72a body=290 status=ok
// SIG undefined FUN_14852b72a(void)

void FUN_14852b72a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  int local_40;
  int local_3c;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 8))(param_2,&local_40);
    iVar3 = (int)param_1[0x11];
    if (0 < iVar3) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        piVar1 = *(int **)(param_1[0x10] + lVar4);
        if ((*piVar1 == local_40) && (piVar1[1] == local_3c)) {
          cVar2 = FUN_1401246e4(piVar1 + 2,local_38);
          if (cVar2 != '\0') {
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            (**(code **)(*param_2 + 0x18))
                      (param_2,*(undefined8 *)(*(longlong *)(param_1[0x10] + lVar4) + 0x80),
                       &local_68);
            if ((int)uStack_50 != 0 || (int)uStack_60 != 0) {
              *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 5;
              FUN_1447f69b6(param_1 + 5);
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if (local_68 != 0) {
              FUN_1400020a8();
            }
            break;
          }
          iVar3 = (int)param_1[0x11];
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar5 < iVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852b84e FUN_14852b84e body=122 status=ok
// SIG undefined FUN_14852b84e(void)

void FUN_14852b84e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14854c634(param_1,iVar1);
    }
    FUN_14854c61e((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14854c6c8(param_1,param_2,iVar1 - param_2);
    FUN_14854c72e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14852b8ca FUN_14852b8ca body=380 status=ok
// SIG undefined FUN_14852b8ca(void)

void FUN_14852b8ca(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 *local_a0;
  longlong local_98;
  undefined1 local_90 [48];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar5 = *(byte *)(param_1 + 0x498);
  if ((bVar5 & 1) != 0) {
    if (0 < *(int *)(param_1 + 0x88)) {
      local_98 = param_1 + 0x398;
      local_a0 = (undefined4 *)(param_1 + 0x3c8);
      lVar8 = 8;
      lVar6 = 0;
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + -8 + lVar8);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x80) + lVar8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        lVar9 = *(longlong *)(param_1 + 0x148) + lVar6;
        FUN_14852adfa(lVar9);
        plVar4 = *(longlong **)(lVar2 + 0x20);
        local_a8 = 1;
        (**(code **)(*plVar4 + 0x98))(plVar4,lVar2 + 0x28,lVar9,1);
        FUN_145de6de6(local_90,local_98);
        local_60 = *local_a0;
        uStack_5c = local_a0[1];
        uStack_58 = local_a0[2];
        uStack_54 = local_a0[3];
        local_50 = *(longlong *)(param_1 + 0x3d8);
        if ((local_50 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148528272(param_1,lVar9,local_90);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x30;
        lVar8 = lVar8 + 0x10;
      } while (lVar7 < *(int *)(param_1 + 0x88));
      bVar5 = *(byte *)(param_1 + 0x498);
    }
    *(byte *)(param_1 + 0x498) = bVar5 & 0xfe;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852ba48 FUN_14852ba48 body=498 status=ok
// SIG undefined FUN_14852ba48(void)

void FUN_14852ba48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 **local_d0;
  undefined4 *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined1 local_90 [48];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar6 = *(byte *)(param_1 + 0x498);
  if (((bVar6 & 2) != 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    if (0 < *(int *)(param_1 + 0x88)) {
      local_c0 = param_1 + 0x2c0;
      local_c8 = (undefined4 *)(param_1 + 0x2f0);
      lVar9 = 8;
      lVar7 = 0;
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + -8 + lVar9);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x80) + lVar9);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        lVar10 = *(longlong *)(param_1 + 0x488) + lVar7;
        FUN_14852adfa(lVar10);
        plVar5 = *(longlong **)(lVar3 + 0x20);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_98 = &local_b8;
        local_a0 = &LAB_143ba4960;
        local_d8 = *(int *)(param_1 + 0x5c) == 2;
        local_d0 = &local_a0;
        local_b8 = lVar3;
        local_b0 = plVar4;
        local_a8 = param_1;
        (**(code **)(*plVar5 + 0xa8))(plVar5,lVar10,1,0);
        plVar5 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        FUN_145de6de6(local_90,local_c0);
        local_60 = *local_c8;
        uStack_5c = local_c8[1];
        uStack_58 = local_c8[2];
        uStack_54 = local_c8[3];
        local_50 = *(longlong *)(param_1 + 0x300);
        if ((local_50 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148528272(param_1,lVar10,local_90);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x30;
        lVar9 = lVar9 + 0x10;
      } while (lVar8 < *(int *)(param_1 + 0x88));
      bVar6 = *(byte *)(param_1 + 0x498);
    }
    *(byte *)(param_1 + 0x498) = bVar6 & 0xfd;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852bc3c FUN_14852bc3c body=434 status=ok
// SIG undefined FUN_14852bc3c(void)

void FUN_14852bc3c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  undefined1 auStack_f8 [32];
  byte local_d8;
  undefined1 local_c8 [48];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined1 local_80 [48];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(byte *)(param_1 + 0x498) & 4) != 0) && (*(int *)(param_1 + 0x88) != 0)) {
    lVar2 = **(longlong **)(param_1 + 0x80);
    plVar3 = (longlong *)(*(longlong **)(param_1 + 0x80))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
      bVar5 = *DAT_14cb4d7f0 == 0 ^ 3;
      plVar4 = *(longlong **)(lVar2 + 0x20);
      local_d8 = bVar5;
      (**(code **)(*plVar4 + 0x98))(plVar4,param_1 + 0x1b0,param_1 + 0x260,1);
      plVar4 = *(longlong **)(lVar2 + 0x20);
      local_d8 = bVar5;
      (**(code **)(*plVar4 + 0x98))(plVar4,param_1 + 0x208,param_1 + 0x290,1);
      FUN_145de6de6(local_80,param_1 + 0x308);
      local_50 = *(undefined4 *)(param_1 + 0x338);
      uStack_4c = *(undefined4 *)(param_1 + 0x33c);
      uStack_48 = *(undefined4 *)(param_1 + 0x340);
      uStack_44 = *(undefined4 *)(param_1 + 0x344);
      local_40 = *(longlong *)(param_1 + 0x348);
      if ((local_40 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_148528272(param_1,param_1 + 0x260,local_80);
      FUN_145de6de6(local_c8,param_1 + 0x350);
      local_98 = *(undefined4 *)(param_1 + 0x380);
      uStack_94 = *(undefined4 *)(param_1 + 900);
      uStack_90 = *(undefined4 *)(param_1 + 0x388);
      uStack_8c = *(undefined4 *)(param_1 + 0x38c);
      local_88 = *(longlong *)(param_1 + 0x390);
      if ((local_88 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_148528272(param_1,param_1 + 0x290,local_c8);
    }
    *(byte *)(param_1 + 0x498) = *(byte *)(param_1 + 0x498) & 0xfb;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852bdf0 FUN_14852bdf0 body=151 status=ok
// SIG undefined FUN_14852bdf0(void)

void FUN_14852bdf0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x3a8))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1[0xc] + 0x68) + 0x300))();
    if (cVar2 == '\0') {
      FUN_14852b8ca(param_1);
      FUN_14852ba48(param_1);
      FUN_14852bc3c(param_1);
      return;
    }
    FUN_148528a66();
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 2;
  }
  else {
    iVar3 = (int)param_1[0x11];
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(param_1[8] + lVar4 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
          iVar3 = (int)param_1[0x11];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  return;
}



// FUNCTION 14852be87 FUN_14852be87 body=1803 status=ok
// SIG undefined FUN_14852be87(void)

void FUN_14852be87(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  longlong **param_5,longlong param_6,longlong param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong **pplVar8;
  float fVar9;
  undefined1 auStack_2f8 [32];
  int local_2d8;
  longlong **local_2d0 [2];
  longlong **local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  code *local_2a8;
  undefined8 ***local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  code *local_288;
  longlong **local_280;
  code *local_278;
  longlong **local_270;
  code *local_268;
  longlong **local_260;
  code *local_258;
  longlong **local_250;
  code *local_248;
  longlong **local_240;
  code *local_238;
  longlong **local_230;
  code *local_228;
  longlong **local_220;
  undefined1 local_213;
  undefined1 local_212;
  undefined1 local_211;
  longlong local_210;
  longlong *local_208;
  undefined8 *puStack_200;
  longlong local_1f8;
  undefined8 ***local_1f0;
  undefined1 *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  longlong local_1c8;
  undefined4 local_1c0;
  longlong *local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  ulonglong local_48;
  
  lVar7 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_210 = param_2;
  if (*(char *)(param_2 + 0xab) == '\x01') {
    cVar1 = *(char *)(param_2 + 0xaa);
    if (cVar1 == '\x04') {
      iVar2 = *(int *)(param_4 + 2);
      iVar3 = *(int *)((longlong)param_4 + 0x3c);
      local_1b8 = &local_210;
      local_270 = &local_1b8;
      local_1a0 = &local_211;
      local_198 = &local_212;
      local_190 = &stack0x00000040;
      local_278 = FUN_143ba53b6;
      local_1b0 = param_4;
      local_1a8 = param_3;
      FUN_140056680(&local_208,L"FaceSelection");
      local_2d8 = iVar2 - iVar3;
      FUN_1484e2b86(param_1,&local_208,1,&local_278);
    }
    else if (cVar1 == '\x02') {
      iVar2 = *(int *)(param_4 + 2);
      iVar3 = *(int *)((longlong)param_4 + 0x3c);
      local_1b8 = &local_210;
      local_260 = &local_1b8;
      local_1a0 = &local_211;
      local_198 = &local_213;
      local_190 = &stack0x00000040;
      local_268 = FUN_143ba5190;
      local_1b0 = param_4;
      local_1a8 = param_3;
      FUN_140056680(&local_208,L"EdgeSelection");
      local_2d8 = iVar2 - iVar3;
      FUN_1484e2e98(param_1,&local_208,1,&local_268);
    }
    else {
      if (cVar1 != '\x01') goto LAB_14852bede;
      iVar2 = *(int *)(param_4 + 2);
      iVar3 = *(int *)((longlong)param_4 + 0x3c);
      local_1b8 = &local_210;
      local_250 = &local_1b8;
      local_1a0 = &local_212;
      local_198 = &local_213;
      local_190 = &stack0x00000040;
      local_258 = FUN_143ba501e;
      local_1b0 = param_4;
      local_1a8 = param_3;
      FUN_140056680(&local_208,L"VertexSelection");
      local_2d8 = iVar2 - iVar3;
      FUN_1484e2fd0(param_1,&local_208,1,&local_258);
    }
    if (local_208 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14852bede;
  }
  local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,(undefined4)local_1e0);
  uStack_1d8 = (undefined1 *)CONCAT44(uStack_1d8._4_4_,(undefined4)uStack_1d8);
  if (*(char *)(param_2 + 0xab) != '\x02') goto LAB_14852bede;
  pplVar8 = param_5;
  if (param_5 == (longlong **)0x0) {
    pplVar8 = &local_1b8;
  }
  FUN_1482aa55c(&local_1b8,param_3,param_5 == (longlong **)0x0);
  cVar1 = *(char *)(local_210 + 0xaa);
  local_2d0[0] = pplVar8;
  if (cVar1 == '\x04') {
    iVar2 = *(int *)(param_4 + 2);
    iVar3 = *(int *)((longlong)param_4 + 0x3c);
    local_208 = &local_210;
    local_240 = &local_208;
    local_1f0 = local_2d0;
    local_1e8 = &local_211;
    local_1e0 = &local_212;
    uStack_1d8 = &stack0x00000040;
    local_248 = FUN_143ba4d22;
    puStack_200 = param_4;
    local_1f8 = param_3;
    FUN_140056680(&local_2c0,L"FaceSelection");
    local_2d8 = iVar2 - iVar3;
    FUN_1484e2b86(param_1,&local_2c0,1,&local_248);
LAB_14852c574:
    if (local_2c0 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (cVar1 == '\x02') {
      local_208 = &local_210;
      local_230 = &local_208;
      local_1f0 = local_2d0;
      local_1e8 = &local_211;
      local_1e0 = &local_213;
      uStack_1d8 = &stack0x00000040;
      local_238 = FUN_143ba4aec;
      puStack_200 = param_4;
      local_1f8 = param_3;
      FUN_140056680(&local_2c0,L"EdgeSelection");
      local_2d8 = -1;
      FUN_1484e2e98(param_1,&local_2c0,1,&local_238);
      goto LAB_14852c574;
    }
    if (cVar1 == '\x01') {
      local_208 = &local_210;
      local_220 = &local_208;
      local_1f0 = local_2d0;
      local_1e8 = &local_212;
      local_1e0 = &local_213;
      uStack_1d8 = &stack0x00000040;
      local_228 = FUN_143ba4968;
      puStack_200 = param_4;
      local_1f8 = param_3;
      FUN_140056680(&local_2c0,L"VertexSelection");
      local_2d8 = -1;
      FUN_1484e2fd0(param_1,&local_2c0,1,&local_228);
      goto LAB_14852c574;
    }
  }
  FUN_145aba0b4(&local_1b8);
LAB_14852bede:
  lVar4 = param_7;
  if ((lVar7 != 0) && (*(char *)(local_210 + 0xa9) != '\0')) {
    iVar2 = *(int *)(param_4 + 2);
    iVar3 = *(int *)((longlong)param_4 + 0x3c);
    local_1b8 = &local_210;
    local_280 = &local_1b8;
    local_1b0 = &param_6;
    local_1a0 = &local_212;
    local_198 = &local_213;
    local_190 = &stack0x00000040;
    local_288 = FUN_143ba56a4;
    local_1a8 = param_3;
    FUN_140056680(&local_208,L"EdgeSelectionVertices");
    local_2d8 = iVar2 - iVar3;
    FUN_1484e2fd0(param_1,&local_208,1,&local_288);
    if (local_208 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((lVar4 != 0) && (*(char *)(local_210 + 0xa8) != '\0')) {
    local_1e8 = (undefined1 *)0x0;
    local_1e0._0_4_ = 0;
    local_208 = (longlong *)0x0;
    puStack_200 = (undefined8 *)0x0;
    local_1e0._4_4_ = 0x80;
    uStack_1d8._0_4_ = 0xffffffff;
    uStack_1d8._4_4_ = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    FUN_146c6a7a4(&local_1b8,param_3,lVar4,1);
    puVar5 = local_1b0;
    lVar7 = (longlong)(int)local_1a8;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        local_298 = *(undefined8 *)((longlong)puVar5 + lVar6 + 0x18);
        local_290 = *(undefined4 *)((longlong)puVar5 + lVar6 + 0x20);
        FUN_146bc855c(&local_208,&local_298);
        lVar6 = lVar6 + 0x40;
      } while (lVar7 * 0x40 != lVar6);
    }
    fVar9 = (float)*(int *)(lVar4 + 8);
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    local_2c0 = &local_208;
    local_2a0 = &local_2c0;
    local_2b0 = &local_210;
    local_2a8 = FUN_143ba5816;
    iVar2 = *(int *)(param_3 + 0x1d0);
    iVar3 = *(int *)(param_3 + 0x1d4);
    local_2b8 = param_3;
    FUN_140056680(local_2d0,L"TriangleROIBorder");
    local_2d8 = (int)ROUND(fVar9 + fVar9 + -0.5) >> 1;
    FUN_1484e2e98(param_1,local_2d0,iVar2 * 0x200 + iVar3,&local_2a8);
    if (local_2d0[0] != (longlong **)0x0) {
      FUN_1400020a8();
    }
    FUN_146bc7b3e(&local_1b8);
    local_1c0 = 0;
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_208);
  }
  *(undefined1 *)(local_210 + 0x100) = 0;
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14852c593 FUN_14852c593 body=1167 status=ok
// SIG undefined FUN_14852c593(void)

void FUN_14852c593(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 0x100) == '\x01') {
    cVar1 = *(char *)(param_2 + 0xaa);
    if (cVar1 == '\x01') {
      FUN_140056680(local_30,L"VertexSelection");
      lVar2 = FUN_1484e1064(param_1,local_30);
      if (lVar2 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar2);
        }
        if (*(char *)(param_2 + 0xac) == '\0') {
          bVar6 = false;
        }
        else {
          bVar6 = *(char *)(param_2 + 0xaa) == '\x01';
        }
        FUN_14045627c(lVar2,bVar6,1);
        FUN_1484dedde(lVar2,param_2 + 0xc4);
        FUN_1484deef4(lVar2,*(undefined4 *)(param_2 + 0xb4));
        FUN_1484df016(lVar2,*(undefined4 *)(param_2 + 0xb8));
        puVar3 = (undefined8 *)(param_2 + 0xf8);
        if (*(char *)(param_2 + 0xae) == '\0') {
          puVar3 = (undefined8 *)(param_2 + 0xe0);
        }
        FUN_1484deb96(lVar2,*puVar3);
      }
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      cVar1 = *(char *)(param_2 + 0xaa);
    }
    if (cVar1 == '\x02') {
      FUN_140056680(local_30,L"EdgeSelection");
      lVar2 = FUN_1484e0f44(param_1,local_30);
      if (lVar2 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar2);
        }
        if ((*(char *)(param_2 + 0xac) == '\0') || (*(char *)(param_2 + 0xaa) != '\x02')) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
          if (*(char *)(param_2 + 0xa9) == '\x01') {
            bVar4 = *(byte *)(param_2 + 0xaf) ^ 1;
          }
        }
        FUN_14045627c(lVar2,bVar4,1);
        FUN_1484d0b76(lVar2,param_2 + 0xc0);
        FUN_1484d0932(lVar2,*(undefined4 *)(param_2 + 0xb0));
        FUN_1484d0a54(lVar2,*(undefined4 *)(param_2 + 0xb8));
        puVar3 = (undefined8 *)(param_2 + 0xf0);
        if (*(char *)(param_2 + 0xae) == '\0') {
          puVar3 = (undefined8 *)(param_2 + 0xd8);
        }
        FUN_1484d0608(lVar2,*puVar3);
      }
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      cVar1 = *(char *)(param_2 + 0xaa);
    }
    if (cVar1 == '\x04') {
      FUN_140056680(local_30,L"FaceSelection");
      lVar2 = FUN_1484e1188(param_1,local_30);
      if (lVar2 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar2);
        }
        if (*(char *)(param_2 + 0xac) == '\0') {
          bVar6 = false;
        }
        else {
          bVar6 = *(char *)(param_2 + 0xaa) == '\x04';
        }
        FUN_14045627c(lVar2,bVar6,1);
        FUN_1484e3abc(lVar2,param_2 + 0xbc);
        puVar3 = (undefined8 *)(param_2 + 0xe8);
        if (*(char *)(param_2 + 0xae) == '\0') {
          puVar3 = (undefined8 *)(param_2 + 0xd0);
        }
        FUN_1484e3d4a(lVar2,*puVar3);
      }
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (*(char *)(param_2 + 0xa9) == '\x01') {
      FUN_140056680(local_30,L"EdgeSelectionVertices");
      lVar2 = FUN_1484e1064(param_1,local_30);
      if (lVar2 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar2);
        }
        if ((*(char *)(param_2 + 0xac) == '\0') || (*(char *)(param_2 + 0xaa) != '\x02')) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
          if (*(char *)(param_2 + 0xa9) == '\x01') {
            uVar5 = *(undefined1 *)(param_2 + 0xaf);
          }
        }
        FUN_14045627c(lVar2,uVar5,1);
        FUN_1484dedde(lVar2,param_2 + 0xc0);
        FUN_1484deef4(lVar2,*(undefined4 *)(param_2 + 0xb4));
        FUN_1484df016(lVar2,*(undefined4 *)(param_2 + 0xb8));
        puVar3 = (undefined8 *)(param_2 + 0xf8);
        if (*(char *)(param_2 + 0xae) == '\0') {
          puVar3 = (undefined8 *)(param_2 + 0xe0);
        }
        FUN_1484deb96(lVar2,*puVar3);
      }
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (*(char *)(param_2 + 0xa8) == '\x01') {
      FUN_140056680(local_30,L"TriangleROIBorder");
      lVar2 = FUN_1484e0f44(param_1,local_30);
      if (lVar2 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar2);
        }
        if (*(char *)(param_2 + 0xa8) == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined1 *)(param_2 + 0xad);
        }
        FUN_14045627c(lVar2,uVar5,1);
        FUN_1484d0b76(lVar2,param_2 + 200);
        FUN_1484d0932(lVar2,*(undefined4 *)(param_2 + 0xb0));
        FUN_1484d0a54(lVar2,*(undefined4 *)(param_2 + 0xb8));
        puVar3 = (undefined8 *)(param_2 + 0xf0);
        if (*(char *)(param_2 + 0xae) == '\0') {
          puVar3 = (undefined8 *)(param_2 + 0xd8);
        }
        FUN_1484d0608(lVar2,*puVar3);
      }
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852ca24 FUN_14852ca24 body=249 status=ok
// SIG undefined FUN_14852ca24(void)

void FUN_14852ca24(longlong *param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14852cb1e();
  if (cVar1 != '\0') {
    do {
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar2 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar2 = param_4 + 7;
        }
        iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_4[9] - 1U & local_3c) * 4);
        if (iVar4 != -1) {
          do {
            if (*(uint *)(*param_4 + (longlong)iVar4 * 0xc) == local_3c) goto LAB_14852caf9;
            iVar4 = *(int *)(*param_4 + (longlong)iVar4 * 0xc + 4);
          } while (iVar4 != -1);
        }
      }
      FUN_1447cbafe(param_4,local_40,&local_3c,0);
      lVar3 = (longlong)(int)local_3c * 0x50;
      param_3 = *(int *)(*(longlong *)(*param_1 + 0x70) + lVar3 + 0x48 +
                        (ulonglong)
                        (*(int *)(*(longlong *)(*param_1 + 0x70) + 0x48 + lVar3) == param_3) * 4);
      cVar1 = FUN_14852cb1e(param_1,(longlong)(int)local_3c,param_3);
    } while (cVar1 != '\0');
  }
LAB_14852caf9:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852cb1e FUN_14852cb1e body=338 status=ok
// SIG undefined FUN_14852cb1e(void)

undefined8 FUN_14852cb1e(longlong *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  
  *param_4 = -1;
  lVar9 = *param_1;
  lVar7 = *(longlong *)(lVar9 + 0x50);
  if (*(int *)(lVar7 + 0x10 + (longlong)param_3 * 0x18) == 4) {
    uVar4 = *(undefined8 *)(lVar9 + 0x80);
    uVar6 = FUN_1482abba8(lVar9,param_3);
    cVar5 = FUN_146c0b51e(uVar4,uVar6);
    if (cVar5 == '\0') {
      lVar7 = lVar7 + (longlong)param_3 * 0x18;
      lVar9 = (longlong)*(int *)(lVar7 + 0x10);
      if (lVar9 != 0) {
        piVar10 = (int *)((longlong)param_2 * 0x50 + *(longlong *)(*param_1 + 0x70));
        piVar11 = *(int **)(lVar7 + 8);
        piVar1 = piVar11 + lVar9;
        do {
          if ((*piVar11 != *piVar10) && (*piVar11 != piVar10[1])) {
            lVar7 = FUN_1482abc36(*param_1);
            if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
              plVar8 = *(longlong **)(lVar7 + 0x18);
              plVar2 = plVar8 + (longlong)*(int *)(lVar7 + 0x20) * 5;
              do {
                if ((longlong)(int)plVar8[1] != 0) {
                  lVar7 = 0;
                  do {
                    lVar9 = (longlong)*(int *)(*plVar8 + lVar7) * 0x50;
                    piVar3 = (int *)(*(longlong *)(*param_1 + 0x70) + lVar9);
                    if ((*(int *)(*(longlong *)(*param_1 + 0x70) + 0x48 + lVar9) == param_3) ||
                       (piVar3[0x13] == param_3)) {
                      if ((*piVar3 != *piVar10) &&
                         (((*piVar3 != piVar10[1] && (piVar3[1] != *piVar10)) &&
                          (piVar3[1] != piVar10[1])))) {
                        *param_4 = *(int *)(*plVar8 + lVar7);
                        return 1;
                      }
                    }
                    lVar7 = lVar7 + 4;
                  } while ((longlong)(int)plVar8[1] * 4 != lVar7);
                }
                plVar8 = plVar8 + 5;
              } while (plVar8 != plVar2);
            }
          }
          piVar11 = piVar11 + 1;
        } while (piVar11 != piVar1);
      }
    }
  }
  return 0;
}



// FUNCTION 14852cc70 FUN_14852cc70 body=274 status=ok
// SIG undefined FUN_14852cc70(void)

void FUN_14852cc70(longlong *param_1,undefined4 param_2,int param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1482ac12c(*param_1);
  if ((cVar1 != '\0') && (cVar1 = FUN_14852cd84(param_1,param_2,param_3,&local_44), cVar1 != '\0'))
  {
    do {
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar2 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar2 = param_4 + 7;
        }
        iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_4[9] - 1U & local_44) * 4);
        if (iVar4 != -1) {
          do {
            if (*(uint *)(*param_4 + (longlong)iVar4 * 0xc) == local_44) goto LAB_14852cca4;
            iVar4 = *(int *)(*param_4 + (longlong)iVar4 * 0xc + 4);
          } while (iVar4 != -1);
        }
      }
      FUN_1447cbafe(param_4,local_48,&local_44,0);
      lVar3 = (longlong)(int)local_44 * 0x50;
      param_3 = *(int *)(*(longlong *)(*param_1 + 0x70) + lVar3 + 0x48 +
                        (ulonglong)
                        (*(int *)(*(longlong *)(*param_1 + 0x70) + 0x48 + lVar3) == param_3) * 4);
      cVar1 = FUN_14852cd84(param_1,(longlong)(int)local_44,param_3);
    } while (cVar1 != '\0');
  }
LAB_14852cca4:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14852cd84 FUN_14852cd84 body=218 status=ok
// SIG undefined FUN_14852cd84(void)

ulonglong FUN_14852cd84(undefined8 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_4 = -1;
  cVar3 = FUN_1482ac12c(*param_1);
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1482ac0dc(*param_1,param_3,&local_58);
    lVar2 = local_58;
    lVar6 = (longlong)(int)uStack_50;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        iVar1 = *(int *)(lVar2 + lVar5);
        cVar3 = FUN_1482ac12c(*param_1,iVar1);
        if ((iVar1 != param_2) && (cVar3 != '\0')) {
          if (*param_4 != -1) {
            *param_4 = -1;
            uVar4 = 0;
            goto LAB_14852ce1a;
          }
          *param_4 = iVar1;
        }
        lVar5 = lVar5 + 4;
      } while (lVar6 * 4 != lVar5);
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_4 >> 8),*param_4 != -1);
LAB_14852ce1a:
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852ce60 FUN_14852ce60 body=248 status=ok
// SIG undefined FUN_14852ce60(void)

void FUN_14852ce60(longlong *param_1,longlong param_2,int param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != -1) {
    while (cVar1 = FUN_14852cf5a(param_1,param_2,param_3,&local_3c), cVar1 != '\0') {
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar2 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar2 = param_4 + 7;
        }
        iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_4[9] - 1U & local_3c) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(*param_4 + (longlong)iVar3 * 0xc) == local_3c) goto LAB_14852cf34;
            iVar3 = *(int *)(*param_4 + (longlong)iVar3 * 0xc + 4);
          } while (iVar3 != -1);
        }
      }
      FUN_1447cbafe(param_4,local_40,&local_3c,0);
      param_2 = (longlong)(int)local_3c;
      param_3 = *(int *)(*(longlong *)(*param_1 + 0x70) + param_2 * 0x50 +
                        (ulonglong)
                        (*(int *)(*(longlong *)(*param_1 + 0x70) + param_2 * 0x50) == param_3) * 4);
      if (param_3 == -1) break;
    }
  }
LAB_14852cf34:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14852cf5a FUN_14852cf5a body=157 status=ok
// SIG undefined FUN_14852cf5a(void)

undefined8 FUN_14852cf5a(undefined8 *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar4 = FUN_1482abc36(*param_1);
  if ((lVar4 != 0) && (0 < (longlong)*(int *)(lVar4 + 0x20))) {
    lVar5 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar5 * 0x28);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar5 * 0x28);
        iVar7 = 2;
        lVar6 = 0;
        do {
          if (*(int *)(lVar3 + lVar6) == param_2) {
            if (iVar7 != 1) {
              if (iVar1 != 4) {
                return 0;
              }
              uVar2 = *(undefined4 *)(lVar3 + (longlong)(iVar7 % 4) * 4);
              *param_4 = uVar2;
              return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
            }
            break;
          }
          iVar7 = iVar7 + 1;
          lVar6 = lVar6 + 4;
        } while ((longlong)iVar1 * 4 - lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(lVar4 + 0x20));
  }
  return 0;
}



// FUNCTION 14852cff8 FUN_14852cff8 body=569 status=ok
// SIG undefined FUN_14852cff8(void)

undefined4 FUN_14852cff8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_118 [40];
  int local_f0;
  int local_ec;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_2 + 0xa0);
  local_ec = *(int *)(param_2 + 0xa8);
  local_f0 = *(int *)(param_2 + 0xd4);
  local_78 = 0;
  iVar6 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_145c3f772(&local_98,plVar1);
  lVar2 = param_2 + 0xb0;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_b0 = lVar2;
  if (*(int *)(param_2 + 200) != 0) {
    FUN_1449c0562(&local_b8);
    iVar6 = *(int *)(param_2 + 200);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e8 = param_2;
  local_e0 = plVar1;
  if ((iStack_a4 != iVar6) || (local_b0 != lVar2)) {
    plVar7 = (longlong *)(param_1 + 0x178);
    do {
      iVar3 = *(int *)(*local_e0 + (longlong)iStack_c4 * 0xc);
      uVar4 = *(ulonglong *)(*(longlong *)(*plVar7 + 0x70) + 0x48 + (longlong)iVar3 * 0x50);
      if ((int)uVar4 != -1) {
        FUN_14852ca24(plVar7,iVar3,uVar4,&local_98);
        FUN_14852ca24(plVar7,iVar3,uVar4 >> 0x20,&local_98);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != plVar1 || (local_d0 != lVar2 || iStack_c4 != iVar6));
  }
  FUN_145be27ca(plVar1,&local_98);
  iVar6 = *(int *)(local_e8 + 0xa8);
  iVar3 = *(int *)(local_e8 + 0xd4);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  iVar5 = local_ec - local_f0;
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar5 < iVar6 - iVar3);
}



// FUNCTION 14852d232 FUN_14852d232 body=590 status=ok
// SIG undefined FUN_14852d232(void)

undefined4 FUN_14852d232(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_118 [40];
  int local_f0;
  int local_ec;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_2 + 0xa0);
  local_ec = *(int *)(param_2 + 0xa8);
  local_f0 = *(int *)(param_2 + 0xd4);
  local_78 = 0;
  iVar8 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_145c3f772(&local_98,plVar1);
  lVar2 = param_2 + 0xb0;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_b0 = lVar2;
  if (*(int *)(param_2 + 200) != 0) {
    FUN_1449c0562(&local_b8);
    iVar8 = *(int *)(param_2 + 200);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e8 = param_2;
  local_e0 = plVar1;
  if ((iStack_a4 != iVar8) || (local_b0 != lVar2)) {
    plVar7 = (longlong *)(param_1 + 0x178);
    do {
      iVar3 = *(int *)(*local_e0 + (longlong)iStack_c4 * 0xc);
      cVar5 = FUN_1482ac12c(*plVar7,iVar3);
      if ((cVar5 != '\0') &&
         (uVar4 = *(ulonglong *)(*(longlong *)(*plVar7 + 0x70) + 0x48 + (longlong)iVar3 * 0x50),
         (int)uVar4 != -1)) {
        FUN_14852cc70(plVar7,iVar3,uVar4,&local_98);
        FUN_14852cc70(plVar7,iVar3,uVar4 >> 0x20,&local_98);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != plVar1 || (local_d0 != lVar2 || iStack_c4 != iVar8));
  }
  FUN_145be27ca(plVar1,&local_98);
  iVar8 = *(int *)(local_e8 + 0xa8);
  iVar3 = *(int *)(local_e8 + 0xd4);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  iVar6 = local_ec - local_f0;
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar6 < iVar8 - iVar3);
}



// FUNCTION 14852d482 FUN_14852d482 body=568 status=ok
// SIG undefined FUN_14852d482(void)

undefined4 FUN_14852d482(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_118 [40];
  int local_f0;
  int local_ec;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_2 + 0xa0);
  local_ec = *(int *)(param_2 + 0xa8);
  local_f0 = *(int *)(param_2 + 0xd4);
  local_78 = 0;
  iVar6 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_145c3f772(&local_98,plVar1);
  lVar2 = param_2 + 0xb0;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_b0 = lVar2;
  if (*(int *)(param_2 + 200) != 0) {
    FUN_1449c0562(&local_b8);
    iVar6 = *(int *)(param_2 + 200);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e8 = param_2;
  local_e0 = plVar1;
  if ((iStack_a4 != iVar6) || (local_b0 != lVar2)) {
    plVar7 = (longlong *)(param_1 + 0x178);
    do {
      iVar3 = *(int *)(*local_e0 + (longlong)iStack_c4 * 0xc);
      uVar4 = *(ulonglong *)(*(longlong *)(*plVar7 + 0x70) + (longlong)iVar3 * 0x50);
      if ((int)uVar4 != -1) {
        FUN_14852ce60(plVar7,iVar3,uVar4,&local_98);
        FUN_14852ce60(plVar7,iVar3,uVar4 >> 0x20,&local_98);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != plVar1 || (local_d0 != lVar2 || iStack_c4 != iVar6));
  }
  FUN_145be27ca(plVar1,&local_98);
  iVar6 = *(int *)(local_e8 + 0xa8);
  iVar3 = *(int *)(local_e8 + 0xd4);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  iVar5 = local_ec - local_f0;
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar5 < iVar6 - iVar3);
}



// FUNCTION 14852d6bc FUN_14852d6bc body=114 status=ok
// SIG undefined FUN_14852d6bc(void)

undefined8 * FUN_14852d6bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_146014160();
  *param_1 = &PTR_FUN_14af16f50;
  param_1[0xb] = param_2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = &PTR_FUN_14af17ed0;
  puVar2[1] = param_3;
  puVar1 = (undefined8 *)param_1[0xc];
  param_1[0xc] = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x2f] = param_3;
  *(undefined2 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 14852d72e FUN_14852d72e body=91 status=ok
// SIG undefined FUN_14852d72e(void)

void FUN_14852d72e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = &PTR_FUN_14af17ed0;
  puVar2[1] = param_3;
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x60) = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x178) = param_3;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 14852d78a FUN_14852d78a body=2769 status=ok
// SIG undefined FUN_14852d78a(void)

void FUN_14852d78a(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,int param_5)

{
  code *pcVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  uint local_180;
  undefined1 local_178;
  longlong local_168;
  int local_15c;
  longlong local_158;
  longlong *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [12];
  undefined4 uStack_10c;
  double local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  code *local_f8;
  undefined4 local_f0;
  uint uStack_ec;
  longlong *plStack_e8;
  undefined8 local_e0;
  longlong alStack_d8 [5];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_128 = (undefined4)param_3[2];
  uStack_124 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_120 = (undefined4)param_3[3];
  uStack_11c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar4 = *(uint *)(param_3 + 4);
  pcVar1 = (code *)(param_2 + 0x50);
  lVar14 = param_2 + 0x60;
  local_168 = param_4;
  local_158 = param_2;
  local_f8 = pcVar1;
  if (param_5 == 1) {
    stack0xfffffffffffffef0 = lVar14;
    local_118._0_8_ = 0x100000000;
    local_108 = 2.12199579047121e-314;
    uStack_100 = 0;
    if (*(int *)(param_2 + 0x78) == 0) {
      iVar16 = 0;
    }
    else {
      FUN_1449c0562(local_118);
      iVar16 = *(int *)(param_2 + 0x78);
    }
    alStack_d8[0] = CONCAT44(uStack_fc,uStack_100);
    local_e0 = local_108;
    dVar5 = local_e0;
    local_f0 = local_118._0_4_;
    uStack_ec = local_118._4_4_;
    plStack_e8 = local_118._8_8_;
    local_e0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
    if ((local_e0._4_4_ != iVar16) || (plStack_e8 != (longlong *)lVar14)) {
      iVar10 = local_e0._4_4_;
      local_e0 = dVar5;
      do {
        uVar11 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                           (*(longlong **)(param_1 + 0x60),
                            *(undefined4 *)(*(longlong *)local_f8 + (longlong)iVar10 * 0xc));
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) + (ulonglong)(uVar11 >> 9) * 8
                 );
        pdVar2 = (double *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
        dVar18 = *pdVar2 * (double)param_3[0x20];
        dVar20 = pdVar2[1] * (double)param_3[0x21];
        dVar22 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18) *
                 (double)param_3[0x22];
        dVar7 = (double)param_3[0x18];
        dVar19 = (double)param_3[0x19];
        dVar21 = (double)param_3[0x1a];
        dVar5 = (double)param_3[0x1b];
        dVar23 = dVar20 * dVar7 - dVar18 * dVar19;
        dVar25 = dVar22 * dVar19 - dVar20 * dVar21;
        dVar26 = dVar18 * dVar21 - dVar7 * dVar22;
        dVar25 = dVar25 + dVar25;
        dVar26 = dVar26 + dVar26;
        dVar23 = dVar23 + dVar23;
        dVar20 = (dVar21 * dVar25 - dVar7 * dVar23) + (double)param_3[0x1b] * dVar26 + dVar20 +
                 (double)param_3[0x1d];
        local_108 = dVar23 * dVar5 + dVar22 + (dVar26 * dVar7 - dVar25 * dVar19) +
                    (double)param_3[0x1e];
        local_118._8_4_ = SUB84(dVar20,0);
        local_118._0_8_ =
             (dVar23 * dVar19 - dVar26 * dVar21) + dVar5 * dVar25 + dVar18 + (double)param_3[0x1c];
        uStack_10c = (int)((ulonglong)dVar20 >> 0x20);
        local_188 = (undefined4 *)((ulonglong)local_188 & 0xffffffffffffff00);
        (**(code **)(*param_3 + 0x10))
                  (param_3,local_118,(longlong)param_3 + 0x24,
                   *(undefined4 *)((longlong)param_3 + 0x34));
        local_e0 = (double)CONCAT44(local_e0._4_4_,(uint)local_e0 & ~uStack_ec);
        FUN_1449c0562(&local_f0);
        iVar10 = local_e0._4_4_;
        dVar5 = local_e0;
      } while (local_f8 != pcVar1 || (plStack_e8 != (longlong *)lVar14 || local_e0._4_4_ != iVar16))
      ;
    }
  }
  else {
    stack0xfffffffffffffef0 = lVar14;
    local_118._0_8_ = 0x100000000;
    local_108 = 2.12199579047121e-314;
    uStack_100 = 0;
    if (*(int *)(param_2 + 0x78) == 0) {
      iVar16 = 0;
    }
    else {
      FUN_1449c0562(local_118);
      iVar16 = *(int *)(param_2 + 0x78);
    }
    local_f0 = local_118._0_4_;
    uStack_ec = local_118._4_4_;
    alStack_d8[0] = CONCAT44(uStack_fc,uStack_100);
    local_e0 = local_108;
    dVar5 = local_e0;
    plStack_e8 = local_118._8_8_;
    local_e0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
    iVar10 = local_e0._4_4_;
    if ((local_e0._4_4_ != iVar16) || (dVar5 = local_108, plStack_e8 != (longlong *)lVar14)) {
      do {
        local_e0 = dVar5;
        uVar11 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                           (*(longlong **)(param_1 + 0x60),
                            *(undefined4 *)(*(longlong *)local_f8 + (longlong)iVar10 * 0xc));
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) + (ulonglong)(uVar11 >> 9) * 8
                 );
        pauVar3 = (undefined1 (*) [16])(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
        auVar8 = *pauVar3;
        dVar5 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
        if (*(char *)(local_168 + 0x4c) == '\x01') {
          fVar17 = (*(float *)(local_168 + 0x44) * 0.5) / 90.0;
        }
        else {
          dVar23 = (double)param_3[0x18];
          dVar7 = (double)param_3[0x19];
          dVar26 = (double)param_3[0x1a];
          dVar20 = (double)param_3[0x1b];
          dVar18 = (double)param_3[0x20] * *(double *)*pauVar3;
          dVar25 = (double)param_3[0x21] * *(double *)(*pauVar3 + 8);
          dVar24 = dVar5 * (double)param_3[0x22];
          dVar19 = dVar25 * dVar23 - dVar18 * dVar7;
          dVar21 = dVar24 * dVar7 - dVar25 * dVar26;
          dVar22 = dVar18 * dVar26 - dVar23 * dVar24;
          dVar19 = dVar19 + dVar19;
          dVar21 = dVar21 + dVar21;
          dVar22 = dVar22 + dVar22;
          local_108 = dVar20 * dVar19 + dVar24 + (dVar22 * dVar23 - dVar7 * dVar21) +
                      (double)param_3[0x1e];
          dVar23 = (dVar21 * dVar26 - dVar19 * dVar23) + dVar20 * dVar22 + dVar25 +
                   (double)param_3[0x1d];
          local_118._8_4_ = SUB84(dVar23,0);
          local_118._0_8_ =
               (dVar19 * dVar7 - dVar26 * dVar22) + dVar20 * dVar21 + dVar18 + (double)param_3[0x1c]
          ;
          uStack_10c = (int)((ulonglong)dVar23 >> 0x20);
          dVar22 = (double)FUN_148556b6a(local_168,local_118,0x3fe0000000000000);
          fVar17 = (float)dVar22;
        }
        local_188 = &local_128;
        local_178 = 0;
        local_180 = uVar4;
        _local_118 = auVar8;
        local_108 = dVar5;
        (**(code **)(*param_3 + 0x20))(param_3,local_118,fVar17);
        local_e0 = (double)CONCAT44(local_e0._4_4_,(uint)local_e0 & ~uStack_ec);
        FUN_1449c0562(&local_f0);
        iVar10 = local_e0._4_4_;
        dVar5 = local_e0;
      } while (local_f8 != pcVar1 || (plStack_e8 != (longlong *)lVar14 || local_e0._4_4_ != iVar16))
      ;
    }
  }
  local_e0 = dVar5;
  lVar14 = local_158;
  pcVar1 = (code *)(local_158 + 0xa0);
  local_150 = (longlong *)(local_158 + 0xb0);
  stack0xfffffffffffffef0 = local_150;
  local_118._0_8_ = 0x100000000;
  local_108 = 2.12199579047121e-314;
  uStack_100 = 0;
  if (*(int *)(local_158 + 200) == 0) {
    local_15c = 0;
  }
  else {
    FUN_1449c0562(local_118);
    local_15c = *(int *)(lVar14 + 200);
  }
  alStack_d8[0] = CONCAT44(uStack_fc,uStack_100);
  local_e0 = local_108;
  dVar5 = local_e0;
  local_f0 = local_118._0_4_;
  uStack_ec = local_118._4_4_;
  plStack_e8 = local_118._8_8_;
  local_e0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
  lVar14 = local_168;
  iVar16 = local_e0._4_4_;
  local_f8 = pcVar1;
  if ((local_e0._4_4_ != local_15c) || (local_e0 = dVar5, plStack_e8 != local_150)) {
    do {
      local_e0 = dVar5;
      plVar12 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))
                          (*(longlong **)(param_1 + 0x60),
                           *(undefined4 *)(*(longlong *)local_f8 + (longlong)iVar16 * 0xc));
      lVar9 = plVar12[1];
      lVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) +
               (ulonglong)(*(uint *)*plVar12 >> 9) * 8);
      uVar15 = (ulonglong)(*(uint *)*plVar12 & 0x1ff);
      local_138 = *(double *)(lVar6 + 0x10 + uVar15 * 0x18);
      pdVar2 = (double *)(lVar6 + uVar15 * 0x18);
      local_148 = *(undefined4 *)pdVar2;
      uStack_144 = *(undefined4 *)((longlong)pdVar2 + 4);
      uStack_140 = *(undefined4 *)(pdVar2 + 1);
      uStack_13c = *(undefined4 *)((longlong)pdVar2 + 0xc);
      if (*(char *)(lVar14 + 0x4c) == '\x01') {
        dVar18 = *pdVar2 * (double)param_3[0x20];
        dVar20 = pdVar2[1] * (double)param_3[0x21];
        dVar22 = local_138 * (double)param_3[0x22];
        dVar7 = (double)param_3[0x18];
        dVar19 = (double)param_3[0x19];
        dVar21 = (double)param_3[0x1a];
        dVar5 = (double)param_3[0x1b];
        dVar23 = dVar20 * dVar7 - dVar18 * dVar19;
        dVar25 = dVar22 * dVar19 - dVar20 * dVar21;
        dVar26 = dVar18 * dVar21 - dVar7 * dVar22;
        dVar25 = dVar25 + dVar25;
        dVar26 = dVar26 + dVar26;
        dVar23 = dVar23 + dVar23;
        dVar20 = (dVar21 * dVar25 - dVar7 * dVar23) + (double)param_3[0x1b] * dVar26 + dVar20 +
                 (double)param_3[0x1d];
        local_108 = dVar23 * dVar5 + dVar22 + (dVar26 * dVar7 - dVar25 * dVar19) +
                    (double)param_3[0x1e];
        local_118._8_4_ = SUB84(dVar20,0);
        local_118._0_8_ =
             (dVar23 * dVar19 - dVar26 * dVar21) + dVar5 * dVar25 + dVar18 + (double)param_3[0x1c];
        uStack_10c = (int)((ulonglong)dVar20 >> 0x20);
        local_188 = (undefined4 *)((ulonglong)local_188 & 0xffffffffffffff00);
        (**(code **)(*param_3 + 0x10))(param_3,local_118,&local_128,&DAT_41200000);
      }
      if (1 < (int)lVar9) {
        uVar15 = 0;
        do {
          uVar11 = *(uint *)(*plVar12 + 4 + uVar15 * 4);
          uVar15 = uVar15 + 1;
          lVar14 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) +
                    (ulonglong)(uVar11 >> 9) * 8);
          uVar13 = (ulonglong)(uVar11 & 0x1ff);
          local_108 = *(double *)(lVar14 + 0x10 + uVar13 * 0x18);
          _local_118 = *(undefined1 (*) [16])(lVar14 + uVar13 * 0x18);
          local_188 = (undefined4 *)CONCAT44(local_188._4_4_,uVar4);
          local_180 = local_180 & 0xffffff00;
          FUN_1484122ca(param_3,&local_148,local_118,&local_128);
          local_138 = local_108;
          local_148 = local_118._0_4_;
          uStack_144 = local_118._4_4_;
          uStack_140 = local_118._8_4_;
          uStack_13c = uStack_10c;
        } while ((int)lVar9 - 1 != uVar15);
      }
      lVar14 = local_168;
      if (*(char *)(local_168 + 0x4c) != '\0') {
        dVar18 = (double)CONCAT44(uStack_144,local_148) * (double)param_3[0x20];
        dVar20 = (double)CONCAT44(uStack_13c,uStack_140) * (double)param_3[0x21];
        dVar22 = local_138 * (double)param_3[0x22];
        dVar7 = (double)param_3[0x18];
        dVar19 = (double)param_3[0x19];
        dVar21 = (double)param_3[0x1a];
        dVar5 = (double)param_3[0x1b];
        dVar23 = dVar20 * dVar7 - dVar18 * dVar19;
        dVar25 = dVar22 * dVar19 - dVar20 * dVar21;
        dVar26 = dVar18 * dVar21 - dVar7 * dVar22;
        dVar25 = dVar25 + dVar25;
        dVar26 = dVar26 + dVar26;
        dVar23 = dVar23 + dVar23;
        dVar20 = (dVar21 * dVar25 - dVar7 * dVar23) + (double)param_3[0x1b] * dVar26 + dVar20 +
                 (double)param_3[0x1d];
        local_108 = dVar23 * dVar5 + dVar22 + (dVar26 * dVar7 - dVar25 * dVar19) +
                    (double)param_3[0x1e];
        local_118._8_4_ = SUB84(dVar20,0);
        local_118._0_8_ =
             (dVar23 * dVar19 - dVar26 * dVar21) + dVar5 * dVar25 + dVar18 + (double)param_3[0x1c];
        uStack_10c = (int)((ulonglong)dVar20 >> 0x20);
        local_188 = (undefined4 *)((ulonglong)local_188 & 0xffffffffffffff00);
        (**(code **)(*param_3 + 0x10))(param_3,local_118,&local_128,uVar4);
      }
      local_e0 = (double)CONCAT44(local_e0._4_4_,(uint)local_e0 & ~uStack_ec);
      FUN_1449c0562(&local_f0);
      iVar16 = local_e0._4_4_;
      dVar5 = local_e0;
    } while (local_f8 != pcVar1 || (plStack_e8 != local_150 || local_e0._4_4_ != local_15c));
  }
  lVar6 = local_158;
  if ((*(char *)(lVar14 + 0x4c) != '\0') && (*(int *)(local_158 + 0x34) < *(int *)(local_158 + 8)))
  {
    plVar12 = *(longlong **)(param_1 + 0x60);
    local_f8 = (code *)0x0;
    plStack_e8 = (longlong *)FUN_14001cc68(0x28,8);
    *plStack_e8 = (longlong)&PTR_FUN_14af17f40;
    plStack_e8[1] = (longlong)&local_128;
    *(uint *)(plStack_e8 + 2) = uVar4;
    plStack_e8[3] = (longlong)param_3;
    plStack_e8[4] = param_1;
    if (plStack_e8 + 1 != (longlong *)0x0) {
      local_f8 = FUN_143ba59b0;
    }
    (**(code **)(*plVar12 + 0x58))(plVar12,lVar6,&local_f8);
    if (local_f8 != (code *)0x0) {
      plVar12 = plStack_e8;
      if (plStack_e8 == (longlong *)0x0) {
        plVar12 = alStack_d8;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14852e25c FUN_14852e25c body=54 status=ok
// SIG undefined FUN_14852e25c(void)

void FUN_14852e25c(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0xb8);
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = FUN_14479d2ce(param_1 + 0xb8);
  FUN_14852e292(uVar1);
  return;
}



// FUNCTION 14852e292 FUN_14852e292 body=1010 status=ok
// SIG undefined FUN_14852e292(void)

void FUN_14852e292(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_168 [40];
  undefined1 local_140 [4];
  uint local_13c;
  wchar_t *local_138;
  int local_130;
  int local_104;
  undefined1 local_100 [8];
  undefined1 *local_f8;
  int local_f0;
  longlong local_e8;
  int local_e0;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((*(int *)(param_1 + 1000) == *(int *)(param_1 + 0x414)) &&
      (*(int *)(param_1 + 0x438) == *(int *)(param_1 + 0x464))) &&
     (*(int *)(param_1 + 0x398) == *(int *)(param_1 + 0x3c4))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  lVar6 = param_1 + 0x390;
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  local_138 = L"SelectionChange";
  local_130 = 0xf;
  FUN_1446e940c(&local_13c,&local_138);
  local_138 = L"UMeshTopologySelectionMechanic";
  local_130 = 0x1e;
  FUN_1446e940c(local_140,&local_138);
  FUN_140208bae(&local_138,local_140,&local_13c,L"Selection");
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_138);
  if (local_138 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_138 + 0x10))();
  }
  FUN_148531782(param_1);
  FUN_14852586c(&local_138,lVar6);
  FUN_1402226aa(lVar6);
  FUN_1402226aa(param_1 + 0x3e0);
  FUN_1402226aa(param_1 + 0x430);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x60);
  if (local_e0 == local_b4) {
    if (local_90 == local_64) {
      if ((local_130 != local_104) && (iVar1 = (**(code **)(*plVar3 + 0x40))(plVar3), 0 < iVar1)) {
        iVar1 = 0;
        do {
          local_13c = (**(code **)(*plVar3 + 0x48))(plVar3,iVar1);
          if (local_130 != local_104) {
            puVar5 = local_f8;
            if (local_f8 == (undefined1 *)0x0) {
              puVar5 = local_100;
            }
            for (iVar2 = *(int *)(puVar5 + (ulonglong)(local_f0 - 1U & local_13c) * 4); iVar2 != -1;
                iVar2 = *(int *)(local_138 + (longlong)iVar2 * 6 + 2)) {
              if (*(uint *)(local_138 + (longlong)iVar2 * 6) == local_13c) goto LAB_14852e484;
            }
          }
          FUN_1447cbafe(lVar6,local_140,&local_13c,0);
LAB_14852e484:
          iVar1 = iVar1 + 1;
          iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
        } while (iVar1 < iVar2);
      }
    }
    else {
      local_13c = 0;
      iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (0 < iVar1) {
        do {
          if (local_90 != local_64) {
            puVar5 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar5 = local_60;
            }
            for (iVar1 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & local_13c) * 4); iVar1 != -1;
                iVar1 = *(int *)(local_98 + (longlong)iVar1 * 0xc + 4)) {
              if (*(uint *)(local_98 + (longlong)iVar1 * 0xc) == local_13c) goto LAB_14852e5d5;
            }
          }
          FUN_1447cbafe(param_1 + 0x430,local_140,&local_13c,0);
LAB_14852e5d5:
          uVar7 = local_13c + 1;
          local_13c = uVar7;
          iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
        } while ((int)uVar7 < iVar1);
      }
    }
  }
  else {
    local_13c = 0;
    iVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    if (0 < iVar1) {
      do {
        if (local_e0 != local_b4) {
          puVar5 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar5 = local_b0;
          }
          for (iVar1 = *(int *)(puVar5 + (ulonglong)(local_a0 - 1U & local_13c) * 4); iVar1 != -1;
              iVar1 = *(int *)(local_e8 + (longlong)iVar1 * 0xc + 4)) {
            if (*(uint *)(local_e8 + (longlong)iVar1 * 0xc) == local_13c) goto LAB_14852e525;
          }
        }
        FUN_1447cbafe(param_1 + 0x3e0,local_140,&local_13c,0);
LAB_14852e525:
        uVar7 = local_13c + 1;
        local_13c = uVar7;
        iVar1 = (**(code **)(*plVar3 + 8))(plVar3);
      } while ((int)uVar7 < iVar1);
    }
  }
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  FUN_1447f69b6(param_1 + 0x48);
  FUN_14853184c(param_1);
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar6 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
  FUN_1456c3cc8(&local_138);
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852e6a0 FUN_14852e6a0 body=54 status=ok
// SIG undefined FUN_14852e6a0(void)

void FUN_14852e6a0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0xb8);
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = FUN_14479d2ce(param_1 + 0xb8);
  FUN_14852e6d6(uVar1);
  return;
}



// FUNCTION 14852e6d6 FUN_14852e6d6 body=700 status=ok
// SIG undefined FUN_14852e6d6(void)

void FUN_14852e6d6(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_178 [36];
  undefined1 local_154 [4];
  wchar_t *local_150;
  undefined4 local_148;
  undefined1 local_13c [4];
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar7 = param_1 + 0x390;
  FUN_14852586c(local_138,lVar7);
  plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  local_150 = L"SelectionChange";
  local_148 = 0xf;
  FUN_1446e940c(local_13c,&local_150);
  local_150 = L"UMeshTopologySelectionMechanic";
  local_148 = 0x1e;
  FUN_1446e940c(local_154,&local_150);
  FUN_140208bae(&local_150,local_154,local_13c,L"Selection");
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&local_150);
  if (local_150 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_150 + 0x10))();
  }
  FUN_148531782(param_1);
  FUN_1402226aa(lVar7);
  FUN_1402226aa(param_1 + 0x3e0);
  FUN_1402226aa(param_1 + 0x430);
  lVar6 = *(longlong *)(param_1 + 0x78);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x60);
  if (*(char *)(lVar6 + 0xa8) == '\x01') {
    iVar2 = (**(code **)(*plVar5 + 8))(plVar5);
    local_150 = (wchar_t *)((ulonglong)local_150 & 0xffffffff00000000);
    if (0 < iVar2) {
      do {
        FUN_1447cbafe(param_1 + 0x3e0,local_13c,&local_150,0);
        iVar3 = (int)local_150 + 1;
        local_150 = (wchar_t *)CONCAT44(local_150._4_4_,iVar3);
      } while (iVar3 < iVar2);
    }
  }
  else if (((*(char *)(lVar6 + 0xa9) == '\0') && (*(char *)(lVar6 + 0xab) == '\0')) &&
          (*(char *)(lVar6 + 0xac) != '\x01')) {
    if ((*(char *)(lVar6 + 0xaa) == '\x01') &&
       (iVar2 = (**(code **)(*plVar5 + 0x40))(plVar5), 0 < iVar2)) {
      iVar2 = 0;
      do {
        uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5,iVar2);
        local_150 = (wchar_t *)CONCAT44(local_150._4_4_,uVar4);
        FUN_1447cbafe(lVar7,local_13c,&local_150,0);
        iVar2 = iVar2 + 1;
        iVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
      } while (iVar2 < iVar3);
    }
  }
  else {
    iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
    local_150 = (wchar_t *)((ulonglong)local_150 & 0xffffffff00000000);
    if (0 < iVar2) {
      do {
        FUN_1447cbafe(param_1 + 0x430,local_13c,&local_150,0);
        iVar3 = (int)local_150 + 1;
        local_150 = (wchar_t *)CONCAT44(local_150._4_4_,iVar3);
      } while (iVar3 < iVar2);
    }
  }
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  FUN_1447f69b6(param_1 + 0x48);
  cVar1 = FUN_148544206(local_138,lVar7);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
    FUN_1447f69b6(param_1 + 0x48);
  }
  FUN_14853184c(param_1);
  plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar7 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x18))(lVar7 + 0x28);
  FUN_1456c3cc8(local_138);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14852e994 FUN_14852e994 body=1560 status=ok
// SIG undefined FUN_14852e994(void)

void FUN_14852e994(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_238 [40];
  undefined1 local_210 [8];
  undefined1 *local_208;
  undefined8 local_1f8;
  undefined **local_1e8;
  longlong *local_1e0;
  undefined1 *local_1c8;
  undefined8 local_1b8;
  undefined **local_1a8;
  longlong *local_1a0;
  undefined1 *local_188;
  undefined8 local_178;
  undefined **local_168;
  longlong *local_160;
  undefined1 *local_148;
  undefined8 local_138;
  undefined **local_128;
  longlong *local_120;
  undefined1 *local_108;
  undefined8 local_f8;
  undefined **local_e8;
  longlong *local_e0;
  undefined1 *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  longlong *local_a0;
  undefined1 *local_88;
  undefined4 local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1484445fc();
  lVar1 = FUN_1484101e0(DAT_14c951640);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x1c] = lVar1;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  local_60 = &LAB_148441f14;
  local_88 = &LAB_14844e6fa;
  FUN_14840df3c(lVar1 + 0x30,1,&local_88);
  if (local_88 != (undefined1 *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  local_60 = &LAB_148441f18;
  local_88 = &LAB_14844e6fa;
  FUN_14840df3c(param_1[0x1c] + 0x30,2,&local_88);
  if (local_88 != (undefined1 *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  (**(code **)(*(longlong *)param_1[0x1c] + 0x300))((longlong *)param_1[0x1c],param_1 + 7);
  (**(code **)(*(longlong *)param_1[0x1c] + 0x2a8))
            ((longlong *)param_1[0x1c],(longlong)param_1 + 0xfc);
  (**(code **)(*param_2 + 0x2e8))(param_2,param_1[0x1c],param_1);
  lVar1 = FUN_1484e7b30(DAT_14c951640);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x1e] = lVar1;
  *(undefined1 *)(lVar1 + 0x38) = 1;
  (**(code **)(*(longlong *)param_1[0x1e] + 0x2a0))((longlong *)param_1[0x1e],param_2);
  local_88 = &LAB_14852f0ae;
  local_80 = 0;
  FUN_14852efae(param_1[0x1e] + 0x88,local_210,param_1,&local_88);
  local_88 = &LAB_14852f1bc;
  local_80 = 0;
  FUN_14852f0bc(param_1[0x1e] + 0xa0,local_210,param_1,&local_88);
  local_88 = &LAB_14852f2ca;
  local_80 = 0;
  FUN_14852f1ca(param_1[0x1e] + 0xb8,local_210,param_1,&local_88);
  local_88 = (undefined1 *)CONCAT44(local_88._4_4_,*(int *)((longlong)param_1 + 0xfc) + 1);
  FUN_148501544(param_1[0x1e],&local_88);
  plVar2 = (longlong *)FUN_1484e866c(DAT_14c951640);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  param_1[0x1d] = (longlong)plVar2;
  lVar1 = param_1[0x1e] + 0x30;
  if (param_1[0x1e] == 0) {
    lVar1 = 0;
  }
  (**(code **)(*plVar2 + 0x358))(plVar2,param_1 + 6,lVar1);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  local_60 = &LAB_148441f14;
  local_88 = &LAB_14844e6fa;
  FUN_14840df3c(param_1[0x1d] + 0x80,1,&local_88);
  if (local_88 != (undefined1 *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  local_60 = &LAB_148441f18;
  local_88 = &LAB_14844e6fa;
  FUN_14840df3c(param_1[0x1d] + 0x80,2,&local_88);
  if (local_88 != (undefined1 *)0x0) {
    pppuVar4 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar4 = local_78;
    }
    (*(code *)(*pppuVar4)[2])(pppuVar4);
  }
  (**(code **)(*(longlong *)param_1[0x1d] + 0x2a8))
            ((longlong *)param_1[0x1d],(longlong)param_1 + 0xfc);
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 5);
  (**(code **)(*plVar2 + 0x2e8))(plVar2,param_1[0x1d],param_1);
  lVar1 = FUN_14852f2d7(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0xf] = lVar1;
  FUN_14485c47a(lVar1 + 0xb8,param_1);
  if ((char)param_1[8] == '\x01') {
    (**(code **)(*param_1 + 0x2c0))(param_1,param_1[0xf]);
  }
  local_b8 = 0;
  local_a8 = &PTR_LAB_14af180b0;
  local_c8 = &LAB_143ba5b58;
  local_a0 = param_1;
  FUN_1484c9b00(param_1[0xf] + 0x28,param_1[0xf] + 0xa8);
  local_f8 = 0;
  local_e8 = &PTR_LAB_14af180d0;
  local_108 = &LAB_143ba5bae;
  local_e0 = param_1;
  FUN_1484c9b00(param_1[0xf] + 0x28,param_1[0xf] + 0xa9);
  local_138 = 0;
  local_128 = &PTR_LAB_14af180f0;
  local_148 = &LAB_143ba5c04;
  local_120 = param_1;
  FUN_1484c9b00(param_1[0xf] + 0x28,param_1[0xf] + 0xaa);
  local_178 = 0;
  local_168 = &PTR_LAB_14af18110;
  local_188 = &LAB_143ba5c5a;
  local_160 = param_1;
  FUN_1484c9b00(param_1[0xf] + 0x28,param_1[0xf] + 0xab);
  local_1b8 = 0;
  local_1a8 = &PTR_LAB_14af18130;
  local_1c8 = &LAB_143ba5cb0;
  local_1a0 = param_1;
  FUN_1484c9b00(param_1[0xf] + 0x28,param_1[0xf] + 0xac);
  local_1f8 = 0;
  local_1e8 = &PTR_LAB_14af18150;
  local_208 = &LAB_143ba5d06;
  local_1e0 = param_1;
  FUN_1484c9b00(param_1[0xf] + 0x28,param_1[0xf] + 0xae);
  param_1[0xfc] = 0x3f800000;
  param_1[0xfd] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xfe) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x7f4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x7fc) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0x41000000;
  param_1[0x120] = 0x3f80000000000000;
  param_1[0x121] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x122) = 0x40800000;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x91c) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x924) = 0x41200000;
  param_1[0x144] = 0x3f57d7d83f800000;
  param_1[0x145] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x146) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0xa34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x147) = 0x3f57d7d8;
  *(undefined4 *)((longlong)param_1 + 0xa3c) = 0;
  param_1[0x148] = 0x412000003f800000;
  uVar3 = (**(code **)(*param_2 + 0x2c8))(param_2);
  lVar1 = FUN_148557ea9(&DAT_149e1dd14,uVar3,0x3f000000);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0xec] = lVar1;
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852efae FUN_14852efae body=254 status=ok
// SIG undefined FUN_14852efae(void)

undefined8
FUN_14852efae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14af17f60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852f0bc FUN_14852f0bc body=254 status=ok
// SIG undefined FUN_14852f0bc(void)

undefined8
FUN_14852f0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14af12a70;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14af17fd0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1485148a8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852f1ca FUN_14852f1ca body=254 status=ok
// SIG undefined FUN_14852f1ca(void)

undefined8
FUN_14852f1ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14af12ae0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14af18040;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148514c42(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852f2d7 FUN_14852f2d7 body=175 status=ok
// SIG undefined FUN_14852f2d7(void)

undefined8 FUN_14852f2d7(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14595beea();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852f388 FUN_14852f388 body=47 status=ok
// SIG undefined FUN_14852f388(void)

void FUN_14852f388(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x700),0,1);
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  return;
}



// FUNCTION 14852f3b8 FUN_14852f3b8 body=56 status=ok
// SIG undefined FUN_14852f3b8(void)

void FUN_14852f3b8(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x2f0))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014852f3ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f0))(param_2,*(undefined8 *)(param_1 + 0xf0));
  return;
}



// FUNCTION 14852f3f0 FUN_14852f3f0 body=23 status=ok
// SIG undefined FUN_14852f3f0(void)

void FUN_14852f3f0(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_2;
  *(undefined1 *)(param_1 + 0x166) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014852f400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))();
  return;
}



// FUNCTION 14852f408 FUN_14852f408 body=874 status=ok
// SIG undefined FUN_14852f408(void)

void FUN_14852f408(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  longlong *local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8 [12];
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar9 = (longlong *)FUN_148444614();
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2c8))(plVar9);
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x378))(plVar9);
  (**(code **)(*plVar9 + 0x18))(plVar9,param_1 + 0x770);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x2b0))(*(longlong **)(param_1 + 0xf0),param_2);
  }
  if (*(char *)(param_1 + 0xb30) == '\x01') {
    (**(code **)(*param_2 + 0x18))(param_2,local_98);
    lVar2 = *(longlong *)(param_1 + 0x98);
    puVar14 = (undefined8 *)(param_1 + 0x200);
    puVar15 = local_f8;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x60);
    lVar11 = param_1 + 2000;
    local_148 = param_2;
    FUN_148453350(lVar11,param_2,local_98);
    FUN_148453434(lVar11,local_f8);
    local_140 = param_1;
    if (*(char *)(param_1 + 0x7c3) == '\x01') {
      iVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9,iVar6);
          lVar5 = plVar10[1];
          if ((longlong)(int)lVar5 != 0) {
            lVar3 = *plVar10;
            lVar13 = 0;
            do {
              uVar12 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(lVar2 + 0x1c0) +
                          (ulonglong)(*(uint *)(lVar3 + lVar13) >> 9) * 8) +
                        (ulonglong)((*(uint *)(lVar3 + lVar13) & 0x1ff) << 4));
              lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (uVar12 >> 9 & 0x7fffff) * 8);
              local_108 = *(undefined8 *)(lVar4 + 0x10 + (uVar12 & 0x1ff) * 0x18);
              puVar14 = (undefined8 *)(lVar4 + (uVar12 & 0x1ff) * 0x18);
              local_118 = *puVar14;
              uStack_110 = puVar14[1];
              lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (uVar12 >> 0x29) * 8);
              uVar12 = uVar12 >> 0x20 & 0x1ff;
              puVar1 = (undefined4 *)(lVar4 + uVar12 * 0x18);
              local_138 = *puVar1;
              uStack_134 = puVar1[1];
              uStack_130 = puVar1[2];
              uStack_12c = puVar1[3];
              local_128 = *(undefined8 *)(lVar4 + 0x10 + uVar12 * 0x18);
              FUN_148527000(lVar11,&local_118,&local_138);
              lVar13 = lVar13 + 4;
            } while ((longlong)(int)lVar5 * 4 != lVar13);
          }
          iVar6 = iVar6 + 1;
          iVar7 = (**(code **)(*plVar9 + 0x18))(plVar9);
        } while (iVar6 < iVar7);
      }
    }
    lVar5 = local_140;
    if (*(char *)(local_140 + 0x7c2) == '\x01') {
      iVar6 = (**(code **)(*plVar9 + 8))(plVar9);
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          uVar8 = (**(code **)(*plVar9 + 0x10))(plVar9,iVar6);
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
          local_108 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar8 & 0x1ff) * 0x18);
          puVar14 = (undefined8 *)(lVar3 + (ulonglong)(uVar8 & 0x1ff) * 0x18);
          local_118 = *puVar14;
          uStack_110 = puVar14[1];
          FUN_148526e7a(lVar11,&local_118);
          iVar6 = iVar6 + 1;
          iVar7 = (**(code **)(*plVar9 + 8))(plVar9);
        } while (iVar6 < iVar7);
      }
    }
    FUN_14845342a(lVar11);
    plVar9 = local_148;
    if (((*(int *)(lVar5 + 1000) != *(int *)(lVar5 + 0x414)) ||
        (*(int *)(lVar5 + 0x438) != *(int *)(lVar5 + 0x464))) ||
       (*(int *)(lVar5 + 0x398) != *(int *)(lVar5 + 0x3c4))) {
      lVar2 = lVar5 + 0xa10;
      FUN_148453350(lVar2,local_148,local_98);
      FUN_148453434(lVar2,local_f8);
      local_158 = 1;
      (**(code **)(**(longlong **)(lVar5 + 0x80) + 8))
                (*(longlong **)(lVar5 + 0x80),lVar5 + 0x390,lVar2,local_98);
      FUN_14845342a(lVar2);
    }
    lVar2 = lVar5 + 0x8f0;
    FUN_148453350(lVar2,plVar9,local_98);
    FUN_148453434(lVar2,local_f8);
    local_158 = 0;
    (**(code **)(**(longlong **)(lVar5 + 0x80) + 8))
              (*(longlong **)(lVar5 + 0x80),lVar5 + 0x2a0,lVar2,local_98);
    FUN_14845342a(lVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852f792 FUN_14852f792 body=315 status=ok
// SIG undefined FUN_14852f792(void)

void FUN_14852f792(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_148444612();
  if ((*(int *)(param_1 + 0xf8) == 1) &&
     (pcVar1 = *(code **)(param_1 + 0x260), pcVar1 != (code *)0x0)) {
    plVar8 = (longlong *)(param_1 + 0x280);
    if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 0x270);
    }
    uVar7 = (**(code **)(*plVar8 + 8))(plVar8);
    (*pcVar1)(uVar7);
    local_a8 = *(longlong *)(param_1 + 0x260);
    uStack_60 = *(undefined8 *)(param_1 + 0x268);
    local_98 = *(longlong **)(param_1 + 0x270);
    uStack_50 = *(undefined8 *)(param_1 + 0x278);
    local_48 = *(undefined8 *)(param_1 + 0x280);
    uStack_40 = *(undefined8 *)(param_1 + 0x288);
    local_38 = *(undefined8 *)(param_1 + 0x290);
    uStack_30 = *(undefined8 *)(param_1 + 0x298);
    uVar5 = local_38;
    uVar6 = uStack_30;
    uVar3 = local_48;
    uVar4 = uStack_40;
    local_58 = local_98;
    uVar2 = uStack_50;
    local_68 = local_a8;
    uVar7 = uStack_60;
    *(ulonglong *)(param_1 + 0x290) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(param_1 + 0x298) = CONCAT44(uStack_6c,uStack_70);
    *(ulonglong *)(param_1 + 0x280) = CONCAT44(uStack_84,local_88);
    *(ulonglong *)(param_1 + 0x288) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(ulonglong *)(param_1 + 0x278) = CONCAT44(uStack_8c,uStack_90);
    *(longlong *)(param_1 + 0x260) = 0;
    *(ulonglong *)(param_1 + 0x268) = CONCAT44(uStack_9c,uStack_a0);
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
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = uVar7;
    uStack_50 = uVar2;
    local_48 = uVar3;
    uStack_40 = uVar4;
    local_38 = uVar5;
    uStack_30 = uVar6;
    if (local_a8 != 0) {
      plVar8 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar8 = (longlong *)&local_88;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852f8ce FUN_14852f8ce body=78 status=ok
// SIG undefined FUN_14852f8ce(void)

void FUN_14852f8ce(longlong param_1)

{
  FUN_1402226aa(param_1 + 0x2a0);
  FUN_1402226aa(param_1 + 0x2f0);
  FUN_1402226aa(param_1 + 0x340);
  FUN_1484e2c2a(*(undefined8 *)(param_1 + 0x708));
  FUN_14068ded2(param_1 + 0x710,0);
  return;
}



// FUNCTION 14852f91c FUN_14852f91c body=109 status=ok
// SIG undefined FUN_14852f91c(void)

void FUN_14852f91c(longlong param_1,char param_2)

{
  longlong lVar1;
  
  FUN_14852f8ce();
  lVar1 = *(longlong *)(param_1 + 0x80);
  *(undefined1 *)(lVar1 + 0xb1) = 0;
  if (param_2 != '\0') {
    *(undefined1 *)(lVar1 + 0xb0) = 0;
    FUN_1402226aa(param_1 + 0x390);
    FUN_1402226aa(param_1 + 0x3e0);
    FUN_1402226aa(param_1 + 0x430);
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
    FUN_1447f69b6(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 14852f98a FUN_14852f98a body=130 status=ok
// SIG undefined FUN_14852f98a(void)

undefined4
FUN_14852f98a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120 [240];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1458d302c(local_120);
  local_128 = param_4;
  uVar1 = FUN_14852fa0e(param_1,param_2,param_3,local_120);
  FUN_1456c3cc8(local_120);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14852fa0e FUN_14852fa0e body=2924 status=ok
// SIG undefined FUN_14852fa0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14852fa0e(longlong param_1,double *param_2,uint *param_3,longlong param_4,
                       undefined1 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 unaff_RBP;
  undefined7 uVar16;
  ulonglong uVar15;
  longlong *plVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar32;
  undefined1 auVar31 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_298 [32];
  double *local_278;
  undefined1 *local_270;
  uint *local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_233 [7];
  uint local_22c;
  undefined1 local_228 [24];
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  longlong *local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  double dStack_1b0;
  longlong *local_1a8;
  double dStack_1a0;
  longlong local_198 [4];
  undefined1 local_178;
  double local_150;
  longlong local_128 [4];
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  dVar20 = param_2[3];
  dVar27 = param_2[4];
  dVar19 = *(double *)(param_1 + 0x200);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x240);
  dVar22 = *(double *)(param_1 + 0x210) * -1.0;
  dVar25 = *(double *)(param_1 + 0x218) * 1.0;
  dVar26 = -dVar19;
  dVar28 = -*(double *)(param_1 + 0x208);
  dVar29 = dVar27 * dVar26 - dVar20 * dVar28;
  dVar32 = param_2[5] * dVar28 - dVar27 * dVar22;
  dVar33 = dVar20 * dVar22 - param_2[5] * dVar26;
  dVar32 = dVar32 + dVar32;
  dVar33 = dVar33 + dVar33;
  dVar29 = dVar29 + dVar29;
  auVar31 = divpd(_DAT_149934d80,auVar2);
  local_1f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar31._0_8_);
  uStack_1f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar31._8_8_);
  dVar35 = *param_2 - *(double *)(param_1 + 0x220);
  dVar36 = param_2[1] - *(double *)(param_1 + 0x228);
  dVar23 = param_2[2] - *(double *)(param_1 + 0x230);
  local_1e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x250))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0x250)));
  dVar30 = dVar36 * dVar26 - dVar28 * dVar35;
  dVar24 = dVar23 * dVar28 - dVar22 * dVar36;
  dVar34 = dVar35 * dVar22 - dVar23 * dVar26;
  dVar24 = dVar24 + dVar24;
  dVar34 = dVar34 + dVar34;
  dVar30 = dVar30 + dVar30;
  dStack_1e0 = ((dVar29 * dVar28 - dVar33 * dVar22) + dVar25 * dVar32 + dVar20) * local_1f8;
  dVar20 = (dVar19 * dVar29 + dVar22 * dVar32 + dVar25 * dVar33 + dVar27) * uStack_1f0;
  local_1f8 = ((dVar30 * dVar28 - dVar34 * dVar22) + dVar25 * dVar24 + dVar35) * local_1f8;
  uStack_1f0 = (dVar19 * dVar30 + dVar22 * dVar24 + dVar25 * dVar34 + dVar36) * uStack_1f0;
  dVar29 = (dVar29 * dVar25 + param_2[5] + (dVar33 * dVar26 - dVar32 * dVar28)) * local_1e8;
  local_1e8 = (dVar30 * dVar25 + dVar23 + (dVar34 * dVar26 - dVar24 * dVar28)) * local_1e8;
  dVar22 = dVar29 * dVar29 + dStack_1e0 * dStack_1e0 + dVar20 * dVar20;
  if (9.99999993922529e-09 < dVar22) {
    dVar22 = 1.0 / SQRT(dVar22);
    dStack_1e0 = dStack_1e0 * dVar22;
    dVar20 = dVar20 * dVar22;
    dVar29 = dVar29 * dVar22;
    dVar22 = dVar29 * dVar29 + dStack_1e0 * dStack_1e0 + dVar20 * dVar20;
  }
  dVar22 = SQRT(dVar22);
  dVar25 = 1.0 / dVar22;
  if (0.0 < dVar22) {
    dStack_1e0 = dStack_1e0 * dVar25;
    local_1d8 = (longlong *)(dVar20 * dVar25);
  }
  else {
    dStack_1e0 = 0.0;
    local_1d8 = (longlong *)0x0;
  }
  dStack_1d0 = (double)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar29 * dVar25));
  FUN_1485247b8(param_1,local_233,param_5);
  local_268 = &local_22c;
  local_270 = local_228;
  local_278 = &local_210;
  cVar8 = FUN_148524926(*(undefined8 *)(param_1 + 0x80),local_233,&local_1f8,param_4);
  if (cVar8 == '\0') {
LAB_14852ff8a:
    uVar15 = 0;
  }
  else {
    uVar16 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if (*(int *)(param_4 + 0x84) < *(int *)(param_4 + 0x58)) {
      uVar9 = FUN_1482ae398(param_4);
      *param_3 = uVar9;
      fVar21 = (float)((local_200 - local_1e8) * dStack_1d0 +
                      (local_210 - local_1f8) * dStack_1e0 +
                      (local_208 - uStack_1f0) * (double)local_1d8);
      param_3[2] = (uint)fVar21;
      dVar29 = (double)fVar21;
      dVar25 = (dStack_1e0 * dVar29 + local_1f8) * *(double *)(param_1 + 0x240);
      dVar22 = ((double)local_1d8 * dVar29 + uStack_1f0) * *(double *)(param_1 + 0x248);
      dVar19 = (dStack_1d0 * dVar29 + local_1e8) * *(double *)(param_1 + 0x250);
      dVar34 = *(double *)(param_1 + 0x200);
      dVar20 = *(double *)(param_1 + 0x208);
      dVar27 = *(double *)(param_1 + 0x210);
      dVar29 = *(double *)(param_1 + 0x218);
      dVar23 = dVar22 * dVar34 - dVar20 * dVar25;
      dVar26 = dVar19 * dVar20 - dVar27 * dVar22;
      dVar30 = dVar25 * dVar27 - dVar34 * dVar19;
      dVar26 = dVar26 + dVar26;
      dVar30 = dVar30 + dVar30;
      dVar23 = dVar23 + dVar23;
      dVar24 = (dVar27 * dVar26 - dVar34 * dVar23) + *(double *)(param_1 + 0x218) * dVar30 + dVar22
               + *(double *)(param_1 + 0x228);
      dVar22 = *(double *)(param_1 + 0x230);
      auVar2._8_4_ = SUB84(dVar24,0);
      auVar2._0_8_ = (dVar23 * dVar20 - dVar30 * dVar27) + dVar29 * dVar26 + dVar25 +
                     *(double *)(param_1 + 0x220);
      auVar2._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 10) = auVar2;
      *(double *)(param_3 + 0xe) =
           dVar23 * dVar29 + dVar19 + (dVar30 * dVar34 - dVar26 * dVar20) + dVar22;
    }
    else {
      if (*(int *)(param_4 + 0xa8) <= *(int *)(param_4 + 0xd4)) {
        pcVar4 = *(code **)(param_1 + 0xa0);
        plVar11 = (longlong *)(param_1 + 0xc0);
        if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_1 + 0xb0);
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        plVar11 = (longlong *)(*pcVar4)(uVar10);
        local_1c8 = 1.79769313486232e+308;
        local_1b8 = 0.0;
        local_1a8 = (longlong *)0x0;
        local_178 = 0;
        uVar9 = (**(code **)(*plVar11 + 0x40))(plVar11,&local_1f8,&local_1c8);
        if (local_1b8 != 0.0) {
          plVar12 = local_1a8;
          if (local_1a8 == (longlong *)0x0) {
            plVar12 = local_198;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        uVar15 = CONCAT71(uVar16,1);
        if (uVar9 == 0xffffffff) goto LAB_14852ff8c;
        lVar14 = *(longlong *)(plVar11[1] + 0x10);
        lVar5 = *(longlong *)(*(longlong *)(plVar11[1] + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
        uVar13 = (ulonglong)(uVar9 & 0x1ff);
        uVar3 = *(uint *)(lVar5 + uVar13 * 0xc);
        lVar6 = *(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8);
        uVar18 = (ulonglong)uVar3 & 0x1ff;
        local_128[2] = *(undefined8 *)(lVar6 + 0x10 + uVar18 * 0x18);
        plVar12 = (longlong *)(lVar6 + uVar18 * 0x18);
        local_128[0] = *plVar12;
        local_128[1] = plVar12[1];
        uVar3 = *(uint *)(lVar5 + 4 + uVar13 * 0xc);
        lVar6 = *(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8);
        uVar18 = (ulonglong)uVar3 & 0x1ff;
        local_100 = *(undefined8 *)(lVar6 + 0x10 + uVar18 * 0x18);
        puVar1 = (undefined8 *)(lVar6 + uVar18 * 0x18);
        local_128[3] = *puVar1;
        uStack_108 = puVar1[1];
        uVar3 = *(uint *)(lVar5 + 8 + uVar13 * 0xc);
        lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar3 >> 9) * 8);
        uVar13 = (ulonglong)uVar3 & 0x1ff;
        local_e8 = *(undefined8 *)(lVar14 + 0x10 + uVar13 * 0x18);
        puVar1 = (undefined8 *)(lVar14 + uVar13 * 0x18);
        local_f8 = *puVar1;
        uStack_f0 = puVar1[1];
        local_1a8 = local_1d8;
        dStack_1a0 = dStack_1d0;
        local_1b8 = local_1e8;
        dStack_1b0 = dStack_1e0;
        local_1c8 = local_1f8;
        uStack_1c0 = (undefined4)uStack_1f0;
        uStack_1bc = uStack_1f0._4_4_;
        plVar12 = local_128;
        plVar17 = local_198;
        for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
          *plVar17 = *plVar12;
          plVar12 = plVar12 + 1;
          plVar17 = plVar17 + 1;
        }
        cVar8 = FUN_146bd80f0(&local_1c8);
        if (cVar8 != '\0') {
          *param_3 = uVar9;
          param_3[2] = (uint)(float)local_150;
          FUN_146c13dec(plVar11[1],&local_258,uVar9);
          dVar30 = *(double *)(param_1 + 0x200);
          dVar24 = *(double *)(param_1 + 0x208);
          dVar34 = *(double *)(param_1 + 0x210);
          dVar29 = *(double *)(param_1 + 0x218);
          dVar22 = *(double *)(param_1 + 0x218);
          dVar25 = dStack_250 * dVar30 - local_258 * dVar24;
          dVar20 = local_248 * dVar24 - dStack_250 * dVar34;
          dVar27 = local_258 * dVar34 - dVar30 * local_248;
          dVar20 = dVar20 + dVar20;
          dVar27 = dVar27 + dVar27;
          dVar25 = dVar25 + dVar25;
          *(double *)(param_3 + 0x10) =
               (dVar25 * dVar24 - dVar27 * dVar34) + dVar29 * dVar20 + local_258;
          *(double *)(param_3 + 0x12) =
               (dVar34 * dVar20 - dVar30 * dVar25) + dVar22 * dVar27 + dStack_250;
          *(double *)(param_3 + 0x14) =
               dVar25 * dVar29 + local_248 + (dVar27 * dVar30 - dVar20 * dVar24);
          dVar25 = (local_150 * dStack_1e0 + local_1f8) * *(double *)(param_1 + 0x240);
          dVar22 = ((double)local_1d8 * local_150 + uStack_1f0) * *(double *)(param_1 + 0x248);
          dVar19 = (dStack_1d0 * local_150 + local_1e8) * *(double *)(param_1 + 0x250);
          dVar34 = *(double *)(param_1 + 0x200);
          dVar20 = *(double *)(param_1 + 0x208);
          dVar27 = *(double *)(param_1 + 0x210);
          dVar29 = *(double *)(param_1 + 0x218);
          dVar23 = dVar22 * dVar34 - dVar25 * dVar20;
          dVar26 = dVar19 * dVar20 - dVar22 * dVar27;
          dVar30 = dVar25 * dVar27 - dVar34 * dVar19;
          dVar26 = dVar26 + dVar26;
          dVar30 = dVar30 + dVar30;
          dVar23 = dVar23 + dVar23;
          dVar24 = (dVar27 * dVar26 - dVar34 * dVar23) +
                   *(double *)(param_1 + 0x218) * dVar30 + dVar22 + *(double *)(param_1 + 0x228);
          dVar22 = *(double *)(param_1 + 0x230);
          auVar7._8_4_ = SUB84(dVar24,0);
          auVar7._0_8_ = (dVar23 * dVar20 - dVar30 * dVar27) + dVar29 * dVar26 + dVar25 +
                         *(double *)(param_1 + 0x220);
          auVar7._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          *(undefined1 (*) [16])(param_3 + 10) = auVar7;
          *(double *)(param_3 + 0xe) =
               dVar23 * dVar29 + dVar19 + (dVar30 * dVar34 - dVar26 * dVar20) + dVar22;
          goto LAB_14852ff8c;
        }
        goto LAB_14852ff8a;
      }
      uVar9 = FUN_1482ae192(param_4);
      *param_3 = uVar9;
      fVar21 = (float)((local_200 - local_1e8) * dStack_1d0 +
                      (local_210 - local_1f8) * dStack_1e0 +
                      (local_208 - uStack_1f0) * (double)local_1d8);
      param_3[2] = (uint)fVar21;
      dVar29 = (double)fVar21;
      dVar25 = (dStack_1e0 * dVar29 + local_1f8) * *(double *)(param_1 + 0x240);
      dVar22 = ((double)local_1d8 * dVar29 + uStack_1f0) * *(double *)(param_1 + 0x248);
      dVar19 = (dStack_1d0 * dVar29 + local_1e8) * *(double *)(param_1 + 0x250);
      dVar34 = *(double *)(param_1 + 0x200);
      dVar20 = *(double *)(param_1 + 0x208);
      dVar27 = *(double *)(param_1 + 0x210);
      dVar29 = *(double *)(param_1 + 0x218);
      dVar23 = dVar22 * dVar34 - dVar20 * dVar25;
      dVar26 = dVar19 * dVar20 - dVar27 * dVar22;
      dVar24 = dVar25 * dVar27 - dVar34 * dVar19;
      dVar26 = dVar26 + dVar26;
      dVar24 = dVar24 + dVar24;
      dVar23 = dVar23 + dVar23;
      dVar30 = (dVar27 * dVar26 - dVar34 * dVar23) + *(double *)(param_1 + 0x218) * dVar24 + dVar22
               + *(double *)(param_1 + 0x228);
      dVar22 = *(double *)(param_1 + 0x230);
      auVar31._8_4_ = SUB84(dVar30,0);
      auVar31._0_8_ =
           (dVar23 * dVar20 - dVar24 * dVar27) + dVar29 * dVar26 + dVar25 +
           *(double *)(param_1 + 0x220);
      auVar31._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 10) = auVar31;
      *(double *)(param_3 + 0xe) =
           dVar23 * dVar29 + dVar19 + (dVar24 * dVar34 - dVar26 * dVar20) + dVar22;
      param_3[0x2a] = local_22c;
    }
    uVar15 = CONCAT71(uVar16,1);
  }
LAB_14852ff8c:
  if ((local_e0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853084e FUN_14853084e body=3672 status=ok
// SIG undefined FUN_14853084e(void)

/* WARNING: Removing unreachable block (ram,0x0001485315ef) */
/* WARNING: Removing unreachable block (ram,0x0001485315fe) */
/* WARNING: Removing unreachable block (ram,0x000148531602) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff08 : 0x00014853132d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14853084e(undefined8 ****param_1,char *param_2,double *param_3,double *param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined8 ***pppuVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char *pcVar11;
  undefined **ppuVar12;
  undefined8 ***pppuVar13;
  undefined **ppuVar14;
  undefined8 ***pppuVar15;
  code *pcVar16;
  undefined8 ***pppuVar17;
  ulonglong uVar18;
  undefined8 ****ppppuVar19;
  int iVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 ****ppppuVar26;
  undefined ***pppuVar27;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_7f8 [32];
  code **local_7d8;
  undefined4 local_7d0;
  undefined1 *local_7c8;
  char *local_7b8;
  undefined4 local_7b0;
  undefined4 local_7ac;
  double *local_7a8;
  double *local_7a0;
  char *local_798;
  undefined1 *local_790;
  longlong *local_788;
  double *local_780;
  double *local_778;
  char *local_770;
  undefined1 *local_768;
  longlong *local_760;
  undefined1 local_758 [16];
  double local_748;
  longlong *local_740;
  undefined8 local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined8 local_728;
  undefined8 ***pppuStack_720;
  undefined **local_718;
  undefined8 ***pppuStack_710;
  undefined **local_708;
  undefined8 ***pppuStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined ***local_6e8;
  undefined8 ***pppuStack_6e0;
  undefined ***local_6d8;
  undefined8 ***pppuStack_6d0;
  undefined **local_6c8;
  undefined8 ***pppuStack_6c0;
  undefined **local_6b8;
  undefined8 ***pppuStack_6b0;
  undefined1 local_6a8;
  code *local_698;
  undefined8 ***pppuStack_690;
  double local_688;
  undefined8 ***pppuStack_680;
  undefined **local_678;
  undefined1 *puStack_670;
  undefined **local_668;
  undefined8 ***pppuStack_660;
  undefined1 *local_658;
  double local_650;
  double local_648;
  undefined8 local_640;
  undefined **ppuStack_638;
  undefined *local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  code *local_618;
  undefined8 ***pppuStack_610;
  undefined ***local_608;
  undefined8 ***pppuStack_600;
  undefined **local_5f8;
  undefined8 ***pppuStack_5f0;
  undefined **local_5e8;
  undefined8 ***pppuStack_5e0;
  undefined1 *local_5d8;
  undefined8 local_5c8;
  undefined **local_5b8;
  undefined *local_5b0;
  undefined1 local_598 [16];
  double local_588;
  undefined8 uStack_580;
  undefined1 local_578 [16];
  double local_568;
  undefined8 uStack_560;
  undefined1 local_558 [16];
  double local_548;
  undefined8 uStack_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  double local_528;
  undefined8 uStack_520;
  undefined1 *local_4d8;
  undefined8 local_4c8;
  longlong local_3b8;
  undefined8 local_3a8;
  double local_398;
  double dStack_390;
  double local_388;
  double local_378;
  double local_370;
  double local_368;
  double local_358;
  double local_350;
  double local_348;
  undefined8 ***local_318;
  double **local_310;
  double *local_308;
  undefined8 ***local_258;
  int local_248;
  longlong local_138;
  code *local_118;
  undefined8 uStack_110;
  undefined ***local_108;
  undefined8 ***pppuStack_100;
  undefined **local_f8;
  undefined8 ***pppuStack_f0;
  undefined **local_e8;
  undefined8 ***pppuStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_7f8;
  FUN_1402226aa(param_5);
  FUN_1402226aa(param_5 + 0x50);
  FUN_1402226aa(param_5 + 0xa0);
  pppuVar3 = param_1[0xe];
  ppppuVar26 = param_1 + 0x12;
  if ((undefined8 ****)param_1[0x10] != (undefined8 ****)0x0) {
    ppppuVar26 = (undefined8 ****)param_1[0x10];
  }
  uVar22 = (*(code *)(*ppppuVar26)[1])();
  local_740 = (longlong *)(*(code *)pppuVar3)(uVar22);
  dVar32 = *param_3 - param_4[4];
  dVar34 = param_3[1] - param_4[5];
  dVar30 = param_3[2] - param_4[6];
  auVar2 = *(undefined1 (*) [16])(param_4 + 8);
  dVar35 = param_4[2] * -1.0;
  dVar5 = param_4[3] * 1.0;
  dVar7 = -*param_4;
  dVar8 = -param_4[1];
  dVar36 = dVar32 * dVar35 - dVar7 * dVar30;
  dVar9 = dVar34 * dVar7 - dVar32 * dVar8;
  dVar10 = dVar30 * dVar8 - dVar34 * dVar35;
  dVar10 = dVar10 + dVar10;
  dVar36 = dVar36 + dVar36;
  dVar9 = dVar9 + dVar9;
  dVar4 = (double)DAT_149934d80;
  dVar6 = DAT_149934d80._8_8_;
  auVar31 = divpd(_DAT_149934d80,auVar2);
  dVar34 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar31._8_8_) *
           (*param_4 * dVar9 + dVar35 * dVar10 + dVar5 * dVar36 + dVar34);
  local_758._8_4_ = SUB84(dVar34,0);
  local_758._0_8_ =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar31._0_8_) *
       ((dVar9 * dVar8 - dVar36 * dVar35) + dVar5 * dVar10 + dVar32);
  local_758._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  local_748 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                      (ulonglong)(1.0 / param_4[10])) *
              (dVar5 * dVar9 + dVar30 + (dVar36 * dVar7 - dVar10 * dVar8));
  if (param_2[2] == '\x01') {
    local_768 = local_758;
    local_398 = 0.0;
    dStack_390 = 0.0;
    local_7b8 = param_2;
    local_780 = param_3;
    local_778 = param_4;
    local_770 = param_2;
    local_760 = local_740;
    FUN_1403ed7b2(&local_398,*(undefined4 *)(param_1 + 0x18));
    pppuStack_690 = &local_318;
    local_7c8 = local_598;
    local_598._0_12_ = ZEXT812(0);
    local_698 = FUN_143ba67f2;
    local_7d0 = 0;
    local_318 = param_1 + 0x17;
    local_310 = &local_780;
    local_308 = &local_398;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x18),1);
    iVar20 = *(int *)(param_1 + 0x18);
    if (0 < iVar20) {
      lVar29 = 0;
      lVar28 = 0;
      do {
        if (*(char *)((longlong)local_398 + lVar28) == '\x01') {
          FUN_1447cbafe(param_5 + 0x50,&local_318,(longlong)param_1[0x17] + lVar29,0);
          iVar20 = *(int *)(param_1 + 0x18);
        }
        lVar28 = lVar28 + 1;
        lVar29 = lVar29 + 0x20;
      } while (lVar28 < iVar20);
    }
    param_2 = local_7b8;
    if (local_398 != 0.0) {
      FUN_1400020a8();
      param_2 = local_7b8;
    }
  }
  iVar20 = *(int *)(param_5 + 0x58);
  iVar25 = *(int *)(param_5 + 0x84);
  if ((iVar20 == *(int *)(param_5 + 0x84)) && (iVar25 = iVar20, param_2[1] == '\x01')) {
    local_790 = local_758;
    local_788 = local_740;
    local_398 = 0.0;
    dStack_390 = 0.0;
    local_7a8 = param_3;
    local_7a0 = param_4;
    local_798 = param_2;
    FUN_1403ed7b2(&local_398,*(undefined4 *)(param_1 + 0x24));
    pppuStack_690 = &local_318;
    local_7c8 = local_598;
    local_598._0_12_ = ZEXT812(0);
    local_698 = FUN_143ba699e;
    local_7d0 = 0;
    local_318 = param_1 + 0x17;
    local_310 = &local_7a8;
    local_308 = &local_398;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x24),1);
    iVar20 = *(int *)(param_1 + 0x24);
    if (0 < iVar20) {
      lVar29 = 0;
      lVar28 = 0;
      do {
        if (*(char *)((longlong)local_398 + lVar28) == '\x01') {
          FUN_1447cbafe(param_5 + 0xa0,&local_318,(longlong)param_1[0x23] + lVar29,0);
          iVar20 = *(int *)(param_1 + 0x24);
        }
        lVar28 = lVar28 + 1;
        lVar29 = lVar29 + 0x48;
      } while (lVar28 < iVar20);
    }
    if (local_398 != 0.0) {
      FUN_1400020a8();
    }
    iVar20 = *(int *)(param_5 + 0x58);
    iVar25 = *(int *)(param_5 + 0x84);
  }
  if ((((*param_2 == '\x01') && (iVar20 == iVar25)) &&
      (*(int *)(param_5 + 0xa8) == *(int *)(param_5 + 0xd4))) &&
     (*(int *)(param_5 + 8) == *(int *)(param_5 + 0x34))) {
    local_7b8 = param_2;
    FUN_14850066c(param_3,&local_318);
    dVar9 = *param_4;
    dVar7 = param_4[1];
    dVar8 = param_4[2];
    local_538 = *(undefined4 *)(param_4 + 4);
    uStack_534 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_530 = *(undefined4 *)(param_4 + 5);
    uStack_52c = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_528 = param_4[6];
    dVar10 = param_4[8];
    dVar36 = param_4[9];
    dVar30 = param_4[10];
    dVar34 = param_4[3];
    dVar37 = dVar7 + dVar7;
    dVar32 = dVar8 + dVar8;
    dVar35 = dVar9 * (dVar9 + dVar9);
    dVar6 = (dVar6 - (dVar8 * dVar32 + dVar35)) * dVar36;
    local_548 = (1.0 - (dVar35 + dVar7 * dVar37)) * dVar30;
    dVar33 = dVar32 * dVar34;
    dVar35 = (dVar9 + dVar9) * param_4[3];
    dVar34 = dVar37 * dVar34;
    dVar5 = (dVar37 * dVar9 + dVar33) * dVar10;
    local_568 = (dVar32 * dVar7 + dVar35) * dVar36;
    local_588 = (*param_4 * dVar32 - dVar34) * dVar10;
    dVar35 = (dVar32 * dVar7 - dVar35) * dVar30;
    local_598._8_4_ = SUB84(dVar5,0);
    local_598._0_8_ = (dVar4 - (dVar8 * dVar32 + dVar7 * dVar37)) * dVar10;
    local_598._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_580 = 0;
    local_578._8_4_ = SUB84(dVar6,0);
    local_578._0_8_ = (dVar37 * dVar9 - dVar33) * dVar36;
    local_578._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uStack_560 = 0;
    local_558._8_4_ = SUB84(dVar35,0);
    local_558._0_8_ = (dVar34 + *param_4 * dVar32) * dVar30;
    local_558._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    uStack_540 = 0;
    uStack_520 = 0x3ff0000000000000;
    FUN_14494412e(local_598,&local_398);
    local_4d8 = (undefined1 *)0x0;
    local_3b8 = 0;
    local_3a8 = 0x800000000;
    local_4c8 = 0x600000000;
    ppppuVar26 = (undefined8 ****)local_258;
    if ((undefined8 ****)local_258 == (undefined8 ****)0x0) {
      ppppuVar26 = &local_318;
    }
    if ((longlong)local_248 != 0) {
      lVar28 = (longlong)local_248 << 5;
      do {
        local_698 = (code *)(local_370 * local_348 - local_350 * local_368);
        pppuStack_690 = (undefined8 ***)(local_368 * local_358 - local_348 * local_378);
        local_688 = local_378 * local_350 - local_358 * local_370;
        local_678 = (undefined **)(local_350 * local_388 - dStack_390 * local_348);
        pppuStack_680 = (undefined8 ****)0x0;
        puStack_670 = (undefined1 *)(local_348 * local_398 - local_388 * local_358);
        local_668 = (undefined **)(local_358 * dStack_390 - local_398 * local_350);
        pppuStack_660 = (undefined8 ****)0x0;
        local_658 = (undefined1 *)(dStack_390 * local_368 - local_370 * local_388);
        local_650 = local_388 * local_378 - local_368 * local_398;
        local_648 = local_398 * local_370 - local_378 * dStack_390;
        local_630 = (undefined *)0x0;
        uStack_628 = 0;
        local_640 = 0;
        ppuStack_638 = (undefined **)0x0;
        local_620 = 0x3ff0000000000000;
        uVar22 = FUN_144a91046(&local_398);
        local_7d8 = &local_698;
        FUN_144b10b5a(ppppuVar26,&local_6f8,&local_398,uVar22);
        uVar18 = local_4c8;
        lVar29 = (longlong)(int)local_4c8;
        uVar21 = (int)local_4c8 + 1;
        local_4c8 = CONCAT44(local_4c8._4_4_,uVar21);
        if (local_4c8._4_4_ < uVar21) {
          FUN_1448afb60(local_598,uVar18 & 0xffffffff);
        }
        puVar23 = local_4d8;
        if (local_4d8 == (undefined1 *)0x0) {
          puVar23 = local_598;
        }
        *(undefined ****)(puVar23 + lVar29 * 0x20 + 0x10) = local_6e8;
        *(undefined8 ****)((longlong)(puVar23 + lVar29 * 0x20 + 0x10) + 8) = pppuStack_6e0;
        puVar1 = (undefined4 *)(puVar23 + lVar29 * 0x20);
        *puVar1 = (undefined4)local_6f8;
        puVar1[1] = local_6f8._4_4_;
        puVar1[2] = (undefined4)uStack_6f0;
        puVar1[3] = uStack_6f0._4_4_;
        ppppuVar26 = ppppuVar26 + 4;
        lVar28 = lVar28 + -0x20;
      } while (lVar28 != 0);
    }
    FUN_1448afd16(local_598);
    pppuStack_e0 = pppuStack_660;
    local_e8 = local_668;
    pppuVar13 = pppuStack_680;
    pppuVar3 = pppuStack_690;
    local_648 = 0.0;
    ppuStack_638 = &PTR_LAB_14aef06f0;
    local_630 = &DAT_1484c14e0;
    local_658 = &LAB_1484c14e2;
    local_608 = (undefined ***)0x0;
    local_5f8 = &PTR_LAB_14aef0710;
    pppuStack_5f0 = (undefined8 ***)&DAT_1484c1538;
    local_618 = (code *)&LAB_1484c153a;
    local_5c8 = 0;
    local_5b8 = &PTR_LAB_14aef0710;
    local_5b0 = &DAT_1484c158a;
    local_5d8 = &LAB_1484c153a;
    local_7ac = 0xffffffff;
    local_7b0 = 0x7fffffff;
    local_6c8 = local_668;
    pppuStack_6c0 = pppuStack_660;
    local_6d8 = (undefined ***)&PTR_LAB_14aef06d0;
    pppuStack_6d0 = (undefined8 ***)&LAB_1484c1484;
    local_6e8 = (undefined ***)0x0;
    pppuStack_6e0 = pppuStack_680;
    local_6f8 = &LAB_1484c1488;
    uStack_6f0 = (undefined8 ****)pppuStack_690;
    local_668 = (undefined **)&local_7ac;
    pppuStack_660 = (undefined8 ***)&local_7b0;
    local_678 = &PTR_LAB_14af182c0;
    puStack_670 = local_598;
    local_688 = 0.0;
    pppuStack_680 = pppuStack_100;
    local_698 = FUN_143ba6cf2;
    pppuStack_690 = uStack_110;
    local_118 = (code *)&LAB_1484c1488;
    uStack_110 = (undefined8 ****)pppuVar3;
    local_f8 = &PTR_LAB_14aef06d0;
    pppuStack_f0 = (undefined8 ***)&LAB_1484c1484;
    local_108 = (undefined ***)0x0;
    pppuStack_100 = pppuVar13;
    (*(code *)&LAB_1484c14b6)();
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
    local_118 = (code *)0x0;
    puVar24 = (undefined8 *)FUN_14001cc68(0x50,8);
    pppuVar17 = pppuStack_5e0;
    ppuVar14 = local_5e8;
    pppuVar15 = pppuStack_5f0;
    ppuVar12 = local_5f8;
    pppuVar13 = pppuStack_600;
    local_108 = local_608;
    pppuVar3 = pppuStack_610;
    pcVar16 = local_618;
    pcVar11 = local_7b8;
    *puVar24 = &PTR_FUN_14af182e0;
    puVar24[1] = param_1;
    puVar24[2] = param_5;
    puVar24[3] = &local_7ac;
    puVar24[4] = &local_7b0;
    puVar24[5] = local_598;
    puVar24[6] = local_758;
    puVar24[7] = &local_740;
    puVar24[8] = local_7b8;
    puVar24[9] = param_6;
    if (puVar24 + 1 != (undefined8 *)0x0) {
      local_118 = FUN_143ba6e8a;
    }
    local_6c8 = local_5e8;
    pppuStack_6c0 = pppuStack_5e0;
    local_6d8 = (undefined ***)local_5f8;
    pppuStack_6d0 = pppuStack_5f0;
    local_6e8 = local_608;
    pppuStack_6e0 = pppuStack_600;
    local_6f8 = local_618;
    uStack_6f0 = (undefined8 ****)pppuStack_610;
    local_5e8 = local_e8;
    pppuStack_5e0 = pppuStack_e0;
    local_5f8 = local_f8;
    pppuStack_5f0 = pppuStack_f0;
    local_608 = (undefined ***)puVar24;
    pppuStack_600 = pppuStack_100;
    local_618 = local_118;
    pppuStack_610 = uStack_110;
    local_e8 = ppuVar14;
    pppuStack_e0 = pppuVar17;
    local_f8 = ppuVar12;
    pppuStack_f0 = pppuVar15;
    pppuStack_100 = pppuVar13;
    local_118 = pcVar16;
    uStack_110 = (undefined8 ****)pppuVar3;
    if (pcVar16 != (code *)0x0) {
      pppuVar27 = &local_f8;
      if (local_108 != (undefined ***)0x0) {
        pppuVar27 = local_108;
      }
      (*(code *)(*pppuVar27)[2])(pppuVar27);
    }
    pppuVar15 = pppuStack_6b0;
    ppuVar14 = local_6b8;
    pppuVar13 = pppuStack_6c0;
    ppuVar12 = local_6c8;
    pppuVar3 = pppuStack_6d0;
    local_6f8 = (undefined1 *)0x7fefffffffffffff;
    local_6e8 = (undefined ***)0x0;
    local_6a8 = 0;
    if (pcVar11[3] == '\0') {
      local_e8 = local_6b8;
      pppuStack_e0 = pppuStack_6b0;
      local_f8 = local_6c8;
      pppuStack_f0 = pppuStack_6c0;
      local_108 = (undefined ***)0x0;
      pppuStack_100 = pppuStack_6d0;
      local_118 = (code *)0x0;
      uStack_110 = (undefined8 ****)pppuStack_6e0;
      ppppuVar19 = uStack_110;
      local_6b8 = (undefined **)local_758;
      pppuStack_6b0 = pppuStack_700;
      local_6c8 = &PTR_LAB_14af18300;
      pppuStack_6c0 = param_1;
      local_6d8 = (undefined ***)0x0;
      pppuStack_6d0 = pppuStack_720;
      ppppuVar26 = (undefined8 ****)CONCAT44(uStack_72c,uStack_730);
      local_6e8 = (undefined ***)FUN_143ba7266;
      uStack_110._0_4_ = SUB84(pppuStack_6e0,0);
      uStack_110._4_4_ = (undefined4)((ulonglong)pppuStack_6e0 >> 0x20);
      local_708 = ppuVar14;
      pppuStack_700 = pppuVar15;
      local_718 = ppuVar12;
      pppuStack_710 = pppuVar13;
      local_728 = 0;
      pppuStack_720 = pppuVar3;
      local_738 = 0;
      uStack_730 = (undefined4)uStack_110;
      uStack_72c = uStack_110._4_4_;
      pppuStack_6e0 = ppppuVar26;
      uStack_110 = ppppuVar19;
    }
    local_6d8 = (undefined ***)0x0;
    (**(code **)(*local_740 + 0x78))(local_740,&local_698,&local_6f8);
    if (local_6e8 != (undefined ***)0x0) {
      pppuVar27 = local_6d8;
      if (local_6d8 == (undefined ***)0x0) {
        pppuVar27 = &local_6c8;
      }
      (*(code *)(*pppuVar27)[2])();
    }
    FUN_1484c1188(&local_698);
    if (local_3b8 != 0) {
      FUN_1400020a8();
    }
    if (local_4d8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if ((undefined8 ****)local_258 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_7f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485316a8 FUN_1485316a8 body=46 status=ok
// SIG undefined FUN_1485316a8(void)

bool FUN_1485316a8(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 1000) == *(int *)(param_1 + 0x414)) &&
     (*(int *)(param_1 + 0x438) == *(int *)(param_1 + 0x464))) {
    bVar1 = *(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4);
  }
  return bVar1;
}



// FUNCTION 1485316d6 FUN_1485316d6 body=104 status=ok
// SIG undefined FUN_1485316d6(void)

void FUN_1485316d6(longlong param_1,longlong param_2,char param_3)

{
  FUN_145c3f772(param_1 + 0x390);
  FUN_145c3f772(param_1 + 0x3e0,param_2 + 0x50);
  FUN_145c3f772(param_1 + 0x430,param_2 + 0xa0);
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  if (param_3 != '\0') {
    FUN_1447f69b6(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 14853173e FUN_14853173e body=67 status=ok
// SIG undefined FUN_14853173e(void)

void FUN_14853173e(longlong param_1)

{
  FUN_1402226aa(param_1 + 0x390);
  FUN_1402226aa(param_1 + 0x3e0);
  FUN_1402226aa(param_1 + 0x430);
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  FUN_1447f69b6(param_1 + 0x48);
  return;
}



// FUNCTION 148531782 FUN_148531782 body=201 status=ok
// SIG undefined FUN_148531782(void)

void FUN_148531782(longlong param_1)

{
  longlong *plVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x1f0);
  memset(_Dst,0,0x1f0);
  *_Dst = &PTR_LAB_14af18190;
  FUN_1458d302c(_Dst + 1);
  FUN_1458d302c(_Dst + 0x1f);
  *(undefined4 *)(_Dst + 0x3d) = 0;
  plVar1 = *(longlong **)(param_1 + 0x488);
  *(undefined8 **)(param_1 + 0x488) = _Dst;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
    _Dst = *(undefined8 **)(param_1 + 0x488);
  }
  FUN_145c3f772(_Dst + 1,param_1 + 0x390);
  FUN_145c3f772(_Dst + 0xb,param_1 + 0x3e0);
  FUN_145c3f772(_Dst + 0x15,param_1 + 0x430);
  *(undefined4 *)(*(longlong *)(param_1 + 0x488) + 0x1e8) = *(undefined4 *)(param_1 + 0x480);
  return;
}



// FUNCTION 14853184c FUN_14853184c body=372 status=ok
// SIG undefined FUN_14853184c(void)

undefined8 FUN_14853184c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x488);
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x480) != (int)plVar1[0x3d]) {
      FUN_145c3f772(plVar1 + 0x1f,param_1 + 0x390);
      FUN_145c3f772(plVar1 + 0x29,param_1 + 0x3e0);
      FUN_145c3f772(plVar1 + 0x33,param_1 + 0x430);
      plVar1 = (longlong *)FUN_148444614(param_1);
      lVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
      local_48 = L"SelectionChangeMessage";
      local_40 = 0x16;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"UMeshTopologySelectionMechanic";
      local_40 = 0x1e;
      FUN_1446e940c(local_50,&local_48);
      FUN_140208bae(&local_48,local_50,local_4c,L"Selection Change");
      local_58 = *(undefined8 *)(param_1 + 0x488);
      *(undefined8 *)(param_1 + 0x488) = 0;
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,param_1,&local_58,&local_48);
      if (local_48 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_48 + 0x10))();
      }
      uVar3 = 1;
      goto LAB_1485318a0;
    }
    *(undefined8 *)(param_1 + 0x488) = 0;
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
  }
  uVar3 = 0;
LAB_1485318a0:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485319c2 FUN_1485319c2 body=308 status=ok
// SIG undefined FUN_1485319c2(void)

undefined1 * FUN_1485319c2(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  double dVar1;
  char cVar2;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined1 local_228 [8];
  float local_220;
  undefined1 local_128 [240];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (*(char *)(param_1 + 0x60) == '\0') {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined8 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_258);
  }
  memset(local_228,0,0x100);
  FUN_1458d302c(local_128);
  local_238 = *(undefined1 *)(param_1 + 0x78c);
  cVar2 = FUN_14852fa0e(param_1 + -0x30,param_3,local_228,local_128);
  if (cVar2 == '\0') {
    dVar1 = 3.4028234663852886e+38;
  }
  else {
    dVar1 = (double)local_220;
  }
  *param_2 = 1;
  *(double *)(param_2 + 8) = dVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FUN_1456c3cc8(local_128);
  if ((local_38 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148531af8 FUN_148531af8 body=337 status=ok
// SIG undefined FUN_148531af8(void)

void FUN_148531af8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar3 = param_1 + -0x30;
    local_68 = param_1 + -8;
    plVar1 = (longlong *)FUN_14479d2ce();
    lVar2 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
    local_58 = L"SelectionChange";
    local_50 = 0xf;
    FUN_1446e940c(local_5c,&local_58);
    local_58 = L"UMeshTopologySelectionMechanic";
    local_50 = 0x1e;
    FUN_1446e940c(local_60,&local_58);
    FUN_140208bae(&local_58,local_60,local_5c,L"Selection");
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    FUN_148531782(lVar3);
    (**(code **)(*(longlong *)(param_1 + -0x30) + 0x2e0))
              (lVar3,param_2,param_1 + 0x6a0,param_1 + 0x6b8);
    FUN_14853184c(lVar3);
    plVar1 = (longlong *)FUN_14479d2ce(local_68);
    lVar3 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148531c4a FUN_148531c4a body=258 status=ok
// SIG undefined FUN_148531c4a(void)

undefined1 * FUN_148531c4a(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined1 local_230 [8];
  float local_228;
  undefined1 local_130 [240];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar3 = 0;
  memset(local_230,0,0x100);
  dVar1 = 3.4028234663852886e+38;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_1458d302c(local_130);
    local_238 = 0;
    cVar2 = FUN_14852fa0e(param_1 + -0x38,param_3,local_230,local_130);
    FUN_1456c3cc8(local_130);
    if (cVar2 == '\0') {
      uVar3 = 0;
      dVar1 = 3.4028234663852886e+38;
    }
    else {
      uVar3 = 1;
      dVar1 = (double)local_228;
    }
  }
  *param_2 = uVar3;
  *(double *)(param_2 + 8) = dVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((local_40 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148531d50 FUN_148531d50 body=35 status=ok
// SIG undefined FUN_148531d50(void)

ulonglong FUN_148531d50(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\x01') {
    (**(code **)(*(longlong *)(param_1 + -0x38) + 0x2d8))(param_1 + -0x38);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}



// FUNCTION 148531d98 FUN_148531d98 body=621 status=ok
// SIG undefined FUN_148531d98(void)

void FUN_148531d98(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_e8 [44];
  undefined1 local_bc [4];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0x6c8) = 1;
  local_b8 = *(longlong *)(param_1 + 0x260);
  uStack_70 = *(undefined8 *)(param_1 + 0x268);
  local_a8 = *(longlong **)(param_1 + 0x270);
  uStack_60 = *(undefined8 *)(param_1 + 0x278);
  local_58 = *(undefined8 *)(param_1 + 0x280);
  uStack_50 = *(undefined8 *)(param_1 + 0x288);
  local_48 = *(undefined8 *)(param_1 + 0x290);
  uStack_40 = *(undefined8 *)(param_1 + 0x298);
  uVar6 = local_48;
  uVar7 = uStack_40;
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_68 = local_a8;
  uVar3 = uStack_60;
  local_78 = (wchar_t *)local_b8;
  uVar2 = uStack_70;
  *(ulonglong *)(param_1 + 0x290) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(param_1 + 0x298) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(param_1 + 0x280) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0x288) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(ulonglong *)(param_1 + 0x278) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(ulonglong *)(param_1 + 0x268) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar2;
  uStack_60 = uVar3;
  local_58 = uVar4;
  uStack_50 = uVar5;
  local_48 = uVar6;
  uStack_40 = uVar7;
  if (local_b8 != 0) {
    plVar8 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar8 = (longlong *)&local_98;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar9 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
  local_78 = L"SelectionChange";
  uStack_70._0_4_ = 0xf;
  FUN_1446e940c(&local_b8,&local_78);
  local_78 = L"UMeshTopologySelectionMechanic";
  uStack_70 = CONCAT44(uStack_70._4_4_,0x1e);
  FUN_1446e940c(local_bc,&local_78);
  FUN_140208bae(&local_78,local_bc,&local_b8,L"Selection");
  (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x10))(lVar9 + 0x28,&local_78);
  if (local_78 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_78 + 0x10))();
  }
  FUN_148531782(param_1);
  FUN_145c3f772(param_1 + 0x490,param_1 + 0x390);
  FUN_145c3f772(param_1 + 0x4e0,param_1 + 0x3e0);
  FUN_145c3f772(param_1 + 0x530,param_1 + 0x430);
  FUN_145c3f772(param_1 + 0x580,param_1 + 0x390);
  FUN_145c3f772(param_1 + 0x5d0,param_1 + 0x3e0);
  FUN_145c3f772(param_1 + 0x620,param_1 + 0x430);
  FUN_1485247b8(param_1,&local_78,0);
  uVar1 = (undefined4)local_78;
  *(undefined4 *)(param_1 + 0x673) = local_78._3_4_;
  *(undefined4 *)(param_1 + 0x670) = uVar1;
  *(undefined1 *)(param_1 + 0x676) = *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0xaf);
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148532006 FUN_148532006 body=447 status=ok
// SIG undefined FUN_148532006(void)

void FUN_148532006(longlong param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [296];
  undefined *local_98;
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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(int *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
  }
  memcpy(local_1c0,param_2,0x128);
  local_98 = (undefined *)0x0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x150,0x10);
  *puVar7 = &PTR_FUN_14af18170;
  puVar7[2] = param_1;
  local_88 = puVar7;
  memcpy(puVar7 + 3,local_1c8,0x130);
  if (puVar7 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_98 = &DAT_143ba5d5c;
  }
  local_58 = *(longlong *)(param_1 + 0x260);
  uStack_50 = *(undefined8 *)(param_1 + 0x268);
  local_48 = *(longlong **)(param_1 + 0x270);
  uStack_40 = *(undefined8 *)(param_1 + 0x278);
  local_38 = *(undefined8 *)(param_1 + 0x280);
  uStack_30 = *(undefined8 *)(param_1 + 0x288);
  local_28 = *(undefined8 *)(param_1 + 0x290);
  uStack_20 = *(undefined8 *)(param_1 + 0x298);
  uVar5 = local_28;
  uVar6 = uStack_20;
  uVar3 = local_38;
  uVar4 = uStack_30;
  uVar2 = uStack_40;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0x290) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0x298) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(param_1 + 0x280) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0x288) = CONCAT44(uStack_6c,uStack_70);
  *(longlong **)(param_1 + 0x270) = local_88;
  *(ulonglong *)(param_1 + 0x278) = CONCAT44(uStack_7c,uStack_80);
  *(undefined **)(param_1 + 0x260) = local_98;
  *(ulonglong *)(param_1 + 0x268) = CONCAT44(uStack_8c,uStack_90);
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
  local_98 = (undefined *)local_58;
  local_88 = local_48;
  uStack_50 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_28 = uVar5;
  uStack_20 = uVar6;
  if (local_58 != 0) {
    plVar8 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar8 = (longlong *)&local_78;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485321da FUN_1485321da body=394 status=ok
// SIG undefined FUN_1485321da(void)

void FUN_1485321da(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar1 = *(code **)(param_1 + 0x260);
  if (pcVar1 != (code *)0x0) {
    plVar9 = (longlong *)(param_1 + 0x280);
    if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 0x270);
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar1)(uVar8);
    local_a8 = *(longlong *)(param_1 + 0x260);
    uStack_60 = *(undefined8 *)(param_1 + 0x268);
    local_98 = *(longlong **)(param_1 + 0x270);
    uStack_50 = *(undefined8 *)(param_1 + 0x278);
    local_48 = *(undefined8 *)(param_1 + 0x280);
    uStack_40 = *(undefined8 *)(param_1 + 0x288);
    local_38 = *(undefined8 *)(param_1 + 0x290);
    uStack_30 = *(undefined8 *)(param_1 + 0x298);
    uVar5 = local_38;
    uVar6 = uStack_30;
    uVar3 = local_48;
    uVar4 = uStack_40;
    local_58 = local_98;
    uVar2 = uStack_50;
    local_68 = local_a8;
    uVar8 = uStack_60;
    *(ulonglong *)(param_1 + 0x290) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(param_1 + 0x298) = CONCAT44(uStack_6c,uStack_70);
    *(ulonglong *)(param_1 + 0x280) = CONCAT44(uStack_84,local_88);
    *(ulonglong *)(param_1 + 0x288) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(ulonglong *)(param_1 + 0x278) = CONCAT44(uStack_8c,uStack_90);
    *(longlong *)(param_1 + 0x260) = 0;
    *(ulonglong *)(param_1 + 0x268) = CONCAT44(uStack_9c,uStack_a0);
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
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = uVar8;
    uStack_50 = uVar2;
    local_48 = uVar3;
    uStack_40 = uVar4;
    local_38 = uVar5;
    uStack_30 = uVar6;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = (longlong *)&local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0x6c8) = 0;
  FUN_140cd4190(param_1 + 0x678);
  cVar7 = FUN_148544206(param_1 + 0x390,param_1 + 0x490);
  if (cVar7 == '\0') {
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
    FUN_1447f69b6(param_1 + 0x48);
  }
  FUN_14853184c(param_1);
  plVar9 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  lVar10 = (**(code **)(*plVar9 + 0x2c8))(plVar9);
  (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485323bc FUN_1485323bc body=164 status=ok
// SIG undefined FUN_1485323bc(void)

undefined8 * FUN_1485323bc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x488);
  puVar2 = param_2;
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x480) == (int)plVar1[0x3d]) {
      *(undefined8 *)(param_1 + 0x488) = 0;
      (**(code **)(*plVar1 + 0x40))(plVar1,1);
    }
    else {
      FUN_145c3f772(plVar1 + 0x1f,param_1 + 0x390);
      FUN_145c3f772(plVar1 + 0x29,param_1 + 0x3e0);
      FUN_145c3f772(plVar1 + 0x33,param_1 + 0x430);
      *param_2 = *(undefined8 *)(param_1 + 0x488);
      puVar2 = (undefined8 *)(param_1 + 0x488);
    }
  }
  *puVar2 = 0;
  return param_2;
}



// FUNCTION 148532460 FUN_148532460 body=170 status=ok
// SIG undefined FUN_148532460(void)

undefined8 * FUN_148532460(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  param_2[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar2;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0x3ff0000000000000;
  if (((*(int *)(param_1 + 1000) != *(int *)(param_1 + 0x414)) ||
      (*(int *)(param_1 + 0x438) != *(int *)(param_1 + 0x464))) ||
     (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4))) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x60);
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_1 + 0x390);
  }
  if (param_3 != '\0') {
    FUN_1483bed02(param_2,param_1 + 0x200);
  }
  return param_2;
}



// FUNCTION 14853250a FUN_14853250a body=366 status=ok
// SIG undefined FUN_14853250a(void)

undefined8 FUN_14853250a(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [48];
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(int *)(param_1 + 1000) == *(int *)(param_1 + 0x414)) &&
      (*(int *)(param_1 + 0x438) == *(int *)(param_1 + 0x464))) &&
     (*(int *)(param_1 + 0x398) == *(int *)(param_1 + 0x3c4))) {
    if (param_3 == '\0') {
      FUN_145c688c4(*(undefined8 *)(param_1 + 0x98),param_2,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_e8);
    }
    local_90 = *(longlong *)(param_1 + 0x200);
    uStack_88 = *(undefined8 *)(param_1 + 0x208);
    local_80 = *(undefined8 *)(param_1 + 0x210);
    uStack_78 = *(undefined8 *)(param_1 + 0x218);
    local_70 = *(undefined8 *)(param_1 + 0x220);
    uStack_68 = *(undefined8 *)(param_1 + 0x228);
    local_60 = *(undefined8 *)(param_1 + 0x230);
    local_58 = *(undefined4 *)(param_1 + 0x240);
    uStack_54 = *(undefined4 *)(param_1 + 0x244);
    uStack_50 = *(undefined4 *)(param_1 + 0x248);
    uStack_4c = *(undefined4 *)(param_1 + 0x24c);
    local_48 = *(undefined8 *)(param_1 + 0x250);
    FUN_145c688c4(*(undefined8 *)(param_1 + 0x98),local_c0,0);
    FUN_146c72bca(param_2,local_c0,&local_90);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x60);
    if (param_3 == '\0') {
      local_38 = &local_90;
      puVar3 = &local_40;
      pcVar2 = (code *)&LAB_143ba5f1a;
    }
    else {
      local_28 = &local_90;
      puVar3 = &local_30;
      pcVar2 = FUN_143ba5df2;
    }
    *puVar3 = pcVar2;
    local_90 = param_1;
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_1 + 0x390);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853267c FUN_14853267c body=7 status=ok
// SIG undefined FUN_14853267c(void)

void FUN_14853267c(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x7c2) = param_2;
  return;
}



// FUNCTION 148532684 FUN_148532684 body=134 status=ok
// SIG undefined FUN_148532684(void)

void FUN_148532684(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ee640();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145c3f772(param_2 + 0x390,param_1 + 0xf8);
      FUN_145c3f772(param_2 + 0x3e0,param_1 + 0x148);
      FUN_145c3f772(param_2 + 0x430,param_1 + 0x198);
      FUN_1447f69b6(param_2 + 0x48);
      return;
    }
  }
  return;
}



// FUNCTION 14853270a FUN_14853270a body=128 status=ok
// SIG undefined FUN_14853270a(void)

void FUN_14853270a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459ee640();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145c3f772(param_2 + 0x390,param_1 + 8);
      FUN_145c3f772(param_2 + 0x3e0,param_1 + 0x58);
      FUN_145c3f772(param_2 + 0x430,param_1 + 0xa8);
      FUN_1447f69b6(param_2 + 0x48);
      return;
    }
  }
  return;
}



// FUNCTION 14853278a FUN_14853278a body=32 status=ok
// SIG undefined FUN_14853278a(void)

undefined8 FUN_14853278a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FMeshTopologySelectionMechanicSelectionChange");
  return param_2;
}



// FUNCTION 1485327aa FUN_1485327aa body=290 status=ok
// SIG undefined FUN_1485327aa(void)

longlong * FUN_1485327aa(longlong *param_1,longlong *param_2)

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



// FUNCTION 1485328ce FUN_1485328ce body=526 status=ok
// SIG undefined FUN_1485328ce(void)

longlong FUN_1485328ce(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    lVar2 = param_1 + 0xb8;
    FUN_146c83e96(lVar2,1,1);
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x58);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                          (*(longlong **)(param_1 + 0x60),iVar6);
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        local_58 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
        plVar1 = (longlong *)(lVar3 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
        local_68 = *plVar1;
        lStack_60 = plVar1[1];
        FUN_146c83f12(lVar2,iVar6,&local_68);
        iVar6 = iVar6 + 1;
      } while (iVar4 != iVar6);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        local_68 = 0;
        lStack_60 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))
                  (*(longlong **)(param_1 + 0x60),iVar6,&local_68);
        FUN_146c83fd2(lVar2,iVar6,&local_68);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        iVar6 = iVar6 + 1;
      } while (iVar4 != iVar6);
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  else {
    if (*(char *)(param_1 + 0xb1) != '\0') goto LAB_148532aaa;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x58);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                          (*(longlong **)(param_1 + 0x60),iVar6);
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        local_58 = *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
        plVar1 = (longlong *)(lVar2 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
        local_68 = *plVar1;
        lStack_60 = plVar1[1];
        FUN_146c84584(param_1 + 0xb8,iVar6,&local_68);
        iVar6 = iVar6 + 1;
      } while (iVar4 != iVar6);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        local_68 = 0;
        lStack_60 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))
                  (*(longlong **)(param_1 + 0x60),iVar6,&local_68);
        FUN_146c845f8(param_1 + 0xb8,iVar6,&local_68);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        iVar6 = iVar6 + 1;
      } while (iVar4 != iVar6);
    }
  }
  *(undefined1 *)(param_1 + 0xb1) = 1;
LAB_148532aaa:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 + 0xb8;
}



// FUNCTION 148532ade FUN_148532ade body=2617 status=ok
// SIG undefined FUN_148532ade(void)

ulonglong FUN_148532ade(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                       undefined8 param_5,longlong param_6,undefined8 *param_7,undefined4 *param_8)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_248 [40];
  ulonglong local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [4];
  uint local_204;
  longlong local_200;
  uint local_1f8;
  undefined4 local_1f4;
  int local_1f0;
  undefined8 local_1e8;
  uint local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined4 *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8 [20];
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  code *local_118;
  undefined8 local_108;
  undefined **local_f8;
  longlong local_f0;
  code *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  longlong local_b0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_1c8 = (undefined4 *)0x0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  if (*(char *)(param_2 + 5) == '\0') {
    local_c8 = 0;
    local_b8 = &PTR_LAB_14af18260;
    local_d8 = FUN_143ba65a0;
    puVar15 = local_1b8;
    local_b0 = param_1;
    cVar5 = FUN_146c84814(param_5,param_3,puVar15);
    if (cVar5 != '\0') {
LAB_148532c2c:
      if ((*(char *)(param_2 + 6) != '\0') ||
         (cVar5 = FUN_148534332(puVar15 + 8,param_3,param_4,*(undefined1 *)(param_2 + 3)),
         cVar5 == '\0')) {
        uVar8 = uStack_1d0;
        param_7[2] = *(undefined8 *)(puVar15 + 0xc);
        uVar2 = *(undefined8 *)(puVar15 + 10);
        *param_7 = *(undefined8 *)(puVar15 + 8);
        param_7[1] = uVar2;
        if (*(char *)(param_2 + 5) == '\x01') {
          lVar12 = (longlong)(int)uStack_1d0;
          uVar6 = (int)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar6);
          if (uStack_1d0._4_4_ < uVar6) {
            FUN_1446f48e2(&local_1d8,uVar8 & 0xffffffff);
          }
          *(undefined4 *)(local_1d8 + lVar12 * 4) = *puVar15;
          if ((longlong)(int)uStack_1c0 != 0) {
            lVar12 = (longlong)(int)uStack_1c0 * 0x50;
            puVar7 = local_1c8;
            do {
              uVar8 = uStack_1d0;
              if (puVar7 != puVar15) {
                dVar19 = *(double *)(puVar7 + 0xc) - *(double *)(puVar15 + 0xc);
                dVar20 = *(double *)(puVar7 + 10) - *(double *)(puVar15 + 10);
                dVar21 = *(double *)(puVar7 + 8) - *(double *)(puVar15 + 8);
                dVar22 = SQRT(dVar19 * dVar19 + dVar21 * dVar21 + dVar20 * dVar20);
                dVar23 = 1.0 / dVar22;
                if (0.0 < dVar22) {
                  dVar19 = dVar19 * dVar23;
                  dVar20 = dVar20 * dVar23;
                }
                else {
                  dVar20 = 0.0;
                  dVar19 = 0.0;
                }
                if (ABS(dVar19 * (double)param_3[5] +
                        (double)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar21 * dVar23)) *
                        (double)param_3[3] + dVar20 * (double)param_3[4] + -1.0) <
                    9.999999747378752e-05) {
                  lVar17 = (longlong)(int)uStack_1d0;
                  uVar6 = (int)uStack_1d0 + 1;
                  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar6);
                  if (uStack_1d0._4_4_ < uVar6) {
                    FUN_1446f48e2(&local_1d8,uVar8 & 0xffffffff);
                  }
                  *(undefined4 *)(local_1d8 + lVar17 * 4) = *puVar7;
                }
              }
              puVar7 = puVar7 + 0x14;
              lVar12 = lVar12 + -0x50;
            } while (lVar12 != 0);
          }
        }
        if ((*(char *)(param_2 + 4) == '\x01') && (*(char *)(param_2 + 1) == '\x01')) {
          local_148 = 0;
          local_140 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_13c = 0xffffffff00000080;
          local_134 = 0;
          local_128 = (undefined1 *)0x0;
          local_120 = 0;
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                            (*(longlong **)(param_1 + 0x60),*puVar15);
          lVar12 = *(longlong *)(param_1 + 0x58) + 0xb8;
          FUN_146be983e(&local_200,lVar12,uVar6,0);
          local_218 = lVar12;
          if ((local_200 != lVar12) ||
             (((local_1f8 != uVar6 || ((int)local_1e8 != -1)) || (local_1e8._4_4_ != -1)))) {
            local_220 = (ulonglong)(uVar6 >> 9);
            uVar8 = (ulonglong)(uVar6 & 0x1ff);
            local_210 = param_6 + 0xa0;
            do {
              uVar1 = local_1e0;
              lVar12 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1c0) +
                        (ulonglong)(local_1e0 >> 9) * 8);
              uVar16 = (ulonglong)((local_1e0 & 0x1ff) << 4);
              uVar10 = *(uint *)(lVar12 + uVar16);
              if (uVar10 == uVar6) {
                uVar10 = *(uint *)(lVar12 + 4 + uVar16);
              }
              lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
              lVar17 = *(longlong *)(lVar12 + (ulonglong)(uVar10 >> 9) * 8);
              uVar16 = (ulonglong)(uVar10 & 0x1ff);
              lVar12 = *(longlong *)(lVar12 + local_220 * 8);
              dVar19 = *(double *)(lVar17 + 0x10 + uVar16 * 0x18) -
                       *(double *)(lVar12 + 0x10 + uVar8 * 0x18);
              dVar20 = *(double *)(lVar17 + 8 + uVar16 * 0x18) -
                       *(double *)(lVar12 + 8 + uVar8 * 0x18);
              dVar21 = *(double *)(lVar17 + uVar16 * 0x18) - *(double *)(lVar12 + uVar8 * 0x18);
              dVar22 = SQRT(dVar19 * dVar19 + dVar21 * dVar21 + dVar20 * dVar20);
              dVar23 = 1.0 / dVar22;
              if (0.0 < dVar22) {
                dVar19 = dVar19 * dVar23;
                dVar20 = dVar20 * dVar23;
              }
              else {
                dVar20 = 0.0;
                dVar19 = 0.0;
              }
              if ((ABS(dVar19 * (double)param_3[5] +
                       (double)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar21 * dVar23)) *
                       (double)param_3[3] + dVar20 * (double)param_3[4] + -1.0) <
                   9.999999747378752e-05) &&
                 (local_204 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))
                                        (*(longlong **)(param_1 + 0x60),local_1e0),
                 -1 < (int)local_204)) {
                FUN_1447cbafe(local_210,local_208,&local_204,0);
                FUN_1447cbafe(&local_168,local_208,&local_204,0);
                if (param_8 != (undefined4 *)0x0) {
                  plVar9 = (longlong *)
                           (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))
                                     (*(longlong **)(param_1 + 0x60),local_204);
                  uVar11 = 0xffffffff;
                  if ((longlong)(int)plVar9[1] == 0) goto LAB_14853350f;
                  lVar12 = (longlong)(int)plVar9[1] << 2;
                  lVar17 = 0;
                  goto LAB_1485334fb;
                }
                break;
              }
              if (local_1f0 == 0) {
                local_1f4 = 0xffffffff;
                local_1e8 = 0xffffffffffffffff;
                local_1e8._4_4_ = -1;
                local_1e8._0_4_ = -1;
              }
              else {
                FUN_146be9922(&local_200);
              }
            } while (((local_200 != local_218) || (local_1f8 != uVar6)) ||
                    (((int)local_1e8 != -1 || (local_1e8._4_4_ != -1))));
          }
          goto LAB_148532f7d;
        }
        goto LAB_148532dc7;
      }
    }
  }
  else {
    local_108 = 0;
    local_f8 = &PTR_LAB_14af18260;
    local_118 = FUN_143ba65a0;
    local_f0 = param_1;
    cVar5 = FUN_146c849d6(param_5,param_3,&local_1c8);
    if (cVar5 != '\0') {
      if ((longlong)(int)uStack_1c0 != 0) {
        lVar12 = (longlong)(int)uStack_1c0 * 0x50;
        dVar19 = 1.79769313486232e+308;
        puVar15 = (undefined4 *)0x0;
        puVar7 = local_1c8;
        do {
          dVar20 = *(double *)(puVar7 + 0xe);
          puVar4 = puVar7;
          if (dVar19 <= *(double *)(puVar7 + 0xe)) {
            dVar20 = dVar19;
            puVar4 = puVar15;
          }
          puVar15 = puVar4;
          dVar19 = dVar20;
          puVar7 = puVar7 + 0x14;
          lVar12 = lVar12 + -0x50;
        } while (lVar12 != 0);
        if (puVar15 != (undefined4 *)0x0) goto LAB_148532c2c;
      }
    }
  }
  goto LAB_148532e62;
  while( true ) {
    lVar17 = lVar17 + 1;
    lVar12 = lVar12 + -4;
    if (lVar12 == 0) break;
LAB_1485334fb:
    if (*(uint *)(*plVar9 + lVar17 * 4) == uVar1) {
      uVar11 = (undefined4)lVar17;
      break;
    }
  }
LAB_14853350f:
  *param_8 = uVar11;
LAB_148532f7d:
  iVar14 = (int)uStack_160;
  if (((*(char *)(param_2 + 5) == '\x01') && (local_134 < (int)uStack_160)) && (1 < (int)uStack_1d0)
     ) {
    local_218 = param_6 + 0xa0;
    local_220 = 1;
    do {
      lVar12 = *(longlong *)(param_1 + 0x58) + 0xb8;
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                        (*(longlong **)(param_1 + 0x60),*(undefined4 *)(local_1d8 + local_220 * 4));
      FUN_146be983e(&local_200,lVar12,uVar6,0);
      if (local_200 != lVar12) goto LAB_1485330b8;
      if (local_1f8 != uVar6) goto LAB_1485330b8;
      if ((int)local_1e8 != -1) goto LAB_1485330b8;
      uVar8 = local_220;
      iVar14 = local_1e8._4_4_;
      while (local_220 = uVar8, iVar14 != -1) {
LAB_1485330b8:
        do {
          lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
          lVar18 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1c0) +
                    (ulonglong)(local_1e0 >> 9) * 8);
          uVar8 = (ulonglong)((local_1e0 & 0x1ff) << 4);
          uVar10 = *(uint *)(lVar18 + uVar8);
          uVar1 = *(uint *)(lVar18 + 4 + uVar8);
          lVar18 = *(longlong *)(lVar17 + (ulonglong)(uVar10 >> 9) * 8);
          uVar16 = (ulonglong)uVar10 & 0x1ff;
          lVar17 = *(longlong *)(lVar17 + (ulonglong)(uVar1 >> 9) * 8);
          uVar8 = (ulonglong)uVar1 & 0x1ff;
          dVar19 = *(double *)(lVar18 + 0x10 + uVar16 * 0x18) -
                   *(double *)(lVar17 + 0x10 + uVar8 * 0x18);
          dVar20 = *(double *)(lVar18 + 8 + uVar16 * 0x18) - *(double *)(lVar17 + 8 + uVar8 * 0x18);
          dVar21 = *(double *)(lVar18 + uVar16 * 0x18) - *(double *)(lVar17 + uVar8 * 0x18);
          dVar22 = SQRT(dVar19 * dVar19 + dVar21 * dVar21 + dVar20 * dVar20);
          dVar23 = 1.0 / dVar22;
          if (0.0 < dVar22) {
            dVar19 = dVar19 * dVar23;
            dVar20 = dVar20 * dVar23;
          }
          else {
            dVar20 = 0.0;
            dVar19 = 0.0;
          }
          if ((ABS(ABS(dVar19 * (double)param_3[5] +
                       (double)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar21 * dVar23)) *
                       (double)param_3[3] + dVar20 * (double)param_3[4]) + -1.0) <
               9.999999747378752e-05) &&
             (local_204 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))(),
             -1 < (int)local_204)) {
            if ((int)uStack_160 != local_134) {
              puVar13 = local_128;
              if (local_128 == (undefined1 *)0x0) {
                puVar13 = local_130;
              }
              for (iVar14 = *(int *)(puVar13 + (ulonglong)(local_120 + 0x7fffffffU & local_204) * 4)
                  ; iVar14 != -1; iVar14 = *(int *)(local_168 + (longlong)iVar14 * 0xc + 4)) {
                if (*(uint *)(local_168 + (longlong)iVar14 * 0xc) == local_204) goto LAB_148533223;
              }
            }
            FUN_1447cbafe(local_218,local_208,&local_204);
            FUN_1447cbafe(&local_168,local_208,&local_204);
          }
LAB_148533223:
          if (local_1f0 == 0) {
            local_1f4 = 0xffffffff;
            local_1e8 = 0xffffffffffffffff;
            local_1e8._4_4_ = -1;
            local_1e8._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_200);
          }
        } while (((local_200 != lVar12) || (local_1f8 != uVar6)) ||
                (uVar8 = local_220, iVar14 = local_1e8._4_4_, (int)local_1e8 != -1));
      }
      local_220 = uVar8 + 1;
    } while ((longlong)local_220 < (longlong)(int)uStack_1d0);
    iVar14 = (int)uStack_160;
    local_220 = uVar8;
  }
  iVar3 = local_134;
  local_120 = 0;
  if (local_128 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_168);
  param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  if (iVar3 < iVar14) goto LAB_148532e69;
LAB_148532dc7:
  lVar12 = local_1d8;
  if (*(char *)(param_2 + 2) == '\x01') {
    if (*(char *)(param_2 + 5) == '\x01') {
      lVar17 = (longlong)(int)uStack_1d0;
      if (lVar17 == 0) {
        param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_148532e69;
      }
      lVar18 = 0;
      param_3 = &local_168;
      do {
        local_168 = CONCAT44(local_168._4_4_,*(undefined4 *)(lVar12 + lVar18));
        FUN_1447cbafe(param_6 + 0x50,&local_200,param_3,0);
        lVar18 = lVar18 + 4;
      } while (lVar17 * 4 != lVar18);
    }
    else {
      FUN_1447cbafe(param_6 + 0x50,&local_168,puVar15,0);
    }
    param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    goto LAB_148532e69;
  }
LAB_148532e62:
  param_3 = (longlong *)0x0;
LAB_148532e69:
  if (local_1d8 != 0) {
    FUN_1400020a8(local_1d8);
  }
  if (local_1c8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return (ulonglong)param_3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148533518 FUN_148533518 body=3609 status=ok
// SIG undefined FUN_148533518(void)

ulonglong FUN_148533518(double *param_1,char *param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,longlong param_6,uint *param_7,uint *param_8)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint *puVar21;
  longlong *plVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  double dVar26;
  int iVar27;
  uint *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_308 [32];
  double local_2e8;
  double local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  double local_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b4 [4];
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_278;
  double dStack_270;
  double local_268;
  longlong local_258;
  undefined8 uStack_250;
  uint *local_248;
  undefined8 uStack_240;
  uint local_230 [20];
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  int local_194;
  undefined1 local_190 [8];
  undefined1 *local_188;
  int local_180;
  code *local_178;
  undefined8 local_168;
  undefined **local_158;
  double *local_150;
  code *local_138;
  undefined8 local_128;
  undefined **local_118;
  double *local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_248 = (uint *)0x0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  if (param_2[5] == '\0') {
    local_128 = 0;
    local_118 = &PTR_LAB_14af18280;
    local_138 = FUN_143ba6664;
    puVar28 = local_230;
    local_110 = param_1;
    cVar15 = FUN_146c84bb4(param_5,param_3,puVar28);
    if (cVar15 != '\0') {
LAB_1485336a5:
      if ((param_2[6] != '\0') ||
         (cVar15 = FUN_148534332(puVar28 + 8,param_3,param_4,param_2[3]), cVar15 == '\0')) {
        uVar30 = uStack_250;
        *(undefined8 *)(param_7 + 4) = *(undefined8 *)(puVar28 + 0xc);
        uVar20 = puVar28[9];
        uVar17 = puVar28[10];
        uVar16 = puVar28[0xb];
        *param_7 = puVar28[8];
        param_7[1] = uVar20;
        param_7[2] = uVar17;
        param_7[3] = uVar16;
        if (param_2[5] == '\x01') {
          uVar20 = *puVar28;
          uVar17 = puVar28[0x10];
          lVar23 = (longlong)(int)uStack_250;
          uVar16 = (int)uStack_250 + 1;
          uStack_250 = CONCAT44(uStack_250._4_4_,uVar16);
          if (uStack_250._4_4_ < uVar16) {
            FUN_146be54b8(&local_258,uVar30 & 0xffffffff);
          }
          *(ulonglong *)(local_258 + lVar23 * 8) = CONCAT44(uVar17,uVar20);
          plVar22 = (longlong *)
                    (**(code **)(*(longlong *)param_1[0xc] + 0x30))
                              ((longlong *)param_1[0xc],*puVar28);
          uVar20 = *(uint *)(*plVar22 + (longlong)(int)puVar28[0x10] * 4);
          dVar33 = param_1[0xb];
          lVar23 = *(longlong *)
                    (*(longlong *)((longlong)dVar33 + 0x1c0) + (ulonglong)(uVar20 >> 9) * 8);
          uVar30 = (ulonglong)((uVar20 & 0x1ff) << 4);
          uVar20 = *(uint *)(lVar23 + uVar30);
          uVar17 = *(uint *)(lVar23 + 4 + uVar30);
          uVar30 = (ulonglong)(uVar20 >> 9);
          lVar23 = *(longlong *)(*(longlong *)((longlong)dVar33 + 0x10) + uVar30 * 8);
          lVar31 = (ulonglong)((uVar20 & 0x1ff) << 3) * 3;
          local_1d0 = *(double *)(lVar23 + 0x10 + lVar31) + *(double *)(param_3 + 0x28);
          local_1d8 = *(double *)(lVar23 + 8 + lVar31) + *(double *)(param_3 + 0x20);
          local_1e0 = *(double *)(lVar23 + lVar31) + *(double *)(param_3 + 0x18);
          lVar23 = *(longlong *)
                    (*(longlong *)((longlong)dVar33 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
          uVar24 = (ulonglong)(uVar17 & 0x1ff);
          local_268 = *(double *)(lVar23 + 0x10 + uVar24 * 0x18);
          pdVar1 = (double *)(lVar23 + uVar24 * 0x18);
          local_278 = *pdVar1;
          dStack_270 = pdVar1[1];
          lVar23 = *(longlong *)(*(longlong *)((longlong)dVar33 + 0x10) + uVar30 * 8);
          local_288 = *(double *)(lVar23 + 0x10 + lVar31);
          pdVar1 = (double *)(lVar23 + lVar31);
          local_298 = *pdVar1;
          dStack_290 = pdVar1[1];
          FUN_146baf581(&local_1c8);
          dVar2 = dStack_1c0;
          dVar33 = local_1c8;
          if ((longlong)(int)uStack_240 != 0) {
            dVar34 = local_288 * local_1b8 + local_298 * local_1c8 + dStack_290 * dStack_1c0;
            lVar23 = (longlong)(int)uStack_240 * 0x50;
            puVar21 = local_248;
            do {
              if (puVar21 != puVar28) {
                plVar22 = (longlong *)
                          (**(code **)(*(longlong *)param_1[0xc] + 0x30))
                                    ((longlong *)param_1[0xc],*puVar21);
                uVar30 = uStack_250;
                uVar20 = puVar21[0x10];
                uVar17 = *(uint *)(*plVar22 + (longlong)(int)uVar20 * 4);
                lVar31 = *(longlong *)((longlong)param_1[0xb] + 0x10);
                lVar4 = *(longlong *)
                         (*(longlong *)((longlong)param_1[0xb] + 0x1c0) +
                         (ulonglong)(uVar17 >> 9) * 8);
                uVar24 = (ulonglong)((uVar17 & 0x1ff) << 4);
                uVar17 = *(uint *)(lVar4 + uVar24);
                lVar5 = *(longlong *)(lVar31 + (ulonglong)(uVar17 >> 9) * 8);
                uVar29 = (ulonglong)(uVar17 & 0x1ff);
                if (ABS((*(double *)(lVar5 + 0x10 + uVar29 * 0x18) * local_1b8 +
                        *(double *)(lVar5 + uVar29 * 0x18) * dVar33 +
                        *(double *)(lVar5 + 8 + uVar29 * 0x18) * dVar2) - dVar34) <
                    9.999999747378752e-05) {
                  uVar17 = *(uint *)(lVar4 + uVar24 + 4);
                  lVar31 = *(longlong *)(lVar31 + (ulonglong)(uVar17 >> 9) * 8);
                  uVar24 = (ulonglong)(uVar17 & 0x1ff);
                  if (ABS((*(double *)(lVar31 + 0x10 + uVar24 * 0x18) * local_1b8 +
                          *(double *)(lVar31 + uVar24 * 0x18) * dVar33 +
                          *(double *)(lVar31 + 8 + uVar24 * 0x18) * dVar2) - dVar34) <
                      9.999999747378752e-05) {
                    lVar31 = (longlong)(int)uStack_250;
                    uVar17 = (int)uStack_250 + 1;
                    uStack_250 = CONCAT44(uStack_250._4_4_,uVar17);
                    dVar26 = (double)(ulonglong)*puVar21;
                    if (uStack_250._4_4_ < uVar17) {
                      local_2e8 = (double)(ulonglong)*puVar21;
                      FUN_146be54b8(&local_258,uVar30 & 0xffffffff);
                      dVar26 = local_2e8;
                    }
                    *(ulonglong *)(local_258 + lVar31 * 8) =
                         (ulonglong)uVar20 << 0x20 | (ulonglong)dVar26;
                  }
                }
              }
              puVar21 = puVar21 + 0x14;
              lVar23 = lVar23 + -0x50;
            } while (lVar23 != 0);
          }
        }
        if ((param_2[4] == '\x01') && (*param_2 == '\x01')) {
          local_1a8 = 0;
          local_1a0 = 0;
          local_1c8 = 0.0;
          dStack_1c0 = 0.0;
          local_19c = 0xffffffff00000080;
          local_194 = 0;
          local_188 = (undefined1 *)0x0;
          local_180 = 0;
          plVar22 = (longlong *)
                    (**(code **)(*(longlong *)param_1[0xc] + 0x30))
                              ((longlong *)param_1[0xc],*puVar28);
          uVar20 = *(uint *)(*plVar22 + (longlong)(int)puVar28[0x10] * 4);
          local_2e0 = (double)CONCAT44(local_2e0._4_4_,uVar20);
          dVar33 = param_1[0xb];
          lVar23 = *(longlong *)
                    (*(longlong *)((longlong)dVar33 + 0x1c0) + (ulonglong)(uVar20 >> 9) * 8);
          uVar30 = (ulonglong)((uVar20 & 0x1ff) << 4);
          uVar20 = *(uint *)(lVar23 + 4 + uVar30);
          local_2d4 = *(undefined4 *)(lVar23 + 8 + uVar30);
          local_2d8 = *(undefined4 *)(lVar23 + 0xc + uVar30);
          lVar31 = *(longlong *)
                    (*(longlong *)((longlong)dVar33 + 0x10) +
                    (ulonglong)(*(uint *)(lVar23 + uVar30) >> 9) * 8);
          uVar30 = (ulonglong)*(uint *)(lVar23 + uVar30) & 0x1ff;
          local_268 = *(double *)(lVar31 + 0x10 + uVar30 * 0x18);
          pdVar1 = (double *)(lVar31 + uVar30 * 0x18);
          local_278 = *pdVar1;
          dStack_270 = pdVar1[1];
          lVar23 = *(longlong *)
                    (*(longlong *)((longlong)dVar33 + 0x10) + (ulonglong)(uVar20 >> 9) * 8);
          uVar30 = (ulonglong)uVar20 & 0x1ff;
          local_288 = *(double *)(lVar23 + 0x10 + uVar30 * 0x18);
          pdVar1 = (double *)(lVar23 + uVar30 * 0x18);
          local_298 = *pdVar1;
          dStack_290 = pdVar1[1];
          local_2a0 = local_268 + *(double *)(param_3 + 0x28);
          local_2a8 = dStack_270 + *(double *)(param_3 + 0x20);
          local_2b0 = local_278 + *(double *)(param_3 + 0x18);
          FUN_146baf581(&local_1e0,&local_278,&local_298);
          dVar13 = local_1d8;
          local_2e8 = local_1e0;
          local_2d0 = local_1d0;
          dVar7 = local_1d0 * local_268 + local_1e0 * local_278 + local_1d8 * dStack_270;
          dVar6 = local_288 - local_268;
          dVar11 = dStack_290 - dStack_270;
          dVar8 = local_298 - local_278;
          dVar9 = dVar8 * *(double *)(param_3 + 0x20) - *(double *)(param_3 + 0x18) * dVar11;
          dVar10 = dVar6 * *(double *)(param_3 + 0x18) - *(double *)(param_3 + 0x28) * dVar8;
          local_2c8 = -dVar6;
          uStack_2c0 = 0x8000000000000000;
          dVar26 = dVar11 * *(double *)(param_3 + 0x28) - *(double *)(param_3 + 0x20) * dVar6;
          FUN_146c12888(param_1[0xb],&local_1e0,(ulonglong)local_2e0 & 0xffffffff);
          dVar12 = local_2d0;
          lVar23 = *(longlong *)
                    (*(longlong *)((longlong)param_1[0xb] + 0x10) +
                    ((ulonglong)local_1e0 >> 9 & 0x7fffff) * 8);
          uVar30 = (ulonglong)local_1e0 & 0x1ff;
          dVar33 = *(double *)(lVar23 + uVar30 * 0x18);
          dVar2 = *(double *)(lVar23 + 8 + uVar30 * 0x18);
          dVar34 = *(double *)(lVar23 + 0x10 + uVar30 * 0x18);
          local_2e0 = dVar13;
          if ((9.999999747378752e-05 <=
               ABS((local_2d0 * dVar34 + local_2e8 * dVar33 + dVar13 * dVar2) - dVar7)) ||
             (dVar34 = dVar34 - local_268, dVar2 = dVar2 - dStack_270, dVar33 = dVar33 - local_278,
             (dVar8 * dVar2 + dVar33 * -dVar11) * dVar9 +
             (dVar2 * local_2c8 + dVar11 * dVar34) * dVar26 +
             (dVar33 * dVar6 + dVar34 * -dVar8) * dVar10 <= 0.0)) {
            uVar18 = SUB84(dVar13,0);
            uVar32 = (undefined4)((ulonglong)dVar13 >> 0x20);
            if (local_1e0._4_4_ != 0xffffffff) {
              lVar23 = *(longlong *)
                        (*(longlong *)((longlong)param_1[0xb] + 0x10) +
                        (ulonglong)(local_1e0._4_4_ >> 9) * 8);
              uVar30 = (ulonglong)(local_1e0._4_4_ & 0x1ff);
              dVar33 = *(double *)(lVar23 + uVar30 * 0x18);
              dVar2 = *(double *)(lVar23 + 8 + uVar30 * 0x18);
              dVar34 = *(double *)(lVar23 + 0x10 + uVar30 * 0x18);
              if ((ABS((local_2d0 * dVar34 + local_2e8 * dVar33 + dVar13 * dVar2) - dVar7) <
                   9.999999747378752e-05) &&
                 (dVar34 = dVar34 - local_268, dVar2 = dVar2 - dStack_270,
                 dVar33 = dVar33 - local_278,
                 0.0 < (dVar8 * dVar2 + -dVar11 * dVar33) * dVar9 +
                       (dVar11 * dVar34 + dVar2 * local_2c8) * dVar26 +
                       dVar10 * (dVar6 * dVar33 + -dVar8 * dVar34))) {
                uVar19 = (**(code **)(*(longlong *)param_1[0xc] + 0x50))
                                   ((longlong *)param_1[0xc],local_2d8);
                local_2b0 = (double)CONCAT44(local_2b0._4_4_,uVar19);
                FUN_1447cbafe(param_6,local_2b4,&local_2b0,0);
                FUN_1447cbafe(&local_1c8,local_2b4,&local_2b0,0);
              }
            }
          }
          else {
            uVar18 = (**(code **)(*(longlong *)param_1[0xc] + 0x50))
                               ((longlong *)param_1[0xc],local_2d4);
            local_2b0 = (double)CONCAT44(local_2b0._4_4_,uVar18);
            FUN_1447cbafe(param_6,local_2b4,&local_2b0,0);
            FUN_1447cbafe(&local_1c8,local_2b4,&local_2b0,0);
            uVar18 = SUB84(local_2e0,0);
            uVar32 = (undefined4)((ulonglong)local_2e0 >> 0x20);
          }
          dVar33 = local_2e8;
          iVar27 = dStack_1c0._0_4_;
          if (((param_2[5] == '\x01') && (local_194 < dStack_1c0._0_4_)) && (1 < (int)uStack_250)) {
            lVar23 = 1;
            do {
              plVar22 = (longlong *)
                        (**(code **)(*(longlong *)param_1[0xc] + 0x30))
                                  ((longlong *)param_1[0xc],*(undefined4 *)(local_258 + lVar23 * 8))
              ;
              uVar20 = *(uint *)(*plVar22 + (longlong)*(int *)(local_258 + 4 + lVar23 * 8) * 4);
              lVar31 = *(longlong *)
                        (*(longlong *)((longlong)param_1[0xb] + 0x1c0) +
                        (ulonglong)(uVar20 >> 9) * 8);
              uVar30 = (ulonglong)((uVar20 & 0x1ff) << 4);
              uVar19 = *(undefined4 *)(lVar31 + 8 + uVar30);
              uVar3 = *(undefined4 *)(lVar31 + 0xc + uVar30);
              FUN_146c12888(param_1[0xb],&local_2b0);
              local_1e0 = local_2b0;
              lVar31 = *(longlong *)
                        (*(longlong *)((longlong)param_1[0xb] + 0x10) +
                        ((ulonglong)local_2b0 >> 9 & 0x7fffff) * 8);
              uVar30 = (ulonglong)(SUB84(local_2b0,0) & 0x1ff);
              if (9.999999747378752e-05 <=
                  ABS((*(double *)(lVar31 + 0x10 + uVar30 * 0x18) * dVar12 +
                      *(double *)(lVar31 + uVar30 * 0x18) * dVar33 +
                      *(double *)(lVar31 + 8 + uVar30 * 0x18) * (double)CONCAT44(uVar32,uVar18)) -
                      dVar7)) {
                uVar20 = (uint)((ulonglong)local_2b0 >> 0x20);
              }
              else {
                uVar20 = (**(code **)(*(longlong *)param_1[0xc] + 0x50))
                                   ((longlong *)param_1[0xc],uVar19);
                local_2b0 = (double)CONCAT44(local_2b0._4_4_,uVar20);
                if (dStack_1c0._0_4_ != local_194) {
                  puVar25 = local_188;
                  if (local_188 == (undefined1 *)0x0) {
                    puVar25 = local_190;
                  }
                  for (iVar27 = *(int *)(puVar25 + (ulonglong)(local_180 - 1U & uVar20) * 4);
                      iVar27 != -1;
                      iVar27 = *(int *)((longlong)local_1c8 + (longlong)iVar27 * 0xc + 4)) {
                    if (*(uint *)((longlong)local_1c8 + (longlong)iVar27 * 0xc) == uVar20)
                    goto LAB_14853416b;
                  }
                }
                FUN_1447cbafe(param_6,local_2b4,&local_2b0,0);
                FUN_1447cbafe(&local_1c8,local_2b4,&local_2b0);
LAB_14853416b:
                uVar20 = local_1e0._4_4_;
              }
              if (uVar20 != 0xffffffff) {
                lVar31 = *(longlong *)
                          (*(longlong *)((longlong)param_1[0xb] + 0x10) +
                          (ulonglong)(uVar20 >> 9) * 8);
                uVar30 = (ulonglong)(uVar20 & 0x1ff);
                if (ABS((*(double *)(lVar31 + 0x10 + uVar30 * 0x18) * dVar12 +
                        *(double *)(lVar31 + uVar30 * 0x18) * dVar33 +
                        *(double *)(lVar31 + 8 + uVar30 * 0x18) * (double)CONCAT44(uVar32,uVar18)) -
                        dVar7) < 9.999999747378752e-05) {
                  uVar20 = (**(code **)(*(longlong *)param_1[0xc] + 0x50))
                                     ((longlong *)param_1[0xc],uVar3);
                  local_2b0 = (double)CONCAT44(local_2b0._4_4_,uVar20);
                  if (dStack_1c0._0_4_ != local_194) {
                    puVar25 = local_188;
                    if (local_188 == (undefined1 *)0x0) {
                      puVar25 = local_190;
                    }
                    for (iVar27 = *(int *)(puVar25 + (ulonglong)(local_180 - 1U & uVar20) * 4);
                        iVar27 != -1;
                        iVar27 = *(int *)((longlong)local_1c8 + (longlong)iVar27 * 0xc + 4)) {
                      if (*(uint *)((longlong)local_1c8 + (longlong)iVar27 * 0xc) == uVar20)
                      goto LAB_148534222;
                    }
                  }
                  FUN_1447cbafe(param_6,local_2b4,&local_2b0,0);
                  FUN_1447cbafe(&local_1c8,local_2b4,&local_2b0);
                }
              }
LAB_148534222:
              lVar23 = lVar23 + 1;
            } while (lVar23 < (int)uStack_250);
            iVar27 = dStack_1c0._0_4_;
          }
          iVar14 = local_194;
          local_180 = 0;
          if (local_188 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_1c8);
          param_1 = (double *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          if (iVar14 < iVar27) goto LAB_14853378f;
        }
        if (param_2[1] == '\x01') {
          if (param_2[5] == '\x01') {
            if ((longlong)(int)uStack_250 != 0) {
              lVar31 = (longlong)(int)uStack_250 << 3;
              param_1 = &local_1c8;
              lVar23 = local_258;
              do {
                FUN_1447cbafe(param_6 + 0xa0,param_1,lVar23,0);
                lVar23 = lVar23 + 8;
                lVar31 = lVar31 + -8;
              } while (lVar31 != 0);
            }
          }
          else {
            FUN_1447cbafe(param_6 + 0xa0,&local_1c8,puVar28,0);
          }
          param_1 = (double *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          if (param_8 != (uint *)0x0) {
            *param_8 = puVar28[0x10];
          }
          goto LAB_14853378f;
        }
      }
    }
  }
  else {
    local_168 = 0;
    local_158 = &PTR_LAB_14af18280;
    local_178 = FUN_143ba6664;
    local_150 = param_1;
    cVar15 = FUN_146c84e60(param_5,param_3,&local_248);
    if (cVar15 != '\0') {
      if ((longlong)(int)uStack_240 != 0) {
        lVar23 = (longlong)(int)uStack_240 * 0x50;
        uVar18 = 0xffffffff;
        uVar32 = 0x7fefffff;
        puVar28 = (uint *)0x0;
        puVar21 = local_248;
        do {
          dVar33 = *(double *)(puVar21 + 0xe);
          if (dVar33 <= (double)CONCAT44(uVar32,uVar18) && (double)CONCAT44(uVar32,uVar18) != dVar33
             ) {
            puVar28 = puVar21;
          }
          if ((double)CONCAT44(uVar32,uVar18) <= dVar33) {
            dVar33 = (double)CONCAT44(uVar32,uVar18);
          }
          puVar21 = puVar21 + 0x14;
          uVar18 = SUB84(dVar33,0);
          uVar32 = (undefined4)((ulonglong)dVar33 >> 0x20);
          lVar23 = lVar23 + -0x50;
        } while (lVar23 != 0);
        if (puVar28 != (uint *)0x0) goto LAB_1485336a5;
      }
    }
  }
  param_1 = (double *)0x0;
LAB_14853378f:
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  if (local_248 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return (ulonglong)param_1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148534332 FUN_148534332 body=671 status=ok
// SIG undefined FUN_148534332(void)

/* WARNING: Removing unreachable block (ram,0x000148534550) */
/* WARNING: Removing unreachable block (ram,0x00014853455c) */
/* WARNING: Removing unreachable block (ram,0x000148534560) */

bool FUN_148534332(double *param_1,double *param_2,longlong *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined ***pppuVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_168 [32];
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8 [2];
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  longlong *plStack_a0;
  double *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_120 = param_2[2] - param_1[2];
  dVar1 = param_2[1] - param_1[1];
  dVar6 = *param_2 - *param_1;
  dVar2 = SQRT(local_120 * local_120 + dVar6 * dVar6 + dVar1 * dVar1);
  local_128 = 0.0;
  dVar5 = 1.0 / dVar2;
  local_130 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)(dVar6 * dVar5));
  if (0.0 < dVar2) {
    local_120 = local_120 * dVar5;
    local_128 = dVar1 * dVar5;
  }
  else {
    local_120 = 0.0;
  }
  local_148 = local_130 * 9.999999747378752e-05 + *param_1;
  dStack_140 = local_128 * 9.999999747378752e-05 + param_1[1];
  local_138 = local_120 * 9.999999747378752e-05 + param_1[2];
  local_d8[0] = 0x7fefffffffffffff;
  local_c8 = (code *)0x0;
  local_88 = 0;
  if (param_4 == '\0') {
    local_68 = 0;
    local_78 = 0;
    local_98 = &local_148;
    local_a8 = &PTR_LAB_14af182a0;
    plStack_a0 = param_3;
    local_b8 = (undefined ***)0x0;
    local_c8 = FUN_143ba6728;
    uStack_70 = (undefined4)uStack_c0;
    uStack_6c = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    uStack_60 = (undefined4)uStack_b0;
    uStack_5c = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    uStack_40 = (undefined4)uStack_90;
    uStack_3c = (undefined4)((ulonglong)uStack_90 >> 0x20);
    uStack_e0 = uStack_40;
    uStack_dc = uStack_3c;
    local_108 = 0;
    uStack_100 = uStack_60;
    uStack_fc = uStack_5c;
    local_118 = 0;
    uStack_110 = uStack_70;
    uStack_10c = uStack_6c;
  }
  local_b8 = (undefined ***)0x0;
  iVar3 = (**(code **)(*param_3 + 0x40))(param_3,&local_148,local_d8);
  if (local_c8 != (code *)0x0) {
    pppuVar4 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar4 = &local_a8;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return -1 < iVar3;
}



// FUNCTION 1485345fe FUN_1485345fe body=38 status=ok
// SIG undefined FUN_1485345fe(void)

undefined8 FUN_1485345fe(undefined8 param_1,int param_2)

{
  FUN_1485221be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148534624 FUN_148534624 body=38 status=ok
// SIG undefined FUN_148534624(void)

undefined8 FUN_148534624(undefined8 param_1,int param_2)

{
  FUN_145ab9fdc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148534662 FUN_148534662 body=38 status=ok
// SIG undefined FUN_148534662(void)

undefined8 FUN_148534662(undefined8 param_1,int param_2)

{
  FUN_145ab9fdc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14853468a FUN_14853468a body=38 status=ok
// SIG undefined FUN_14853468a(void)

undefined8 FUN_14853468a(undefined8 param_1,int param_2)

{
  FUN_14853561e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485346d0 FUN_1485346d0 body=138 status=ok
// SIG undefined FUN_1485346d0(void)

undefined8 * FUN_1485346d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    *param_2 = 0x7fefffffffffffff;
    param_2[1] = 0x7fefffffffffffff;
    param_2[2] = 0x7fefffffffffffff;
    param_2[3] = 0xffefffffffffffff;
    param_2[4] = 0xffefffffffffffff;
    param_2[5] = 0xffefffffffffffff;
  }
  else {
    local_20 = *param_3;
    local_18 = param_3[1];
    FUN_14853f558(param_2,*(longlong *)(param_1 + 0x28),&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853475c FUN_14853475c body=283 status=ok
// SIG undefined FUN_14853475c(void)

void FUN_14853475c(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    local_88 = *(undefined8 *)(param_2 + 4);
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    lVar3 = (longlong)*(int *)(param_3 + 0xa8);
    if (0 < lVar3) {
      uVar4 = lVar3 + 1;
      lVar3 = lVar3 * 0x50;
      do {
        lVar3 = lVar3 + -0x50;
        lVar2 = *(longlong *)(param_3 + 0xa0);
        if (*(longlong *)(param_3 + 0xa0) == 0) {
          lVar2 = param_3;
        }
        FUN_146ba22f0(lVar2 + lVar3,&local_58,&local_98);
        local_88 = local_48;
        local_98 = local_58;
        uStack_94 = uStack_54;
        uStack_90 = uStack_50;
        uStack_8c = uStack_4c;
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
    local_68 = local_88;
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14853d166(plVar1,0);
    local_48 = local_68;
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    uVar5 = FUN_14853f6a8(plVar1,*(undefined4 *)(*plVar1 + 0xcc));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar5);
}



// FUNCTION 148534878 FUN_148534878 body=1234 status=ok
// SIG undefined FUN_148534878(void)

undefined4 FUN_148534878(longlong param_1,double *param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined8 *local_1c0;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined1 local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_128 = param_2[2];
  local_138 = *(undefined4 *)param_2;
  uStack_134 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_130 = *(undefined4 *)(param_2 + 1);
  uStack_12c = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar7 = *(uint *)(param_3 + 0xa8);
  lVar8 = (longlong)(int)uVar7;
  if (0 < lVar8) {
    uVar9 = lVar8 + 1;
    lVar8 = lVar8 * 0x50;
    do {
      lVar8 = lVar8 + -0x50;
      lVar6 = *(longlong *)(param_3 + 0xa0);
      if (*(longlong *)(param_3 + 0xa0) == 0) {
        lVar6 = param_3;
      }
      FUN_146ba22f0(lVar6 + lVar8,&local_108,&local_138);
      local_128 = local_f8;
      local_138 = (undefined4)local_108;
      uStack_134 = local_108._4_4_;
      uStack_130 = uStack_100;
      uStack_12c = uStack_fc;
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
    uVar7 = *(uint *)(param_3 + 0xa8);
  }
  dVar11 = local_128;
  dVar1 = (double)CONCAT44(uStack_134,local_138);
  dVar12 = (double)CONCAT44(uStack_12c,uStack_130);
  local_148 = param_2[5] + param_2[2];
  uStack_150 = param_2[4] + param_2[1];
  local_158 = param_2[3] + *param_2;
  if (0 < (int)uVar7) {
    uVar9 = (ulonglong)uVar7 + 1;
    lVar8 = (ulonglong)uVar7 * 0x50;
    do {
      lVar8 = lVar8 + -0x50;
      lVar6 = *(longlong *)(param_3 + 0xa0);
      if (*(longlong *)(param_3 + 0xa0) == 0) {
        lVar6 = param_3;
      }
      FUN_146ba22f0(lVar6 + lVar8,&local_108,&local_158);
      local_148 = local_f8;
      local_158 = local_108;
      uStack_150 = (double)CONCAT44(uStack_fc,uStack_100);
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
  }
  local_160 = local_148 - dVar11;
  dVar10 = uStack_150 - dVar12;
  dVar13 = local_158 - dVar1;
  dVar3 = SQRT(local_160 * local_160 + dVar13 * dVar13 + dVar10 * dVar10);
  local_168 = 0.0;
  dVar2 = 1.0 / dVar3;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & (ulonglong)(dVar13 * dVar2));
  if (0.0 < dVar3) {
    local_160 = local_160 * dVar2;
    local_168 = dVar10 * dVar2;
  }
  else {
    local_160 = 0.0;
  }
  local_178 = dVar11;
  dVar11 = local_160 * local_160 + local_170 * local_170 + local_168 * local_168;
  if (9.99999993922529e-09 < dVar11) {
    dVar11 = 1.0 / SQRT(dVar11);
    local_170 = local_170 * dVar11;
    local_168 = local_168 * dVar11;
    local_160 = local_160 * dVar11;
  }
  local_1c0 = &local_108;
  local_108 = 1.79769313486232e+308;
  local_f8 = 0.0;
  local_e8 = (longlong *)0x0;
  local_b8 = 0;
  local_1c8 = &local_1b0;
  local_188 = dVar1;
  local_180 = dVar12;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                    (*(longlong **)(param_1 + 0x30),&local_188,&local_190,&local_194);
  if (local_f8 != 0.0) {
    plVar5 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar5 = local_d8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((char)uVar4 != '\0') {
    *(undefined4 *)(param_4 + 0x4c) = local_194;
    *(longlong *)(param_4 + 0x68) = param_1;
    dVar1 = local_160 * local_190 + local_178;
    dVar11 = local_168 * local_190 + local_180;
    dVar12 = local_190 * local_170 + local_188;
    lVar8 = *(longlong *)(param_3 + 0xa0);
    if (*(longlong *)(param_3 + 0xa0) == 0) {
      lVar8 = param_3;
    }
    if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
      lVar6 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
      do {
        local_110 = dVar1 * *(double *)(lVar8 + 0x48);
        local_118 = dVar11 * *(double *)(lVar8 + 0x40);
        local_120 = dVar12 * *(double *)(lVar8 + 0x38);
        FUN_146bed047(&local_108,lVar8,&local_120);
        dVar1 = local_f8 + *(double *)(lVar8 + 0x30);
        dVar11 = (double)CONCAT44(uStack_fc,uStack_100) + *(double *)(lVar8 + 0x28);
        dVar12 = local_108 + *(double *)(lVar8 + 0x20);
        lVar8 = lVar8 + 0x50;
        lVar6 = lVar6 + -0x50;
      } while (lVar6 != 0);
    }
    *(double *)(param_4 + 0x30) =
         (dVar1 - param_2[2]) * param_2[5] +
         (dVar12 - *param_2) * param_2[3] + (dVar11 - param_2[1]) * param_2[4];
    *(undefined4 *)(param_4 + 0x50) = local_1b0;
    *(undefined4 *)(param_4 + 0x54) = uStack_1ac;
    *(undefined4 *)(param_4 + 0x58) = uStack_1a8;
    *(undefined4 *)(param_4 + 0x5c) = uStack_1a4;
    *(undefined8 *)(param_4 + 0x60) = local_1a0;
  }
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148534d4c FUN_148534d4c body=87 status=ok
// SIG undefined FUN_148534d4c(void)

void FUN_148534d4c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_18 = *param_3;
    local_10 = param_3[1];
    FUN_14853fc3b(*(longlong *)(param_1 + 0x28),&local_18,param_2);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148534da4 FUN_148534da4 body=462 status=ok
// SIG undefined FUN_148534da4(void)

ulonglong FUN_148534da4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 unaff_R12;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0x28);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    cVar2 = FUN_1461c3a34(*plVar1 + 0x118);
    if (cVar2 != '\0') {
      iVar3 = FUN_144b2ab14(*plVar1);
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          plVar1 = *(longlong **)(param_1 + 0x28);
          lVar7 = *plVar1;
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
          if (lVar7 != 0) {
            cVar2 = FUN_1461c3a34(lVar7 + 0x118);
            if (cVar2 != '\0') {
              iVar4 = FUN_144b2ab14(*plVar1);
              if (iVar8 < iVar4) {
                plVar1 = *(longlong **)(param_1 + 0x28);
                lVar7 = *(longlong *)(*plVar1 + 0x140);
                uVar6 = (ulonglong)(uint)(*(int *)(*plVar1 + 0x148) * iVar8);
                dVar10 = (double)*(float *)(lVar7 + 8 + uVar6) * (double)plVar1[3];
                dVar11 = (double)*(float *)(lVar7 + 4 + uVar6) * (double)plVar1[2];
                dVar12 = (double)*(float *)(lVar7 + uVar6) * (double)plVar1[1];
                lVar7 = *(longlong *)(param_3 + 0xa0);
                if (*(longlong *)(param_3 + 0xa0) == 0) {
                  lVar7 = param_3;
                }
                if ((longlong)*(int *)(param_3 + 0xa8) != 0) {
                  lVar9 = (longlong)*(int *)(param_3 + 0xa8) * 0x50;
                  do {
                    local_68 = dVar10 * *(double *)(lVar7 + 0x48);
                    local_70 = dVar11 * *(double *)(lVar7 + 0x40);
                    local_78 = dVar12 * *(double *)(lVar7 + 0x38);
                    FUN_146bed047(&local_60,lVar7,&local_78);
                    dVar10 = local_50 + *(double *)(lVar7 + 0x30);
                    dVar11 = local_58 + *(double *)(lVar7 + 0x28);
                    dVar12 = local_60 + *(double *)(lVar7 + 0x20);
                    lVar7 = lVar7 + 0x50;
                    lVar9 = lVar9 + -0x50;
                  } while (lVar9 != 0);
                }
                local_60 = dVar12;
                local_58 = dVar11;
                local_50 = dVar10;
                uVar5 = (*(code *)*param_2)(param_2[1],&local_60);
                uVar6 = (ulonglong)uVar5;
              }
            }
          }
          iVar8 = iVar8 + 1;
        } while ((iVar8 < iVar3) && ((char)uVar6 != '\0'));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148534f74 FUN_148534f74 body=617 status=ok
// SIG undefined FUN_148534f74(void)

void FUN_148534f74(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_5b8 [40];
  undefined8 local_590;
  code *local_588;
  undefined8 local_578;
  undefined **local_568;
  undefined8 local_560;
  undefined1 local_548 [592];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined2 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_2d8 = 0;
    local_2d0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2cc = 0xffffffff00000080;
    local_2c4 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_288 = 0;
    local_280 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_27c = 0xffffffff00000080;
    local_274 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0x101;
    local_230 = 0;
    local_228 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_224 = 0xffffffff00000080;
    local_21c = 0;
    local_210 = 0;
    local_208 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1d4 = 0xffffffff00000080;
    local_1cc = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0x101;
    local_188 = 0;
    local_180 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_17c = 0xffffffff00000080;
    local_174 = 0;
    local_168 = 0;
    local_160 = 0;
    local_138 = 0;
    local_130 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_107 = 1;
    local_108 = 1;
    local_e0 = 0;
    local_d8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_d4 = 0xffffffff00000080;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_5f = 1;
    local_60 = 1;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_590 = param_2;
    FUN_14853fda0(local_548);
    local_578 = 0;
    local_568 = &PTR_LAB_14af17450;
    local_588 = FUN_148540a16;
    local_560 = param_3;
    FUN_146bce488(&local_590,local_548,&local_2f8);
    FUN_148547622(local_548);
    FUN_146bfdcfe(&local_2f8);
  }
  if ((local_30 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148535212 FUN_148535212 body=50 status=ok
// SIG undefined FUN_148535212(void)

undefined8 * FUN_148535212(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x28) == 0) {
    *param_2 = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
  }
  else {
    FUN_1484ac0ae(*(longlong *)(param_1 + 0x28),param_2);
  }
  return param_2;
}



// FUNCTION 148535264 FUN_148535264 body=278 status=ok
// SIG undefined FUN_148535264(void)

double * FUN_148535264(longlong param_1,double *param_2,undefined4 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_a8 [32];
  double *local_88;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_88 = &local_78;
    FUN_14853745c(*(longlong *)(param_1 + 0x28),param_3,&local_48,&local_60);
    dVar1 = *param_4;
    dVar2 = param_4[1];
    dVar3 = param_4[2];
    *param_2 = dVar3 * local_78 + dVar2 * local_60 + dVar1 * local_48;
    param_2[1] = local_70 * dVar3 + local_58 * dVar2 + local_40 * dVar1;
    param_2[2] = local_68 * dVar3 + local_50 * dVar2 + local_38 * dVar1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  param_2[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar1;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148535380 FUN_148535380 body=289 status=ok
// SIG undefined FUN_148535380(void)

undefined8 FUN_148535380(longlong param_1,undefined4 param_2,double *param_3,float *param_4)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_98 [32];
  float *local_78;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = FUN_148540b6a();
    if (cVar1 != '\0') {
      FUN_1484ac0ae(*(undefined8 *)(param_1 + 0x28),local_44,param_2);
      local_78 = &local_68;
      FUN_148540bc6(*(undefined8 *)(param_1 + 0x28),param_2,&local_50,&local_5c);
      fVar3 = (float)*param_3;
      fVar5 = (float)param_3[1];
      fVar4 = (float)param_3[2];
      *param_4 = fVar4 * local_68 + fVar5 * local_5c + fVar3 * local_50;
      param_4[1] = local_64 * fVar4 + local_58 * fVar5 + local_4c * fVar3;
      param_4[2] = local_60 * fVar4 + local_54 * fVar5 + local_48 * fVar3;
      uVar2 = 1;
      goto LAB_1485353aa;
    }
  }
  uVar2 = 0;
LAB_1485353aa:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485354a2 FUN_1485354a2 body=251 status=ok
// SIG undefined FUN_1485354a2(void)

undefined8
FUN_1485354a2(longlong param_1,undefined4 param_2,double *param_3,undefined4 param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  float *local_68;
  float *local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar4 = FUN_1484ac1ac(*(longlong *)(param_1 + 0x28),param_4);
    if (cVar4 != '\0') {
      local_60 = &local_58;
      local_68 = &local_50;
      FUN_148540d7e(*(undefined8 *)(param_1 + 0x28),param_2,param_4,&local_48);
      dVar1 = *param_3;
      dVar2 = param_3[1];
      dVar3 = param_3[2];
      *param_5 = (float)dVar3 * local_58 + (float)dVar2 * local_50 + (float)dVar1 * local_48;
      param_5[1] = local_54 * (float)dVar3 + local_4c * (float)dVar2 + local_44 * (float)dVar1;
      uVar5 = 1;
      goto LAB_1485354ce;
    }
  }
  uVar5 = 0;
LAB_1485354ce:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853559e FUN_14853559e body=126 status=ok
// SIG undefined FUN_14853559e(void)

undefined8 * FUN_14853559e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_144b2abfe(*(undefined8 *)(param_1 + 0x18));
  uVar1 = FUN_144b2aba8(plVar2,*(undefined1 *)((longlong)plVar2 + 0x8f));
  if (((int)uVar1 < 0) || ((int)plVar2[1] <= (int)uVar1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*plVar2 + (ulonglong)uVar1 * 8);
  }
  uVar3 = FUN_14001cc68(0x68,0x10);
  FUN_148540e44(uVar3,uVar4,*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_3 + 0x20));
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 14853561e FUN_14853561e body=60 status=ok
// SIG undefined FUN_14853561e(void)

void FUN_14853561e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14af171a0;
  FUN_14853565a(param_1[7]);
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_148535726(param_1[5]);
  return;
}



// FUNCTION 14853565a FUN_14853565a body=62 status=ok
// SIG undefined FUN_14853565a(void)

void FUN_14853565a(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_148535698(param_1 + 8);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148535698 FUN_148535698 body=52 status=ok
// SIG undefined FUN_148535698(void)

void FUN_148535698(longlong *param_1)

{
  FUN_1485356cc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1485356cc FUN_1485356cc body=89 status=ok
// SIG undefined FUN_1485356cc(void)

void FUN_1485356cc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140d97c6c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148535726 FUN_148535726 body=61 status=ok
// SIG undefined FUN_148535726(void)

void FUN_148535726(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 148535764 FUN_148535764 body=178 status=ok
// SIG undefined FUN_148535764(void)

undefined8 * FUN_148535764(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14af17230;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_149f3aac0;
  param_1[9] = &LAB_148536df0;
  param_1[4] = &LAB_146beded0;
  param_1[0xc] = 0x3e45798ee2308c3a;
  FUN_141040b84(param_1 + 0xd);
  FUN_141040be6(param_1 + 0x10);
  FUN_141040be6(param_1 + 0x13);
  FUN_141040b84(param_1 + 0x16);
  param_1[0x19] = 0xffffffffffffffff;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_148536e0e(param_1);
  param_1[2] = 1;
  return param_1;
}



// FUNCTION 148535816 FUN_148535816 body=38 status=ok
// SIG undefined FUN_148535816(void)

undefined8 FUN_148535816(undefined8 param_1,int param_2)

{
  FUN_148537f7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148535848 FUN_148535848 body=174 status=ok
// SIG undefined FUN_148535848(void)

undefined4 FUN_148535848(longlong param_1,undefined8 param_2,ulonglong *param_3,double *param_4)

{
  double dVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  double *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 10) != '\0')) {
    uVar2 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1485358da;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_1485358da;
  }
  dVar1 = *param_4;
  uVar3 = ~-(ulonglong)(dVar1 < 1.79769313486232e+308) & 0x7fefffffffffffff |
          (ulonglong)(dVar1 * dVar1) & -(ulonglong)(dVar1 < 1.79769313486232e+308);
  *param_3 = uVar3;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_4;
  FUN_14853802e(uVar3,*(undefined4 *)(param_1 + 0xcc),param_2,param_3);
  uVar2 = local_14;
LAB_1485358da:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485358fc FUN_1485358fc body=133 status=ok
// SIG undefined FUN_1485358fc(void)

bool FUN_1485358fc(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,double *param_6)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_4 = -1;
  uVar4 = DAT_14c8464e8;
  uVar3 = DAT_14c8464e0;
  param_5[2] = DAT_14c8464f0;
  *param_5 = uVar3;
  param_5[1] = uVar4;
  dVar1 = *param_6;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (3.4028234663852886e+38 <= dVar1) {
    uVar5 = 0xe0000000;
    uVar6 = 0x47efffff;
  }
  *param_3 = CONCAT44(uVar6,uVar5);
  iVar2 = *(int *)(param_1 + 0xcc);
  if ((iVar2 < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (iVar2 < 0) {
      return false;
    }
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
    return false;
  }
  FUN_1485383e6(uVar5,iVar2,param_2,param_3,param_4,param_5,param_6);
  return *param_4 != -1;
}



// FUNCTION 148535982 FUN_148535982 body=76 status=ok
// SIG undefined FUN_148535982(void)

void FUN_148535982(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = in_stack_00000028;
  local_38 = local_20;
  (**(code **)(*param_1 + 0x30))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485359d0 FUN_1485359d0 body=84 status=ok
// SIG undefined FUN_1485359d0(void)

undefined4 FUN_1485359d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_38;
  local_40 = param_3;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18,&local_1c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148535a26 FUN_148535a26 body=81 status=ok
// SIG undefined FUN_148535a26(void)

undefined8 FUN_148535a26(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (iVar1 < 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
    return 0;
  }
  FUN_148538882(param_1,iVar1,param_2,param_3,param_4);
  if (*(int *)(param_3 + 1) == 0) {
    return 0;
  }
  FUN_148538c2f(*param_3);
  return 1;
}



// FUNCTION 148535a78 FUN_148535a78 body=237 status=ok
// SIG undefined FUN_148535a78(void)

undefined4 * FUN_148535a78(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_110 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0 [12];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_70 [3];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,local_110);
  if (iVar1 < 0) {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    local_90 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    uStack_84 = param_3[3];
  }
  else {
    local_128 = *param_3;
    uStack_124 = param_3[1];
    uStack_120 = param_3[2];
    uStack_11c = param_3[3];
    local_118 = *(undefined8 *)(param_3 + 4);
    local_138 = local_40;
    FUN_14853745c(param_1[1],iVar1,local_70,local_58);
    local_f8 = local_118;
    local_108 = local_128;
    uStack_104 = uStack_124;
    uStack_100 = uStack_120;
    uStack_fc = uStack_11c;
    puVar3 = local_70;
    puVar4 = local_f0;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_146bd2a7a(&local_108);
    *(undefined8 *)(param_2 + 4) = local_80;
  }
  *param_2 = local_90;
  param_2[1] = uStack_8c;
  param_2[2] = uStack_88;
  param_2[3] = uStack_84;
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148535b66 FUN_148535b66 body=134 status=ok
// SIG undefined FUN_148535b66(void)

bool FUN_148535b66(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  longlong param_5)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  int *local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_3;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148535bce;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148535bce:
    bVar1 = false;
    goto LAB_148535bd0;
  }
  *param_4 = -1;
  local_20 = param_5;
  local_28 = param_4;
  FUN_1485392b0(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,&local_18);
  bVar1 = *param_4 != -1;
LAB_148535bd0:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148535bee FUN_148535bee body=171 status=ok
// SIG undefined FUN_148535bee(void)

undefined4
FUN_148535bee(longlong param_1,undefined8 param_2,ulonglong *param_3,double param_4,longlong param_5
             )

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  longlong local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    uVar1 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148535c7d;
  }
  else {
    uVar1 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_148535c7d;
  }
  uVar2 = (ulonglong)(param_4 * param_4) & -(ulonglong)(param_4 < 1.79769313486232e+308);
  *param_3 = ~-(ulonglong)(param_4 < 1.79769313486232e+308) & 0x7fefffffffffffff | uVar2;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_5;
  FUN_148539614(uVar2,*(undefined4 *)(param_1 + 0xcc),param_2);
  uVar1 = local_14;
LAB_148535c7d:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148535c9a FUN_148535c9a body=70 status=ok
// SIG undefined FUN_148535c9a(void)

undefined8 FUN_148535c9a(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_3 + 10) != '\0')) {
    if (iVar1 < 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
    return 0;
  }
  dVar3 = *param_3;
  if (3.4028234663852886e+38 <= dVar3) {
    dVar3 = 3.4028234663852886e+38;
  }
  uVar2 = FUN_14853994e(param_1,iVar1,param_2,dVar3,param_3);
  return uVar2;
}



// FUNCTION 148535ce0 FUN_148535ce0 body=287 status=ok
// SIG undefined FUN_148535ce0(void)

undefined8 *
FUN_148535ce0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             double *param_5,double *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  double *local_58;
  undefined8 *local_50;
  double *local_48;
  undefined8 local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148535dc3;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148535dc3:
    *param_2 = 0xffffffffffffffff;
    goto LAB_148535dca;
  }
  local_38 = 1.79769313486232e+308;
  dVar1 = *param_6;
  dVar2 = 1.79769313486232e+308;
  if (dVar1 < 1.79769313486232e+308) {
    local_38 = dVar1 * dVar1;
  }
  *param_2 = 0xffffffffffffffff;
  local_68 = *(undefined4 *)(param_3 + 0xcc);
  local_40 = param_7;
  local_48 = param_6;
  local_58 = &local_38;
  local_60 = 0;
  local_50 = param_2;
  FUN_148539d2e();
  if (local_38 < 1.79769313486232e+308) {
    if (local_38 < 0.0) {
      dVar2 = sqrt(local_38);
    }
    else {
      dVar2 = SQRT(local_38);
    }
  }
  *param_5 = dVar2;
LAB_148535dca:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148535e00 FUN_148535e00 body=394 status=ok
// SIG undefined FUN_148535e00(void)

void FUN_148535e00(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *(uint *)((longlong)param_1 + 0xcc);
  if (((int)uVar3 < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if ((int)uVar3 < 0) goto LAB_148535f4d;
  }
  else if (param_1[2] != 1) goto LAB_148535f4d;
  lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar3 >> 9) * 8);
  lVar7 = (ulonglong)((uVar3 & 0x1ff) << 3) * 3;
  lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar3 >> 9) * 8);
  local_80 = *(double *)(lVar4 + 0x10 + lVar7);
  dVar1 = *(double *)(lVar5 + 0x10 + lVar7);
  local_98 = local_80 - dVar1;
  local_88 = *(double *)(lVar4 + 8 + lVar7);
  dVar2 = *(double *)(lVar5 + 8 + lVar7);
  local_a0 = local_88 - dVar2;
  local_a8 = *(double *)(lVar4 + lVar7) - *(double *)(lVar5 + lVar7);
  local_80 = local_80 + dVar1;
  local_88 = local_88 + dVar2;
  local_90 = *(double *)(lVar4 + lVar7) + *(double *)(lVar5 + lVar7);
  local_74 = 0;
  pcVar6 = (code *)*param_2;
  plVar10 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[2];
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  cVar8 = (*pcVar6)(uVar9,&local_a8,&local_74);
  if (cVar8 != '\0') {
    local_b8 = param_3;
    (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)((longlong)param_1 + 0xcc),0,param_2);
  }
LAB_148535f4d:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148535f8c FUN_148535f8c body=1281 status=ok
// SIG undefined FUN_148535f8c(void)

void FUN_148535f8c(longlong *param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_c8;
  uint local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_84 = (uint)param_2;
  uVar14 = *(uint *)(*(longlong *)(param_1[0xe] + (param_2 >> 9 & 0x7fffff) * 8) +
                    (ulonglong)(local_84 & 0x1ff) * 4);
  if ((int)uVar14 < (int)param_1[0x19]) {
    local_b8 = (double)CONCAT44(local_b8._4_4_,param_3);
    pcVar13 = (code *)param_4[8];
    plVar10 = param_4 + 0xc;
    if ((longlong *)param_4[10] != (longlong *)0x0) {
      plVar10 = (longlong *)param_4[10];
    }
    local_c8 = param_4;
    local_bc = local_84;
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_84,&local_b8);
    iVar15 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar15) {
      plVar10 = local_c8 + 0x14;
      do {
        uVar14 = uVar14 + 1;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar13 = *(code **)(param_5 + 0x10);
        if (pcVar13 == (code *)0x0) {
LAB_1485360ce:
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          pcVar13 = (code *)local_c8[0x10];
          plVar9 = (longlong *)local_c8[0x12];
          if ((longlong *)local_c8[0x12] == (longlong *)0x0) {
            plVar9 = plVar10;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          (*pcVar13)(uVar8,&local_b8);
        }
        else {
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          plVar9 = *(longlong **)(param_5 + 0x20);
          if (*(longlong **)(param_5 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_5 + 0x30);
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar13)(uVar8,&local_b8);
          if (cVar7 != '\0') goto LAB_1485360ce;
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_b8 = (double)CONCAT44(local_b8._4_4_,local_bc);
    pcVar13 = (code *)local_c8[0x18];
    plVar10 = local_c8 + 0x1c;
    if ((longlong *)local_c8[0x1a] != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8[0x1a];
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_b8);
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    uVar11 = param_3 + 1;
    local_84 = uVar11;
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
    }
    else {
      uVar12 = uVar12 - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = (longlong *)param_4[2];
      if ((longlong *)param_4[2] == (longlong *)0x0) {
        plVar10 = param_4 + 4;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
      if (cVar7 != '\0') {
        local_d8 = param_5;
        (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
      }
      uVar12 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      local_84 = uVar11;
      uVar8 = (**(code **)(*plVar10 + 8))(plVar10);
    }
    cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
    if (cVar7 != '\0') {
      local_d8 = param_5;
      (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853648e FUN_14853648e body=191 status=ok
// SIG undefined FUN_14853648e(void)

bool FUN_14853648e(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  longlong local_80;
  undefined1 local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148536525;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148536525:
    bVar2 = false;
    goto LAB_148536527;
  }
  FUN_146bda344(local_58,param_2,param_2 + 0x18,param_2 + 0x30);
  local_60 = &local_69;
  local_88 = &local_68;
  local_68 = &LAB_14853adbc;
  local_80 = param_3;
  iVar1 = FUN_14853aa68(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,local_58);
  bVar2 = -1 < iVar1;
LAB_148536527:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853654e FUN_14853654e body=164 status=ok
// SIG undefined FUN_14853654e(void)

undefined8
FUN_14853654e(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 **local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1485365d4;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_1485365d4:
    uVar1 = 0;
    goto LAB_1485365d6;
  }
  local_18 = &local_28;
  local_48 = &local_20;
  local_20 = &LAB_14853b6a0;
  local_58 = *(undefined4 *)(param_2 + 0xcc);
  local_38 = param_5;
  local_50 = 0;
  local_40 = param_4;
  local_28 = param_1;
  uVar1 = FUN_14853add0();
LAB_1485365d6:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485365f4 FUN_1485365f4 body=937 status=ok
// SIG undefined FUN_1485365f4(void)

ulonglong FUN_1485365f4(longlong *param_1,longlong *param_2,double *param_3,longlong *param_4,
                       longlong param_5)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  int local_124;
  longlong *local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar9 = *(int *)((longlong)param_1 + 0xcc);
  if ((iVar9 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (-1 < iVar9) goto LAB_14853667d;
  }
  else if (param_1[2] == 1) {
LAB_14853667d:
    if (((*param_3 < param_3[3] || *param_3 == param_3[3]) &&
        (param_3[1] < param_3[4] || param_3[1] == param_3[4])) &&
       (param_3[2] < param_3[5] || param_3[2] == param_3[5])) {
      if (*param_4 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_14af17310;
        local_88 = FUN_14853b6b4;
        local_60 = param_4;
        FUN_146bda188(&local_d8,param_3);
        *(undefined4 *)param_3 = local_d8;
        *(undefined4 *)((longlong)param_3 + 4) = uStack_d4;
        *(undefined4 *)(param_3 + 1) = uStack_d0;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_cc;
        *(undefined4 *)(param_3 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)param_3 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(param_3 + 3) = uStack_c0;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_bc;
        *(undefined4 *)(param_3 + 4) = uStack_b8;
        *(undefined4 *)((longlong)param_3 + 0x24) = uStack_b4;
        *(undefined4 *)(param_3 + 5) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_b0._4_4_;
        iVar9 = *(int *)((longlong)param_1 + 0xcc);
      }
      cVar4 = FUN_14853acfc(param_1,iVar9,param_3);
      if (cVar4 == '\0') goto LAB_148536645;
    }
    if ((*param_2 != 0) && (*(char *)(*param_2 + 0x1c8) == '\x01')) {
      iVar9 = (int)param_2[0xc];
      iVar10 = 0;
      if (0 < iVar9) {
        local_120 = param_4 + 4;
        uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        local_124 = iVar9;
        do {
          if (*param_4 == 0) {
            local_138 = &local_a8;
            FUN_14853745c(param_2,iVar10,&local_d8,&uStack_c0);
          }
          else {
            FUN_1484ac0ae(param_2,&local_e4,iVar10);
            plVar3 = local_120;
            lVar1 = *(longlong *)(*param_2 + 0x140);
            uVar5 = (ulonglong)(uint)(*(int *)(*param_2 + 0x148) * local_e4);
            local_108 = (double)*(float *)(lVar1 + 8 + uVar5) * (double)param_2[3];
            local_110 = (double)*(float *)(lVar1 + 4 + uVar5) * (double)param_2[2];
            local_118 = (double)*(float *)(lVar1 + uVar5) * (double)param_2[1];
            pcVar2 = (code *)*param_4;
            plVar7 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar7 = local_120;
            }
            uVar6 = (**(code **)(*plVar7 + 8))();
            (*pcVar2)(&local_100,uVar6,&local_118);
            local_c8 = local_f0;
            lVar1 = *(longlong *)(*param_2 + 0x140);
            uVar5 = (ulonglong)(uint)(*(int *)(*param_2 + 0x148) * local_e0);
            local_108 = (double)*(float *)(lVar1 + 8 + uVar5) * (double)param_2[3];
            local_110 = (double)*(float *)(lVar1 + 4 + uVar5) * (double)param_2[2];
            local_118 = (double)*(float *)(lVar1 + uVar5) * (double)param_2[1];
            pcVar2 = (code *)*param_4;
            plVar7 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar7 = plVar3;
            }
            uVar6 = (**(code **)(*plVar7 + 8))();
            (*pcVar2)(&local_100,uVar6,&local_118);
            iVar9 = local_124;
            uStack_b0 = local_f0;
            lVar1 = *(longlong *)(*param_2 + 0x140);
            uVar5 = (ulonglong)(uint)(*(int *)(*param_2 + 0x148) * local_dc);
            local_108 = (double)*(float *)(lVar1 + 8 + uVar5) * (double)param_2[3];
            local_110 = (double)*(float *)(lVar1 + 4 + uVar5) * (double)param_2[2];
            local_118 = (double)*(float *)(lVar1 + uVar5) * (double)param_2[1];
            pcVar2 = (code *)*param_4;
            plVar7 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar7 = plVar3;
            }
            uVar6 = (**(code **)(*plVar7 + 8))();
            (*pcVar2)(&local_100,uVar6,&local_118);
            local_98 = local_f0;
            local_a8 = local_100;
            uStack_a4 = uStack_fc;
            uStack_a0 = uStack_f8;
            uStack_9c = uStack_f4;
          }
          cVar4 = (**(code **)(*param_1 + 0x88))(param_1,&local_d8,param_5);
          if (cVar4 != '\0') break;
          iVar10 = iVar10 + 1;
          uVar8 = CONCAT71((int7)(uVar8 >> 8),iVar10 < iVar9);
        } while (iVar10 != iVar9);
        goto LAB_148536647;
      }
    }
  }
LAB_148536645:
  uVar8 = 0;
LAB_148536647:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 14853699e FUN_14853699e body=528 status=ok
// SIG undefined FUN_14853699e(void)

undefined8 *
FUN_14853699e(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  code **local_e0;
  longlong local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_7 == 0) {
    local_b8 = *param_7;
    uStack_70 = param_7[1];
    local_a8 = (longlong *)param_7[2];
    uStack_60 = param_7[3];
    local_58 = param_7[4];
    lStack_50 = param_7[5];
    local_48 = param_7[6];
    uStack_40 = param_7[7];
    lVar4 = local_48;
    lVar5 = uStack_40;
    local_68 = local_a8;
    lVar3 = uStack_60;
    local_78 = local_b8;
    lVar2 = uStack_70;
    param_7[6] = CONCAT44(uStack_84,local_88);
    param_7[7] = CONCAT44(uStack_7c,uStack_80);
    param_7[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_7[5] = (longlong)FUN_14853c094;
    param_7[2] = 0;
    param_7[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_7 = (longlong)&LAB_146bddb20;
    param_7[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar2;
    uStack_60 = lVar3;
    local_48 = lVar4;
    uStack_40 = lVar5;
    if (local_b8 != 0) {
      plVar6 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar6 = &local_98;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_148536a61;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_148536a61;
  local_e0 = &local_c8;
  local_c0 = param_7;
  local_c8 = FUN_146bddd1c;
  local_f8 = *(undefined4 *)(param_3 + 0xcc);
  local_d0 = param_6;
  local_d8 = param_5;
  local_f0 = 0;
  local_e8 = param_2;
  FUN_14853b73a(param_1,iVar1,param_3,param_4);
LAB_148536a61:
  if (*param_7 != 0) {
    plVar6 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148536bb0 FUN_148536bb0 body=454 status=ok
// SIG undefined FUN_148536bb0(void)

undefined8 *
FUN_148536bb0(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_5 == 0) {
    local_b8 = *param_5;
    uStack_70 = param_5[1];
    local_a8 = (longlong *)param_5[2];
    uStack_60 = param_5[3];
    local_58 = param_5[4];
    lStack_50 = param_5[5];
    local_48 = param_5[6];
    uStack_40 = param_5[7];
    lVar3 = local_48;
    lVar4 = uStack_40;
    local_68 = local_a8;
    lVar2 = uStack_60;
    local_78 = local_b8;
    lVar1 = uStack_70;
    param_5[6] = CONCAT44(uStack_84,local_88);
    param_5[7] = CONCAT44(uStack_7c,uStack_80);
    param_5[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_5[5] = (longlong)FUN_14853c6e0;
    param_5[2] = 0;
    param_5[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_5 = (longlong)&LAB_146bddb20;
    param_5[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar1;
    uStack_60 = lVar2;
    local_48 = lVar3;
    uStack_40 = lVar4;
    if (local_b8 != 0) {
      plVar5 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar5 = &local_98;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148536c41;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_148536c41;
  local_c0 = param_5;
  local_c8 = FUN_146bddd1c;
  local_d8 = param_4;
  FUN_14853c574(param_1,param_2,param_3);
LAB_148536c41:
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148536d78 FUN_148536d78 body=119 status=ok
// SIG undefined FUN_148536d78(void)

undefined8 FUN_148536d78(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148536dd2;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148536dd2:
    uVar1 = 0;
    goto LAB_148536dd4;
  }
  local_10 = &local_19;
  local_18 = FUN_14853d0c2;
  local_28 = param_3;
  uVar1 = FUN_14853c574(param_1,0,param_2);
LAB_148536dd4:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148536e0e FUN_148536e0e body=838 status=ok
// SIG undefined FUN_148536e0e(void)

void FUN_148536e0e(longlong param_1)

{
  byte bVar1;
  double dVar2;
  ulonglong uVar3;
  short sVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_128 [32];
  double *local_108;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8 = 0;
  uStack_e0 = 0;
  plVar6 = *(longlong **)(param_1 + 8);
  lVar8 = *plVar6;
  if (lVar8 == 0) {
    local_f8 = 0;
    uStack_f0 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar8 + 0x1c8);
    if (bVar1 == 1) {
      iVar7 = (int)plVar6[0xc];
      if (iVar7 < 0) goto LAB_14853714d;
      if (iVar7 != 0) {
        FUN_14481578e(&local_e8);
        plVar6 = *(longlong **)(param_1 + 8);
        lVar8 = *plVar6;
        local_f8 = 0;
        uStack_f0 = 0;
        if (lVar8 == 0) goto LAB_148536e7c;
        bVar1 = *(byte *)(lVar8 + 0x1c8);
      }
    }
    uStack_f0 = 0;
    local_f8 = 0;
    if ((bVar1 & 1) != 0) {
      iVar7 = (int)plVar6[0xc];
      if (iVar7 < 0) {
LAB_14853714d:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if (iVar7 != 0) {
        FUN_1447a8aa0(&local_f8);
        plVar6 = *(longlong **)(param_1 + 8);
        lVar8 = *plVar6;
        if (lVar8 == 0) goto LAB_148536e7c;
      }
    }
    iVar7 = 0;
    do {
      if ((*(char *)(lVar8 + 0x1c8) != '\x01') || ((int)plVar6[0xc] <= iVar7)) break;
      local_108 = &local_a8;
      FUN_14853745c(plVar6,iVar7,&local_d8,&local_c0);
      dVar2 = (local_c8 + local_b0 + local_98) * 0.3333333333333333;
      dVar10 = (local_d0 + local_b8 + local_a0) * 0.3333333333333333;
      dVar9 = (local_d8 + local_c0 + local_a8) * 0.3333333333333333;
      dVar2 = dVar2 * dVar2 + dVar9 * dVar9 + dVar10 * dVar10;
      local_d8 = dVar2;
      sVar4 = _dtest(&local_d8);
      if ((sVar4 != 2) &&
         (local_d8 = dVar2, sVar4 = _dtest(&local_d8), uVar3 = uStack_e0, sVar4 < 1)) {
        lVar8 = (longlong)(int)uStack_e0;
        uVar5 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
        if (uStack_e0._4_4_ < uVar5) {
          FUN_1446f48e2(&local_e8,uVar3 & 0xffffffff);
        }
        *(int *)(local_e8 + lVar8 * 4) = iVar7;
        local_108 = &local_a8;
        FUN_14853745c(*(undefined8 *)(param_1 + 8),iVar7,&local_d8,&local_c0);
        uVar3 = uStack_f0;
        dVar2 = local_c8 + local_b0 + local_98;
        dVar9 = local_d0 + local_b8 + local_a0;
        dVar10 = local_d8 + local_c0 + local_a8;
        lVar8 = (longlong)(int)uStack_f0;
        uVar5 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar5);
        if (uStack_f0._4_4_ < uVar5) {
          FUN_1403e3958(&local_f8,uVar3 & 0xffffffff);
        }
        *(double *)(local_f8 + lVar8 * 0x18) = dVar10 * 0.3333333333333333;
        *(double *)(local_f8 + 8 + lVar8 * 0x18) = dVar9 * 0.3333333333333333;
        *(double *)(local_f8 + 0x10 + lVar8 * 0x18) = dVar2 * 0.3333333333333333;
      }
      iVar7 = iVar7 + 1;
      plVar6 = *(longlong **)(param_1 + 8);
      lVar8 = *plVar6;
    } while (lVar8 != 0);
  }
LAB_148536e7c:
  FUN_148537156(param_1,&local_e8,&local_f8,uStack_e0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148537156 FUN_148537156 body=773 status=ok
// SIG undefined FUN_148537156(void)

void FUN_148537156(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  undefined8 *local_1c0;
  longlong local_1b0;
  int local_1a4;
  longlong local_1a0;
  longlong local_198;
  int local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_148537598(&local_b0);
  FUN_148537598(local_118);
  local_1c0 = &local_148;
  local_148 = 0x7fefffffffffffff;
  local_140 = 0x7fefffffffffffff;
  local_138 = 0x7fefffffffffffff;
  local_130 = 0xffefffffffffffff;
  local_128 = 0xffefffffffffffff;
  local_120 = 0xffefffffffffffff;
  local_1d8 = *(undefined4 *)(param_1 + 0x18);
  local_1e0 = 0;
  uVar8 = 0;
  local_1e8 = param_4;
  local_1d0 = &local_b0;
  local_1c8 = local_118;
  local_1a4 = FUN_1485375d2(param_1,param_2,param_3,0);
  *(undefined8 *)(param_1 + 0x68) = local_b0;
  FUN_146bedfa8(param_1 + 0x70,local_a8);
  *(undefined8 *)(param_1 + 0x80) = local_98;
  FUN_146bee054(param_1 + 0x88,local_90);
  *(undefined8 *)(param_1 + 0x98) = local_80;
  FUN_146bee054(param_1 + 0xa0,local_78);
  *(undefined8 *)(param_1 + 0xb0) = local_68;
  FUN_146bedfa8(param_1 + 0xb8,local_60);
  *(int *)(param_1 + 200) = local_4c;
  local_1b0 = param_1;
  if (0 < local_b8) {
    local_198 = param_1 + 0x68;
    local_1a0 = param_1 + 0x80;
    do {
      uVar9 = (ulonglong)(uVar8 >> 9);
      lVar5 = *(longlong *)(local_f8 + uVar9 * 8);
      lVar6 = (ulonglong)((uVar8 & 0x1ff) * 8) * 3;
      piVar2 = (int *)(lVar5 + lVar6);
      local_168 = *piVar2;
      iStack_164 = piVar2[1];
      iStack_160 = piVar2[2];
      iStack_15c = piVar2[3];
      local_158 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      iVar1 = local_50 + uVar8;
      FUN_146bedee6(local_1a0,&local_168,iVar1);
      lVar5 = *(longlong *)(local_e0 + uVar9 * 8);
      puVar3 = (undefined4 *)(lVar5 + lVar6);
      local_188 = *puVar3;
      uStack_184 = puVar3[1];
      uStack_180 = puVar3[2];
      uStack_17c = puVar3[3];
      local_178 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      FUN_146bedee6(param_1 + 0x98,&local_188,iVar1);
      local_18c = *(int *)(*(longlong *)(local_110 + uVar9 * 8) + (ulonglong)(uVar8 & 0x1ff) * 4) +
                  local_4c;
      FUN_146bedf4e(local_198,&local_18c,iVar1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b8);
  }
  if (0 < local_b4) {
    lVar5 = local_1b0 + 0xb0;
    uVar8 = 0;
    do {
      uVar4 = *(uint *)(*(longlong *)(local_c8 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
      uVar7 = ~uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4 + local_50;
      }
      local_168 = uVar7 + 1;
      FUN_146bedf4e(lVar5,&local_168,local_4c + uVar8);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b4);
  }
  *(int *)(local_1b0 + 0xcc) = local_50 + local_1a4;
  FUN_148537d76(local_118);
  FUN_148537d76(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14853745c FUN_14853745c body=314 status=ok
// SIG undefined FUN_14853745c(void)

void FUN_14853745c(longlong *param_1,undefined4 param_2,double *param_3,double *param_4,
                  double *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [44];
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484ac0ae(param_1,&local_3c,param_2);
  lVar5 = *(longlong *)(*param_1 + 0x140);
  uVar6 = (ulonglong)(uint)(*(int *)(*param_1 + 0x148) * local_3c);
  fVar1 = *(float *)(lVar5 + 8 + uVar6);
  dVar3 = (double)param_1[3];
  fVar2 = *(float *)(lVar5 + 4 + uVar6);
  dVar4 = (double)param_1[2];
  *param_3 = (double)*(float *)(lVar5 + uVar6) * (double)param_1[1];
  param_3[1] = (double)fVar2 * dVar4;
  param_3[2] = (double)fVar1 * dVar3;
  lVar5 = *(longlong *)(*param_1 + 0x140);
  uVar6 = (ulonglong)(uint)(*(int *)(*param_1 + 0x148) * local_38);
  fVar1 = *(float *)(lVar5 + 8 + uVar6);
  dVar3 = (double)param_1[3];
  fVar2 = *(float *)(lVar5 + 4 + uVar6);
  dVar4 = (double)param_1[2];
  *param_4 = (double)*(float *)(lVar5 + uVar6) * (double)param_1[1];
  param_4[1] = (double)fVar2 * dVar4;
  param_4[2] = (double)fVar1 * dVar3;
  lVar5 = *(longlong *)(*param_1 + 0x140);
  uVar6 = (ulonglong)(uint)(*(int *)(*param_1 + 0x148) * local_34);
  fVar1 = *(float *)(lVar5 + 8 + uVar6);
  dVar3 = (double)param_1[3];
  fVar2 = *(float *)(lVar5 + 4 + uVar6);
  dVar4 = (double)param_1[2];
  *param_5 = (double)*(float *)(lVar5 + uVar6) * (double)param_1[1];
  param_5[1] = (double)fVar2 * dVar4;
  param_5[2] = (double)fVar1 * dVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148537598 FUN_148537598 body=57 status=ok
// SIG undefined FUN_148537598(void)

longlong FUN_148537598(longlong param_1)

{
  FUN_141040b84();
  FUN_141040be6(param_1 + 0x18);
  FUN_141040be6(param_1 + 0x30);
  FUN_141040b84(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 1485375d2 FUN_1485375d2 body=1954 status=ok
// SIG undefined FUN_1485375d2(void)

uint FUN_1485375d2(longlong param_1,longlong *param_2,longlong *param_3,int param_4,uint param_5,
                  int param_6,int param_7,longlong param_8,longlong param_9,double *param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_138 [32];
  int local_118;
  int local_110;
  int local_108;
  longlong local_100;
  longlong local_f8;
  double *local_f0;
  int local_dc;
  ulonglong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  pdVar8 = param_10;
  lVar7 = param_8;
  uVar23 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((int)param_2[1] < 1) {
    uVar27 = SUB84(DAT_14c8464f0,0);
    uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    dVar30 = DAT_14c8464f0 + 0.0;
    dVar31 = DAT_14c8464e8 + 0.0;
    dVar25 = DAT_14c8464e0 + 0.0;
    dVar26 = DAT_14c8464e8;
    dVar29 = DAT_14c8464e0;
  }
  else {
    dVar25 = -1.79769313486232e+308;
    uVar27 = 0xffffffff;
    uVar28 = 0x7fefffff;
    dVar31 = -1.79769313486232e+308;
    dVar30 = -1.79769313486232e+308;
    dVar26 = 1.79769313486232e+308;
    dVar29 = 1.79769313486232e+308;
  }
  *param_10 = dVar29;
  param_10[1] = dVar26;
  param_10[2] = (double)CONCAT44(uVar28,uVar27);
  param_10[3] = dVar25;
  param_10[4] = dVar31;
  param_10[5] = dVar30;
  local_c8 = param_1;
  if (param_7 < (int)param_5) {
    local_98 = (double)CONCAT44(local_98._4_4_,param_6);
    pcVar3 = *(code **)(param_1 + 0x20);
    plVar12 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_1 + 0x30);
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    iVar10 = (*pcVar3)(uVar11,&local_98,pdVar8);
    lVar9 = local_c8;
    pdVar8 = param_10;
    lVar7 = param_9;
    if ((int)uVar23 < 1) {
      uVar27 = 0xffffffff;
      uVar28 = 0x7fefffff;
      dVar26 = -1.79769313486232e+308;
    }
    else {
      dVar29 = 1.79769313486232e+308;
      lVar18 = 0;
      dVar25 = -1.79769313486232e+308;
      do {
        dVar26 = *(double *)((longlong)iVar10 * 8 + *param_3 + (longlong)param_4 * 0x18 + lVar18);
        uVar27 = SUB84(dVar26,0);
        uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (dVar29 <= dVar26) {
          uVar27 = SUB84(dVar29,0);
          uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        }
        if (dVar26 <= dVar25) {
          dVar26 = dVar25;
        }
        lVar18 = lVar18 + 0x18;
        dVar29 = (double)CONCAT44(uVar28,uVar27);
        dVar25 = dVar26;
      } while ((ulonglong)uVar23 * 0x18 != lVar18);
    }
    if (dVar26 - (double)CONCAT44(uVar28,uVar27) <= 1e-08) {
      uVar22 = (ulonglong)(uint)((int)uVar23 / 2);
    }
    else {
      uVar22 = 0;
      if (1 < (int)uVar23) {
        dVar26 = (dVar26 + (double)CONCAT44(uVar28,uVar27)) * 0.5;
        iVar19 = uVar23 - 1;
        lVar13 = (longlong)param_4;
        local_c0 = lVar13 * 4;
        lVar18 = lVar13 * 0x18;
        uVar22 = 0;
        while( true ) {
          lVar15 = *param_3;
          iVar21 = (int)uVar22;
          uVar22 = (longlong)iVar21 - 1;
          puVar2 = (undefined8 *)((lVar13 + iVar21) * 0x18 + -0x18 + lVar15);
          do {
            puVar24 = puVar2;
            uVar22 = uVar22 + 1;
            puVar2 = puVar24 + 3;
          } while ((double)puVar24[(longlong)iVar10 + 3] <= dVar26);
          lVar20 = (longlong)iVar19;
          lVar17 = 0;
          lVar14 = lVar20 * 0x18;
          do {
            lVar16 = lVar14;
            lVar17 = lVar17 + -1;
            lVar14 = lVar16 + -0x18;
          } while (dVar26 < *(double *)(lVar18 + (longlong)iVar10 * 8 + lVar15 + lVar16));
          if (lVar20 + lVar17 + 1 <= (longlong)uVar22) break;
          lVar15 = lVar15 + lVar18 + lVar16 + -0x18;
          iVar19 = iVar19 + 1 + (int)lVar17;
          uVar11 = puVar24[5];
          uVar4 = *puVar2;
          uVar5 = puVar24[4];
          uVar6 = *(undefined8 *)(lVar15 + 0x20);
          *puVar2 = *(undefined8 *)(lVar15 + 0x18);
          puVar24[4] = uVar6;
          puVar24[5] = *(undefined8 *)(lVar15 + 0x28);
          lVar15 = *param_3;
          *(undefined8 *)(lVar16 + 0x10 + lVar15 + lVar18) = uVar11;
          puVar2 = (undefined8 *)(lVar16 + lVar15 + lVar18);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          lVar14 = local_c0 + *param_2;
          uVar27 = *(undefined4 *)(lVar14 + uVar22 * 4);
          lVar15 = lVar13 * 4 + 4 + lVar20 * 4;
          *(undefined4 *)(lVar14 + uVar22 * 4) = *(undefined4 *)(*param_2 + lVar15 + lVar17 * 4);
          *(undefined4 *)(lVar15 + *param_2 + lVar17 * 4) = uVar27;
        }
      }
    }
    iVar19 = (int)uVar22;
    local_d8 = (ulonglong)(uVar23 - iVar19);
    local_98 = 1.79769313486232e+308;
    dStack_90 = 1.79769313486232e+308;
    local_88 = 1.79769313486232e+308;
    local_80 = -1.79769313486232e+308;
    local_78 = -1.79769313486232e+308;
    local_70 = -1.79769313486232e+308;
    iVar10 = param_6 + 1;
    local_f0 = param_10;
    local_f8 = param_9;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = iVar19;
    local_110 = iVar10;
    local_dc = param_4;
    local_d0 = param_2;
    local_9c = FUN_1485375d2(local_c8,param_2,param_3,param_4);
    local_f0 = &local_98;
    local_f8 = lVar7;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = (int)local_d8;
    local_110 = iVar10;
    local_a0 = FUN_1485375d2(lVar9,param_2,param_3,iVar19 + param_4);
    dVar26 = pdVar8[1];
    uVar27 = SUB84(dVar26,0);
    uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
    dVar29 = *pdVar8;
    if (local_98 <= *pdVar8) {
      dVar29 = local_98;
    }
    *pdVar8 = dVar29;
    if (dStack_90 <= dVar26) {
      uVar27 = SUB84(dStack_90,0);
      uVar28 = (undefined4)((ulonglong)dStack_90 >> 0x20);
    }
    pdVar8[1] = (double)CONCAT44(uVar28,uVar27);
    dVar26 = pdVar8[2];
    if (local_88 <= pdVar8[2]) {
      dVar26 = local_88;
    }
    pdVar8[2] = dVar26;
    dVar26 = pdVar8[3];
    if (pdVar8[3] <= local_80) {
      dVar26 = local_80;
    }
    pdVar8[3] = dVar26;
    dVar26 = pdVar8[4];
    if (pdVar8[4] <= local_78) {
      dVar26 = local_78;
    }
    pdVar8[4] = dVar26;
    dVar26 = pdVar8[5];
    if (pdVar8[5] <= local_70) {
      dVar26 = local_70;
    }
    pdVar8[5] = dVar26;
    uVar23 = *(uint *)(lVar7 + 0x60);
    *(uint *)(lVar7 + 0x60) = uVar23 + 1;
    FUN_146bedf4e(lVar7,lVar7 + 100,uVar23);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_9c);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_a0);
    local_a8 = (pdVar8[2] + pdVar8[5]) * 0.5;
    local_b0 = (pdVar8[1] + pdVar8[4]) * 0.5;
    local_b8 = (*pdVar8 + pdVar8[3]) * 0.5;
    FUN_146bedee6(lVar7 + 0x18,&local_b8,uVar23);
    local_a8 = (pdVar8[5] - pdVar8[2]) * 0.5;
    local_b0 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_b8 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_b8,uVar23);
  }
  else {
    local_d0 = (longlong *)(ulonglong)*(uint *)(param_8 + 0x60);
    *(uint *)(param_8 + 0x60) = *(uint *)(param_8 + 0x60) + 1;
    piVar1 = (int *)(param_8 + 100);
    FUN_146bedf4e(param_8,piVar1);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&param_5);
    lVar9 = local_c8;
    if ((int)param_5 < 1) {
      dVar26 = pdVar8[2];
      dVar29 = pdVar8[5];
      dVar25 = *pdVar8;
      dVar30 = pdVar8[1];
      dVar31 = pdVar8[4];
      uVar27 = SUB84(pdVar8[3],0);
      uVar28 = (undefined4)((ulonglong)pdVar8[3] >> 0x20);
    }
    else {
      lVar13 = 0;
      lVar18 = 0;
      do {
        *piVar1 = *piVar1 + 1;
        FUN_146bedf4e(lVar7 + 0x48,*param_2 + (longlong)param_4 * 4 + lVar13);
        FUN_148537dee(&local_98,*(undefined8 *)(lVar9 + 8),
                      *(undefined4 *)(*param_2 + (longlong)param_4 * 4 + lVar18 * 4));
        dVar25 = *pdVar8;
        if (local_98 <= *pdVar8) {
          dVar25 = local_98;
        }
        *pdVar8 = dVar25;
        dVar30 = pdVar8[1];
        if (dStack_90 <= pdVar8[1]) {
          dVar30 = dStack_90;
        }
        pdVar8[1] = dVar30;
        dVar26 = pdVar8[2];
        if (local_88 <= pdVar8[2]) {
          dVar26 = local_88;
        }
        pdVar8[2] = dVar26;
        dVar29 = pdVar8[3];
        uVar27 = SUB84(dVar29,0);
        uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        if (dVar29 <= local_80) {
          uVar27 = SUB84(local_80,0);
          uVar28 = (undefined4)((ulonglong)local_80 >> 0x20);
        }
        pdVar8[3] = (double)CONCAT44(uVar28,uVar27);
        dVar31 = pdVar8[4];
        if (pdVar8[4] <= local_78) {
          dVar31 = local_78;
        }
        pdVar8[4] = dVar31;
        dVar29 = pdVar8[5];
        if (pdVar8[5] <= local_70) {
          dVar29 = local_70;
        }
        pdVar8[5] = dVar29;
        lVar18 = lVar18 + 1;
        lVar13 = lVar13 + 4;
      } while (lVar18 < (int)param_5);
    }
    plVar12 = local_d0;
    lVar7 = param_8;
    local_88 = (dVar29 + dVar26) * 0.5;
    dStack_90 = (dVar31 + dVar30) * 0.5;
    local_98 = ((double)CONCAT44(uVar28,uVar27) + dVar25) * 0.5;
    uVar23 = (uint)local_d0;
    FUN_146bedee6(param_8 + 0x18,&local_98,(ulonglong)local_d0 & 0xffffffff);
    local_88 = (pdVar8[5] - pdVar8[2]) * 0.5;
    dStack_90 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_98 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_98,(ulonglong)plVar12 & 0xffffffff);
    uVar23 = ~uVar23;
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 148537d76 FUN_148537d76 body=120 status=ok
// SIG undefined FUN_148537d76(void)

void FUN_148537d76(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148537dee FUN_148537dee body=395 status=ok
// SIG undefined FUN_148537dee(void)

double * FUN_148537dee(double *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  bool bVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_98 [44];
  int local_6c;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1484ac0ae(param_2,&local_6c);
  lVar2 = *(longlong *)(*param_2 + 0x140);
  iVar1 = *(int *)(*param_2 + 0x148);
  uVar4 = (ulonglong)(uint)(local_6c * iVar1);
  dVar7 = (double)*(float *)(lVar2 + 8 + uVar4) * (double)param_2[3];
  dVar10 = (double)*(float *)(lVar2 + 4 + uVar4) * (double)param_2[2];
  dVar13 = (double)*(float *)(lVar2 + uVar4) * (double)param_2[1];
  bVar5 = false;
  piVar6 = &local_68;
  dVar8 = dVar7;
  dVar11 = dVar10;
  dVar14 = dVar13;
  do {
    uVar4 = (ulonglong)(uint)(*piVar6 * iVar1);
    dVar12 = (double)*(float *)(lVar2 + uVar4) * (double)param_2[1];
    dVar15 = dVar12;
    if ((dVar14 <= dVar12) && (dVar15 = dVar14, dVar13 < dVar12)) {
      dVar13 = dVar12;
    }
    dVar14 = (double)*(float *)(lVar2 + 4 + uVar4) * (double)param_2[2];
    dVar12 = dVar14;
    if ((dVar11 <= dVar14) && (dVar12 = dVar11, dVar10 < dVar14)) {
      dVar10 = dVar14;
    }
    dVar11 = (double)*(float *)(lVar2 + 8 + uVar4) * (double)param_2[3];
    dVar9 = dVar11;
    if ((dVar8 <= dVar11) && (dVar9 = dVar8, dVar7 < dVar11)) {
      dVar7 = dVar11;
    }
    bVar3 = !bVar5;
    bVar5 = true;
    piVar6 = &local_64;
    dVar8 = dVar9;
    dVar11 = dVar12;
    dVar14 = dVar15;
  } while (bVar3);
  *param_1 = dVar15;
  param_1[1] = dVar12;
  param_1[2] = dVar9;
  param_1[3] = dVar13;
  param_1[4] = dVar10;
  param_1[5] = dVar7;
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148537f7a FUN_148537f7a body=180 status=ok
// SIG undefined FUN_148537f7a(void)

void FUN_148537f7a(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af17230;
  FUN_141082b5c(param_1 + 0x17,0);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x14,0);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x11,0);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0xe,0);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x000148538023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}


