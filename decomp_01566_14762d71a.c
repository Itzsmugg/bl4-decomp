// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14762d71a FUN_14762d71a body=38 status=ok
// SIG undefined FUN_14762d71a(void)

undefined8 FUN_14762d71a(undefined8 param_1,int param_2)

{
  FUN_1461e5666();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762d74c FUN_14762d74c body=82 status=ok
// SIG undefined FUN_14762d74c(void)

void FUN_14762d74c(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_14762e0cc();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762d7a0 FUN_14762d7a0 body=1036 status=ok
// SIG undefined FUN_14762d7a0(void)

ulonglong FUN_14762d7a0(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  byte local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_14762d815;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      local_88 = *puVar6;
      uStack_84 = puVar6[1];
      uStack_80 = puVar6[2];
      uStack_7c = puVar6[3];
      local_78[0] = puVar6[4];
      local_60 = *(byte *)(puVar6 + 10);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar6 + 6);
      local_58 = *(byte *)(puVar6 + 0xc);
      FUN_1410d7556(param_1 + 0x18,&local_88);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38 + 0x28)])();
      FUN_14762e21a(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
        FUN_14762e28e(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_14762e156(&local_88,local_78);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
LAB_14762d9f3:
      unaff_RBP = 0;
      goto LAB_14762d815;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38) & 1) == 0)
    goto LAB_14762d815;
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar10 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x28) < param_2) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar4 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar4);
    }
    if ((((int)uVar11 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar11 * 0x28) <= param_2)) &&
       (lVar12 + (ulonglong)uVar11 * 0x28 != -8)) {
      FUN_14762e156((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
        FUN_14762e28e(param_1 + 0xa0);
      }
      goto LAB_14762d815;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      if ((bVar2 & 1) == 0) goto LAB_14762d815;
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      *(byte *)(puVar6 + 0xc) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14762d815;
      lVar12 = (longlong)param_2 * 0x38;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + lVar12);
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      if ((bVar2 & 2) == 0) {
        local_88 = *puVar6;
        uStack_84 = puVar6[1];
        uStack_80 = puVar6[2];
        uStack_7c = puVar6[3];
        local_78[0] = puVar6[4];
        local_60 = *(byte *)(puVar6 + 10);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar6 + 6);
        local_58 = *(byte *)(puVar6 + 0xc);
        FUN_1410d7556(param_1 + 0x18,&local_88);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar12 + 0x28)])();
        FUN_14762e21a(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar7 = 0;
        if (0 < (int)uVar3) {
          uVar9 = (ulonglong)uVar3;
          uVar10 = uVar3;
          do {
            uVar9 = uVar9 >> 1;
            uVar11 = (uint)uVar9 + (int)uVar7;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
              uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
            }
            bVar4 = 1 < uVar10;
            uVar10 = (uint)uVar9;
          } while (bVar4);
        }
        if (((int)uVar7 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
          FUN_14762e28e(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_14762e156(&local_88,local_78);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
        goto LAB_14762d9f3;
      }
      if ((bVar2 & 1) == 0) goto LAB_14762d815;
    }
  }
  FUN_14762e156(puVar6,puVar6 + 4);
LAB_14762d815:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14762dbae FUN_14762dbae body=399 status=ok
// SIG undefined FUN_14762dbae(void)

undefined8 FUN_14762dbae(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_14762dc5d;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x38;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x28)])();
    FUN_14762e21a(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_14762e28e(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_14762e28e(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_14762dc5d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762dd48 FUN_14762dd48 body=266 status=ok
// SIG undefined FUN_14762dd48(void)

void FUN_14762dd48(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_14762e3a4(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762de54 FUN_14762de54 body=592 status=ok
// SIG undefined FUN_14762de54(void)

void FUN_14762de54(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  ushort uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  char *local_88;
  undefined1 local_7c [8];
  int local_74;
  longlong local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_88 = param_2;
  if (uVar3 != 0) {
    lVar1 = param_1 + -0xd8;
    local_98 = *param_6;
    local_90 = param_6[1];
    local_a0 = param_6[2];
    param_5 = param_5 + 8;
    uVar9 = 0;
    do {
      local_70 = *(longlong *)(param_4 + uVar9 * 4);
      if ((local_70 != 0) && (cVar4 = FUN_14762e67e(lVar1,&local_70,param_5), cVar4 != '\0')) {
        FUN_14762e3a4(lVar1,local_7c,&local_70,param_5);
        piVar7 = *(int **)(param_1 + -0x28);
        if (*piVar7 != 0) {
          FUN_140adeba6(piVar7,local_7c);
          piVar7 = *(int **)(param_1 + -0x28);
        }
        lVar6 = FUN_1400e4054(piVar7,local_7c);
        if (lVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = CONCAT71((int7)((ulonglong)local_7c >> 8),'\x02' - (*(short *)(lVar6 + 0xe) == 0)
                           );
        }
        cVar4 = FUN_14762e704(lVar1,local_74,uVar10 & 0xffffffff);
        if (cVar4 == '\0') {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          if (local_90 == 0) {
            if (local_98 != 0) {
              lVar6 = (longlong)*(int *)(param_1 + 0x24) * (ulonglong)*(ushort *)(local_98 + uVar9);
              uStack_60 = *(longlong *)(param_1 + 0x18) + lVar6;
              uVar5 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar6))
                                (*(undefined8 *)(param_4 + uVar9 * 4));
              goto LAB_14762e041;
            }
            if (local_a0 != 0) {
              uStack_60 = *(ulonglong *)(local_a0 + uVar9 * 8);
              local_58 = *(longlong *)(local_a0 + 8 + uVar9 * 8);
              uVar8 = uStack_60;
              if (local_58 != 0) {
                LOCK();
                *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                UNLOCK();
                uVar8 = *(ulonglong *)(local_a0 + uVar9 * 8);
              }
              uStack_50 = 2;
              uVar5 = FUN_14762ea5c(uVar8,*(undefined8 *)(param_4 + uVar9 * 4));
              goto LAB_14762e041;
            }
          }
          else {
            uStack_60 = (ulonglong)*(ushort *)(local_90 + uVar9);
            uStack_50 = 1;
            uVar5 = *(undefined4 *)
                     (*(longlong *)(param_4 + uVar9 * 4) + (ulonglong)*(ushort *)(local_90 + uVar9))
            ;
LAB_14762e041:
            local_68 = CONCAT44(local_68._4_4_,uVar5);
          }
          FUN_14762e79c(lVar1,local_74,uVar10 & 0xffffffff,&local_68);
          (*(code *)(&PTR_LAB_14a4c7e10)[uStack_50 & 0xff])(&uStack_60);
        }
        if (*local_88 == '\x01') {
          pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x30 + (longlong)local_74 * 0x38);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      uVar9 = uVar9 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar3 * 2 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762e0a6 FUN_14762e0a6 body=38 status=ok
// SIG undefined FUN_14762e0a6(void)

undefined8 FUN_14762e0a6(undefined8 param_1,int param_2)

{
  FUN_1461e5666();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762e0cc FUN_14762e0cc body=136 status=ok
// SIG undefined FUN_14762e0cc(void)

void FUN_14762e0cc(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762e156 FUN_14762e156 body=156 status=ok
// SIG undefined FUN_14762e156(void)

void FUN_14762e156(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  local_24 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_28);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 6) == '\x01') {
      *(undefined4 *)(lVar1 + (ulonglong)*(ushort *)(param_2 + 2)) = *param_2;
    }
    else {
      if (*(char *)(param_2 + 6) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
      if (*(longlong *)(param_2 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762e21a FUN_14762e21a body=116 status=ok
// SIG undefined FUN_14762e21a(void)

void FUN_14762e21a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14762e28e FUN_14762e28e body=103 status=ok
// SIG undefined FUN_14762e28e(void)

void FUN_14762e28e(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x28 + 0x20)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar2) * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_14762e2f6(param_1);
  return;
}



// FUNCTION 14762e2f6 FUN_14762e2f6 body=62 status=ok
// SIG undefined FUN_14762e2f6(void)

void FUN_14762e2f6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14762e334(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 14762e334 FUN_14762e334 body=112 status=ok
// SIG undefined FUN_14762e334(void)

ulonglong FUN_14762e334(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14762e36e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_14762e36e:
  return param_2 & 0xffffffff;
}



// FUNCTION 14762e3a4 FUN_14762e3a4 body=189 status=ok
// SIG undefined FUN_14762e3a4(void)

longlong FUN_14762e3a4(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_14762e462(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762e462 FUN_14762e462 body=313 status=ok
// SIG undefined FUN_14762e462(void)

int * FUN_14762e462(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_58._0_4_ = *param_3;
    local_58._4_4_ = param_3[1];
    uStack_50._0_4_ = param_3[2];
    uStack_50._4_4_ = param_3[3];
    FUN_14762e59c(param_1 + 0x68,local_68);
    *local_60 = (undefined4)local_58;
    local_60[1] = local_58._4_4_;
    local_60[2] = (undefined4)uStack_50;
    local_60[3] = uStack_50._4_4_;
    *(undefined1 *)(local_60 + 10) = 0;
    *(undefined8 *)(local_60 + 6) = 0;
    *(undefined1 *)(local_60 + 0xc) = 0;
    *param_2 = local_68[0];
    local_58 = param_3;
    uStack_50 = param_2;
    FUN_140bf3cbe(plVar1,local_68,&local_58,0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762e59c FUN_14762e59c body=226 status=ok
// SIG undefined FUN_14762e59c(void)

int * FUN_14762e59c(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14762e67e FUN_14762e67e body=132 status=ok
// SIG undefined FUN_14762e67e(void)

byte FUN_14762e67e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_14762e8f6(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 14762e704 FUN_14762e704 body=151 status=ok
// SIG undefined FUN_14762e704(void)

ulonglong FUN_14762e704(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x30);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x28;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x30));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14762e79c FUN_14762e79c body=345 status=ok
// SIG undefined FUN_14762e79c(void)

void FUN_14762e79c(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar6 = *(byte *)(lVar7 + 0x30);
    if ((bVar6 & 1) == 0) {
      *(undefined4 *)(lVar7 + 0x10) = *param_4;
      if ((undefined4 *)(lVar7 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 6));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 6)])
                  (&local_58,param_4 + 2);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar7 + 0x28);
        uVar2 = *(undefined4 *)(lVar7 + 0x18);
        uVar3 = *(undefined4 *)(lVar7 + 0x1c);
        uVar4 = *(undefined4 *)(lVar7 + 0x20);
        uVar5 = *(undefined4 *)(lVar7 + 0x24);
        *(undefined4 *)(lVar7 + 0x18) = local_58;
        *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
        *(undefined4 *)(lVar7 + 0x20) = uStack_50;
        *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
        *(ulonglong *)(lVar7 + 0x28) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar6 = *(byte *)(lVar7 + 0x30);
      }
      *(byte *)(lVar7 + 0x30) = bVar6 | 1;
    }
    else {
      FUN_14762eaca(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined4 *)(lVar7 + 0x10) = *param_4;
    if ((undefined4 *)(lVar7 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 6));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 6)])
                (&local_58,param_4 + 2);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar7 + 0x28);
      uVar2 = *(undefined4 *)(lVar7 + 0x18);
      uVar3 = *(undefined4 *)(lVar7 + 0x1c);
      uVar4 = *(undefined4 *)(lVar7 + 0x20);
      uVar5 = *(undefined4 *)(lVar7 + 0x24);
      *(undefined4 *)(lVar7 + 0x18) = local_58;
      *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
      *(undefined4 *)(lVar7 + 0x20) = uStack_50;
      *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
      *(ulonglong *)(lVar7 + 0x28) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762e8f6 FUN_14762e8f6 body=189 status=ok
// SIG undefined FUN_14762e8f6(void)

longlong FUN_14762e8f6(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_14762e9b4(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762e9b4 FUN_14762e9b4 body=167 status=ok
// SIG undefined FUN_14762e9b4(void)

undefined4 * FUN_14762e9b4(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 14762ea5c FUN_14762ea5c body=109 status=ok
// SIG undefined FUN_14762ea5c(void)

undefined4 FUN_14762ea5c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  longlong local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406f9c46(param_1,local_50,param_2);
  lVar1 = FUN_1406f977c(local_50);
  uVar3 = 0;
  if ((lVar1 != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(lVar1 + 0x44) + local_28), uVar3 = 0,
     puVar2 != (undefined4 *)0x0)) {
    uVar3 = *puVar2;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762eaca FUN_14762eaca body=249 status=ok
// SIG undefined FUN_14762eaca(void)

void FUN_14762eaca(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar2 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar9;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < *param_2) {
        uVar9 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar9 < (int)uVar2) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= *param_2)) {
      piVar10 = (int *)(lVar7 + (ulonglong)uVar9 * 0x28);
      FUN_1461e574d(piVar10,1);
      goto LAB_14762eb7a;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14762ebc4(param_1,uVar2);
    lVar7 = *param_1;
  }
  lVar4 = (ulonglong)uVar9 * 0x28;
  memmove((void *)(lVar7 + lVar4 + 0x28),(void *)(lVar7 + lVar4),(ulonglong)(uVar2 - uVar9) * 0x28);
  piVar10 = (int *)(lVar4 + *param_1);
LAB_14762eb7a:
  *piVar10 = *param_2;
  piVar10[2] = *param_3;
  iVar5 = param_3[6];
  piVar8 = param_3 + 2;
  *(char *)(piVar10 + 8) = (char)iVar5;
  piVar11 = piVar10 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)iVar5) {
  case '\0':
    *(undefined8 *)piVar11 = *(undefined8 *)piVar8;
    return;
  case '\x01':
    *(short *)piVar11 = (short)*piVar8;
    return;
  case '\x02':
    *(undefined8 *)piVar11 = *(undefined8 *)piVar8;
    *(undefined8 *)(piVar10 + 6) = *(undefined8 *)(param_3 + 4);
    piVar8[0] = 0;
    piVar8[1] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    return;
  }
}



// FUNCTION 14762ebc4 FUN_14762ebc4 body=147 status=ok
// SIG undefined FUN_14762ebc4(void)

void FUN_14762ebc4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14762ec58 FUN_14762ec58 body=772 status=ok
// SIG undefined FUN_14762ec58(void)

void FUN_14762ec58(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte local_191;
  undefined8 *local_190;
  undefined8 *local_178;
  int local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [32];
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_138;
  if (param_4 == 0) goto LAB_14762ecb1;
  uVar5 = FUN_145990612();
  plVar6 = (longlong *)FUN_144718840(param_4,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_14762ecb1;
  lVar2 = *(longlong *)(param_4 + 0x28);
  *(undefined4 *)(lVar2 + 0x29c) = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_160 = *param_3;
  uStack_15c = param_3[1];
  iStack_158 = param_3[2];
  uStack_154 = param_3[3];
  local_150 = param_3[4];
  uStack_14c = param_3[5];
  uStack_148 = param_3[6];
  uStack_144 = param_3[7];
  local_110 = (undefined1 *)0x0;
  local_108 = 0x400000000;
  local_140 = uVar5;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    local_140._6_2_ = (undefined2)((ulonglong)uVar5 >> 0x30);
    local_140._0_6_ = CONCAT24(*(undefined2 *)*param_2,(int)uVar5);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_178,&local_160,&local_100);
    uVar10 = local_108;
    if (local_178 != (undefined8 *)0x0) {
      lVar9 = (longlong)(int)local_108;
      uVar7 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar7);
      if (local_108._4_4_ < uVar7) {
        FUN_14476a5c8(local_130,uVar10 & 0xffffffff);
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
        if (local_178 == (undefined8 *)0x0) goto LAB_14762edbf;
      }
      else {
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
      }
      LOCK();
      *(int *)(local_178 + 1) = *(int *)(local_178 + 1) + 1;
      UNLOCK();
      if (local_178 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_178 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_178)(local_178,1);
        }
      }
    }
LAB_14762edbf:
    if ((int)local_108 != 0) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_130,1);
    }
  }
  if (*(short *)((longlong)param_3 + 0x22) == -1) {
    local_190 = (undefined8 *)0x0;
    local_168 = 0;
  }
  else {
    FUN_14762ef5e(lVar2 + 0x28,&local_178,*(short *)((longlong)param_3 + 0x22),
                  *(undefined2 *)(param_1 + 0x16));
    local_190 = local_178;
    local_191 = local_170 == 1;
  }
  if (0 < iStack_158) {
    lVar9 = 0;
    iVar4 = iStack_158;
    do {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        uVar10 = (ulonglong)*(ushort *)(*param_2 + 2);
        lVar11 = uVar10 + local_168;
        if (local_168 == 0) {
          lVar11 = 0;
        }
        lVar3 = *param_6;
        uVar5 = FUN_147546472(&local_100,*(undefined2 *)(CONCAT44(uStack_15c,local_160) + lVar9 * 2)
                              ,*(undefined8 *)(param_5 + uVar10),lVar11);
        *(undefined8 *)(uVar10 + lVar3 + lVar9 * 4) = uVar5;
        iVar4 = iStack_158;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar4);
  }
  *(undefined4 *)(lVar2 + 0x29c) = 1;
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_190 + 3) = *(int *)(local_190 + 3) + -1;
    UNLOCK();
    if ((local_191 & 1) != 0) {
      ReleaseSRWLockShared((PSRWLOCK)(local_190 + 1));
    }
  }
  FUN_14588b8d6(local_130);
  FUN_1475d7c02(&local_100);
LAB_14762ecb1:
  if ((local_50 ^ (ulonglong)local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762ef5e FUN_14762ef5e body=185 status=ok
// SIG undefined FUN_14762ef5e(void)

undefined8 * FUN_14762ef5e(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_14762f018(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14762f018 FUN_14762f018 body=117 status=ok
// SIG undefined FUN_14762f018(void)

longlong * FUN_14762f018(longlong *param_1,longlong *param_2,int param_3,int param_4)

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
    param_1[2] = (longlong)param_4 * 4 + *param_2;
  }
  return param_1;
}



// FUNCTION 14762f08e FUN_14762f08e body=88 status=ok
// SIG undefined FUN_14762f08e(void)

undefined8 * FUN_14762f08e(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_14762f018(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
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



// FUNCTION 14762f0e6 FUN_14762f0e6 body=57 status=ok
// SIG undefined FUN_14762f0e6(void)

undefined8 * FUN_14762f0e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6760;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762f164 FUN_14762f164 body=55 status=ok
// SIG undefined FUN_14762f164(void)

void FUN_14762f164(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1476314ae(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14762f19c FUN_14762f19c body=57 status=ok
// SIG undefined FUN_14762f19c(void)

undefined8 * FUN_14762f19c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6760;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762f1d6 FUN_14762f1d6 body=232 status=ok
// SIG undefined FUN_14762f1d6(void)

undefined8 * FUN_14762f1d6(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_14762f2c0();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c6780;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762f2c0 FUN_14762f2c0 body=104 status=ok
// SIG undefined FUN_14762f2c0(void)

undefined8 FUN_14762f2c0(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14762f328 FUN_14762f328 body=38 status=ok
// SIG undefined FUN_14762f328(void)

undefined8 FUN_14762f328(undefined8 param_1,int param_2)

{
  FUN_14762f3c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762f34e FUN_14762f34e body=118 status=ok
// SIG undefined FUN_14762f34e(void)

void FUN_14762f34e(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_14762f49a(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 14762f3c4 FUN_14762f3c4 body=71 status=ok
// SIG undefined FUN_14762f3c4(void)

void FUN_14762f3c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c6780;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14762f40c(param_1 + 8);
  FUN_146fa217e(param_1 + 1);
  return;
}



// FUNCTION 14762f40c FUN_14762f40c body=52 status=ok
// SIG undefined FUN_14762f40c(void)

void FUN_14762f40c(longlong *param_1)

{
  FUN_14762f440();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14762f440 FUN_14762f440 body=89 status=ok
// SIG undefined FUN_14762f440(void)

void FUN_14762f440(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 14762f49a FUN_14762f49a body=95 status=ok
// SIG undefined FUN_14762f49a(void)

void FUN_14762f49a(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (ulonglong)param_2 * 8) = uVar5;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14762f4fa FUN_14762f4fa body=841 status=ok
// SIG undefined FUN_14762f4fa(void)

void FUN_14762f4fa(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_5c;
  undefined4 local_58;
  undefined1 local_54;
  ushort local_4e;
  char local_4c;
  char local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14762f54f;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_14762f54f:
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_88 = *(ulonglong *)(param_1 + 0x40);
  local_94 = *(int *)(param_2 + 0x14);
  if (local_94 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_14762f5a6;
      plVar10 = plVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14762f5a6:
  lVar6 = *plVar11;
  local_98 = *(int *)(param_2 + 0x14);
  if (local_98 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar3 = *plVar10;
  local_80 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar1 != 0) {
    local_90 = param_1 + 8;
    uVar16 = 0;
    do {
      local_5c = *(int *)(lVar3 + uVar16 * 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar8 = *(longlong *)(param_1 + 8);
      uVar12 = 0;
      if (0 < (int)uVar2) {
        uVar12 = 0;
        uVar13 = (ulonglong)uVar2;
        uVar14 = uVar2;
        do {
          uVar13 = uVar13 >> 1;
          uVar15 = (uint)uVar13 + (int)uVar12;
          if (*(int *)(lVar8 + (ulonglong)uVar15 * 8) < local_5c) {
            uVar12 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar4 = 1 < uVar14;
          uVar14 = (uint)uVar13;
        } while (bVar4);
      }
      if ((((int)uVar12 < (int)uVar2) && (*(int *)(lVar8 + uVar12 * 8) <= local_5c)) &&
         (puVar7 = (undefined4 *)(lVar8 + uVar12 * 8 + 4), puVar7 != (undefined4 *)0x0)) {
        *(undefined4 *)(lVar6 + uVar16 * 4) = *puVar7;
      }
      else {
        lVar8 = FUN_1475b443c(local_80);
        if (((lVar8 != 0) && (lVar9 = FUN_14479d2ce(lVar8), lVar9 != 0)) &&
           (*(longlong *)(lVar8 + 8) != 0)) {
          local_78 = *(undefined4 *)(param_1 + 0x30);
          uStack_74 = *(undefined4 *)(param_1 + 0x34);
          uStack_70 = *(undefined4 *)(param_1 + 0x38);
          uStack_6c = *(undefined4 *)(param_1 + 0x3c);
          local_a8 = lVar9;
          FUN_140d4d2ba(&local_4e,lVar9,lVar8 + 8,&local_78);
          lVar9 = *(longlong *)(param_1 + 0x48);
          if (lVar9 == 0) {
LAB_14762f6b0:
            if (local_4a == '\0') {
              local_58 = 0;
              local_54 = 1;
              puVar7 = &local_58;
              FUN_147630048(local_a8,lVar8 + 0x10,puVar7);
              uVar5 = local_58;
            }
            else {
              if (local_4c == '\x01') {
                local_54 = 1;
                local_58 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                                       (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_4e))
                                     (local_a8);
              }
              else {
                local_54 = 1;
                local_58 = *(undefined4 *)(local_a8 + (ulonglong)local_4e);
              }
              puVar7 = &local_58;
              uVar5 = local_58;
            }
          }
          else {
            local_a0 = lVar9;
            if (local_4a == '\0') {
              FUN_1476300ee(lVar9,&local_58,local_a8,lVar8 + 0x10);
            }
            else if (local_4c == '\x01') {
              FUN_147630910();
            }
            else {
              FUN_147630af2(lVar9,&local_58,local_a8,local_4e);
            }
            if (local_58._2_1_ == '\x01') {
              puVar7 = (undefined4 *)((ulonglong)(ushort)local_58 * 8 + *(longlong *)(local_a0 + 8))
              ;
            }
            else {
              puVar7 = (undefined4 *)0x0;
            }
            if (puVar7 == (undefined4 *)0x0) goto LAB_14762f6b0;
            uVar5 = *puVar7;
          }
          *(undefined4 *)(lVar6 + uVar16 * 4) = uVar5;
          FUN_147630cd4(local_90,&local_5c,puVar7);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar1);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    uVar16 = plVar11[2];
    if ((ulonglong)plVar11[2] < local_88) {
      uVar16 = local_88;
    }
    plVar11[2] = uVar16;
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (local_94 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762f844 FUN_14762f844 body=1346 status=ok
// SIG undefined FUN_14762f844(void)

void FUN_14762f844(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_e8;
  longlong local_e0;
  int local_d4;
  int local_d0;
  int local_cc;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined2 local_a2;
  undefined4 local_a0 [2];
  longlong local_98;
  int local_90;
  longlong local_88;
  ushort local_7c;
  char local_7a;
  ushort local_78;
  char cStack_76;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int local_70;
  longlong local_68;
  ushort local_60;
  char cStack_5e;
  undefined5 uStack_5d;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_14762f899;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_14762f899:
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar12 = (ulonglong)uVar2;
  local_b0 = *(ulonglong *)(param_1 + 0x40);
  local_cc = *(int *)(param_2 + 0x14);
  if (local_cc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14762f8ed;
      plVar10 = plVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14762f8ed:
  local_e0 = *plVar9;
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_d0 = *(int *)(param_2 + 0x14);
  if (local_d0 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_14762f946;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_14762f946:
  local_e8 = *plVar10;
  local_d4 = *(int *)(param_2 + 0x14);
  if (local_d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar6 = *plVar11;
  FUN_140b325e4(param_2,&local_98,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_88 == 0) {
    FUN_1410bd96e(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar3 = local_50;
    if (local_50 == 0) {
      FUN_1410bd9c4(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_c0 = local_68;
      if (uVar2 != 0 && local_68 != 0) {
        local_c8 = (ulonglong)((uint)uVar2 * 2);
        uVar12 = 0;
        do {
          lVar3 = *(longlong *)(local_c0 + uVar12 * 8);
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(lVar3 + 0x58) != 0) {
            puVar7 = *(undefined2 **)(lVar3 + 0x50);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(local_a0,puVar7,1);
          FUN_1476300ee(uVar4,&local_7c,*(undefined8 *)(lVar6 + uVar12 * 4),local_a0);
          lVar3 = local_c0;
          if (local_7a == '\x01') {
            *(undefined4 *)(local_e8 + uVar12 * 2) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_7c * 8);
          }
          else {
            local_a0[0] = FUN_14762ea5c(*(undefined8 *)(local_c0 + uVar12 * 8),
                                        *(undefined8 *)(lVar6 + uVar12 * 4));
            *(undefined4 *)(local_e8 + uVar12 * 2) = local_a0[0];
            local_f8 = *(undefined8 *)(lVar3 + uVar12 * 8);
            FUN_147631046(*(undefined8 *)(param_1 + 0x48),&local_a2,
                          *(undefined8 *)(lVar6 + uVar12 * 4),local_a0);
            *(undefined2 *)(local_e0 + uVar12) = local_a2;
          }
          uVar12 = uVar12 + 2;
        } while (local_c8 != uVar12);
      }
      lVar6 = CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT12(cStack_76,local_78)));
      if (lVar6 != 0) {
        LOCK();
        piVar1 = (int *)(lVar6 + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_70 == 1) {
          ReleaseSRWLockShared
                    ((PSRWLOCK)
                     (CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT12(cStack_76,local_78))) + 8));
        }
      }
    }
    else if (uVar12 != 0) {
      uVar8 = 0;
      do {
        FUN_147630af2(*(undefined8 *)(param_1 + 0x48),&local_78,*(undefined8 *)(lVar6 + uVar8 * 8),
                      *(undefined2 *)(local_50 + uVar8 * 2));
        if (cStack_76 == '\x01') {
          *(undefined4 *)(local_e8 + uVar8 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_78 * 8);
        }
        else {
          local_a0[0] = *(undefined4 *)
                         (*(longlong *)(lVar6 + uVar8 * 8) +
                         (ulonglong)*(ushort *)(lVar3 + uVar8 * 2));
          *(undefined4 *)(local_e8 + uVar8 * 4) = local_a0[0];
          local_f8 = CONCAT62(local_f8._2_6_,*(undefined2 *)(lVar3 + uVar8 * 2));
          FUN_147630f6e(*(undefined8 *)(param_1 + 0x48),&local_7c,*(undefined8 *)(lVar6 + uVar8 * 8)
                        ,local_a0);
          *(ushort *)(local_e0 + uVar8 * 2) = local_7c;
        }
        uVar8 = uVar8 + 1;
      } while (uVar12 != uVar8);
    }
    lVar6 = CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60));
    if (lVar6 != 0) {
      LOCK();
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_58 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60)) + 8));
      }
    }
  }
  else if (uVar12 != 0) {
    uVar8 = 0;
    do {
      FUN_147630910(*(undefined8 *)(param_1 + 0x48),&local_60,*(undefined8 *)(lVar6 + uVar8 * 8),
                    *(undefined2 *)(local_88 + uVar8 * 2));
      if (cStack_5e == '\x01') {
        *(undefined4 *)(local_e8 + uVar8 * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_60 * 8);
      }
      else {
        uVar5 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                            (longlong)*(int *)(param_1 + 0x3c) *
                            (ulonglong)*(ushort *)(local_88 + uVar8 * 2)))
                          (*(undefined8 *)(lVar6 + uVar8 * 8));
        local_78 = (ushort)uVar5;
        cStack_76 = (char)((uint)uVar5 >> 0x10);
        uStack_75 = (undefined1)((uint)uVar5 >> 0x18);
        *(undefined4 *)(local_e8 + uVar8 * 4) = uVar5;
        local_f8 = CONCAT62(local_f8._2_6_,*(undefined2 *)(local_88 + uVar8 * 2));
        FUN_147630e96(*(undefined8 *)(param_1 + 0x48),local_a0,*(undefined8 *)(lVar6 + uVar8 * 8),
                      &local_78);
        *(undefined2 *)(local_e0 + uVar8 * 2) = (undefined2)local_a0[0];
      }
      uVar8 = uVar8 + 1;
    } while (uVar12 != uVar8);
  }
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + -1;
    UNLOCK();
    if (local_90 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_98 + 8));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    uVar12 = plVar10[2];
    if ((ulonglong)plVar10[2] < local_b8) {
      uVar12 = local_b8;
    }
    plVar10[2] = uVar12;
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_d0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    uVar12 = plVar9[2];
    if ((ulonglong)plVar9[2] < local_b0) {
      uVar12 = local_b0;
    }
    plVar9[2] = uVar12;
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_cc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762fd88 FUN_14762fd88 body=703 status=ok
// SIG undefined FUN_14762fd88(void)

void FUN_14762fd88(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  ulonglong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14762fddd;
      plVar5 = plVar5 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_14762fddd:
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar8 = (ulonglong)uVar1;
  local_98 = *(ulonglong *)(param_1 + 0x40);
  local_9c = *(int *)(param_2 + 0x14);
  if (local_9c == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_14762fe31;
      plVar6 = plVar6 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_14762fe31:
  lVar4 = *plVar5;
  local_a0 = *(int *)(param_2 + 0x14);
  if (local_a0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  lVar2 = *plVar6;
  FUN_140b325e4(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_50 == 0) {
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if (uVar1 != 0 && local_80 != 0) {
        uVar8 = 0;
        do {
          uVar3 = FUN_14762ea5c(*(undefined8 *)(local_80 + uVar8 * 8),
                                *(undefined8 *)(lVar2 + uVar8 * 4));
          *(undefined4 *)(lVar4 + uVar8 * 2) = uVar3;
          uVar8 = uVar8 + 2;
        } while ((uint)uVar1 * 2 != uVar8);
      }
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
        UNLOCK();
        if (local_88 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
        }
      }
    }
    else if (uVar8 != 0) {
      uVar7 = 0;
      do {
        *(undefined4 *)(lVar4 + uVar7 * 4) =
             *(undefined4 *)
              (*(longlong *)(lVar2 + uVar7 * 8) + (ulonglong)*(ushort *)(local_68 + uVar7 * 2));
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
      UNLOCK();
      if (local_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
      }
    }
  }
  else if (uVar8 != 0) {
    uVar7 = 0;
    do {
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) *
                          (ulonglong)*(ushort *)(local_50 + uVar7 * 2)))
                        (*(undefined8 *)(lVar2 + uVar7 * 8));
      *(undefined4 *)(lVar4 + uVar7 * 4) = uVar3;
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar6 + 1));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    uVar8 = plVar5[2];
    if ((ulonglong)plVar5[2] < local_98) {
      uVar8 = local_98;
    }
    plVar5[2] = uVar8;
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (local_9c == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147630048 FUN_147630048 body=164 status=ok
// SIG undefined FUN_147630048(void)

void FUN_147630048(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  undefined4 local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_48);
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_38,puVar1);
  FUN_147630e1c(&local_28,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_24 == '\x01') {
    *param_3 = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476300ee FUN_1476300ee body=483 status=ok
// SIG undefined FUN_1476300ee(void)

undefined8 FUN_1476300ee(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14763021c;
        }
        else {
LAB_14763021c:
          FUN_147630578(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147630644(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476304c0(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_1476302d2(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476302d2 FUN_1476302d2 body=493 status=ok
// SIG undefined FUN_1476302d2(void)

undefined2 * FUN_1476302d2(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147630404;
        }
        else {
LAB_147630404:
          FUN_147630578(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_147630644(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1476304c0(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_147630858((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476304c0 FUN_1476304c0 body=184 status=ok
// SIG undefined FUN_1476304c0(void)

void FUN_1476304c0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7 * 8);
          iVar1 = *(int *)(lVar2 + 4 + lVar7 * 8);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 8) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 8) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7 * 8);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_146f9e890(param_1,iVar5);
  return;
}



// FUNCTION 147630578 FUN_147630578 body=90 status=ok
// SIG undefined FUN_147630578(void)

void FUN_147630578(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1476305d2();
  return;
}



// FUNCTION 1476305d2 FUN_1476305d2 body=114 status=ok
// SIG undefined FUN_1476305d2(void)

void FUN_1476305d2(longlong *param_1,int param_2)

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



// FUNCTION 147630644 FUN_147630644 body=68 status=ok
// SIG undefined FUN_147630644(void)

void FUN_147630644(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147630688(param_1);
  return;
}



// FUNCTION 147630688 FUN_147630688 body=462 status=ok
// SIG undefined FUN_147630688(void)

void FUN_147630688(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147630858 FUN_147630858 body=107 status=ok
// SIG undefined FUN_147630858(void)

int FUN_147630858(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_1476308c3(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476308c3 FUN_1476308c3 body=76 status=ok
// SIG undefined FUN_1476308c3(void)

undefined8 FUN_1476308c3(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147630910 FUN_147630910 body=481 status=ok
// SIG undefined FUN_147630910(void)

undefined8 FUN_147630910(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147630a3e;
        }
        else {
LAB_147630a3e:
          FUN_147630578(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147630644(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476304c0(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_1476302d2(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147630af2 FUN_147630af2 body=481 status=ok
// SIG undefined FUN_147630af2(void)

undefined8 FUN_147630af2(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147630c20;
        }
        else {
LAB_147630c20:
          FUN_147630578(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147630644(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476304c0(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_1476302d2(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147630cd4 FUN_147630cd4 body=194 status=ok
// SIG undefined FUN_147630cd4(void)

void FUN_147630cd4(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < iVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar4 + (ulonglong)uVar7 * 8) <= iVar5)) {
      piVar9 = (int *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_147630d6d;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_147630d96(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  piVar9 = (int *)(uVar8 * 8 + *param_1);
  iVar5 = *param_2;
LAB_147630d6d:
  *piVar9 = iVar5;
  piVar9[1] = *param_3;
  return;
}



// FUNCTION 147630d96 FUN_147630d96 body=132 status=ok
// SIG undefined FUN_147630d96(void)

void FUN_147630d96(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147630e1c FUN_147630e1c body=121 status=ok
// SIG undefined FUN_147630e1c(void)

undefined4 * FUN_147630e1c(undefined4 *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar2 = FUN_1406f977c(local_48);
  if ((lVar2 == 0) ||
     (puVar3 = (undefined4 *)(*(int *)(lVar2 + 0x44) + local_20), puVar3 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_1 = *puVar3;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147630e96 FUN_147630e96 body=214 status=ok
// SIG undefined FUN_147630e96(void)

undefined2 *
FUN_147630e96(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 1;
  FUN_14763113a(param_1 + 8,&local_60);
  *local_58 = *param_4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_147631216(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147630f6e FUN_147630f6e body=214 status=ok
// SIG undefined FUN_147630f6e(void)

undefined2 *
FUN_147630f6e(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 0;
  FUN_14763113a(param_1 + 8,&local_60);
  *local_58 = *param_4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_147631216(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147631046 FUN_147631046 body=242 status=ok
// SIG undefined FUN_147631046(void)

undefined2 *
FUN_147631046(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_14763113a(param_1 + 8,&local_58);
  *local_50 = *param_4;
  local_50 = (undefined4 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_147631216(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763113a FUN_14763113a body=220 status=ok
// SIG undefined FUN_14763113a(void)

int * FUN_14763113a(longlong *param_1,int *param_2)

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
      FUN_146f9ea2e(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 8 + *param_1;
  return param_2;
}



// FUNCTION 147631216 FUN_147631216 body=339 status=ok
// SIG undefined FUN_147631216(void)

undefined4 * FUN_147631216(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14763136a(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_147631450(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
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
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147630688(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763136a FUN_14763136a body=229 status=ok
// SIG undefined FUN_14763136a(void)

int * FUN_14763136a(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 147631450 FUN_147631450 body=93 status=ok
// SIG undefined FUN_147631450(void)

undefined8 FUN_147631450(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147630858(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1476305d2(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1476314ae FUN_1476314ae body=48 status=ok
// SIG undefined FUN_1476314ae(void)

void FUN_1476314ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1476314de FUN_1476314de body=31 status=ok
// SIG undefined FUN_1476314de(void)

undefined8 FUN_1476314de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476314fe FUN_1476314fe body=327 status=ok
// SIG undefined FUN_1476314fe(void)

void FUN_1476314fe(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_178 [32];
  ushort *local_158;
  code **local_150;
  longlong local_148;
  undefined1 local_134 [4];
  undefined2 *local_130;
  undefined2 *local_128;
  ushort local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined1 local_10b;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [12];
  undefined1 local_f4;
  byte bStack_f3;
  uint local_f0;
  longlong local_98;
  code *local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = FUN_14009d2a0();
  local_118 = *(undefined2 *)(lVar1 + 0x4a);
  local_112 = *(undefined2 *)(lVar1 + 0x108);
  local_116 = *(undefined4 *)(lVar1 + 0x104);
  local_110 = *(undefined2 *)*param_3;
  local_10b = 0;
  local_108 = 0x6ff;
  local_104 = 0;
  local_11a = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_11a;
  local_128 = &local_118;
  FUN_146121c78(&local_118,local_100);
  local_f0 = *(uint *)(param_6 + 0x290);
  bVar2 = bStack_f3 & 0xfe | (local_f0 & 0xfffffeff) == 1;
  _local_f4 = CONCAT11(bVar2,local_f4);
  local_158 = &local_11c;
  local_11c = CONCAT11(bVar2,local_f4) & 0xfdff;
  local_150 = &local_38;
  local_38 = FUN_147631f9a;
  local_30 = 3;
  local_148 = param_2;
  FUN_147631d90(local_100,local_134,param_6 + 0x28,param_5);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147631646 FUN_147631646 body=322 status=ok
// SIG undefined FUN_147631646(void)

void FUN_147631646(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined8 *local_120;
  undefined2 local_112;
  undefined2 local_110;
  undefined4 local_10e;
  undefined2 local_10a;
  undefined2 local_108;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [13];
  byte local_eb;
  uint local_e8;
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = FUN_14009d2a0();
  local_110 = *(undefined2 *)(lVar2 + 0x4a);
  local_10a = *(undefined2 *)(lVar2 + 0x108);
  local_10e = *(undefined4 *)(lVar2 + 0x104);
  local_108 = *(undefined2 *)*param_3;
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_112 = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_112;
  local_128 = &local_110;
  FUN_146121c78(&local_110,local_f8);
  local_e8 = *(uint *)(param_7 + 0x290);
  local_eb = local_eb & 0xfe | (local_e8 & 0xfffffeff) == 1;
  local_148 = param_6;
  local_140 = param_2;
  FUN_1432ff41e(local_f8,&local_120,param_7 + 0x28,param_5);
  if (local_120 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_120 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_120)(local_120,1);
    }
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763178a FUN_14763178a body=520 status=ok
// SIG undefined FUN_14763178a(void)

longlong * FUN_14763178a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14763288c(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_1476317ce;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c6810;
  plVar5 = plVar4 + 2;
  FUN_1476329fa(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_147634032(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_147631959:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000147631948:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x000147631948;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_147631959;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_147632940(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_1476317ce:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147631996 FUN_147631996 body=130 status=ok
// SIG undefined FUN_147631996(void)

void FUN_147631996(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1476340da(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147631a1a FUN_147631a1a body=616 status=ok
// SIG undefined FUN_147631a1a(void)

void FUN_147631a1a(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1475db864(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147631c84 FUN_147631c84 body=267 status=ok
// SIG undefined FUN_147631c84(void)

void FUN_147631c84(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = (int)param_4[1];
  if (0 < iVar3) {
    lVar2 = *param_6;
    lVar5 = 0;
    do {
      if (*(short *)(*param_4 + lVar5 * 2) != -1) {
        FUN_1432d4ca4(param_5 + 0x28,&local_60);
        lVar4 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)*param_3);
        if ((local_50 != 0) &&
           (puVar1 = (undefined8 *)(local_50 + lVar4 * 8), puVar1 != (undefined8 *)0x0)) {
          *(undefined8 *)((ulonglong)*(ushort *)(*param_3 + 2) + lVar2 + lVar5 * 8) = *puVar1;
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147631d90 FUN_147631d90 body=520 status=ok
// SIG undefined FUN_147631d90(void)

int * FUN_147631d90(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[4] == -1)) ||
     (cVar4 = FUN_14612201a(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_147631dce;
  }
  plVar5 = (longlong *)FUN_147631feb(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_146121fce(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476320de;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_147631f25;
    }
  }
  else {
LAB_147631f25:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_147631dce:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147631f9a FUN_147631f9a body=80 status=ok
// SIG undefined FUN_147631f9a(void)

void FUN_147631f9a(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1476320f6(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147631feb FUN_147631feb body=180 status=ok
// SIG undefined FUN_147631feb(void)

undefined8 * FUN_147631feb(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a4c67e0;
  puVar4[2] = &PTR_FUN_14a4c67f8;
  param_2 = (longlong *)*param_2;
  puVar4[3] = param_2;
  puVar4[4] = 0;
  puVar4[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar4[4] = local_38;
    puVar4[5] = uStack_30;
  }
  puVar4[8] = *(undefined8 *)(param_1 + 4);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(puVar4 + 6) = *param_1;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar1;
  *(undefined4 *)(puVar4 + 7) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476320a2 FUN_1476320a2 body=29 status=ok
// SIG undefined FUN_1476320a2(void)

undefined8 FUN_1476320a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476320c0 FUN_1476320c0 body=29 status=ok
// SIG undefined FUN_1476320c0(void)

undefined8 FUN_1476320c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476320f6 FUN_1476320f6 body=194 status=ok
// SIG undefined FUN_1476320f6(void)

void FUN_1476320f6(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar5 = 0;
  local_50 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_50 = lVar5;
  }
  local_48 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_48 = lVar5;
  }
  local_40 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_40 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_58 = lVar5;
  }
  FUN_1476321ba(param_1,lVar1,lVar4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476321ba FUN_1476321ba body=213 status=ok
// SIG undefined FUN_1476321ba(void)

void FUN_1476321ba(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *param_4;
  if (lVar2 == 0) {
    lVar2 = param_4[1];
    if (lVar2 == 0) {
      lVar2 = param_4[2];
      if (uVar1 != 0 && lVar2 != 0) {
        lVar6 = 0;
        do {
          FUN_147632290(*(undefined8 *)(lVar2 + lVar6 * 2),*(undefined8 *)(param_3 + lVar6),
                        *(undefined8 *)(param_5 + lVar6));
          lVar6 = lVar6 + 8;
        } while ((ulonglong)uVar1 * 8 != lVar6);
      }
    }
    else if (uVar5 != 0) {
      uVar4 = 0;
      do {
        uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar4 * 2);
        if (uVar3 != 0) {
          *(undefined8 *)(*(longlong *)(param_3 + uVar4 * 8) + uVar3) =
               *(undefined8 *)(param_5 + uVar4 * 8);
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  else if (uVar5 != 0) {
    uVar4 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar2 + uVar4 * 2)))
                (*(undefined8 *)(param_3 + uVar4 * 8),*(undefined8 *)(param_5 + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 147632290 FUN_147632290 body=253 status=ok
// SIG undefined FUN_147632290(void)

void FUN_147632290(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = param_3;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar2 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x80))(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_2,&local_20);
      goto LAB_1476322f5;
    }
  }
  lVar3 = FUN_14479d2ce(local_30);
  if (lVar3 == 0) {
    lVar3 = FUN_1406f977c(local_60);
    if ((lVar3 != 0) &&
       (puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + local_38), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = local_20;
    }
  }
  else {
    FUN_14763238e(param_2,lVar3,&local_20);
  }
LAB_1476322f5:
  lVar3 = FUN_14479d2ce(local_28);
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar3,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763238e FUN_14763238e body=401 status=ok
// SIG undefined FUN_14763238e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14763238e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14763242d;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147632444;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 8) goto LAB_1476324de;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147632495;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476324ad;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 3);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476324da;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1476324de:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_147632508;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147632524 FUN_147632524 body=127 status=ok
// SIG undefined FUN_147632524(void)

undefined4 * FUN_147632524(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476325a4 FUN_1476325a4 body=622 status=ok
// SIG undefined FUN_1476325a4(void)

void FUN_1476325a4(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[4]) goto LAB_1476325f7;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1476325f7:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_130 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_138 = *puVar9;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_110,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_4) goto LAB_147632668;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_147632668:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  lVar6 = local_d0;
  lVar7 = local_e8;
  lVar3 = local_100;
  uVar5 = local_138;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar8;
  local_b0 = local_110;
  local_a8 = local_108;
  local_110 = 0;
  local_a0 = local_100;
  local_100 = 0;
  local_98 = local_f8;
  local_90 = local_f0;
  local_f8 = 0;
  local_88 = local_e8;
  local_e8 = 0;
  local_80 = local_e0;
  local_78 = local_d8;
  local_e0 = 0;
  local_70 = local_d0;
  local_d0 = 0;
  local_58 = local_138;
  local_c8 = puVar8;
  local_c0 = iVar2;
  local_b8 = uVar4;
  local_68 = puVar9;
  local_60 = iVar1;
  FUN_1432f59b8();
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  if (lVar3 != 0) {
    local_128 = lVar3;
  }
  if (lVar7 != 0) {
    lStack_120 = lVar7;
  }
  if (lVar6 != 0) {
    local_118 = lVar6;
  }
  local_148 = uVar5;
  FUN_1476321ba(local_130,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar4,&local_128);
  FUN_1475daf1e(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147632814 FUN_147632814 body=118 status=ok
// SIG undefined FUN_147632814(void)

longlong FUN_147632814(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147632524();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    *(undefined4 *)(param_1 + 0xec) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763288c FUN_14763288c body=179 status=ok
// SIG undefined FUN_14763288c(void)

undefined8 * FUN_14763288c(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
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
      goto LAB_1476328e6;
    }
  }
  uVar6 = 0;
LAB_1476328e6:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147632940 FUN_147632940 body=184 status=ok
// SIG undefined FUN_147632940(void)

void FUN_147632940(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476329fa FUN_1476329fa body=241 status=ok
// SIG undefined FUN_1476329fa(void)

undefined8 * FUN_1476329fa(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c6830;
  param_1[0x1b] = &PTR_FUN_14a4c6878;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147632aec FUN_147632aec body=9 status=ok
// SIG undefined FUN_147632aec(void)

void FUN_147632aec(longlong param_1)

{
  FUN_147633666(param_1 + 0x10);
  return;
}



// FUNCTION 147632af6 FUN_147632af6 body=29 status=ok
// SIG undefined FUN_147632af6(void)

undefined8 FUN_147632af6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147632b14 FUN_147632b14 body=38 status=ok
// SIG undefined FUN_147632b14(void)

undefined8 FUN_147632b14(undefined8 param_1,int param_2)

{
  FUN_147633666();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147632b60 FUN_147632b60 body=82 status=ok
// SIG undefined FUN_147632b60(void)

void FUN_147632b60(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_147633714();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147632bb4 FUN_147632bb4 body=1044 status=ok
// SIG undefined FUN_147632bb4(void)

ulonglong FUN_147632bb4(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  byte local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_147632c29;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      local_78 = puVar6[2];
      local_60 = *(byte *)(puVar6 + 5);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar6 + 3);
      local_58 = *(byte *)(puVar6 + 6);
      FUN_1410d7556(param_1 + 0x18,&local_88);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38 + 0x28)])();
      FUN_14763387c(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
        FUN_1475db2b6(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_14763379e(&local_88,&local_78);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
LAB_147632e0b:
      unaff_RBP = 0;
      goto LAB_147632c29;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38) & 1) == 0)
    goto LAB_147632c29;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar10 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x28) < param_2) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar4 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar4);
    }
    if ((((int)uVar11 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar11 * 0x28) <= param_2)) &&
       (lVar12 + (ulonglong)uVar11 * 0x28 != -8)) {
      FUN_14763379e((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
        FUN_1475db2b6(param_1 + 0xa0);
      }
      goto LAB_147632c29;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      if ((bVar2 & 1) == 0) goto LAB_147632c29;
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      *(byte *)(puVar6 + 6) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_147632c29;
      lVar12 = (longlong)param_2 * 0x38;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + lVar12);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      if ((bVar2 & 2) == 0) {
        local_88 = *puVar6;
        uStack_80 = puVar6[1];
        local_78 = puVar6[2];
        local_60 = *(byte *)(puVar6 + 5);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar6 + 3);
        local_58 = *(byte *)(puVar6 + 6);
        FUN_1410d7556(param_1 + 0x18,&local_88);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar12 + 0x28)])();
        FUN_14763387c(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar7 = 0;
        if (0 < (int)uVar3) {
          uVar9 = (ulonglong)uVar3;
          uVar10 = uVar3;
          do {
            uVar9 = uVar9 >> 1;
            uVar11 = (uint)uVar9 + (int)uVar7;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
              uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
            }
            bVar4 = 1 < uVar10;
            uVar10 = (uint)uVar9;
          } while (bVar4);
        }
        if (((int)uVar7 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
          FUN_1475db2b6(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_14763379e(&local_88,&local_78);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
        goto LAB_147632e0b;
      }
      if ((bVar2 & 1) == 0) goto LAB_147632c29;
    }
  }
  FUN_14763379e(puVar6,puVar6 + 2);
LAB_147632c29:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147632fca FUN_147632fca body=399 status=ok
// SIG undefined FUN_147632fca(void)

undefined8 FUN_147632fca(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_147633079;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x38;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x28)])();
    FUN_14763387c(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_1475db2b6(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_1475db2b6(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_147633079:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147633164 FUN_147633164 body=266 status=ok
// SIG undefined FUN_147633164(void)

void FUN_147633164(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_1476338f0(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147633270 FUN_147633270 body=596 status=ok
// SIG undefined FUN_147633270(void)

void FUN_147633270(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  ushort uVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  char *local_88;
  undefined1 local_7c [8];
  int local_74;
  longlong local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_88 = param_2;
  if (uVar3 != 0) {
    lVar1 = param_1 + -0xd8;
    local_98 = *param_6;
    local_90 = param_6[1];
    local_a0 = param_6[2];
    param_5 = param_5 + 8;
    uVar8 = 0;
    do {
      local_70 = *(longlong *)(param_4 + uVar8 * 4);
      if ((local_70 != 0) && (cVar4 = FUN_147633bca(lVar1,&local_70,param_5), cVar4 != '\0')) {
        FUN_1476338f0(lVar1,local_7c,&local_70,param_5);
        piVar6 = *(int **)(param_1 + -0x28);
        if (*piVar6 != 0) {
          FUN_140adeba6(piVar6,local_7c);
          piVar6 = *(int **)(param_1 + -0x28);
        }
        lVar5 = FUN_1400e4054(piVar6,local_7c);
        if (lVar5 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT71((int7)((ulonglong)local_7c >> 8),'\x02' - (*(short *)(lVar5 + 0xe) == 0))
          ;
        }
        cVar4 = FUN_147633c50(lVar1,local_74,uVar9 & 0xffffffff);
        if (cVar4 == '\0') {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          if (local_90 == 0) {
            if (local_98 == 0) {
              if (local_a0 != 0) {
                uStack_60 = *(ulonglong *)(local_a0 + uVar8 * 8);
                local_58 = *(longlong *)(local_a0 + 8 + uVar8 * 8);
                uVar7 = uStack_60;
                if (local_58 != 0) {
                  LOCK();
                  *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                  UNLOCK();
                  uVar7 = *(ulonglong *)(local_a0 + uVar8 * 8);
                }
                uStack_50 = 2;
                local_68 = FUN_147633fb0(uVar7,*(undefined8 *)(param_4 + uVar8 * 4));
              }
            }
            else {
              lVar5 = (longlong)*(int *)(param_1 + 0x24) * (ulonglong)*(ushort *)(local_98 + uVar8);
              uStack_60 = *(longlong *)(param_1 + 0x18) + lVar5;
              local_68 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar5))
                                   (*(undefined8 *)(param_4 + uVar8 * 4));
            }
          }
          else {
            uStack_60 = (ulonglong)*(ushort *)(local_90 + uVar8);
            uStack_50 = 1;
            local_68 = *(undefined8 *)
                        (*(longlong *)(param_4 + uVar8 * 4) +
                        (ulonglong)*(ushort *)(local_90 + uVar8));
          }
          FUN_147633ce8(lVar1,local_74,uVar9 & 0xffffffff,&local_68);
          (*(code *)(&PTR_LAB_14a4c7e10)[uStack_50 & 0xff])(&uStack_60);
        }
        if (*local_88 == '\x01') {
          pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x30 + (longlong)local_74 * 0x38);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      uVar8 = uVar8 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar3 * 2 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476334c6 FUN_1476334c6 body=38 status=ok
// SIG undefined FUN_1476334c6(void)

undefined8 FUN_1476334c6(undefined8 param_1,int param_2)

{
  FUN_147633666();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476334ec FUN_1476334ec body=52 status=ok
// SIG undefined FUN_1476334ec(void)

void FUN_1476334ec(longlong *param_1)

{
  FUN_147633520();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147633520 FUN_147633520 body=324 status=ok
// SIG undefined FUN_147633520(void)

void FUN_147633520(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x38 + 0x28)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147633666 FUN_147633666 body=173 status=ok
// SIG undefined FUN_147633666(void)

void FUN_147633666(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c6890;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_145cd0dbf(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1476334ec(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147633707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147633714 FUN_147633714 body=136 status=ok
// SIG undefined FUN_147633714(void)

void FUN_147633714(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763379e FUN_14763379e body=172 status=ok
// SIG undefined FUN_14763379e(void)

void FUN_14763379e(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_34 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_38);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 3) == '\x01') {
      *(undefined8 *)(lVar1 + (ulonglong)*(ushort *)(param_2 + 1)) = *param_2;
    }
    else {
      if (*(char *)(param_2 + 3) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
      if (param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763387c FUN_14763387c body=116 status=ok
// SIG undefined FUN_14763387c(void)

void FUN_14763387c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1476338f0 FUN_1476338f0 body=189 status=ok
// SIG undefined FUN_1476338f0(void)

longlong FUN_1476338f0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_1476339ae(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476339ae FUN_1476339ae body=313 status=ok
// SIG undefined FUN_1476339ae(void)

int * FUN_1476339ae(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_58._0_4_ = *param_3;
    local_58._4_4_ = param_3[1];
    uStack_50._0_4_ = param_3[2];
    uStack_50._4_4_ = param_3[3];
    FUN_147633ae8(param_1 + 0x68,local_68);
    *local_60 = (undefined4)local_58;
    local_60[1] = local_58._4_4_;
    local_60[2] = (undefined4)uStack_50;
    local_60[3] = uStack_50._4_4_;
    *(undefined1 *)(local_60 + 10) = 0;
    *(undefined8 *)(local_60 + 6) = 0;
    *(undefined1 *)(local_60 + 0xc) = 0;
    *param_2 = local_68[0];
    local_58 = param_3;
    uStack_50 = param_2;
    FUN_140bf3cbe(plVar1,local_68,&local_58,0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147633ae8 FUN_147633ae8 body=226 status=ok
// SIG undefined FUN_147633ae8(void)

int * FUN_147633ae8(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 147633bca FUN_147633bca body=132 status=ok
// SIG undefined FUN_147633bca(void)

byte FUN_147633bca(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_147633e4a(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 147633c50 FUN_147633c50 body=151 status=ok
// SIG undefined FUN_147633c50(void)

ulonglong FUN_147633c50(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x30);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x28;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x30));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 147633ce8 FUN_147633ce8 body=353 status=ok
// SIG undefined FUN_147633ce8(void)

void FUN_147633ce8(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar6 = *(byte *)(lVar7 + 0x30);
    if ((bVar6 & 1) == 0) {
      *(undefined8 *)(lVar7 + 0x10) = *param_4;
      if ((undefined8 *)(lVar7 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 3));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 3)])
                  (&local_58,param_4 + 1);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar7 + 0x28);
        uVar2 = *(undefined4 *)(lVar7 + 0x18);
        uVar3 = *(undefined4 *)(lVar7 + 0x1c);
        uVar4 = *(undefined4 *)(lVar7 + 0x20);
        uVar5 = *(undefined4 *)(lVar7 + 0x24);
        *(undefined4 *)(lVar7 + 0x18) = local_58;
        *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
        *(undefined4 *)(lVar7 + 0x20) = uStack_50;
        *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
        *(ulonglong *)(lVar7 + 0x28) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar6 = *(byte *)(lVar7 + 0x30);
      }
      *(byte *)(lVar7 + 0x30) = bVar6 | 1;
    }
    else {
      FUN_1475db3cc(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined8 *)(lVar7 + 0x10) = *param_4;
    if ((undefined8 *)(lVar7 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 3));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 3)])
                (&local_58,param_4 + 1);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar7 + 0x28);
      uVar2 = *(undefined4 *)(lVar7 + 0x18);
      uVar3 = *(undefined4 *)(lVar7 + 0x1c);
      uVar4 = *(undefined4 *)(lVar7 + 0x20);
      uVar5 = *(undefined4 *)(lVar7 + 0x24);
      *(undefined4 *)(lVar7 + 0x18) = local_58;
      *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
      *(undefined4 *)(lVar7 + 0x20) = uStack_50;
      *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
      *(ulonglong *)(lVar7 + 0x28) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147633e4a FUN_147633e4a body=189 status=ok
// SIG undefined FUN_147633e4a(void)

longlong FUN_147633e4a(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_147633f08(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147633f08 FUN_147633f08 body=167 status=ok
// SIG undefined FUN_147633f08(void)

undefined4 * FUN_147633f08(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 147633fb0 FUN_147633fb0 body=129 status=ok
// SIG undefined FUN_147633fb0(void)

undefined8 FUN_147633fb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  lVar2 = FUN_1406f977c(local_60);
  uVar4 = 0;
  uVar5 = 0;
  if ((lVar2 != 0) &&
     (puVar3 = (undefined8 *)(*(int *)(lVar2 + 0x44) + local_38), puVar3 != (undefined8 *)0x0)) {
    uVar1 = *puVar3;
    uVar4 = (undefined4)uVar1;
    uVar5 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT44(uVar5,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147634032 FUN_147634032 body=167 status=ok
// SIG undefined FUN_147634032(void)

void FUN_147634032(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476340ad;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476340ad;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1476340ad:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476340cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1476340da FUN_1476340da body=772 status=ok
// SIG undefined FUN_1476340da(void)

void FUN_1476340da(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte local_191;
  undefined8 *local_190;
  undefined8 *local_178;
  int local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [32];
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_138;
  if (param_4 == 0) goto LAB_147634133;
  uVar5 = FUN_145990612();
  plVar6 = (longlong *)FUN_144718840(param_4,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_147634133;
  lVar2 = *(longlong *)(param_4 + 0x28);
  *(undefined4 *)(lVar2 + 0x29c) = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_160 = *param_3;
  uStack_15c = param_3[1];
  iStack_158 = param_3[2];
  uStack_154 = param_3[3];
  local_150 = param_3[4];
  uStack_14c = param_3[5];
  uStack_148 = param_3[6];
  uStack_144 = param_3[7];
  local_110 = (undefined1 *)0x0;
  local_108 = 0x400000000;
  local_140 = uVar5;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    local_140._6_2_ = (undefined2)((ulonglong)uVar5 >> 0x30);
    local_140._0_6_ = CONCAT24(*(undefined2 *)*param_2,(int)uVar5);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_178,&local_160,&local_100);
    uVar10 = local_108;
    if (local_178 != (undefined8 *)0x0) {
      lVar9 = (longlong)(int)local_108;
      uVar7 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar7);
      if (local_108._4_4_ < uVar7) {
        FUN_14476a5c8(local_130,uVar10 & 0xffffffff);
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
        if (local_178 == (undefined8 *)0x0) goto LAB_147634241;
      }
      else {
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
      }
      LOCK();
      *(int *)(local_178 + 1) = *(int *)(local_178 + 1) + 1;
      UNLOCK();
      if (local_178 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_178 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_178)(local_178,1);
        }
      }
    }
LAB_147634241:
    if ((int)local_108 != 0) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_130,1);
    }
  }
  if (*(short *)((longlong)param_3 + 0x22) == -1) {
    local_190 = (undefined8 *)0x0;
    local_168 = 0;
  }
  else {
    FUN_1475db864(lVar2 + 0x28,&local_178,*(short *)((longlong)param_3 + 0x22),
                  *(undefined2 *)(param_1 + 0x16));
    local_190 = local_178;
    local_191 = local_170 == 1;
  }
  if (0 < iStack_158) {
    lVar9 = 0;
    iVar4 = iStack_158;
    do {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        uVar10 = (ulonglong)*(ushort *)(*param_2 + 2);
        lVar11 = uVar10 + local_168;
        if (local_168 == 0) {
          lVar11 = 0;
        }
        lVar3 = *param_6;
        uVar5 = FUN_147546472(&local_100,*(undefined2 *)(CONCAT44(uStack_15c,local_160) + lVar9 * 2)
                              ,*(undefined8 *)(param_5 + uVar10),lVar11);
        *(undefined8 *)(uVar10 + lVar3 + lVar9 * 8) = uVar5;
        iVar4 = iStack_158;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar4);
  }
  *(undefined4 *)(lVar2 + 0x29c) = 1;
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_190 + 3) = *(int *)(local_190 + 3) + -1;
    UNLOCK();
    if ((local_191 & 1) != 0) {
      ReleaseSRWLockShared((PSRWLOCK)(local_190 + 1));
    }
  }
  FUN_14588b8d6(local_130);
  FUN_1475d7c02(&local_100);
LAB_147634133:
  if ((local_50 ^ (ulonglong)local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476343e0 FUN_1476343e0 body=57 status=ok
// SIG undefined FUN_1476343e0(void)

undefined8 * FUN_1476343e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6900;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763441a FUN_14763441a body=152 status=ok
// SIG undefined FUN_14763441a(void)

void FUN_14763441a(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_14763456c(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476344f8 FUN_1476344f8 body=57 status=ok
// SIG undefined FUN_1476344f8(void)

void FUN_1476344f8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1475ddae4(param_1 + 8,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 147634532 FUN_147634532 body=57 status=ok
// SIG undefined FUN_147634532(void)

undefined8 * FUN_147634532(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6900;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763456c FUN_14763456c body=232 status=ok
// SIG undefined FUN_14763456c(void)

undefined8 * FUN_14763456c(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_147634656();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c6920;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147634656 FUN_147634656 body=104 status=ok
// SIG undefined FUN_147634656(void)

undefined8 FUN_147634656(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1476346be FUN_1476346be body=38 status=ok
// SIG undefined FUN_1476346be(void)

undefined8 FUN_1476346be(undefined8 param_1,int param_2)

{
  FUN_147634760();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476346e4 FUN_1476346e4 body=124 status=ok
// SIG undefined FUN_1476346e4(void)

void FUN_1476346e4(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_1475dbc86(param_1 + 8,uVar1,1);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 147634760 FUN_147634760 body=71 status=ok
// SIG undefined FUN_147634760(void)

void FUN_147634760(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c6920;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1476347a8(param_1 + 8);
  FUN_145c4d3e2(param_1 + 1);
  return;
}



// FUNCTION 1476347a8 FUN_1476347a8 body=52 status=ok
// SIG undefined FUN_1476347a8(void)

void FUN_1476347a8(longlong *param_1)

{
  FUN_1476347dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476347dc FUN_1476347dc body=89 status=ok
// SIG undefined FUN_1476347dc(void)

void FUN_1476347dc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 147634836 FUN_147634836 body=884 status=ok
// SIG undefined FUN_147634836(void)

void FUN_147634836(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_64;
  ushort local_5e;
  char local_5c;
  char local_5a;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14763488b;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14763488b:
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_88 = *(ulonglong *)(param_1 + 0x40);
  local_94 = *(int *)(param_2 + 0x14);
  if (local_94 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_1476348e2;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476348e2:
  lVar5 = *plVar10;
  local_98 = *(int *)(param_2 + 0x14);
  if (local_98 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar3 = *plVar9;
  local_80 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar1 != 0) {
    local_90 = param_1 + 8;
    uVar15 = 0;
    do {
      local_64 = *(int *)(lVar3 + uVar15 * 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar7 = *(longlong *)(param_1 + 8);
      uVar11 = 0;
      if (0 < (int)uVar2) {
        uVar11 = 0;
        uVar12 = (ulonglong)uVar2;
        uVar13 = uVar2;
        do {
          uVar12 = uVar12 >> 1;
          uVar14 = (uint)uVar12 + (int)uVar11;
          if (*(int *)(lVar7 + (ulonglong)uVar14 * 0x10) < local_64) {
            uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar4 = 1 < uVar13;
          uVar13 = (uint)uVar12;
        } while (bVar4);
      }
      if ((((int)uVar11 < (int)uVar2) && (*(int *)(lVar7 + uVar11 * 0x10) <= local_64)) &&
         (puVar6 = (undefined8 *)(lVar7 + uVar11 * 0x10 + 8), puVar6 != (undefined8 *)0x0)) {
        *(undefined8 *)(lVar5 + uVar15 * 8) = *puVar6;
      }
      else {
        lVar7 = FUN_1475b443c(local_80);
        if (((lVar7 != 0) && (lVar8 = FUN_14479d2ce(lVar7), lVar8 != 0)) &&
           (*(longlong *)(lVar7 + 8) != 0)) {
          local_78 = *(undefined4 *)(param_1 + 0x30);
          uStack_74 = *(undefined4 *)(param_1 + 0x34);
          uStack_70 = *(undefined4 *)(param_1 + 0x38);
          uStack_6c = *(undefined4 *)(param_1 + 0x3c);
          local_a8 = lVar8;
          FUN_140d4d2ba(&local_5e,lVar8,lVar7 + 8,&local_78);
          lVar8 = *(longlong *)(param_1 + 0x48);
          if (lVar8 == 0) {
LAB_1476349f9:
            if (local_5a == '\0') {
              local_58 = 0;
              local_50 = 1;
              FUN_1476353de(local_a8,lVar7 + 0x10,&local_58);
            }
            else if (local_5c == '\x01') {
              local_50 = 1;
              local_58 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                                     (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_5e))
                                   (local_a8);
            }
            else {
              local_50 = 1;
              local_58 = *(ulonglong *)(local_a8 + (ulonglong)local_5e);
            }
            puVar6 = &local_58;
            *(ulonglong *)(lVar5 + uVar15 * 8) = local_58;
          }
          else {
            local_a0 = lVar8;
            if (local_5a == '\0') {
              FUN_147635488(lVar8,&local_58,local_a8,lVar7 + 0x10);
            }
            else if (local_5c == '\x01') {
              FUN_147635bf2();
            }
            else {
              FUN_147635dd4(lVar8,&local_58,local_a8,local_5e);
            }
            if (local_58._2_1_ == '\x01') {
              puVar6 = (undefined8 *)((local_58 & 0xffff) * 8 + *(longlong *)(local_a0 + 8));
            }
            else {
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar6 == (undefined8 *)0x0) goto LAB_1476349f9;
            *(undefined8 *)(lVar5 + uVar15 * 8) = *puVar6;
          }
          FUN_1475dd20e(local_90,&local_64,puVar6);
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar1);
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    uVar15 = plVar10[2];
    if ((ulonglong)plVar10[2] < local_88) {
      uVar15 = local_88;
    }
    plVar10[2] = uVar15;
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_94 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147634bac FUN_147634bac body=1382 status=ok
// SIG undefined FUN_147634bac(void)

void FUN_147634bac(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_e8;
  longlong local_e0;
  int local_d4;
  int local_d0;
  int local_cc;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined2 local_a2;
  longlong local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ushort local_64;
  char local_62;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_147634c01;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147634c01:
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar10 = (ulonglong)uVar1;
  local_b0 = *(ulonglong *)(param_1 + 0x40);
  local_cc = *(int *)(param_2 + 0x14);
  if (local_cc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_147634c55;
      plVar8 = plVar8 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147634c55:
  local_e0 = *plVar7;
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_d0 = *(int *)(param_2 + 0x14);
  if (local_d0 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_147634cae;
      plVar9 = plVar9 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147634cae:
  local_e8 = *plVar8;
  local_d4 = *(int *)(param_2 + 0x14);
  if (local_d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar4 = *plVar9;
  FUN_140b325e4(param_2,&local_88,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_78 == 0) {
    FUN_1410bd96e(param_2,&local_a0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar2 = local_90;
    if (local_90 == 0) {
      FUN_1410bd9c4(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_c0 = local_50;
      if (uVar1 != 0 && local_50 != 0) {
        local_c8 = (ulonglong)((uint)uVar1 * 2);
        uVar10 = 0;
        do {
          lVar2 = *(longlong *)(local_c0 + uVar10 * 8);
          puVar5 = &DAT_149dfb77a;
          if (*(int *)(lVar2 + 0x58) != 0) {
            puVar5 = *(undefined2 **)(lVar2 + 0x50);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_70,puVar5,1);
          FUN_147635488(uVar3,&local_64,*(undefined8 *)(lVar4 + uVar10 * 4),&local_70);
          lVar2 = local_c0;
          if (local_62 == '\x01') {
            *(undefined8 *)(local_e8 + uVar10 * 4) =
                 *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_64 * 8);
          }
          else {
            local_70 = FUN_147633fb0(*(undefined8 *)(local_c0 + uVar10 * 8),
                                     *(undefined8 *)(lVar4 + uVar10 * 4));
            *(ulonglong *)(local_e8 + uVar10 * 4) = local_70;
            local_f8 = *(undefined8 *)(lVar2 + uVar10 * 8);
            FUN_1476361ec(*(undefined8 *)(param_1 + 0x48),&local_a2,
                          *(undefined8 *)(lVar4 + uVar10 * 4),&local_70);
            *(undefined2 *)(local_e0 + uVar10) = local_a2;
          }
          uVar10 = uVar10 + 2;
        } while (local_c8 != uVar10);
      }
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
        UNLOCK();
        if (local_58 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
        }
      }
    }
    else if (uVar10 != 0) {
      uVar6 = 0;
      do {
        FUN_147635dd4(*(undefined8 *)(param_1 + 0x48),&local_70,*(undefined8 *)(lVar4 + uVar6 * 8),
                      *(undefined2 *)(local_90 + uVar6 * 2));
        if (local_70._2_1_ == '\x01') {
          *(undefined8 *)(local_e8 + uVar6 * 8) =
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (local_70 & 0xffff) * 8);
        }
        else {
          local_60 = *(ulonglong *)
                      (*(longlong *)(lVar4 + uVar6 * 8) + (ulonglong)*(ushort *)(lVar2 + uVar6 * 2))
          ;
          *(ulonglong *)(local_e8 + uVar6 * 8) = local_60;
          local_f8 = CONCAT62(local_f8._2_6_,*(undefined2 *)(lVar2 + uVar6 * 2));
          FUN_147636110(*(undefined8 *)(param_1 + 0x48),&local_64,*(undefined8 *)(lVar4 + uVar6 * 8)
                        ,&local_60);
          *(ushort *)(local_e0 + uVar6 * 2) = local_64;
        }
        uVar6 = uVar6 + 1;
      } while (uVar10 != uVar6);
    }
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 0x18) = *(int *)(local_a0 + 0x18) + -1;
      UNLOCK();
      if (local_98 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_a0 + 8));
      }
    }
  }
  else if (uVar10 != 0) {
    uVar6 = 0;
    do {
      FUN_147635bf2(*(undefined8 *)(param_1 + 0x48),&local_60,*(undefined8 *)(lVar4 + uVar6 * 8),
                    *(undefined2 *)(local_78 + uVar6 * 2));
      if (local_60._2_1_ == '\x01') {
        *(undefined8 *)(local_e8 + uVar6 * 8) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (local_60 & 0xffff) * 8);
      }
      else {
        local_a0 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                               (longlong)*(int *)(param_1 + 0x3c) *
                               (ulonglong)*(ushort *)(local_78 + uVar6 * 2)))
                             (*(undefined8 *)(lVar4 + uVar6 * 8));
        *(longlong *)(local_e8 + uVar6 * 8) = local_a0;
        local_f8 = CONCAT62(local_f8._2_6_,*(undefined2 *)(local_78 + uVar6 * 2));
        FUN_147636034(*(undefined8 *)(param_1 + 0x48),&local_70,*(undefined8 *)(lVar4 + uVar6 * 8),
                      &local_a0);
        *(undefined2 *)(local_e0 + uVar6 * 2) = (undefined2)local_70;
      }
      uVar6 = uVar6 + 1;
    } while (uVar10 != uVar6);
  }
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 0x18) = *(int *)(local_88 + 0x18) + -1;
    UNLOCK();
    if (local_80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_88 + 8));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar10 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_b8) {
      uVar10 = local_b8;
    }
    plVar8[2] = uVar10;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_d0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    uVar10 = plVar7[2];
    if ((ulonglong)plVar7[2] < local_b0) {
      uVar10 = local_b0;
    }
    plVar7[2] = uVar10;
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_cc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147635114 FUN_147635114 body=712 status=ok
// SIG undefined FUN_147635114(void)

void FUN_147635114(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  ulonglong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_147635169;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_147635169:
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar4 = (ulonglong)uVar1;
  local_98 = *(ulonglong *)(param_1 + 0x40);
  local_9c = *(int *)(param_2 + 0x14);
  if (local_9c == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1476351bd;
      plVar6 = plVar6 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1476351bd:
  lVar3 = *plVar5;
  local_a0 = *(int *)(param_2 + 0x14);
  if (local_a0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  lVar2 = *plVar6;
  FUN_140b325e4(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_50 == 0) {
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if (uVar1 != 0 && local_80 != 0) {
        lVar8 = 0;
        do {
          uVar9 = FUN_147633fb0(*(undefined8 *)(local_80 + lVar8 * 2),*(undefined8 *)(lVar2 + lVar8)
                               );
          *(undefined8 *)(lVar3 + lVar8) = uVar9;
          lVar8 = lVar8 + 8;
        } while ((ulonglong)uVar1 * 8 != lVar8);
      }
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
        UNLOCK();
        if (local_88 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
        }
      }
    }
    else if (uVar4 != 0) {
      uVar7 = 0;
      do {
        *(undefined8 *)(lVar3 + uVar7 * 8) =
             *(undefined8 *)
              (*(longlong *)(lVar2 + uVar7 * 8) + (ulonglong)*(ushort *)(local_68 + uVar7 * 2));
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
      UNLOCK();
      if (local_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
      }
    }
  }
  else if (uVar4 != 0) {
    uVar7 = 0;
    do {
      uVar9 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) *
                          (ulonglong)*(ushort *)(local_50 + uVar7 * 2)))
                        (*(undefined8 *)(lVar2 + uVar7 * 8));
      *(undefined8 *)(lVar3 + uVar7 * 8) = uVar9;
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar6 + 1));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    uVar4 = plVar5[2];
    if ((ulonglong)plVar5[2] < local_98) {
      uVar4 = local_98;
    }
    plVar5[2] = uVar4;
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (local_9c == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476353de FUN_1476353de body=168 status=ok
// SIG undefined FUN_1476353de(void)

void FUN_1476353de(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_50);
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_40,puVar1);
  FUN_147635fb6(&local_30,param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 == '\x01') {
    *param_3 = local_30;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147635488 FUN_147635488 body=483 status=ok
// SIG undefined FUN_147635488(void)

undefined8 FUN_147635488(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1476355b6;
        }
        else {
LAB_1476355b6:
          FUN_14763585a(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147635926(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475dc9dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_14763566c(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763566c FUN_14763566c body=493 status=ok
// SIG undefined FUN_14763566c(void)

undefined2 * FUN_14763566c(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14763579e;
        }
        else {
LAB_14763579e:
          FUN_14763585a(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_147635926(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1475dc9dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_147635b3a((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763585a FUN_14763585a body=90 status=ok
// SIG undefined FUN_14763585a(void)

void FUN_14763585a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1476358b4();
  return;
}



// FUNCTION 1476358b4 FUN_1476358b4 body=114 status=ok
// SIG undefined FUN_1476358b4(void)

void FUN_1476358b4(longlong *param_1,int param_2)

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



// FUNCTION 147635926 FUN_147635926 body=68 status=ok
// SIG undefined FUN_147635926(void)

void FUN_147635926(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14763596a(param_1);
  return;
}



// FUNCTION 14763596a FUN_14763596a body=462 status=ok
// SIG undefined FUN_14763596a(void)

void FUN_14763596a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147635b3a FUN_147635b3a body=107 status=ok
// SIG undefined FUN_147635b3a(void)

int FUN_147635b3a(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_147635ba5(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 147635ba5 FUN_147635ba5 body=76 status=ok
// SIG undefined FUN_147635ba5(void)

undefined8 FUN_147635ba5(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147635bf2 FUN_147635bf2 body=481 status=ok
// SIG undefined FUN_147635bf2(void)

undefined8 FUN_147635bf2(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147635d20;
        }
        else {
LAB_147635d20:
          FUN_14763585a(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147635926(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475dc9dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_14763566c(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147635dd4 FUN_147635dd4 body=481 status=ok
// SIG undefined FUN_147635dd4(void)

undefined8 FUN_147635dd4(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147635f02;
        }
        else {
LAB_147635f02:
          FUN_14763585a(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147635926(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475dc9dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_14763566c(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147635fb6 FUN_147635fb6 body=125 status=ok
// SIG undefined FUN_147635fb6(void)

undefined8 * FUN_147635fb6(undefined8 *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar2 = FUN_1406f977c(local_48);
  if ((lVar2 == 0) ||
     (puVar3 = (undefined8 *)(*(int *)(lVar2 + 0x44) + local_20), puVar3 == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_1 = *puVar3;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147636034 FUN_147636034 body=218 status=ok
// SIG undefined FUN_147636034(void)

undefined2 *
FUN_147636034(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 1;
  FUN_1475dd744(param_1 + 8,&local_60);
  *local_58 = *param_4;
  local_58 = (undefined8 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1476362e4(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147636110 FUN_147636110 body=218 status=ok
// SIG undefined FUN_147636110(void)

undefined2 *
FUN_147636110(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 0;
  FUN_1475dd744(param_1 + 8,&local_60);
  *local_58 = *param_4;
  local_58 = (undefined8 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1476362e4(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476361ec FUN_1476361ec body=246 status=ok
// SIG undefined FUN_1476361ec(void)

undefined2 *
FUN_1476361ec(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_1475dd744(param_1 + 8,&local_58);
  *local_50 = *param_4;
  local_50 = (undefined8 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_1476362e4(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476362e4 FUN_1476362e4 body=339 status=ok
// SIG undefined FUN_1476362e4(void)

undefined4 * FUN_1476362e4(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147636438(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_14763651e(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
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
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14763596a(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147636438 FUN_147636438 body=229 status=ok
// SIG undefined FUN_147636438(void)

int * FUN_147636438(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 14763651e FUN_14763651e body=93 status=ok
// SIG undefined FUN_14763651e(void)

undefined8 FUN_14763651e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147635b3a(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1476358b4(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14763657c FUN_14763657c body=31 status=ok
// SIG undefined FUN_14763657c(void)

undefined8 FUN_14763657c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763659c FUN_14763659c body=750 status=ok
// SIG undefined FUN_14763659c(void)

void FUN_14763659c(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_1c8 [32];
  ushort *local_1a8;
  code **local_1a0;
  longlong local_198;
  undefined8 *local_190;
  ushort local_17c [2];
  ushort *local_178;
  undefined8 *local_170;
  undefined2 local_164;
  ushort local_162;
  undefined8 local_160;
  undefined2 local_158;
  undefined1 local_153;
  undefined4 local_150;
  undefined1 local_14c;
  undefined2 local_148;
  undefined4 local_146;
  undefined2 local_142;
  undefined2 local_140;
  undefined1 local_13b;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_128;
  undefined1 local_120 [12];
  undefined1 local_114;
  byte bStack_113;
  uint local_110;
  undefined1 local_108 [80];
  longlong local_b8;
  code *local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar2 = FUN_14009d2a0();
  local_148 = *(undefined2 *)(lVar2 + 0x4a);
  local_142 = *(undefined2 *)(lVar2 + 0x108);
  local_146 = *(undefined4 *)(lVar2 + 0x104);
  local_140 = *(undefined2 *)*param_3;
  local_13b = 0;
  local_138 = 0x6ff;
  local_134 = 0;
  local_162 = *(ushort *)(param_2 + 0x14);
  local_178 = &local_162;
  local_170 = &local_160;
  FUN_14763717e(&local_148,local_120);
  local_110 = *(uint *)(param_6 + 0x290);
  bVar3 = bStack_113 & 0xfe | (local_110 & 0xfffffeff) == 1;
  _local_114 = CONCAT11(bVar3,local_114);
  local_1a8 = local_17c;
  local_17c[0] = CONCAT11(bVar3,local_114) & 0xfdff;
  local_1a0 = (code **)&local_160;
  local_160 = FUN_1476374b2;
  local_158 = CONCAT11(local_158._1_1_,3);
  local_198 = param_2;
  FUN_1476372a8(local_120,&local_58,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_128 = 0x10000000000;
    puVar5 = (undefined2 *)*param_3;
    iVar1 = *(int *)(param_3 + 1);
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        FUN_140dba9e6(&local_148,*(undefined2 *)((longlong)puVar5 + lVar4));
        lVar4 = lVar4 + 4;
      } while ((longlong)iVar1 * 4 != lVar4);
      puVar5 = (undefined2 *)*param_3;
    }
    local_158 = *puVar5;
    local_160 = (code *)CONCAT26(*(undefined2 *)(lVar2 + 0x108),
                                 CONCAT42(*(undefined4 *)(lVar2 + 0x104),
                                          *(undefined2 *)(lVar2 + 0x4a)));
    local_153 = 0;
    local_150 = 0x6ff;
    local_14c = 0;
    FUN_147637e54(local_120);
    FUN_140dad9c2(local_108,&local_148,2);
    local_164 = *(undefined2 *)(param_2 + 0x14);
    local_50 = &local_162;
    local_58 = (code *)&local_164;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_148,0x84);
    local_110 = *(uint *)(param_6 + 0x290);
    bVar3 = bStack_113 & 0xfe | (local_110 & 0xfffffeff) == 1;
    _local_114 = CONCAT11(bVar3,local_114);
    local_162 = CONCAT11(bVar3,local_114) & 0xfdff;
    local_58 = FUN_147638118;
    local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
    local_1a8 = &local_162;
    local_1a0 = &local_58;
    local_198 = param_2;
    local_190 = param_3;
    FUN_147637ef8(local_120,local_17c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763688c FUN_14763688c body=747 status=ok
// SIG undefined FUN_14763688c(void)

void FUN_14763688c(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined2 *local_180;
  uint *local_178;
  undefined8 *local_170;
  undefined2 *local_168;
  undefined2 *local_160;
  undefined2 local_152;
  undefined2 local_150;
  uint local_14e;
  undefined2 local_14a;
  undefined2 local_148;
  undefined1 local_143;
  undefined4 local_140;
  undefined1 local_13c;
  undefined2 local_138;
  undefined4 local_136;
  undefined2 local_132;
  undefined2 local_130;
  undefined1 local_12b;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_118;
  undefined1 local_110 [13];
  byte local_103;
  uint local_100;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar4 = FUN_14009d2a0();
  local_138 = *(undefined2 *)(lVar4 + 0x4a);
  local_132 = *(undefined2 *)(lVar4 + 0x108);
  local_136 = *(undefined4 *)(lVar4 + 0x104);
  local_130 = *(undefined2 *)*param_3;
  local_12b = 0;
  local_128 = 0x6ff;
  local_124 = 0;
  local_150 = *(undefined2 *)(param_2 + 0x14);
  local_180 = &local_150;
  local_178 = &local_14e;
  local_190 = param_3;
  FUN_14763717e(&local_138,local_110);
  local_100 = *(uint *)(param_7 + 0x290);
  local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
  local_1a8 = param_6;
  local_1a0 = param_2;
  FUN_1432ffb8a(local_110,&local_170,param_7 + 0x28,param_5);
  if (local_170 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_170 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_170)(local_170,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_118 = 0x10000000000;
    puVar6 = (undefined2 *)*local_190;
    iVar2 = *(int *)(local_190 + 1);
    if ((longlong)iVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_138,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar2 * 4 != lVar5);
      puVar6 = (undefined2 *)*local_190;
    }
    puVar3 = local_190;
    local_150 = *(undefined2 *)(lVar4 + 0x4a);
    local_14a = *(undefined2 *)(lVar4 + 0x108);
    local_14e = *(uint *)(lVar4 + 0x104);
    local_148 = *puVar6;
    local_143 = 0;
    local_140 = 0x6ff;
    local_13c = 0;
    FUN_147637e54(local_110);
    FUN_140dad9c2(local_f8,&local_138,2);
    local_152 = *(undefined2 *)(param_2 + 0x14);
    local_160 = &local_150;
    local_168 = &local_152;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_138,0x84);
    local_100 = *(uint *)(param_7 + 0x290);
    local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
    local_198 = puVar3;
    local_1a8 = param_6;
    local_1a0 = param_2;
    FUN_14330002c(local_110,&local_188,param_7 + 0x28,param_5);
    if (local_188 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_188 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_188)(local_188,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147636b78 FUN_147636b78 body=520 status=ok
// SIG undefined FUN_147636b78(void)

longlong * FUN_147636b78(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14763941e(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_147636bbc;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c69e0;
  plVar5 = plVar4 + 2;
  FUN_14763958c(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_14763b012(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_147636d47:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000147636d36:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x000147636d36;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_147636d47;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_1476394d2(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_147636bbc:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147636d84 FUN_147636d84 body=130 status=ok
// SIG undefined FUN_147636d84(void)

void FUN_147636d84(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_14763b0ba(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147636e08 FUN_147636e08 body=616 status=ok
// SIG undefined FUN_147636e08(void)

void FUN_147636e08(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_14763b3c8(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147637072 FUN_147637072 body=266 status=ok
// SIG undefined FUN_147637072(void)

void FUN_147637072(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = (int)param_4[1];
  if (0 < iVar1) {
    lVar4 = *param_6;
    lVar3 = 0;
    do {
      if (*(short *)(*param_4 + lVar3 * 2) != -1) {
        FUN_1432d4ca4(param_5 + 0x28,&local_60);
        lVar2 = (longlong)local_58;
        FUN_1476392bc(local_60,&local_60,*(undefined2 *)*param_3);
        if ((local_50 != 0) && (local_50 + lVar2 * 0x10 != 0)) {
          FUN_144a787a6((ulonglong)*(ushort *)(*param_3 + 2) + lVar4);
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar1 = (int)param_4[1];
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 < iVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763717e FUN_14763717e body=148 status=ok
// SIG undefined FUN_14763717e(void)

undefined8 * FUN_14763717e(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_147637214(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147637214 FUN_147637214 body=147 status=ok
// SIG undefined FUN_147637214(void)

void FUN_147637214(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476372a8 FUN_1476372a8 body=520 status=ok
// SIG undefined FUN_1476372a8(void)

int * FUN_1476372a8(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[4] == -1)) ||
     (cVar4 = FUN_147637504(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1476372e6;
  }
  plVar5 = (longlong *)FUN_1476375bf(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_147637574(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476376b2;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_14763743d;
    }
  }
  else {
LAB_14763743d:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_1476372e6:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476374b2 FUN_1476374b2 body=80 status=ok
// SIG undefined FUN_1476374b2(void)

void FUN_1476374b2(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1476377c6(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147637504 FUN_147637504 body=112 status=ok
// SIG undefined FUN_147637504(void)

undefined8 FUN_147637504(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 147637574 FUN_147637574 body=75 status=ok
// SIG undefined FUN_147637574(void)

void FUN_147637574(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  return;
}



// FUNCTION 1476375bf FUN_1476375bf body=180 status=ok
// SIG undefined FUN_1476375bf(void)

undefined8 * FUN_1476375bf(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a4c6980;
  puVar4[2] = &PTR_FUN_14a4c6998;
  param_2 = (longlong *)*param_2;
  puVar4[3] = param_2;
  puVar4[4] = 0;
  puVar4[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar4[4] = local_38;
    puVar4[5] = uStack_30;
  }
  puVar4[8] = *(undefined8 *)(param_1 + 4);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(puVar4 + 6) = *param_1;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar1;
  *(undefined4 *)(puVar4 + 7) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147637676 FUN_147637676 body=29 status=ok
// SIG undefined FUN_147637676(void)

undefined8 FUN_147637676(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147637694 FUN_147637694 body=29 status=ok
// SIG undefined FUN_147637694(void)

undefined8 FUN_147637694(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476376ca FUN_1476376ca body=251 status=ok
// SIG undefined FUN_1476376ca(void)

void FUN_1476376ca(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,5);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_147637712;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_147637712:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar5 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar5 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[4]) goto LAB_1476377a5;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1476377a5:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(*param_3 + 0x10 + lVar5 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476377c6 FUN_1476377c6 body=194 status=ok
// SIG undefined FUN_1476377c6(void)

void FUN_1476377c6(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar5 = 0;
  local_50 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_50 = lVar5;
  }
  local_48 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_48 = lVar5;
  }
  local_40 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_40 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_58 = lVar5;
  }
  FUN_14763788a(param_1,lVar1,lVar4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763788a FUN_14763788a body=202 status=ok
// SIG undefined FUN_14763788a(void)

void FUN_14763788a(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(ushort *)(param_2 + 0xe);
  lVar1 = *param_4;
  if (lVar1 == 0) {
    lVar1 = param_4[1];
    if (lVar1 == 0) {
      lVar1 = param_4[2];
      if (*(ushort *)(param_2 + 0xe) != 0 && lVar1 != 0) {
        uVar2 = 0;
        do {
          FUN_147637b0c(*(undefined8 *)(param_3 + uVar2 * 8),lVar1,param_5);
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0x10;
          param_5 = param_5 + 0x10;
        } while (uVar3 != uVar2);
      }
    }
    else if (uVar3 != 0) {
      uVar2 = 0;
      do {
        FUN_147637a14(*(undefined8 *)(param_3 + uVar2 * 8),*(undefined2 *)(lVar1 + uVar2 * 2),
                      param_5);
        uVar2 = uVar2 + 1;
        param_5 = param_5 + 0x10;
      } while (uVar3 != uVar2);
    }
  }
  else if (uVar3 != 0) {
    uVar2 = 0;
    do {
      FUN_147637954(param_1,*(undefined8 *)(param_3 + uVar2 * 8),*(undefined2 *)(lVar1 + uVar2 * 2),
                    param_5);
      uVar2 = uVar2 + 1;
      param_5 = param_5 + 0x10;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 147637954 FUN_147637954 body=191 status=ok
// SIG undefined FUN_147637954(void)

void FUN_147637954(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_4 + 1);
  lVar1 = (longlong)local_40;
  _Src = (void *)*param_4;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
              (ulonglong)(param_3 & 0xffff) * (longlong)*(int *)(param_1 + 0x14)))
            (param_2,&local_48);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147637a14 FUN_147637a14 body=246 status=ok
// SIG undefined FUN_147637a14(void)

void FUN_147637a14(longlong param_1,ushort param_2,undefined8 *param_3)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  void **ppvVar4;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    iVar2 = local_38;
    pvVar1 = local_40;
    ppvVar4 = (void **)(param_1 + (ulonglong)param_2);
    if (ppvVar4 != &local_40) {
      lVar3 = (longlong)local_38;
      *(int *)(ppvVar4 + 1) = local_38;
      if (local_38 == 0 && *(int *)((longlong)ppvVar4 + 0xc) == 0) {
        *(undefined4 *)((longlong)ppvVar4 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(ppvVar4,local_38);
        if (iVar2 != 0) {
          memcpy(*ppvVar4,pvVar1,lVar3 * 2);
        }
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147637b0c FUN_147637b0c body=168 status=ok
// SIG undefined FUN_147637b0c(void)

void FUN_147637b0c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_147637bb6(*param_2,param_1,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147637bb6 FUN_147637bb6 body=263 status=ok
// SIG undefined FUN_147637bb6(void)

void FUN_147637bb6(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar3 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar3 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
    if (cVar2 != '\0') {
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2,param_3);
      goto LAB_147637c17;
    }
  }
  lVar4 = FUN_14479d2ce(local_30);
  if (lVar4 == 0) {
    lVar4 = FUN_1406f977c(local_60);
    if ((lVar4 != 0) && (local_38 = *(int *)(lVar4 + 0x44) + local_38, local_38 != 0)) {
      iVar1 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(local_38,*param_3,iVar1);
    }
  }
  else {
    FUN_147637cbe(param_2,lVar4,param_3);
  }
LAB_147637c17:
  lVar4 = FUN_14479d2ce(local_28);
  if (lVar4 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar4,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147637cbe FUN_147637cbe body=401 status=ok
// SIG undefined FUN_147637cbe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147637cbe(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147637d5d;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147637d74;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x10) goto LAB_147637e0e;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147637dc5;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147637ddd;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 4);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147637e0a;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_147637e0e:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_147637e38;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147637e54 FUN_147637e54 body=162 status=ok
// SIG undefined FUN_147637e54(void)

undefined8 * FUN_147637e54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  ulonglong *local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  local_1a = *(undefined2 *)param_1;
  local_28 = &local_18;
  local_30 = &local_1a;
  FUN_1447c44f6(param_1 + 3);
  FUN_140dad887((undefined2 *)((longlong)param_1 + 2),param_1 + 3);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147637ef8 FUN_147637ef8 body=543 status=ok
// SIG undefined FUN_147637ef8(void)

int * FUN_147637ef8(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*param_1 == -1) || (cVar4 = FUN_14763816a(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_147637f2c;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x58,0x10);
  FUN_1476381fa(plVar5,param_1,param_7,param_8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_1476381a0(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476382ea;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476380a4;
    }
  }
  else {
LAB_1476380a4:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_147637f2c:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147638118 FUN_147638118 body=80 status=ok
// SIG undefined FUN_147638118(void)

void FUN_147638118(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_147638404(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763816a FUN_14763816a body=53 status=ok
// SIG undefined FUN_14763816a(void)

undefined4 FUN_14763816a(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  lVar4 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar4 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar1 & 0x1f) & 1) != 0);
  }
  return uVar3;
}



// FUNCTION 1476381a0 FUN_1476381a0 body=90 status=ok
// SIG undefined FUN_1476381a0(void)

void FUN_1476381a0(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if (param_1[4] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 1476381fa FUN_1476381fa body=177 status=ok
// SIG undefined FUN_1476381fa(void)

undefined8 *
FUN_1476381fa(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a4c69a0;
  param_1[2] = &PTR_FUN_14a4c69b8;
  param_3 = (longlong *)*param_3;
  uVar4 = *param_4;
  uVar5 = param_4[1];
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48._0_4_ = (undefined4)uVar4;
  local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar5;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
  local_48 = uVar4;
  uStack_40 = uVar5;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3,&local_38);
    param_1[4] = local_38;
    param_1[5] = uStack_30;
  }
  param_1[10] = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 9) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476382ae FUN_1476382ae body=29 status=ok
// SIG undefined FUN_1476382ae(void)

undefined8 FUN_1476382ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476382cc FUN_1476382cc body=29 status=ok
// SIG undefined FUN_1476382cc(void)

undefined8 FUN_1476382cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147638302 FUN_147638302 body=258 status=ok
// SIG undefined FUN_147638302(void)

void FUN_147638302(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,5);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_14763834a;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_14763834a:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar5 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar5 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 3) {
      if (*(ushort *)(param_2 + 0xc) != 0) {
        puVar1 = *(ulonglong **)(param_2 + 0x28);
        lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar1 + 0x1e) == param_1[4]) {
            if (puVar1 == (ulonglong *)0x0) {
              return;
            }
            if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
              return;
            }
            *(int *)(*param_3 + 0x10 + lVar5 * 4) =
                 (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            return;
          }
          puVar1 = puVar1 + 4;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
      return;
    }
  } while( true );
}



// FUNCTION 147638404 FUN_147638404 body=194 status=ok
// SIG undefined FUN_147638404(void)

void FUN_147638404(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar5 = 0;
  local_50 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_50 = lVar5;
  }
  local_48 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_48 = lVar5;
  }
  local_40 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_40 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_58 = lVar5;
  }
  FUN_1476384c8(param_1,lVar1,lVar4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476384c8 FUN_1476384c8 body=79 status=ok
// SIG undefined FUN_1476384c8(void)

void FUN_1476384c8(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_147638740();
      }
    }
    else {
      FUN_14763860a();
    }
    return;
  }
  FUN_147638518();
  return;
}



// FUNCTION 147638518 FUN_147638518 body=241 status=ok
// SIG undefined FUN_147638518(void)

void FUN_147638518(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar2 = 0;
    lVar4 = param_5;
    do {
      uVar3 = (ulonglong)*(ushort *)(param_4 + uVar2 * 2);
      local_78[0] = 0;
      local_78[1] = 0;
      FUN_147638824(*(undefined8 *)(param_3 + uVar2 * 8),
                    (longlong)*(int *)(param_1 + 0x14) * uVar3 + *(longlong *)(param_1 + 8),local_78
                   );
      if (param_5 != 0) {
        FUN_144a787a6((longlong)local_78 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x18) + 2)
                      ,lVar4);
      }
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 + (longlong)*(int *)(param_1 + 0x14) * uVar3))
                (*(undefined8 *)(param_3 + uVar2 * 8),local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar1 != uVar2);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763860a FUN_14763860a body=309 status=ok
// SIG undefined FUN_14763860a(void)

void FUN_14763860a(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void **ppvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_88 = param_1;
  local_80 = param_4;
  if ((ulonglong)uVar1 != 0) {
    uVar3 = 0;
    lVar7 = param_5;
    do {
      uVar4 = (ulonglong)*(ushort *)(local_80 + uVar3 * 2);
      local_78 = (void *)0x0;
      uStack_70 = 0;
      FUN_144a787a6(&local_78,*(longlong *)(param_3 + uVar3 * 8) + uVar4);
      if (param_5 != 0) {
        FUN_144a787a6((longlong)&local_78 +
                      (ulonglong)*(ushort *)(*(longlong *)(local_88 + 0x18) + 2),lVar7);
      }
      _Src = local_78;
      ppvVar5 = (void **)(uVar4 + *(longlong *)(param_3 + uVar3 * 8));
      if (ppvVar5 != &local_78) {
        iVar2 = (int)uStack_70;
        lVar6 = (longlong)(int)uStack_70;
        *(int *)(ppvVar5 + 1) = (int)uStack_70;
        if ((int)uStack_70 == 0 && *(int *)((longlong)ppvVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)ppvVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(ppvVar5,uStack_70 & 0xffffffff);
          if (iVar2 != 0) {
            memcpy(*ppvVar5,_Src,lVar6 * 2);
          }
        }
      }
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar1 != uVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147638740 FUN_147638740 body=227 status=ok
// SIG undefined FUN_147638740(void)

void FUN_147638740(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if (uVar1 != 0) {
    lVar3 = 0;
    lVar4 = param_5;
    do {
      uVar2 = *(undefined8 *)(param_4 + lVar3 * 2);
      local_78[0] = 0;
      local_78[1] = 0;
      FUN_1476388a4(*(undefined8 *)(param_3 + lVar3),uVar2,local_78);
      if (param_5 != 0) {
        FUN_144a787a6((longlong)local_78 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x18) + 2)
                      ,lVar4);
      }
      FUN_147637bb6(uVar2,*(undefined8 *)(param_3 + lVar3),local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar1 * 8 != lVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147638824 FUN_147638824 body=127 status=ok
// SIG undefined FUN_147638824(void)

void FUN_147638824(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_2 + 0x18))(&local_28,param_1);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476388a4 FUN_1476388a4 body=129 status=ok
// SIG undefined FUN_1476388a4(void)

void FUN_1476388a4(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147638926(param_2,&local_28,param_1);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147638926 FUN_147638926 body=122 status=ok
// SIG undefined FUN_147638926(void)

undefined8 * FUN_147638926(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1406f9c46(0,local_58);
  lVar1 = FUN_1406f977c(local_58);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x44) + local_30 != 0)) {
    FUN_144a787a6(param_2);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476389a2 FUN_1476389a2 body=127 status=ok
// SIG undefined FUN_1476389a2(void)

undefined4 * FUN_1476389a2(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147638a22 FUN_147638a22 body=238 status=ok
// SIG undefined FUN_147638a22(void)

void FUN_147638a22(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147638b12 FUN_147638b12 body=622 status=ok
// SIG undefined FUN_147638b12(void)

void FUN_147638b12(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[4]) goto LAB_147638b65;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_147638b65:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_130 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_138 = *puVar9;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_110,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_4) goto LAB_147638bd6;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_147638bd6:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  lVar6 = local_d0;
  lVar7 = local_e8;
  lVar3 = local_100;
  uVar5 = local_138;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar8;
  local_b0 = local_110;
  local_a8 = local_108;
  local_110 = 0;
  local_a0 = local_100;
  local_100 = 0;
  local_98 = local_f8;
  local_90 = local_f0;
  local_f8 = 0;
  local_88 = local_e8;
  local_e8 = 0;
  local_80 = local_e0;
  local_78 = local_d8;
  local_e0 = 0;
  local_70 = local_d0;
  local_d0 = 0;
  local_58 = local_138;
  local_c8 = puVar8;
  local_c0 = iVar2;
  local_b8 = uVar4;
  local_68 = puVar9;
  local_60 = iVar1;
  FUN_1432f59b8();
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  if (lVar3 != 0) {
    local_128 = lVar3;
  }
  if (lVar7 != 0) {
    lStack_120 = lVar7;
  }
  if (lVar6 != 0) {
    local_118 = lVar6;
  }
  local_148 = uVar5;
  FUN_14763788a(local_130,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar4,&local_128);
  FUN_147638d82(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147638d82 FUN_147638d82 body=94 status=ok
// SIG undefined FUN_147638d82(void)

void FUN_147638d82(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147638dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147638de0 FUN_147638de0 body=118 status=ok
// SIG undefined FUN_147638de0(void)

longlong FUN_147638de0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1476389a2();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    *(undefined4 *)(param_1 + 0xec) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147638e58 FUN_147638e58 body=127 status=ok
// SIG undefined FUN_147638e58(void)

undefined4 * FUN_147638e58(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147638ed8 FUN_147638ed8 body=244 status=ok
// SIG undefined FUN_147638ed8(void)

void FUN_147638ed8(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      local_42 = param_1[lVar1];
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if (param_1[4] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[4];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147638fce FUN_147638fce body=654 status=ok
// SIG undefined FUN_147638fce(void)

void FUN_147638fce(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  short local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1476392bc(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_d8,param_4[4]);
  local_44 = param_4[3];
  local_48 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_120,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_48,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_4) goto LAB_147639073;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_147639073:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_b0 = *puVar4;
  local_a8 = local_120;
  local_a0 = local_118;
  local_120 = 0;
  local_98 = (undefined4)local_110;
  uStack_94 = local_110._4_4_;
  uStack_90 = (undefined4)uStack_108;
  uStack_8c = uStack_108._4_4_;
  local_110 = 0;
  uStack_108 = 0;
  local_88 = local_100;
  local_80 = local_f8;
  local_f8 = 0;
  local_78 = local_f0;
  local_70 = local_e8;
  local_f0 = 0;
  local_68 = local_e0;
  local_e0 = 0;
  local_60 = local_d8;
  local_58 = local_d0;
  local_d8 = 0;
  local_50 = local_c8;
  local_c8 = 0;
  local_c0 = puVar4;
  local_b8 = iVar1;
  FUN_1432f59b8();
  if (local_d8 != 0) {
    LOCK();
    *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + -1;
    UNLOCK();
    if (local_d0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_d8 + 8));
    }
  }
  local_138 = 0;
  lStack_130 = 0;
  local_128 = 0;
  if (CONCAT44(uStack_94,local_98) != 0) {
    local_138 = CONCAT44(uStack_94,local_98);
  }
  if (local_80 != 0) {
    lStack_130 = local_80;
  }
  if (local_68 != 0) {
    local_128 = local_68;
  }
  local_148 = local_50;
  FUN_1476384c8(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_b0,
                &local_138);
  FUN_14763925e(&local_c0);
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763925e FUN_14763925e body=94 status=ok
// SIG undefined FUN_14763925e(void)

void FUN_14763925e(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476392ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476392bc FUN_1476392bc body=88 status=ok
// SIG undefined FUN_1476392bc(void)

undefined8 * FUN_1476392bc(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_147639314(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
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



// FUNCTION 147639314 FUN_147639314 body=117 status=ok
// SIG undefined FUN_147639314(void)

longlong * FUN_147639314(longlong *param_1,longlong *param_2,int param_3,int param_4)

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
    param_1[2] = (longlong)param_4 * 0x10 + *param_2;
  }
  return param_1;
}



// FUNCTION 14763938a FUN_14763938a body=146 status=ok
// SIG undefined FUN_14763938a(void)

longlong FUN_14763938a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147638e58();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0xf0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0xf4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0xf8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0xfc) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    *(undefined4 *)(param_1 + 0xec) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763941e FUN_14763941e body=179 status=ok
// SIG undefined FUN_14763941e(void)

undefined8 * FUN_14763941e(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
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
      goto LAB_147639478;
    }
  }
  uVar6 = 0;
LAB_147639478:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1476394d2 FUN_1476394d2 body=184 status=ok
// SIG undefined FUN_1476394d2(void)

void FUN_1476394d2(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763958c FUN_14763958c body=241 status=ok
// SIG undefined FUN_14763958c(void)

undefined8 * FUN_14763958c(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c6a00;
  param_1[0x1b] = &PTR_FUN_14a4c6a48;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763967e FUN_14763967e body=9 status=ok
// SIG undefined FUN_14763967e(void)

void FUN_14763967e(longlong param_1)

{
  FUN_14763a2dc(param_1 + 0x10);
  return;
}



// FUNCTION 147639688 FUN_147639688 body=29 status=ok
// SIG undefined FUN_147639688(void)

undefined8 FUN_147639688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476396a6 FUN_1476396a6 body=38 status=ok
// SIG undefined FUN_1476396a6(void)

undefined8 FUN_1476396a6(undefined8 param_1,int param_2)

{
  FUN_14763a2dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476396f2 FUN_1476396f2 body=85 status=ok
// SIG undefined FUN_1476396f2(void)

void FUN_1476396f2(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_14763a38a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147639748 FUN_147639748 body=1138 status=ok
// SIG undefined FUN_147639748(void)

ulonglong FUN_147639748(longlong param_1,int param_2,char param_3,char param_4)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong unaff_RBP;
  undefined7 uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  byte local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = *(longlong **)(param_1 + 0xb8);
  if (plVar5 != (longlong *)0x0) {
    cVar8 = (**(code **)(*plVar5 + 8))
                      (plVar5,(longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar8 == '\0') goto LAB_1476397bd;
  }
  uVar12 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
      local_88 = *puVar9;
      uStack_84 = puVar9[1];
      uStack_80 = puVar9[2];
      uStack_7c = puVar9[3];
      local_78 = *(longlong *)(puVar9 + 4);
      uVar11 = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      local_70 = puVar9[6];
      local_6c = puVar9[7];
      *(undefined8 *)(puVar9 + 6) = 0;
      local_58 = *(byte *)(puVar9 + 0xc);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_58])(local_68,puVar9 + 8);
      local_50 = *(byte *)(puVar9 + 0xe);
      FUN_1410d7556(param_1 + 0x18,&local_88);
      FUN_14763a414(param_1 + 0x68,param_2);
      uVar4 = *(uint *)(param_1 + 0xa8);
      if (0 < (int)uVar4) {
        uVar11 = 0;
        uVar10 = (ulonglong)uVar4;
        uVar13 = uVar4;
        do {
          uVar10 = uVar10 >> 1;
          uVar14 = (uint)uVar10 + (int)uVar11;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 0x30) < param_2) {
            uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar7 = 1 < uVar13;
          uVar13 = (uint)uVar10;
        } while (bVar7);
      }
      if (((int)uVar11 < (int)uVar4) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 0x30) <= param_2)) {
        FUN_14763a5b2(param_1 + 0xa0,uVar11);
        FUN_14763a62e(param_1 + 0xa0);
      }
      if ((local_50 & 1) != 0) {
        FUN_14763a462(&local_88,&local_78);
      }
LAB_1476399b8:
      (*(code *)(&PTR_LAB_14a4c7e10)[local_58])(local_68);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      unaff_RBP = 0;
      goto LAB_1476397bd;
    }
    unaff_RBP = CONCAT71(uVar12,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40) & 1) == 0)
    goto LAB_1476397bd;
    puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xa8);
    lVar6 = *(longlong *)(param_1 + 0xa0);
    uVar14 = 0;
    uVar13 = uVar4;
    if (0 < (int)uVar4) {
      do {
        uVar2 = (uVar13 >> 1) + uVar14;
        if (*(int *)(lVar6 + (ulonglong)uVar2 * 0x30) < param_2) {
          uVar14 = uVar2 + (uVar13 & 1);
        }
        bVar7 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar7);
    }
    lVar1 = param_1 + 0xa0;
    if ((((int)uVar14 < (int)uVar4) && (*(int *)(lVar6 + (ulonglong)uVar14 * 0x30) <= param_2)) &&
       (lVar6 + (ulonglong)uVar14 * 0x30 != -8)) {
      FUN_14763a462((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68));
      uVar4 = *(uint *)(param_1 + 0xa8);
      uVar11 = 0;
      if (0 < (int)uVar4) {
        uVar10 = (ulonglong)uVar4;
        uVar13 = uVar4;
        do {
          uVar10 = uVar10 >> 1;
          uVar14 = (uint)uVar10 + (int)uVar11;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 0x30) < param_2) {
            uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar7 = 1 < uVar13;
          uVar13 = (uint)uVar10;
        } while (bVar7);
      }
      unaff_RBP = CONCAT71(uVar12,1);
      if (((int)uVar11 < (int)uVar4) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 0x30) <= param_2)) {
        FUN_14763a5b2(lVar1);
        FUN_14763a62e(lVar1);
      }
      goto LAB_1476397bd;
    }
    unaff_RBP = CONCAT71(uVar12,1);
    if (param_4 == '\x01') {
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40);
      if ((bVar3 & 1) == 0) goto LAB_1476397bd;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
      *(byte *)(puVar9 + 0xe) = bVar3 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476397bd;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40);
      if ((bVar3 & 2) == 0) {
        local_88 = *puVar9;
        uStack_84 = puVar9[1];
        uStack_80 = puVar9[2];
        uStack_7c = puVar9[3];
        local_78 = *(longlong *)(puVar9 + 4);
        uVar11 = 0;
        *(undefined8 *)(puVar9 + 4) = 0;
        local_70 = puVar9[6];
        local_6c = puVar9[7];
        *(undefined8 *)(puVar9 + 6) = 0;
        local_58 = *(byte *)(puVar9 + 0xc);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_58])(local_68,puVar9 + 8);
        local_50 = *(byte *)(puVar9 + 0xe);
        FUN_1410d7556(param_1 + 0x18,&local_88);
        FUN_14763a414(param_1 + 0x68,param_2);
        uVar4 = *(uint *)(param_1 + 0xa8);
        if (0 < (int)uVar4) {
          uVar11 = 0;
          uVar10 = (ulonglong)uVar4;
          uVar13 = uVar4;
          do {
            uVar10 = uVar10 >> 1;
            uVar14 = (uint)uVar10 + (int)uVar11;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 0x30) < param_2) {
              uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
            }
            bVar7 = 1 < uVar13;
            uVar13 = (uint)uVar10;
          } while (bVar7);
        }
        if (((int)uVar11 < (int)uVar4) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 0x30) <= param_2)) {
          FUN_14763a5b2(lVar1,uVar11);
          FUN_14763a62e(lVar1);
        }
        if ((local_50 & 1) != 0) {
          FUN_14763a462(&local_88,&local_78);
        }
        goto LAB_1476399b8;
      }
      if ((bVar3 & 1) == 0) goto LAB_1476397bd;
    }
  }
  FUN_14763a462(puVar9,puVar9 + 4);
LAB_1476397bd:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147639bbc FUN_147639bbc body=409 status=ok
// SIG undefined FUN_147639bbc(void)

undefined8 FUN_147639bbc(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_147639c77;
  }
  if (param_3 == '\x01') {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    FUN_14763a414(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x30) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x30) <= param_2)) {
      FUN_14763a5b2(param_1 + 0xa0);
      FUN_14763a62e(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x30) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x30) <= param_2)) {
      FUN_14763a5b2(param_1 + 0xa0);
      FUN_14763a62e(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_147639c77:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147639d60 FUN_147639d60 body=266 status=ok
// SIG undefined FUN_147639d60(void)

void FUN_147639d60(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_14763a6dc(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147639e6c FUN_147639e6c body=628 status=ok
// SIG undefined FUN_147639e6c(void)

void FUN_147639e6c(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  ushort uVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  char *local_98;
  undefined1 local_8c [8];
  int local_84;
  longlong local_80;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_98 = param_2;
  if (uVar3 != 0) {
    lVar1 = param_1 + -0xd8;
    local_a8 = *param_6;
    local_a0 = param_6[1];
    local_b0 = param_6[2];
    param_5 = param_5 + 8;
    uVar8 = 0;
    do {
      local_80 = *(longlong *)(param_4 + uVar8 * 4);
      if ((local_80 != 0) && (cVar4 = FUN_14763aa6c(lVar1,&local_80,param_5), cVar4 != '\0')) {
        FUN_14763a6dc(lVar1,local_8c,&local_80,param_5);
        piVar6 = *(int **)(param_1 + -0x28);
        if (*piVar6 != 0) {
          FUN_140adeba6(piVar6,local_8c);
          piVar6 = *(int **)(param_1 + -0x28);
        }
        lVar5 = FUN_1400e4054(piVar6,local_8c);
        if (lVar5 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT71((int7)((ulonglong)local_8c >> 8),'\x02' - (*(short *)(lVar5 + 0xe) == 0))
          ;
        }
        cVar4 = FUN_14763aaf2(lVar1,local_84,uVar9 & 0xffffffff);
        if (cVar4 == '\0') {
          local_78[2] = 0;
          local_78[3] = 0;
          local_78[0] = 0;
          local_78[1] = 0;
          local_78[4] = 0;
          if (local_a0 == 0) {
            if (local_a8 == 0) {
              if (local_b0 != 0) {
                local_78[2] = *(ulonglong *)(local_b0 + uVar8 * 8);
                local_78[3] = *(longlong *)(local_b0 + 8 + uVar8 * 8);
                uVar7 = local_78[2];
                if (local_78[3] != 0) {
                  LOCK();
                  *(int *)(local_78[3] + 8) = *(int *)(local_78[3] + 8) + 1;
                  UNLOCK();
                  uVar7 = *(ulonglong *)(local_b0 + uVar8 * 8);
                }
                local_78[4] = 2;
                FUN_1476388a4(*(undefined8 *)(param_4 + uVar8 * 4),uVar7);
              }
            }
            else {
              local_78[2] = (longlong)*(int *)(param_1 + 0x24) *
                            (ulonglong)*(ushort *)(local_a8 + uVar8) + *(longlong *)(param_1 + 0x18)
              ;
              FUN_147638824(*(undefined8 *)(param_4 + uVar8 * 4));
            }
          }
          else {
            local_78[2] = (longlong)*(ushort *)(local_a0 + uVar8);
            local_78[4] = 1;
            FUN_144a787a6(local_78,(ulonglong)*(ushort *)(local_a0 + uVar8) +
                                   *(longlong *)(param_4 + uVar8 * 4));
          }
          FUN_14763ab90(lVar1,local_84,uVar9 & 0xffffffff,local_78);
          (*(code *)(&PTR_LAB_14a4c7e10)[local_78[4] & 0xff])(local_78 + 2);
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
        }
        if (*local_98 == '\x01') {
          pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x38 + (longlong)local_84 * 0x40);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      uVar8 = uVar8 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar3 * 2 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763a0e2 FUN_14763a0e2 body=38 status=ok
// SIG undefined FUN_14763a0e2(void)

undefined8 FUN_14763a0e2(undefined8 param_1,int param_2)

{
  FUN_14763a2dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763a108 FUN_14763a108 body=52 status=ok
// SIG undefined FUN_14763a108(void)

void FUN_14763a108(longlong *param_1)

{
  FUN_14763a180();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14763a13c FUN_14763a13c body=67 status=ok
// SIG undefined FUN_14763a13c(void)

void FUN_14763a13c(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14763a180 FUN_14763a180 body=347 status=ok
// SIG undefined FUN_14763a180(void)

void FUN_14763a180(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78 + (longlong)iStack_5c * 0x40;
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar2 + 0x30)])(lVar2 + 0x20);
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763a2dc FUN_14763a2dc body=173 status=ok
// SIG undefined FUN_14763a2dc(void)

void FUN_14763a2dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c6a60;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_14763a13c(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14763a108(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014763a37d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14763a38a FUN_14763a38a body=136 status=ok
// SIG undefined FUN_14763a38a(void)

void FUN_14763a38a(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763a414 FUN_14763a414 body=78 status=ok
// SIG undefined FUN_14763a414(void)

void FUN_14763a414(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 + (longlong)param_2 * 0x40;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + 0x30)])(lVar1 + 0x20);
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_14763a540(param_1,param_2);
  return;
}



// FUNCTION 14763a462 FUN_14763a462 body=163 status=ok
// SIG undefined FUN_14763a462(void)

void FUN_14763a462(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  local_24 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_28);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 0x20) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    if (*(char *)(param_2 + 0x20) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763a540 FUN_14763a540 body=114 status=ok
// SIG undefined FUN_14763a540(void)

void FUN_14763a540(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14763a5b2 FUN_14763a5b2 body=124 status=ok
// SIG undefined FUN_14763a5b2(void)

void FUN_14763a5b2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + (ulonglong)param_2 * 0x30;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + 0x28)])(lVar1 + 0x18);
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_1400020a8();
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar2 + (ulonglong)param_2 * 0x30);
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar3) * 0x30);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 14763a62e FUN_14763a62e body=62 status=ok
// SIG undefined FUN_14763a62e(void)

void FUN_14763a62e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14763a66c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14763a66c FUN_14763a66c body=112 status=ok
// SIG undefined FUN_14763a66c(void)

ulonglong FUN_14763a66c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14763a6a6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_14763a6a6:
  return param_2 & 0xffffffff;
}



// FUNCTION 14763a6dc FUN_14763a6dc body=189 status=ok
// SIG undefined FUN_14763a6dc(void)

longlong FUN_14763a6dc(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_14763a79a(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763a79a FUN_14763a79a body=343 status=ok
// SIG undefined FUN_14763a79a(void)

int * FUN_14763a79a(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  undefined8 *local_78;
  int *piStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58 [2];
  byte local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*(undefined4 *)param_3,*(undefined4 *)((longlong)param_3 + 4));
  uVar2 = param_3[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_78 = (undefined8 *)*param_3;
    piStack_70 = (int *)param_3[1];
    local_48 = 0;
    local_40 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58[0] = 0;
    iVar5 = FUN_14763a8f2(param_1 + 0x68,&local_78);
    *param_2 = iVar5;
    (*(code *)(&PTR_LAB_14a4c7e10)[local_48])(local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_78 = param_3;
    piStack_70 = param_2;
    FUN_140bf3cbe(plVar1,local_7c,&local_78,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763a8f2 FUN_14763a8f2 body=146 status=ok
// SIG undefined FUN_14763a8f2(void)

undefined4 FUN_14763a8f2(undefined8 param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14763a986(param_1,local_30);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *local_28 = *param_2;
  local_28[1] = uVar2;
  local_28[2] = uVar3;
  local_28[3] = uVar4;
  *(undefined8 *)(local_28 + 4) = 0;
  *(undefined8 *)(local_28 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  local_28[6] = param_2[6];
  local_28[7] = param_2[7];
  *(undefined8 *)(param_2 + 6) = 0;
  bVar1 = *(byte *)(param_2 + 0xc);
  *(byte *)(local_28 + 0xc) = bVar1;
  (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[bVar1])(local_28 + 8,param_2 + 8);
  *(undefined1 *)(local_28 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763a986 FUN_14763a986 body=229 status=ok
// SIG undefined FUN_14763a986(void)

int * FUN_14763a986(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14763aa6c FUN_14763aa6c body=132 status=ok
// SIG undefined FUN_14763aa6c(void)

byte FUN_14763aa6c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_14763ac20(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 14763aaf2 FUN_14763aaf2 body=158 status=ok
// SIG undefined FUN_14763aaf2(void)

ulonglong FUN_14763aaf2(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined7 uVar6;
  
  lVar7 = (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x38);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x30) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x30) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x30;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(uVar6,*(undefined1 *)(lVar7 + 0x38));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14763ab90 FUN_14763ab90 body=142 status=ok
// SIG undefined FUN_14763ab90(void)

void FUN_14763ab90(longlong param_1,int param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x68);
  local_14 = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 0x38) & 1) == 0) {
      FUN_14763ad86(lVar1 + 0x10,param_4);
      *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
    }
    else {
      FUN_14763ae50(param_1 + 0xa0,&local_14,param_4);
    }
  }
  else if (param_3 == '\x01') {
    FUN_14763ad86(lVar1 + 0x10,param_4);
    *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 3;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763ac20 FUN_14763ac20 body=189 status=ok
// SIG undefined FUN_14763ac20(void)

longlong FUN_14763ac20(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_14763acde(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763acde FUN_14763acde body=167 status=ok
// SIG undefined FUN_14763acde(void)

undefined4 * FUN_14763acde(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 14763ad86 FUN_14763ad86 body=200 status=ok
// SIG undefined FUN_14763ad86(void)

longlong * FUN_14763ad86(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_2 + 4));
    (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_2 + 4)])
              (&local_58,param_2 + 2);
    local_28 = local_48;
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uVar1 = param_1[4];
    lVar4 = param_1[2];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
    lVar5 = param_1[3];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined4 *)(param_1 + 2) = local_58;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_54;
    *(undefined4 *)(param_1 + 3) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_4c;
    param_1[4] = local_48;
    local_58 = (int)lVar4;
    uStack_54 = uVar2;
    uStack_50 = (int)lVar5;
    uStack_4c = uVar3;
    local_48 = uVar1;
    (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763ae50 FUN_14763ae50 body=301 status=ok
// SIG undefined FUN_14763ae50(void)

void FUN_14763ae50(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar11 = *param_1;
  if ((int)uVar3 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = uVar3;
    do {
      uVar1 = (uVar6 >> 1) + uVar8;
      if (*(int *)(lVar11 + (ulonglong)uVar1 * 0x30) < *param_2) {
        uVar8 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if (((int)uVar8 < (int)uVar3) && (*(int *)(lVar11 + (ulonglong)uVar8 * 0x30) <= *param_2)) {
      piVar10 = (int *)(lVar11 + (ulonglong)uVar8 * 0x30);
      FUN_14763a13c(piVar10,1);
      goto LAB_14763af12;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_14763af7e(param_1,uVar3);
    lVar11 = *param_1;
  }
  lVar5 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar11 + lVar5 + 0x30),(void *)(lVar11 + lVar5),(ulonglong)(uVar3 - uVar8) * 0x30
         );
  piVar10 = (int *)(lVar5 + *param_1);
LAB_14763af12:
  *piVar10 = *param_2;
  *(undefined8 *)(piVar10 + 2) = *param_3;
  *param_3 = 0;
  piVar10[4] = *(int *)(param_3 + 1);
  piVar10[5] = *(int *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  uVar2 = *(undefined1 *)(param_3 + 4);
  puVar7 = param_3 + 2;
  *(undefined1 *)(piVar10 + 10) = uVar2;
  piVar9 = piVar10 + 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    *(undefined8 *)piVar9 = *puVar7;
    return;
  case 1:
    *(undefined2 *)piVar9 = *(undefined2 *)puVar7;
    return;
  case 2:
    *(undefined8 *)piVar9 = *puVar7;
    *(undefined8 *)(piVar10 + 8) = param_3[3];
    *puVar7 = 0;
    param_3[3] = 0;
    return;
  }
}



// FUNCTION 14763af7e FUN_14763af7e body=147 status=ok
// SIG undefined FUN_14763af7e(void)

void FUN_14763af7e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14763b012 FUN_14763b012 body=167 status=ok
// SIG undefined FUN_14763b012(void)

void FUN_14763b012(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14763b08d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14763b08d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14763b08d:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014763b0ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14763b0ba FUN_14763b0ba body=780 status=ok
// SIG undefined FUN_14763b0ba(void)

void FUN_14763b0ba(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte local_191;
  undefined8 *local_190;
  undefined8 *local_178;
  int local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [32];
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_138;
  if (param_4 == 0) goto LAB_14763b113;
  uVar5 = FUN_145990612();
  plVar6 = (longlong *)FUN_144718840(param_4,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_14763b113;
  lVar2 = *(longlong *)(param_4 + 0x28);
  *(undefined4 *)(lVar2 + 0x29c) = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_160 = *param_3;
  uStack_15c = param_3[1];
  iStack_158 = param_3[2];
  uStack_154 = param_3[3];
  local_150 = param_3[4];
  uStack_14c = param_3[5];
  uStack_148 = param_3[6];
  uStack_144 = param_3[7];
  local_110 = (undefined1 *)0x0;
  local_108 = 0x400000000;
  local_140 = uVar5;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    local_140._6_2_ = (undefined2)((ulonglong)uVar5 >> 0x30);
    local_140._0_6_ = CONCAT24(*(undefined2 *)*param_2,(int)uVar5);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_178,&local_160,&local_100);
    uVar12 = local_108;
    if (local_178 != (undefined8 *)0x0) {
      lVar9 = (longlong)(int)local_108;
      uVar7 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar7);
      if (local_108._4_4_ < uVar7) {
        FUN_14476a5c8(local_130,uVar12 & 0xffffffff);
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
        if (local_178 == (undefined8 *)0x0) goto LAB_14763b221;
      }
      else {
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
      }
      LOCK();
      *(int *)(local_178 + 1) = *(int *)(local_178 + 1) + 1;
      UNLOCK();
      if (local_178 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_178 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_178)(local_178,1);
        }
      }
    }
LAB_14763b221:
    if ((int)local_108 != 0) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_130,1);
    }
  }
  if (*(short *)((longlong)param_3 + 0x22) == -1) {
    local_190 = (undefined8 *)0x0;
    local_168 = 0;
  }
  else {
    FUN_14763b3c8(lVar2 + 0x28,&local_178,*(short *)((longlong)param_3 + 0x22),
                  *(undefined2 *)(param_1 + 0x16));
    local_190 = local_178;
    local_191 = local_170 == 1;
  }
  if (0 < iStack_158) {
    lVar9 = 0;
    lVar10 = 0;
    iVar4 = iStack_158;
    do {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        uVar12 = (ulonglong)*(ushort *)(*param_2 + 2);
        lVar11 = uVar12 + local_168;
        if (local_168 == 0) {
          lVar11 = 0;
        }
        lVar3 = *param_6;
        uVar5 = FUN_147546472(&local_100,
                              *(undefined2 *)(CONCAT44(uStack_15c,local_160) + lVar10 * 2),
                              *(undefined8 *)(param_5 + uVar12),lVar11);
        *(undefined8 *)(lVar9 + uVar12 + lVar3) = uVar5;
        iVar4 = iStack_158;
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar10 < iVar4);
  }
  *(undefined4 *)(lVar2 + 0x29c) = 1;
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_190 + 3) = *(int *)(local_190 + 3) + -1;
    UNLOCK();
    if ((local_191 & 1) != 0) {
      ReleaseSRWLockShared((PSRWLOCK)(local_190 + 1));
    }
  }
  FUN_14588b8d6(local_130);
  FUN_1475d7c02(&local_100);
LAB_14763b113:
  if ((local_50 ^ (ulonglong)local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14763b3c8 FUN_14763b3c8 body=185 status=ok
// SIG undefined FUN_14763b3c8(void)

undefined8 * FUN_14763b3c8(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_147639314(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14763b482 FUN_14763b482 body=69 status=ok
// SIG undefined FUN_14763b482(void)

undefined8 * FUN_14763b482(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6ad0;
  FUN_14763b62f(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763b4c8 FUN_14763b4c8 body=152 status=ok
// SIG undefined FUN_14763b4c8(void)

void FUN_14763b4c8(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_14763b660(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763b5a6 FUN_14763b5a6 body=67 status=ok
// SIG undefined FUN_14763b5a6(void)

void FUN_14763b5a6(longlong param_1)

{
  FUN_14763b62f(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_14763ddd6(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14763b5ea FUN_14763b5ea body=69 status=ok
// SIG undefined FUN_14763b5ea(void)

undefined8 * FUN_14763b5ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6ad0;
  FUN_14763b62f(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763b62f FUN_14763b62f body=49 status=ok
// SIG undefined FUN_14763b62f(void)

void FUN_14763b62f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14763b660 FUN_14763b660 body=232 status=ok
// SIG undefined FUN_14763b660(void)

undefined8 * FUN_14763b660(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_14763b74a();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c6af0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14763b74a FUN_14763b74a body=104 status=ok
// SIG undefined FUN_14763b74a(void)

undefined8 FUN_14763b74a(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14763b7b2 FUN_14763b7b2 body=38 status=ok
// SIG undefined FUN_14763b7b2(void)

undefined8 FUN_14763b7b2(undefined8 param_1,int param_2)

{
  FUN_14763b84e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14763b7d8 FUN_14763b7d8 body=118 status=ok
// SIG undefined FUN_14763b7d8(void)

void FUN_14763b7d8(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_14763ba92(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 14763b84e FUN_14763b84e body=71 status=ok
// SIG undefined FUN_14763b84e(void)

void FUN_14763b84e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c6af0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14763b8ca(param_1 + 8);
  FUN_14763b896(param_1 + 1);
  return;
}



// FUNCTION 14763b896 FUN_14763b896 body=52 status=ok
// SIG undefined FUN_14763b896(void)

void FUN_14763b896(longlong *param_1)

{
  FUN_14763b958();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14763b8ca FUN_14763b8ca body=52 status=ok
// SIG undefined FUN_14763b8ca(void)

void FUN_14763b8ca(longlong *param_1)

{
  FUN_14763b8fe();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14763b8fe FUN_14763b8fe body=89 status=ok
// SIG undefined FUN_14763b8fe(void)

void FUN_14763b8fe(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 14763b958 FUN_14763b958 body=312 status=ok
// SIG undefined FUN_14763b958(void)

void FUN_14763b958(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x10) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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


