// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1499132c6 FUN_1499132c6 body=218 status=ok
// SIG undefined FUN_1499132c6(void)

void FUN_1499132c6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1499133a2(&local_30,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499133a2 FUN_1499133a2 body=104 status=ok
// SIG undefined FUN_1499133a2(void)

undefined8 FUN_1499133a2(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1468fc182(&local_38);
  FUN_1499137f4(param_1,&local_38);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14991340c FUN_14991340c body=327 status=ok
// SIG undefined FUN_14991340c(void)

void FUN_14991340c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0xffffffff;
  local_28 = 0;
  local_20 = 0x200000000;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  uStack_3c = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149913554(&local_98,puVar1);
  if (&local_98 == param_3) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_98;
    local_98 = 0;
    *(undefined4 *)(param_3 + 1) = local_90;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_8c;
  }
  FUN_14128b0c2(&local_88);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149913554 FUN_149913554 body=97 status=ok
// SIG undefined FUN_149913554(void)

undefined8 FUN_149913554(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146857ec0(param_2,local_38);
  FUN_1499137f4(param_1,local_38);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499135b6 FUN_1499135b6 body=218 status=ok
// SIG undefined FUN_1499135b6(void)

void FUN_1499135b6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149913692(&local_30,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149913692 FUN_149913692 body=94 status=ok
// SIG undefined FUN_149913692(void)

undefined8 FUN_149913692(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400bbfc4(local_38);
  FUN_1499137f4(param_1,local_38);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499136f2 FUN_1499136f2 body=256 status=ok
// SIG undefined FUN_1499136f2(void)

void FUN_1499136f2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1499137f4(&local_48,puVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499137f4 FUN_1499137f4 body=550 status=ok
// SIG undefined FUN_1499137f4(void)

longlong * FUN_1499137f4(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  int local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined1 local_d8 [16];
  byte *local_c8;
  uint local_c0;
  longlong local_b8 [2];
  longlong local_a8;
  byte local_78;
  undefined1 uStack_77;
  ushort uStack_76;
  undefined4 uStack_74;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = DAT_14cc32850;
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_14493e38c(uVar5,uVar3);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6);
  local_108 = 1;
  (**(code **)(*plVar6 + 0x98))(plVar6,local_b8,param_2,1);
  if ((local_b8[0] != 0) && (local_a8 != 0)) {
    local_c8 = &local_78;
    local_c0 = 0;
    if ((local_78 & 1) == 0) {
      lVar2 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
      if (lVar2 == 0) goto LAB_1499139d0;
      uVar10 = *(uint *)(lVar2 + 8);
    }
    else {
      uVar10 = (uint)uStack_76;
    }
    if (uVar10 != 0) {
      do {
        FUN_144a5de44(&local_c8,local_d8);
        FUN_1400021e4(local_d8,&local_e8);
        cVar4 = FUN_144a791f8(&local_e8,&DAT_14bf06e86,3,1);
        if (cVar4 != '\0') {
          puVar7 = &DAT_149dfb77a;
          if (local_e0 != 0) {
            puVar7 = local_e8;
          }
          uVar9 = local_e0 - 1;
          if (local_e0 == 0) {
            uVar9 = 0;
          }
          uVar8 = 3;
          if ((int)uVar9 < 3) {
            uVar8 = uVar9;
          }
          if ((int)uVar8 < 1) {
            uVar8 = 0;
          }
          FUN_14006620a(&local_f8,puVar7 + uVar8,uVar9 - uVar8);
          puVar7 = &DAT_149dfb77a;
          if (local_f0 != 0) {
            puVar7 = local_f8;
          }
          FUN_1446f470e(&local_100,puVar7,1);
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_1,iVar1);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_100;
          if (local_f8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_c0 = local_c0 + 1;
      } while (local_c0 != uVar10);
    }
  }
LAB_1499139d0:
  FUN_14128b0c2(local_b8);
  FUN_14063460b(*param_1,(int)param_1[1]);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149913a1e FUN_149913a1e body=275 status=ok
// SIG undefined FUN_149913a1e(void)

undefined4 * FUN_149913a1e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146862b7a(param_1,local_48);
  uVar1 = *(ulonglong *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0xffffffff00000000;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  iVar2 = FUN_144a788f7(uVar1 & 0xffffffff);
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar5 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar4 = *(int *)(param_1 + 0x48) - 1U & iVar2 + (int)(uVar1 >> 0x20);
    *(uint *)((longlong)local_40 + 0x1c) = uVar4;
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1 + 0x38;
    }
    *(undefined4 *)(local_40 + 3) =
         *(undefined4 *)
          (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4) =
         local_48[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146862c60(param_1);
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149913b32 FUN_149913b32 body=976 status=ok
// SIG undefined FUN_149913b32(void)

void FUN_149913b32(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_3f8 [32];
  longlong *local_3d8;
  int local_3cc;
  ulonglong *local_3c8;
  ulonglong *local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined4 local_3a8 [188];
  ulonglong local_b8 [14];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (1 < (int)param_2) {
    memset(local_3a8,0,0x2f0);
    local_3b0 = (ulonglong)param_2 * 0x70 + param_1 + -0x70;
    local_3b8 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_3a8[0] = (int)(longlong)(fVar18 + fVar18);
    plVar17 = &local_3b8;
    do {
      puVar9 = (ulonglong *)*plVar17;
      puVar7 = (ulonglong *)plVar17[1];
      iVar3 = (int)plVar17[2];
      iVar2 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar9) >> 4);
      puVar12 = puVar9;
      puVar14 = puVar7;
      local_3d8 = plVar17;
      if (iVar3 != 0) {
LAB_149913bdd:
        plVar17 = local_3d8;
        uVar6 = iVar2 * -0x49249249 + 1;
        if (8 < (int)uVar6) {
          puVar10 = puVar9 + (ulonglong)(uVar6 >> 1) * 0xe;
          puVar15 = local_b8;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar15 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar10 = puVar9;
          puVar15 = puVar9 + (ulonglong)(uVar6 >> 1) * 0xe;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar15 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar10 = local_b8;
          puVar15 = puVar9;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar15 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar10 = puVar7 + 0xe;
          puVar15 = puVar9;
          local_3cc = iVar3;
          local_3c8 = puVar12;
          local_3c0 = puVar14;
          do {
            puVar14 = puVar15 + 0xe;
            puVar13 = puVar15 + 0xe;
            do {
              puVar15 = puVar13;
              puVar12 = puVar14;
              if (puVar7 < puVar15) break;
              uVar1 = *puVar15;
              uVar5 = *puVar9;
              if (uVar5 == uVar1) {
                uVar5 = (ulonglong)(uint)puVar9[2];
                if ((uint)puVar9[2] == (uint)puVar15[2]) {
                  iVar3 = *(int *)((longlong)puVar9 + 0x14) - *(int *)((longlong)puVar15 + 0x14);
                }
                else {
LAB_149913c75:
                  iVar3 = FUN_14002c2bd(uVar5);
                }
              }
              else {
                if ((int)uVar5 != (int)uVar1) {
                  uVar5 = uVar5 & 0xffffffff;
                  goto LAB_149913c75;
                }
                iVar3 = (int)(uVar5 >> 0x20) - (int)(uVar1 >> 0x20);
              }
              puVar14 = puVar12 + 0xe;
              puVar13 = puVar15 + 0xe;
            } while (-1 < iVar3);
            puVar13 = puVar10 + -0x1c;
            do {
              puVar8 = puVar10;
              puVar14 = puVar13;
              puVar10 = puVar8 + -0xe;
              if (puVar10 <= puVar9) break;
              uVar1 = *puVar9;
              uVar5 = *puVar10;
              if (uVar5 == uVar1) {
                uVar5 = (ulonglong)(uint)puVar8[-0xc];
                if ((uint)puVar8[-0xc] == (uint)puVar9[2]) {
                  iVar3 = *(int *)((longlong)puVar8 + -0x5c) - *(int *)((longlong)puVar9 + 0x14);
                }
                else {
LAB_149913cd5:
                  iVar3 = FUN_14002c2bd(uVar5);
                }
              }
              else {
                if ((int)uVar5 != (int)uVar1) {
                  uVar5 = uVar5 & 0xffffffff;
                  goto LAB_149913cd5;
                }
                iVar3 = (int)(uVar5 >> 0x20) - (int)(uVar1 >> 0x20);
              }
              puVar13 = puVar14 + -0xe;
            } while (-1 < iVar3);
            lVar4 = 0xe;
            puVar13 = puVar9;
            puVar11 = puVar15;
            puVar16 = local_b8;
            if (puVar10 < puVar15) goto code_r0x000149913d33;
            for (; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar16 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar12 = puVar10;
            puVar14 = puVar15;
            for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            }
            puVar12 = local_b8;
            puVar14 = puVar10;
            for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            }
          } while( true );
        }
        while (puVar12 = puVar9, puVar14 = puVar9, puVar9 < puVar7) {
          while (puVar10 = puVar12, puVar12 = puVar14 + 0xe, puVar12 <= puVar7) {
            uVar1 = *puVar12;
            uVar5 = *puVar10;
            if (uVar5 == uVar1) {
              uVar5 = (ulonglong)(uint)puVar10[2];
              if ((uint)puVar10[2] == (uint)puVar12[2]) {
                iVar3 = *(int *)((longlong)puVar10 + 0x14) - *(int *)((longlong)puVar14 + 0x84);
              }
              else {
LAB_149913e87:
                iVar3 = FUN_14002c2bd(uVar5);
              }
            }
            else {
              if ((int)uVar5 != (int)uVar1) {
                uVar5 = uVar5 & 0xffffffff;
                goto LAB_149913e87;
              }
              iVar3 = (int)(uVar5 >> 0x20) - (int)(uVar1 >> 0x20);
            }
            puVar14 = puVar12;
            if (-1 < iVar3) {
              puVar12 = puVar10;
            }
          }
          puVar12 = puVar7 + -0xe;
          puVar14 = puVar10;
          puVar15 = local_b8;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar15 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar14 = puVar7;
          for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar14 = local_b8;
          puVar10 = puVar7;
          for (lVar4 = 0xe; puVar7 = puVar12, lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        goto LAB_149913ec3;
      }
LAB_149913eb6:
      FUN_149913f03(puVar9);
      plVar17 = local_3d8;
LAB_149913ec3:
      plVar17 = plVar17 + -3;
    } while (&local_3b8 <= plVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000149913d33:
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar16 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar16 = puVar16 + 1;
  }
  puVar13 = puVar10;
  puVar11 = puVar9;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar13 = local_b8;
  puVar11 = puVar10;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar11 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar11 = puVar11 + 1;
  }
  iVar3 = local_3cc + -1;
  puVar8 = puVar8 + -0x1c;
  if ((longlong)puVar14 - (longlong)local_3c8 < (longlong)local_3c0 - (longlong)puVar12) {
    plVar17 = local_3d8;
    if (puVar15 < puVar7) {
      *local_3d8 = (longlong)puVar15;
      local_3d8[1] = (longlong)puVar7;
      *(int *)(local_3d8 + 2) = iVar3;
      plVar17 = local_3d8 + 3;
    }
    puVar12 = puVar9;
    if (puVar10 <= puVar9 + 0xe) goto LAB_149913ec3;
  }
  else {
    if (puVar9 + 0xe < puVar10) {
      *local_3d8 = (longlong)puVar9;
      local_3d8[1] = (longlong)puVar8;
      *(int *)(local_3d8 + 2) = iVar3;
      local_3d8 = local_3d8 + 3;
    }
    puVar8 = puVar7;
    puVar9 = puVar15;
    plVar17 = local_3d8;
    puVar14 = puVar7;
    if (puVar7 <= puVar15) goto LAB_149913ec3;
  }
  local_3d8 = plVar17;
  iVar2 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar12) >> 4);
  puVar7 = puVar8;
  if (iVar3 == 0) goto LAB_149913eb6;
  goto LAB_149913bdd;
}



// FUNCTION 149913f03 FUN_149913f03 body=843 status=ok
// SIG undefined FUN_149913f03(void)

void FUN_149913f03(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  undefined8 local_b8 [14];
  ulonglong local_48;
  ulonglong uVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    uVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      uVar7 = (ulonglong)uVar4;
      local_c0 = uVar7;
      while (uVar3 = uVar4 * 2 + 1, (int)uVar3 < (int)param_2) {
        uVar14 = uVar4 * 2 + 2;
        uVar4 = uVar3;
        if ((int)uVar14 < (int)param_2) {
          lVar8 = (longlong)(int)uVar14;
          lVar9 = (longlong)(int)uVar3;
          uVar1 = param_1[lVar9 * 0xe];
          uVar10 = param_1[lVar8 * 0xe];
          if (uVar10 == uVar1) {
            uVar10 = (ulonglong)*(uint *)(param_1 + lVar8 * 0xe + 2);
            if (*(uint *)(param_1 + lVar8 * 0xe + 2) == *(uint *)(param_1 + lVar9 * 0xe + 2)) {
              iVar5 = *(int *)((longlong)param_1 + lVar8 * 0x70 + 0x14) -
                      *(int *)((longlong)param_1 + lVar9 * 0x70 + 0x14);
            }
            else {
LAB_149913fb3:
              iVar5 = FUN_14002c2bd(uVar10);
            }
          }
          else {
            if ((int)uVar10 != (int)uVar1) {
              uVar10 = uVar10 & 0xffffffff;
              goto LAB_149913fb3;
            }
            iVar5 = (int)(uVar10 >> 0x20) - (int)(uVar1 >> 0x20);
          }
          if (-1 < iVar5) {
            uVar4 = uVar14;
          }
        }
        puVar13 = param_1 + (longlong)(int)uVar7 * 0xe;
        puVar17 = param_1 + (longlong)(int)uVar4 * 0xe;
        uVar1 = param_1[(longlong)(int)uVar4 * 0xe];
        uVar7 = param_1[(longlong)(int)uVar7 * 0xe];
        if (uVar7 == uVar1) {
          uVar7 = (ulonglong)*(uint *)(puVar13 + 2);
          if (*(uint *)(puVar13 + 2) == *(uint *)(puVar17 + 2)) {
            iVar5 = *(int *)((longlong)puVar13 + 0x14) - *(int *)((longlong)puVar17 + 0x14);
          }
          else {
LAB_149914001:
            iVar5 = FUN_14002c2bd(uVar7);
          }
        }
        else {
          if ((int)uVar7 != (int)uVar1) {
            uVar7 = uVar7 & 0xffffffff;
            goto LAB_149914001;
          }
          iVar5 = (int)(uVar7 >> 0x20) - (int)(uVar1 >> 0x20);
        }
        if (-1 < iVar5) break;
        puVar12 = puVar13;
        puVar16 = local_b8;
        for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar16 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar12 = puVar17;
        for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        puVar13 = local_b8;
        for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar17 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar17 = puVar17 + 1;
        }
        uVar7 = (ulonglong)uVar4;
      }
      uVar4 = (int)local_c0 - 1;
    } while ((int)local_c0 != 0);
    if (1 < (int)param_2) {
      puVar13 = param_1;
      puVar17 = local_b8;
      for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar17 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar17 = puVar17 + 1;
      }
      puVar13 = param_1 + ((ulonglong)param_2 - 1) * 0xe;
      puVar17 = param_1;
      for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar17 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar17 = puVar17 + 1;
      }
      puVar13 = local_b8;
      puVar17 = param_1 + ((ulonglong)param_2 - 1) * 0xe;
      for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar17 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar17 = puVar17 + 1;
      }
      uVar7 = (ulonglong)param_2 - 1;
      if (param_2 != 2) {
        do {
          iVar5 = 0;
          iVar6 = 1;
          iVar11 = 0;
          do {
            lVar8 = (longlong)(iVar5 + 2);
            iVar15 = iVar6;
            if (lVar8 < (longlong)uVar7) {
              lVar9 = (longlong)iVar6;
              uVar1 = param_1[lVar9 * 0xe];
              uVar10 = param_1[lVar8 * 0xe];
              if (uVar10 == uVar1) {
                uVar10 = (ulonglong)*(uint *)(param_1 + lVar8 * 0xe + 2);
                if (*(uint *)(param_1 + lVar8 * 0xe + 2) == *(uint *)(param_1 + lVar9 * 0xe + 2)) {
                  iVar6 = *(int *)((longlong)param_1 + lVar8 * 0x70 + 0x14) -
                          *(int *)((longlong)param_1 + lVar9 * 0x70 + 0x14);
                }
                else {
LAB_14991411b:
                  iVar6 = FUN_14002c2bd(uVar10);
                }
              }
              else {
                if ((int)uVar10 != (int)uVar1) {
                  uVar10 = uVar10 & 0xffffffff;
                  goto LAB_14991411b;
                }
                iVar6 = (int)(uVar10 >> 0x20) - (int)(uVar1 >> 0x20);
              }
              if (-1 < iVar6) {
                iVar15 = iVar5 + 2;
              }
            }
            puVar13 = param_1 + (longlong)iVar11 * 0xe;
            puVar17 = param_1 + (longlong)iVar15 * 0xe;
            uVar1 = param_1[(longlong)iVar15 * 0xe];
            uVar10 = param_1[(longlong)iVar11 * 0xe];
            if (uVar10 == uVar1) {
              uVar10 = (ulonglong)*(uint *)(puVar13 + 2);
              if (*(uint *)(puVar13 + 2) == *(uint *)(puVar17 + 2)) {
                iVar5 = *(int *)((longlong)puVar13 + 0x14) - *(int *)((longlong)puVar17 + 0x14);
              }
              else {
LAB_14991416a:
                iVar5 = FUN_14002c2bd(uVar10);
              }
            }
            else {
              if ((int)uVar10 != (int)uVar1) {
                uVar10 = uVar10 & 0xffffffff;
                goto LAB_14991416a;
              }
              iVar5 = (int)(uVar10 >> 0x20) - (int)(uVar1 >> 0x20);
            }
            if (-1 < iVar5) break;
            puVar12 = puVar13;
            puVar16 = local_b8;
            for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar16 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar12 = puVar17;
            for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar13 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar13 = local_b8;
            for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar17 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar17 = puVar17 + 1;
            }
            iVar5 = iVar15 * 2;
            iVar6 = iVar15 * 2 + 1;
            iVar11 = iVar15;
          } while ((longlong)iVar6 < (longlong)uVar7);
          puVar13 = param_1;
          puVar17 = local_b8;
          for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar17 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar17 = puVar17 + 1;
          }
          puVar13 = param_1 + (uVar7 - 1) * 0xe;
          puVar17 = param_1;
          for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar17 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar17 = puVar17 + 1;
          }
          puVar13 = local_b8;
          puVar17 = param_1 + (uVar7 - 1) * 0xe;
          for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar17 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar17 = puVar17 + 1;
          }
          bVar2 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149914254 FUN_149914254 body=36 status=ok
// SIG undefined FUN_149914254(void)

undefined8 FUN_149914254(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149914294 FUN_149914294 body=93 status=ok
// SIG undefined FUN_149914294(void)

void FUN_149914294(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf06ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1499142f2 FUN_1499142f2 body=123 status=ok
// SIG undefined FUN_1499142f2(void)

void FUN_1499142f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bf06ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14991436e FUN_14991436e body=21 status=ok
// SIG undefined FUN_14991436e(void)

undefined8 FUN_14991436e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149914390 FUN_149914390 body=21 status=ok
// SIG undefined FUN_149914390(void)

undefined8 FUN_149914390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1446f8bcc(param_3,0);
  return 0;
}



// FUNCTION 1499143ac FUN_1499143ac body=36 status=ok
// SIG undefined FUN_1499143ac(void)

undefined8 FUN_1499143ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1499143ec FUN_1499143ec body=93 status=ok
// SIG undefined FUN_1499143ec(void)

void FUN_1499143ec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf06ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14991444a FUN_14991444a body=123 status=ok
// SIG undefined FUN_14991444a(void)

void FUN_14991444a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bf06ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1499144c6 FUN_1499144c6 body=21 status=ok
// SIG undefined FUN_1499144c6(void)

undefined8 FUN_1499144c6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1499144dc FUN_1499144dc body=89 status=ok
// SIG undefined FUN_1499144dc(void)

bool FUN_1499144dc(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_1400dbadc();
  plVar3 = (longlong *)FUN_1415bdc84(uVar2);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0xe8))(plVar3,param_2,0);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((puVar1 != puVar4) && (*(undefined8 **)(param_1 + 8) = puVar4, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
    puVar4 = *(undefined8 **)(param_1 + 8);
  }
  return puVar4 != (undefined8 *)0x0;
}



// FUNCTION 149914536 FUN_149914536 body=52 status=ok
// SIG undefined FUN_149914536(void)

undefined8 FUN_149914536(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),param_4,(longlong)param_3);
  return 0;
}



// FUNCTION 14991456a FUN_14991456a body=101 status=ok
// SIG undefined FUN_14991456a(void)

undefined8 FUN_14991456a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),uVar1);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = uVar2;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = uVar2;
  }
  return 0;
}



// FUNCTION 1499145d0 FUN_1499145d0 body=132 status=ok
// SIG undefined FUN_1499145d0(void)

void FUN_1499145d0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((param_1[2] != 0) && ((*(byte *)(param_1[2] + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 2,0xff);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  FUN_1499166b6(*param_1);
  return;
}



// FUNCTION 149914654 FUN_149914654 body=269 status=ok
// SIG undefined FUN_149914654(void)

undefined8
FUN_149914654(longlong param_1,char *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    free(*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  iVar2 = strcmp(param_2,"A_OPUS");
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = param_3;
    *(undefined4 *)(param_1 + 0x44) = param_4;
    local_2c = 0;
    uVar3 = FUN_144bc418c(param_3,param_4);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    iVar2 = (*(int *)(param_1 + 0x40) * 0x78) / 1000;
    *(int *)(param_1 + 0x3c) = iVar2;
LAB_1499146f5:
    uVar3 = CONCAT71((uint7)(uint3)((uint)param_4 >> 8),1);
    FUN_140393c76(param_1 + 0x18,iVar2 * *(int *)(param_1 + 0x44) * 2,1);
  }
  else {
    iVar2 = strcmp(param_2,"A_VORBIS");
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      *(undefined4 *)(param_1 + 0x40) = param_3;
      *(undefined4 *)(param_1 + 0x44) = param_4;
      cVar1 = FUN_1446bd490(param_1,param_5,param_6);
      if (cVar1 != '\0') {
        iVar2 = *(int *)(param_1 + 0x3c);
        goto LAB_1499146f5;
      }
    }
    uVar3 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149914762 FUN_149914762 body=490 status=ok
// SIG undefined FUN_149914762(void)

void FUN_149914762(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  undefined8 *local_80;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    local_98 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    local_98 = puVar3;
  }
  local_90 = 0;
  iVar2 = *(int *)(param_2 + 1);
  uVar4 = *param_2;
  local_a0 = param_1;
  local_88 = iVar2;
  if (iVar2 == 0) {
    local_84 = 0;
  }
  else {
    FUN_149916700(&local_90,iVar2,0);
    FUN_149916762(local_90,uVar4,iVar2);
  }
  local_78[0] = (code *)0x0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,8);
  iVar2 = local_88;
  uVar4 = local_90;
  *puVar5 = &PTR_LAB_14bf07780;
  puVar5[1] = local_a0;
  puVar5[2] = local_98;
  local_98 = (undefined8 *)0x0;
  puVar5[3] = 0;
  *(int *)(puVar5 + 4) = local_88;
  local_68 = puVar5;
  if (local_88 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
  }
  else {
    FUN_149916700(puVar5 + 3,local_88,0);
    FUN_149916762(puVar5[3],uVar4,iVar2);
  }
  ppuVar6 = (undefined8 **)(param_1 + 0x10);
  if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_1446c09ce;
  }
  local_a8 = 0xff;
  FUN_14014aede(&local_80,local_78);
  if (ppuVar6 != &local_80) {
    puVar5 = *ppuVar6;
    *ppuVar6 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1499148a5;
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_80 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_80)(local_80,1);
    }
  }
LAB_1499148a5:
  FUN_1446bd6a8(&local_a0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14991494e FUN_14991494e body=358 status=ok
// SIG undefined FUN_14991494e(void)

void FUN_14991494e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  int local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    plVar6 = (longlong *)*param_2;
    lVar7 = (longlong)*(int *)(param_2 + 1) << 4;
    do {
      if (*(int *)(param_1 + 7) == 0) {
        local_78 = *(int *)((longlong)param_1 + 0x3c);
        local_70 = local_70 & 0xffffffff00000000;
        uVar5 = FUN_144bc435c(param_1[6],*(undefined8 *)*plVar6,
                              *(undefined4 *)((undefined8 *)*plVar6 + 1),param_1[3]);
      }
      else {
        uVar5 = FUN_1446bd6f4(param_1,plVar6);
      }
      if (0 < (int)uVar5) {
        FUN_149914ab6(*param_1);
        uVar4 = local_50;
        local_78 = *(int *)(param_1 + 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulonglong)uVar5 * 10000000;
        local_68 = SUB168(auVar3 / SEXT816((longlong)local_78),0);
        local_70 = *(ulonglong *)(*plVar6 + 0x10);
        FUN_149914b28(local_50,param_1[3],uVar5 * *(int *)((longlong)param_1 + 0x44) * 2);
        plVar2 = (longlong *)param_1[5];
        local_60 = uVar4;
        local_58 = local_48;
        plVar8 = (longlong *)0x0;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          plVar8 = local_48;
        }
        (**(code **)(*plVar2 + 8))(plVar2,&local_60);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar6 = plVar6 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149914ab6 FUN_149914ab6 body=113 status=ok
// SIG undefined FUN_149914ab6(void)

undefined8 * FUN_149914ab6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_1499167d8(*param_1);
  uVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *param_2 = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar4[2] = uVar1;
  puVar4[3] = lVar2;
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bf077a0;
  puVar4[4] = uVar3;
  param_2[1] = puVar4;
  return param_2;
}



// FUNCTION 149914b28 FUN_149914b28 body=156 status=ok
// SIG undefined FUN_149914b28(void)

void FUN_149914b28(longlong param_1,void *param_2,uint param_3,undefined4 param_4,undefined4 param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_1400ec3e6(plVar1,param_3);
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + param_3;
  if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < param_3) {
    FUN_1447403be(plVar1,iVar2);
  }
  else if (param_3 == 0) goto LAB_149914b95;
  memcpy((void *)((longlong)iVar2 + *plVar1),param_2,(longlong)(int)param_3);
LAB_149914b95:
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_7;
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(undefined8 *)(param_1 + 0x38) = param_6;
  return;
}



// FUNCTION 149914bc4 FUN_149914bc4 body=317 status=ok
// SIG undefined FUN_149914bc4(void)

undefined8 * FUN_149914bc4(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bf070c0;
  param_1[1] = &PTR_FUN_14bf071b0;
  param_1[2] = &PTR_LAB_14bf071d0;
  param_1[3] = &PTR_LAB_14bf071f0;
  param_1[4] = &PTR_FUN_14bf07270;
  param_1[5] = &PTR_LAB_14bf072e0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bf077c0;
  FUN_1478057e2(plVar3 + 2,4,4,4,4,4);
  param_1[9] = plVar3 + 2;
  param_1[10] = plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x17] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 149914d02 FUN_149914d02 body=295 status=ok
// SIG undefined FUN_149914d02(void)

void FUN_149914d02(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bf070c0;
  param_1[1] = &PTR_FUN_14bf071b0;
  param_1[2] = &PTR_LAB_14bf071d0;
  param_1[3] = &PTR_LAB_14bf071f0;
  param_1[4] = &PTR_FUN_14bf07270;
  param_1[5] = &PTR_LAB_14bf072e0;
  FUN_149914e2a();
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x12];
  if (lVar3 != 0) {
    FUN_144d8c5b0(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = (longlong *)param_1[0x11];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,1);
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0xc];
  if (lVar3 != 0) {
    FUN_1499145d0(lVar3);
    FUN_1400020a8(lVar3);
  }
  lVar3 = param_1[0xb];
  if (lVar3 != 0) {
    FUN_149915e54(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = (longlong *)param_1[10];
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
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149914e2a FUN_149914e2a body=412 status=ok
// SIG undefined FUN_149914e2a(void)

void FUN_149914e2a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      FUN_149915e54(lVar2);
      FUN_1400020a8(lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      FUN_1499145d0(lVar2);
      FUN_1400020a8(lVar2);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_149916ab0(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_149916ae0(param_1 + 0x78);
    }
    plVar3 = *(longlong **)(param_1 + 0x88);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = 0;
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
    }
    lVar2 = *(longlong *)(param_1 + 0x90);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      FUN_144d8c5b0(lVar2);
      FUN_1400020a8(lVar2);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_144a7e010(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb8) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    plVar3 = (longlong *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_1498eb00c(plVar3,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 4) = 9;
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_1498eb00c(plVar3,iVar1);
    }
    *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = 1;
  }
  return;
}



// FUNCTION 149914fd2 FUN_149914fd2 body=32 status=ok
// SIG undefined FUN_149914fd2(void)

undefined8 FUN_149914fd2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"WebMMedia information not implemented yet");
  return param_2;
}



// FUNCTION 149915006 FUN_149915006 body=32 status=ok
// SIG undefined FUN_149915006(void)

undefined8 FUN_149915006(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"WebMMedia stats information not implemented yet");
  return param_2;
}



// FUNCTION 14991502c FUN_14991502c body=89 status=ok
// SIG undefined FUN_14991502c(void)

undefined8 * FUN_14991502c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 149915090 FUN_149915090 body=618 status=ok
// SIG undefined FUN_149915090(void)

void FUN_149915090(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 **ppuVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  longlong local_70;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [4];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc32944) {
    FUN_144b3d300();
    if (DAT_14cc32944 == -1) {
      DAT_14cc32940 = FUN_141628ed8();
      _Init_thread_footer();
    }
  }
  if (DAT_14cc32940 != '\x01') {
    if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
      FUN_1446be762(param_1,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_38 = 0;
  local_30 = 0x400000000;
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (lVar2 != 0) {
    local_30 = 0x400000001;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    local_58[0] = lVar2;
  }
  local_b0 = 0;
  iVar5 = *(int *)(param_2 + 1);
  uVar3 = *param_2;
  local_b8 = param_1;
  local_a8 = iVar5;
  if (iVar5 == 0) {
    local_a4 = 0;
    iVar5 = 0;
  }
  else {
    FUN_149916700(&local_b0,iVar5,0);
    FUN_149916762(local_b0,uVar3,iVar5);
    iVar5 = local_a8;
  }
  lVar2 = local_b0;
  ppuVar6 = (undefined8 **)(param_1 + 0x58);
  local_98 = (undefined1 *)0x0;
  local_88 = 0;
  local_78 = &PTR_LAB_14bf07890;
  local_68 = 0;
  local_70 = local_b8;
  local_60 = iVar5;
  if (iVar5 == 0) {
    local_5c = 0;
  }
  else {
    FUN_149916700(&local_68,iVar5,0);
    FUN_149916762(local_68,lVar2,iVar5);
  }
  local_98 = &LAB_1446c10e2;
  local_c8 = 0xff;
  FUN_14014aede(&local_a0);
  if (ppuVar6 != &local_a0) {
    puVar4 = *ppuVar6;
    *ppuVar6 = local_a0;
    local_a0 = (undefined8 *)0x0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_149915273;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
LAB_149915273:
  FUN_14991678f(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_14588b8d6(local_58);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14991530a FUN_14991530a body=98 status=ok
// SIG undefined FUN_14991530a(void)

void FUN_14991530a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar3 = 0;
    do {
      (**(code **)**(undefined8 **)(param_1 + 0x40))
                (*(undefined8 **)(param_1 + 0x40),*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)iVar1 * 4 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  FUN_149916bc2(param_1 + 0x30);
  return;
}



// FUNCTION 14991536c FUN_14991536c body=288 status=ok
// SIG undefined FUN_14991536c(void)

undefined8 FUN_14991536c(longlong param_1,uint param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  char *_Str;
  size_t sVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_3 < 1 || (int)param_2 < 0) || (*(int *)(param_1 + 0x60) <= (int)param_2)) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2;
    uVar1 = FUN_144d886c0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar4 * 8));
    *param_4 = uVar1;
    uVar1 = FUN_144d886b0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar4 * 8));
    param_4[1] = uVar1;
    dVar5 = (double)FUN_144d886a0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar4 * 8));
    param_4[2] = (int)(longlong)dVar5;
    _Str = (char *)FUN_144d86640(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar4 * 8));
    local_38 = 0;
    if (_Str == (char *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = strlen(_Str);
      FUN_1446e6fe8(local_138,_Str,sVar2 & 0xffffffff,1);
    }
    FUN_14020fad6(param_4 + 4,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    uVar3 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499154cc FUN_1499154cc body=94 status=ok
// SIG undefined FUN_1499154cc(void)

undefined8 FUN_1499154cc(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x38))(param_1,local_28);
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149915530 FUN_149915530 body=191 status=ok
// SIG undefined FUN_149915530(void)

undefined8 * FUN_149915530(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc32918) {
    FUN_144b3d300(&DAT_14cc32918);
    if (DAT_14cc32918 == -1) {
      FUN_140056680(&DAT_14cc32908,L"Default");
      atexit((_func_5014 *)&LAB_1446be5a6);
      _Init_thread_footer(&DAT_14cc32918);
    }
  }
  *param_2 = 0;
  iVar1 = DAT_14cc32910;
  _Src = DAT_14cc32908;
  lVar2 = (longlong)DAT_14cc32910;
  *(int *)(param_2 + 1) = DAT_14cc32910;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 1499155f0 FUN_1499155f0 body=449 status=ok
// SIG undefined FUN_1499155f0(void)

longlong * FUN_1499155f0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  char *_Str;
  size_t sVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined8 local_150;
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_140056680(param_2,&DAT_149e01fe8);
  if (param_4 == -1) goto LAB_14991573e;
  if (param_3 == 6) {
    if (*(int *)(param_1 + 0x50) <= param_4) goto LAB_14991573e;
    lVar1 = FUN_144d86630(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)param_4 * 8));
    if (lVar1 == 0) goto LAB_14991576a;
    lVar2 = *(longlong *)(param_1 + 0x48);
LAB_149915697:
    _Str = (char *)FUN_144d86630(*(undefined8 *)(lVar2 + (longlong)param_4 * 8));
    local_48 = 0;
    if (_Str == (char *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar3 = strlen(_Str);
      FUN_1446e6fe8(local_148,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_140056680(&local_158,local_40);
  }
  else {
    if ((param_3 != 0) || (*(int *)(param_1 + 0x60) <= param_4)) goto LAB_14991573e;
    lVar1 = FUN_144d86630(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)param_4 * 8));
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x58);
      goto LAB_149915697;
    }
LAB_14991576a:
    FUN_140002266(&local_158,L"Track %d",param_4);
  }
  if (&local_158 == param_2) {
    if (local_158 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_158;
    local_158 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_150;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_150._4_4_;
    local_150 = 0;
  }
  if ((lVar1 != 0) && (local_48 != 0)) {
    FUN_1400020a8();
  }
LAB_14991573e:
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499157b2 FUN_1499157b2 body=278 status=ok
// SIG undefined FUN_1499157b2(void)

undefined8 FUN_1499157b2(longlong param_1,int param_2,int param_3,ulonglong *param_4)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == -1 || param_3 != 0) || (*(int *)(param_1 + 0x50) <= param_2)) {
    uVar4 = 0;
  }
  else {
    lVar5 = (longlong)param_2;
    lVar3 = FUN_144d88140(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar5 * 8));
    uVar2 = FUN_144d88130(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar5 * 8));
    *param_4 = (ulonglong)uVar2 | lVar3 << 0x20;
    dVar1 = (double)FUN_144d88150(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar5 * 8));
    *(float *)(param_4 + 1) = (float)dVar1;
    uVar4 = FUN_144d86640(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar5 * 8));
    FUN_1400b22c2(&local_38,uVar4);
    if (param_4 + 4 == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_4[4] != 0) {
        FUN_1400020a8();
      }
      param_4[4] = local_38;
      *(undefined4 *)(param_4 + 5) = local_30;
      *(undefined4 *)((longlong)param_4 + 0x2c) = local_2c;
    }
    *(undefined1 *)((longlong)param_4 + 0xc) = 1;
    *(int *)(param_4 + 2) = (int)param_4[1];
    *(undefined1 *)((longlong)param_4 + 0x14) = 0;
    *(int *)(param_4 + 3) = (int)param_4[1];
    uVar4 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499158ca FUN_1499158ca body=308 status=ok
// SIG undefined FUN_1499158ca(void)

undefined8 FUN_1499158ca(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 6) {
    iVar1 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = param_3;
  }
  else {
    if (param_2 != 0) goto LAB_149915914;
    iVar1 = *(int *)(param_1 + 0x9c);
    *(int *)(param_1 + 0x9c) = param_3;
  }
  if (iVar1 != param_3) {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 3) {
      (**(code **)(*(longlong *)(param_1 + -8) + 0x40))(param_1 + -8,param_1 + 0xa8);
      iVar1 = *(int *)(param_1 + 0x98);
    }
    if (iVar1 != 0) {
      if ((longlong)*(int *)(param_1 + 0x9c) != -1) {
        uVar5 = *(undefined8 *)
                 (*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x9c) * 8);
        uVar4 = FUN_144d86660(uVar5,&local_48);
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        uVar2 = FUN_144d886b0(uVar5);
        dVar6 = (double)FUN_144d886a0(uVar5);
        uVar5 = FUN_144d86650(uVar5);
        local_50 = local_48;
        local_58 = uVar4;
        FUN_149914654(uVar3,uVar5,(int)dVar6,uVar2);
      }
      if ((longlong)*(int *)(param_1 + 0xa0) != -1) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        uVar3 = FUN_144d86650(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x48) +
                               (longlong)*(int *)(param_1 + 0xa0) * 8));
        FUN_1446bde92(uVar5,uVar3);
      }
    }
  }
LAB_149915914:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149915a42 FUN_149915a42 body=86 status=ok
// SIG undefined FUN_149915a42(void)

longlong * FUN_149915a42(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  
  if (*(uint *)(param_1 + 0xa0) < 2) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_144d8ce10(*(undefined8 *)(param_1 + 0x78));
    auVar2._0_8_ = ((double)lVar1 / 1000.0) * 10.0 + 0.5;
    auVar2._8_8_ = 0;
    auVar2 = roundpd(auVar2,auVar2,1);
    lVar1 = (longlong)auVar2._0_8_;
  }
  *param_2 = lVar1;
  return param_2;
}



// FUNCTION 149915aba FUN_149915aba body=119 status=ok
// SIG undefined FUN_149915aba(void)

undefined8 * FUN_149915aba(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = 1;
  local_24 = 0;
  local_20 = 1;
  local_1c = 0;
  FUN_1498cc958(param_2);
  local_38 = 1;
  local_34 = 0x3f800000;
  local_30 = 1;
  local_2c = 0x3f800000;
  FUN_1498cc958(param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149915b60 FUN_149915b60 body=126 status=ok
// SIG undefined FUN_149915b60(void)

undefined8 FUN_149915b60(longlong param_1,float param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_2 != 0.0) || (NAN(param_2))) {
    if ((param_2 != 1.0) || (NAN(param_2))) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xa0) = 3;
    iVar4 = *(int *)(param_1 + 0x20);
    uVar2 = iVar4 + 1;
    *(uint *)(param_1 + 0x20) = uVar2;
    uVar3 = 6;
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 2;
    iVar4 = *(int *)(param_1 + 0x20);
    uVar2 = iVar4 + 1;
    *(uint *)(param_1 + 0x20) = uVar2;
    uVar3 = 7;
  }
  if (*(uint *)(param_1 + 0x24) < uVar2) {
    FUN_1498eb00c((longlong *)(param_1 + 0x18),iVar4);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + (longlong)iVar4 * 4) = uVar3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 149915bde FUN_149915bde body=226 status=ok
// SIG undefined FUN_149915bde(void)

void FUN_149915bde(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)*param_2 + 0x60))((longlong *)*param_2,&local_30);
  if (*(longlong *)(param_1 + 0xc0) <= local_30) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    local_30 = *param_2;
    local_28 = (longlong *)param_2[1];
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    FUN_14780aa8e(lVar4 + 0x1c0,&local_30);
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149915cc2 FUN_149915cc2 body=223 status=ok
// SIG undefined FUN_149915cc2(void)

void FUN_149915cc2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,&local_30);
  if (*(longlong *)(param_1 + 0xc0) <= local_30) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    local_30 = *param_2;
    local_28 = (longlong *)param_2[1];
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    FUN_147808300(lVar4 + 8,&local_30);
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149915dd0 FUN_149915dd0 body=34 status=ok
// SIG undefined FUN_149915dd0(void)

int FUN_149915dd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    iVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    iVar1 = *(int *)(lVar2 + 0x24) << 2;
  }
  return iVar1;
}



// FUNCTION 149915e14 FUN_149915e14 body=64 status=ok
// SIG undefined FUN_149915e14(void)

void FUN_149915e14(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 149915e54 FUN_149915e54 body=154 status=ok
// SIG undefined FUN_149915e54(void)

void FUN_149915e54(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  FUN_149915eee();
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x50) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x40) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_149916cfe(*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 149915eee FUN_149915eee body=90 status=ok
// SIG undefined FUN_149915eee(void)

void FUN_149915eee(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x58) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x58,0xff);
  }
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    FUN_14080c2b4();
  }
  if (*(char *)(param_1 + 0x69) == '\x01') {
    FUN_144d827c0(param_1);
    *(undefined1 *)(param_1 + 0x69) = 0;
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 149915f48 FUN_149915f48 body=113 status=ok
// SIG undefined FUN_149915f48(void)

undefined8 * FUN_149915f48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_149916d48(*param_1);
  uVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *param_2 = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar4[2] = uVar1;
  puVar4[3] = lVar2;
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bf07920;
  puVar4[4] = uVar3;
  param_2[1] = puVar4;
  return param_2;
}



// FUNCTION 149915fd0 FUN_149915fd0 body=38 status=ok
// SIG undefined FUN_149915fd0(void)

undefined8 FUN_149915fd0(undefined8 param_1,int param_2)

{
  FUN_149914d02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149915ff6 FUN_149915ff6 body=45 status=ok
// SIG undefined FUN_149915ff6(void)

longlong FUN_149915ff6(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_149914d02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149916024 FUN_149916024 body=45 status=ok
// SIG undefined FUN_149916024(void)

longlong FUN_149916024(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_149914d02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149916052 FUN_149916052 body=45 status=ok
// SIG undefined FUN_149916052(void)

longlong FUN_149916052(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_149914d02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149916080 FUN_149916080 body=45 status=ok
// SIG undefined FUN_149916080(void)

longlong FUN_149916080(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_149914d02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1499160ae FUN_1499160ae body=45 status=ok
// SIG undefined FUN_1499160ae(void)

longlong FUN_1499160ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_149914d02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1499160dc FUN_1499160dc body=88 status=ok
// SIG undefined FUN_1499160dc(void)

undefined8 * FUN_1499160dc(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_14bf07430;
  param_1[1] = &PTR_LAB_14bf07560;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14991613e FUN_14991613e body=147 status=ok
// SIG undefined FUN_14991613e(void)

undefined8 * FUN_14991613e(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x60,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  lpCriticalSection[1].LockCount = 0;
  lpCriticalSection[1].RecursionCount = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  lpCriticalSection[1].SpinCount = (ULONG_PTR)puVar1;
  lpCriticalSection[1].LockSemaphore = puVar1;
  lpCriticalSection[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  *param_1 = lpCriticalSection;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14bf076b0;
  puVar1[2] = lpCriticalSection;
  param_1[1] = puVar1;
  return param_1;
}



// FUNCTION 1499161d2 FUN_1499161d2 body=41 status=ok
// SIG undefined FUN_1499161d2(void)

void FUN_1499161d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_14991621a(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1499161fc FUN_1499161fc body=29 status=ok
// SIG undefined FUN_1499161fc(void)

undefined8 FUN_1499161fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14991621a FUN_14991621a body=137 status=ok
// SIG undefined FUN_14991621a(void)

void FUN_14991621a(LPCRITICAL_SECTION param_1)

{
  ULONG_PTR UVar1;
  longlong *plVar2;
  ULONG_PTR UVar3;
  
  FUN_1499162a4();
  while (UVar1 = *(ULONG_PTR *)param_1[1].SpinCount, UVar1 != 0) {
    plVar2 = *(longlong **)(UVar1 + 8);
    UVar3 = param_1[1].SpinCount;
    param_1[1].SpinCount = UVar1;
    *(undefined8 *)(UVar1 + 8) = 0;
    if (UVar3 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(plVar2[1] + 8))(plVar2 + 1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2,1);
    }
  }
  while ((ULONG_PTR *)param_1[1].SpinCount != (ULONG_PTR *)0x0) {
    param_1[1].SpinCount = *(ULONG_PTR *)param_1[1].SpinCount;
    FUN_1400020a8();
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1499162a4 FUN_1499162a4 body=70 status=ok
// SIG undefined FUN_1499162a4(void)

void FUN_1499162a4(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  
  EnterCriticalSection(param_1);
  do {
    iVar2 = param_1[1].LockCount;
    do {
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001499162e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection(param_1);
        return;
      }
      plVar1 = *(longlong **)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
      iVar2 = iVar2 + -1;
      param_1[1].LockCount = iVar2;
    } while (plVar1 == (longlong *)0x0);
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
  } while( true );
}



// FUNCTION 1499162ea FUN_1499162ea body=132 status=ok
// SIG undefined FUN_1499162ea(void)

void FUN_1499162ea(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1499163b4 FUN_1499163b4 body=68 status=ok
// SIG undefined FUN_1499163b4(void)

undefined8 * FUN_1499163b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bf076d0;
  param_1[1] = &PTR_LAB_14bf07720;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1499163f8 FUN_1499163f8 body=72 status=ok
// SIG undefined FUN_1499163f8(void)

undefined8 * FUN_1499163f8(undefined8 *param_1,int param_2)

{
  param_1[-1] = &PTR_LAB_14bf076d0;
  *param_1 = &PTR_LAB_14bf07720;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -1);
  }
  return param_1 + -1;
}



// FUNCTION 149916440 FUN_149916440 body=62 status=ok
// SIG undefined FUN_149916440(void)

undefined8 * FUN_149916440(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bf07740;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14991647e FUN_14991647e body=147 status=ok
// SIG undefined FUN_14991647e(void)

undefined8 * FUN_14991647e(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x60,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  lpCriticalSection[1].LockCount = 0;
  lpCriticalSection[1].RecursionCount = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  lpCriticalSection[1].SpinCount = (ULONG_PTR)puVar1;
  lpCriticalSection[1].LockSemaphore = puVar1;
  lpCriticalSection[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  *param_1 = lpCriticalSection;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14bf07760;
  puVar1[2] = lpCriticalSection;
  param_1[1] = puVar1;
  return param_1;
}



// FUNCTION 149916512 FUN_149916512 body=41 status=ok
// SIG undefined FUN_149916512(void)

void FUN_149916512(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_14991655a(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14991653c FUN_14991653c body=29 status=ok
// SIG undefined FUN_14991653c(void)

undefined8 FUN_14991653c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14991655a FUN_14991655a body=140 status=ok
// SIG undefined FUN_14991655a(void)

void FUN_14991655a(LPCRITICAL_SECTION param_1)

{
  ULONG_PTR UVar1;
  longlong *plVar2;
  ULONG_PTR UVar3;
  
  FUN_1499165e6();
  while (UVar1 = *(ULONG_PTR *)param_1[1].SpinCount, UVar1 != 0) {
    plVar2 = *(longlong **)(UVar1 + 8);
    UVar3 = param_1[1].SpinCount;
    param_1[1].SpinCount = UVar1;
    *(undefined8 *)(UVar1 + 8) = 0;
    if (UVar3 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(plVar2[1] + 8))(plVar2 + 1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x128))(plVar2,1);
    }
  }
  while ((ULONG_PTR *)param_1[1].SpinCount != (ULONG_PTR *)0x0) {
    param_1[1].SpinCount = *(ULONG_PTR *)param_1[1].SpinCount;
    FUN_1400020a8();
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1499165e6 FUN_1499165e6 body=73 status=ok
// SIG undefined FUN_1499165e6(void)

void FUN_1499165e6(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  
  EnterCriticalSection(param_1);
  do {
    iVar2 = param_1[1].LockCount;
    do {
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149916628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection(param_1);
        return;
      }
      plVar1 = *(longlong **)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
      iVar2 = iVar2 + -1;
      param_1[1].LockCount = iVar2;
    } while (plVar1 == (longlong *)0x0);
    (**(code **)(*plVar1 + 0x128))(plVar1,1);
  } while( true );
}



// FUNCTION 149916630 FUN_149916630 body=132 status=ok
// SIG undefined FUN_149916630(void)

void FUN_149916630(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1499166b6 FUN_1499166b6 body=74 status=ok
// SIG undefined FUN_1499166b6(void)

void FUN_1499166b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 149916700 FUN_149916700 body=98 status=ok
// SIG undefined FUN_149916700(void)

void FUN_149916700(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149916762 FUN_149916762 body=45 status=ok
// SIG undefined FUN_149916762(void)

void FUN_149916762(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14991678f FUN_14991678f body=73 status=ok
// SIG undefined FUN_14991678f(void)

void FUN_14991678f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1499167d8 FUN_1499167d8 body=311 status=ok
// SIG undefined FUN_1499167d8(void)

undefined8 * FUN_1499167d8(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  ULONG_PTR UVar3;
  ULONG_PTR UVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  EnterCriticalSection(param_1);
  iVar2 = param_1[1].LockCount;
  if ((longlong)iVar2 < 1) {
    if (*(longlong *)param_1[1].SpinCount == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)0x0;
      do {
        puVar7 = *(undefined8 **)(*(longlong *)param_1[1].SpinCount + 8);
        plVar1 = puVar7 + 1;
        cVar5 = (**(code **)(puVar7[1] + 0x10))(plVar1);
        if (cVar5 == '\0') break;
        UVar3 = *(ULONG_PTR *)param_1[1].SpinCount;
        if (UVar3 != 0) {
          UVar4 = param_1[1].SpinCount;
          param_1[1].SpinCount = UVar3;
          *(undefined8 *)(UVar3 + 8) = 0;
          if (UVar4 != 0) {
            FUN_1400020a8();
          }
        }
        (**(code **)(*plVar1 + 8))(plVar1);
        if (puVar6 != (undefined8 *)0x0) {
          iVar2 = param_1[1].LockCount;
          param_1[1].LockCount = iVar2 + 1U;
          if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
            FUN_1499162ea(param_1 + 1,iVar2);
          }
          *(undefined8 **)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = puVar7;
          puVar7 = puVar6;
        }
        puVar6 = puVar7;
      } while (*(longlong *)param_1[1].SpinCount != 0);
    }
  }
  else {
    puVar6 = *(undefined8 **)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
    param_1[1].LockCount = iVar2 + -1;
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *puVar6 = &PTR_LAB_14bf076d0;
    puVar6[1] = &PTR_LAB_14bf07720;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    puVar6[7] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
  }
  return puVar6;
}



// FUNCTION 14991691e FUN_14991691e body=54 status=ok
// SIG undefined FUN_14991691e(void)

longlong FUN_14991691e(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 149916954 FUN_149916954 body=137 status=ok
// SIG undefined FUN_149916954(void)

void FUN_149916954(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_1499169b3:
    if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001499169cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x40))(param_2,1);
      return;
    }
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1499169b3;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*param_1 == 0) {
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x40))(param_2,1);
      }
    }
    else {
      FUN_1499169de();
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
                    /* WARNING: Could not recover jumptable at 0x0001499169af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1499169de FUN_1499169de body=170 status=ok
// SIG undefined FUN_1499169de(void)

void FUN_1499169de(LPCRITICAL_SECTION param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    EnterCriticalSection(param_1);
    plVar1 = (longlong *)(param_2 + 8);
    cVar4 = (**(code **)(*(longlong *)(param_2 + 8) + 0x10))(plVar1);
    if (cVar4 == '\0') {
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      puVar5[1] = param_2;
      if (puVar5 != (undefined8 *)0x0) {
        puVar3 = param_1[1].LockSemaphore;
        param_1[1].LockSemaphore = puVar5;
        *puVar3 = puVar5;
      }
    }
    else {
      (**(code **)(*plVar1 + 8))(plVar1);
      iVar2 = param_1[1].LockCount;
      param_1[1].LockCount = iVar2 + 1U;
      if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
        FUN_1499162ea(param_1 + 1,iVar2);
      }
      *(longlong *)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x000149916a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 149916a88 FUN_149916a88 body=9 status=ok
// SIG undefined FUN_149916a88(void)

void FUN_149916a88(longlong param_1)

{
  FUN_147805a4c(param_1 + 0x10);
  return;
}



// FUNCTION 149916a92 FUN_149916a92 body=29 status=ok
// SIG undefined FUN_149916a92(void)

undefined8 FUN_149916a92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149916ab0 FUN_149916ab0 body=48 status=ok
// SIG undefined FUN_149916ab0(void)

void FUN_149916ab0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 149916ae0 FUN_149916ae0 body=48 status=ok
// SIG undefined FUN_149916ae0(void)

void FUN_149916ae0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 149916b10 FUN_149916b10 body=14 status=ok
// SIG undefined FUN_149916b10(void)

void FUN_149916b10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 149916b1e FUN_149916b1e body=29 status=ok
// SIG undefined FUN_149916b1e(void)

undefined8 FUN_149916b1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149916b3c FUN_149916b3c body=132 status=ok
// SIG undefined FUN_149916b3c(void)

void FUN_149916b3c(longlong param_1,int param_2)

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



// FUNCTION 149916bc2 FUN_149916bc2 body=48 status=ok
// SIG undefined FUN_149916bc2(void)

void FUN_149916bc2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 149916bf2 FUN_149916bf2 body=132 status=ok
// SIG undefined FUN_149916bf2(void)

void FUN_149916bf2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149916c78 FUN_149916c78 body=132 status=ok
// SIG undefined FUN_149916c78(void)

void FUN_149916c78(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149916cfe FUN_149916cfe body=74 status=ok
// SIG undefined FUN_149916cfe(void)

void FUN_149916cfe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 149916d48 FUN_149916d48 body=303 status=ok
// SIG undefined FUN_149916d48(void)

undefined8 * FUN_149916d48(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  ULONG_PTR UVar3;
  ULONG_PTR UVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  EnterCriticalSection(param_1);
  iVar2 = param_1[1].LockCount;
  if ((longlong)iVar2 < 1) {
    if (*(longlong *)param_1[1].SpinCount == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)0x0;
      do {
        puVar7 = *(undefined8 **)(*(longlong *)param_1[1].SpinCount + 8);
        plVar1 = puVar7 + 1;
        cVar5 = (**(code **)(puVar7[1] + 0x10))(plVar1);
        if (cVar5 == '\0') break;
        UVar3 = *(ULONG_PTR *)param_1[1].SpinCount;
        if (UVar3 != 0) {
          UVar4 = param_1[1].SpinCount;
          param_1[1].SpinCount = UVar3;
          *(undefined8 *)(UVar3 + 8) = 0;
          if (UVar4 != 0) {
            FUN_1400020a8();
          }
        }
        (**(code **)(*plVar1 + 8))(plVar1);
        if (puVar6 != (undefined8 *)0x0) {
          iVar2 = param_1[1].LockCount;
          param_1[1].LockCount = iVar2 + 1U;
          if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
            FUN_149916630(param_1 + 1,iVar2);
          }
          *(undefined8 **)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = puVar7;
          puVar7 = puVar6;
        }
        puVar6 = puVar7;
      } while (*(longlong *)param_1[1].SpinCount != 0);
    }
  }
  else {
    puVar6 = *(undefined8 **)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
    param_1[1].LockCount = iVar2 + -1;
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar6 = &PTR_LAB_14bf07430;
    puVar6[1] = &PTR_LAB_14bf07560;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
  }
  return puVar6;
}



// FUNCTION 149916e86 FUN_149916e86 body=54 status=ok
// SIG undefined FUN_149916e86(void)

longlong FUN_149916e86(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 149916ebc FUN_149916ebc body=143 status=ok
// SIG undefined FUN_149916ebc(void)

void FUN_149916ebc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_149916f1e:
    if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149916f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x128))(param_2,1);
      return;
    }
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_149916f1e;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*param_1 == 0) {
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x128))(param_2,1);
      }
    }
    else {
      FUN_149916f4c();
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
                    /* WARNING: Could not recover jumptable at 0x000149916f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149916f4c FUN_149916f4c body=170 status=ok
// SIG undefined FUN_149916f4c(void)

void FUN_149916f4c(LPCRITICAL_SECTION param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    EnterCriticalSection(param_1);
    plVar1 = (longlong *)(param_2 + 8);
    cVar4 = (**(code **)(*(longlong *)(param_2 + 8) + 0x10))(plVar1);
    if (cVar4 == '\0') {
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      puVar5[1] = param_2;
      if (puVar5 != (undefined8 *)0x0) {
        puVar3 = param_1[1].LockSemaphore;
        param_1[1].LockSemaphore = puVar5;
        *puVar3 = puVar5;
      }
    }
    else {
      (**(code **)(*plVar1 + 8))(plVar1);
      iVar2 = param_1[1].LockCount;
      param_1[1].LockCount = iVar2 + 1U;
      if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
        FUN_149916630(param_1 + 1,iVar2);
      }
      *(longlong *)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x000149916fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 149916ff6 FUN_149916ff6 body=441 status=ok
// SIG undefined FUN_149916ff6(void)

void FUN_149916ff6(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined1 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar11 = FUN_144821ef4();
  uVar5 = *param_2;
  local_68 = *param_8;
  local_50 = *param_6;
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_58 = *param_5;
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_60 = *param_4;
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_70 = &DAT_14ca8d260;
  local_78 = &DAT_14ca8cf60;
  local_80 = param_7;
  local_88 = &local_50;
  FUN_14741effa(uVar5,lVar11,&local_60,&local_58);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499171b0 FUN_1499171b0 body=31 status=ok
// SIG undefined FUN_1499171b0(void)

undefined8 FUN_1499171b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1499171ec FUN_1499171ec body=93 status=ok
// SIG undefined FUN_1499171ec(void)

void FUN_1499171ec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf079b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14991724a FUN_14991724a body=126 status=ok
// SIG undefined FUN_14991724a(void)

void FUN_14991724a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bf079b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001499172b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1499172c8 FUN_1499172c8 body=21 status=ok
// SIG undefined FUN_1499172c8(void)

undefined8 FUN_1499172c8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1499172e2 FUN_1499172e2 body=130 status=ok
// SIG undefined FUN_1499172e2(void)

longlong * FUN_1499172e2(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xe8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bf07a70;
  FUN_149914bc4(plVar3 + 2,param_3);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  }
  return param_2;
}



// FUNCTION 149917364 FUN_149917364 body=9 status=ok
// SIG undefined FUN_149917364(void)

void FUN_149917364(longlong param_1)

{
  FUN_149914d02(param_1 + 0x10);
  return;
}



// FUNCTION 14991736e FUN_14991736e body=29 status=ok
// SIG undefined FUN_14991736e(void)

undefined8 FUN_14991736e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14991738c FUN_14991738c body=36 status=ok
// SIG undefined FUN_14991738c(void)

undefined8 FUN_14991738c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1499173cc FUN_1499173cc body=93 status=ok
// SIG undefined FUN_1499173cc(void)

void FUN_1499173cc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf07ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14991742a FUN_14991742a body=123 status=ok
// SIG undefined FUN_14991742a(void)

void FUN_14991742a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bf07ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1499174a6 FUN_1499174a6 body=21 status=ok
// SIG undefined FUN_1499174a6(void)

undefined8 FUN_1499174a6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1499174bc FUN_1499174bc body=31 status=ok
// SIG undefined FUN_1499174bc(void)

bool FUN_1499174bc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  return 0 < iVar1;
}



// FUNCTION 1499174dc FUN_1499174dc body=138 status=ok
// SIG undefined FUN_1499174dc(void)

undefined8 * FUN_1499174dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"WebMMedia",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_1405f3750(uVar1,local_28,0);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149917568 FUN_149917568 body=152 status=ok
// SIG undefined FUN_149917568(void)

undefined8 FUN_149917568(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"MediaPlayerDisplayName";
  local_28 = 0x16;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"FWebMMediaFactoryModule";
  local_28 = 0x17;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"WebM Media");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149917602 FUN_149917602 body=120 status=ok
// SIG undefined FUN_149917602(void)

undefined8 * FUN_149917602(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc32960) {
    FUN_144b3d300(&DAT_14cc32960);
    if (DAT_14cc32960 == -1) {
      FUN_1446f470e(&DAT_14cc32958,L"WebMMedia",1);
      _Init_thread_footer(&DAT_14cc32960);
    }
  }
  *param_2 = DAT_14cc32958;
  return param_2;
}



// FUNCTION 149917698 FUN_149917698 body=1582 status=ok
// SIG undefined FUN_149917698(void)

undefined8
FUN_149917698(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110 [2];
  undefined1 local_fc [4];
  wchar_t *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  longlong local_b8 [2];
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_140056680(&local_60,&DAT_149e3579e);
  local_140 = 0;
  local_148 = 0;
  cVar4 = FUN_1407cdbc6(param_2,&local_60,local_b8 + 2,local_b8);
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar4 == '\0') {
    uVar7 = 0;
    if (param_5 == (longlong *)0x0) goto LAB_149917819;
    local_60 = L"NoSchemeFound";
    local_58 = 0xd;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"FWebMMediaFactoryModule";
    local_58 = 0x17;
    FUN_1446e940c(&local_80,&local_60);
    FUN_140208bae(&local_60,&local_80,&local_70,L"No URI scheme found");
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
      FUN_14001d63e(param_5,iVar3);
    }
    FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,&local_60);
    local_f8[0] = local_60;
  }
  else {
    cVar4 = FUN_144a23846(param_1 + 0x30,local_b8 + 2);
    if (cVar4 != '\0') {
      puVar5 = local_a8;
      if ((int)uStack_a0 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      lVar6 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)puVar5 + lVar6);
        uVar9 = (ulonglong)uVar8;
        uVar10 = *(ushort *)((longlong)&DAT_14a8e6a18 + lVar6);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_149917a9f;
LAB_149917a6a:
        lVar6 = lVar6 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_149917a6a;
      }
      uVar7 = 0x50;
      if (uVar8 != uVar10) goto LAB_149917819;
LAB_149917a9f:
      FUN_144a06df0(local_c8,local_b8,0);
      cVar4 = FUN_144a23846(param_1 + 0x10,local_c8);
      if (cVar4 == '\0') {
        if (param_5 != (longlong *)0x0) {
          FUN_140009b9a(local_110,local_c8);
          local_60 = L"ExtensionNotSupported";
          local_58 = 0x15;
          FUN_1446e940c(local_fc,&local_60);
          local_60 = L"FWebMMediaFactoryModule";
          local_58 = 0x17;
          FUN_1446e940c(local_134,&local_60);
          FUN_140208bae(local_130,local_134,local_fc,L"The file extension \'{0}\' is not supported")
          ;
          FUN_14023409e(&local_120,local_130,1);
          local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
          FUN_14023423e(local_50,local_110);
          local_78 = &local_40;
          local_80 = &local_60;
          FUN_14010d304(&local_70);
          local_90 = local_120;
          local_88 = local_118;
          if (local_118 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_118 + 1) = (int)local_118[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_f8,&local_90,&local_70);
          FUN_14007f2db(local_70,local_68);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (local_50[0] != (longlong *)0x0) {
            (**(code **)(*local_50[0] + 0x10))();
          }
          if (local_118 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_118 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar2 = (int *)((longlong)local_118 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_118 + 0x10))(local_118);
              }
            }
          }
          if (local_110[0] != (longlong *)0x0) {
            (**(code **)(*local_110[0] + 0x10))();
          }
          iVar3 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
            FUN_14001d63e(param_5,iVar3);
          }
          FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,local_f8);
          if (local_f8[0] != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_f8[0] + 0x10))();
          }
          if (local_130[0] != (longlong *)0x0) {
            (**(code **)(*local_130[0] + 0x10))();
          }
        }
        if (local_c8[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = 0;
      }
      else {
        if (local_c8[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = 0x50;
      }
      goto LAB_149917819;
    }
    uVar7 = 0;
    if (param_5 == (longlong *)0x0) goto LAB_149917819;
    FUN_140009b9a(local_d8,local_b8 + 2);
    local_60 = L"SchemeNotSupported";
    local_58 = 0x12;
    FUN_1446e940c(local_130,&local_60);
    local_60 = L"FWebMMediaFactoryModule";
    local_58 = 0x17;
    FUN_1446e940c(local_fc,&local_60);
    FUN_140208bae(local_f8,local_fc,local_130,L"The URI scheme \'{0}\' is not supported");
    FUN_14023409e(&local_e8,local_f8,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_d8);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_e8;
    local_88 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
      FUN_14001d63e(param_5,iVar3);
    }
    FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
  }
  uVar7 = 0;
  if (local_f8[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_f8[0] + 0x10))();
  }
LAB_149917819:
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149917cc8 FUN_149917cc8 body=43 status=ok
// SIG undefined FUN_149917cc8(void)

undefined8 FUN_149917cc8(undefined8 param_1,int param_2)

{
  FUN_145dc3f0c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149917cf4 FUN_149917cf4 body=36 status=ok
// SIG undefined FUN_149917cf4(void)

undefined8 FUN_149917cf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149917d34 FUN_149917d34 body=93 status=ok
// SIG undefined FUN_149917d34(void)

void FUN_149917d34(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf07c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149917d92 FUN_149917d92 body=123 status=ok
// SIG undefined FUN_149917d92(void)

void FUN_149917d92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bf07c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149917e0e FUN_149917e0e body=21 status=ok
// SIG undefined FUN_149917e0e(void)

undefined8 FUN_149917e0e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149917e2c FUN_149917e2c body=36 status=ok
// SIG undefined FUN_149917e2c(void)

undefined8 FUN_149917e2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149917e6c FUN_149917e6c body=93 status=ok
// SIG undefined FUN_149917e6c(void)

void FUN_149917e6c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf07d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149917eca FUN_149917eca body=123 status=ok
// SIG undefined FUN_149917eca(void)

void FUN_149917eca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bf07d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149917f46 FUN_149917f46 body=21 status=ok
// SIG undefined FUN_149917f46(void)

undefined8 FUN_149917f46(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149917f5c FUN_149917f5c body=109 status=ok
// SIG undefined FUN_149917f5c(void)

undefined8 FUN_149917f5c(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x30) = param_3;
    FUN_140bee9ec(param_1 + 0x20);
    local_28 = 0;
    uStack_20 = 0;
    FUN_143feb9fc(*(undefined8 *)(param_1 + 0x48));
    uVar1 = FUN_1446c17c4(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149917fe2 FUN_149917fe2 body=141 status=ok
// SIG undefined FUN_149917fe2(void)

void FUN_149917fe2(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(), -1 < iVar1)) {
    iVar1 = *(int *)(param_1 + 0x24);
    while (iVar1 == 0) {
      FUN_14000f986(0x3c23d70a);
      iVar1 = *(int *)(param_1 + 0x24);
    }
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))();
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 149918090 FUN_149918090 body=49 status=ok
// SIG undefined FUN_149918090(void)

int FUN_149918090(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (param_1 != (longlong *)0x0 && iVar3 == 0) {
    (**(code **)(*param_1 + 0x28))(param_1,1);
  }
  return iVar3;
}



// FUNCTION 1499180c2 FUN_1499180c2 body=282 status=ok
// SIG undefined FUN_1499180c2(void)

undefined8 FUN_1499180c2(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  if (iVar1 < 0) goto LAB_1499181ae;
  local_1c = 0;
  iVar1 = (**(code **)(*local_18 + 0x108))();
  if (iVar1 < 0) goto LAB_1499181ae;
  local_20 = 1;
  iVar1 = (**(code **)(*local_18 + 0x118))();
  if (iVar1 < 0) goto LAB_1499181ae;
  if (local_1c < 0x6a) {
    if (local_1c == 1) {
      if (*(int *)(param_1 + 0x20) != 0) goto LAB_14991818a;
    }
    else if ((local_1c == 0x65) && (local_20 < 0)) {
      if (local_20 == -0x3ff2c906) {
        *(undefined1 *)(param_1 + 0x50) = 1;
      }
    }
    else {
LAB_14991818a:
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                        (*(longlong **)(param_1 + 0x10),param_1,0);
      if (-1 < iVar1) goto LAB_1499181ae;
    }
  }
  else if (local_1c != 0x6a) {
    if (local_1c == 0xd3) {
      if (*(int *)(param_1 + 0x20) == 0) {
        LOCK();
        *(undefined4 *)(param_1 + 0x20) = 1;
        UNLOCK();
      }
    }
    else if (local_1c == 0x138) goto LAB_14991819e;
    goto LAB_14991818a;
  }
LAB_14991819e:
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x24) = 1;
  UNLOCK();
LAB_1499181ae:
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1499181de FUN_1499181de body=363 status=ok
// SIG undefined FUN_1499181de(void)

undefined8 *
FUN_1499181de(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70;
  int iStack_6c;
  longlong *local_68;
  int local_60;
  uint local_5c;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = 0;
  *param_2 = 0;
  local_50 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))(*(longlong **)(param_1 + 0x18),&local_50);
  local_58 = (longlong *)0x0;
  MFCreateTopology();
  local_5c = 0;
  (**(code **)(*local_50 + 0x108))(local_50,&local_5c);
  FUN_14991834a(local_50,local_5c);
  uVar1 = *param_2;
  if (local_5c != 0) {
    do {
      local_60 = 0;
      local_68 = (longlong *)0x0;
      (**(code **)(*local_50 + 0x110))(local_50,uVar2,&local_60,&local_68);
      if (local_60 != 0) {
        local_88 = local_68;
        local_80 = param_3;
        local_78 = param_4;
        FUN_1499186ac(param_1,&local_70,local_58,local_50);
        if (iStack_6c != 0 || local_70 != 0) {
          uVar1 = CONCAT44(iStack_6c,local_70);
        }
      }
      (**(code **)(*local_68 + 0x10))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_5c);
  }
  *param_2 = uVar1;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))(*(longlong **)(param_1 + 0x10),0,local_58);
  (**(code **)(*local_58 + 0x10))();
  (**(code **)(*local_50 + 0x10))();
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14991834a FUN_14991834a body=864 status=ok
// SIG undefined FUN_14991834a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14991834a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  int local_84;
  undefined1 local_80 [16];
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  undefined2 *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = FUN_140d5712e();
  FUN_1446ddc76(&local_58,&DAT_14acb7de8,1);
  FUN_140d570d8(uVar8,&local_70,&local_58);
  puVar9 = (undefined8 *)FUN_14142d800(local_70);
  uVar3 = *(uint *)(puVar9 + 1);
  _Src = (void *)*puVar9;
  auVar5._4_4_ = local_80._12_4_;
  auVar5._0_4_ = uVar3;
  auVar5._8_8_ = 0;
  local_80 = auVar5 << 0x40;
  if ((longlong)(int)uVar3 == 0) {
    local_80 = ZEXT416(uVar3) << 0x40;
LAB_1499183fd:
    puVar10 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(local_80,uVar3,0);
    memcpy((void *)local_80._0_8_,_Src,(longlong)(int)uVar3 * 2);
    if (local_80._8_4_ == 0) goto LAB_1499183fd;
    puVar10 = (undefined2 *)local_80._0_8_;
  }
  iVar6 = FUN_144a8a8b6(puVar10,&DAT_14acb3f34);
  if (iVar6 != 0) goto LAB_149918418;
  puVar9 = (undefined8 *)FUN_1459343a8(local_70);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*puVar9;
  }
  iVar6 = FUN_144a8a8b6(puVar10,&DAT_14bf07f80);
  if (iVar6 != 0) {
    puVar9 = (undefined8 *)FUN_1459343a8(local_70);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*puVar9;
    }
    iVar6 = FUN_144a8a8b6(puVar10,&DAT_14bf07f85);
    if (iVar6 == 0) goto LAB_149918418;
    puVar9 = (undefined8 *)FUN_145934276(local_70);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*puVar9;
    }
    iVar6 = FUN_144a8a8b6(puVar10,&DAT_14bf07f8a);
    if (iVar6 == 0) goto LAB_149918418;
  }
  FUN_1400b22c2(&local_58,&DAT_14b4389c3);
  if (local_80._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_80._8_4_ = iStack_50;
  local_80._0_8_ = local_58;
  local_80._12_4_ = uStack_4c;
LAB_149918418:
  if (param_2 != 0) {
    iVar11 = 0;
    iVar6 = -1;
    do {
      local_84 = 0;
      local_90 = (longlong *)0x0;
      iVar7 = (**(code **)(*param_1 + 0x110))(param_1,iVar11,&local_84,&local_90);
      if (-1 < iVar7) {
        local_60 = (longlong *)0x0;
        (**(code **)(*local_90 + 0x110))(local_90,&local_60);
        (**(code **)(*local_60 + 0x40))(local_60,&local_58);
        auVar4._8_4_ = iStack_50;
        auVar4._0_8_ = local_58;
        auVar4._12_4_ = uStack_4c;
        if (_DAT_1499d7dc0 == auVar4) {
          if (local_84 != 0) {
            (**(code **)(*param_1 + 0x120))(param_1,iVar11);
          }
          local_98 = 0;
          iVar7 = (**(code **)(*local_90 + 0x60))(local_90,&DAT_14ab40830,&local_60,3);
          if (iVar7 < 0) {
            if (iVar6 == -1) goto LAB_149918576;
          }
          else {
            puVar10 = &DAT_149dfb77a;
            if (local_80._8_4_ != 0) {
              puVar10 = (undefined2 *)local_80._0_8_;
            }
            iVar7 = FUN_144a80a00(puVar10,&local_60);
            if (iVar7 == 0) {
LAB_149918576:
              iVar6 = iVar11;
            }
            else if (iVar6 == -1) {
              FUN_1400b22c2(&local_58,&DAT_149e178d0);
              puVar10 = &DAT_149dfb77a;
              if (iStack_50 != 0) {
                puVar10 = local_58;
              }
              iVar7 = FUN_144a80a00(puVar10,&local_60);
              if (local_58 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              iVar6 = -1;
              if (iVar7 == 0) goto LAB_149918576;
            }
          }
        }
      }
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x10))();
      }
      iVar11 = iVar11 + 1;
    } while (param_2 != iVar11);
    if (iVar6 != -1) {
      (**(code **)(*param_1 + 0x118))(param_1,iVar6);
    }
  }
  if (local_80._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1499186ac FUN_1499186ac body=1258 status=ok
// SIG undefined FUN_1499186ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_1499186ac(longlong param_1,ulonglong *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5,undefined8 param_6,char param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong *plVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  ulonglong *local_98;
  undefined8 local_90;
  IMFMediaType *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  (**(code **)(*param_5 + 0x110))(param_5,&local_78);
  (**(code **)(*local_78 + 0x40))(local_78,&local_58);
  auVar8._8_8_ = uStack_50;
  auVar8._0_8_ = local_58;
  if (_DAT_1499d7dc0 == auVar8) {
    if (param_7 == '\0') {
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      *param_2 = 0;
      goto LAB_149918890;
    }
    MFCreateAudioRendererActivate(&local_70);
    cVar11 = FUN_144a61b4f();
    if (cVar11 != '\0') {
      FUN_1446f8bcc(param_1 + 0x40,0);
    }
    local_90 = param_4;
    if (1 < *(int *)(param_1 + 0x48)) {
      (**(code **)(*local_70 + 200))(local_70,&DAT_14ab40860,*(undefined8 *)(param_1 + 0x40));
    }
LAB_14991874f:
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    auVar9._8_8_ = uStack_50;
    auVar9._0_8_ = local_58;
    local_90 = param_4;
    if (_DAT_1499d7dd0 != auVar9) goto LAB_14991874f;
    local_80 = (longlong *)0x0;
    local_98 = param_2;
    (**(code **)(*local_78 + 0x38))(local_78,&local_80);
    local_88 = (IMFMediaType *)0x0;
    MFCreateMediaType(&local_88);
    iVar12 = (**(code **)(*local_80 + 0x40))(local_80,&DAT_1499d7d30,&local_68);
    plVar10 = local_68;
    (**(code **)(*local_80 + 0x50))(local_80,&DAT_1499d7cd0,&local_68);
    (*local_88->lpVtbl->SetGUID)(local_88,(GUID *)&DAT_1499d7cc0,(GUID *)&DAT_1499d7dd0);
    uVar14 = (longlong)plVar10 << 0x20 | (ulonglong)plVar10 >> 0x20;
    if (iVar12 < 0) {
      uVar14 = 0;
    }
    *(ulonglong *)(param_1 + 0x34) = uVar14;
    auVar1._8_8_ = uStack_60;
    auVar1._0_8_ = local_68;
    if ((((_DAT_1499d78e0 == auVar1) ||
         (auVar2._8_8_ = uStack_60, auVar2._0_8_ = local_68, _DAT_1499d78f0 == auVar2)) ||
        (auVar3._8_8_ = uStack_60, auVar3._0_8_ = local_68, _DAT_1499d78d0 == auVar3)) ||
       ((auVar4._8_8_ = uStack_60, auVar4._0_8_ = local_68, _DAT_1499d78b0 == auVar4 ||
        (auVar5._8_8_ = uStack_60, auVar5._0_8_ = local_68, _DAT_1499d78c0 == auVar5)))) {
      (*local_88->lpVtbl->SetGUID)(local_88,(GUID *)&DAT_1499d7cd0,(GUID *)&DAT_1499d78b0);
      *(undefined4 *)(param_1 + 0x3c) = 5;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x34);
      iVar12 = (int)*(undefined8 *)(param_1 + 0x34) << 2;
    }
    else {
      (*local_88->lpVtbl->SetGUID)(local_88,(GUID *)&DAT_1499d7cd0,(GUID *)&DAT_1499d7960);
      *(undefined4 *)(param_1 + 0x3c) = 9;
      uVar13 = *(uint *)(param_1 + 0x34);
      auVar6._8_8_ = uStack_60;
      auVar6._0_8_ = local_68;
      if ((_DAT_1499d7bf0 == auVar6) ||
         (auVar7._8_8_ = uStack_60, auVar7._0_8_ = local_68, _DAT_1499d7c40 == auVar7)) {
        uVar13 = uVar13 + 0xf & 0xfffffff0;
      }
      iVar12 = uVar13 * -2;
      if (-1 < (int)uVar13) {
        iVar12 = uVar13 * 2;
      }
      *(ulonglong *)(param_1 + 0x28) = CONCAT44(*(undefined4 *)(param_1 + 0x38),(int)uVar13 / 2);
    }
    param_2 = local_98;
    *(int *)(param_1 + 0x30) = iVar12;
    (*local_88->lpVtbl->SetUINT32)(local_88,(GUID *)&DAT_1499d7ce0,1);
    MFCreateSampleGrabberSinkActivate(local_88,param_6,&local_70);
    if (local_88 != (IMFMediaType *)0x0) {
      (*local_88->lpVtbl->Release)(local_88);
      local_88 = (IMFMediaType *)0x0;
    }
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x10))();
    }
    uVar15 = uVar14 & 0xffffffff00000000;
    uVar14 = uVar14 & 0xffffffff;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  local_58 = (longlong *)0x0;
  MFCreateTopologyNode(1,&local_58);
  (**(code **)(*local_58 + 0xd8))(local_58,&DAT_14ab407d0,*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*local_58 + 0xd8))(local_58,&DAT_14ab407e0,local_90);
  (**(code **)(*local_58 + 0xd8))(local_58,&DAT_14ab407f0,param_5);
  (**(code **)(*param_3 + 0x110))(param_3,local_58);
  local_68 = (longlong *)0x0;
  MFCreateTopologyNode(0,&local_68);
  (**(code **)(*local_68 + 0x108))(local_68,local_70);
  (**(code **)(*local_68 + 0xa8))(local_68,&DAT_14ab40800,0);
  (**(code **)(*local_68 + 0xa8))(local_68,&DAT_14ab40810,0);
  (**(code **)(*param_3 + 0x110))(param_3,local_68);
  (**(code **)(*local_58 + 0x140))(local_58,0,local_68,0);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
    local_58 = (longlong *)0x0;
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
    local_68 = (longlong *)0x0;
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  *param_2 = uVar15 | uVar14;
LAB_149918890:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149918bb8 FUN_149918bb8 body=49 status=ok
// SIG undefined FUN_149918bb8(void)

int FUN_149918bb8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (param_1 != (longlong *)0x0 && iVar3 == 0) {
    (**(code **)(*param_1 + 0x58))(param_1,1);
  }
  return iVar3;
}



// FUNCTION 149918bea FUN_149918bea body=77 status=ok
// SIG undefined FUN_149918bea(void)

undefined8 FUN_149918bea(longlong param_1)

{
  void *in_stack_00000030;
  uint in_stack_00000038;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_144a5eaa2(*(undefined8 *)(param_1 + 0x10),in_stack_00000038,0);
    if (in_stack_00000038 != 0) {
      memcpy((void *)**(undefined8 **)(param_1 + 0x10),in_stack_00000030,
             (ulonglong)in_stack_00000038);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0xc) = 1;
    UNLOCK();
  }
  return 0;
}



// FUNCTION 149918c54 FUN_149918c54 body=118 status=ok
// SIG undefined FUN_149918c54(void)

float FUN_149918c54(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  int local_3c;
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))(*(longlong **)(param_1 + 0x48),local_38);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))(*(longlong **)(param_1 + 0x48),local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (float)local_38[0] / (float)local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149918d0e FUN_149918d0e body=29 status=ok
// SIG undefined FUN_149918d0e(void)

undefined8 FUN_149918d0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149918d32 FUN_149918d32 body=62 status=ok
// SIG undefined FUN_149918d32(void)

undefined8 * FUN_149918d32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bf08020;
  FUN_149917fe2();
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149918d70 FUN_149918d70 body=31 status=ok
// SIG undefined FUN_149918d70(void)

undefined8 FUN_149918d70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149918dac FUN_149918dac body=93 status=ok
// SIG undefined FUN_149918dac(void)

void FUN_149918dac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bf08050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149918e0a FUN_149918e0a body=126 status=ok
// SIG undefined FUN_149918e0a(void)

void FUN_149918e0a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bf08050;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149918e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149918e88 FUN_149918e88 body=21 status=ok
// SIG undefined FUN_149918e88(void)

undefined8 FUN_149918e88(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149918e9d FUN_149918e9d body=371 status=ok
// SIG undefined FUN_149918e9d(void)

void FUN_149918e9d(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_58 = *param_5;
  local_48 = *param_3;
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_14741d2e8(uVar5,lVar11,&local_48,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_2;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149919011 FUN_149919011 body=400 status=ok
// SIG undefined FUN_149919011(void)

void FUN_149919011(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 *local_60;
  undefined1 local_58;
  undefined1 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = FUN_144821ef4(&DAT_14ca85100);
  uVar5 = *param_1;
  local_58 = *param_5;
  local_48 = *param_3;
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_60 = &DAT_14ca8d260;
  local_68 = &DAT_14ca8cf60;
  local_50 = 0;
  FUN_1474201c0(uVar5,lVar11,&local_48,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_2;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499191a2 FUN_1499191a2 body=110 status=ok
// SIG undefined FUN_1499191a2(void)

void FUN_1499191a2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  uStack_20 = 0;
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149919212 FUN_149919212 body=117 status=ok
// SIG undefined FUN_149919212(void)

void FUN_149919212(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149919288(&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149919288 FUN_149919288 body=197 status=ok
// SIG undefined FUN_149919288(void)

undefined8 * FUN_149919288(undefined8 *param_1)

{
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  undefined1 local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_238 = local_218;
  local_220 = 0;
  local_228 = &local_18;
  local_230 = local_238;
  FUN_146821638(&local_238);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_248,local_238,(ulonglong)((longlong)local_230 - (longlong)local_238) >> 1);
  local_258 = local_248;
  uStack_254 = uStack_244;
  uStack_250 = uStack_240;
  uStack_24c = uStack_23c;
  FUN_1403de9f2(&local_258,param_1,&DAT_149e06196,1);
  if (CONCAT44(uStack_254,local_258) != 0) {
    FUN_1400020a8();
  }
  FUN_144724f3c(&local_238);
  if ((local_18 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149919358 FUN_149919358 body=37 status=ok
// SIG undefined FUN_149919358(void)

void FUN_149919358(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14278fa10();
  *param_3 = uVar1;
  return;
}



// FUNCTION 149919382 FUN_149919382 body=37 status=ok
// SIG undefined FUN_149919382(void)

void FUN_149919382(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14682161e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1499193ac FUN_1499193ac body=37 status=ok
// SIG undefined FUN_1499193ac(void)

void FUN_1499193ac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146821626();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1499193d8 FUN_1499193d8 body=280 status=ok
// SIG undefined FUN_1499193d8(void)

void FUN_1499193d8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1499194f2(local_38,plVar2);
  *param_3 = uVar1;
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499194f2 FUN_1499194f2 body=146 status=ok
// SIG undefined FUN_1499194f2(void)

undefined4 FUN_1499194f2(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a8b2a0(&local_30,param_2,&DAT_149e06196);
  puVar2 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar3 = local_30;
  }
  if (*(int *)(param_1 + 1) != 0) {
    puVar2 = (undefined2 *)*param_1;
  }
  local_38 = &DAT_14c867d40;
  uVar1 = FUN_14278fa08(0,puVar2,puVar3,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14991958c FUN_14991958c body=280 status=ok
// SIG undefined FUN_14991958c(void)

void FUN_14991958c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1499196a6(local_38,plVar2);
  *param_3 = uVar1;
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499196a6 FUN_1499196a6 body=146 status=ok
// SIG undefined FUN_1499196a6(void)

undefined4 FUN_1499196a6(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a8b2a0(&local_30,param_2,&DAT_149e06196);
  puVar2 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar3 = local_30;
  }
  if (*(int *)(param_1 + 1) != 0) {
    puVar2 = (undefined2 *)*param_1;
  }
  local_38 = &DAT_14c867d40;
  uVar1 = FUN_14278fa08(1,puVar2,puVar3,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14991973e FUN_14991973e body=37 status=ok
// SIG undefined FUN_14991973e(void)

void FUN_14991973e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14682161a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 149919770 FUN_149919770 body=152 status=ok
// SIG undefined FUN_149919770(void)

void FUN_149919770(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149919810 FUN_149919810 body=228 status=ok
// SIG undefined FUN_149919810(void)

void FUN_149919810(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149919900 FUN_149919900 body=29 status=ok
// SIG undefined FUN_149919900(void)

void FUN_149919900(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x10);
  return;
}



// FUNCTION 149919920 FUN_149919920 body=29 status=ok
// SIG undefined FUN_149919920(void)

void FUN_149919920(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x10);
  return;
}



// FUNCTION 149919ac0 FUN_149919ac0 body=41 status=ok
// SIG undefined FUN_149919ac0(void)

void FUN_149919ac0(undefined8 param_1,longlong param_2)

{
  if (*(undefined8 **)(param_2 + 0x30) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_2 + 0x30))();
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 149919b00 FUN_149919b00 body=29 status=ok
// SIG undefined FUN_149919b00(void)

void FUN_149919b00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x60),0x40);
  return;
}



// FUNCTION 149919b50 FUN_149919b50 body=36 status=ok
// SIG undefined FUN_149919b50(void)

void FUN_149919b50(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x28))();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 149919bc0 FUN_149919bc0 body=41 status=ok
// SIG undefined FUN_149919bc0(void)

void FUN_149919bc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_144b65b20(param_2 + 0x1e0);
  }
  return;
}



// FUNCTION 149919bf0 FUN_149919bf0 body=41 status=ok
// SIG undefined FUN_149919bf0(void)

void FUN_149919bf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    FUN_144b65b20(param_2 + 0x1c0);
  }
  return;
}



// FUNCTION 149919e00 FUN_149919e00 body=48 status=ok
// SIG undefined FUN_149919e00(void)

void FUN_149919e00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b6ccd0(*(undefined8 *)(param_2 + 0x50));
  FUN_144b6daa0(*(undefined8 *)(param_2 + 0x50),uVar1,*(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 149919e70 FUN_149919e70 body=29 status=ok
// SIG undefined FUN_149919e70(void)

void FUN_149919e70(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x38),0xf0);
  return;
}



// FUNCTION 149919e90 FUN_149919e90 body=45 status=ok
// SIG undefined FUN_149919e90(void)

void FUN_149919e90(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x30) + 8) != 0) {
    FUN_144b6d130();
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 149919ed0 FUN_149919ed0 body=29 status=ok
// SIG undefined FUN_149919ed0(void)

void FUN_149919ed0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0xf0);
  return;
}



// FUNCTION 149919f00 FUN_149919f00 body=233 status=ok
// SIG undefined FUN_149919f00(void)

void FUN_149919f00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(lVar1 + 8) != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    if (((*(char *)(lVar2 + 0xd0) == '\0') && (*(longlong *)(lVar2 + 0xe0) != 0)) &&
       (*(longlong *)(lVar2 + 0xe0) != 0)) {
      FUN_144b6cc90(*(longlong *)(lVar2 + 0xe0),1);
    }
    if ((*(longlong *)(lVar1 + 8) != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FUN_144b6d130(*(longlong *)(lVar1 + 8),1);
    }
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  FUN_1470a639e(param_2 + 0x40,1);
  plVar3 = *(longlong **)(param_2 + 0x38);
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  uVar5 = FUN_144b6b7f0(*(undefined8 *)(param_2 + 0x28));
  uVar6 = FUN_141302cc4(param_2 + 0x50,"Cannot read image file \"");
  uVar5 = FUN_141302cc4(uVar6,uVar5);
  uVar5 = FUN_141302cc4(uVar5,&DAT_149971db8);
  FUN_141302cc4(uVar5,uVar4);
  FUN_144e40cb0(plVar3);
  FUN_144b664f0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 149919ff0 FUN_149919ff0 body=113 status=ok
// SIG undefined FUN_149919ff0(void)

void FUN_149919ff0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(lVar1 + 8) != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    if (((*(char *)(lVar2 + 0xd0) == '\0') && (*(longlong *)(lVar2 + 0xe0) != 0)) &&
       (*(longlong *)(lVar2 + 0xe0) != 0)) {
      FUN_144b6cc90();
    }
    if ((*(longlong *)(lVar1 + 8) != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FUN_144b6d130();
    }
  }
  *(undefined8 *)(lVar1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991a070 FUN_14991a070 body=29 status=ok
// SIG undefined FUN_14991a070(void)

void FUN_14991a070(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x10);
  return;
}



// FUNCTION 14991a090 FUN_14991a090 body=29 status=ok
// SIG undefined FUN_14991a090(void)

void FUN_14991a090(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x10);
  return;
}



// FUNCTION 14991a0b0 FUN_14991a0b0 body=29 status=ok
// SIG undefined FUN_14991a0b0(void)

void FUN_14991a0b0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x10);
  return;
}



// FUNCTION 14991a0d0 FUN_14991a0d0 body=29 status=ok
// SIG undefined FUN_14991a0d0(void)

void FUN_14991a0d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x10);
  return;
}



// FUNCTION 14991a0f0 FUN_14991a0f0 body=29 status=ok
// SIG undefined FUN_14991a0f0(void)

void FUN_14991a0f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x18);
  return;
}



// FUNCTION 14991a120 FUN_14991a120 body=29 status=ok
// SIG undefined FUN_14991a120(void)

void FUN_14991a120(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x10);
  return;
}



// FUNCTION 14991a140 FUN_14991a140 body=29 status=ok
// SIG undefined FUN_14991a140(void)

void FUN_14991a140(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x10);
  return;
}



// FUNCTION 14991a160 FUN_14991a160 body=29 status=ok
// SIG undefined FUN_14991a160(void)

void FUN_14991a160(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x10);
  return;
}



// FUNCTION 14991a180 FUN_14991a180 body=29 status=ok
// SIG undefined FUN_14991a180(void)

void FUN_14991a180(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x30),0x18);
  return;
}



// FUNCTION 14991a1e0 FUN_14991a1e0 body=29 status=ok
// SIG undefined FUN_14991a1e0(void)

void FUN_14991a1e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x60),0x10);
  return;
}



// FUNCTION 14991a200 FUN_14991a200 body=39 status=ok
// SIG undefined FUN_14991a200(void)

void FUN_14991a200(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x78),
             *(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991a230 FUN_14991a230 body=39 status=ok
// SIG undefined FUN_14991a230(void)

void FUN_14991a230(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991a260 FUN_14991a260 body=39 status=ok
// SIG undefined FUN_14991a260(void)

void FUN_14991a260(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991a350 FUN_14991a350 body=29 status=ok
// SIG undefined FUN_14991a350(void)

void FUN_14991a350(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x20),0x108);
  return;
}



// FUNCTION 14991a380 FUN_14991a380 body=215 status=ok
// SIG undefined FUN_14991a380(void)

void FUN_14991a380(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x150);
  if (*(longlong *)(lVar1 + 8) != 0) {
    if ((*(longlong *)(*(longlong *)(lVar1 + 8) + 0xf8) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0xf8), lVar2 != 0)) {
      FUN_144b6ed80(lVar2,1);
    }
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_144b6f4f0(*(longlong *)(lVar1 + 8),1);
    }
  }
  FUN_1470a639e(param_2 + 0x30,1);
  plVar3 = *(longlong **)(param_2 + 0x28);
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  uVar5 = FUN_144b6b950(*(undefined8 *)(param_2 + 0x158));
  uVar6 = FUN_141302cc4(param_2 + 0x40,"Cannot open image file \"");
  uVar5 = FUN_141302cc4(uVar6,uVar5);
  uVar5 = FUN_141302cc4(uVar5,&DAT_149971db8);
  FUN_141302cc4(uVar5,uVar4);
  FUN_144e40cb0(plVar3);
  FUN_144b664f0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991a460 FUN_14991a460 body=92 status=ok
// SIG undefined FUN_14991a460(void)

void FUN_14991a460(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x150);
  if (*(longlong *)(lVar1 + 8) != 0) {
    if ((*(longlong *)(*(longlong *)(lVar1 + 8) + 0xf8) != 0) &&
       (*(longlong *)(*(longlong *)(lVar1 + 8) + 0xf8) != 0)) {
      FUN_144b6ed80();
    }
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_144b6f4f0();
    }
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991a4e0 FUN_14991a4e0 body=29 status=ok
// SIG undefined FUN_14991a4e0(void)

undefined8 FUN_14991a4e0(void)

{
  return 0;
}



// FUNCTION 14991a500 FUN_14991a500 body=78 status=ok
// SIG undefined FUN_14991a500(void)

undefined8 FUN_14991a500(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x80);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  if (*(char *)(lVar2 + 0x41) == '\0') {
    FUN_144b6ebb0(lVar2 + 0x48,"unrecognized exception",0x16);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x41) = 1;
  }
  return 0;
}



// FUNCTION 14991a550 FUN_14991a550 body=107 status=ok
// SIG undefined FUN_14991a550(void)

undefined8 FUN_14991a550(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x80);
  if (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x41) == '\0') {
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 8))();
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + lVar3) != '\0');
    FUN_144b6ebb0(*(longlong *)(lVar1 + 0x18) + 0x48,lVar2);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x41) = 1;
  }
  return 0;
}



// FUNCTION 14991a5c0 FUN_14991a5c0 body=29 status=ok
// SIG undefined FUN_14991a5c0(void)

void FUN_14991a5c0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x50),0x78);
  return;
}



// FUNCTION 14991a670 FUN_14991a670 body=29 status=ok
// SIG undefined FUN_14991a670(void)

void FUN_14991a670(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x38),0x20);
  return;
}



// FUNCTION 14991a690 FUN_14991a690 body=29 status=ok
// SIG undefined FUN_14991a690(void)

void FUN_14991a690(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x50),0x20);
  return;
}



// FUNCTION 14991a6b0 FUN_14991a6b0 body=29 status=ok
// SIG undefined FUN_14991a6b0(void)

void FUN_14991a6b0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x38),0x20);
  return;
}



// FUNCTION 14991a6e0 FUN_14991a6e0 body=146 status=ok
// SIG undefined FUN_14991a6e0(void)

void FUN_14991a6e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1470a639e(param_2 + 0x70,1);
  plVar1 = *(longlong **)(param_2 + 0x68);
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  uVar3 = FUN_144b6de30(*(undefined8 *)(param_2 + 0x58));
  uVar4 = FUN_141302cc4(param_2 + 0x80,"Failed to write pixel data to image file \"");
  uVar3 = FUN_141302cc4(uVar4,uVar3);
  uVar3 = FUN_141302cc4(uVar3,&DAT_149971db8);
  FUN_141302cc4(uVar3,uVar2);
  FUN_144e40cb0(plVar1);
  FUN_144b664f0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991a790 FUN_14991a790 body=29 status=ok
// SIG undefined FUN_14991a790(void)

void FUN_14991a790(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x20),0x10);
  return;
}



// FUNCTION 14991a7c0 FUN_14991a7c0 body=29 status=ok
// SIG undefined FUN_14991a7c0(void)

void FUN_14991a7c0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x20),8);
  return;
}



// FUNCTION 14991a7e0 FUN_14991a7e0 body=29 status=ok
// SIG undefined FUN_14991a7e0(void)

void FUN_14991a7e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x20),0x1b0);
  return;
}



// FUNCTION 14991a800 FUN_14991a800 body=67 status=ok
// SIG undefined FUN_14991a800(void)

void FUN_14991a800(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    thunk_FUN_1400020a8(*(undefined8 *)(lVar1 + 0x10));
  }
  if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(lVar1 + 8))();
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991a8d0 FUN_14991a8d0 body=38 status=ok
// SIG undefined FUN_14991a8d0(void)

void FUN_14991a8d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_144b65b20(param_2 + 0x48);
  }
  return;
}



// FUNCTION 14991a900 FUN_14991a900 body=38 status=ok
// SIG undefined FUN_14991a900(void)

void FUN_14991a900(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_144b65b20(param_2 + 0x28);
  }
  return;
}



// FUNCTION 14991aa40 FUN_14991aa40 body=39 status=ok
// SIG undefined FUN_14991aa40(void)

undefined8 FUN_14991aa40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(int *)*param_1 == 0x406d1388) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 14991aa80 Unwind@14991aa80 body=12 status=ok
// SIG undefined Unwind@14991aa80(void)

void Unwind_14991aa80(undefined8 param_1,longlong param_2)

{
  FUN_144d605d0(param_2 + 0xa8);
  return;
}



// FUNCTION 14991aa90 Unwind@14991aa90 body=12 status=ok
// SIG undefined Unwind@14991aa90(void)

void Unwind_14991aa90(undefined8 param_1,longlong param_2)

{
  FUN_144d605d0(param_2 + 0xa8);
  return;
}



// FUNCTION 14991aaa0 Unwind@14991aaa0 body=12 status=ok
// SIG undefined Unwind@14991aaa0(void)

void Unwind_14991aaa0(undefined8 param_1,longlong param_2)

{
  FUN_144d66200(param_2 + 0x30);
  return;
}



// FUNCTION 14991aab0 Catch_All@14991aab0 body=47 status=ok
// SIG undefined Catch_All@14991aab0(void)

void Catch_All_14991aab0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144d661f0(*(undefined8 *)(param_2 + 0x50));
  thunk_FUN_144d66160(uVar1,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14991aaf0 Unwind@14991aaf0 body=12 status=ok
// SIG undefined Unwind@14991aaf0(void)

void Unwind_14991aaf0(undefined8 param_1,longlong param_2)

{
  FUN_144d605d0(param_2 + 0xf8);
  return;
}



// FUNCTION 14991ab00 Unwind@14991ab00 body=12 status=ok
// SIG undefined Unwind@14991ab00(void)

void Unwind_14991ab00(undefined8 param_1,longlong param_2)

{
  FUN_144d73970(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 14991ab10 Unwind@14991ab10 body=12 status=ok
// SIG undefined Unwind@14991ab10(void)

void Unwind_14991ab10(undefined8 param_1,longlong param_2)

{
  FUN_144d73a90(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14991ab20 Unwind@14991ab20 body=12 status=ok
// SIG undefined Unwind@14991ab20(void)

void Unwind_14991ab20(undefined8 param_1,longlong param_2)

{
  FUN_144d73a60(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14991ab30 Unwind@14991ab30 body=12 status=ok
// SIG undefined Unwind@14991ab30(void)

void Unwind_14991ab30(undefined8 param_1,longlong param_2)

{
  FUN_144d73a30(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991ab40 Unwind@14991ab40 body=29 status=ok
// SIG undefined Unwind@14991ab40(void)

void Unwind_14991ab40(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 14991ab5d Unwind@14991ab5d body=12 status=ok
// SIG undefined Unwind@14991ab5d(void)

void Unwind_14991ab5d(undefined8 param_1,longlong param_2)

{
  FUN_144d73a00(param_2 + 0x48);
  return;
}



// FUNCTION 14991ab70 Unwind@14991ab70 body=29 status=ok
// SIG undefined Unwind@14991ab70(void)

void Unwind_14991ab70(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 14991ab8d Unwind@14991ab8d body=12 status=ok
// SIG undefined Unwind@14991ab8d(void)

void Unwind_14991ab8d(undefined8 param_1,longlong param_2)

{
  FUN_144d73a30(param_2 + 0x48);
  return;
}



// FUNCTION 14991aba0 Unwind@14991aba0 body=12 status=ok
// SIG undefined Unwind@14991aba0(void)

void Unwind_14991aba0(undefined8 param_1,longlong param_2)

{
  FUN_144d73970(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991abac Unwind@14991abac body=29 status=ok
// SIG undefined Unwind@14991abac(void)

void Unwind_14991abac(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x78);
  return;
}



// FUNCTION 14991abd0 Unwind@14991abd0 body=12 status=ok
// SIG undefined Unwind@14991abd0(void)

void Unwind_14991abd0(undefined8 param_1,longlong param_2)

{
  FUN_144d73ac0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991abdc Unwind@14991abdc body=29 status=ok
// SIG undefined Unwind@14991abdc(void)

void Unwind_14991abdc(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x58);
  return;
}



// FUNCTION 14991ac00 Unwind@14991ac00 body=12 status=ok
// SIG undefined Unwind@14991ac00(void)

void Unwind_14991ac00(undefined8 param_1,longlong param_2)

{
  FUN_144d73a60(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991ac0c Unwind@14991ac0c body=29 status=ok
// SIG undefined Unwind@14991ac0c(void)

void Unwind_14991ac0c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x58);
  return;
}



// FUNCTION 14991ac30 Unwind@14991ac30 body=12 status=ok
// SIG undefined Unwind@14991ac30(void)

void Unwind_14991ac30(undefined8 param_1,longlong param_2)

{
  FUN_144d73a90(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991ac3c Unwind@14991ac3c body=29 status=ok
// SIG undefined Unwind@14991ac3c(void)

void Unwind_14991ac3c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x58);
  return;
}



// FUNCTION 14991ac60 Unwind@14991ac60 body=12 status=ok
// SIG undefined Unwind@14991ac60(void)

void Unwind_14991ac60(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 14991ac70 Unwind@14991ac70 body=12 status=ok
// SIG undefined Unwind@14991ac70(void)

void Unwind_14991ac70(undefined8 param_1,longlong param_2)

{
  FUN_144d75330(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14991ac80 Unwind@14991ac80 body=12 status=ok
// SIG undefined Unwind@14991ac80(void)

void Unwind_14991ac80(undefined8 param_1,longlong param_2)

{
  FUN_144d75330(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14991ac90 Unwind@14991ac90 body=12 status=ok
// SIG undefined Unwind@14991ac90(void)

void Unwind_14991ac90(undefined8 param_1,longlong param_2)

{
  FUN_144d73a00(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 14991aca0 Unwind@14991aca0 body=12 status=ok
// SIG undefined Unwind@14991aca0(void)

void Unwind_14991aca0(undefined8 param_1,longlong param_2)

{
  FUN_144d75330(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 14991acb0 Unwind@14991acb0 body=12 status=ok
// SIG undefined Unwind@14991acb0(void)

void Unwind_14991acb0(undefined8 param_1,longlong param_2)

{
  FUN_144d75420(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 14991acc0 Unwind@14991acc0 body=12 status=ok
// SIG undefined Unwind@14991acc0(void)

void Unwind_14991acc0(undefined8 param_1,longlong param_2)

{
  FUN_144d73a30(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 14991acd0 Unwind@14991acd0 body=12 status=ok
// SIG undefined Unwind@14991acd0(void)

void Unwind_14991acd0(undefined8 param_1,longlong param_2)

{
  FUN_144d73a00(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991ace0 Unwind@14991ace0 body=12 status=ok
// SIG undefined Unwind@14991ace0(void)

void Unwind_14991ace0(undefined8 param_1,longlong param_2)

{
  FUN_144d75330(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991acf0 Unwind@14991acf0 body=12 status=ok
// SIG undefined Unwind@14991acf0(void)

void Unwind_14991acf0(undefined8 param_1,longlong param_2)

{
  FUN_144d75420(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991ad00 Unwind@14991ad00 body=12 status=ok
// SIG undefined Unwind@14991ad00(void)

void Unwind_14991ad00(undefined8 param_1,longlong param_2)

{
  FUN_144d75330(param_2 + 0x48);
  return;
}



// FUNCTION 14991ad10 Unwind@14991ad10 body=29 status=ok
// SIG undefined Unwind@14991ad10(void)

void Unwind_14991ad10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 14991ad2d Unwind@14991ad2d body=12 status=ok
// SIG undefined Unwind@14991ad2d(void)

void Unwind_14991ad2d(undefined8 param_1,longlong param_2)

{
  FUN_144d75420(param_2 + 0x48);
  return;
}



// FUNCTION 14991ad40 Unwind@14991ad40 body=12 status=ok
// SIG undefined Unwind@14991ad40(void)

void Unwind_14991ad40(undefined8 param_1,longlong param_2)

{
  FUN_144d73100(param_2 + 0x30);
  return;
}



// FUNCTION 14991ad50 Unwind@14991ad50 body=12 status=ok
// SIG undefined Unwind@14991ad50(void)

void Unwind_14991ad50(undefined8 param_1,longlong param_2)

{
  FUN_144d75420(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14991ad60 Unwind@14991ad60 body=12 status=ok
// SIG undefined Unwind@14991ad60(void)

void Unwind_14991ad60(undefined8 param_1,longlong param_2)

{
  FUN_144d75420(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14991ad70 Unwind@14991ad70 body=12 status=ok
// SIG undefined Unwind@14991ad70(void)

void Unwind_14991ad70(undefined8 param_1,longlong param_2)

{
  FUN_144d73a00(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14991ad80 Unwind@14991ad80 body=12 status=ok
// SIG undefined Unwind@14991ad80(void)

void Unwind_14991ad80(undefined8 param_1,longlong param_2)

{
  FUN_144d75330(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14991ad90 Unwind@14991ad90 body=12 status=ok
// SIG undefined Unwind@14991ad90(void)

void Unwind_14991ad90(undefined8 param_1,longlong param_2)

{
  FUN_144d75420(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14991ada0 Unwind@14991ada0 body=12 status=ok
// SIG undefined Unwind@14991ada0(void)

void Unwind_14991ada0(undefined8 param_1,longlong param_2)

{
  FUN_144d73a30(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14991adb0 Unwind@14991adb0 body=28 status=ok
// SIG undefined Unwind@14991adb0(void)

void Unwind_14991adb0(undefined8 param_1,longlong param_2)

{
  FUN_144d76620(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14991add0 Unwind@14991add0 body=12 status=ok
// SIG undefined Unwind@14991add0(void)

void Unwind_14991add0(undefined8 param_1,longlong param_2)

{
  FUN_144d773d0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14991ade0 Unwind@14991ade0 body=12 status=ok
// SIG undefined Unwind@14991ade0(void)

void Unwind_14991ade0(undefined8 param_1,longlong param_2)

{
  FUN_144d773d0(param_2 + 0x70);
  return;
}



// FUNCTION 14991adf0 Unwind@14991adf0 body=12 status=ok
// SIG undefined Unwind@14991adf0(void)

void Unwind_14991adf0(undefined8 param_1,longlong param_2)

{
  FUN_144d773d0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14991ae00 Unwind@14991ae00 body=12 status=ok
// SIG undefined Unwind@14991ae00(void)

void Unwind_14991ae00(undefined8 param_1,longlong param_2)

{
  FUN_144d773d0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991ae10 Unwind@14991ae10 body=12 status=ok
// SIG undefined Unwind@14991ae10(void)

void Unwind_14991ae10(undefined8 param_1,longlong param_2)

{
  FUN_144d76fe0(param_2 + 0x48);
  return;
}



// FUNCTION 14991ae20 Unwind@14991ae20 body=29 status=ok
// SIG undefined Unwind@14991ae20(void)

void Unwind_14991ae20(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x48),0x38);
  return;
}



// FUNCTION 14991ae3d Unwind@14991ae3d body=12 status=ok
// SIG undefined Unwind@14991ae3d(void)

void Unwind_14991ae3d(undefined8 param_1,longlong param_2)

{
  FUN_144d773d0(param_2 + 0x48);
  return;
}



// FUNCTION 14991ae50 Unwind@14991ae50 body=28 status=ok
// SIG undefined Unwind@14991ae50(void)

void Unwind_14991ae50(undefined8 param_1,longlong param_2)

{
  FUN_144d76620(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14991ae6c Unwind@14991ae6c body=28 status=ok
// SIG undefined Unwind@14991ae6c(void)

void Unwind_14991ae6c(undefined8 param_1,longlong param_2)

{
  FUN_144d76620(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
  return;
}


