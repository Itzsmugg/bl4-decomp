// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147583318 FUN_147583318 body=258 status=ok
// SIG undefined FUN_147583318(void)

ulonglong * FUN_147583318(ulonglong *param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  int local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == param_4) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = param_2[1];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)param_1 = (int)*param_2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(int *)(param_1 + 1) = (int)uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  *param_1 = 2;
  param_1[1] = 2;
  if ((char)*param_2 != '\x02') {
    FUN_144a808d5(&local_38,*param_2 >> 0x20,param_3,param_4);
    *param_1 = (ulonglong)((uint)(0.5 <= local_34) + local_38) << 0x20 |
               (ulonglong)((char)*param_2 != '\0');
  }
  if ((char)param_2[1] != '\x02') {
    FUN_144a808d5(&local_38,param_2[1] >> 0x20,param_3,param_4);
    param_1[1] = (ulonglong)((uint)(0.5 <= local_34) + local_38) << 0x20 |
                 (ulonglong)((char)param_2[1] != '\0');
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14758341b FUN_14758341b body=624 status=ok
// SIG undefined FUN_14758341b(void)

void FUN_14758341b(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_88 [44];
  uint local_5c;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = *(uint *)(param_3 + 0x18);
  *(uint *)(param_3 + 0x18) = local_5c & 0xfffffffd;
  uVar9 = param_3[0x13] & 0xff;
  lVar11 = 2;
  if (uVar9 == 2) {
    uVar9 = 0;
    uVar10 = 2;
  }
  else {
    FUN_144a808d5(&local_58,(uint)((int)uVar9 != 1) + (int)((ulonglong)param_3[0x13] >> 0x20),
                  param_1,param_2);
    uVar9 = local_58 << 0x20;
    uVar10 = 1;
  }
  uVar7 = param_3[0x14] & 0xff;
  if (uVar7 != 2) {
    FUN_144a808d5(&local_58,(uint)((int)uVar7 == 1) + (int)((ulonglong)param_3[0x14] >> 0x20),
                  param_1,param_2);
    lVar11 = local_58 << 0x20;
  }
  local_58 = uVar9 | uVar10;
  local_50 = lVar11;
  (**(code **)(*param_3 + 0x2a0))(param_3);
  if (0 < (longlong)(int)param_3[0x16]) {
    FUN_144a808d5(&local_58,(longlong)(int)param_3[0x16],param_1,param_2);
    uVar4 = (undefined4)local_58;
    cVar5 = FUN_145c40fca(param_3,1);
    if (cVar5 != '\0') {
      *(undefined4 *)(param_3 + 0x16) = uVar4;
    }
  }
  if (0 < (longlong)*(int *)((longlong)param_3 + 0xb4)) {
    FUN_144a808d5(&local_58,(longlong)*(int *)((longlong)param_3 + 0xb4),param_1,param_2);
    uVar4 = (undefined4)local_58;
    cVar5 = FUN_145c40fca(param_3,1);
    if (cVar5 != '\0') {
      *(undefined4 *)((longlong)param_3 + 0xb4) = uVar4;
    }
  }
  (**(code **)(*param_3 + 0x318))(param_3,param_1,param_2);
  FUN_144a808d5(&local_58,(int)param_3[0xc],param_1,param_2);
  *(undefined4 *)(param_3 + 0xc) = (undefined4)local_58;
  FUN_144a808d5(&local_58,*(undefined4 *)((longlong)param_3 + 100),param_1,param_2);
  *(undefined4 *)((longlong)param_3 + 100) = (undefined4)local_58;
  FUN_144a808d5(&local_58,*(undefined4 *)((longlong)param_3 + 0x7c),param_1,param_2);
  *(undefined4 *)((longlong)param_3 + 0x7c) = (undefined4)local_58;
  FUN_144a808d5(&local_58,*(undefined4 *)((longlong)param_3 + 0x94),param_1,param_2);
  *(undefined4 *)((longlong)param_3 + 0x94) = (undefined4)local_58;
  lVar6 = FUN_14757509a(param_3);
  lVar11 = lVar6 + 0x28;
  if (*(longlong *)(lVar6 + 0x40) != 0) {
    lVar11 = *(longlong *)(lVar6 + 0x40);
  }
  if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
    lVar6 = lVar11 + (longlong)*(int *)(lVar6 + 0x48) * 0x18;
    do {
      iVar1 = *(int *)(lVar11 + 0x10);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar11 + 8);
        lVar8 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar8);
          (**(code **)(*plVar3 + 0x38))(plVar3,param_1,param_2);
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar1 * 8 != lVar8);
      }
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != lVar6);
  }
  *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) & 0xfffffffd | local_5c & 2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758368c FUN_14758368c body=360 status=ok
// SIG undefined FUN_14758368c(void)

void FUN_14758368c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0 [2];
  longlong *local_c0 [2];
  longlong *local_b0;
  char local_84;
  ulonglong local_60;
  
  uVar2 = DAT_14c872be8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144a5dc74(local_d0);
  lVar3 = (**(code **)(*param_3 + 0x328))(param_3);
  local_d8 = uVar2;
  FUN_140997f46(local_c0,(float)*(int *)(lVar3 + 8),local_d0,1);
  FUN_140997a0e(local_c0);
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  plVar4 = (longlong *)(**(code **)(*param_3 + 0x328))(param_3);
  lVar3 = plVar4[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *plVar4;
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar5);
      FUN_144a5dc74(local_d0);
      FUN_140997b30(local_c0,0x3f800000,local_d0);
      if (local_d0[0] != (longlong *)0x0) {
        (**(code **)(*local_d0[0] + 0x10))();
      }
      FUN_14758341b(param_1,param_2,uVar2);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  FUN_140997a5c(local_c0);
  if (local_84 == '\x01') {
    local_84 = '\0';
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475837f6 FUN_1475837f6 body=1245 status=ok
// SIG undefined FUN_1475837f6(void)

void FUN_1475837f6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_f8;
  longlong local_f0;
  int local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d4 [4];
  longlong *local_d0;
  int local_c8;
  undefined4 local_c4;
  wchar_t *local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  char local_84;
  ulonglong local_60;
  
  local_f0 = CONCAT71(local_f0._1_7_,param_4);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar7 = *(int *)(param_3 + 0xe8);
  lVar2 = FUN_14756e164(param_3);
  local_108 = DAT_14c872be8;
  iVar7 = (iVar7 + 1) - (uint)(lVar2 == 0);
  if ((longlong)*(int *)(param_3 + 0x88) != 0) {
    lVar2 = 0;
    do {
      iVar7 = iVar7 + *(int *)(*(longlong *)(param_3 + 0x80) + 0x28 + lVar2);
      lVar2 = lVar2 + 0x30;
    } while ((longlong)*(int *)(param_3 + 0x88) * 0x30 != lVar2);
  }
  local_c0 = L"ChangingTickResolution";
  local_b8 = 0x16;
  FUN_1446e940c(&local_e8,&local_c0);
  local_c0 = L"MovieScene";
  local_b8 = 10;
  FUN_1446e940c(local_d4,&local_c0);
  FUN_140208bae(&local_d0,local_d4,&local_e8,L"Migrating sequence frame timing");
  FUN_140997f46(&local_c0,(float)iVar7,&local_d0,1);
  FUN_140997a0e(&local_c0);
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  FUN_14681a77c(&local_c0,0x3e800000,1,0);
  local_e8 = *(int *)(param_3 + 0x108);
  fStack_e4 = *(float *)(param_3 + 0x10c);
  uStack_e0 = *(undefined4 *)(param_3 + 0x110);
  uStack_dc = *(undefined4 *)(param_3 + 0x114);
  FUN_147583318(&local_d0,&local_e8,param_1,param_2);
  FUN_14756db80(param_3,&local_d0,1);
  local_f8 = param_1;
  if ((longlong)*(int *)(param_3 + 0xe8) != 0) {
    plVar8 = *(longlong **)(param_3 + 0xe0);
    plVar10 = plVar8 + *(int *)(param_3 + 0xe8);
    do {
      uVar1 = local_f8;
      plVar3 = (longlong *)*plVar8;
      FUN_144a5dc74(&local_d0);
      FUN_140997b30(&local_c0,0x3f800000,&local_d0);
      if (local_d0 != (longlong *)0x0) {
        (**(code **)(*local_d0 + 0x10))();
      }
      FUN_14758368c(uVar1,param_2,plVar3);
      if ((char)local_f0 != '\0') {
        lVar2 = FUN_14086216a();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x328))(plVar3);
          lVar2 = plVar3[1];
          if ((longlong)(int)lVar2 != 0) {
            lVar6 = *plVar3;
            lVar9 = 0;
            do {
              lVar5 = *(longlong *)(lVar6 + lVar9);
              if (lVar5 != 0) {
                lVar4 = FUN_1408612da();
                if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
                    (*(longlong **)(lVar5 + 0x7d8) != (longlong *)0x0)) &&
                   (lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x7d8) + 0x2e8))(), lVar5 != 0)) {
                  FUN_1475837f6(local_f8,param_2,lVar5,1);
                }
              }
              lVar9 = lVar9 + 8;
            } while ((longlong)(int)lVar2 * 8 != lVar9);
          }
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar10);
  }
  uVar1 = local_f8;
  lVar2 = FUN_14756e164(param_3);
  if (lVar2 != 0) {
    FUN_144a5dc74(&local_d0);
    FUN_140997b30(&local_c0,0x3f800000,&local_d0);
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
    FUN_14758368c(uVar1,param_2,lVar2);
  }
  local_f0 = param_3;
  if ((longlong)*(int *)(param_3 + 0x88) != 0) {
    lVar2 = *(longlong *)(param_3 + 0x80);
    lVar6 = (longlong)*(int *)(param_3 + 0x88) * 0x30 + lVar2;
    do {
      iVar7 = *(int *)(lVar2 + 0x28);
      if ((longlong)iVar7 != 0) {
        lVar9 = *(longlong *)(lVar2 + 0x20);
        lVar5 = 0;
        do {
          uVar1 = *(undefined8 *)(lVar9 + lVar5);
          FUN_144a5dc74(&local_d0);
          FUN_140997b30(&local_c0,0x3f800000,&local_d0);
          if (local_d0 != (longlong *)0x0) {
            (**(code **)(*local_d0 + 0x10))();
          }
          FUN_14758368c(local_f8,param_2,uVar1);
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar7 * 8 != lVar5);
      }
      lVar2 = lVar2 + 0x30;
    } while (lVar2 != lVar6);
  }
  lVar2 = local_f0;
  local_d0 = (longlong *)0x0;
  iVar7 = *(int *)(local_f0 + 0x158);
  uVar1 = *(undefined8 *)(local_f0 + 0x150);
  local_c8 = iVar7;
  if (iVar7 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1475903c0(&local_d0,iVar7,0);
    FUN_147590422(local_d0,uVar1,iVar7);
  }
  uVar1 = local_f8;
  FUN_14756ec94(lVar2);
  if ((longlong)local_c8 != 0) {
    lVar6 = (longlong)local_c8 << 5;
    plVar8 = local_d0;
    do {
      FUN_144a808d5(&local_e8,(int)*plVar8,uVar1,param_2);
      *(uint *)plVar8 = (uint)(0.5 <= fStack_e4) + local_e8;
      FUN_14756e9bc(lVar2,plVar8);
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  FUN_140fe2f26(lVar2);
  FUN_140cae155(local_d0,local_c8);
  if (local_d0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(lVar2 + 0x118) = param_2;
  FUN_140997a5c(&local_c0);
  if (local_84 == '\x01') {
    local_84 = '\0';
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if (local_c0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c0 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147583cf6 FUN_147583cf6 body=1099 status=ok
// SIG undefined FUN_147583cf6(void)

void FUN_147583cf6(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong *local_90;
  undefined4 local_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x328))();
  local_94 = 0;
  if ((longlong)(int)plVar7[1] != 0) {
    lVar12 = 0;
    local_94 = 0;
    do {
      iVar15 = *(int *)(*(longlong *)(*plVar7 + lVar12) + 0xb8);
      if (local_94 < iVar15) {
        local_94 = iVar15;
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)plVar7[1] * 8 != lVar12);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_98 = 0;
  iVar15 = 0;
  local_90 = param_1;
  while( true ) {
    uStack_50 = uStack_50 & 0xffffffff00000000;
    if (iVar15 < 0) {
      FUN_147590456(&local_58,0);
    }
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x328))(param_1);
    lVar12 = plVar7[1];
    if ((longlong)(int)lVar12 != 0) {
      lVar1 = *plVar7;
      lVar13 = 0;
      do {
        lVar9 = *(longlong *)(lVar1 + lVar13);
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0xb8) == local_98)) {
          lVar17 = (longlong)(int)uStack_50;
          uVar5 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
          if (uStack_50._4_4_ < uVar5) {
            FUN_1408617ce(&local_58);
          }
          *(longlong *)(local_58 + lVar17 * 8) = lVar9;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)(int)lVar12 * 8 != lVar13);
    }
    if (0 < (int)uStack_50) {
      lVar12 = 0;
      do {
        lVar1 = *(longlong *)(local_58 + lVar12 * 8);
        local_60 = lVar1;
        uVar5 = (**(code **)(*param_1 + 0x2f0))(param_1);
        if ((uVar5 & 4) == 0) {
          *(undefined1 *)(lVar1 + 0x78) = 0;
        }
        if ((uVar5 & 8) == 0) {
          *(undefined1 *)(lVar1 + 0x90) = 0;
        }
        if ((~uVar5 & 3) == 0) {
          FUN_1402984e6();
          uVar8 = FUN_144a78ede(lVar1);
          local_78 = *(undefined4 *)(lVar1 + 0x98);
          iStack_74 = *(int *)(lVar1 + 0x9c);
          uStack_70 = *(undefined4 *)(lVar1 + 0xa0);
          iStack_6c = *(int *)(lVar1 + 0xa4);
          if ((int)uStack_50 < 1) {
            uVar10 = 0;
            iVar14 = 0;
            iVar15 = 0;
          }
          else {
            lVar13 = 0;
            iVar15 = 0;
            iVar14 = 0;
            uVar10 = 0;
            iVar6 = (int)uStack_50;
            do {
              if (lVar12 != lVar13) {
                lVar9 = *(longlong *)(local_58 + lVar13 * 8);
                local_88 = *(undefined4 *)(lVar9 + 0x98);
                iStack_84 = *(int *)(lVar9 + 0x9c);
                uStack_80 = *(undefined4 *)(lVar9 + 0xa0);
                iStack_7c = *(int *)(lVar9 + 0xa4);
                if (((char)local_88 == '\x02') && ((char)uStack_80 == '\x02')) {
                  FUN_14073751e();
                  lVar9 = FUN_144a78ede(uVar8);
                  local_88 = *(undefined4 *)(lVar9 + 0x108);
                  iStack_84 = *(int *)(lVar9 + 0x10c);
                  uStack_80 = *(undefined4 *)(lVar9 + 0x110);
                  iStack_7c = *(int *)(lVar9 + 0x114);
                }
                uVar2 = uVar10 & 1;
                uVar10 = 1;
                if (uVar2 == 0) {
                  uVar10 = FUN_147557108(&local_88);
                  uVar10 = uVar10 & 0xffffffff;
                }
                if (((char)uStack_80 == '\x02') || ((char)local_78 == '\x02')) {
                  cVar3 = '\0';
                }
                else {
                  cVar3 = FUN_1400a246c(&local_78);
                }
                if (((char)local_88 == '\x02') || ((char)uStack_70 == '\x02')) {
                  cVar4 = '\0';
                }
                else {
                  cVar4 = FUN_1400a246c(&local_78);
                }
                iVar16 = iVar15;
                if ((cVar3 == '\x01' && cVar4 == '\0') &&
                   (iVar16 = (iStack_7c +
                             *(int *)(&DAT_14a46e600 + (ulonglong)((char)uStack_80 == '\x01') * 4))
                             - (iStack_74 +
                               *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_78 == '\0') * 4)),
                   iVar16 <= iVar15)) {
                  iVar16 = iVar15;
                }
                iVar11 = iVar14;
                if ((cVar3 == '\0' && cVar4 == '\x01') &&
                   (iVar11 = (iStack_6c +
                             *(int *)(&DAT_14a46e600 + (ulonglong)((char)uStack_70 == '\x01') * 4))
                             - (iStack_84 +
                               *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_88 == '\0') * 4)),
                   iVar11 <= iVar14)) {
                  iVar11 = iVar14;
                }
                iVar6 = (int)uStack_50;
                iVar15 = iVar16;
                iVar14 = iVar11;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < iVar6);
          }
          iVar6 = 0x7fffffff;
          if (((char)local_78 != '\x02') && ((char)uStack_70 != '\x02')) {
            iVar6 = (iStack_6c +
                    *(int *)(&DAT_14a46e600 + (ulonglong)((char)uStack_70 == '\x01') * 4)) -
                    (iStack_74 + *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_78 == '\0') * 4))
            ;
          }
          if (iVar14 == 0 && iVar15 == 0) {
            iVar15 = 0;
            iVar14 = 0;
            if ((uVar10 & 1) != 0) {
              iVar15 = iVar6 + 3;
              if (-1 < iVar6) {
                iVar15 = iVar6;
              }
              iVar15 = iVar15 >> 2;
              iVar14 = iVar15;
            }
          }
          if (iVar6 <= iVar15) {
            iVar15 = iVar6;
          }
          if (iVar15 < 1) {
            iVar15 = 0;
          }
          if (iVar14 < iVar6) {
            iVar6 = iVar14;
          }
          if (iVar6 < 1) {
            iVar6 = 0;
          }
          param_1 = local_90;
          if ((*(int *)(lVar1 + 0x60) != iVar15) || (*(int *)(lVar1 + 100) != iVar6)) {
            *(int *)(lVar1 + 0x60) = iVar15;
            *(int *)(lVar1 + 100) = iVar6;
          }
        }
        else if ((*(int *)(lVar1 + 0x60) != 0) || (*(int *)(lVar1 + 100) != 0)) {
          *(undefined8 *)(lVar1 + 0x60) = 0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uStack_50);
    }
    if (local_98 == local_94) break;
    local_98 = local_98 + 1;
    iVar15 = uStack_50._4_4_;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147584184 FUN_147584184 body=521 status=ok
// SIG undefined FUN_147584184(void)

void FUN_147584184(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_d8 [36];
  uint local_b4;
  uint *local_b0;
  uint *local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  do {
    local_b4 = uVar6;
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x328))(param_1);
    iVar5 = 0;
    if ((longlong)(int)plVar3[1] != 0) {
      lVar7 = 0;
      iVar5 = 0;
      do {
        iVar2 = *(int *)(*(longlong *)(*plVar3 + lVar7) + 0xb8);
        if (iVar5 < iVar2) {
          iVar5 = iVar2;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)plVar3[1] * 8 != lVar7);
    }
    if (iVar5 < (int)uVar6) {
      FUN_14758cdc8(param_1 + 0x15,&local_98);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1405d1606(&local_98);
      if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    uVar6 = local_b4;
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      plVar3 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar3 = param_2 + 7;
      }
      iVar5 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_2[9] - 1U & local_b4) * 4);
      if (iVar5 != -1) {
        do {
          lVar7 = *param_2 + (longlong)iVar5 * 0x10;
          if (*(uint *)(*param_2 + (longlong)iVar5 * 0x10) == local_b4) {
            if ((uint *)(lVar7 + 4) != (uint *)0x0 && lVar7 != 0) {
              uVar6 = *(uint *)(lVar7 + 4);
            }
            break;
          }
          iVar5 = *(int *)(lVar7 + 8);
        } while (iVar5 != -1);
      }
    }
    if ((int)param_1[0x16] != *(int *)((longlong)param_1 + 0xdc)) {
      plVar3 = (longlong *)param_1[0x1d];
      if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
        plVar3 = param_1 + 0x1c;
      }
      uVar4 = *(uint *)((longlong)plVar3 + (ulonglong)((int)param_1[0x1e] - 1U & uVar6) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar1 = (uint *)(param_1[0x15] + (longlong)(int)uVar4 * 0x18);
          if (*puVar1 == uVar6) {
            if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
              local_b0 = &local_b4;
              local_a8 = puVar1 + 2;
              FUN_1475906a6(&local_98,local_9c);
            }
            break;
          }
          uVar4 = puVar1[4];
        } while (uVar4 != 0xffffffff);
      }
    }
    uVar6 = local_b4 + 1;
  } while( true );
}



// FUNCTION 14758438e FUN_14758438e body=50 status=ok
// SIG undefined FUN_14758438e(void)

longlong FUN_14758438e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x78);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 * 4;
    lVar3 = 0;
    do {
      bVar4 = *(int *)(*(longlong *)(param_1 + 0x70) + lVar3) == param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar4);
      if (bVar4) {
        return lVar2;
      }
      bVar4 = lVar1 + -4 != lVar3;
      lVar3 = lVar3 + 4;
    } while (bVar4);
  }
  return lVar2;
}



// FUNCTION 1475843c0 FUN_1475843c0 body=106 status=ok
// SIG undefined FUN_1475843c0(void)

uint * FUN_1475843c0(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar2 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
    }
    uVar4 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)(int)uVar4 * 0x18);
        if (*puVar3 == param_2) goto LAB_1475843d0;
        uVar4 = puVar3[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar3 = (uint *)0x0;
LAB_1475843d0:
  puVar1 = puVar3 + 2;
  if (puVar3 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  return puVar1;
}



// FUNCTION 14758442a FUN_14758442a body=128 status=ok
// SIG undefined FUN_14758442a(void)

undefined4 * FUN_14758442a(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = FUN_14073751e();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x88) != 0)) {
    puVar3 = *(undefined4 **)(lVar2 + 0x80);
    puVar4 = puVar3 + (longlong)*(int *)(lVar2 + 0x88) * 0xc;
    do {
      if ((longlong)(int)puVar3[10] != 0) {
        lVar2 = 0;
        do {
          if (*(longlong *)(*(longlong *)(puVar3 + 8) + lVar2) == param_1) {
            uVar5 = *puVar3;
            uVar6 = puVar3[1];
            uVar7 = puVar3[2];
            uVar8 = puVar3[3];
            goto LAB_147584498;
          }
          lVar2 = lVar2 + 8;
        } while ((longlong)(int)puVar3[10] * 8 != lVar2);
      }
      puVar3 = puVar3 + 0xc;
    } while (puVar3 != puVar4);
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
LAB_147584498:
  *param_2 = uVar5;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  return param_2;
}



// FUNCTION 1475844aa FUN_1475844aa body=173 status=ok
// SIG undefined FUN_1475844aa(void)

void FUN_1475844aa(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x2c0))(param_1,param_3);
  if (cVar1 == '\0') {
    uVar2 = 3;
    if ((char)*(uint *)(param_1 + 0x10) != '\0') {
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    if ((char)uVar2 == '\x03') {
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_4c = param_2[3];
      FUN_147544376(&local_58,param_3);
    }
    else if ((uVar2 & 0xff) == 2) {
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      uStack_3c = param_2[3];
      FUN_14754413c(&local_48,param_3);
    }
    else if ((uVar2 & 0xff) == 1) {
      local_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      uStack_2c = param_2[3];
      FUN_147543f84(&local_38,param_3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147584558 FUN_147584558 body=597 status=ok
// SIG undefined FUN_147584558(void)

void FUN_147584558(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  ulonglong local_98;
  ulonglong local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar2 = *param_1;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar9);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xc0) & 1) != 0)) {
        uVar4 = *(ulonglong *)(lVar3 + 0x98);
        uVar5 = *(ulonglong *)(lVar3 + 0xa0);
        cVar8 = (char)uVar4;
        cVar10 = (char)uVar5;
        iVar11 = (int)(uVar4 >> 0x20);
        iVar7 = (int)(uVar5 >> 0x20);
        if (((cVar8 == '\x02') || (cVar10 == '\x02')) ||
           ((iVar11 <= iVar7 && ((iVar11 != iVar7 || (cVar10 != '\0' && cVar8 != '\0')))))) {
          if ((cVar8 != '\x02') && (iVar1 = *(int *)(lVar3 + 0xb0), 0 < iVar1)) {
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8 = 0x80000000;
            uStack_a4 = 0;
            FUN_14485c47a(&uStack_b0,lVar3);
            uStack_a2 = 1;
            local_68 = CONCAT17(uStack_a1,CONCAT16(1,CONCAT24(uStack_a4,local_a8)));
            local_78 = (undefined4)local_b8;
            uStack_74 = local_b8._4_4_;
            uStack_70 = (undefined4)uStack_b0;
            uStack_6c = uStack_b0._4_4_;
            local_88 = &PTR_FUN_14a475c08;
            local_c8 = 0;
            local_98 = ((ulonglong)(uint)(iVar11 - iVar1) << 0x20) + 1;
            local_90 = uVar4 & 0xffffffff00000000;
            local_80 = param_2;
            FUN_1475569d4(param_2,&local_98,&local_88,0xffffffff);
          }
          if ((cVar10 != '\x02') && (iVar11 = *(int *)(lVar3 + 0xb4), 0 < iVar11)) {
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8 = 0x80000000;
            uStack_a4 = 0;
            FUN_14485c47a(&uStack_b0,lVar3);
            uStack_a2 = 2;
            local_68 = CONCAT17(uStack_a1,CONCAT16(2,CONCAT24(uStack_a4,local_a8)));
            local_78 = (undefined4)local_b8;
            uStack_74 = local_b8._4_4_;
            uStack_70 = (undefined4)uStack_b0;
            uStack_6c = uStack_b0._4_4_;
            local_88 = &PTR_FUN_14a475c08;
            local_c8 = 0;
            local_98 = uVar5 & 0xffffffff00000000 | 1;
            local_90 = (ulonglong)(uint)(iVar11 + iVar7) << 0x20;
            local_80 = param_2;
            FUN_1475569d4(param_2,&local_98,&local_88,0xffffffff);
          }
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475847ae FUN_1475847ae body=49 status=ok
// SIG undefined FUN_1475847ae(void)

undefined8 * FUN_1475847ae(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x80000000;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  FUN_14485c47a(param_1 + 1);
  return param_1;
}



// FUNCTION 1475847e0 FUN_1475847e0 body=13 status=ok
// SIG undefined FUN_1475847e0(void)

void FUN_1475847e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001475847ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c8))();
  return;
}



// FUNCTION 1475847ee FUN_1475847ee body=1718 status=ok
// SIG undefined FUN_1475847ee(void)

void FUN_1475847ee(longlong *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  void *_Src;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_208 [40];
  ulonglong local_1e0;
  longlong *local_1d8;
  int local_1d0;
  uint local_1cc;
  longlong *local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  uint local_1a0;
  int iStack_19c;
  undefined4 local_198;
  undefined4 local_194;
  ulonglong local_190;
  longlong local_188;
  longlong lStack_180;
  ulonglong local_178;
  longlong *local_168;
  undefined8 uStack_160;
  void *local_158;
  int local_150;
  void *local_148;
  int local_140;
  void *local_138;
  int local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_118 = 2;
  local_110 = 2;
  local_108 = 0xffffffff;
  uStack_104 = 0xffffffff;
  uStack_100 = 0xffffffff;
  uStack_fc = 0xffffffff;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_1d8 = param_1;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x328))();
  local_128 = (void *)0x0;
  local_120 = *(int *)(puVar9 + 1);
  lVar13 = (longlong)local_120;
  _Src = (void *)*puVar9;
  if (lVar13 == 0) {
    local_11c = 0;
    local_130 = 0;
  }
  else {
    FUN_14574f05a(&local_128,local_120,0);
    memcpy(local_128,_Src,lVar13 << 3);
    local_130 = local_120;
  }
  plVar10 = local_1d8;
  local_138 = local_128;
  FUN_1475844aa(local_1d8,&local_138,&local_118);
  if ((~*(uint *)(plVar10 + 0xb) & 3) == 0) {
    local_148 = local_128;
    local_140 = local_120;
    FUN_1475445a0(&local_148,&local_118);
  }
  local_158 = local_128;
  local_150 = local_120;
  FUN_147584558(&local_158,&local_118);
  local_1c8 = local_1d8 + 0x13;
  *(undefined4 *)(local_1d8 + 0x14) = 0;
  if (*(int *)((longlong)local_1d8 + 0xa4) < 0) {
    FUN_14758cf2e(local_1c8);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = (undefined1  [16])0x0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_147556536(&local_1b8,&local_118);
  while (((int)local_1a8 != -1 || (local_1a8._4_4_ == 0))) {
    local_168 = local_1b8;
    uStack_160 = uStack_1b0;
    FUN_14754a3b2(&local_b8,&local_118,local_1a8);
    lVar13 = local_b8;
    if (puStack_b0 != (undefined1 *)0x0) {
      iVar18 = 0;
      if ((longlong)*(int *)((longlong)puStack_b0 + 0x1c) != -1) {
        iVar18 = *(int *)(*(longlong *)(local_b8 + 0x40) + 4 +
                         (longlong)*(int *)((longlong)puStack_b0 + 0x1c) * 0xc);
      }
      if ((-1 < (int)(uint)local_a8) && ((int)(uint)local_a8 < iVar18)) {
        local_188 = local_b8;
        lStack_180 = (longlong)puStack_b0;
        local_178 = local_a8;
        bVar19 = puStack_b0 == (undefined1 *)0x0;
        uVar11 = local_a8;
        while (iVar18 = (int)uVar11, !(bool)(bVar19 & iVar18 == 0)) {
          if ((longlong)*(int *)(lStack_180 + 0x1c) == -1) {
            lVar15 = 0;
          }
          else {
            lVar15 = (longlong)
                     *(int *)(*(longlong *)(local_188 + 0x40) +
                             (longlong)*(int *)(lStack_180 + 0x1c) * 0xc) * 0x18 +
                     *(longlong *)(local_188 + 0x50);
          }
          local_190 = FUN_14479d2ce(lVar15 + (longlong)iVar18 * 0x18 + 8);
          uVar6 = ((uint)(local_190 >> 0x14) & 0xffff ^ (uint)(local_190 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          plVar10 = (longlong *)FUN_147590b56(local_98,uVar6 >> 0x10 ^ uVar6,&local_190);
          uVar11 = local_190;
          if ((local_190 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_190);
          }
          lVar15 = lVar15 + (longlong)iVar18 * 0x18;
          uVar3 = *(undefined4 *)(lVar15 + 0x10);
          uVar1 = *(undefined1 *)(lVar15 + 0x16);
          uVar2 = *(undefined2 *)(lVar15 + 0x14);
          iVar18 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar18 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar18 + 1U) {
            FUN_1475910fa(plVar10,iVar18);
          }
          lVar15 = *plVar10;
          *(ulonglong *)(lVar15 + (longlong)iVar18 * 0x20) = uVar11;
          if ((uVar11 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(uVar11);
          }
          lVar15 = lVar15 + (longlong)iVar18 * 0x20;
          *(longlong **)(lVar15 + 8) = local_168;
          *(undefined8 *)(lVar15 + 0x10) = uStack_160;
          *(undefined4 *)(lVar15 + 0x18) = uVar3;
          *(undefined1 *)(lVar15 + 0x1c) = uVar1;
          *(undefined2 *)(lVar15 + 0x1e) = uVar2;
          FUN_147544974(&local_188);
          uVar11 = local_178 & 0xffffffff;
          bVar19 = local_188 == lVar13 && lStack_180 == 0;
        }
      }
    }
    FUN_14055b6c8(&local_1b8,1);
  }
  puStack_b0 = local_88;
  local_b8 = 0x100000000;
  local_a8._0_4_ = 0xffffffff;
  local_a8._4_4_ = 0;
  local_a0 = 0;
  iVar18 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar18 = local_70;
  }
  local_1a0 = (uint)local_a8;
  iStack_19c = local_a8._4_4_;
  local_198 = local_a0;
  local_194 = local_9c;
  uStack_1b0 = local_b8;
  local_1a8 = puStack_b0;
  local_1b8 = (longlong *)local_98;
  iVar8 = iVar18;
  if ((local_a8._4_4_ != iVar18) || (puStack_b0 != local_88)) {
    do {
      local_1d0 = iVar8;
      uVar6 = *(uint *)(*local_1b8 + 0x10 + (longlong)iStack_19c * 0x20);
      uVar11 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        lVar13 = *local_1b8 + (longlong)iStack_19c * 0x20;
        plVar10 = (longlong *)(lVar13 + 8);
        uVar14 = 0;
        do {
          uVar17 = (uint)uVar14;
          lVar15 = uVar14 * 0x20;
          uVar7 = (int)uVar11 - 1;
          uVar6 = uVar17;
          if ((int)uVar17 < (int)uVar7) {
            lVar12 = *plVar10 + lVar15;
            local_1c0 = (ulonglong)uVar7;
            lVar16 = lVar15 + 0x28;
            local_1e0 = uVar11;
            local_1cc = uVar7;
            do {
              lVar4 = *plVar10;
              cVar5 = FUN_147584eac(lVar4 + lVar16,lVar12 + 8);
              uVar11 = local_1e0;
              if (((cVar5 == '\0') || (*(char *)(lVar4 + 0x14 + lVar16) != *(char *)(lVar12 + 0x1c))
                  ) || (*(int *)(lVar4 + 0x10 + lVar16) != *(int *)(lVar12 + 0x18))) {
                uVar6 = (uint)uVar14;
                break;
              }
              uVar14 = uVar14 + 1;
              *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar4 + 8 + lVar16);
              lVar16 = lVar16 + 0x20;
              uVar6 = local_1cc;
            } while (uVar14 < local_1c0);
          }
          uVar7 = uVar6 - uVar17;
          if (uVar7 != 0 && (int)uVar17 <= (int)uVar6) {
            iVar18 = uVar6 + 1;
            iVar8 = *(int *)(lVar13 + 0x10) - iVar18;
            if (iVar8 != 0) {
              memmove((void *)(*plVar10 + lVar15 + 0x20),
                      (void *)(*plVar10 + lVar15 + (ulonglong)uVar7 * 0x20 + 0x20),
                      (longlong)iVar8 << 5);
              iVar18 = *(int *)(lVar13 + 0x10);
            }
            *(uint *)(lVar13 + 0x10) = iVar18 - uVar7;
            uVar11 = (ulonglong)((int)uVar11 - uVar7);
          }
          iVar18 = local_1d0;
          uVar14 = (ulonglong)(uVar6 + 1);
        } while ((int)(uVar6 + 1) < (int)uVar11);
        if (0 < *(int *)(lVar13 + 0x10)) {
          FUN_147584f74(local_1c8,plVar10);
        }
      }
      local_1a0 = local_1a0 & ~uStack_1b0._4_4_;
      FUN_1449c0562(&uStack_1b0);
      iVar8 = local_1d0;
    } while (local_1b8 != (longlong *)local_98 || (local_1a8 != local_88 || iStack_19c != iVar18));
  }
  *(undefined8 *)((longlong)local_1d8 + 0x84) = *(undefined8 *)((longlong)local_1d8 + 0x2c);
  *(undefined8 *)((longlong)local_1d8 + 0x8c) = *(undefined8 *)((longlong)local_1d8 + 0x34);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14758cf5e(local_98);
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_147584fd2(&local_118);
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147584ea6 thunk_FUN_1475847ee body=5 status=ok
// SIG undefined thunk_FUN_1475847ee(void)

void thunk_FUN_1475847ee(longlong *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  void *_Src;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_208 [40];
  ulonglong uStack_1e0;
  longlong *plStack_1d8;
  int iStack_1d0;
  uint uStack_1cc;
  longlong *plStack_1c8;
  ulonglong uStack_1c0;
  longlong *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  uint uStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  ulonglong uStack_190;
  longlong lStack_188;
  longlong lStack_180;
  ulonglong uStack_178;
  longlong *plStack_168;
  undefined8 uStack_160;
  void *pvStack_158;
  int iStack_150;
  void *pvStack_148;
  int iStack_140;
  void *pvStack_138;
  int iStack_130;
  void *pvStack_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  longlong lStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  int iStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uStack_118 = 2;
  uStack_110 = 2;
  uStack_108 = 0xffffffff;
  uStack_104 = 0xffffffff;
  uStack_100 = 0xffffffff;
  uStack_fc = 0xffffffff;
  auStack_f8 = (undefined1  [16])0x0;
  auStack_e8 = (undefined1  [16])0x0;
  auStack_d8 = (undefined1  [16])0x0;
  auStack_c8 = (undefined1  [16])0x0;
  plStack_1d8 = param_1;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x328))();
  pvStack_128 = (void *)0x0;
  iStack_120 = *(int *)(puVar9 + 1);
  lVar13 = (longlong)iStack_120;
  _Src = (void *)*puVar9;
  if (lVar13 == 0) {
    uStack_11c = 0;
    iStack_130 = 0;
  }
  else {
    FUN_14574f05a(&pvStack_128,iStack_120,0);
    memcpy(pvStack_128,_Src,lVar13 << 3);
    iStack_130 = iStack_120;
  }
  plVar10 = plStack_1d8;
  pvStack_138 = pvStack_128;
  FUN_1475844aa(plStack_1d8,&pvStack_138,&uStack_118);
  if ((~*(uint *)(plVar10 + 0xb) & 3) == 0) {
    pvStack_148 = pvStack_128;
    iStack_140 = iStack_120;
    FUN_1475445a0(&pvStack_148,&uStack_118);
  }
  pvStack_158 = pvStack_128;
  iStack_150 = iStack_120;
  FUN_147584558(&pvStack_158,&uStack_118);
  plStack_1c8 = plStack_1d8 + 0x13;
  *(undefined4 *)(plStack_1d8 + 0x14) = 0;
  if (*(int *)((longlong)plStack_1d8 + 0xa4) < 0) {
    FUN_14758cf2e(plStack_1c8);
  }
  uStack_78 = 0;
  iStack_70 = 0;
  auStack_98 = (undefined1  [16])0x0;
  uStack_6c = 0xffffffff00000080;
  uStack_64 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  FUN_147556536(&plStack_1b8,&uStack_118);
  while (((int)uStack_1a8 != -1 || (uStack_1a8._4_4_ == 0))) {
    plStack_168 = plStack_1b8;
    uStack_160 = uStack_1b0;
    FUN_14754a3b2(&lStack_b8,&uStack_118,uStack_1a8);
    lVar13 = lStack_b8;
    if (puStack_b0 != (undefined1 *)0x0) {
      iVar18 = 0;
      if ((longlong)*(int *)((longlong)puStack_b0 + 0x1c) != -1) {
        iVar18 = *(int *)(*(longlong *)(lStack_b8 + 0x40) + 4 +
                         (longlong)*(int *)((longlong)puStack_b0 + 0x1c) * 0xc);
      }
      if ((-1 < (int)(uint)uStack_a8) && ((int)(uint)uStack_a8 < iVar18)) {
        lStack_188 = lStack_b8;
        lStack_180 = (longlong)puStack_b0;
        uStack_178 = uStack_a8;
        bVar19 = puStack_b0 == (undefined1 *)0x0;
        uVar11 = uStack_a8;
        while (iVar18 = (int)uVar11, !(bool)(bVar19 & iVar18 == 0)) {
          if ((longlong)*(int *)(lStack_180 + 0x1c) == -1) {
            lVar15 = 0;
          }
          else {
            lVar15 = (longlong)
                     *(int *)(*(longlong *)(lStack_188 + 0x40) +
                             (longlong)*(int *)(lStack_180 + 0x1c) * 0xc) * 0x18 +
                     *(longlong *)(lStack_188 + 0x50);
          }
          uStack_190 = FUN_14479d2ce(lVar15 + (longlong)iVar18 * 0x18 + 8);
          uVar6 = ((uint)(uStack_190 >> 0x14) & 0xffff ^ (uint)(uStack_190 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          plVar10 = (longlong *)FUN_147590b56(auStack_98,uVar6 >> 0x10 ^ uVar6,&uStack_190);
          uVar11 = uStack_190;
          if ((uStack_190 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(uStack_190);
          }
          lVar15 = lVar15 + (longlong)iVar18 * 0x18;
          uVar3 = *(undefined4 *)(lVar15 + 0x10);
          uVar1 = *(undefined1 *)(lVar15 + 0x16);
          uVar2 = *(undefined2 *)(lVar15 + 0x14);
          iVar18 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar18 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar18 + 1U) {
            FUN_1475910fa(plVar10,iVar18);
          }
          lVar15 = *plVar10;
          *(ulonglong *)(lVar15 + (longlong)iVar18 * 0x20) = uVar11;
          if ((uVar11 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(uVar11);
          }
          lVar15 = lVar15 + (longlong)iVar18 * 0x20;
          *(longlong **)(lVar15 + 8) = plStack_168;
          *(undefined8 *)(lVar15 + 0x10) = uStack_160;
          *(undefined4 *)(lVar15 + 0x18) = uVar3;
          *(undefined1 *)(lVar15 + 0x1c) = uVar1;
          *(undefined2 *)(lVar15 + 0x1e) = uVar2;
          FUN_147544974(&lStack_188);
          uVar11 = uStack_178 & 0xffffffff;
          bVar19 = lStack_188 == lVar13 && lStack_180 == 0;
        }
      }
    }
    FUN_14055b6c8(&plStack_1b8,1);
  }
  puStack_b0 = auStack_88;
  lStack_b8 = 0x100000000;
  uStack_a8._0_4_ = 0xffffffff;
  uStack_a8._4_4_ = 0;
  uStack_a0 = 0;
  iVar18 = 0;
  if (iStack_70 != 0) {
    FUN_1449c0562(&lStack_b8);
    iVar18 = iStack_70;
  }
  uStack_1a0 = (uint)uStack_a8;
  iStack_19c = uStack_a8._4_4_;
  uStack_198 = uStack_a0;
  uStack_194 = uStack_9c;
  uStack_1b0 = lStack_b8;
  uStack_1a8 = puStack_b0;
  plStack_1b8 = (longlong *)auStack_98;
  iVar8 = iVar18;
  if ((uStack_a8._4_4_ != iVar18) || (puStack_b0 != auStack_88)) {
    do {
      iStack_1d0 = iVar8;
      uVar6 = *(uint *)(*plStack_1b8 + 0x10 + (longlong)iStack_19c * 0x20);
      uVar11 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        lVar13 = *plStack_1b8 + (longlong)iStack_19c * 0x20;
        plVar10 = (longlong *)(lVar13 + 8);
        uVar14 = 0;
        do {
          uVar17 = (uint)uVar14;
          lVar15 = uVar14 * 0x20;
          uVar7 = (int)uVar11 - 1;
          uVar6 = uVar17;
          if ((int)uVar17 < (int)uVar7) {
            lVar12 = *plVar10 + lVar15;
            uStack_1c0 = (ulonglong)uVar7;
            lVar16 = lVar15 + 0x28;
            uStack_1e0 = uVar11;
            uStack_1cc = uVar7;
            do {
              lVar4 = *plVar10;
              cVar5 = FUN_147584eac(lVar4 + lVar16,lVar12 + 8);
              uVar11 = uStack_1e0;
              if (((cVar5 == '\0') || (*(char *)(lVar4 + 0x14 + lVar16) != *(char *)(lVar12 + 0x1c))
                  ) || (*(int *)(lVar4 + 0x10 + lVar16) != *(int *)(lVar12 + 0x18))) {
                uVar6 = (uint)uVar14;
                break;
              }
              uVar14 = uVar14 + 1;
              *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar4 + 8 + lVar16);
              lVar16 = lVar16 + 0x20;
              uVar6 = uStack_1cc;
            } while (uVar14 < uStack_1c0);
          }
          uVar7 = uVar6 - uVar17;
          if (uVar7 != 0 && (int)uVar17 <= (int)uVar6) {
            iVar18 = uVar6 + 1;
            iVar8 = *(int *)(lVar13 + 0x10) - iVar18;
            if (iVar8 != 0) {
              memmove((void *)(*plVar10 + lVar15 + 0x20),
                      (void *)(*plVar10 + lVar15 + (ulonglong)uVar7 * 0x20 + 0x20),
                      (longlong)iVar8 << 5);
              iVar18 = *(int *)(lVar13 + 0x10);
            }
            *(uint *)(lVar13 + 0x10) = iVar18 - uVar7;
            uVar11 = (ulonglong)((int)uVar11 - uVar7);
          }
          iVar18 = iStack_1d0;
          uVar14 = (ulonglong)(uVar6 + 1);
        } while ((int)(uVar6 + 1) < (int)uVar11);
        if (0 < *(int *)(lVar13 + 0x10)) {
          FUN_147584f74(plStack_1c8,plVar10);
        }
      }
      uStack_1a0 = uStack_1a0 & ~uStack_1b0._4_4_;
      FUN_1449c0562(&uStack_1b0);
      iVar8 = iStack_1d0;
    } while (plStack_1b8 != (longlong *)auStack_98 ||
             (uStack_1a8 != auStack_88 || iStack_19c != iVar18));
  }
  *(undefined8 *)((longlong)plStack_1d8 + 0x84) = *(undefined8 *)((longlong)plStack_1d8 + 0x2c);
  *(undefined8 *)((longlong)plStack_1d8 + 0x8c) = *(undefined8 *)((longlong)plStack_1d8 + 0x34);
  uStack_50 = 0;
  if (lStack_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14758cf5e(auStack_98);
  if (pvStack_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_147584fd2(&uStack_118);
  if ((uStack_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147584eac FUN_147584eac body=200 status=ok
// SIG undefined FUN_147584eac(void)

undefined8 FUN_147584eac(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  bool bVar6;
  
  cVar1 = *param_1;
  if (((cVar1 == '\x02') || (param_1[8] == '\x02')) ||
     ((*(int *)(param_1 + 4) <= *(int *)(param_1 + 0xc) &&
      ((*(int *)(param_1 + 4) != *(int *)(param_1 + 0xc) || (param_1[8] != '\0' && cVar1 != '\0'))))
     )) {
    cVar2 = *param_2;
    cVar3 = param_2[8];
    if (cVar2 != '\x02') {
      if (cVar3 != '\x02') {
        if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 4)) {
          return 0;
        }
        if ((*(int *)(param_2 + 4) == *(int *)(param_2 + 0xc)) && (cVar3 == '\0' || cVar2 == '\0'))
        {
          return 0;
        }
      }
      cVar4 = param_1[8];
      if ((cVar4 != '\x02') && (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 4))) {
        uVar5 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0xc) >> 8),1);
        if (cVar4 == '\x01' && cVar2 == '\0') {
          return uVar5;
        }
        bVar6 = cVar2 == '\x01' && cVar4 == '\0';
        goto LAB_147584ef9;
      }
    }
    if ((cVar3 != '\x02' && cVar1 != '\x02') && (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 4)))
    {
      uVar5 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_2 + 0xc) >> 8),1);
      if (cVar3 == '\x01' && cVar1 == '\0') {
        return uVar5;
      }
      bVar6 = cVar1 == '\x01' && cVar3 == '\0';
LAB_147584ef9:
      return CONCAT71((int7)((ulonglong)uVar5 >> 8),bVar6);
    }
  }
  return 0;
}



// FUNCTION 147584f74 FUN_147584f74 body=94 status=ok
// SIG undefined FUN_147584f74(void)

void FUN_147584f74(longlong *param_1,undefined8 *param_2)

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
    FUN_1475910fa(param_1,iVar2);
  }
  FUN_14758d440((longlong)iVar2 * 0x20 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147584fd2 FUN_147584fd2 body=76 status=ok
// SIG undefined FUN_147584fd2(void)

void FUN_147584fd2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14758501e FUN_14758501e body=45 status=ok
// SIG undefined FUN_14758501e(void)

undefined8 * FUN_14758501e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x80000000;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  FUN_14485c47a();
  return param_1;
}



// FUNCTION 147585050 FUN_147585050 body=496 status=ok
// SIG undefined FUN_147585050(void)

void FUN_147585050(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined1 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  uint local_50;
  undefined2 local_4c;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = FUN_14009d2a0();
  uVar8 = FUN_140ce4600();
  uVar9 = FUN_144a78ede(param_1 + -0xf8,uVar8);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x548) + 8);
  lVar10 = (ulonglong)*(ushort *)(param_3 + 0x34) * 0x128;
  uVar8 = *(undefined8 *)(lVar2 + 0x100 + lVar10);
  plVar3 = *(longlong **)(lVar2 + 0x108 + lVar10);
  if (plVar3 == (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
      piVar5 = (int *)((longlong)plVar3 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_b8 = plVar3;
  }
  puVar4 = *(undefined4 **)(param_3 + 8);
  if (puVar4 == (undefined4 *)0x0) {
    uVar12 = 0;
    uVar13 = 0;
    uStack_80 = 0;
    uVar14 = 0;
  }
  else {
    uVar12 = *puVar4;
    uVar13 = puVar4[1];
    uStack_80 = puVar4[2];
    uVar14 = puVar4[3];
  }
  local_88 = (undefined **)CONCAT44(uVar13,uVar12);
  uStack_7c = CONCAT44(uStack_7c._4_4_,uVar14);
  local_c0 = uVar8;
  bVar6 = FUN_147571424(uVar9,&local_88,&local_c0);
  piVar5 = *(int **)(param_3 + 8);
  if (piVar5 == (int *)0x0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_68 = (uint)*(ushort *)(lVar7 + 0x6a);
    local_98 = 0;
    uStack_90 = 0;
    local_50 = 0;
  }
  else {
    local_a8 = *(undefined8 *)piVar5;
    uStack_a0 = *(undefined8 *)(piVar5 + 2);
    bVar11 = ((piVar5[1] != 0 || *piVar5 != 0) || piVar5[2] != 0) || piVar5[3] != 0;
    local_98 = *(undefined8 *)piVar5;
    uStack_90 = *(undefined8 *)(piVar5 + 2);
    local_68 = (uint)CONCAT12(bVar6 & bVar11,*(undefined2 *)(lVar7 + 0x6a));
    local_50 = (uint)bVar11 << 0x10;
  }
  local_50 = *(ushort *)(lVar7 + 0x6c) | local_50;
  uStack_80 = CONCAT22(uStack_80._2_2_,*(undefined2 *)(lVar7 + 100));
  local_6c = 1;
  uStack_7c = local_a8;
  uStack_74 = uStack_a0;
  local_54 = 1;
  local_64 = (undefined4)local_98;
  uStack_60 = local_98._4_4_;
  uStack_5c = (undefined4)uStack_90;
  uStack_58 = uStack_90._4_4_;
  local_4c = 0x100;
  local_48 = 0;
  local_88 = &PTR_FUN_14a4993f0;
  FUN_147585242(param_4);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar5 = (int *)((longlong)plVar3 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147585242 FUN_147585242 body=198 status=ok
// SIG undefined FUN_147585242(void)

void FUN_147585242(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
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
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_14001cc68(0x48,8);
  FUN_1475911c6(uVar3,param_2);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = uVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758531a FUN_14758531a body=26 status=ok
// SIG undefined FUN_14758531a(void)

void FUN_14758531a(undefined8 param_1)

{
  FUN_147574e9a();
  FUN_140aec5ac(param_1);
  return;
}



// FUNCTION 147585348 FUN_147585348 body=298 status=ok
// SIG undefined FUN_147585348(void)

undefined8 FUN_147585348(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_70;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + -0xf8);
  uVar4 = FUN_1475545d8(param_4,param_3);
  bVar2 = *(byte *)(param_1 + 0x10);
  if ((bVar2 & 2) != 0) {
    local_70 = param_1;
    (**(code **)(*plVar1 + 0x368))(plVar1,&local_58);
    if (0 < local_50) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        cVar3 = FUN_1400a246c(param_2,local_58 + lVar6);
        if (cVar3 != '\0') {
          local_68[0] = 1;
          local_64 = *(undefined4 *)(local_58 + uVar7 * 4);
          local_60 = 1;
          local_78 = uVar4;
          local_5c = local_64;
          FUN_147554a22(param_4,local_68,plVar1,uVar7 & 0xffffffff);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 4;
      } while ((longlong)uVar7 < (longlong)local_50);
    }
    bVar2 = *(byte *)(local_70 + 0x10);
  }
  if ((bVar2 & 1) != 0) {
    uVar5 = FUN_14755452a(param_4,plVar1,0xffffffff);
    FUN_147554828(param_4,param_2,uVar5,uVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147585474 FUN_147585474 body=5 status=ok
// SIG undefined FUN_147585474(void)

undefined8 FUN_147585474(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 14758547e FUN_14758547e body=994 status=ok
// SIG undefined FUN_14758547e(void)

undefined8 FUN_14758547e(longlong param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint *puVar25;
  byte bVar26;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + -0x208;
  puVar11 = (undefined4 *)FUN_147554508(param_4);
  local_58 = *puVar11;
  uStack_54 = puVar11[1];
  uStack_50 = puVar11[2];
  uStack_4c = puVar11[3];
  uVar12 = FUN_140ce4600();
  plVar13 = (longlong *)FUN_144a78ede(lVar1,uVar12);
  uVar12 = FUN_14073751e();
  lVar14 = FUN_144a78ede(lVar1,uVar12);
  if (plVar13 != (longlong *)0x0 && lVar14 != 0) {
    iVar8 = FUN_140c7f2b4(lVar14,&local_58);
    if ((iVar8 == -1) || ((longlong)iVar8 * 0xf0 + *(longlong *)(lVar14 + 0x60) == 0)) {
      lVar14 = (**(code **)(*plVar13 + 0x2a8))(plVar13);
      if (lVar14 != 0) {
        local_80 = param_4;
        FUN_1432dd47e(lVar14,&local_68,&local_58);
        uVar24 = local_68;
        lVar14 = (longlong)(int)local_60;
        if (lVar14 != 0) {
          lVar19 = 0;
          do {
            lVar4 = *(longlong *)(uVar24 + 0x28 + lVar19);
            if (lVar4 != 0) {
              lVar15 = FUN_1458f06e6();
              lVar4 = *(longlong *)(lVar4 + 0x10);
              if ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
                 (param_4 = local_80,
                 *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                 == lVar15 + 0x30)) goto LAB_1475855bd;
            }
            lVar19 = lVar19 + 0x30;
          } while (lVar14 * 0x30 != lVar19);
        }
      }
    }
    else {
LAB_1475855bd:
      uVar9 = FUN_1475545d8(param_4,param_3);
      uVar3 = *(uint *)(param_1 + -0xa8);
      if (uVar3 == 0) {
        if ((*(char *)(param_1 + -0x9f) == '\x01') && (*(char *)(param_1 + -0xa0) == '\x01')) {
          local_88 = uVar9;
          FUN_1475547f4(param_4,param_2,lVar1,0);
        }
      }
      else {
        lVar14 = *(longlong *)(param_1 + -0xb0);
        lVar19 = *(longlong *)(param_1 + -0x98);
        iVar8 = 0;
        local_78 = uVar9;
        local_74 = FUN_14755452a(param_4,lVar1,0);
        uVar9 = local_78;
        local_70 = *param_2;
        uVar24 = local_70 >> 8;
        iVar23 = (int)(local_70 >> 8);
        uVar10 = uVar3 - 1;
        if ((char)local_70 == '\x02') {
          uVar10 = uVar10 & (int)uVar10 >> 0x1f;
          uVar16 = 0;
        }
        else {
          if (0 < (int)uVar3) {
            local_80._0_4_ = (int)(local_70 >> 0x20);
            uVar21 = 0;
            uVar16 = uVar3;
            do {
              uVar22 = (uVar16 >> 1) + uVar21;
              if (*(int *)(lVar14 + (ulonglong)uVar22 * 4) <=
                  *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_70 == '\0') * 4) + (int)local_80
                 ) {
                uVar21 = uVar22 + (uVar16 & 1);
              }
              bVar5 = 1 < uVar16;
              uVar16 = uVar16 >> 1;
            } while (bVar5);
            iVar8 = 0;
            uVar20 = (ulonglong)uVar3;
            uVar16 = uVar3;
            do {
              uVar20 = uVar20 >> 1;
              uVar22 = (uint)uVar20 + iVar8;
              if (*(int *)(lVar14 + (ulonglong)uVar22 * 4) <=
                  *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_70 == '\0') * 4) + (int)local_80
                 ) {
                iVar8 = uVar22 + (uVar16 & 1);
              }
              bVar5 = 1 < uVar16;
              uVar16 = (uint)uVar20;
            } while (bVar5);
            if ((int)uVar21 < (int)uVar10) {
              uVar10 = uVar21;
            }
          }
          iVar17 = 1;
          if (1 < iVar8) {
            iVar17 = iVar8;
          }
          uVar16 = iVar17 - 1;
        }
        bVar26 = *(byte *)(lVar19 + (ulonglong)uVar16);
        iVar8 = uVar3 - uVar10;
        local_80 = local_70 >> 0x20;
        if (iVar8 != 0 && (int)uVar10 <= (int)uVar3) {
          pbVar18 = (byte *)(lVar19 + (int)uVar10);
          puVar25 = (uint *)((longlong)(int)uVar10 * 4 + lVar14);
          do {
            iVar23 = (int)uVar24;
            cVar7 = FUN_1400a246c(param_2,puVar25);
            if (cVar7 == '\0') break;
            bVar2 = *pbVar18;
            if ((bVar26 & 1) != bVar2) {
              bVar6 = bVar26 & 1;
              bVar26 = bVar2;
              if (bVar6 != 0) {
                local_68 = (ulonglong)(uint)(iVar23 << 8) + (local_70 & 0xff) | local_80 << 0x20;
                local_60 = (ulonglong)*puVar25 << 0x20;
                if (((char)local_70 == '\x02') || ((int)local_80 < (int)*puVar25)) {
                  FUN_147554828(param_4,&local_68,local_74,uVar9);
                  bVar26 = *pbVar18;
                }
              }
              if ((bVar26 & 1) != 0) {
                local_80 = (ulonglong)*puVar25;
                uVar24 = 0;
                local_70 = CONCAT71((uint7)(uint3)(*puVar25 >> 8),1);
              }
            }
            iVar23 = (int)uVar24;
            pbVar18 = pbVar18 + 1;
            puVar25 = puVar25 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_60 = param_2[1];
        local_68 = (local_70 & 0xff) + (ulonglong)(uint)(iVar23 << 8) | local_80 << 0x20;
        if ((((char)local_60 == '\x02' || (char)local_70 == '\x02') ||
            ((iVar8 = (int)(local_60 >> 0x20), (int)local_80 <= iVar8 &&
             (((int)local_80 != iVar8 || ((char)local_60 != '\0' && (char)local_70 != '\0')))))) &&
           ((bVar26 & 1) != 0)) {
          FUN_147554828(param_4,&local_68,local_74,uVar9);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14758587e FUN_14758587e body=193 status=ok
// SIG undefined FUN_14758587e(void)

void FUN_14758587e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = FUN_145c40fca(param_1,1);
  if (cVar2 != '\0') {
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x7d8) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147585940 FUN_147585940 body=61 status=ok
// SIG undefined FUN_147585940(void)

void FUN_147585940(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 != '\0') {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x7d8) = param_2;
  }
  return;
}



// FUNCTION 147585980 FUN_147585980 body=14 status=ok
// SIG undefined FUN_147585980(void)

ulonglong FUN_147585980(ulonglong *param_1)

{
  return *param_1 & 0xffffffffffff;
}



// FUNCTION 14758598e FUN_14758598e body=576 status=ok
// SIG undefined FUN_14758598e(void)

undefined8 FUN_14758598e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_28 = 0x100000000;
  uVar3 = *(ulonglong *)(param_1 + 0x110);
  if (((uVar3 & 0x7000000000000) == 0 && 0x1ffe < (uint)(uVar3 >> 0x33)) &&
     (plVar4 = (longlong *)(uVar3 & 0xffffffffffff), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x2e0))(plVar4,&local_48,1);
  }
  FUN_145b24cb6(&local_48,param_1 + 0x148);
  FUN_145b24cb6(&local_48,param_1 + 0x260);
  FUN_145b24cb6(&local_48,param_1 + 0x378);
  FUN_145b24cb6(&local_48,param_1 + 0x490);
  FUN_145b24cb6(&local_48,param_1 + 0x5a8);
  FUN_145b24cb6(&local_48,param_1 + 0x6c0);
  local_50 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14a492060;
  local_58 = local_50 + 2;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 2;
  if (local_30 == 0) {
    local_50[9] = local_38;
    *(undefined4 *)(local_50 + 7) = local_48;
    *(undefined4 *)((longlong)local_50 + 0x3c) = uStack_44;
    *(undefined4 *)(local_50 + 8) = uStack_40;
    *(undefined4 *)((longlong)local_50 + 0x44) = uStack_3c;
  }
  local_50[10] = local_30;
  local_30 = 0;
  *(undefined4 *)(local_50 + 0xb) = (undefined4)local_28;
  *(undefined4 *)((longlong)local_50 + 0x5c) = local_28._4_4_;
  local_28 = 0x100000000;
  FUN_140aec6f8(&local_58);
  plVar4 = local_50;
  if (local_50 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_147585b7d;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_147585b47:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147585b7d;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_50 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_50;
      if (plVar5 == (longlong *)0x0) goto LAB_147585b7d;
      goto LAB_147585b47;
    }
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_147585b7d;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_147585b7d:
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1404dbc0c(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147585bd0 FUN_147585bd0 body=194 status=ok
// SIG undefined FUN_147585bd0(void)

undefined8 * FUN_147585bd0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x328))();
  if ((longlong)(int)plVar2[1] != 0) {
    plVar3 = (longlong *)*plVar2;
    plVar2 = plVar3 + (int)plVar2[1];
    do {
      lVar1 = *plVar3;
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xc0) & 1) != 0)) {
        if ((longlong)(int)param_1[0xf] == 0) {
LAB_147585c3f:
          uVar4 = *(ulonglong *)(lVar1 + 0x98) & 0xff;
          iVar5 = (uint)(uVar4 != 1) + (int)(*(ulonglong *)(lVar1 + 0x98) >> 0x20);
          if (uVar4 == 2) {
            iVar5 = 0;
          }
          *param_2 = *(undefined8 *)(lVar1 + 0xf8);
          *(int *)(param_2 + 1) = iVar5;
          *(undefined8 *)((longlong)param_2 + 0xc) = 0;
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          return param_2;
        }
        lVar6 = 0;
        while (*(int *)(param_1[0xe] + lVar6) != *(int *)(lVar1 + 0xb8)) {
          lVar6 = lVar6 + 4;
          if ((longlong)(int)param_1[0xf] * 4 == lVar6) goto LAB_147585c3f;
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
  }
  FUN_14755ac02(param_2);
  return param_2;
}



// FUNCTION 147585c92 FUN_147585c92 body=89 status=ok
// SIG undefined FUN_147585c92(void)

undefined4 FUN_147585c92(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    uVar1 = FUN_14755452a(param_4,param_1 + -0xf8,0);
    uVar2 = FUN_1475545d8(param_4,param_3);
    FUN_147554828(param_4,param_2,uVar1,uVar2);
  }
  return 1;
}



// FUNCTION 147585cf4 FUN_147585cf4 body=491 status=ok
// SIG undefined FUN_147585cf4(void)

undefined1 * FUN_147585cf4(longlong param_1,undefined1 *param_2)

{
  bool bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  int local_6c;
  float local_68;
  byte local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong **)(param_1 + 0x7d8) != (longlong *)0x0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x2e8))();
    if (lVar3 != 0) {
      FUN_140e50294(param_1,local_b0);
      FUN_140e500ac(param_1,local_b0);
      FUN_14087ad3e(local_b0,local_90);
      FUN_1447bda9c(local_a0,local_98);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_140e50618(local_b0,param_1 + 0x100,lVar3);
      FUN_1405bacee(local_90,&local_6c,
                    *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_b0._0_8_ == '\0') * 4) +
                    SUB84(local_b0._0_8_,4));
      bVar2 = local_64;
      iVar6 = SUB84(local_b0._0_8_,4);
      if (local_64 != 0) {
        iVar6 = local_6c;
      }
      bVar1 = 0.5 <= local_68;
      FUN_1405bacee(local_90,&local_6c,
                    *(int *)(&DAT_14a46e600 + (ulonglong)((char)local_b0._8_8_ == '\x01') * 4) +
                    SUB84(local_b0._8_8_,4));
      iVar5 = SUB84(local_b0._8_8_,4);
      if (local_64 != 0) {
        iVar5 = local_6c;
      }
      iVar4 = (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
              (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
      *param_2 = 1;
      *(int *)(param_2 + 4) = iVar4;
      param_2[8] = 0;
      *(uint *)(param_2 + 0xc) =
           (uint)(local_64 & 0.5 <= local_68) + iVar4 + (iVar5 - ((uint)(bVar2 & bVar1) + iVar6));
      param_2[0x10] = 1;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
    }
  }
  FUN_1475752fa(param_1,param_2);
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147585ee0 FUN_147585ee0 body=375 status=ok
// SIG undefined FUN_147585ee0(void)

void FUN_147585ee0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88 [2];
  undefined4 local_80 [4];
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = *(undefined4 *)(param_1 + 0x98);
  uStack_54 = *(undefined4 *)(param_1 + 0x9c);
  uStack_50 = *(undefined4 *)(param_1 + 0xa0);
  uStack_4c = *(undefined4 *)(param_1 + 0xa4);
  local_80[0] = *(undefined4 *)param_2;
  cVar1 = FUN_1400a246c();
  if (cVar1 != '\0') {
    FUN_144757f48(param_1,8);
    cVar1 = FUN_145c40fca(param_1,1);
    if (cVar1 != '\0') {
      if ((((char)param_3 != '\0') && ((char)local_58 != '\x02')) &&
         (*(longlong **)(param_1 + 0x7d8) != (longlong *)0x0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x2e8))();
        FUN_144a808d5(&local_60,*param_2,param_2[1],*(undefined8 *)(lVar3 + 0x118));
        FUN_140e50294(param_1,local_80);
        FUN_140e500ac(param_1,local_80);
        FUN_14040645e(local_80,local_88,local_60);
        iVar4 = 0;
        if (*(char *)(lVar3 + 0x108) != '\x02') {
          iVar4 = *(int *)(lVar3 + 0x10c);
        }
        iVar2 = 0;
        if (0 < local_88[0] - iVar4) {
          iVar2 = local_88[0] - iVar4;
        }
        if (*(char *)(param_1 + 0x104) == '\0') {
          *(int *)(param_1 + 0x100) = iVar2;
        }
        else {
          *(int *)(param_1 + 0x10c) = iVar2;
        }
        FUN_1447bda9c(local_70,local_68);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      local_98 = *(undefined4 *)param_2;
      uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_90 = *(undefined4 *)(param_2 + 1);
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_147575be8(param_1,&local_98,param_3,param_4);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147586058 FUN_147586058 body=697 status=ok
// SIG undefined FUN_147586058(void)

void FUN_147586058(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_d8 [40];
  code *local_b0;
  longlong **local_a8;
  longlong local_a0;
  undefined1 local_90 [16];
  longlong local_80;
  undefined4 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  char local_60;
  undefined1 local_58 [8];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_147539898();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  if ((*(longlong **)(param_1 + 0x7d8) != (longlong *)0x0) &&
     (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x2e8))(), lVar8 != 0)) {
    iVar11 = (uint)((char)uVar3 != '\x01') + (int)((ulonglong)uVar3 >> 0x20);
    iVar10 = (uint)((char)uVar4 == '\x01') + (int)((ulonglong)uVar4 >> 0x20);
    local_70 = param_2;
    FUN_140e50294(param_1,local_90);
    FUN_140e500ac(param_1,local_90);
    local_b0 = FUN_1432e10f0;
    local_a8 = &local_70;
    cVar6 = FUN_14755ac52(local_90,iVar11,iVar10);
    if (cVar6 == '\0') {
      FUN_14087ad3e(local_90,&local_b0);
      uVar1 = *(undefined4 *)(lVar8 + 0x114);
      FUN_1405bacee(&local_b0,local_58,*(undefined4 *)(lVar8 + 0x10c));
      FUN_1405bacee(&local_b0,local_68,uVar1);
      plVar5 = local_70;
      if (local_50 == '\x01') {
        iVar9 = local_58._0_4_;
        fVar7 = local_58._4_4_;
        if (((iVar11 < iVar9) || ((iVar11 == iVar9 && (0.0 <= fVar7)))) &&
           ((iVar9 < iVar10 || ((iVar10 == iVar9 && (fVar7 < 0.0)))))) {
          iVar2 = (int)local_70[1];
          *(uint *)(local_70 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)local_70 + 0xc) < iVar2 + 1U) {
            FUN_14753e8f2(local_70,iVar2);
          }
          *(uint *)(*plVar5 + (longlong)iVar2 * 4) = (uint)(0.5 <= fVar7) + iVar9;
        }
      }
      plVar5 = local_70;
      if (local_60 == '\x01') {
        iVar9 = local_68._0_4_;
        fVar7 = local_68._4_4_;
        if (((iVar11 < iVar9) || ((iVar11 == iVar9 && (0.0 <= fVar7)))) &&
           ((iVar9 < iVar10 || ((iVar10 == iVar9 && (fVar7 < 0.0)))))) {
          iVar10 = (int)local_70[1];
          *(uint *)(local_70 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)local_70 + 0xc) < iVar10 + 1U) {
            FUN_14753e8f2(local_70,iVar10);
          }
          *(uint *)(*plVar5 + (longlong)iVar10 * 4) = (uint)(0.5 <= fVar7) + iVar9;
        }
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1447bda9c(local_80,local_78);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147586312 FUN_147586312 body=185 status=ok
// SIG undefined FUN_147586312(void)

void FUN_147586312(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (longlong)*(int *)(param_1 + 0x100)) {
    FUN_144a808d5(local_30,(longlong)*(int *)(param_1 + 0x100),param_2,param_3);
    *(undefined4 *)(param_1 + 0x100) = local_30[0];
  }
  if (0 < (longlong)*(int *)(param_1 + 0x108)) {
    FUN_144a808d5(local_30,(longlong)*(int *)(param_1 + 0x108),param_2,param_3);
    *(undefined4 *)(param_1 + 0x108) = local_30[0];
  }
  if (0 < (longlong)*(int *)(param_1 + 0x10c)) {
    FUN_144a808d5(local_30,(longlong)*(int *)(param_1 + 0x10c),param_2,param_3);
    *(undefined4 *)(param_1 + 0x10c) = local_30[0];
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475863cc FUN_1475863cc body=28 status=ok
// SIG undefined FUN_1475863cc(void)

undefined8 FUN_1475863cc(undefined8 param_1,undefined8 param_2)

{
  FUN_147557e22(param_2,param_1);
  return param_2;
}



// FUNCTION 1475863e8 FUN_1475863e8 body=93 status=ok
// SIG undefined FUN_1475863e8(void)

void FUN_1475863e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a499100;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147586446 FUN_147586446 body=485 status=ok
// SIG undefined FUN_147586446(void)

undefined8 FUN_147586446(longlong param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_28 = 0x100000000;
  uVar3 = *(ulonglong *)(param_1 + 0xf8);
  if (((uVar3 & 0x7000000000000) == 0 && 0x1ffe < (uint)(uVar3 >> 0x33)) &&
     (plVar5 = (longlong *)(uVar3 & 0xffffffffffff), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x2e0))(plVar5,&local_48,0);
  }
  lVar4 = local_30;
  local_50 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14a492060;
  local_58 = local_50 + 2;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 2;
  if (lVar4 == 0) {
    local_50[9] = local_38;
    *(undefined4 *)(local_50 + 7) = local_48;
    *(undefined4 *)((longlong)local_50 + 0x3c) = uStack_44;
    *(undefined4 *)(local_50 + 8) = uStack_40;
    *(undefined4 *)((longlong)local_50 + 0x44) = uStack_3c;
  }
  local_50[10] = lVar4;
  local_30 = 0;
  *(undefined4 *)(local_50 + 0xb) = (undefined4)local_28;
  *(undefined4 *)((longlong)local_50 + 0x5c) = local_28._4_4_;
  local_28 = 0x100000000;
  FUN_140aec6f8(&local_58);
  plVar5 = local_50;
  if (local_50 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar6 = *(longlong **)(param_1 + 0xe8);
    if (plVar6 == (longlong *)0x0) goto LAB_1475865da;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1475865a4:
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1475865da;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar6;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar6 = *(longlong **)(param_1 + 0xe8);
    if (local_50 != plVar6) {
      *(longlong **)(param_1 + 0xe8) = local_50;
      if (plVar6 == (longlong *)0x0) goto LAB_1475865da;
      goto LAB_1475865a4;
    }
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1475865da;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_1475865da:
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1404dbc0c(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147586634 FUN_147586634 body=122 status=ok
// SIG undefined FUN_147586634(void)

void FUN_147586634(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  longlong local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_30;
  local_30 = param_2;
  local_20 = param_3;
  FUN_14758ed32(param_1,local_14,&local_28,0);
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475866b0 FUN_1475866b0 body=265 status=ok
// SIG undefined FUN_1475866b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475866b0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined **local_80;
  undefined *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = *(char *)(param_1 + -0xa7);
  uVar4 = *(undefined4 *)(param_3 + 0x90);
  local_68 = *param_2;
  local_60 = param_2[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_88 = cVar3 == '\x01';
  FUN_1432db628(local_58,&local_68,param_1 + -0x100,uVar4);
  lVar6 = FUN_14479d2ce(*param_2 + 0x20);
  local_80 = &PTR_FUN_14a499180;
  local_78 = &DAT_14c76100c;
  local_70 = 0;
  FUN_14755e926(lVar6 + 0x430,DAT_14cab3ee0);
  _DAT_14c76100c = *(undefined4 *)(param_1 + 0x10);
  FUN_1432dab96(local_58);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475867ba FUN_1475867ba body=259 status=ok
// SIG undefined FUN_1475867ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475867ba(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined **local_78;
  undefined *local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = *(char *)(param_1 + -0xa7);
  uVar4 = *(undefined4 *)(param_3 + 0x90);
  local_60 = *param_2;
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_88 = cVar3 == '\x01';
  FUN_1432db628(local_50,&local_60,param_1 + -0x100,uVar4);
  lVar6 = FUN_14479d2ce(*param_2 + 0x20);
  local_78 = &PTR_FUN_14a499180;
  local_70 = &DAT_14c76100c;
  local_68 = 0;
  FUN_14755e926(lVar6 + 0x430,DAT_14cab3ee0);
  _DAT_14c76100c = _DAT_14c76100c + 1;
  FUN_1432dab96(local_50);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475868be FUN_1475868be body=265 status=ok
// SIG undefined FUN_1475868be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475868be(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined **local_80;
  undefined *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = *(char *)(param_1 + -0xa7);
  uVar4 = *(undefined4 *)(param_3 + 0x90);
  local_68 = *param_2;
  local_60 = param_2[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_88 = cVar3 == '\x01';
  FUN_1432db628(local_58,&local_68,param_1 + -0x100,uVar4);
  lVar6 = FUN_14479d2ce(*param_2 + 0x20);
  local_80 = &PTR_FUN_14a499180;
  local_78 = &DAT_14c76100c;
  local_70 = 0;
  FUN_14755e926(lVar6 + 0x430,DAT_14cab3ee0);
  _DAT_14c76100c = *(undefined4 *)(param_1 + 0x14);
  FUN_1432dab96(local_58);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475869c8 FUN_1475869c8 body=259 status=ok
// SIG undefined FUN_1475869c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475869c8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined **local_78;
  undefined *local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = *(char *)(param_1 + -0xa7);
  uVar4 = *(undefined4 *)(param_3 + 0x90);
  local_60 = *param_2;
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_88 = cVar3 == '\x01';
  FUN_1432db628(local_50,&local_60,param_1 + -0x100,uVar4);
  lVar6 = FUN_14479d2ce(*param_2 + 0x20);
  local_78 = &PTR_FUN_14a499180;
  local_70 = &DAT_14c76100c;
  local_68 = 0;
  FUN_14755e926(lVar6 + 0x430,DAT_14cab3ee0);
  _DAT_14c76100c = _DAT_14c76100c + -1;
  FUN_1432dab96(local_50);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147586b1e FUN_147586b1e body=159 status=ok
// SIG undefined FUN_147586b1e(void)

void FUN_147586b1e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b325e0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x110);
      *(uint *)(param_1 + 0x110) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x114) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0x108),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147586bbe FUN_147586bbe body=75 status=ok
// SIG undefined FUN_147586bbe(void)

bool FUN_147586bbe(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147586bf7;
    }
  }
  lVar2 = 0;
LAB_147586bf7:
  lVar1 = FUN_145b325e0();
  return lVar2 == lVar1;
}



// FUNCTION 147586c0f FUN_147586c0f body=174 status=ok
// SIG undefined FUN_147586c0f(void)

undefined8 FUN_147586c0f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b325e0();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147586d02 FUN_147586d02 body=106 status=ok
// SIG undefined FUN_147586d02(void)

void FUN_147586d02(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x108);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147586d6e FUN_147586d6e body=95 status=ok
// SIG undefined FUN_147586d6e(void)

void FUN_147586d6e(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x108) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x108) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x110);
  }
  *(int *)(param_1 + 0x110) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x108);
  return;
}



// FUNCTION 147586dce FUN_147586dce body=159 status=ok
// SIG undefined FUN_147586dce(void)

void FUN_147586dce(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b32a72();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147586e6e FUN_147586e6e body=75 status=ok
// SIG undefined FUN_147586e6e(void)

bool FUN_147586e6e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147586ea7;
    }
  }
  lVar2 = 0;
LAB_147586ea7:
  lVar1 = FUN_145b32a72();
  return lVar2 == lVar1;
}



// FUNCTION 147586ebf FUN_147586ebf body=174 status=ok
// SIG undefined FUN_147586ebf(void)

undefined8 FUN_147586ebf(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b32a72();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147586fb2 FUN_147586fb2 body=106 status=ok
// SIG undefined FUN_147586fb2(void)

void FUN_147586fb2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758701e FUN_14758701e body=95 status=ok
// SIG undefined FUN_14758701e(void)

void FUN_14758701e(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 147587082 FUN_147587082 body=75 status=ok
// SIG undefined FUN_147587082(void)

bool FUN_147587082(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1475870bb;
    }
  }
  lVar2 = 0;
LAB_1475870bb:
  lVar1 = FUN_145b32322();
  return lVar2 == lVar1;
}



// FUNCTION 1475870d3 FUN_1475870d3 body=174 status=ok
// SIG undefined FUN_1475870d3(void)

undefined8 FUN_1475870d3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b32322();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475871b6 FUN_1475871b6 body=132 status=ok
// SIG undefined FUN_1475871b6(void)

void FUN_1475871b6(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 14758723a FUN_14758723a body=199 status=ok
// SIG undefined FUN_14758723a(void)

void FUN_14758723a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar1 = *(int *)(param_1 + 0x108);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x100);
    iVar6 = 0;
    bVar11 = *plVar2 == param_2;
    iVar8 = 0;
    do {
      lVar4 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar4;
      iVar3 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar3;
        if (lVar5 <= lVar7) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (plVar2[lVar7] == param_2));
      if (bVar11 == false) {
        if (iVar6 != iVar8) {
          memmove(plVar2 + iVar6,plVar2 + lVar4,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar6 = iVar6 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 0x108) = iVar6;
  }
  return;
}



// FUNCTION 147587302 FUN_147587302 body=95 status=ok
// SIG undefined FUN_147587302(void)

void FUN_147587302(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x100);
  return;
}



// FUNCTION 147587398 FUN_147587398 body=184 status=ok
// SIG undefined FUN_147587398(void)

void FUN_147587398(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_88 [48];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined2 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  uint local_28;
  undefined2 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_14009d2a0();
  piVar1 = *(int **)(param_3 + 8);
  local_40 = *(undefined2 *)(lVar2 + 100);
  if (piVar1 == (int *)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    local_28 = 0;
  }
  else {
    local_58 = *(undefined8 *)piVar1;
    uStack_50 = *(undefined8 *)(piVar1 + 2);
    local_28 = (uint)(((piVar1[1] != 0 || *piVar1 != 0) || piVar1[2] != 0) || piVar1[3] != 0) <<
               0x10;
  }
  local_28 = *(ushort *)(lVar2 + 0x6c) | local_28;
  local_2c = 1;
  local_3c = (undefined4)local_58;
  uStack_38 = local_58._4_4_;
  uStack_34 = (undefined4)uStack_50;
  uStack_30 = uStack_50._4_4_;
  local_24 = 0x101;
  local_20 = 0;
  local_48 = &PTR_FUN_14a499500;
  FUN_147587452(param_4);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147587452 FUN_147587452 body=229 status=ok
// SIG undefined FUN_147587452(void)

void FUN_147587452(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [46];
  undefined2 uStack_5a;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = *(char *)(param_2 + 0x1c);
  if (cVar2 == '\x01') {
    local_58 = (undefined2)*(undefined4 *)(param_2 + 0xc);
    uStack_56 = (undefined2)((uint)*(undefined4 *)(param_2 + 0xc) >> 0x10);
    uStack_54 = (undefined2)*(undefined4 *)(param_2 + 0x10);
    uStack_52 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x10) >> 0x10);
    uStack_50 = (undefined2)*(undefined4 *)(param_2 + 0x14);
    uStack_4e = (undefined2)((uint)*(undefined4 *)(param_2 + 0x14) >> 0x10);
    uStack_4c = (undefined2)*(undefined4 *)(param_2 + 0x18);
    uStack_4a = (undefined2)((uint)*(undefined4 *)(param_2 + 0x18) >> 0x10);
  }
  uVar6 = *(undefined2 *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined1 *)(param_2 + 0x25);
  uVar4 = *(undefined1 *)(param_2 + 0x24);
  uVar5 = *(undefined1 *)(param_2 + 0x28);
  iVar8 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar8 + 1U) {
    FUN_140561fb4(param_1,iVar8);
  }
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar9 = param_1;
  }
  puVar1 = (undefined8 *)(lVar9 + (longlong)iVar8 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a499500;
  *(undefined2 *)(puVar1 + 1) = uVar6;
  *(uint *)((longlong)puVar1 + 10) = CONCAT22(local_58,uStack_5a);
  *(uint *)((longlong)puVar1 + 0xe) = CONCAT22(uStack_54,uStack_56);
  *(uint *)((longlong)puVar1 + 0x12) = CONCAT22(uStack_50,uStack_52);
  *(uint *)((longlong)puVar1 + 0x16) = CONCAT22(uStack_4c,uStack_4e);
  *(undefined2 *)((longlong)puVar1 + 0x1a) = uStack_4a;
  *(char *)((longlong)puVar1 + 0x1c) = cVar2;
  *(undefined4 *)(puVar1 + 4) = uVar7;
  *(undefined1 *)((longlong)puVar1 + 0x24) = uVar4;
  *(undefined1 *)((longlong)puVar1 + 0x25) = uVar3;
  *(undefined1 *)(puVar1 + 5) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147587538 FUN_147587538 body=1182 status=ok
// SIG undefined FUN_147587538(void)

longlong * FUN_147587538(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  ulonglong local_a8;
  uint *local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_14758f702(param_1,0);
  puVar20 = (undefined8 *)*param_1;
  *puVar20 = 2;
  puVar20[1] = 2;
  local_88 = 0;
  uStack_80 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar18 = (uint *)*param_2;
    puVar17 = puVar18 + (longlong)*(int *)(param_2 + 1) * 4;
    local_a0 = puVar17;
    do {
      lVar21 = local_88;
      lVar16 = (longlong)(int)uStack_80;
      iVar19 = 0;
      if (lVar16 != 0) {
        lVar23 = 0;
        do {
          puVar20 = (undefined8 *)(lVar21 + lVar23);
          puVar8 = (undefined8 *)*puVar20;
          uStack_70 = puVar20[1];
          local_78._0_1_ = (char)*(undefined4 *)puVar20;
          local_78 = puVar8;
          if ((((((char)local_78 != '\x01') ||
                (uStack_70._0_1_ = (char)(int)puVar20[1], (char)uStack_70 != '\x01')) ||
               (*(int *)((longlong)puVar20 + 4) != *(int *)((longlong)puVar20 + 0xc))) &&
              ((((char)*puVar18 != '\x01' || ((char)puVar18[2] != '\x01')) ||
               (puVar18[1] != puVar18[3])))) &&
             (cVar11 = FUN_14055ad78(&local_78,puVar18), cVar11 != '\0')) {
            *(undefined4 *)(param_1 + 1) = 0;
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              FUN_14759173c(param_1);
            }
            goto LAB_147587950;
          }
          lVar23 = lVar23 + 0x10;
        } while (lVar16 * 0x10 != lVar23);
        iVar19 = (int)uStack_80;
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,iVar19 + 1U);
      if (uStack_80._4_4_ < iVar19 + 1U) {
        FUN_14759176c(&local_88,iVar19);
      }
      uVar3 = *(undefined8 *)(puVar18 + 2);
      puVar20 = (undefined8 *)(local_88 + (longlong)iVar19 * 0x10);
      *puVar20 = *(undefined8 *)puVar18;
      puVar20[1] = uVar3;
      local_98 = *puVar18;
      uStack_94 = puVar18[1];
      uStack_90 = puVar18[2];
      uStack_8c = puVar18[3];
      if (0 < (int)param_1[1]) {
        uVar22 = 0;
        do {
          puVar20 = (undefined8 *)(*param_1 + (longlong)(int)uVar22 * 0x10);
          cVar11 = FUN_14055ad78(puVar20,&local_98);
          if (cVar11 != '\0') {
            if (((char)local_98 == '\x02') && ((char)uStack_90 == '\x02')) {
              *(undefined4 *)(param_1 + 1) = 0;
              if (*(int *)((longlong)param_1 + 0xc) < 0) {
                FUN_14759173c(param_1);
              }
              break;
            }
            local_78 = (undefined8 *)0x0;
            uStack_70 = 0;
            cVar11 = FUN_14055ad78(puVar20,&local_98);
            uVar10 = uStack_8c;
            if (cVar11 == '\0') {
              uStack_70 = CONCAT44(uStack_70._4_4_,1);
              FUN_14759176c(&local_78,0);
              uVar5 = *(undefined4 *)((longlong)puVar20 + 4);
              uVar6 = *(undefined4 *)(puVar20 + 1);
              uVar7 = *(undefined4 *)((longlong)puVar20 + 0xc);
              *(undefined4 *)local_78 = *(undefined4 *)puVar20;
              *(undefined4 *)((longlong)local_78 + 4) = uVar5;
              *(undefined4 *)(local_78 + 1) = uVar6;
              *(undefined4 *)((longlong)local_78 + 0xc) = uVar7;
            }
            else {
              if ((char)local_98 == '\x01') {
                uVar13 = 0;
LAB_1475877cf:
                uVar15 = 0;
              }
              else {
                if ((char)local_98 == '\0') {
                  uVar13 = 1;
                  goto LAB_1475877cf;
                }
                uVar13 = (ulonglong)local_98 & 0xff;
                uVar15 = (ulonglong)(local_98 & 0xffffff00);
              }
              if ((uStack_90 & 0xff) == 1) {
                local_b0 = 0;
                local_a8 = 0;
              }
              else if ((uStack_90 & 0xff) == 0) {
                local_a8 = 1;
                local_b0 = 0;
              }
              else {
                local_a8 = CONCAT44(uStack_8c,uStack_90);
                local_b0 = (ulonglong)(uStack_90 & 0xffffff00);
              }
              uVar3 = *puVar20;
              uVar4 = puVar20[1];
              if ((uVar13 == 2 || (char)uVar3 == '\x02') ||
                 ((uVar12 = (uint)((ulonglong)uVar3 >> 0x20), (int)uVar12 <= (int)uStack_94 &&
                  ((uStack_94 != uVar12 || ((uVar13 != 0 && ((char)uVar3 != '\0')))))))) {
                uVar9 = (ulonglong)uStack_94;
                uStack_70 = CONCAT44(uStack_70._4_4_,1);
                FUN_14759176c(&local_78,0);
                *local_78 = uVar3;
                local_78[1] = uVar9 << 0x20 | uVar15 | uVar13;
              }
              uVar15 = uStack_70;
              uVar13 = local_a8;
              if ((((char)local_a8 == '\x02') || ((char)uVar4 == '\x02')) ||
                 ((uVar12 = (uint)((ulonglong)uVar4 >> 0x20), (int)uVar10 <= (int)uVar12 &&
                  ((uVar10 != uVar12 || (((char)local_a8 != '\0' && ((char)uVar4 != '\0')))))))) {
                lVar21 = (longlong)(int)uStack_70;
                uVar12 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar12);
                if (uStack_70._4_4_ < uVar12) {
                  FUN_14759176c(&local_78,uVar15 & 0xffffffff);
                }
                local_78[lVar21 * 2] = uVar13 & 0xff | ((ulonglong)uVar10 << 0x20) + local_b0;
                local_78[lVar21 * 2 + 1] = uVar4;
              }
            }
            puVar20 = local_78;
            lVar21 = (longlong)(int)uStack_70;
            if (lVar21 != 0) {
              lVar16 = 0;
              do {
                if ((*(char *)((longlong)puVar20 + lVar16) != '\x02') ||
                   (*(char *)((longlong)puVar20 + lVar16 + 8) != '\x02')) {
                  iVar19 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar19 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar19 + 1U) {
                    FUN_14758f702(param_1,iVar19);
                  }
                  puVar1 = (undefined4 *)(lVar16 + (longlong)puVar20);
                  uVar5 = puVar1[1];
                  uVar6 = puVar1[2];
                  uVar7 = puVar1[3];
                  puVar2 = (undefined4 *)(*param_1 + (longlong)iVar19 * 0x10);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar2[2] = uVar6;
                  puVar2[3] = uVar7;
                }
                lVar16 = lVar16 + 0x10;
              } while (lVar21 * 0x10 != lVar16);
            }
            iVar19 = (int)param_1[1];
            iVar14 = ~uVar22 + iVar19;
            if (iVar14 != 0) {
              if (0 < iVar14) {
                iVar14 = 1;
              }
              memmove((void *)((longlong)(int)uVar22 * 0x10 + *param_1),
                      (void *)((longlong)(iVar19 - iVar14) * 0x10 + *param_1),(longlong)iVar14 << 4)
              ;
              iVar19 = (int)param_1[1];
            }
            puVar17 = local_a0;
            uVar22 = uVar22 - 1;
            *(int *)(param_1 + 1) = iVar19 + -1;
            FUN_14758f788(param_1);
            if (puVar20 != (undefined8 *)0x0) {
              FUN_1400020a8(puVar20);
            }
          }
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < (int)param_1[1]);
      }
      puVar18 = puVar18 + 4;
    } while (puVar18 != puVar17);
  }
LAB_147587950:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1475879d8 FUN_1475879d8 body=1233 status=ok
// SIG undefined FUN_1475879d8(void)

undefined8 FUN_1475879d8(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  ulonglong uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  int iVar15;
  ulonglong *puVar16;
  longlong lVar17;
  int iVar18;
  char *pcVar19;
  longlong lVar20;
  char *pcVar21;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  longlong *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  longlong local_d0;
  char local_bc;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_1 = param_1 + -0xf8;
  local_100 = param_2;
  local_108 = (longlong *)FUN_1456c5f90(param_1);
  local_98 = 0;
  uStack_90 = 0;
  lVar20 = local_108[1];
  if ((longlong)(int)lVar20 != 0) {
    lVar17 = *local_108;
    lVar12 = 0;
    do {
      uVar5 = uStack_90;
      puVar2 = (undefined8 *)(lVar17 + 8 + lVar12);
      local_f8 = *puVar2;
      uStack_f0 = puVar2[1];
      lVar13 = (longlong)(int)uStack_90;
      uVar8 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
      if (uStack_90._4_4_ < uVar8) {
        FUN_14758f702(&local_98,uVar5 & 0xffffffff);
      }
      puVar3 = (undefined4 *)(local_98 + lVar13 * 0x10);
      *puVar3 = (undefined4)local_f8;
      puVar3[1] = local_f8._4_4_;
      puVar3[2] = (undefined4)uStack_f0;
      puVar3[3] = uStack_f0._4_4_;
      lVar12 = lVar12 + 0x20;
    } while ((longlong)(int)lVar20 * 0x20 != lVar12);
  }
  FUN_147587538(&local_a8,&local_98);
  if ((longlong)local_a0 != 0) {
    lVar17 = (longlong)local_a0 << 4;
    lVar20 = local_a8;
    do {
      local_118 = FUN_1475545d8(param_4,param_3);
      FUN_1475547f4(param_4,lVar20,param_1,0);
      lVar20 = lVar20 + 0x10;
      lVar17 = lVar17 + -0x10;
    } while (lVar17 != 0);
  }
  if ((longlong)(int)local_108[1] != 0) {
    lVar20 = (longlong)(int)local_108[1] << 5;
    pcVar21 = (char *)(*local_108 + 0x10);
    do {
      if (*(longlong *)(pcVar21 + -0x10) != 0) {
        uVar11 = FUN_145b32322();
        bVar6 = FUN_144a7ca96(pcVar21 + -0x10,uVar11);
        lVar17 = *(longlong *)(pcVar21 + -0x10);
        if ((lVar17 != 0 & bVar6) == 1) {
          local_f8 = *local_100;
          local_80 = local_100[1];
          cVar7 = (char)local_f8;
          cVar14 = (char)local_80;
          iVar15 = (int)((ulonglong)local_f8 >> 0x20);
          iVar18 = (int)((ulonglong)local_80 >> 0x20);
          if ((cVar14 == '\x02' || cVar7 == '\x02') ||
             ((iVar15 <= iVar18 && ((iVar15 != iVar18 || (cVar14 != '\0' && cVar7 != '\0')))))) {
            puVar1 = (ulonglong *)(pcVar21 + -8);
            cVar4 = (char)*puVar1;
            if ((cVar4 == '\x02') ||
               ((*pcVar21 == '\x02' ||
                ((*(int *)(pcVar21 + -4) <= *(int *)(pcVar21 + 4) &&
                 ((*(int *)(pcVar21 + -4) != *(int *)(pcVar21 + 4) ||
                  (*pcVar21 != '\0' && cVar4 != '\0')))))))) {
              pcVar19 = pcVar21;
              if ((cVar14 != '\x02') &&
                 ((((pcVar19 = (char *)&local_80, *pcVar21 != '\x02' &&
                    (*(int *)(pcVar21 + 4) <= iVar18)) &&
                   (pcVar19 = pcVar21, iVar18 <= *(int *)(pcVar21 + 4))) && (cVar14 == '\0')))) {
                pcVar19 = (char *)&local_80;
              }
              puVar16 = puVar1;
              if (((cVar7 != '\x02') && (puVar16 = &local_f8, cVar4 != '\x02')) &&
                 ((iVar15 <= *(int *)(pcVar21 + -4) &&
                  ((puVar16 = puVar1, *(int *)(pcVar21 + -4) <= iVar15 && (cVar7 == '\0')))))) {
                puVar16 = &local_f8;
              }
              local_b8 = *puVar16;
              local_b0 = *(undefined8 *)pcVar19;
              if (((char)local_b8 != '\x02') && ((char)local_b0 != '\x02')) {
                iVar18 = (int)(local_b8 >> 0x20);
                iVar15 = (int)((ulonglong)local_b0 >> 0x20);
                if ((iVar15 < iVar18) ||
                   ((iVar18 == iVar15 && (((char)local_b8 == '\0' || ((char)local_b0 == '\0'))))))
                goto LAB_147587ac3;
              }
              FUN_1475376e2(&local_f8,param_3);
              local_bc = pcVar21[0xc];
              if (*(longlong *)(pcVar21 + -0x10) != 0) {
                lVar12 = FUN_147571e62(param_1,*(longlong *)(pcVar21 + -0x10),1);
                if (lVar12 == 0) {
                  local_f8 = 0;
                  uStack_f0 = 0;
                  uStack_e8 = 0;
                  uStack_d8 = 0;
                  if (iStack_d4 < 0) {
                    FUN_1446f8c06(&local_e0,0);
                  }
                  if ((undefined2 *)CONCAT44(uStack_dc,local_e0) != (undefined2 *)0x0) {
                    *(undefined2 *)CONCAT44(uStack_dc,local_e0) = 0;
                  }
                }
                else {
                  FUN_1400bbfae(&local_80,lVar12);
                  uStack_f0 = local_80;
                  uStack_e8 = CONCAT44(uStack_74,uStack_78);
                  if (CONCAT44(uStack_dc,local_e0) != 0) {
                    FUN_1400020a8();
                  }
                  local_e0 = local_70;
                  uStack_dc = uStack_6c;
                  uStack_d8 = uStack_68;
                  iStack_d4 = iStack_64;
                  cVar7 = (*(code *)PTR_FUN_14c758760)();
                  if (cVar7 != '\0') {
                    uVar8 = *(uint *)(lVar12 + 0xc);
                    if ((int)uVar8 < DAT_14c9647dc) {
                      lVar13 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                    }
                    else {
                      lVar13 = 0;
                    }
                    if ((*(uint *)(lVar13 + 8) & 0x8400000) != 0) {
                      local_f8 = 0;
                      goto LAB_147587e4c;
                    }
                  }
                  FUN_14485c47a(&local_f8,lVar12);
                }
              }
LAB_147587e4c:
              uVar9 = FUN_1475545d8(param_4,&local_f8);
              uVar10 = FUN_14755452a(param_4,lVar17,1);
              FUN_147554828(param_4,&local_b8,uVar10,uVar9);
              if (local_d0 != 0) {
                FUN_1400020a8();
              }
              if (CONCAT44(uStack_dc,local_e0) != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
LAB_147587ac3:
      pcVar21 = pcVar21 + 0x20;
      lVar20 = lVar20 + -0x20;
    } while (lVar20 != 0);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147587eae FUN_147587eae body=211 status=ok
// SIG undefined FUN_147587eae(void)

longlong *
FUN_147587eae(longlong *param_1,longlong *param_2,longlong param_3,char param_4,char param_5,
             byte param_6,uint param_7)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_149e1e590;
  param_1[0x13] = param_3;
  param_1[0x14] = 0;
  FUN_144a69558(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  *param_1 = (longlong)&PTR_FUN_149fb8060;
  *(byte *)((longlong)param_1 + 0x2a) =
       (param_6 ^ 1) << 3 | param_5 << 2 | param_4 << 7 | *(byte *)((longlong)param_1 + 0x2a) & 0x73
  ;
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | param_7;
  (**(code **)(*param_2 + 0xd8))(param_2,param_1);
  return param_1;
}



// FUNCTION 147587f81 FUN_147587f81 body=174 status=ok
// SIG undefined FUN_147587f81(void)

undefined8 FUN_147587f81(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b3240c();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147588030 FUN_147588030 body=75 status=ok
// SIG undefined FUN_147588030(void)

bool FUN_147588030(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147588069;
    }
  }
  lVar2 = 0;
LAB_147588069:
  lVar1 = FUN_145b3240c();
  return lVar2 == lVar1;
}



// FUNCTION 1475880b6 FUN_1475880b6 body=132 status=ok
// SIG undefined FUN_1475880b6(void)

void FUN_1475880b6(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 14758813a FUN_14758813a body=199 status=ok
// SIG undefined FUN_14758813a(void)

void FUN_14758813a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar1 = *(int *)(param_1 + 0x100);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    plVar2 = *(longlong **)(param_1 + 0xf8);
    iVar6 = 0;
    bVar11 = *plVar2 == param_2;
    iVar8 = 0;
    do {
      lVar4 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar4;
      iVar3 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar3;
        if (lVar5 <= lVar7) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (plVar2[lVar7] == param_2));
      if (bVar11 == false) {
        if (iVar6 != iVar8) {
          memmove(plVar2 + iVar6,plVar2 + lVar4,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar6 = iVar6 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 0x100) = iVar6;
  }
  return;
}



// FUNCTION 147588202 FUN_147588202 body=95 status=ok
// SIG undefined FUN_147588202(void)

void FUN_147588202(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 147588294 FUN_147588294 body=509 status=ok
// SIG undefined FUN_147588294(void)

longlong * FUN_147588294(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_54;
  undefined1 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)(**(code **)(*param_1 + 800))();
  cVar5 = FUN_145c40fca(plVar6,1);
  if (cVar5 != '\0') {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    plVar6[0xfb] = param_2;
  }
  local_4c = param_4 + param_3;
  local_58 = 1;
  local_50 = 0;
  local_54 = param_3;
  (**(code **)(*plVar6 + 0x2a0))(plVar6);
  if (param_5 == -1) {
    param_5 = 0;
    FUN_147574e64(plVar6,0);
    lVar7 = (**(code **)(*plVar6 + 0x2f8))(plVar6,param_1 + 0x1f,0,0);
    if (lVar7 != 0) {
      param_5 = 0;
      do {
        param_5 = param_5 + 1;
        FUN_147574e64(plVar6,param_5);
        lVar7 = (**(code **)(*plVar6 + 0x2f8))(plVar6,param_1 + 0x1f,0,0);
      } while (lVar7 != 0);
    }
  }
  FUN_147574e64(plVar6,param_5);
  plVar1 = param_1 + 0x1f;
  lVar7 = (**(code **)(*plVar6 + 0x2f8))(plVar6,plVar1,0,0);
  if ((lVar7 != 0) && (lVar7 = param_1[0x20], (longlong)(int)lVar7 != 0)) {
    lVar3 = param_1[0x1f];
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar8);
      if ((plVar4 != plVar6) && (param_5 <= (int)plVar4[0x17])) {
        FUN_147574e64(plVar4,(int)plVar4[0x17] + 1);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar8);
  }
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar6);
  }
  iVar2 = (int)param_1[0x20];
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x104) < iVar2 + 1U) {
    FUN_14759143a(plVar1,iVar2);
  }
  *(longlong **)(*plVar1 + (longlong)iVar2 * 8) = plVar6;
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 147588492 FUN_147588492 body=164 status=ok
// SIG undefined FUN_147588492(void)

void FUN_147588492(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1408612da();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x100) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
      FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147588536 FUN_147588536 body=75 status=ok
// SIG undefined FUN_147588536(void)

bool FUN_147588536(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14758856a;
    }
  }
  lVar2 = 0;
LAB_14758856a:
  lVar1 = FUN_1408612da();
  return lVar2 == lVar1;
}



// FUNCTION 147588587 FUN_147588587 body=174 status=ok
// SIG undefined FUN_147588587(void)

undefined8 FUN_147588587(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1408612da();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758869c FUN_14758869c body=106 status=ok
// SIG undefined FUN_14758869c(void)

void FUN_14758869c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147588708 FUN_147588708 body=95 status=ok
// SIG undefined FUN_147588708(void)

void FUN_147588708(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 14758876c FUN_14758876c body=75 status=ok
// SIG undefined FUN_14758876c(void)

bool FUN_14758876c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1475887a0;
    }
  }
  lVar2 = 0;
LAB_1475887a0:
  lVar1 = FUN_145b3214e();
  return lVar2 == lVar1;
}



// FUNCTION 1475887bd FUN_1475887bd body=174 status=ok
// SIG undefined FUN_1475887bd(void)

undefined8 FUN_1475887bd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b3214e();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475888c6 FUN_1475888c6 body=98 status=ok
// SIG undefined FUN_1475888c6(void)

void FUN_1475888c6(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1475917f2(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758892a FUN_14758892a body=106 status=ok
// SIG undefined FUN_14758892a(void)

void FUN_14758892a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x100);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147588996 FUN_147588996 body=95 status=ok
// SIG undefined FUN_147588996(void)

void FUN_147588996(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x100);
  return;
}



// FUNCTION 147588a0a FUN_147588a0a body=428 status=ok
// SIG undefined FUN_147588a0a(void)

ulonglong FUN_147588a0a(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  longlong lVar5;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar1 = *param_1;
  dVar2 = *param_2;
  if ((uint)((ulonglong)dVar2 >> 0x33) < 0x1fff == (uint)((ulonglong)dVar1 >> 0x33) < 0x1fff) {
    if ((ulonglong)dVar1 < 0xfff8000000000000) {
      uVar4 = (ulonglong)(-(uint)(dVar2 == dVar1) & 1);
      goto LAB_147588a4b;
    }
    uVar4 = (ulonglong)dVar2 ^ (ulonglong)dVar1;
    if ((uVar4 & 0x7000000000000) == 0) {
      uVar6 = (undefined7)(uVar4 >> 8);
      if (((ulonglong)dVar1 & 0x7000000000000) != 0) {
        uVar4 = CONCAT71(uVar6,(uVar4 & 0xffffffffffff) == 0);
        goto LAB_147588a4b;
      }
      plVar7 = (longlong *)((ulonglong)dVar1 & 0xffffffffffff);
      plVar8 = (longlong *)((ulonglong)dVar2 & 0xffffffffffff);
      if (plVar7 == plVar8) {
        uVar4 = CONCAT71(uVar6,1);
        goto LAB_147588a4b;
      }
      if ((plVar8 != (longlong *)0x0 && plVar7 != (longlong *)0x0) &&
         (lVar9 = plVar7[2], lVar9 == plVar8[2])) {
        if (lVar9 == 0) {
          local_38 = (longlong *)0x0;
        }
        else {
          local_38 = *(longlong **)(lVar9 + 0x50);
        }
        local_30 = 0xffffffff;
        local_2c = 0x101;
        local_2a = 0;
        local_40 = lVar9;
        FUN_144a2daf0(&local_40);
        if (local_38 != (longlong *)0x0) {
          do {
            if (0 < (int)local_38[6]) {
              lVar9 = 0;
              do {
                lVar5 = *(int *)((longlong)local_38 + 0x34) * lVar9;
                cVar3 = (**(code **)(*local_38 + 200))
                                  (local_38,(longlong)plVar7 +
                                            lVar5 + *(int *)((longlong)local_38 + 0x44),
                                   (longlong)plVar8 + lVar5 + *(int *)((longlong)local_38 + 0x44),0)
                ;
                if (cVar3 == '\0') goto LAB_147588a49;
                lVar9 = lVar9 + 1;
              } while (lVar9 < (int)local_38[6]);
            }
            local_38 = (longlong *)local_38[3];
            FUN_144a2daf0(&local_40);
          } while (local_38 != (longlong *)0x0);
        }
        uVar4 = (**(code **)(*plVar7 + 0x1a8))(plVar7,plVar8);
        goto LAB_147588a4b;
      }
    }
  }
LAB_147588a49:
  uVar4 = 0;
LAB_147588a4b:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147588bb8 FUN_147588bb8 body=112 status=ok
// SIG undefined FUN_147588bb8(void)

undefined8 FUN_147588bb8(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    local_28 = &local_20;
    puVar2 = &local_30;
    pcVar1 = FUN_1432e124a;
  }
  else {
    local_10 = &local_20;
    puVar2 = &local_18;
    pcVar1 = FUN_1432e1146;
  }
  local_20 = param_1;
  *puVar2 = pcVar1;
  FUN_145ec30ee();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147588c2a FUN_147588c2a body=702 status=ok
// SIG undefined FUN_147588c2a(void)

undefined8 FUN_147588c2a(double *param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  byte bVar9;
  double dVar10;
  undefined1 auStack_58 [32];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_38,8);
  if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
    local_38 = 0.0;
    FUN_144aa029c(*param_3,&local_38);
    dVar10 = local_38;
  }
  else {
    uVar3 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_38,4);
    if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
      local_38 = (double)((ulonglong)local_38 & 0xffffffff00000000);
      FUN_144aa025c(*param_3,&local_38);
      dVar10 = (double)local_38._0_4_;
    }
    else {
      uVar3 = *(ulonglong *)(param_2 + 0xc);
      FUN_1401a700c(&local_38,1);
      if (uVar3 != ((ulonglong)local_38 & 0xffffffff)) {
        uVar3 = *(ulonglong *)(param_2 + 0xc);
        FUN_1401a700c(&local_38,0x15);
        if (uVar3 != ((ulonglong)local_38 & 0xffffffff)) {
          uVar3 = *(ulonglong *)(param_2 + 0xc);
          FUN_1401a700c(&local_38,2);
          if (uVar3 != ((ulonglong)local_38 & 0xffffffff)) {
            uVar3 = *(ulonglong *)(param_2 + 0xc);
            FUN_1401a700c(&local_38,0x16);
            if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
              local_38 = (double)((ulonglong)local_38 & 0xffffffffffff0000);
              FUN_1458ec23e(*param_3,&local_38);
              uVar6 = (uint)local_38._0_2_;
            }
            else {
              uVar3 = *(ulonglong *)(param_2 + 0xc);
              FUN_1401a700c(&local_38,0x17);
              if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
                local_38 = (double)((ulonglong)local_38 & 0xffffffffffffff00);
                plVar4 = *(longlong **)(*param_3 + 8);
                puVar5 = (ulonglong *)plVar4[1];
                pcVar1 = (char *)*puVar5 + 1;
                if ((char *)puVar5[1] < pcVar1) {
                  (**(code **)(*plVar4 + 0x170))(plVar4,&local_38,1);
                  cVar8 = local_38._0_1_;
                }
                else {
                  cVar8 = *(char *)*puVar5;
                  *puVar5 = (ulonglong)pcVar1;
                }
                uVar6 = (uint)cVar8;
              }
              else {
                uVar3 = *(ulonglong *)(param_2 + 0xc);
                FUN_1401a700c(&local_38,0x19);
                if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
                  local_38 = (double)((ulonglong)local_38 & 0xffffffff00000000);
                  FUN_144afef32(*param_3,&local_38);
                  dVar10 = (double)((ulonglong)local_38 & 0xffffffff);
                  goto LAB_147588c86;
                }
                uVar3 = *(ulonglong *)(param_2 + 0xc);
                FUN_1401a700c(&local_38,0x1a);
                if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
                  local_38 = (double)((ulonglong)local_38 & 0xffffffffffff0000);
                  FUN_144afeef0(*param_3,&local_38);
                  uVar6 = SUB84(local_38,0) & 0xffff;
                }
                else {
                  uVar3 = *(ulonglong *)(param_2 + 0xc);
                  FUN_1401a700c(&local_38,1);
                  if (uVar3 != ((ulonglong)local_38 & 0xffffffff)) {
                    uVar7 = 0;
                    goto LAB_147588c8c;
                  }
                  local_38 = (double)((ulonglong)local_38 & 0xffffffffffffff00);
                  plVar4 = *(longlong **)(*param_3 + 8);
                  puVar5 = (ulonglong *)plVar4[1];
                  pbVar2 = (byte *)*puVar5 + 1;
                  if ((byte *)puVar5[1] < pbVar2) {
                    (**(code **)(*plVar4 + 0x170))(plVar4,&local_38,1);
                    bVar9 = local_38._0_1_;
                  }
                  else {
                    bVar9 = *(byte *)*puVar5;
                    *puVar5 = (ulonglong)pbVar2;
                  }
                  uVar6 = (uint)bVar9;
                }
              }
            }
            dVar10 = (double)(int)uVar6;
            goto LAB_147588c86;
          }
        }
      }
      local_38 = (double)((ulonglong)local_38 & 0xffffffff00000000);
      FUN_144aa02de(*param_3,&local_38);
      dVar10 = (double)(int)local_38._0_4_;
    }
  }
LAB_147588c86:
  *param_1 = dVar10;
  uVar7 = 1;
LAB_147588c8c:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147588eea FUN_147588eea body=3 status=ok
// SIG undefined FUN_147588eea(void)

undefined8 FUN_147588eea(void)

{
  return 0;
}



// FUNCTION 147588eee FUN_147588eee body=3 status=ok
// SIG undefined FUN_147588eee(void)

undefined8 FUN_147588eee(void)

{
  return 0;
}



// FUNCTION 147588efc FUN_147588efc body=90 status=ok
// SIG undefined FUN_147588efc(void)

void FUN_147588efc(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14073751e();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x188) = lVar2;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  *(undefined8 *)(param_1 + 0xe8) = 0x3ff0000000000000;
  return;
}



// FUNCTION 147588f56 FUN_147588f56 body=344 status=ok
// SIG undefined FUN_147588f56(void)

longlong FUN_147588f56(longlong param_1)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    uVar3 = FUN_14055f146();
    lVar4 = FUN_144a78ede(param_1,uVar3);
    uVar3 = FUN_14073751e();
    lVar5 = FUN_144a78ede(param_1,uVar3);
    FUN_14752d232(param_1 + 0x70,local_50);
    FUN_147532756(local_50,&local_40);
    puVar1 = (ulonglong *)(param_1 + 0x198);
    if (puVar1 == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x198) != 0) {
        FUN_1400020a8();
      }
      *(ulonglong *)(param_1 + 0x198) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 0x1a0) = (undefined4)local_38;
      *(undefined4 *)(param_1 + 0x1a4) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (lVar4 == 0) {
      uVar6 = *(undefined4 *)(lVar5 + 0x10c);
    }
    else {
      uVar6 = 0;
    }
    local_40 = 0;
    cVar2 = FUN_147532926(puVar1,uVar6);
    if (cVar2 != '\0') {
      FUN_147532866(puVar1,local_40 ^ 0x8000000000000000);
    }
    *(undefined1 *)(param_1 + 0x1a8) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1 + 0x198;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475890b0 FUN_1475890b0 body=26 status=ok
// SIG undefined FUN_1475890b0(void)

undefined8 FUN_1475890b0(longlong param_1,undefined8 param_2)

{
  FUN_147591ad2(param_2,param_1 + 0x70);
  return 0;
}



// FUNCTION 1475890ca FUN_1475890ca body=46 status=ok
// SIG undefined FUN_1475890ca(void)

void FUN_1475890ca(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144709e00(param_3,"PlayRate");
  if (cVar1 != '\0') {
    *param_2 = 0x3ff0000000000000;
  }
  return;
}



// FUNCTION 1475890f8 FUN_1475890f8 body=346 status=ok
// SIG undefined FUN_1475890f8(void)

char * FUN_1475890f8(undefined8 param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  double local_38;
  double local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_147588f56();
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 8);
  uVar3 = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  if (*(int *)(lVar4 + 8) != 0) {
    uVar6 = 0x7fffffff;
    if (param_3[0xc] != '\x02') {
      uVar6 = *(undefined8 *)(param_3 + 0x10);
    }
    uVar5 = 0x80000000;
    if (*param_3 != '\x02') {
      uVar5 = *(undefined8 *)(param_3 + 4);
    }
    local_40 = lVar4;
    FUN_147589253(&local_38,&local_40,uVar5,uVar6);
    if (local_38 <= local_30) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_38;
      auVar9 = roundpd(in_XMM3,auVar9,1);
      dVar10 = auVar9._0_8_;
      local_38 = local_38 - dVar10;
      if (2147483647.0 <= dVar10) {
        dVar10 = 2147483647.0;
      }
      if (dVar10 <= -2147483648.0) {
        dVar10 = -2147483648.0;
      }
      fVar7 = 0.99999994;
      fVar12 = (float)local_38;
      if (0.99999994 <= (float)local_38) {
        fVar12 = fVar7;
      }
      fVar8 = 0.0;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar12 = fVar12 + 0.5 + -0.5;
      if (0.99999994 <= fVar12) {
        fVar12 = fVar7;
      }
      if (fVar12 <= 0.0) {
        fVar12 = fVar8;
      }
      if (*param_2 == '\x02') {
        *param_2 = '\x01';
      }
      *(int *)(param_2 + 4) = (int)dVar10;
      *(float *)(param_2 + 8) = fVar12;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_30;
      auVar9 = roundpd(auVar11,auVar11,1);
      dVar10 = auVar9._0_8_;
      local_30 = local_30 - dVar10;
      if (2147483647.0 <= dVar10) {
        dVar10 = 2147483647.0;
      }
      if (dVar10 <= -2147483648.0) {
        dVar10 = -2147483648.0;
      }
      fVar12 = (float)local_30;
      if (0.99999994 <= (float)local_30) {
        fVar12 = fVar7;
      }
      if (fVar12 <= 0.0) {
        fVar12 = fVar8;
      }
      fVar12 = fVar12 + 0.5 + -0.5;
      if (0.99999994 <= fVar12) {
        fVar12 = fVar7;
      }
      if (fVar12 <= 0.0) {
        fVar12 = fVar8;
      }
      if (param_2[0xc] == '\x02') {
        param_2[0xc] = '\x01';
      }
      *(int *)(param_2 + 0x10) = (int)dVar10;
      *(float *)(param_2 + 0x14) = fVar12;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147589253 FUN_147589253 body=3715 status=ok
// SIG undefined FUN_147589253(void)

undefined8 *
FUN_147589253(undefined8 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  double *pdVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar25 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined1 auStack_268 [40];
  undefined8 *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double local_1f0;
  int local_1e8;
  float local_1e4;
  int local_1e0;
  float local_1dc;
  double local_1d8;
  double local_1d0;
  int local_1c8;
  float local_1c4;
  int local_1c0;
  float local_1bc;
  double local_1b8;
  uint local_1b0;
  float fStack_1ac;
  uint uStack_1a8;
  char local_1a0;
  double local_198;
  uint local_190;
  float fStack_18c;
  uint uStack_188;
  char local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  uint local_158;
  uint local_154;
  double local_150;
  double local_148;
  int local_140;
  float local_13c;
  int local_138;
  float local_134;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  iVar5 = FUN_147532ef8(param_2);
  if (iVar5 == 0) {
    *param_1 = 0x7fefffffffffffff;
    param_1[1] = 0xffefffffffffffff;
    param_1[2] = 0;
    param_1[3] = 0;
    cVar4 = FUN_147532ee8(param_2);
    if (cVar4 != '\0') {
      FUN_147532eec(param_2);
      FUN_14752f54e(param_1);
      FUN_147532eec(param_2);
      FUN_14752f54e(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_268);
    }
    goto LAB_1475896af;
  }
  uVar13 = param_3 >> 0x20;
  FUN_147533040(param_2,&local_154);
  FUN_147533050(param_2,&local_158);
  local_178 = 0x7fefffffffffffff;
  uStack_170 = 0xffefffffffffffff;
  local_168 = 0;
  uStack_160 = 0;
  iVar5 = FUN_147533070(param_2);
  uVar15 = local_154;
  uVar14 = (uint)param_4;
  if ((iVar5 == 3) && ((int)param_3 < (int)local_154)) {
    uVar16 = uVar14;
    if ((int)local_154 < (int)uVar14) {
      uVar16 = local_154;
    }
    local_150 = (double)(param_3 & 0xffffffff);
    FUN_147532ef0(param_2,&local_150);
    local_150 = (double)(ulonglong)uVar16;
    FUN_147532ef0(param_2,&local_150);
    FUN_14752f54e(&local_178);
    FUN_14752f54e(&local_178);
    if ((int)uVar15 < (int)uVar14) {
      param_3 = (ulonglong)local_154;
      uVar13 = 0;
      goto LAB_1475893f1;
    }
  }
  else {
LAB_1475893f1:
    local_240 = param_1;
    iVar5 = FUN_147533076(param_2);
    uVar15 = local_158;
    uVar16 = (uint)param_3;
    if ((int)local_158 < (int)uVar14 && iVar5 == 3) {
      uVar14 = local_158;
      if ((int)local_158 < (int)uVar16) {
        uVar14 = uVar16;
      }
      local_150 = (double)(ulonglong)uVar14;
      FUN_147532ef4(param_2,&local_150);
      local_150 = (double)(param_4 & 0xffffffff);
      FUN_147532ef4(param_2,&local_150);
      FUN_14752f54e(&local_178);
      FUN_14752f54e(&local_178);
      param_1 = local_240;
      if ((int)uVar15 <= (int)uVar16) goto LAB_147589831;
      uVar12 = 0;
      param_4 = (ulonglong)local_158;
    }
    else {
      uVar12 = param_4 >> 0x20;
    }
    FUN_140108ff7(&local_198,local_154,local_158,param_3 & 0xffffffff | uVar13 << 0x20);
    uVar15 = (uint)param_4;
    FUN_140108ff7(&local_1b8,local_154,local_158,param_4 & 0xffffffff | uVar12 << 0x20);
    dVar21 = (double)FUN_14753307c(param_2);
    dVar22 = (double)FUN_1475330ce(param_2);
    param_1 = local_240;
    if (((int)uVar16 < (int)local_154) || ((uVar16 == local_154 && ((float)uVar13 < 0.0)))) {
      uVar6 = FUN_147533070(param_2);
      param_1 = local_240;
      switch(uVar6) {
      case 1:
switchD_1475895a9_caseD_1:
        local_198 = (double)(int)uStack_188 * (dVar22 - dVar21);
        break;
      case 2:
switchD_1475895a9_caseD_2:
        if ((uStack_188 & 1) != 0) {
          local_180 = '\x01';
          fVar18 = fStack_18c + 0.5 + -0.5;
          if (0.99999994 <= fVar18) {
            fVar18 = 0.99999994;
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar18 = 0.0 - fVar18;
          auVar31 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),1);
          local_190 = ((local_158 + local_154) - local_190) + -1 + (int)auVar31._0_4_;
          fStack_18c = (fVar18 - auVar31._0_4_) + 0.5 + -0.5;
          if (0.99999994 <= fStack_18c) {
            fStack_18c = 0.99999994;
          }
          if (fStack_18c <= 0.0) {
            fStack_18c = 0.0;
          }
        }
        break;
      case 3:
switchD_1475895a9_caseD_3:
        uStack_188 = 0;
        break;
      case 4:
      case 5:
        local_190 = local_154;
LAB_1475895b2:
        fStack_18c = 0.0;
        uStack_188 = 0;
      }
    }
    else if (((int)local_158 < (int)uVar16) || ((uVar16 == local_158 && (0.0 < (float)uVar13)))) {
      uVar6 = FUN_147533076(param_2);
      switch(uVar6) {
      case 1:
        goto switchD_1475895a9_caseD_1;
      case 2:
        goto switchD_1475895a9_caseD_2;
      case 3:
        goto switchD_1475895a9_caseD_3;
      case 4:
      case 5:
        local_190 = local_158;
        goto LAB_1475895b2;
      }
    }
    if (((int)uVar15 < (int)local_154) || ((uVar15 == local_154 && ((float)uVar12 < 0.0)))) {
      uVar6 = FUN_147533070(param_2);
      switch(uVar6) {
      case 1:
switchD_1475895f0_caseD_1:
        local_1b8 = (double)(int)uStack_1a8 * (dVar22 - dVar21);
        break;
      case 2:
switchD_1475895f0_caseD_2:
        if ((uStack_1a8 & 1) != 0) {
          local_1a0 = '\x01';
          fVar18 = fStack_1ac + 0.5 + -0.5;
          if (0.99999994 <= fVar18) {
            fVar18 = 0.99999994;
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar18 = 0.0 - fVar18;
          auVar31 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),1);
          local_1b0 = ((local_158 + local_154) - local_1b0) + -1 + (int)auVar31._0_4_;
          fStack_1ac = (fVar18 - auVar31._0_4_) + 0.5 + -0.5;
          if (0.99999994 <= fStack_1ac) {
            fStack_1ac = 0.99999994;
          }
          if (fStack_1ac <= 0.0) {
            fStack_1ac = 0.0;
          }
        }
        break;
      case 3:
switchD_1475895f0_caseD_3:
        uStack_1a8 = 0;
        break;
      case 4:
      case 5:
        local_1b0 = local_154;
LAB_1475895f9:
        fStack_1ac = 0.0;
        uStack_1a8 = 0;
      }
    }
    else if (((int)local_158 < (int)uVar15) || ((uVar15 == local_158 && (0.0 < (float)uVar12)))) {
      uVar6 = FUN_147533076(param_2);
      switch(uVar6) {
      case 1:
        goto switchD_1475895f0_caseD_1;
      case 2:
        goto switchD_1475895f0_caseD_2;
      case 3:
        goto switchD_1475895f0_caseD_3;
      case 4:
      case 5:
        local_1b0 = local_158;
        goto LAB_1475895f9;
      }
    }
    if (uStack_188 == uStack_1a8) {
      if (local_1b0 == local_190) {
        if ((fStack_1ac == fStack_18c) && (!NAN(fStack_1ac) && !NAN(fStack_18c))) {
          local_1d8 = 0.0;
          if (((int)local_1b0 < (int)local_154) || ((local_154 == local_1b0 && (fStack_18c < 0.0))))
          {
            local_1d8 = (double)FUN_147532ef0(param_2,&local_190);
          }
          else if (((int)local_158 < (int)local_1b0) ||
                  ((local_158 == local_1b0 && (0.0 <= fStack_18c)))) {
            local_1d8 = (double)FUN_147532ef4(param_2,&local_190);
          }
          else {
            FUN_147532fd4(param_2,&local_150);
            FUN_144809632(&local_150,CONCAT44(fStack_18c,local_190),&local_1d8);
          }
          *param_1 = 0x7fefffffffffffff;
          param_1[1] = 0xffefffffffffffff;
          param_1[2] = 0;
          param_1[3] = 0;
          FUN_14752f54e(param_1);
          goto LAB_1475896af;
        }
      }
      uVar10 = CONCAT44(fStack_18c,local_190);
      uVar3 = CONCAT44(fStack_1ac,local_1b0);
      if (local_180 != '\0') {
        uVar10 = CONCAT44(fStack_1ac,local_1b0);
        uVar3 = CONCAT44(fStack_18c,local_190);
      }
      pdVar9 = &local_150;
      FUN_147591c1f(pdVar9,param_2,uVar10,uVar3);
      local_150 = local_150 + local_198;
      local_148 = local_198 + local_148;
    }
    else {
      iVar5 = local_158 - local_154;
      uVar13 = 0;
      iVar11 = 0;
      bVar17 = local_180 != '\0';
      uVar15 = local_158;
      if (bVar17) {
        uVar15 = local_190;
      }
      uVar14 = local_190;
      if (bVar17) {
        uVar14 = local_154;
      }
      uVar8 = (ulonglong)(uint)fStack_18c << 0x20;
      uVar12 = uVar13;
      if (!bVar17) {
        uVar8 = uVar13;
        uVar12 = (ulonglong)(uint)fStack_18c << 0x20;
      }
      FUN_147591c1f(&local_150,param_2,uVar14 | uVar12,uVar15 | uVar8);
      local_150 = local_150 + local_198;
      local_148 = local_198 + local_148;
      dVar1 = (double)iVar5;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = (double)(int)uStack_188 * dVar1;
      auVar31 = roundpd(auVar31,auVar31,1);
      dVar27 = auVar31._0_8_;
      dVar26 = (double)(int)uStack_188 * dVar1 - dVar27;
      if (2147483647.0 <= dVar27) {
        dVar27 = 2147483647.0;
      }
      if (dVar27 <= -2147483648.0) {
        dVar27 = -2147483648.0;
      }
      fVar18 = (float)dVar26;
      auVar25 = (undefined1  [12])0x0;
      if (0.99999994 <= fVar18) {
        auVar25 = ZEXT812(0);
        fVar18 = 0.99999994;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar18 = fVar18 + 0.5 + -0.5;
      if (0.99999994 <= fVar18) {
        fVar18 = 0.99999994;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      local_13c = local_13c + fVar18;
      local_140 = ((int)ROUND(local_13c + local_13c + -0.5) >> 1) + local_140 + (int)dVar27;
      auVar31 = roundss(ZEXT416(0),ZEXT416((uint)local_13c),9);
      local_13c = local_13c - auVar31._0_4_;
      auVar23._0_4_ = fVar18 + local_134;
      auVar23._4_12_ = auVar25;
      local_138 = (int)dVar27 + local_138 + ((int)ROUND(auVar23._0_4_ + auVar23._0_4_ + -0.5) >> 1);
      auVar31 = roundss(ZEXT416(0),auVar23,9);
      bVar17 = local_1a0 == '\0';
      uVar15 = local_158;
      if (bVar17) {
        uVar15 = local_1b0;
      }
      local_134 = auVar23._0_4_ - auVar31._0_4_;
      uVar14 = local_1b0;
      if (bVar17) {
        uVar14 = local_154;
      }
      uVar8 = (ulonglong)(uint)fStack_1ac << 0x20;
      uVar12 = 0;
      if (!bVar17) {
        uVar8 = uVar13;
        uVar12 = (ulonglong)(uint)fStack_1ac << 0x20;
      }
      FUN_147591c1f(&local_1d8,param_2,uVar14 | uVar12,uVar15 | uVar8);
      local_1d8 = local_1d8 + local_1b8;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = (double)(int)uStack_1a8 * dVar1;
      auVar31 = roundpd(auVar32,auVar32,1);
      dVar27 = auVar31._0_8_;
      dVar26 = (double)(int)uStack_1a8 * dVar1 - dVar27;
      if (2147483647.0 <= dVar27) {
        dVar27 = 2147483647.0;
      }
      if (dVar27 <= -2147483648.0) {
        dVar27 = -2147483648.0;
      }
      local_1d0 = local_1b8 + local_1d0;
      fVar18 = (float)dVar26;
      auVar25 = (undefined1  [12])0x0;
      if (0.99999994 <= fVar18) {
        auVar25 = ZEXT812(0);
        fVar18 = 0.99999994;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar18 = fVar18 + 0.5 + -0.5;
      if (0.99999994 <= fVar18) {
        fVar18 = 0.99999994;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      local_1c4 = local_1c4 + fVar18;
      local_1c8 = ((int)ROUND(local_1c4 + local_1c4 + -0.5) >> 1) + local_1c8 + (int)dVar27;
      auVar31 = roundss(ZEXT416(0),ZEXT416((uint)local_1c4),9);
      local_1c4 = local_1c4 - auVar31._0_4_;
      auVar24._0_4_ = fVar18 + local_1bc;
      auVar24._4_12_ = auVar25;
      local_1c0 = (int)dVar27 + local_1c0 + ((int)ROUND(auVar24._0_4_ + auVar24._0_4_ + -0.5) >> 1);
      auVar31 = roundss(ZEXT416(0),auVar24,9);
      local_1bc = auVar24._0_4_ - auVar31._0_4_;
      FUN_14752f572(&local_178,&local_150);
      FUN_14752f572(&local_178,&local_1d8);
      if ((int)(uStack_1a8 - uStack_188) < 2) goto LAB_147589831;
      iVar5 = FUN_147533070(param_2);
      uVar15 = uStack_188;
      iVar7 = FUN_147533076(param_2);
      if ((iVar5 == 1) && ((int)uVar15 < 0)) {
        iVar11 = ~uStack_188 + ((int)uStack_1a8 >> 0x1f & uStack_1a8);
      }
      iVar5 = 0;
      if (0 < (int)uStack_1a8 && iVar7 == 1) {
        uVar15 = 0;
        if (0 < (int)uStack_188) {
          uVar15 = uStack_188;
        }
        iVar5 = uStack_1a8 + ~uVar15;
      }
      FUN_147591c1f(&local_1f8,param_2,local_154,local_158);
      if (iVar5 + iVar11 != 0 && SCARRY4(iVar5,iVar11) == iVar5 + iVar11 < 0) {
        local_218 = 0x7fefffffffffffff;
        local_210 = 0xffefffffffffffff;
        local_208 = 0;
        uStack_200 = 0;
        local_238 = 0x7fefffffffffffff;
        local_230 = 0xffefffffffffffff;
        dVar26 = dVar1 * (double)iVar5;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar26;
        auVar31 = roundpd(auVar28,auVar28,1);
        dVar27 = auVar31._0_8_;
        dVar26 = dVar26 - dVar27;
        if (2147483647.0 <= dVar27) {
          dVar27 = 2147483647.0;
        }
        if (dVar27 <= -2147483648.0) {
          dVar27 = -2147483648.0;
        }
        fVar18 = (float)dVar26;
        if (0.99999994 <= fVar18) {
          fVar18 = 0.99999994;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar18 = fVar18 + 0.5 + -0.5;
        if (0.99999994 <= fVar18) {
          fVar18 = 0.99999994;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        local_228 = 0;
        uStack_220 = 0;
        fVar19 = local_1dc + fVar18;
        auVar31 = roundss(ZEXT416(0),ZEXT416((uint)fVar19),9);
        fVar20 = (fVar19 - auVar31._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar20) {
          fVar20 = 0.99999994;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        dVar26 = (double)iVar5 * (dVar22 - dVar21);
        FUN_14752f54e(&local_238,local_1f0 + dVar26,
                      CONCAT44(fVar20,((int)ROUND(fVar19 + fVar19 + -0.5) >> 1) + local_1e0 +
                                      (int)dVar27));
        fVar18 = fVar18 + local_1e4;
        auVar2._4_4_ = unaff_XMM15_Db;
        auVar2._0_4_ = fVar18;
        auVar2._8_4_ = unaff_XMM15_Dc;
        auVar2._12_4_ = unaff_XMM15_Dd;
        auVar31 = roundss(ZEXT416(0),auVar2,9);
        fVar19 = (fVar18 - auVar31._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar19) {
          fVar19 = 0.99999994;
        }
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        FUN_14752f54e(&local_238,dVar26 + local_1f8,
                      CONCAT44(fVar19,(int)dVar27 + local_1e8 +
                                      ((int)ROUND(fVar18 + fVar18 + -0.5) >> 1)));
        dVar1 = dVar1 * (double)iVar11;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = dVar1;
        auVar31 = roundpd(auVar29,auVar29,1);
        dVar26 = auVar31._0_8_;
        dVar1 = dVar1 - dVar26;
        if (2147483647.0 <= dVar26) {
          dVar26 = 2147483647.0;
        }
        if (dVar26 <= -2147483648.0) {
          dVar26 = -2147483648.0;
        }
        fVar18 = (float)dVar1;
        if (0.99999994 <= fVar18) {
          fVar18 = 0.99999994;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar18 = fVar18 + 0.5 + -0.5;
        if (0.99999994 <= fVar18) {
          fVar18 = 0.99999994;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        local_1dc = local_1dc - fVar18;
        auVar31 = roundps(ZEXT416((uint)local_1dc),ZEXT416((uint)local_1dc),1);
        fVar19 = (local_1dc - auVar31._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar19) {
          fVar19 = 0.99999994;
        }
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        dVar21 = -(dVar22 - dVar21) * (double)iVar11;
        auVar30._0_8_ = local_1f0 + dVar21;
        auVar30._8_8_ = 0;
        FUN_14752f54e(&local_218,auVar30._0_8_,
                      CONCAT44(fVar19,((int)auVar31._0_4_ + local_1e0) - (int)dVar26));
        auVar31 = roundps(auVar30,ZEXT416((uint)(local_1e4 - fVar18)),1);
        fVar18 = ((local_1e4 - fVar18) - auVar31._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar18) {
          fVar18 = 0.99999994;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        FUN_14752f54e(&local_218,dVar21 + local_1f8,
                      CONCAT44(fVar18,(local_1e8 - (int)dVar26) + (int)auVar31._0_4_));
        FUN_14752f572(&local_1f8,&local_218);
        FUN_14752f572(&local_1f8,&local_238);
      }
      pdVar9 = &local_1f8;
    }
    FUN_14752f572(&local_178,pdVar9);
  }
LAB_147589831:
  param_1[2] = local_168;
  param_1[3] = uStack_160;
  *param_1 = local_178;
  param_1[1] = uStack_170;
LAB_1475896af:
  if ((local_f0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758a0dc FUN_14758a0dc body=184 status=ok
// SIG undefined FUN_14758a0dc(void)

int * FUN_14758a0dc(undefined8 param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0.0;
  uVar1 = FUN_147588f56();
  FUN_147532926(uVar1,param_3,&local_28);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_28;
  auVar5 = roundpd(auVar5,auVar5,1);
  dVar4 = auVar5._0_8_;
  dVar3 = local_28 - dVar4;
  if (2147483647.0 <= dVar4) {
    dVar4 = 2147483647.0;
  }
  if (dVar4 <= -2147483648.0) {
    dVar4 = -2147483648.0;
  }
  fVar2 = (float)dVar3;
  if (0.99999994 <= (float)dVar3) {
    fVar2 = 0.99999994;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = fVar2 + 0.5 + -0.5;
  *param_2 = (int)dVar4;
  if (0.99999994 <= fVar2) {
    fVar2 = 0.99999994;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  param_2[1] = (int)fVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758a196 FUN_14758a196 body=98 status=ok
// SIG undefined FUN_14758a196(void)

undefined8
FUN_14758a196(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_147588f56();
  FUN_14753299a(uVar1,param_2,(double)(float)((ulonglong)param_3 >> 0x20) + (double)(int)param_3,
                param_4,*param_5);
  return param_2;
}



// FUNCTION 14758a1f8 FUN_14758a1f8 body=75 status=ok
// SIG undefined FUN_14758a1f8(void)

void FUN_14758a1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_147588f56();
  FUN_147532d18(uVar1,(double)(float)((ulonglong)param_2 >> 0x20) + (double)(int)param_2,param_3,
                param_4);
  return;
}



// FUNCTION 14758a244 FUN_14758a244 body=35 status=ok
// SIG undefined FUN_14758a244(void)

void FUN_14758a244(longlong param_1,undefined4 param_2)

{
  FUN_147533694(param_1 + 0x70,0,param_2);
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  return;
}



// FUNCTION 14758a26c FUN_14758a26c body=463 status=ok
// SIG undefined FUN_14758a26c(void)

void FUN_14758a26c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  double local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_14073751e();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x188) = lVar3;
    if (lVar3 == 0) goto LAB_14758a2b8;
  }
  else {
    FUN_1456cec3c(lVar3);
    *(longlong *)(param_1 + 0x188) = lVar3;
  }
  iVar5 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0x108) >> 0x20) +
          *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)*(undefined8 *)(lVar3 + 0x108) == '\0') * 4);
  iVar7 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0x110) >> 0x20) +
          *(int *)(&DAT_14a46e600 + (ulonglong)((char)*(undefined8 *)(lVar3 + 0x110) == '\x01') * 4)
  ;
  uVar2 = FUN_14055f146();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  if (lVar3 != 0) {
    uVar6 = *(ulonglong *)(lVar3 + 0x98) & 0xff;
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0xa0) & 0xff;
    iVar1 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0xa0) >> 0x20);
    if (uVar6 == 2) {
      if (uVar4 != 2) {
        iVar7 = (uint)(uVar4 == 1) + iVar1;
      }
    }
    else {
      iVar5 = 0;
      if (uVar4 != 2) {
        iVar7 = (iVar1 - ((uint)((int)uVar6 != 1) + (int)(*(ulonglong *)(lVar3 + 0x98) >> 0x20))) +
                (uint)(uVar4 == 1);
        iVar5 = 0;
      }
    }
  }
  FUN_140861d3c(local_78,param_1 + 0x70,param_1 + 200,param_1 + 0xf8);
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  local_58[0] = (double)iVar5;
  local_60 = param_1 + 0xd8;
  FUN_14753f7ce(local_78,iVar5,local_58);
  local_58[0] = (double)iVar7;
  FUN_14753f7ce(local_78,iVar7,local_58);
  *(undefined2 *)(param_1 + 0xc0) = 0x404;
LAB_14758a2b8:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758a43c FUN_14758a43c body=26 status=ok
// SIG undefined FUN_14758a43c(void)

undefined8 FUN_14758a43c(longlong param_1,undefined8 param_2)

{
  FUN_147591ad2(param_2,param_1 + 0x70);
  return 0;
}



// FUNCTION 14758a456 FUN_14758a456 body=46 status=ok
// SIG undefined FUN_14758a456(void)

void FUN_14758a456(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144709e00(param_3,"TimeWarp");
  if (cVar1 != '\0') {
    *param_2 = 0x3ff0000000000000;
  }
  return;
}



// FUNCTION 14758a484 FUN_14758a484 body=489 status=ok
// SIG undefined FUN_14758a484(void)

char * FUN_14758a484(longlong param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0xe0) == 1) {
    dVar7 = **(double **)(param_1 + 0xd8);
    dVar5 = **(double **)(param_1 + 0xd8);
  }
  else {
    if (*(int *)(param_1 + 0xe0) != 0) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      uVar2 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 8) = uVar2;
      uVar2 = 0x7fffffff;
      if (param_3[0xc] != '\x02') {
        uVar2 = *(undefined8 *)(param_3 + 0x10);
      }
      uVar1 = 0x80000000;
      if (*param_3 != '\x02') {
        uVar1 = *(undefined8 *)(param_3 + 4);
      }
      FUN_14752bc74(param_1 + 0x70,&local_38,uVar1,uVar2);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_38;
      auVar9 = roundpd(in_XMM2,auVar9,1);
      dVar7 = auVar9._0_8_;
      local_38 = local_38 - dVar7;
      if (2147483647.0 <= dVar7) {
        dVar7 = 2147483647.0;
      }
      if (dVar7 <= -2147483648.0) {
        dVar7 = -2147483648.0;
      }
      fVar4 = 0.99999994;
      fVar3 = (float)local_38;
      if (0.99999994 <= (float)local_38) {
        fVar3 = fVar4;
      }
      fVar6 = 0.0;
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      fVar3 = fVar3 + 0.5 + -0.5;
      if (0.99999994 <= fVar3) {
        fVar3 = fVar4;
      }
      if (fVar3 <= 0.0) {
        fVar3 = fVar6;
      }
      if (*param_2 == '\x02') {
        *param_2 = '\x01';
      }
      *(int *)(param_2 + 4) = (int)dVar7;
      *(float *)(param_2 + 8) = fVar3;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_30;
      auVar9 = roundpd(auVar10,auVar10,1);
      dVar7 = auVar9._0_8_;
      local_30 = local_30 - dVar7;
      if (2147483647.0 <= dVar7) {
        dVar7 = 2147483647.0;
      }
      if (dVar7 <= -2147483648.0) {
        dVar7 = -2147483648.0;
      }
      fVar3 = (float)local_30;
      if (0.99999994 <= (float)local_30) {
        fVar3 = fVar4;
      }
      if (fVar3 <= 0.0) {
        fVar3 = fVar6;
      }
      fVar3 = fVar3 + 0.5 + -0.5;
      if (0.99999994 <= fVar3) {
        fVar3 = 0.99999994;
      }
      if (fVar3 <= 0.0) {
        fVar3 = fVar6;
      }
      if (param_2[0xc] == '\x02') {
        param_2[0xc] = '\x01';
      }
      *(int *)(param_2 + 0x10) = (int)dVar7;
      *(float *)(param_2 + 0x14) = fVar3;
      goto LAB_14758a53d;
    }
    dVar7 = 0.0;
    dVar5 = dVar7;
    if (*(char *)(param_1 + 0xf0) == '\x01') {
      dVar7 = *(double *)(param_1 + 0xe8);
      dVar5 = dVar7;
    }
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar7;
  auVar9 = roundpd(auVar8,auVar8,1);
  dVar7 = auVar9._0_8_;
  dVar5 = dVar5 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  fVar3 = (float)dVar5;
  if (0.99999994 <= (float)dVar5) {
    fVar3 = 0.99999994;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar3 = fVar3 + 0.5 + -0.5;
  if (0.99999994 <= fVar3) {
    fVar3 = 0.99999994;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *param_2 = '\x01';
  *(int *)(param_2 + 4) = (int)dVar7;
  *(float *)(param_2 + 8) = fVar3;
  param_2[0xc] = '\x01';
  *(int *)(param_2 + 0x10) = (int)dVar7;
  *(float *)(param_2 + 0x14) = fVar3;
LAB_14758a53d:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14758a66e FUN_14758a66e body=175 status=ok
// SIG undefined FUN_14758a66e(void)

int * FUN_14758a66e(longlong param_1,int *param_2,undefined8 param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_140108b92(param_1 + 0x70,param_3,&local_20);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_20;
  auVar4 = roundpd(auVar4,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar2 = local_20 - dVar3;
  if (2147483647.0 <= dVar3) {
    dVar3 = 2147483647.0;
  }
  if (dVar3 <= -2147483648.0) {
    dVar3 = -2147483648.0;
  }
  fVar1 = (float)dVar2;
  if (0.99999994 <= (float)dVar2) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + 0.5 + -0.5;
  *param_2 = (int)dVar3;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_2[1] = (int)fVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758a71e FUN_14758a71e body=507 status=ok
// SIG undefined FUN_14758a71e(void)

undefined8 *
FUN_14758a71e(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  double dVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  double local_90;
  double local_88;
  char local_70 [4];
  int iStack_6c;
  char local_68;
  int iStack_64;
  undefined8 local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1 = param_1 + 0x70;
  local_98 = *param_5;
  dVar1 = (double)(float)((ulonglong)param_3 >> 0x20) + (double)(int)param_3;
  FUN_14752b840(param_1,&local_60,dVar1);
  if (local_58 == '\x01') {
    *(undefined1 *)(param_2 + 1) = 1;
    *param_2 = local_60;
  }
  else {
    iVar2 = FUN_14752b2a4(param_1,param_4);
    FUN_14752b362(param_1,local_70,iVar2);
    if (((iVar2 != 0) && (local_70[0] != '\x02')) && (local_68 != '\x02')) {
      FUN_14752bc74(param_1,&local_90,iStack_6c,iStack_64);
      dVar4 = local_88 - local_90;
      if (((dVar4 != 0.0) || (NAN(dVar4))) && ((local_88 < dVar1 || (dVar1 < local_90)))) {
        dVar6 = (dVar1 - local_90) / dVar4;
        iVar2 = (int)((ulonglong)(longlong)ROUND(dVar6 + dVar6 + -0.5) >> 1);
        auVar5._0_8_ = (double)iVar2 * (double)(iStack_64 - iStack_6c);
        auVar5._8_8_ = 0;
        auVar5 = roundpd(auVar5,auVar5,1);
        dVar6 = auVar5._0_8_;
        if (2147483647.0 <= dVar6) {
          dVar6 = 2147483647.0;
        }
        if (dVar6 <= -2147483648.0) {
          dVar6 = -2147483648.0;
        }
        fVar3 = (float)((ulonglong)param_4 >> 0x20) + 0.0;
        auVar5 = roundss(ZEXT416(0),ZEXT416((uint)fVar3),9);
        local_98 = *param_5;
        FUN_14752b840(param_1,param_2,dVar1 - (double)iVar2 * dVar4,
                      CONCAT44(fVar3 - auVar5._0_4_,
                               ((int)ROUND(fVar3 + fVar3 + -0.5) >> 1) + (int)param_4 + (int)dVar6))
        ;
        goto LAB_14758a79d;
      }
    }
    *(undefined1 *)(param_2 + 1) = 0;
  }
LAB_14758a79d:
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758a96c FUN_14758a96c body=6 status=ok
// SIG undefined FUN_14758a96c(void)

byte FUN_14758a96c(longlong param_1)

{
  return *(byte *)(param_1 + 0x68) & 1;
}



// FUNCTION 14758a972 FUN_14758a972 body=8 status=ok
// SIG undefined FUN_14758a972(void)

undefined4 * FUN_14758a972(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 14758a97a FUN_14758a97a body=8 status=ok
// SIG undefined FUN_14758a97a(void)

undefined4 * FUN_14758a97a(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 14758a982 FUN_14758a982 body=8 status=ok
// SIG undefined FUN_14758a982(void)

undefined4 * FUN_14758a982(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 14758aae8 FUN_14758aae8 body=790 status=ok
// SIG undefined FUN_14758aae8(void)

undefined8 FUN_14758aae8(double *param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  char cVar9;
  double dVar10;
  undefined1 auStack_58 [32];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_38,8);
  if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
    local_38 = 0.0;
    FUN_144aa029c(*param_3,&local_38);
    dVar10 = local_38;
LAB_14758ab44:
    *param_1 = (double)(~-(ulonglong)(1e-08 < ABS(dVar10)) & 0xfff9000000000000 |
                       (ulonglong)dVar10 & -(ulonglong)(1e-08 < ABS(dVar10)));
  }
  else {
    uVar3 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_38,4);
    if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
      local_38 = (double)((ulonglong)local_38 & 0xffffffff00000000);
      FUN_144aa025c(*param_3,&local_38);
      dVar10 = (double)local_38._0_4_;
      goto LAB_14758ab44;
    }
    uVar3 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_38,1);
    if (((uVar3 == ((ulonglong)local_38 & 0xffffffff)) ||
        (uVar3 = *(ulonglong *)(param_2 + 0xc), FUN_1401a700c(&local_38,0x15),
        uVar3 == ((ulonglong)local_38 & 0xffffffff))) ||
       (uVar3 = *(ulonglong *)(param_2 + 0xc), FUN_1401a700c(&local_38,2),
       uVar3 == ((ulonglong)local_38 & 0xffffffff))) {
      local_38 = (double)((ulonglong)local_38 & 0xffffffff00000000);
      FUN_144aa02de(*param_3,&local_38);
      dVar10 = (double)(int)local_38._0_4_;
      goto LAB_14758ab44;
    }
    uVar3 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_38,0x16);
    if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
      local_38 = (double)((ulonglong)local_38 & 0xffffffffffff0000);
      FUN_1458ec23e(*param_3,&local_38);
      iVar6 = (int)local_38._0_2_;
LAB_14758ad14:
      dVar10 = (double)iVar6;
      goto LAB_14758ab44;
    }
    uVar3 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_38,0x17);
    if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
      local_38 = (double)((ulonglong)local_38 & 0xffffffffffffff00);
      plVar4 = *(longlong **)(*param_3 + 8);
      puVar5 = (ulonglong *)plVar4[1];
      pcVar1 = (char *)*puVar5 + 1;
      if ((char *)puVar5[1] < pcVar1) {
        (**(code **)(*plVar4 + 0x170))(plVar4,&local_38,1);
        cVar9 = local_38._0_1_;
      }
      else {
        cVar9 = *(char *)*puVar5;
        *puVar5 = (ulonglong)pcVar1;
      }
      iVar6 = (int)cVar9;
      goto LAB_14758ad14;
    }
    uVar3 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_38,0x19);
    if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
      local_38 = (double)((ulonglong)local_38 & 0xffffffff00000000);
      FUN_144afef32(*param_3,&local_38);
      if (local_38._0_4_ == 0.0) goto LAB_14758adee;
      dVar10 = (double)((ulonglong)local_38 & 0xffffffff);
    }
    else {
      uVar3 = *(ulonglong *)(param_2 + 0xc);
      FUN_1401a700c(&local_38,0x1a);
      if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
        local_38 = (double)((ulonglong)local_38 & 0xffffffffffff0000);
        FUN_144afeef0(*param_3,&local_38);
        uVar7 = SUB84(local_38,0) & 0xffff;
        if (local_38._0_2_ != 0) {
LAB_14758ad5b:
          dVar10 = (double)uVar7;
          goto LAB_14758adf6;
        }
      }
      else {
        uVar3 = *(ulonglong *)(param_2 + 0xc);
        FUN_1401a700c(&local_38,1);
        if (uVar3 != ((ulonglong)local_38 & 0xffffffff)) {
          uVar8 = 0;
          goto LAB_14758ab73;
        }
        local_38 = (double)((ulonglong)local_38 & 0xffffffffffffff00);
        plVar4 = *(longlong **)(*param_3 + 8);
        puVar5 = (ulonglong *)plVar4[1];
        pbVar2 = (byte *)*puVar5 + 1;
        if ((byte *)puVar5[1] < pbVar2) {
          (**(code **)(*plVar4 + 0x170))(plVar4,&local_38,1);
          uVar7 = SUB84(local_38,0) & 0xff;
        }
        else {
          uVar7 = (uint)*(byte *)*puVar5;
          *puVar5 = (ulonglong)pbVar2;
        }
        if ((char)uVar7 != '\0') goto LAB_14758ad5b;
      }
LAB_14758adee:
      dVar10 = -NAN;
    }
LAB_14758adf6:
    *param_1 = dVar10;
  }
  uVar8 = 1;
LAB_14758ab73:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14758ae00 FUN_14758ae00 body=481 status=ok
// SIG undefined FUN_14758ae00(void)

undefined8
FUN_14758ae00(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_60 [8];
  ulonglong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = ((byte)(*param_1 >> 0x30) & 7) + 1;
  if ((uint)(*param_1 >> 0x33) < 0x1fff) {
    cVar1 = '\0';
  }
  uVar2 = FUN_147523250();
  FUN_1414aa4be(uVar2,local_60,cVar1);
  FUN_1400021e4(local_60,&local_58);
  iVar3 = local_50 + -1;
  if (local_50 == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(param_2,local_58,iVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  switch(cVar1) {
  case '\0':
    local_58 = *param_1;
    uVar2 = FUN_14633aaf6();
    break;
  case '\x01':
    local_58 = *param_1 & 0xffffffffffff;
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    uVar2 = FUN_14633ab8c();
    break;
  case '\x02':
    local_58 = CONCAT44(local_58._4_4_,(int)*param_1);
    uVar2 = FUN_14633aa60();
    break;
  case '\x03':
    local_58._0_6_ = (undefined6)*param_1;
    uVar2 = FUN_14633ae7a();
    break;
  case '\x04':
    local_58 = CONCAT44(local_58._4_4_,(int)*param_1);
    uVar2 = FUN_14633ac22();
    break;
  case '\x05':
    local_58 = CONCAT44(local_58._4_4_,(int)*param_1);
    uVar2 = FUN_14633acb8();
    break;
  case '\x06':
    local_58 = CONCAT44(local_58._4_4_,(int)*param_1);
    uVar2 = FUN_14633ad4e();
    break;
  case '\a':
    local_58 = CONCAT44(local_58._4_4_,(int)*param_1);
    uVar2 = FUN_14633ade4();
    break;
  default:
    uVar2 = 0;
    goto LAB_14758aea5;
  }
  local_70 = 1;
  local_78 = param_6;
  local_80 = param_5;
  local_88 = param_4;
  FUN_1446df618(uVar2,param_2,&local_58,0);
  uVar2 = 1;
LAB_14758aea5:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14758afe2 FUN_14758afe2 body=1394 status=ok
// SIG undefined FUN_14758afe2(void)

ulonglong FUN_14758afe2(ulonglong *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  code *pcVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  undefined1 auStack_8d8 [32];
  undefined4 local_8b8;
  undefined8 local_8b0;
  code **local_8a8;
  undefined1 local_8a0;
  undefined1 local_891;
  code *local_890;
  undefined1 *local_888;
  undefined8 local_880;
  wchar_t *local_878;
  wchar_t *local_870;
  undefined1 *local_868;
  char local_860;
  wchar_t local_858 [1035];
  undefined1 local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  local_878 = local_858;
  local_860 = '\0';
  local_868 = local_42;
  pwVar9 = (wchar_t *)*param_2;
  local_870 = local_878;
  iVar3 = wcsncmp(L"EMovieSceneTimeWarpType::",pwVar9,0x19);
  if (iVar3 != 0) {
switchD_14758b15a_default:
    uVar8 = 0;
    goto LAB_14758b052;
  }
  pwVar9 = pwVar9 + 0x19;
  *param_2 = (longlong)pwVar9;
  builtin_wcsncpy(local_858 + 0x10,L"arpType::",9);
  builtin_wcsncpy(local_858 + 8,L"eneTimeW",8);
  builtin_wcsncpy(local_858,L"EMovieSc",8);
  local_870 = local_858 + 0x19;
  uVar8 = 0;
  lVar4 = FUN_1409a0110(pwVar9,&local_878,0);
  if (lVar4 == 0) goto LAB_14758b052;
  *param_2 = lVar4;
  uVar8 = 0;
  FUN_1446f82e2(&local_890,(ulonglong)((longlong)local_870 - (longlong)local_878) >> 1,local_878,0);
  pcVar1 = local_890;
  if (local_890 == (code *)0x0) goto LAB_14758b052;
  uVar5 = FUN_147523250();
  uVar8 = 0;
  uVar6 = FUN_141715768(uVar5,pcVar1,0);
  if (uVar6 == 0xffffffffffffffff) goto LAB_14758b052;
  switch(uVar6 & 0xff) {
  case 0:
    local_880 = 1.0;
    uVar5 = FUN_14633aaf6();
    local_888 = &local_891;
    local_890 = FUN_1432e1546;
    local_8b0 = param_5;
    local_8a0 = 1;
    local_8b8 = param_3;
    local_8a8 = &local_890;
    lVar4 = FUN_1408de6dc(uVar5,*param_2,&local_880,param_4);
    uVar8 = CONCAT71((int7)((ulonglong)&local_880 >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      *param_2 = lVar4;
      *param_1 = ~-(ulonglong)(1e-08 < ABS(local_880)) & 0xfff9000000000000 |
                 (ulonglong)local_880 & -(ulonglong)(1e-08 < ABS(local_880));
    }
    goto LAB_14758b052;
  case 1:
    local_880 = 0.0;
    uVar5 = FUN_14633ab8c();
    local_888 = &local_891;
    local_890 = FUN_1432e1596;
    local_8b0 = param_5;
    local_8a0 = 1;
    local_8b8 = param_3;
    local_8a8 = &local_890;
    lVar4 = FUN_1408de6dc(uVar5,*param_2,&local_880,param_4);
    dVar2 = local_880;
    uVar8 = CONCAT71((int7)((ulonglong)&local_880 >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      *param_2 = lVar4;
      if (local_880 != 0.0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(local_880);
        }
        *(double *)((longlong)dVar2 + 0x58) = dVar2;
      }
      *param_1 = (ulonglong)dVar2 | 0xfff8000000000000;
    }
    goto LAB_14758b052;
  case 2:
    local_880 = (double)((ulonglong)local_880._4_4_ << 0x20);
    uVar5 = FUN_14633aa60();
    local_888 = &local_891;
    local_890 = FUN_1432e15e6;
    local_8b0 = param_5;
    local_8a0 = 1;
    local_8b8 = param_3;
    local_8a8 = &local_890;
    lVar4 = FUN_1408de6dc(uVar5,*param_2,&local_880,param_4);
    uVar8 = CONCAT71((int7)((ulonglong)&local_880 >> 8),lVar4 != 0);
    if (lVar4 == 0) goto LAB_14758b052;
    *param_2 = lVar4;
    uVar6 = (ulonglong)local_880 & 0xffffffff;
    uVar7 = 0xfff9000000000000;
    break;
  case 3:
    uVar8 = (ulonglong)local_880 >> 0x28;
    local_880 = (double)CONCAT35((uint3)uVar8 & 0xffff00,0x100ea60);
    uVar5 = FUN_14633ae7a();
    local_888 = &local_891;
    local_890 = FUN_1432e1636;
    local_8b0 = param_5;
    local_8a0 = 1;
    local_8b8 = param_3;
    local_8a8 = &local_890;
    lVar4 = FUN_1408de6dc(uVar5,*param_2,&local_880,param_4);
    uVar8 = CONCAT71((int7)((ulonglong)&local_880 >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      *param_2 = lVar4;
      *param_1 = (ulonglong)local_880 & 0xffffffffffff | 0xfffa000000000000;
    }
    goto LAB_14758b052;
  case 4:
    local_880 = (double)((ulonglong)local_880._4_4_ << 0x20);
    uVar5 = FUN_14633ac22();
    local_888 = &local_891;
    local_890 = FUN_1432e1686;
    local_8b0 = param_5;
    local_8a0 = 1;
    local_8b8 = param_3;
    local_8a8 = &local_890;
    lVar4 = FUN_1408de6dc(uVar5,*param_2,&local_880,param_4);
    uVar8 = CONCAT71((int7)((ulonglong)&local_880 >> 8),lVar4 != 0);
    if (lVar4 == 0) goto LAB_14758b052;
    *param_2 = lVar4;
    uVar6 = (ulonglong)local_880 & 0xffffffff;
    uVar7 = 0xfffb000000000000;
    break;
  case 5:
    local_880 = (double)((ulonglong)local_880._4_4_ << 0x20);
    uVar5 = FUN_14633acb8();
    local_888 = &local_891;
    local_890 = FUN_1432e16d6;
    local_8b0 = param_5;
    local_8a0 = 1;
    local_8b8 = param_3;
    local_8a8 = &local_890;
    lVar4 = FUN_1408de6dc(uVar5,*param_2,&local_880,param_4);
    uVar8 = CONCAT71((int7)((ulonglong)&local_880 >> 8),lVar4 != 0);
    if (lVar4 == 0) goto LAB_14758b052;
    *param_2 = lVar4;
    uVar6 = (ulonglong)local_880 & 0xffffffff;
    uVar7 = 0xfffc000000000000;
    break;
  case 6:
    local_880 = (double)CONCAT44(local_880._4_4_,0x3f800000);
    uVar5 = FUN_14633ad4e();
    local_888 = &local_891;
    local_890 = FUN_1432e1726;
    local_8b0 = param_5;
    local_8a0 = 1;
    local_8b8 = param_3;
    local_8a8 = &local_890;
    lVar4 = FUN_1408de6dc(uVar5,*param_2,&local_880,param_4);
    uVar8 = CONCAT71((int7)((ulonglong)&local_880 >> 8),lVar4 != 0);
    if (lVar4 == 0) goto LAB_14758b052;
    *param_2 = lVar4;
    uVar6 = (ulonglong)local_880 & 0xffffffff;
    uVar7 = 0xfffd000000000000;
    break;
  case 7:
    local_880 = (double)CONCAT44(local_880._4_4_,0x3f800000);
    uVar5 = FUN_14633ade4();
    local_888 = &local_891;
    local_890 = FUN_1432e1776;
    local_8b0 = param_5;
    local_8a0 = 1;
    local_8b8 = param_3;
    local_8a8 = &local_890;
    lVar4 = FUN_1408de6dc(uVar5,*param_2,&local_880,param_4);
    uVar8 = CONCAT71((int7)((ulonglong)&local_880 >> 8),lVar4 != 0);
    if (lVar4 == 0) goto LAB_14758b052;
    *param_2 = lVar4;
    uVar6 = (ulonglong)local_880 & 0xffffffff;
    uVar7 = 0xfffe000000000000;
    break;
  default:
    goto switchD_14758b15a_default;
  }
  *param_1 = uVar7 | uVar6;
LAB_14758b052:
  if (local_860 == '\x01') {
    FUN_1400020a8(local_878);
  }
  if ((local_40 ^ (ulonglong)auStack_8d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14758b56e FUN_14758b56e body=45 status=ok
// SIG undefined FUN_14758b56e(void)

int * FUN_14758b56e(int *param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  
  uVar1 = (int)param_3 >> 0x1f;
  *param_2 = (int)param_3 -
             ((int)((longlong)((ulonglong)uVar1 << 0x20 | param_3 & 0xffffffff) / (longlong)*param_1
                   ) + uVar1) * *param_1;
  param_2[1] = (int)(param_3 >> 0x20);
  return param_2;
}



// FUNCTION 14758b59c FUN_14758b59c body=48 status=ok
// SIG undefined FUN_14758b59c(void)

int * FUN_14758b59c(int *param_1,int *param_2,ulonglong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  uVar3 = (int)param_3 >> 0x1f;
  iVar2 = (int)((longlong)((ulonglong)uVar3 << 0x20 | param_3 & 0xffffffff) / (longlong)iVar1) +
          uVar3;
  *param_4 = iVar2;
  *param_2 = (int)param_3 - iVar2 * iVar1;
  param_2[1] = (int)(param_3 >> 0x20);
  return param_2;
}



// FUNCTION 14758b5cc FUN_14758b5cc body=389 status=ok
// SIG undefined FUN_14758b5cc(void)

undefined4 * FUN_14758b5cc(uint *param_1,undefined4 *param_2,char *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  uVar1 = *param_1;
  cVar3 = FUN_140388ee0(param_3);
  if (cVar3 != '\0') {
    *(undefined1 *)param_2 = 1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 1) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    return param_2;
  }
  if ((*param_3 == '\x02') || (cVar3 = param_3[0xc], cVar3 == '\x02')) {
LAB_14758b61f:
    *(undefined1 *)param_2 = 1;
    *(undefined8 *)(param_2 + 1) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    param_2[4] = uVar1;
    param_2[5] = 0;
  }
  else {
    uVar5 = *(ulonglong *)(param_3 + 4);
    uVar2 = *(ulonglong *)(param_3 + 0x10);
    uVar6 = *param_1;
    uVar7 = (int)uVar5 >> 0x1f;
    iVar8 = (int)((longlong)((ulonglong)uVar7 << 0x20 | uVar5 & 0xffffffff) / (longlong)(int)uVar6)
            + uVar7;
    uVar7 = (int)uVar5 - iVar8 * uVar6;
    uVar10 = (int)uVar2 >> 0x1f;
    iVar4 = (int)((longlong)((ulonglong)uVar10 << 0x20 | uVar2 & 0xffffffff) / (longlong)(int)uVar6)
            + uVar10;
    uVar6 = (int)uVar2 - uVar6 * iVar4;
    bVar11 = uVar6 == 0;
    bVar12 = (uVar2 & 0x7fffffff00000000) == 0;
    bVar13 = cVar3 == '\0';
    if ((bVar13 && bVar12) && bVar11) {
      uVar6 = uVar1;
    }
    uVar9 = 0;
    if ((!bVar13 || !bVar12) || !bVar11) {
      uVar9 = uVar2 >> 0x20;
    }
    iVar4 = iVar4 - (uint)((bVar13 && bVar12) && bVar11);
    if (iVar8 == iVar4) {
      *param_2 = *(undefined4 *)param_3;
      *(ulonglong *)(param_2 + 1) = (ulonglong)uVar7 | uVar5 & 0xffffffff00000000;
      *(char *)(param_2 + 3) = cVar3;
      *(undefined2 *)((longlong)param_2 + 0xd) = *(undefined2 *)(param_3 + 0xd);
      *(char *)((longlong)param_2 + 0xf) = param_3[0xf];
      uVar5 = (ulonglong)uVar6 | uVar9 << 0x20;
    }
    else {
      if (((iVar8 - iVar4 < -1) || ((int)uVar7 < (int)uVar6)) ||
         ((uVar6 == uVar7 && ((float)(uVar5 >> 0x20) < (float)uVar9)))) goto LAB_14758b61f;
      uVar5 = (ulonglong)uVar6 | uVar9 << 0x20;
      *(undefined1 *)param_2 = 1;
      *(undefined8 *)(param_2 + 1) = 0;
      *(char *)(param_2 + 3) = cVar3;
      *(undefined2 *)((longlong)param_2 + 0xd) = *(undefined2 *)(param_3 + 0xd);
      *(char *)((longlong)param_2 + 0xf) = param_3[0xf];
    }
    *(ulonglong *)(param_2 + 4) = uVar5;
  }
  return param_2;
}



// FUNCTION 14758b752 FUN_14758b752 body=292 status=ok
// SIG undefined FUN_14758b752(void)

int * FUN_14758b752(int *param_1,int *param_2,undefined8 param_3,ulonglong param_4,byte *param_5)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  iVar4 = (int)param_3;
  if ((iVar4 < 0) || (iVar5 = *param_1, iVar5 <= iVar4)) {
    if ((*param_5 & 8) == 0) {
      uVar2 = 0;
      goto LAB_14758b865;
    }
    iVar5 = *param_1;
  }
  uVar3 = (int)param_4 >> 0x1f;
  fVar6 = (float)(param_4 >> 0x20);
  fVar9 = (float)((ulonglong)param_3 >> 0x20) - fVar6;
  auVar8 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),1);
  fVar9 = (fVar9 - auVar8._0_4_) + 0.5 + -0.5;
  auVar10 = ZEXT416((uint)fVar9);
  if (0.99999994 <= fVar9) {
    auVar10 = ZEXT416(0x3f7fffff);
  }
  if (auVar10._0_4_ <= 0.0) {
    auVar11._12_4_ = 0;
    auVar11._0_12_ = auVar10._4_12_;
    auVar10 = auVar11 << 0x20;
  }
  fVar6 = fVar6 + 0.0;
  auVar11 = roundss(ZEXT416(0),ZEXT416((uint)fVar6),9);
  fVar9 = (fVar6 - auVar11._0_4_) + 0.5 + -0.5;
  auVar11 = ZEXT416((uint)fVar9);
  if (0.99999994 <= fVar9) {
    auVar11 = ZEXT416(0x3f7fffff);
  }
  if (auVar11._0_4_ <= 0.0) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = auVar11._4_12_;
    auVar11 = auVar1 << 0x20;
  }
  auVar7._4_12_ = auVar11._4_12_;
  auVar7._0_4_ = auVar11._0_4_ + auVar10._0_4_;
  auVar10 = roundss(ZEXT416(0),auVar7,9);
  fVar9 = (auVar7._0_4_ - auVar10._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar9) {
    fVar9 = 0.99999994;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  *param_2 = (int)auVar8._0_4_ + iVar4 + ((int)ROUND(fVar6 + fVar6 + -0.5) >> 1) +
             ((int)((longlong)((ulonglong)uVar3 << 0x20 | param_4 & 0xffffffff) / (longlong)iVar5) +
             uVar3) * iVar5 + ((int)ROUND(auVar7._0_4_ + auVar7._0_4_ + -0.5) >> 1);
  param_2[1] = (int)fVar9;
  uVar2 = 1;
LAB_14758b865:
  *(undefined1 *)(param_2 + 2) = uVar2;
  return param_2;
}



// FUNCTION 14758b876 FUN_14758b876 body=664 status=ok
// SIG undefined FUN_14758b876(void)

undefined8
FUN_14758b876(int *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,undefined8 *param_5
             )

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  ulonglong local_90;
  int local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *param_1;
  iVar14 = (int)param_2;
  iVar8 = (int)((longlong)((ulonglong)(uint)(iVar14 >> 0x1f) << 0x20 | param_2 & 0xffffffff) /
               (longlong)iVar1) + (iVar14 >> 0x1f);
  uVar11 = (int)param_3 >> 0x1f;
  iVar13 = (int)((longlong)((ulonglong)uVar11 << 0x20 | param_3 & 0xffffffff) / (longlong)iVar1) +
           uVar11;
  iVar12 = (int)param_3 - iVar13 * iVar1;
  uVar11 = (int)param_4 >> 0x1f;
  iVar7 = (int)((longlong)((ulonglong)uVar11 << 0x20 | param_4 & 0xffffffff) / (longlong)iVar1) +
          uVar11;
  local_98 = (int)param_4 - iVar7 * iVar1;
  if ((iVar7 < iVar13) ||
     ((uVar10 = param_3, iVar9 = iVar7, iVar6 = iVar13, iVar2 = iVar12, iVar13 == iVar7 &&
      ((local_98 < iVar12 ||
       ((iVar9 = iVar13, local_98 == iVar12 && ((float)(param_4 >> 0x20) < (float)(param_3 >> 0x20))
        ))))))) {
    uVar10 = param_4;
    param_4 = param_3;
    iVar9 = iVar13;
    iVar6 = iVar7;
    iVar2 = local_98;
    local_98 = iVar12;
  }
  local_94 = iVar14 - iVar8 * iVar1;
  fVar5 = (float)(param_2 >> 0x20);
  fVar17 = fVar5 + 0.0;
  auVar16 = roundss(ZEXT416(0),ZEXT416((uint)fVar17),9);
  iVar14 = ((int)ROUND(fVar17 + fVar17 + -0.5) >> 1) + iVar14;
  fVar17 = (fVar17 - auVar16._0_4_) + 0.5 + -0.5;
  auVar16 = ZEXT416((uint)fVar17);
  if (0.99999994 <= fVar17) {
    auVar16 = ZEXT416(0x3f7fffff);
  }
  if (auVar16._0_4_ <= 0.0) {
    auVar15._12_4_ = 0;
    auVar15._0_12_ = auVar16._4_12_;
    auVar16 = auVar15 << 0x20;
  }
  if (((iVar8 != iVar6) || (iVar2 < local_94)) ||
     ((local_94 == iVar2 && ((float)(uVar10 >> 0x20) <= fVar5)))) {
    local_84 = auVar16._0_4_;
    local_88 = iVar14;
    cVar3 = (*(code *)*param_5)(param_5[1]);
    if (cVar3 == '\0') goto LAB_14758ba06;
  }
  local_90 = param_4;
  do {
    iVar8 = iVar8 + 1;
    fVar17 = auVar16._0_4_;
    if (iVar9 <= iVar8) {
      if (iVar13 != iVar7) {
        if ((local_94 < local_98) || ((local_94 == local_98 && (fVar5 < (float)(local_90 >> 0x20))))
           ) {
          auVar18._0_4_ = fVar17 + 0.0;
          auVar18._4_12_ = auVar16._4_12_;
          local_88 = iVar14 + iVar1 + ((int)ROUND(auVar18._0_4_ + auVar18._0_4_ + -0.5) >> 1);
          auVar16 = roundss(ZEXT416(0),auVar18,9);
          local_84 = auVar18._0_4_ - auVar16._0_4_;
          cVar3 = (*(code *)*param_5)(param_5[1]);
          if (cVar3 == '\0') break;
        }
      }
      uVar4 = 1;
      goto LAB_14758ba08;
    }
    iVar14 = iVar14 + iVar1 + ((int)ROUND(fVar17 + fVar17 + -0.5) >> 1);
    auVar15 = roundss(ZEXT416(0),auVar16,9);
    auVar16._0_4_ = fVar17 - auVar15._0_4_;
    local_88 = iVar14;
    local_84 = auVar16._0_4_;
    cVar3 = (*(code *)*param_5)(param_5[1],&local_88);
  } while (cVar3 != '\0');
LAB_14758ba06:
  uVar4 = 0;
LAB_14758ba08:
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14758bb10 FUN_14758bb10 body=315 status=ok
// SIG undefined FUN_14758bb10(void)

ulonglong FUN_14758bb10(int *param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  int iVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_98 [32];
  int local_78 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = -0x80000000;
  if (*param_2 != '\x02') {
    iVar6 = *(int *)(param_2 + 4);
  }
  iVar5 = 0x7fffffff;
  if (param_2[0xc] != '\x02') {
    iVar5 = *(int *)(param_2 + 0x10);
  }
  iVar8 = iVar6 / *param_1 + (iVar6 >> 0x1f);
  iVar4 = iVar5 / *param_1;
  iVar2 = iVar4 + (iVar5 >> 0x1f);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (iVar8 <= iVar2) {
    uVar7 = 0;
    do {
      auVar10._0_8_ = (double)iVar8 * (double)*param_1;
      auVar10._8_8_ = 0;
      auVar10 = roundpd(auVar10,auVar10,1);
      dVar9 = auVar10._0_8_;
      if (2147483647.0 <= dVar9) {
        dVar9 = 2147483647.0;
      }
      if (dVar9 <= -2147483648.0) {
        dVar9 = -2147483648.0;
      }
      if (iVar6 <= (int)dVar9) {
        local_78[1] = 0;
        local_78[0] = (int)dVar9;
        cVar3 = (*(code *)*param_3)(param_3[1],local_78);
        if (cVar3 == '\0') break;
      }
      iVar1 = iVar8 + 1;
      uVar7 = (ulonglong)(iVar2 <= iVar8);
      iVar8 = iVar1;
    } while ((iVar5 >> 0x1f) + iVar4 + 1 != iVar1);
  }
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14758bc4c FUN_14758bc4c body=71 status=ok
// SIG undefined FUN_14758bc4c(void)

void FUN_14758bc4c(int *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)((ulonglong)param_3 >> 0x20);
  iVar2 = (int)param_3;
  if ((iVar2 < 0) || ((iVar2 == 0 && (fVar3 < 0.0)))) {
    param_2[0] = 0;
    param_2[1] = 0;
    return;
  }
  iVar1 = *param_1;
  if ((iVar2 <= iVar1) && ((iVar1 != iVar2 || (fVar3 <= 0.0)))) {
    *(undefined8 *)param_2 = param_3;
    return;
  }
  *param_2 = iVar1;
  param_2[1] = 0;
  return;
}



// FUNCTION 14758bc94 FUN_14758bc94 body=216 status=ok
// SIG undefined FUN_14758bc94(void)

void FUN_14758bc94(int *param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 8);
  *param_2 = *(undefined8 *)param_3;
  param_2[1] = uVar2;
  if (*param_3 != '\x02') {
    iVar4 = (int)*(undefined8 *)(param_3 + 4);
    uVar3 = 0;
    if (iVar4 < 0) {
LAB_14758bcd8:
      iVar6 = 0;
    }
    else {
      fVar5 = (float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
      if ((iVar4 == 0) && (fVar5 < 0.0)) goto LAB_14758bcd8;
      iVar1 = *param_1;
      iVar6 = iVar1;
      if ((iVar4 <= iVar1) &&
         (iVar6 = *(int *)(param_3 + 4), uVar3 = *(undefined4 *)(param_3 + 8),
         iVar1 == iVar4 && 0.0 < fVar5)) {
        iVar6 = iVar1;
        uVar3 = 0;
      }
    }
    *(int *)((longlong)param_2 + 4) = iVar6;
    *(undefined4 *)(param_2 + 1) = uVar3;
  }
  if (param_3[0xc] == '\x02') {
    return;
  }
  iVar4 = (int)*(undefined8 *)(param_3 + 0x10);
  uVar3 = 0;
  if (-1 < iVar4) {
    fVar5 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    if ((iVar4 != 0) || (0.0 <= fVar5)) {
      iVar6 = *param_1;
      if ((iVar4 <= iVar6) && (uVar3 = 0, iVar6 != iVar4 || fVar5 <= 0.0)) {
        iVar6 = *(int *)(param_3 + 0x10);
        uVar3 = *(undefined4 *)(param_3 + 0x14);
      }
      goto LAB_14758bd17;
    }
  }
  iVar6 = 0;
LAB_14758bd17:
  *(int *)(param_2 + 2) = iVar6;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  return;
}



// FUNCTION 14758bd6c FUN_14758bd6c body=365 status=ok
// SIG undefined FUN_14758bd6c(void)

undefined8 * FUN_14758bd6c(float *param_1,undefined8 *param_2,char *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 0;
  local_58 = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (double)*param_1;
  auVar4 = roundpd(auVar4,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar2 = (double)*param_1 - dVar3;
  if (2147483647.0 <= dVar3) {
    dVar3 = 2147483647.0;
  }
  if (dVar3 <= -2147483648.0) {
    dVar3 = -2147483648.0;
  }
  fVar5 = (float)dVar2;
  if (0.99999994 <= fVar5) {
    fVar5 = 0.99999994;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar5 = fVar5 + 0.5 + -0.5;
  if (0.99999994 <= fVar5) {
    fVar5 = 0.99999994;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if ((*param_3 != '\x02') && (param_3[0xc] != '\x02')) {
    FUN_140406dda(param_1,&local_60,*(undefined8 *)(param_3 + 4),&local_54);
    FUN_140406dda(param_1,&local_68,*(undefined8 *)(param_3 + 0x10),&local_58);
    if (local_54 == local_58) {
      uVar1 = *(undefined8 *)(param_3 + 8);
      *param_2 = *(undefined8 *)param_3;
      param_2[1] = uVar1;
      *(undefined8 *)((longlong)param_2 + 4) = local_60;
LAB_14758be50:
      param_2[2] = local_68;
      goto LAB_14758be80;
    }
    if (-2 < local_54 - local_58) {
      if (((int)local_68 <= (int)local_60) &&
         (((int)local_68 != (int)local_60 ||
          ((float)((ulonglong)local_68 >> 0x20) <= (float)((ulonglong)local_60 >> 0x20))))) {
        *(undefined1 *)param_2 = 1;
        *(undefined8 *)((longlong)param_2 + 4) = 0;
        *(undefined1 *)((longlong)param_2 + 0xc) = 0;
        goto LAB_14758be50;
      }
    }
  }
  *(undefined1 *)param_2 = 1;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  *(int *)(param_2 + 2) = (int)dVar3;
  *(float *)((longlong)param_2 + 0x14) = fVar5;
LAB_14758be80:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758beda FUN_14758beda body=402 status=ok
// SIG undefined FUN_14758beda(void)

int * FUN_14758beda(float *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auStack_88 [44];
  undefined1 local_5c [8];
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = (int)param_3;
  if (-1 < iVar1) {
    dVar5 = (double)*param_1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar5;
    auVar6 = roundpd(auVar6,auVar6,1);
    dVar4 = auVar6._0_8_;
    dVar8 = dVar4;
    if (2147483647.0 <= dVar4) {
      dVar8 = 2147483647.0;
    }
    if (dVar8 <= -2147483648.0) {
      dVar8 = -2147483648.0;
    }
    fVar2 = (float)((ulonglong)param_3 >> 0x20);
    if (iVar1 < (int)dVar8) {
LAB_14758bf49:
      local_54 = 0;
      FUN_140406dda(param_1,local_5c,param_4,&local_54);
      dVar5 = (double)FUN_144719204((double)fVar2 + (double)iVar1,dVar5);
      dVar5 = (double)((float)local_54 * *param_1) + dVar5;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar5;
      auVar6 = roundpd(auVar7,auVar7,1);
      dVar8 = auVar6._0_8_;
      dVar5 = dVar5 - dVar8;
      if (2147483647.0 <= dVar8) {
        dVar8 = 2147483647.0;
      }
      if (dVar8 <= -2147483648.0) {
        dVar8 = -2147483648.0;
      }
      fVar2 = (float)dVar5;
      if (0.99999994 <= fVar2) {
        fVar2 = 0.99999994;
      }
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      fVar2 = fVar2 + 0.5 + -0.5;
      if (0.99999994 <= fVar2) {
        fVar2 = 0.99999994;
      }
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      *param_2 = (int)dVar8;
      param_2[1] = (int)fVar2;
      *(undefined1 *)(param_2 + 2) = 1;
      goto LAB_14758c03f;
    }
    if (iVar1 == (int)dVar8) {
      fVar3 = (float)(dVar5 - dVar4);
      if (0.99999994 <= (float)(dVar5 - dVar4)) {
        fVar3 = 0.99999994;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      fVar3 = fVar3 + 0.5 + -0.5;
      if (0.99999994 <= fVar3) {
        fVar3 = 0.99999994;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      if (fVar2 <= fVar3) goto LAB_14758bf49;
    }
  }
  *(undefined1 *)(param_2 + 2) = 0;
LAB_14758c03f:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758c06e FUN_14758c06e body=874 status=ok
// SIG undefined FUN_14758c06e(void)

undefined8
FUN_14758c06e(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  double dVar12;
  undefined1 unaff_XMM8 [16];
  float fVar13;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  int local_f0;
  float local_ec;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  float local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (double)*param_1;
  auVar9 = roundpd(unaff_XMM8,auVar9,1);
  dVar12 = auVar9._0_8_;
  dVar7 = (double)*param_1 - dVar12;
  if (2147483647.0 <= dVar12) {
    dVar12 = 2147483647.0;
  }
  if (dVar12 <= -2147483648.0) {
    dVar12 = -2147483648.0;
  }
  fVar11 = (float)dVar7;
  if (0.99999994 <= fVar11) {
    fVar11 = 0.99999994;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar11 = fVar11 + 0.5 + -0.5;
  if (0.99999994 <= fVar11) {
    fVar11 = 0.99999994;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_dc = 0;
  local_e0 = 0;
  local_e4 = 0;
  FUN_140406dda(dVar7,&local_f0,param_2,&local_dc);
  FUN_140406dda(param_1,&local_f8,param_3,&local_e0);
  FUN_140406dda(param_1,&local_100,param_4,&local_e4);
  iVar6 = local_dc;
  iVar2 = local_e0;
  dVar10 = ((double)fVar11 + (double)(int)dVar12) * (double)local_dc;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar10;
  auVar9 = roundpd(auVar8,auVar8,1);
  dVar7 = auVar9._0_8_;
  dVar10 = dVar10 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  fVar13 = (float)dVar10;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = fVar13 + 0.5 + -0.5;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = fVar13 + local_ec;
  auVar9 = roundss(ZEXT816(0),ZEXT416((uint)fVar13),9);
  iVar5 = (int)dVar7 + local_f0 + ((int)ROUND(fVar13 + fVar13 + -0.5) >> 1);
  fVar13 = (fVar13 - auVar9._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if ((((local_dc == local_e0) && (local_f0 <= (int)local_f8)) &&
      ((local_f0 != (int)local_f8 || (local_ec < (float)((ulonglong)local_f8 >> 0x20))))) ||
     (local_d8 = iVar5, local_d4 = fVar13, cVar3 = (*(code *)*param_5)(param_5[1]), cVar3 != '\0'))
  {
    iVar1 = local_e4;
    do {
      iVar6 = iVar6 + 1;
      if (iVar1 <= iVar6) {
        if ((iVar1 != iVar2) &&
           ((local_f0 < (int)local_100 ||
            ((local_f0 == (int)local_100 && (local_ec < (float)((ulonglong)local_100 >> 0x20)))))))
        {
          fVar11 = fVar11 + fVar13;
          local_d8 = iVar5 + (int)dVar12 + ((int)ROUND(fVar11 + fVar11 + -0.5) >> 1);
          auVar9 = roundss(ZEXT816(0),ZEXT416((uint)fVar11),9);
          local_d4 = fVar11 - auVar9._0_4_;
          cVar3 = (*(code *)*param_5)(param_5[1]);
          if (cVar3 == '\0') break;
        }
        uVar4 = 1;
        goto LAB_14758c2e1;
      }
      fVar13 = fVar13 + fVar11;
      iVar5 = iVar5 + (int)dVar12 + ((int)ROUND(fVar13 + fVar13 + -0.5) >> 1);
      auVar9 = roundss(ZEXT816(0),ZEXT416((uint)fVar13),9);
      fVar13 = fVar13 - auVar9._0_4_;
      local_d8 = iVar5;
      local_d4 = fVar13;
      cVar3 = (*(code *)*param_5)(param_5[1],&local_d8);
    } while (cVar3 != '\0');
  }
  uVar4 = 0;
LAB_14758c2e1:
  if ((local_d0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14758c3da FUN_14758c3da body=512 status=ok
// SIG undefined FUN_14758c3da(void)

ulonglong FUN_14758c3da(float *param_1,char *param_2,undefined8 *param_3)

{
  double dVar1;
  char cVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auStack_d8 [32];
  int local_b8;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_2 == '\x02') {
    dVar1 = -2147483648.0;
  }
  else {
    dVar1 = (double)*(float *)(param_2 + 8) + (double)*(int *)(param_2 + 4);
  }
  if (param_2[0xc] == '\x02') {
    dVar8 = 2147483647.0;
  }
  else {
    dVar8 = (double)*(float *)(param_2 + 0x14) + (double)*(int *)(param_2 + 0x10);
  }
  dVar11 = dVar1 / (double)*param_1;
  dVar8 = dVar8 / (double)*param_1;
  uVar6 = (ulonglong)(longlong)ROUND(dVar11 + dVar11 + -0.5) >> 1;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  iVar4 = (int)((ulonglong)(longlong)ROUND(dVar8 + dVar8 + -0.5) >> 1);
  if ((int)uVar6 <= iVar4) {
    uVar3 = 0;
    do {
      iVar5 = (int)uVar6;
      dVar8 = (double)((float)iVar5 * *param_1);
      if (dVar1 <= dVar8) {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = dVar8;
        auVar10 = roundpd(auVar10,auVar10,1);
        dVar9 = auVar10._0_8_;
        dVar11 = dVar9;
        if (2147483647.0 <= dVar9) {
          dVar11 = 2147483647.0;
        }
        if (dVar11 <= -2147483648.0) {
          dVar11 = -2147483648.0;
        }
        local_b8 = (int)dVar11;
        fVar7 = (float)(dVar8 - dVar9);
        if (0.99999994 <= fVar7) {
          fVar7 = 0.99999994;
        }
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        local_b4 = fVar7 + 0.5 + -0.5;
        if (0.99999994 <= local_b4) {
          local_b4 = 0.99999994;
        }
        if (local_b4 <= 0.0) {
          local_b4 = 0.0;
        }
        cVar2 = (*(code *)*param_3)(param_3[1],&local_b8);
        if (cVar2 == '\0') break;
      }
      uVar3 = (ulonglong)(iVar4 <= iVar5);
      uVar6 = (ulonglong)(iVar5 + 1U);
    } while (iVar4 + 1U != iVar5 + 1U);
  }
  if ((local_b0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14758c5dc FUN_14758c5dc body=89 status=ok
// SIG undefined FUN_14758c5dc(void)

undefined4 * FUN_14758c5dc(undefined8 param_1,undefined4 *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 8);
  uVar3 = *(undefined4 *)(param_3 + 0xc);
  *param_2 = *(undefined4 *)param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if (*param_3 != '\x02') {
    FUN_140406e82(param_1,param_2 + 1,*(undefined8 *)(param_3 + 4));
  }
  if (param_3[0xc] != '\x02') {
    FUN_140406e82(param_1,param_2 + 4,*(undefined8 *)(param_3 + 0x10));
  }
  return param_2;
}



// FUNCTION 14758c638 FUN_14758c638 body=48 status=ok
// SIG undefined FUN_14758c638(void)

longlong FUN_14758c638(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758c68c FUN_14758c68c body=48 status=ok
// SIG undefined FUN_14758c68c(void)

longlong FUN_14758c68c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758c6c4 FUN_14758c6c4 body=48 status=ok
// SIG undefined FUN_14758c6c4(void)

longlong FUN_14758c6c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x100;
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758c730 FUN_14758c730 body=48 status=ok
// SIG undefined FUN_14758c730(void)

longlong FUN_14758c730(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_14129c886(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758c7aa FUN_14758c7aa body=27 status=ok
// SIG undefined FUN_14758c7aa(void)

void FUN_14758c7aa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x350))();
  return;
}



// FUNCTION 14758c7c6 FUN_14758c7c6 body=48 status=ok
// SIG undefined FUN_14758c7c6(void)

longlong FUN_14758c7c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_14129c886(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758c8d8 FUN_14758c8d8 body=63 status=ok
// SIG undefined FUN_14758c8d8(void)

undefined1 FUN_14758c8d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14756d56a(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 14758c940 FUN_14758c940 body=59 status=ok
// SIG undefined FUN_14758c940(void)

undefined8 FUN_14758c940(longlong *param_1)

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



// FUNCTION 14758c98c FUN_14758c98c body=38 status=ok
// SIG undefined FUN_14758c98c(void)

void FUN_14758c98c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14756d514(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 14758ca66 FUN_14758ca66 body=59 status=ok
// SIG undefined FUN_14758ca66(void)

undefined8 FUN_14758ca66(longlong *param_1)

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



// FUNCTION 14758cb6c FUN_14758cb6c body=59 status=ok
// SIG undefined FUN_14758cb6c(void)

undefined8 FUN_14758cb6c(longlong *param_1)

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



// FUNCTION 14758cc36 FUN_14758cc36 body=90 status=ok
// SIG undefined FUN_14758cc36(void)

undefined1 FUN_14758cc36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 14758ccb8 FUN_14758ccb8 body=59 status=ok
// SIG undefined FUN_14758ccb8(void)

undefined8 FUN_14758ccb8(longlong *param_1)

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



// FUNCTION 14758cd5a FUN_14758cd5a body=29 status=ok
// SIG undefined FUN_14758cd5a(void)

undefined8 FUN_14758cd5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758cd80 FUN_14758cd80 body=29 status=ok
// SIG undefined FUN_14758cd80(void)

undefined8 FUN_14758cd80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758cd9e FUN_14758cd9e body=39 status=ok
// SIG undefined FUN_14758cd9e(void)

undefined8
FUN_14758cd9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_147539319(param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 14758cdc8 FUN_14758cdc8 body=122 status=ok
// SIG undefined FUN_14758cdc8(void)

longlong FUN_14758cdc8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14758ce42(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14758ce42 FUN_14758ce42 body=235 status=ok
// SIG undefined FUN_14758ce42(void)

longlong * FUN_14758ce42(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1405d163e(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar8 = 0x10;
      uVar7 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar6 + (uVar7 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + -0x10 + lVar8) = *(undefined4 *)(lVar3 + -0x10 + lVar8);
        if ((uVar2 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + -0xc + lVar8) = *(undefined4 *)(lVar3 + -0xc + lVar8);
        }
        else {
          lVar4 = *(longlong *)(lVar3 + -8 + lVar8);
          *(longlong *)(lVar5 + -8 + lVar8) = lVar4;
          if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(lVar3 + lVar8);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x18;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 14758cf2e FUN_14758cf2e body=48 status=ok
// SIG undefined FUN_14758cf2e(void)

void FUN_14758cf2e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14758cf5e FUN_14758cf5e body=52 status=ok
// SIG undefined FUN_14758cf5e(void)

void FUN_14758cf5e(longlong *param_1)

{
  FUN_14758cf92();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14758cf92 FUN_14758cf92 body=313 status=ok
// SIG undefined FUN_14758cf92(void)

void FUN_14758cf92(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 14758d108 FUN_14758d108 body=112 status=ok
// SIG undefined FUN_14758d108(void)

undefined1 FUN_14758d108(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      plVar1[3] = *(longlong *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14758d1a0 FUN_14758d1a0 body=59 status=ok
// SIG undefined FUN_14758d1a0(void)

undefined8 FUN_14758d1a0(longlong *param_1)

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



// FUNCTION 14758d276 FUN_14758d276 body=54 status=ok
// SIG undefined FUN_14758d276(void)

undefined1 FUN_14758d276(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14758d38e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14758d2d4 FUN_14758d2d4 body=59 status=ok
// SIG undefined FUN_14758d2d4(void)

undefined8 FUN_14758d2d4(longlong *param_1)

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



// FUNCTION 14758d31a FUN_14758d31a body=37 status=ok
// SIG undefined FUN_14758d31a(void)

void FUN_14758d31a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14758d38e FUN_14758d38e body=79 status=ok
// SIG undefined FUN_14758d38e(void)

undefined8 * FUN_14758d38e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14758d3de(param_1,iVar1);
      FUN_14758d440(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14758d3de FUN_14758d3de body=98 status=ok
// SIG undefined FUN_14758d3de(void)

void FUN_14758d3de(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14758d440 FUN_14758d440 body=110 status=ok
// SIG undefined FUN_14758d440(void)

void FUN_14758d440(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar7);
      *(longlong *)(param_1 + lVar7) = lVar2;
      if ((lVar2 != 0 & bVar6) == 1) {
        FUN_1456cec3c();
        bVar6 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar7;
      lVar1 = param_2 + lVar7;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      uVar3 = *(undefined4 *)(lVar1 + 0xc);
      uVar4 = *(undefined4 *)(lVar1 + 0x10);
      uVar5 = *(undefined4 *)(lVar1 + 0x14);
      *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar1 + 8);
      *(undefined4 *)(lVar2 + 0xc) = uVar3;
      *(undefined4 *)(lVar2 + 0x10) = uVar4;
      *(undefined4 *)(lVar2 + 0x14) = uVar5;
      lVar7 = lVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14758d4b0 FUN_14758d4b0 body=69 status=ok
// SIG undefined FUN_14758d4b0(void)

undefined8 * FUN_14758d4b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a498f10;
  if (*(char *)((longlong)param_1 + 0x3d) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758d4f6 FUN_14758d4f6 body=78 status=ok
// SIG undefined FUN_14758d4f6(void)

undefined8 FUN_14758d4f6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758d5f0();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758d546 FUN_14758d546 body=82 status=ok
// SIG undefined FUN_14758d546(void)

void FUN_14758d546(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14758d6fe(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758d59a FUN_14758d59a body=85 status=ok
// SIG undefined FUN_14758d59a(void)

void FUN_14758d59a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140c37182(param_1 + 8,lVar2,uVar1);
  FUN_140659abc(param_1 + 0x20,lVar2,uVar1);
  FUN_14758d748(param_1 + 0x38,lVar2,uVar1);
  return;
}



// FUNCTION 14758d5f0 FUN_14758d5f0 body=268 status=ok
// SIG undefined FUN_14758d5f0(void)

undefined2 * FUN_14758d5f0(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_78;
  undefined1 local_70 [8];
  undefined8 local_68 [2];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68[0] = param_4;
  FUN_14758d6fe(local_68,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x40);
  local_58 = 0;
  local_50 = 0x200000000;
  FUN_1432d436e(local_70,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_68);
  FUN_140560464(param_3,&local_88,param_4);
  FUN_14758d59a(param_1);
  local_98 = local_88;
  local_90 = local_80;
  local_8c = 1;
  FUN_14163869e(local_68,&local_98,local_70);
  *param_2 = local_78;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758d6fe FUN_14758d6fe body=73 status=ok
// SIG undefined FUN_14758d6fe(void)

void FUN_14758d6fe(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0xd) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xc]);
  }
  if (*(char *)(param_2 + 0x19) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x18]);
    return;
  }
  return;
}



// FUNCTION 14758d748 FUN_14758d748 body=159 status=ok
// SIG undefined FUN_14758d748(void)

void FUN_14758d748(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((char)param_1[1] == '\x01') {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x28);
      lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_14758d785;
        plVar3 = plVar3 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    plVar3 = (longlong *)0x0;
LAB_14758d785:
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    UNLOCK();
    *(char *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
         (char)param_1[2];
    if (*(char *)((longlong)param_1 + 5) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 5) = 0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014758d7d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14758d7e8 FUN_14758d7e8 body=49 status=ok
// SIG undefined FUN_14758d7e8(void)

undefined8 * FUN_14758d7e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a498f30;
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758d81a FUN_14758d81a body=78 status=ok
// SIG undefined FUN_14758d81a(void)

undefined8 FUN_14758d81a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758d86a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758d86a FUN_14758d86a body=274 status=ok
// SIG undefined FUN_14758d86a(void)

undefined2 * FUN_14758d86a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  cVar1 = *(char *)(param_1 + 0x38);
  local_48 = 0;
  local_40 = 0x200000000;
  FUN_1432d436e(local_60,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_146173d3e(param_1 + 8,local_78,local_70);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758d97e FUN_14758d97e body=49 status=ok
// SIG undefined FUN_14758d97e(void)

undefined8 * FUN_14758d97e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a498f50;
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758d9b0 FUN_14758d9b0 body=78 status=ok
// SIG undefined FUN_14758d9b0(void)

undefined8 FUN_14758d9b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758da00();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758da00 FUN_14758da00 body=292 status=ok
// SIG undefined FUN_14758da00(void)

undefined2 * FUN_14758da00(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x22) == '\x01') {
    FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x20));
  }
  cVar1 = *(char *)(param_1 + 0x24);
  local_48 = 0;
  local_40 = 0x200000000;
  FUN_1432d436e(local_60,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140c37182(param_1 + 8,local_78,local_70);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758db92 FUN_14758db92 body=59 status=ok
// SIG undefined FUN_14758db92(void)

undefined8 FUN_14758db92(longlong *param_1)

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



// FUNCTION 14758dc34 FUN_14758dc34 body=31 status=ok
// SIG undefined FUN_14758dc34(void)

undefined8 FUN_14758dc34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758dc54 FUN_14758dc54 body=78 status=ok
// SIG undefined FUN_14758dc54(void)

undefined8 FUN_14758dc54(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758dca6();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758dca6 FUN_14758dca6 body=252 status=ok
// SIG undefined FUN_14758dca6(void)

undefined2 * FUN_14758dca6(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  cVar1 = *(char *)(param_1 + 10);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_68,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758dda4 FUN_14758dda4 body=52 status=ok
// SIG undefined FUN_14758dda4(void)

undefined8 * FUN_14758dda4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4990e0;
  FUN_145ca725a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758ddd8 FUN_14758ddd8 body=78 status=ok
// SIG undefined FUN_14758ddd8(void)

undefined8 FUN_14758ddd8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758de28();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758de28 FUN_14758de28 body=312 status=ok
// SIG undefined FUN_14758de28(void)

undefined2 * FUN_14758de28(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_145f9f0c8(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0xb8);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_145d6dc3a(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_60,&local_78,local_80);
  *param_2 = local_88;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758df62 FUN_14758df62 body=38 status=ok
// SIG undefined FUN_14758df62(void)

undefined8 FUN_14758df62(undefined8 param_1,int param_2)

{
  FUN_1475863e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758df88 FUN_14758df88 body=78 status=ok
// SIG undefined FUN_14758df88(void)

undefined8 FUN_14758df88(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758e086();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758dfd8 FUN_14758dfd8 body=85 status=ok
// SIG undefined FUN_14758dfd8(void)

void FUN_14758dfd8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14758e1c0(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e02e FUN_14758e02e body=86 status=ok
// SIG undefined FUN_14758e02e(void)

void FUN_14758e02e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14758e264(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e086 FUN_14758e086 body=312 status=ok
// SIG undefined FUN_14758e086(void)

undefined2 * FUN_14758e086(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_14758e1c0(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0xa0);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14758e264(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_60,&local_78,local_80);
  *param_2 = local_88;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e1c0 FUN_14758e1c0 body=163 status=ok
// SIG undefined FUN_14758e1c0(void)

void FUN_14758e1c0(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[6]);
  if (*(char *)(param_2 + 9) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[8]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
    return;
  }
  return;
}



// FUNCTION 14758e264 FUN_14758e264 body=132 status=ok
// SIG undefined FUN_14758e264(void)

void FUN_14758e264(undefined8 *param_1,longlong param_2)

{
  FUN_145d6dcd4(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1405603be(param_2 + 0x10,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14758e2e8 FUN_14758e2e8 body=105 status=ok
// SIG undefined FUN_14758e2e8(void)

undefined8 * FUN_14758e2e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a499120;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758e352 FUN_14758e352 body=78 status=ok
// SIG undefined FUN_14758e352(void)

undefined8 FUN_14758e352(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758e450();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e3a2 FUN_14758e3a2 body=85 status=ok
// SIG undefined FUN_14758e3a2(void)

void FUN_14758e3a2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14758e58a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e3f8 FUN_14758e3f8 body=86 status=ok
// SIG undefined FUN_14758e3f8(void)

void FUN_14758e3f8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14758e616(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e450 FUN_14758e450 body=312 status=ok
// SIG undefined FUN_14758e450(void)

undefined2 * FUN_14758e450(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_14758e58a(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x88);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14758e616(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_60,&local_78,local_80);
  *param_2 = local_88;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e58a FUN_14758e58a body=139 status=ok
// SIG undefined FUN_14758e58a(void)

void FUN_14758e58a(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[6]);
  if (*(char *)(param_2 + 9) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[8]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
    return;
  }
  return;
}



// FUNCTION 14758e616 FUN_14758e616 body=116 status=ok
// SIG undefined FUN_14758e616(void)

void FUN_14758e616(undefined8 *param_1,longlong param_2)

{
  FUN_145d6dcd4(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1405603be(param_2 + 0x10,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14758e68a FUN_14758e68a body=89 status=ok
// SIG undefined FUN_14758e68a(void)

undefined8 * FUN_14758e68a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a499140;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758e6e4 FUN_14758e6e4 body=78 status=ok
// SIG undefined FUN_14758e6e4(void)

undefined8 FUN_14758e6e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758e7e0();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e734 FUN_14758e734 body=82 status=ok
// SIG undefined FUN_14758e734(void)

void FUN_14758e734(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14758e916(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e788 FUN_14758e788 body=86 status=ok
// SIG undefined FUN_14758e788(void)

void FUN_14758e788(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14758e990(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e7e0 FUN_14758e7e0 body=309 status=ok
// SIG undefined FUN_14758e7e0(void)

undefined2 * FUN_14758e7e0(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_14758e916(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x70);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14758e990(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_60,&local_78,local_80);
  *param_2 = local_88;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758e916 FUN_14758e916 body=121 status=ok
// SIG undefined FUN_14758e916(void)

void FUN_14758e916(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[6]);
  if (*(char *)(param_2 + 9) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[8]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
    return;
  }
  return;
}



// FUNCTION 14758e990 FUN_14758e990 body=100 status=ok
// SIG undefined FUN_14758e990(void)

void FUN_14758e990(undefined8 *param_1,longlong param_2)

{
  FUN_145d6dcd4(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1405603be(param_2 + 0x10,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14758e9f4 FUN_14758e9f4 body=79 status=ok
// SIG undefined FUN_14758e9f4(void)

undefined8 * FUN_14758e9f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a499160;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758ea44 FUN_14758ea44 body=78 status=ok
// SIG undefined FUN_14758ea44(void)

undefined8 FUN_14758ea44(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758eb40();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758ea94 FUN_14758ea94 body=82 status=ok
// SIG undefined FUN_14758ea94(void)

void FUN_14758ea94(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14758ec76(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758eae8 FUN_14758eae8 body=86 status=ok
// SIG undefined FUN_14758eae8(void)

void FUN_14758eae8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14758ecde(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758eb40 FUN_14758eb40 body=309 status=ok
// SIG undefined FUN_14758eb40(void)

undefined2 * FUN_14758eb40(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_14758ec76(local_60,param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x58);
  local_50 = 0;
  local_48 = 0x200000000;
  FUN_1432d436e(local_80,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_60);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14758ecde(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_60,&local_78,local_80);
  *param_2 = local_88;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758ec76 FUN_14758ec76 body=103 status=ok
// SIG undefined FUN_14758ec76(void)

void FUN_14758ec76(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[6]);
  if (*(char *)(param_2 + 9) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[8]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
    return;
  }
  return;
}



// FUNCTION 14758ecde FUN_14758ecde body=84 status=ok
// SIG undefined FUN_14758ecde(void)

void FUN_14758ecde(undefined8 *param_1,longlong param_2)

{
  FUN_145d6dcd4(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1405603be(param_2 + 0x10,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14758ed32 FUN_14758ed32 body=341 status=ok
// SIG undefined FUN_14758ed32(void)

undefined4 *
FUN_14758ed32(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14758ee88(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar3 = *(undefined8 *)*param_3;
  *local_40 = uVar3;
  local_40[1] = *puVar1;
  lVar8 = puVar1[1];
  local_40[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar3 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3;
  local_58 = param_4;
  cVar2 = FUN_14758ef6e(param_1,uVar6,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14758f0d2(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758ee88 FUN_14758ee88 body=229 status=ok
// SIG undefined FUN_14758ee88(void)

int * FUN_14758ee88(longlong *param_1,int *param_2)

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



// FUNCTION 14758ef6e FUN_14758ef6e body=218 status=ok
// SIG undefined FUN_14758ef6e(void)

void FUN_14758ef6e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_14758f048(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_14758efe1;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_14758efe1:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 14758f048 FUN_14758f048 body=138 status=ok
// SIG undefined FUN_14758f048(void)

void FUN_14758f048(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14758f0d2 FUN_14758f0d2 body=450 status=ok
// SIG undefined FUN_14758f0d2(void)

void FUN_14758f0d2(longlong *param_1)

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



// FUNCTION 14758f296 FUN_14758f296 body=29 status=ok
// SIG undefined FUN_14758f296(void)

undefined8 FUN_14758f296(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758f2e2 FUN_14758f2e2 body=29 status=ok
// SIG undefined FUN_14758f2e2(void)

undefined8 FUN_14758f2e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758f3bc FUN_14758f3bc body=59 status=ok
// SIG undefined FUN_14758f3bc(void)

undefined8 FUN_14758f3bc(longlong *param_1)

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



// FUNCTION 14758f45e FUN_14758f45e body=29 status=ok
// SIG undefined FUN_14758f45e(void)

undefined8 FUN_14758f45e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758f47c FUN_14758f47c body=55 status=ok
// SIG undefined FUN_14758f47c(void)

void FUN_14758f47c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab3ef8 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab3ef8 = FUN_140002ddd(FUN_1463432c3,uVar1,L"TestMovieSceneEvalTemplate");
  }
  return;
}



// FUNCTION 14758f4b4 FUN_14758f4b4 body=59 status=ok
// SIG undefined FUN_14758f4b4(void)

undefined8 * FUN_14758f4b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a499370;
  if (*(char *)((longlong)param_1 + 0x25) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758f4f0 FUN_14758f4f0 body=78 status=ok
// SIG undefined FUN_14758f4f0(void)

undefined8 FUN_14758f4f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14758f5c6();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758f540 FUN_14758f540 body=63 status=ok
// SIG undefined FUN_14758f540(void)

void FUN_14758f540(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x22) == '\x01') {
    FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14758f580 FUN_14758f580 body=70 status=ok
// SIG undefined FUN_14758f580(void)

void FUN_14758f580(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_3[1];
  FUN_140c37182(param_1 + 8,lVar1,(int)lVar2);
  FUN_14758d748(param_1 + 0x20,lVar1,(int)lVar2);
  return;
}



// FUNCTION 14758f5c6 FUN_14758f5c6 body=315 status=ok
// SIG undefined FUN_14758f5c6(void)

undefined2 * FUN_14758f5c6(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x22) == '\x01') {
    FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x20));
  }
  cVar1 = *(char *)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0x200000000;
  FUN_1432d436e(local_60,param_3);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1 * '\x02' + '\x01') & 0xffffffff,
                param_4,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  uVar3 = local_70;
  lVar2 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140c37182(param_1 + 8,local_78,local_70);
    FUN_14758d748(param_1 + 0x20,lVar2,uVar3);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758f702 FUN_14758f702 body=132 status=ok
// SIG undefined FUN_14758f702(void)

void FUN_14758f702(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14758f788 FUN_14758f788 body=62 status=ok
// SIG undefined FUN_14758f788(void)

void FUN_14758f788(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14758f7c6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 14758f7c6 FUN_14758f7c6 body=93 status=ok
// SIG undefined FUN_14758f7c6(void)

ulonglong FUN_14758f7c6(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14758f824 FUN_14758f824 body=38 status=ok
// SIG undefined FUN_14758f824(void)

undefined8 FUN_14758f824(undefined8 param_1,int param_2)

{
  FUN_145ca7ade();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14758f850 FUN_14758f850 body=33 status=ok
// SIG undefined FUN_14758f850(void)

void FUN_14758f850(undefined8 param_1)

{
  FUN_145ca7b5c();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 14758f928 FUN_14758f928 body=219 status=ok
// SIG undefined FUN_14758f928(void)

void FUN_14758f928(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x18) == param_2) {
          lVar2 = *param_1;
          plVar5 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[8];
          }
          lVar1 = lVar2 + (longlong)iVar4 * 0x18;
          lVar8 = (longlong)*(int *)(lVar1 + 0x14);
          iVar7 = *(int *)((longlong)plVar5 + lVar8 * 4);
          if (iVar7 == iVar4) {
            puVar6 = (undefined4 *)((longlong)plVar5 + lVar8 * 4);
          }
          else {
            do {
              lVar8 = (longlong)iVar7;
              iVar7 = *(int *)(lVar2 + 0x10 + lVar8 * 0x18);
            } while (iVar7 != iVar4);
            puVar6 = (undefined4 *)(lVar2 + lVar8 * 0x18 + 0x10);
          }
          *puVar6 = *(undefined4 *)(lVar1 + 0x10);
          FUN_14758fa04();
          return;
        }
        iVar4 = *(int *)(*param_1 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 14758fa04 FUN_14758fa04 body=114 status=ok
// SIG undefined FUN_14758fa04(void)

void FUN_14758fa04(longlong *param_1,int param_2)

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



// FUNCTION 14758fa76 FUN_14758fa76 body=474 status=ok
// SIG undefined FUN_14758fa76(void)

void FUN_14758fa76(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14758fc52 FUN_14758fc52 body=201 status=ok
// SIG undefined FUN_14758fc52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14758fc52(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined *local_40;
  undefined *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3c88);
  iVar3 = DAT_14cab3c6c;
  iVar2 = DAT_14cab3c40;
  local_40 = &DAT_14cab3cb0;
  local_38 = &DAT_14cab3cb8;
  _DAT_14cab3cb0 = param_1;
  DAT_14cab3cb8 = bVar1;
  FUN_14758fd30(local_2c);
  if (iVar2 == iVar3) {
    FUN_140f9708a(&DAT_14c9647b8,&DAT_14cab3c30);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014758fcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3c88);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 14758fd30 FUN_14758fd30 body=343 status=ok
// SIG undefined FUN_14758fd30(void)

undefined4 * FUN_14758fd30(undefined4 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14758fe88(local_40);
  puVar1 = (undefined1 *)param_2[1];
  uVar8 = *(ulonglong *)*param_2;
  *local_38 = uVar8;
  *(undefined1 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_14758ff96(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cab3c40 - DAT_14cab3c6c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cab3c80)) {
      uVar5 = DAT_14cab3c80 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x14) = uVar5;
      puVar7 = DAT_14cab3c78;
      if (DAT_14cab3c78 == (undefined *)0x0) {
        puVar7 = &DAT_14cab3c70;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cab3c80 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14cab3c78;
      if (DAT_14cab3c78 == (undefined *)0x0) {
        puVar7 = &DAT_14cab3c70;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cab3c80 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14cab3c80 = iVar9;
      FUN_14758fa76(&DAT_14cab3c38);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14758fe88 FUN_14758fe88 body=270 status=ok
// SIG undefined FUN_14758fe88(void)

int * FUN_14758fe88(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cab3c68;
  iVar4 = DAT_14cab3c40;
  if (DAT_14cab3c6c == 0) {
    iVar2 = DAT_14cab3c40 + 1;
    bVar7 = DAT_14cab3c44 == DAT_14cab3c40;
    DAT_14cab3c40 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cab3c38,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cab3c48,1);
    puVar3 = DAT_14cab3c58;
    if (DAT_14cab3c58 == (undefined *)0x0) {
      puVar3 = &DAT_14cab3c48;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cab3c68;
    DAT_14cab3c68 = *(int *)(DAT_14cab3c38 + 4 + lVar6 * 0x18);
    DAT_14cab3c6c = DAT_14cab3c6c + -1;
    iVar4 = iVar2;
    if (DAT_14cab3c6c != 0) {
      *(undefined4 *)(DAT_14cab3c38 + (longlong)DAT_14cab3c68 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cab3c48;
  if (DAT_14cab3c58 != (undefined *)0x0) {
    puVar3 = DAT_14cab3c58;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cab3c38;
  return param_1;
}



// FUNCTION 14758ff96 FUN_14758ff96 body=150 status=ok
// SIG undefined FUN_14758ff96(void)

undefined8 FUN_14758ff96(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cab3c40 - DAT_14cab3c6c != 1) && (DAT_14cab3c40 != DAT_14cab3c6c)) {
    puVar6 = &DAT_14cab3c70;
    if (DAT_14cab3c78 != (undefined *)0x0) {
      puVar6 = DAT_14cab3c78;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cab3c80 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cab3c38 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_14758fa04(&DAT_14cab3c38,*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 14759002c FUN_14759002c body=38 status=ok
// SIG undefined FUN_14759002c(void)

undefined8 FUN_14759002c(undefined8 param_1,int param_2)

{
  FUN_145b26cc8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147590052 FUN_147590052 body=33 status=ok
// SIG undefined FUN_147590052(void)

void FUN_147590052(undefined8 param_1)

{
  FUN_145b26d46();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 1475900a8 FUN_1475900a8 body=306 status=ok
// SIG undefined FUN_1475900a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1475900a8(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3d18);
  iVar3 = DAT_14cab3cfc;
  iVar2 = DAT_14cab3cd0;
  _DAT_14cab3d48 = 0;
  _DAT_14cab3d50 = 0;
  DAT_14cab3d58 = 0;
  DAT_14cab3d60 = 0xffffffff;
  iVar6 = DAT_14cab3cd0;
  DAT_14cab3d40 = param_1;
  if (DAT_14cab3cd0 != DAT_14cab3cfc) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14cab3d00;
    if (DAT_14cab3d08 != (undefined *)0x0) {
      puVar5 = DAT_14cab3d08;
    }
    for (iVar1 = *(int *)(puVar5 + ((longlong)(int)(uVar4 >> 0x10 ^ uVar4) &
                                   (longlong)DAT_14cab3d10 - 1U) * 4); iVar6 = DAT_14cab3cfc,
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x30 + DAT_14cab3cc8 + 0x28)) {
      if (*(ulonglong *)(DAT_14cab3cc8 + (longlong)iVar1 * 0x30) == param_1) {
        FUN_140f93260(&DAT_14cab3cc8);
        iVar6 = DAT_14cab3cfc;
        break;
      }
    }
  }
  iVar1 = DAT_14cab3cd0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3d18);
  if ((iVar3 < iVar2) && (iVar1 == iVar6)) {
    FUN_140f93338(&DAT_14c9647b8,&DAT_14cab3cc0);
    return;
  }
  return;
}



// FUNCTION 1475901da FUN_1475901da body=326 status=ok
// SIG undefined FUN_1475901da(void)

void FUN_1475901da(longlong *param_1)

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



// FUNCTION 147590321 FUN_147590321 body=119 status=ok
// SIG undefined FUN_147590321(void)

undefined8 * FUN_147590321(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xc0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a4993d0;
  memset(puVar1 + 2,0,0xa0);
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0xffffffff00000080;
  puVar1[0x10] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0xffffffff00000080;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  return puVar1;
}



// FUNCTION 1475903a2 FUN_1475903a2 body=29 status=ok
// SIG undefined FUN_1475903a2(void)

undefined8 FUN_1475903a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475903c0 FUN_1475903c0 body=98 status=ok
// SIG undefined FUN_1475903c0(void)

void FUN_1475903c0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147590422 FUN_147590422 body=52 status=ok
// SIG undefined FUN_147590422(void)

void FUN_147590422(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14757e396(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 147590456 FUN_147590456 body=96 status=ok
// SIG undefined FUN_147590456(void)

void FUN_147590456(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1475904b6 FUN_1475904b6 body=197 status=ok
// SIG undefined FUN_1475904b6(void)

longlong FUN_1475904b6(longlong *param_1,uint param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_14759055e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_4;
  FUN_14759057c(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_14759055e:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 14759057c FUN_14759057c body=296 status=ok
// SIG undefined FUN_14759057c(void)

undefined4 *
FUN_14759057c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405dc782(param_1,local_58);
  puVar1 = (undefined4 *)param_4[1];
  *local_50 = *(undefined4 *)*param_4;
  local_50[1] = *puVar1;
  local_50[2] = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_140263f5a(param_1,param_3,local_50,local_58);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_50[3] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_50[2] = *(undefined4 *)
                     (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140264164(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475906a6 FUN_1475906a6 body=307 status=ok
// SIG undefined FUN_1475906a6(void)

undefined4 * FUN_1475906a6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1475907da(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  lVar8 = *plVar1;
  *(longlong *)(local_38 + 2) = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar5 = *local_38;
  }
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_1475908c0(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1475909b2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475907da FUN_1475907da body=230 status=ok
// SIG undefined FUN_1475907da(void)

int * FUN_1475907da(longlong *param_1,int *param_2)

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



// FUNCTION 1475908c0 FUN_1475908c0 body=128 status=ok
// SIG undefined FUN_1475908c0(void)

undefined8 FUN_1475908c0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147590940(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147590940 FUN_147590940 body=114 status=ok
// SIG undefined FUN_147590940(void)

void FUN_147590940(longlong *param_1,int param_2)

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



// FUNCTION 1475909b2 FUN_1475909b2 body=419 status=ok
// SIG undefined FUN_1475909b2(void)

void FUN_1475909b2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147590b56 FUN_147590b56 body=181 status=ok
// SIG undefined FUN_147590b56(void)

longlong FUN_147590b56(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147590bee;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147590c0c(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147590bee:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147590c0c FUN_147590c0c body=277 status=ok
// SIG undefined FUN_147590c0c(void)

undefined4 * FUN_147590c0c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147590d22(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147590e08(param_1,param_3,local_40,local_48);
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
      FUN_147590f1c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147590d22 FUN_147590d22 body=229 status=ok
// SIG undefined FUN_147590d22(void)

int * FUN_147590d22(longlong *param_1,int *param_2)

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



// FUNCTION 147590e08 FUN_147590e08 body=161 status=ok
// SIG undefined FUN_147590e08(void)

undefined8 FUN_147590e08(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
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
          FUN_147590eaa(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147590eaa FUN_147590eaa body=114 status=ok
// SIG undefined FUN_147590eaa(void)

void FUN_147590eaa(longlong *param_1,int param_2)

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



// FUNCTION 147590f1c FUN_147590f1c body=477 status=ok
// SIG undefined FUN_147590f1c(void)

void FUN_147590f1c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475910fa FUN_1475910fa body=132 status=ok
// SIG undefined FUN_1475910fa(void)

void FUN_1475910fa(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147591180 FUN_147591180 body=69 status=ok
// SIG undefined FUN_147591180(void)

undefined8 * FUN_147591180(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a498f10;
  if (*(char *)((longlong)param_1 + 0x3d) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475911c6 FUN_1475911c6 body=105 status=ok
// SIG undefined FUN_1475911c6(void)

void FUN_1475911c6(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a498f10;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0x1c);
  *(char *)((longlong)param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  cVar1 = *(char *)(param_2 + 0x34);
  *(char *)((longlong)param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)((longlong)param_1 + 0x2c) = uVar2;
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  cVar1 = *(char *)(param_2 + 0x3d);
  *(char *)((longlong)param_1 + 0x3d) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *param_1 = &PTR_FUN_14a4993f0;
  return;
}



// FUNCTION 147591230 FUN_147591230 body=53 status=ok
// SIG undefined FUN_147591230(void)

undefined8 * FUN_147591230(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a498f30;
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


